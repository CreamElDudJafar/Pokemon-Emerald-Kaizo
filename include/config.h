#ifndef GUARD_CONFIG_H
#define GUARD_CONFIG_H

// In the Generation 3 games, Asserts were used in various debug builds.
// Ruby/Sapphire and Emerald do not have these asserts while Fire Red
// still has them in the ROM. This is because the developers forgot
// to define NDEBUG before release, however this has been changed as
// Ruby's actual debug build does not use the AGBPrint features.
#define NDEBUG

// To enable printf debugging, comment out "#define NDEBUG". This allows
// the various AGBPrint functions to be used. (See include/gba/isagbprint.h).
// See below for enabling different pretty printing versions.

#ifndef NDEBUG

#define PRETTY_PRINT_MINI_PRINTF (0)
#define PRETTY_PRINT_LIBC (1)

#define LOG_HANDLER_AGB_PRINT (0)
#define LOG_HANDLER_NOCASH_PRINT (1)
#define LOG_HANDLER_MGBA_PRINT (2)

// Use this switch to choose a handler for pretty printing.
// NOTE: mini_printf supports a custom pretty printing formatter to display preproc encoded strings. (%S)
//       some libc distributions (especially dkp arm-libc) will fail to link pretty printing.
#define PRETTY_PRINT_HANDLER (PRETTY_PRINT_MINI_PRINTF)

// Use this switch to choose a handler for printf output.
// NOTE: These will only work on the respective emulators and should not be used in a productive environment.
//       Some emulators or real hardware might (and is allowed to) crash if they are used.
//       AGB_PRINT is supported on respective debug units.

#define LOG_HANDLER (LOG_HANDLER_MGBA_PRINT)
#endif

#define ENGLISH

#ifdef ENGLISH
#define UNITS_IMPERIAL
#define CHAR_DEC_SEPARATOR CHAR_PERIOD // Period is used as a decimal separator only in the UK and the US.
#else
#define UNITS_METRIC
#define CHAR_DEC_SEPARATOR CHAR_COMMA
#endif

// Uncomment to fix some identified minor bugs
//#define BUGFIX

// Various undefined behavior bugs may or may not prevent compilation with
// newer compilers. So always fix them when using a modern compiler.
#if MODERN || defined(BUGFIX)
#ifndef UBFIX
#define UBFIX
#endif
#endif

// Emerald Kaizo options, toggle by commenting or uncommenting
#define QOL // Full Quality of Life features, similar to the community-created patches created by CyanSixFour
// #define PARTIAL_QOL // Fewer Quality of Life features (More or less only the features present in CyanSixFour's EKEdit6-1Em, or the "Boomer patch")
#define AESTHETICS // Miscellaneous aesthetic changes (Adds the new title screen, credits, and fixes Steven's tag trainer name)
#define BUG_FIXES // Bug fixes (Removes Charmeleon's EV drops, removes HP Psychic from Poliwhirl's learnset, and fixes a few erroneous strings)
#define UPDATE1_1 // Adds Emerald Kaizo 1.1 features

#ifdef QOL
#define RUN_INDOORS // Allows use of the Running Shoes indoors.
#define SUMMARY_SCREEN_IVS // Displays the Pokémon's IVs in the stat screen.
#define NATURE_STAT_COLORS // Colors the Pokémon's nature-boosted and nature-nerfed stats in the stat screen.
#define SHOW_HIDDEN_POWER // Displays the true Hidden Power type and base power.
#define REUSABLE_REPELS // Prompts the player to use another Repel once it runs out.
#define REUSABLE_FIELD_MEDICINE // Disables the menu refresh when using Rare Candies.
#define FAST_HEALTH_BARS // Increases the drain (and heal) speed of the HP bar.
#define FASTER_TEXT_SPEED // Increases the speed of text rendering.
#define FASTER_BATTLE_ANIMS // Increases the speed of battle animations.
#define FASTER_NURSE_JOY // Skips some Nurse Joy dialogue.
#endif

#if defined(QOL) || defined(PARTIAL_QOL)
#define MORE_RENEWABLES // Changes all berry drops to 255, all random item NPCs to stores, and removes the timer from daily item NPCs.
#define RARE_CANDY_MARTS // Provides rare candies in all Pokémarts.
#define GUARANTEED_FISHING // Changes fishing to never fail, removes the catch timeout, and disables the extra reels for Good Rod and Super Rod.
#define TMS_AND_COINS // Provides Casino coins for ¥1, and store-bought TMs for ¥1 or 1 coin.
#define FRIENDSHIP_EVOS // Changes Friendship evolutions to level-up, or Stone for Umbreon and Espeon.
#define DEFAULT_OPTIONS // Changes the default new game options to "Fast" text speed and "Set" battle mode. (Also enabled if "UPDATE1_1" is enabled)
#endif

#endif // GUARD_CONFIG_H
