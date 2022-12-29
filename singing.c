#region Local Var
	var uLocal_0 = 24;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	vector3 vLocal_98[24] = "";
	bool bLocal_101 = false;
#endregion
void __EntryFunction__()
{
	var uVar0;
	bLocal_101 = true;
	func_1();
	func_2();
	while (true)
	{
		if (func_3() || !func_4(&uVar0, &bLocal_101, 0))
		{
			func_5();
		}
		BUILTIN::WAIT(0);
	}
}

void func_1()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_5();
	}
}

void func_2()
{
	StringCopy(&cLocal_98, func_6(Global_1935630.f_57), 24);
	__LIB_0__::func_928(&uLocal_0, Global_35, "ARTHUR", 0);
	__LIB_1__::func_104(&uLocal_0, cLocal_98, 0, -1, 0, 0);
	AUDIO::START_AUDIO_SCENE("player_idle_singing_scene");
	Global_1935630.f_54 = MISC::GET_GAME_TIMER();
	Global_1935630.f_57++;
	if (Global_1935630.f_57 >= 2)
	{
		Global_1935630.f_57 = 0;
	}
}

bool func_3()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_98))
	{
		return !__LIB_7__::func_283(&cLocal_98);
	}
	return true;
}

bool func_4(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	iVar0 = 1;
	*uParam0 = 0;
	*bParam1 = 1;
	if (__LIB_2__::func_407(0))
	{
		iVar0 = 0;
	}
	if (!bParam2)
	{
		if (__LIB_0__::func_704())
		{
			iVar0 = 0;
		}
	}
	if ((__LIB_2__::func_776() || __LIB_2__::func_84()) || __LIB_0__::func_65(&Global_1393447, 16))
	{
		*uParam0 = 1;
		*bParam1 = 0;
		iVar0 = 0;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (!bParam2)
		{
			if (!PED::IS_PED_IN_ANY_BOAT(Global_35))
			{
				Global_1935630.f_55 = MISC::GET_GAME_TIMER();
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (TASK::IS_PED_SPRINTING(iVar1) || __LIB_12__::func_202(iVar1))
			{
				iVar0 = 0;
			}
		}
		if (PED::IS_PED_FALLING(iVar1))
		{
			iVar0 = 0;
			*uParam0 = 1;
			*bParam1 = 0;
		}
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		iVar0 = 0;
		*uParam0 = 1;
		*bParam1 = 0;
	}
	if (!bParam2)
	{
		if (Global_1935630.f_55 + 30000 > MISC::GET_GAME_TIMER())
		{
			iVar0 = 0;
		}
	}
	if (__LIB_1__::func_149(1) > 0)
	{
		iVar0 = 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &uVar2, 1, 1))
	{
		iVar0 = 0;
		*bParam1 = 0;
	}
	if (!bParam2)
	{
		if (!__LIB_6__::func_688(__LIB_2__::func_954()))
		{
			iVar0 = 0;
		}
		if (__LIB_2__::func_117(128))
		{
			iVar0 = 0;
		}
	}
	if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		*uParam0 = 1;
		iVar0 = 0;
		*bParam1 = 0;
	}
	if (Global_1935630.f_28 + 30000 > MISC::GET_GAME_TIMER())
	{
		*uParam0 = 1;
		iVar0 = 0;
		*bParam1 = 0;
	}
	if (PED::_0x285D36C5C72B0569(Global_35) + 30000f) > IntToFloat(MISC::GET_GAME_TIMER())
	{
		*uParam0 = 1;
		iVar0 = 0;
		*bParam1 = 0;
	}
	if (bParam2)
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) || ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
		{
			*uParam0 = 1;
			iVar0 = 0;
			*bParam1 = 1;
		}
	}
	if (!bParam2)
	{
		if (__LIB_0__::func_12() != -1)
		{
			if (__LIB_1__::func_120(__LIB_0__::func_12()))
			{
				*uParam0 = 1;
			}
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_5()
{
	Global_1935630.f_56 = 0;
	AUDIO::STOP_AUDIO_SCENE("player_idle_singing_scene");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_98))
	{
		if (__LIB_7__::func_283(&cLocal_98))
		{
			__LIB_5__::func_239(&cLocal_98, bLocal_101, 0);
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

char* func_6(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ARTSO_JACKHALL";
		case 1:
			return "ARTSO_KEYHOLE";
		default:
			break;
	}
	return "";
}

