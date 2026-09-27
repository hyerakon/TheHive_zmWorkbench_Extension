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
4. Il server verifica che la quest non sia gia completata.
5. Il server completa la quest Achievement tramite Expansion.
6. Se DeleteOnSuccess=true il libro viene eliminato.
7. Se DeleteOnSuccess=false il libro viene portato a Ruined.
8. Se la quest era gia completata, il libro resta intatto.

WORKBENCH
---------
Esempio:
"required_quest_id": 5001

Tutte le ricette con Quest ID 5001 vengono sbloccate leggendo TH_RecipeBook_001.


NOTE
----
La mod non contiene quest Expansion 5001-5025: queste restano nella configurazione server Expansion Quests, cosi puoi decidere liberamente quali ID usare e quali ricette collegare a ciascun libro.
