Route110_TrickHousePuzzle1_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHousePuzzle1_OnLoad
	.byte 0

Route110_TrickHousePuzzle1_OnLoad:
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_1_STATE, 2, Route110_TrickHousePuzzle1_EventScript_OpenDoor
	end

Route110_TrickHousePuzzle1_EventScript_OpenDoor::
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
	end

Route110_TrickHousePuzzle1_EventScript_Scroll::
	lockall
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_1_STATE, 0, Route110_TrickHousePuzzle1_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle1_EventScript_FoundScroll::
	setvar VAR_TRICK_HOUSE_PUZZLE_1_STATE, 1
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	end

Route110_TrickHousePuzzle1_EventScript_Salieri::
	trainerbattle_single TRAINER_SALIERI, Route110_TrickHousePuzzle1_Text_SalieriIntro, Route110_TrickHousePuzzle1_Text_SalieriDefeat
	msgbox Route110_TrickHousePuzzle1_Text_SalieriPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle1_EventScript_Eduardo::
	trainerbattle_single TRAINER_EDUARDO, Route110_TrickHousePuzzle1_Text_EduardoIntro, Route110_TrickHousePuzzle1_Text_EduardoDefeat
	msgbox Route110_TrickHousePuzzle1_Text_EduardoPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle1_EventScript_Robin::
	trainerbattle_single TRAINER_ROBIN, Route110_TrickHousePuzzle1_Text_RobinIntro, Route110_TrickHousePuzzle1_Text_RobinDefeat
	msgbox Route110_TrickHousePuzzle1_Text_RobinPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened::
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER is fabulous.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle1_Text_SalieriIntro:
	.string "I'll hack and slash my way to victory\n"
	.string "with the CUT we just learned!$"

Route110_TrickHousePuzzle1_Text_SalieriDefeat:
	.string "Why are you so serious?$"

Route110_TrickHousePuzzle1_Text_SalieriPostBattle:
	.string "I never get tired of hacking\n"
	.string "and slashing!$"

Route110_TrickHousePuzzle1_Text_EduardoIntro:
	.string "I wandered into this weird house\n"
	.string "by accident…$"

Route110_TrickHousePuzzle1_Text_EduardoDefeat:
	.string "And now I've lost…$"

Route110_TrickHousePuzzle1_Text_EduardoPostBattle:
	.string "I lost my way, I lost a battle, and I'm\n"
	.string "now even more lost… I can't get out…$"

Route110_TrickHousePuzzle1_Text_RobinIntro:
	.string "Just who is the TRICK MASTER?$"

Route110_TrickHousePuzzle1_Text_RobinDefeat:
	.string "I lost while I was lost in thought!$"

Route110_TrickHousePuzzle1_Text_RobinPostBattle:
	.string "You're strong!\n"
	.string "Just who are you?$"

