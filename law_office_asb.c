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
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	bool bLocal_14 = false;
	struct<503> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
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
	bool bVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Local_15.f_389 = ScriptParam_0.f_1;
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		Local_15 = 3;
		bVar0 = true;
	}
	while (true)
	{
		__LIB_10__::func_220(bVar0);
		if (bVar0)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (Local_15)
			{
				case 0:
					MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
					func_2(&Local_15);
					__LIB_10__::func_125(&Local_15);
					__LIB_1__::func_649(&Local_15, 1);
					break;
				case 1:
					if (__LIB_10__::func_126(&Local_15))
					{
						if (__LIB_0__::func_0(&Local_15))
						{
							__LIB_10__::func_59();
							__LIB_1__::func_649(&Local_15, 2);
						}
					}
					break;
				case 2:
					if (func_8())
					{
						__LIB_1__::func_649(&Local_15, 3);
					}
					break;
				case 3:
					if (__LIB_10__::func_216(&(Local_15.f_3)))
					{
						if (!bVar0)
						{
							__LIB_10__::func_212(&Local_15, 0);
						}
					}
					else
					{
						__LIB_10__::func_151();
					}
					break;
			}
			if (!bVar0)
			{
				if (Local_15 > 0)
				{
					if (!__LIB_0__::func_1(Local_15.f_388, 64))
					{
						if (__LIB_2__::func_901(Local_15.f_387, Global_35))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_15.f_460)))
							{
								__LIB_2__::func_478(Global_35, Local_15.f_387, &(Local_15.f_460), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							__LIB_0__::func_7(&(Local_15.f_388), 64);
						}
					}
					if (__LIB_10__::func_221(&Local_15))
					{
						__LIB_10__::func_212(&Local_15, 0);
					}
				}
			}
			BUILTIN::WAIT(0);
		}
	}
}

void func_2(int iParam0)
{
	int iVar0;
	int iVar1;
	if (Global_1935630.f_12)
	{
		return;
	}
	func_18(iParam0);
	__LIB_10__::func_60(iParam0->f_2, &iVar0);
	iParam0->f_390 = { VOLUME::_GET_VOLUME_COORDS(iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
	{
		iParam0->f_387 = __LIB_3__::func_624(Global_35);
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
		{
			iVar1 = PED::_GET_LAST_MOUNT(Global_35);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				iParam0->f_387 = __LIB_3__::func_624(iVar1);
			}
		}
		PED::_0xED9582B3DA8F02B4(1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
	{
		return;
	}
	else if (DECORATOR::DECOR_EXIST_ON(iParam0->f_387, "bDeadOrAlive") && DECORATOR::DECOR_GET_BOOL(iParam0->f_387, "bDeadOrAlive"))
	{
		__LIB_0__::func_7(&(iParam0->f_388), 8);
	}
	else
	{
		__LIB_0__::func_8(&(iParam0->f_388), 8);
	}
	if (!__LIB_0__::func_1(iParam0->f_388, 1))
	{
		if (__LIB_10__::func_61(iParam0->f_387, __LIB_0__::func_1(iParam0->f_388, 8)))
		{
			__LIB_0__::func_7(&(iParam0->f_388), 1);
		}
		else
		{
			__LIB_0__::func_8(&(iParam0->f_388), 1);
		}
	}
	if (!__LIB_0__::func_1(iParam0->f_388, 1))
	{
		return;
	}
	__LIB_10__::func_176(iParam0);
	if (!__LIB_3__::func_186(iParam0->f_389, 8))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_387, false);
	}
	__LIB_10__::func_224(iParam0);
}

bool func_8()
{
	__LIB_10__::func_177(&Local_15);
	__LIB_10__::func_213(&Local_15);
	switch (Local_15.f_1)
	{
		case 0:
			if (__LIB_2__::func_1(Local_15.f_387, 0, 0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(Local_15.f_387, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_387, true);
			}
			__LIB_4__::func_722(&Local_15, 1);
			break;
		case 1:
			__LIB_10__::func_127();
			__LIB_10__::func_214(__LIB_0__::func_12() == Local_15.f_2);
			if (func_35(&(Local_15.f_3), 1))
			{
				__LIB_1__::func_683(&(Local_15.f_3.f_329), 67108864);
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_15.f_387, true);
				__LIB_4__::func_722(&Local_15, 2);
			}
			else if (__LIB_3__::func_186(Local_15.f_389, 256))
			{
				__LIB_0__::func_769();
				__LIB_4__::func_722(&Local_15, 3);
			}
			break;
		case 2:
			__LIB_10__::func_127();
			__LIB_10__::func_181();
			if (!__LIB_3__::func_186(Local_15.f_389, 32))
			{
				if (__LIB_0__::func_27(Local_15.f_3.f_329, 2048))
				{
					if (PED::_0x5C16855277819BBF() >= 1)
					{
						__LIB_10__::func_128(Local_15.f_389, 32);
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_15.f_387) || !ENTITY::_0x88AD6CC10D8D35B2(Local_15.f_387))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_15.f_387, true, true);
						}
						PED::SET_PED_KEEP_TASK(Local_15.f_387, true);
						__LIB_3__::func_608(Local_15.f_387);
					}
				}
			}
			if (func_42(&(Local_15.f_3)))
			{
				if (!Local_15.f_501)
				{
					AUDIO::DISABLE_PED_PAIN_AUDIO(Local_15.f_387, false);
					Local_15.f_501 = 1;
				}
				__LIB_10__::func_151();
				if (!__LIB_0__::func_266(Global_35, Local_15.f_390, 35f, 1, 1))
				{
					return true;
				}
			}
			else if (__LIB_3__::func_186(Local_15.f_389, 256))
			{
				__LIB_0__::func_769();
				__LIB_4__::func_722(&Local_15, 3);
			}
			break;
		case 3:
			if (!__LIB_3__::func_186(Local_15.f_389, 256))
			{
				Global_1395482.f_115 = __LIB_0__::func_1(Local_15.f_388, 4);
				Global_1395482.f_114 = Local_15.f_498;
				__LIB_1__::func_649(&Local_15, 0);
				__LIB_4__::func_722(&Local_15, 0);
			}
			break;
	}
	return false;
}

void func_18(int iParam0)
{
	iParam0->f_2 = 78;
	StringCopy(&(iParam0->f_398), "ANS", 24);
	StringCopy(&(iParam0->f_401), "", 24);
	__LIB_0__::func_7(&(iParam0->f_388), -2147483648);
	Global_1395482.f_1 = 4;
}

bool func_35(var uParam0, bool bParam1)
{
	__LIB_10__::func_223(uParam0);
	__LIB_10__::func_161(uParam0);
	if (__LIB_10__::func_138(uParam0))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	switch (uParam0->f_59)
	{
		case 0:
			Global_1392235.f_4 = 1;
			__LIB_10__::func_66(uParam0, 1);
			break;
		case 1:
			if (__LIB_10__::func_138(uParam0))
			{
				uParam0->f_308 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(__LIB_10__::func_45(uParam0->f_300), 0f, 0f, 0f, 20f, 20f, 20f, __LIB_0__::func_93());
				__LIB_2__::func_261(uParam0->f_308, "BountyHuntingRewardVolume", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
				if (uParam0->f_300 == 26)
				{
					uParam0->f_72 = PED::ADD_SCENARIO_BLOCKING_AREA(-1813.668f, -353.7011f, 160.4116f, -1811.668f, -351.7011f, 162.4116f, 0, 15);
				}
				uParam0->f_309 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(__LIB_10__::func_67(uParam0->f_300), 0f, 0f, 0f, 4f, 4f, 4f, "Scenario Blocking");
				uParam0->f_73 = PED::_0x4C39C95AE5DB1329(uParam0->f_309, 0, 15);
				ENTITY::_0x18FF3110CF47115D(uParam0->f_67, 1, 0);
				if (!Global_1935630.f_12)
				{
					if (__LIB_0__::func_181())
					{
						__LIB_10__::func_139(uParam0, Global_35, "John");
					}
					else
					{
						__LIB_10__::func_139(uParam0, Global_35, "Arthur");
					}
				}
				__LIB_10__::func_140(uParam0, 1);
				__LIB_10__::func_141(uParam0);
				__LIB_10__::func_147(uParam0->f_300);
				__LIB_10__::func_148(uParam0->f_300);
				__LIB_10__::func_66(uParam0, 2);
			}
			break;
		case 2:
			if (__LIB_10__::func_68(uParam0))
			{
				__LIB_10__::func_183(uParam0);
				__LIB_10__::func_152(uParam0);
				__LIB_10__::func_66(uParam0, 3);
			}
			break;
		case 3:
			if (bParam1)
			{
				func_110(uParam0);
			}
			__LIB_10__::func_193(uParam0);
			__LIB_10__::func_219(uParam0);
			if (__LIB_1__::func_410(Global_36, __LIB_10__::func_45(uParam0->f_300), 20f, 1))
			{
				__LIB_10__::func_152(uParam0);
			}
			if (__LIB_10__::func_69(uParam0))
			{
				__LIB_10__::func_183(uParam0);
				__LIB_10__::func_66(uParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_42(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
	{
		func_110(uParam0);
	}
	if (__LIB_2__::func_157(uParam0->f_306, Global_36))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 328, true);
	}
	__LIB_10__::func_223(uParam0);
	__LIB_10__::func_193(uParam0);
	__LIB_10__::func_196(uParam0);
	__LIB_10__::func_161(uParam0);
	__LIB_10__::func_219(uParam0);
	if (__LIB_10__::func_138(uParam0))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	if (uParam0->f_60 >= 4)
	{
		__LIB_10__::func_162(uParam0);
	}
	switch (uParam0->f_60)
	{
		case 0:
			break;
		case 1:
			if (__LIB_10__::func_189(uParam0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_67, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_67, 253, true);
				__LIB_10__::func_71(uParam0, 2);
			}
			break;
		case 2:
			__LIB_10__::func_188(uParam0);
			EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
			__LIB_10__::func_217(uParam0, 10);
			__LIB_1__::func_148(&(uParam0->f_364));
			uParam0->f_367 = 0;
			__LIB_1__::func_544(uParam0->f_306);
			if (TASK::_0x916B8E075ABC8B4E(uParam0->f_69, 1))
			{
				TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
			}
			if (!PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_69, uParam0->f_371))
			{
				__LIB_10__::func_72(uParam0);
			}
			if (__LIB_10__::func_73(uParam0->f_65) != 0)
			{
				COMPENDIUM::COMPENDIUM_GANG_BOUNTY_CAPTURED(__LIB_10__::func_73(uParam0->f_65));
			}
			__LIB_10__::func_71(uParam0, 3);
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
			{
				if (__LIB_10__::func_74(uParam0))
				{
					if (__LIB_10__::func_149(uParam0))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
						__LIB_1__::func_148(&(uParam0->f_312));
						__LIB_0__::func_37(&(uParam0->f_318));
						uParam0->f_361 = 1;
						__LIB_10__::func_71(uParam0, 4);
					}
				}
				else if (!uParam0->f_367)
				{
					if (__LIB_0__::func_264(&(uParam0->f_364)) > 10f || !__LIB_0__::func_266(Global_35, __LIB_10__::func_62(uParam0->f_300, uParam0->f_65), 30f, 1, 1))
					{
						__LIB_10__::func_197(uParam0, 2048, 1);
						uParam0->f_367 = 1;
						__LIB_0__::func_37(&(uParam0->f_364));
					}
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&(uParam0->f_312)) > 2f || __LIB_0__::func_58(uParam0))
			{
				if (!__LIB_0__::func_27(uParam0->f_328, 128))
				{
					if (__LIB_10__::func_198(uParam0))
					{
						__LIB_3__::func_707(100, 1);
						__LIB_1__::func_148(&(uParam0->f_318));
						__LIB_1__::func_683(&(uParam0->f_328), 128);
					}
				}
				else if (!__LIB_0__::func_27(uParam0->f_329, 256))
				{
					if (!__LIB_0__::func_163(Global_35, -76381094) && !__LIB_0__::func_266(Global_35, __LIB_10__::func_62(uParam0->f_300, uParam0->f_65), 2f, 1, 1))
					{
						__LIB_10__::func_182(uParam0);
					}
				}
			}
			if (uParam0->f_63 != 11)
			{
				__LIB_10__::func_222(uParam0);
			}
			else
			{
				if (__LIB_10__::func_145(uParam0))
				{
					__LIB_10__::func_71(uParam0, 5);
				}
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, true, 0))
				{
					__LIB_10__::func_71(uParam0, 6);
				}
			}
			break;
		case 5:
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(TASK::_0xD04241BBF6D03A5E(Global_35)))
			{
				__LIB_1__::func_148(&(uParam0->f_318));
				__LIB_10__::func_71(uParam0, 6);
			}
			break;
		case 6:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_30[0 /*14*/].f_1, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
				{
					if (!__LIB_0__::func_163(uParam0->f_69, 150319005))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
					}
				}
				__LIB_10__::func_217(uParam0, 12);
				func_135(uParam0);
				return true;
			}
			break;
	}
	return false;
}

void func_110(var uParam0)
{
	struct<4> Var0;
	struct<4> Var4;
	struct<4> Var8;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_69) && uParam0->f_62 != 0)
	{
		__LIB_10__::func_85(uParam0, 0);
	}
	if ((uParam0->f_301 == 2 && TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_371)) && PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_69, uParam0->f_371))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uParam0->f_69, 0, 1);
	}
	switch (uParam0->f_62)
	{
		case 0:
			if (__LIB_10__::func_199(uParam0))
			{
				__LIB_10__::func_85(uParam0, 1);
			}
			break;
		case 1:
			if (uParam0->f_25)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
				{
					if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_371))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
						{
							__LIB_10__::func_86(uParam0);
						}
						else
						{
							if (uParam0->f_301 == 0)
							{
								Var4 = { __LIB_4__::func_494(uParam0->f_30[0 /*14*/].f_1, "Sheriff", uParam0->f_30[0 /*14*/].f_9) };
								uParam0->f_371 = __LIB_2__::func_944(joaat("SC_BOUNTY_HUNTER_SHERIFF"), Var4, Var4.f_3, 0, 0, 0);
							}
							else
							{
								uParam0->f_371 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(uParam0->f_4, joaat("SC_BOUNTY_HUNTER_SHERIFF"), 0.0086562f, 0.0409636f, 0.5f, 179.9999f, 0, 0, 1);
							}
							STREAMING::_REQUEST_SCENARIO_TYPE(joaat("SC_BOUNTY_HUNTER_SHERIFF"), 15, 0, 0);
							TASK::_0xE69FDA40AAC3EFC0(uParam0->f_371, 0);
						}
					}
					else
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_30[0 /*14*/].f_1))
						{
							Var0 = { __LIB_4__::func_494(uParam0->f_30[0 /*14*/].f_1, "Chair", uParam0->f_30[0 /*14*/].f_9) };
							func_233(uParam0->f_4, Var0, 2, 1073741824 /* Float: 2f */);
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
							{
								Var8 = { __LIB_4__::func_494(uParam0->f_30[0 /*14*/].f_1, "Book", uParam0->f_30[0 /*14*/].f_9) };
								func_233(uParam0->f_10, Var8, 0, 1073741824 /* Float: 2f */);
							}
						}
						__LIB_10__::func_72(uParam0);
						__LIB_10__::func_85(uParam0, 2);
					}
				}
			}
			break;
		case 2:
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_371))
			{
				__LIB_10__::func_85(uParam0, 1);
			}
			if (__LIB_10__::func_69(uParam0) && __LIB_0__::func_75(&(uParam0->f_372)))
			{
				if (__LIB_0__::func_265(&(uParam0->f_372)) > 1f)
				{
					__LIB_10__::func_200(uParam0);
					__LIB_1__::func_148(&(uParam0->f_372));
					__LIB_10__::func_85(uParam0, 3);
				}
			}
			else
			{
				__LIB_1__::func_148(&(uParam0->f_372));
			}
			break;
		case 3:
			if (__LIB_10__::func_69(uParam0))
			{
				if (__LIB_0__::func_265(&(uParam0->f_372)) > 1f || __LIB_10__::func_87(uParam0))
				{
					if (uParam0->f_360)
					{
						__LIB_10__::func_85(uParam0, 4);
					}
					else
					{
						__LIB_10__::func_85(uParam0, 5);
					}
				}
			}
			break;
		case 4:
			if (__LIB_10__::func_69(uParam0))
			{
				if (__LIB_10__::func_170(uParam0))
				{
					__LIB_10__::func_85(uParam0, 5);
				}
			}
			break;
		case 5:
			if (__LIB_10__::func_69(uParam0))
			{
				if (__LIB_10__::func_201(uParam0))
				{
					__LIB_1__::func_148(&(uParam0->f_372));
					__LIB_10__::func_85(uParam0, 6);
				}
			}
			break;
		case 6:
			if (__LIB_0__::func_265(&(uParam0->f_372)) > 1f)
			{
				if (uParam0->f_361 && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_30[0 /*14*/].f_1, false))
				{
					if (TASK::_0x916B8E075ABC8B4E(uParam0->f_69, 1))
					{
						if (uParam0->f_301 == 0)
						{
							TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
							TASK::_TASK_START_SCENARIO_IN_PLACE(uParam0->f_69, joaat("WORLD_HUMAN_STERNGUY_IDLES"), -1, true, 0, -1f, false);
							TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
						}
						else
						{
							TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
						}
					}
					__LIB_10__::func_85(uParam0, 7);
				}
			}
			break;
	}
}

void func_135(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_293(0, uParam0->f_300, 2, 0);
	__LIB_0__::func_870(iVar0);
	if (__LIB_0__::func_181())
	{
		iVar1 = __LIB_5__::func_297(iVar0);
		__LIB_7__::func_448(iVar0, iVar1 + 1);
	}
	else
	{
		iVar1 = __LIB_0__::func_895(iVar0);
		__LIB_1__::func_532(iVar0, iVar1 + 1);
	}
	__LIB_10__::func_171(iVar0, __LIB_0__::func_23());
	Global_1392235.f_4 = 0;
	if (__LIB_0__::func_27(uParam0->f_329, 512))
	{
		if (__LIB_2__::func_591(__LIB_10__::func_49(uParam0->f_65), 1, 0))
		{
			func_283(__LIB_10__::func_49(uParam0->f_65), 1, 0, -142743235, 0);
		}
	}
}

void func_233(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_358(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

int func_283(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = __LIB_2__::func_465(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!__LIB_2__::func_591(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_2__::func_528(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_2__::func_528(iParam0, 0, 0) - iParam1) < 0)
		{
			func_283(iParam0, __LIB_2__::func_528(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
	{
		if (!__LIB_1__::func_433(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!__LIB_2__::func_481(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_10__::func_207(iParam0, iParam1);
	return 1;
}

void func_358(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == __LIB_0__::func_57(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (__LIB_0__::func_125(iParam0))
	{
		if (__LIB_0__::func_126(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (__LIB_0__::func_27(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_358(iVar0, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_358(iVar2, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
	}
	if (!__LIB_0__::func_27(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (__LIB_0__::func_27(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (__LIB_0__::func_27(iParam5, 129))
	{
		if (__LIB_0__::func_27(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, __LIB_0__::func_27(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (__LIB_0__::func_125(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!__LIB_0__::func_27(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !__LIB_0__::func_27(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

