#region Local Var
	int iLocal_0[4] = { 0, 0, 0, 0 };
	int iLocal_5[4] = { 0, 0, 0, 0 };
	int iLocal_10 = 0;
	int iLocal_11[4] = { 0, 0, 0, 0 };
	int iLocal_16[4] = { 0, 0, 0, 0 };
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = -1;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 1097859072;
	var uLocal_46 = 1000;
	var uLocal_47 = 1067450368;
	var uLocal_48 = 5000;
	var uLocal_49 = 42;
	var uLocal_50 = 1103626240;
	var uLocal_51 = 1077936128;
	var uLocal_52 = 1106247680;
	var uLocal_53 = 1103101952;
	var uLocal_54 = 1097859072;
	var uLocal_55 = 1103626240;
	int iLocal_56 = 0;
	bool bLocal_57 = false;
	bool bLocal_58 = false;
	bool bLocal_59 = false;
	bool bLocal_60 = false;
	bool bLocal_61 = false;
	bool bLocal_62 = false;
	bool bLocal_63 = false;
	bool bLocal_64 = false;
	bool bLocal_65 = false;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iLocal_66 = -1;
	iLocal_67 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		switch (iLocal_10)
		{
			case 0:
				__LIB_4__::func_228(&uLocal_28);
				__LIB_1__::func_403(&uLocal_28, 1);
				iLocal_23 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1409f, -958f, 68f, 0f, 0f, 29f, 1000f, 500f, 100f, "pre_sean1_trigger");
				iLocal_24 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("pre_sean1_squad1");
				VOLUME::_0xBCE668AAF83608BE(iLocal_24, -1374.059f, -964.364f, 70.254f, 0f, 0f, 41f, 90f, 45f, 40f);
				VOLUME::_0xBCE668AAF83608BE(iLocal_24, -1447.488f, -944.557f, 70.254f, 0f, 0f, -18f, 34f, 13f, 40f);
				iLocal_25 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1179.357f, -1230.73f, 73.20396f, 0f, 0f, 0f, 170f, 170f, 40f, "pre_sean1_squad2");
				iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1413.668f, -962.834f, 62.681f, 0f, 0f, 61.59f, 105.15f, 74.578f, 12.986f, "pre_sean1_help");
				PED::_0xED9582B3DA8F02B4(8);
				STREAMING::REQUEST_MODEL(__LIB_12__::func_444(), false);
				STREAMING::REQUEST_MODEL(func_4(), false);
				STREAMING::REQUEST_MODEL(func_5(), false);
				TASK::REQUEST_WAYPOINT_RECORDING("pre_sean1_0");
				TASK::REQUEST_WAYPOINT_RECORDING("pre_sean1_1");
				iLocal_10 = 1;
				break;
			case 1:
				if ((((STREAMING::HAS_MODEL_LOADED(__LIB_12__::func_444()) && STREAMING::HAS_MODEL_LOADED(func_4())) && STREAMING::HAS_MODEL_LOADED(func_5())) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("pre_sean1_0")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("pre_sean1_1"))
				{
					iLocal_10 = 2;
				}
				break;
			case 2:
				if (PED::_0x5C16855277819BBF() >= 8)
				{
					if (func_6())
					{
						iLocal_10 = 3;
					}
				}
				break;
			case 3:
				func_7();
				if (!bLocal_65)
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_26, true, 0))
					{
						func_8();
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (MAP::DOES_BLIP_EXIST(iLocal_16[iVar0]))
							{
								if (MAP::IS_BLIP_ON_MINIMAP(iLocal_16[iVar0]))
								{
									func_8();
								}
							}
							iVar0++;
						}
					}
				}
				break;
		}
		iVar2 = __LIB_0__::func_64(0);
		if (__LIB_1__::func_898() != 4 && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_23, true, 0))
		{
			bVar1 = true;
		}
		else if (iVar2 == 1 || iVar2 == 8)
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_4()
{
	return joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
}

int func_5()
{
	return joaat("A_C_HORSE_APPALOOSA_BLANKET");
}

bool func_6()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	bool bVar5;
	int iVar6;
	char* sVar7;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		switch (iVar0)
		{
			case 0:
				vVar1 = { -1382.028f, -960.3683f, 72.23132f };
				fVar4 = 15.37f;
				break;
			case 1:
				vVar1 = { -1384.83f, -962.4933f, 72.15043f };
				fVar4 = 44.21f;
				break;
			case 2:
				vVar1 = { -1182.325f, -1233.555f, 74.01484f };
				fVar4 = 20.7f;
				break;
			case 3:
				vVar1 = { -1182.054f, -1229.857f, 73.2746f };
				fVar4 = 80.2f;
				break;
		}
		bVar5 = true;
		if (iVar0 <= 1 && MISC::GET_GAME_TIMER() < Global_1934266.f_156)
		{
			bVar5 = false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5[iVar0]) && bVar5)
		{
			iVar6 = 0;
			if (iVar0 == 0 || iVar0 == 2)
			{
				iVar6 = func_4();
			}
			else
			{
				iVar6 = func_5();
			}
			iLocal_5[iVar0] = __LIB_1__::func_545(iVar6, vVar1, fVar4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			ENTITY::_SET_ENTITY_SOMETHING(iLocal_5[iVar0], true);
			return false;
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_0[iVar0]) && bVar5)
		{
			iLocal_0[iVar0] = __LIB_1__::func_545(__LIB_12__::func_444(), vVar1, fVar4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::_SET_PED_ON_MOUNT(iLocal_0[iVar0], iLocal_5[iVar0], -1, true);
			ENTITY::_SET_ENTITY_SOMETHING(iLocal_0[iVar0], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_0[iVar0], true);
			PED::SET_PED_KEEP_TASK(iLocal_0[iVar0], true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_0[iVar0], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_0[iVar0], joaat("REL_PINKERTONS"));
			WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_0[iVar0], __LIB_3__::func_672(4194304, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 500, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			LAW::_0x819ADD5EF1742F47(iLocal_0[iVar0], 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_0[iVar0], 167, true);
			PED::SET_PED_SEEING_RANGE(iLocal_0[iVar0], 35f);
			iLocal_16[iVar0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COP"), iLocal_0[iVar0]);
			MAP::_BLIP_SET_MODIFIER(iLocal_16[iVar0], -662251075);
			switch (iVar0)
			{
				case 0:
				case 2:
					sVar7 = "0373_S_M_M_PinLaw_01_WHITE_01";
					break;
				default:
					sVar7 = "0374_S_M_M_PinLaw_01_WHITE_02";
					break;
			}
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_0[iVar0], sVar7);
			switch (iVar0)
			{
				case 0:
					iLocal_21 = PED::CREATE_GROUP(0);
					PED::SET_GROUP_FORMATION(iLocal_21, 0);
					PED::SET_PED_AS_GROUP_LEADER(iLocal_0[iVar0], iLocal_21, false);
					break;
				case 2:
					iLocal_22 = PED::CREATE_GROUP(0);
					PED::SET_GROUP_FORMATION(iLocal_22, 0);
					PED::SET_PED_AS_GROUP_LEADER(iLocal_0[iVar0], iLocal_22, false);
					break;
			}
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_7()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	int iVar6;
	char* sVar7;
	if (!bLocal_61)
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_24, true, 0))
		{
			bLocal_61 = true;
			iLocal_70 = MISC::GET_GAME_TIMER();
		}
	}
	if (!bLocal_62)
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_25, true, 0))
		{
			bLocal_62 = true;
			iLocal_71 = MISC::GET_GAME_TIMER();
		}
	}
	bVar1 = false;
	if (!bLocal_60)
	{
		if (bLocal_57)
		{
			bVar1 = true;
		}
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_0__::func_272(iLocal_0[iVar0], 0))
		{
			switch (iLocal_11[iVar0])
			{
				case 0:
				case 1:
					if (iLocal_11[iVar0] == 0)
					{
						bVar2 = false;
						if (iVar0 <= 1)
						{
							if (bLocal_61)
							{
								iVar3 = iLocal_70;
								bVar2 = true;
							}
						}
						else if (bLocal_62)
						{
							iVar3 = iLocal_71;
							bVar2 = true;
						}
						if (bVar2)
						{
							switch (iVar0)
							{
								case 0:
									iVar4 = 400;
									break;
								case 1:
									iVar4 = 1200;
									break;
								case 2:
									iVar4 = 200;
									break;
								case 3:
									iVar4 = 2300;
									break;
							}
							if (MISC::GET_GAME_TIMER() >= (iVar3 + iVar4))
							{
								if (iVar0 <= 1)
								{
									sVar5 = "";
									switch (iVar0)
									{
										case 0:
											sVar5 = "pre_sean1_0";
											break;
										case 1:
											sVar5 = "pre_sean1_1";
											break;
									}
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_0[iVar0], sVar5, 0, 0, -1, 0, 0, -1);
								}
								else if (iVar0 == 2)
								{
									TASK::_TASK_MOVE_IN_TRAFFIC_2(iLocal_0[iVar0], -1577.927f, -1213.422f, 73.6259f, 1073741824 /* Float: 2f */, 1.5f, 0, 0);
								}
								else
								{
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_0[iVar0], iLocal_22);
								}
								func_22(iVar0, 1);
							}
						}
					}
					else if (iVar0 == 0)
					{
						if (!bLocal_63)
						{
							if (MISC::GET_GAME_TIMER() >= (iLocal_70 + 300000))
							{
								TASK::_TASK_MOVE_IN_TRAFFIC(iLocal_0[iVar0], 1f, 0, 0);
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_0[1], iLocal_21);
								bLocal_63 = true;
							}
						}
					}
					else if (iVar0 == 2)
					{
						if (!bLocal_64)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_0[iVar0], -1577.927f, -1213.422f, 73.6259f, 10f, 10f, 10f, false, false, 0))
							{
								TASK::_TASK_MOVE_IN_TRAFFIC(iLocal_0[iVar0], 1.5f, 0, 0);
								bLocal_64 = true;
							}
						}
					}
					if (iLocal_66 >= 0)
					{
						if (iLocal_66 == iVar0 || (iLocal_66 == func_23(iVar0) && MISC::GET_GAME_TIMER() >= iLocal_68 + 700))
						{
							func_22(iVar0, 2);
						}
					}
					break;
				case 2:
					if (iVar0 == iLocal_66)
					{
						if (!bLocal_58)
						{
							if (func_24(iLocal_0[iVar0], "WHO_GOES_THERE"))
							{
								bLocal_58 = true;
								iLocal_69 = MISC::GET_GAME_TIMER();
							}
						}
						else if (!bLocal_59)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_69 + 4000)
							{
								if (func_24(iLocal_0[iVar0], "ITS_DUTCHS_GANG_MALE_EXTREME"))
								{
									bLocal_59 = true;
									bLocal_60 = true;
									iLocal_69 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_0[iVar0], 242628503, true) == 8)
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_0[iVar0], Global_35, -1, 0, 51, 0);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_27);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_27);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_27);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_0[iVar0], iLocal_27);
					}
					break;
				case 3:
					if (!PED::IS_PED_IN_COMBAT(iLocal_0[iVar0], 0))
					{
						iVar6 = 0;
						if (iVar0 == iLocal_67)
						{
							iVar6 = 16384;
						}
						TASK::TASK_CLEAR_LOOK_AT(iLocal_0[iVar0]);
						TASK::TASK_COMBAT_PED(iLocal_0[iVar0], Global_35, iVar6, 0);
					}
					if (bVar1)
					{
						if (((iVar0 == iLocal_67 || func_23(iVar0) == iLocal_67) || iVar0 == iLocal_66) || func_23(iVar0) == iLocal_66)
						{
							sVar7 = "GENERIC_SHOCKED_HIGH";
							if ((bLocal_58 || iLocal_56 == 16384) && __LIB_0__::func_272(iLocal_0[func_23(iVar0)], 0))
							{
								sVar7 = "ITS_DUTCHS_GANG_MALE_EXTREME";
							}
							if (func_24(iLocal_0[iVar0], sVar7))
							{
								bVar1 = false;
								bLocal_60 = true;
							}
						}
					}
					break;
			}
			if (!bLocal_57)
			{
				if (func_25(iLocal_0[iVar0], 0, &uLocal_28, &iLocal_56, 0, 0))
				{
					iLocal_67 = iVar0;
					bLocal_57 = true;
					iLocal_72 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_66 < 0)
				{
					if (iVar0 == 0 || iVar0 == 2)
					{
						if (PED::_0x7F9B9791D4CB71F6(iLocal_0[iVar0], Global_35, 1, 0) == 1)
						{
							iLocal_66 = iVar0;
							iLocal_68 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if ((bLocal_59 && MISC::GET_GAME_TIMER() >= iLocal_69 + 1500) || MISC::GET_GAME_TIMER() >= iLocal_68 + 8000)
				{
					iLocal_67 = iLocal_66;
					bLocal_57 = true;
					iLocal_72 = MISC::GET_GAME_TIMER();
				}
			}
			else if (iLocal_11[iVar0] != 3)
			{
				if (iVar0 == iLocal_67 || MISC::GET_GAME_TIMER() >= iLocal_72 + 400)
				{
					func_22(iVar0, 3);
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_0[iVar0]))
		{
			bLocal_57 = true;
			iLocal_67 = iVar0;
		}
		iVar0++;
	}
}

void func_8()
{
	if (!__LIB_0__::func_474(120))
	{
		__LIB_10__::func_905(120, 0);
		bLocal_65 = true;
	}
}

void func_22(int iParam0, int iParam1)
{
	if (iParam0 <= 1)
	{
		Global_1934266.f_156 = (MISC::GET_GAME_TIMER() + 600000);
	}
	switch (iParam1)
	{
		case 3:
			PED::SET_PED_SEEING_RANGE(iLocal_0[iParam0], 60f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_0[iParam0], false);
			__LIB_3__::func_456(iLocal_0[iParam0]);
			break;
	}
	iLocal_11[iParam0] = iParam1;
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 0;
		case 2:
			return 3;
		case 3:
			return 2;
	}
	return -1;
}

bool func_24(int iParam0, char* sParam1)
{
	struct<7> Var0;
	int iVar8;
	if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0))
	{
		Var0.f_5 = 1;
		Var0.f_6 = 1;
		Var0 = sParam1;
		Var0.f_3 = -500314840;
		Var0.f_4 = Global_35;
		Var0.f_5 = 0;
		iVar8 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var0);
		if (iVar8 >= 0)
		{
			AUDIO::_0xB18FEC133C7C6C69(iVar8);
			return true;
		}
	}
	return false;
}

bool func_25(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
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
				*iParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_882(iParam0, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_874(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_896(iParam0, uParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
						*iParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					*iParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_897(iParam0, uParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					*iParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
						*iParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					*iParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
								*iParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
							*iParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
						*iParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
							*iParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
				*iParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_2__::func_878(iParam0, uParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, uParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
						*iParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
				*iParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

