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
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	vector3 vLocal_63 = { 0f, 0f, 0f };
	int iLocal_66 = 0;
	bool bLocal_67 = false;
	int iScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bLocal_67 = true;
	iLocal_41 = iScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2();
	while (__LIB_14__::func_208(iLocal_41) && iLocal_42 != 7)
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	bool bVar0;
	int iVar1;
	LAW::_0x29CD4896ECB66C12();
	PLAYER::SET_POLICE_RADAR_BLIPS(false);
	MISC::ENABLE_DISPATCH_SERVICE(8, false);
	VOLUME::_DELETE_VOLUME(iLocal_56);
	bVar0 = __LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1);
	iVar1 = 0;
	while (iVar1 < iLocal_46)
	{
		if (__LIB_0__::func_272(iLocal_46[iVar1], 0))
		{
			if (!bVar0)
			{
				if (iVar1 == 0)
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_46[iVar1], 155, false);
				}
				else
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_46[iVar1], 156, false);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_46[iVar1], joaat("REL_CIVMALE"));
			}
			__LIB_2__::func_788(&(iLocal_46[iVar1]), 1, 0, 1);
		}
		iVar1++;
	}
	if (PED::DOES_GROUP_EXIST(iLocal_45))
	{
		PED::REMOVE_GROUP(iLocal_45);
	}
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iLocal_42 = 1;
	PED::_0xED9582B3DA8F02B4(9);
	switch (iLocal_41)
	{
		case 76:
			vLocal_60 = { -297.8979f, 783.4763f, 117.3506f };
			iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-266.4598f, 686.257f, 121.6327f, 0f, 0f, 29.92756f, 64.32985f, 90.86015f, 10f, "Main Town");
			iVar1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-301.8687f, 775.7222f, 117.88f, 0f, 0f, 111.0193f, 113.049f, 150.2262f, 41.61763f, "Stockyard");
			iLocal_56 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volTownMob Valentine Agg");
			VOLUME::_0x6E0D3C3F828DA773(iLocal_56, iVar0);
			VOLUME::_0x6E0D3C3F828DA773(iLocal_56, iVar1);
			break;
		case 26:
			vLocal_60 = { -1791.522f, -395.2781f, 159.2376f };
			iLocal_56 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1789.582f, -395.4769f, 153.0447f, 0f, 0f, -30.95195f, 70.53338f, 56.72839f, 31.99624f, "m_volTownMob Strawberry");
			break;
		case 105:
			vLocal_60 = { 1323.98f, -1305.5f, 75.625f };
			iLocal_56 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1334.686f, -1305.615f, 86f, 0f, 0f, 65.0729f, 82.5293f, 147.408f, 20f, "m_volTownMob Rhodes Agg");
			break;
		default:
			iLocal_56 = __LIB_0__::func_559(iLocal_41);
			vLocal_60 = { __LIB_2__::func_116(iLocal_41, 1) };
			break;
	}
	iVar2 = 0;
	__LIB_0__::func_495(&iVar2, 0);
	__LIB_0__::func_495(&iVar2, 29);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_56, 2, iVar2);
}

void func_4()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	switch (iLocal_42)
	{
		case 1:
			if (__LIB_0__::func_94(Global_35, vLocal_60, 1) < 100f)
			{
				iLocal_44 = __LIB_14__::func_202(0, 2, -156825994, 1, 0, 0f, 0f, 0f);
				switch (iLocal_41)
				{
					case 76:
						iLocal_43 = joaat("A_M_M_VALDEPUTYRESIDENT_01");
						break;
					case 26:
						iLocal_43 = joaat("A_M_M_STRDEPUTYRESIDENT_01");
						break;
					case 105:
						iLocal_43 = joaat("A_M_M_RHDDEPUTYRESIDENT_01");
						break;
					default:
						iLocal_43 = joaat("A_M_M_VALDEPUTYRESIDENT_01");
						break;
				}
				iLocal_42 = 2;
			}
			else
			{
				iLocal_42 = 6;
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_44, false);
			STREAMING::REQUEST_MODEL(iLocal_43, false);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_44) && STREAMING::HAS_MODEL_LOADED(iLocal_43)) && PED::_0x5E420FF293EE5472())
			{
				iLocal_42 = 4;
			}
			break;
		case 4:
			if (func_16())
			{
				func_17();
				__LIB_1__::func_148(&uLocal_57);
				iLocal_42 = 5;
			}
			else
			{
				iLocal_42 = 6;
			}
			break;
		case 5:
			if (bLocal_67)
			{
				LAW::_0x7EF2A2FE38D74456(__LIB_14__::func_211(1), 1);
			}
			fVar0 = 150f;
			iVar3 = 0;
			while (iVar3 < iLocal_46)
			{
				if (__LIB_0__::func_272(iLocal_46[iVar3], 0))
				{
					iVar2++;
					fVar1 = __LIB_0__::func_94(iLocal_46[iVar3], Global_36, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
				iVar3++;
			}
			if (iVar2 <= 2)
			{
				bLocal_67 = false;
				LAW::_0x7EF2A2FE38D74456(__LIB_14__::func_211(1), 0);
			}
			if (iVar2 <= 0 || fVar0 >= 150f)
			{
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < iLocal_46)
				{
					if (__LIB_0__::func_272(iLocal_46[iVar3], 0))
					{
						func_20(iLocal_46[iVar3]);
					}
					iVar3++;
				}
				iLocal_42 = 6;
			}
			break;
		case 6:
			iVar4 = 0;
			while (iVar4 < iLocal_46)
			{
				if (__LIB_0__::func_272(iLocal_46[iVar4], 0))
				{
					__LIB_2__::func_788(&(iLocal_46[iVar4]), 1, 1, 1);
				}
				iVar4++;
			}
			LAW::_0x7EF2A2FE38D74456(__LIB_14__::func_211(1), 0);
			iLocal_42 = 7;
			break;
	}
}

bool func_16()
{
	float fVar0;
	if (!func_26(iLocal_41, &vLocal_63, iLocal_43))
	{
		return false;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, vLocal_63);
	if (fVar0 > 10000f)
	{
		return false;
	}
	if (fVar0 < 1225f)
	{
		return false;
	}
	if (CAM::IS_SPHERE_VISIBLE(vLocal_63, 2f) || !ENTITY::WOULD_ENTITY_BE_OCCLUDED(iLocal_43, vLocal_63, true))
	{
		return false;
	}
	iLocal_66 = VOLUME::_CREATE_VOLUME_CYLINDER(vLocal_63, 0f, 0f, 0f, 3f, 3f, 3f);
	__LIB_3__::func_730(iLocal_66, 0, 0, 0, 0, 0);
	__LIB_4__::func_220(iLocal_66, 0);
	return true;
}

void func_17()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	if (!PED::DOES_GROUP_EXIST(iLocal_45))
	{
		iLocal_45 = PED::CREATE_GROUP(1);
		PED::SET_GROUP_FORMATION_SPACING(iLocal_45, 5f, 1f, 2f);
		PED::SET_GROUP_FORMATION(iLocal_45, 8);
		PED::_0x89E59DBD15E21177(iLocal_45, 0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_46)
	{
		vVar1 = { __LIB_3__::func_857(vLocal_63, 3f, 1f) };
		if (iVar0 == 0)
		{
			iLocal_46[iVar0] = __LIB_1__::func_545(iLocal_43, vVar1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_46[iVar0], 1, false);
			PED::SET_COMBAT_FLOAT(iLocal_46[iVar0], 48, 8f);
			if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_46[iVar0], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
			else
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_46[iVar0], joaat("WEAPON_REPEATER_CARBINE"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
		}
		else
		{
			iLocal_46[iVar0] = __LIB_1__::func_545(iLocal_44, vVar1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			if (__LIB_0__::func_272(iLocal_46[iVar0], 0))
			{
				if ((iVar0 % 4) == 0 && (__LIB_0__::func_41(__LIB_0__::func_23()) >= 22 || __LIB_0__::func_41(__LIB_0__::func_23()) <= 4))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_46[iVar0], joaat("WEAPON_REVOLVER_CATTLEMAN"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_46[iVar0], joaat("WEAPON_MELEE_TORCH"), 999, true, false, 1, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				else
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_46[iVar0], joaat("WEAPON_REPEATER_CARBINE"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
		}
		if (__LIB_0__::func_272(iLocal_46[iVar0], 0))
		{
			PED::_0xFC3DB99C8144CD81(iLocal_46[iVar0], iLocal_56, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_46[iVar0], 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_46[iVar0], 58, true);
			PED::_0x815C0074A1BC0D93(iLocal_46[iVar0], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_46[iVar0], joaat("REL_TOWN_MOB"));
			PED::REGISTER_TARGET(iLocal_46[iVar0], Global_35, 1);
			PED::SET_PED_ACCURACY(iLocal_46[iVar0], 60);
			PED::SET_PED_CONFIG_FLAG(iLocal_46[iVar0], 279, true);
			if (iVar0 == 0)
			{
				PED::SET_PED_AS_GROUP_LEADER(iLocal_46[iVar0], iLocal_45, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_46[iVar0], 155, true);
				COMPANION::_0xCBD9EC60495C728C(iLocal_45);
				COMPANION::_0x0F1CD8CA9E65D5F6(iLocal_45, joaat("CA_SEARCH"));
			}
			else
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_46[iVar0], iLocal_45);
				PED::SET_PED_CONFIG_FLAG(iLocal_46[iVar0], 156, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_46[iVar0], 152, true);
			}
			iVar4 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_46[iVar0]);
			MAP::_BLIP_SET_MODIFIER(iVar4, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
			MAP::_BLIP_SET_MODIFIER(iVar4, 1086257954);
			PED::_0x1E017404784AA6A3(iLocal_46[iVar0], joaat("TOWN_MOB"));
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_46[iVar0], 2);
			PED::SET_PED_COMBAT_RANGE(iLocal_46[iVar0], 1);
			PED::_0x9238A3D970BBB0A9(iLocal_46[iVar0], 2018638702);
			iVar5 = 0;
			__LIB_0__::func_495(&iVar5, 15);
			__LIB_0__::func_495(&iVar5, 16);
			COMPANION::_0xDEB369F6AD168C58(iLocal_46[iVar0], iVar5);
		}
		iVar0++;
	}
}

void func_20(int iParam0)
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return;
	}
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return;
	}
	TASK::TASK_SMART_FLEE_PED(iParam0, Global_35, 500f, -1, 0, 1077936128 /* Float: 3f */, 0);
	__LIB_3__::func_608(iParam0);
	__LIB_2__::func_788(&iParam0, 1, 1, 1);
}

bool func_26(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0[4];
	bool bVar13;
	float fVar14;
	int iVar15;
	float fVar16;
	bVar13 = false;
	switch (iParam0)
	{
		case 76:
			vVar0[0 /*3*/] = { -344.5539f, 730.0873f, 116.3921f };
			vVar0[1 /*3*/] = { -281.1094f, 847.3516f, 118.6537f };
			vVar0[2 /*3*/] = { -361.3619f, 809.3384f, 114.9999f };
			vVar0[3 /*3*/] = { -236.5398f, 702.7105f, 112.5291f };
			break;
		case 26:
			vVar0[0 /*3*/] = { -1761.082f, -398.9954f, 154.8396f };
			vVar0[1 /*3*/] = { -1795.016f, -366.7957f, 160.3465f };
			vVar0[2 /*3*/] = { -1834.661f, -433.5942f, 158.4428f };
			vVar0[3 /*3*/] = { -1796.619f, -448.2619f, 156.146f };
			break;
		case 105:
			vVar0[0 /*3*/] = { 1308.71f, -1258.847f, 76.3559f };
			vVar0[1 /*3*/] = { 1317.515f, -1303.441f, 75.2424f };
			vVar0[2 /*3*/] = { 1346.54f, -1354.946f, 77.4856f };
			vVar0[3 /*3*/] = { 1398.272f, -1314.57f, 76.6552f };
			break;
		default:
			*uParam1 = { __LIB_2__::func_116(iParam0, 1) };
			return false;
	}
	*uParam1 = { vVar0[0 /*3*/] };
	fVar14 = 999999f;
	iVar15 = 0;
	while (iVar15 < 4)
	{
		if (!CAM::IS_SPHERE_VISIBLE(vVar0[iVar15 /*3*/], 2f) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(iParam2, vVar0[iVar15 /*3*/], true))
		{
			fVar16 = BUILTIN::VDIST2(Global_36, vVar0[iVar15 /*3*/]);
			if (bVar13)
			{
				bVar13 = false;
				*uParam1 = { vVar0[iVar15 /*3*/] };
				fVar16 = fVar14;
			}
			else if (fVar16 < fVar14 && !fVar16 < 1225f)
			{
				*uParam1 = { vVar0[iVar15 /*3*/] };
				fVar16 = fVar14;
			}
		}
		else if (iVar15 == 0)
		{
			bVar13 = true;
		}
		iVar15++;
	}
	return true;
}

