Underwater_Route128_MapScripts::
	.byte 0

Underwater_Route128_EventScript_RestSign::
	lockall
	msgbox Underwater_Route128_Text_FeelingTired, MSGBOX_DEFAULT
	closemessage
	call Underwater_Route128_EventScript_Heal
	releaseall
	end

Underwater_Route128_EventScript_Heal::
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	fadescreen FADE_FROM_BLACK
	return

Underwater_Route128_Text_FeelingTired::
	.string "Feeling tired…\n"
	.string "Time to rest.$"

