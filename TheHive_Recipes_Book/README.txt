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
001 -> 5001
002 -> 5002
...
025 -> 5025

CONFIG JSON
-----------
All'avvio del server viene creato automaticamente, se assente:
$profile:TheHive/TheHive_zmWorkbench_Extension/TheHive_Recipes_Book/RecipesBooks.json

Puoi modificare per ogni libro:
- ClassName
- Title (usato anche come nome visualizzato in gioco)
- QuestID
- RequiredQuestID (quest da completare prima di poter leggere; -1 = nessun requisito)
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
"required_quest_id": 5001

Tutte le ricette con Quest ID 5001 vengono sbloccate leggendo TH_RecipeBook_001.


REQUISITO DI QUEST (RequiredQuestID)
------------------------------------
Serve a far imparare delle ricette solo a chi ha completato una missione preventiva.
Esempio: "QuestID": 80003, "RequiredQuestID": 70001
-> il libro si puo leggere solo dopo aver completato la quest 70001; leggendolo si
   completa la 80003 e si sbloccano le ricette con "required_quest_id": 80003.
Valore normale: -1 (nessun requisito). I file JSON con ConfigVersion 2 vengono
aggiornati automaticamente alla versione 3 all'avvio del server (RequiredQuestID = -1).
Il controllo e' fatto sul server; sul client l'azione si aggiorna quando il libro
viene preso in mano.

NOTE
----
La mod non contiene quest Expansion 5001-5025: queste restano nella configurazione server Expansion Quests, cosi puoi decidere liberamente quali ID usare e quali ricette collegare a ciascun libro.
