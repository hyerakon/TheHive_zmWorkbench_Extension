# Convenzione ID — NPC / Quest / Obiettivi (v2, 22/10/2026)

Vale per **tutti** i repository di THE HIVE che usano QuestID: server, TheHive_Core, TheHive_zmWorkbench_Extension e ogni mod o tool futuro. Ogni repository ne ha una copia identica: se la cambi, aggiornala ovunque.

- **ID < 10000** → quest di servizio (`WXYZ`)
- **ID ≥ 10000** → quest NPC (`ABBCD`)
- **ID `0`** → riservato alla quest **INIT** del server "Una notte da leoni" e al suo obiettivo. Vietato per qualsiasi altra quest, obiettivo o NPC.
  - Limite tecnico di Expansion: una quest 0 non può essere la `FollowUpQuest` di un'altra (Expansion controlla `> 0`). Può invece stare nei `PreQuestIDs` e nel `QuestID` di TH_JOBS_AND_REWARDS.

## Quest NPC — `ABBCD`
- **A** = Luogo (1–9) → `1 = S.S. Brena`, `2 = isola sud-ovest`, `3 = Okubo Outpost`
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
  - **0–1** = Scenari (quest che spawnano i nostri `.map`) e quest STAFF varie ed eventuali
  - **2–5** = Achievement JOB & REWARD: achievement che regalano perk bloccati, quest che danno XP quando il giocatore fa cose (es. Medicina)
  - **6–7** = Quest legate alle Attività: qualifiche, permessi, premi delle attività
  - **8** = Achievement Recipe Book / Paper (apprendimento da libri e foglietti)
  - **9** = Infected (quest e sottoquest della fazione Infected crew)
- **X** = Sottoscopo (0–9)
- **Y** = Quest (0–9)
- **Z** = Obiettivo (0–9, sequenziali o paralleli)

### Regola di Z
- **Regola generale:** Z numera gli obiettivi della quest Y. L'ID della quest finisce con 0, gli obiettivi vanno da Y1 a Y9.
- **Eccezione – achievement con un solo obiettivo:** quando una serie è fatta solo di achievement semplici, Z numera le singole quest. Ogni quest ha **un solo obiettivo con lo stesso ID della quest**. Una serie (W, X, Y) contiene fino a 10 achievement; una serie lunga può occupare più Y consecutive (es. 8001–8025).
- In una serie a Z progressivo **non si mettono quest con più obiettivi**: vanno in una nuova Y con la regola generale.

### Attività — `60NN` / `61NN`
- **60NN = Qualifica** di professione: segna la professione e sblocca le ricette uniche (`required_quest_id` in `WorkbenchMod/recipes.json`). Si ottiene leggendo `TH_Quest_Qualifica_<Nome>`.
- **61NN = Permesso** di attività: assegna l'attività commerciale (vetrina Market Tweaks, `RequiredCompletedQuestIDs`). Si ottiene leggendo `TH_Quest_Permesso_<Nome>`.
- **NN** è lo stesso per qualifica e permesso della stessa professione: `01` Cuoco, `02` Armaiolo, `03` Farmacista (fino a 99).
- **Il permesso non richiede la qualifica:** si può aprire un ristorante senza essere cuoco.
- `62XX`–`79XX`: premi delle attività (vendite, guadagni) – da progettare.

### Sottoscopi assegnati
| Serie | Uso |
|---|---|
| `0` | INIT "Una notte da leoni" (assegnazione del lavoro, TH_JOBS_AND_REWARDS) |
| `510Z` | Medicina – Primo soccorso (tutti) |
| `511Z` | Medicina – Soccorritore (tutti, a livelli) |
| `512Z` | Medicina – Sanitario (ricompensa Infermiere + Medico) |
| `513Z` | Medicina – Chirurgo (ricompensa solo Medico) |
| `514Z`–`519Z` | riservati a Medicina |
| `520Z` | Perk riservati delle skill normali: achievement che regalano un perk "solo certificato/lavoro" a chiunque li completi |
| `521Z`–`529Z`, `53`–`59`, W 2 e 4 | liberi per altri achievement JOB & REWARD |
| `60NN` | Qualifiche |
| `61NN` | Permessi |
| `80NN` | Recipe Book NNN (8000 + NNN) |
| `85NN` | Recipe Paper NNN (8500 + NNN) |
| `90` | Marinaio infetto |

## Regole pratiche
- Gli obiettivi Expansion hanno ID propri per tipo (Travel, Collection, Action…): si usa lo stesso schema, cioè l'obiettivo Z della quest. Le quest con un solo obiettivo usano l'ID della quest (es. quest 5100 / obiettivo Action 5100).
- Nomi file sul server: `QuestNPC_<ID>_<Nome>.json`, `Quest_<ID>_<Nome>.json`, `Objectives/<Tipo>/<ID>_<Nome>.json`.
- Obiettivi Action con l'azione generica dei documenti (`ActionTHReadDocumento`): **`AllowedClassNames` è obbligatorio**, altrimenti qualsiasi qualifica o permesso completerebbe l'obiettivo.
- Ogni ID scritto nel codice (costanti, default di config) va tenuto allineato ai file del server.
- Cambiare un ID già usato fa perdere lo stato delle quest salvato nei PlayerData (`ExpansionMod/Quests/PlayerData/*.bin`): farlo insieme a un wipe o azzerare i dati dei tester.

## ID in uso sul server (aggiornato al 22/10/2026)

### NPC (luogo 1 = S.S. Brena, 2 = isola sud-ovest, 3 = Okubo Outpost)
| ID | NPC |
|---|---|
| 10000 | Bacheca degli Annunci (Bacheca SSB) |
| 10100 | Lin Yue |
| 10200 | Jensen Miller |
| 10300 | Alan Grant |
| 10400 | Rrafael Pashuko |
| 10500 | Ania Rybak |
| 10600 | Kareem Nassar |
| 10700 | Claire Moreau |
| 10800 | Oliver Murray |
| 10900 | EIKO Stadium Relay |
| 11000 | Yusuf — Naufrago |
| 11100 | Terminale Radio — Canale Sicurezza |
| 11200 | Telefono di servizio - Kolembrody |
| 11300 | Telefono di servizio - Teatro |
| 11400 | Archivio (PC) |
| 11500 | Telefono di servizio - Sala Comandi |
| 11600 | Archivio Ricercati — Registro Sicurezza |
| 20100 | Ania Rybak (punto d'imbarco, isola sud-ovest) |
| 30000 | Bacheca degli Annunci - Okubo Outpost |

### Quest NPC
| Quest | Giver → consegna | Obiettivi |
|---|---|---|
| 10010–10070 (bacheca, catena) | 10000 → 10400 | 10011+10012, 10021 … 10071 |
| 10080 target infetti | 10000 → 10800 | 10081 |
| 10110 Il giorno dopo | 10100 | 10111 (pre: 0) |
| 10210 Ordini dall'alto | 10200 | 10211 |
| 10310 Rimettiti al lavoro | 10300 | 10311 |
| 10510 Passaggio per l'isola sud-ovest | 10500 | 10511 (teletrasporto, TheHive_Core) |
| 20110 Ritorno alla S.S. Brena | 20100 | 20111 (teletrasporto, TheHive_Core) |

### Quest di servizio
| ID | Quest |
|---|---|
| 0 | INIT "Una notte da leoni" (QuestID di TH_JOBS_AND_REWARDS; obiettivo Travel 0) |
| 5100–5108 | Medicina – Primo soccorso (9 achievement) |
| 5110–5117 | Medicina – Soccorritore (8 achievement) |
| 5120–5126 | Medicina – Sanitario (7 achievement) |
| 5130–5132 | Medicina – Chirurgo (3 achievement) |
| 5200–5205 | Perk riservati: Pathfinder, FishermanLuck, MushroomPremonition, MasterStroke, SilentKiller, Ninja |
| 6001 / 6002 / 6003 | Qualifica Cuoco / Armaiolo / Farmacista (`TH_Qualifica_*`) |
| 6101 / 6102 / 6103 | Permesso Cuoco / Armaiolo / Farmacista (`TH_Permesso_*`, TH_MarketTweaks) |
| 8001–8025 | Recipe Book 001–025 (8000 + NNN) |
| 8501–8550 | Recipe Paper 001–050 (8500 + NNN; 048–050 senza ricette per ora) |
| 9010 / 9020 | Marinaio infetto PT1 / PT2 |

ID scritti nel codice:
- TheHive_Core: 10510 e 20110 (InitC_QuestsIntegration, teletrasporti); 6101/6102/6103 (default di TH_MarketTweaks).
- TheHive_zmWorkbench_Extension: formule 8000 + NNN e 8500 + NNN (default di RecipesBooks).
- Costanti di InitC senza quest corrispondente: 1002–1005, 1010, 1013, 1100 (in W 0–1).

### Storico
- v2 (22/10/2026): W ridistribuiti (0–1 staff, 2–5 job & reward, 6–7 attività, 8 ricette); regola Z per gli achievement semplici; ID 0 alla INIT (ex 3000); qualifiche ex 3100–3300 → 6001–6003; permessi ex 4100–4300 → 6101–6103; Recipe Book ex 6010–6250 → 8001–8025; Recipe Paper ex 7010–7470 → 8501–8547 (+ 8548–8550 nuovi); test 5000 eliminata. Applicata insieme al wipe del server.
