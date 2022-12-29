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
	int iLocal_26 = 0;
	bool bLocal_27 = false;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	vector3 vLocal_31 = { 0f, 0f, 0f };
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37[5] = { 0, 0, 0, 0, 0 };
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<4> Local_45[8];
	struct<4> Local_78[8];
	var uLocal_111[5] = { 0, 0, 0, 0, 0 };
	var uLocal_117[5] = { 0, 0, 0, 0, 0 };
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	var uScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = 1;
	iLocal_24 = joaat("WORLD_HUMAN_PEE");
	iLocal_29 = joaat("POLICEWAGON01X");
	iLocal_30 = joaat("S_CAMPFIRE02_AMB");
	uScriptParam_0 = uScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while ((((!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 0, 1) && __LIB_14__::func_207()) && iLocal_14 < 7) && !__LIB_4__::func_497()) && !__LIB_1__::func_652())
	{
		func_6();
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
	int iVar1;
	int iVar2;
	ITEMSET::DESTROY_ITEMSET(iLocal_126);
	if (MISC::IS_INCIDENT_VALID(iLocal_127))
	{
		MISC::DELETE_INCIDENT(iLocal_127);
	}
	__LIB_2__::func_353(&uLocal_35, 1);
	__LIB_2__::func_353(&uLocal_36, 1);
	iVar1 = 0;
	while (iVar1 < iLocal_37)
	{
		if (__LIB_0__::func_272(iLocal_37[iVar1], 0))
		{
			if (iVar1 == 0)
			{
				iVar2 = -1;
			}
			else
			{
				iVar2 = -2;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_43, false, false))
			{
				TASK::TASK_ENTER_VEHICLE(0, iLocal_43, 20000, iVar2, 2f, 1, 0);
			}
			if (iVar1 == 0)
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(0, -1082130432 /* Float: -1f */, 0, 0);
			}
			else
			{
				TASK::TASK_STAND_STILL(0, 5000);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_37[iVar1], iVar0);
			__LIB_2__::func_788(&(iLocal_37[iVar1]), 1, 1, 1);
		}
		iVar1++;
	}
	__LIB_2__::func_161(vLocal_31, 10f, 5);
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_43);
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_44);
}

void func_6()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	if (__LIB_0__::func_264(&uLocal_123) > 35f && iLocal_14 <= 4)
	{
		iLocal_14 = 6;
	}
	switch (iLocal_14)
	{
		case 1:
			__LIB_1__::func_148(&uLocal_123);
			PED::_0xED9582B3DA8F02B4(5);
			iLocal_126 = ITEMSET::CREATE_ITEMSET(true);
			if (__LIB_14__::func_209() == 5)
			{
				iLocal_25 = 5;
			}
			else
			{
				iLocal_25 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
			}
			func_26();
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
			iLocal_14 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_28, false);
			STREAMING::REQUEST_MODEL(iLocal_29, false);
			STREAMING::REQUEST_MODEL(iLocal_30, false);
			if (((STREAMING::HAS_MODEL_LOADED(iLocal_28) && STREAMING::HAS_MODEL_LOADED(iLocal_29)) && STREAMING::HAS_MODEL_LOADED(iLocal_30)) && PED::_0x5E420FF293EE5472())
			{
				iLocal_14 = 3;
			}
			break;
		case 3:
			if (__LIB_14__::func_210(Global_36, &Local_15, &bVar1, 16, 1, 45f, 25f, 100f, 180f, 0))
			{
				vLocal_31 = { Local_15.f_3 };
				__LIB_3__::func_414(&uLocal_36, vLocal_31, 5f, 2, 2, 0);
				__LIB_3__::func_414(&uLocal_35, vLocal_31, 7f, 1, 61, 0);
				iLocal_14 = 4;
			}
			else if (bVar1)
			{
				__LIB_14__::func_204(&Local_15, 1, 0);
			}
			break;
		case 4:
			if (!bLocal_27)
			{
				func_30();
			}
			else
			{
				func_31();
				__LIB_2__::func_165(vLocal_31, 10f, 0, 0, 5);
				MISC::_CREATE_INCIDENT_WITH_ENTITIES(8, vLocal_31, iLocal_126, -1f, &iLocal_127);
				iVar2 = 0;
				while (iVar2 < iLocal_37)
				{
					if (__LIB_0__::func_272(iLocal_37[iVar2], 0))
					{
						if (iVar2 <= 1)
						{
							uVar3 = uLocal_117[iVar2];
						}
						else if (__LIB_1__::func_985())
						{
							uVar3 = uLocal_111[iVar2];
						}
						else
						{
							uVar3 = uLocal_117[iVar2];
						}
						TASK::_TASK_USE_SCENARIO_POINT(iLocal_37[iVar2], uVar3, 0, 0, false, true, 0, false, -1f, false);
					}
					iVar2++;
				}
				iLocal_14 = 5;
			}
			break;
		case 5:
			iVar4 = 0;
			while (iVar4 < iLocal_37)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_37[iVar4]))
				{
					PED::SET_PED_RESET_FLAG(iLocal_37[iVar4], 116, true);
					if (__LIB_0__::func_665(Global_35, iLocal_37[iVar4], 1, 1) > 200f)
					{
						iLocal_14 = 6;
						return;
					}
				}
				iVar4++;
			}
			break;
		case 6:
			func_1();
			iLocal_14 = 7;
			break;
	}
}

void func_26()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_78[iVar0 /*4*/] = iLocal_24;
		Local_45[iVar0 /*4*/] = iLocal_24;
		iVar0++;
	}
	Local_78[0 /*4*/] = joaat("WORLD_HUMAN_SMOKE");
	Local_78[0 /*4*/].f_1 = { 1.5f, 0f, 0f };
	Local_78[1 /*4*/] = joaat("WORLD_HUMAN_LEAN_BACK_WALL");
	Local_78[1 /*4*/].f_1 = { -1.35f, 0f, 0f };
	Local_78[2 /*4*/] = joaat("WORLD_HUMAN_STAND_WAITING");
	Local_78[2 /*4*/].f_1 = { 1f, -2.5f, 0f };
	Local_78[3 /*4*/] = joaat("WORLD_HUMAN_STAND_WAITING");
	Local_78[3 /*4*/].f_1 = { 1f, 6f, 0f };
	Local_78[4 /*4*/] = joaat("WORLD_HUMAN_WRITE_NOTEBOOK");
	Local_78[4 /*4*/].f_1 = { 2f, -2.5f, 0f };
	Local_78[5 /*4*/] = joaat("WORLD_HUMAN_BADASS");
	Local_78[5 /*4*/].f_1 = { 2f, 2.5f, 0f };
	Local_78[6 /*4*/] = joaat("WORLD_HUMAN_GUARD_SCOUT");
	Local_78[6 /*4*/].f_1 = { -2f, 2.5f, 0f };
	Local_78[7 /*4*/] = joaat("WORLD_HUMAN_SMOKE");
	Local_78[7 /*4*/].f_1 = { -2f, -2.5f, 0f };
	Local_45[0 /*4*/] = joaat("WORLD_HUMAN_SMOKE");
	Local_45[1 /*4*/] = joaat("WORLD_CAMP_FIRE_COOKING");
	Local_45[2 /*4*/] = joaat("WORLD_HUMAN_FIRE_TEND_KNEEL");
	Local_45[3 /*4*/] = joaat("WORLD_HUMAN_STAND_WAITING");
	Local_45[4 /*4*/] = joaat("WORLD_HUMAN_SMOKE_NERVOUS_STRESSED");
	Local_45[5 /*4*/] = joaat("WORLD_CAMP_FIRE_SIT_GROUND");
	Local_45[6 /*4*/] = joaat("WORLD_HUMAN_GUARD_SCOUT");
	Local_45[7 /*4*/] = joaat("WORLD_HUMAN_BADASS");
}

void func_30()
{
	vector3 vVar0;
	if (iLocal_26 < (iLocal_25 / 2))
	{
		vVar0.x = ((vLocal_31.x - 4f) + IntToFloat(iLocal_26));
	}
	else
	{
		vVar0.x = ((vLocal_31.x + 4f) - IntToFloat(iLocal_26));
	}
	vVar0.f_1 = (vLocal_31.y + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-3, 3)));
	__LIB_0__::func_634(&vVar0, 50, 10, 0);
	iLocal_37[iLocal_26] = __LIB_1__::func_545(iLocal_28, vVar0, (fLocal_34 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 60f)), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	LAW::_0x819ADD5EF1742F47(iLocal_37[iLocal_26], 2);
	LAW::_0x819ADD5EF1742F47(iLocal_37[iLocal_26], 16384);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_37[iLocal_26], 39, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_37[iLocal_26], 188, true);
	__LIB_5__::func_510(iLocal_37[iLocal_26], iLocal_126);
	iLocal_26++;
	if (iLocal_26 >= iLocal_25)
	{
		iLocal_26 = 0;
		bLocal_27 = true;
	}
}

void func_31()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	struct<4> Var7;
	int iVar11;
	vector3 vVar12;
	int iVar15;
	float fVar16;
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_31, fLocal_34, 2f, 0f, 0f) };
	__LIB_0__::func_634(&vVar0, 50, 10, 0);
	iLocal_43 = VEHICLE::CREATE_VEHICLE(iLocal_29, vVar0, (fLocal_34 + MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 30f)), true, true, false, false);
	iVar11 = 0;
	while (iVar11 < iLocal_25)
	{
		Var7 = { func_62(&Local_78) };
		vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, Var7.f_1) };
		__LIB_0__::func_634(&vVar3, 50, 10, 0);
		fVar6 = __LIB_2__::func_916(vVar0, vVar3);
		uLocal_117[iVar11] = TASK::CREATE_SCENARIO_POINT(Var7, vVar3, fVar6, 0, 0, 0);
		iVar11++;
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_31, fLocal_34, -3f, -3f, 0f) };
	__LIB_0__::func_634(&vVar0, 50, 10, 0);
	iLocal_44 = OBJECT::CREATE_OBJECT(iLocal_30, vVar0, true, true, false, false, true);
	iVar15 = 0;
	while (iVar15 < iLocal_25)
	{
		Var7 = { func_62(&Local_45) };
		fVar16 = 1.5f;
		vVar12 = { __LIB_1__::func_660(((360f / IntToFloat(iLocal_25)) * IntToFloat(iVar15))) };
		vVar3 = { vVar0 + vVar12 * Vector(fVar16, fVar16, fVar16) };
		fVar6 = __LIB_2__::func_916(vVar3, vVar0);
		__LIB_0__::func_634(&vVar3, 50, 10, 0);
		uLocal_111[iVar15] = TASK::CREATE_SCENARIO_POINT(Var7, vVar3, fVar6, 0, 0, 0);
		iVar15++;
	}
}

struct<4> func_62(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	iVar5 = 0;
	while (iVar5 < 8)
	{
		if ((*iParam0)[iVar4 /*4*/] != iLocal_24)
		{
			Var0 = { *(iParam0[iVar4 /*4*/]) };
			(*iParam0)[iVar4 /*4*/] = iLocal_24;
		}
		else
		{
			iVar4++;
			if (iVar4 >= 8)
			{
				iVar4 = 0;
			}
			iVar5++;
		}
	}
	return Var0;
}

