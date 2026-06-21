Route110_TrickHousePuzzle6_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle6_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHousePuzzle6_OnWarp
	.byte 0

Route110_TrickHousePuzzle6_OnTransition:
	special RotatingGate_InitPuzzle
	end

Route110_TrickHousePuzzle6_OnWarp:
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, Route110_TrickHousePuzzle6_EventScript_InitPuzzle
	.2byte 0

@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_5
Route110_TrickHousePuzzle6_EventScript_InitPuzzle::
	special RotatingGate_InitPuzzleAndGraphics
	end

Route110_TrickHousePuzzle6_EventScript_Scroll::
	lockall
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_6_STATE, 0, Route110_TrickHousePuzzle6_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle6_EventScript_FoundScroll::
	setvar VAR_TRICK_HOUSE_PUZZLE_6_STATE, 1
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	end

Route110_TrickHousePuzzle6_EventScript_May::
	trainerbattle_single TRAINER_MAY_TRICK_HOUSE, Route110_TrickHousePuzzle6_Text_MayIntro, Route110_TrickHousePuzzle6_Text_MayDefeat
	msgbox Route110_TrickHousePuzzle6_Text_MayPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle6_EventScript_Red::
	trainerbattle_single TRAINER_RED_TRICK_HOUSE, Route110_TrickHousePuzzle6_Text_RedIntro, Route110_TrickHousePuzzle6_Text_RedDefeat
	msgbox Route110_TrickHousePuzzle6_Text_RedPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle6_EventScript_Brendan::
	trainerbattle_single TRAINER_BRENDAN_TRICK_HOUSE, Route110_TrickHousePuzzle6_Text_BrendanIntro, Route110_TrickHousePuzzle6_Text_BrendanDefeat
	msgbox Route110_TrickHousePuzzle6_Text_BrendanPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle6_Text_WroteSecretCodeLockOpened:
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER is my life.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle6_Text_MayIntro:
	.string "When I heard there was a strange\n"
	.string "house, I had to check it out.$"

Route110_TrickHousePuzzle6_Text_MayDefeat:
	.string "I've discovered a tough TRAINER!$"

Route110_TrickHousePuzzle6_Text_MayPostBattle:
	.string "I'm sure having a good time checking\n"
	.string "this place out.\p"
	.string "It's a challenge I've found worth\n"
	.string "repeating!$"

Route110_TrickHousePuzzle6_Text_RedIntro:
	.string "………$"

Route110_TrickHousePuzzle6_Text_RedDefeat:
	.string "…$"

Route110_TrickHousePuzzle6_Text_RedPostBattle:
	.string "………$"

Route110_TrickHousePuzzle6_Text_BrendanIntro:
	.string "I'm getting dizzy from these rotating\n"
	.string "doors…$"

Route110_TrickHousePuzzle6_Text_BrendanDefeat:
	.string "Everything's spinning around and\n"
	.string "around. I can't take this anymore…$"

Route110_TrickHousePuzzle6_Text_BrendanPostBattle:
	.string "You don't seem to be affected at all.\n"
	.string "Or do you have your poker face on?$"

