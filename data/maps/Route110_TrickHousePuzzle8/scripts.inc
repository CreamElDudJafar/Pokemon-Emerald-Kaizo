Route110_TrickHousePuzzle8_MapScripts::
	.byte 0

Route110_TrickHousePuzzle8_EventScript_Scroll::
	lockall
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_8_STATE, 0, Route110_TrickHousePuzzle8_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle8_EventScript_FoundScroll::
	setvar VAR_TRICK_HOUSE_PUZZLE_8_STATE, 1
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	end

Route110_TrickHousePuzzle8_EventScript_Steven::
	trainerbattle_single TRAINER_STEVEN_TRICK_HOUSE, Route110_TrickHousePuzzle8_Text_StevenIntro, Route110_TrickHousePuzzle8_Text_StevenDefeat
	msgbox Route110_TrickHousePuzzle8_Text_StevenPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle8_EventScript_Wallace::
	trainerbattle_single TRAINER_WALLACE_TRICK_HOUSE, Route110_TrickHousePuzzle8_Text_WallaceIntro, Route110_TrickHousePuzzle8_Text_WallaceDefeat
	msgbox Route110_TrickHousePuzzle8_Text_WallacePostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle8_EventScript_Vito::
	trainerbattle_single TRAINER_VITO_TRICK_HOUSE, Route110_TrickHousePuzzle8_Text_VitoIntro, Route110_TrickHousePuzzle8_Text_VitoDefeat
	msgbox Route110_TrickHousePuzzle8_Text_VitoPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened::
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER I love.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle8_Text_StevenIntro:
	.string "Not many TRAINERS have made it\n"
	.string "this far.$"

Route110_TrickHousePuzzle8_Text_StevenDefeat:
	.string "I expected nothing less…$"

Route110_TrickHousePuzzle8_Text_StevenPostBattle:
	.string "There is a TM32 ahead.\n"
	.string "Try it on RAYQUAZA!$"

Route110_TrickHousePuzzle8_Text_WallaceIntro:
	.string "Consider yourself lucky to be\n"
	.string "battling us!$"

Route110_TrickHousePuzzle8_Text_WallaceDefeat:
	.string "Our combination\n"
	.string "has failed!$"

Route110_TrickHousePuzzle8_Text_WallacePostBattle:
	.string "The SKY PILLAR should be\n"
	.string "accessible now.$"

Route110_TrickHousePuzzle8_Text_VitoIntro:
	.string "You've been slugging through the TRICK\n"
	.string "HOUSE challenge, too.$"

Route110_TrickHousePuzzle8_Text_VitoDefeat:
	.string "I see…\n"
	.string "You possess an extraordinary style.$"

Route110_TrickHousePuzzle8_Text_VitoPostBattle:
	.string "Seeing someone like you should please\n"
	.string "the TRICK MASTER.$"

