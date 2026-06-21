MtPyre_4F_MapScripts::
	.byte 0

@ Seems like the scripts for the 4F and 5F were swapped

MtPyre_5F_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_5F_Text_Grunt3Intro, MtPyre_5F_Text_Grunt3Defeat
	msgbox MtPyre_5F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_5F_Text_Grunt3Intro:
	.string "Teacher…\n"
	.string "Please watch over my progress!$"

MtPyre_5F_Text_Grunt3Defeat:
	.string "Teacher…\n"
	.string "Please forgive me!$"

MtPyre_5F_Text_Grunt3PostBattle:
	.string "Until I improve, my teacher, who rests\n"
	.string "here, will never find true peace…$"

