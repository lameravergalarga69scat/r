#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	var uLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	bool bLocal_19 = false;
	bool bLocal_20 = false;
	bool bLocal_21 = false;
	bool bLocal_22 = false;
	bool bLocal_23 = false;
	bool bLocal_24 = false;
	bool bLocal_25 = false;
	bool bLocal_26 = false;
	bool bLocal_27 = false;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion
void __EntryFunction__()
{
	iLocal_0 = 1;
	iLocal_2 = vScriptParam_0.x;
	iLocal_3 = vScriptParam_0.y;
	iLocal_4 = vScriptParam_0.z;
	__LIB_0__::func_11();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && __LIB_2__::func_821())
	{
		__LIB_0__::func_11();
		__LIB_3__::func_126();
		func_6();
		BUILTIN::WAIT(0);
	}
	func_2();
}

void func_2()
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(iLocal_2);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_2__::func_822();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_6()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	bVar0 = __LIB_0__::func_272(iLocal_17, 0);
	bVar1 = func_13(iLocal_28);
	bVar2 = ENTITY::DOES_ENTITY_EXIST(iLocal_18);
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3))
	{
		iLocal_16 = 6;
		return;
	}
	if (iLocal_16 <= 1 && __LIB_0__::func_62(Global_36, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true)) >= 1600f)
	{
		return;
	}
	if (iLocal_16 <= 1 && ENTITY::GET_ENTITY_SPEED(Global_35) >= 8f)
	{
		return;
	}
	if ((iLocal_16 > 1 && iLocal_16 != 6) && Global_1935369.f_51)
	{
		func_15();
		iLocal_16 = 2;
		bLocal_25 = true;
	}
	if (iLocal_16 > 1 && iLocal_16 != 6)
	{
		if ((iLocal_16 != 5 && iLocal_16 != 2) && !bVar0)
		{
			func_15();
			if (bLocal_20)
			{
				iLocal_16 = 5;
				iLocal_15 = 0;
			}
			else
			{
				iLocal_16 = 2;
			}
			return;
		}
		if (!bVar2)
		{
			iLocal_16 = 6;
			return;
		}
		if (PED::IS_PED_IN_COMBAT(iLocal_18, 0))
		{
			iLocal_16 = 6;
			return;
		}
	}
	func_16();
	func_17(bVar0);
	switch (iLocal_16)
	{
		case 0:
			iVar3 = func_18();
			iLocal_39 = __LIB_3__::func_125(__LIB_0__::func_12(), iVar3);
			if (iLocal_39 == -1)
			{
				return;
			}
			bLocal_19 = false;
			bLocal_26 = false;
			STREAMING::REQUEST_MODEL(joaat("P_COIN01X"), false);
			bLocal_25 = false;
			iLocal_14 = 0;
			if (iLocal_4 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
			{
				STREAMING::REQUEST_MODEL(joaat("P_BOTTLEBEER01X"), false);
				iVar4 = joaat("WORLD_HUMAN_BARTENDER_BEER");
				iLocal_5 = joaat("CUSTOMER_GRAB_BEER");
				iLocal_6 = joaat("CUSTOMER_GRAB_BEER_MALE_B");
				iLocal_8 = joaat("BARFRONT_TRANS_UNDER_BEER");
				iLocal_9 = joaat("UNDERBAR_TRANS_OVERBAR_BEER");
				iLocal_10 = joaat("BARTENDER_RETURN_TO_IDLE");
				iLocal_11 = joaat("BARTENDER_CLEAN_BEER_OVER_BAR");
				iLocal_12 = -1931194237;
				iLocal_13 = joaat("BARTENDER_CLEAN_BEER_UNDER_TRANS_BARFRONT");
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_BARTENDER_BEER"), 262144, 0, 0);
			}
			else
			{
				iVar4 = joaat("WORLD_HUMAN_BARTENDER_WHISKEY");
				iLocal_5 = joaat("CUSTOMER_GRAB_WHISKEY");
				iLocal_6 = joaat("CUSTOMER_GRAB_WHISKEY_MALE_B");
				iLocal_8 = joaat("BARFRONT_TRANS_UNDER_WHISKEY");
				iLocal_9 = joaat("UNDER_TRANS_OVER_WHISKEY");
				iLocal_10 = joaat("UNDER_TRANS_BARFRONT_WHISKEY");
				iLocal_11 = joaat("BARTENDER_CLEAN_WHISKEY_OVER_BAR");
				iLocal_12 = joaat("BARTENDER_CLEAN_WHISKEY_OVER_TRANS_UNDER_BAR");
				iLocal_13 = joaat("BARTENDER_CLEAN_WHISKEY_UNDER_TRANS_BARFRONT");
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_BARTENDER_WHISKEY"), 262144, 0, 0);
				STREAMING::REQUEST_MODEL(joaat("P_SHOTGLASS01X"), false);
				STREAMING::REQUEST_MODEL(joaat("P_BOTTLEJD01X"), false);
			}
			fVar5 = TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true);
			iLocal_29 = TASK::CREATE_SCENARIO_POINT(iVar4, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), fVar5, __LIB_14__::func_438()), (fVar5 - 180f), 0, 0, 0);
			TASK::_SET_SCENARIO_POINT_HEADING(iLocal_29, (fVar5 - 180f), true);
			TASK::_0xA7479FB665361EDB(iLocal_29, 0);
			TASK::_0xE69FDA40AAC3EFC0(iLocal_29, 0);
			iLocal_17 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);
			iLocal_28 = __LIB_11__::func_136(iLocal_39);
			if (__LIB_0__::func_29(iLocal_28))
			{
				iLocal_18 = __LIB_2__::func_963(iLocal_28);
			}
			iLocal_16 = 1;
			__LIB_1__::func_283(&uLocal_33, 1);
			break;
		case 2:
			if (((!func_26() && !bVar1) && !Global_1935369.f_51) && bVar0)
			{
				iLocal_15 = 0;
				iLocal_16 = 3;
				if (bLocal_20)
				{
					iLocal_16 = 5;
				}
			}
			break;
		case 1:
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_COIN01X")))
			{
				return;
			}
			if (iLocal_4 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
			{
				if (!STREAMING::HAS_MODEL_LOADED(joaat("P_BOTTLEBEER01X")))
				{
					return;
				}
				if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_BARTENDER_BEER"), false))
				{
					return;
				}
			}
			else
			{
				if (!STREAMING::HAS_MODEL_LOADED(joaat("P_SHOTGLASS01X")))
				{
					return;
				}
				if (!STREAMING::HAS_MODEL_LOADED(joaat("P_BOTTLEJD01X")))
				{
					return;
				}
				if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_BARTENDER_WHISKEY"), false))
				{
					return;
				}
			}
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_29))
			{
				return;
			}
			if (!__LIB_0__::func_272(iLocal_17, 0))
			{
				iLocal_17 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);
				return;
			}
			if (!bVar2)
			{
				if (__LIB_0__::func_29(iLocal_28))
				{
					iLocal_18 = __LIB_2__::func_963(iLocal_28);
				}
				return;
			}
			__LIB_1__::func_283(&uLocal_30, 1);
			iLocal_15 = 0;
			iLocal_16 = 3;
			break;
		case 3:
			func_27(bVar0, bVar1, bVar2);
			break;
		case 4:
			__LIB_0__::func_11();
			break;
		case 5:
			func_29(bVar0, bVar1, bVar2);
			break;
		case 6:
			iLocal_0 = 0;
			break;
	}
}

void func_7()
{
	func_15();
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3))
	{
		TASK::_0x4161648394262FDF(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), 0.15f);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_29))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_29);
	}
}

bool func_13(int iParam0)
{
	return __LIB_0__::func_117(iParam0, 1);
}

void func_15()
{
	int iVar0;
	if (!Global_1935369.f_51)
	{
		if (Global_1935369.f_50 == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			Global_1935369.f_50 = 0;
		}
		if (func_13(iLocal_28))
		{
			return;
		}
		iVar0 = __LIB_0__::func_120(iLocal_28);
		if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			PERSCHAR::_0xA2B18FF8D39F6D87(iVar0);
			PERSCHAR::_0x631CD2D77FDC0316(iVar0);
		}
	}
	else
	{
		Global_1935369.f_50 = 0;
	}
}

void func_16()
{
	if (bLocal_21 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_18, -1342079302))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_42))
		{
			OBJECT::DELETE_OBJECT(&iLocal_42);
		}
		bLocal_21 = false;
	}
	if (bLocal_22 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_18, 2131322378))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_41))
		{
			PED::_0x3BBDD6143FF16F98(iLocal_18, iLocal_41, "p_shotGlass01x_PH_L_HAND", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_SERVE_WHISKEY_RETURN_GLASS_UNDER_BAR_MALE_A", 1);
		}
		bLocal_22 = false;
	}
}

void func_17(bool bParam0)
{
	int iVar0;
	if (bLocal_24 && PED::_0xC488B8C0E52560D8(iLocal_17))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_17, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_17, false);
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_17, 0, 1);
	}
	if ((!bLocal_19 && bLocal_25) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_17, 864365833))
	{
		if (iLocal_4 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_40))
			{
				iLocal_40 = OBJECT::CREATE_OBJECT(joaat("P_SHOTGLASS01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
			}
			if (PED::_0x3BBDD6143FF16F98(iLocal_17, iLocal_40, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A", 1))
			{
				bLocal_19 = true;
				bLocal_25 = false;
				bLocal_20 = true;
				bLocal_24 = false;
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_41))
			{
				iLocal_41 = OBJECT::CREATE_OBJECT(joaat("P_SHOTGLASS01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
			}
			if (PED::_0x3BBDD6143FF16F98(iLocal_17, iLocal_41, "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", 1))
			{
				bLocal_19 = true;
				bLocal_25 = false;
				bLocal_20 = true;
				bLocal_24 = false;
			}
		}
	}
	if (bLocal_23 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_17, 350240706))
	{
		iLocal_41 = PED::_0x4D0D2E3D8BC000EB(iLocal_17, "p_shotGlass01x_PH_L_Hand", 1);
		bLocal_23 = false;
	}
	if (bParam0)
	{
		iVar0 = PED::_0x569F1E1237508DEB(iLocal_17);
	}
	if (((bLocal_27 && !bLocal_19) && !bLocal_20) && (iVar0 == joaat("WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A") || iVar0 == joaat("WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A")))
	{
		if (iLocal_4 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_40))
			{
				iLocal_40 = OBJECT::CREATE_OBJECT(joaat("P_SHOTGLASS01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
			}
			if (PED::_0x3BBDD6143FF16F98(iLocal_17, iLocal_40, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A", 1))
			{
				bLocal_19 = true;
				bLocal_25 = false;
				bLocal_20 = true;
				bLocal_27 = false;
				bLocal_24 = false;
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_41))
			{
				iLocal_41 = OBJECT::CREATE_OBJECT(joaat("P_SHOTGLASS01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
			}
			if (PED::_0x3BBDD6143FF16F98(iLocal_17, iLocal_41, "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", 1))
			{
				bLocal_19 = true;
				bLocal_25 = false;
				bLocal_20 = true;
				bLocal_27 = false;
				bLocal_24 = false;
			}
		}
	}
	if (((bLocal_27 && !bLocal_19) && !PED::_0x68821369A2CEADD5(iLocal_17, iLocal_5)) && !PED::_0x68821369A2CEADD5(iLocal_17, iLocal_6))
	{
		PED::_0x6D07B371E9439019(iLocal_17);
		if (iVar0 == joaat("WORLD_HUMAN_BARCUSTOMER_NO_DRINK_MALE_A"))
		{
			PED::_0xD65FDC686A031C83(iLocal_17, iLocal_5, 3f);
			bLocal_24 = true;
		}
		else if (iVar0 == joaat("WORLD_HUMAN_BARCUSTOMER_NO_DRINK_MALE_B"))
		{
			PED::_0xD65FDC686A031C83(iLocal_17, iLocal_6, 3f);
			bLocal_24 = true;
		}
	}
}

int func_18()
{
	switch (__LIB_0__::func_12())
	{
		case 76:
			if (__LIB_2__::func_157(func_36(0), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true)))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 38:
		case 92:
		case 115:
		case 120:
			return 0;
		case 5:
			if (__LIB_2__::func_157(func_36(2), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true)))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
		case 105:
			return 2;
	}
	return -1;
}

bool func_26()
{
	if (Global_1935369.f_50 != SCRIPTS::GET_ID_OF_THIS_THREAD())
	{
		if (Global_1935369.f_50 == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	if (Global_1935369.f_51)
	{
		return true;
	}
	return false;
}

void func_27(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (Global_1935369.f_51)
	{
		return;
	}
	switch (iLocal_15)
	{
		case 0:
			bVar0 = PED::_IS_PED_USING_SCENARIO_POINT(iLocal_17, iLocal_3);
			if (!bVar0 && !TASK::_0x0C3CB2E600C8977D(iLocal_17, 1))
			{
				func_15();
				iLocal_16 = 5;
				iLocal_15 = 0;
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_42) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_17, 1))
			{
				iLocal_42 = PED::_0x4D0D2E3D8BC000EB(iLocal_17, "p_coin01x", 1);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_42))
				{
					ENTITY::_0x18FF3110CF47115D(iLocal_42, 2, 0);
				}
				bLocal_21 = true;
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_17, 0) && bVar0)
			{
				if ((bParam1 && !__LIB_0__::func_122(iLocal_28)) || func_26())
				{
					iLocal_16 = 2;
					return;
				}
				else
				{
					func_45();
				}
				iVar1 = PED::_0x569F1E1237508DEB(iLocal_17);
				if ((iVar1 != joaat("WORLD_HUMAN_BARCUSTOMER_NO_DRINK_MALE_A") && iVar1 != joaat("WORLD_HUMAN_BARCUSTOMER_NO_DRINK_MALE_B")) && iVar1 != joaat("WORLD_HUMAN_BARCUSTOMER_NO_DRINK_ARTHUR"))
				{
					iLocal_16 = 5;
					iLocal_15 = 0;
					bLocal_20 = true;
					func_15();
					return;
				}
				if (!Global_1935369.f_51)
				{
					PED::_0xA3A9299C4F2ADB98(iLocal_18);
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_18, iLocal_29, 0, 0, true, false, 0, false, -1f, false);
					iLocal_15 = 1;
				}
			}
			break;
		case 1:
			bVar2 = PED::_IS_PED_USING_SCENARIO_POINT(iLocal_18, iLocal_29);
			if (!bVar2 && !__LIB_0__::func_163(iLocal_18, -76381094))
			{
				iLocal_15 = 0;
			}
			bVar0 = PED::_IS_PED_USING_SCENARIO_POINT(iLocal_17, iLocal_3);
			if (!bVar0 && !TASK::_0x0C3CB2E600C8977D(iLocal_17, 1))
			{
				func_15();
				iLocal_16 = 5;
				iLocal_15 = 0;
				return;
			}
			if (!bVar2 || !TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_18, 0))
			{
				return;
			}
			if (!PED::_0x68821369A2CEADD5(iLocal_18, iLocal_8))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_18);
				PED::_0xD65FDC686A031C83(iLocal_18, iLocal_8, 3f);
				PED::_0x6D07B371E9439019(iLocal_18);
				iLocal_14++;
			}
			if (iLocal_14 > 5)
			{
				func_15();
				iLocal_15 = 0;
			}
			if (PED::_0xC488B8C0E52560D8(iLocal_18))
			{
				__LIB_1__::func_283(&uLocal_36, 1);
				iLocal_15 = 3;
			}
			break;
		case 3:
			if (func_47())
			{
				PED::_0xD65FDC686A031C83(iLocal_18, iLocal_9, 3f);
				PED::_0x6D07B371E9439019(iLocal_18);
				if (iLocal_4 == joaat("WORLD_HUMAN_BARCUSTOMER_WHISKEY"))
				{
					iLocal_8 = joaat("OVER_TRANS_UNDER_WHISKEY");
				}
				__LIB_1__::func_283(&uLocal_36, 1);
				iLocal_15 = 4;
			}
			break;
		case 4:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_18, 595016159) && !bLocal_26)
			{
				func_48();
			}
			if (func_47())
			{
				if (!bLocal_26)
				{
					func_48();
				}
				if (iLocal_4 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
				{
					iLocal_15 = 6;
					iLocal_40 = PED::_0x4D0D2E3D8BC000EB(iLocal_18, "p_bottleBeer01x_PH_R_HAND", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_41))
					{
					}
				}
				else
				{
					iLocal_15 = 5;
					iLocal_41 = PED::_0x4D0D2E3D8BC000EB(iLocal_18, "p_shotGlass01x_PH_L_HAND", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_41))
					{
					}
				}
				if (iLocal_4 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
				{
					PED::_0xD65FDC686A031C83(iLocal_18, iLocal_10, 3f);
				}
				else
				{
					PED::_0xD65FDC686A031C83(iLocal_18, iLocal_8, 3f);
				}
				PED::_0x6D07B371E9439019(iLocal_18);
				bLocal_25 = true;
				bLocal_27 = true;
				__LIB_1__::func_283(&uLocal_36, 1);
			}
			break;
		case 5:
			if (func_47())
			{
				PED::_0xD65FDC686A031C83(iLocal_18, iLocal_10, 3f);
				PED::_0x6D07B371E9439019(iLocal_18);
				__LIB_1__::func_283(&uLocal_36, 1);
				iLocal_15 = 7;
			}
			break;
		case 7:
			if (func_49())
			{
				func_15();
				__LIB_0__::func_37(&uLocal_36);
				iLocal_16 = 5;
				iLocal_15 = 0;
				bLocal_20 = true;
			}
			break;
		case 6:
			if (func_49())
			{
				func_15();
				__LIB_0__::func_37(&uLocal_36);
				iLocal_16 = 5;
				iLocal_15 = 0;
				bLocal_20 = true;
			}
			break;
	}
}

void func_29(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	if (Global_1935369.f_51)
	{
		return;
	}
	switch (iLocal_15)
	{
		case 0:
			if (bParam0)
			{
				bVar0 = PED::_IS_PED_USING_SCENARIO_POINT(iLocal_17, iLocal_3);
			}
			else
			{
				bVar0 = false;
			}
			if ((bParam1 && !__LIB_0__::func_122(iLocal_28)) || func_26())
			{
				iLocal_16 = 2;
				return;
			}
			if (!bLocal_23 && TASK::_0x0C3CB2E600C8977D(iLocal_17, 0))
			{
				bLocal_23 = true;
			}
			if ((bParam0 && bVar0) && !bLocal_20)
			{
				iLocal_16 = 0;
				iLocal_15 = 0;
				return;
			}
			if ((bParam0 && !bVar0) && !TASK::_0x0C3CB2E600C8977D(iLocal_17, 0))
			{
				if (iLocal_4 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
				{
					if (!TASK::_0xEA31F199A73801D3(iLocal_3))
					{
						iLocal_16 = 6;
						return;
					}
				}
				else if (!bLocal_20)
				{
					iLocal_16 = 6;
					return;
				}
				bLocal_22 = true;
				if (!Global_1935369.f_51)
				{
					PED::_0xA3A9299C4F2ADB98(iLocal_18);
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_18, iLocal_29, 0, 0, true, false, 0, false, -1f, false);
					iLocal_15 = 1;
				}
			}
			break;
		case 1:
			if ((bParam1 && !__LIB_0__::func_122(iLocal_28)) || func_26())
			{
				iLocal_16 = 2;
				iLocal_15 = 0;
				return;
			}
			if (!PED::_IS_PED_USING_SCENARIO_POINT(iLocal_18, iLocal_29))
			{
				return;
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_18, 0) && !PED::_0x68821369A2CEADD5(iLocal_18, iLocal_11))
			{
				func_45();
				PED::_0xD65FDC686A031C83(iLocal_18, iLocal_11, 3f);
				PED::_0x6D07B371E9439019(iLocal_18);
			}
			if (PED::_0xC488B8C0E52560D8(iLocal_18))
			{
				__LIB_1__::func_283(&uLocal_36, 1);
				iLocal_15 = 2;
			}
			break;
		case 2:
			if (func_47())
			{
				PED::_0xD65FDC686A031C83(iLocal_18, iLocal_12, 3f);
				PED::_0x6D07B371E9439019(iLocal_18);
				iLocal_15 = 3;
				__LIB_1__::func_283(&uLocal_36, 1);
			}
			break;
		case 3:
			if (func_47())
			{
				PED::_0xD65FDC686A031C83(iLocal_18, iLocal_13, 3f);
				PED::_0x6D07B371E9439019(iLocal_18);
				iLocal_15 = 7;
				__LIB_1__::func_283(&uLocal_36, 1);
			}
			break;
		case 7:
			if (func_49())
			{
				func_15();
				iLocal_16 = 6;
			}
			break;
	}
}

int func_36(int iParam0)
{
	int iVar0;
	switch (__LIB_0__::func_12())
	{
		case 76:
			if (iParam0 == 0)
			{
				return VOLUME::_CREATE_VOLUME_BOX(-309.497f, 809.019f, 119.378f, 0f, 0f, 99.715f, 20.984f, 11.374f, 8.647388f);
			}
			else
			{
				return VOLUME::_CREATE_VOLUME_BOX(-241.294f, 770f, 118.14f, 0f, 0f, 110.709f, 8.286f, 7.345f, 5f);
			}
			break;
		case 92:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSaloonInterior");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2946.662f, 523.323f, 46.02f, 0f, 0f, 180f, 9.627f, 13.43f, 3.143f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2939.132f, 523.346f, 46.02f, 0f, 0f, 180f, 5.235f, 9.883f, 3.143f);
			return iVar0;
		case 120:
			return VOLUME::_CREATE_VOLUME_BOX(-3701.056f, -2595.456f, -14.37373f, 0f, 0f, 0f, 21.94766f, 22.09092f, 14.36038f);
		case 115:
			return VOLUME::_CREATE_VOLUME_BOX(-5514.454f, -2910.941f, 0.196263f, 0f, 0f, 28.00368f, 12.9595f, 18.61485f, 9.427321f);
		case 38:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volSaloonInterior");
			VOLUME::_0x39816F6F94F385AD(iVar0, -818.523f, -1319.681f, 46.59f, 0f, 0f, 90f, 15.6f, 16f, 8f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -809.672f, -1319.568f, 48.818f, 0f, 0f, 90f, 15.5f, 2f, 4f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -809.672f, -1324.85f, 44.569f, 0f, 0f, 90f, 5.2f, 2f, 3.8f);
			return iVar0;
		case 5:
			if (iParam0 == 2)
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSaloonFancyInterior");
				VOLUME::_0x39816F6F94F385AD(iVar0, 2629.396f, -1221.905f, 54.83224f, 0f, 0f, -135.58f, 3.110129f, 1.920147f, 4.694317f);
				VOLUME::_0x39816F6F94F385AD(iVar0, 2628.751f, -1228.086f, 54.83224f, 0f, 0f, 179.42f, 2.229593f, 11.71116f, 4.694317f);
				VOLUME::_0x39816F6F94F385AD(iVar0, 2635.506f, -1227.165f, 54.83224f, 0f, 0f, 179.42f, 11.64868f, 13.72192f, 4.694317f);
				return iVar0;
			}
			else
			{
				return VOLUME::_CREATE_VOLUME_BOX(2796.705f, -1167.971f, 48.56161f, 0f, 0f, -120.25f, 13.49097f, 10.18626f, 3.324371f);
			}
			break;
		case 105:
			return VOLUME::_CREATE_VOLUME_BOX(1345.534f, -1375.4f, 81.161f, 0f, 0f, 80.2f, 11.601f, 14.755f, 3.376f);
	}
	return VOLUME::_CREATE_VOLUME_BOX(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
}

void func_45()
{
	int iVar0;
	if (Global_1935369.f_51)
	{
		return;
	}
	Global_1935369.f_50 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar0 = __LIB_0__::func_120(iLocal_28);
	if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		PERSCHAR::_0x406808610220405B(__LIB_0__::func_120(iLocal_28));
	}
}

bool func_47()
{
	if (((!Global_1935369.f_51 && __LIB_1__::func_871(&uLocal_36) > 1250) && !TASK::_0x916B8E075ABC8B4E(iLocal_18, 1)) && (!PED::_0xC488B8C0E52560D8(iLocal_18) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_18, 1004907005)))
	{
		return true;
	}
	return false;
}

void func_48()
{
	if (!bLocal_26)
	{
		if (iLocal_4 == joaat("WORLD_HUMAN_BARCUSTOMER_BEER"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_40))
			{
				iLocal_40 = OBJECT::CREATE_OBJECT(joaat("P_BOTTLEBEER01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
				PED::_0x3BBDD6143FF16F98(iLocal_18, iLocal_40, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARTENDER_BEER", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", 1);
				bLocal_26 = true;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_40) && !ENTITY::DOES_ENTITY_EXIST(iLocal_41))
		{
			iLocal_40 = OBJECT::CREATE_OBJECT(joaat("P_BOTTLEJD01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
			iLocal_41 = OBJECT::CREATE_OBJECT(joaat("P_SHOTGLASS01X"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
			PED::_0x3BBDD6143FF16F98(iLocal_18, iLocal_40, "p_bottleJD01x_ph_r_hand", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", 1);
			PED::_0x3BBDD6143FF16F98(iLocal_18, iLocal_41, "p_shotGlass01x_PH_L_HAND", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", 1);
			bLocal_26 = true;
		}
	}
}

bool func_49()
{
	if ((!PED::_0xC488B8C0E52560D8(iLocal_18) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_18, 1004907005)) && __LIB_1__::func_871(&uLocal_36) > 1250)
	{
		return true;
	}
	return false;
}

