#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
#endregion
void __EntryFunction__()
{
	struct<2> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (!ScriptParam_0.f_3)
		{
			__LIB_9__::func_268(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_1.f_2 = 1086324736;
	Var0.f_1.f_11.f_1 = 20;
	Var0.f_1.f_33 = 20;
	Var0.f_1 = joaat("CONSUMABLE_COFFEE");
	Var0.f_1.f_2 = 4f;
	if (!ScriptParam_0.f_3)
	{
		__LIB_9__::func_268(1);
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (!ScriptParam_0.f_3)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		}
		switch (Var0)
		{
			case 0:
				if (__LIB_0__::func_144(Var0.f_1, 0))
				{
					__LIB_9__::func_269(&(Var0.f_1));
				}
				__LIB_0__::func_19(&Var0, 1);
				break;
			case 1:
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && (PED::_0x569F1E1237508DEB(Global_35) == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_ARTHUR") || PED::_0x569F1E1237508DEB(Global_35) == joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR")))
				{
					PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "BLOCK_COFFEE_DISCARD_PROMPT", true, 1);
					PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "SHOW_COFFEE_KNEEL_DISCARD_PROMPT", true, 1);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
				{
					Var0.f_1.f_1++;
					if (__LIB_0__::func_190())
					{
						__LIB_3__::func_180(1);
					}
					else if (__LIB_0__::func_189())
					{
						__LIB_3__::func_180(0);
					}
					__LIB_9__::func_318(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
				}
				if (IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2 || ((MISC::GET_FRAME_COUNT() % 10) == 0 && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f))
				{
					__LIB_0__::func_19(&Var0, 2);
				}
				break;
			case 2:
				PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "BLOCK_COFFEE_DRINK_PROMPT", true, 1);
				PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "BLOCK_COFFEE_DISCARD_PROMPT", true, 1);
				if (TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35) != joaat("DRINK_COFFEE_HOLD"))
				{
				}
				else
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && (PED::_0x569F1E1237508DEB(Global_35) == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_ARTHUR") || PED::_0x569F1E1237508DEB(Global_35) == joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR")))
					{
						TASK::_0xB35370D5353995CB(Global_35, joaat("DRINK_COFFEE_PUT_AWAY_KNEELING"), 1048576000 /* Float: 0.25f */);
					}
					else
					{
						TASK::_0xB35370D5353995CB(Global_35, joaat("DRINK_COFFEE_PUT_AWAY"), 1048576000 /* Float: 0.25f */);
					}
					__LIB_0__::func_19(&Var0, 3);
				}
				break;
			case 3:
				break;
		}
		BUILTIN::WAIT(0);
	}
	if (!ScriptParam_0.f_3)
	{
		__LIB_9__::func_268(0);
	}
}

