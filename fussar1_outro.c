#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	bool bLocal_6 = false;
	struct<4> Local_7 = { 0, 0, 0, 0 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion
void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		__LIB_18__::func_170(&Local_7);
	}
	__LIB_17__::func_753(&Local_7, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_7))
	{
		__LIB_5__::func_233(&Local_7);
		switch (__LIB_0__::func_57(Local_7))
		{
			case 0:
				if (__LIB_0__::func_0(&Local_7))
				{
					__LIB_0__::func_19(&Local_7, 1);
				}
				break;
			case 1:
				if (func_8(&Local_7))
				{
					__LIB_0__::func_19(&Local_7, 2);
				}
				break;
			case 2:
				if (func_9(&Local_7))
				{
					__LIB_0__::func_19(&Local_7, 3);
				}
				break;
			case 3:
				__LIB_18__::func_170(&Local_7);
				break;
		}
		BUILTIN::WAIT(0);
	}
	__LIB_18__::func_170(&Local_7);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_8(var uParam0)
{
	if ((!__LIB_4__::func_802(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return false;
	}
	return func_21(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_4__::func_805())
	{
		iVar0 = 0;
	}
	if (!func_23(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_21(var uParam0)
{
	MISC::SET_BIT(&(Global_1956580.f_1), 5);
	STREAMING::_0x513F8AA5BF2F17CF(Global_1835011[42 /*74*/].f_18, 100f, 0);
	__LIB_6__::func_891(Global_35);
	ENTITY::SET_ENTITY_COORDS(Global_35, __LIB_9__::func_113(42), true, false, true, true);
	AUDIO::START_AUDIO_SCENE("Mission_Transition_Clouds_Scene");
	__LIB_1__::func_148(&uLocal_3);
	HUD::_0xC9CAEAEEC1256E54(-1679307491);
	return 1;
}

bool func_23(var uParam0)
{
	int iVar0;
	int iVar1;
	HUD::_0xC9CAEAEEC1256E54(-1679307491);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	__LIB_1__::func_725();
	__LIB_18__::func_283(42, 1, 1);
	iVar0 = __LIB_3__::func_918(42);
	iVar1 = __LIB_0__::func_80(iVar0);
	if (__LIB_0__::func_264(&uLocal_3) > 3f)
	{
		AUDIO::STOP_AUDIO_SCENE("Mission_Transition_Clouds_Scene");
		if (__LIB_0__::func_702(iVar0) && __LIB_3__::func_919(iVar1, 128))
		{
			if (__LIB_3__::func_919(iVar1, 512))
			{
				__LIB_4__::func_728(iVar1, 512);
			}
			if (__LIB_0__::func_91())
			{
				CAM::DO_SCREEN_FADE_IN(0);
				if (!bLocal_6)
				{
					bLocal_6 = __LIB_4__::func_253(joaat("CSTAG_FLOW_FUS1_POST"), joaat("CSTP_PERSIST_ACROSS_STATES"), -469960592, -1, 1, 1, 0);
				}
				MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
				HUD::_HIDE_HUD_COMPONENT(-1679307491);
				return true;
			}
		}
	}
	return false;
}

