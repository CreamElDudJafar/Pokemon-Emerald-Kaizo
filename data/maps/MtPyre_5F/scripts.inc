MtPyre_5F_MapScripts::
	.byte 0

@ Seems like the scripts for the 4F and 5F were swapped

MtPyre_4F_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_4F_Text_Grunt2Intro, MtPyre_4F_Text_Grunt2Defeat
	msgbox MtPyre_4F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_4F_Text_Grunt2Intro:
	.string "I love all things horrifying…\n"
	.string "It's like a disease…\p"
	.string "When I'm here…\n"
	.string "I shiver with fear…$"

MtPyre_4F_Text_Grunt2Defeat:
	.string "Losing, I dislike…$"

MtPyre_4F_Text_Grunt2PostBattle:
	.string "I want to see dreadful things…\n"
	.string "I can't leave…\p"
	.string "Stay…\n"
	.string "Won't you stay with me?$"

