#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<74> Local_3 = { 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 } ;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = -1;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 1097859072;
	var uLocal_94 = 1000;
	var uLocal_95 = 1067450368;
	var uLocal_96 = 5000;
	var uLocal_97 = 42;
	var uLocal_98 = 1103626240;
	var uLocal_99 = 1077936128;
	var uLocal_100 = 1106247680;
	var uLocal_101 = 1103101952;
	var uLocal_102 = 1097859072;
	var uLocal_103 = 1103626240;
	var uLocal_104 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
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
	struct<140> Var0;
	Var0.f_1 = -1;
	Var0.f_12 = 24;
	Var0.f_114 = joaat("INPUT_CONTEXT_Y");
	Var0.f_128 = 2;
	Var0.f_131 = 2;
	Var0.f_1 = vScriptParam_0.y;
	Var0.f_119 = vScriptParam_0.z;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&Var0);
	}
	Var0.f_139 = __LIB_0__::func_12();
	if (!func_3(&Var0))
	{
		func_1(&Var0);
	}
	while (!func_4(&Var0))
	{
		switch (Var0.f_11)
		{
			case 0:
				func_5(&Var0);
				Var0.f_11 = 1;
				break;
			case 1:
				if (func_6(&Var0))
				{
					Var0.f_11 = 2;
				}
				break;
			case 2:
				if (func_7(&Var0))
				{
					Var0.f_11 = 3;
				}
				break;
			case 3:
				if (func_8(&Var0, 0))
				{
					func_9(&Var0);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_134))
				{
					Var0.f_11 = 2;
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Var0);
}

void func_1(var uParam0)
{
	func_10(uParam0);
	if (MAP::DOES_BLIP_EXIST(uParam0->f_138))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_138));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_6);
	}
	if (__LIB_0__::func_139(uParam0->f_128[0]))
	{
		__LIB_1__::func_748(&(uParam0->f_128[0]), 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_128[1]))
	{
		__LIB_1__::func_748(&(uParam0->f_128[1]), 1, 1);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3(var uParam0)
{
	uParam0->f_111 = "BUY_TICKET";
	uParam0->f_112 = "SHOW_GET_INFO";
	uParam0->f_9 = 1;
	uParam0->f_120 = 0;
	uParam0->f_135 = { 0f, 1f, 0f };
	uParam0->f_113 = "";
	uParam0->f_8 = 1;
	uParam0->f_124 = 3f;
	uParam0->f_2 = { func_13(uParam0->f_1) };
	Local_3.f_24 = uParam0->f_119;
	if (func_14(Local_3.f_24))
	{
		uParam0->f_7 = 1;
	}
	if (__LIB_2__::func_774(36))
	{
		if (uParam0->f_1 == 283)
		{
			uParam0->f_122 = 1;
		}
	}
	else
	{
		uParam0->f_122 = 0;
	}
	uParam0->f_117 = func_16(uParam0->f_1);
	if (uParam0->f_117 >= 100)
	{
		uParam0->f_111 = "BUY_TICKET_DLR";
	}
	func_17(uParam0, 0);
	func_18(&(Local_3.f_51), &(Local_3.f_52), Local_3.f_24);
	switch (__LIB_0__::func_12())
	{
		case 5:
			uParam0->f_110 = "NBX_Bartender";
			break;
		case 38:
			uParam0->f_110 = "NBX_Bartender";
			break;
		case 76:
			uParam0->f_110 = "NBX_Bartender";
			break;
	}
	return true;
}

bool func_4(var uParam0)
{
	float fVar0;
	uParam0->f_140++;
	if (uParam0->f_140 < 10)
	{
		return false;
	}
	uParam0->f_140 = 0;
	if (__LIB_0__::func_12() != uParam0->f_139 || uParam0->f_139 == -1)
	{
		return true;
	}
	if (!uParam0->f_122 && __LIB_0__::func_296(0, 1, 1))
	{
		return true;
	}
	if (uParam0->f_11 == 4)
	{
		return true;
	}
	fVar0 = __LIB_0__::func_94(Global_35, uParam0->f_2, 1);
	if (fVar0 > 60f)
	{
		return true;
	}
	return false;
}

void func_5(var uParam0)
{
	PED::_0xF008E0BA1FE1D644(1);
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

bool func_6(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(*uParam0))
		{
			return false;
		}
	}
	if (uParam0->f_1 != -1)
	{
		if (!PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(uParam0->f_1)))
		{
			return false;
		}
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return PED::_0x5E420FF293EE5472();
}

bool func_7(var uParam0)
{
	int iVar0;
	__LIB_0__::func_11(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
	{
		if (*uParam0 != 0)
		{
			uParam0->f_134 = __LIB_1__::func_545(*uParam0, uParam0->f_2, uParam0->f_5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		else if (uParam0->f_1 != -1)
		{
			if (uParam0->f_9)
			{
				if (__LIB_0__::func_94(Global_35, uParam0->f_2, 1) < 100f)
				{
					if (!__LIB_2__::func_987(uParam0->f_1, 0, 0, 0, 0, 0))
					{
						return false;
					}
				}
			}
			uParam0->f_134 = __LIB_1__::func_334(uParam0->f_1);
		}
		else
		{
			func_1(uParam0);
		}
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_110))
	{
		__LIB_0__::func_928(&(uParam0->f_12), uParam0->f_134, uParam0->f_110, 0);
	}
	MISC::_0x870708A6E147A9AD(uParam0->f_134, "", 3f, 0, 4, 0, 0, 0, 0, -1);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 297, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 315, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 130, true);
	if (uParam0->f_120 != 0)
	{
		if (!uParam0->f_10)
		{
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_138))
			{
				uParam0->f_138 = __LIB_1__::func_863(uParam0->f_134, uParam0->f_120, 1, 1);
			}
			if (uParam0->f_121 != 0)
			{
				MAP::SET_BLIP_SPRITE(uParam0->f_138, uParam0->f_121, true);
			}
		}
		else
		{
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_138))
			{
				uParam0->f_138 = MAP::_BLIP_ADD_FOR_COORD(uParam0->f_120, uParam0->f_2);
			}
			if (uParam0->f_121 != 0)
			{
				MAP::SET_BLIP_SPRITE(uParam0->f_138, uParam0->f_121, true);
				iVar0 = __LIB_10__::func_655(uParam0->f_121);
				if (iVar0 != 0)
				{
					MAP::SET_BLIP_FLASH_TIMER(uParam0->f_138, iVar0, -1);
				}
			}
		}
	}
	if (uParam0->f_8 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_134))
	{
		PED::_0xAE6004120C18DF97(uParam0->f_134, 0, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6))
	{
		if (func_8(uParam0, 0))
		{
			if (uParam0->f_124 > 0f)
			{
				uParam0->f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_134, false, false), 0f, 0f, 0f, uParam0->f_124, uParam0->f_124, 1.7f, "Interact_Ped - volProximityRng");
			}
			else
			{
				uParam0->f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_134, false, false), 0f, 0f, 0f, 5f, 5f, 1.7f, "Interact_Ped - volProximityRng");
			}
		}
		else
		{
			uParam0->f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_134, false, false), 0f, 0f, 0f, 3.5f, 3.5f, 1.7f, "Interact_Ped - volProximityRng");
		}
	}
	return true;
}

bool func_8(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(uParam0->f_118, iParam1);
}

int func_9(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	func_30(uParam0);
	if (uParam0->f_123 == 1)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = PED::_IS_PED_CARRYING(Global_35);
	if (!bVar1)
	{
		bVar1 = __LIB_16__::func_837(Global_35);
	}
	if (__LIB_1__::func_205(Global_35, uParam0->f_6, 0, 0))
	{
		bVar0 = true;
		func_33(uParam0);
	}
	else
	{
		func_34(uParam0);
	}
	if (bVar0)
	{
		if (__LIB_0__::func_665(Global_35, uParam0->f_134, 1, 1) < uParam0->f_124)
		{
			if (!__LIB_0__::func_139(uParam0->f_128[0]) && !uParam0->f_131[0])
			{
				uParam0->f_128[0] = __LIB_2__::func_403(uParam0->f_111, joaat("INPUT_INTERACT_LOCKON_POS"), uParam0->f_134, 1, 1, 0, 0, 0, 3f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(uParam0->f_128[0]) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_134), 0);
				if (uParam0->f_117 >= 100)
				{
					__LIB_17__::func_494(uParam0->f_128[0], uParam0->f_111, (BUILTIN::TO_FLOAT(uParam0->f_117) / 100f), 2, 1);
				}
				else
				{
					__LIB_1__::func_483(uParam0->f_128[0], uParam0->f_111, uParam0->f_117, 0);
				}
			}
			if ((!__LIB_0__::func_139(uParam0->f_128[1]) && uParam0->f_7) && !uParam0->f_131[1])
			{
				uParam0->f_128[1] = __LIB_2__::func_403(uParam0->f_112, joaat("INPUT_INTERACT_LOCKON_NEG"), uParam0->f_134, 1, 1, 0, 0, 0, 3f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(uParam0->f_128[1]) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_134), 0);
			}
			iVar2 = -1;
			if (__LIB_0__::func_139(uParam0->f_128[0]))
			{
				func_40(uParam0, 0, bVar1);
				if (__LIB_1__::func_732(uParam0->f_128[0], 1))
				{
					iVar2 = 0;
					__LIB_1__::func_148(&(uParam0->f_125));
					uParam0->f_131[0] = 1;
					__LIB_1__::func_748(&(uParam0->f_128[0]), 1, 1);
					if (__LIB_0__::func_139(uParam0->f_128[1]))
					{
						func_43(uParam0, 1);
						__LIB_1__::func_748(&(uParam0->f_128[1]), 1, 1);
					}
				}
			}
			if (__LIB_0__::func_139(uParam0->f_128[1]))
			{
				func_40(uParam0, 1, bVar1);
				if (__LIB_1__::func_732(uParam0->f_128[1], 1))
				{
					iVar2 = 1;
					__LIB_1__::func_148(&(uParam0->f_125));
					func_43(uParam0, 1);
					__LIB_1__::func_748(&(uParam0->f_128[1]), 1, 1);
					func_43(uParam0, 0);
				}
			}
			switch (iVar2)
			{
				case 0:
					func_44(uParam0);
					return 1;
				case 1:
					func_45(uParam0);
					return 1;
			}
		}
		else
		{
			func_46(uParam0);
		}
	}
	else
	{
		func_46(uParam0);
	}
	return 0;
}

void func_10(var uParam0)
{
	int iVar0;
	func_47(&(Local_3.f_10[0 /*3*/]), "IG2");
	func_47(&(Local_3.f_10[1 /*3*/]), "IG3");
	func_47(&(Local_3.f_10[2 /*3*/]), "IG4");
	func_48(&Local_3, 0);
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (func_51(func_49(iVar0), func_50(Local_3.f_24)))
		{
			AUDIO::STOP_STREAM(AUDIO::_0x0556C784FA056628(func_49(iVar0), func_50(Local_3.f_24)));
		}
		else
		{
			iVar0++;
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_3.f_52))
	{
		VOLUME::_DELETE_VOLUME(Local_3.f_52);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_3.f_51))
	{
		VOLUME::_DELETE_VOLUME(Local_3.f_51);
	}
	if (__LIB_0__::func_122(uParam0->f_1))
	{
		__LIB_2__::func_753(uParam0->f_1, 0, 1, 0, 0);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_134, false);
	if (__LIB_0__::func_27(Global_1394141.f_1326, 16))
	{
		__LIB_1__::func_993(&(Global_1394141.f_1326), 16);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		__LIB_4__::func_72(Global_35);
	}
}

Vector3 func_13(int iParam0)
{
	switch (iParam0)
	{
		case 283:
			return 2542.098f, -1282.514f, 48.21795f;
		case 284:
			return 2687.112f, -1361.769f, 47.24998f;
		case 33:
			return -355.2777f, 704.6901f, 116.0523f;
		case 525:
			return -790.1024f, -1362.621f, 42.90462f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_14(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

int func_16(int iParam0)
{
	int iVar0;
	iVar0 = 200;
	switch (iParam0)
	{
		case 283:
			iVar0 = func_59(-1110862888 /* GXTEntry: "Theatre Ticket" */, -915411861, 1, 0, 0);
			break;
		case 284:
			if (__LIB_0__::func_293(45))
			{
				iVar0 = func_59(2037803338 /* GXTEntry: "Movie Ticket" */, -915411861, 1, 0, 0);
			}
			else
			{
				iVar0 = func_59(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, -915411861, 1, 0, 0);
			}
			break;
		case 525:
			iVar0 = func_59(2037803338 /* GXTEntry: "Movie Ticket" */, -915411861, 1, 0, 0);
			break;
		case 33:
			iVar0 = func_59(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, -915411861, 1, 0, 0);
			break;
	}
	return iVar0;
}

void func_17(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_118), iParam1);
}

void func_18(var uParam0, var uParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				VOLUME::_0xBCE668AAF83608BE(*uParam0, 2538.033f, -1279.347f, 49.98048f, 0f, 0f, 11.90726f, 5.5f, 5.5f, 2f);
				VOLUME::_0x39816F6F94F385AD(*uParam0, 2545.899f, -1284.449f, 52.68468f, 0f, 0f, 0f, 19.06469f, 21.41224f, 12.2805f);
				VOLUME::_0x39816F6F94F385AD(*uParam0, 2537.024f, -1293.295f, 52.62739f, 0f, 0f, 0f, 8.533219f, 26.71697f, 9.024663f);
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				VOLUME::_0x39816F6F94F385AD(*uParam1, 2533.624f, -1276.359f, 49.78957f, 0f, 0f, -25.0941f, 2.553831f, 2.187363f, 3.282658f);
				VOLUME::_0x39816F6F94F385AD(*uParam1, 2535.758f, -1273.773f, 49.78957f, 0f, 0f, -64.99103f, 2.553831f, 2.187363f, 3.282658f);
			}
			break;
		case 1:
		case 2:
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2689.602f, -1359.844f, 48.57206f, 0f, 0f, 38.71428f, 4.602314f, 8.88861f, 3.333464f, "TheaterWepCheck");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				VOLUME::_0x39816F6F94F385AD(*uParam1, 2685.939f, -1360.082f, 48.17015f, 0f, 0f, 39.667f, 1f, 1.110557f, 2.040186f);
				VOLUME::_0x39816F6F94F385AD(*uParam1, 2689.12f, -1363.918f, 48.17015f, 0f, 0f, 39.667f, 1f, 1.110557f, 2.040186f);
			}
			break;
		case 3:
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-347.6901f, 704.0504f, 118.0073f, 0f, 0f, 14.63188f, 3.596706f, 3.045884f, 2.800292f, "TheaterWepCheck");
			}
			break;
		case 4:
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-788.5135f, -1362.535f, 44.1069f, 0f, 0f, 0f, 4.696677f, 8.721128f, 2.973177f, "TheaterWepCheck");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				VOLUME::_0x39816F6F94F385AD(*uParam1, -791.2835f, -1359.049f, 43.89287f, 0f, 0f, 0f, 1.288786f, 1f, 2.321684f);
				VOLUME::_0x39816F6F94F385AD(*uParam1, -791.2835f, -1366.186f, 43.89287f, 0f, 0f, 0f, 1.288786f, 1f, 2.321684f);
			}
			break;
	}
}

void func_30(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bVar0 = func_75(Local_3.f_24);
	if (__LIB_0__::func_296(0, 0, 1) && __LIB_2__::func_774(36))
	{
		Local_3.f_33 = 1;
	}
	else
	{
		Local_3.f_33 = 0;
	}
	if (!Local_3.f_35)
	{
		if ((__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1) || LAW::_0xF46108C50A22B029()) || (PED::IS_PED_IN_COMBAT(Global_35, 0) && !Global_1394141.f_1331))
		{
			Local_3.f_35 = 1;
		}
	}
	else if ((!__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1) && !LAW::_0xF46108C50A22B029()) && !PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		Local_3.f_35 = 0;
	}
	Local_3.f_36 = __LIB_1__::func_205(Global_35, Local_3.f_51, 1, 0);
	Local_3.f_37 = __LIB_1__::func_205(Global_35, Global_1394141.f_7[Global_40.f_9028[Local_3.f_24] /*31*/].f_4, 1, 0);
	func_77(uParam0, &Local_3);
	func_78(uParam0, &Local_3);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
	{
		if (!__LIB_0__::func_27(Local_3.f_25, 4096))
		{
			__LIB_1__::func_581(&(Local_3.f_25), 4096);
		}
		if (!Local_3.f_33)
		{
			if (Local_3 != 0)
			{
				Local_3 = 0;
			}
			return;
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_134) && !Local_3.f_33)
	{
		return;
	}
	else
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_134, 49, true);
	}
	bVar1 = __LIB_0__::func_293(45);
	if (Local_3.f_24 == 1 && bVar1)
	{
		uParam0->f_11 = 4;
	}
	if (Local_3.f_24 == 2 && !bVar1)
	{
		uParam0->f_11 = 4;
	}
	switch (Local_3)
	{
		case 0:
			if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_134, "bUpdatedPlayer"))
			{
				DECORATOR::DECOR_SET_BOOL(uParam0->f_134, "bUpdatedPlayer", true);
			}
			if (!__LIB_0__::func_122(uParam0->f_1))
			{
				__LIB_2__::func_965(uParam0->f_1, 1, 0, 0, 1, 1);
			}
			func_48(&Local_3, 0);
			func_81(uParam0, &Local_3, 0);
			func_82(uParam0, &Local_3, 0);
			func_83(uParam0, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 130, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 315, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 330, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 44, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 174, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 448, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_134, true);
			__LIB_1__::func_401(&(Local_3.f_73), 1);
			__LIB_2__::func_828(&(Local_3.f_73), 1);
			__LIB_1__::func_413(&(Local_3.f_73), 1);
			__LIB_1__::func_403(&(Local_3.f_73), 1);
			__LIB_2__::func_829(&(Local_3.f_73), 1);
			__LIB_2__::func_956(&(Local_3.f_73), 0);
			__LIB_1__::func_402(&(Local_3.f_73), 1);
			__LIB_1__::func_405(&(Local_3.f_73), 1);
			__LIB_1__::func_393(&(Local_3.f_73), 1);
			__LIB_2__::func_830(&(Local_3.f_73), 1);
			__LIB_1__::func_406(&(Local_3.f_73), 0);
			__LIB_1__::func_404(&(Local_3.f_73), 1);
			__LIB_1__::func_398(&(Local_3.f_73), 0);
			__LIB_1__::func_403(&(Local_3.f_73), 1);
			__LIB_8__::func_731(&(Local_3.f_73), 1);
			__LIB_1__::func_397(&(Local_3.f_73), 0);
			__LIB_2__::func_903(&(Local_3.f_73), 0);
			__LIB_1__::func_399(&(Local_3.f_73), 0);
			__LIB_2__::func_619(&(Local_3.f_73), 0);
			Global_1394141.f_1279[Local_3.f_24 /*8*/].f_6 = 0;
			if (__LIB_1__::func_25(Global_1347702[144 /*49*/].f_15, 1))
			{
				__LIB_1__::func_581(&(Global_40.f_9028.f_12), 1);
			}
			if (!func_51(func_49(Local_3.f_26), func_50(Local_3.f_24)))
			{
				Local_3.f_26 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
			}
			__LIB_1__::func_993(&(Local_3.f_25), 65536);
			__LIB_1__::func_649(&Local_3, 1);
			break;
		case 1:
			func_78(uParam0, &Local_3);
			func_104(uParam0, &Local_3);
			if ((Local_3.f_24 == 3 && !__LIB_0__::func_27(Local_3.f_25, 65536)) && __LIB_16__::func_547())
			{
				__LIB_1__::func_581(&(Local_3.f_25), 65536);
			}
			if (__LIB_0__::func_75(&(uParam0->f_125)))
			{
				if (__LIB_0__::func_265(&(uParam0->f_125)) > 1f)
				{
					__LIB_0__::func_37(&(uParam0->f_125));
				}
			}
			else
			{
				if (!func_110(func_109(uParam0->f_1)))
				{
					if (!uParam0->f_131[0])
					{
						uParam0->f_131[0] = 1;
					}
				}
				else if (uParam0->f_131[0])
				{
					uParam0->f_131[0] = 0;
				}
				if (!__LIB_0__::func_27(Local_3.f_25, 8))
				{
					if (!func_110(func_109(uParam0->f_1)))
					{
						if (!uParam0->f_131[1])
						{
							uParam0->f_131[1] = 1;
						}
					}
					else if (uParam0->f_131[1])
					{
						uParam0->f_131[1] = 0;
					}
				}
			}
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_3.f_72) && PED::_IS_PED_USING_SCENARIO_HASH(uParam0->f_134, joaat("WORLD_HUMAN_SHOPKEEPER")))
			{
				Local_3.f_72 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(uParam0->f_134, false);
			}
			func_111(uParam0);
			if ((bVar0 && uParam0->f_1 == 283) && !__LIB_2__::func_774(36))
			{
				func_112(uParam0, &Local_3);
			}
			else if (Local_3.f_33)
			{
			}
			else
			{
				func_113(&Local_3, uParam0);
				func_114(uParam0, &Local_3);
			}
			break;
		case 2:
			break;
	}
}

void func_33(var uParam0)
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
	{
		return;
	}
	bVar0 = func_75(Local_3.f_24);
	if (((!__LIB_0__::func_27(Local_3.f_25, 16384) && __LIB_0__::func_139(uParam0->f_128[0])) && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON"))) && !Global_1394141.f_1328)
	{
		func_116(&Local_3);
		if (bVar0)
		{
			uParam0->f_111 = "SHOW_ODDFELLOW";
			__LIB_1__::func_484(uParam0->f_128[0], uParam0->f_111, 0);
		}
		else if (func_118(&Local_3))
		{
			uParam0->f_111 = "SHOW_USE_TICKET";
			__LIB_1__::func_484(uParam0->f_128[0], uParam0->f_111, 0);
		}
		else
		{
			uParam0->f_111 = "SHOP_BUY_TICKET_PRICE";
			__LIB_1__::func_483(uParam0->f_128[0], uParam0->f_111, uParam0->f_117, 0);
		}
		__LIB_1__::func_581(&(Local_3.f_25), 16384);
	}
	if ((!__LIB_0__::func_27(Local_3.f_25, 262144) && !func_110(Local_3.f_24)) && !Global_1394141.f_1328)
	{
		__LIB_0__::func_45("SHOW_HLP_NOSHOW", 10000, 0, 0, 0, 1);
		__LIB_1__::func_581(&(Local_3.f_25), 262144);
	}
	if (!func_75(Local_3.f_24))
	{
		if (Local_3.f_33)
		{
			if (func_110(func_109(uParam0->f_1)) && !func_120(func_109(uParam0->f_1)))
			{
				func_82(uParam0, &Local_3, 1);
			}
		}
		if (__LIB_0__::func_27(Global_40.f_9028.f_12, 4) && !__LIB_0__::func_27(Global_40.f_9028.f_12, 8))
		{
			if (func_110(func_109(uParam0->f_1)) && !func_120(func_109(uParam0->f_1)))
			{
				func_82(uParam0, &Local_3, 1);
			}
		}
	}
}

void func_34(var uParam0)
{
	if (__LIB_0__::func_27(Local_3.f_25, 16384))
	{
		__LIB_1__::func_993(&(Local_3.f_25), 16384);
	}
}

void func_40(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	if (uParam0->f_131[iParam1])
	{
		if (__LIB_0__::func_572(uParam0->f_128[iParam1], 0))
		{
			__LIB_1__::func_221(uParam0->f_128[iParam1], 0, 1);
		}
	}
	else
	{
		bVar0 = false;
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_134))
		{
			bVar0 = true;
		}
		if (!__LIB_0__::func_572(uParam0->f_128[iParam1], 0))
		{
			if (!bVar0 && !bParam2)
			{
				__LIB_1__::func_221(uParam0->f_128[iParam1], 1, 1);
			}
		}
		else if (bVar0 || bParam2)
		{
			__LIB_1__::func_221(uParam0->f_128[iParam1], 0, 1);
		}
	}
}

void func_43(var uParam0, int iParam1)
{
	uParam0->f_131[iParam1] = 1;
	__LIB_1__::func_221(uParam0->f_128[iParam1], 0, 1);
}

void func_44(var uParam0)
{
	if (!func_75(Local_3.f_24))
	{
		if (uParam0->f_117 > 0 && (__LIB_0__::func_492(1) >= uParam0->f_117 || func_118(&Local_3)))
		{
			__LIB_1__::func_581(&(Local_3.f_25), 4);
			func_82(uParam0, &Local_3, 1);
			func_127(uParam0, &Local_3, 1);
		}
	}
	else
	{
		__LIB_1__::func_581(&(Local_3.f_25), 4);
		func_82(uParam0, &Local_3, 1);
		func_127(uParam0, &Local_3, 1);
	}
}

void func_45(var uParam0)
{
	__LIB_1__::func_581(&(Local_3.f_25), 524288);
	uParam0->f_7 = 0;
	__LIB_1__::func_581(&(Local_3.f_25), 8);
	uParam0->f_131[0] = 0;
}

void func_46(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_128[0]))
	{
		__LIB_1__::func_748(&(uParam0->f_128[0]), 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_128[1]))
	{
		__LIB_1__::func_748(&(uParam0->f_128[1]), 1, 1);
	}
}

void func_47(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(*uParam0);
	uParam0->f_1 = 0;
}

void func_48(int iParam0, bool bParam1)
{
	if (iParam0->f_35 && !bParam1)
	{
		return;
	}
	switch (iParam0->f_24)
	{
		case 0:
			__LIB_1__::func_948(212326452, 0, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-80890560, 0, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-302077142, 0, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-531755063, 0, 0f, 0, 0, 0, 0, 0);
			break;
		case 1:
			__LIB_1__::func_948(-2034821814, 0, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-786191838, 0, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1518382426, 0, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-223351546, 0, 0f, 0, 0, 0, 0, 0);
			break;
		case 2:
			__LIB_1__::func_948(235202295, 0, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-71941542, 0, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-723815263, 0, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1920184275, 0, 0f, 0, 0, 0, 0, 0);
			break;
		case 3:
			break;
		case 4:
			__LIB_1__::func_948(1373799284, 0, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1735175816, 0, 0f, 0, 0, 0, 0, 0);
			break;
	}
	iParam0->f_38 = 0;
}

char* func_49(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			return "Post_Show_Dars_Ragtime_on_de_Moon_Music";
		case 1:
			return "Post_Show_La_Bohemienne_Music";
		case 2:
			return "Post_Show_Rough_Riders_March_Music";
		case 3:
			return "Post_Show_The_Harlem_Rag_Music";
		case 4:
			return "Post_Show_The_Mississippi_Rag_Music";
		case 5:
			return "Pre_Show_Galop_du_Carnival_Music";
		case 6:
			return "Pre_Show_Ma_Ragtime_Baby_Music";
		case 7:
			return "Pre_Show_The_Bosn_Rag_Music";
		case 8:
			return "Pre_Show_The_Keyhole_in_the_Door_Music";
		case 9:
			return "Pre_Show_Walking_for_dat_Cake_Music";
		default:
			break;
	}
	return "Post_Show_Dars_Ragtime_on_de_Moon_Music";
}

char* func_50(int iParam0)
{
	if (iParam0 == 3)
	{
		return "wax_cylinder_show_music";
	}
	return "3235391231_intro";
}

bool func_51(char* sParam0, char* sParam1)
{
	int iVar0;
	iVar0 = AUDIO::_0x0556C784FA056628(sParam0, sParam1);
	if (iVar0 != -1 && AUDIO::IS_STREAM_PLAYING(iVar0))
	{
		return true;
	}
	return false;
}

int func_59(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	if (__LIB_0__::func_192(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					iVar49 = (iVar49 + Var0[iVar32 /*2*/].f_1);
					Jump @229; //curOff = 201
				}
				else if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = __LIB_0__::func_372(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = __LIB_0__::func_374(iVar62, iVar61);
					if (__LIB_0__::func_144(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_59(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_59(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_75(int iParam0)
{
	if (__LIB_0__::func_27(Global_1394141.f_1326, 16) && iParam0 == 0)
	{
		return true;
	}
	if ((__LIB_0__::func_27(Global_40.f_9028.f_12, 1) && !__LIB_0__::func_27(Global_40.f_9028.f_12, 2)) && iParam0 == 0)
	{
		return true;
	}
	return false;
}

void func_77(var uParam0, var uParam1)
{
	if (uParam1->f_35 || uParam1->f_34)
	{
		if (!func_155(uParam0))
		{
			func_83(uParam0, 1);
			func_81(uParam0, uParam1, 0);
		}
		if (!uParam1->f_38)
		{
			func_156(uParam1);
		}
		else if (func_157(uParam1, 0))
		{
			uParam1->f_38 = 0;
			func_48(uParam1, 1);
		}
	}
	else
	{
		if (func_155(uParam0))
		{
			func_83(uParam0, 0);
		}
		if (uParam1->f_38)
		{
			func_48(uParam1, 0);
		}
	}
}

void func_78(var uParam0, int iParam1)
{
	switch (iParam1->f_8)
	{
		case 0:
			if (!func_110(func_109(uParam0->f_1)))
			{
				__LIB_0__::func_19(&(iParam1->f_2), 5);
				__LIB_0__::func_19(&(iParam1->f_8), 3);
			}
			else
			{
				if (func_160(uParam0, iParam1))
				{
				}
				if (Global_1394141.f_1328)
				{
					__LIB_0__::func_19(&(iParam1->f_8), 1);
				}
			}
			break;
		case 1:
			if ((Global_1394141.f_1330 && iParam1->f_2 < 5) && iParam1->f_2 != 0)
			{
				__LIB_0__::func_19(&(iParam1->f_2), 5);
			}
			if (Global_1394141.f_1329)
			{
				__LIB_0__::func_19(&(iParam1->f_8), 2);
			}
			break;
		case 2:
			if (Global_1394141.f_1329)
			{
				if (func_160(uParam0, iParam1))
				{
					__LIB_0__::func_19(&(iParam1->f_8), 3);
				}
			}
			else
			{
				__LIB_0__::func_19(&(iParam1->f_8), 1);
			}
			if (!Global_1394141.f_1328)
			{
				if (func_160(uParam0, iParam1))
				{
					__LIB_0__::func_19(&(iParam1->f_8), 3);
				}
			}
			break;
		case 3:
			if (func_110(func_109(uParam0->f_1)))
			{
				__LIB_0__::func_19(&(iParam1->f_8), 0);
			}
			break;
	}
	func_161(uParam0, iParam1);
}

void func_81(var uParam0, int iParam1, int iParam2)
{
	Global_1394141.f_1279[func_109(uParam0->f_1) /*8*/].f_3 = iParam2;
	Global_1394141.f_1279[func_109(uParam0->f_1) /*8*/].f_4 = iParam2;
}

void func_82(var uParam0, int iParam1, int iParam2)
{
	Global_1394141.f_1279[func_109(uParam0->f_1) /*8*/].f_2 = iParam2;
}

void func_83(var uParam0, int iParam1)
{
	Global_1394141.f_1279[func_109(uParam0->f_1) /*8*/].f_5 = iParam1;
}

void func_104(var uParam0, int iParam1)
{
	int iVar0;
	switch (iParam1->f_7)
	{
		case 0:
			if (iParam1->f_36 && !iParam1->f_37)
			{
				__LIB_0__::func_19(&(iParam1->f_7), 1);
			}
			break;
		case 1:
			HUD::_0xC9CAEAEEC1256E54(1664736751);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			if (__LIB_5__::func_59(uParam0->f_134, 0, 0, 0))
			{
				if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK")))
				{
					iParam1->f_34 = 1;
				}
			}
			else if (!iParam1->f_34)
			{
				if (((WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false) && iVar0 != joaat("WEAPON_UNARMED")) && iVar0 != joaat("OBJECT_1")) && iVar0 != joaat("OBJECT_2"))
				{
					__LIB_4__::func_791(0);
				}
				if (((WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 1, false) && iVar0 != joaat("WEAPON_UNARMED")) && iVar0 != joaat("OBJECT_1")) && iVar0 != joaat("OBJECT_2"))
				{
					__LIB_4__::func_791(1);
				}
			}
			if ((((!iParam1->f_36 || iParam1->f_37) || iParam1->f_35) || PED::IS_PED_IN_COMBAT(Global_35, 0)) || iParam1->f_34)
			{
				__LIB_0__::func_19(&(iParam1->f_7), 2);
			}
			break;
		case 2:
			if ((!iParam1->f_35 && !PED::IS_PED_IN_COMBAT(Global_35, 0)) && !iParam1->f_34)
			{
				__LIB_0__::func_19(&(iParam1->f_7), 0);
			}
			break;
	}
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 283:
			return 0;
		case 284:
			if (__LIB_0__::func_293(45))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
		case 525:
			return 4;
		case 33:
			return 3;
	}
	return -1;
}

bool func_110(int iParam0)
{
	return Global_1394141.f_1279[iParam0 /*8*/].f_3;
}

void func_111(var uParam0)
{
	vector3 vVar0;
	if (uParam0->f_1 == 33)
	{
		if (func_110(func_109(33)))
		{
			if (!__LIB_0__::func_898(1015669983) || func_120(3))
			{
				__LIB_0__::func_803(1015669983);
			}
		}
		else if (!Global_1394141.f_1328 && __LIB_0__::func_898(1015669983))
		{
			vVar0 = { -352.0567f, 704.7408f, 117.9537f };
			if (__LIB_0__::func_94(Global_35, vVar0, 1) > 30f)
			{
				__LIB_0__::func_804(1015669983);
			}
		}
	}
}

int func_112(var uParam0, int iParam1)
{
	if (!Global_1394141.f_1328)
	{
		if (__LIB_0__::func_27(Global_1394141.f_1326, 16) && __LIB_0__::func_94(Global_35, func_13(uParam0->f_1), 1) > 40f)
		{
			__LIB_1__::func_993(&(Global_1394141.f_1326), 16);
			if (iParam1->f_1 < 11)
			{
				__LIB_0__::func_19(&(iParam1->f_1), 11);
			}
		}
	}
	switch (iParam1->f_1)
	{
		case 0:
			STREAMING::REQUEST_MODEL(func_178(0), false);
			STREAMING::REQUEST_MODEL(func_178(1), false);
			__LIB_0__::func_19(&(iParam1->f_1), 1);
			break;
		case 1:
			if (!func_182(&(iParam1->f_10[0 /*3*/]), func_179(0), func_181(__LIB_0__::func_181()), 1))
			{
				return 0;
			}
			if (!func_182(&(iParam1->f_10[1 /*3*/]), func_179(1), func_183(), 1))
			{
				return 0;
			}
			if (!func_182(&(iParam1->f_10[2 /*3*/]), func_179(2), func_184(2), 1))
			{
				return 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_178(0)) && !STREAMING::HAS_MODEL_LOADED(func_178(1)))
			{
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_53[0]))
			{
				iParam1->f_53[0] = OBJECT::CREATE_OBJECT(func_178(0), 2542.248f, -1281.838f, 49.28225f, true, true, false, false, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_53[1]))
			{
				iParam1->f_53[1] = OBJECT::CREATE_OBJECT(func_178(1), 2542.248f, -1281.838f, 49.28225f, true, true, false, false, true);
			}
			if (!__LIB_0__::func_181() && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam1->f_10[0 /*3*/], "b_playerArthur", true, false);
			}
			func_185(iParam1);
			__LIB_0__::func_19(&(iParam1->f_1), 2);
			break;
		case 2:
			if (__LIB_1__::func_205(Global_35, iParam1->f_59[1], 1, 0) && __LIB_0__::func_27(iParam1->f_25, 4))
			{
				__LIB_1__::func_993(&(iParam1->f_25), 4);
				__LIB_0__::func_19(&(iParam1->f_1), 3);
			}
			break;
		case 3:
			func_186(uParam0, &(iParam1->f_10[0 /*3*/]));
			__LIB_0__::func_19(&(iParam1->f_1), 4);
			break;
		case 4:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_10[0 /*3*/], false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1->f_10[0 /*3*/]) > 0.85f)
			{
				func_82(uParam0, iParam1, 1);
				__LIB_0__::func_19(&(iParam1->f_1), 5);
			}
			break;
		case 5:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam1->f_10[0 /*3*/], false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
			}
			if (__LIB_0__::func_27(Global_1394141.f_1326, 32) && __LIB_1__::func_205(Global_35, iParam1->f_59[0], 1, 0))
			{
				__LIB_0__::func_19(&(iParam1->f_1), 6);
			}
			break;
		case 6:
			func_187(uParam0, &(iParam1->f_10[1 /*3*/]), iParam1);
			__LIB_0__::func_19(&(iParam1->f_1), 7);
			break;
		case 7:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[1 /*3*/]) && (ANIMSCENE::_0x005E6F28DD7ED58D(iParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1->f_10[1 /*3*/]) > 0.5f))
			{
				__LIB_0__::func_19(&(iParam1->f_1), 8);
			}
			break;
		case 8:
			if (__LIB_0__::func_94(Global_35, func_13(uParam0->f_1), 1) > 30f)
			{
				__LIB_0__::func_19(&(iParam1->f_1), 10);
				return 0;
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_134, -982327190, true) != 1)
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_134, 2552.9f, -1284.376f, 48.21795f, true, false, true, true);
				TASK::TASK_STAND_STILL(uParam0->f_134, -1);
			}
			if (!__LIB_0__::func_139(iParam1->f_70[0]))
			{
				iParam1->f_70[0] = __LIB_3__::func_905("TAKE_LETTER", joaat("INPUT_CONTEXT_Y"), iParam1->f_59[1], 3, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else if (__LIB_1__::func_732(iParam1->f_70[0], 1))
			{
				__LIB_1__::func_748(&(iParam1->f_70[0]), 1, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, 2541.031f, -1281.497f, 49.21795f, 1f, 20000, 0.25f, 0, -136.15f);
				__LIB_0__::func_19(&(iParam1->f_1), 9);
			}
			break;
		case 9:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_134, -982327190, true) != 1)
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_134, 2552.9f, -1284.376f, 48.21795f, true, false, true, true);
				TASK::TASK_STAND_STILL(uParam0->f_134, -1);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, true) == 8 || __LIB_0__::func_94(Global_35, 2541.031f, -1281.497f, 49.21795f, 1) < 0.5f)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				func_189(uParam0, &(iParam1->f_10[2 /*3*/]), iParam1);
				__LIB_0__::func_19(&(iParam1->f_1), 10);
			}
			break;
		case 10:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[1 /*3*/]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam1->f_10[1 /*3*/], true, false))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_10[1 /*3*/], false))
					{
						if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_134, -982327190, true) != 1)
						{
							ENTITY::SET_ENTITY_COORDS(uParam0->f_134, 2552.9f, -1284.376f, 48.21795f, true, false, true, true);
							TASK::TASK_STAND_STILL(uParam0->f_134, -1);
						}
					}
					else
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[1 /*3*/]);
					}
				}
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam1->f_10[0 /*3*/], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_10[0 /*3*/], false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[2 /*3*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_10[2 /*3*/], false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1->f_10[2 /*3*/]) > 0.5f)
			{
				if (!__LIB_0__::func_27(iParam1->f_25, 131072))
				{
					func_190(joaat("DOCUMENT_ODDFELLOWS_LETTER"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					__LIB_1__::func_616(4000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
					if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_53[0]))
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam1->f_53[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_53[1]))
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam1->f_53[1]));
					}
					__LIB_1__::func_581(&(iParam1->f_25), 131072);
				}
			}
			if (__LIB_0__::func_94(Global_35, func_13(uParam0->f_1), 1) > 30f)
			{
				__LIB_0__::func_19(&(iParam1->f_1), 11);
			}
			break;
		case 11:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam1->f_10[0 /*3*/], true, false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[1 /*3*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam1->f_10[1 /*3*/], true, false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[1 /*3*/]);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[2 /*3*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam1->f_10[2 /*3*/], true, false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[2 /*3*/]);
			}
			if (__LIB_0__::func_139(iParam1->f_70[0]))
			{
				__LIB_1__::func_748(&(iParam1->f_70[0]), 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_53[0]))
			{
				OBJECT::DELETE_OBJECT(&(iParam1->f_53[0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_53[1]))
			{
				OBJECT::DELETE_OBJECT(&(iParam1->f_53[1]));
			}
			__LIB_1__::func_993(&(Global_1394141.f_1326), 16);
			__LIB_0__::func_19(&(iParam1->f_1), 12);
			break;
		case 12:
			return 1;
	}
	return 0;
}

void func_113(int iParam0, var uParam1)
{
	switch (iParam0->f_9)
	{
		case 0:
			if (__LIB_0__::func_27(iParam0->f_25, 524288))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && __LIB_16__::func_866(Global_35, "WHATS_PLAYING", 291934926, uParam1->f_134, 1, func_192(__LIB_0__::func_181()), 0, 1))
				{
					__LIB_1__::func_148(&(iParam0->f_39));
					__LIB_0__::func_19(&(iParam0->f_9), 1);
				}
			}
			break;
		case 1:
			if (!__LIB_2__::func_139(0f) && __LIB_0__::func_265(&(iParam0->f_39)) > 2f)
			{
				__LIB_0__::func_19(&(iParam0->f_9), 2);
			}
			break;
		case 2:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(uParam1->f_134) && __LIB_16__::func_866(uParam1->f_134, func_196(Global_40.f_9028[iParam0->f_24]), 291934926, Global_35, 1, func_197(uParam1->f_1), 0, 1))
			{
				__LIB_1__::func_148(&(iParam0->f_39));
				__LIB_0__::func_19(&(iParam0->f_9), 3);
			}
			break;
		case 3:
			if ((!AUDIO::IS_ANY_SPEECH_PLAYING(uParam1->f_134) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && __LIB_0__::func_265(&(iParam0->f_39)) > 3f)
			{
				__LIB_1__::func_148(&(iParam0->f_39));
				__LIB_1__::func_993(&(iParam0->f_25), 8);
				__LIB_0__::func_19(&(iParam0->f_9), 4);
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&(iParam0->f_39)) > 45f)
			{
				__LIB_1__::func_148(&(iParam0->f_39));
				__LIB_0__::func_19(&(iParam0->f_9), 5);
			}
			break;
		case 5:
			if (!Global_1394141.f_1328)
			{
				__LIB_1__::func_993(&(iParam0->f_25), 524288);
				uParam1->f_7 = 1;
				uParam1->f_131[1] = 0;
				__LIB_0__::func_19(&(iParam0->f_9), 0);
			}
			break;
	}
}

void func_114(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	fVar0 = 150f;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
	{
		fVar0 = __LIB_0__::func_665(Global_35, uParam0->f_134, 1, 1);
	}
	bVar1 = false;
	if (__LIB_2__::func_138(uParam0->f_134, 1, 1, 1, 0, 0) || __LIB_5__::func_71(uParam0->f_134, 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0))
	{
		if (PED::GET_PED_RESET_FLAG(Global_35, 311))
		{
			bVar1 = true;
		}
	}
	if ((iParam1->f_34 && !bVar1) && fVar0 > 40f)
	{
		iParam1->f_34 = 0;
	}
	if ((iParam1->f_3 >= 3 && iParam1->f_3 != 7) && fVar0 < 40f)
	{
		if (iParam1->f_35 || func_200(uParam0->f_134, 0, &(iParam1->f_73), &(iParam1->f_101), 0, 0))
		{
			if (iParam1->f_3 == 3)
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_134, iParam1->f_10[3 /*3*/]))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_134);
					func_201(iParam1, 0);
					__LIB_0__::func_19(&(iParam1->f_3), 4);
					__LIB_1__::func_148(&(iParam1->f_67));
					__LIB_0__::func_19(&(iParam1->f_6), 3);
				}
				else
				{
					TASK::TASK_COWER(uParam0->f_134, -1, Global_35, 0);
					__LIB_0__::func_19(&(iParam1->f_3), 7);
				}
			}
		}
	}
	if (iParam1->f_5 != -1)
	{
		if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[3 /*3*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_10[3 /*3*/], false)) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam1->f_10[3 /*3*/], func_204(iParam1->f_5))) && ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_204(iParam1->f_4)))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam1->f_10[3 /*3*/], func_204(iParam1->f_5));
			iParam1->f_5 = -1;
		}
	}
	if (__LIB_0__::func_27(iParam1->f_25, 4096))
	{
		iParam1->f_3 = 9;
		__LIB_1__::func_993(&(iParam1->f_25), 4096);
	}
	switch (iParam1->f_3)
	{
		case 0:
			iParam1->f_28 = 1;
			iParam1->f_30 = 1;
			func_116(iParam1);
			func_201(iParam1, 10);
			func_205(iParam1);
			func_206(&(iParam1->f_59[2]), &(iParam1->f_59[3]), func_109(uParam0->f_1));
			__LIB_0__::func_19(&(iParam1->f_3), 1);
			break;
		case 1:
			if (!func_182(&(iParam1->f_10[3 /*3*/]), func_179(3), func_204(10), 1))
			{
				return;
			}
			if (!func_207(iParam1))
			{
				return;
			}
			if (!func_208(iParam1, ENTITY::GET_ENTITY_COORDS(uParam0->f_134, true, false), func_109(uParam0->f_1)))
			{
				return;
			}
			__LIB_0__::func_19(&(iParam1->f_3), 2);
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[3 /*3*/]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "ARTHUR", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_134, 0);
				func_209(iParam1, func_109(uParam0->f_1));
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam1->f_10[3 /*3*/], func_210(func_109(uParam0->f_1)), func_211(func_109(uParam0->f_1)), 2);
				ANIMSCENE::START_ANIM_SCENE(iParam1->f_10[3 /*3*/]);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_178(2));
				__LIB_0__::func_19(&(iParam1->f_3), 3);
			}
			break;
		case 3:
			if (bVar1)
			{
				func_82(uParam0, iParam1, 0);
				func_127(uParam0, iParam1, 0);
				func_81(uParam0, iParam1, 0);
				func_201(iParam1, 0);
				__LIB_0__::func_19(&(iParam1->f_3), 4);
				__LIB_1__::func_148(&(iParam1->f_67));
				iParam1->f_34 = 1;
				Global_1394141.f_1279[iParam1->f_24 /*8*/].f_6 = 1;
				__LIB_0__::func_19(&(iParam1->f_6), 3);
			}
			func_212(uParam0, iParam1, bVar1, fVar0);
			break;
		case 4:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_10[3 /*3*/], false))
			{
				if (!__LIB_17__::func_495(&(iParam1->f_10[3 /*3*/]), func_204(iParam1->f_4), func_204(iParam1->f_4)))
				{
					return;
				}
				func_214(&(iParam1->f_10[3 /*3*/]), func_204(iParam1->f_4), func_204(iParam1->f_4));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_134, true);
				ANIMSCENE::START_ANIM_SCENE(iParam1->f_10[3 /*3*/]);
				__LIB_0__::func_19(&(iParam1->f_3), 3);
			}
			else
			{
				if (!__LIB_17__::func_495(&(iParam1->f_10[3 /*3*/]), func_204(iParam1->f_4), func_204(iParam1->f_4)))
				{
					return;
				}
				if (iParam1->f_4 == 5 || iParam1->f_4 == 4)
				{
					bVar2 = false;
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, true, 0, false) && iVar3 != joaat("WEAPON_UNARMED"))
					{
						__LIB_4__::func_791(0);
						bVar2 = true;
					}
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, true, 1, false) && iVar3 != joaat("WEAPON_UNARMED"))
					{
						__LIB_4__::func_791(1);
						bVar2 = true;
					}
					if (!bVar2)
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_134, 0);
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, iParam1->f_10[3 /*3*/], "ARTHUR", func_204(iParam1->f_4), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
						__LIB_0__::func_19(&(iParam1->f_3), 5);
					}
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_134, 0);
					if (iParam1->f_4 == 0 || iParam1->f_4 == 1)
					{
						__LIB_1__::func_148(&(iParam1->f_64));
						func_214(&(iParam1->f_10[3 /*3*/]), func_204(iParam1->f_4), func_204(iParam1->f_4));
						__LIB_0__::func_19(&(iParam1->f_3), 7);
					}
					else
					{
						__LIB_1__::func_148(&(iParam1->f_67));
						func_214(&(iParam1->f_10[3 /*3*/]), func_204(iParam1->f_4), func_204(iParam1->f_4));
						__LIB_0__::func_19(&(iParam1->f_3), 3);
					}
				}
			}
			if (((iParam1->f_4 != 5 && iParam1->f_4 != 4) && iParam1->f_4 != 9) && iParam1->f_4 != 10)
			{
				__LIB_16__::func_866(uParam0->f_134, func_215(iParam1->f_4, 0), 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
			}
			break;
		case 5:
			if (ANIMSCENE::_0x337F1CC8EE895601(iParam1->f_10[3 /*3*/], "ARTHUR"))
			{
				func_214(&(iParam1->f_10[3 /*3*/]), func_204(iParam1->f_4), func_204(iParam1->f_4));
				__LIB_0__::func_19(&(iParam1->f_3), 6);
			}
			break;
		case 6:
			if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_10[3 /*3*/], false) && ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_204(iParam1->f_4))) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1->f_10[3 /*3*/]) > 0.267f)
			{
				if (func_118(iParam1))
				{
					func_216(iParam1);
					__LIB_1__::func_993(&(iParam1->f_25), 16384);
				}
				else
				{
					__LIB_16__::func_866(Global_35, "TICKET_PLEASE", 291934926, uParam0->f_134, 1, func_192(__LIB_0__::func_181()), 0, 1);
					__LIB_1__::func_432(uParam0->f_117, 0, 0, 1, 1);
				}
				__LIB_0__::func_19(&(iParam1->f_3), 3);
			}
			break;
		case 7:
			if (!__LIB_0__::func_27(iParam1->f_25, 8192))
			{
				if (!iParam1->f_35)
				{
					func_218(uParam0);
				}
				__LIB_1__::func_581(&(iParam1->f_25), 8192);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_134, 474215631, true) != 1)
			{
				if (((__LIB_0__::func_264(&(iParam1->f_64)) > 5f && !ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_204(1))) && !ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_204(3))) && !ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_204(0)))
				{
					TASK::TASK_COWER(uParam0->f_134, -1, Global_35, 0);
				}
			}
			if (!iParam1->f_35 && !iParam1->f_34)
			{
				func_220(uParam0, iParam1);
				__LIB_0__::func_19(&(iParam1->f_3), 0);
				return;
			}
			if ((__LIB_0__::func_264(&(iParam1->f_64)) > 10f && !__LIB_0__::func_481(1)) && !__LIB_0__::func_27(iParam1->f_25, 32))
			{
				func_201(iParam1, 1);
				__LIB_1__::func_581(&(iParam1->f_25), 32);
				__LIB_1__::func_148(&(iParam1->f_64));
				__LIB_0__::func_19(&(iParam1->f_3), 4);
			}
			if ((!__LIB_0__::func_27(iParam1->f_25, 134217728) && !__LIB_0__::func_481(1)) && MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0->f_134, true, false), 2f, true, true))
			{
				__LIB_16__::func_866(uParam0->f_134, "GENERIC_SHOCKED_HIGH", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				__LIB_1__::func_581(&(iParam1->f_25), 134217728);
			}
			if ((__LIB_0__::func_264(&(iParam1->f_64)) > 15f && !__LIB_0__::func_481(1)) && !__LIB_0__::func_27(iParam1->f_25, 67108864))
			{
				__LIB_16__::func_866(uParam0->f_134, "HELP_SHOUT", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				__LIB_1__::func_581(&(iParam1->f_25), 67108864);
			}
			break;
		case 9:
			func_220(uParam0, iParam1);
			__LIB_0__::func_19(&(iParam1->f_3), 0);
			break;
		case 8:
			break;
		case 10:
			break;
	}
}

void func_116(int iParam0)
{
	if (!iParam0->f_48 && __LIB_1__::func_707(-1110862888 /* GXTEntry: "Theatre Ticket" */, 1, 0))
	{
		iParam0->f_48 = 1;
	}
	if (!iParam0->f_49 && __LIB_1__::func_707(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, 1, 0))
	{
		iParam0->f_49 = 1;
	}
	if (!iParam0->f_50 && __LIB_1__::func_707(2037803338 /* GXTEntry: "Movie Ticket" */, 1, 0))
	{
		iParam0->f_50 = 1;
	}
}

bool func_118(int iParam0)
{
	switch (iParam0->f_24)
	{
		case 1:
		case 3:
			if (iParam0->f_49)
			{
				return true;
			}
			break;
		case 2:
		case 4:
			if (iParam0->f_50)
			{
				return true;
			}
			break;
		case 0:
			if (iParam0->f_48)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_120(int iParam0)
{
	return Global_1394141.f_1279[iParam0 /*8*/].f_2;
}

void func_127(var uParam0, int iParam1, bool bParam2)
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_134, "bUpdatedPlayer"))
	{
		DECORATOR::DECOR_SET_BOOL(uParam0->f_134, "bUpdatedPlayer", bParam2);
	}
	iParam1->f_32 = bParam2;
}

bool func_155(var uParam0)
{
	return Global_1394141.f_1279[func_109(uParam0->f_1) /*8*/].f_5;
}

void func_156(var uParam0)
{
	if (func_157(uParam0, 1))
	{
		if (__LIB_17__::func_496(uParam0->f_24))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
			}
			if (!__LIB_0__::func_163(Global_35, 713668775))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, func_244(uParam0->f_24), 1f, 20000, 0.25f, 0, 40000f);
			}
		}
		return;
	}
	if (__LIB_0__::func_163(Global_35, 713668775))
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	switch (uParam0->f_24)
	{
		case 0:
			__LIB_1__::func_948(212326452, 1, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-80890560, 1, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-302077142, 1, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-531755063, 1, 0f, 0, 0, 0, 0, 0);
			break;
		case 1:
			__LIB_1__::func_948(-2034821814, 1, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-786191838, 1, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1518382426, 1, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-223351546, 1, 0f, 0, 0, 0, 0, 0);
			break;
		case 2:
			__LIB_1__::func_948(235202295, 1, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-71941542, 1, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-723815263, 1, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1920184275, 1, 0f, 0, 0, 0, 0, 0);
			break;
		case 3:
			__LIB_16__::func_547();
			break;
		case 4:
			__LIB_1__::func_948(1373799284, 1, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1735175816, 1, 0f, 0, 0, 0, 0, 0);
			break;
	}
	uParam0->f_38 = 1;
}

bool func_157(var uParam0, bool bParam1)
{
	if (uParam0->f_36 || uParam0->f_37)
	{
		return true;
	}
	if (bParam1 && __LIB_1__::func_205(Global_35, uParam0->f_52, 1, 0))
	{
		return true;
	}
	return false;
}

bool func_160(var uParam0, int iParam1)
{
	float fVar0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
	{
		fVar0 = __LIB_0__::func_665(Global_35, uParam0->f_134, 1, 1);
	}
	else
	{
		fVar0 = 150f;
	}
	if (fVar0 < 30f)
	{
		if (((iParam1->f_2 == 6 || iParam1->f_2 == 5) || iParam1->f_2 == 0) && (Global_1394141.f_1328 || func_110(iParam1->f_24)))
		{
			__LIB_0__::func_19(&(iParam1->f_2), 1);
			return false;
		}
	}
	else if (fVar0 > 40f)
	{
		if (iParam1->f_2 != 5 && iParam1->f_2 != 6)
		{
			__LIB_0__::func_19(&(iParam1->f_2), 5);
			return true;
		}
	}
	return false;
}

void func_161(var uParam0, int iParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	switch (iParam1->f_2)
	{
		case 0:
			break;
		case 1:
			if ((func_110(func_109(uParam0->f_1)) || Global_1394141.f_1328) && __LIB_0__::func_665(Global_35, uParam0->f_134, 1, 1) < 30f)
			{
				if (AUDIO::LOAD_STREAM(func_49(iParam1->f_26), func_50(iParam1->f_24)))
				{
					__LIB_0__::func_19(&(iParam1->f_2), 2);
				}
			}
			break;
		case 2:
			AUDIO::PLAY_STREAM_FROM_POSITION(func_245(uParam0->f_1), AUDIO::_0x0556C784FA056628(func_49(iParam1->f_26), func_50(iParam1->f_24)));
			__LIB_0__::func_19(&(iParam1->f_2), 3);
			break;
		case 3:
			if (!AUDIO::IS_STREAM_PLAYING(AUDIO::_0x0556C784FA056628(func_49(iParam1->f_26), func_50(iParam1->f_24))))
			{
				__LIB_0__::func_19(&(iParam1->f_2), 4);
			}
			break;
		case 4:
			iParam1->f_26++;
			if (iParam1->f_26 >= 10)
			{
				iParam1->f_26 = 0;
			}
			__LIB_0__::func_19(&(iParam1->f_2), 1);
			break;
		case 5:
			if (func_51(func_49(iParam1->f_26), func_50(iParam1->f_24)))
			{
				AUDIO::STOP_STREAM(AUDIO::_0x0556C784FA056628(func_49(iParam1->f_26), func_50(iParam1->f_24)));
				__LIB_0__::func_19(&(iParam1->f_2), 6);
			}
			break;
		case 6:
			break;
	}
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_CS_LETTER03X");
		case 1:
			return joaat("P_MONEYSTACK01X");
		case 2:
			return joaat("P_COINSTACK02");
		case 3:
			return joaat("P_FOLDEDBILLSXSMALL01BX");
		case 4:
			return joaat("P_CS_ADMITTICKET01X");
		default:
			break;
	}
	return 0;
}

char* func_179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@roddf@ig@roddf_s3@ig2_boxofficegreet";
		case 1:
			return "script@rcm@roddf@ig@roddf_s3@ig3_boxofficeleave";
		case 2:
			return "script@rcm@roddf@ig@roddf_s3@ig4_boxofficecollect";
		case 3:
			return "script@shows@magic_lantern@ig1_ticket_collector@action";
		default:
			break;
	}
	return "[THEATER_TT_GET_ANIM_SCENE_NAME] - FAIL -- 0";
}

char* func_181(bool bParam0)
{
	if (bParam0 && __LIB_3__::func_736(144, 1))
	{
		return "pl_Conv_TicketTeller_John";
	}
	return "pl_Conv_TicketTeller_Arthur";
}

bool func_182(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		return true;
	}
	if (!uParam0->f_1 && !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (bParam3)
		{
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		uParam0->f_1 = 1;
	}
	return false;
}

char* func_183()
{
	return "pl_Convo_LetterPickup";
}

char* func_184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Enter_45L";
		case 1:
			return "pl_Enter_45R";
		case 2:
			return "pl_Enter_F_NoWalk";
		case 3:
			return "pl_Enter_F_Walk";
		default:
			break;
	}
	return "[THEATER_TT_GET_ODDF_COLLECT_PLAYLIST] -- FAIL -- 1";
}

void func_185(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar12;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar12 = iVar0;
		Var1 = { func_254(iVar12) };
		iParam0->f_59[iVar12] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var1.f_10, Var1, Var1.f_3, Var1.f_6, Var1.f_9);
		iVar0++;
	}
}

void func_186(var uParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134) || ENTITY::IS_ENTITY_DEAD(uParam0->f_134))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "s_m_m_sdticketseller_01", uParam0->f_134, 0);
	if (!__LIB_0__::func_181())
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35, 0);
		__LIB_9__::func_699(uParam1, "b_playerArthur", 1, "IG2");
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "JOHN", Global_35, 0);
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam1);
}

void func_187(var uParam0, var uParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134) || ENTITY::IS_ENTITY_DEAD(uParam0->f_134))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "s_m_m_sdticketseller_01", uParam0->f_134, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_53[0]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "P_CS_LETTER03X", iParam2->f_53[0], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_53[1]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_moneyStack01x", iParam2->f_53[1], 0);
	}
	if (!__LIB_0__::func_181())
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35, 0);
		__LIB_9__::func_699(uParam1, "b_playerArthur", 1, "IG3");
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "JOHN", Global_35, 0);
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam1);
}

void func_189(var uParam0, var uParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134) || ENTITY::IS_ENTITY_DEAD(uParam0->f_134))
	{
		return;
	}
	if (!__LIB_0__::func_181())
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_zero", Global_35, 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_zero", Global_35, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_53[0]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_cs_letter03x", iParam2->f_53[0], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_53[1]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_moneyStack01x", iParam2->f_53[1], 0);
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam1);
}

int func_190(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	__LIB_0__::func_912(iParam0, bParam2);
	iVar2 = 0;
	if (__LIB_1__::func_614(iParam0, 0, 0) == 0)
	{
		if (__LIB_1__::func_153(iParam0))
		{
			iVar5 = __LIB_0__::func_913(iParam0);
			iVar6 = __LIB_0__::func_352(iVar5);
			iVar7 = __LIB_1__::func_756(iVar6) + 1;
			__LIB_1__::func_757(iVar5);
			if (__LIB_1__::func_154(38))
			{
				__LIB_1__::func_240(483, 0);
			}
			else
			{
				__LIB_1__::func_240(482, 0);
			}
			if (iVar7 == __LIB_0__::func_353(iVar6))
			{
				func_190(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(1);
				}
			}
			if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_450(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_1__::func_450(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if ((!__LIB_0__::func_192(iParam0, 866047851) && !__LIB_0__::func_192(iParam0, -1979000645)) && !__LIB_0__::func_192(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (__LIB_0__::func_774(iParam0, 8388608) && !__LIB_0__::func_293(28))
	{
		__LIB_7__::func_501(28);
	}
	if (!bVar3)
	{
		if (__LIB_0__::func_192(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (__LIB_0__::func_357(iParam0) == -1447088266)
			{
				iVar1 = __LIB_0__::func_775(__LIB_0__::func_914(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iVar1);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iParam0);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
		{
			if (!__LIB_1__::func_823(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!__LIB_3__::func_708(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			__LIB_1__::func_833(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, 2000026003))
		{
			__LIB_1__::func_632(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -103750053))
		{
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (__LIB_0__::func_192(iParam0, -121341956) && !__LIB_0__::func_192(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
				{
					__LIB_1__::func_240(498, 0);
				}
			}
			if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
			{
				__LIB_1__::func_796(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -136654233))
		{
			if (__LIB_0__::func_192(iParam0, -1021472396))
			{
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1466706512) && __LIB_0__::func_192(iParam0, 1147021565))
		{
			__LIB_1__::func_240(484, 0);
		}
		else if (__LIB_0__::func_192(iParam0, 1147021565) && __LIB_0__::func_192(iParam0, -524514947))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 554195525))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 589988438))
		{
			if (__LIB_1__::func_709())
			{
				__LIB_1__::func_797(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_843(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_1__::func_844(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_1__::func_845(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_846(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (__LIB_0__::func_192(iParam0, 1841149704))
		{
			__LIB_0__::func_359();
		}
		else if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_1__::func_847(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_1__::func_858(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			__LIB_1__::func_796(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return 0;
			}
			__LIB_1__::func_824(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_190(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_190(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_190(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_190(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_190(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_190(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_601(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1399091007))
		{
			__LIB_0__::func_917(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_190(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				__LIB_7__::func_501(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				__LIB_1__::func_240(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				__LIB_0__::func_361();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				__LIB_0__::func_362();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				__LIB_0__::func_363();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				__LIB_1__::func_244();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				__LIB_1__::func_424(242, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				__LIB_1__::func_424(240, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				__LIB_1__::func_424(241, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				__LIB_1__::func_240(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				__LIB_1__::func_240(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				__LIB_1__::func_240(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_190(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_190(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (__LIB_0__::func_293(1))
				{
					__LIB_1__::func_240(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				__LIB_1__::func_240(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (__LIB_0__::func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				__LIB_1__::func_240(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_3__::func_427(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return 1;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			__LIB_7__::func_685(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_9__::func_8(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (__LIB_0__::func_708(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_190(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			__LIB_1__::func_451(iVar2, 0);
		}
	}
	Var35 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	__LIB_1__::func_602(iParam0);
	if (fParam6 > 0f)
	{
		if (__LIB_0__::func_192(iParam0, -839724752))
		{
			__LIB_1__::func_157(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_1__::func_158(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

char* func_192(bool bParam0)
{
	if (bParam0)
	{
		return "JOHN_PLAYER";
	}
	return "ARTHUR";
}

char* func_196(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			return "MAGIC_LANTERN_THE_BEAR";
		case 22:
		case 32:
			return "MAGIC_LANTERN_JOSIAH_BLACKWATER";
		case 23:
		case 33:
			return "MAGIC_LANTERN_WONDERS_OF_THE_AGE";
		case 24:
		case 34:
			return "MAGIC_LANTERN_SAVIORS_SAVAGES";
		case 25:
		case 35:
			return "MAGIC_LANTERN_GHOSTLY_SERENADE";
		case 26:
		case 36:
			return "MOVIE_DIRECT_CURRENT_DAMNATION";
		case 27:
		case 37:
			return "MOVIE_FARMERS_DAUGHTER";
		case 28:
		case 38:
			return "MOVIE_MODERN_MEDICINE";
		case 29:
		case 39:
			return "MOVIE_BEAUMONT_THE_BURLY";
		case 30:
		case 40:
			return "MOVIE_SKETCHING_FOR_SWEETHEART";
		default:
			break;
	}
	return "FAIL";
}

char* func_197(int iParam0)
{
	switch (iParam0)
	{
		case 33:
			return "JK_TICKET_TAKER";
		case 525:
			return "FH_TOWNDEALER";
		case 283:
			return "JS_TOWNDEALER";
		case 284:
			return "FH_TOWNDEALER";
		default:
			break;
	}
	return "JK_TICKET_TAKER";
}

int func_200(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_2__::func_899(uParam2, 1, iVar0);
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
			if (__LIB_2__::func_895(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_882(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (__LIB_2__::func_874(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_896(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
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
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
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
					return 1;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_897(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
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
					return 1;
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
						return 1;
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
					return 1;
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
								return 1;
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
							return 1;
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
						return 1;
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
							return 1;
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
				return 1;
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
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_368(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_369(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
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
						return 1;
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
					return 1;
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
				return 1;
			}
		}
	}
	return 0;
}

void func_201(int iParam0, int iParam1)
{
	iParam0->f_5 = iParam0->f_4;
	iParam0->f_4 = iParam1;
}

char* func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_AggroCower";
		case 2:
			return "PL_AggroRun";
		case 3:
			return "PL_CowerBase";
		case 1:
			return "PL_CowerGoAway";
		case 4:
			return "PL_BuyLt";
		case 5:
			return "PL_BuyRt";
		case 6:
			return "PL_Greet1";
		case 7:
			return "PL_Greet2";
		case 8:
			return "PL_HelpYou";
		case 15:
			return "PL_NoShow1";
		case 16:
			return "PL_NoShow2";
		case 9:
			return "PL_OpenCurtain";
		case 11:
			return "PL_ShowNegLt";
		case 12:
			return "PL_ShowNegRt";
		case 13:
			return "PL_ShowPosLt";
		case 14:
			return "PL_ShowPosRt";
		case 10:
			return "Pl_Base";
		default:
			break;
	}
	return "[THEATER_TT_GET_TICKET_COLLECTOR_PLAYLIST] -- FAIL -- 77";
}

void func_205(int iParam0)
{
	if (func_118(iParam0))
	{
		STREAMING::REQUEST_MODEL(func_178(4), false);
	}
	else if (iParam0->f_24 == 0)
	{
		STREAMING::REQUEST_MODEL(func_178(3), false);
	}
	else
	{
		STREAMING::REQUEST_MODEL(func_178(2), false);
	}
}

void func_206(var uParam0, var uParam1, int iParam2)
{
	struct<7> Var0;
	switch (iParam2)
	{
		case 0:
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
			{
				Var0 = { func_254(2) };
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(Var0, Var0.f_3, Var0.f_6, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
			{
				Var0 = { func_254(3) };
				*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Var0, Var0.f_3, Var0.f_6, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
		case 1:
		case 2:
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2685.265f, -1363.339f, 48.15632f, 0f, 0f, 40.164f, 2.969626f, 2.725822f, 3.152676f, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2685.704f, -1362.969f, 48.15632f, 0f, 0f, 40.164f, 4.125022f, 8.24628f, 3.152676f, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
		case 4:
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-788.2858f, -1362.648f, 44.1069f, 0f, 0f, 0f, 2.572522f, 2.070467f, 2.851869f, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-787.9954f, -1362.648f, 44.1069f, 0f, 0f, 0f, 2.967766f, 7.108891f, 2.851869f, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
		case 3:
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-353.9453f, 707.1058f, 117.0155f, 0f, 0f, -29.98282f, 3.680929f, 4.116389f, 2.594225f, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-353.0224f, 707.7128f, 117.0762f, 0f, 0f, 0f, 3f, 3f, 1.726511f, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
	}
}

bool func_207(int iParam0)
{
	if (func_118(iParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(func_178(4)))
		{
			return true;
		}
	}
	else if (iParam0->f_24 == 0)
	{
		if (STREAMING::HAS_MODEL_LOADED(func_178(3)))
		{
			return true;
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(func_178(2)))
	{
		return true;
	}
	return false;
}

bool func_208(int iParam0, vector3 vParam1, int iParam4)
{
	if (func_118(iParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_53[4]))
		{
			iParam0->f_53[4] = OBJECT::CREATE_OBJECT(func_178(4), vParam1, true, true, false, false, true);
			return false;
		}
	}
	else if (iParam4 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_53[3]))
		{
			iParam0->f_53[3] = OBJECT::CREATE_OBJECT(func_178(3), vParam1, true, true, false, false, true);
			return false;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_53[2]))
	{
		iParam0->f_53[2] = OBJECT::CREATE_OBJECT(func_178(2), vParam1, true, true, false, false, true);
		return false;
	}
	return true;
}

void func_209(int iParam0, int iParam1)
{
	if (func_118(iParam0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_10[3 /*3*/], "COINS", iParam0->f_53[4], 0);
	}
	else if (iParam1 == 0)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_10[3 /*3*/], "COINS", iParam0->f_53[3], 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_10[3 /*3*/], "COINS", iParam0->f_53[2], 0);
	}
}

Vector3 func_210(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2542.176f, -1282.525f, 48.218f;
		case 1:
			return 2686.802f, -1362.095f, 47.215f;
		case 2:
			return 2686.802f, -1362.095f, 47.215f;
		case 4:
			return -789.7354f, -1362.636f, 42.82219f;
		case 3:
			return -355.1843f, 705.1395f, 115.9362f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_211(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 47.261f;
		case 1:
			return 0f, 0f, 129.887f;
		case 2:
			return 0f, 0f, 129.887f;
		case 4:
			return 0f, 0f, -90.358f;
		case 3:
			return 0f, 0f, -31.467f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_212(var uParam0, int iParam1, bool bParam2, float fParam3)
{
	bool bVar0;
	bVar0 = __LIB_0__::func_481(1);
	switch (iParam1->f_6)
	{
		case 0:
			if (!__LIB_0__::func_75(&(iParam1->f_67)))
			{
				__LIB_1__::func_148(&(iParam1->f_67));
			}
			if ((((!func_120(func_109(uParam0->f_1)) && !__LIB_0__::func_27(iParam1->f_25, 2)) && __LIB_1__::func_205(Global_35, iParam1->f_59[3], 1, 0)) && !Global_1394141.f_1328) && !bParam2)
			{
				func_201(iParam1, 6);
				__LIB_1__::func_148(&(iParam1->f_67));
				__LIB_0__::func_19(&(iParam1->f_3), 4);
				__LIB_1__::func_581(&(iParam1->f_25), 2);
			}
			if ((((((((!__LIB_0__::func_27(iParam1->f_25, 128) && !Global_1394141.f_1328) && !bVar0) && __LIB_0__::func_27(iParam1->f_25, 2)) && __LIB_1__::func_205(Global_35, iParam1->f_59[3], 1, 0)) && !bParam2) && __LIB_0__::func_265(&(iParam1->f_67)) > 15f) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_134)) && iParam1->f_31 <= 0)
			{
				__LIB_1__::func_148(&(iParam1->f_67));
				__LIB_1__::func_581(&(iParam1->f_25), 128);
				iParam1->f_28++;
				func_201(iParam1, 8);
				__LIB_0__::func_19(&(iParam1->f_3), 4);
			}
			if (((((((__LIB_0__::func_27(iParam1->f_25, 128) && !Global_1394141.f_1328) && !bVar0) && __LIB_0__::func_265(&(iParam1->f_67)) > (15f * IntToFloat(iParam1->f_28))) && iParam1->f_27 <= 3) && __LIB_1__::func_205(Global_35, iParam1->f_59[3], 1, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_134)) && iParam1->f_31 <= 0)
			{
				__LIB_16__::func_866(uParam0->f_134, func_374(func_109(uParam0->f_1)), 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				iParam1->f_27++;
				iParam1->f_28++;
				__LIB_1__::func_148(&(iParam1->f_67));
			}
			if (__LIB_0__::func_27(iParam1->f_25, 4) && !Global_1394141.f_1328)
			{
				func_201(iParam1, func_375(func_109(uParam0->f_1)));
				__LIB_1__::func_993(&(iParam1->f_25), 4);
				__LIB_1__::func_581(&(iParam1->f_25), 1048576);
				__LIB_0__::func_19(&(iParam1->f_6), 1);
				__LIB_1__::func_148(&(iParam1->f_67));
				__LIB_1__::func_581(&(iParam1->f_25), 2);
				__LIB_1__::func_581(&(iParam1->f_25), 128);
				__LIB_0__::func_19(&(iParam1->f_3), 4);
			}
			if (((!__LIB_0__::func_27(iParam1->f_25, 4194304) && !bVar0) && !__LIB_0__::func_86(func_376(iParam1->f_24))) && __LIB_0__::func_94(Global_35, func_376(iParam1->f_24), 1) < func_377(iParam1->f_24))
			{
				__LIB_16__::func_866(uParam0->f_134, "UNAUTHORIZED_ADMISSION", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				__LIB_1__::func_581(&(iParam1->f_25), 4194304);
			}
			if (((!__LIB_0__::func_27(iParam1->f_25, 2097152) && !bVar0) && !__LIB_0__::func_86(func_378(iParam1->f_24))) && __LIB_0__::func_94(Global_35, func_378(iParam1->f_24), 1) < func_379(iParam1->f_24))
			{
				__LIB_16__::func_866(uParam0->f_134, "UNAUTHORIZED_AREA_BALCONY", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				__LIB_1__::func_581(&(iParam1->f_25), 2097152);
			}
			func_380(uParam0, iParam1);
			if (!func_110(func_109(uParam0->f_1)))
			{
				__LIB_0__::func_19(&(iParam1->f_6), 3);
			}
			break;
		case 1:
			if (!__LIB_0__::func_27(iParam1->f_25, 2048) && __LIB_1__::func_205(Global_35, Global_1394141.f_7[Global_40.f_9028[func_109(uParam0->f_1)] /*31*/].f_4, 1, 0))
			{
				__LIB_1__::func_581(&(iParam1->f_25), 2048);
			}
			if (!__LIB_0__::func_27(iParam1->f_25, 1024))
			{
				switch (func_109(uParam0->f_1))
				{
					case 3:
						if (ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_204(func_375(func_109(uParam0->f_1)))) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1->f_10[3 /*3*/]) > 0.5f)
						{
							__LIB_16__::func_866(uParam0->f_134, func_381(func_109(uParam0->f_1)), 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
							__LIB_1__::func_581(&(iParam1->f_25), 1024);
						}
						break;
					case 0:
					case 1:
					case 2:
					case 4:
						if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1->f_10[3 /*3*/]) > 0.4f)
						{
							__LIB_16__::func_866(uParam0->f_134, func_381(func_109(uParam0->f_1)), 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
							__LIB_1__::func_581(&(iParam1->f_25), 1024);
						}
						break;
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_25, 16) && func_109(uParam0->f_1) == 3)
			{
				if ((__LIB_0__::func_27(iParam1->f_25, 1048576) && ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_204(5))) && !bParam2)
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, iParam1->f_10[3 /*3*/]))
					{
						__LIB_0__::func_803(1015669983);
						__LIB_1__::func_581(&(iParam1->f_25), 16);
					}
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_25, 512) && __LIB_0__::func_27(iParam1->f_25, 2048))
			{
				if (((!Global_1394141.f_1329 && __LIB_1__::func_205(Global_35, iParam1->f_59[3], 1, 0)) && __LIB_0__::func_264(&(iParam1->f_67)) > 25f) && !bVar0)
				{
					__LIB_1__::func_581(&(iParam1->f_25), 512);
					func_201(iParam1, 12);
					__LIB_0__::func_19(&(iParam1->f_3), 4);
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_25, 256) && __LIB_0__::func_27(iParam1->f_25, 2048))
			{
				if (((Global_1394141.f_1329 && __LIB_1__::func_205(Global_35, iParam1->f_59[3], 1, 0)) && __LIB_0__::func_264(&(iParam1->f_67)) > 25f) && !bVar0)
				{
					__LIB_1__::func_581(&(iParam1->f_25), 256);
					func_201(iParam1, 14);
					__LIB_0__::func_19(&(iParam1->f_3), 4);
				}
			}
			if (!Global_1394141.f_1328)
			{
				__LIB_1__::func_148(&(iParam1->f_67));
				__LIB_0__::func_19(&(iParam1->f_6), 2);
			}
			if (func_110(func_109(uParam0->f_1)) && !Global_1394141.f_1328)
			{
				func_382(iParam1);
				func_201(iParam1, 10);
				__LIB_0__::func_19(&(iParam1->f_3), 4);
				__LIB_1__::func_148(&(iParam1->f_67));
				__LIB_0__::func_19(&(iParam1->f_6), 0);
			}
			break;
		case 2:
			if ((((!__LIB_0__::func_27(iParam1->f_25, 64) && __LIB_1__::func_205(Global_35, iParam1->f_59[3], 1, 0)) && !Global_1394141.f_1328) && __LIB_0__::func_264(&(iParam1->f_67)) > 30f) && !func_110(func_109(uParam0->f_1)))
			{
				func_201(iParam1, 15);
				__LIB_0__::func_19(&(iParam1->f_3), 4);
				__LIB_1__::func_581(&(iParam1->f_25), 64);
			}
			if ((((__LIB_0__::func_27(iParam1->f_25, 64) && iParam1->f_29 < 3) && __LIB_0__::func_265(&(iParam1->f_67)) > (15f * IntToFloat(iParam1->f_30))) && __LIB_1__::func_205(Global_35, iParam1->f_59[3], 1, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_134))
			{
				__LIB_16__::func_866(uParam0->f_134, func_374(func_109(uParam0->f_1)), 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				iParam1->f_29++;
				iParam1->f_30++;
				__LIB_1__::func_148(&(iParam1->f_67));
			}
			if (func_110(func_109(uParam0->f_1)))
			{
				func_382(iParam1);
				func_201(iParam1, 10);
				__LIB_0__::func_19(&(iParam1->f_3), 4);
				__LIB_1__::func_148(&(iParam1->f_67));
				__LIB_0__::func_19(&(iParam1->f_6), 0);
			}
			break;
		case 3:
			if (((!__LIB_0__::func_27(iParam1->f_25, 64) && __LIB_1__::func_205(Global_35, iParam1->f_59[3], 1, 0)) && !Global_1394141.f_1328) && !func_110(func_109(uParam0->f_1)))
			{
				func_201(iParam1, 15);
				__LIB_0__::func_19(&(iParam1->f_3), 4);
				__LIB_1__::func_581(&(iParam1->f_25), 64);
			}
			if (((__LIB_0__::func_27(iParam1->f_25, 64) && iParam1->f_29 < 3) && __LIB_0__::func_265(&(iParam1->f_67)) > (15f * IntToFloat(iParam1->f_30))) && __LIB_1__::func_205(Global_35, iParam1->f_59[3], 1, 0))
			{
				__LIB_16__::func_866(uParam0->f_134, func_374(func_109(uParam0->f_1)), 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				iParam1->f_29++;
				iParam1->f_30++;
				__LIB_1__::func_148(&(iParam1->f_67));
			}
			if (func_110(func_109(uParam0->f_1)))
			{
				func_382(iParam1);
				func_201(iParam1, 10);
				__LIB_0__::func_19(&(iParam1->f_3), 4);
				__LIB_1__::func_148(&(iParam1->f_67));
				__LIB_0__::func_19(&(iParam1->f_6), 0);
			}
			break;
	}
}

void func_214(var uParam0, char* sParam1, char[4] cParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1))
	{
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, sParam1, true);
}

char* func_215(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "GENERIC_FRIGHTENED_HIGH";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "LAW_THREAT";
				default:
					break;
			}
			break;
		case 4:
		case 5:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "ENJOY_THE_SHOW";
				default:
					break;
			}
			break;
		case 6:
		case 7:
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				iVar1 = ENTITY::GET_ENTITY_TYPE(iVar0);
				if (iVar1 == 1)
				{
					return "WELCOME_GET_THAT_OUT_OF_HERE";
				}
			}
			if (__LIB_3__::func_425(&uVar2))
			{
				return "WELCOME_MASK";
			}
			switch (iParam1)
			{
				case 0:
					return "WELCOME";
				case 1:
					return "WELCOME_MALE";
				case 2:
					return "WELCOME_FEMALE";
				default:
					break;
			}
			break;
		case 8:
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				iVar1 = ENTITY::GET_ENTITY_TYPE(iVar0);
				if (iVar1 == 1)
				{
					return "WELCOME_GET_THAT_OUT_OF_HERE";
				}
			}
			if (__LIB_3__::func_425(&uVar2))
			{
				return "WELCOME_MASK";
			}
			iVar3 = __LIB_0__::func_153(Global_35, 0, 1, 0);
			if (iVar3 != joaat("WEAPON_UNARMED"))
			{
				return "PUT_WEAPON_AWAY";
			}
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "HANGING_AROUND_NO_PURCHASE";
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "WELCOME_NO_SHOW";
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "HANGING_AROUND_NO_SHOW";
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "ENJOY_THE_SHOW";
				default:
					break;
			}
			break;
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "FAREWELL_DURING_SHOW";
				default:
					break;
			}
			break;
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return "FAREWELL_AFTER_SHOW";
				case 1:
					return "FAREWELL_AFTER_SHOW_MALE";
				case 2:
					return "FAREWELL_AFTER_SHOW_FEMALE";
				default:
					break;
			}
			break;
	}
	return "WELCOME";
}

void func_216(int iParam0)
{
	switch (iParam0->f_24)
	{
		case 4:
			if (iParam0->f_50)
			{
				iParam0->f_50 = 0;
				func_385(2037803338 /* GXTEntry: "Movie Ticket" */, 1, 0, -142743235, 0);
			}
			break;
		case 1:
			if (iParam0->f_49)
			{
				iParam0->f_49 = 0;
				func_385(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, 1, 0, -142743235, 0);
			}
			break;
		case 2:
			if (iParam0->f_50)
			{
				iParam0->f_50 = 0;
				func_385(2037803338 /* GXTEntry: "Movie Ticket" */, 1, 0, -142743235, 0);
			}
			break;
		case 0:
			if (iParam0->f_48)
			{
				iParam0->f_48 = 0;
				func_385(-1110862888 /* GXTEntry: "Theatre Ticket" */, 1, 0, -142743235, 0);
			}
			break;
		case 3:
			if (iParam0->f_49)
			{
				iParam0->f_49 = 0;
				func_385(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, 1, 0, -142743235, 0);
			}
			break;
	}
}

void func_218(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	var uVar6[1];
	struct<10> Var8;
	uVar6[0] = uParam0->f_134;
	iVar0 = func_389(&uVar2, &uVar6, 3, Global_36, 50f, 0, 0, 0, func_388(uParam0->f_139), 1, 1, -1082130432 /* Float: -1f */, 0, 1);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uVar2[iVar1]) && !ENTITY::IS_ENTITY_DEAD(uVar2[iVar1])) && !LAW::_0x40851BCC33ACD9AB(uVar2[iVar1]))
		{
			Var8 = Global_35;
			Var8.f_3 = { Global_36 };
			Var8.f_6 = __LIB_17__::func_497();
			Var8.f_9 = 1;
			Var8.f_2 = joaat("CRIME_THREATEN");
			Var8.f_1 = uVar2[iVar1];
			Var8.f_8 = 1;
			Var8.f_7 = 1000;
			LAW::_0x018F30D762E62DF8(uVar2[iVar1], &Var8);
			__LIB_2__::func_357(uVar2[iVar1], Global_36, 2, 1, 1);
			TASK::_TASK_SMART_FLEE_STYLE_PED(uVar2[iVar1], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		iVar1++;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_134, true);
}

void func_220(var uParam0, int iParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
	}
	iParam1->f_10[3 /*3*/] = -1;
	iParam1->f_10[3 /*3*/].f_1 = 0;
	iParam1->f_5 = -1;
	iParam1->f_4 = -1;
	func_83(uParam0, 0);
	func_382(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_53[2]))
	{
		OBJECT::DELETE_OBJECT(&(iParam1->f_53[2]));
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
	}
	iParam1->f_10[0 /*3*/] = -1;
	iParam1->f_10[0 /*3*/].f_1 = 0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[1 /*3*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[1 /*3*/]);
	}
	iParam1->f_10[1 /*3*/] = -1;
	iParam1->f_10[1 /*3*/].f_1 = 0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[2 /*3*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[2 /*3*/]);
	}
	iParam1->f_10[2 /*3*/] = -1;
	iParam1->f_10[2 /*3*/].f_1 = 0;
}

Vector3 func_244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2529.018f, -1271.789f, 48.19606f;
		case 1:
		case 2:
			return 2682.637f, -1365.043f, 46.54007f;
		case 4:
			return -793.7158f, -1362.175f, 42.76554f;
		case 3:
			return -352.6599f, 708.3228f, 115.8174f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_245(int iParam0)
{
	switch (iParam0)
	{
		case 283:
			return 2546.542f, -1300.307f, 49.53876f;
		case 284:
			return 2697.939f, -1352.872f, 49.41832f;
		case 33:
			return -351.5715f, 700.468f, 118.3245f;
		case 525:
			return -777.8935f, -1362.579f, 45.98574f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

struct<11> func_254(int iParam0)
{
	struct<11> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 2537.884f, -1278.321f, 48.21795f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 4f, 4f, 5f };
			Var0.f_9 = "TICKET_TAKER_VAN_FRONT_ENTRANCE";
			Var0.f_10 = joaat("VOLCYLINDER");
			break;
		case 1:
			Var0 = { 2540.43f, -1280.87f, 48.01795f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 2f, 2f, 4f };
			Var0.f_9 = "TICKET_TAKER_VAN_TICKET_FENCE";
			Var0.f_10 = joaat("VOLCYLINDER");
			break;
		case 2:
			Var0 = { 2540.47f, -1280.896f, 49.50146f };
			Var0.f_3 = { 0f, 0f, -135.6275f };
			Var0.f_6 = { 2.411322f, 2.714174f, 3.024515f };
			Var0.f_9 = "THEATER_TT_INTERACT_SMALL_ZONE";
			Var0.f_10 = joaat("VOLBOX");
			break;
		case 3:
			Var0 = { 2538.789f, -1279.76f, 49.71677f };
			Var0.f_3 = { 0f, 0f, 11.90726f };
			Var0.f_6 = { 3.5f, 3.5f, 1.642595f };
			Var0.f_9 = "TICKET_TT_INTERACT_LARGE_ZONE";
			Var0.f_10 = joaat("VOLCYLINDER");
			break;
	}
	return Var0;
}

bool func_368(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (__LIB_2__::func_839(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!__LIB_1__::func_364(uParam1, iParam0))
					{
						if (__LIB_0__::func_94(iVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			return false;
		}
bool func_369(int iParam0, var uParam1)
{
	if (!__LIB_2__::func_140(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

char* func_374(int iParam0)
{
	int iVar0;
	if (func_110(iParam0))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
		if (iVar0 < 5)
		{
			return "HANGING_AROUND_NO_PURCHASE";
		}
	}
	else
	{
		return "HANGING_AROUND_NO_SHOW";
	}
	return "TAKE_YOUR_TIME";
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 5;
		case 4:
			return 4;
		case 3:
			return 5;
	}
	return 5;
}

Vector3 func_376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2538.441f, -1287.238f, 48.21795f;
		case 3:
			return -351.5473f, 703.4365f, 116.6887f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_377(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3f;
		case 3:
			return 1.3f;
		default:
			break;
	}
	return 0f;
}

Vector3 func_378(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2545.818f, -1279.9f, 50.04126f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3f;
		default:
			break;
	}
	return 0f;
}

void func_380(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	fVar0 = __LIB_0__::func_665(Global_35, uParam0->f_134, 1, 1);
	bVar1 = PED::IS_PED_JUMPING(Global_35);
	if (bVar1 && fVar0 < 10f)
	{
		if (!__LIB_0__::func_75(&(iParam1->f_42)))
		{
			iParam1->f_31++;
			__LIB_1__::func_148(&(iParam1->f_42));
		}
		else if (__LIB_0__::func_265(&(iParam1->f_42)) > 4f)
		{
			__LIB_0__::func_37(&(iParam1->f_42));
		}
	}
	if (iParam1->f_31 > 0 && fVar0 > 14f)
	{
		iParam1->f_31 = 0;
	}
	switch (iParam1->f_23)
	{
		case 0:
			if (iParam1->f_31 > 1 && !__LIB_0__::func_481(1))
			{
				__LIB_16__::func_866(uParam0->f_134, "MISBEHAVING_LOW", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				__LIB_1__::func_148(&(iParam1->f_45));
				__LIB_0__::func_19(&(iParam1->f_23), 1);
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&(iParam1->f_45)) > 3f && !__LIB_0__::func_481(1))
			{
				__LIB_0__::func_19(&(iParam1->f_23), 2);
			}
			break;
		case 2:
			if (iParam1->f_31 > 3 && !__LIB_0__::func_481(1))
			{
				__LIB_16__::func_866(uParam0->f_134, "MISBEHAVING_MED", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				__LIB_1__::func_148(&(iParam1->f_45));
				__LIB_0__::func_19(&(iParam1->f_23), 3);
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&(iParam1->f_45)) > 3f && !__LIB_0__::func_481(1))
			{
				__LIB_0__::func_19(&(iParam1->f_23), 4);
			}
			break;
		case 4:
			if (iParam1->f_31 > 5 && !__LIB_0__::func_481(1))
			{
				__LIB_16__::func_866(uParam0->f_134, "MISBEHAVING_HIGH", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				__LIB_1__::func_148(&(iParam1->f_45));
				__LIB_0__::func_19(&(iParam1->f_23), 5);
			}
			break;
		case 5:
			if (__LIB_0__::func_265(&(iParam1->f_45)) > 3f && !__LIB_0__::func_481(1))
			{
				__LIB_0__::func_19(&(iParam1->f_23), 6);
			}
			break;
		case 6:
			break;
	}
}

char* func_381(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "DIRECTIONS_VALENTINE_MAGIC_LANTERN";
		case 4:
			return "DIRECTIONS_BLACKWATER_IMPERIAL";
		case 0:
			return "DIRECTIONS_SAINT_DENIS_RALEUR";
		case 1:
		case 2:
			return "DIRECTIONS_SAINT_DENIS_FONTANA";
		default:
			break;
	}
	return "DIRECTIONS_SAINT_DENIS_RALEUR";
}

void func_382(int iParam0)
{
	iParam0->f_27 = 0;
	iParam0->f_28 = 1;
	iParam0->f_29 = 0;
	iParam0->f_30 = 1;
	__LIB_1__::func_993(&(iParam0->f_25), 1048576);
	__LIB_1__::func_993(&(iParam0->f_25), 2);
	__LIB_1__::func_993(&(iParam0->f_25), 32);
	__LIB_1__::func_993(&(iParam0->f_25), 128);
	__LIB_1__::func_993(&(iParam0->f_25), 256);
	__LIB_1__::func_993(&(iParam0->f_25), 512);
	__LIB_1__::func_993(&(iParam0->f_25), 16);
	__LIB_1__::func_993(&(iParam0->f_25), 1024);
	__LIB_1__::func_993(&(iParam0->f_25), 64);
	__LIB_1__::func_993(&(iParam0->f_25), 2048);
	__LIB_1__::func_993(&(iParam0->f_25), 16384);
	__LIB_1__::func_993(&(iParam0->f_25), 8192);
}

int func_385(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
	iVar3 = __LIB_0__::func_937(iParam0, 1);
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
	if (!__LIB_1__::func_707(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) < 0)
		{
			func_385(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	else if (!__LIB_1__::func_698(iParam0, iParam1, iParam3, bParam2, bParam4))
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
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

bool func_388(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return joaat("NBX_CIVILIANS");
		case 76:
			return joaat("VAL_CIVILIANS");
		case 38:
			return joaat("BLA_UPPERCLASS");
		default:
			break;
	}
	return -1;
}

int func_389(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = func_564(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam14, bParam15);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

int func_564(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (__LIB_2__::func_444(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!__LIB_0__::func_208(iVar2, uParam1))
					{
						bVar3 = false;
						if (bParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(bParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(bParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

