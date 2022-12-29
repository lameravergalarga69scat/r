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
	var uLocal_15 = 20;
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
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	struct<4> Local_81 = { 0, 0, 0, 0 } ;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	vector3 vLocal_92[10] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_123[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	struct<15> Local_140[9];
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	var uScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uScriptParam_0 = uScriptParam_0;
	if ((PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514) || __LIB_2__::func_765(1, 0)) || __LIB_2__::func_765(8, 0))
	{
		func_2(1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	__LIB_5__::func_813(&uLocal_14, 0, 551, 812, 1008);
	__LIB_5__::func_813(&uLocal_14, 1, 1083, 1130, 1483);
	__LIB_5__::func_813(&uLocal_14, 2, 1491, 1854, 2359);
	__LIB_5__::func_813(&uLocal_14, 3, 2367, 2381, 2817);
	__LIB_5__::func_813(&uLocal_14, 4, 2825, 2833, 2851);
	__LIB_6__::func_268(&uLocal_14, 0);
	func_20(&Local_140);
	while (true)
	{
		BUILTIN::WAIT(0);
		func_21();
		__LIB_5__::func_803(&uLocal_14);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_123)
	{
		if (bParam0)
		{
			__LIB_2__::func_426(&(iLocal_123[iVar0]));
		}
		else
		{
			__LIB_2__::func_788(&(iLocal_123[iVar0]), 1, 0, 1);
		}
		iLocal_123[iVar0] = 0;
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_136);
}

void func_3()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_79))
	{
		iLocal_79 = VOLUME::_CREATE_VOLUME_AGGREGATE();
		VOLUME::_0xBCE668AAF83608BE(iLocal_79, 1533.805f, -7264.535f, 91.877f, 0f, 0f, 39f, 128f, 74f, 53f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_79, 1398.397f, -7289.793f, 85f, 0f, 0f, -26.99999f, 112f, 85f, 43f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_79, 1368.051f, -7198.679f, 59.2032f, 0f, 0f, -12f, 112f, 13f, 25f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_80))
	{
		iLocal_80 = VOLUME::_CREATE_VOLUME_AGGREGATE();
		VOLUME::_0xBCE668AAF83608BE(iLocal_80, 1448.072f, -7241.104f, 105.654f, 0f, 0f, 18f, 233f, 168f, 86f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_80, 1293.052f, -7122.601f, 123.6654f, 0f, 0f, 117f, 91f, 91f, 115f);
	}
	func_28(&Local_140);
}

int func_4()
{
	int iVar0;
	if ((__LIB_1__::func_898() != 8 || __LIB_2__::func_765(1, 0)) || __LIB_2__::func_765(8, 0))
	{
		return 4;
	}
	switch (iLocal_90)
	{
		case 0:
			iLocal_91 = MISC::GET_GAME_TIMER();
			iVar0 = 0;
			while (iVar0 < iLocal_123)
			{
				if (__LIB_0__::func_272(iLocal_123[iVar0], 0) && __LIB_0__::func_665(Global_35, iLocal_123[iVar0], 1, 1) < 120f)
				{
					__LIB_2__::func_788(&(iLocal_123[iVar0]), 1, 0, 1);
				}
				else
				{
					__LIB_2__::func_426(&(iLocal_123[iVar0]));
				}
				iLocal_123[iVar0] = 0;
				iVar0++;
			}
			func_20(&Local_140);
			return -1;
		case 1:
			if (PED::IS_PED_IN_COMBAT(Global_35, 0))
			{
				iLocal_90 = 2;
			}
			break;
	}
	return 1;
}

void func_7()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_123)
	{
		vLocal_92[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	iLocal_138 = 0;
	iLocal_139 = MISC::GET_GAME_TIMER();
}

int func_8()
{
	float fVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	if (iLocal_90 == 0)
	{
		return 0;
	}
	if (iLocal_138 >= 10)
	{
		return 2;
	}
	switch (iLocal_90)
	{
		case 1:
			return 2;
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_91) < 30000)
			{
				fVar0 = 100f;
				fVar1 = 120f;
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_91) < 55000)
			{
				fVar0 = 90f;
				fVar1 = 100f;
			}
			else
			{
				fVar0 = 70f;
				fVar1 = 90f;
			}
			if (__LIB_14__::func_210(Global_36, &Local_81, &bVar2, 19, 1, 270f, 40f, fVar0, fVar1, 0))
			{
				if (!__LIB_2__::func_157(iLocal_79, Local_81.f_3) && WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(Local_81.f_3, 0, &(Local_81.f_3.f_2)) != 1)
				{
					vLocal_92[iLocal_138 /*3*/] = { Local_81.f_3 };
				}
				__LIB_14__::func_204(&Local_81, 1, 0);
			}
			else if (bVar2)
			{
				__LIB_14__::func_204(&Local_81, 1, 0);
			}
			if (!__LIB_0__::func_86(vLocal_92[iLocal_138 /*3*/]))
			{
				iLocal_138++;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_139) > 7500 && !__LIB_0__::func_86(vLocal_92[0 /*3*/]))
			{
				iVar3 = 0;
				while (iVar3 < vLocal_92.x)
				{
					if (__LIB_0__::func_86(vLocal_92[iVar3 /*3*/]))
					{
						vLocal_92[iVar3 /*3*/] = { vLocal_92[0 /*3*/] };
					}
					iVar3++;
				}
				return 2;
			}
			break;
	}
	return -1;
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iLocal_136 = joaat("S_M_M_FUSSARHENCHMAN_01");
	PED::_0xED9582B3DA8F02B4(10);
	STREAMING::REQUEST_MODEL(iLocal_136, false);
	iLocal_134 = 0;
	iLocal_135 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_123)
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < Local_140)
		{
			if (Local_140[iVar2 /*15*/].f_1 != 0 && Local_140[iVar2 /*15*/].f_1 == iLocal_123[iVar0])
			{
				iVar1 = iVar2;
			}
			iVar2++;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_123[iVar0]))
		{
			if (iVar1 != -1)
			{
				Local_140[iVar1 /*15*/].f_1 = 0;
			}
			iLocal_123[iVar0] = 0;
			iLocal_135++;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_123[iVar0]) && PED::IS_PED_INJURED(iLocal_123[iVar0]))
		{
			if (iVar1 != -1)
			{
				Local_140[iVar1 /*15*/].f_1 = 0;
			}
			__LIB_2__::func_788(&(iLocal_123[iVar0]), 1, 0, 1);
			iLocal_123[iVar0] = 0;
			iLocal_135++;
		}
		else if (__LIB_0__::func_665(Global_35, iLocal_123[iVar0], 1, 1) > 200f)
		{
			if (iVar1 != -1)
			{
				Local_140[iVar1 /*15*/].f_1 = 0;
			}
			__LIB_2__::func_426(&(iLocal_123[iVar0]));
			iLocal_123[iVar0] = 0;
			iLocal_135++;
		}
		iVar0++;
	}
	if (iLocal_90 == 2)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_91) < 30000)
		{
			iLocal_135 = __LIB_0__::func_309(iLocal_135, 0, 2);
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_91) < 55000)
		{
			iLocal_135 = __LIB_0__::func_309(iLocal_135, 0, 4);
		}
		else
		{
			iLocal_135 = __LIB_0__::func_309(iLocal_135, 0, 6);
		}
	}
}

int func_11()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	if (iLocal_90 == 0)
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_136))
	{
		return -1;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		return -1;
	}
	if (!func_37())
	{
		return -1;
	}
	if (iLocal_134 >= iLocal_135)
	{
		return 3;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_123)
	{
		if (!__LIB_0__::func_272(iLocal_123[iVar0], 0))
		{
			switch (iLocal_90)
			{
				case 1:
					iVar4 = 0;
					while (iVar4 < Local_140)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_140[iVar4 /*15*/]) && func_38(&(Local_140[iVar4 /*15*/])))
						{
							vVar1 = { func_39(&(Local_140[iVar4 /*15*/])) };
							if (__LIB_0__::func_86(vVar1))
							{
							}
							else
							{
								iLocal_123[iVar0] = __LIB_1__::func_545(joaat("S_M_M_FUSSARHENCHMAN_01"), vVar1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_123[iVar0]))
								{
									__LIB_14__::func_205(iLocal_123[iVar0]);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_123[iVar0], 27, true);
									PED::_0x712B2C2B2471B493(iLocal_123[iVar0], joaat("DISABLED"));
									PED::SET_PED_ID_RANGE(iLocal_123[iVar0], (PED::_GET_PED_ID_RANGE(iLocal_123[iVar0]) + 20f));
									TASK::TASK_POLICE(iLocal_123[iVar0], true);
									TASK::_TASK_PATROL_2(iLocal_123[iVar0], Local_140[iVar4 /*15*/], 1, vVar1, 0, 1);
								}
								iLocal_134++;
								Local_140[iVar4 /*15*/].f_1 = iLocal_123[iVar0];
								return -1;
							}
						}
						iVar4++;
					}
					iLocal_134++;
					break;
				case 2:
					if (!CAM::IS_SPHERE_VISIBLE(vLocal_92[iVar0 /*3*/], 2f) || ENTITY::WOULD_ENTITY_BE_OCCLUDED(iLocal_136, vLocal_92[iVar0 /*3*/], true))
					{
						iLocal_123[iVar0] = __LIB_1__::func_545(joaat("S_M_M_FUSSARHENCHMAN_01"), vLocal_92[iVar0 /*3*/], 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						__LIB_14__::func_205(iLocal_123[iVar0]);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_123[iVar0], 27, true);
						PED::_0x712B2C2B2471B493(iLocal_123[iVar0], joaat("DISABLED"));
						iLocal_134++;
						return -1;
					}
					else
					{
						iLocal_134++;
					}
					break;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_13()
{
	iLocal_137 = MISC::GET_GAME_TIMER();
}

int func_14()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < iLocal_123)
	{
		if (__LIB_0__::func_272(iLocal_123[iVar2], 0))
		{
			switch (iLocal_90)
			{
				case 1:
					func_42(&Local_140, iLocal_123[iVar2]);
					break;
				case 2:
					vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Global_36, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f) };
					if ((MISC::GET_GAME_TIMER() - iLocal_91) < 55000)
					{
						if ((!__LIB_0__::func_491(iLocal_123[iVar2], 242628503) && !__LIB_0__::func_491(iLocal_123[iVar2], 780511057)) && !__LIB_0__::func_491(iLocal_123[iVar2], joaat("SCRIPT_TASK_POLICE")))
						{
							vVar6 = { __LIB_3__::func_857(vVar3, 15f, 10f) };
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar6, 3f, 20000, 0.25f, 7602180, 40000f);
							TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 1, 10f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 7602180);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_POLICE(iLocal_123[iVar2], true);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_123[iVar2], iVar0);
						}
					}
					else if (!__LIB_0__::func_491(iLocal_123[iVar2], 780511057) && !__LIB_0__::func_491(iLocal_123[iVar2], joaat("SCRIPT_TASK_POLICE")))
					{
						TASK::TASK_POLICE(iLocal_123[iVar2], true);
						TASK::TASK_COMBAT_PED(iLocal_123[iVar2], Global_35, 0, 0);
					}
					break;
			}
		}
		else
		{
			iVar1++;
		}
		iVar2++;
	}
	if (((MISC::GET_GAME_TIMER() - iLocal_137) > 10000 || iVar1 == 10) || iLocal_90 == 0)
	{
		return 0;
	}
	return -1;
}

int func_17()
{
	func_2(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return -1;
}

void func_20(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_46(iParam0, iVar0);
		iVar0++;
	}
}

void func_21()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	if ((VOLUME::_DOES_VOLUME_EXIST(iLocal_79) && VOLUME::_DOES_VOLUME_EXIST(iLocal_80)) && __LIB_0__::func_272(Global_35, 0))
	{
		if ((__LIB_1__::func_205(Global_35, iLocal_79, 1, 0) || __LIB_2__::func_774(40)) || __LIB_2__::func_774(41))
		{
			iLocal_277 = 0;
			iLocal_90 = 0;
		}
		else if (__LIB_1__::func_205(Global_35, iLocal_80, 1, 0))
		{
			iLocal_277 = 0;
			func_49(20);
			func_49(21);
			func_49(22);
			if (!PED::IS_PED_IN_COMBAT(Global_35, 0) && (MISC::GET_GAME_TIMER() - iLocal_91) < 15000)
			{
				iLocal_90 = 1;
			}
			else
			{
				iLocal_90 = 2;
			}
		}
		else
		{
			func_49(20);
			func_49(21);
			func_49(22);
			if (MISC::GET_GAME_TIMER() - iLocal_276) > MISC::GET_RANDOM_INT_IN_RANGE(2000, 5000)
			{
				vVar3 = { 0f, 0f, 0f };
				vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
				iVar12 = 9999;
				if (iLocal_277 == 0)
				{
					vVar3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.2f, -1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 1.2f), 0.5f };
					iVar12 = 50;
				}
				else if (iLocal_277 == 1)
				{
					vVar3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 1.2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 1.2f), 0.1f };
					iVar12 = 60;
				}
				else if (iLocal_277 == 2)
				{
					vVar3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.5f, -0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(1.5f, 0.5f), 0.3f };
					iVar12 = 20;
				}
				else if (iLocal_277 == 3)
				{
					vVar3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 1.2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 1.2f), 0f };
					iVar12 = 50;
				}
				else if (iLocal_277 == 4)
				{
					vVar3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.4f, 0.4f), 0f, 0f };
					iVar12 = 60;
				}
				vVar6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vVar0.z, 0f, -1f, 0f) };
				vVar9 = { PED::GET_PED_BONE_COORDS(Global_35, 21030, vVar3) };
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(vVar6, vVar9, iVar12, true, joaat("WEAPON_SNIPERRIFLE_CARCANO"), 0, true, true, -1f, false);
				iLocal_276 = MISC::GET_GAME_TIMER();
				iLocal_277++;
			}
		}
	}
	else
	{
		iLocal_90 = 0;
	}
}

void func_28(int iParam0)
{
	char* sVar0;
	(*iParam0)[0 /*15*/] = "miss_NorthField";
	(iParam0[0 /*15*/])->f_2[0 /*3*/] = { 1547.69f, -7061.763f, 80.98825f };
	(iParam0[0 /*15*/])->f_2[1 /*3*/] = { 1463.462f, -6979.851f, 72.17596f };
	(iParam0[0 /*15*/])->f_2[2 /*3*/] = { 1492.056f, -6945.109f, 75.02325f };
	(iParam0[0 /*15*/])->f_2[3 /*3*/] = { 1569.833f, -7010.37f, 84.61304f };
	sVar0 = "WORLD_HUMAN_GUARD_SCOUT";
	TASK::OPEN_PATROL_ROUTE((*iParam0)[0 /*15*/]);
	TASK::ADD_PATROL_ROUTE_NODE(0, sVar0, (iParam0[0 /*15*/])->f_2[0 /*3*/], (iParam0[0 /*15*/])->f_2[1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(1, sVar0, (iParam0[0 /*15*/])->f_2[1 /*3*/], (iParam0[0 /*15*/])->f_2[2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(2, sVar0, (iParam0[0 /*15*/])->f_2[2 /*3*/], (iParam0[0 /*15*/])->f_2[3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(3, sVar0, (iParam0[0 /*15*/])->f_2[3 /*3*/], (iParam0[0 /*15*/])->f_2[0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	(*iParam0)[1 /*15*/] = "miss_CastleFront";
	(iParam0[1 /*15*/])->f_2[0 /*3*/] = { 1423.832f, -7077.051f, 68.73053f };
	(iParam0[1 /*15*/])->f_2[1 /*3*/] = { 1332.573f, -7009.969f, 52.6828f };
	(iParam0[1 /*15*/])->f_2[2 /*3*/] = { 1394.447f, -6937.98f, 61.26836f };
	(iParam0[1 /*15*/])->f_2[3 /*3*/] = { 1466.745f, -7052.835f, 70.23048f };
	sVar0 = "WORLD_HUMAN_BADASS";
	TASK::OPEN_PATROL_ROUTE((*iParam0)[1 /*15*/]);
	TASK::ADD_PATROL_ROUTE_NODE(0, sVar0, (iParam0[1 /*15*/])->f_2[0 /*3*/], (iParam0[1 /*15*/])->f_2[1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(1, sVar0, (iParam0[1 /*15*/])->f_2[1 /*3*/], (iParam0[1 /*15*/])->f_2[2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(2, sVar0, (iParam0[1 /*15*/])->f_2[2 /*3*/], (iParam0[1 /*15*/])->f_2[3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(3, sVar0, (iParam0[1 /*15*/])->f_2[3 /*3*/], (iParam0[1 /*15*/])->f_2[0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	(*iParam0)[2 /*15*/] = "miss_ShoreLine";
	(iParam0[2 /*15*/])->f_2[0 /*3*/] = { 1276.878f, -6914.748f, 42.99872f };
	(iParam0[2 /*15*/])->f_2[1 /*3*/] = { 1269.852f, -6986.301f, 44.36502f };
	(iParam0[2 /*15*/])->f_2[2 /*3*/] = { 1252.001f, -7091.143f, 40.75356f };
	(iParam0[2 /*15*/])->f_2[3 /*3*/] = { 1211.104f, -7103.643f, 41.48995f };
	sVar0 = "WORLD_HUMAN_GUARD_SCOUT";
	TASK::OPEN_PATROL_ROUTE((*iParam0)[2 /*15*/]);
	TASK::ADD_PATROL_ROUTE_NODE(0, sVar0, (iParam0[2 /*15*/])->f_2[0 /*3*/], (iParam0[2 /*15*/])->f_2[1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(1, sVar0, (iParam0[2 /*15*/])->f_2[1 /*3*/], (iParam0[2 /*15*/])->f_2[2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(2, sVar0, (iParam0[2 /*15*/])->f_2[2 /*3*/], (iParam0[2 /*15*/])->f_2[3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(3, sVar0, (iParam0[2 /*15*/])->f_2[3 /*3*/], (iParam0[2 /*15*/])->f_2[0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	(*iParam0)[3 /*15*/] = "miss_SouthField";
	(iParam0[3 /*15*/])->f_2[0 /*3*/] = { 1309.89f, -7050.633f, 47.73157f };
	(iParam0[3 /*15*/])->f_2[1 /*3*/] = { 1282.163f, -7093.915f, 45.52501f };
	(iParam0[3 /*15*/])->f_2[2 /*3*/] = { 1397.532f, -7138.745f, 67.66041f };
	(iParam0[3 /*15*/])->f_2[3 /*3*/] = { 1411.206f, -7068.766f, 66.23284f };
	sVar0 = "WORLD_HUMAN_GUARD_SCOUT";
	TASK::OPEN_PATROL_ROUTE((*iParam0)[3 /*15*/]);
	TASK::ADD_PATROL_ROUTE_NODE(0, sVar0, (iParam0[3 /*15*/])->f_2[0 /*3*/], (iParam0[3 /*15*/])->f_2[1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(1, sVar0, (iParam0[3 /*15*/])->f_2[1 /*3*/], (iParam0[3 /*15*/])->f_2[2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(2, sVar0, (iParam0[3 /*15*/])->f_2[2 /*3*/], (iParam0[3 /*15*/])->f_2[3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(3, sVar0, (iParam0[3 /*15*/])->f_2[3 /*3*/], (iParam0[3 /*15*/])->f_2[0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	(*iParam0)[4 /*15*/] = "miss_CastleRidge";
	(iParam0[4 /*15*/])->f_2[0 /*3*/] = { 1683.376f, -7223.112f, 132.7217f };
	(iParam0[4 /*15*/])->f_2[1 /*3*/] = { 1623.999f, -7313.509f, 112.2114f };
	(iParam0[4 /*15*/])->f_2[2 /*3*/] = { 1577.847f, -7362.998f, 100.5893f };
	(iParam0[4 /*15*/])->f_2[3 /*3*/] = { 1657.111f, -7251.768f, 124.6736f };
	sVar0 = "WORLD_HUMAN_BADASS";
	TASK::OPEN_PATROL_ROUTE((*iParam0)[4 /*15*/]);
	TASK::ADD_PATROL_ROUTE_NODE(0, sVar0, (iParam0[4 /*15*/])->f_2[0 /*3*/], (iParam0[4 /*15*/])->f_2[1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(1, sVar0, (iParam0[4 /*15*/])->f_2[1 /*3*/], (iParam0[4 /*15*/])->f_2[2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(2, sVar0, (iParam0[4 /*15*/])->f_2[2 /*3*/], (iParam0[4 /*15*/])->f_2[3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(3, sVar0, (iParam0[4 /*15*/])->f_2[3 /*3*/], (iParam0[4 /*15*/])->f_2[0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	(*iParam0)[5 /*15*/] = "miss_TreeClose";
	(iParam0[5 /*15*/])->f_2[0 /*3*/] = { 1576.992f, -7361.878f, 100.3456f };
	(iParam0[5 /*15*/])->f_2[1 /*3*/] = { 1631.623f, -7419f, 120.9224f };
	(iParam0[5 /*15*/])->f_2[2 /*3*/] = { 1608.229f, -7481.153f, 128.0874f };
	(iParam0[5 /*15*/])->f_2[3 /*3*/] = { 1540.681f, -7432.281f, 113.7524f };
	sVar0 = "WORLD_HUMAN_GUARD_SCOUT";
	TASK::OPEN_PATROL_ROUTE((*iParam0)[5 /*15*/]);
	TASK::ADD_PATROL_ROUTE_NODE(0, sVar0, (iParam0[5 /*15*/])->f_2[0 /*3*/], (iParam0[5 /*15*/])->f_2[1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(1, sVar0, (iParam0[5 /*15*/])->f_2[1 /*3*/], (iParam0[5 /*15*/])->f_2[2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(2, sVar0, (iParam0[5 /*15*/])->f_2[2 /*3*/], (iParam0[5 /*15*/])->f_2[3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(3, sVar0, (iParam0[5 /*15*/])->f_2[3 /*3*/], (iParam0[5 /*15*/])->f_2[0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	(*iParam0)[6 /*15*/] = "miss_TreeFar";
	(iParam0[6 /*15*/])->f_2[0 /*3*/] = { 1506.142f, -7520.447f, 158.1895f };
	(iParam0[6 /*15*/])->f_2[1 /*3*/] = { 1620.642f, -7540.919f, 144.9812f };
	(iParam0[6 /*15*/])->f_2[2 /*3*/] = { 1542.976f, -7397.477f, 106.9753f };
	(iParam0[6 /*15*/])->f_2[3 /*3*/] = { 1470.417f, -7369.557f, 97.17374f };
	sVar0 = "WORLD_HUMAN_BADASS";
	TASK::OPEN_PATROL_ROUTE((*iParam0)[6 /*15*/]);
	TASK::ADD_PATROL_ROUTE_NODE(0, sVar0, (iParam0[6 /*15*/])->f_2[0 /*3*/], (iParam0[6 /*15*/])->f_2[1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(1, sVar0, (iParam0[6 /*15*/])->f_2[1 /*3*/], (iParam0[6 /*15*/])->f_2[2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(2, sVar0, (iParam0[6 /*15*/])->f_2[2 /*3*/], (iParam0[6 /*15*/])->f_2[3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(3, sVar0, (iParam0[6 /*15*/])->f_2[3 /*3*/], (iParam0[6 /*15*/])->f_2[0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	(*iParam0)[7 /*15*/] = "miss_RuinsRidge";
	(iParam0[7 /*15*/])->f_2[0 /*3*/] = { 1143.145f, -7259.119f, 73.90079f };
	(iParam0[7 /*15*/])->f_2[1 /*3*/] = { 1192.581f, -7217.897f, 68.34444f };
	(iParam0[7 /*15*/])->f_2[2 /*3*/] = { 1163.34f, -7129.541f, 50.03685f };
	(iParam0[7 /*15*/])->f_2[3 /*3*/] = { 1230.028f, -7148.012f, 52.79202f };
	sVar0 = "WORLD_HUMAN_GUARD_SCOUT";
	TASK::OPEN_PATROL_ROUTE((*iParam0)[7 /*15*/]);
	TASK::ADD_PATROL_ROUTE_NODE(0, sVar0, (iParam0[7 /*15*/])->f_2[0 /*3*/], (iParam0[7 /*15*/])->f_2[1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(1, sVar0, (iParam0[7 /*15*/])->f_2[1 /*3*/], (iParam0[7 /*15*/])->f_2[2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(2, sVar0, (iParam0[7 /*15*/])->f_2[2 /*3*/], (iParam0[7 /*15*/])->f_2[3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(3, sVar0, (iParam0[7 /*15*/])->f_2[3 /*3*/], (iParam0[7 /*15*/])->f_2[0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	(*iParam0)[8 /*15*/] = "miss_BeachTown";
	(iParam0[8 /*15*/])->f_2[0 /*3*/] = { 1208.154f, -7057.239f, 40.75641f };
	(iParam0[8 /*15*/])->f_2[1 /*3*/] = { 1144.686f, -7038.287f, 41.26281f };
	(iParam0[8 /*15*/])->f_2[2 /*3*/] = { 1142.318f, -7114.154f, 46.50215f };
	(iParam0[8 /*15*/])->f_2[3 /*3*/] = { 1223.22f, -7103.775f, 40.93461f };
	sVar0 = "WORLD_HUMAN_BADASS";
	TASK::OPEN_PATROL_ROUTE((*iParam0)[8 /*15*/]);
	TASK::ADD_PATROL_ROUTE_NODE(0, sVar0, (iParam0[8 /*15*/])->f_2[0 /*3*/], (iParam0[8 /*15*/])->f_2[1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(1, sVar0, (iParam0[8 /*15*/])->f_2[1 /*3*/], (iParam0[8 /*15*/])->f_2[2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(2, sVar0, (iParam0[8 /*15*/])->f_2[2 /*3*/], (iParam0[8 /*15*/])->f_2[3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_NODE(3, sVar0, (iParam0[8 /*15*/])->f_2[3 /*3*/], (iParam0[8 /*15*/])->f_2[0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
}

bool func_37()
{
	if (__LIB_1__::func_898() == 8)
	{
		if (__LIB_0__::func_296(0, 0, 1))
		{
			return false;
		}
		if (!__LIB_2__::func_410(39))
		{
			return false;
		}
		if (__LIB_2__::func_410(40) && __LIB_2__::func_410(41))
		{
			return false;
		}
		if (__LIB_6__::func_92(40))
		{
			return false;
		}
		if (__LIB_6__::func_92(41))
		{
			return false;
		}
		if (__LIB_0__::func_13(42))
		{
			return false;
		}
	}
	return true;
}

bool func_38(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	if (uParam0->f_1 != 0 && __LIB_0__::func_272(uParam0->f_1, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
		return false;
	}
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (__LIB_0__::func_94(Global_35, uParam0->f_2[iVar3 /*3*/], 1) < 200f)
		{
			return true;
		}
		iVar3++;
	}
	return false;
}

Vector3 func_39(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	int iVar4;
	float fVar5;
	fVar0 = 9999.99f;
	vVar1 = { 0f, 0f, 0f };
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (!CAM::IS_SPHERE_VISIBLE(uParam0->f_2[iVar4 /*3*/], 2f) || ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("S_M_M_FUSSARHENCHMAN_01"), uParam0->f_2[iVar4 /*3*/], true))
		{
			fVar5 = __LIB_0__::func_94(Global_35, uParam0->f_2[iVar4 /*3*/], 1);
			if (fVar5 < fVar0)
			{
				fVar0 = fVar5;
				vVar1 = { uParam0->f_2[iVar4 /*3*/] };
			}
		}
		iVar4++;
	}
	return vVar1;
}

void func_42(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	vVar0 = { 0f, 0f, 0f };
	iVar3 = -1;
	if ((!__LIB_0__::func_491(iParam1, -1253019028) && !__LIB_0__::func_491(iParam1, 780511057)) && !__LIB_0__::func_491(iParam1, joaat("SCRIPT_TASK_POLICE")))
	{
		iVar4 = 0;
		while (iVar4 < *iParam0)
		{
			if ((iParam0[iVar4 /*15*/])->f_1 == iParam1)
			{
				vVar0 = { func_39(iParam0[iVar4 /*15*/]) };
				iVar3 = iVar4;
			}
			iVar4++;
		}
		if (!__LIB_0__::func_86(vVar0))
		{
			TASK::TASK_POLICE(iParam1, true);
			TASK::_TASK_PATROL_2(iParam1, (*iParam0)[iVar3 /*15*/], 1, vVar0, 0, 1);
		}
	}
}

void func_46(int iParam0, int iParam1)
{
	(*iParam0)[iParam1 /*15*/] = "";
	(iParam0[iParam1 /*15*/])->f_1 = 0;
	(iParam0[iParam1 /*15*/])->f_2[0 /*3*/] = { 0f, 0f, 0f };
	(iParam0[iParam1 /*15*/])->f_2[1 /*3*/] = { 0f, 0f, 0f };
	(iParam0[iParam1 /*15*/])->f_2[2 /*3*/] = { 0f, 0f, 0f };
	(iParam0[iParam1 /*15*/])->f_2[3 /*3*/] = { 0f, 0f, 0f };
}

void func_49(int iParam0)
{
	if (__LIB_1__::func_959(&(Global_1425247.f_9), iParam0, 2))
	{
	}
}

