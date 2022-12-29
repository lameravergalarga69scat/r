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
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_21 = 20000;
	iLocal_24 = vScriptParam_0.x;
	iLocal_22 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_23 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_23)
		{
			iLocal_23 = 0;
			__LIB_1__::func_947(iLocal_24, &iLocal_22);
			switch (iLocal_22)
			{
				case 0:
					iLocal_22 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_24);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_24)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_24), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_24));
					iVar1 = __LIB_1__::func_885(iLocal_24);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_25 = (MISC::GET_GAME_TIMER() + iLocal_21);
					iLocal_22 = 2;
					break;
				case 2:
					if (func_11() || iLocal_25 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_24);
						iLocal_25 = (MISC::GET_GAME_TIMER() + iLocal_21);
						iLocal_22 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_24) || iLocal_25 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_24);
						iLocal_25 = (MISC::GET_GAME_TIMER() + iLocal_21);
						iLocal_22 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_24) || iLocal_25 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_24);
						iLocal_25 = (iLocal_21 + MISC::GET_GAME_TIMER());
						iLocal_22 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_24)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_24), 4) && !iLocal_25 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_24) || iLocal_25 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_24, 4);
								iLocal_25 = (iLocal_21 + MISC::GET_GAME_TIMER());
								iLocal_22 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_25 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_24);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_765(2057, 0))
								{
									__LIB_0__::func_11();
								}
								func_25();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_24);
								__LIB_1__::func_886(iLocal_24);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_22 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_24);
							__LIB_0__::func_18();
							iLocal_22 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_18__::func_784(iLocal_24, &Global_1898004);
							iLocal_22 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_24);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_24, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_22 = 11;
							Jump @788; //curOff = 667
							if (func_38(iLocal_24))
							{
								iLocal_23 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_24);
							__LIB_1__::func_891(iLocal_24);
							__LIB_0__::func_24(iLocal_24, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_24 /*35*/].f_10);
							if (Global_1888801[iLocal_24 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_24 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_24 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_24 /*35*/].f_12);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!func_42(iVar0))
						{
							iVar0++;
							BUILTIN::WAIT(0);
						}
						SCRIPTS::TERMINATE_THIS_THREAD();
					}
					default:
						break;
			}
		}
	}
}

void func_1()
{
	int iVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		iVar0 = 0;
		while (!func_42(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_11()
{
	iLocal_15 = VOLUME::_CREATE_VOLUME_CYLINDER(1800.393f, -58.81124f, 57.70767f, 0f, 0f, 0f, 43f, 45f, 14f);
	return true;
}

void func_25()
{
	__LIB_6__::func_662(0, 1);
	__LIB_6__::func_663(0, iLocal_15);
	__LIB_6__::func_669(0, 0, joaat("DOOR_ABE_FRONT"));
	__LIB_6__::func_669(0, 1, joaat("DOOR_ABE_BTH_EXIT"));
	__LIB_6__::func_669(0, 2, joaat("DOOR_ABE_BACK"));
	if (__LIB_18__::func_208() && __LIB_0__::func_181())
	{
		__LIB_6__::func_664(0, 2);
	}
}

bool func_38(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	func_59();
	func_60();
	func_61();
	func_62();
	func_63();
	return false;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_24, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_24, 4);
		__LIB_0__::func_25(iLocal_24, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_83(iLocal_24);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_24);
		__LIB_2__::func_819(iLocal_24);
		__LIB_2__::func_755(iLocal_24);
		if (!__LIB_2__::func_756(iLocal_24, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_59()
{
	if (__LIB_8__::func_346(1))
	{
		return;
	}
	if (__LIB_6__::func_665(731) && __LIB_6__::func_665(732))
	{
		__LIB_18__::func_710(1);
	}
	else
	{
		__LIB_18__::func_709(1);
	}
}

void func_60()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	if (__LIB_8__::func_346(2))
	{
		return;
	}
	iLocal_14 = INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_4__::func_55(0));
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_14))
	{
		return;
	}
	if (__LIB_0__::func_923(Global_40.f_9422[0 /*7*/].f_1))
	{
		__LIB_6__::func_650(Global_40.f_9422[0 /*7*/].f_1, &uVar6, &uVar5, &uVar4, &iVar3, &uVar2, &uVar1);
	}
	if (__LIB_0__::func_770(0, 2))
	{
		if (__LIB_0__::func_770(0, 16) && !__LIB_0__::func_113())
		{
			iVar0 = 3;
		}
		else if (iVar3 < 1)
		{
			iVar0 = 0;
		}
		else if (iVar3 < 3)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = 0;
	}
	func_110(iVar0);
	__LIB_18__::func_710(2);
}

void func_61()
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	if (__LIB_8__::func_346(4))
	{
		return;
	}
	if (__LIB_0__::func_923(Global_40.f_9422[0 /*7*/].f_1))
	{
		__LIB_6__::func_650(Global_40.f_9422[0 /*7*/].f_1, &uVar5, &uVar4, &uVar3, &iVar2, &uVar1, &uVar0);
	}
	if (__LIB_0__::func_770(0, 2) && iVar2 >= 1)
	{
		__LIB_0__::func_400(286801141);
		__LIB_0__::func_401(-87826930);
	}
	else
	{
		__LIB_0__::func_400(-87826930);
		__LIB_0__::func_401(286801141);
	}
	__LIB_18__::func_710(4);
}

void func_62()
{
	var uVar0;
	if (__LIB_8__::func_346(8))
	{
		return;
	}
	if (!__LIB_8__::func_346(2))
	{
		return;
	}
	uVar0 = __LIB_0__::func_17(1515000965);
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, "ransacked_abe"))
	{
		__LIB_14__::func_291(&uVar0, 0);
	}
	else if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, "ransacked_abe01"))
	{
		__LIB_14__::func_291(&uVar0, 0);
	}
	else if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, "ransacked_abe03"))
	{
		__LIB_14__::func_291(&uVar0, 0);
	}
	else if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, "clean_abe"))
	{
		__LIB_14__::func_291(&uVar0, 1);
	}
	__LIB_18__::func_710(8);
}

void func_63()
{
	if (iLocal_20 == 4)
	{
		return;
	}
	if (__LIB_0__::func_770(0, 8))
	{
		return;
	}
	if (!__LIB_4__::func_54(0, 64) && !__LIB_9__::func_764(0, 1))
	{
		return;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("HOMEINVASION")) > 0)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_17))
		{
			TASK::_DELETE_SCENARIO_POINT(iLocal_17);
			__LIB_9__::func_731(0);
		}
		func_118(&uLocal_18);
		iLocal_16 = 0;
		return;
	}
	switch (iLocal_20)
	{
		case 0:
			STREAMING::REQUEST_MODEL(__LIB_9__::func_736(), false);
			__LIB_9__::func_731(1);
			break;
		case 1:
			if (!STREAMING::HAS_MODEL_LOADED(__LIB_9__::func_736()))
			{
				return;
			}
			if (!__LIB_14__::func_292(&iLocal_16, __LIB_9__::func_736(), &uLocal_18, __LIB_9__::func_737(), 4, 0))
			{
				return;
			}
			__LIB_9__::func_731(2);
			break;
		case 2:
			iLocal_17 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iLocal_16, __LIB_9__::func_738(), 0f, 0f, 0f, 0, 0, 0, 0);
			TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_17, true);
			__LIB_9__::func_731(3);
			break;
		case 3:
			if (!PED::_IS_PED_USING_SCENARIO_HASH(Global_35, __LIB_9__::func_738()))
			{
				return;
			}
			if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 15695821))
			{
				return;
			}
			__LIB_2__::func_590((__LIB_3__::func_970(joaat("ABERDEEN_HOME_ROBBERY_REWARD")) + Global_40.f_9422[0 /*7*/].f_3), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			func_125(0);
			MISC::_0xCC3EDC5614B03F61(38);
			__LIB_6__::func_664(0, 2);
			__LIB_0__::func_747(180, 0, 1);
			__LIB_6__::func_664(0, 8);
			func_118(&uLocal_18);
			__LIB_9__::func_731(0);
			break;
		case 4:
			break;
	}
}

void func_83(int iParam0)
{
	__LIB_18__::func_710(0);
	__LIB_6__::func_660(0, 64);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_17))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_17);
	}
	func_118(&uLocal_18);
	iLocal_16 = 0;
}

void func_110(int iParam0)
{
	char* sVar0;
	if (iParam0 != 0 && INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, "clean_abe"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_14, "clean_abe", true);
	}
	if (iParam0 != 1 && INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, "ransacked_abe01"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_14, "ransacked_abe01", true);
	}
	if (iParam0 != 2 && INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, "ransacked_abe"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_14, "ransacked_abe", true);
	}
	if (iParam0 != 3 && INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, "ransacked_abe03"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_14, "ransacked_abe03", true);
	}
	if ((iParam0 != 0 && iParam0 != 1) && INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, "abe_SP_armoir"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_14, "abe_SP_armoir", true);
	}
	switch (iParam0)
	{
		case 0:
			sVar0 = "clean_abe";
			break;
		case 1:
			sVar0 = "ransacked_abe01";
			break;
		case 2:
			sVar0 = "ransacked_abe";
			break;
		case 3:
			sVar0 = "ransacked_abe03";
			break;
	}
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, sVar0))
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_14, sVar0, 0);
	}
	if ((iParam0 == 0 || iParam0 == 1) && !INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, "abe_SP_armoir"))
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_14, "abe_SP_armoir", 0);
	}
	if (iParam0 == 0 || iParam0 == 1)
	{
		__LIB_5__::func_440("hmrb_abdn_tenants_gone");
		__LIB_5__::func_441("hmrb_abdn_tenants_alive");
	}
	else
	{
		__LIB_5__::func_440("hmrb_abdn_tenants_alive");
		__LIB_5__::func_441("hmrb_abdn_tenants_gone");
	}
	if (iParam0 == 0)
	{
		INTERIOR::_0x2533F2AB0EB9C6F9(iLocal_14, 0);
		INTERIOR::_0xFE2B3D5500B1B2E4(iLocal_14, 0);
	}
	else
	{
		INTERIOR::_0x2533F2AB0EB9C6F9(iLocal_14, 1);
		INTERIOR::_0xFE2B3D5500B1B2E4(iLocal_14, 1);
	}
}

void func_118(var uParam0)
{
	if (!ENTITY::_0x1FF441D7954F8709(*uParam0))
	{
		return;
	}
	ENTITY::_0xD2B9C78537ED5759(*uParam0);
}

void func_125(int iParam0)
{
	if (__LIB_0__::func_770(iParam0, 67108864))
	{
		return;
	}
	__LIB_3__::func_720(7, 1);
	__LIB_6__::func_664(iParam0, 67108864);
}

