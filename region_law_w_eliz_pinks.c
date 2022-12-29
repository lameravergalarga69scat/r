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
	int iLocal_14 = 0;
	struct<4> Local_15 = { 0, 0, 0, 0 } ;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	vector3 vLocal_24 = { 0f, 0f, 0f };
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	bool bLocal_33 = false;
	int iLocal_34 = 0;
	int iLocal_35[3] = { 0, 0, 0 };
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_51[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_59 = 0;
	var uScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = 1;
	iLocal_31 = 10;
	iLocal_34 = joaat("S_M_M_PINLAW_01");
	uScriptParam_0 = uScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while ((((!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 0, 1) && __LIB_14__::func_207()) && !__LIB_4__::func_497()) && !__LIB_2__::func_774(13)) && __LIB_11__::func_120())
	{
		func_7();
		BUILTIN::WAIT(0);
	}
	func_1(1);
}

void func_1(bool bParam0)
{
	int iVar0;
	bLocal_32 = false;
	bLocal_33 = false;
	iLocal_30 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_43)
	{
		if (__LIB_0__::func_272(iLocal_43[iVar0], 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_43[iVar0], -1728.259f, -2578.3f, 64.1206f, 1.75f, 20000, 0.25f, 4, 40000f);
			if (bParam0)
			{
				__LIB_2__::func_788(&(iLocal_43[iVar0]), 1, 1, 1);
				__LIB_2__::func_788(&(iLocal_51[iVar0]), 1, 1, 1);
			}
			else
			{
				if ((__LIB_0__::func_665(Global_35, iLocal_43[iVar0], 1, 1) > 20f && (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_43[iVar0]) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_43[iVar0]))) || CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_2__::func_426(&(iLocal_43[iVar0]));
				}
				else
				{
					__LIB_2__::func_788(&(iLocal_43[iVar0]), 1, 1, 1);
				}
				if ((__LIB_0__::func_665(Global_35, iLocal_51[iVar0], 1, 1) > 20f && (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_51[iVar0]) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_51[iVar0]))) || CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_2__::func_426(&(iLocal_51[iVar0]));
				}
				else
				{
					__LIB_2__::func_788(&(iLocal_51[iVar0]), 1, 1, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_7()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	vector3 vVar13;
	float fVar16;
	vector3 vVar17;
	int iVar20;
	int iVar21;
	int iVar22;
	bVar0 = __LIB_1__::func_205(Global_35, iLocal_39, 1, 0);
	if (bVar0)
	{
		fLocal_27 = 250f;
		fLocal_28 = 150f;
		if (iLocal_14 > 2 && iLocal_14 != 0)
		{
			iLocal_14 = 0;
		}
	}
	else
	{
		fLocal_27 = 120f;
		fLocal_28 = 110f;
		if (iLocal_14 == 0)
		{
			iLocal_14 = 3;
		}
	}
	switch (iLocal_14)
	{
		case 1:
			__LIB_1__::func_148(&uLocal_40);
			iLocal_35[0] = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
			iLocal_35[1] = joaat("A_C_HORSE_MUSTANG_GRULLODUN");
			iLocal_35[2] = joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY");
			iLocal_29 = MISC::GET_RANDOM_INT_IN_RANGE(4, 7);
			PED::_0xED9582B3DA8F02B4(14);
			if (!__LIB_0__::func_474(120))
			{
				__LIB_10__::func_905(120, 0);
			}
			iLocal_14 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_34, false);
			STREAMING::REQUEST_MODEL(iLocal_35[0], false);
			STREAMING::REQUEST_MODEL(iLocal_35[1], false);
			STREAMING::REQUEST_MODEL(iLocal_35[2], false);
			if (((((STREAMING::HAS_MODEL_LOADED(iLocal_34) && STREAMING::HAS_MODEL_LOADED(iLocal_35[0])) && STREAMING::HAS_MODEL_LOADED(iLocal_35[1])) && STREAMING::HAS_MODEL_LOADED(iLocal_35[2])) && PED::_0x5E420FF293EE5472()) && __LIB_0__::func_264(&uLocal_40) > IntToFloat(iLocal_31))
			{
				if (__LIB_3__::func_751(13))
				{
					iLocal_39 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(iLocal_39, -846.6119f, -1065.891f, 54.10397f, 0f, 0f, 12.2577f, 134.1237f, 68.95397f, 53.79238f);
					VOLUME::_0x39816F6F94F385AD(iLocal_39, -957.0787f, -1000.424f, 57.02654f, 0f, 0f, 47.19107f, 141.1471f, 213.5969f, 75.77352f);
					VOLUME::_0x39816F6F94F385AD(iLocal_39, -1165.555f, -1038.077f, 70.67178f, 0f, 0f, 12.46235f, 390.3466f, 336.1672f, 80.72659f);
					iLocal_31 = 20;
				}
				iLocal_14 = 3;
			}
			break;
		case 3:
			if (bVar0)
			{
				if (__LIB_1__::func_985())
				{
					vVar2 = { -1048.537f, -1182.096f, 58.1195f };
				}
				else
				{
					vVar2 = { -1049.912f, -962.8728f, 61.4584f };
				}
			}
			else
			{
				vVar2 = { Global_36 };
			}
			fVar7 = __LIB_0__::func_264(&uLocal_40);
			if (fVar7 < 30f)
			{
				fVar6 = 90f;
			}
			else if (fVar7 < 110f)
			{
				fVar6 = 80f;
			}
			else
			{
				fVar6 = 70f;
			}
			if (__LIB_3__::func_751(13))
			{
				fVar5 = 180f;
			}
			else
			{
				fVar5 = 45f;
			}
			if (__LIB_14__::func_210(vVar2, &Local_15, &bVar1, 47, 1, fVar5, 1101004800 /* Float: 20f */, fVar6, (fLocal_27 - 10f), 0))
			{
				if (((!__LIB_1__::func_989(Local_15.f_3, 0, 0, 0) && !__LIB_2__::func_157(iLocal_39, Local_15.f_3)) && (__LIB_0__::func_979(Local_15.f_3) == 4 || __LIB_0__::func_979(Local_15.f_3) == 12)) && WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(Local_15.f_3, 0, &(Local_15.f_3.f_2)) != 1)
				{
					bVar9 = WATER::GET_WATER_HEIGHT(Global_36, &fVar8);
					if ((bVar9 && fVar8 < 0.3f) || !bVar9)
					{
						vLocal_24 = { Local_15.f_3 };
						iLocal_14 = 4;
					}
				}
				__LIB_14__::func_204(&Local_15, 1, 0);
			}
			else if (bVar1)
			{
				__LIB_14__::func_204(&Local_15, 1, 0);
			}
			break;
		case 4:
			if (!bLocal_32 && !bLocal_33)
			{
				func_37();
			}
			else if (bLocal_32 && !bLocal_33)
			{
				func_38(MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
			}
			else
			{
				iVar11 = 0;
				while (iVar11 < iLocal_43)
				{
					func_39(iVar11);
					__LIB_1__::func_571(iLocal_43[iVar11], iLocal_51[iVar11], 0, -1, 1);
					bVar12 = false;
					if (iVar11 == 0)
					{
						if (!PED::DOES_GROUP_EXIST(iLocal_59))
						{
							iLocal_59 = PED::CREATE_GROUP(0);
							PED::SET_GROUP_FORMATION(iLocal_59, 9);
						}
						bVar12 = true;
					}
					if (__LIB_0__::func_272(iLocal_43[iVar11], 0))
					{
						if (__LIB_0__::func_264(&uLocal_40) < fLocal_28 || bVar0)
						{
							if (bVar0)
							{
								vVar13 = { __LIB_3__::func_857(-1124.641f, -1140.979f, 63.6238f, 30f, 10f) };
							}
							else
							{
								fVar16 = 25f;
								vVar17 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Global_36, MISC::GET_RANDOM_FLOAT_IN_RANGE(-80f, 80f), 0f, fVar16, 0f) };
								vVar13 = { __LIB_3__::func_857(vVar17, (fVar16 - 10f), 10f) };
							}
							__LIB_0__::func_634(&vVar13, 50, 10, 0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar10);
							TASK::OPEN_SEQUENCE_TASK(&iVar10);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar13, 2.5f, -1, 0.25f, 0, 40000f);
							TASK::TASK_STAND_STILL(0, 3000);
							TASK::CLOSE_SEQUENCE_TASK(iVar10);
							TASK::TASK_POLICE(iLocal_43[iVar11], true);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_43[iVar11], iVar10);
						}
						else if (__LIB_0__::func_272(Global_35, 0))
						{
							TASK::TASK_COMBAT_PED(iLocal_43[iVar11], Global_35, 0, 0);
						}
						__LIB_3__::func_506(&(iLocal_43[iVar11]), &iLocal_59, bVar12, 1, 1, 1, 0);
					}
					iVar11++;
				}
				iLocal_14 = 5;
			}
			break;
		case 5:
			iVar22 = 0;
			while (iVar22 < iLocal_43)
			{
				if (__LIB_0__::func_272(iLocal_43[iVar22], 0))
				{
					if (__LIB_0__::func_665(Global_35, iLocal_43[iVar22], 1, 1) > (fLocal_27 + 20f))
					{
						iVar20++;
					}
					else
					{
						iVar21 = iLocal_43[iVar22];
					}
				}
				iVar22++;
			}
			if (iVar20 >= iLocal_29)
			{
				func_1(0);
				iLocal_14 = 3;
				return;
			}
			if (__LIB_0__::func_264(&uLocal_40) > fLocal_28 && !bVar0)
			{
				if (__LIB_0__::func_272(iVar21, 0) && __LIB_0__::func_272(Global_35, 0))
				{
					TASK::TASK_COMBAT_PED(iVar21, Global_35, 0, 0);
				}
			}
			break;
	}
}

void func_37()
{
	if (!CAM::IS_SPHERE_VISIBLE(vLocal_24, 5f))
	{
		iLocal_43[iLocal_30] = __LIB_1__::func_545(iLocal_34, vLocal_24, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		iLocal_30++;
		if (iLocal_30 >= iLocal_29)
		{
			iLocal_30 = 0;
			bLocal_32 = true;
		}
	}
}

void func_38(int iParam0)
{
	if (!CAM::IS_SPHERE_VISIBLE(vLocal_24, 5f))
	{
		iLocal_51[iLocal_30] = __LIB_1__::func_545(iLocal_35[iParam0], vLocal_24, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		TASK::_0x9DE63896B176EA94(iLocal_51[iLocal_30], 0);
		iLocal_30++;
		if (iLocal_30 >= iLocal_29)
		{
			bLocal_33 = true;
		}
	}
}

void func_39(int iParam0)
{
	if (!__LIB_0__::func_272(iLocal_43[iParam0], 0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(iLocal_43[iParam0], 188, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_43[iParam0], 527, true);
	TASK::_0x9DE63896B176EA94(iLocal_43[iParam0], 0);
	LAW::_0x819ADD5EF1742F47(iLocal_43[iParam0], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_43[iParam0], 27, true);
	PED::_0x712B2C2B2471B493(iLocal_43[iParam0], joaat("DISABLED"));
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_43[iParam0], false);
	WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_43[iParam0], joaat("GROUP_SNIPER"), 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
}

