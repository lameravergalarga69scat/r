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
	struct<239> Local_14 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, -1, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 5;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	struct<10> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		Local_14.f_237 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		Local_14.f_236 = 1;
	}
	while (true)
	{
		__LIB_2__::func_265(Local_14.f_236, 244, 0);
		if (Local_14.f_236)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (func_3())
			{
				func_1();
			}
			if (Local_14.f_20 > 0)
			{
				func_4();
				func_5();
			}
			switch (Local_14.f_20)
			{
				case 0:
					if (func_6(ScriptParam_0))
					{
						__LIB_3__::func_900(&Local_14, 1);
					}
					break;
				case 1:
					if (func_8() && PED::_0x5E420FF293EE5472())
					{
						__LIB_3__::func_900(&Local_14, 2);
					}
					break;
				case 2:
					if (func_9())
					{
						func_10(&Local_14, &(Local_14.f_25));
						__LIB_3__::func_900(&Local_14, 3);
					}
					break;
				case 3:
					if (func_11())
					{
						__LIB_3__::func_900(&Local_14, 4);
					}
					break;
				case 4:
					func_12();
					break;
			}
			BUILTIN::WAIT(0);
		}
	}
}

void func_1()
{
	int iVar0;
	if (Local_14.f_236)
	{
		if (func_13() > 0)
		{
			if (__LIB_0__::func_1(Local_14.f_237, 1) || __LIB_0__::func_1(Local_14.f_237, 2))
			{
				Global_1392135.f_55 = 0;
				Global_1392135.f_56 = 0;
				__LIB_9__::func_685(65536, 2);
			}
		}
	}
	else
	{
		STREAMING::_REMOVE_IMAP(1335714585);
	}
	func_16(&(Local_14.f_247));
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_2__::func_353(&(Local_14.f_241[iVar0]), 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_14[iVar0]))
		{
			__LIB_2__::func_32(&(Local_14[iVar0]));
		}
		__LIB_0__::func_490(&(Local_14[iVar0]), !Local_14.f_236);
		iVar0++;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_222[0]))
	{
		POPULATION::_0x74C2B3DC0B294102(Local_14.f_222[0]);
		POPULATION::_0xA1CFB35069D23C23(Local_14.f_222[0]);
	}
	__LIB_0__::func_325(&(Local_14.f_18));
	Global_1392135.f_55 = 0;
	if (__LIB_0__::func_563(65536, 2))
	{
		if (func_13() <= 0)
		{
			if (__LIB_1__::func_209(__LIB_11__::func_115()))
			{
				__LIB_1__::func_222(__LIB_11__::func_115(), 1);
			}
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3()
{
	if (Local_14.f_20 > 0)
	{
		if (BUILTIN::VDIST2(Global_36, Local_14.f_238) > 40000f)
		{
			return true;
		}
		if (Local_14.f_23 <= 0)
		{
			if (__LIB_0__::func_296(22530, 1, 1))
			{
				return true;
			}
			if (__LIB_11__::func_119())
			{
				return true;
			}
		}
	}
	return false;
}

void func_4()
{
	switch (Local_14.f_210)
	{
		case 0:
			Local_14.f_212 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_14.f_238, false);
			break;
		case 1:
			break;
		case 2:
			break;
	}
	Local_14.f_210++;
	if (Local_14.f_210 > 2)
	{
		Local_14.f_210 = 0;
	}
}

void func_5()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (Local_14.f_212 < 90f)
	{
		if (!func_28(&Local_14, 2))
		{
			if (__LIB_1__::func_373(Local_14.f_238, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */) || Local_14.f_212 < 60f)
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					func_30(&Local_14, 2);
				}
			}
		}
		else if (!func_28(&Local_14, 4))
		{
			if (Local_14.f_212 < 60f)
			{
				bVar0 = true;
				bVar1 = true;
				iVar2 = 0;
				while (iVar2 <= 4)
				{
					bVar0 = func_31(iVar2);
					if (!bVar0)
					{
						bVar1 = false;
					}
					iVar2++;
				}
				if (bVar1)
				{
					func_30(&Local_14, 4);
				}
				__LIB_0__::func_325(&(Local_14.f_18));
			}
		}
	}
}

bool func_6(struct<7> Param0, var uParam7, var uParam8, var uParam9)
{
	Local_14.f_19 = 0;
	Local_14.f_238 = { Param0.f_6 };
	Local_14.f_209 = 5;
	PED::_0xED9582B3DA8F02B4(Local_14.f_209);
	STREAMING::_REQUEST_IMAP(1335714585);
	__LIB_2__::func_659(&(Local_14.f_241[1]), 1587.413f, -1842.189f, 51.45913f, 0.88f, 0, 1);
	__LIB_2__::func_659(&(Local_14.f_241[2]), 1588.182f, -1842.265f, 51.46088f, 0.82f, 0, 1);
	__LIB_2__::func_659(&(Local_14.f_241[3]), 1586.058f, -1844.742f, 51.35341f, 1.4f, 0, 1);
	__LIB_2__::func_659(&(Local_14.f_241[4]), 1599.115f, -1841.963f, 51.35335f, 0.72f, 0, 1);
	if (!__LIB_1__::func_209(__LIB_11__::func_115()))
	{
		__LIB_2__::func_862(__LIB_11__::func_115(), 125f, "lemoyne_raider_church", 1, 0, 1, 0, -1082130432 /* Float: -1f */);
	}
	Local_14.f_222[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1593.4f, -1845.3f, 53.7f, 0f, 0f, 0f, 60f, 60f, 10f, "volRestriction");
	POPULATION::_0x18262CAFEBB5FBE1(Local_14.f_222[0], 2272, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(Local_14.f_222[0], 2272, 0, 0, -1, -1, 0);
	Local_14.f_222[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAlerted");
	VOLUME::_0xBCE668AAF83608BE(Local_14.f_222[2], 1560.173f, -1821.479f, 53.70001f, 0f, 0f, 0f, 40f, 40f, 10f);
	VOLUME::_0xBCE668AAF83608BE(Local_14.f_222[2], 1573.658f, -1860.942f, 53.70001f, 0f, 0f, 0f, 50.20991f, 40f, 10f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_222[2], 1576.054f, -1817.751f, 57.71899f, 0f, 0f, 14.44917f, 69.3563f, 74.30799f, 33.77632f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_222[2], 1577.62f, -1842.014f, 57.719f, 0f, 0f, 40.91763f, 76.28379f, 74.30799f, 33.77632f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_222[2], 1613.172f, -1828.555f, 57.71899f, 0f, 0f, 29.44917f, 11.87738f, 39.2687f, 33.77632f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_222[2], 1609.511f, -1820.207f, 57.71899f, 0f, 0f, 21.44917f, 11.87738f, 39.2687f, 33.77632f);
	__LIB_6__::func_905(&(Local_14.f_180));
	__LIB_4__::func_228(&(Local_14.f_180));
	__LIB_9__::func_261(&(Local_14.f_180));
	__LIB_1__::func_397(&(Local_14.f_180), 1);
	__LIB_1__::func_393(&(Local_14.f_180), 0);
	__LIB_2__::func_829(&(Local_14.f_180), 0);
	__LIB_1__::func_396(&(Local_14.f_180), 1);
	__LIB_9__::func_262(&(Local_14.f_180), 1);
	return true;
}

int func_8()
{
	switch (Local_14.f_21)
	{
		case 0:
			func_42(&Local_14);
			__LIB_2__::func_906(&Local_14, 1);
			break;
		case 1:
			if (!func_44(&Local_14))
			{
				return 0;
			}
			__LIB_2__::func_906(&Local_14, 3);
			break;
		case 2:
			break;
		case 3:
			return 1;
	}
	return 0;
}

bool func_9()
{
	switch (Local_14.f_22)
	{
		case 0:
			if (func_45())
			{
				Local_14.f_22 = 1;
			}
			break;
		case 1:
			if (func_46())
			{
				Local_14.f_22 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_10(var uParam0, var uParam1)
{
	char* sVar0[2];
	char* sVar3[2];
	sVar0[0] = __LIB_2__::func_460(7);
	sVar0[1] = __LIB_2__::func_460(10);
	sVar3[0] = "GEAC_ILO_GREET";
	sVar3[1] = "GEAC_ILO_ANTAGONIZE";
	__LIB_2__::func_586(&(uParam1->f_106[0 /*17*/]), sVar0[0], sVar3[0], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	__LIB_2__::func_586(&(uParam1->f_106[1 /*17*/]), sVar0[1], sVar3[1], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
}

bool func_11()
{
	switch (Local_14.f_19)
	{
		case 0:
			if (func_49())
			{
				__LIB_3__::func_198(65536, 2);
				return true;
			}
			break;
		case 3:
			__LIB_0__::func_16();
			break;
		case 4:
			__LIB_0__::func_16();
			break;
	}
	return false;
}

void func_12()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_14.f_209)
	{
		if (__LIB_2__::func_1(Local_14[iVar0], 0, 0))
		{
			if (MAP::DOES_BLIP_EXIST(Local_14.f_6[iVar0]))
			{
				if (PED::IS_PED_FLEEING(Local_14[iVar0]))
				{
					if (__LIB_0__::func_94(Local_14[iVar0], Local_14.f_238, 1) > 30f)
					{
						__LIB_0__::func_325(&(Local_14.f_6[iVar0]));
					}
				}
			}
		}
		iVar0++;
	}
}

int func_13()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_14.f_209)
	{
		if (__LIB_2__::func_1(Local_14[iVar0], 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_16(var uParam0)
{
	if (__LIB_0__::func_27(*uParam0, 8))
	{
		AUDIO::_0x660A8F876DF1D4F8(39);
		__LIB_0__::func_8(uParam0, 8);
	}
}

bool func_28(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_173, iParam1);
}

void func_30(var uParam0, int iParam1)
{
	__LIB_0__::func_7(&(uParam0->f_173), iParam1);
}

int func_31(int iParam0)
{
	if (Local_14.f_12[iParam0])
	{
		return 1;
	}
	if (__LIB_1__::func_472(Local_14[iParam0], (60f - 10f), 25f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || __LIB_2__::func_136(Local_14[iParam0], 0))
	{
		__LIB_2__::func_73(Local_14[iParam0], &(Local_14.f_6[iParam0]), joaat("BLIP_STYLE_ENEMY"), -662251075, 0, 0);
		Local_14.f_12[iParam0] = 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_42(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		STREAMING::REQUEST_MODEL(func_84(uParam0, iVar0), false);
		iVar0++;
	}
}

bool func_44(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!STREAMING::HAS_MODEL_LOADED(func_84(uParam0, iVar0)))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_45()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	if (Local_14.f_209 <= 0)
	{
		return true;
	}
	iVar0 = Local_14.f_211;
	iVar1 = func_84(&Local_14, iVar0);
	vVar2 = { func_85(&Local_14, iVar0) };
	fVar5 = func_86(&Local_14, iVar0);
	if (iVar1 != 0)
	{
		Local_14[iVar0] = __LIB_1__::func_545(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(Local_14[iVar0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14[iVar0], true);
			PED::SET_PED_CONFIG_FLAG(Local_14[iVar0], 6, true);
			PED::REQUEST_PED_VISIBILITY_TRACKING(Local_14[iVar0]);
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_14[iVar0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_14[iVar0], true, false);
			}
			__LIB_2__::func_22(&(Local_14.f_180), Local_14[iVar0]);
		}
		else
		{
			Local_14.f_211 = (Local_14.f_211 - 1);
		}
	}
	Local_14.f_211++;
	if (Local_14.f_211 >= Local_14.f_209)
	{
		Local_14.f_211 = 0;
		return true;
	}
	return false;
}

bool func_46()
{
	int iVar0;
	if (__LIB_2__::func_1(Local_14[0], 0, 0))
	{
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_14[0], ENTITY::GET_ENTITY_COORDS(Local_14[0], true, false), 3f, 0, false, false, false, false);
		__LIB_2__::func_133(Local_14[0], func_89(0), 0);
		__LIB_2__::func_357(Local_14[0], Global_36, 3, 0, 2);
	}
	if (__LIB_2__::func_1(Local_14[1], 0, 1))
	{
		__LIB_2__::func_133(Local_14[1], func_89(1), 0);
		__LIB_2__::func_357(Local_14[1], Global_36, 3, 0, 3);
	}
	iVar0 = 0;
	while (iVar0 < Local_14.f_209)
	{
		if (__LIB_2__::func_1(Local_14[iVar0], 0, 0))
		{
			PED::SET_PED_ACCURACY(Local_14[iVar0], 90);
			PED::SET_PED_SHOOT_RATE(Local_14[iVar0], 120);
			PED::_SET_PED_DAMAGE_MODIFIER(Local_14[iVar0], 1.2f);
			PED::SET_PED_FIRING_PATTERN(Local_14[iVar0], joaat("FIRING_PATTERN_BURST_FIRE"));
			PED::_0x20E54854DEF6A54A(Local_14[iVar0], joaat("FIRING_PATTERN_BURST_FIRE_IN_COVER"));
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_14[iVar0], 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_14[iVar0], 71, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_14[iVar0], 47, true);
			PED::SET_COMBAT_FLOAT(Local_14[iVar0], 39, 10f);
			PED::SET_PED_CONFIG_FLAG(Local_14[iVar0], 246, true);
			PED::SET_PED_CONFIG_FLAG(Local_14[iVar0], 6, true);
			PED::SET_PED_HEARING_RANGE(Local_14[iVar0], 6f);
			PED::SET_PED_COMBAT_RANGE(Local_14[iVar0], 0);
		}
		iVar0++;
	}
	if (__LIB_2__::func_1(Local_14[2], 0, 1))
	{
		func_92(2);
		__LIB_2__::func_133(Local_14[2], func_89(2), 0);
	}
	if (__LIB_2__::func_1(Local_14[3], 0, 1))
	{
		func_93(3);
		__LIB_2__::func_133(Local_14[3], func_89(3), 0);
	}
	if (__LIB_2__::func_1(Local_14[4], 0, 1))
	{
		func_94(4);
		__LIB_2__::func_133(Local_14[4], func_89(4), 0);
	}
	return true;
}

bool func_49()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (Local_14.f_23 < 6)
	{
		if (Local_14.f_23 < 3)
		{
			if (func_101(&Local_14, &(Local_14.f_180), &(Local_14.f_208), &(Local_14.f_220), 0, 4, 1))
			{
				__LIB_2__::func_592(&(Local_14.f_25.f_106), 1, 1);
				iVar0 = Local_14.f_220;
				func_103(Local_14[iVar0], Global_35, "GENERIC_SHOCKED_HIGH", 0, 1, 1744022339, -1082130432 /* Float: -1f */);
				__LIB_2__::func_73(Local_14[iVar0], &(Local_14.f_6[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				__LIB_0__::func_325(&(Local_14.f_18));
				func_30(&Local_14, 4);
				__LIB_1__::func_283(&(Local_14.f_226[1 /*3*/]), 0);
				__LIB_16__::func_794(&Local_14, 3);
			}
		}
		else if (Local_14.f_23 > 3)
		{
			if (func_13() <= 2)
			{
				__LIB_1__::func_283(&(Local_14.f_226[2 /*3*/]), 0);
				__LIB_16__::func_794(&Local_14, 6);
			}
		}
	}
	if (Local_14.f_23 > 1)
	{
		func_106();
		if (Local_14.f_23 > 3)
		{
			func_107(&(Local_14.f_25));
		}
	}
	iVar1 = -1;
	iVar1 = func_108(&(Local_14.f_25));
	switch (Local_14.f_23)
	{
		case 0:
			func_109();
			if (func_110(iVar1))
			{
				__LIB_2__::func_592(&(Local_14.f_25.f_106), 1, 1);
				__LIB_16__::func_794(&Local_14, 1);
			}
			break;
		case 1:
			func_111();
			if ((func_112(0) && Local_14.f_219 < 0) || __LIB_2__::func_227(0f, 1, Local_14[Local_14.f_219], 1))
			{
				__LIB_1__::func_148(&(Local_14.f_226[1 /*3*/]));
				iVar2 = func_115(Local_14.f_219);
				switch (iVar2)
				{
					case 0:
						sVar3 = "HUNKER_DOWN";
						iVar4 = 2;
						break;
					case 1:
						sVar3 = "HUNKER_DOWN";
						iVar4 = 1;
						break;
					case 2:
						sVar3 = "HUNKER_DOWN";
						iVar4 = 1;
						break;
				}
				func_103(Local_14[Local_14.f_219], Global_35, sVar3, iVar4, 1, 1744022339, -1082130432 /* Float: -1f */);
				__LIB_16__::func_794(&Local_14, 2);
			}
			break;
		case 2:
			func_111();
			if ((func_112(0) && Local_14.f_219 < 0) || __LIB_2__::func_227(0f, 1, Local_14[Local_14.f_219], 1))
			{
				if (__LIB_2__::func_155(2, 1))
				{
					func_103(Local_14[Local_14.f_219], Global_35, "GANG_INTERACT_CHAT_RECOGNIZE_YOU", 0, 1, 291934926, -1082130432 /* Float: -1f */);
				}
				else
				{
					func_103(Local_14[Local_14.f_219], Global_35, "PROTECT_POSSESSIONS", 3, 1, 1744022339, -1082130432 /* Float: -1f */);
				}
				iVar5 = 0;
				while (iVar5 < Local_14.f_209)
				{
					if (__LIB_2__::func_1(Local_14[iVar5], 0, 1) && iVar5 != Local_14.f_219)
					{
						__LIB_2__::func_504(Local_14[iVar5], 500);
					}
					iVar5++;
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar6);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_14[Local_14.f_219], &iVar6, 0, 0, 1, 1);
				__LIB_1__::func_148(&(Local_14.f_226[1 /*3*/]));
				__LIB_16__::func_794(&Local_14, 3);
			}
			else if (!__LIB_2__::func_1(Local_14[Local_14.f_219], 0, 1))
			{
				__LIB_16__::func_794(&Local_14, 0);
			}
			break;
		case 3:
			func_111();
			if (__LIB_1__::func_285(&(Local_14.f_226[1 /*3*/]), 0.5f))
			{
				func_120();
				__LIB_16__::func_794(&Local_14, 4);
			}
			break;
		case 4:
			func_111();
			if (__LIB_2__::func_227(2f, 1, 0, 0))
			{
				iVar0 = func_121();
				if (iVar0 != -1)
				{
					func_103(Local_14[iVar0], Global_35, "TAUNT_GEN_LOCATION", 0, 1, 1744022339, -1082130432 /* Float: -1f */);
					__LIB_16__::func_794(&Local_14, 5);
				}
			}
			break;
		case 5:
			break;
		case 6:
			if (__LIB_1__::func_285(&(Local_14.f_226[2 /*3*/]), 1.5f))
			{
				iVar7 = -1;
				iVar8 = 0;
				while (iVar8 < Local_14.f_209)
				{
					if (__LIB_2__::func_1(Local_14[iVar8], 0, 1) && __LIB_2__::func_227(0f, 1, Local_14[iVar8], 1))
					{
						iVar7 = iVar8;
					}
					iVar8++;
				}
				if (iVar7 != -1 && __LIB_2__::func_227(0f, 1, Local_14[iVar7], 1))
				{
					func_103(Local_14[iVar7], Global_35, "CALLOUT_NEAR_DEFEAT", 0, 1, 1744022339, -1082130432 /* Float: -1f */);
					PED::SET_PED_COMBAT_RANGE(Local_14[iVar7], 0);
				}
				func_122(&(Local_14.f_247));
				__LIB_16__::func_794(&Local_14, 7);
			}
			break;
		case 7:
			if (func_13() == 0)
			{
				__LIB_16__::func_794(&Local_14, 8);
			}
			break;
		case 8:
			if (__LIB_2__::func_393(&(Local_14.f_247)))
			{
				func_16(&(Local_14.f_247));
				return true;
			}
			else if (func_124(&(Local_14.f_247), &Local_14, 0, -1, 1073741824 /* Float: 2f */, 0))
			{
				func_103(Global_35, Global_35, "GEAC_COMBATOVER_KNOWN", 0, 1, 291934926, -1082130432 /* Float: -1f */);
				func_16(&(Local_14.f_247));
				return true;
			}
			break;
	}
	return false;
}

int func_84(var uParam0, int iParam1)
{
	switch (uParam0->f_19)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("G_M_O_UNIEXCONFEDS_01");
				case 1:
					return joaat("G_M_O_UNIEXCONFEDS_01");
				case 2:
					return joaat("G_M_Y_UNIEXCONFEDS_01");
				case 3:
					return joaat("G_M_Y_UNIEXCONFEDS_01");
				case 4:
					return joaat("G_M_Y_UNIEXCONFEDS_01");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("G_M_O_UNIEXCONFEDS_01");
				case 1:
					return joaat("G_M_O_UNIEXCONFEDS_01");
				case 2:
					return joaat("G_M_Y_UNIEXCONFEDS_01");
				case 3:
					return joaat("G_M_Y_UNIEXCONFEDS_01");
				case 4:
					return joaat("G_M_Y_UNIEXCONFEDS_01");
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("G_M_O_UNIEXCONFEDS_01");
				case 1:
					return joaat("G_M_O_UNIEXCONFEDS_01");
				case 2:
					return joaat("G_M_Y_UNIEXCONFEDS_01");
				case 3:
					return joaat("G_M_Y_UNIEXCONFEDS_01");
				case 4:
					return joaat("G_M_Y_UNIEXCONFEDS_01");
				default:
					break;
			}
			break;
		case 3:
			return 0;
		case 4:
			return 0;
	}
	return 0;
}

Vector3 func_85(var uParam0, int iParam1)
{
	switch (uParam0->f_19)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1596.793f, -1842.796f, 51.3534f;
				case 1:
					return 1597.375f, -1841.237f, 51.3534f;
				case 2:
					return 1585.675f, -1850.659f, 51.3534f;
				case 3:
					return 1588.778f, -1840.946f, 57.4932f;
				case 4:
					return 1582.259f, -1848.166f, 51.6012f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1596.793f, -1842.796f, 51.3534f;
				case 1:
					return 1597.375f, -1841.237f, 51.3534f;
				case 2:
					return 1585.675f, -1850.659f, 51.3534f;
				case 3:
					return 1588.778f, -1840.946f, 57.4932f;
				case 4:
					return 1582.259f, -1848.166f, 51.6012f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1596.793f, -1842.796f, 51.3534f;
				case 1:
					return 1597.375f, -1841.237f, 51.3534f;
				case 2:
					return 1585.675f, -1850.659f, 51.3534f;
				default:
					break;
			}
			break;
		case 3:
			return 0f, 0f, 0f;
		case 4:
			return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

float func_86(var uParam0, int iParam1)
{
	switch (uParam0->f_19)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 249.8929f;
				case 1:
					return 158.6f;
				case 2:
					return 147.4517f;
				case 3:
					return 349.7394f;
				case 4:
					return 66.1168f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 249.8929f;
				case 1:
					return 158.6f;
				case 2:
					return 147.4517f;
				case 3:
					return 349.7394f;
				case 4:
					return 66.1168f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 249.8929f;
				case 1:
					return 158.6f;
				case 2:
					return 147.4517f;
				default:
					break;
			}
			break;
		case 3:
			return 0f;
		case 4:
			return 0f;
	}
	return 0f;
}

char* func_89(int iParam0)
{
	return func_129(func_115(iParam0));
}

void func_92(int iParam0)
{
	int iVar0;
	WEAPON::REMOVE_ALL_PED_WEAPONS(Local_14[iParam0], true, true);
	__LIB_2__::func_272(Local_14[iParam0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	PED::SET_PED_SHOOT_RATE(Local_14[iParam0], 200);
	PED::SET_PED_ACCURACY(Local_14[iParam0], 95);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1583.432f, -1856.547f, 51.35341f, 1f, -1, 0.25f, 0, 167.98f);
	TASK::TASK_STAND_STILL(0, 6000);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1591.964f, -1862.239f, 51.35333f, 1f, -1, 0.25f, 0, -140.99f);
	TASK::TASK_STAND_STILL(0, 6000);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1603.992f, -1852.606f, 51.3533f, 1f, -1, 0.25f, 0, -42.6f);
	TASK::TASK_STAND_STILL(0, 6000);
	__LIB_1__::func_474(Local_14[iParam0], &iVar0, 0, 0, 1, 1);
}

void func_93(int iParam0)
{
	int iVar0;
	WEAPON::REMOVE_ALL_PED_WEAPONS(Local_14[iParam0], true, true);
	__LIB_2__::func_272(Local_14[iParam0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	PED::SET_PED_SHOOT_RATE(Local_14[iParam0], 200);
	PED::SET_PED_ACCURACY(Local_14[iParam0], 95);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1587.7f, -1839.29f, 57.54097f, 1f, -1, 0.25f, 0, 66.24f);
	TASK::TASK_STAND_STILL(0, 6000);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1589.867f, -1838.341f, 57.51658f, 1f, -1, 0.25f, 0, -18.52f);
	TASK::TASK_STAND_STILL(0, 6000);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1585.318f, -1846.046f, 57.47854f, 1f, -1, 0.25f, 0, 66.24f);
	TASK::TASK_STAND_STILL(0, 6000);
	__LIB_1__::func_474(Local_14[iParam0], &iVar0, 0, 0, 1, 1);
}

void func_94(int iParam0)
{
	int iVar0;
	WEAPON::REMOVE_ALL_PED_WEAPONS(Local_14[iParam0], true, true);
	__LIB_2__::func_272(Local_14[iParam0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	PED::SET_PED_SHOOT_RATE(Local_14[iParam0], 200);
	PED::SET_PED_ACCURACY(Local_14[iParam0], 95);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1582.495f, -1835.801f, 51.4223f, 1f, -1, 0.25f, 0, 17.0239f);
	TASK::TASK_STAND_STILL(0, 6000);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1590.312f, -1834.216f, 51.3534f, 1f, -1, 0.25f, 0, 335.083f);
	TASK::TASK_STAND_STILL(0, 6000);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1597.357f, -1835.73f, 51.3534f, 1f, -1, 0.25f, 0, 312.3015f);
	TASK::TASK_STAND_STILL(0, 6000);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1583.189f, -1834.716f, 51.4514f, 1f, -1, 0.25f, 0, 55.1287f);
	TASK::TASK_STAND_STILL(0, 6000);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1576.424f, -1844.537f, 51.3534f, 1f, -1, 0.25f, 0, 121.5438f);
	TASK::TASK_STAND_STILL(0, 6000);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1580.415f, -1848.693f, 51.3534f, 1f, -1, 0.25f, 0, 212.577f);
	TASK::TASK_STAND_STILL(0, 6000);
	__LIB_1__::func_474(Local_14[iParam0], &iVar0, 0, 0, 1, 1);
}

bool func_101(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_138((*uParam0)[*uParam3], 0, uParam1, uParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

bool func_103(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, float fParam6)
{
	return __LIB_2__::func_303(iParam0, iParam1, sParam2, "", fParam6, iParam3, 0, 0, 1, fParam6 > 0f, bParam4, iParam5, 1, 0, 0);
}

void func_106()
{
	int iVar0;
	if (func_28(&Local_14, 8))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_14.f_209)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_14[iVar0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_14[iVar0], Global_35, 1, 1))
			{
				__LIB_2__::func_304(1, -1, 0, 0, 0);
				func_30(&Local_14, 8);
				return;
			}
		}
		iVar0++;
	}
}

void func_107(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_14.f_209)
	{
		if (!Local_14.f_213[iVar0])
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_14[iVar0]))
			{
				if (__LIB_2__::func_398(Local_14[iVar0]))
				{
					__LIB_3__::func_491(&(Local_14[iVar0]), uParam0[iVar0 /*21*/], &(uParam0->f_106), 1, 1);
					Local_14.f_213[iVar0] = 1;
				}
			}
			else
			{
				Local_14.f_213[iVar0] = 1;
			}
		}
		iVar0++;
	}
}

int func_108(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar3 = -1;
	iVar4 = -1;
	iVar5 = 524288 | __LIB_2__::func_340(3, 0, 0);
	iVar7 = 1;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_14[iVar1]))
		{
		}
		else
		{
			iVar0 = func_146(&(Local_14[iVar1]), uParam0[iVar1 /*21*/], 50f, &(uParam0->f_106), &iVar7, 4f, 3, 0, 0, iVar5, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (__LIB_2__::func_341(uParam0[iVar1 /*21*/]))
			{
				if (!uParam0->f_146)
				{
					if (uParam0->f_142 == -1)
					{
						uParam0->f_142 = iVar1;
					}
					iVar4 = (uParam0[iVar1 /*21*/])->f_1;
					TASK::OPEN_SEQUENCE_TASK(&iVar6);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
					__LIB_1__::func_474(Local_14[iVar1], &iVar6, 1f, 0, 1, 1);
					switch (iVar4)
					{
						case 0:
							__LIB_2__::func_592(&(uParam0->f_106), 1, 1);
							break;
						case 1:
							__LIB_2__::func_592(&(uParam0->f_106), 1, 1);
							break;
					}
					switch (iVar4)
					{
						case 0:
						case 1:
							__LIB_18__::func_180(uParam0, 0, 1);
							break;
					}
					iVar2 = 0;
					while (iVar2 <= 4)
					{
						if (__LIB_2__::func_1(Local_14[iVar2], 0, 1))
						{
							__LIB_2__::func_504(Local_14[iVar2], 500);
						}
						iVar2++;
					}
					uParam0->f_146 = 1;
				}
			}
			if (iVar0 != -1)
			{
				iVar3 = iVar0;
				uParam0->f_141 = iVar3;
				switch (iVar3)
				{
					case 0:
						break;
					case 1:
						uParam0->f_145++;
						break;
				}
				uParam0->f_146 = 0;
				uParam0->f_143 = 0;
			}
		}
		iVar1++;
	}
	return iVar3;
}

void func_109()
{
	if (func_149(&(Local_14.f_25)))
	{
		return;
	}
	switch (Local_14.f_24)
	{
		case 0:
			if (Local_14.f_212 < 60f)
			{
				if (func_150(0, 1, "GELRC_STORY1", -1090519040 /* Float: -0.5f */))
				{
					__LIB_16__::func_793(&Local_14, 1);
				}
			}
			break;
		case 1:
			if (func_150(1, 0, "GELRC_STORY2", -1090519040 /* Float: -0.5f */))
			{
				__LIB_16__::func_793(&Local_14, 2);
			}
			break;
		case 2:
			if (func_150(0, 1, "GELRC_STORY3", -1f))
			{
				__LIB_16__::func_793(&Local_14, 3);
			}
			break;
		case 3:
			if (func_150(1, 0, "GELRC_STORY4", -1090519040 /* Float: -0.5f */))
			{
				__LIB_16__::func_793(&Local_14, 4);
			}
			break;
		case 4:
			if (func_150(0, 1, "GELRC_STORY5", -5f))
			{
				__LIB_16__::func_793(&Local_14, 5);
			}
			break;
		case 5:
			if (func_150(1, 0, "GELRC_STORY6", -1f))
			{
				__LIB_16__::func_793(&Local_14, 6);
			}
			break;
		case 6:
			if (func_150(0, 1, "GELRC_STORY7", -0.5f))
			{
				__LIB_16__::func_793(&Local_14, 9);
			}
			break;
		case 9:
			break;
	}
}

bool func_110(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (iParam0 != -1)
	{
		bVar0 = true;
	}
	else if (!func_149(&(Local_14.f_25)))
	{
		if ((Local_14.f_212 < (60f - 5f) && __LIB_2__::func_157(Local_14.f_222[2], Global_36)) && func_153(&Local_14, &(Local_14.f_180), &(Local_14.f_208), &(Local_14.f_219), 0, 4, 1))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14[Local_14.f_219], Global_35, 17))
			{
				iVar1 = 1;
			}
		}
	}
	if (bVar0 || iVar1)
	{
		if (bVar0)
		{
			Local_14.f_221 = Local_14.f_25.f_142;
		}
		else
		{
			Local_14.f_221 = Local_14.f_219;
		}
		if (Local_14.f_172 != -1)
		{
			if (Local_14.f_221 != Local_14.f_172)
			{
				__LIB_2__::func_504(Local_14[Local_14.f_172], 500);
			}
		}
		if (!PED::IS_PED_FACING_PED(Local_14[Local_14.f_219], Global_35, 30f))
		{
			func_103(Local_14[Local_14.f_219], Global_35, "WHAT_WAS_THAT", 0, 1, 1744022339, -1082130432 /* Float: -1f */);
		}
		__LIB_2__::func_73(Local_14[Local_14.f_219], &(Local_14.f_6[Local_14.f_219]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		__LIB_2__::func_45(Local_14[Local_14.f_219], Global_35, -1);
		if (Local_14.f_219 == 0)
		{
			TASK::TASK_LOOK_AT_ENTITY(Local_14[0], Global_35, 8000, 0, 51, 0);
			TASK::TASK_LOOK_AT_ENTITY(Local_14[1], Global_35, 8000, 0, 51, 0);
			__LIB_2__::func_357(Local_14[0], Global_36, 3, 0, 3);
			__LIB_2__::func_357(Local_14[1], Global_36, 3, 0, 2);
			__LIB_2__::func_73(Local_14[1], &(Local_14.f_6[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			__LIB_2__::func_45(0, Global_35, -1);
			__LIB_1__::func_474(Local_14[1], &iVar2, 1.5f, 0, 1, 1);
		}
		else if (Local_14.f_219 == 1)
		{
			TASK::TASK_LOOK_AT_ENTITY(Local_14[0], Global_35, 8000, 0, 51, 0);
			TASK::TASK_LOOK_AT_ENTITY(Local_14[1], Global_35, 8000, 0, 51, 0);
			__LIB_2__::func_357(Local_14[0], Global_36, 3, 0, 2);
			__LIB_2__::func_357(Local_14[1], Global_36, 3, 0, 3);
			__LIB_2__::func_73(Local_14[0], &(Local_14.f_6[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			__LIB_2__::func_45(0, Global_35, -1);
			__LIB_1__::func_474(Local_14[0], &iVar2, 1.5f, 0, 1, 1);
		}
		__LIB_1__::func_283(&(Local_14.f_226[1 /*3*/]), 0);
		return true;
	}
	return false;
}

void func_111()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_155(iVar0))
		{
			PED::SET_PED_RESET_FLAG(Local_14[iVar0], 27, true);
		}
		iVar0++;
	}
}

bool func_112(bool bParam0)
{
	if (!bParam0)
	{
		if (__LIB_1__::func_285(&(Local_14.f_226[1 /*3*/]), 4f))
		{
			return true;
		}
	}
	if (Local_14.f_219 < 0)
	{
		return false;
	}
	if (!__LIB_2__::func_1(Local_14[Local_14.f_219], 0, 1))
	{
		return true;
	}
	if (Local_14.f_25.f_141 != -1)
	{
		return true;
	}
	if (!__LIB_2__::func_227(0f, 1, Local_14[Local_14.f_219], 1))
	{
		return false;
	}
	if (!PED::IS_PED_FACING_PED(Local_14[Local_14.f_219], Global_35, 30f))
	{
		return false;
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_14[Local_14.f_219], Global_35, 17))
	{
		return false;
	}
	if (!__LIB_1__::func_285(&(Local_14.f_226[1 /*3*/]), 1f))
	{
		return false;
	}
	return true;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 2;
	}
	return -1;
}

void func_120()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < Local_14.f_209)
	{
		if (__LIB_2__::func_1(Local_14[iVar0], 0, 0))
		{
			__LIB_0__::func_325(&(Local_14.f_6[iVar0]));
			__LIB_2__::func_73(Local_14[iVar0], &(Local_14.f_6[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (func_160(iVar0))
			{
				switch (iVar0)
				{
					case 0:
						TASK::TASK_REACT(0, Global_35, Global_36, "TaskCombat_High", 1f, 0, 4);
						break;
					case 1:
						TASK::TASK_REACT(0, Global_35, Global_36, "DEFAULT_BRAVE", 2f, 0, 4);
						break;
					case 2:
						TASK::TASK_REACT(0, Global_35, Global_36, "TaskCombat_React", 1f, 0, 4);
						break;
					case 3:
						TASK::TASK_REACT(0, Global_35, Global_36, "DEFAULT_SHOCKED", 2f, 0, 4);
						break;
					case 4:
						TASK::TASK_REACT(0, Global_35, Global_36, "Default_Angry", 3f, 0, 4);
						break;
				}
			}
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_14[iVar0], &iVar1, 0f, 1f, 1, 1);
		}
		iVar0++;
	}
	COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(joaat("GANG_EXCONFED"));
	__LIB_0__::func_47(&Global_1393447, 1);
	__LIB_2__::func_175();
	__LIB_2__::func_176();
	__LIB_2__::func_30((BUILTIN::TO_FLOAT(200) / 3f));
	iVar2 = __LIB_5__::func_657();
	if (__LIB_0__::func_35(iVar2))
	{
		__LIB_1__::func_309(iVar2, 0, 0, 0, 0);
	}
}

int func_121()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_14.f_209)
	{
		if (__LIB_2__::func_1(Local_14[iVar0], 0, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_122(var uParam0)
{
	if (!__LIB_0__::func_27(*uParam0, 8))
	{
		AUDIO::_0x0D7FD6A55FD63AEF(39, 3, 0);
		__LIB_0__::func_7(uParam0, 8);
	}
}

bool func_124(var uParam0, var uParam1, int iParam2, int iParam3, float fParam4, int iParam5)
{
	int iVar0;
	if (!__LIB_0__::func_27(*uParam0, 4))
	{
		if (__LIB_0__::func_27(iParam5, 1))
		{
			if (__LIB_0__::func_181())
			{
				__LIB_1__::func_581(uParam0, 4);
				return false;
			}
		}
		else if (__LIB_0__::func_27(iParam5, 2))
		{
			if (__LIB_0__::func_113())
			{
				__LIB_1__::func_581(uParam0, 4);
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (!__LIB_0__::func_27(*uParam0, 1))
	{
		if (!__LIB_0__::func_27(*uParam0, 4))
		{
			if (iParam3 < 0)
			{
				iParam3 = *uParam1;
			}
			iVar0 = iParam2;
			while (iVar0 <= ((iParam2 + iParam3) - 1))
			{
				if (__LIB_2__::func_1((*uParam1)[iVar0], 8, 1) && !PED::IS_PED_FLEEING((*uParam1)[iVar0]))
				{
					return false;
				}
				iVar0++;
			}
		}
		__LIB_1__::func_283(&(uParam0->f_1), 0);
		__LIB_1__::func_581(uParam0, 1);
	}
	if (__LIB_0__::func_27(*uParam0, 1))
	{
		if (__LIB_1__::func_285(&(uParam0->f_1), (fParam4 + 4f)))
		{
			__LIB_1__::func_581(uParam0, 4);
			return false;
		}
		if (!__LIB_1__::func_285(&(uParam0->f_1), fParam4))
		{
			return false;
		}
		if (!__LIB_2__::func_227(0f, 1, Global_35, 1))
		{
			return false;
		}
		if (__LIB_2__::func_385(Global_35))
		{
			return false;
		}
		if (Global_1935630.f_24)
		{
			return false;
		}
		__LIB_1__::func_581(uParam0, 4);
		return true;
	}
	return false;
}

char* func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0175_G_M_O_UniExConfeds_01_WHITE_02";
		case 1:
			return "0177_G_M_Y_UniExConfeds_01_WHITE_01";
		case 2:
			return "0179_G_M_Y_UniExConfeds_01_WHITE_03";
		default:
			break;
	}
	return "INVALID";
}

bool func_138(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_5__::func_686(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_968(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_11__::func_603(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_4__::func_235(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_833(uParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_2__::func_878(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

int func_146(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_224(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_2__::func_588(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
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

bool func_149(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_341(uParam0[iVar0 /*21*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_150(int iParam0, int iParam1, char* sParam2, float fParam3)
{
	if (__LIB_2__::func_227(0f, 1, Local_14[iParam1], 1) && __LIB_2__::func_227(fParam3, 1, 0, 0))
	{
		func_103(Local_14[iParam0], Local_14[iParam1], sParam2, 0, 1, 291934926, 60f);
		Local_14.f_172 = iParam0;
		return true;
	}
	return false;
}

bool func_153(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_9__::func_716((*uParam0)[*uParam3], uParam1, uParam2, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

bool func_155(int iParam0)
{
	if (!__LIB_2__::func_1(Local_14[iParam0], 0, 0))
	{
		return false;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_14[iParam0]))
	{
		return false;
	}
	if (__LIB_0__::func_94(Local_14[iParam0], Global_36, 1) < 5f)
	{
		return false;
	}
	if (PED::_0x285D36C5C72B0569(Global_35) < 3f)
	{
		return false;
	}
	if (__LIB_1__::func_285(&(Local_14.f_226[1 /*3*/]), 5f))
	{
		return false;
	}
	if (Local_14.f_219 < 0)
	{
		return false;
	}
	if (!__LIB_2__::func_1(Local_14[Local_14.f_219], 0, 1))
	{
		return false;
	}
	if (!__LIB_2__::func_227(0f, 1, Local_14[Local_14.f_219], 1))
	{
		return true;
	}
	return false;
}

bool func_160(int iParam0)
{
	if (iParam0 == Local_14.f_221)
	{
		return false;
	}
	if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), Local_14[iParam0], 1000))
	{
		return false;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_14[iParam0]))
	{
		return false;
	}
	if (__LIB_0__::func_94(Local_14[iParam0], Global_36, 0) < 8f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_14[iParam0], Global_35, 17))
	{
		return false;
	}
	return true;
}

int func_224(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_4__::func_231(*uParam0, iParam1, uParam3))
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
						return func_224(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

