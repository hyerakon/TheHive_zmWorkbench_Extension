# The Hive - zmWorkbench Extension

Custom crafting and progression extension developed exclusively for **The Hive - Hashima RP**, built on top of the original **zmWorkbench** framework.

This repository extends the base workbench system with dedicated Technical, Laboratory and Cooking benches, custom module requirements, deployment kits, workbench UI adaptations, custom crafting components, weapon component packages, department devices and server-specific progression hooks.

> **Project scope:** this is not a standalone replacement for zmWorkbench. It is a server-specific extension used by The Hive - Hashima RP.

---

## Table of Contents

- [Overview](#overview)
- [Dependencies](#dependencies)
- [Repository Structure](#repository-structure)
- [Core Workbench Integration](#core-workbench-integration)
- [Workbench Families](#workbench-families)
  - [Technical Workbench](#technical-workbench)
  - [Laboratory Workbench](#laboratory-workbench)
  - [Cooking Workbench](#cooking-workbench)
- [Workbench Variants](#workbench-variants)
- [Modules and Recipe Requirements](#modules-and-recipe-requirements)
- [Deployment and Dismantling](#deployment-and-dismantling)
- [Custom Workbench UI](#custom-workbench-ui)
- [Custom Crafting Components](#custom-crafting-components)
- [Workbench Consumable Improvements](#workbench-consumable-improvements)
- [Localization](#localization)
- [Important Classnames](#important-classnames)
- [Recipe JSON Notes](#recipe-json-notes)
- [Current Implementation Notes](#current-implementation-notes)
- [Credits](#credits)
- [Usage and Ownership](#usage-and-ownership)

---

## Overview

**The Hive - zmWorkbench Extension** expands the original zmWorkbench crafting framework for the progression systems used by The Hive - Hashima RP.

The current source contains five main functional areas:

1. **zmWorkbench Integration**
   - Common The Hive workbench base class.
   - Additional module detection.
   - Custom workbench menu/layout integration.
   - Stack/quantity fixes for original zmWorkbench consumables.

2. **Technical Workbench**
   - Dedicated The Hive technical workbench model and inventory layout.
   - Support for the original zmWorkbench engineering modules.
   - Dedicated tool, material, spray-can and storage attachment groups.
   - Modular, locked and public variants.

3. **Laboratory Workbench**
   - Dedicated medical/scientific crafting station.
   - Laboratory-specific modules.
   - Medical supply, blood supply, medicine, ampoule and First Aid Kit storage.
   - Interactive terminal system.
   - Modular, locked and public variants.

4. **Cooking Workbench**
   - Dedicated food-processing and cooking station.
   - Scale, still and stove modules.
   - Gas-canister-based power system.
   - Food, cooking equipment, ingredient and carcass/fish attachment storage.
   - Custom ingredient counting and consumption logic.
   - Modular, locked and public variants.

5. **Custom Crafting Components**
   - Weapon component packages.
   - Food, laboratory and technical supply packages.
   - Department-specific crafting devices.
   - Integration items used by The Hive crafting/progression economy.


---

## Dependencies

### Workshop-level dependencies

The Steam Workshop package currently relies on:

- **zmWorkbench**
- **DayZ Expansion Bundle**
- **Terje Core**
- **Terje Medicine**

The original zmWorkbench package is the foundation of this extension and must be loaded before it.

Original zmWorkbench Workshop ID:

```text
3643931184
```

### Source-level dependencies

Individual PBO/config sections reference additional addon classes, including:

```text
DZ_Data
DZ_Scripts
DZ_Gear_Consumables
DZ_Gear_Camping
DZ_Gear_Cooking
DayZExpansion_Core_Objects_CircuitBoard
WorkbenchMod
zm_Workbench
TerjeCore
TerjeMedicine
TerjeRadiation
```


---

## Repository Structure

```text
TheHive_zmWorkbench_Extension/
├── Coocking_Bench/
│   ├── items/
│   │   ├── cookingbench/
│   │   ├── kit/
│   │   ├── module_scale/
│   │   ├── module_still/
│   │   └── module_stove/
│   ├── proxies/
│   ├── Scripts/
│   └── languagecore/
│
├── Laboratory_Bench/
│   ├── items/
│   │   ├── laboratorybench/
│   │   ├── kit/
│   │   ├── module_terminal/
│   │   ├── module_wavegenerator/
│   │   ├── module_microscope/
│   │   ├── module_condenser/
│   │   └── module_mortarpestle/
│   ├── proxies/
│   ├── Scripts/
│   └── languagecore/
│
├── Tecnic_Bench/
│   ├── items/
│   │   ├── tecnicbenches/
│   │   └── kit/
│   ├── proxies/
│   ├── Scripts/
│   └── languagecore/
│
├── TheHive_Custom_Ingredients/
│   ├── Scripts/
│   ├── textures/
│   └── languagecore/
│
├── zmWorkbench_Integration/
│   ├── Scripts/
│   │   ├── 3_Game/
│   │   ├── 4_World/
│   │   └── 5_Mission/
│   └── languagecore/
│
```

> Note: the source folder is intentionally named `Coocking_Bench`. Existing config/model paths reference that spelling. Renaming it without updating every path will break resources.

---

# Core Workbench Integration

## Common The Hive Workbench Base

The extension defines:

```text
TH_CS_Bench_BASE
```

which extends the modular workbench class supplied by zmWorkbench.

Its main role is to provide a common workbench base that can detect both original zmWorkbench modules and The Hive-specific modules.

### Module slots detected by the common base

Original zmWorkbench modules:

```text
drillpress
grinder
vice
soldering
welding
sewing
```

Laboratory modules:

```text
terminal
mortarpestle
microscope
condenser
```

Cooking modules:

```text
scale
still
stove
```

These slot names are important because recipes use **slot identifiers**, not module classnames, inside `required_attachments`.

---

# Workbench Families

## Technical Workbench

The Technical Workbench is the engineering/manufacturing branch of the system.

### Primary classes

```text
TH_CS_TB_Bench_BASE
TH_CS_TB_Bench_Modular
TH_CS_TB_Bench_Locked
TH_CS_TB_Bench_Public
```

Deployment kits:

```text
TH_CS_TB_Kit_Modular
TH_CS_TB_Kit_Locked
```

### Supported engineering modules

The Technical Workbench reuses the original zmWorkbench module set:

```text
drillpress
grinder
vice
soldering
welding
sewing
```

Associated original module classes include:

```text
zm_DrillPress
zm_Grinder
zm_Vice
zm_Soldering
zm_Welding
zm_Sewing
```

### Inventory organization

The Technical Workbench defines dedicated attachment groups for:

- Power batteries.
- Hand tools.
- Pliers and screwdrivers.
- Spray cans.
- Engineering modules.
- Metal and wooden materials.
- Nails and metal wire.
- Internal workbench storage.
- Output storage.
- Dedicated wooden crate storage.

The base Technical Workbench currently defines **39 attachment slots** plus a `10 x 15` main cargo area.

---

## Laboratory Workbench

The Laboratory Workbench is the medical/scientific crafting branch.

### Primary classes

```text
TH_CS_LB_Bench_BASE
TH_CS_LB_Bench_Modular
TH_CS_LB_Bench_Locked
TH_CS_LB_Bench_Public
```

Deployment kits:

```text
TH_CS_LB_Kit_Modular
TH_CS_LB_Kit_Locked
```

### Active Laboratory modules

```text
terminal
mortarpestle
microscope
condenser
```

Associated classes:

```text
TH_CS_LB_Terminal
TH_CS_LB_Mortar
TH_CS_LB_Microscope
TH_CS_LB_Condenser
```

The Mortar module also supports its dedicated Pestle:

```text
TH_CS_LB_Pestle
```

### Scientific Terminal

The Laboratory Bench has a dedicated workbench-open action.

If a Terminal is installed, the crafting interface can only be opened while the terminal monitor is active.

The terminal:

- Has a synchronized ON/OFF state.
- Uses separate textures/materials for the active and inactive monitor.
- Can be toggled through the interaction action.
- Synchronizes its state to clients.

The action text is localized as:

```text
Log In / Log Out
```

The current action condition itself does **not** enforce a medical job, faction or quest requirement. Comments in the source indicate that such a restriction may be added later.

### Laboratory storage

The Laboratory Bench contains dedicated storage groups for:

- Batteries / power.
- Syringes.
- Pills and medicines.
- Disinfectants.
- Bandages.
- Blood supplies.
- Ampoules.
- First Aid Kit storage.
- Laboratory modules.
- Internal workbench storage.
- Output storage.

The base Laboratory Workbench currently defines **67 attachment slots** plus a `10 x 15` main cargo area.

### Wave Generator status

The class and assets for:

```text
TH_CS_LB_WaveGenerator
```

are present in the project.

However, in the current build:

- `wavegenerator` is not included in the Laboratory Bench active `attachments[]`.
- The module constant is commented out in the workbench UI integration.

It should therefore be treated as a **present but currently inactive / reserved module**, not as an operational Laboratory Bench module.

---

## Cooking Workbench

The Cooking Workbench is the food processing and kitchen branch of the system.

### Primary classes

```text
TH_CS_CB_Bench_BASE
TH_CS_CB_Bench_Modular
TH_CS_CB_Bench_Locked
TH_CS_CB_Bench_Public
```

Deployment kits:

```text
TH_CS_CB_Kit_Modular
TH_CS_CB_Kit_Locked
```

### Active Cooking modules

```text
scale
still
stove
```

Associated classes:

```text
TH_CS_CB_Scale
TH_CS_CB_Still
TH_CS_CB_Stove
```

### Gas-based power system

Unlike the standard battery-powered Technical/Laboratory workbenches, the Cooking Workbench overrides its power handling.

It uses four dedicated gas slots:

```text
TH_CB_Gas_1
TH_CB_Gas_2
TH_CB_Gas_3
TH_CB_Gas_4
```

Accepted power sources are vanilla gas canisters derived from:

```text
LargeGasCanister
MediumGasCanister
SmallGasCanister
```

The bench:

- Adds the quantity of all attached gas canisters to determine available power.
- Tracks total and maximum gas capacity.
- Reports power availability based on remaining gas.
- Consumes gas across the connected canisters when a recipe requires power.
- Synchronizes power values when canisters are attached or detached.

For a public workbench, power consumption follows the public workbench behavior provided by the underlying system.

### Cooking inventory organization

The Cooking Workbench provides dedicated attachment groups for:

- Gas canisters.
- S.S. Brena food supplies.
- Cooking tools/equipment.
- Canned ingredients.
- Meat ingredients.
- Vegetable ingredients.
- Chickens.
- Rabbits.
- Foxes.
- Fish.
- Scale, still and stove modules.
- Internal workbench storage.
- Output storage.
- Dedicated wooden crate storage.

The base Cooking Workbench currently defines **54 attachment slots** plus a `10 x 15` main cargo area.

### Food and ingredient consumption logic

The Cooking Workbench overrides several item counting and consumption methods from the base framework.

This exists to make recipe handling work correctly with food and other quantity-based items.

The custom logic supports:

- Counting normal item quantities.
- Counting magazines/ammunition by ammo amount.
- Counting whole-item requirements.
- Alternative recipe ingredients.
- Base-class alternatives.
- Alternatives with quantity overrides.
- Blowtorch fuel handling.
- Consumption of exact quantities instead of always deleting the entire object.
- Filtering out items that should not be treated as usable crafting ingredients.

This is one of the major functional differences between the Cooking Bench and a simple reskinned zmWorkbench.

---

# Workbench Variants

Each workbench family is structured around dedicated IDs.

## Modular variants

Examples:

```text
technicalbench_modular
laboratorybench_modular
cookingbench_modular
```

These are deployable workbenches intended to use the physical module/attachment system.

## Locked variants

Examples:

```text
technicalbench_locked
laboratorybench_locked
cookingbench_locked
```

The extension gives these variants separate workbench IDs so they can be targeted independently by recipe/configuration logic.

The word `Locked` should not be interpreted as a universal hard-coded permission system by itself: the class distinction primarily provides a separate workbench identity for the surrounding zmWorkbench configuration and server progression design.

Locked variants are intentionally prevented from using the extension's dismantling recipe.

## Public variants

Public variants derive from:

```text
zm_WorkbenchPublic
```

Examples:

```text
TH_CS_TB_Bench_Public
TH_CS_LB_Bench_Public
TH_CS_CB_Bench_Public
```

In the extension UI, public benches are treated as having their module requirements available for display/requirement purposes without requiring every physical module to be mounted.

---

# Modules and Recipe Requirements

Recipes use `required_attachments` to define required workbench modules.

The values must be the **slot names**, not the item classnames.

## Technical module mapping

| Recipe value | Module class |
|---|---|
| `drillpress` | `zm_DrillPress` |
| `grinder` | `zm_Grinder` |
| `vice` | `zm_Vice` |
| `soldering` | `zm_Soldering` |
| `welding` | `zm_Welding` |
| `sewing` | `zm_Sewing` |

## Laboratory module mapping

| Recipe value | Module class | Status |
|---|---|---|
| `terminal` | `TH_CS_LB_Terminal` | Active |
| `mortarpestle` | `TH_CS_LB_Mortar` | Active |
| `microscope` | `TH_CS_LB_Microscope` | Active |
| `condenser` | `TH_CS_LB_Condenser` | Active |
| `wavegenerator` | `TH_CS_LB_WaveGenerator` | Present in source, currently inactive |

## Cooking module mapping

| Recipe value | Module class |
|---|---|
| `scale` | `TH_CS_CB_Scale` |
| `still` | `TH_CS_CB_Still` |
| `stove` | `TH_CS_CB_Stove` |

Example:

```json
"required_attachments": [
    "terminal",
    "microscope"
]
```

Do not use:

```json
"required_attachments": [
    "TH_CS_LB_Terminal",
    "TH_CS_LB_Microscope"
]
```

---

# Deployment and Dismantling

## Deployment kits

Technical, Laboratory and Cooking benches each provide deployable kits.

Each kit:

- Extends `DeployableContainer_Base`.
- Supports the standard place-object actions.
- Uses a projection classname to create the correct bench.
- Creates the bench server-side after successful placement.
- Deletes the consumed kit after deployment.

## Modular bench dismantling

The extension registers dismantling recipes for each modular bench family.

Supported dismantling tools:

```text
Screwdriver
Pliers
Wrench
```

The tool is not destroyed, but receives health damage during dismantling.

A modular bench can only be dismantled when it is effectively empty.

The check includes:

- Main cargo must be empty.
- Standard modules/attachments must be removed.
- Internal storage/output containers may remain attached, but their internal cargo must be empty.
- Wooden crate storage may remain attached, but must also be empty.

Locked variants are explicitly rejected by the dismantling recipes.

---

# Custom Workbench UI

The extension overrides the zmWorkbench workbench menu with a custom layout path:

```text
TheHive_zmWorkbench_Extension/zmWorkbench_Integration/Scripts/5_Mission/GUI/Layouts/TH_WorkbenchMenu.layout
```

The integration adds support for The Hive-specific modules while retaining the base crafting workflow.

The current UI code includes:

- Module availability display.
- Module model previews.
- Module tooltips.
- Green/red visual state for installed/missing modules.
- Technical, Laboratory and Cooking module mappings.
- Workbench inventory display.
- Recipe categories and subcategories.
- Recipe requirement display.
- Power cost display.
- Current reputation display hooks.
- Craft quantity controls.
- Variant controls.
- Ingredient alternatives.
- Item/model previews.
- Ingredient tracking support when enabled by zmWorkbench settings.

For public benches, module icons are displayed as available according to the public workbench behavior.

---


# Custom Crafting Components

The `TheHive_Custom_Ingredients` component provides progression items used by workbench recipes.

## Weapon component packages

The current source defines a common weapon-package base plus **50 weapon-specific component package classes**.

Examples include packages for:

```text
SKS
Pioneer
AUG / AUG AX
FAMAS
FAL
AKM
AK-101
AK-74
AKS-74U
M16
M4A1
SV-98
AS VAL
M14 / DMR
Winchester 70
SVD
VSS
CZ 550
G36
Mosin
Bizon
Saiga
Vikhr
M79
RPG-7
LAW
SSG82
SCAR-H
CZ61
Rak37
Kedr
USG45
SG5
MP7
Kar98
Taser
R12
MP133
Groza variants
M249
Model 1887
Super Shorty
EVO3A1
MP9
P90
Tec9
Type 20
PM9
```

The package classes are quantity-based crafting components and implement same-class combination behavior.

## Supply packages

The extension defines three main supply categories:

```text
TH_CS_Supply_Food
TH_CS_Supply_Lab
TH_CS_Supply_Tec
```

These represent:

- Food supplies.
- Laboratory supplies.
- Technical supplies.

They are intended to act as standardized progression/crafting resources rather than requiring recipes to consume large sets of loose objects individually.

## Department crafting devices

Dedicated department devices are also provided:

```text
TH_CS_Engineer_Device
TH_CS_Security_Device
TH_CS_Medic_Device
```

These are quantity-based crafting tools/components that can be used to gate or structure department-specific recipes.

---

# Workbench Consumable Improvements

The extension modifies several original zmWorkbench consumables so identical partially used items can be combined.

Affected classes:

```text
zm_DrillBits
zm_GrindingDisc
zm_solderingtips
zm_WeldingWire
```

Combination logic rejects:

- Different item classes.
- Combining an item with itself.
- Ruined items.
- Already-full target items.
- Invalid inventory reservations.
- Locked attachment slots.
- Other conditions that would exceed the configured quantity maximum.

This allows partially used workbench consumables to be consolidated rather than accumulating as separate low-quantity items.

---

# Localization

The project contains localization tables for:

- Core workbench integration.
- Technical Workbench.
- Laboratory Workbench.
- Cooking Workbench.
- Custom crafting ingredients.

The stringtables include columns for:

```text
English
Czech
German
Russian
Polish
Hungarian
Italian
Spanish
French
Chinese
Japanese
Portuguese
Simplified Chinese
```

Localized content includes:

- Workbench names and descriptions.
- Attachment slot names.
- Module names.
- Module descriptions.
- Inventory attachment groups.
- Deployment kits.
- Dismantling actions.
- Crafting components.
- Supply packages.
- Department devices.
- Terminal interaction text.

---

# Important Classnames

## Technical Workbench

```text
TH_CS_TB_Kit_Modular
TH_CS_TB_Kit_Locked
TH_CS_TB_Bench_Modular
TH_CS_TB_Bench_Locked
TH_CS_TB_Bench_Public
```

## Laboratory Workbench

```text
TH_CS_LB_Kit_Modular
TH_CS_LB_Kit_Locked
TH_CS_LB_Bench_Modular
TH_CS_LB_Bench_Locked
TH_CS_LB_Bench_Public

TH_CS_LB_Terminal
TH_CS_LB_Mortar
TH_CS_LB_Pestle
TH_CS_LB_Microscope
TH_CS_LB_Condenser
TH_CS_LB_WaveGenerator
```

## Cooking Workbench

```text
TH_CS_CB_Kit_Modular
TH_CS_CB_Kit_Locked
TH_CS_CB_Bench_Modular
TH_CS_CB_Bench_Locked
TH_CS_CB_Bench_Public

TH_CS_CB_Scale
TH_CS_CB_Still
TH_CS_CB_Stove
```

## Supply and department components

```text
TH_CS_Supply_Food
TH_CS_Supply_Lab
TH_CS_Supply_Tec

TH_CS_Engineer_Device
TH_CS_Security_Device
TH_CS_Medic_Device
```

### Current CfgVehicles snapshot

The analyzed source snapshot contains:

```text
77 classes with scope = 2
5 classes with scope = 1
82 CfgVehicles entries with scope = 1 or 2 total
```

Base/internal classes with `scope = 0` are not included in that total.

---

# Recipe JSON Notes

The recipe file used by zmWorkbench is:

```text
$profile:WorkbenchMod\recipes.json
```

## Required module example

Technical recipe:

```json
"required_attachments": [
    "drillpress",
    "vice"
]
```

Laboratory recipe:

```json
"required_attachments": [
    "terminal",
    "microscope"
]
```

Cooking recipe:

```json
"required_attachments": [
    "scale",
    "stove"
]
```


## Important rule

Always use module **slot names** in `required_attachments`.

Correct:

```text
terminal
microscope
condenser
mortarpestle
scale
still
stove
```

Incorrect:

```text
TH_CS_LB_Terminal
TH_CS_LB_Microscope
TH_CS_CB_Stove
```

Classnames are used for the actual objects and UI previews; slot identifiers are used for recipe requirements.

---

# Current Implementation Notes

The following points describe the current source snapshot and are useful when extending the project.

### 1. Wave Generator is not active

`TH_CS_LB_WaveGenerator` exists, but the active Laboratory Bench and recipe UI do not currently use `wavegenerator`.

### 2. Laboratory Terminal access is not faction-restricted yet

The source contains comments for future job/quest restrictions, but the current toggle action accepts any player who can interact with the terminal.

### 3. Terminal can gate the Laboratory crafting UI

When a Laboratory Terminal is attached and its monitor is off, the custom Laboratory workbench open action does not expose/open the crafting interface.

### 4. Locked variants cannot be dismantled

The dismantling recipes explicitly reject the Locked workbench subclasses.

### 5. Public workbenches use the original public base

Public variants derive from `zm_WorkbenchPublic`, not from the custom modular subclass.

### 6. Cooking Bench power is gas-based

The Cooking Bench does not use the standard battery slots as its active custom power source. It computes power from attached vanilla gas canister quantities.

### 7. Existing classname documentation may lag behind source changes

When generating `types.xml`, trader lists or external documentation, use the current config files as the source of truth. The project evolves quickly and static classname lists can become stale after new bench families, modules or weapon packages are added.

---

# Credits

## zmWorkbench

All credit for the original zmWorkbench framework, concept, systems, core scripts, assets, branding and original functionality belongs to the original zmWorkbench author **ZonemanN** and its contributors.

The Hive Project does not claim ownership over the original zmWorkbench project or other third-party dependencies.

This repository is an extension built on top of that framework.

## Third-party integrations

The project contains integration code for systems provided by:

- Bohemia Interactive / DayZ.
- DayZ Expansion.
- zmWorkbench.
- Terje Mods.

Ownership of those original systems remains with their respective authors.

---

# Usage and Ownership

The original code, configuration, models, textures, materials, layouts, localization, workbench variants, modules and integration logic created specifically for **The Hive - Hashima RP** remain proprietary content of **The Hive Project**, unless otherwise stated.

This notice applies only to original The Hive extension content and does not claim ownership over third-party dependencies or their original assets/code.

The extension is officially supported only within:

```text
THE HIVE - HASHIMA RP
```

It is not intended to be:

- A replacement for zmWorkbench.
- A public asset library.
- A generic development template.
- A repack resource.
- A drop-in crafting framework for third-party servers.

Do not copy, extract, repack, redistribute, reupload or integrate original The Hive extension content into another project without explicit authorization.

---

**Original zmWorkbench content belongs to its respective creator.**

**Original The Hive extension content © The Hive Project — All Rights Reserved.**

## Convenzione ID quest

Quest, obiettivi e NPC di Expansion usano la convenzione comune a tutti i repository di The Hive: vedi `CONVENZIONE_ID.md`.
