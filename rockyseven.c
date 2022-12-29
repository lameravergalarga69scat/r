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
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_20 = 20000;
	iLocal_23 = vScriptParam_0.x;
	iLocal_21 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_22 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_22)
		{
			iLocal_22 = 0;
			__LIB_1__::func_947(iLocal_23, &iLocal_21);
			switch (iLocal_21)
			{
				case 0:
					iLocal_21 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_23);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_23)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_23), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_23));
					iVar1 = __LIB_1__::func_885(iLocal_23);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_24 = (MISC::GET_GAME_TIMER() + iLocal_20);
					iLocal_21 = 2;
					break;
				case 2:
					if (func_11() || iLocal_24 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_23);
						iLocal_24 = (MISC::GET_GAME_TIMER() + iLocal_20);
						iLocal_21 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_23) || iLocal_24 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_23);
						iLocal_24 = (MISC::GET_GAME_TIMER() + iLocal_20);
						iLocal_21 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_23) || iLocal_24 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_23);
						iLocal_24 = (iLocal_20 + MISC::GET_GAME_TIMER());
						iLocal_21 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_23)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_23), 4) && !iLocal_24 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_23) || iLocal_24 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_23, 4);
								iLocal_24 = (iLocal_20 + MISC::GET_GAME_TIMER());
								iLocal_21 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_24 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_23);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_765(2057, 0))
								{
									__LIB_0__::func_11();
								}
								func_25();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_23);
								__LIB_1__::func_886(iLocal_23);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_21 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_23);
							__LIB_0__::func_18();
							iLocal_21 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_18__::func_784(iLocal_23, &Global_1898004);
							iLocal_21 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_23);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_23, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_21 = 11;
							Jump @788; //curOff = 667
							if (func_38(iLocal_23))
							{
								iLocal_22 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_23);
							__LIB_1__::func_891(iLocal_23);
							__LIB_0__::func_24(iLocal_23, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_23 /*35*/].f_10);
							if (Global_1888801[iLocal_23 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_23 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_23 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_23 /*35*/].f_12);
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
	iLocal_15 = VOLUME::_CREATE_VOLUME_CYLINDER(2747.629f, 2006.864f, 214.971f, 0f, 0f, 0f, 32f, 25f, 40f);
	return true;
}

void func_25()
{
	__LIB_6__::func_662(6, 1);
	__LIB_6__::func_663(6, iLocal_15);
	if (!__LIB_10__::func_724(1, 1))
	{
		__LIB_3__::func_229(799);
		__LIB_14__::func_294(1);
		__LIB_1__::func_948(joaat("DOOR_ROC_HOUSE_INT_2"), 1, 0f, 0, 0, 0, 0, 0);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(750713851, false);
	}
	else
	{
		__LIB_6__::func_669(6, 1, joaat("DOOR_ROC_HOUSE_INT_2"));
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(750713851, true);
		if (__LIB_1__::func_185(59))
		{
			func_58();
		}
	}
}

bool func_38(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	func_62();
	func_63();
	func_64();
	func_65();
	return false;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_23, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_23, 4);
		__LIB_0__::func_25(iLocal_23, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_85(iLocal_23);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_23);
		__LIB_2__::func_819(iLocal_23);
		__LIB_2__::func_755(iLocal_23);
		if (!__LIB_2__::func_756(iLocal_23, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_58()
{
	bool bVar0;
	if (!__LIB_0__::func_770(6, 16))
	{
		if (!__LIB_0__::func_770(6, 32))
		{
			if (!bVar0)
			{
				__LIB_14__::func_293();
				return;
			}
		}
	}
	if (__LIB_4__::func_54(6, 16384) || !func_116())
	{
		__LIB_9__::func_729(6, 8192);
		__LIB_9__::func_729(6, 16384);
		return;
	}
	if (!bVar0)
	{
		func_118();
	}
	__LIB_6__::func_664(6, 8192);
	__LIB_6__::func_664(6, 16384);
}

void func_62()
{
	if (__LIB_8__::func_379(1))
	{
		return;
	}
	if (__LIB_17__::func_697(799))
	{
		__LIB_14__::func_289(1);
	}
	else
	{
		__LIB_14__::func_290(1);
	}
}

void func_63()
{
	if (__LIB_8__::func_379(2))
	{
		return;
	}
	iLocal_14 = INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_4__::func_55(6));
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_14))
	{
		return;
	}
	if (__LIB_0__::func_770(6, 8192))
	{
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, "rocky_int_messy"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_14, "rocky_int_messy", true);
		}
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, "rocky_int_clean"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_14, "rocky_int_clean", 0);
		}
	}
	else
	{
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, "rocky_int_clean"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_14, "rocky_int_clean", true);
		}
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_14, "rocky_int_messy"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_14, "rocky_int_messy", 0);
		}
	}
	__LIB_14__::func_289(2);
}

void func_64()
{
	if (__LIB_0__::func_768(6, 64))
	{
		return;
	}
	if (__LIB_0__::func_770(6, 16384))
	{
		__LIB_0__::func_400(joaat("ROC_01_GARDEN01_DIE"));
		__LIB_0__::func_400(-786579336);
		__LIB_0__::func_401(joaat("ROC_01_GARDEN01_NICE"));
		__LIB_0__::func_401(-1305545118);
	}
	else
	{
		__LIB_0__::func_400(joaat("ROC_01_GARDEN01_NICE"));
		__LIB_0__::func_400(-1305545118);
		__LIB_0__::func_401(joaat("ROC_01_GARDEN01_DIE"));
		__LIB_0__::func_401(-786579336);
	}
	__LIB_6__::func_661(6, 64);
}

void func_65()
{
	var uVar0;
	func_131();
	if (__LIB_8__::func_379(4))
	{
		return;
	}
	if (!__LIB_8__::func_379(2))
	{
		return;
	}
	uVar0 = __LIB_0__::func_17(-1370243643);
	if (((__LIB_0__::func_770(6, 2) || __LIB_0__::func_770(6, 1)) || __LIB_4__::func_54(6, 16384)) || __LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		__LIB_14__::func_289(8);
		__LIB_14__::func_291(&uVar0, 0);
	}
	else
	{
		__LIB_14__::func_291(&uVar0, 1);
	}
	__LIB_14__::func_289(4);
}

void func_85(int iParam0)
{
	__LIB_6__::func_660(6, 4);
	__LIB_6__::func_660(6, 32);
	__LIB_6__::func_660(6, 64);
	func_165(&uLocal_17);
	iLocal_16 = 0;
}

bool func_116()
{
	if (__LIB_10__::func_660() || __LIB_10__::func_659())
	{
		return true;
	}
	return false;
}

void func_118()
{
	__LIB_4__::func_262(6, 8388608);
}

void func_131()
{
	if (!__LIB_8__::func_379(8))
	{
		return;
	}
	switch (iLocal_19)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("P_FIREPLACELOGS02X"), false);
			__LIB_10__::func_593(1);
			break;
		case 1:
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_FIREPLACELOGS02X")))
			{
				return;
			}
			if (!__LIB_14__::func_292(&iLocal_16, joaat("P_FIREPLACELOGS02X"), &uLocal_17, 2992.59f, 2194.709f, 165.788f, 4, 0))
			{
				return;
			}
			__LIB_10__::func_593(2);
			break;
		case 2:
			ENTITY::_0x56E0735D6273B227(iLocal_16, 1);
			OBJECT::_SET_OBJECT_BURN_OPACITY(iLocal_16, 0f);
			__LIB_10__::func_593(3);
			break;
		case 3:
			break;
	}
}

void func_165(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (!ENTITY::_0x1FF441D7954F8709(*uParam0))
	{
		return;
	}
	ENTITY::_0xD2B9C78537ED5759(*uParam0);
}

