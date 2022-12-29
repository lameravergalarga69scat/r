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
	vector3 vLocal_14 = { 0f, 0f, 0f };
	vector3 vLocal_17 = { 0f, 0f, 0f };
	vector3 vLocal_20 = { 0f, 0f, 0f };
	int iLocal_23[6] = { 0, 0, 0, 0, 0, 0 };
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
	var uLocal_48 = 5;
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
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82[5] = { 0, 0, 0, 0, 0 };
	int iLocal_88 = 0;
	struct<2> Local_89 = { 0, 0 } ;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = -1082130432;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	struct<100> Local_111[5];
	struct<17> Local_612[3];
	var uLocal_664[5] = { 0, 0, 0, 0, 0 };
	struct<32> Local_670[5];
	int iLocal_831 = 0;
	int iLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	int iLocal_835 = 0;
	var uLocal_836 = 0;
	int iLocal_837 = 0;
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	float fLocal_841 = 0f;
	bool bLocal_842 = false;
	bool bLocal_843 = false;
	struct<193> Local_844 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1037 = 0;
	struct<8> Local_1038 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_1046 = NULL;
	bool bLocal_1047 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_17 = { 0f, 0f, 0f };
	vLocal_20 = { -3726.051f, -2530.033f, -14.84395f };
	iLocal_77 = 1;
	iLocal_88 = 5;
	fLocal_841 = 0f;
	sLocal_1046 = "script_re@bandito_breakout";
	Local_844.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_844.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	Local_844.f_43 = __LIB_0__::func_12();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_1047 = true;
	}
	if (!bLocal_1047)
	{
		func_4();
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_1047, 538, 0);
		if (bLocal_1047)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			func_7();
			switch (iLocal_74)
			{
				case 0:
					if (func_8())
					{
						__LIB_0__::func_37(&uLocal_70);
						__LIB_3__::func_981(1);
					}
					else if (!__LIB_0__::func_75(&uLocal_70))
					{
						__LIB_1__::func_283(&uLocal_70, 0);
					}
					else if (__LIB_1__::func_285(&uLocal_70, 10f))
					{
						func_5();
					}
					break;
				case 1:
					if (__LIB_3__::func_669(&Local_844, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						__LIB_3__::func_981(3);
					}
					else if (Local_844.f_160)
					{
						func_5();
					}
					break;
				case 3:
					if (func_15() && func_16(Local_844.f_51, Local_844.f_51.f_3, &Local_670, &iLocal_82, 1, 0, -1, 1))
					{
						func_17(0);
						func_18();
						func_19();
						func_20();
						__LIB_9__::func_734(0);
						__LIB_3__::func_981(4);
					}
					break;
				case 4:
					func_22();
					if (func_23())
					{
						func_5();
					}
					if (func_24() != 11)
					{
						func_25();
					}
					if (func_26())
					{
						Local_844.f_50 = 1;
						func_5();
					}
					if (__LIB_3__::func_365(&Local_844, &iLocal_82, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_5();
					}
					break;
			}
			BUILTIN::WAIT(Local_844.f_158);
		}
	}
}

void func_4()
{
	vLocal_14 = { func_28(15, 0) };
	__LIB_3__::func_368(&Local_844, 1);
	func_30();
	func_31(&Local_670);
	__LIB_0__::func_267(0);
	LAW::_0x710448D44A64C213(0);
	__LIB_3__::func_352(&Local_844, 5);
}

void func_5()
{
	int iVar0;
	int iVar1;
	if (Local_844.f_44)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_82[0]) && !__LIB_2__::func_1(iLocal_82[0], 0, 0))
		{
			MISC::_0xCC3EDC5614B03F61(77);
		}
		else
		{
			PED::SET_PED_KEEP_TASK(iLocal_82[0], true);
			PED::_0x39A2FC5AF55A52B1(iLocal_82[0], -1);
			__LIB_3__::func_379(&(iLocal_82[0]), 1);
			if (__LIB_0__::func_71(iLocal_82[0]))
			{
				iVar0 = PED::GET_MOUNT(iLocal_82[0]);
				PED::SET_PED_KEEP_TASK(iVar0, true);
				PED::_0x39A2FC5AF55A52B1(iVar0, -1);
			}
			MISC::_0xCC3EDC5614B03F61(33);
		}
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (__LIB_2__::func_1(Local_670[iVar1 /*32*/].f_11, 0, 1))
		{
			PED::SET_PED_CONFIG_FLAG(Local_670[iVar1 /*32*/].f_11, 214, false);
		}
		iVar1++;
	}
	if (func_37(67108864, 0) && !func_37(134217728, 0))
	{
		__LIB_3__::func_353("REBBR_END", 0);
		func_39(134217728);
	}
	PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_23[4], 5, 0);
	PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_23[4], 3, 0);
	PATHFIND::_0xD17672447692478E(iLocal_23[4], 0);
	func_40(&iLocal_82);
	func_41();
	func_17(1);
	__LIB_3__::func_500(&uLocal_33);
	__LIB_3__::func_500(&uLocal_36);
	__LIB_3__::func_500(&uLocal_39);
	__LIB_3__::func_500(&uLocal_42);
	__LIB_3__::func_823(&Local_844, &iLocal_82, &uLocal_664, 0, uLocal_834, uLocal_833, 0, 1, 0, 1);
	__LIB_0__::func_267(1);
	LAW::_0x710448D44A64C213(1);
	__LIB_3__::func_380(Local_1038);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_838);
	PERSCHAR::_0x4F81EAD1DE8FA19B(PERSCHAR::_0x112DDF56300BC6E5(joaat("AMD_CORPSE_WAGON_DRIVER")));
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7()
{
	if (iLocal_76 < 8)
	{
		if ((((__LIB_1__::func_205(Global_35, iLocal_23[1], 1, 0) || __LIB_1__::func_205(Global_1935630.f_41, iLocal_23[1], 1, 0)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_82[1], Local_1038)) && !func_37(16, 0)) && !func_37(4, 0))
		{
			if (!func_47(0, 0))
			{
				__LIB_2__::func_214(iLocal_82[1], Global_35, func_48(40), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), 1, 1, 0, 0);
				func_50(0);
			}
			func_39(16);
		}
	}
}

bool func_8()
{
	switch (iLocal_75)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_844))
			{
				func_52();
				__LIB_9__::func_753(1);
			}
			break;
		case 1:
			if (!__LIB_3__::func_366(&Local_670))
			{
				return false;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1038, true, false))
			{
				return false;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1046))
			{
				return false;
			}
			if (!func_55())
			{
				return false;
			}
			func_56();
			return true;
	}
	return false;
}

int func_15()
{
	MISC::CLEAR_AREA(vLocal_14, 40f, 1064960);
	if (iLocal_838 == 0)
	{
		iLocal_838 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), Local_844.f_51, 60f, 60f, 80f, -1f, -1f, 4, 4);
	}
	if (MISC::IS_POSITION_OCCUPIED(Local_844.f_51, 20f, false, true, false, false, false, 0, false))
	{
		if (!__LIB_0__::func_75(&uLocal_30))
		{
			__LIB_1__::func_283(&uLocal_30, 0);
		}
		else if (__LIB_1__::func_285(&uLocal_30, 10f))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_16(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	int iVar0;
	if (*iParam4 != *iParam5)
	{
		return 0;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (__LIB_3__::func_354() || !__LIB_3__::func_434(iParam4[iVar0 /*32*/], iParam5[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_17(bool bParam0)
{
	if (bParam0)
	{
		__LIB_2__::func_161(Local_844.f_51, 20f, 5);
	}
	else
	{
		__LIB_2__::func_165(Local_844.f_51, 20f, 0, 0, 6);
	}
}

void func_18()
{
	int iVar0;
	Local_89 = { __LIB_3__::func_355() };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!__LIB_2__::func_1(iLocal_82[iVar0], 0, 1))
		{
		}
		else
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_670[iVar0 /*32*/].f_23)))
			{
				__LIB_2__::func_133(iLocal_82[iVar0], &(Local_670[iVar0 /*32*/].f_23), 0);
			}
			if (iLocal_82[iVar0] == iLocal_82[1])
			{
				__LIB_3__::func_285(iLocal_82[iVar0], &Local_844, 0);
			}
			Local_111[iVar0 /*100*/].f_3 = iVar0;
			ENTITY::_0x18FF3110CF47115D(iLocal_82[iVar0], 0, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_82[iVar0], 113, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_82[iVar0], 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_82[iVar0], 46, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_82[iVar0], true);
			if (func_72(Local_111[iVar0 /*100*/].f_3, 1))
			{
				__LIB_4__::func_999(Local_89, iLocal_82[iVar0]);
				__LIB_2__::func_967(&(Local_844.f_5), iLocal_82[iVar0], Local_670[iVar0 /*32*/].f_11, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_82[iVar0], 113, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_82[iVar0], 317, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_82[iVar0], 301, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_82[iVar0], 159, true);
				if (__LIB_2__::func_1(Local_670[iVar0 /*32*/].f_11, 0, 1))
				{
					PED::SET_PED_CONFIG_FLAG(Local_670[iVar0 /*32*/].f_11, 113, true);
					PED::SET_PED_CONFIG_FLAG(Local_670[iVar0 /*32*/].f_11, 214, true);
				}
				if (Local_111[iVar0 /*100*/].f_3 == 3)
				{
					Local_111[iVar0 /*100*/].f_11 = -149.03f;
					Local_111[iVar0 /*100*/] = 1;
				}
				else if (Local_111[iVar0 /*100*/].f_3 == 4)
				{
					Local_111[iVar0 /*100*/].f_11 = -107.87f;
					Local_111[iVar0 /*100*/] = 1;
				}
				PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_82[iVar0], "TaskCombat_Medium");
			}
			if (Local_111[iVar0 /*100*/].f_3 == 0)
			{
				AUDIO::STOP_PED_SPEAKING(iLocal_82[iVar0], true);
				PED::SET_PED_CONFIG_FLAG(iLocal_82[iVar0], 130, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_82[iVar0], 167, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_82[iVar0], 301, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_82[iVar0], 297, false);
			}
			__LIB_2__::func_930(iLocal_82[iVar0], 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_82[iVar0], 6, true);
		}
		iVar0++;
	}
	if (__LIB_0__::func_272(iLocal_82[2], 0))
	{
		iLocal_77 = 1;
	}
	func_77();
}

void func_19()
{
	iLocal_23[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_78(1), 0f, 0f, 17f, 11f, 15f, 7f, "volWarn");
	iLocal_23[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3629.785f, -2607.092f, -14.241f, 0f, 0f, 25f, 10.019f, 6.724f, 8f, "volBypass");
	iLocal_23[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3629.785f, -2607.092f, -14.241f, 0f, 0f, 25f, 30f, 30f, 8f, "volAvoid");
	iLocal_23[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3652.028f, -2612.489f, -14.241f, 0f, 0f, 0f, 60f, 50f, 8f, "volRoadBlock");
	POPULATION::_0xB56D41A694E42E86(iLocal_23[2], 10208, 0, 0, -1, -1, 0);
	iLocal_23[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volHorseAvoid");
	VOLUME::_0x39816F6F94F385AD(iLocal_23[5], -3648.4f, -2619.293f, -12.378f, 0f, 0f, 0f, 7f, 4f, 5f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23[5], -3657.305f, -2619.293f, -12.378f, 0f, 0f, 0f, 6f, 4f, 5f);
}

void func_20()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_82[iVar0], true, true);
		switch (iVar0)
		{
			case 2:
				__LIB_2__::func_272(iLocal_82[iVar0], joaat("WEAPON_REPEATER_CARBINE"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				break;
			case 0:
				__LIB_2__::func_272(iLocal_82[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				break;
			case 1:
				__LIB_2__::func_272(iLocal_82[iVar0], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				break;
			case 3:
				__LIB_2__::func_272(iLocal_82[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				break;
			case 4:
				__LIB_2__::func_272(iLocal_82[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				break;
		}
		iVar0++;
	}
}

void func_22()
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PATHFIND::_0xB03944057FD735BA(iLocal_23[4], 5, 0);
	PATHFIND::_0xB03944057FD735BA(iLocal_23[4], 3, 0);
	PATHFIND::_0xC1799FAFD2FDF52B(iLocal_23[4], 0, 0, 0);
}

bool func_23()
{
	if (__LIB_0__::func_94(Global_35, vLocal_14, 0) > 300f)
	{
		return true;
	}
	if (!__LIB_3__::func_645(&Local_844, &iLocal_82, 0, 0, 0, 0, 1, 0))
	{
		return true;
	}
	return false;
}

int func_24()
{
	return iLocal_76;
}

void func_25()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_82(iLocal_82[iVar0], 1097859072 /* Float: 15f */))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_82[iVar0], false);
		}
		iVar0++;
	}
	if (((iLocal_76 == 8 && __LIB_2__::func_1(iLocal_82[0], 0, 1)) && !func_37(1, 0)) && ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_82[0], Global_35, 1, 1))
	{
		__LIB_3__::func_356(iLocal_82[0], 942020339, 1);
		func_39(1);
	}
	if (func_84(&iLocal_82, &(Local_844.f_5), &iLocal_73, &iLocal_839, 0, 4, 1))
	{
		if (func_85(iLocal_839, iLocal_73))
		{
			Local_844.f_46 = 1;
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1038, false))
			{
			}
			func_86(iLocal_839);
			switch (iLocal_73)
			{
				case 16:
					if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iLocal_82[iLocal_839], joaat("WEAPON_THROWN_DYNAMITE"), 20f, &vLocal_17, 0, 0))
					{
						func_39(65536);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_82[0], false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_82[3], false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_82[4], false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_82[1], false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_82[2], false);
						EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vLocal_17, -1f, -1f, -1f, -1f, -1f, -1, -1);
					}
					break;
			}
			func_39(16);
			__LIB_9__::func_734(8);
			if (!func_37(2097152, 0))
			{
				if (iLocal_82[iLocal_839] == iLocal_82[2] || ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_82[2], Global_35, 1, 1))
				{
					func_39(2097152);
				}
			}
		}
		else if (iLocal_82[iLocal_839] == iLocal_82[0])
		{
			if (func_24() == 8)
			{
				if (!func_37(1, 0))
				{
					switch (iLocal_73)
					{
						case 2:
							__LIB_3__::func_356(iLocal_82[0], 942020339, 1);
							func_39(1);
							break;
					}
				}
			}
			else if (!func_37(16, 0) || func_24() >= 9)
			{
				switch (iLocal_73)
				{
					case 256:
						break;
					case 4:
					case 16:
					case 32:
					case 64:
					case 8192:
						if (iLocal_76 >= 9)
						{
							if (func_37(128, 0) && !func_37(1, 0))
							{
								func_39(1);
							}
							else
							{
								__LIB_3__::func_237(&(Local_844.f_5), &iLocal_73);
							}
						}
						else if ((!__LIB_2__::func_1(iLocal_82[1], 0, 1) || !__LIB_2__::func_1(iLocal_82[1], 0, 1)) || !__LIB_2__::func_1(iLocal_82[1], 0, 1))
						{
							func_39(16);
							__LIB_9__::func_734(8);
						}
						else
						{
							__LIB_3__::func_237(&(Local_844.f_5), &iLocal_73);
						}
						break;
					case 8:
						if ((__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_LASSO") && func_37(128, 0)) && !func_37(1, 0))
						{
							func_39(1);
						}
						else
						{
							__LIB_3__::func_237(&(Local_844.f_5), &iLocal_73);
						}
						break;
					default:
						func_39(1);
						break;
				}
			}
		}
	}
}

bool func_26()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_37(16, 0) && __LIB_2__::func_227(0, 1, Global_35, 1))
	{
		if (func_24() < 8)
		{
			func_90(3, 0, 0, 1);
			func_90(4, 0, 0, 1);
			__LIB_9__::func_734(8);
		}
	}
	if (func_37(1, 0))
	{
		if (iLocal_76 < 11 && iLocal_76 != 8)
		{
			__LIB_9__::func_734(11);
		}
	}
	if (iLocal_76 >= 1)
	{
		if (iLocal_76 < 8)
		{
			if (__LIB_2__::func_1(iLocal_82[0], 0, 1) || func_37(33554432, 0))
			{
				func_91();
			}
		}
		func_92(__LIB_2__::func_1(iLocal_82[0], 0, 1));
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1038, false))
		{
			fLocal_841 = ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1038);
		}
		if (!func_37(131072, 0))
		{
			if (INTERIOR::IS_INTERIOR_READY(iLocal_837))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_837);
				func_39(131072);
			}
		}
	}
	if (iLocal_76 >= 9)
	{
		if (func_93(0, 4096, 0))
		{
			func_94();
		}
	}
	else
	{
		func_95();
		func_96();
		func_97();
	}
	if (func_37(256, 0))
	{
		return false;
	}
	switch (iLocal_76)
	{
		case 0:
			func_98(1, 1);
			iLocal_837 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_82[0]);
			if (!func_37(131072, 0))
			{
				if (INTERIOR::IS_INTERIOR_READY(iLocal_837))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_837);
					func_39(131072);
				}
			}
			WEAPON::_0x14FF0C2545527F9B(Local_670[2 /*32*/].f_11, joaat("WEAPON_REPEATER_CARBINE"), iLocal_82[2]);
			WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_82[2], joaat("WEAPON_REPEATER_CARBINE"), true, -142743235);
			__LIB_9__::func_734(1);
			break;
		case 1:
			if (INTERIOR::IS_INTERIOR_READY(iLocal_837))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_837);
			}
			if (__LIB_0__::func_94(Global_35, Local_844.f_51, 1) <= 60f || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_82[1]))
			{
				__LIB_3__::func_208(&Local_844, Local_844.f_51, 0);
				if (!func_37(2, 0))
				{
					if (func_100(0))
					{
						func_39(2);
					}
				}
				else
				{
					func_101();
				}
				if (__LIB_3__::func_452(&Local_844, 1077936128 /* Float: 3f */, 1114636288 /* Float: 60f */, 35f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
				{
					__LIB_3__::func_353("REBBR_START", 0);
					__LIB_9__::func_734(2);
				}
			}
			break;
		case 2:
			func_103(&fLocal_841);
			if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1038, "Bool"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1038, "Bool", true, false);
			}
			func_104(iLocal_82[0], iLocal_82[1], 0, 1);
			func_104(iLocal_82[1], iLocal_82[0], 1, 1);
			func_104(iLocal_82[1], iLocal_82[0], 2, 1);
			func_104(iLocal_82[1], iLocal_82[0], 3, 1);
			if (func_104(iLocal_82[1], iLocal_82[0], 4, 1) || fLocal_841 > 20.8f)
			{
				Local_844.f_44 = 1;
				__LIB_9__::func_734(4);
			}
			break;
		case 4:
			func_103(&fLocal_841);
			func_104(iLocal_82[0], iLocal_82[1], 5, 1);
			func_104(iLocal_82[1], iLocal_82[0], 6, 1);
			func_104(iLocal_82[3], iLocal_82[1], 7, 1);
			func_104(iLocal_82[4], iLocal_82[1], 8, 1);
			if (func_104(iLocal_82[2], iLocal_82[1], 9, 1) || fLocal_841 > 38.3f)
			{
				__LIB_9__::func_734(6);
			}
			break;
		case 6:
			func_103(&fLocal_841);
			func_104(iLocal_82[0], iLocal_82[1], 10, 1);
			func_104(iLocal_82[0], iLocal_82[1], 11, 1);
			func_104(iLocal_82[1], iLocal_82[0], 12, 1);
			func_104(iLocal_82[1], iLocal_82[0], 13, 1);
			func_104(iLocal_82[0], iLocal_82[0], 14, 1);
			func_104(iLocal_82[1], iLocal_82[0], 15, 1);
			if (func_104(iLocal_82[1], iLocal_82[0], 16, 1) || fLocal_841 > 59.3f)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1038, "HORSE_A", Local_670[1 /*32*/].f_11, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1038, "HORSE_B", Local_670[4 /*32*/].f_11, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1038, "HORSE_C", Local_670[2 /*32*/].f_11, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1038, "HORSE_D", Local_670[3 /*32*/].f_11, 0);
				if (!func_37(524288, 0))
				{
					__LIB_3__::func_465(2, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
					func_39(524288);
				}
				if (!func_37(64, 0))
				{
					func_106(3, 64, 0);
					func_106(4, 64, 0);
				}
				__LIB_9__::func_734(7);
			}
			break;
		case 7:
			func_103(&fLocal_841);
			func_104(iLocal_82[1], iLocal_82[2], 17, 1);
			func_104(iLocal_82[3], iLocal_82[1], 18, 1);
			func_107();
			if (func_108(vLocal_20, 200f) && !__LIB_0__::func_48(Global_35, iLocal_82[1], 100f, 1))
			{
				__LIB_3__::func_237(&(Local_844.f_5), &iLocal_73);
				__LIB_9__::func_734(12);
			}
			break;
		case 8:
			if (!func_37(32, 0))
			{
				if (func_110(0))
				{
					Local_844.f_44 = 1;
					__LIB_3__::func_353("REBBR_FIGHT", 0);
					func_39(67108864);
					iVar0 = 0;
					while (iVar0 < 5)
					{
						if (__LIB_2__::func_1(Local_670[iVar0 /*32*/].f_11, 0, 1))
						{
							PED::SET_PED_CONFIG_FLAG(Local_670[iVar0 /*32*/].f_11, 214, false);
						}
						iVar0++;
					}
					func_39(32);
					func_111(128);
				}
			}
			else
			{
				func_112();
				func_113(vLocal_20);
				if (__LIB_2__::func_1(iLocal_82[0], 0, 1) && !func_37(1, 0))
				{
					iVar1 = PED::_0xCD66FEA29400A0B5(iLocal_82[0]);
					iVar2 = Global_35;
					if (iVar1 == iVar2)
					{
						PED::_0x4707E9C23D8CA3FE(iLocal_82[0], Global_35);
					}
				}
				if (func_114(0))
				{
					if (!func_37(524288, 0))
					{
						if (__LIB_0__::func_181())
						{
							if (__LIB_2__::func_1(iLocal_82[0], 0, 1))
							{
								__LIB_3__::func_465(12, joaat("HONOR_EVENT_INTERVENED"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
							}
							func_39(524288);
						}
					}
					__LIB_2__::func_461(0);
					__LIB_3__::func_353("REBBR_END", 0);
					func_39(134217728);
					if (!__LIB_2__::func_1(iLocal_82[0], 0, 1))
					{
						if (PED::_IS_PED_HOGTIED(iLocal_82[0]))
						{
							__LIB_9__::func_734(11);
						}
						else
						{
							__LIB_9__::func_734(12);
						}
					}
					else if (!func_93(0, 1, 0))
					{
						func_117(0, 1);
						if (__LIB_2__::func_65(iLocal_82[0], 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_82[0], true, false);
							__LIB_3__::func_237(&(Local_844.f_5), &iLocal_73);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_82[0], true);
						}
						func_111(128);
						bLocal_842 = __LIB_9__::func_172(&iLocal_82);
					}
					else
					{
						if (func_120(iLocal_82[0]))
						{
							WEAPON::_HIDE_PED_WEAPONS(iLocal_82[0], 2, true);
						}
						__LIB_0__::func_854(iLocal_82[0], 100f, 0);
						__LIB_2__::func_507(&(Local_844.f_5), 1000);
						__LIB_9__::func_734(9);
					}
				}
				else
				{
					func_123();
					if ((__LIB_2__::func_1(Local_670[2 /*32*/].f_11, 0, 1) && __LIB_0__::func_266(Local_670[2 /*32*/].f_11, Local_670[2 /*32*/].f_15, 0.5f, 1, 1)) && !__LIB_0__::func_48(Local_670[2 /*32*/].f_11, Global_35, 4f, 1))
					{
						if (__LIB_0__::func_48(iLocal_82[2], Local_670[2 /*32*/].f_11, 2f, 1) && !PED::IS_PED_IN_COMBAT(iLocal_82[2], 0))
						{
							if (__LIB_13__::func_669(iLocal_82[2], joaat("WEAPON_UNARMED"), 1, 0))
							{
								__LIB_2__::func_272(iLocal_82[2], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
							}
							else if (!PED::IS_PED_IN_COMBAT(iLocal_82[2], Global_35))
							{
								TASK::TASK_COMBAT_PED(iLocal_82[2], Global_35, 0, 0);
							}
						}
					}
					else if (!PED::IS_PED_IN_COMBAT(iLocal_82[2], 0))
					{
						TASK::TASK_COMBAT_PED(iLocal_82[2], Global_35, 0, 0);
					}
				}
			}
			break;
		case 9:
			func_126();
			if (!__LIB_0__::func_75(&uLocal_45))
			{
				__LIB_1__::func_283(&uLocal_45, 0);
			}
			else if (__LIB_1__::func_285(&uLocal_45, 2f))
			{
				if (!func_37(128, 0))
				{
					__LIB_2__::func_56(iLocal_82[0], 1, 1);
					func_39(128);
					if (func_120(iLocal_82[0]))
					{
						WEAPON::_HIDE_PED_WEAPONS(iLocal_82[0], 2, true);
					}
				}
				if (!func_120(iLocal_82[0]))
				{
					if ((__LIB_0__::func_48(iLocal_82[0], Global_35, 10f, 1) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_82[0], Global_35, 17)) && __LIB_3__::func_477(iLocal_82[0], Global_35))
					{
						if (!func_93(0, 4096, 0))
						{
							func_117(0, 4096);
						}
						func_129(!bLocal_842);
					}
					else if (!__LIB_0__::func_75(&uLocal_67))
					{
						__LIB_0__::func_202(iLocal_82[0], 0);
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_82[0], Global_35, 0f, 0f, 0f, 1f, -1, 8f, 1, 1, 1, 0, 1);
						__LIB_1__::func_283(&uLocal_67, 0);
						func_106(0, 1, 0);
					}
					else if (__LIB_1__::func_285(&uLocal_67, 10f) && !func_37(8192, 0))
					{
						if (!func_131(32, 0))
						{
							TASK::CLEAR_PED_SECONDARY_TASK(iLocal_82[0]);
							func_132(32);
							iLocal_78 = 3;
						}
					}
					if (func_37(8192, 0))
					{
						func_129(!bLocal_842);
					}
					if (func_131(32, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_82[0], sLocal_1046, "I_DONT_KNOW_POLICE", 1))
					{
						MAP::REMOVE_BLIP(&(uLocal_664[0]));
						if (func_133(&(Local_670[0 /*32*/].f_11)))
						{
							if (!func_134(iLocal_82[0], Local_670[0 /*32*/].f_11, 0, 1f))
							{
								func_39(1048576);
							}
						}
						else
						{
							func_39(1048576);
						}
						func_106(0, 1, 0);
						__LIB_9__::func_734(10);
					}
				}
			}
			break;
		case 10:
			func_129(!bLocal_842);
			if (__LIB_0__::func_71(iLocal_82[0]) || func_37(1048576, 0))
			{
				if (!func_93(0, 1, 0))
				{
					TASK::_TASK_MOVE_IN_TRAFFIC_3(iLocal_82[0], Global_35, 1f, 0, 0);
					func_117(0, 1);
				}
			}
			else if (__LIB_4__::func_303(Local_670[0 /*32*/].f_11))
			{
				if (!func_136(Local_670[0 /*32*/].f_11, iLocal_82[0]))
				{
					if (func_133(&(Local_670[0 /*32*/].f_11)))
					{
						func_134(iLocal_82[0], Local_670[0 /*32*/].f_11, 0, 1f);
					}
					else
					{
						func_39(1048576);
					}
				}
			}
			if (!__LIB_0__::func_48(iLocal_82[0], Global_35, 50f, 1))
			{
				__LIB_9__::func_734(12);
			}
			break;
		case 11:
			if (__LIB_2__::func_1(iLocal_82[0], 0, 1))
			{
				if (!func_131(8192, 0))
				{
					if (func_137(iLocal_82[0], Global_35, 47, 0, 1, 0, 1, 0))
					{
						func_132(8192);
					}
					TASK::_0x30B391915538EBE2(iLocal_82[0]);
					__LIB_3__::func_356(iLocal_82[0], 942020339, 1);
					__LIB_2__::func_73(iLocal_82[0], &(uLocal_664[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				}
				if (!PED::IS_PED_IN_COMBAT(iLocal_82[0], 0))
				{
					TASK::TASK_COMBAT_PED(iLocal_82[0], Global_35, 0, 0);
				}
			}
			else if (func_114(0))
			{
				__LIB_9__::func_734(12);
			}
			break;
		case 12:
			if (!func_37(134217728, 0))
			{
				__LIB_3__::func_353("REBBR_END", 0);
				func_39(134217728);
			}
			return true;
	}
	return false;
}

Vector3 func_28(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 15:
			switch (iParam1)
			{
				case 0:
					return -3625.013f, -2604.96f, -14.2406f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_30()
{
	__LIB_3__::func_302(&(Local_844.f_5), 0);
	__LIB_2__::func_51(&(Local_844.f_5), 1);
	__LIB_2__::func_111(&(Local_844.f_5), 1);
	__LIB_2__::func_50(&(Local_844.f_5), 1);
	__LIB_2__::func_105(&(Local_844.f_5), 1);
	__LIB_2__::func_104(&(Local_844.f_5), 1);
	__LIB_3__::func_387(&(Local_844.f_5), 1);
	__LIB_3__::func_232(&(Local_844.f_5), 1);
	__LIB_2__::func_715(&(Local_844.f_5), 1);
	__LIB_2__::func_634(&(Local_844.f_5), 1);
	__LIB_3__::func_232(&(Local_844.f_5), 0);
	__LIB_3__::func_231(&(Local_844.f_5), 0);
	__LIB_2__::func_180(&(Local_844.f_5), 0);
	__LIB_2__::func_613(&(Local_844.f_5), 0);
	func_157(&(Local_844.f_5), 1103626240 /* Float: 25f */, 1);
	__LIB_2__::func_507(&(Local_844.f_5), 5000);
}

void func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = iVar0;
		(uParam0[iVar0 /*32*/])->f_1 = func_158(iVar1);
		(uParam0[iVar0 /*32*/])->f_3 = func_159(iVar1);
		StringCopy(&((uParam0[iVar0 /*32*/])->f_23), func_160(iVar1), 64);
		(uParam0[iVar0 /*32*/])->f_6 = { func_78(iVar1) };
		(uParam0[iVar0 /*32*/])->f_9 = func_161(iVar1);
		if (func_72(iVar1, 1))
		{
			(uParam0[iVar0 /*32*/])->f_12 = __LIB_2__::func_185(5, 0, 1);
			(uParam0[iVar0 /*32*/])->f_13 = 0;
			(uParam0[iVar0 /*32*/])->f_19 = 1;
			(uParam0[iVar0 /*32*/])->f_15 = { func_163(iVar1) };
			(uParam0[iVar0 /*32*/])->f_18 = func_164(iVar1);
		}
		else
		{
			(uParam0[iVar0 /*32*/])->f_12 = 0;
		}
		__LIB_3__::func_478(&(Local_670[iVar0 /*32*/].f_22));
		iVar0++;
	}
	__LIB_3__::func_284(uParam0);
}

bool func_37(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_27(iLocal_79, iParam0))
	{
		if (bParam1)
		{
		}
		return true;
	}
	if (bParam1)
	{
	}
	return false;
}

void func_39(int iParam0)
{
	if (!__LIB_0__::func_27(iLocal_79, iParam0))
	{
		__LIB_1__::func_336(&iLocal_79, iParam0);
	}
}

void func_40(int iParam0)
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		bVar1 = __LIB_0__::func_394((*iParam0)[iVar0], Local_670[iVar0 /*32*/].f_11, 0);
		if (__LIB_1__::func_472(iLocal_82[iVar0], 180f, 30f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0[iVar0]);
			if (bVar1)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_670[iVar0 /*32*/].f_11));
			}
		}
		else
		{
			PED::_0x39A2FC5AF55A52B1((*iParam0)[iVar0], -1);
			if (bVar1)
			{
				PED::_0x39A2FC5AF55A52B1(Local_670[iVar0 /*32*/].f_11, -1);
			}
		}
		iVar0++;
	}
}

void func_41()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_23[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(iLocal_23[iVar0]);
		}
		iVar0++;
	}
}

bool func_47(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_27(iLocal_80, iParam0))
	{
		if (bParam1)
		{
		}
		return true;
	}
	if (bParam1)
	{
	}
	return false;
}

char* func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_BBR_ARM_V1_SHERIFF_GIVEUP";
		case 1:
			return "RE_BBR_ARM_V1_GLEAD_THREATEN_1";
		case 2:
			return "RE_BBR_ARM_V1_GLEAD_THREATEN_2";
		case 3:
			return "RE_BBR_ARM_V1_GLEAD_THREATEN_3";
		case 4:
			return "RE_BBR_ARM_V1_GLEAD_THREATEN_4";
		case 5:
			return "RE_BBR_ARM_V1_SHERIFF_GUNSAWAY";
		case 6:
			return "RE_BBR_ARM_V1_GLEAD_THANKLAW";
		case 7:
			return "RE_BBR_ARM_V1_BANDITO_C_LAUGH_1";
		case 8:
			return "RE_BBR_ARM_V1_BANDITO_D_LAUGH_1";
		case 9:
			return "RE_BBR_ARM_V1_PRISONER_GREET";
		case 10:
			return "RE_BBR_ARM_V1_SHERIFF_RELEASED";
		case 11:
			return "RE_BBR_ARM_V1_SHERIFF_MONEY";
		case 12:
			return "RE_BBR_ARM_V1_GLEAD_EXECUTE_1";
		case 13:
			return "RE_BBR_ARM_V1_GLEAD_EXECUTE_2";
		case 14:
			return "RE_BBR_ARM_V1_SHERIFF_BEG";
		case 15:
			return "RE_BBR_ARM_V1_GLEAD_EXECUTE_DRAW";
		case 16:
			return "RE_BBR_ARM_V1_GLEAD_EXECUTE_FIRE";
		case 17:
			return "RE_BBR_ARM_V1_GLEAD_SCATTER";
		case 18:
			return "RE_BBR_ARM_V1_BANDITO_C_LAUGH_2";
		case 19:
			return "RE_BBR_ARM_V1_BANDITO_D_LAUGH_2";
		case 20:
			return "RE_BBR_ARM_V1_WARNER_LEAVING_COMMENT";
		case 21:
			return "RE_BBR_ARM_V1_BANDITO_1ST_WARNING";
		case 22:
			return "RE_BBR_ARM_V1_BANDITO_2ND_WARNING";
		case 23:
			return "RE_BBR_ARM_V1_BANDITO_TOCOMBAT";
		case 24:
			return "RE_BBR_ARM_V1_WARNER_LEAVING_COMMENT";
		case 25:
			return "RE_BBR_ARM_V1_BANDITO2_1ST_WARNING";
		case 26:
			return "RE_BBR_ARM_V1_BANDITO2_2ND_WARNING";
		case 27:
			return "RE_BBR_ARM_V1_BANDITO2_TOCOMBAT";
		case 28:
			return "RE_BBR_ARM_V1_PLAYER_INIT_POS";
		case 29:
			return "RE_BBR_ARM_V1_PLAYER_INIT_NEG";
		case 30:
			return "RE_BBR_ARM_V1_WARNER_INIT_POS";
		case 31:
			return "RE_BBR_ARM_V1_WARNER_INIT_NEG";
		case 32:
			return "RE_BBR_ARM_V1_PLAYER_WARNER_APO";
		case 33:
			return "RE_BBR_ARM_V1_PLAYER_WARNER_ANT";
		case 34:
			return "DEFUSE_RESPONSE";
		case 35:
			return "SHAME_ON_YOU";
		case 36:
			return "DEFUSE_RESPONSE";
		case 37:
			return "SHAME_ON_YOU";
		case 38:
			return "RE_BBR_ARM_V1_GLEAD_WARN_AGGRO";
		case 39:
			return "RE_BBR_ARM_V1_GLEAD_WARN_AGGRO2";
		case 40:
			return "RE_BBR_ARM_V1_GLEAD_BYPASS";
		case 41:
			return "RE_BBR_ARM_V1_SHERIFF_CALL_OVER_1";
		case 42:
			return "RE_BBR_ARM_V1_SHERIFF_CALL_OVER_2";
		case 43:
			return "RE_BBR_ARM_V1_SHERIFF_CALL_OVER_3";
		case 44:
			return "RE_BBR_ARM_V1_SHERIFF_THANK_1";
		case 45:
			return "RE_BBR_ARM_V1_SHERIFF_THANK_2";
		case 46:
			return "RE_BBR_ARM_V1_SHERIFF_THANK_3";
		case 47:
			return "GUN_AGGRO_TRANSITION";
		case 48:
			return "RE_BBR_ARM_V1_PLAYER_SHERIFF_APO";
		case 49:
			return "RE_BBR_ARM_V1_PLAYER_SHERIFF_ANT";
		case 50:
			return "SUPPORT_GENERAL";
		case 51:
			return "SUPPORT_GENERAL";
		case 52:
			return "PANIC_COMMUNICATE";
		case 53:
			return "RE_BBR_ARM_V1_SHERIFF_COMBAT_1";
		case 54:
			return "RE_BBR_ARM_V1_SHERIFF_COMBAT_2";
		case 55:
			return "RE_BBR_ARM_V1_SHERIFF_COMBAT_3";
		case 56:
			return "RE_BBR_ARM_V1_SHERIFF_ILO_POST";
		case 57:
			return "RE_BBR_ARM_V1_PLAYER_GREET_PRISONER";
		case 58:
			return "RE_BBR_ARM_V1_PLAYER_ANT_PRISONER";
		case 59:
			return "RE_BBR_ARM_V1_PLAYER_GREET_LEADER";
		case 60:
			return "RE_BBR_ARM_V1_PLAYER_ANT_LEADER";
		default:
			break;
	}
	return "";
}

void func_50(int iParam0)
{
	__LIB_1__::func_336(&iLocal_80, iParam0);
}

void func_52()
{
	Local_1038.f_4 = "script@beat@town@banditobreakout@surrender";
	STREAMING::REQUEST_ANIM_DICT(sLocal_1046);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_1038.f_4))
	{
		Local_1038 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1038.f_4, 0, 0, false, true);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1038, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_1038);
		}
	}
}

bool func_55()
{
	var uVar0;
	int iVar1;
	int iVar2;
	uVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("AMD_CORPSE_WAGON_DRIVER"));
	if (PERSCHAR::_0x800DF3FC913355F3(uVar0))
	{
		iVar1 = PERSCHAR::_0x31C70A716CAE1FEE(uVar0);
		iVar2 = PERSCHAR::_0xF8DE7154F7D1458F(uVar0);
		if (__LIB_2__::func_1(iVar1, 0, 1))
		{
			if (Local_844.f_161 || ENTITY::IS_ENTITY_OCCLUDED(iVar1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iVar2) || Local_844.f_161)
					{
						PERSCHAR::_0x7B204F88F6C3D287(uVar0);
						VEHICLE::DELETE_VEHICLE(&iVar2);
					}
				}
				else
				{
					PERSCHAR::_0x7B204F88F6C3D287(uVar0);
				}
			}
			return false;
		}
	}
	return true;
}

void func_56()
{
	char* sVar0;
	if (func_195())
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1038))
		{
			return;
		}
		sVar0 = func_196(0);
		if (ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1038, sVar0) || ANIMSCENE::_0x23E33CB9F4A3F547(Local_1038, sVar0))
		{
			return;
		}
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1038, func_196(0));
	}
}

bool func_72(int iParam0, bool bParam1)
{
	if (iParam0 < 1 || iParam0 > 4)
	{
		return false;
	}
	if (!bParam1)
	{
		if (iParam0 == 2)
		{
			return false;
		}
	}
	return true;
}

void func_77()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = iVar0;
		if (iVar1 == 0)
		{
			__LIB_3__::func_350(iLocal_82[iVar0], &Local_612, 8f, 3, 0, 0, 0, 0, 0);
			__LIB_2__::func_602(&(Local_612[0 /*17*/]), "INTERACT_GREET", func_48(48), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_602(&(Local_612[2 /*17*/]), "INTERACT_INSULT", func_48(49), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		}
		else if (func_72(iVar1, 1))
		{
			__LIB_3__::func_350(iLocal_82[iVar0], &(Local_111[iVar0 /*100*/].f_35), 20f, 3, 0, 0, 0, 0, 0);
			__LIB_2__::func_602(&(Local_111[iVar0 /*100*/].f_35[0 /*17*/]), "INTERACT_GREET", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_3__::func_362(&(Local_111[iVar0 /*100*/].f_35[0 /*17*/]), 20f);
			__LIB_2__::func_602(&(Local_111[iVar0 /*100*/].f_35[2 /*17*/]), "INTERACT_INSULT", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_3__::func_362(&(Local_111[iVar0 /*100*/].f_35[2 /*17*/]), 20f);
		}
		iVar0++;
	}
}

Vector3 func_78(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -3623.28f, -2605.65f, -13.3565f;
		case 2:
			return -3623.8f, -2605.13f, -13.3399f;
		case 1:
			return -3633.4f, -2609.17f, -13.6964f;
		case 3:
			return -3637.88f, -2604.94f, -13.7342f;
		case 4:
			return -3634.03f, -2611.39f, -13.7372f;
	}
	return 0f, 0f, 0f;
}

bool func_82(int iParam0, float fParam1)
{
	var uVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_THROWN_DYNAMITE"), fParam1, &uVar0, 0, 0))
		{
			return true;
		}
		if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_THROWN_MOLOTOV"), fParam1, &uVar0, 0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_84(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*iParam3 < iParam4 || *iParam3 > iParam5)
	{
		*iParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_3__::func_453((*iParam0)[*iParam3], 0, iParam1, iParam2, 0, 0))
		{
			return true;
		}
		*iParam3++;
		if (*iParam3 > iParam5)
		{
			*iParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

bool func_85(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	if (!func_37(16, 0) && !func_37(33554432, 0))
	{
		switch (iVar0)
		{
			case 0:
				switch (iParam1)
				{
					case 256:
						return true;
					case 4:
						return true;
					case 2:
						return true;
				}
				break;
			default:
				return true;
		}
	}
	else if (iLocal_76 < 8)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (func_72(iVar1, 1) && (ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_82[iVar1], Global_35, 1, 1) || (__LIB_2__::func_1(Global_1935630.f_41, 0, 1) && ENTITY::_0x3EC28DA1FFAC9DDD(Global_1935630.f_41, Global_35, 1, 1))))
			{
				return true;
			}
			iVar1++;
		}
	}
	return false;
}

void func_86(int iParam0)
{
	if (iParam0 == 3)
	{
		Local_111[3 /*100*/].f_13 = 0f;
	}
	else
	{
		Local_111[3 /*100*/].f_13 = 0.5f;
	}
	if (iParam0 == 4)
	{
		Local_111[4 /*100*/].f_13 = 0.5f;
	}
	else
	{
		Local_111[4 /*100*/].f_13 = 0.5f;
	}
	if (iParam0 == 1)
	{
		Local_111[1 /*100*/].f_13 = 0.5f;
	}
	else
	{
		Local_111[1 /*100*/].f_13 = 1f;
	}
	if (iParam0 == 2)
	{
		Local_111[2 /*100*/].f_13 = 0.5f;
	}
	else
	{
		Local_111[2 /*100*/].f_13 = 1f;
	}
}

void func_90(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	__LIB_2__::func_451(&(Local_111[iParam0 /*100*/].f_14), 0);
	if (__LIB_2__::func_1(iLocal_82[iParam0], 0, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_82[iParam0], 301, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_82[iParam0], 317, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_82[iParam0], 297, true);
	}
	if (bParam1)
	{
		if (!__LIB_1__::func_489(&(Local_111[iParam0 /*100*/].f_35[0 /*17*/]), 0))
		{
			__LIB_2__::func_411(&(Local_111[iParam0 /*100*/].f_35[0 /*17*/]), 1, 0);
		}
	}
	else if (__LIB_1__::func_489(&(Local_111[iParam0 /*100*/].f_35[0 /*17*/]), 0))
	{
		__LIB_2__::func_411(&(Local_111[iParam0 /*100*/].f_35[0 /*17*/]), 0, 0);
	}
	if (bParam2)
	{
		if (!__LIB_1__::func_489(&(Local_111[iParam0 /*100*/].f_35[2 /*17*/]), 0))
		{
			__LIB_2__::func_411(&(Local_111[iParam0 /*100*/].f_35[2 /*17*/]), 1, 0);
		}
	}
	else if (__LIB_1__::func_489(&(Local_111[iParam0 /*100*/].f_35[2 /*17*/]), 0))
	{
		__LIB_2__::func_411(&(Local_111[iParam0 /*100*/].f_35[2 /*17*/]), 0, 0);
	}
	if (bParam3)
	{
		__LIB_2__::func_602(&(Local_111[iParam0 /*100*/].f_35[0 /*17*/]), "", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_2__::func_602(&(Local_111[iParam0 /*100*/].f_35[2 /*17*/]), "", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_82[iParam0], 315, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_82[iParam0], 301, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_82[iParam0], 317, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_82[iParam0], 297, false);
		MISC::_0xE98D55C5983F2509(iLocal_82[iParam0]);
	}
}

void func_91()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (func_37(4, 0) && !func_37(33554432, 0))
	{
		return;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Local_111[iVar0 /*100*/])
			{
				bVar2 = func_256(iVar0);
				switch (Local_111[iVar0 /*100*/].f_2)
				{
					case 0:
						__LIB_3__::func_500(&(Local_111[iVar0 /*100*/].f_88));
						if (iLocal_82[iVar0] == func_257())
						{
							if (Local_111[iVar0 /*100*/].f_2 < 7 && func_37(33554432, 0))
							{
								if (__LIB_2__::func_1(iLocal_82[0], 0, 1))
								{
									func_258(iVar0);
									func_39(64);
									func_117(iVar0, 4);
									func_259(Local_111[iVar0 /*100*/].f_3, 1);
								}
								else if (__LIB_2__::func_227(0, 1, Global_35, 1))
								{
									func_258(iVar0);
									func_39(64);
									func_117(iVar0, 4);
									func_259(Local_111[iVar0 /*100*/].f_3, 9);
								}
							}
						}
						if ((bVar2 && !func_260(iVar0, bVar2)) || func_93(iVar0, 512, 0))
						{
							if (((!func_37(64, 0) && iLocal_82[iVar0] == func_257()) || (func_93(iVar0, 64, 0) && func_47(2097152, 0))) || func_93(iVar0, 512, 0))
							{
								func_258(iVar0);
								func_39(64);
								func_117(iVar0, 4);
								func_106(iVar0, 8, 0);
								func_106(iVar0, 16, 0);
								func_259(Local_111[iVar0 /*100*/].f_3, 1);
							}
						}
						else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_82[iVar0], Local_1038))
						{
							if (__LIB_2__::func_123(iLocal_82[iVar0], iLocal_82[0], 0.8f))
							{
								if (!func_93(iVar0, 256, 0))
								{
									if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1038, false))
									{
										func_117(iVar0, 256);
									}
								}
							}
						}
						break;
					case 1:
						if (!func_262(iVar0, bVar2))
						{
							if (func_263(iVar0))
							{
								__LIB_0__::func_37(&(Local_111[iVar0 /*100*/].f_97));
								if (func_37(8388608, 0) || (!__LIB_2__::func_1(iLocal_82[0], 0, 1) && func_37(33554432, 0)))
								{
									func_259(Local_111[iVar0 /*100*/].f_3, 9);
								}
								else if (func_93(iVar0, 64, 0))
								{
									func_259(Local_111[iVar0 /*100*/].f_3, 2);
								}
								else if (func_37(33554432, 0))
								{
									bLocal_843 = true;
									func_259(Local_111[iVar0 /*100*/].f_3, 7);
								}
								else
								{
									if (Local_111[iVar0 /*100*/].f_12 == 0f || Local_111[iVar0 /*100*/].f_12 > __LIB_0__::func_94(iLocal_82[iVar0], Global_36, 1))
									{
										Local_111[iVar0 /*100*/].f_12 = __LIB_0__::func_94(iLocal_82[iVar0], Global_36, 1);
									}
									if (!func_47(2097152, 0))
									{
										func_259(Local_111[iVar0 /*100*/].f_3, 5);
									}
									else if (!func_47(4194304, 0))
									{
										func_259(Local_111[iVar0 /*100*/].f_3, 6);
									}
									else
									{
										bLocal_843 = true;
										func_259(Local_111[iVar0 /*100*/].f_3, 7);
									}
								}
							}
						}
						break;
					case 2:
						if (!func_262(iVar0, bVar2) && func_264(1))
						{
							if (!func_93(iVar0, 128, 0))
							{
								func_265(iVar0);
							}
						}
						break;
					case 3:
						if (!__LIB_0__::func_163(iLocal_82[iVar0], 242628503))
						{
							func_111(64);
							if (func_93(iVar0, 64, 0))
							{
								func_106(iVar0, 64, 0);
							}
							if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_82[iVar0], Local_1038))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1038, func_267(iVar0), iLocal_82[iVar0], 0);
							}
							Local_111[iVar0 /*100*/].f_12 = (__LIB_0__::func_94(iLocal_82[iVar0], Global_36, 1) - 0.5f);
							func_259(Local_111[iVar0 /*100*/].f_3, 0);
						}
						break;
					case 5:
						if (!func_262(iVar0, bVar2) && __LIB_2__::func_227(0, 1, Global_35, 1))
						{
							if (func_37(33554432, 0))
							{
								func_259(Local_111[iVar0 /*100*/].f_3, 7);
							}
							else if (func_268(iVar0))
							{
								__LIB_3__::func_500(&(Local_111[iVar0 /*100*/].f_88));
								func_259(Local_111[iVar0 /*100*/].f_3, 6);
							}
						}
						break;
					case 6:
						if (!func_262(iVar0, bVar2) && __LIB_2__::func_227(0, 1, Global_35, 1))
						{
							if (func_37(33554432, 0))
							{
								func_259(Local_111[iVar0 /*100*/].f_3, 7);
							}
							else if (func_269(iVar0))
							{
								__LIB_3__::func_500(&(Local_111[iVar0 /*100*/].f_88));
								func_39(256);
								func_259(Local_111[iVar0 /*100*/].f_3, 7);
							}
						}
						break;
					case 7:
						if (!__LIB_0__::func_75(&(Local_111[iVar0 /*100*/].f_88)))
						{
							__LIB_1__::func_283(&(Local_111[iVar0 /*100*/].f_88), 0);
						}
						if (func_262(iVar0, bVar2) && __LIB_2__::func_227(0, 1, Global_35, 1))
						{
							func_111(256);
							__LIB_3__::func_500(&(Local_111[iVar0 /*100*/].f_88));
						}
						else if (func_270(iVar0, bLocal_843))
						{
							func_259(Local_111[iVar0 /*100*/].f_3, 9);
						}
						break;
					case 9:
						if (__LIB_2__::func_227(0, 1, iLocal_82[1], 1) || func_37(8388608, 0))
						{
							if (func_37(256, 0))
							{
								if (!__LIB_2__::func_227(0, 1, iLocal_82[1], 1))
								{
								}
								else
								{
									if (iVar0 == 3)
									{
										iVar1 = 23;
									}
									else if (iVar0 == 4)
									{
										iVar1 = 27;
									}
									if (func_137(iLocal_82[iVar0], Global_35, iVar1, -5.5f, 0, 0, 1, 0))
									{
										func_259(Local_111[iVar0 /*100*/].f_3, 10);
									}
									Jump @1471; //curOff = 1414
									if (__LIB_2__::func_478(iLocal_82[iVar0], Global_35, "RE_BBR_ARM_V1_WARNER_LEAVING_COMMENT_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0))
									{
										func_259(Local_111[iVar0 /*100*/].f_3, 10);
									}
									Jump @1540; //curOff = 1471
									if (__LIB_2__::func_227(0, 1, iLocal_82[iVar0], 1))
									{
										func_106(iVar0, 8, 0);
										func_106(iVar0, 16, 0);
										func_111(256);
										func_117(iVar0, 32768);
										func_86(iVar0);
										func_39(16);
									}
								}
								iVar0++;
							}
						}
						default:
							break;
				}
			}
		}
	}
}

void func_92(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_72(iVar0, 1))
		{
			if (__LIB_2__::func_1(Local_670[iVar0 /*32*/].f_11, 0, 1))
			{
				if (!__LIB_4__::func_303(Local_670[iVar0 /*32*/].f_11))
				{
					if (__LIB_2__::func_157(iLocal_23[5], ENTITY::GET_ENTITY_COORDS(Local_670[iVar0 /*32*/].f_11, true, false)))
					{
						if (!PED::IS_PED_FLEEING(Local_670[iVar0 /*32*/].f_11))
						{
							TASK::_TASK_FLEE_FROM_COORD(Local_670[iVar0 /*32*/].f_11, Local_670[iVar0 /*32*/].f_15, 0f, 0f, 0f, 8f, -1, 16640, 1.001f, 0);
						}
					}
				}
				else if (!func_37(8388608, 0))
				{
					if (PED::_GET_RIDER_OF_MOUNT(Local_670[iVar0 /*32*/].f_11, true) == Global_35 || (bParam0 && !__LIB_0__::func_266(Local_670[iVar0 /*32*/].f_11, Local_670[iVar0 /*32*/].f_15, 0.5f, 1, 1)))
					{
						func_39(8388608);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_93(int iParam0, int iParam1, bool bParam2)
{
	if (__LIB_0__::func_27(Local_111[iParam0 /*100*/].f_4, iParam1))
	{
		if (bParam2)
		{
		}
		return true;
	}
	if (bParam2)
	{
	}
	return false;
}

void func_94()
{
	int iVar0;
	iVar0 = func_274(&(iLocal_82[0]), &(Local_111[0 /*100*/].f_14), 8f, &Local_612, &(Local_844.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
	if (iVar0 != -1)
	{
		if (__LIB_2__::func_341(&(Local_111[0 /*100*/].f_14)))
		{
			func_276(&(Local_111[0 /*100*/].f_35), 0, 0);
		}
	}
	if ((!func_131(32, 0) || func_277(0)) || func_131(4096, 0))
	{
		func_276(&Local_612, 0, 0);
	}
	else if (!func_131(64, 0) && !func_131(128, 0))
	{
		func_276(&Local_612, 1, 1);
	}
	switch (iVar0)
	{
		case 0:
			if (!func_131(64, 0))
			{
				TASK::TASK_PLAY_ANIM(Global_35, sLocal_1046, "GOODBYE_POS", 1.5f, -1.5f, -1, 67112976, 0f, false, 0, false, 0, false);
				TASK::TASK_PLAY_ANIM(iLocal_82[0], sLocal_1046, "GOODBYE_POS_POLICE", 1.5f, -1.5f, -1, 67112976, 0f, false, 0, false, 0, false);
				func_132(64);
			}
			__LIB_2__::func_451(&(Local_111[0 /*100*/].f_14), 0);
			break;
		case 2:
			if (!func_131(128, 0))
			{
				TASK::TASK_PLAY_ANIM(Global_35, sLocal_1046, "GOODBYE_NEG", 1.5f, -1.5f, -1, 67112976, 0f, false, 0, false, 0, false);
				TASK::TASK_PLAY_ANIM(iLocal_82[0], sLocal_1046, "GOODBYE_NEG_POLICE", 1.5f, -1.5f, -1, 67112976, 0f, false, 0, false, 0, false);
				func_132(128);
			}
			__LIB_2__::func_451(&(Local_111[0 /*100*/].f_14), 0);
			break;
	}
}

void func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Local_111[iVar0 /*100*/])
		{
			iVar1 = func_274(&(iLocal_82[iVar0]), &(Local_111[iVar0 /*100*/].f_14), 20f, &(Local_111[iVar0 /*100*/].f_35), &(Local_844.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
			if (__LIB_2__::func_1(iLocal_82[iVar0], 0, 1))
			{
				if (!func_37(16, 0) && !func_37(33554432, 0))
				{
					if (!func_277(iVar0))
					{
						if ((__LIB_2__::func_1(iLocal_82[0], 0, 1) && func_47(2097152, 0)) && !func_47(268435456, 0))
						{
							func_276(&(Local_111[iVar0 /*100*/].f_35), 1, 1);
							__LIB_2__::func_360(&(Local_111[iVar0 /*100*/].f_35[0 /*17*/]), __LIB_2__::func_460(8));
							Local_111[iVar0 /*100*/].f_35[0 /*17*/].f_13 = func_48(32);
							Local_111[iVar0 /*100*/].f_35[2 /*17*/].f_13 = func_48(33);
							func_280(iVar0, &iLocal_835, &uLocal_836);
						}
						else
						{
							func_276(&(Local_111[iVar0 /*100*/].f_35), !func_47(268435456, 0), 1);
							if (func_93(iVar0, 16384, 0))
							{
								func_90(iVar0, 0, 1, 0);
							}
							if (!func_47(268435456, 0))
							{
								__LIB_2__::func_360(&(Local_111[iVar0 /*100*/].f_35[0 /*17*/]), "INTERACT_GREET");
								Local_111[iVar0 /*100*/].f_35[0 /*17*/].f_13 = func_48(28);
								Local_111[iVar0 /*100*/].f_35[2 /*17*/].f_13 = func_48(29);
							}
							if (!__LIB_2__::func_1(iLocal_82[0], 0, 1))
							{
								Local_111[iVar0 /*100*/].f_35[2 /*17*/].f_13 = "RE_BBR_ARM_V1_PLAYER_ANT_PRISONER";
								if (__LIB_1__::func_489(&(Local_111[iVar0 /*100*/].f_35[0 /*17*/]), 0))
								{
									__LIB_2__::func_411(&(Local_111[iVar0 /*100*/].f_35[0 /*17*/]), 0, 0);
								}
							}
							func_280(iVar0, &iLocal_835, &uLocal_836);
						}
						if (func_93(iVar0, 8192, 0))
						{
							func_90(3, !func_47(268435456, 0), !func_37(16, 0), 0);
							func_90(4, !func_47(268435456, 0), !func_37(16, 0), 0);
							func_90(1, !func_47(268435456, 0), !func_37(16, 0), 0);
							func_90(2, !func_47(268435456, 0), !func_37(16, 0), 0);
							func_106(iVar0, 8192, 0);
						}
					}
					else
					{
						func_276(&(Local_111[iVar0 /*100*/].f_35), 0, 0);
					}
					if (iVar1 != -1)
					{
						if (__LIB_2__::func_341(&(Local_111[iVar0 /*100*/].f_14)))
						{
							func_276(&(Local_111[iVar0 /*100*/].f_35), 0, 0);
						}
					}
					iVar2 = 0;
					switch (iVar1)
					{
						case 0:
							if (__LIB_2__::func_1(iLocal_82[0], 0, 1))
							{
								if (!func_47(268435456, 0))
								{
									if (func_47(2097152, 0))
									{
										func_50(268435456);
										func_39(16777216);
									}
									else if (!func_93(iVar0, 512, 0))
									{
										func_117(iVar0, 512);
									}
								}
							}
							else
							{
								if (iLocal_835 == 34)
								{
									iVar2 = 4;
								}
								if (__LIB_2__::func_478(iLocal_82[iVar0], Global_35, func_48(iLocal_835), 0, -1082130432 /* Float: -1f */, iVar2, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_SHOUTED_CLEAR"), 1, 0, 0))
								{
									func_117(3, 16384);
									func_117(4, 16384);
								}
								if (!func_47(268435456, 0))
								{
									if (!func_93(iVar0, 512, 0))
									{
										func_117(iVar0, 512);
									}
								}
							}
							if (__LIB_0__::func_75(&(Local_111[iVar0 /*100*/].f_88)))
							{
								__LIB_1__::func_148(&(Local_111[iVar0 /*100*/].f_88));
							}
							func_117(iVar0, 8192);
							break;
						case 2:
							func_86(iVar0);
							if (func_47(2097152, 0) || !__LIB_2__::func_1(iLocal_82[0], 0, 1))
							{
								func_39(33554432);
							}
							else
							{
								func_117(iVar0, 512);
							}
							func_117(iVar0, 8192);
							break;
					}
				}
			}
			else if (!func_93(iVar0, 1024, 0))
			{
				func_90(iVar0, 0, 0, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_82[iVar0], 315, true);
				func_117(iVar0, 1024);
			}
		}
		iVar0++;
	}
}

void func_96()
{
	int iVar0;
	int iVar1;
	iVar0 = func_274(&(iLocal_82[1]), &(Local_111[1 /*100*/].f_14), 20f, &(Local_111[1 /*100*/].f_35), &(Local_844.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
	if (__LIB_2__::func_1(iLocal_82[1], 0, 1))
	{
		if (!func_37(16, 0) && !func_37(33554432, 0))
		{
			if (!func_277(1))
			{
				if ((__LIB_2__::func_1(iLocal_82[0], 0, 1) && func_47(2097152, 0)) && !func_47(268435456, 0))
				{
					func_276(&(Local_111[1 /*100*/].f_35), 1, 1);
					__LIB_2__::func_360(&(Local_111[1 /*100*/].f_35[0 /*17*/]), __LIB_2__::func_460(8));
					Local_111[1 /*100*/].f_35[0 /*17*/].f_13 = func_48(32);
					Local_111[1 /*100*/].f_35[2 /*17*/].f_13 = func_48(33);
					func_280(1, &iLocal_835, &uLocal_836);
				}
				else
				{
					if (func_93(1, 16384, 0))
					{
						func_90(1, 0, 1, 0);
					}
					if (!func_47(268435456, 0))
					{
						__LIB_2__::func_360(&(Local_111[1 /*100*/].f_35[0 /*17*/]), "INTERACT_GREET");
						Local_111[1 /*100*/].f_35[0 /*17*/].f_13 = func_48(59);
						Local_111[1 /*100*/].f_35[2 /*17*/].f_13 = func_48(60);
					}
					if (!__LIB_2__::func_1(iLocal_82[0], 0, 1))
					{
						Local_111[1 /*100*/].f_35[2 /*17*/].f_13 = "RE_BBR_ARM_V1_PLAYER_ANT_PRISONER";
						func_276(&(Local_111[1 /*100*/].f_35), 0, 1);
					}
					else
					{
						func_276(&(Local_111[1 /*100*/].f_35), !func_47(268435456, 0), 1);
					}
				}
			}
			else
			{
				func_276(&(Local_111[1 /*100*/].f_35), 0, 0);
			}
			if (iVar0 != -1)
			{
				if (__LIB_2__::func_341(&(Local_111[1 /*100*/].f_14)))
				{
					func_276(&(Local_111[1 /*100*/].f_35), 0, 0);
				}
				iVar1 = func_257();
				if (iVar1 == iLocal_82[3])
				{
					if (!func_93(3, 512, 0))
					{
						func_117(3, 512);
					}
				}
				else if (!func_93(4, 512, 0))
				{
					func_117(4, 512);
				}
			}
			switch (iVar0)
			{
				case 0:
					if (!func_47(268435456, 0))
					{
						if (!func_47(268435456, 0))
						{
							if (func_47(2097152, 0))
							{
								func_50(268435456);
								func_39(16777216);
							}
						}
						if (__LIB_0__::func_75(&(Local_111[1 /*100*/].f_88)))
						{
							__LIB_1__::func_148(&(Local_111[1 /*100*/].f_88));
						}
					}
					else
					{
						func_90(1, 0, 1, 0);
					}
					if (__LIB_0__::func_75(&(Local_111[1 /*100*/].f_88)))
					{
						__LIB_1__::func_148(&(Local_111[1 /*100*/].f_88));
					}
					func_117(1, 8192);
					break;
				case 2:
					if (func_47(2097152, 0) || !__LIB_2__::func_1(iLocal_82[0], 0, 1))
					{
						func_39(33554432);
					}
					func_117(1, 8192);
					break;
			}
		}
	}
	else if (!func_93(1, 1024, 0))
	{
		func_90(1, 0, 0, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_82[1], 315, true);
		func_117(1, 1024);
	}
}

void func_97()
{
	int iVar0;
	int iVar1;
	iVar0 = func_274(&(iLocal_82[2]), &(Local_111[2 /*100*/].f_14), 20f, &(Local_111[2 /*100*/].f_35), &(Local_844.f_192), 2f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
	if (__LIB_2__::func_1(iLocal_82[2], 0, 1))
	{
		if (__LIB_2__::func_1(iLocal_82[0], 0, 1) || func_277(2))
		{
			func_276(&(Local_111[2 /*100*/].f_35), 0, 0);
		}
		else
		{
			if (func_93(2, 16384, 0))
			{
				func_90(2, 0, 1, 0);
			}
			if (!func_47(268435456, 0))
			{
				__LIB_2__::func_360(&(Local_111[2 /*100*/].f_35[0 /*17*/]), "INTERACT_GREET");
				Local_111[1 /*100*/].f_35[0 /*17*/].f_13 = func_48(28);
				Local_111[1 /*100*/].f_35[2 /*17*/].f_13 = func_48(29);
			}
			if (!__LIB_2__::func_1(iLocal_82[0], 0, 1))
			{
				Local_111[2 /*100*/].f_35[2 /*17*/].f_13 = "RE_BBR_ARM_V1_PLAYER_ANT_PRISONER";
				func_276(&(Local_111[2 /*100*/].f_35), 0, 1);
			}
			else
			{
				func_276(&(Local_111[2 /*100*/].f_35), !func_47(268435456, 0), 1);
			}
		}
		if (!func_37(16, 0))
		{
			if (iVar0 != -1)
			{
				if (__LIB_2__::func_341(&(Local_111[2 /*100*/].f_14)))
				{
					func_276(&(Local_111[2 /*100*/].f_35), 0, 0);
				}
				iVar1 = func_257();
				if (iVar1 == iLocal_82[3])
				{
					if (!func_93(3, 512, 0))
					{
						func_117(3, 512);
					}
				}
				else if (!func_93(4, 512, 0))
				{
					func_117(4, 512);
				}
			}
			switch (iVar0)
			{
				case 0:
					if (!func_47(268435456, 0))
					{
						if (func_47(2097152, 0))
						{
							func_50(268435456);
							func_90(2, 1, 1, 0);
						}
						if (__LIB_0__::func_75(&(Local_111[2 /*100*/].f_88)))
						{
							__LIB_1__::func_148(&(Local_111[2 /*100*/].f_88));
						}
					}
					else
					{
						func_90(2, 0, 1, 0);
					}
					if (!__LIB_2__::func_1(iLocal_82[0], 0, 1))
					{
						func_117(2, 16384);
					}
					break;
				case 2:
					if (func_47(2097152, 0) || !__LIB_2__::func_1(iLocal_82[0], 0, 1))
					{
						func_39(33554432);
					}
					func_117(1, 8192);
					break;
			}
		}
	}
	else if (!func_93(2, 1024, 0))
	{
		func_90(2, 0, 0, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_82[2], 315, true);
		func_117(2, 1024);
	}
}

int func_98(bool bParam0, bool bParam1)
{
	var uVar0[1];
	int iVar2[1];
	int iVar4;
	int iVar5;
	iVar4 = 0;
	if (bParam0)
	{
		iVar2[0] = joaat("P_KEROSENETABLELAMP01X");
		iVar5 = __LIB_3__::func_510(&uVar0, &iVar2, 1, -3625.123f, -2603.334f, -13.5535f, 1f);
		if (iVar5 > 0)
		{
			ENTITY::_0xEBDC12861D079ABA(uVar0[0], 1);
			iVar4 = 1;
		}
	}
	if (bParam1)
	{
		iVar2[0] = joaat("P_LANTERN05X");
		iVar5 = __LIB_3__::func_510(&uVar0, &iVar2, 1, -3626.805f, -2607.147f, -12.8017f, 1f);
		if (iVar5 > 0)
		{
			ENTITY::_0xEBDC12861D079ABA(uVar0[0], 1);
			iVar4 = 1;
		}
	}
	return iVar4;
}

bool func_100(bool bParam0)
{
	var uVar0;
	var uVar3;
	if (func_93(3, 16, 0))
	{
		func_106(3, 16, 0);
	}
	if (func_93(4, 16, 0))
	{
		func_106(4, 16, 0);
	}
	if (func_93(1, 16, 0))
	{
		func_106(1, 16, 0);
	}
	if (!bParam0)
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1038, func_196(0)))
		{
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(Local_1038, &uVar0, &uVar3, 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1038, "Police", iLocal_82[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1038, "MALE_B", iLocal_82[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1038, "MALE_A", iLocal_82[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1038, "MALE_C", iLocal_82[3], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1038, "MALE_D", iLocal_82[4], 0);
			ANIMSCENE::START_ANIM_SCENE(Local_1038);
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1038, func_196(0), true);
			return true;
		}
	}
	else if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1038, func_196(0)))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1038, "MALE_A", iLocal_82[1], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1038, "MALE_C", iLocal_82[3], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1038, "MALE_D", iLocal_82[4], 0);
		if (ANIMSCENE::_GET_ANIM_SCENE_PED(Local_1038, "MALE_A", false) == iLocal_82[1])
		{
			return true;
		}
	}
	else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1038, func_196(0)))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1038, func_196(0));
	}
	return false;
}

void func_101()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_82)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_82[iVar0], 953140441))
		{
			__LIB_2__::func_315(1066055203, iLocal_82[iVar0], 1);
			if (!func_37(262144, 0))
			{
				iLocal_840++;
				if (iLocal_840 >= 5)
				{
					__LIB_2__::func_268(536870912, 1, 0, 1);
					func_39(262144);
				}
			}
		}
		iVar0++;
	}
}

void func_103(float fParam0)
{
	if (*fParam0 >= 26.1f && *fParam0 < 52.3f)
	{
		if (!func_37(512, 0))
		{
			WEAPON::_HIDE_PED_WEAPONS(iLocal_82[1], 2, true);
			func_39(512);
		}
	}
	if (func_37(512, 0))
	{
		if (*fParam0 >= 52.3f)
		{
			__LIB_2__::func_272(iLocal_82[1], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_111(512);
		}
	}
	if (!func_37(2048, 0))
	{
		if (*fParam0 >= 54.25f)
		{
			func_288(&uLocal_91, 1);
			func_39(2048);
		}
	}
	if (!PED::IS_PED_DEAD_OR_DYING(iLocal_82[0], true))
	{
		if (*fParam0 >= 54.6f)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1038, "Police", iLocal_82[0]);
			Local_844.f_44 = 1;
			__LIB_1__::func_864(iLocal_82[0], 0, 0);
			func_39(4);
		}
	}
	if (!func_37(8, 0) && !func_37(33554432, 0))
	{
		if (*fParam0 >= 64f)
		{
			func_290();
			if (!func_93(1, 2048, 0))
			{
				if (func_291(1, 75.09f))
				{
					if (func_292(1, vLocal_20, 2f))
					{
						func_117(1, 2048);
					}
				}
			}
			if (!func_93(2, 2048, 0))
			{
				if (func_291(2, 78.8f))
				{
					if (func_292(2, vLocal_20, 2f))
					{
						func_117(2, 2048);
					}
				}
			}
			if (!func_93(3, 2048, 0))
			{
				if (func_291(3, 80.29f))
				{
					if (func_292(3, vLocal_20, 2f))
					{
						func_117(3, 2048);
					}
				}
			}
			if (!func_93(4, 2048, 0))
			{
				if (func_291(4, 80.29f))
				{
					if (func_292(4, vLocal_20, 2f))
					{
						func_117(4, 2048);
					}
				}
			}
			if (((func_93(1, 2048, 0) && func_93(2, 2048, 0)) && func_93(3, 2048, 0)) && func_93(4, 2048, 0))
			{
				func_39(8);
			}
		}
	}
}

bool func_104(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar0 = func_293(iParam2);
	if ((iVar0 != 0 && !func_47(iVar0, 0)) && !func_37(33554432, 0))
	{
		sVar1 = func_48(iParam2);
		if (bParam3)
		{
			if ((__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, iLocal_82[3], 0)) && __LIB_2__::func_227(0, 1, iLocal_82[4], 0))
			{
				iVar2 = 1744022339;
			}
			else
			{
				iVar2 = 1808677283;
			}
		}
		else if ((__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, iLocal_82[3], 0)) && __LIB_2__::func_227(0, 1, iLocal_82[4], 0))
		{
			iVar2 = 291934926;
		}
		else
		{
			iVar2 = -417894478;
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, func_294(iParam2)))
		{
			if (__LIB_2__::func_478(iParam0, iParam1, sVar1, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, iVar2, 1, 0, 0))
			{
				func_50(iVar0);
				return true;
			}
		}
	}
	return false;
}

void func_106(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	__LIB_0__::func_516(&(Local_111[iParam0 /*100*/].f_4), iParam1);
}

void func_107()
{
	if (!func_37(4194304, 0))
	{
		func_301(128);
		func_301(256);
		func_39(4194304);
	}
	else
	{
		if (fLocal_841 > 67.4f && !func_47(524288, 0))
		{
			if (__LIB_2__::func_227(0, 1, iLocal_82[4], 1))
			{
				if (__LIB_2__::func_478(iLocal_82[4], iLocal_82[1], func_48(19), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0))
				{
					func_50(524288);
				}
			}
			else
			{
				func_50(524288);
			}
		}
		if (fLocal_841 > 74.17f && !func_47(256, 0))
		{
			if (__LIB_2__::func_227(0, 1, iLocal_82[4], 1))
			{
				if (__LIB_2__::func_478(iLocal_82[4], iLocal_82[1], func_48(8), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0))
				{
					func_50(256);
				}
			}
			else
			{
				func_50(256);
			}
		}
		if (fLocal_841 > 71.8f && !func_47(128, 0))
		{
			if (__LIB_2__::func_227(0, 1, iLocal_82[3], 1))
			{
				if (__LIB_2__::func_478(iLocal_82[3], iLocal_82[1], func_48(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0))
				{
					func_50(128);
				}
			}
			else
			{
				func_50(128);
			}
		}
	}
}

bool func_108(vector3 vParam0, float fParam3)
{
	if (((func_302(2, vParam0, fParam3) && func_302(1, vParam0, fParam3)) && func_302(3, vParam0, fParam3)) && func_302(4, vParam0, fParam3))
	{
		return true;
	}
	return false;
}

bool func_110(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_2__::func_1(iLocal_82[iVar0], 0, 0))
		{
			if (!__LIB_0__::func_75(&(Local_111[iVar0 /*100*/].f_91)))
			{
				__LIB_1__::func_283(&(Local_111[iVar0 /*100*/].f_91), 0);
			}
			switch (iVar0)
			{
				case 0:
					if (!MAP::DOES_BLIP_EXIST(uLocal_664[iVar0]))
					{
						__LIB_2__::func_73(iLocal_82[iVar0], &(uLocal_664[iVar0]), -89429847, 1679075994, 0, "BLIP_MISSION_ALLY");
					}
					if (fLocal_841 >= 40.15f && fLocal_841 <= 47.66f)
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1038, func_267(iVar0), iLocal_82[iVar0]);
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_82[iVar0], sLocal_1046, "QUICK_KILL_MALE_C", 1))
						{
							__LIB_2__::func_461(0);
							__LIB_2__::func_214(iLocal_82[1], iLocal_82[0], "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 0, 0, 1744022339, 1, 1, 0, 0);
							TASK::TASK_PLAY_ANIM(iLocal_82[iVar0], sLocal_1046, "QUICK_KILL_MALE_C", 16f, -16f, -1, 0, 0f, false, 0, false, 0, false);
						}
					}
					else if (!PED::IS_PED_IN_COMBAT(iLocal_82[iVar0], 0))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1038, func_267(iVar0), iLocal_82[iVar0]);
						if (__LIB_1__::func_285(&(Local_111[iVar0 /*100*/].f_91), MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 2f)))
						{
							__LIB_4__::func_428(iLocal_82[0], iLocal_82[1], 6);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_82[0], 30f, 0, 1);
							__LIB_1__::func_148(&(Local_111[iVar0 /*100*/].f_91));
						}
						else
						{
							iVar1 = 0;
						}
					}
					break;
				case 1:
					if (!MAP::DOES_BLIP_EXIST(uLocal_664[iVar0]))
					{
						__LIB_3__::func_447(&(uLocal_664[iVar0]), iLocal_82[iVar0], 0);
					}
					if (fLocal_841 >= 40.15f && fLocal_841 <= 47.66f)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_82[iVar0], sLocal_1046, "QUICK_KILL_MALE_A", 1) && !func_93(iVar0, 16, 0))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1038, func_267(iVar0), iLocal_82[iVar0]);
							TASK::TASK_PLAY_ANIM(iLocal_82[iVar0], sLocal_1046, "QUICK_KILL_MALE_A", 16f, -16f, -1, 0, 0f, false, 0, false, 0, false);
							func_117(iVar0, 16);
						}
					}
					else if (fLocal_841 < 76.95f && !PED::IS_PED_IN_COMBAT(iLocal_82[iVar0], 0))
					{
						if (__LIB_1__::func_285(&(Local_111[iVar0 /*100*/].f_91), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 1f)) && ((!PED::IS_PED_FLEEING(iLocal_82[iVar0]) && !PED::IS_PED_IN_COMBAT(iLocal_82[iVar0], 0)) && !__LIB_0__::func_163(iLocal_82[iVar0], 242628503)))
						{
							PED::_0x802092B07E3B1EEA(iLocal_82[iVar0], Global_36, 3);
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1038, func_267(iVar0), iLocal_82[iVar0]);
							TASK::OPEN_SEQUENCE_TASK(&(Local_111[iVar0 /*100*/].f_87));
							if (!func_93(iVar0, 32768, 0))
							{
								PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_82[iVar0], "TaskCombat_Medium");
								TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "TaskCombat_Medium", 0.5f, 1f, 4);
								func_117(iVar0, 32768);
							}
							TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
							__LIB_1__::func_474(iLocal_82[iVar0], &(Local_111[iVar0 /*100*/].f_87), 0, 0, 1, 1);
							__LIB_1__::func_148(&(Local_111[iVar0 /*100*/].f_91));
						}
						else
						{
							iVar1 = 0;
						}
					}
					break;
				case 2:
					if (!MAP::DOES_BLIP_EXIST(uLocal_664[iVar0]))
					{
						if (func_37(2097152, 0))
						{
							__LIB_2__::func_478(iLocal_82[iVar0], Global_35, "GENERIC_ANGRY_REACTION", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
						}
						__LIB_3__::func_447(&(uLocal_664[iVar0]), iLocal_82[iVar0], 0);
					}
					if (fLocal_841 < 83.78f)
					{
						if (__LIB_1__::func_285(&(Local_111[iVar0 /*100*/].f_91), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 1f)))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1038, func_267(iVar0), iLocal_82[iVar0]);
							vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_670[iVar0 /*32*/].f_11, -0.5f, 1f, 0f) };
							TASK::OPEN_SEQUENCE_TASK(&(Local_111[iVar0 /*100*/].f_87));
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 3f, -1, 0.25f, 5242884, 40000f);
							__LIB_1__::func_474(iLocal_82[iVar0], &(Local_111[iVar0 /*100*/].f_87), 0, 0, 1, 1);
							func_117(iVar0, 16);
							__LIB_1__::func_148(&(Local_111[iVar0 /*100*/].f_91));
						}
						else
						{
							iVar1 = 0;
						}
					}
					break;
				case 3:
					if (!bParam0)
					{
						if (__LIB_1__::func_285(&(Local_111[iVar0 /*100*/].f_91), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f)))
						{
							__LIB_3__::func_447(&(uLocal_664[iVar0]), iLocal_82[iVar0], 0);
							PED::_0x802092B07E3B1EEA(iLocal_82[iVar0], Global_36, 3);
							if (fLocal_841 < 83.78f && (!PED::IS_PED_FLEEING(iLocal_82[iVar0]) && !PED::IS_PED_IN_COMBAT(iLocal_82[iVar0], 0)))
							{
								TASK::OPEN_SEQUENCE_TASK(&(Local_111[iVar0 /*100*/].f_87));
								if ((func_306(iVar0, 0) == 0 || func_306(iVar0, 0) == 1) || func_306(iVar0, 0) == 3)
								{
									if (!func_93(iVar0, 32768, 0))
									{
										PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_82[iVar0], "TaskCombat_Medium");
										TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "TaskCombat_Medium", 0.5f, 1f, 4);
										func_117(iVar0, 32768);
									}
								}
								TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
								__LIB_1__::func_474(iLocal_82[iVar0], &(Local_111[iVar0 /*100*/].f_87), 0, 0, 1, 1);
							}
						}
						else
						{
							iVar1 = 0;
						}
					}
					break;
				case 4:
					if (!bParam0)
					{
						if (__LIB_1__::func_285(&(Local_111[iVar0 /*100*/].f_91), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f)))
						{
							__LIB_3__::func_447(&(uLocal_664[iVar0]), iLocal_82[iVar0], 0);
							PED::_0x802092B07E3B1EEA(iLocal_82[iVar0], Global_36, 3);
							if (fLocal_841 < 85.44f && (!PED::IS_PED_FLEEING(iLocal_82[iVar0]) && !PED::IS_PED_IN_COMBAT(iLocal_82[iVar0], 0)))
							{
								TASK::OPEN_SEQUENCE_TASK(&(Local_111[iVar0 /*100*/].f_87));
								if ((func_306(iVar0, 0) == 0 || func_306(iVar0, 0) == 1) || func_306(iVar0, 0) == 3)
								{
									if (func_93(iVar0, 32768, 0))
									{
										PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_82[iVar0], "TaskCombat_Medium");
										TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "TaskCombat_Medium", 0.5f, 1f, 4);
										func_117(iVar0, 32768);
									}
								}
								TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
								__LIB_1__::func_474(iLocal_82[iVar0], &(Local_111[iVar0 /*100*/].f_87), 0, 0, 1, 1);
							}
						}
						else
						{
							iVar1 = 0;
						}
					}
					break;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_111(int iParam0)
{
	if (__LIB_0__::func_27(iLocal_79, iParam0))
	{
		__LIB_0__::func_516(&iLocal_79, iParam0);
	}
}

void func_112()
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	fVar1 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_82[1], sLocal_1046, "QUICK_KILL_MALE_A");
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_2__::func_1(iLocal_82[iVar0], 0, 1) && !PED::IS_PED_IN_COMBAT(iLocal_82[iVar0], 0))
		{
			switch (iVar0)
			{
				case 1:
					if (!func_47(0, 0))
					{
						func_137(iLocal_82[1], iLocal_82[1], 40, 0, 1, 1, 1, 0);
						func_50(0);
					}
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_82[iVar0], Local_1038))
					{
						if (fLocal_841 >= 54.6f)
						{
							if (!func_307(iVar0, 76.95f, 80.18f, Local_1038))
							{
								TASK::OPEN_SEQUENCE_TASK(&(Local_111[iVar0 /*100*/].f_87));
								TASK::TASK_COMBAT_PED(iLocal_82[iVar0], Global_35, 33554432, 0);
								__LIB_1__::func_474(iLocal_82[iVar0], &(Local_111[iVar0 /*100*/].f_87), 0.5f, 0, 1, 1);
							}
						}
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_82[iVar0], sLocal_1046, "QUICK_KILL_MALE_A", 1))
					{
						if (!func_37(2048, 0))
						{
							if (!func_37(1024, 0))
							{
								__LIB_2__::func_272(iLocal_82[1], joaat("GROUP_REVOLVER"), -1, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
								func_39(1024);
							}
							if (fVar1 >= 0.306f)
							{
								func_288(&uLocal_91, 1);
								func_39(2048);
							}
						}
						if (PED::IS_PED_DEAD_OR_DYING(iLocal_82[0], true))
						{
							TASK::TASK_COMBAT_PED(iLocal_82[iVar0], Global_35, 33554432, 0);
						}
					}
					else if (!PED::IS_PED_IN_COMBAT(iLocal_82[iVar0], Global_35))
					{
						TASK::TASK_COMBAT_PED(iLocal_82[iVar0], Global_35, 33554432, 0);
					}
					break;
				case 2:
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_82[iVar0], Local_1038))
					{
						if (fLocal_841 >= 54.6f)
						{
							if (!func_307(iVar0, 83.78f, 85.44f, Local_1038))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_82[iVar0], 38, true);
								TASK::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_82[iVar0], Local_670[iVar0 /*32*/].f_11, -1, 0.5f, -0.9f, 0f, 3f, true);
								func_117(iVar0, 16);
							}
						}
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_82[iVar0], sLocal_1046, "QUICK_KILL_MALE_B", 1))
					{
						if (func_93(iVar0, 16, 0))
						{
							func_106(iVar0, 16, 0);
						}
					}
					else if (PED::IS_PED_DEAD_OR_DYING(iLocal_82[0], true))
					{
						if (!func_93(iVar0, 16, 0))
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_82[iVar0], 38, true);
							vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_670[iVar0 /*32*/].f_11, -0.5f, 1f, 0f) };
							TASK::OPEN_SEQUENCE_TASK(&(Local_111[iVar0 /*100*/].f_87));
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 3f, -1, 0.25f, 5242884, 40000f);
							__LIB_1__::func_474(iLocal_82[iVar0], &(Local_111[iVar0 /*100*/].f_87), Local_111[iVar0 /*100*/].f_13, 0, 1, 1);
							func_117(iVar0, 16);
						}
					}
					break;
				case 0:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_82[1], sLocal_1046, "QUICK_KILL_MALE_A", 1) && fVar1 >= 0.315f)
					{
						if (!PED::IS_PED_DEAD_OR_DYING(iLocal_82[0], true))
						{
							__LIB_1__::func_864(iLocal_82[0], 0, 0);
						}
					}
					if (!PED::IS_PED_DEAD_OR_DYING(iLocal_82[1], true) && !PED::IS_PED_IN_COMBAT(iLocal_82[iVar0], 0))
					{
						TASK::TASK_COMBAT_HATED_TARGETS(iLocal_82[iVar0], -1f);
					}
					break;
				case 3:
					if (((((!PED::IS_PED_FLEEING(iLocal_82[iVar0]) && !PED::IS_PED_IN_COMBAT(iLocal_82[iVar0], 0)) && !__LIB_0__::func_163(iLocal_82[iVar0], 242628503)) && !func_307(iVar0, 83.78f, 85.44f, Local_1038)) || __LIB_0__::func_71(iLocal_82[iVar0])) || func_37(33554432, 0))
					{
						if (__LIB_2__::func_1(iLocal_82[0], 0, 1))
						{
							TASK::OPEN_SEQUENCE_TASK(&(Local_111[iVar0 /*100*/].f_87));
							if (func_37(65536, 0))
							{
								TASK::_TASK_SMART_FLEE_STYLE_COORD(iLocal_82[iVar0], vLocal_17, 3, 0, 10f, 3, 0);
							}
							else
							{
								TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
							}
							__LIB_1__::func_474(iLocal_82[iVar0], &(Local_111[iVar0 /*100*/].f_87), 0.5f, 0, 1, 1);
						}
						else if (!PED::IS_PED_IN_COMBAT(iLocal_82[iVar0], 0))
						{
							TASK::TASK_COMBAT_PED(iLocal_82[iVar0], Global_35, 33554432, 0);
						}
					}
					break;
				case 4:
					if (((((!PED::IS_PED_FLEEING(iLocal_82[iVar0]) && !PED::IS_PED_IN_COMBAT(iLocal_82[iVar0], 0)) && !__LIB_0__::func_163(iLocal_82[iVar0], 242628503)) && !func_307(iVar0, 85.44f, 87.53f, Local_1038)) || __LIB_0__::func_71(iLocal_82[iVar0])) || func_37(33554432, 0))
					{
						if (__LIB_2__::func_1(iLocal_82[0], 0, 1))
						{
							TASK::OPEN_SEQUENCE_TASK(&(Local_111[iVar0 /*100*/].f_87));
							if (func_37(65536, 0))
							{
								TASK::_TASK_SMART_FLEE_STYLE_COORD(iLocal_82[iVar0], vLocal_17, 3, 0, 10f, 3, 0);
							}
							else
							{
								TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
							}
							__LIB_1__::func_474(iLocal_82[iVar0], &(Local_111[iVar0 /*100*/].f_87), 0, 0, 1, 1);
						}
						else if (!PED::IS_PED_IN_COMBAT(iLocal_82[iVar0], 0))
						{
							TASK::TASK_COMBAT_PED(iLocal_82[iVar0], Global_35, 33554432, 0);
						}
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_113(vector3 vParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_2__::func_65(iLocal_82[iVar0], 0) || (func_72(iVar0, 1) && __LIB_0__::func_266(iLocal_82[iVar0], vParam0, 15f, 1, 1)))
		{
			if (!func_93(iVar0, 65536, 0) && __LIB_2__::func_398(iLocal_82[iVar0]))
			{
				__LIB_2__::func_603(&(iLocal_82[iVar0]), &(Local_111[iVar0 /*100*/].f_14), &(Local_111[iVar0 /*100*/].f_35), 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_82[iVar0], false);
				func_117(iVar0, 65536);
			}
		}
		iVar0++;
	}
}

bool func_114(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_72(iVar0, 1))
		{
			if (__LIB_2__::func_1(iLocal_82[iVar0], 0, 1))
			{
				if (bParam0)
				{
				}
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_117(int iParam0, int iParam1)
{
	__LIB_1__::func_336(&(Local_111[iParam0 /*100*/].f_4), iParam1);
}

bool func_120(int iParam0)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false))
			{
				if ((iVar0 != joaat("OBJECT_1") && iVar0 != joaat("OBJECT_2")) && iVar0 != joaat("WEAPON_UNARMED"))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_123()
{
	if (!__LIB_0__::func_75(&uLocal_33))
	{
		__LIB_1__::func_283(&uLocal_33, 0);
	}
	if (!func_131(2048, 0))
	{
		if (__LIB_1__::func_285(&uLocal_33, 2f) && __LIB_0__::func_48(iLocal_82[0], Global_35, 10f, 1))
		{
			__LIB_2__::func_214(iLocal_82[0], Global_35, func_48(52), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 0, 0, 1744022339, 1, 1, 0, 0);
			func_132(2048);
			__LIB_0__::func_37(&uLocal_33);
		}
	}
	if (!func_131(1024, 0))
	{
		if (__LIB_1__::func_285(&uLocal_33, MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 10f)))
		{
			if (__LIB_2__::func_478(iLocal_82[0], 0, func_48(55), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, -500314840, 1, 0, 0))
			{
				func_132(1024);
			}
		}
	}
}

void func_126()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_72(iVar0, 1) && __LIB_2__::func_1(Local_670[iVar0 /*32*/].f_11, 0, 1))
		{
			PED::_0x06D26A96CA1BCA75(Local_670[iVar0 /*32*/].f_11, 3, 0f, 0);
			PED::_0x06D26A96CA1BCA75(Local_670[iVar0 /*32*/].f_11, 1, 0f, 0);
			PED::SET_PED_RESET_FLAG(Local_670[iVar0 /*32*/].f_11, 53, true);
			PED::SET_PED_RESET_FLAG(Local_670[iVar0 /*32*/].f_11, 49, true);
		}
		iVar0++;
	}
}

void func_129(bool bParam0)
{
	float fVar0;
	if (iLocal_78 != 3)
	{
		if (func_37(8192, 0))
		{
			if (!__LIB_0__::func_48(iLocal_82[0], Global_35, 16f, 1))
			{
				if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_82[0], Global_35, 17) || !__LIB_3__::func_477(iLocal_82[0], Global_35))
				{
					if (!__LIB_0__::func_75(&uLocal_64))
					{
						__LIB_1__::func_283(&uLocal_64, 0);
					}
					else if (__LIB_1__::func_285(&uLocal_64, 5f))
					{
						__LIB_2__::func_504(iLocal_82[0], 500);
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_82[0]);
						func_132(32);
						iLocal_78 = 3;
					}
				}
			}
			else if (__LIB_0__::func_75(&uLocal_64))
			{
				__LIB_0__::func_37(&uLocal_64);
			}
		}
		if (func_37(8192, 0) && __LIB_0__::func_665(Global_35, iLocal_82[0], 1, 1) > 30f)
		{
			__LIB_2__::func_504(iLocal_82[0], 500);
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_82[0]);
			func_132(32);
			iLocal_78 = 3;
		}
	}
	switch (iLocal_78)
	{
		case 0:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_82[0], sLocal_1046, "OH_MY_HOW_LUCKY_POLICE", 1) || bParam0)
			{
				__LIB_3__::func_500(&uLocal_36);
				iLocal_78 = 1;
			}
			else if (!func_37(8192, 0) && !__LIB_0__::func_163(iLocal_82[0], -1162159953))
			{
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_82[0], sLocal_1046, "OH_MY_HOW_LUCKY_POLICE", Global_35, __LIB_3__::func_444(sLocal_1046, "OH_MY_HOW_LUCKY_POLICE"), 1.5f, -2f, 67108888, 0f, false, true, -1f, 0, 0, -1f);
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					TASK::TASK_PLAY_ANIM(Global_35, sLocal_1046, "OH_MY_HOW_LUCKY", 1.5f, -1.5f, -1, 67111984, 0f, false, 0, false, 0, false);
				}
				MAP::_BLIP_SET_MODIFIER(uLocal_664[0], -46775694);
				func_39(8192);
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_82[0], sLocal_1046, "OH_MY_HOW_LUCKY_POLICE", 1))
			{
				fVar0 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_82[0], sLocal_1046, "OH_MY_HOW_LUCKY_POLICE");
				if (!func_131(1, 0))
				{
					if (func_316(fVar0, 0.069f, 41))
					{
						func_132(1);
					}
				}
				else if (!func_131(2, 0))
				{
					if (func_316(fVar0, 0.472f, 42))
					{
						func_132(2);
					}
				}
				else if (!func_131(4, 0))
				{
					if (func_316(fVar0, 0.694f, 43))
					{
						func_132(4);
					}
				}
			}
			else if (!func_37(16384, 0))
			{
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_82[0], sLocal_1046, "I_DONT_KNOW_POLICE", Global_35, __LIB_3__::func_444(sLocal_1046, "I_DONT_KNOW_POLICE"), 2f, -1.5f, 67178512, 0f, false, true, -1f, 0, 0, -1f);
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					TASK::TASK_PLAY_ANIM(Global_35, sLocal_1046, "I_DONT_KNOW", 1.5f, -1.5f, -1, 67178544, 0f, false, 0, false, 0, false);
				}
				func_39(16384);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_82[0], sLocal_1046, "I_DONT_KNOW_POLICE", 1))
			{
				iLocal_78 = 2;
			}
			break;
		case 2:
			if (!func_37(16384, 0))
			{
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_82[0], sLocal_1046, "I_DONT_KNOW_POLICE", Global_35, __LIB_3__::func_444(sLocal_1046, "I_DONT_KNOW_POLICE"), 2f, -1.5f, 67178512, 0f, false, true, -1f, 0, 0, -1f);
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					TASK::TASK_PLAY_ANIM(Global_35, sLocal_1046, "I_DONT_KNOW", 1.5f, -1.5f, -1, 67178544, 0f, false, 0, false, 0, false);
				}
				func_39(16384);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_82[0], sLocal_1046, "I_DONT_KNOW_POLICE", 1))
			{
				fVar0 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_82[0], sLocal_1046, "I_DONT_KNOW_POLICE");
				if (!func_131(8, 0))
				{
					if (func_316(fVar0, 0.069f, 44))
					{
						func_132(8);
					}
				}
				else if (!func_131(16, 0))
				{
					if (func_316(fVar0, 0.278f, 45))
					{
						func_132(16);
					}
				}
				else if (!func_131(32, 0))
				{
					if (func_316(fVar0, 0.639f, 46))
					{
						func_132(32);
						iLocal_78 = 3;
					}
				}
			}
			break;
		case 3:
			if (!func_131(4096, 0))
			{
				if (func_131(64, 0) || func_131(128, 0))
				{
					if (__LIB_2__::func_227(0, 1, Global_35, 1))
					{
						func_137(iLocal_82[0], Global_35, 56, 0, 0, 0, 1, 0);
						func_132(4096);
					}
				}
			}
			break;
	}
}

bool func_131(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_27(iLocal_81, iParam0))
	{
		if (bParam1)
		{
		}
		return true;
	}
	if (bParam1)
	{
	}
	return false;
}

void func_132(int iParam0)
{
	__LIB_1__::func_336(&iLocal_81, iParam0);
}

bool func_133(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_72(iVar0, 1))
		{
			if (!__LIB_4__::func_303(Local_670[iVar0 /*32*/].f_11))
			{
				if (__LIB_0__::func_266(Local_670[iVar0 /*32*/].f_11, Local_670[iVar0 /*32*/].f_15, 5f, 1, 1))
				{
					*uParam0 = Local_670[iVar0 /*32*/].f_11;
					return true;
				}
				else
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS(Local_670[iVar0 /*32*/].f_11, true, false) };
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_134(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	int iVar0;
	if (!__LIB_2__::func_1(iParam0, 0, 1) || !__LIB_2__::func_1(iParam1, 0, 1))
	{
		return false;
	}
	if (!__LIB_4__::func_303(iParam1) && !__LIB_0__::func_71(iParam0))
	{
		if (bParam2)
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			PED::_0xF1C03A5352243A30(iParam0);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), fParam3, -1, 3.5f, 0, 40000f);
		TASK::TASK_MOUNT_ANIMAL(0, iParam1, 20000, -1, fParam3, 1, 0, 0);
		__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
		PED::SET_PED_KEEP_TASK(iParam0, true);
	}
	else
	{
		return true;
	}
	return false;
}

bool func_136(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return __LIB_8__::func_329(iParam0) == iParam1;
	}
	return false;
}

bool func_137(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)
{
	if (fParam3 > 0.1f)
	{
		if (!func_318(fParam3))
		{
			return false;
		}
	}
	if (!__LIB_3__::func_703(fParam3) || bParam6)
	{
		if (bParam4)
		{
			return __LIB_2__::func_478(iParam0, iParam1, func_48(iParam2), 0, -1082130432 /* Float: -1f */, iParam7, bParam5, 0, 2, 1, 1, 1744022339, 1, 0, 0);
		}
		else
		{
			return __LIB_2__::func_478(iParam0, iParam1, func_48(iParam2), 0, -1082130432 /* Float: -1f */, iParam7, bParam5, 0, 2, 1, 1, 291934926, 1, 0, 0);
		}
	}
	return false;
}

void func_157(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_22 = iParam1;
	if (bParam2)
	{
		func_331(uParam0, iParam1);
	}
}

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("S_M_M_AMBIENTLAWRURAL_01");
		case 2:
			return joaat("G_M_M_UNIBANDITOS_01");
		case 1:
			return joaat("G_M_M_UNIBANDITOS_01");
		case 3:
			return joaat("G_M_M_UNIBANDITOS_01");
		case 4:
			return joaat("G_M_M_UNIBANDITOS_01");
		default:
			break;
	}
	return 0;
}

int func_159(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1647061387;
		case 2:
			return 1568131363;
		case 1:
			return 1338060214;
		case 3:
			return 1769791789;
		case 4:
			return -1760674737;
		default:
			break;
	}
	return joaat("META_OUTFIT_DEFAULT");
}

char* func_160(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ARMA_SHERIFF";
		case 2:
			return "1022_G_M_M_UniBanditos_01_HISPANIC_04";
		case 1:
			return "1019_G_M_M_UniBanditos_01_HISPANIC_01";
		case 3:
			return "1020_G_M_M_UniBanditos_01_HISPANIC_02";
		case 4:
			return "1024_G_M_M_UniBanditos_01_WHITE_02";
		default:
			break;
	}
	return "VOICE_MISSING";
}

float func_161(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 29.0426f;
		case 2:
			return 64.7281f;
		case 1:
			return -58.997f;
		case 3:
			return -134.188f;
		case 4:
			return -106.783f;
		default:
			break;
	}
	return 0f;
}

Vector3 func_163(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 2:
			return -3655.147f, -2616.376f, -13.9f;
		case 1:
			return -3649.031f, -2616.394f, -13.9f;
		case 3:
			return -3657.059f, -2616.847f, -13.8f;
		case 4:
			return -3651.432f, -2616.121f, -13.8f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 175f;
		case 2:
			return 175f;
		case 1:
			return 175f;
		case 3:
			return 175f;
		case 4:
			return 175f;
		default:
			break;
	}
	return 0f;
}

bool func_195()
{
	var uVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1038))
	{
		return false;
	}
	uVar0 = Local_1038.f_4;
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1038, true, false))
	{
		return false;
	}
	return true;
}

char* func_196(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pbl_action";
		default:
			break;
	}
	return "";
}

int func_256(int iParam0)
{
	bool bVar0;
	float fVar1;
	bVar0 = false;
	if (!func_93(iParam0, 64, 0))
	{
		if (!func_37(64, 0))
		{
			fVar1 = __LIB_0__::func_94(iLocal_82[iParam0], Global_36, 1);
			if (func_37(8388608, 0))
			{
				bVar0 = true;
			}
			else if (func_37(33554432, 0))
			{
				bVar0 = true;
			}
			else if (__LIB_1__::func_205(Global_35, iLocal_23[0], 1, 0) && Local_111[iParam0 /*100*/].f_12 == 0f)
			{
				bVar0 = true;
			}
			else if (Local_111[iParam0 /*100*/].f_12 > fVar1 && fVar1 < 10f)
			{
				bVar0 = true;
			}
			else if (fVar1 < 1.5f)
			{
				bVar0 = true;
			}
		}
	}
	else
	{
		bVar0 = true;
	}
	if (func_93(iParam0, 512, 0))
	{
		bVar0 = true;
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_82[iParam0], Global_35, 17))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (!__LIB_0__::func_75(&(Local_111[iParam0 /*100*/].f_97)))
		{
			__LIB_1__::func_283(&(Local_111[iParam0 /*100*/].f_97), 0);
		}
		else if (__LIB_1__::func_285(&(Local_111[iParam0 /*100*/].f_97), 1f))
		{
			return 1;
		}
	}
	else
	{
		__LIB_0__::func_37(&(Local_111[iParam0 /*100*/].f_97));
	}
	return 0;
}

int func_257()
{
	var uVar0;
	if (__LIB_1__::func_348(Global_35, iLocal_82[3]) < __LIB_1__::func_348(Global_35, iLocal_82[4]))
	{
		uVar0 = iLocal_82[3];
	}
	else if (__LIB_1__::func_348(Global_35, iLocal_82[3]) > __LIB_1__::func_348(Global_35, iLocal_82[4]))
	{
		uVar0 = iLocal_82[4];
	}
	return uVar0;
}

void func_258(int iParam0)
{
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_82[iParam0], Local_1038))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1038, func_267(iParam0), iLocal_82[iParam0]);
		if (fLocal_841 < func_470(iParam0))
		{
			func_471(iParam0, &(Local_111[iParam0 /*100*/].f_10));
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_82[iParam0], sLocal_1046, func_472(Local_111[iParam0 /*100*/].f_10), 1))
			{
				TASK::TASK_PLAY_ANIM(iLocal_82[iParam0], sLocal_1046, func_472(Local_111[iParam0 /*100*/].f_10), 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
			}
		}
		else
		{
			__LIB_2__::func_45(iLocal_82[iParam0], Global_35, -1);
		}
	}
	else
	{
		__LIB_2__::func_45(iLocal_82[iParam0], Global_35, -1);
	}
}

void func_259(int iParam0, int iParam1)
{
	if (Local_111[iParam0 /*100*/].f_2 != iParam1)
	{
		Local_111[iParam0 /*100*/].f_2 = iParam1;
	}
}

bool func_260(int iParam0, bool bParam1)
{
	if (!__LIB_2__::func_227(0, 1, Global_35, 1))
	{
		return false;
	}
	if (func_37(33554432, 0))
	{
		return false;
	}
	if (func_306(iParam0, 0) == 2 && !func_93(iParam0, 64, 0))
	{
		return true;
	}
	if (func_47(2097152, 0))
	{
		if (((func_37(16777216, 0) && ENTITY::GET_ENTITY_SPEED(Global_35) > 0.5f) && !PED::IS_PED_FACING_PED(Global_35, iLocal_82[iParam0], 90f)) || (Local_111[iParam0 /*100*/].f_12 != 0f && (Local_111[iParam0 /*100*/].f_12 + 2f) < __LIB_0__::func_94(iLocal_82[iParam0], Global_36, 1)))
		{
			if (!__LIB_0__::func_75(&(Local_111[iParam0 /*100*/].f_94)))
			{
				__LIB_1__::func_283(&(Local_111[iParam0 /*100*/].f_94), 0);
			}
			else if (__LIB_1__::func_285(&(Local_111[iParam0 /*100*/].f_94), 1f))
			{
				if (func_93(iParam0, 512, 0))
				{
					func_106(iParam0, 512, 0);
				}
				if (func_37(16777216, 0))
				{
					func_111(16777216);
				}
				__LIB_3__::func_500(&(Local_111[iParam0 /*100*/].f_94));
				return true;
			}
		}
		else if (__LIB_0__::func_75(&(Local_111[iParam0 /*100*/].f_94)))
		{
			__LIB_3__::func_500(&(Local_111[iParam0 /*100*/].f_94));
		}
	}
	if (func_93(iParam0, 512, 0))
	{
		if (__LIB_0__::func_94(iLocal_82[iParam0], Global_36, 1) < (Local_111[iParam0 /*100*/].f_12 + 2f))
		{
			return false;
		}
		else
		{
			func_106(iParam0, 512, 0);
		}
	}
	if (func_37(16777216, 0))
	{
		func_111(16777216);
		return true;
	}
	return false;
}

bool func_262(int iParam0, bool bParam1)
{
	int iVar0;
	if (func_260(iParam0, bParam1))
	{
		func_475(iParam0);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_93(iVar0, 64, 0) && func_306(iVar0, 0) != 1)
			{
				func_106(iVar0, 64, 1);
			}
			iVar0++;
		}
		func_259(Local_111[iParam0 /*100*/].f_3, 3);
		return true;
	}
	return false;
}

bool func_263(int iParam0)
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_82[iParam0], sLocal_1046, func_472(Local_111[iParam0 /*100*/].f_10), 1))
	{
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_82[iParam0], sLocal_1046, func_472(Local_111[iParam0 /*100*/].f_10)) >= func_476(Local_111[iParam0 /*100*/].f_10))
		{
			TASK::CLEAR_PED_TASKS(iLocal_82[iParam0], true, false);
			__LIB_2__::func_45(iLocal_82[iParam0], Global_35, -1);
		}
	}
	else if (__LIB_2__::func_123(iLocal_82[iParam0], Global_35, 0.9f))
	{
		PED::_0x8ACC0506743A8A5C(iLocal_82[iParam0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 2, -1082130432 /* Float: -1f */);
		TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_82[iParam0], Global_35, -1, true, 0);
		return true;
	}
	return false;
}

bool func_264(bool bParam0)
{
	int iVar0;
	int iVar1;
	if (bParam0 && !__LIB_2__::func_227(0, 1, Global_35, 1))
	{
		return false;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (__LIB_2__::func_1(iLocal_82[iVar1], 0, 1) && func_477(iVar1))
		{
			if (!__LIB_2__::func_227(0, 1, iLocal_82[iVar1], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_265(int iParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_163(iLocal_82[iParam0], -1758697641))
	{
		vVar0 = { __LIB_17__::func_829(iLocal_82[iParam0], 1f) };
		TASK::OPEN_SEQUENCE_TASK(&iLocal_831);
		if (__LIB_0__::func_94(iLocal_82[1], vVar0, 1) > 1.75f)
		{
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		}
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, true, 0);
		__LIB_1__::func_474(iLocal_82[iParam0], &iLocal_831, 0, 0, 1, 1);
		func_117(iParam0, 8);
		if (iParam0 == 3)
		{
			if (func_137(iLocal_82[iParam0], Global_35, 50, -7.5f, 1, 0, 0, 4))
			{
				func_117(iParam0, 128);
			}
		}
		else if (iParam0 == 4)
		{
			if (func_137(iLocal_82[iParam0], Global_35, 51, -7.5f, 1, 0, 0, 4))
			{
				func_117(iParam0, 128);
			}
		}
	}
}

char* func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Police";
		case 2:
			return "MALE_B";
		case 1:
			return "MALE_A";
		case 3:
			return "MALE_C";
		case 4:
			return "MALE_D";
		default:
			break;
	}
	return "INVALID_PED";
}

bool func_268(int iParam0)
{
	int iVar0;
	if (!func_47(2097152, 0))
	{
		if (iParam0 == 3)
		{
			iVar0 = 21;
		}
		else
		{
			iVar0 = 25;
		}
		if (func_137(iLocal_82[iParam0], Global_35, iVar0, -7.5f, 0, 0, 0, 0))
		{
			__LIB_1__::func_283(&(Local_111[iParam0 /*100*/].f_88), 0);
			func_50(2097152);
			if (iLocal_88 == 5)
			{
				iLocal_88 = iParam0;
			}
		}
	}
	if (__LIB_1__::func_285(&(Local_111[iParam0 /*100*/].f_88), 8f))
	{
		return true;
	}
	return false;
}

bool func_269(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	if (!func_93(iParam0, 8, 0))
	{
		if (!__LIB_0__::func_163(iLocal_82[iParam0], -1758697641))
		{
			vVar0 = { __LIB_17__::func_829(iLocal_82[iParam0], 1f) };
			TASK::OPEN_SEQUENCE_TASK(&iLocal_831);
			if (__LIB_0__::func_94(iLocal_82[1], vVar0, 1) > 1.75f)
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			}
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, true, 0);
			__LIB_1__::func_474(iLocal_82[iParam0], &iLocal_831, 0, 0, 1, 1);
			func_117(iParam0, 8);
		}
	}
	else if (!__LIB_0__::func_75(&(Local_111[iParam0 /*100*/].f_88)))
	{
		if (!func_47(4194304, 0))
		{
			if (iParam0 == 3)
			{
				func_117(4, 64);
				func_259(4, 0);
				iVar3 = 22;
			}
			else
			{
				func_117(3, 64);
				func_259(3, 0);
				if (iLocal_88 == 4)
				{
					iVar3 = 26;
				}
				else
				{
					iVar3 = 25;
				}
			}
			if (func_137(iLocal_82[iParam0], Global_35, iVar3, -7.5f, 0, 0, 0, 0))
			{
				__LIB_1__::func_283(&(Local_111[iParam0 /*100*/].f_88), 0);
				func_50(4194304);
			}
		}
	}
	else if (__LIB_1__::func_285(&(Local_111[iParam0 /*100*/].f_88), 12f))
	{
		return true;
	}
	return false;
}

bool func_270(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!func_93(iParam0, 64, 0))
	{
		if (__LIB_2__::func_227(0, 1, Global_35, 1))
		{
			if (!func_47(0, 0))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1038, func_267(0), iLocal_82[iParam0]);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1038, func_267(1), iLocal_82[iParam0]);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1038, func_267(2), iLocal_82[iParam0]);
				__LIB_3__::func_319(Local_1038);
				if (func_37(33554432, 0))
				{
					iVar0 = func_257();
					if (iVar0 == iLocal_82[3])
					{
						iVar2 = 38;
						iVar1 = 4;
					}
					else
					{
						iVar2 = 39;
						iVar1 = 3;
					}
				}
				else
				{
					iVar0 = iLocal_82[iParam0];
					if (iParam0 == 3)
					{
						iVar2 = 38;
						iVar1 = 4;
					}
					else if (iParam0 == 4)
					{
						iVar2 = 39;
						iVar1 = 3;
					}
				}
				__LIB_2__::func_45(iLocal_82[1], iVar0, -1);
				TASK::OPEN_SEQUENCE_TASK(&(Local_111[2 /*100*/].f_87));
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				__LIB_1__::func_474(iLocal_82[2], &(Local_111[2 /*100*/].f_87), 0.5f, 0.5f, 1, 1);
				TASK::OPEN_SEQUENCE_TASK(&(Local_111[0 /*100*/].f_87));
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				__LIB_1__::func_474(iLocal_82[0], &(Local_111[0 /*100*/].f_87), 0.5f, 0.5f, 1, 1);
				if (__LIB_2__::func_1(iLocal_82[iVar1], 0, 1) && !__LIB_2__::func_123(iLocal_82[iVar1], Global_35, 130f))
				{
					TASK::OPEN_SEQUENCE_TASK(&(Local_111[iVar1 /*100*/].f_87));
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
					__LIB_1__::func_474(iLocal_82[iVar1], &(Local_111[iVar1 /*100*/].f_87), 0.5f, 0.5f, 1, 1);
				}
				if (bParam1)
				{
					iVar2 = 39;
				}
				if (func_137(iLocal_82[1], iVar0, iVar2, 0, 1, 1, 1, 0))
				{
					func_50(0);
					return true;
				}
			}
		}
	}
	return false;
}

int func_274(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_481(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_3__::func_156(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!__LIB_0__::func_474(558))
				{
					__LIB_1__::func_240(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_276(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!__LIB_1__::func_489(uParam0[0 /*17*/], 0))
		{
			__LIB_2__::func_411(uParam0[0 /*17*/], 1, 0);
		}
	}
	else if (__LIB_1__::func_489(uParam0[0 /*17*/], 0))
	{
		__LIB_2__::func_411(uParam0[0 /*17*/], 0, 0);
	}
	if (bParam2)
	{
		if (!__LIB_1__::func_489(uParam0[2 /*17*/], 0))
		{
			__LIB_2__::func_411(uParam0[2 /*17*/], 1, 0);
		}
	}
	else if (__LIB_1__::func_489(uParam0[2 /*17*/], 0))
	{
		__LIB_2__::func_411(uParam0[2 /*17*/], 0, 0);
	}
}

bool func_277(int iParam0)
{
	if (!__LIB_2__::func_227(0, 1, Global_35, 1))
	{
		return true;
	}
	if (iParam0 != 1 && !__LIB_2__::func_227(0, 1, iLocal_82[iParam0], 1))
	{
		return true;
	}
	if ((func_93(3, 64, 0) && !__LIB_2__::func_227(0, 1, iLocal_82[3], 1)) || (func_93(4, 64, 0) && !__LIB_2__::func_227(0, 1, iLocal_82[4], 1)))
	{
		return true;
	}
	return false;
}

void func_280(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 3:
			if (__LIB_2__::func_1(iLocal_82[0], 0, 1))
			{
				if (*iParam1 != 34)
				{
					*iParam1 = 34;
				}
			}
			else if (*iParam1 != 20)
			{
				*iParam1 = 20;
			}
			if (*uParam2 != 35)
			{
				*uParam2 = 35;
			}
			break;
		case 4:
			if (__LIB_2__::func_1(iLocal_82[0], 0, 1))
			{
				if (*iParam1 != 36)
				{
					*iParam1 = 36;
				}
			}
			else if (*iParam1 != 20)
			{
				*iParam1 = 20;
			}
			if (*uParam2 != 37)
			{
				*uParam2 = 37;
			}
			break;
	}
}

void func_288(var uParam0, bool bParam1)
{
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(iLocal_82[1], true, false) };
	uParam0->f_3 = { -3626.2f, -2605.3f, -12.8f };
	uParam0->f_7 = 0f;
	uParam0->f_9 = iLocal_82[1];
	uParam0->f_10 = iLocal_82[0];
	uParam0->f_12 = 1;
	uParam0->f_13 = 1;
	uParam0->f_14 = 1;
	if (bParam1)
	{
		PED::_0x4C57F27D1554E6B0(iLocal_82[1], uParam0->f_3, 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
	}
}

void func_290()
{
	int iVar0;
	if ((!func_37(4096, 0) && !func_37(33554432, 0)) && __LIB_2__::func_227(0, 1, Global_35, 1))
	{
		if (__LIB_0__::func_48(Global_35, iLocal_82[1], 10f, 1))
		{
			iVar0 = func_257();
			__LIB_2__::func_214(iVar0, Global_35, func_48(20), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1506116031, 1, 1, 0, 0);
			func_39(4096);
		}
	}
}

bool func_291(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar0 = 1;
	if (!__LIB_0__::func_71(iLocal_82[iParam0]) && !Local_111[iParam0 /*100*/].f_1 == 1)
	{
		iVar0 = 0;
		if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1038) >= fParam1 || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_82[iParam0], Local_1038))
		{
			PED::SET_PED_CONFIG_FLAG(Local_670[iParam0 /*32*/].f_11, 214, false);
			vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_670[iParam0 /*32*/].f_11, 0.5f, 0.5f, 0f) };
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (!__LIB_0__::func_48(iLocal_82[iParam0], Local_670[iParam0 /*32*/].f_11, 2f, 1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 1f, -1, 3.5f, 4194308, 40000f);
			}
			TASK::TASK_MOUNT_ANIMAL(0, Local_670[iParam0 /*32*/].f_11, 20000, -1, 1f, 1, 0, 0);
			__LIB_1__::func_474(iLocal_82[iParam0], &iVar1, 0, 0, 1, 1);
			Local_111[iParam0 /*100*/].f_1 = 1;
		}
		else
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_82[iParam0], Local_670[iParam0 /*32*/].f_11, true);
		}
	}
	return iVar0;
}

bool func_292(int iParam0, vector3 vParam1, float fParam4)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_82[iParam0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_82[iParam0]) && __LIB_0__::func_396(iLocal_82[iParam0]))
		{
			if (iLocal_82[iParam0] == iLocal_82[1])
			{
				if (PED::DOES_GROUP_EXIST(iLocal_832))
				{
					__LIB_3__::func_506(&(iLocal_82[iParam0]), &iLocal_832, 1, 1, 1, 1, 0);
					PED::SET_GROUP_FORMATION(iLocal_832, 4);
				}
				else
				{
					iLocal_832 = PED::CREATE_GROUP(1);
					__LIB_3__::func_506(&(iLocal_82[1]), &iLocal_832, 1, 1, 1, 1, 0);
				}
				func_495(iLocal_82[1], 17, 131072, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&(Local_111[iParam0 /*100*/].f_87));
				TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vParam1, 15f, fParam4, 4, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, fParam4, 4, 0);
				__LIB_1__::func_474(iLocal_82[iParam0], &(Local_111[iParam0 /*100*/].f_87), 0, 0, 1, 1);
			}
			else
			{
				if (PED::DOES_GROUP_EXIST(iLocal_832))
				{
					__LIB_3__::func_506(&(iLocal_82[iParam0]), &iLocal_832, 0, 1, 1, 1, 0);
				}
				TASK::OPEN_SEQUENCE_TASK(&(Local_111[iParam0 /*100*/].f_87));
				TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vParam1, 1f, fParam4, 4, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, fParam4, 4, 0);
				__LIB_1__::func_474(iLocal_82[iParam0], &(Local_111[iParam0 /*100*/].f_87), 0, 0, 1, 1);
			}
			PED::SET_PED_KEEP_TASK(iLocal_82[iParam0], true);
			__LIB_3__::func_237(&(Local_844.f_5), &iLocal_73);
			return true;
		}
	}
	return false;
}

int func_293(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		case 6:
			return 64;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
		case 16:
			return 65536;
		case 17:
			return 131072;
		case 18:
			return 262144;
		case 19:
			return 524288;
		case 20:
			return 1048576;
		case 21:
			return 2097152;
		case 22:
			return 4194304;
		case 23:
			return 8388608;
		case 28:
			return 16777216;
		case 29:
			return 33554432;
		case 30:
			return 67108864;
		case 31:
			return 134217728;
		case 32:
			return 268435456;
		case 33:
			return 536870912;
		case 34:
			return 1073741824 /* Float: 2f */;
		case 35:
			return -2147483648;
		case 38:
			return 0;
		case 40:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1249640412;
		case 1:
			return 1853380208;
		case 2:
			return -1550434133;
		case 3:
			return -1184011175;
		case 4:
			return -1877501522;
		case 5:
			return -441804705;
		case 6:
			return -354820861;
		case 7:
			return 2008185477;
		case 8:
			return 33406584;
		case 9:
			return -526975875;
		case 10:
			return 1199587070;
		case 11:
			return 249582030;
		case 12:
			return -1801938240;
		case 13:
			return -1025312940;
		case 14:
			return 1132601917;
		case 15:
			return -1603018356;
		case 16:
			return 1176162167;
		case 17:
			return -131767954;
		case 18:
			return 1164514803;
		case 19:
			return 1282102098;
		case 21:
			return -1129538825;
		case 22:
			return 1572527657;
		case 23:
			return -1003995505;
		case 41:
			return 439339436;
		case 42:
			return 94871704;
		case 43:
			return 1543458122;
		case 44:
			return -676762990;
		case 45:
			return -914895313;
		case 46:
			return -678008224;
		case 32:
			return 1264625924;
		case 33:
			return 784400301;
		case 34:
			return -763974775;
		case 35:
			return -1566319636;
		case 48:
			return -1771786837;
		case 49:
			return 1463270810;
		case 40:
			return 1566518563;
		case 28:
			return -1551571928;
		case 29:
			return 698766507;
		case 30:
			return 990172185;
		case 31:
			return -746553801;
		case 38:
			return -1481992638;
		case 50:
			return joaat("SUPPORT_GENERAL");
		case 51:
			return joaat("SUPPORT_GENERAL");
		default:
			break;
	}
	return 0;
}

void func_301(int iParam0)
{
	__LIB_0__::func_516(&iLocal_80, iParam0);
}

int func_302(int iParam0, vector3 vParam1, float fParam4)
{
	if (!func_37(64, 0))
	{
		if (func_72(iParam0, 1) && !PED::IS_PED_IN_COMBAT(iLocal_82[iParam0], 0))
		{
			if (__LIB_0__::func_266(iLocal_82[iParam0], vParam1, fParam4, 1, 1) && !__LIB_0__::func_266(iLocal_82[iParam0], Local_844.f_51, 30f, 1, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_306(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return Local_111[iParam0 /*100*/].f_2;
}

bool func_307(int iParam0, float fParam1, float fParam2, int iParam3)
{
	if (__LIB_0__::func_71(iLocal_82[iParam0]))
	{
		return true;
	}
	if (fLocal_841 > fParam1)
	{
		if (fLocal_841 >= fParam2)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam3, func_267(iParam0), iLocal_82[iParam0]);
			if (!__LIB_0__::func_71(iLocal_82[iParam0]))
			{
				PED::_SET_PED_ON_MOUNT(iLocal_82[iParam0], Local_670[iParam0 /*32*/].f_11, -1, true);
			}
		}
		return true;
	}
	return false;
}

bool func_316(float fParam0, float fParam1, int iParam2)
{
	if (fParam0 >= fParam1)
	{
		func_137(iLocal_82[0], Global_35, iParam2, 0, 0, 0, 0, 0);
		return true;
	}
	return false;
}

bool func_318(float fParam0)
{
	if (!__LIB_0__::func_75(&uLocal_39))
	{
		__LIB_1__::func_283(&uLocal_39, 0);
		return false;
	}
	if (__LIB_1__::func_285(&uLocal_39, fParam0))
	{
		return true;
	}
	return false;
}

void func_331(var uParam0, int iParam1)
{
	uParam0->f_27 = iParam1;
}

float func_470(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 25.72f;
		case 4:
			return 27.23f;
		default:
			break;
	}
	return 0f;
}

void func_471(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = func_622(iParam0);
	switch (iParam0)
	{
		case 3:
			switch (iVar0)
			{
				case 1:
					*uParam1 = 1;
					break;
				case 3:
					*uParam1 = 3;
					break;
				case 2:
					*uParam1 = 1;
					break;
				default:
					*uParam1 = 7;
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 1:
					*uParam1 = 2;
					break;
				case 2:
					*uParam1 = 6;
					break;
				case 3:
					*uParam1 = 4;
					break;
				default:
					*uParam1 = 7;
					break;
			}
			break;
		default:
			*uParam1 = 7;
			break;
	}
}

char* func_472(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BREAKOUT_BK_MALE_C";
		case 2:
			return "BREAKOUT_BK_MALE_D";
		case 3:
			return "BREAKOUT_BK_LT_BANDITO_C_MALE_C";
		case 4:
			return "BREAKOUT_BK_LT_BANDITO_D_MALE_D";
		case 5:
			return "BREAKOUT_BK_MALE_C";
		case 6:
			return "BREAKOUT_RT_MALE_D";
		default:
			break;
	}
	return "";
}

void func_475(int iParam0)
{
	float fVar0;
	fVar0 = 2f;
	if (func_93(iParam0, 64, 0))
	{
		fVar0 = (fVar0 + 1f);
	}
	PED::_0x89F5E7ADECCCB49C(iLocal_82[iParam0], "brave");
	TASK::OPEN_SEQUENCE_TASK(&(Local_111[iParam0 /*100*/].f_87));
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_82[0], 0, -1f, -1f, -1f);
	__LIB_1__::func_474(iLocal_82[iParam0], &(Local_111[iParam0 /*100*/].f_87), fVar0, 0, 1, 1);
}

float func_476(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0.133f;
		case 2:
			return 0.086f;
		case 3:
			return 0.099f;
		case 4:
			return 0.107f;
		case 5:
			return 0.133f;
		case 6:
			return 0.086f;
		default:
			break;
	}
	return 0f;
}

bool func_477(int iParam0)
{
	if (func_72(Local_111[iParam0 /*100*/].f_3, 0))
	{
		if (Local_111[iParam0 /*100*/])
		{
			return true;
		}
	}
	return false;
}

int func_481(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		__LIB_1__::func_487(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			__LIB_1__::func_148(&(iParam1->f_13));
		}
		if (__LIB_2__::func_525(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_3__::func_374(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_481(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_2__::func_344(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							__LIB_1__::func_488(*uParam0, 1, 1);
						}
					}
					else if (__LIB_1__::func_489(iParam1, 22))
					{
						__LIB_1__::func_488(*uParam0, 0, 1);
					}
				}
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_375(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									__LIB_1__::func_490(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					__LIB_2__::func_361(iParam1, uParam3, fVar8);
					if (__LIB_2__::func_589(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_377(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_375(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
					}
					__LIB_1__::func_491(iParam1, 1);
				}
				__LIB_2__::func_361(iParam1, uParam3, fVar8);
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			__LIB_2__::func_593(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

int func_495(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	if (func_47(iParam2, 0))
	{
		return 1;
	}
	else if (func_137(iParam0, Global_35, iParam1, fParam3, bParam4, 0, 0, 0))
	{
		func_50(iParam2);
		return 1;
	}
	return 0;
}

int func_622(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	switch (iParam0)
	{
		case 3:
			vVar0 = { -3640.8f, -2611.6f, -14.3f };
			vVar3 = { -3634.2f, -2598.6f, -14.5f };
			vVar6 = { -3636.4f, -2611.2f, -14.3f };
			vVar9 = { -3640.1f, -2592.5f, -14.3f };
			if (__LIB_0__::func_195(vVar0, vVar3, Global_36))
			{
				if (__LIB_0__::func_195(vVar6, vVar9, Global_36))
				{
					return 1;
				}
				else
				{
					return 3;
				}
			}
			else if (__LIB_0__::func_195(vVar6, vVar9, Global_36))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
		case 4:
			vVar0 = { -3641.6f, -2613.9f, -14.7f };
			vVar3 = { -3627.9f, -2608.6f, -14.3f };
			vVar6 = { -3633f, -2618.8f, -14.6f };
			vVar9 = { -3636f, -2605.3f, -14.5f };
			if (__LIB_0__::func_195(vVar0, vVar3, Global_36))
			{
				if (__LIB_0__::func_195(vVar6, vVar9, Global_36))
				{
					return 3;
				}
				else
				{
					return 3;
				}
			}
			else if (__LIB_0__::func_195(vVar6, vVar9, Global_36))
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		default:
			return 0;
	}
	return 0;
}

