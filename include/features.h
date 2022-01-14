#ifndef GUARD_CONSTANTS_FEATURES_H
#define GUARD_CONSTANTS_FEATURES_H
// Pretty much every added feature needs to be toggleable 1/3/2022
// TODO 1/3/2022 Make double battles occur randomly in the wild (make preventable in cases of scripted scenes or whatever)
// TODO 1/3/2022 Make double battles an option for every trainer battle if they have at least 2 pokemon? Or the same party count or more than you?
// TODO 1/3/2022 Could we use a system where rematches are very simple and repeatable?
// TODO 1/3/2022 Many options for level scaling for trainers
// TODO 1/3/2022 Custom menus for enabling/disabling features that are toggled via flag
// TODO 1/3/2022 Save the ID of the first unique pokemon seen in a location (in a non-scripted scenario... after a form of pokeballs are acquired) (Handling double battles will be interesting)
// TODO 1/3/2022 Prevent reviving fainted, revives removed entirely, make a toggle to enable very expensive revives (no max revives)
// TODO 1/3/2022 Encourage the player not to save scrub
// TODO 1/3/2022 Is there a way we could implement unlocking unique moves through leveling in a fair way? replace X number of evo moves with a selection of non-canon abilities that make sense
// TODO 1/3/2022 Make it possible for someone to just be like, "Hey grab me like 3 pidgey's... k thx.... now I need some moo milk..."
// TODO 1/3/2022 Flag?: Shiny encounter rate

// Features & Tweaks // this should not contain variable modifications (those belong in the save block)
//
//#define FEATURE_RUN_INSIDE_BY_DEFAULT
#define FEATURE_REUSABLE_TMS
// TODO 1/2/2022 #define FEATURE_NO_BAG_IN_BATTLE
// TODO 1/3/2022 #define FEATURE_REMOVE_FIELD_POISON_BELOW_X_HP 5
// TODO 1/14/2022 #define FEATURE_POKEMON_STORAGE_ACCESSIBLE_FROM_PAUSE_MENU

#endif // GUARD_CONSTANTS_FEATURES_H
