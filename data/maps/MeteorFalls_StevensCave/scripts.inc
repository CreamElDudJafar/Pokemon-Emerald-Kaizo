MeteorFalls_StevensCave_MapScripts::
	.byte 0

MeteorFalls_StevensCave_EventScript_SHF::
	lock
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_SHF, MeteorFalls_StevensCave_EventScript_Defeated
	waitse
	playse MUS_VS_KYOGRE_GROUDON
	applymovement LOCALID_METEOR_FALLS_SHF, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_METEOR_FALLS_SHF, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_METEOR_FALLS_SHF, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst, MSGBOX_DEFAULT
	#if defined(UPDATE1_1) || defined(AESTHETICS)
	trainerbattle_no_intro TRAINER_SHF, MeteorFalls_StevensCave_Text_SHFDefeat
	#else
	trainerbattle_no_intro TRAINER_STEVEN_TAG, MeteorFalls_StevensCave_Text_SHFDefeat
	#endif
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_METEOR_FALLS_SHF
	release
	end

MeteorFalls_StevensCave_EventScript_Defeated::
	applymovement LOCALID_METEOR_FALLS_SHF, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	release
	end

MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst:
	.string "Congratulations {PLAYER}{KUN}.\n"
	.string "Perhaps you are curious on what is\l"
	.string "in store for you next?\p"
	.string "I can help.\n"
	.string "However…\p"
	.string "You probably have some resentment\n"
	.string "for some of your struggles.\p"
	.string "Here is your chance. Let us hope\n"
	.string "that you are prepared.\p"
	.string "Okay, {PLAYER}{KUN}, allow me to bring\n"
	.string "some atmosphere.$"

MeteorFalls_StevensCave_Text_SHFDefeat:
	.string "…\p"
	.string " At least I tried my best…$"

MeteorFalls_StevensCave_Text_MyPredictionCameTrue:
	.string "SHF: I believe this will be my\n"
	.string "final work.\p"
	.string "My time is done…\p"
	.string "If you haven't done so, there are\n"
	.string "gym rematches…\p"
	.string "Places with event tickets…\p"
	.string "TRICK HOUSE surprises…\p"
	.string "Trades…\n"
	.string "And LEGENDARIES.\p"
	.string "I thank you for your time.$"

