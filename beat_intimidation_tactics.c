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
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19[3] = { 0, 0, 0 };
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32[3] = { 0, 0, 0 };
	char[] cLocal_36[8] = 0;
	struct<193> Local_37 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 1176256512;
	struct<32> Local_234[3];
	struct<2> Local_331 = { 0, 0 } ;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	int iLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353[3] = { 0, 0, 0 };
	struct<75> Local_357[3];
	int iLocal_583 = 0;
	var uLocal_584[3] = { 0, 0, 0 };
	var uLocal_588[3] = { 0, 0, 0 };
	int iLocal_592 = 0;
	var uLocal_593[3] = { 0, 0, 0 };
	int iLocal_597 = 0;
	var uLocal_598[3] = { 0, 0, 0 };
	var uLocal_602[3] = { 0, 0, 0 };
	int iLocal_606[2] = { 0, 0 };
	int iLocal_609 = 0;
	int iLocal_610[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_619 = 1;
	var uLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = -1;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 1097859072;
	var uLocal_642 = 1000;
	var uLocal_643 = 1067450368;
	var uLocal_644 = 5000;
	var uLocal_645 = 42;
	var uLocal_646 = 1103626240;
	var uLocal_647 = 1077936128;
	var uLocal_648 = 1106247680;
	var uLocal_649 = 1103101952;
	var uLocal_650 = 1097859072;
	var uLocal_651 = 1103626240;
	vector3 vLocal_652[9] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = -1;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 2;
	var uLocal_689 = 1;
	var uLocal_690 = 1;
	var uLocal_691 = 1;
	var uLocal_692 = 0;
	var uLocal_693 = 1;
	var uLocal_694 = 2;
	var uLocal_695 = 2;
	var uLocal_696 = 3;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 3;
	var uLocal_700 = 1;
	var uLocal_701 = 3;
	var uLocal_702 = 3;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	struct<23> Local_705[6];
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	cLocal_36 = "Intimidation";
	iLocal_583 = __LIB_2__::func_340(1, 0, 0) | 64 | 128 | 256 | 2;
	Local_37.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_37.f_43 = __LIB_0__::func_12();
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		Local_37.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		uLocal_15 = uLocal_15;
		__LIB_3__::func_420(&Local_37, 1);
		func_6(&iLocal_14);
		__LIB_0__::func_11(Local_37.f_161);
	}
	while (true)
	{
		if (bVar0)
		{
			__LIB_2__::func_265(bVar0, 995, 0);
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_18)
			{
				case 0:
					if (func_10())
					{
						iLocal_18 = 1;
					}
					break;
				case 1:
					if (func_11(&Local_37, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_12(&Local_37, &iLocal_26, &uLocal_27);
						Local_37.f_51.f_4 = uLocal_27;
						__LIB_3__::func_455(&Local_37, iLocal_26, 1530);
						func_15(&Local_37, &iLocal_26, &uLocal_27);
						func_16(iLocal_26, uLocal_27, &uLocal_598, &uLocal_602);
						func_18(func_17(iLocal_26, uLocal_27), &uLocal_619, 1);
						func_19(&uLocal_619, 1, 0);
						iLocal_18 = 3;
					}
					else if (Local_37.f_160)
					{
						func_8();
					}
					break;
				case 3:
					if (func_20())
					{
						func_21();
						func_22();
						if (VOLUME::_DOES_VOLUME_EXIST(Local_37.f_173))
						{
							__LIB_3__::func_867(&(Local_37.f_173), &(uLocal_602[2]), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 1, 16384, 1, 0, 0);
						}
						iLocal_606[0] = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_MOLOTOV"), 1, Local_37.f_51, true, 1f);
						iLocal_606[1] = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_MOLOTOV"), 1, Local_37.f_51, true, 1f);
						func_24();
						__LIB_0__::func_401(-1993960878);
						iLocal_18 = 4;
					}
					break;
				case 4:
					if (!func_26(&Local_37, &uLocal_584, iLocal_14, 0, 1, 0, 1, 0))
					{
						func_8();
					}
					if (!Local_37.f_46)
					{
						if (func_27(&uLocal_584, &(Local_37.f_5), &iLocal_623, &uLocal_30, 0, 2, 1))
						{
							Local_37.f_46 = 1;
							if (iLocal_623 == 1024)
							{
								if (iLocal_17 < 3)
								{
									func_29(&(uLocal_584[1]), iLocal_344, func_28(1));
									func_30(1, "Default_Angry", 0, 0);
									__LIB_2__::func_461(0);
									func_32(uLocal_584[1], Global_35, 4096, 0, 1073741824 /* Float: 2f */, 1);
									__LIB_1__::func_649(&iLocal_17, 3);
								}
								else
								{
									func_32(uLocal_584[1], Global_35, 4096, 0, 1073741824 /* Float: 2f */, 1);
									func_30(1, "", 0, 0);
									func_30(0, "", 0, 0);
									func_30(2, "", 0, 0);
									__LIB_1__::func_649(&iLocal_17, 6);
								}
							}
							else
							{
								func_34();
								__LIB_1__::func_649(&iLocal_17, 5);
							}
						}
					}
					if (func_35(&Local_37, &uLocal_584, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_37.f_50 = 1;
						func_8();
					}
					if (func_36())
					{
						Local_37.f_50 = 1;
						func_8();
					}
					break;
			}
			BUILTIN::WAIT(Local_37.f_158);
		}
	}
}

void func_6(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_3__::func_390(95, 2, 0);
	*iParam0 = iVar0;
	*iParam0 = 0;
}

void func_8()
{
	__LIB_11__::func_447(1024);
	func_41();
	__LIB_3__::func_319(iLocal_344);
	if (!__LIB_11__::func_446(536870912))
	{
		func_44();
	}
	func_45(&Local_37, &uLocal_584, &uLocal_593, iLocal_14, iLocal_26, uLocal_27, 0, 1, 0, 1);
	__LIB_4__::func_20(&(Local_331.f_1));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_606[0]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_606[1]));
	func_47();
	func_19(&uLocal_619, 1, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_10()
{
	switch (iLocal_16)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_37))
			{
				__LIB_3__::func_352(&Local_37, 2);
				func_51(&Local_234);
				func_52(&Local_234);
				__LIB_3__::func_284(&Local_234);
				func_54(&iLocal_344);
				func_55(&uLocal_680);
				func_56(&(Local_37.f_5));
				WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_THROWN_MOLOTOV"), -1, 0);
				iLocal_16 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_15, cLocal_36))
			{
				return false;
			}
			if (!__LIB_3__::func_366(&Local_234))
			{
				return false;
			}
			if (!WEAPON::_0xFF07CF465F48B830(joaat("WEAPON_THROWN_MOLOTOV")))
			{
				return false;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_344, true, false))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_11(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (bParam6 || func_59(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_60(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_61(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_62(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = __LIB_3__::func_162(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_12(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 0;
			*uParam2 = 0;
			break;
	}
}

Vector3 func_13(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 93.6f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_15(var uParam0, int iParam1, var uParam2)
{
	switch (*iParam1)
	{
		case 0:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2500.674f, -1202.069f, 52.246f, 0f, 0f, 0f, 35f, 55f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2498.81f, -1150.182f, 52.246f, 0f, 0f, 0f, 25f, 50f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2492.926f, -1249.251f, 52.246f, 0f, 0f, 0f, 30f, 40f, 10f);
					break;
			}
			break;
	}
}

void func_16(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			__LIB_3__::func_867(uParam2[1], uParam3[1], 2508.616f, -1202.505f, 52.223f, 0f, 0f, 0f, 7f, 15f, 1.5f, 1, 534496, 1, 0, 0);
			__LIB_3__::func_867(uParam2[0], uParam3[0], 2506.017f, -1224.3f, 49.387f, 0f, 0f, 0f, 6.5f, 12f, 3f, 1, 534496, 1, 0, 0);
			__LIB_3__::func_378((*uParam2)[0], 0);
			break;
	}
}

Vector3 func_17(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return 2501.04f, -1230.173f, 48.12552f;
		default:
			break;
	}
	return 2501.04f, -1230.173f, 48.12552f;
}

void func_18(vector3 vParam0, var uParam3, int iParam4)
{
	TASK::_GET_SCENARIO_POINT_CLOSE_TO_COORDS(vParam0, 2f, uParam3, iParam4);
}

void func_19(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST((*uParam0)[iVar0]))
		{
			TASK::_SET_SCENARIO_POINT_ACTIVE((*uParam0)[iVar0], bParam2);
		}
		iVar0++;
	}
}

bool func_20()
{
	switch (iLocal_25)
	{
		case 0:
			iLocal_25 = 1;
			break;
		case 1:
			if (!__LIB_3__::func_467(Local_37.f_51, 0f, &Local_234, &uLocal_584, 0, 0, -1, 1))
			{
				return false;
			}
			iLocal_25 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

void func_21()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_584[iVar0]))
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_584[iVar0], true, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_584[iVar0], 217, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_584[iVar0], joaat("REL_GANG_LEMOYNE_RAIDERS"));
			if (__LIB_2__::func_1(Local_234[iVar0 /*32*/].f_11, 0, 1))
			{
				uLocal_588[iVar0] = Local_234[iVar0 /*32*/].f_11;
				func_69(uLocal_588[iVar0], func_67(iVar0), func_68(iVar0), 2, 1073741824 /* Float: 2f */);
				PED::_0x931B241409216C1F(uLocal_584[iVar0], uLocal_588[iVar0], 0);
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_588[0]))
	{
		Local_705[0 /*23*/].f_1[0] = joaat("AMMO_MOLOTOV");
		Local_705[0 /*23*/].f_12[0] = 1;
		Local_705[0 /*23*/] = 1;
		Local_705[1 /*23*/].f_1[0] = joaat("PROVISION_POCKET_WATCH_SILVER");
		Local_705[1 /*23*/].f_12[0] = 1;
		Local_705[1 /*23*/] = 1;
		ENTITY::_0xA88E215CEB0435C0(uLocal_588[0], &(Local_705[0 /*23*/]), 205298116, 128, 2, 0);
		ENTITY::_0xA88E215CEB0435C0(uLocal_588[0], &(Local_705[1 /*23*/]), 205298116, 128, 2, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_588[2]))
	{
		Local_705[2 /*23*/].f_1[0] = joaat("AMMO_REVOLVER");
		Local_705[2 /*23*/].f_12[0] = 2;
		Local_705[2 /*23*/] = 2;
		Local_705[3 /*23*/].f_1[0] = joaat("CONSUMABLE_MOONSHINE");
		Local_705[3 /*23*/].f_12[0] = 1;
		Local_705[3 /*23*/] = 1;
		ENTITY::_0xA88E215CEB0435C0(uLocal_588[2], &(Local_705[2 /*23*/]), 205298116, 128, 2, 0);
		ENTITY::_0xA88E215CEB0435C0(uLocal_588[2], &(Local_705[3 /*23*/]), 205298116, 128, 2, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_588[1]))
	{
		Local_705[4 /*23*/].f_1[0] = joaat("PROVISION_RING_SILVER");
		Local_705[4 /*23*/].f_12[0] = 1;
		Local_705[4 /*23*/] = 1;
		Local_705[5 /*23*/].f_1[0] = joaat("AMMO_MOLOTOV");
		Local_705[5 /*23*/].f_12[0] = 1;
		Local_705[5 /*23*/] = 1;
		ENTITY::_0xA88E215CEB0435C0(uLocal_588[1], &(Local_705[4 /*23*/]), 205298116, 128, 2, 0);
		ENTITY::_0xA88E215CEB0435C0(uLocal_588[1], &(Local_705[5 /*23*/]), 205298116, 128, 2, 1);
	}
	func_69(uLocal_584[1], func_70(), func_71(), 2, 1073741824 /* Float: 2f */);
	__LIB_2__::func_272(uLocal_584[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	__LIB_2__::func_272(uLocal_584[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	__LIB_2__::func_272(uLocal_584[2], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	__LIB_2__::func_23(&(Local_37.f_5), uLocal_584[0], 0);
	__LIB_2__::func_23(&(Local_37.f_5), uLocal_584[1], 0);
	__LIB_2__::func_23(&(Local_37.f_5), uLocal_584[2], 0);
	__LIB_2__::func_20(&(Local_37.f_5), uLocal_588[0], 0);
	__LIB_2__::func_20(&(Local_37.f_5), uLocal_588[1], 0);
	__LIB_2__::func_20(&(Local_37.f_5), uLocal_588[2], 0);
	__LIB_3__::func_285(uLocal_584[0], &Local_37, 0);
	__LIB_3__::func_285(uLocal_584[2], &Local_37, 0);
	__LIB_3__::func_285(uLocal_588[2], &Local_37, 0);
	__LIB_3__::func_542(&Local_37, 1);
}

void func_22()
{
	__LIB_0__::func_568(Local_37.f_51, 10f, 0);
	__LIB_1__::func_572(func_17(iLocal_26, uLocal_27), 10f, 0, 0, 0, 0, 0);
}

void func_24()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_344, func_28(0), uLocal_584[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_344, func_28(2), uLocal_584[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_344, func_28(1), uLocal_584[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_344, "molotov_a", iLocal_606[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_344, "molotov_b", iLocal_606[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_344, "bool", false, false);
	ANIMSCENE::START_ANIM_SCENE(iLocal_344);
}

bool func_26(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_163(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_3__::func_234(&(uParam0->f_5));
			}
			__LIB_1__::func_336(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_87(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_88(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_90(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_91(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_61(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[0]) && !PED::IS_PED_INJURED((*uParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*uParam1)[0])))
			{
				func_92(uParam0, (*uParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_27(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		if (func_94((*uParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
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

char* func_28(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MALE_A";
		case 2:
			return "MALE_B";
		case 1:
			return "MALE_C";
		default:
			break;
	}
	return "INVALID_PED_IDX";
}

void func_29(var uParam0, int iParam1, char* sParam2)
{
	if (((!ENTITY::IS_ENTITY_DEAD(*uParam0) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1, false)) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam1, sParam2, *uParam0);
	}
}

void func_30(int iParam0, char* sParam1, float fParam2, float fParam3)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(uLocal_584[iParam0]))
	{
		return;
	}
	else if (uLocal_19[iParam0] == 8)
	{
		return;
	}
	__LIB_2__::func_73(uLocal_584[iParam0], &(uLocal_593[iParam0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	func_96(uLocal_584[iParam0]);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		TASK::TASK_REACT(0, Global_35, Global_36, sParam1, 1f, 0, 4);
	}
	TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	__LIB_1__::func_474(uLocal_584[iParam0], &iVar0, fParam2, fParam3, 1, 1);
	PED::SET_PED_KEEP_TASK(uLocal_584[iParam0], true);
	iLocal_32[iParam0] = 1;
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_588[iParam0]))
	{
		__LIB_3__::func_286(uLocal_588[iParam0]);
	}
}

bool func_32(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5)
{
	float fVar0;
	if (!__LIB_2__::func_1(iParam0, 0, 0) || __LIB_0__::func_27(iLocal_28, iParam2))
	{
		return false;
	}
	if (iParam3 != 0 && !__LIB_0__::func_27(iLocal_28, iParam3))
	{
		return false;
	}
	if (bParam5 || __LIB_2__::func_227(fParam4, 1, 0, 0))
	{
		fVar0 = -1f;
		if (__LIB_2__::func_303(iParam0, iParam1, func_104(iParam2), func_104(iParam2), fVar0, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
		{
			__LIB_1__::func_683(&iLocal_28, iParam2);
			return true;
		}
	}
	return false;
}

void func_34()
{
	if (__LIB_0__::func_27(iLocal_28, 128))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_584[0]) && uLocal_19[0] != 8)
		{
			func_32(uLocal_584[0], Global_35, 8192, 0, 1073741824 /* Float: 2f */, 1);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uLocal_584[2]) && uLocal_19[2] != 8)
		{
			func_32(uLocal_584[0], Global_35, 8192, 0, 1073741824 /* Float: 2f */, 1);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uLocal_584[1]))
		{
			func_32(uLocal_584[1], Global_35, 2048, 0, 1073741824 /* Float: 2f */, 1);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uLocal_584[2]) && uLocal_19[2] != 8)
	{
		func_32(uLocal_584[2], Global_35, 2048, 0, 1073741824 /* Float: 2f */, 1);
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uLocal_584[1]) && uLocal_19[1] != 8)
	{
		func_32(uLocal_584[1], Global_35, 2048, 0, 1073741824 /* Float: 2f */, 1);
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uLocal_584[0]) && __LIB_3__::func_628(0))
	{
		func_32(uLocal_584[0], Global_35, 2048, 0, 1073741824 /* Float: 2f */, 1);
	}
}

bool func_35(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (__LIB_3__::func_287())
			{
				return true;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return true;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return true;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_109(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_61(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_61(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_61(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *uParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[uParam0->f_188]))
				{
					if (Global_1935630.f_40 != (*uParam1)[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD((*uParam1)[uParam0->f_188])) || !bParam3)
						{
							if ((uParam0->f_98[uParam0->f_188] * uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return true;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (__LIB_0__::func_62(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (__LIB_0__::func_62(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return true;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return false;
}

bool func_36()
{
	int iVar0;
	if (iLocal_17 > 1)
	{
		func_111();
		func_112();
		func_113();
	}
	switch (iLocal_17)
	{
		case 0:
			if (func_114())
			{
				__LIB_1__::func_649(&iLocal_17, 1);
			}
			break;
		case 1:
			func_115();
			if (func_116(&Local_37, &uLocal_231, 0.5f, 50f, 20f, 750, 3f, 4.5f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 0, 0))
			{
				__LIB_2__::func_73(uLocal_584[0], &(uLocal_593[0]), -89429847, 580546400, 0, 0);
				__LIB_1__::func_148(&(vLocal_652[1 /*3*/]));
				if (!MAP::DOES_BLIP_EXIST(Local_37.f_181))
				{
					__LIB_2__::func_73(uLocal_584[0], &(uLocal_593[0]), -89429847, 580546400, 0, 0);
				}
				func_118(&Local_331);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_344, func_119(1), true);
				func_120(&(Local_357[0 /*75*/].f_21), &(Local_357[0 /*75*/]));
				func_120(&(Local_357[2 /*75*/].f_21), &(Local_357[2 /*75*/]));
				func_120(&(Local_357[1 /*75*/].f_21), &(Local_357[1 /*75*/]));
				__LIB_1__::func_649(&iLocal_17, 2);
			}
			break;
		case 2:
			func_121();
			if (func_122())
			{
				Local_37.f_44 = 1;
				func_41();
				__LIB_1__::func_148(&(vLocal_652[7 /*3*/]));
				__LIB_2__::func_411(&(Local_357[0 /*75*/].f_21[1 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_357[2 /*75*/].f_21[1 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_357[1 /*75*/].f_21[1 /*17*/]), 1, 0);
				__LIB_0__::func_325(&(uLocal_593[0]));
				__LIB_1__::func_649(&iLocal_17, 4);
			}
			break;
		case 3:
			if (func_125(2f))
			{
				__LIB_1__::func_649(&iLocal_17, 6);
			}
			break;
		case 4:
			func_126();
			if (func_127())
			{
				func_128();
				__LIB_1__::func_148(&(vLocal_652[4 /*3*/]));
				__LIB_1__::func_649(&iLocal_17, 8);
			}
			if (func_129(&uLocal_588) && func_130(&uLocal_584, &(Local_37.f_5), &iLocal_623, 0, -1))
			{
				func_32(uLocal_584[1], Global_35, 4096, 0, 1073741824 /* Float: 2f */, 1);
				func_30(1, "", 0, 0);
				func_30(0, "", 0, 0);
				func_30(2, "", 0, 0);
				__LIB_1__::func_649(&iLocal_17, 6);
			}
			break;
		case 5:
			if (func_125(0))
			{
				__LIB_1__::func_649(&iLocal_17, 6);
			}
			break;
		case 6:
			func_41();
			__LIB_1__::func_649(&iLocal_17, 7);
			break;
		case 7:
			if (!__LIB_11__::func_446(268435456))
			{
				if (__LIB_11__::func_446(33554432))
				{
					__LIB_11__::func_448(268435456);
					MISC::_SET_INCIDENT_UNK(iLocal_609);
					MISC::DELETE_INCIDENT(iLocal_609);
				}
			}
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (!func_132(16384))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_584[iVar0]) && FIRE::IS_ENTITY_ON_FIRE(uLocal_584[iVar0]))
						{
							func_32(uLocal_584[iVar0], Global_35, 16384, 0, 1073741824 /* Float: 2f */, 1);
						}
						iVar0++;
					}
				}
				else if (!func_132(32768))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_584[2]) && FIRE::IS_ENTITY_ON_FIRE(uLocal_584[2]))
					{
						func_32(uLocal_584[2], Global_35, 32768, 0, 1073741824 /* Float: 2f */, 1);
					}
				}
			}
			if (func_133())
			{
				__LIB_1__::func_649(&iLocal_17, 9);
			}
			break;
		case 8:
			func_126();
			if (__LIB_3__::func_332(Local_37.f_51, 1) > 80f)
			{
				__LIB_1__::func_649(&iLocal_17, 9);
			}
			else if (__LIB_11__::func_446(67108864))
			{
				if (__LIB_11__::func_446(-2147483648))
				{
					__LIB_1__::func_649(&iLocal_17, 9);
				}
				else if (__LIB_11__::func_446(1073741824 /* Float: 2f */))
				{
					if (__LIB_1__::func_313(&(vLocal_652[8 /*3*/]), 10f))
					{
						__LIB_1__::func_649(&iLocal_17, 9);
					}
					else if (!__LIB_0__::func_75(&(vLocal_652[8 /*3*/])))
					{
						__LIB_1__::func_148(&(vLocal_652[8 /*3*/]));
					}
				}
			}
			else if (__LIB_1__::func_313(&(vLocal_652[4 /*3*/]), 20f))
			{
				__LIB_1__::func_649(&iLocal_17, 9);
			}
			break;
		case 9:
			return true;
	}
	return false;
}

void func_41()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_344))
	{
		return;
	}
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_344, func_28(0), uLocal_584[0]);
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_344, func_28(2), uLocal_584[2]);
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_344, func_28(1), uLocal_584[1]);
	func_149(&(iLocal_606[0]), iLocal_344, "molotov_a");
	func_149(&(iLocal_606[1]), iLocal_344, "molotov_b");
}

void func_44()
{
	int iVar0;
	__LIB_11__::func_448(536870912);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_584[iVar0]) && !iLocal_32[iVar0])
		{
			func_150(iVar0, 0);
		}
		iVar0++;
	}
}

void func_45(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_3__::func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_152(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*uParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 0))
			{
				__LIB_3__::func_259((*uParam1)[iVar0], bVar3);
				if (func_154(uParam0, uParam1[iVar0]))
				{
					__LIB_2__::func_32(uParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_288((*uParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*uParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_158(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = __LIB_3__::func_167(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		__LIB_0__::func_701(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_47()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_3__::func_525(&(uLocal_598[iVar0]), &(uLocal_602[iVar0]));
		iVar0++;
	}
	__LIB_0__::func_172(iLocal_597);
}

void func_51(var uParam0)
{
	(uParam0[0 /*32*/])->f_1 = joaat("G_M_Y_UNIEXCONFEDS_01");
	(uParam0[0 /*32*/])->f_3 = 1554294233;
	(*uParam0)[0 /*32*/] = 22;
	StringCopy(&((uParam0[0 /*32*/])->f_23), "0176_G_M_O_UniExConfeds_01_WHITE_03", 64);
	__LIB_3__::func_303(&((uParam0[0 /*32*/])->f_22));
	(uParam0[1 /*32*/])->f_1 = joaat("G_M_Y_UNIEXCONFEDS_01");
	(uParam0[1 /*32*/])->f_3 = 1218969052;
	(*uParam0)[1 /*32*/] = 22;
	StringCopy(&((uParam0[1 /*32*/])->f_23), "0179_G_M_Y_UniExConfeds_01_WHITE_03", 64);
	__LIB_3__::func_303(&((uParam0[1 /*32*/])->f_22));
	(uParam0[2 /*32*/])->f_1 = joaat("G_M_Y_UNIEXCONFEDS_01");
	(uParam0[2 /*32*/])->f_3 = 755484316;
	(*uParam0)[2 /*32*/] = 22;
	StringCopy(&((uParam0[2 /*32*/])->f_23), "0178_G_M_Y_UniExConfeds_01_WHITE_02", 64);
	__LIB_3__::func_303(&((uParam0[2 /*32*/])->f_22));
}

void func_52(var uParam0)
{
	(uParam0[0 /*32*/])->f_6 = { 0f, 0f, 0f };
	(uParam0[0 /*32*/])->f_9 = 105.47f;
	(uParam0[0 /*32*/])->f_13 = 0;
	(uParam0[0 /*32*/])->f_12 = __LIB_2__::func_185(2, 0, 1);
	(uParam0[0 /*32*/])->f_15 = { 2.9f, -3.91f, -0.01f };
	(uParam0[0 /*32*/])->f_18 = -158.12f;
	(uParam0[1 /*32*/])->f_6 = { 1.64f, -2.48f, 0f };
	(uParam0[1 /*32*/])->f_9 = 146.97f;
	(uParam0[1 /*32*/])->f_13 = 0;
	(uParam0[1 /*32*/])->f_12 = __LIB_2__::func_185(2, 0, 1);
	(uParam0[1 /*32*/])->f_15 = { 2.07f, -5.48f, 0f };
	(uParam0[1 /*32*/])->f_18 = -152.52f;
	(uParam0[2 /*32*/])->f_6 = { -2.6f, 0.16f, 0f };
	(uParam0[2 /*32*/])->f_9 = 161.29f;
	(uParam0[2 /*32*/])->f_13 = 0;
	(uParam0[2 /*32*/])->f_12 = __LIB_2__::func_185(2, 0, 1);
	(uParam0[2 /*32*/])->f_15 = { 2.97f, -7.2f, 0f };
	(uParam0[2 /*32*/])->f_18 = -163.48f;
	__LIB_3__::func_626(&((uParam0[0 /*32*/])->f_22));
	__LIB_3__::func_626(&((uParam0[1 /*32*/])->f_22));
	__LIB_3__::func_626(&((uParam0[2 /*32*/])->f_22));
}

void func_54(int iParam0)
{
	iParam0->f_4 = "script@beat@town@intimidationtactics@firebomb";
	*iParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(iParam0->f_4, 0, func_119(0), false, true);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam0, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(*iParam0);
		}
	}
}

void func_55(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = Global_35;
	uParam0->f_8 = 4;
	uParam0->f_19 = 4;
	uParam0->f_21 = 4;
	uParam0->f_17 = 2;
	uParam0->f_18 = 2;
	uParam0->f_7 = 0;
}

void func_56(var uParam0)
{
	__LIB_2__::func_290(uParam0);
	__LIB_2__::func_110(uParam0, 1);
	__LIB_4__::func_22(uParam0, 5f, 1);
	__LIB_2__::func_634(uParam0, 0);
	__LIB_2__::func_111(uParam0, 1);
	__LIB_2__::func_662(uParam0, 1);
}

int func_59(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_176(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_177(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_87(iParam0, 128))
			{
				if (!func_178(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_179(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_180(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (__LIB_0__::func_86(*uParam1))
				{
					return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_183(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (__LIB_0__::func_27(Param4.f_2, 8))
				{
					func_177(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				__LIB_3__::func_170(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (__LIB_3__::func_421(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_186(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_87(iParam0, 128))
			{
				if (!__LIB_3__::func_171(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_179(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!__LIB_3__::func_170(uParam1))
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_188(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_177(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		__LIB_1__::func_422("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_60(var uParam0, int iParam1)
{
	if (func_61(iParam1, 256))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_172) || func_190(iParam1, __LIB_3__::func_172(uParam0), &(uParam0->f_172)))
		{
			if (__LIB_2__::func_1(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_61(int iParam0, int iParam1)
{
	if (!func_191(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

void func_62(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		__LIB_3__::func_139(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_61(uParam0->f_3, 1) && !func_61(uParam0->f_3, 32))
	{
		__LIB_3__::func_139(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_61(uParam0->f_3, 2) && !func_61(uParam0->f_3, 32))
	{
		__LIB_3__::func_139(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		__LIB_3__::func_241(uParam0->f_171, 1);
	}
	if (func_61(uParam0->f_3, 1))
	{
		__LIB_3__::func_139(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_GET_VOLUME_SCALE(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		__LIB_2__::func_43(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

Vector3 func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2504.417f, -1229.023f, 48.1908f;
		case 1:
			return 2503.291f, -1222.158f, 48.20496f;
		case 2:
			return 2503.34f, -1219.527f, 48.205f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_68(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 112.88f;
		case 1:
			return 95.67f;
		case 2:
			return 95.67f;
		default:
			break;
	}
	return 0f;
}

void func_69(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_69(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_69(iVar2, vParam1, fParam4, iParam5, iParam6);
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

Vector3 func_70()
{
	return 2507.09f, -1201.84f, 51.48242f;
}

float func_71()
{
	return 79.17f;
}

bool func_87(int iParam0, int iParam1)
{
	if (!func_191(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/].f_1 && iParam1) != 0;
}

void func_88(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_191(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (__LIB_0__::func_190())
	{
		__LIB_3__::func_180(1);
	}
	func_209(iParam2, uParam0->f_43);
	func_210(iParam2, 0, 0, 0, 0);
	if (__LIB_3__::func_181(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(true);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(__LIB_3__::func_165(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_212(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_90(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;
	bVar0 = false;
	if (uParam0->f_178 && __LIB_3__::func_248())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_87(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_88(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
			return;
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!__LIB_1__::func_205(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_215(uParam0, bVar0);
		__LIB_3__::func_336(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432 /* Float: 4f */, 0, 90f, 0, uParam0->f_98[iParam1]);
		if (__LIB_3__::func_280(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_88(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
}

bool func_91(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_61(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (__LIB_1__::func_923())
			{
				fVar0 = 15f;
			}
		}
		if (__LIB_3__::func_182(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (!__LIB_3__::func_182(uParam2, fVar1))
		{
			if (!__LIB_2__::func_117(Global_1310750[uParam2->f_3 /*111*/].f_38))
			{
				return false;
			}
		}
		if (!__LIB_3__::func_281(uParam2->f_3, 2) && __LIB_3__::func_290(2))
		{
			return false;
		}
		if (func_61(iParam0, 4194304) || func_61(iParam0, 33554432))
		{
			if (__LIB_1__::func_995(1))
			{
				return false;
			}
		}
	}
	if (__LIB_1__::func_376(Global_35))
	{
		return false;
	}
	if (__LIB_0__::func_296(0, 1, 1) && !func_227(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_61(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (__LIB_3__::func_291(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (__LIB_3__::func_183())
		{
			return false;
		}
		iVar2 = __LIB_3__::func_250(__LIB_0__::func_12());
		if (__LIB_0__::func_625(iVar2))
		{
			if (__LIB_3__::func_184(Global_36, iVar2))
			{
				return false;
			}
		}
		if (__LIB_3__::func_251(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (__LIB_3__::func_263(&(uParam2->f_91), 0, 1084227584 /* Float: 5f */, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_92(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	if (__LIB_1__::func_209(uParam0->f_51))
	{
		__LIB_1__::func_222(uParam0->f_51, 0);
		fVar0 = func_237(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, __LIB_0__::func_93());
		bVar1 = __LIB_0__::func_514(!func_61(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = __LIB_2__::func_213(iVar2, __LIB_3__::func_185(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_94(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *iParam3);
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
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_3__::func_396(iParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_4__::func_23(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_3__::func_399(iParam0, iParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_3__::func_668(iParam0, iParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_4__::func_24(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_96(int iParam0)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 512, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, true);
	PED::SET_PED_FIRING_PATTERN(iParam0, joaat("FIRING_PATTERN_BURST_FIRE"));
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 50, true);
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 217, false);
}

char* func_104(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RE_IT_NBX_V1_CALLOUT";
		case 2:
			return "RE_IT_NBX_V1_CALLOUT";
		case 4:
			return "RE_IT_NBX_V1_LIGHT_BOTTLES";
		case 8:
			return "RE_IT_NBX_V1_THROW_BOTTLES";
		case 16:
			return "RE_IT_NBX_V1_DAMN_FEDS";
		case 32:
			return "RE_IT_NBX_V1_DESTROY_TOWN";
		case 128:
			return func_271("RE_IT_NBX_V1_PASS_BY", "RE_IT_NBX_V1_PASS_BY_SICK");
		case 256:
			return func_271("RE_IT_NBX_V1_PROX", "RE_IT_NBX_V1_PROX_SICK");
		case 512:
			return "RE_IT_NBX_V1_PROX_RETURN";
		case 1024:
			return func_271("RE_IT_NBX_V1_THREAT", "RE_IT_NBX_V1_THREAT_SICK");
		case 2048:
			return func_271("RE_IT_NBX_V1_AGGRO", "RE_IT_NBX_V1_AGGRO_SICK");
		case 4096:
			return "RE_IT_NBX_V1_AGGRO_HORSE";
		case 8192:
			return "RE_IT_NBX_V1_AGGRO_THREATENED";
		case 16384:
			return "RE_IT_NBX_V1_FIRE";
		case 32768:
			return "RE_IT_NBX_V1_FIRE_ONME";
		case 65536:
			return "RE_IT_NBX_V1_FEUD";
		case 131072:
			return "RE_IT_NBX_V1_FEUD_AGGRO";
		default:
			break;
	}
	return "INVALID DIALOGUE BIT";
}

bool func_109(int iParam0)
{
	if (func_61(iParam0, 1))
	{
		return false;
	}
	return (1 == __LIB_1__::func_987(iParam0) || 2 == __LIB_1__::func_987(iParam0));
}

void func_111()
{
	float fVar0;
	if (__LIB_11__::func_446(1024))
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_344) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_344, false))
		{
			return;
		}
		fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_344);
		if (__LIB_11__::func_446(8192))
		{
			func_279(0, "molotov_a", 2048, fVar0);
		}
		if (__LIB_11__::func_446(16384))
		{
			func_279(1, "molotov_b", 4096, fVar0);
		}
		if (__LIB_11__::func_446(2048) && __LIB_11__::func_446(4096))
		{
			__LIB_11__::func_447(1024);
		}
	}
}

void func_112()
{
	float fVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_344) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_344, false))
	{
		return;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_344);
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_584[0], 889124884))
	{
		__LIB_2__::func_315(1891783641, uLocal_584[0], 1);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_584[2], 889124884))
	{
		__LIB_2__::func_315(1891783641, uLocal_584[2], 1);
	}
	if (__LIB_11__::func_446(8192))
	{
		if (!__LIB_11__::func_446(32768))
		{
			if (fVar0 > func_281(0))
			{
				__LIB_3__::func_277(1019805697, func_282(0), 1);
				iLocal_610[0] = FIRE::START_SCRIPT_FIRE(func_282(0), 3, 50f, false, 0, -1f, 0);
				iLocal_610[1] = FIRE::START_SCRIPT_FIRE(func_282(0), 3, 0f, false, 0, -1f, 0);
				iLocal_610[2] = FIRE::START_SCRIPT_FIRE(func_282(3), 3, 50f, false, 0, -1f, 0);
				iLocal_610[3] = FIRE::START_SCRIPT_FIRE(func_282(4), 3, 50f, false, 0, -1f, 0);
				__LIB_11__::func_448(32768);
			}
		}
	}
	else if (__LIB_2__::func_1(uLocal_584[0], 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_584[0], -1881312968))
		{
			__LIB_11__::func_448(8192);
		}
	}
	if (__LIB_11__::func_446(16384))
	{
		if (!__LIB_11__::func_446(65536))
		{
			if (fVar0 > func_281(1))
			{
				__LIB_3__::func_277(1019805697, func_282(0), 1);
				iLocal_610[4] = FIRE::START_SCRIPT_FIRE(func_282(1), 3, 50f, false, 0, -1f, 0);
				iLocal_610[5] = FIRE::START_SCRIPT_FIRE(func_282(2), 3, 50f, false, 0, -1f, 0);
				iLocal_610[6] = FIRE::START_SCRIPT_FIRE(func_282(5), 3, 20f, false, 0, -1f, 0);
				iLocal_610[7] = FIRE::START_SCRIPT_FIRE(func_282(6), 3, 20f, false, 0, -1f, 0);
				__LIB_11__::func_448(65536);
			}
		}
	}
	else if (__LIB_2__::func_1(uLocal_584[2], 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_584[2], -1881312968))
		{
			__LIB_11__::func_448(16384);
		}
	}
}

void func_113()
{
	int iVar0;
	int iVar1;
	if (__LIB_11__::func_446(536870912))
	{
		return;
	}
	iLocal_353[0] = func_284(&(uLocal_584[0]), &(Local_357[0 /*75*/]), 20f, &(Local_357[0 /*75*/].f_21), &(Local_37.f_192), 0f, 1, 0, 0, iLocal_583, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iLocal_353[2] = func_284(&(uLocal_584[2]), &(Local_357[2 /*75*/]), 20f, &(Local_357[2 /*75*/].f_21), &(Local_37.f_192), 0f, 1, 0, 0, iLocal_583, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iLocal_353[1] = func_284(&(uLocal_584[1]), &(Local_357[1 /*75*/]), 20f, &(Local_357[1 /*75*/].f_21), &(Local_37.f_192), 0f, 1, 0, 0, iLocal_583, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	switch (iLocal_23)
	{
		case 0:
			iLocal_23 = 1;
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (__LIB_2__::func_456(&(Local_357[iVar0 /*75*/])) && iLocal_353[iVar0] != -1)
				{
					iLocal_622 = iVar0;
					__LIB_2__::func_526(&(Local_357[0 /*75*/].f_21), 0, 0);
					__LIB_2__::func_526(&(Local_357[2 /*75*/].f_21), 0, 0);
					__LIB_2__::func_526(&(Local_357[1 /*75*/].f_21), 0, 0);
					iLocal_23 = 2;
				}
				iVar0++;
			}
			break;
		case 2:
			if (!__LIB_0__::func_75(&(vLocal_652[6 /*3*/])) || __LIB_1__::func_313(&(vLocal_652[6 /*3*/]), 4f))
			{
				__LIB_11__::func_448(64);
				__LIB_2__::func_303(Global_35, uLocal_584[iLocal_622], "RE_IT_NBX_V1_GREET_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_23 = 3;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				iVar1 = __LIB_17__::func_861(&uLocal_584, 1, 0, -1, 0, -1082130432 /* Float: -1f */);
				if (__LIB_2__::func_118(iVar1, 1, 1) < 12f)
				{
					__LIB_11__::func_448(4194304);
				}
			}
			if (__LIB_11__::func_446(4194304))
			{
				func_34();
				__LIB_1__::func_649(&iLocal_17, 5);
				iLocal_23 = 4;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(uLocal_584[1]))
			{
				if (__LIB_2__::func_227(-3f, 1, 0, 0))
				{
					__LIB_2__::func_303(uLocal_584[1], Global_35, func_271("RE_IT_NBX_V1_PROX", "RE_IT_NBX_V1_PROX_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_23 = 4;
				}
			}
			break;
		case 4:
			break;
	}
}

bool func_114()
{
	switch (iLocal_352)
	{
		case 0:
			iLocal_352 = 1;
			break;
		case 1:
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_344, true, false))
			{
				return false;
			}
			else
			{
				iLocal_352 = 2;
			}
			break;
		case 2:
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_344, func_119(1));
			iLocal_352 = 3;
			break;
		case 3:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_344, func_119(1)))
			{
				return false;
			}
			iLocal_352 = 4;
			break;
		case 4:
			return true;
	}
	return false;
}

void func_115()
{
	if (!func_132(1))
	{
		if (__LIB_3__::func_332(Local_37.f_51, 1) < 50f)
		{
			if (__LIB_2__::func_303(uLocal_584[1], uLocal_584[2], func_104(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0))
			{
				__LIB_2__::func_315(249295937, uLocal_584[1], 1);
				func_289(1);
				__LIB_1__::func_148(&(vLocal_652[3 /*3*/]));
			}
		}
	}
	else if (!func_132(2))
	{
		if (__LIB_0__::func_265(&(vLocal_652[3 /*3*/])) > 3f)
		{
			if (__LIB_2__::func_303(uLocal_584[2], uLocal_584[1], func_104(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0))
			{
				func_289(2);
				__LIB_0__::func_37(&(vLocal_652[3 /*3*/]));
			}
		}
	}
}

bool func_116(var uParam0, var uParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, bool bParam12, int iParam13, bool bParam14)
{
	float fVar0;
	__LIB_3__::func_398(Global_35, uParam0->f_51, uParam1, 0f, 0, 0);
	fVar0 = 0f;
	if (__LIB_3__::func_193(uParam1, iParam5))
	{
		if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam7);
		}
		else
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam6);
		}
	}
	if (func_293(uParam0, fParam2, 1114636288 /* Float: 60f */, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, bParam12, 1125515264 /* Float: 150f */, bParam14, 1))
	{
		return true;
	}
	return false;
}

void func_118(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	vVar0 = { 2510.42f, -1202.596f, 51.48242f };
	fVar3 = 45f;
	fVar4 = 40f;
	__LIB_3__::func_899(uParam0, joaat("EVENT_SHOCKING_BEAT_TERRIFYING"), "", vVar0, 0, fVar3, fVar4, fVar4, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1127481344 /* Float: 180f */, 0);
}

char* func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_FIREBOMB";
		case 1:
			return "PBL_EXIT_B";
		default:
			break;
	}
	return "INVALID_PLAY_LIST";
}

void func_120(var uParam0, var uParam1)
{
	__LIB_3__::func_157(uParam0[0 /*17*/], __LIB_2__::func_460(7), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(uParam0[1 /*17*/], __LIB_2__::func_460(10), 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_526(uParam0, 0, 0);
	__LIB_2__::func_451(uParam1, 0);
}

void func_121()
{
	float fVar0;
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_344, true, false) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_344, false))
	{
		return;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_344);
	func_279(0, "molotov_a", 2048, fVar0);
	func_279(1, "molotov_b", 4096, fVar0);
	if (func_299(0, fVar0))
	{
		func_29(&(uLocal_584[0]), iLocal_344, func_28(0));
		func_301(&(uLocal_584[0]), 0, uLocal_588[0], func_300(0), 1073741824 /* Float: 2f */, joaat("MOTIONSTATE_RUN"), 1);
	}
	if (func_299(2, fVar0))
	{
		func_29(&(uLocal_584[2]), iLocal_344, func_28(2));
		func_301(&(uLocal_584[2]), 2, uLocal_588[2], func_300(2), 1073741824 /* Float: 2f */, joaat("MOTIONSTATE_RUN"), 131072);
	}
	if (func_299(1, fVar0))
	{
		func_29(&(uLocal_584[1]), iLocal_344, func_28(1));
		func_301(&(uLocal_584[1]), 1, uLocal_588[1], func_300(1), 1073741824 /* Float: 2f */, joaat("MOTIONSTATE_IDLE"), 131073);
	}
}

bool func_122()
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_344, false))
	{
		return true;
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_344, false))
	{
		return true;
	}
	else if (((!__LIB_2__::func_1(uLocal_584[0], 0, 1) || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_344, func_28(0))) && (!__LIB_2__::func_1(uLocal_584[2], 0, 1) || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_344, func_28(2)))) && (!__LIB_2__::func_1(uLocal_584[1], 0, 1) || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_344, func_28(1))))
	{
		return true;
	}
	return false;
}

bool func_125(float fParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_344) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_344, false))
	{
		func_307();
		return true;
	}
	if (!__LIB_0__::func_75(&(vLocal_652[2 /*3*/])))
	{
		__LIB_1__::func_148(&(vLocal_652[2 /*3*/]));
	}
	if (!__LIB_11__::func_446(1024))
	{
		if ((__LIB_11__::func_446(8192) && !__LIB_11__::func_446(2048)) || (__LIB_11__::func_446(16384) && !__LIB_11__::func_446(4096)))
		{
			__LIB_11__::func_448(1024);
		}
	}
	if (!__LIB_11__::func_446(8))
	{
		if ((!__LIB_2__::func_1(uLocal_584[1], 0, 1) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_584[1], iLocal_344)) || __LIB_0__::func_265(&(vLocal_652[2 /*3*/])) > (func_308(1) + fParam0))
		{
			func_30(1, "Default_Panic", 0, 0);
			__LIB_11__::func_448(8);
		}
	}
	else if (!__LIB_11__::func_446(16))
	{
		if ((!__LIB_2__::func_1(uLocal_584[0], 0, 1) || __LIB_0__::func_265(&(vLocal_652[2 /*3*/])) > (func_308(0) + fParam0)) || func_299(0, ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_344)))
		{
			func_30(0, "Default_Panic", 0, 0);
			if (__LIB_11__::func_446(8192) && !__LIB_11__::func_446(2048))
			{
				__LIB_11__::func_448(1024);
			}
			else
			{
				func_149(&(iLocal_606[0]), iLocal_344, "molotov_a");
			}
			__LIB_11__::func_448(16);
		}
	}
	else if (!__LIB_11__::func_446(32))
	{
		if ((!__LIB_2__::func_1(uLocal_584[2], 0, 1) || __LIB_0__::func_265(&(vLocal_652[2 /*3*/])) > (func_308(2) + fParam0)) || func_299(2, ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_344)))
		{
			func_30(2, "Default_Panic", 0, 0);
			if (__LIB_11__::func_446(16384) && !__LIB_11__::func_446(4096))
			{
				__LIB_11__::func_448(1024);
			}
			else
			{
				func_149(&(iLocal_606[1]), iLocal_344, "molotov_b");
			}
			__LIB_11__::func_448(32);
		}
	}
	else
	{
		__LIB_0__::func_37(&(vLocal_652[2 /*3*/]));
		return true;
	}
	return false;
}

void func_126()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (__LIB_11__::func_446(268435456))
	{
		if (iLocal_24 != 7)
		{
			__LIB_1__::func_649(&iLocal_24, 7);
		}
	}
	switch (iLocal_24)
	{
		case 0:
			__LIB_1__::func_649(&iLocal_24, 1);
			break;
		case 1:
			if (__LIB_1__::func_313(&(vLocal_652[7 /*3*/]), 7.5f))
			{
				STREAMING::REQUEST_MODEL(joaat("S_M_M_AMBIENTSDPOLICE_01"), false);
				__LIB_11__::func_448(33554432);
				func_310(&iLocal_609, Local_37.f_51, &uLocal_598, &uLocal_602);
				__LIB_1__::func_649(&iLocal_24, 2);
			}
			else if (!__LIB_0__::func_75(&(vLocal_652[7 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_652[7 /*3*/]));
			}
			break;
		case 2:
			if (__LIB_0__::func_75(&(vLocal_652[5 /*3*/])))
			{
				if (__LIB_1__::func_871(&(vLocal_652[5 /*3*/])) < 1000)
				{
					return;
				}
				else
				{
					iLocal_31++;
					__LIB_1__::func_148(&(vLocal_652[5 /*3*/]));
				}
			}
			else
			{
				iLocal_31++;
				__LIB_1__::func_148(&(vLocal_652[5 /*3*/]));
			}
			iVar3 = ITEMSET::CREATE_ITEMSET(false);
			LAW::_0x0C392DB374655176(__LIB_3__::func_179(&Local_37), 60f, iVar3);
			iVar1 = 0;
			while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(iVar3))
			{
				iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar3);
				iLocal_592 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(iVar2));
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_592))
				{
					__LIB_11__::func_448(67108864);
					AUDIO::_PLAY_SOUND_FROM_ENTITY("POLICE_WHISTLE_SINGLE", iLocal_592, "NBD1_Sounds", false, 0, 0);
					__LIB_2__::func_315(-805893667, iLocal_592, 1);
					__LIB_1__::func_649(&iLocal_24, 5);
				}
				iVar1++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar3);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_592) || ENTITY::IS_ENTITY_DEAD(iLocal_592))
			{
				if (iLocal_31 >= 10)
				{
					__LIB_1__::func_649(&iLocal_24, 3);
				}
			}
			break;
		case 3:
			if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_AMBIENTSDPOLICE_01")))
			{
				iLocal_592 = __LIB_3__::func_370(joaat("S_M_M_AMBIENTSDPOLICE_01"), func_312(), 0f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_592))
				{
					__LIB_1__::func_649(&iLocal_24, 4);
				}
				else
				{
					__LIB_1__::func_649(&iLocal_24, 2);
				}
			}
			break;
		case 4:
			if (ENTITY::IS_ENTITY_DEAD(iLocal_592))
			{
				__LIB_11__::func_448(-2147483648);
				__LIB_1__::func_649(&iLocal_24, 7);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar4);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_37.f_51, 2f, -1, 10f, 0, 40000f);
				TASK::TASK_INVESTIGATE(0, Local_37.f_51, 8000, 1);
				TASK::TASK_INVESTIGATE(0, 2510.293f, -1208.031f, 51.47769f, 12000, 1);
				TASK::TASK_INVESTIGATE(0, 2510.57f, -1197.194f, 51.47652f, 8000, 1);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				__LIB_1__::func_474(iLocal_592, &iVar4, 0, 0, 1, 1);
				__LIB_7__::func_904(&iLocal_592, 1);
				PED::_0xB8B6430EAD2D2437(iLocal_592, -1797934587);
				PED::_0x24C82EF607105FAA(iLocal_592, joaat("SCRIPTEDOUTLAW"));
				LAW::_0x819ADD5EF1742F47(iLocal_592, 259);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_592, false);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_592, 512, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_592, 58, true);
				__LIB_2__::func_290(&uLocal_624);
				__LIB_2__::func_181(&uLocal_624, 1);
				__LIB_2__::func_110(&uLocal_624, 1);
				__LIB_2__::func_105(&uLocal_624, 1);
				__LIB_2__::func_51(&uLocal_624, 1);
				__LIB_11__::func_448(67108864);
				AUDIO::_PLAY_SOUND_FROM_ENTITY("POLICE_WHISTLE_SINGLE", iLocal_592, "NBD1_Sounds", false, 0, 0);
				__LIB_2__::func_315(-805893667, iLocal_592, 1);
				__LIB_1__::func_649(&iLocal_24, 5);
			}
			break;
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_592))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_592) || func_94(iLocal_592, 0, &uLocal_624, &uVar0, 0, 0))
				{
					__LIB_11__::func_448(-2147483648);
					__LIB_1__::func_649(&iLocal_24, 7);
				}
				else if (__LIB_0__::func_94(iLocal_592, func_282(0), 1) < 20f)
				{
					iVar5 = 0;
					while (iVar5 < iLocal_610)
					{
						FIRE::REMOVE_SCRIPT_FIRE(iLocal_610[iVar5]);
						iVar5++;
					}
					__LIB_11__::func_448(1073741824 /* Float: 2f */);
					__LIB_1__::func_649(&iLocal_24, 6);
				}
			}
			else
			{
				__LIB_11__::func_448(-2147483648);
				__LIB_1__::func_649(&iLocal_24, 7);
			}
			break;
		case 6:
			if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_592) || ENTITY::IS_ENTITY_DEAD(iLocal_592)) || func_94(iLocal_592, 0, &uLocal_624, &uVar0, 0, 0))
			{
				__LIB_11__::func_448(-2147483648);
				__LIB_1__::func_649(&iLocal_24, 7);
			}
			break;
		case 7:
			break;
	}
}

bool func_127()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!__LIB_11__::func_446(1048576))
		{
			if (!__LIB_11__::func_446(64) && __LIB_2__::func_118(uLocal_584[iVar0], 1, 1) < 8f)
			{
				iLocal_621 = iVar0;
				__LIB_11__::func_448(1048576);
			}
		}
		func_318(iVar0);
		iVar0++;
	}
	if ((uLocal_19[0] == 8 && uLocal_19[2] == 8) && uLocal_19[1] == 8)
	{
		return true;
	}
	return false;
}

void func_128()
{
	int iVar0;
	__LIB_11__::func_448(536870912);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_584[iVar0]))
		{
			func_150(iVar0, 1);
		}
		iVar0++;
	}
}

int func_129(var uParam0)
{
	if (!__LIB_2__::func_1((*uParam0)[0], 0, 1) || PED::_IS_PED_LASSOED((*uParam0)[0]))
	{
		return 1;
	}
	if (!__LIB_2__::func_1((*uParam0)[2], 0, 1) || PED::_IS_PED_LASSOED((*uParam0)[2]))
	{
		return 1;
	}
	if (!__LIB_2__::func_1((*uParam0)[1], 0, 1) || PED::_IS_PED_LASSOED((*uParam0)[1]))
	{
		return 1;
	}
	return 0;
}

int func_130(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (iParam4 < 0 || iParam4 >= *uParam0)
	{
		iParam4 = (*uParam0 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (__LIB_3__::func_722((*uParam0)[iVar0], iParam1, iParam2, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_132(int iParam0)
{
	return __LIB_0__::func_27(iLocal_28, iParam0);
}

bool func_133()
{
	if ((!__LIB_2__::func_1(uLocal_584[0], 0, 1) && !__LIB_2__::func_1(uLocal_584[1], 0, 1)) && !__LIB_2__::func_1(uLocal_584[2], 0, 1))
	{
		return true;
	}
	return false;
}

void func_149(var uParam0, int iParam1, char* sParam2)
{
	if ((((ENTITY::DOES_ENTITY_EXIST(*uParam0) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1, false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*uParam0, iParam1)) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam1, sParam2, *uParam0);
	}
}

void func_150(int iParam0, bool bParam1)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(uLocal_584[iParam0]))
	{
		return;
	}
	__LIB_3__::func_141(uLocal_584[iParam0], 1088421888 /* Float: 7f */, 0, 0);
	__LIB_2__::func_603(&(uLocal_584[iParam0]), &(Local_357[iParam0 /*75*/]), &(Local_357[iParam0 /*75*/].f_21), 1, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_584[iParam0], 7, 0, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_584[iParam0], 18, 0, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_584[iParam0], false);
	PED::_0xE737D5F14304A2EC(uLocal_584[iParam0], PLAYER::GET_PLAYER_INDEX(), 120000);
	PED::_0xB8B6430EAD2D2437(uLocal_584[iParam0], -1143783207);
	PED::_0x24C82EF607105FAA(uLocal_584[iParam0], joaat("AGGRESSIVE"));
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_588[iParam0]) && __LIB_2__::func_825(Global_35) != uLocal_588[iParam0])
	{
		TASK::TASK_MOUNT_ANIMAL(0, uLocal_588[iParam0], 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
	}
	if (bParam1)
	{
		TASK::_TASK_MOVE_IN_TRAFFIC_2(0, func_328(), 2f, 2.5f, 0, Local_37.f_46);
	}
	TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 16, Local_37.f_46);
	__LIB_1__::func_474(uLocal_584[iParam0], &iVar0, 0, 0, 1, 1);
	PED::SET_PED_KEEP_TASK(uLocal_584[iParam0], true);
}

void func_152(int iParam0, int iParam1)
{
	if (!func_191(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 || iParam1);
}

bool func_154(var uParam0, var uParam1)
{
	if (func_61(uParam0->f_3, 16777216))
	{
		if (__LIB_1__::func_509(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("G_M_M_UNIBRONTEGOONS_01"))
		{
			return true;
		}
	}
	return false;
}

void func_158(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_171))
	{
		__LIB_3__::func_142(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	__LIB_3__::func_264(uParam0);
	__LIB_3__::func_311(uParam0);
	__LIB_3__::func_252(uParam0);
	if (!func_335(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		__LIB_1__::func_222(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		__LIB_1__::func_345();
	}
	if (!func_337(uParam0->f_3) && !func_61(uParam0->f_3, 256))
	{
		__LIB_2__::func_115(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	__LIB_0__::func_172(uParam0->f_173);
	__LIB_0__::func_172(uParam0->f_172);
}

Vector3 func_176(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_191(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (__LIB_2__::func_786(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (__LIB_2__::func_789(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return Global_1310750.f_13358[iVar0 /*3*/];
}

void func_177(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	if (func_61(iParam0, 32))
	{
		if (__LIB_3__::func_189(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { __LIB_3__::func_190(Global_35, &(uParam1->f_12)) };
				if (!__LIB_0__::func_86(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		__LIB_3__::func_261(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_237(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, __LIB_0__::func_93());
		if (__LIB_0__::func_1(Global_1310750[iParam0 /*111*/], 33554432))
		{
			__LIB_2__::func_213(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			__LIB_2__::func_213(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (func_61(iParam0, 1))
		{
			__LIB_2__::func_119(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	func_354(iParam0);
}

bool func_178(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	*uParam1 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(*uParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/].f_1 != -1)
		{
			__LIB_3__::func_191(uParam1, Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/]);
		}
		iVar0++;
	}
	if (func_87(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(func_356(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(func_356(iParam0));
		fVar1 = 60f;
	}
	TASK::_0x9B6A58FDB0024F12(*uParam1, 35f);
	TASK::_0x954451EA2D2120FB(*uParam1, fVar2);
	TASK::_0x0F4F6C4CE471259D(*uParam1, (fVar2 + fVar1));
	TASK::_0x4A7D73989F52EB37(*uParam1, (fVar2 + 10f));
	TASK::_0x8F8C84363810691A(*uParam1, 7f);
	TASK::_0x2B8AF29A78024BD3(*uParam1);
	return true;
}

void func_179(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_357(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*iParam3 = 2500;
			break;
		case 1:
			if (!func_61(iParam0, 1))
			{
				if (func_87(iParam0, 2))
				{
				}
			}
			func_358(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_359(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_359(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_109(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_180(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < __LIB_2__::func_786(iParam1))
	{
		if (!__LIB_3__::func_192(iParam1, iVar0))
		{
			vVar4 = { func_176(iParam1, iVar0) };
			if (!__LIB_0__::func_86(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_186(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_361(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!__LIB_0__::func_86(vVar4))
	{
	}
	return vVar1;
}

int func_183(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 0;
	while (iVar0 < __LIB_2__::func_786(iParam0))
	{
		vVar1 = { func_176(iParam0, iVar0) };
		if (__LIB_0__::func_175(vVar1, vParam1, 1056964608 /* Float: 0.5f */, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_186(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	fVar3 = (fParam0 * fParam0);
	func_179(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_61(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_188(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_364(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_365(iParam0, uParam2))
	{
		return false;
	}
	if (!__LIB_3__::func_402(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!__LIB_3__::func_254(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

bool func_190(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return true;
				case 2:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return true;
					return false;
				}
bool func_191(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_209(int iParam0, int iParam1)
{
	float fVar0;
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0 /*8*/].f_1++;
	if (func_61(iParam0, 2))
	{
		__LIB_3__::func_255(iParam0, __LIB_3__::func_372(iParam1));
	}
	else
	{
		func_386(iParam0, __LIB_1__::func_898());
	}
	fVar0 = (1f + (BUILTIN::TO_FLOAT((Global_17504.f_42[iParam0 /*8*/].f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	__LIB_2__::func_212(iParam0, Global_1310750[iParam0 /*111*/].f_36, fVar0, 1, 0);
	func_388(iParam0, 0);
	__LIB_3__::func_196(iParam0);
	__LIB_1__::func_142(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(true);
	}
	AUDIO::_0x33D51F801CB16E4F();
	Global_1310750[iParam0 /*111*/].f_110 |= 4;
	Global_17504.f_6 = iParam0;
	Global_17504.f_10 = 1;
	Global_17504.f_7 = 0;
	Global_17504.f_8 = 0;
	if (!func_61(iParam0, 16))
	{
		func_210(iParam0, 0, 0, 0, 0);
	}
}

void func_210(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	if (bParam1)
	{
	}
	if (__LIB_0__::func_72() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_191(iVar1) && !func_61(iVar1, iParam2)) && (!bParam3 || !func_227(iVar1))) && (!bParam4 || !func_392(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_393(iVar0);
			}
		}
		iVar0++;
	}
}

void func_212(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || __LIB_0__::func_1(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (func_61(uParam0->f_3, 1073741824 /* Float: 2f */))
			{
				func_394(2, -1, 0, 0, 0);
			}
			else
			{
				func_394(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_394(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!__LIB_0__::func_563(1, uParam0->f_177))
				{
					__LIB_3__::func_197(16, uParam0->f_177);
					__LIB_3__::func_198(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(__LIB_2__::func_31(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_394(8, -1, 0, 0, 0);
	}
}

float func_215(var uParam0, bool bParam1)
{
	float fVar0;
	if (uParam0->f_119 == -1f)
	{
		if (func_61(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_61(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_61(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_61(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_61(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_61(uParam0->f_3, 1))
		{
		}
		else if (func_61(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

bool func_227(int iParam0)
{
	if (!func_191(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_73(64) && func_420(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

float func_237(int iParam0)
{
	if (!func_191(iParam0))
	{
		return 0f;
	}
	if (!__LIB_3__::func_207(iParam0))
	{
		return 0f;
	}
	return Global_1310750[iParam0 /*111*/].f_44;
}

char* func_271(char* sParam0, char* sParam1)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (__LIB_3__::func_628(0))
		{
			return sParam1;
		}
	}
	return sParam0;
}

int func_279(int iParam0, char* sParam1, int iParam2, float fParam3)
{
	vector3 vVar0;
	if (!__LIB_11__::func_446(iParam2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_606[iParam0]) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_606[iParam0], iLocal_344))
		{
			if (fParam3 > func_281(iParam0))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_344, sParam1, iLocal_606[iParam0]);
				OBJECT::DELETE_OBJECT(&(iLocal_606[iParam0]));
				vVar0 = { 2519.15f, -1202.25f, 53.8082f };
				if (iParam2 == 4096)
				{
					vVar0 = { 2518.21f, -1203.14f, 53.5364f };
				}
				FIRE::ADD_EXPLOSION(vVar0, 2, 1f, true, false, 0f);
				__LIB_11__::func_448(iParam2);
				return 1;
			}
		}
	}
	return 0;
}

float func_281(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.207f;
		case 1:
			return 0.161f;
		default:
			break;
	}
	return 1f;
}

Vector3 func_282(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2517.861f, -1202.164f, 52.68853f;
		case 1:
			return 2519.408f, -1200.605f, 52.68279f;
		case 2:
			return 2519.388f, -1203.811f, 52.72557f;
		case 3:
			return 2514.214f, -1200.774f, 52.69635f;
		case 4:
			return 2514f, -1203.692f, 53.06476f;
		case 5:
			return 2516.709f, -1200.125f, 53.47194f;
		case 6:
			return 2516.749f, -1203.767f, 53.43932f;
		default:
			break;
	}
	return 2517.861f, -1202.164f, 52.68853f;
}

int func_284(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_467(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_2__::func_588(iParam1, uParam3, uParam0);
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

void func_289(int iParam0)
{
	if (!func_132(iParam0))
	{
		__LIB_1__::func_683(&iLocal_28, iParam0);
	}
}

bool func_293(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bVar1 = false;
	fVar2 = func_215(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 && __LIB_3__::func_248())
	{
		bVar1 = true;
		fVar3 = __LIB_0__::func_514(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				__LIB_3__::func_336(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			__LIB_3__::func_336(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
		}
		if (__LIB_3__::func_280(&(uParam0->f_121), iParam4, fParam1))
		{
			__LIB_3__::func_164(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(__LIB_3__::func_167(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_121[iVar0 /*9*/].f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_121[iVar0 /*9*/].f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) && !(bParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						func_88(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				__LIB_3__::func_164(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(__LIB_3__::func_167(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_299(int iParam0, float fParam1)
{
	if ((((!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_344, true, false) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_344, false)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_344, false)) || ENTITY::IS_ENTITY_DEAD(uLocal_584[iParam0])) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_584[iParam0], iLocal_344))
	{
		return false;
	}
	if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_344, func_28(iParam0)))
	{
		return false;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_584[iParam0], joaat("ENDSINRUN")) || fParam1 > func_481(iParam0))
	{
		return true;
	}
	return false;
}

Vector3 func_300(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2508.554f, -1215.838f, 49.68982f;
		case 1:
			return 2506.861f, -1215.717f, 49.68729f;
		case 2:
			return 2507.709f, -1215.844f, 49.68983f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_301(var uParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	if (__LIB_2__::func_1(*uParam0, 0, 1))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (iParam7 != joaat("MOTIONSTATE_IDLE"))
		{
			TASK::TASK_FORCE_MOTION_STATE(0, iParam7, false);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam2))
		{
			TASK::TASK_MOUNT_ANIMAL(0, iParam2, -1, -1, iParam6, iParam8, 0, 0);
		}
		else
		{
			TASK::TASK_SMART_FLEE_COORD(0, vParam3, -1f, -1, false, 1077936128);
		}
		__LIB_1__::func_474(*uParam0, &iVar0, 0, 0, 1, 1);
	}
}

void func_307()
{
	bool bVar0;
	int iVar1;
	if (iLocal_623 == 1024 && __LIB_2__::func_1(uLocal_584[1], 0, 1))
	{
		if (func_32(uLocal_584[1], Global_35, 4096, 0, 1073741824 /* Float: 2f */, 1))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (__LIB_2__::func_1(uLocal_584[iVar1], 0, 0))
		{
			func_30(iVar1, "Default_Panic", func_484(iVar1), func_308(iVar1));
			if (!bVar0 && !__LIB_0__::func_27(iLocal_28, 2048))
			{
				if (func_32(uLocal_584[iVar1], Global_35, 2048, 0, 1073741824 /* Float: 2f */, 1))
				{
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
}

float func_308(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0.2f;
		case 0:
			return 0.65f;
		case 2:
			return 0.9f;
		default:
			break;
	}
	return 1f;
}

void func_310(int* iParam0, vector3 vParam1, var uParam4, var uParam5)
{
	int iVar0;
	if (MISC::CREATE_INCIDENT(6, vParam1, 5, 120f, iParam0, -1082130432 /* Float: -1f */, 1))
	{
	}
	if (MISC::IS_INCIDENT_VALID(*iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (VOLUME::_DOES_VOLUME_EXIST((*uParam4)[iVar0]))
		{
			POPULATION::_0x74C2B3DC0B294102((*uParam4)[iVar0]);
			PED::REMOVE_SCENARIO_BLOCKING_AREA((*uParam5)[iVar0], false);
		}
		iVar0++;
	}
}

Vector3 func_312()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vVar0 = { 2517.558f, -1151.364f, 49.23265f };
	vVar3 = { 2527.668f, -1234.354f, 49.05905f };
	vVar6 = { 2470.06f, -1188.935f, 47.19112f };
	if (__LIB_3__::func_332(vVar0, 1) > __LIB_3__::func_332(vVar3, 1))
	{
		if (__LIB_3__::func_332(vVar0, 1) > __LIB_3__::func_332(vVar6, 1))
		{
			return vVar0;
		}
	}
	else if (__LIB_3__::func_332(vVar3, 1) > __LIB_3__::func_332(vVar3, 1))
	{
		return vVar3;
	}
	return vVar6;
}

void func_318(int iParam0)
{
	if (!__LIB_2__::func_1(uLocal_584[iParam0], 0, 1))
	{
		if (uLocal_19[iParam0] != 8)
		{
			__LIB_0__::func_19(&(uLocal_19[iParam0]), 8, iParam0);
		}
		return;
	}
	if (__LIB_11__::func_446(1048576))
	{
		if (iLocal_621 == iParam0)
		{
			if (!__LIB_11__::func_446(2097152))
			{
				__LIB_1__::func_148(&(vLocal_652[6 /*3*/]));
				__LIB_11__::func_448(2097152);
				__LIB_0__::func_19(&(uLocal_19[iParam0]), 5, iParam0);
			}
		}
	}
	switch (uLocal_19[iParam0])
	{
		case 0:
			__LIB_0__::func_325(&(uLocal_593[iParam0]));
			__LIB_2__::func_451(&(Local_357[iParam0 /*75*/]), 0);
			__LIB_0__::func_19(&(uLocal_19[iParam0]), 2, iParam0);
			break;
		case 1:
			if (func_487(uLocal_584[iParam0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_588[iParam0]) && !PED::IS_PED_ON_MOUNT(uLocal_584[iParam0]))
				{
					TASK::TASK_MOUNT_ANIMAL(uLocal_584[iParam0], uLocal_588[iParam0], -1, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
				}
			}
			else
			{
				func_301(&(uLocal_584[iParam0]), iParam0, uLocal_588[iParam0], func_300(iParam0), 2f, joaat("MOTIONSTATE_IDLE"), 1);
			}
			__LIB_0__::func_19(&(uLocal_19[iParam0]), 2, iParam0);
			break;
		case 2:
			func_488(&(uLocal_584[iParam0]), &uLocal_680, 1092616192 /* Float: 10f */);
			if (func_489(iParam0))
			{
				func_490(uLocal_588[iParam0]);
				__LIB_0__::func_19(&(uLocal_19[iParam0]), 3, iParam0);
			}
			else if (!__LIB_0__::func_163(uLocal_584[iParam0], 242628503))
			{
				func_301(&(uLocal_584[iParam0]), iParam0, uLocal_588[iParam0], func_300(iParam0), 2f, joaat("MOTIONSTATE_IDLE"), 1);
			}
			break;
		case 3:
			if (__LIB_0__::func_396(uLocal_584[iParam0]))
			{
				TASK::CLEAR_PED_TASKS(uLocal_588[iParam0], true, false);
				func_494(uLocal_584[iParam0], func_493(), func_328(), 2.5f);
				__LIB_0__::func_19(&(uLocal_19[iParam0]), 4, iParam0);
			}
			else if (!func_489(iParam0))
			{
				__LIB_0__::func_19(&(uLocal_19[iParam0]), 2, iParam0);
			}
			break;
		case 4:
			if (!__LIB_11__::func_446(4194304))
			{
				if (__LIB_0__::func_94(uLocal_584[iParam0], func_493(), 1) < 10f)
				{
					__LIB_3__::func_286(uLocal_588[iParam0]);
					func_495(uLocal_584[iParam0], func_328(), 2.5f);
					__LIB_0__::func_19(&(uLocal_19[iParam0]), 7, iParam0);
				}
				else if (!PED::IS_PED_ON_MOUNT(uLocal_584[iParam0]))
				{
					__LIB_0__::func_19(&(uLocal_19[iParam0]), 2, iParam0);
				}
			}
			break;
		case 5:
			func_488(&(uLocal_584[iParam0]), &uLocal_680, 20f);
			if (!__LIB_11__::func_446(64))
			{
				func_32(uLocal_584[iParam0], Global_35, 128, 0, 1073741824 /* Float: 2f */, 1);
				__LIB_0__::func_19(&(uLocal_19[iParam0]), 6, iParam0);
			}
			break;
		case 6:
			func_488(&(uLocal_584[iParam0]), &uLocal_680, 20f);
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				__LIB_0__::func_19(&(uLocal_19[iParam0]), 1, iParam0);
			}
			break;
		case 7:
			if (((uLocal_19[0] == 7 || uLocal_19[0] == 8) && (uLocal_19[2] == 7 || uLocal_19[2] == 8)) && (uLocal_19[1] == 7 || uLocal_19[1] == 8))
			{
				func_150(iParam0, 1);
				__LIB_0__::func_19(&(uLocal_19[iParam0]), 8, iParam0);
			}
			break;
		case 8:
			break;
	}
}

Vector3 func_328()
{
	return 2404.442f, -1279.21f, 44.55359f;
}

bool func_335(var uParam0)
{
	if (__LIB_3__::func_211(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		__LIB_3__::func_373(uParam0->f_3);
		func_212(uParam0, 0, 1);
		func_505(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		__LIB_0__::func_703(0, 0);
		return true;
	}
	return false;
}

bool func_337(int iParam0)
{
	if (!func_191(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

void func_354(int iParam0)
{
	if (!func_191(iParam0))
	{
		return;
	}
	__LIB_3__::func_212(iParam0);
}

int func_356(int iParam0)
{
	if (func_87(iParam0, 2))
	{
		return 200;
	}
	if (func_87(iParam0, 4))
	{
		return 70;
	}
	if (func_87(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_357(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (func_61(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (__LIB_1__::func_898() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_61(iParam0, 2);
		bVar1 = func_61(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!__LIB_1__::func_923())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_358(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam0 = 45f;
		*fParam1 = 135f;
	}
	else
	{
		*fParam0 = 45f;
		*fParam1 = 125f;
	}
	if (func_87(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_359(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam1 = 240f;
	}
	else
	{
		*fParam1 = 215f;
	}
	*fParam0 = 110f;
	if (func_87(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 110f));
	}
	else if (func_87(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_361(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;
	if (__LIB_0__::func_86(vParam1))
	{
		return false;
	}
	if (func_364(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return false;
		}
	}
	fVar0 = BUILTIN::VDIST2(vParam1, Global_36);
	if (func_109(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return true;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return true;
	}
	return false;
}

bool func_364(int iParam0, vector3 vParam1)
{
	int iVar0;
	if (!func_61(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (__LIB_1__::func_989(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_61(iParam0, 33554432))
	{
		if (__LIB_3__::func_213(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_365(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	iVar0 = 1;
	if (func_87(iParam0, 128))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, false))
		{
			return false;
		}
		if (MISC::_0xBBE5B63EFFB08E68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return false;
			}
		}
	}
	if (func_61(iParam0, 1) && !func_61(iParam0, 2))
	{
		if (func_61(iParam0, 4096) || func_61(iParam0, 2048))
		{
			if (__LIB_3__::func_214(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

void func_386(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 != -1 && !func_87(iParam0, 8192))
	{
		iVar0 = __LIB_3__::func_148(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/]++;
	}
}

void func_388(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_61(iParam0, 262144))
	{
		if (Global_1392135.f_3 == -1)
		{
			func_544(262144, iVar0, 0, 1);
		}
	}
	if (func_61(iParam0, 128))
	{
		func_544(128, iVar0, 0, 1);
	}
	else if (func_61(iParam0, 524288))
	{
		func_544(524288, iVar0, 0, 1);
	}
	else if (func_61(iParam0, 536870912))
	{
		func_544(536870912, iVar0, 0, 1);
	}
	else if (func_61(iParam0, 4194304))
	{
		func_544(4194304, iVar0, 0, 1);
	}
	else if (func_61(iParam0, 8388608))
	{
		func_544(8388608, iVar0, 0, 1);
	}
}

bool func_392(int iParam0)
{
	if (!func_191(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_393(int iParam0)
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_191(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	__LIB_0__::func_74(iParam0);
	Global_1310750.f_16037 = (Global_1310750.f_16037 - 1);
}

void func_394(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	__LIB_0__::func_47(&Global_1393447, 1);
	__LIB_2__::func_175();
	__LIB_2__::func_176();
	__LIB_2__::func_30((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (__LIB_0__::func_485() / 1000);
		if (Global_1392135.f_1 & 4 != 0)
		{
			Global_1392135.f_1 = (Global_1392135.f_1 - Global_1392135.f_1 & 4);
		}
		func_551();
		if (iParam1 == -1)
		{
			if (__LIB_0__::func_27(iParam0, 1))
			{
				func_544(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (__LIB_0__::func_27(iParam0, 2))
			{
				func_544(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (__LIB_0__::func_27(iParam0, 4))
			{
				func_544(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			__LIB_2__::func_209(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		__LIB_1__::func_980(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		__LIB_1__::func_980((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

bool func_420(int iParam0)
{
	return func_61(iParam0, Global_1310750.f_16072 | 64);
}

int func_467(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_467(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

float func_481(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.3296f;
		case 2:
			return 0.3417f;
		case 1:
			return 0.3296f;
		default:
			break;
	}
	return 1f;
}

float func_484(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0f;
		case 0:
			return 0.25f;
		case 2:
			return 0.5f;
		default:
			break;
	}
	return 0f;
}

bool func_487(int iParam0)
{
	vector3 vVar0;
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	if (__LIB_0__::func_195(2504.11f, -1219.836f, 48.18182f, 2507.791f, -1219.848f, 48.18226f, vVar0))
	{
		return false;
	}
	return true;
}

void func_488(var uParam0, var uParam1, float fParam2)
{
	if (!__LIB_2__::func_1(*uParam0, 0, 1))
	{
		return;
	}
	if (__LIB_2__::func_118(*uParam0, 1, 1) < fParam2)
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, uParam1);
	}
}

bool func_489(int iParam0)
{
	if (!__LIB_0__::func_71(uLocal_584[iParam0]))
	{
		return false;
	}
	else if (!__LIB_0__::func_71(uLocal_584[iParam0]))
	{
		return false;
	}
	else if (!__LIB_0__::func_71(uLocal_584[iParam0]))
	{
		return false;
	}
	return true;
}

void func_490(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, 2492.879f, -1261.992f, 48.14098f, 1.75f, -1, 5f, 0, 40000f);
	}
}

Vector3 func_493()
{
	return 2434.582f, -1247.374f, 44.91811f;
}

void func_494(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vParam1, 6f, fParam7, 272, 0);
		TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vParam4, 10f, fParam7, 272, 0);
		__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
	}
}

void func_495(int iParam0, vector3 vParam1, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::_TASK_MOVE_IN_TRAFFIC_2(iParam0, vParam1, 2f, fParam4, 0, 0);
	}
}

void func_505(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750.f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (Global_17504.f_42[iParam0 /*8*/] == 0)
	{
		__LIB_0__::func_15(__LIB_0__::func_14(joaat("UNIQUE_BEATS_COMPLETED")), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0 /*8*/]++;
	Global_1310750[iParam0 /*111*/].f_110 |= 8;
	if (func_61(iParam0, 2))
	{
		__LIB_3__::func_218(iParam0, __LIB_3__::func_372(iParam3));
	}
	if (func_61(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = __LIB_1__::func_898();
		}
		func_609(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_87(iParam0, 65536))
	{
		__LIB_3__::func_219(iParam0, iParam1);
		func_611(iParam0, func_176(iParam0, iParam1));
		__LIB_2__::func_29(128);
	}
	__LIB_2__::func_212(iParam0, Global_1310750[iParam0 /*111*/].f_37, 1065353216 /* Float: 1f */, 0, 0);
	func_388(iParam0, 1);
	if (!bParam2)
	{
		__LIB_2__::func_29(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_612(524288);
	}
	if (__LIB_3__::func_220(iParam0) != 0)
	{
		if (Global_17504.f_42[iParam0 /*8*/] >= __LIB_3__::func_220(iParam0))
		{
			Global_17504.f_42[iParam0 /*8*/].f_6 = 1;
		}
	}
}

void func_544(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (__LIB_0__::func_1(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_337(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_636(iVar0) < __LIB_1__::func_984(iParam1))
				{
					iVar1 = 1;
				}
			}
			__LIB_2__::func_212(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_551()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_61(iVar0, 16777216))
		{
			if (!__LIB_2__::func_62(iVar0))
			{
				func_642(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_609(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 != -1 && !func_87(iParam0, 8192))
	{
		iVar0 = __LIB_3__::func_148(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/].f_1++;
	}
}

void func_611(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (func_61(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (__LIB_0__::func_86(vParam1))
	{
		return;
	}
	if (!func_191(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { Global_17504.f_2084[iVar0 /*5*/] };
		if (__LIB_0__::func_86(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0 /*5*/].f_3 == iParam0)
		{
			if (__LIB_0__::func_175(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		Global_17504.f_2084[iVar1 /*5*/] = { vParam1 };
		Global_17504.f_2084[iVar1 /*5*/].f_3 = iParam0;
		Global_17504.f_2084[iVar1 /*5*/].f_4 = Global_1310750[iParam0 /*111*/].f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17504.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				Global_17504.f_2084[iVar0 /*5*/] = { vParam1 };
				Global_17504.f_2084[iVar0 /*5*/].f_3 = iParam0;
				Global_17504.f_2084[iVar0 /*5*/].f_4 = Global_1310750[iParam0 /*111*/].f_62;
			}
			else
			{
				Global_17504.f_2084[iVar0 /*5*/] = { Global_17504.f_2084[iVar0 + 1 /*5*/] };
			}
			iVar0++;
		}
	}
}

void func_612(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_642(iVar0, iParam0);
		iVar0++;
	}
}

int func_636(int iParam0)
{
	if (func_191(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

void func_642(int iParam0, int iParam1)
{
	if (!func_191(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 - (Global_1310750[iParam0 /*111*/].f_1 && iParam1));
}

