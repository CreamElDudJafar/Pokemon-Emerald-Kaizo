AbandonedShip_Corridors_1F_MapScripts::
	.byte 0

AbandonedShip_Corridors_1F_EventScript_Youngster::
	msgbox AbandonedShip_Corridors_1F_Text_IsntItFunHere, MSGBOX_NPC
	end

AbandonedShip_Corridors_1F_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_ABANDONED_SHIP_1, AbandonedShip_Corridors_1F_Text_Grunt1Intro, AbandonedShip_Corridors_1F_Text_Grunt1Defeat
	msgbox AbandonedShip_Corridors_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Corridors_1F_Text_Grunt1Intro:
	.string "What's so funny about looking for a\n"
	.string "map aboard the ship?$"

AbandonedShip_Corridors_1F_Text_Grunt1Defeat:
	.string "Whoa, you overwhelmed me!$"

AbandonedShip_Corridors_1F_Text_Grunt1PostBattle:
	.string "It's not easy finding that map\n"
	.string "with other people around!$"

AbandonedShip_Corridors_1F_Text_IsntItFunHere:
	.string "Isn't it fun here?\n"
	.string "I get excited just being here!$"
