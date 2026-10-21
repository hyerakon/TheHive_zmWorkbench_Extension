# Convenzione ID — NPC / Quest / Obiettivi

Vale per **tutti** i repository di THE HIVE che usano QuestID (server, TheHive_Core,
TheHive_zmWorkbench_Extension e ogni mod o tool futuro). Copia identica in ogni repository:
se la cambi, aggiornala ovunque.

- **ID < 10000** → quest di servizio (`WXYZ`)
- **ID ≥ 10000** → quest NPC (`ABBCD`)
- **ID `0` vietato** (quest, obiettivi, NPC).

## Quest NPC — `ABBCD`
- **A** = Luogo (1–9) → `1 = S.S. Brena`
- **BB** = NPC giver (01–99; `00` riservato alla Bacheca = NPC base del luogo)
- **C** = Quest dell'NPC (0–9)
- **D** = Obiettivo (0–9)

Esempi
- Luogo Brena / Bacheca della Brena → `10000`
- NPC_3 della Brena → `10300`
- Quest 1 di NPC_3 → `10310` (l'ID quest finisce sempre con 0)
- Obiettivo 3 di quella quest → `10313`

## Quest di servizio — `WXYZ`
- **W** = Scopo
  - 0–2 = Scenari e quest STAFF (`.map`)
  - 3–5 = Achievement JOB & REWARD
  - 6–8 = Achievement Recipe Book/Paper
  - 9 = Infected
- **X** = Sottoscopo (0–9)
- **Y** = Quest (0–9)
- **Z** = Obiettivo (0–9, sequenziali o paralleli)

Sottoscopi proposti
- `3X` = Attivazione Job → 1 Cuoco, 2 Armaiolo, 3 Farmacista
- `4X` = Attività Job (stesso numero del Job)
- `5X` = Reward / leveling skill Terje
- `6X` = Recipe Book
- `7X` = Recipe Paper
- `8X` = Riserva ricette
- `90` = Marinaio infetto

## Regole pratiche
- Gli obiettivi Expansion hanno ID propri per tipo (Travel, Collection, Action…): usare lo stesso schema
  (obiettivo D/Z della quest). Le quest di servizio con un solo obiettivo usano l'ID della quest (es. 3100 / obiettivo Action 3100).
- Nomi file sul server: `QuestNPC_<ID>_<Nome>.json`, `Quest_<ID>_<nome>.json`, `Objectives/<Tipo>/<ID>_<Nome>.json`.
- Ogni ID scritto nel codice (costanti, default di config) va tenuto allineato ai file del server.
- Cambiare un ID già usato fa perdere lo stato delle quest salvato nei PlayerData (`ExpansionMod/Quests/PlayerData/*.bin`):
  farlo insieme a un wipe o azzerare i dati dei tester.
