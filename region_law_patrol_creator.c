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
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	bool bLocal_26 = false;
	bool bLocal_27 = false;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33[5] = { 0, 0, 0, 0, 0 };
	int iLocal_39[5] = { 0, 0, 0, 0, 0 };
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = 1;
	uScriptParam_0 = uScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while ((((((!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 0, 1) && __LIB_14__::func_207()) && iLocal_14 < 7) && !__LIB_4__::func_497()) && !__LIB_1__::func_652()) && !(__LIB_1__::func_898() == 8 && (__LIB_0__::func_296(0, 0, 1) || __LIB_0__::func_12() == 59))) && !__LIB_2__::func_84())
	{
		func_10();
		BUILTIN::WAIT(0);
	}
	func_1();
	if (__LIB_14__::func_209() == 5)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(25000, 35000);
	}
	else if (__LIB_14__::func_209() >= 3)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(35000, 55000);
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(45000, 55000);
	}
	Global_1934266.f_2 = iVar0;
	Global_1934266.f_1 = MISC::GET_GAME_TIMER();
}

void func_1()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_33)
	{
		if (__LIB_0__::func_272(iLocal_33[iVar0], 0))
		{
			__LIB_2__::func_788(&(iLocal_33[iVar0]), 1, 1, 1);
			__LIB_2__::func_788(&(iLocal_39[iVar0]), 1, 1, 1);
		}
		iVar0++;
	}
	__LIB_0__::func_172(iLocal_46);
}

void func_10()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	vector3 vVar6;
	int iVar9;
	if (__LIB_0__::func_264(&uLocal_30) > 15f && iLocal_14 <= 4)
	{
		iLocal_14 = 6;
	}
	func_31();
	switch (iLocal_14)
	{
		case 1:
			__LIB_1__::func_148(&uLocal_30);
			PED::_0xED9582B3DA8F02B4(10);
			iLocal_24 = (BUILTIN::CEIL((BUILTIN::TO_FLOAT(__LIB_14__::func_209()) / 2f)) + MISC::GET_RANDOM_INT_IN_RANGE(0, 2));
			if (iLocal_24 > 5)
			{
				iLocal_24 = 5;
			}
			else if (iLocal_24 <= 0)
			{
				iLocal_24 = 1;
			}
			iVar0 = __LIB_2__::func_702();
			switch (iVar0)
			{
				case 0:
					iLocal_28 = joaat("S_M_M_AMBIENTLAWRURAL_01");
					break;
				case 1:
					iLocal_28 = joaat("S_M_M_AMBIENTLAWRURAL_01");
					break;
				case 2:
					iLocal_28 = joaat("S_M_M_AMBIENTLAWRURAL_01");
					break;
				case 3:
					iLocal_28 = joaat("S_M_M_AMBIENTLAWRURAL_01");
					break;
				case 5:
					iLocal_28 = joaat("S_M_M_FUSSARHENCHMAN_01");
					break;
				default:
					iLocal_28 = joaat("S_M_M_AMBIENTLAWRURAL_01");
					break;
			}
			iLocal_29 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
			iLocal_14 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_28, false);
			STREAMING::REQUEST_MODEL(iLocal_29, false);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_28) && STREAMING::HAS_MODEL_LOADED(iLocal_29)) && PED::_0x5E420FF293EE5472())
			{
				iLocal_14 = 3;
			}
			break;
		case 3:
			if (__LIB_11__::func_433())
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 14;
			}
			if (__LIB_16__::func_413(Global_36, &Local_15, &bVar1, iVar2, 1, 1127481344 /* Float: 180f */, 1101004800 /* Float: 20f */, 80f, 120f, 0))
			{
				if (!__LIB_1__::func_989(Local_15.f_3, 0, 0, 0) && WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(Local_15.f_3, 0, &(Local_15.f_3.f_2)) != 1)
				{
					iLocal_14 = 4;
				}
			}
			else if (bVar1)
			{
				__LIB_14__::func_204(&Local_15, 1, 0);
			}
			break;
		case 4:
			if (!bLocal_26 && !bLocal_27)
			{
				func_36();
			}
			else if (bLocal_26 && (!bLocal_27 && __LIB_1__::func_898() != 8))
			{
				func_37();
			}
			else
			{
				iVar4 = 0;
				while (iVar4 < iLocal_33)
				{
					__LIB_1__::func_571(iLocal_33[iVar4], iLocal_39[iVar4], 0, -1, 1);
					bVar5 = false;
					if (iVar4 == 0)
					{
						if (!PED::DOES_GROUP_EXIST(iLocal_45))
						{
							iLocal_45 = PED::CREATE_GROUP(0);
							PED::SET_GROUP_FORMATION(iLocal_45, 9);
						}
						bVar5 = true;
					}
					if (__LIB_0__::func_272(iLocal_33[iVar4], 0))
					{
						if (__LIB_11__::func_433())
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar3);
							iVar0 = __LIB_2__::func_702();
							if (__LIB_0__::func_630(iVar0))
							{
								vVar6 = { __LIB_3__::func_857(Global_40.f_358[iVar0 /*12*/].f_1, (Global_40.f_358[iVar0 /*12*/].f_4 - 3f), 10f) };
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar6, 1.75f, -1, 0.25f, 7602180, 40000f);
							}
							TASK::TASK_STAND_STILL(0, 3000);
							TASK::CLOSE_SEQUENCE_TASK(iVar3);
						}
						TASK::TASK_POLICE(iLocal_33[iVar4], true);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_33[iVar4], iVar3);
						__LIB_3__::func_506(&(iLocal_33[iVar4]), &iLocal_45, bVar5, 1, 1, 1, 0);
					}
					iVar4++;
				}
				iLocal_14 = 5;
			}
			break;
		case 5:
			iVar9 = 0;
			while (iVar9 < iLocal_33)
			{
				if (__LIB_0__::func_272(iLocal_33[iVar9], 0) && __LIB_0__::func_272(Global_35, 0))
				{
					if (__LIB_0__::func_665(Global_35, iLocal_33[iVar9], 1, 1) > 220f)
					{
						iLocal_14 = 6;
						return;
					}
				}
				iVar9++;
			}
			break;
		case 6:
			func_1();
			iLocal_14 = 7;
			break;
	}
}

void func_31()
{
	vector3 vVar0;
	struct<13> Var3;
	if (__LIB_1__::func_898() == 8)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_46))
		{
			iLocal_46 = VOLUME::_CREATE_VOLUME_AGGREGATE();
			VOLUME::_0x5B7D7BF36D2DE18B(iLocal_46, 1468.909f, -7225.962f, 86.862f, 0f, 0f, 18f, 748f, 853f, 473f);
		}
		else if (__LIB_0__::func_272(Global_35, 0))
		{
			if (!__LIB_1__::func_205(Global_35, iLocal_46, 1, 0))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_47) > 5000)
				{
					iLocal_47 = MISC::GET_GAME_TIMER();
					vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
					Var3.f_8 = -1082130432;
					Var3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vVar0.z, 0f, -1f, 0f) };
					Var3.f_3 = { PED::GET_PED_BONE_COORDS(Global_35, 21030, 0f, 0f, 0f) };
					Var3.f_7 = 1000f;
					Var3.f_12 = 1;
					Var3.f_6 = joaat("WEAPON_SNIPERRIFLE_CARCANO");
					MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var3);
				}
			}
		}
	}
}

void func_36()
{
	iLocal_33[iLocal_25] = __LIB_1__::func_545(iLocal_28, Local_15.f_3, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	__LIB_14__::func_205(iLocal_33[iLocal_25]);
	iLocal_25++;
	if (iLocal_25 >= iLocal_24)
	{
		iLocal_25 = 0;
		bLocal_26 = true;
	}
}

void func_37()
{
	iLocal_39[iLocal_25] = __LIB_1__::func_545(iLocal_29, Local_15.f_3, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	iLocal_25++;
	if (iLocal_25 >= iLocal_24)
	{
		bLocal_27 = true;
	}
}

