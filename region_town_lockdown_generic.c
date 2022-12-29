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
	var uLocal_14 = 0;
	var uLocal_15 = 3;
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
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<5> Local_44[4];
	struct<6> Local_65[13];
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	bool bLocal_148 = false;
	vector3 vLocal_149 = { 0f, 0f, 0f };
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_41 = ScriptParam_0;
	bLocal_148 = ScriptParam_0.f_3;
	if (!bLocal_148)
	{
	}
	LAW::_0x5E6F375CA101C108(PLAYER::PLAYER_ID(), 1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		LAW::_0x29CD4896ECB66C12();
		func_1(1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2();
	while (func_3(iLocal_41))
	{
		func_4();
		func_5();
		BUILTIN::WAIT(0);
	}
	if (!__LIB_10__::func_38(__LIB_1__::func_898()))
	{
		LAW::_0x5E6F375CA101C108(PLAYER::PLAYER_ID(), 0);
	}
	LAW::_0x29CD4896ECB66C12();
	func_1(1);
}

void func_1(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_147);
	AUDIO::_0xCBF2BEBB468A34F3(0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_44)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (__LIB_0__::func_272(Local_44[iVar0 /*5*/][iVar1], 0))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_44[iVar0 /*5*/][iVar1], 0);
				PED::_0x3088634CF8C819CF(Local_44[iVar0 /*5*/][iVar1]);
				if (bParam0)
				{
					__LIB_2__::func_788(&(Local_44[iVar0 /*5*/][iVar1]), 1, 0, 1);
				}
			}
			iVar1++;
		}
		if (PED::DOES_GROUP_EXIST(Local_44[iVar0 /*5*/].f_4))
		{
			PED::REMOVE_GROUP(Local_44[iVar0 /*5*/].f_4);
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < 13)
	{
		if (__LIB_0__::func_272(Local_65[iVar2 /*6*/].f_5, 0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_65[iVar2 /*6*/].f_5, 0);
			PED::_0x3088634CF8C819CF(Local_65[iVar2 /*6*/].f_5);
			if (bParam0)
			{
				__LIB_2__::func_788(&(Local_65[iVar2 /*6*/].f_5), 1, 0, 1);
			}
		}
		iVar2++;
	}
}

void func_2()
{
	iLocal_42 = 1;
	iLocal_146 = 4;
	if (iLocal_41 == 76)
	{
		Local_65[0 /*6*/] = { -315.9697f, 730.205f, 119.6211f };
		Local_65[0 /*6*/].f_3 = 112.8886f;
		Local_65[1 /*6*/] = { -280.0835f, 650.7783f, 112.3533f };
		Local_65[1 /*6*/].f_3 = 106.2955f;
		Local_65[2 /*6*/] = { -179.4088f, 618.418f, 113.0321f };
		Local_65[2 /*6*/].f_3 = 238.633f;
		Local_65[3 /*6*/] = { -188.5282f, 633.502f, 113.0321f };
		Local_65[3 /*6*/].f_3 = 32.4418f;
		Local_65[4 /*6*/] = { -247.1752f, 732.9976f, 115.5597f };
		Local_65[4 /*6*/].f_3 = 247.7911f;
		Local_65[5 /*6*/] = { -290.4395f, 854.7539f, 119.1824f };
		Local_65[5 /*6*/].f_3 = 248.8751f;
	}
	else if (iLocal_41 == 105)
	{
		Local_65[0 /*6*/] = { 1233.016f, -1257.087f, 73.0134f };
		Local_65[0 /*6*/].f_3 = 45.548f;
		Local_65[1 /*6*/] = { 1241.922f, -1289.397f, 75.9255f };
		Local_65[1 /*6*/].f_3 = 302.9735f;
		Local_65[2 /*6*/] = { 1299.177f, -1298.264f, 76.0373f };
		Local_65[2 /*6*/].f_3 = 311.7982f;
		Local_65[3 /*6*/] = { 1366.771f, -1384.501f, 78.0832f };
		Local_65[3 /*6*/].f_3 = 241.6411f;
		if (!func_10())
		{
			Local_65[4 /*6*/] = { 1237.376f, -1253.622f, 72.8261f };
			Local_65[4 /*6*/].f_3 = 40.1294f;
			Local_65[5 /*6*/] = { 1397.672f, -1309.186f, 76.6507f };
			Local_65[5 /*6*/].f_3 = 233.5066f;
			Local_65[6 /*6*/] = { 1315.306f, -1227.236f, 78.2259f };
			Local_65[6 /*6*/].f_3 = 290.243f;
		}
		if (!func_10())
		{
			iLocal_146 = 2;
		}
		else
		{
			iLocal_146 = 1;
		}
	}
	else if (iLocal_41 == 26)
	{
		Local_65[0 /*6*/] = { -1733.893f, -409.9799f, 154.4572f };
		Local_65[0 /*6*/].f_3 = 219.0199f;
		Local_65[1 /*6*/] = { -1791.323f, -399.5062f, 159.2381f };
		Local_65[1 /*6*/].f_3 = 212.9633f;
		Local_65[2 /*6*/] = { -1777.439f, -422.8475f, 154.1486f };
		Local_65[2 /*6*/].f_3 = 62.4417f;
		Local_65[3 /*6*/] = { -1836.929f, -420.9853f, 159.9767f };
		Local_65[3 /*6*/].f_3 = 175.3828f;
		Local_65[4 /*6*/] = { -1816.793f, -400.6095f, 160.5686f };
		Local_65[4 /*6*/].f_3 = 260.9312f;
		Local_65[5 /*6*/] = { -1816.323f, -270.1976f, 176.8509f };
		Local_65[5 /*6*/].f_3 = 1.7588f;
		iLocal_146 = 1;
	}
	else if (iLocal_41 == 38)
	{
		Local_65[0 /*6*/] = { -740.3712f, -1221.114f, 43.6817f };
		Local_65[0 /*6*/].f_3 = 53.1936f;
		Local_65[1 /*6*/] = { -851f, -1191.6f, 42.5509f };
		Local_65[1 /*6*/].f_3 = 190f;
		Local_65[2 /*6*/] = { -861.8897f, -1227.788f, 42.2753f };
		Local_65[2 /*6*/].f_3 = 65.2773f;
		Local_65[3 /*6*/] = { -841.9166f, -1234.872f, 42.5675f };
		Local_65[3 /*6*/].f_3 = 256.8999f;
		Local_65[4 /*6*/] = { -915.2818f, -1361.665f, 44.0777f };
		Local_65[4 /*6*/].f_3 = 79.3949f;
		Local_65[5 /*6*/] = { -865.3668f, -1397.431f, 42.5964f };
		Local_65[5 /*6*/].f_3 = 183.7478f;
		Local_65[6 /*6*/] = { -774.5f, -1379.2f, 43.4207f };
		Local_65[6 /*6*/].f_3 = 210.8791f;
		Local_65[7 /*6*/] = { -823.8338f, -1331.073f, 42.6664f };
		Local_65[7 /*6*/].f_3 = 122.9285f;
		Local_65[8 /*6*/] = { -806.4053f, -1261.322f, 42.6713f };
		Local_65[8 /*6*/].f_3 = 328.6115f;
		Local_65[9 /*6*/] = { -806.9378f, -1343.487f, 42.6736f };
		Local_65[9 /*6*/].f_3 = 265.7803f;
		Local_65[10 /*6*/] = { -682.9378f, -1243.5f, 42.6736f };
		Local_65[10 /*6*/].f_3 = 270f;
		Local_65[11 /*6*/] = { -723.1f, -1273.4f, 42.6736f };
		Local_65[11 /*6*/].f_3 = 265.7803f;
		Local_65[12 /*6*/] = { -735.5f, -1373.1f, 44.3f };
		Local_65[12 /*6*/].f_3 = 300f;
	}
	else if (iLocal_41 == 57)
	{
		Local_65[0 /*6*/] = { 1437.581f, -7118.745f, 73.8276f };
		Local_65[0 /*6*/].f_3 = 304.4214f;
		Local_65[1 /*6*/] = { 1501.077f, -7096.875f, 75.3257f };
		Local_65[1 /*6*/].f_3 = 132.8023f;
		Local_65[2 /*6*/] = { 1455.17f, -7087.646f, 74.8994f };
		Local_65[2 /*6*/].f_3 = 17.1023f;
		Local_65[3 /*6*/] = { 1482.781f, -7074.065f, 73.0206f };
		Local_65[3 /*6*/].f_3 = 87.7416f;
		Local_65[4 /*6*/] = { 1455.889f, -7126.713f, 76.3761f };
		Local_65[4 /*6*/].f_3 = 171.7569f;
		Local_65[5 /*6*/] = { 1445.943f, -7104.507f, 76.3761f };
		Local_65[5 /*6*/].f_3 = 115.4127f;
		Local_65[6 /*6*/] = { 1429.604f, -7090.44f, 71.6729f };
		Local_65[6 /*6*/].f_3 = 347.8958f;
		iLocal_146 = 2;
	}
	else if (iLocal_41 == 78)
	{
		Local_65[0 /*6*/] = { 2836.395f, 1440.633f, 68.6899f };
		Local_65[0 /*6*/].f_3 = 93.6271f;
		Local_65[1 /*6*/] = { 2878.97f, 1387.042f, 83.0191f };
		Local_65[1 /*6*/].f_3 = 75.0041f;
		Local_65[2 /*6*/] = { 3022.347f, 1439.903f, 45.9552f };
		Local_65[2 /*6*/].f_3 = 80.5108f;
		Local_65[3 /*6*/] = { 2870.179f, 1422.417f, 67.6698f };
		Local_65[3 /*6*/].f_3 = 270.6312f;
		Local_65[4 /*6*/] = { 2877.519f, 1368.874f, 61.9214f };
		Local_65[4 /*6*/].f_3 = 91.5501f;
		Local_65[5 /*6*/] = { 2937.786f, 1317.984f, 43.1809f };
		Local_65[5 /*6*/].f_3 = 44.1809f;
		Local_65[6 /*6*/] = { 2945.338f, 1374.376f, 50.3227f };
		Local_65[6 /*6*/].f_3 = 178.441f;
		iLocal_146 = 1;
	}
	PED::_0xED9582B3DA8F02B4((3 * iLocal_146) + 13);
}

bool func_3(int iParam0)
{
	if (((((!(__LIB_0__::func_21(iParam0, 8) || __LIB_0__::func_21(iParam0, 2)) || !__LIB_1__::func_205(Global_35, __LIB_0__::func_559(iParam0), 1, 0)) || !__LIB_0__::func_730(iParam0)) || __LIB_4__::func_497()) || Global_1934266.f_56) || ((iParam0 != 38 || __LIB_0__::func_293(45)) && (__LIB_14__::func_213(1, 0) || __LIB_14__::func_213(8, 0))))
	{
		return false;
	}
	return true;
}

void func_4()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		LAW::_0xC310239ACCCF5579();
	}
	switch (iLocal_42)
	{
		case 1:
			iLocal_43 = __LIB_14__::func_202(2, 2, -156825994, 1, 0, 0f, 0f, 0f);
			if (!STREAMING::IS_MODEL_VALID(iLocal_43))
			{
				iVar0 = __LIB_1__::func_882(iLocal_41);
				if (iVar0 == 8)
				{
					iLocal_43 = joaat("S_M_M_FUSSARHENCHMAN_01");
				}
			}
			if (__LIB_0__::func_272(Global_35, 0))
			{
			}
			iLocal_152 = func_21(iLocal_41);
			if (iLocal_41 == 38)
			{
				iLocal_153 = VOLUME::_CREATE_VOLUME_BOX(-810.7571f, -1288.25f, 63.56367f, 0f, 0f, 0f, 137.4041f, 198.2413f, 58.96445f);
			}
			iLocal_42 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_43, false);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_43) && PED::_0x5E420FF293EE5472())
			{
				iLocal_42 = 3;
			}
			break;
		case 3:
			if (!__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 0, 0) || !bLocal_148)
			{
				iVar1 = ITEMSET::CREATE_ITEMSET(true);
				LAW::_0x0C392DB374655176(Global_36, 200f, iVar1);
				iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
				ITEMSET::DESTROY_ITEMSET(iVar1);
				if (iVar2 > 14)
				{
					iLocal_42 = 6;
				}
				else if (iVar2 > 7)
				{
					iLocal_42 = 5;
				}
				else
				{
					iLocal_42 = 4;
				}
			}
			break;
		case 4:
			if (!bLocal_148)
			{
				if (func_22())
				{
					iLocal_42 = 5;
				}
			}
			else
			{
				iLocal_42 = 5;
			}
			break;
		case 5:
			if (func_23())
			{
				func_24();
				iLocal_145 = 0;
				iLocal_42 = 6;
			}
			break;
		case 6:
			if (iLocal_41 == 38 && !__LIB_0__::func_293(45))
			{
				if (!__LIB_0__::func_75(&uLocal_154))
				{
					if (__LIB_1__::func_205(Global_35, iLocal_153, 1, 0))
					{
						__LIB_1__::func_148(&uLocal_154);
					}
				}
				else if (__LIB_0__::func_264(&uLocal_154) > 3f)
				{
					LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_LAW_IS_THREATENED"), 0, 0, true);
				}
			}
			if (Global_1935630.f_18)
			{
				func_1(0);
				iLocal_42 = 7;
			}
			break;
		case 7:
			if (iLocal_41 == 38 && !__LIB_0__::func_293(45))
			{
				if (Global_1935630.f_18)
				{
					PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				}
			}
			break;
		case 8:
			func_1(1);
			iLocal_42 = 9;
			break;
	}
}

void func_5()
{
	if (func_28(1) == func_29())
	{
		AUDIO::_0xCBF2BEBB468A34F3(1);
	}
	else
	{
		AUDIO::_0xCBF2BEBB468A34F3(0);
	}
}

bool func_10()
{
	return (__LIB_2__::func_410(21) && !__LIB_2__::func_410(27));
}

int func_21(int iParam0)
{
	char* sVar0;
	sVar0 = "Law ped patrol zone";
	switch (iParam0)
	{
		case 76:
			return VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-289.5586f, 710.8658f, 108.6164f, 0f, 0f, 21.78f, 150.319f, 248.9677f, 48.46068f, sVar0);
		case 105:
			return VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1355.895f, -1305.364f, 76.3101f, 0f, 0f, 46.10207f, 156.1024f, 183.122f, 48.46068f, sVar0);
		case 38:
			return VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-848.7946f, -1305.756f, 42.269f, 0f, 0f, 0f, 170.4325f, 189.3558f, 48.46068f, sVar0);
		case 78:
			return VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2896.522f, 1390.781f, 59.3423f, 0f, 0f, -18.52123f, 170.4325f, 189.3558f, 48.46068f, sVar0);
		default:
			break;
	}
	return __LIB_0__::func_559(iParam0);
}

bool func_22()
{
	bool bVar0;
	if (iLocal_145 < 13)
	{
		if (!__LIB_0__::func_86(Local_65[iLocal_145 /*6*/]))
		{
			Local_65[iLocal_145 /*6*/].f_5 = __LIB_1__::func_545(iLocal_43, Local_65[iLocal_145 /*6*/], Local_65[iLocal_145 /*6*/].f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			if (__LIB_0__::func_272(Local_65[iLocal_145 /*6*/].f_5, 0))
			{
				func_49(Local_65[iLocal_145 /*6*/].f_5);
				WEAPON::_GIVE_WEAPON_TO_PED_2(Local_65[iLocal_145 /*6*/].f_5, joaat("WEAPON_REPEATER_CARBINE"), 100, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				Local_65[iLocal_145 /*6*/].f_4 = TASK::CREATE_SCENARIO_POINT(func_50(), Local_65[iLocal_145 /*6*/], Local_65[iLocal_145 /*6*/].f_3, 0, 0, 0);
				bVar0 = true;
				TASK::TASK_POLICE(Local_65[iLocal_145 /*6*/].f_5, bVar0);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_65[iLocal_145 /*6*/].f_4))
				{
					TASK::_TASK_USE_SCENARIO_POINT(Local_65[iLocal_145 /*6*/].f_5, Local_65[iLocal_145 /*6*/].f_4, 0, 0, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_STAND_GUARD(Local_65[iLocal_145 /*6*/].f_5, Local_65[iLocal_145 /*6*/], Local_65[iLocal_145 /*6*/].f_3, "DEFEND");
				}
			}
		}
		iLocal_145++;
	}
	else
	{
		iLocal_145 = 0;
		return true;
	}
	return false;
}

bool func_23()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	if (iLocal_144 >= iLocal_146)
	{
		return true;
	}
	else if (iLocal_145 == 0)
	{
	}
	if (iLocal_41 == 38)
	{
		iVar3 = ITEMSET::CREATE_ITEMSET(true);
		LAW::_0x0C392DB374655176(Global_36, 200f, iVar3);
		iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar3);
		ITEMSET::DESTROY_ITEMSET(iVar3);
		if (iVar4 > 16)
		{
			iLocal_144++;
			return false;
		}
	}
	if (!PED::DOES_GROUP_EXIST(Local_44[iLocal_144 /*5*/].f_4))
	{
		Local_44[iLocal_144 /*5*/].f_4 = PED::CREATE_GROUP(1);
	}
	if (iLocal_145 < 3)
	{
		if (!func_51(iLocal_41, &vLocal_149, iLocal_43, iLocal_144))
		{
			vLocal_149 = { __LIB_2__::func_116(iLocal_41, 1) };
		}
		__LIB_0__::func_634(&vLocal_149, 50, 10, 0);
		vVar0 = { __LIB_3__::func_857(vLocal_149, 3f, 1f) };
		Local_44[iLocal_144 /*5*/][iLocal_145] = __LIB_1__::func_545(iLocal_43, vVar0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		func_49(Local_44[iLocal_144 /*5*/][iLocal_145]);
		PED::SET_PED_CONFIG_FLAG(Local_44[iLocal_144 /*5*/][iLocal_145], 279, true);
		if (iLocal_145 == 0)
		{
			PED::SET_PED_AS_GROUP_LEADER(Local_44[iLocal_144 /*5*/][iLocal_145], Local_44[iLocal_144 /*5*/].f_4, false);
		}
		else
		{
			PED::SET_PED_AS_GROUP_MEMBER(Local_44[iLocal_144 /*5*/][iLocal_145], Local_44[iLocal_144 /*5*/].f_4);
		}
		if (iLocal_145 == 0)
		{
		}
		else if ((iLocal_145 % 3) == 0)
		{
			if (__LIB_0__::func_41(__LIB_0__::func_23()) >= 20 || __LIB_0__::func_41(__LIB_0__::func_23()) <= 5)
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(Local_44[iLocal_144 /*5*/][iLocal_145], joaat("WEAPON_MELEE_TORCH"), 100, true, false, 1, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
		}
		else
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(Local_44[iLocal_144 /*5*/][iLocal_145], joaat("WEAPON_REPEATER_CARBINE"), 100, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		}
		iLocal_145++;
	}
	else
	{
		iLocal_145 = 0;
		iLocal_144++;
	}
	return false;
}

void func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!PED::DOES_GROUP_EXIST(Local_44[iVar0 /*5*/].f_4))
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (__LIB_0__::func_272(Local_44[iVar0 /*5*/][iVar1], 0))
				{
					if (iVar1 == 0)
					{
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_152))
						{
							iVar2 = iLocal_152;
						}
						else if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iLocal_41 /*35*/].f_5))
						{
							iVar2 = Global_1888801[iLocal_41 /*35*/].f_5;
						}
						else
						{
							iVar2 = __LIB_0__::func_559(iLocal_41);
						}
						bVar3 = true;
						TASK::TASK_POLICE(Local_44[iVar0 /*5*/][iVar1], bVar3);
						if (VOLUME::_DOES_VOLUME_EXIST(iVar2))
						{
							TASK::TASK_WANDER_IN_VOLUME(Local_44[iVar0 /*5*/][iVar1], iVar2, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
						}
						else
						{
							TASK::TASK_WANDER_IN_AREA(Local_44[iVar0 /*5*/][iVar1], ENTITY::GET_ENTITY_COORDS(Local_44[iVar0 /*5*/][iVar1], true, false), 100f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
						}
					}
					else
					{
						bVar4 = true;
						TASK::TASK_POLICE(Local_44[iVar0 /*5*/][iVar1], bVar4);
						if (__LIB_0__::func_272(Local_44[iVar0 /*5*/][0], 0))
						{
							TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(Local_44[iVar0 /*5*/][iVar1], Local_44[iVar0 /*5*/][0], 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
						}
						else
						{
							TASK::TASK_WANDER_IN_AREA(Local_44[iVar0 /*5*/][iVar1], ENTITY::GET_ENTITY_COORDS(Local_44[iVar0 /*5*/][iVar1], true, false), 100f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_28(int iParam0)
{
	return ZONE::_GET_MAP_ZONE_AT_COORDS(Global_36, iParam0);
}

int func_29()
{
	switch (iLocal_41)
	{
		case 76:
			return joaat("VALENTINE");
		case 26:
			return joaat("STRAWBERRY");
		case 105:
			return joaat("RHODES");
		case 38:
			return joaat("BLACKWATER");
		case 78:
			return joaat("ANNESBURG");
		default:
			break;
	}
	return -1;
}

void func_49(int iParam0)
{
	__LIB_14__::func_214(iParam0);
	WEAPON::REMOVE_ALL_PED_WEAPONS(iParam0, true, true);
	__LIB_14__::func_205(iParam0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	LAW::_0x819ADD5EF1742F47(iParam0, 32768);
	PED::SET_PED_CONFIG_FLAG(iParam0, 168, true);
}

var func_50()
{
	int iVar0[10];
	iVar0[0] = joaat("WORLD_HUMAN_STARE_STOIC");
	iVar0[1] = joaat("WORLD_HUMAN_SMOKE");
	iVar0[2] = joaat("WORLD_HUMAN_STAND_WAITING");
	iVar0[3] = joaat("WORLD_HUMAN_WAITING_IMPATIENT");
	iVar0[4] = joaat("WORLD_HUMAN_GUARD_SCOUT");
	iVar0[5] = joaat("WORLD_HUMAN_BADASS");
	iVar0[6] = joaat("WORLD_HUMAN_BADASS");
	iVar0[7] = joaat("WORLD_HUMAN_GUARD_MILITARY");
	iVar0[8] = joaat("WORLD_HUMAN_GUARD_MILITARY");
	iVar0[9] = joaat("WORLD_HUMAN_GUARD_MILITARY");
	return iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, 10)];
}

bool func_51(int iParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = iParam3;
	while (iVar1 != iParam3 || !bVar0)
	{
		*uParam1 = { func_70(iParam0, iVar1) };
		if (__LIB_0__::func_86(*uParam1))
		{
			return false;
		}
		if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(iParam2, *uParam1, true))
		{
			return true;
		}
		bVar0 = true;
		iVar1++;
		if (iVar1 >= 4)
		{
			iVar1 = 0;
		}
	}
	return false;
}

Vector3 func_70(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 76:
			switch (iParam1)
			{
				case 0:
					return -344.5539f, 730.0873f, 116.3921f;
				case 1:
					return -281.1094f, 847.3516f, 118.6537f;
				case 2:
					return -361.3619f, 809.3384f, 114.9999f;
				case 3:
					return -236.5398f, 702.7105f, 112.5291f;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					return -1761.082f, -398.9954f, 154.8396f;
				case 1:
					return -1795.016f, -366.7957f, 160.3465f;
				case 2:
					return -1834.661f, -433.5942f, 158.4428f;
				case 3:
					return -1796.619f, -448.2619f, 156.146f;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					return 1308.71f, -1258.847f, 76.3559f;
				case 1:
					return 1317.515f, -1303.441f, 75.2424f;
				case 2:
					return 1346.54f, -1354.946f, 77.4856f;
				case 3:
					return 1398.272f, -1314.57f, 76.6552f;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					return -798.7501f, -1213.198f, 42.2567f;
				case 1:
					return -768.3777f, -1338.455f, 42.4399f;
				case 2:
					return -822.5508f, -1393.462f, 42.6506f;
				case 3:
					return -885.0519f, -1336.306f, 42.1916f;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					return 2945.202f, 1362.138f, 43.0637f;
				case 1:
					return 2870.698f, 1465.912f, 67.2534f;
				case 2:
					return 2969.26f, 1400.698f, 42.9448f;
				case 3:
					return 2948.088f, 1281.233f, 43.626f;
				default:
					break;
			}
			break;
		case 57:
			switch (iParam1)
			{
				case 0:
					return 1484.599f, -7136.449f, 72.4505f;
				case 1:
					return 1493.948f, -7104.739f, 74.0429f;
				case 2:
					return 1440.728f, -7117.095f, 73.7227f;
				default:
					break;
			}
			break;
		default:
			return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

