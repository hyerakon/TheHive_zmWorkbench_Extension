# The Hive — Classname per `types.xml`

> Baseline analizzata: `TheHive_zmWorkbench_Extension.zip`

Sono incluse tutte le nuove classi definite in `CfgVehicles` con **`scope = 1` oppure `scope = 2`**, suddivise per submod.

- `scope = 2`: classe pubblica, normalmente utilizzabile direttamente come oggetto, loot o oggetto editor.
- `scope = 1`: classe protetta/base; inclusa come richiesto, ma da usare nel `types.xml` solo se si vuole davvero generare quella classe direttamente.
- Sono esclusi `scope = 0`, proxy in `CfgNonAIVehicles`, classi vanilla soltanto modificate e dichiarazioni forward.

**Totale individuato: 48 classname — 44 con `scope = 2`, 4 con `scope = 1`.**

## Riepilogo per submod

| Submod | Scope 1 | Scope 2 | Totale |
|---|---:|---:|---:|
| `Laboratory_Bench` | 1 | 7 | 8 |
| `Tecnic_Bench` | 1 | 4 | 5 |
| `TheHive_Custom_Ingredients` | 2 | 33 | 35 |
| `zmWorkbench_Integration` | 0 | 0 | 0 |
| **Totale** | **4** | **44** | **48** |

## Submod: `Laboratory_Bench`

**Totale: 8 classname** (1 scope 1, 7 scope 2).

### Lista rapida

```text
TheHive_CS_LB_Kit_Modular
TheHive_CS_LB_Kit_Locked
TheHive_CS_LB_Bench_Modular
TheHive_CS_LB_Bench_Locked
TheHive_CS_LB_Bench_Public
TH_CS_LB_MortarPestle
TH_CS_LB_Terminal
TH_CS_LB_WaveGenerator
```

### Dettaglio

| Classname | Scope | Categoria | Classe padre | Display name/config key | File sorgente |
|---|---:|---|---|---|---|
| `TheHive_CS_LB_Kit_Modular` | `2` | Kit | `TheHive_CS_LB_KitBox_BASE` | `$STR_TheHive_CS_LB_Kit_Modular` | `Laboratory_Bench/items/kit/config.cpp:148` |
| `TheHive_CS_LB_Kit_Locked` | `2` | Kit | `TheHive_CS_LB_KitBox_BASE` | `$STR_TheHive_CS_LB_Kit_Locked` | `Laboratory_Bench/items/kit/config.cpp:155` |
| `TheHive_CS_LB_Bench_Modular` | `2` | Banco | `TheHive_CS_LB_Bench_BASE` | `$STR_TheHive_CS_LB_Bench_Modular` | `Laboratory_Bench/items/laboratorybench/config.cpp:373` |
| `TheHive_CS_LB_Bench_Locked` | `2` | Banco | `TheHive_CS_LB_Bench_BASE` | `$STR_TheHive_CS_LB_Bench_Locked` | `Laboratory_Bench/items/laboratorybench/config.cpp:393` |
| `TheHive_CS_LB_Bench_Public` | `1` | Banco | `zm_WorkbenchPublic` | `$STR_TheHive_CS_LB_Bench_Public` | `Laboratory_Bench/items/laboratorybench/config.cpp:412` |
| `TH_CS_LB_MortarPestle` | `2` | Modulo | `Inventory_Base` | `$STR_TH_CS_LB_MortarPestle` | `Laboratory_Bench/items/module_mortarpestle/config.cpp:24` |
| `TH_CS_LB_Terminal` | `2` | Modulo | `Inventory_Base` | `$STR_TH_CS_LB_Terminal` | `Laboratory_Bench/items/module_terminal/config.cpp:24` |
| `TH_CS_LB_WaveGenerator` | `2` | Modulo | `Inventory_Base` | `$STR_TH_CS_LB_WaveGenerator` | `Laboratory_Bench/items/module_wavegenerator/config.cpp:24` |

## Submod: `Tecnic_Bench`

**Totale: 5 classname** (1 scope 1, 4 scope 2).

### Lista rapida

```text
TheHive_CS_TB_Kit_Modular
TheHive_CS_TB_Kit_Locked
TheHive_CS_TB_Bench_Modular
TheHive_CS_TB_Bench_Locked
TheHive_CS_TB_Bench_Public
```

### Dettaglio

| Classname | Scope | Categoria | Classe padre | Display name/config key | File sorgente |
|---|---:|---|---|---|---|
| `TheHive_CS_TB_Kit_Modular` | `2` | Kit | `TheHive_CS_TB_KitBox_BASE` | `$STR_TheHive_CS_TB_Kit_Modular` | `Tecnic_Bench/items/kit/config.cpp:148` |
| `TheHive_CS_TB_Kit_Locked` | `2` | Kit | `TheHive_CS_TB_KitBox_BASE` | `$STR_TheHive_CS_TB_Kit_Locked` | `Tecnic_Bench/items/kit/config.cpp:155` |
| `TheHive_CS_TB_Bench_Modular` | `2` | Banco | `TheHive_CS_TB_Bench_BASE` | `$STR_TheHive_CS_TB_Bench_Modular` | `Tecnic_Bench/items/tecnicbenches/config.cpp:318` |
| `TheHive_CS_TB_Bench_Locked` | `2` | Banco | `TheHive_CS_TB_Bench_BASE` | `$STR_TheHive_CS_TB_Bench_Locked` | `Tecnic_Bench/items/tecnicbenches/config.cpp:338` |
| `TheHive_CS_TB_Bench_Public` | `1` | Banco | `zm_WorkbenchPublic` | `$STR_TheHive_CS_TB_Bench_Public` | `Tecnic_Bench/items/tecnicbenches/config.cpp:357` |

## Submod: `TheHive_Custom_Ingredients`

**Totale: 35 classname** (2 scope 1, 33 scope 2).

### Lista rapida

```text
TheHive_CS_BASE
TheHive_CS_SKS
TheHive_CS_Pioneer
TheHive_CS_Aura1
TheHive_CS_Aurax
TheHive_CS_Lemas
TheHive_CS_Lar
TheHive_CS_Kam
TheHive_CS_Ka101
TheHive_CS_Ka74
TheHive_CS_Ka74u
TheHive_CS_M16
TheHive_CS_M4a1
TheHive_CS_Sv98
TheHive_CS_Asval
TheHive_CS_Dmr
TheHive_CS_M70
TheHive_CS_Vsd
TheHive_CS_Vss
TheHive_CS_Cr550
TheHive_CS_G36
TheHive_CS_Mosin9130
TheHive_CS_Bizon
TheHive_CS_Vaiga
TheHive_CS_Vikhr
TheHive_CS_M79
TheHive_CS_RPG
TheHive_CS_Law
TheHive_CS_Supply_BASE
TheHive_CS_Supply_Food
TheHive_CS_Supply_Lab
TheHive_CS_Supply_Tec
TheHive_CS_Engineer_Device
TheHive_CS_Security_Device
TheHive_CS_Medic_Device
```

### Dettaglio

| Classname | Scope | Categoria | Classe padre | Display name/config key | File sorgente |
|---|---:|---|---|---|---|
| `TheHive_CS_BASE` | `1` | Pacco armi / base | `SmallProtectorCase` | `$STR_THEHIVE_WEAPON_PACKAGE` | `TheHive_Custom_Ingredients/config.cpp:48` |
| `TheHive_CS_SKS` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_SKS` | `TheHive_Custom_Ingredients/config.cpp:158` |
| `TheHive_CS_Pioneer` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_SCOUT` | `TheHive_Custom_Ingredients/config.cpp:165` |
| `TheHive_CS_Aura1` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_AUG` | `TheHive_Custom_Ingredients/config.cpp:172` |
| `TheHive_CS_Aurax` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_AUGX` | `TheHive_Custom_Ingredients/config.cpp:179` |
| `TheHive_CS_Lemas` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_FAMAS` | `TheHive_Custom_Ingredients/config.cpp:186` |
| `TheHive_CS_Lar` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_FAL0` | `TheHive_Custom_Ingredients/config.cpp:193` |
| `TheHive_CS_Kam` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_AKM` | `TheHive_Custom_Ingredients/config.cpp:200` |
| `TheHive_CS_Ka101` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_AK101` | `TheHive_Custom_Ingredients/config.cpp:207` |
| `TheHive_CS_Ka74` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_AK74` | `TheHive_Custom_Ingredients/config.cpp:214` |
| `TheHive_CS_Ka74u` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_AK74U` | `TheHive_Custom_Ingredients/config.cpp:221` |
| `TheHive_CS_M16` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_M16A2` | `TheHive_Custom_Ingredients/config.cpp:228` |
| `TheHive_CS_M4a1` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_M4A1` | `TheHive_Custom_Ingredients/config.cpp:235` |
| `TheHive_CS_Sv98` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_SV98` | `TheHive_Custom_Ingredients/config.cpp:242` |
| `TheHive_CS_Asval` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_ASVAL` | `TheHive_Custom_Ingredients/config.cpp:249` |
| `TheHive_CS_Dmr` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_M14` | `TheHive_Custom_Ingredients/config.cpp:256` |
| `TheHive_CS_M70` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_WIN70` | `TheHive_Custom_Ingredients/config.cpp:263` |
| `TheHive_CS_Vsd` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_SVD` | `TheHive_Custom_Ingredients/config.cpp:270` |
| `TheHive_CS_Vss` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_VSS` | `TheHive_Custom_Ingredients/config.cpp:277` |
| `TheHive_CS_Cr550` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_CZ550` | `TheHive_Custom_Ingredients/config.cpp:284` |
| `TheHive_CS_G36` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_G36` | `TheHive_Custom_Ingredients/config.cpp:291` |
| `TheHive_CS_Mosin9130` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_MOSIN` | `TheHive_Custom_Ingredients/config.cpp:298` |
| `TheHive_CS_Bizon` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_PP19` | `TheHive_Custom_Ingredients/config.cpp:305` |
| `TheHive_CS_Vaiga` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_SAIGA` | `TheHive_Custom_Ingredients/config.cpp:312` |
| `TheHive_CS_Vikhr` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_VIKHR` | `TheHive_Custom_Ingredients/config.cpp:319` |
| `TheHive_CS_M79` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_M79` | `TheHive_Custom_Ingredients/config.cpp:326` |
| `TheHive_CS_RPG` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_RPG7` | `TheHive_Custom_Ingredients/config.cpp:333` |
| `TheHive_CS_Law` | `2` | Pacco armi / base | `TheHive_CS_BASE` | `$STR_THEHIVE_WEAPON_PACKAGE_LAW` | `TheHive_Custom_Ingredients/config.cpp:340` |
| `TheHive_CS_Supply_BASE` | `1` | Rifornimenti / base | `SmallProtectorCase` | `$STR_CfgVehicles_SmallProtectorCase0` | `TheHive_Custom_Ingredients/config.cpp:350` |
| `TheHive_CS_Supply_Food` | `2` | Rifornimenti / base | `TheHive_CS_Supply_BASE` | `$STR_THEHIVE_CS_SUPPLY_FOOD` | `TheHive_Custom_Ingredients/config.cpp:464` |
| `TheHive_CS_Supply_Lab` | `2` | Rifornimenti / base | `TheHive_CS_Supply_BASE` | `$STR_THEHIVE_CS_SUPPLY_LAB` | `TheHive_Custom_Ingredients/config.cpp:572` |
| `TheHive_CS_Supply_Tec` | `2` | Rifornimenti / base | `TheHive_CS_Supply_BASE` | `$STR_THEHIVE_CS_SUPPLY_TEC` | `TheHive_Custom_Ingredients/config.cpp:680` |
| `TheHive_CS_Engineer_Device` | `2` | Dispositivo di reparto | `TheHive_CS_Craft_Tool_BASE` | `#STR_TheHive_CS_ENGINEER_DEVICE` | `TheHive_Custom_Ingredients/config.cpp:802` |
| `TheHive_CS_Security_Device` | `2` | Dispositivo di reparto | `TheHive_CS_Craft_Tool_BASE` | `#STR_TheHive_CS_SECURITY_DEVICE` | `TheHive_Custom_Ingredients/config.cpp:821` |
| `TheHive_CS_Medic_Device` | `2` | Dispositivo di reparto | `TheHive_CS_Craft_Tool_BASE` | `#STR_TheHive_CS_MEDIC_DEVICE` | `TheHive_Custom_Ingredients/config.cpp:840` |

## Submod: `zmWorkbench_Integration`

Nessuna nuova classe `CfgVehicles` con `scope = 1` o `scope = 2`. Il submod definisce soltanto la classe comune `TheHive_CS_Bench_BASE` con `scope = 0`, quindi non produce una voce utilizzabile nel `types.xml`.

## Moduli e slot per `recipe.json`

Il campo `required_attachments` delle ricette usa **i nomi degli slot**, non i classname degli oggetti montati.

Esempio corretto:

```json
"required_attachments": [
    "terminal",
    "mortarpestle"
]
```

Esempio errato:

```json
"required_attachments": [
    "TH_CS_LB_Terminal",
    "TH_CS_LB_MortarPestle"
]
```

Il controllo delle ricette confronta infatti i valori di `required_attachments` con gli slot restituiti da `GetAttachedModules()`. I classname sono usati soltanto per creare l'anteprima grafica del modulo nell'interfaccia.

### Moduli del `Laboratory_Bench`

| Modulo | Classname oggetto | Slot da usare nel `recipe.json` | Banco compatibile | Scope | File sorgente |
|---|---|---|---|---:|---|
| Terminale | `TH_CS_LB_Terminal` | `terminal` | `TheHive_CS_LB_Bench_Modular`, `TheHive_CS_LB_Bench_Locked`, `TheHive_CS_LB_Bench_Public` | `2` | `Laboratory_Bench/items/module_terminal/config.cpp:25-34` |
| Generatore di forme d'onda | `TH_CS_LB_WaveGenerator` | `wavegenerator` | `TheHive_CS_LB_Bench_Modular`, `TheHive_CS_LB_Bench_Locked`, `TheHive_CS_LB_Bench_Public` | `2` | `Laboratory_Bench/items/module_wavegenerator/config.cpp:25-34` |
| Mortaio e pestello | `TH_CS_LB_MortarPestle` | `mortarpestle` | `TheHive_CS_LB_Bench_Modular`, `TheHive_CS_LB_Bench_Locked`, `TheHive_CS_LB_Bench_Public` | `2` | `Laboratory_Bench/items/module_mortarpestle/config.cpp:25-34` |

Gli slot disponibili sul Laboratory Bench sono dichiarati in `Laboratory_Bench/items/laboratorybench/config.cpp:61-65`.

### Moduli del `Tecnic_Bench`

Questi moduli appartengono alla mod core **zmWorkbench**. L'estensione li utilizza e ne mappa esplicitamente classname e slot, ma non ne ridefinisce le classi.

| Modulo | Classname oggetto | Slot da usare nel `recipe.json` | Banco compatibile | Provenienza |
|---|---|---|---|---|
| Trapano a colonna | `zm_DrillPress` | `drillpress` | `TheHive_CS_TB_Bench_Modular`, `TheHive_CS_TB_Bench_Locked`, `TheHive_CS_TB_Bench_Public` | zmWorkbench core |
| Smerigliatrice | `zm_Grinder` | `grinder` | `TheHive_CS_TB_Bench_Modular`, `TheHive_CS_TB_Bench_Locked`, `TheHive_CS_TB_Bench_Public` | zmWorkbench core |
| Morsa | `zm_Vice` | `vice` | `TheHive_CS_TB_Bench_Modular`, `TheHive_CS_TB_Bench_Locked`, `TheHive_CS_TB_Bench_Public` | zmWorkbench core |
| Saldatore a stagno | `zm_Soldering` | `soldering` | `TheHive_CS_TB_Bench_Modular`, `TheHive_CS_TB_Bench_Locked`, `TheHive_CS_TB_Bench_Public` | zmWorkbench core |
| Modulo di saldatura | `zm_Welding` | `welding` | `TheHive_CS_TB_Bench_Modular`, `TheHive_CS_TB_Bench_Locked`, `TheHive_CS_TB_Bench_Public` | zmWorkbench core |
| Modulo da cucito | `zm_Sewing` | `sewing` | `TheHive_CS_TB_Bench_Modular`, `TheHive_CS_TB_Bench_Locked`, `TheHive_CS_TB_Bench_Public` | zmWorkbench core |

Gli slot disponibili sul Tecnic Bench sono dichiarati in `Tecnic_Bench/items/tecnicbenches/config.cpp:61-68`. La corrispondenza fra slot e classname è definita in `zmWorkbench_Integration/Scripts/5_Mission/GUI/TH_WorkbenchMenu.c:599-611`.

### Lista rapida degli slot ammessi

```text
# Tecnic Bench
drillpress
grinder
vice
soldering
welding
sewing

# Laboratory Bench
terminal
wavegenerator
mortarpestle
```

### Esempi pronti per le ricette

Ricetta che richiede trapano e morsa:

```json
"required_attachments": [
    "drillpress",
    "vice"
]
```

Ricetta che richiede terminale e generatore di forme d'onda:

```json
"required_attachments": [
    "terminal",
    "wavegenerator"
]
```

Ricetta senza moduli obbligatori:

```json
"required_attachments": []
```

### Comportamento dei banchi pubblici

Le classi `TheHive_CS_LB_Bench_Public` e `TheHive_CS_TB_Bench_Public` ereditano da `zm_WorkbenchPublic`. Nell'interfaccia delle ricette un banco pubblico considera automaticamente soddisfatti i requisiti dei moduli, anche se il modulo non è fisicamente montato.

Di conseguenza:

- `allow_public = 1` permette alla ricetta di essere usata sul banco pubblico secondo la logica della mod;
- su un banco modulare o locked il modulo deve essere realmente presente nello slot corretto;
- assegnare a una ricetta del Laboratory Bench uno slot tecnico, o viceversa, rende il requisito impossibile da soddisfare sui banchi modulari perché quello slot non è presente nel relativo `attachments[]`;
- i valori vanno mantenuti in minuscolo, come vengono generati anche dall'editor amministrativo delle ricette.

### Tabella compatta per copia rapida

| `required_attachments` | Classname associato | Submod/banco |
|---|---|---|
| `drillpress` | `zm_DrillPress` | `Tecnic_Bench` |
| `grinder` | `zm_Grinder` | `Tecnic_Bench` |
| `vice` | `zm_Vice` | `Tecnic_Bench` |
| `soldering` | `zm_Soldering` | `Tecnic_Bench` |
| `welding` | `zm_Welding` | `Tecnic_Bench` |
| `sewing` | `zm_Sewing` | `Tecnic_Bench` |
| `terminal` | `TH_CS_LB_Terminal` | `Laboratory_Bench` |
| `wavegenerator` | `TH_CS_LB_WaveGenerator` | `Laboratory_Bench` |
| `mortarpestle` | `TH_CS_LB_MortarPestle` | `Laboratory_Bench` |

## Classi `scope = 1` da trattare con cautela

Queste classi sono incluse perché richiesto, ma sono classi protette o base. Inserirle nel `types.xml` può generare direttamente un oggetto pensato soprattutto per essere ereditato da altre classi.

| Classname | Submod | Ruolo |
|---|---|---|
| `TheHive_CS_LB_Bench_Public` | `Laboratory_Bench` | Variante pubblica/protetta del Laboratory Bench. |
| `TheHive_CS_TB_Bench_Public` | `Tecnic_Bench` | Variante pubblica/protetta del Tecnic Bench. |
| `TheHive_CS_BASE` | `TheHive_Custom_Ingredients` | Classe base dei pacchi arma. |
| `TheHive_CS_Supply_BASE` | `TheHive_Custom_Ingredients` | Classe base dei pacchi rifornimento. |

## Classi escluse intenzionalmente

### Classi della mod con `scope = 0`

```text
TheHive_CS_LB_KitBox_BASE
TheHive_CS_LB_Bench_BASE
TheHive_CS_TB_KitBox_BASE
TheHive_CS_TB_Bench_BASE
TheHive_CS_Craft_Tool_BASE
TheHive_CS_Bench_BASE
```

### Classi vanilla soltanto modificate

Questi classname ricevono slot aggiuntivi dalla mod, ma non sono nuovi oggetti della mod e non devono essere duplicati nel suo `types.xml` se sono già gestiti dal types vanilla o da quello della mod proprietaria.

```text
PainkillerTablets
CharcoalTablets
TetracyclineAntibiotics
ChelatingTablets
VitaminBottle
PurificationTablets
IodineTincture
DisinfectantSpray
DisinfectantAlcohol
Morphine
Epinephrine
AntiChemInjector
BandageDressing
BloodBagEmpty
BloodBagFull
BloodBagIV
SalineBag
SalineBagIV
StartKitIV
TerjeAmpouleBase
TerjeSyringeEmpty
WoodenCrate
Pliers
```

### Proxy esclusi

Le classi `Proxy...` definite in `CfgNonAIVehicles` servono al modello e agli attachment. Anche quando hanno `scope = 2`, non sono oggetti da inserire nel `types.xml`.

## Indicazioni pratiche per il `types.xml`

- I kit, i moduli, i pacchi e i dispositivi `scope = 2` possono essere gestiti come normali oggetti del Central Economy.
- I banchi già assemblati possono essere dichiarati con `nominal = 0` se vengono piazzati dall’editor o generati tramite kit.
- Le quattro classi `scope = 1` sono presenti nell’elenco, ma non andrebbero distribuite automaticamente senza prima verificarne comportamento, cargo e script associati.
- Il classname valido è sempre il nome dopo `class`. Per esempio, il pacco DMR è `TheHive_CS_Dmr`, indipendentemente da eventuali proprietà interne chiamate `name`.

### Scheletro di una voce

```xml
<type name="CLASSNAME">
    <nominal>0</nominal>
    <lifetime>14400</lifetime>
    <restock>0</restock>
    <min>0</min>
    <quantmin>-1</quantmin>
    <quantmax>-1</quantmax>
    <cost>100</cost>
    <flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="0" deloot="0"/>
    <category name="tools"/>
</type>
```

> Valori, categorie e quantità sono segnaposto. Il Central Economy non legge nel pensiero, anche se a volte sembra vendicarsi come se lo facesse.
