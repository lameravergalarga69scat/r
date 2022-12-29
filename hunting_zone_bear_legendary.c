#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	float fLocal_8 = 0f;
	float fLocal_9 = 0f;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	struct<631> Var0;
	fLocal_8 = 1f;
	fLocal_9 = 1f;
	Var0 = -1;
	Var0.f_7 = 1077936128;
	Var0.f_8 = 1120403456;
	Var0.f_9 = 1120403456;
	Var0.f_10 = 1132068864;
	Var0.f_12.f_3 = 1061158912;
	Var0.f_12.f_4 = 1066611507;
	Var0.f_12.f_6 = 1;
	Var0.f_31 = 15;
	Var0.f_572 = 7;
	Var0.f_580 = 7;
	Var0.f_588 = 7;
	Var0.f_596 = 7;
	Var0.f_630 = 5;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (Var0.f_622)
		{
			if (__LIB_0__::func_23() > Global_40.f_9319[Var0 /*4*/].f_2)
			{
				Global_40.f_9319[Var0 /*4*/].f_2 = __LIB_0__::func_23();
				__LIB_2__::func_670(&(Global_40.f_9319[Var0 /*4*/].f_2), 0, 0, 24, 0, 0, 0, 0);
			}
		}
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
			Var0.f_619 = 1;
		}
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		func_3(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		func_3(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (func_4())
	{
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		func_3(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_627 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, true) };
	while (!__LIB_9__::func_871(&Var0) && !func_6(&Var0))
	{
		BUILTIN::WAIT(0);
	}
	func_3(&Var0);
	SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
}

void func_3(var uParam0)
{
	int iVar0;
	if (uParam0->f_626)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "isInspectingGround", false, -1);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		uParam0->f_626 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), uParam0->f_12);
			PLAYER::_0x00B156AFEBCC5AE0(uParam0->f_12);
		}
		if (!uParam0->f_621 || ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_12) || uParam0->f_619)
			{
				PED::DELETE_PED(&(uParam0->f_12));
			}
			else
			{
				ENTITY::_SET_ENTITY_HEALTH(uParam0->f_12, 0, Global_35);
				Global_40.f_9319[*uParam0 /*4*/].f_1 = 1;
				MAP::_MAP_DISCOVERY_SET_ENABLED(__LIB_9__::func_845(*uParam0));
				MAP::_0xD8C7162AB2E2AF45(__LIB_9__::func_846(*uParam0));
				__LIB_0__::func_703(0, -1);
				if (!__LIB_0__::func_474(466))
				{
					__LIB_9__::func_847(__LIB_9__::func_866(18, 0, 0, 0), 466, 40000);
				}
			}
		}
		else
		{
			if (uParam0->f_619 && uParam0->f_11 == 8)
			{
				if (__LIB_3__::func_996(Global_35) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_264(Global_35)) == uParam0->f_12)
				{
					__LIB_9__::func_879(*uParam0, 1);
					__LIB_9__::func_869(__LIB_9__::func_848(*uParam0), uParam0->f_12.f_1, ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true, false), 1, 0);
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("TRACKED"), __LIB_9__::func_848(*uParam0)), 1);
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("KILLED"), __LIB_9__::func_848(*uParam0)), 1);
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("SKINNED"), __LIB_9__::func_848(*uParam0)), 1);
					STATS::_0xA59590050F80FF2E(__LIB_9__::func_848(*uParam0), 0, 1, 0);
					ENTITY::_0x6BCF5F3D8FFE988D(uParam0->f_12, 1);
					TASK::_0xA21AA2F0C2180125(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_12), 0);
					PERSISTENCE::_0x9D16896F0DBE78A2(ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true, false), 1f);
				}
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
		}
	}
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_12.f_9))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam0->f_12.f_9);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_3))
	{
		__LIB_1__::func_544(uParam0->f_3);
		VOLUME::_DELETE_VOLUME(uParam0->f_3);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2))
	{
		__LIB_1__::func_544(uParam0->f_2);
		VOLUME::_DELETE_VOLUME(uParam0->f_2);
		__LIB_0__::func_484(&(uParam0->f_5), uParam0->f_4, 0);
	}
	if (*uParam0 == 15)
	{
		FLOCK::_0x706B434FEFAD6A24(-1f);
		FLOCK::_0xA881F5C77A560906(-1f);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_6));
	}
	iVar0 = 0;
	while (iVar0 < __LIB_0__::func_585())
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31[iVar0 /*36*/].f_1))
		{
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(uParam0->f_31[iVar0 /*36*/].f_1));
			if (uParam0->f_31[iVar0 /*36*/].f_9 != -1)
			{
				GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_31[iVar0 /*36*/].f_9), 1);
			}
			if (MAP::DOES_BLIP_EXIST(uParam0->f_31[iVar0 /*36*/]))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_31[iVar0 /*36*/]));
			}
			if (uParam0->f_31[iVar0 /*36*/].f_3 != 0)
			{
				ENTITY::_0xD2B9C78537ED5759(uParam0->f_31[iVar0 /*36*/].f_3);
			}
		}
		__LIB_0__::func_172(uParam0->f_31[iVar0 /*36*/].f_10);
		__LIB_1__::func_748(&(uParam0->f_31[iVar0 /*36*/].f_16), 1, 1);
		iVar0++;
	}
	__LIB_9__::func_849(uParam0);
}

bool func_4()
{
	return __LIB_2__::func_774(58);
}

bool func_6(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_42(uParam0))
			{
				uParam0->f_11 = 1;
			}
			uParam0->f_613 = MISC::GET_GAME_TIMER();
			break;
		case 1:
			if (__LIB_9__::func_870(uParam0))
			{
				uParam0->f_11 = 9;
			}
			else
			{
				uParam0->f_11 = 2;
			}
			break;
		case 2:
			if (uParam0->f_623)
			{
				PED::_0xED9582B3DA8F02B4(func_44(0) + 1);
			}
			else
			{
				PED::_0xED9582B3DA8F02B4(1);
			}
			__LIB_9__::func_850(uParam0);
			uParam0->f_11 = 3;
			break;
		case 3:
			if (PED::_0x5E420FF293EE5472() && __LIB_9__::func_851(uParam0))
			{
				uParam0->f_11 = 4;
			}
			break;
		case 4:
			if (__LIB_9__::func_868(uParam0))
			{
				uParam0->f_11 = 5;
			}
			break;
		case 5:
			if (func_48(uParam0))
			{
				uParam0->f_11 = 6;
			}
			break;
		case 6:
			if (func_49(uParam0))
			{
				uParam0->f_11 = 7;
			}
			break;
		case 7:
			if (!uParam0->f_622)
			{
				func_50(uParam0);
			}
			func_51(uParam0);
			if (uParam0->f_621)
			{
				func_52(uParam0);
			}
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
				{
					if (ENTITY::IS_ENTITY_DEAD(uParam0->f_12))
					{
						Global_40.f_9319[*uParam0 /*4*/].f_1 = 1;
						MAP::_MAP_DISCOVERY_SET_ENABLED(__LIB_9__::func_845(*uParam0));
						MAP::_0xD8C7162AB2E2AF45(__LIB_9__::func_846(*uParam0));
						__LIB_0__::func_703(0, -1);
						if (!__LIB_0__::func_474(466))
						{
							__LIB_9__::func_847(__LIB_9__::func_866(18, 0, 0, 0), 466, 40000);
						}
						__LIB_9__::func_849(uParam0);
						if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
						{
							MAP::REMOVE_BLIP(&(uParam0->f_6));
						}
						uParam0->f_11 = 8;
					}
					else if ((uParam0->f_679 != 0 && !uParam0->f_680) && PED::IS_PED_IN_COMBAT(uParam0->f_12, 0))
					{
						AUDIO::_0xDC2F83A0612CA34D(uParam0->f_679);
						uParam0->f_680 = 1;
					}
					else if (uParam0->f_680)
					{
						if (!PED::IS_PED_IN_COMBAT(uParam0->f_12, 0))
						{
							AUDIO::_0x6AB944DF68B512D3(uParam0->f_679);
							uParam0->f_680 = 0;
						}
					}
				}
			}
			break;
		case 8:
			if (__LIB_8__::func_964(__LIB_0__::func_38(joaat("KILLED"), __LIB_9__::func_848(*uParam0))) < 1)
			{
				__LIB_0__::func_15(__LIB_0__::func_38(joaat("KILLED"), __LIB_9__::func_848(*uParam0)), 1);
			}
			if (__LIB_9__::func_852(uParam0))
			{
				__LIB_0__::func_703(0, -1);
				uParam0->f_11 = 9;
			}
			break;
		case 9:
			return true;
	}
	return false;
}

bool func_42(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 2;
	uParam0->f_10 = 300f;
	uParam0->f_572[0] = joaat("BROKENSTICKS_AA");
	uParam0->f_572[1] = joaat("P_BEARSCAT01X");
	uParam0->f_580[0] = 4;
	uParam0->f_580[1] = 0;
	uParam0->f_588[0] = 0;
	uParam0->f_588[1] = 0;
	uParam0->f_596[0] = 1;
	uParam0->f_596[1] = 1;
	uParam0->f_12.f_1 = joaat("A_C_BEAR_01");
	uParam0->f_12.f_5 = 1;
	uParam0->f_12.f_8 = joaat("BEAR_LEGENDARY");
	return true;
}

int func_44(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

bool func_48(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < __LIB_0__::func_585())
	{
		iVar1 = 0;
		while (iVar1 < func_44(iVar0))
		{
			func_98(uParam0, iVar0, iVar1);
			uParam0->f_618++;
			iVar1++;
		}
		iVar0++;
	}
	return true;
}

bool func_49(var uParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[16];
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	uParam0->f_12.f_10 = { uParam0->f_627 + Vector(-20f, 0f, 0f) };
	uParam0->f_12.f_13 = { 0f, 0f, func_99(0) };
	if (uParam0->f_12.f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
		{
			if (uParam0->f_12.f_5)
			{
				uParam0->f_12 = PED::_0xEAF682A14F8E5F53(uParam0->f_12.f_9, uParam0->f_12.f_10, 0, 1, 1, 0, 0);
			}
			else
			{
				uParam0->f_12 = __LIB_1__::func_545(uParam0->f_12.f_1, uParam0->f_12.f_10, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
			}
			func_101(uParam0);
			return false;
		}
	}
	uVar1 = uParam0->f_12.f_3;
	iVar0 = 0;
	while (iVar0 < __LIB_0__::func_585())
	{
		if (uParam0->f_31[iVar0 /*36*/].f_4 != 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_31[iVar0 /*36*/].f_1) && uParam0->f_31[iVar0 /*36*/].f_28 < 3)
			{
				if (uParam0->f_31[iVar0 /*36*/].f_6 == 0)
				{
					uParam0->f_31[iVar0 /*36*/].f_1 = OBJECT::CREATE_OBJECT(uParam0->f_31[iVar0 /*36*/].f_4, uParam0->f_31[iVar0 /*36*/].f_17, true, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uParam0->f_31[iVar0 /*36*/].f_1, uParam0->f_31[iVar0 /*36*/].f_23);
					ENTITY::_0x9587913B9E772D29(uParam0->f_31[iVar0 /*36*/].f_1, 0);
				}
				else if (uParam0->f_31[iVar0 /*36*/].f_6 == 1)
				{
					uParam0->f_31[iVar0 /*36*/].f_1 = OBJECT::CREATE_OBJECT(uParam0->f_31[iVar0 /*36*/].f_4, uParam0->f_31[iVar0 /*36*/].f_17, true, true, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_31[iVar0 /*36*/].f_1, 0f, 90f, uParam0->f_31[iVar0 /*36*/].f_23, 0, false);
				}
				else if (uParam0->f_31[iVar0 /*36*/].f_6 == 2)
				{
					uParam0->f_31[iVar0 /*36*/].f_2 = __LIB_1__::func_545(uParam0->f_31[iVar0 /*36*/].f_4, uParam0->f_31[iVar0 /*36*/].f_17, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31[iVar0 /*36*/].f_2))
					{
						__LIB_1__::func_864(uParam0->f_31[iVar0 /*36*/].f_2, 0, 0);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_31[iVar0 /*36*/].f_2, 186, false);
						PED::APPLY_PED_DAMAGE_PACK(uParam0->f_31[iVar0 /*36*/].f_2, &(uParam0->f_605), 1f, 1f);
						PERSISTENCE::_0xF5622FA6ACFCA7DB(uParam0->f_31[iVar0 /*36*/].f_2, MISC::GET_RANDOM_INT_IN_RANGE(40, 50));
						PERSISTENCE::_0xDC0A1F0ECEC9F0C0(uParam0->f_31[iVar0 /*36*/].f_2, 1.25f);
						MISC::_0x674B90BE1115846D(uParam0->f_31[iVar0 /*36*/].f_2, 1);
					}
					uParam0->f_31[iVar0 /*36*/].f_1 = __LIB_0__::func_57(uParam0->f_31[iVar0 /*36*/].f_2);
				}
				else if (uParam0->f_31[iVar0 /*36*/].f_6 == 3)
				{
					uParam0->f_31[iVar0 /*36*/].f_9 = GRAPHICS::_0xFA50F79257745E74(uParam0->f_31[iVar0 /*36*/].f_17, uVar1, 4, -1, 0);
					uParam0->f_31[iVar0 /*36*/].f_1 = OBJECT::CREATE_OBJECT(uParam0->f_31[iVar0 /*36*/].f_4, uParam0->f_31[iVar0 /*36*/].f_17, true, true, false, false, true);
				}
				else if (uParam0->f_31[iVar0 /*36*/].f_6 == 4)
				{
					uParam0->f_31[iVar0 /*36*/].f_9 = GRAPHICS::_0xFA50F79257745E74(uParam0->f_31[iVar0 /*36*/].f_17, uVar1, 2, -1, 0);
					uParam0->f_31[iVar0 /*36*/].f_1 = OBJECT::CREATE_OBJECT(uParam0->f_31[iVar0 /*36*/].f_4, uParam0->f_31[iVar0 /*36*/].f_17, true, true, false, false, true);
				}
				else if (uParam0->f_31[iVar0 /*36*/].f_6 == 5)
				{
					if (uParam0->f_31[iVar0 /*36*/].f_3 == 0)
					{
						uParam0->f_31[iVar0 /*36*/].f_3 = ENTITY::_0x6F3068258A499E52(uParam0->f_31[iVar0 /*36*/].f_4, uParam0->f_31[iVar0 /*36*/].f_17, 11);
					}
					else if (ENTITY::_0x1FF441D7954F8709(uParam0->f_31[iVar0 /*36*/].f_3))
					{
						uParam0->f_31[iVar0 /*36*/].f_1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_31[iVar0 /*36*/].f_3));
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31[iVar0 /*36*/].f_1))
				{
					if (uParam0->f_31[iVar0 /*36*/].f_26 == 0)
					{
						uParam0->f_31[iVar0 /*36*/] = MAP::_BLIP_ADD_FOR_COORD(1538154804, uParam0->f_31[iVar0 /*36*/].f_17);
					}
					StringCopy(&cVar2, "hzt_", 16);
					StringIntConCat(&cVar2, *uParam0, 16);
					StringConCat(&cVar2, "_clue_", 16);
					StringIntConCat(&cVar2, uParam0->f_31[iVar0 /*36*/].f_27, 16);
					StringConCat(&cVar2, "_", 16);
					StringIntConCat(&cVar2, uParam0->f_31[iVar0 /*36*/].f_26, 16);
					uParam0->f_31[iVar0 /*36*/].f_29 = { cVar2 };
					fVar13 = (MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_31[iVar0 /*36*/].f_20, uParam0->f_31[iVar0 /*36*/].f_17, true) / 4f);
					vVar4 = { uParam0->f_31[iVar0 /*36*/].f_20 - uParam0->f_31[iVar0 /*36*/].f_17 };
					vVar7 = { __LIB_3__::func_803(vVar4, 1.5f) };
					vVar10 = { __LIB_3__::func_803(vVar4, fVar13) };
					uParam0->f_630[0 /*8*/] = { uParam0->f_31[iVar0 /*36*/].f_17 };
					uParam0->f_630[1 /*8*/] = { uParam0->f_31[iVar0 /*36*/].f_17 + vVar7 };
					uParam0->f_630[2 /*8*/] = { uParam0->f_630[1 /*8*/] + vVar10 };
					uParam0->f_630[3 /*8*/] = { uParam0->f_630[2 /*8*/] + vVar10 };
					uParam0->f_630[4 /*8*/] = { uParam0->f_630[3 /*8*/] + vVar7 };
					__LIB_0__::func_634(&(uParam0->f_630[1 /*8*/]), 50, 10, 0);
					__LIB_0__::func_634(&(uParam0->f_630[2 /*8*/]), 50, 10, 0);
					__LIB_0__::func_634(&(uParam0->f_630[3 /*8*/]), 50, 10, 0);
					__LIB_0__::func_634(&(uParam0->f_630[4 /*8*/]), 50, 10, 0);
					TASK::_0x5C885E0978B6AD60(__LIB_0__::func_57(&(uParam0->f_31[iVar0 /*36*/].f_29)), &(uParam0->f_630), 5, 0);
				}
				uParam0->f_31[iVar0 /*36*/].f_28++;
				return false;
			}
		}
		iVar0++;
	}
	__LIB_1__::func_240(199, 1);
	if (!Global_40.f_9319[*uParam0 /*4*/])
	{
		MAP::_0xD8C7162AB2E2AF45(__LIB_9__::func_845(*uParam0));
		Global_40.f_9319[*uParam0 /*4*/] = 1;
	}
	return true;
}

void func_50(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	fVar0 = 9999f;
	iVar1 = 0;
	bVar3 = PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID());
	iVar2 = 0;
	while (iVar2 < __LIB_0__::func_585())
	{
		fVar4 = 0f;
		if (uParam0->f_31[iVar2 /*36*/].f_13)
		{
			if (MAP::DOES_BLIP_EXIST(uParam0->f_31[iVar2 /*36*/]))
			{
				MAP::_BLIP_SET_MODIFIER(uParam0->f_31[iVar2 /*36*/], -1186550032);
			}
			fVar4 = __LIB_1__::func_992(Global_35, uParam0->f_31[iVar2 /*36*/].f_17, 1);
			if (fVar4 < fVar0)
			{
				fVar0 = fVar4;
				iVar1 = iVar2;
			}
		}
		iVar2++;
	}
	MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_31[iVar1 /*36*/], -1186550032);
	if (bVar3)
	{
		MAP::_BLIP_SET_MODIFIER(uParam0->f_31[iVar1 /*36*/], 1641478980);
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_31[iVar1 /*36*/], 1641478980);
	}
}

void func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	int iVar9;
	bVar5 = false;
	bVar6 = PED::IS_PED_ON_MOUNT(Global_35);
	iVar3 = 5000;
	iVar1 = 3000;
	iVar2 = 1500;
	PED::SET_PED_RESET_FLAG(Global_35, 211, true);
	iVar0 = 0;
	while (iVar0 < uParam0->f_618)
	{
		if (!uParam0->f_31[iVar0 /*36*/].f_14)
		{
			bVar7 = true;
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31[iVar0 /*36*/].f_1))
			{
				fVar8 = __LIB_0__::func_232(Global_35, uParam0->f_31[iVar0 /*36*/].f_1, 1);
				if ((uParam0->f_31[iVar0 /*36*/].f_13 && fVar8 < 2500f) && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_31[iVar0 /*36*/].f_1))
				{
					if (!bVar5)
					{
						bVar5 = true;
					}
					if (!uParam0->f_31[iVar0 /*36*/].f_11)
					{
						if (uParam0->f_620)
						{
							PLAYER::_0x6ECFC621A168424C(uParam0->f_12, uParam0->f_31[iVar0 /*36*/].f_1, uParam0->f_31[iVar0 /*36*/].f_5, 0);
						}
						else
						{
							PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), uParam0->f_31[iVar0 /*36*/].f_1, 0);
							PLAYER::_0x6ECFC621A168424C(uParam0->f_31[iVar0 /*36*/].f_1, uParam0->f_31[iVar0 /*36*/].f_1, uParam0->f_31[iVar0 /*36*/].f_5, 0);
						}
						uParam0->f_31[iVar0 /*36*/].f_11 = 1;
					}
					if (fVar8 < 36f)
					{
						if (!uParam0->f_31[iVar0 /*36*/].f_12)
						{
							PED::_0xF9CBD46433E36713(Global_35, uParam0->f_31[iVar0 /*36*/].f_1, 0f, 0f, 0f, 7.5f, 6f, 15f, 20f, "TRACKING_ZONE_CLUE");
							PAD::SET_PAD_SHAKE(0, 200, 125);
							uParam0->f_31[iVar0 /*36*/].f_12 = 1;
						}
					}
					if ((fVar8 < 6.25f && !__LIB_6__::func_934()) && !bVar6)
					{
						bVar7 = false;
						if (!__LIB_0__::func_139(uParam0->f_31[iVar0 /*36*/].f_16))
						{
							uParam0->f_31[iVar0 /*36*/].f_16 = __LIB_2__::func_403("INSPECT_GENERIC", joaat("INPUT_CONTEXT_Y"), uParam0->f_31[iVar0 /*36*/].f_1, 2, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
							__LIB_2__::func_450(uParam0->f_31[iVar0 /*36*/].f_16, 2.5f, 0);
							__LIB_9__::func_332(&(uParam0->f_31[iVar0 /*36*/].f_16), uParam0->f_31[iVar0 /*36*/].f_1);
						}
						else if (uParam0->f_31[iVar0 /*36*/].f_8 == 5)
						{
							HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 2.5f, 2, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_31[iVar0 /*36*/].f_1), __LIB_0__::func_57(&(uParam0->f_31[iVar0 /*36*/].f_31)), 2);
						}
						else
						{
							HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_31[iVar0 /*36*/].f_1, 2.5f, 2, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_31[iVar0 /*36*/].f_1), __LIB_0__::func_57(&(uParam0->f_31[iVar0 /*36*/].f_31)), 2);
						}
						if (__LIB_0__::func_567(uParam0->f_31[iVar0 /*36*/].f_16, 1))
						{
							if (PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID()))
							{
								PLAYER::_0x64FF4BF9AF59E139(PLAYER::PLAYER_ID(), 1);
							}
							if (uParam0->f_614 == 0)
							{
								__LIB_1__::func_265(Global_35, "HUNTING_START", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
							}
							__LIB_1__::func_221(uParam0->f_31[iVar0 /*36*/].f_16, 0, 1);
							uParam0->f_31[iVar0 /*36*/].f_24 = 0f;
							uParam0->f_31[iVar0 /*36*/].f_14 = 1;
							uParam0->f_31[iVar0 /*36*/].f_25 = MISC::GET_GAME_TIMER();
							PLAYER::_0xDC5E09D012D759C4(uParam0->f_12, uParam0->f_31[iVar0 /*36*/].f_1, uParam0->f_31[iVar0 /*36*/].f_5);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
							uParam0->f_626 = 1;
							PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "isInspectingGround", true, -1);
							TASK::OPEN_SEQUENCE_TASK(&iVar4);
							TASK::TASK_TURN_PED_TO_FACE_COORD(0, uParam0->f_31[iVar0 /*36*/].f_17, iVar1);
							TASK::CLOSE_SEQUENCE_TASK(iVar4);
							if (!PED::IS_PED_ON_MOUNT(Global_35))
							{
								if (!PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
								{
									PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
								}
							}
							TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar4);
							TASK::CLEAR_SEQUENCE_TASK(&iVar4);
							func_115(uParam0, uParam0->f_31[iVar0 /*36*/].f_27);
						}
					}
					else if (uParam0->f_31[iVar0 /*36*/].f_12 && fVar8 > 64f)
					{
						uParam0->f_31[iVar0 /*36*/].f_12 = 0;
					}
					if (bVar7 && __LIB_0__::func_139(uParam0->f_31[iVar0 /*36*/].f_16))
					{
						__LIB_1__::func_748(&(uParam0->f_31[iVar0 /*36*/].f_16), 1, 1);
					}
				}
				else if (uParam0->f_31[iVar0 /*36*/].f_11)
				{
					if (uParam0->f_31[iVar0 /*36*/].f_12)
					{
						uParam0->f_31[iVar0 /*36*/].f_12 = 0;
					}
					if (uParam0->f_620)
					{
						PLAYER::_0xDC5E09D012D759C4(uParam0->f_12, uParam0->f_31[iVar0 /*36*/].f_1, uParam0->f_31[iVar0 /*36*/].f_5);
					}
					else
					{
						PLAYER::_0xDC5E09D012D759C4(uParam0->f_31[iVar0 /*36*/].f_1, uParam0->f_31[iVar0 /*36*/].f_1, uParam0->f_31[iVar0 /*36*/].f_5);
						PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), uParam0->f_31[iVar0 /*36*/].f_1);
					}
					if (__LIB_0__::func_139(uParam0->f_31[iVar0 /*36*/].f_16))
					{
						__LIB_1__::func_748(&(uParam0->f_31[iVar0 /*36*/].f_16), 1, 1);
					}
					uParam0->f_31[iVar0 /*36*/].f_11 = 0;
				}
			}
		}
		else if (uParam0->f_31[iVar0 /*36*/].f_15)
		{
			if (uParam0->f_31[iVar0 /*36*/].f_8 == 5)
			{
				HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 2.5f, 2, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_31[iVar0 /*36*/].f_1), __LIB_0__::func_57(&(uParam0->f_31[iVar0 /*36*/].f_33)), 2);
			}
			else
			{
				HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_31[iVar0 /*36*/].f_1, 2.5f, 2, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_31[iVar0 /*36*/].f_1), __LIB_0__::func_57(&(uParam0->f_31[iVar0 /*36*/].f_33)), 2);
			}
			iVar9 = MISC::GET_GAME_TIMER();
			if ((iVar9 - uParam0->f_31[iVar0 /*36*/].f_25) > iVar3 || ((iVar9 - uParam0->f_31[iVar0 /*36*/].f_25) > iVar1 && !__LIB_0__::func_163(Global_35, 242628503)))
			{
				__LIB_9__::func_859((uParam0->f_614 - 1), *uParam0);
				__LIB_1__::func_748(&(uParam0->f_31[iVar0 /*36*/].f_16), 1, 1);
				TASK::TASK_CLEAR_LOOK_AT(Global_35);
				PLAYER::_0x2AF423D6ECB2C485(PLAYER::PLAYER_ID(), uParam0->f_12);
				PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "isInspectingGround", false, -1);
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				uParam0->f_626 = 0;
				uParam0->f_31[iVar0 /*36*/].f_15 = 0;
			}
			else if ((iVar9 - uParam0->f_31[iVar0 /*36*/].f_25) > iVar2 && uParam0->f_31[iVar0 /*36*/].f_13)
			{
				__LIB_9__::func_855(uParam0->f_12, __LIB_0__::func_57(&(uParam0->f_31[iVar0 /*36*/].f_29)), 1, 0.762f, 1053609165 /* Float: 0.4f */, 0, 2f, 1);
				if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_31[iVar0 /*36*/].f_10))
				{
					__LIB_3__::func_142(uParam0->f_31[iVar0 /*36*/].f_10);
				}
				uParam0->f_31[iVar0 /*36*/].f_13 = 0;
			}
		}
		iVar0++;
	}
	if (uParam0->f_614 > 0)
	{
		if (!uParam0->f_624)
		{
			if (!uParam0->f_625)
			{
				if (__LIB_9__::func_856(*uParam0))
				{
					if (Global_1935496.f_31 == joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"))
					{
						uParam0->f_625 = 1;
					}
				}
				else if (Global_1935496.f_31 == joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"))
				{
					uParam0->f_625 = 1;
				}
			}
			else if (__LIB_1__::func_992(Global_35, uParam0->f_12.f_10, 1) > 400f && !CAM::IS_SPHERE_VISIBLE(uParam0->f_12.f_10, 1f))
			{
				uParam0->f_621 = 1;
				func_121(uParam0);
				uParam0->f_624 = 1;
			}
		}
	}
}

void func_52(var uParam0)
{
	int iVar0;
	float fVar1;
	if (uParam0->f_12.f_2 != 1)
	{
		if (((__LIB_1__::func_992(uParam0->f_12, uParam0->f_12.f_16, 1) >= 2500f && __LIB_0__::func_232(Global_35, uParam0->f_12, 1) > 400f) && !PED::IS_PED_INJURED(uParam0->f_12)) && !__LIB_0__::func_163(uParam0->f_12, 242628503))
		{
			func_122(uParam0);
			uParam0->f_12.f_2 = 1;
			fVar1 = 3f;
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (*uParam0 == 0)
			{
				TASK::TASK_STAND_STILL(0, 2000);
				fVar1 = 1f;
			}
			TASK::_TASK_FLEE_FROM_PED(0, Global_35, uParam0->f_12.f_16, 25f, -1, 1024, fVar1, 0);
			TASK::TASK_WANDER_IN_AREA(0, uParam0->f_12.f_16, 15f, 1.5f, 3f, 1);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_12, iVar0);
		}
	}
	else if (__LIB_1__::func_992(uParam0->f_12, uParam0->f_12.f_16, 1) >= 100f)
	{
		uParam0->f_12.f_2 = 0;
	}
}

void func_98(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_31[uParam0->f_618 /*36*/].f_4 = uParam0->f_572[iParam1];
	uParam0->f_31[uParam0->f_618 /*36*/].f_5 = 0;
	uParam0->f_31[uParam0->f_618 /*36*/].f_17 = { func_158(iParam1, iParam2) };
	uParam0->f_31[uParam0->f_618 /*36*/].f_23 = func_159(iParam1, iParam2);
	uParam0->f_31[uParam0->f_618 /*36*/].f_26 = iParam1;
	uParam0->f_31[uParam0->f_618 /*36*/].f_27 = iParam2;
	if (uParam0->f_580[iParam1] == 0)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_8 = 0;
		StringCopy(&(uParam0->f_31[uParam0->f_618 /*36*/].f_31), "ATZ_INS_EXC", 16);
		uParam0->f_31[uParam0->f_618 /*36*/].f_33 = { func_160() };
	}
	else if (uParam0->f_580[iParam1] == 1)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_8 = 1;
		StringCopy(&(uParam0->f_31[uParam0->f_618 /*36*/].f_31), "ATZ_INS_FUR", 16);
		uParam0->f_31[uParam0->f_618 /*36*/].f_33 = { __LIB_9__::func_861() };
	}
	else if (uParam0->f_580[iParam1] == 2)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_8 = 2;
		StringCopy(&(uParam0->f_31[uParam0->f_618 /*36*/].f_31), "ATZ_INS_KLR", 16);
		uParam0->f_31[uParam0->f_618 /*36*/].f_33 = { __LIB_9__::func_862() };
	}
	else if (uParam0->f_580[iParam1] == 3)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_8 = 3;
		StringCopy(&(uParam0->f_31[uParam0->f_618 /*36*/].f_31), "ATZ_INS_BLD", 16);
		uParam0->f_31[uParam0->f_618 /*36*/].f_33 = { __LIB_9__::func_863() };
	}
	else if (uParam0->f_580[iParam1] == 4)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_8 = 4;
		StringCopy(&(uParam0->f_31[uParam0->f_618 /*36*/].f_31), "ATZ_INS_BRK", 16);
		uParam0->f_31[uParam0->f_618 /*36*/].f_33 = { __LIB_9__::func_864() };
	}
	else if (uParam0->f_580[iParam1] == 5)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_8 = 5;
		StringCopy(&(uParam0->f_31[uParam0->f_618 /*36*/].f_31), "ATZ_INS_TRB", 16);
		uParam0->f_31[uParam0->f_618 /*36*/].f_33 = { __LIB_9__::func_865() };
	}
	if (uParam0->f_588[iParam1] == 0)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_6 = 0;
	}
	else if (uParam0->f_588[iParam1] == 1)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_6 = 1;
	}
	else if (uParam0->f_588[iParam1] == 2)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_6 = 2;
	}
	else if (uParam0->f_588[iParam1] == 3)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_6 = 3;
	}
	else if (uParam0->f_588[iParam1] == 4)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_6 = 4;
	}
	else if (uParam0->f_588[iParam1] == 5)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_6 = 5;
	}
	if (iParam1 == 0)
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_13 = 1;
		uParam0->f_31[uParam0->f_618 /*36*/].f_15 = 1;
		__LIB_3__::func_139(&(uParam0->f_31[uParam0->f_618 /*36*/].f_10), uParam0->f_31[uParam0->f_618 /*36*/].f_17, 0f, 0f, 0f, uParam0->f_7, uParam0->f_7, uParam0->f_7, "volHerbBlocking - Legendary Tracking Clue");
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_31[uParam0->f_618 /*36*/].f_10))
		{
			__LIB_3__::func_241(uParam0->f_31[uParam0->f_618 /*36*/].f_10, 1);
		}
	}
	if (iParam1 + 1 < __LIB_0__::func_585())
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_20 = { func_158(iParam1 + 1, iParam2) };
	}
	else
	{
		uParam0->f_31[uParam0->f_618 /*36*/].f_20 = { func_168(iParam2) };
	}
}

float func_99(int iParam0)
{
	return func_169(0, iParam0);
}

void func_101(var uParam0)
{
	PED::_SET_PED_SCALE(uParam0->f_12, uParam0->f_12.f_4);
	PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(uParam0->f_12, func_171());
	PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), uParam0->f_12, 0);
	FLOCK::_0x8B6F0F59B1B99801(uParam0->f_12, 2);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 305, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 306, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 186, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 465, true);
	PERSISTENCE::_0xDC0A1F0ECEC9F0C0(uParam0->f_12, 1E+08f);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, true);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_12, false);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_12, false);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_12, true);
	PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_12, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 34, true);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 112, 100f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 81, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 82, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 85, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 83, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 84, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 89, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 90, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 105, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 106, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 78, 20f);
	uParam0->f_620 = 1;
	if (uParam0->f_1 == 2)
	{
		if (*uParam0 == 15)
		{
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 137, 0f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 138, 0f);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 39, true);
			FLOCK::_0x706B434FEFAD6A24(1f);
			FLOCK::_0xA881F5C77A560906(3f);
		}
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 139, 0.75f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 88, 50f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 91, 40f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 10, 30f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 74, 1f);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 32, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 54, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 80, true);
	}
	else if (uParam0->f_1 == 3)
	{
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 139, 0.75f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 88, 50f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 91, 40f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 10, 30f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 74, 1f);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 16, false);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 12, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 32, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 54, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 80, true);
	}
	else if (uParam0->f_1 == 1)
	{
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 74, 0f);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_678))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_12, uParam0->f_678, 0f);
	}
}

void func_115(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	iVar1 = __LIB_0__::func_585();
	iVar2 = 210;
	fVar3 = (uParam0->f_9 + 20f);
	if (uParam0->f_614 == 0)
	{
		uParam0->f_615 = uParam1;
		uParam0->f_616 = uParam1;
		uParam0->f_12.f_10 = { func_168(uParam0->f_615) };
		uParam0->f_12.f_16 = { func_168(uParam0->f_615) };
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_12.f_10, 0f, 0f, 0f, 50f, 50f, 50f);
		uParam0->f_5 = __LIB_1__::func_391(uParam0->f_4, 0, 0, 0);
		func_182(uParam0);
		if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
		{
			uParam0->f_6 = MAP::_BLIP_ADD_FOR_RADIUS(-108658760, uParam0->f_627, uParam0->f_9);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "ATZ_AREA_BLIP");
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_677))
		{
			AUDIO::SET_AMBIENT_ZONE_STATE(uParam0->f_677, true, true);
		}
		__LIB_1__::func_309(-1, 0, 0, 0, 0);
		__LIB_1__::func_924();
		__LIB_0__::func_77(iVar2, 0, 1);
		__LIB_1__::func_544(uParam0->f_3);
		uParam0->f_2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_627, 0f, 0f, 0f, fVar3, fVar3, fVar3, "HuntingZoneRestriction");
		__LIB_2__::func_261(uParam0->f_3, "Hunting Zone Target", 0, 0, 0, 0, -1082130432 /* Float: -1f */);
		uParam0->f_622 = 1;
	}
	uParam0->f_614++;
	if (!uParam0->f_614 >= __LIB_0__::func_585())
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (uParam0->f_614 == uParam0->f_31[iVar0 /*36*/].f_26 && uParam0->f_615 == uParam0->f_31[iVar0 /*36*/].f_27)
			{
				__LIB_3__::func_139(&(uParam0->f_31[iVar0 /*36*/].f_10), uParam0->f_31[iVar0 /*36*/].f_17, 0f, 0f, 0f, uParam0->f_7, uParam0->f_7, uParam0->f_7, "volHerbBlocking - Legendary Tracking Clue");
				if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_31[iVar0 /*36*/].f_10))
				{
					__LIB_3__::func_241(uParam0->f_31[iVar0 /*36*/].f_10, 1);
				}
				uParam0->f_31[iVar0 /*36*/].f_13 = 1;
				uParam0->f_31[iVar0 /*36*/].f_15 = 1;
			}
			else if (uParam0->f_31[iVar0 /*36*/].f_14 == 0)
			{
				uParam0->f_31[iVar0 /*36*/].f_13 = 0;
				uParam0->f_31[iVar0 /*36*/].f_15 = 0;
			}
			iVar0++;
		}
	}
	else
	{
		uParam0->f_621 = 1;
		if (!uParam0->f_624)
		{
			func_121(uParam0);
			uParam0->f_624 = 1;
		}
	}
}

void func_121(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		func_186(uParam0->f_12, uParam0->f_12.f_10, func_99(uParam0->f_615), 2, 1073741824 /* Float: 2f */);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_12, true);
		PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_12, true);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_12, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_12, false);
		TASK::TASK_WANDER_IN_AREA(uParam0->f_12, uParam0->f_12.f_10, 10f, 1.5f, 3f, 1);
	}
}

void func_122(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_9__::func_844(0, __LIB_0__::func_16(), uParam0->f_616);
	uParam0->f_616 = iVar0;
	uParam0->f_12.f_16 = { func_168(iVar0) };
}

Vector3 func_158(int iParam0, int iParam1)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 0:
			vVar0 = { func_202(1, iParam1) };
			break;
		case 1:
			vVar0 = { func_202(2, iParam1) };
			break;
	}
	return vVar0;
}

float func_159(int iParam0, int iParam1)
{
	float fVar0;
	switch (iParam0)
	{
		case 0:
			fVar0 = func_169(1, iParam1);
			break;
		case 1:
			fVar0 = func_169(2, iParam1);
			break;
	}
	return fVar0;
}

Vector3 func_160()
{
	return __LIB_1__::func_344("ATZ_INS_EXC_BE");
}

Vector3 func_168(int iParam0)
{
	return func_202(0, iParam0);
}

float func_169(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -116f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -118f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -87.615f;
			}
			break;
	}
	return 0f;
}

int func_171()
{
	return -1561087211 /* GXTEntry: "Legendary Grizzly Bear" */;
}

void func_182(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_0__::func_585())
	{
		if (uParam0->f_31[iVar0 /*36*/].f_26 == 0)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_31[iVar0 /*36*/].f_10))
			{
				__LIB_3__::func_142(uParam0->f_31[iVar0 /*36*/].f_10);
			}
			if (MAP::DOES_BLIP_EXIST(uParam0->f_31[iVar0 /*36*/]))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_31[iVar0 /*36*/]));
			}
		}
		iVar0++;
	}
}

void func_186(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == __LIB_0__::func_57(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (__LIB_0__::func_125(iParam0))
	{
		if (__LIB_0__::func_126(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (__LIB_0__::func_27(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_186(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_186(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!__LIB_0__::func_27(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (__LIB_0__::func_27(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (__LIB_0__::func_27(iParam5, 129))
	{
		if (__LIB_0__::func_27(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, __LIB_0__::func_27(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (__LIB_0__::func_125(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!__LIB_0__::func_27(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !__LIB_0__::func_27(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

Vector3 func_202(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1439.17f, 1800.363f, 162.8689f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1496.182f, 1691.789f, 139.8961f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1466.084f, 1719.992f, 146.5827f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

