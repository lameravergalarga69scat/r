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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
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
							__LIB_5__::func_252(iLocal_23, &Global_1898004);
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
	iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER(1324.004f, -2287.084f, 50.711f, 0f, 0f, 0f, 57f, 50f, 20f);
	iLocal_15 = VOLUME::_CREATE_VOLUME_SPHERE(1322.59f, -2285.19f, 51.316f, 0f, 0f, 0f, 0.25f, 0.25f, 0.25f);
	PED::_0x4C39C95AE5DB1329(iLocal_15, 0, 16);
	return true;
}

void func_25()
{
	__LIB_6__::func_663(2, iLocal_14);
	__LIB_6__::func_669(2, 0, joaat("DOOR_CAT_HOUSE_FRONT"));
	__LIB_6__::func_669(2, 1, joaat("DOOR_CAT_HOUSE_BACK"));
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (__LIB_10__::func_632(2))
	{
		return;
	}
	__LIB_6__::func_662(2, 1);
	func_54();
	func_55();
}

bool func_38(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (!__LIB_3__::func_463(joaat("DOCUMENT_LETTER_CATFISH_LOANSHARKING"), 1, 0))
	{
		if (!func_60(4))
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_16))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_18))
				{
					iLocal_17 = TASK::_GET_SCENARIO_POINT_ENTITY(iLocal_16, "PrimaryItem");
					iLocal_18 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iLocal_17);
					TXD::_REQUEST_STREAMED_TXD(joaat("UI_LETTER_CATFISH"), false);
				}
				else if (TXD::_HAS_STREAMED_TXD_LOADED(joaat("UI_LETTER_CATFISH")))
				{
					if (DECORATOR::DECOR_SET_INT(iLocal_18, "letter_item", joaat("DOCUMENT_LETTER_CATFISH_LOANSHARKING")))
					{
						OBJECT::_SET_APPLY_OBJECT_TXD(iLocal_18, joaat("UI_LETTER_CATFISH"), 0, 0);
						func_61(4);
					}
				}
			}
		}
		else if (!DECORATOR::DECOR_EXIST_ON(iLocal_18, "letter_item"))
		{
			func_62(4);
		}
	}
	else if (!func_60(8))
	{
		TXD::_SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(joaat("UI_LETTER_CATFISH"));
		func_61(8);
	}
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

void func_54()
{
	bool bVar0;
	if (!__LIB_1__::func_185(59))
	{
		return;
	}
	if (!bVar0 && !__LIB_0__::func_770(2, 2))
	{
		if (__LIB_0__::func_770(2, 16) || __LIB_9__::func_783(2))
		{
			if (!__LIB_4__::func_54(2, 4096))
			{
				if (!__LIB_9__::func_727())
				{
					__LIB_18__::func_210();
				}
				else
				{
					__LIB_18__::func_209();
				}
			}
			else
			{
				__LIB_6__::func_664(2, 2);
			}
		}
	}
}

void func_55()
{
	if (__LIB_0__::func_770(2, 2))
	{
		__LIB_9__::func_728(0, 0, 0);
		return;
	}
	if (__LIB_1__::func_185(59))
	{
		__LIB_9__::func_728(0, 0, 1);
	}
	else
	{
		__LIB_9__::func_728(1, 1, 0);
	}
}

bool func_60(int iParam0)
{
	return __LIB_0__::func_1(uLocal_19, iParam0);
}

void func_61(int iParam0)
{
	if (func_60(iParam0))
	{
		return;
	}
	__LIB_0__::func_7(&uLocal_19, iParam0);
}

void func_62(int iParam0)
{
	if (!func_60(iParam0))
	{
		return;
	}
	__LIB_0__::func_8(&uLocal_19, iParam0);
}

void func_63()
{
	if (func_60(2))
	{
		return;
	}
	if ((__LIB_6__::func_665(741) && __LIB_6__::func_665(743)) && __LIB_6__::func_665(742))
	{
		func_61(2);
	}
	else
	{
		func_62(2);
	}
}

void func_64()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	if (__LIB_0__::func_768(2, 4))
	{
		return;
	}
	if (__LIB_0__::func_768(2, 32))
	{
		return;
	}
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_4__::func_55(2));
	bVar1 = false;
	if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		return;
	}
	if (__LIB_0__::func_770(2, 2))
	{
		iVar2 = Global_40.f_9422[2 /*7*/].f_1;
		if (iVar2 != -15)
		{
			__LIB_6__::func_650(iVar2, &uVar3, &uVar4, &uVar5, &iVar6, &uVar7, &uVar8);
		}
		if (iVar6 > 2 || __LIB_4__::func_259(2, 2))
		{
			func_125(&iVar0, "cat_house_propset", &bVar1);
			func_125(&iVar0, "cat_house_lights_ON", &bVar1);
			func_125(&iVar0, "cat_house_extra_chest_loot", &bVar1);
			__LIB_5__::func_440("hmrb_cfjk_tenants_alive");
			func_127(&iVar0, "cat_house_lights_OFF", &bVar1);
			__LIB_5__::func_441("hmrb_cfjk_tenants_gone");
			func_129(2);
			__LIB_5__::func_675(2, 2);
			uVar9 = __LIB_0__::func_17(-658146346);
			if (!GRAPHICS::_0x113857D66A9CABE6(uVar9))
			{
				return;
			}
			GRAPHICS::_0xBFCB17895BB99E4E(uVar9, 0);
		}
		else
		{
			func_127(&iVar0, "cat_house_propset", &bVar1);
			func_125(&iVar0, "cat_house_lights_ON", &bVar1);
			__LIB_5__::func_440("hmrb_cfjk_tenants_gone");
			func_127(&iVar0, "cat_house_lights_OFF", &bVar1);
			__LIB_5__::func_441("hmrb_cfjk_tenants_alive");
			uVar10 = __LIB_0__::func_17(-658146346);
			if (!GRAPHICS::_0x113857D66A9CABE6(uVar10))
			{
				return;
			}
			GRAPHICS::_0xBFCB17895BB99E4E(uVar10, 0);
		}
	}
	else
	{
		func_127(&iVar0, "cat_house_propset", &bVar1);
		func_125(&iVar0, "cat_house_lights_OFF", &bVar1);
		__LIB_5__::func_440("hmrb_cfjk_tenants_gone");
		func_127(&iVar0, "cat_house_lights_ON", &bVar1);
		__LIB_5__::func_441("hmrb_cfjk_tenants_alive");
	}
	if ((!__LIB_3__::func_463(joaat("DOCUMENT_LETTER_CATFISH_LOANSHARKING"), 1, 0) && (!__LIB_0__::func_181() || (!__LIB_0__::func_770(2, 16) && !__LIB_9__::func_783(2)))) && !__LIB_0__::func_770(2, 2))
	{
		iLocal_16 = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X"), 1320.37f, -2274.06f, 49.53f, 7.859f, 0, 0, 0);
	}
	else
	{
		func_61(4);
	}
	if (bVar1)
	{
		__LIB_6__::func_661(2, 4);
	}
	else
	{
		__LIB_6__::func_661(2, 32);
	}
}

void func_65()
{
	if (__LIB_0__::func_768(2, 64))
	{
		return;
	}
	if (__LIB_0__::func_770(2, 2))
	{
		__LIB_0__::func_400(1706906210);
		__LIB_0__::func_401(1873580721);
		__LIB_0__::func_401(739567292);
		if (__LIB_4__::func_259(2, 2))
		{
			__LIB_0__::func_401(729601893);
		}
		else
		{
			__LIB_0__::func_401(1128276345);
		}
	}
	else
	{
		__LIB_0__::func_400(1873580721);
		__LIB_0__::func_401(1706906210);
		if (__LIB_4__::func_54(2, 2048))
		{
			__LIB_0__::func_401(739567292);
			__LIB_0__::func_401(1128276345);
		}
		else
		{
			__LIB_0__::func_400(1128276345);
		}
		if (__LIB_4__::func_54(2, 4096))
		{
			__LIB_0__::func_401(739567292);
			__LIB_5__::func_675(2, 2);
			__LIB_0__::func_401(729601893);
		}
		else
		{
			__LIB_0__::func_400(729601893);
		}
	}
	__LIB_6__::func_661(2, 64);
}

void func_85(int iParam0)
{
	var uVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_16))
	{
		TXD::_SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(joaat("UI_LETTER_CATFISH"));
		TASK::_DELETE_SCENARIO_POINT(iLocal_16);
	}
	if (__LIB_0__::func_770(2, 2) && !__LIB_4__::func_259(2, 2))
	{
		uVar0 = __LIB_0__::func_17(-658146346);
		if (!GRAPHICS::_0x113857D66A9CABE6(uVar0))
		{
			return;
		}
		GRAPHICS::_0xBFCB17895BB99E4E(uVar0, 0);
		__LIB_9__::func_732(2);
	}
	__LIB_6__::func_660(2, 4);
	__LIB_6__::func_660(2, 32);
	__LIB_6__::func_660(2, 64);
}

void func_125(int iParam0, char* sParam1, bool bParam2)
{
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(*iParam0, sParam1))
	{
		*bParam2 = 0;
		return;
	}
	INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(*iParam0, sParam1, true);
	*bParam2 = 1;
}

void func_127(int iParam0, char* sParam1, bool bParam2)
{
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(*iParam0, sParam1))
	{
		*bParam2 = 0;
		return;
	}
	INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(*iParam0, sParam1, 0);
	*bParam2 = 1;
}

void func_129(int iParam0)
{
	Global_40.f_9422[iParam0 /*7*/].f_1 = -15;
}

