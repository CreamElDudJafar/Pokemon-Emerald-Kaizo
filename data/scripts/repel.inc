EventScript_RepelWoreOff::
#ifdef REUSABLE_REPELS
	lockall
	checkitem VAR_LAST_USED_REPEL, 1
	goto_if_eq VAR_RESULT, TRUE, EventScript_RepelWoreOff_UseAnother
#endif
	msgbox Text_RepelWoreOff, MSGBOX_SIGN
	end

EventScript_RepelWoreOff_UseAnother::
	msgbox Text_RepelWoreOff_UseAnother MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, EventScript_RepelWoreOff_DoNotRenew
	copyvar VAR_0x8004, VAR_LAST_USED_REPEL
	callnative GetHoldEffectParam_Script
	copyvar VAR_REPEL_STEP_COUNT, VAR_RESULT
	bufferitemname STR_VAR_2, VAR_LAST_USED_REPEL
	removeitem VAR_LAST_USED_REPEL
	playse SE_REPEL
	waitse
	msgbox gText_PlayerUsedVar2NoPause, MSGBOX_SIGN
EventScript_RepelWoreOff_DoNotRenew::
	releaseall
	end

Text_RepelWoreOff:
	.string "REPEL's effect wore off…$"

Text_RepelWoreOff_UseAnother:
	.string "REPEL's effect wore off…\n"
	.string "Use another?$"
