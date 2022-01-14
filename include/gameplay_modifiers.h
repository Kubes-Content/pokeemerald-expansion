#ifndef GUARD_GAMEPLAY_MODIFIERS_H
#define GUARD_GAMEPLAY_MODIFIERS_H

struct MiscellaneousModifiersData {
    bool8 pokemonStorageAccessibleFromPauseMenuInsteadOfPc;
} __attribute__((packed));

struct ExpModifiersData {
    u32 multiplier; // TODO: DEFAULT TO 1!!! 1/14/2022
} __attribute__((packed));

struct GameplayModifiersData {
    struct ExpModifiersData exp;
    struct MiscellaneousModifiersData misc;
} __attribute__((packed));

#endif // GUARD_GAMEPLAY_MODIFIERS_H