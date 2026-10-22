# Pokémon Emerald Kaizo

<img width="1016" height="674" alt="ek" src="https://github.com/user-attachments/assets/97658bf5-0606-4697-b816-cb8b91ed427e" />

This is a recompilation of Pokémon Emerald Kaizo.

It builds the following ROM by default:

* [**pokeemeraldkaizo.gba**] `sha1:  f70e4fe54d13a10a0e7f7eb10d53862b9da0e8f8`

Note: Due to how binary hacking tools work, and due to some changes in EK 1.1, this is not a 1-to-1 recreation. However, the game still plays in the exact same way.

To set up the repository, see [INSTALL.md](INSTALL.md).

The default build is **Emerald Kaizo 1.1**, with a bunch of quality of life features. The game version, quality of life, and bug fixes can all be toggled in [include/config.h](include/config.h) by commenting or uncommenting the `#define` directives at the bottom of the file.

## Credits
- SinisterHoodedFigure, for creating [Emerald Kaizo](https://www.pokecommunity.com/threads/pokemon-emerald-kaizo.395830/).
- Anastarawneh, for remaking the game in git/github
- CyanSixFour, for creating the community quality of life patches.
- [pret](https://github.com/pret), for the original [pokeemerald](https://github.com/pret/pokeemerald) decompilation of Pokémon Emerald, and their wiki.
- CreamElDudJafar, for creating the title screen and adding the game name to the hall of fame card.
- The pChal Discord community, for playtesting the patches and helping with the changes I originally missed.
