THE HIVE - RECIPES BOOK v1.1
================================

SCOPO
-----
25 libri fisici indipendenti da zmWorkbench.
Ogni libro completa una Expansion Quest Achievement. Le ricette del workbench possono poi usare lo stesso Quest ID come requisito.

CLASSNAME
---------
TH_RecipeBook_001 ... TH_RecipeBook_025

QUEST ID PREDEFINITI
--------------------
Libri:  001 -> 8001, 002 -> 8002 ... 025 -> 8025
Fogli:  001 -> 8501, 002 -> 8502 ... 050 -> 8550

CONFIG JSON
-----------
All'avvio del server viene creato automaticamente, se assente:
$profile:TheHive/TheHive_zmWorkbench_Extension/TheHive_Recipes_Book/RecipesBooks.json

Puoi modificare per ogni libro:
- ClassName
- Title (usato anche come nome visualizzato in gioco)
- QuestID
- RequiredQuestID (quest da completare prima di poter leggere; -1 = nessun requisito)
- RequestedJobs (lavori Job & Rewards che possono imparare dal libro; [] = tutti)
- ReadTime
- DeleteOnSuccess

EXPANSION QUESTS - REQUISITI IMPORTANTI
---------------------------------------
Le quest associate ai libri devono essere configurate come Achievement/auto-start e Autocomplete.
Devono essere disponibili automaticamente per il player (nessun quest giver / prerequisito che ne impedisca l'attivazione).
Expansion crea automaticamente le achievement/auto-start quest durante l'inizializzazione del player.

FLUSSO
------
1. Il player prende il libro in mano.
2. Azione "Leggi".
3. Tempo di lettura definito dal JSON.
4. Il server verifica che la quest non sia gia completata e, se RequiredQuestID > 0,
   che la quest richiesta sia gia completata. Se uno dei due controlli fallisce
   l'azione "Leggi" non compare.
5. Il server completa la quest Achievement tramite Expansion.
6. Se DeleteOnSuccess=true il libro viene eliminato.
7. Se DeleteOnSuccess=false il libro viene portato a Ruined.
8. Se la quest era gia completata, il libro resta intatto.

WORKBENCH
---------
Esempio:
"required_quest_id": 8001

Tutte le ricette con Quest ID 8001 vengono sbloccate leggendo TH_RecipeBook_001.


REQUISITO DI QUEST (RequiredQuestID)
------------------------------------
Serve a far imparare delle ricette solo a chi ha completato una missione preventiva.
Esempio: "QuestID": 8003, "RequiredQuestID": 6001
-> il libro si puo leggere solo dopo aver completato la quest 6001 (Qualifica Cuoco); leggendolo si
   completa la 8003 e si sbloccano le ricette con "required_quest_id": 8003.
Nota: RequiredQuestID deve essere > 0, quindi la quest INIT (ID 0) non puo essere usata come requisito.
Valore normale: -1 (nessun requisito). I file JSON con ConfigVersion 2 vengono
aggiornati automaticamente alla versione 3 all'avvio del server (RequiredQuestID = -1).
Il controllo e' fatto sul server; sul client l'azione si aggiorna quando il libro
viene preso in mano.

LAVORO RICHIESTO (RequestedJobs)
--------------------------------
Funziona SOLO se e' caricata la mod Job & Rewards (CfgPatches
TheHive_SSBrena_TH_Job_And_Rewards_Scripts, define TheHive_SSBrena_TH_Job_And_Rewards).
Senza quella mod il campo resta nel JSON ma viene ignorato.
Esempio: "RequestedJobs": ["Medico", "Infermiere"]
- Lista vuota [] (o solo "" / "none") = nessun requisito.
- I nomi sono quelli di "Lavori" in TH_JOBS_AND_REWARDS.json (maiuscole indifferenti).
- Il lavoro del player e' quello della lista Whitelisted (SteamID); i lavori con
  Enabled=false non contano. La config dei lavori viene riletta al massimo ogni 5 minuti.
- Chi non ha il lavoro puo' comunque provare a leggere: alla fine della lettura riceve
  la notifica "Ci hai provato, ma non ci hai capito niente", non completa la quest e il
  libro resta intatto.

NOTE
----
La mod non contiene quest Expansion 8001-8025 / 8501-8550: queste restano nella configurazione server Expansion Quests, cosi puoi decidere liberamente quali ID usare e quali ricette collegare a ciascun libro.

QUEST ID (Convenzione ID The Hive v2, vedi CONVENZIONE_ID.md)
---------------------------------------------------------------
Libri  TH_RecipeBook_NNN  -> QuestID = 8000 + NNN  (001 = 8001 ... 025 = 8025)
Fogli  TH_RecipePaper_NNN -> QuestID = 8500 + NNN  (001 = 8501 ... 050 = 8550)
L'ID dell'obiettivo Expansion (Objectives/Action) e' uguale a quello della quest.
