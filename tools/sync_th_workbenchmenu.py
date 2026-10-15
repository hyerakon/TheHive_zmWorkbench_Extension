#!/usr/bin/env python3
"""
Rigenera zmWorkbench_Integration/Scripts/5_Mission/GUI/TH_WorkbenchMenu.c
partendo dalla WorkbenchMenu.c ATTUALE della WorkbenchMod.

Perche': la WorkbenchMod non offre un punto in cui aggiungere moduli, le liste
sono scritte dentro i metodi. L'estensione quindi deve sovrascrivere quei metodi
interi. Invece di mantenerli a mano (e restare indietro ad ogni aggiornamento),
questo script li copia dalla base e inserisce solo le aggiunte TH, che leggono
tutte da TH_WB_Modules (3_Game).

Uso (dalla cartella del workspace, es. P:\\):
    python TheHive_zmWorkbench_Extension/tools/sync_th_workbenchmenu.py
Opzioni:
    --base  percorso di WorkbenchMenu.c della WorkbenchMod
    --out   percorso del file TH da scrivere

Se un punto di aggancio non viene trovato (la base e' cambiata in quel punto)
lo script si ferma con un errore e NON scrive nulla: va guardato a mano.
"""
import argparse
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
EXT_ROOT = os.path.dirname(HERE)
WS_ROOT = os.path.dirname(EXT_ROOT)
DEFAULT_BASE = os.path.join(WS_ROOT, "WorkbenchMod", "Scripts", "5_Mission", "GUI", "WorkbenchMenu.c")
DEFAULT_OUT = os.path.join(EXT_ROOT, "zmWorkbench_Integration", "Scripts", "5_Mission", "GUI", "TH_WorkbenchMenu.c")

METHODS = ["Init", "ShowModuleTooltip", "UpdateModuleDisplay", "UpdateRequirements"]


def find_block_end(src, open_idx):
    """Indice subito dopo la '}' che chiude la '{' in open_idx (salta stringhe e commenti)."""
    depth = 0
    i = open_idx
    n = len(src)
    while i < n:
        c = src[i]
        if c == '"':
            i += 1
            while i < n and src[i] != '"':
                if src[i] == '\\':
                    i += 1
                i += 1
        elif src.startswith("//", i):
            i = src.find("\n", i)
            if i == -1:
                return n
        elif src.startswith("/*", i):
            i = src.find("*/", i) + 1
        elif c == "{":
            depth += 1
        elif c == "}":
            depth -= 1
            if depth == 0:
                return i + 1
        i += 1
    raise SystemExit("ERRORE: parentesi non bilanciate")


def extract_method(src, name):
    pattern = re.compile(r"^[ \t]*(?:override\s+)?[\w<>, ]+?\s+" + name + r"\s*\([^)]*\)\s*\{", re.M)
    matches = list(pattern.finditer(src))
    if len(matches) != 1:
        raise SystemExit("ERRORE: metodo %s trovato %d volte nella base" % (name, len(matches)))
    m = matches[0]
    end = find_block_end(src, m.end() - 1)
    return src[m.start():end]


def make_override(method):
    first, rest = method.split("\n", 1)
    if "override" not in first:
        first = re.sub(r"^([ \t]*)", r"\1override ", first, count=1)
    return first + "\n" + rest


def insert_after(text, anchor, block, method):
    count = text.count(anchor)
    if count != 1:
        raise SystemExit("ERRORE in %s: punto di aggancio trovato %d volte:\n  %s" % (method, count, anchor))
    idx = text.index(anchor)
    line_start = text.rfind("\n", 0, idx) + 1
    indent = re.match(r"[ \t]*", text[line_start:]).group(0)
    line_end = text.index("\n", idx)
    lines = "".join(indent + l + "\n" if l else "\n" for l in block)
    return text[:line_end + 1] + lines + text[line_end + 1:]


def replace_all(text, old, new, method):
    if old not in text:
        raise SystemExit("ERRORE in %s: testo da sostituire non trovato:\n  %s" % (method, old))
    return text.replace(old, new)


def patch(name, body):
    if name == "Init":
        # Layout del menu dell'estensione al posto di quello base
        body = replace_all(body, "WorkbenchConstants.LAYOUT_MAIN", "WorkbenchConstants.TH_LAYOUT_MAIN", name)
    elif name == "ShowModuleTooltip":
        body = insert_after(body, "array<string> moduleClassNames = {", [
            "// TH: moduli dell'estensione (stesso ordine di UpdateModuleDisplay)",
            "moduleClassNames.InsertAll(TH_WB_Modules.GetClassnames());",
        ], name)
    elif name == "UpdateModuleDisplay":
        body = insert_after(body, 'moduleDisplayNames.Insert("Sewing");', [
            "",
            "// TH: moduli dell'estensione (stesso ordine nei tre elenchi)",
            "allModuleTypes.InsertAll(TH_WB_Modules.GetClassnames());",
            "moduleSlotNames.InsertAll(TH_WB_Modules.GetSlots());",
            "moduleDisplayNames.InsertAll(TH_WB_Modules.GetDisplayNames());",
        ], name)
    elif name == "UpdateRequirements":
        if "thModSlots" in body or "thModIdx" in body:
            raise SystemExit("ERRORE: nomi variabili TH gia' usati nella base")
        body = insert_after(body, 'moduleClasses.Insert("sewing", "zm_Sewing");', [
            "",
            "// TH: mappatura slot -> classe dei moduli dell'estensione",
            "array<string> thModSlots = TH_WB_Modules.GetSlots();",
            "array<string> thModClasses = TH_WB_Modules.GetClassnames();",
            "for (int thModIdx = 0; thModIdx < thModSlots.Count(); thModIdx++) {",
            "    moduleClasses.Insert(thModSlots.Get(thModIdx), thModClasses.Get(thModIdx));",
            "}",
        ], name)
    return body


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--base", default=DEFAULT_BASE)
    ap.add_argument("--out", default=DEFAULT_OUT)
    args = ap.parse_args()

    with open(args.base, encoding="utf-8") as f:
        src = f.read().replace("\r\n", "\n")

    parts = []
    for name in METHODS:
        parts.append(patch(name, make_override(extract_method(src, name))))

    header = (
        "// FILE GENERATO da tools/sync_th_workbenchmenu.py - non modificare a mano.\n"
        "// Metodi copiati dalla WorkbenchMenu.c della WorkbenchMod con le sole aggiunte TH\n"
        "// (layout TH_LAYOUT_MAIN e moduli da TH_WB_Modules). Dopo un aggiornamento della\n"
        "// WorkbenchMod rilanciare lo script.\n"
        "modded class WorkbenchMenu extends UIScriptedMenu\n{\n"
    )
    out = header + "\n\n".join(parts) + "\n};\n"
    with open(args.out, "w", encoding="utf-8", newline="\n") as f:
        f.write(out)
    print("Scritto %s (%d righe)" % (args.out, out.count("\n")))


if __name__ == "__main__":
    main()
