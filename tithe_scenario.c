#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	char* sLocal_20 = NULL;
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	int iLocal_23 = 0;
	int iLocal_24[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	bool bLocal_45 = false;
	bool bLocal_46 = false;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	char* sLocal_68 = NULL;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion
void __EntryFunction__()
{
	iLocal_0 = 1;
	fLocal_12 = 1f;
	fLocal_13 = 1f;
	sLocal_19 = "mech_skin@BUCK_BUTCHER";
	sLocal_20 = "PBL_BASE";
	sLocal_21 = "PBL_DUMP";
	sLocal_22 = "PBL_DROP_IN";
	iLocal_69 = -1;
	iLocal_2 = vScriptParam_0.x;
	uLocal_3 = vScriptParam_0.y;
	uLocal_4 = vScriptParam_0.z;
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
	__LIB_14__::func_125();
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
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;
	int iVar7;
	int iVar8;
	if (!bLocal_37)
	{
		bLocal_37 = true;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		iLocal_0 = 0;
		if (bLocal_46)
		{
			Global_1914319.f_16855 = 19;
			bLocal_46 = false;
		}
		return;
	}
	iVar0 = 0;
	bVar1 = false;
	__LIB_1__::func_538(0);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
	PAD::_SET_CONTROL_CONTEXT(5, joaat("TITHING"));
	switch (iLocal_73)
	{
		case 0:
			if (__LIB_0__::func_75(&uLocal_70))
			{
				if (func_14(&uLocal_70) > 3f)
				{
					__LIB_0__::func_37(&uLocal_70);
					__LIB_4__::func_517(1);
					func_17(1);
				}
			}
			else
			{
				__LIB_1__::func_283(&uLocal_70, 0);
			}
			break;
		case 1:
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TITHE_DONATION") == 0)
			{
				return;
			}
			__LIB_14__::func_624();
			__LIB_1__::func_283(&uLocal_53, 0);
			bLocal_36 = func_20(&iLocal_39, &iLocal_38);
			sLocal_68 = "scenario@MECH@PROP_PLAYER_CAMP_CASH_BOX@EXIT_ALT";
			if (iLocal_69 < 0)
			{
				iLocal_69 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_68, 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_69);
			}
			if (bLocal_36)
			{
				STREAMING::REQUEST_MODEL(iLocal_38, false);
				func_17(6);
			}
			else
			{
				iLocal_44 = __LIB_0__::func_492(1);
				iLocal_41 = 1;
				if (iLocal_44 >= iVar0)
				{
					iLocal_42 = iVar0;
				}
				else
				{
					iLocal_42 = iLocal_44;
				}
				iLocal_38 = joaat("P_CS_BILLSTACK01X");
				STREAMING::REQUEST_MODEL(iLocal_38, false);
				if ((PED::IS_PED_USING_ANY_SCENARIO(Global_35) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_69, true, false)) && func_22())
				{
					func_23();
					PED::_0xA3A9299C4F2ADB98(Global_35);
					if ((__LIB_0__::func_139(iLocal_56) && __LIB_0__::func_139(iLocal_57)) && __LIB_0__::func_139(iLocal_58))
					{
						func_17(2);
					}
					if (Global_1914319.f_16855 == 19)
					{
						Global_1914319.f_16855 = -1;
						bLocal_46 = true;
					}
				}
			}
			break;
		case 2:
			if (__LIB_1__::func_732(iLocal_58, 1))
			{
				func_26();
				AUDIO::PLAY_SOUND_FRONTEND("Exit", "HUD_Donate_Sounds", true, 0);
				TASK::_0xD999E379265A4501(Global_35, sLocal_68, 0);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			if (__LIB_1__::func_732(iLocal_57, 1))
			{
				AUDIO::PLAY_SOUND_FRONTEND("Give_Item_Enter", "HUD_Donate_Sounds", true, 0);
				func_26();
				__LIB_4__::func_896(1);
				UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("SATCHEL"), joaat("SHOP"));
				iLocal_42 = 0;
				func_17(5);
			}
			if (__LIB_1__::func_732(iLocal_56, 1))
			{
				AUDIO::PLAY_SOUND_FRONTEND("Give_Money_Enter", "HUD_Donate_Sounds", true, 0);
				iLocal_42 = iVar0;
				func_26();
				iLocal_61 = __LIB_2__::func_403("PAY_CASH", joaat("INPUT_GAME_MENU_ACCEPT"), Global_35, 1, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				func_30(iLocal_61, "PAY_CASH", __LIB_1__::func_925(MISC::_0x2B6846401D68E563((BUILTIN::TO_FLOAT(iLocal_42) / 100f), 2), joaat("COLOR_PURE_WHITE")));
				__LIB_4__::func_12(iLocal_61, 763444929, 0, 1);
				iLocal_59 = __LIB_2__::func_403("SET_CASH_UP", joaat("INPUT_TITHING_INCREASE_AMOUNT"), Global_35, 1, 0, 0, 0, 3, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_4__::func_12(iLocal_59, 763444929, 0, 1);
				iLocal_60 = __LIB_2__::func_403("SET_CASH_DOWN", joaat("INPUT_TITHING_DECREASE_AMOUNT"), Global_35, 1, 0, 0, 0, 3, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_4__::func_12(iLocal_60, 763444929, 0, 1);
				iLocal_62 = __LIB_2__::func_403("BACK_TITHE", joaat("INPUT_GAME_MENU_CANCEL"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_4__::func_12(iLocal_62, 763444929, 0, 1);
				func_17(3);
			}
			break;
		case 5:
			if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("SATCHEL")))
			{
				func_17(4);
			}
			break;
		case 4:
			if (__LIB_13__::func_601(4))
			{
				if (Global_1935689.f_10181[Global_1935689.f_10187 /*2*/] > 0)
				{
					iLocal_24[iLocal_23] = __LIB_7__::func_776();
					func_34();
					iLocal_23++;
					func_36(__LIB_0__::func_708(0), 0, 0);
					__LIB_13__::func_603(4);
				}
			}
			if (__LIB_13__::func_601(2))
			{
				__LIB_13__::func_603(2);
			}
			if (__LIB_13__::func_601(8))
			{
				__LIB_13__::func_603(8);
			}
			if (__LIB_13__::func_601(16))
			{
				__LIB_13__::func_603(16);
			}
			if (iLocal_23 == 10)
			{
				UIAPPS::_CLOSE_APP_BY_HASH(joaat("SATCHEL"));
			}
			if (!UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("SATCHEL")))
			{
				if (__LIB_7__::func_776() == 0)
				{
					func_23();
					func_17(2);
				}
				else
				{
					func_17(11);
				}
			}
			break;
		case 11:
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			__LIB_1__::func_281(&uLocal_63, 1, 1);
			__LIB_1__::func_281(&uLocal_64, 1, 1);
			func_39();
			func_17(10);
			break;
		case 3:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(763444929, "CASH_TITHE", 1, 0, 0, 0);
			if (__LIB_1__::func_530(iLocal_59, 1) || __LIB_1__::func_732(iLocal_59, 1))
			{
				if (__LIB_0__::func_75(&uLocal_47) == 0)
				{
					__LIB_1__::func_283(&uLocal_47, 0);
				}
			}
			else if (__LIB_0__::func_75(&uLocal_47))
			{
				__LIB_0__::func_37(&uLocal_47);
			}
			if (__LIB_1__::func_530(iLocal_60, 1) || __LIB_1__::func_732(iLocal_60, 1))
			{
				if (__LIB_0__::func_75(&uLocal_50) == 0)
				{
					__LIB_1__::func_283(&uLocal_50, 0);
				}
			}
			else if (__LIB_0__::func_75(&uLocal_50))
			{
				__LIB_0__::func_37(&uLocal_50);
			}
			if (func_14(&uLocal_47) > (func_41() * 15f) || func_14(&uLocal_50) > (func_41() * 15f))
			{
				if (func_42(0))
				{
					iLocal_41 = 1000;
				}
				else
				{
					iLocal_41 = 0;
				}
			}
			else if (func_14(&uLocal_47) > (func_41() * 12f) || func_14(&uLocal_50) > (func_41() * 12f))
			{
				if (func_42(0))
				{
					iLocal_41 = 100;
				}
				else
				{
					iLocal_41 = 0;
				}
			}
			else if (func_14(&uLocal_47) > (func_41() * 9f) || func_14(&uLocal_50) > (func_41() * 9f))
			{
				if (func_42(2))
				{
					iLocal_41 = 100;
				}
				else
				{
					iLocal_41 = 0;
				}
			}
			else if ((func_14(&uLocal_47) > (func_41() * 4f) || func_14(&uLocal_50) > (func_41() * 4f)) || func_14(&uLocal_53) < 1f)
			{
				if (func_42(5) || func_43())
				{
					iLocal_41 = 100;
				}
				else
				{
					iLocal_41 = 0;
				}
			}
			else if (func_14(&uLocal_47) > (func_41() * 3f) || func_14(&uLocal_50) > (func_41() * 3f))
			{
				iLocal_41 = 4;
			}
			else if (func_14(&uLocal_47) > (func_41() * 2f) || func_14(&uLocal_50) > (func_41() * 2f))
			{
				iLocal_41 = 3;
			}
			else if (func_14(&uLocal_47) > func_41() || func_14(&uLocal_50) > func_41())
			{
				iLocal_41 = 2;
			}
			else
			{
				iLocal_41 = 1;
			}
			if (__LIB_1__::func_732(iLocal_59, 1) || __LIB_0__::func_75(&uLocal_47))
			{
				if (iLocal_41 != 0 && iLocal_42 != iLocal_44)
				{
					if ((iLocal_42 + iLocal_41) > iLocal_44)
					{
						iLocal_42 = iLocal_44;
					}
					else
					{
						iLocal_42 = (iLocal_42 + iLocal_41);
					}
					if (func_44(0))
					{
						AUDIO::_STOP_SOUND_WITH_NAME("Amount_Increase", "HUD_Donate_Sounds");
					}
					AUDIO::PLAY_SOUND_FRONTEND("Amount_Increase", "HUD_Donate_Sounds", true, 0);
				}
				if (func_44(1))
				{
					__LIB_1__::func_148(&uLocal_53);
				}
			}
			if (__LIB_1__::func_732(iLocal_60, 1) || __LIB_0__::func_75(&uLocal_50))
			{
				if (iLocal_41 != 0 && iLocal_42 != iVar0)
				{
					if ((iLocal_42 - iLocal_41) < iVar0)
					{
						iLocal_42 = iVar0;
					}
					else
					{
						iLocal_42 = (iLocal_42 - iLocal_41);
					}
					if (func_44(0))
					{
						AUDIO::_STOP_SOUND_WITH_NAME("Amount_Decrease", "HUD_Donate_Sounds");
					}
					AUDIO::PLAY_SOUND_FRONTEND("Amount_Decrease", "HUD_Donate_Sounds", true, 0);
				}
				if (func_44(1))
				{
					__LIB_1__::func_148(&uLocal_53);
				}
			}
			if (bLocal_45)
			{
				bLocal_45 = false;
				if (__LIB_0__::func_139(iLocal_61))
				{
					func_30(iLocal_61, "PAY_CASH", __LIB_1__::func_925(MISC::_0x2B6846401D68E563((BUILTIN::TO_FLOAT(iLocal_42) / 100f), 2), joaat("COLOR_PURE_WHITE")));
				}
			}
			else
			{
				bLocal_45 = true;
			}
			if (__LIB_0__::func_567(iLocal_61, 1))
			{
				if (iLocal_42 > 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Donate", "HUD_Donate_Sounds", true, 0);
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					func_47();
					func_17(7);
				}
				else
				{
					__LIB_0__::func_45("BROKE_TITHE", 10000, 0, 0, 0, 1);
				}
			}
			else if (__LIB_5__::func_777(iLocal_62, 1))
			{
				func_47();
				func_23();
				func_17(2);
				AUDIO::PLAY_SOUND_FRONTEND("Exit", "HUD_Donate_Sounds", true, 0);
			}
			break;
		case 6:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_camp@cash_box", "base", 1))
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, "script_camp@cash_box", "base") > 0.5f)
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					func_17(7);
				}
			}
			break;
		case 7:
			if (STREAMING::HAS_MODEL_LOADED(iLocal_38))
			{
				iLocal_40 = OBJECT::CREATE_OBJECT(iLocal_38, Global_36, true, true, false, false, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_40, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, -0.04f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
				if (bLocal_36)
				{
					func_17(9);
				}
				else
				{
					if (iLocal_42 < 100)
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_40, false);
					}
					func_17(8);
				}
			}
			break;
		case 10:
			bVar1 = false;
			if (!bLocal_35)
			{
				if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
				{
					bVar1 = true;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				bLocal_35 = true;
				iVar2 = 0;
				while (iVar2 < iLocal_23)
				{
					__LIB_15__::func_666(iLocal_24[iVar2], __LIB_9__::func_977(iLocal_24[iVar2], 816454899, 0), 1);
					iVar2++;
				}
				__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(10, "GIVE_ITEM_TITHE", __LIB_1__::func_925(MISC::_0x2B6846401D68E563((BUILTIN::TO_FLOAT(iLocal_42) * 0.01f), 2), joaat("COLOR_PURE_WHITE"))), "ITEMTYPE_TEXTURES", joaat("TRANSACTION_CAMP_GANG"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
				func_47();
				func_17(12);
			}
			break;
		case 8:
			bVar1 = false;
			if (!bLocal_35)
			{
				if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
				{
					bVar1 = true;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				bLocal_35 = true;
				__LIB_6__::func_592(iLocal_42);
				func_47();
				func_17(12);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_40))
					{
						ENTITY::DETACH_ENTITY(iLocal_40, true, false);
					}
				}
				if (__LIB_9__::func_323(Global_35, 0) && __LIB_9__::func_323(__LIB_0__::func_271(0), 0))
				{
					if (__LIB_0__::func_665(Global_35, __LIB_0__::func_271(0), 1, 1) < 20f)
					{
						if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(__LIB_0__::func_271(0), Global_35, 17))
						{
							if (__LIB_0__::func_959(0, 0) == 0)
							{
								func_58(97);
							}
						}
					}
				}
				__LIB_2__::func_522(iLocal_42, 0, 0, 1, 1);
			}
			break;
		case 9:
			bVar1 = false;
			if (!bLocal_35)
			{
				if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
				{
					bVar1 = true;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_40))
					{
						ENTITY::DETACH_ENTITY(iLocal_40, true, false);
					}
				}
				func_60();
				func_17(12);
				func_39();
				func_61(iLocal_39, 1, 0, -142743235, 0);
				bLocal_35 = true;
			}
			break;
		case 12:
			func_62(iLocal_42);
			__LIB_4__::func_517(0);
			vVar3 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
			iVar7 = 0;
			while (iVar7 < 27)
			{
				iVar8 = __LIB_0__::func_271(iVar7);
				if (((__LIB_0__::func_31(iVar7) && !__LIB_0__::func_287(iVar7, 57, 1)) && ENTITY::DOES_ENTITY_EXIST(iVar8)) && BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar8, true, false), vVar3) < 64f)
				{
					__LIB_0__::func_288(iVar7, 57, 1);
					bVar6 = true;
				}
				iVar7++;
			}
			if (bVar6)
			{
				__LIB_1__::func_283(&(Global_1359489.f_43), 1);
			}
			if (__LIB_0__::func_75(&uLocal_47))
			{
				__LIB_0__::func_37(&uLocal_47);
			}
			if (__LIB_0__::func_75(&uLocal_50))
			{
				__LIB_0__::func_37(&uLocal_50);
			}
			if (__LIB_0__::func_75(&uLocal_53))
			{
				__LIB_0__::func_37(&uLocal_53);
			}
			iLocal_41 = 1;
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TITHE_DONATION");
			if (bLocal_35)
			{
				__LIB_4__::func_253(joaat("CSTAG_PLAYER_DONATED_MONEY"), joaat("CSTP_PERSIST_ACROSS_STATES"), 1120952528, 48, 1, 1, 0);
			}
			func_17(13);
			break;
		case 13:
			break;
	}
	func_67();
}

float func_14(var uParam0)
{
	if (__LIB_0__::func_75(uParam0) == 0)
	{
		return 0f;
	}
	return __LIB_0__::func_265(uParam0);
}

void func_17(int iParam0)
{
	if (iLocal_73 != iParam0)
	{
		iLocal_73 = iParam0;
	}
}

int func_20(int iParam0, int iParam1)
{
	if (Global_1357549.f_1672 != 0 && Global_1357549.f_1673 != 0)
	{
		*iParam0 = Global_1357549.f_1672;
		*iParam1 = Global_1357549.f_1673;
		return 1;
	}
	return 0;
}

bool func_22()
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(PED::GET_PED_BONE_COORDS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_35), 22798, 0f, 0f, 0f), PED::GET_PED_BONE_COORDS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_35), 34606, 0f, 0f, 0f), true) < 0.28f)
	{
		return true;
	}
	return false;
}

void func_23()
{
	if (!__LIB_0__::func_139(iLocal_56))
	{
		iLocal_56 = __LIB_2__::func_403("MONEY_TITHE", joaat("INPUT_GAME_MENU_ACCEPT"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	}
	if (!__LIB_0__::func_139(iLocal_57))
	{
		iLocal_57 = __LIB_2__::func_403("TRINK_TITHE", joaat("INPUT_GAME_MENU_OPTION"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		if (func_74() == 0 && func_75() == 0)
		{
			__LIB_5__::func_793(iLocal_57, 1);
		}
	}
	if (!__LIB_0__::func_139(iLocal_58))
	{
		iLocal_58 = __LIB_2__::func_403("LEAVE_TITHE", joaat("INPUT_GAME_MENU_CANCEL"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	}
}

void func_26()
{
	__LIB_1__::func_281(&iLocal_57, 1, 1);
	__LIB_1__::func_281(&iLocal_56, 1, 1);
	__LIB_1__::func_281(&iLocal_58, 1, 1);
	__LIB_1__::func_281(&iLocal_62, 1, 1);
}

void func_30(int iParam0, char* sParam1, char* sParam2)
{
	int iVar0;
	if (!__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2));
}

void func_34()
{
	int iVar0;
	iVar0 = __LIB_9__::func_977(__LIB_7__::func_776(), 816454899, 0);
	if (iVar0 > 500)
	{
		AUDIO::PLAY_SOUND_FRONTEND("Tithe_Donation_Large", "Tithe_Donation_Sounds", true, 0);
	}
	else if (iVar0 > 250)
	{
		AUDIO::PLAY_SOUND_FRONTEND("Tithe_Donation_Medium", "Tithe_Donation_Sounds", true, 0);
	}
	else if (iVar0 > 0)
	{
		AUDIO::PLAY_SOUND_FRONTEND("Tithe_Donation_Small", "Tithe_Donation_Sounds", true, 0);
	}
	iLocal_42 = (iLocal_42 + iVar0);
}

void func_36(bool bParam0, bool bParam1, int iParam2)
{
	Global_1935689.f_4 = bParam0;
	Global_1935689.f_15 = iParam2;
	if (bParam0)
	{
		Global_1935689.f_5 = 0;
	}
	if (bParam1 || (func_84() && iParam2 == 0))
	{
		__LIB_12__::func_158(1);
		__LIB_12__::func_159(1);
	}
}

void func_39()
{
	Global_1357549.f_1672 = 0;
	Global_1357549.f_1673 = 0;
}

float func_41()
{
	return 0.5f;
}

bool func_42(int iParam0)
{
	float fVar0;
	if ((iLocal_42 % 100) != 0 && iLocal_42 != __LIB_0__::func_492(1))
	{
		fVar0 = (IntToFloat(iLocal_42) * 0.01f);
		if (__LIB_0__::func_75(&uLocal_47))
		{
			iLocal_42 = BUILTIN::CEIL(fVar0) * 100;
		}
		else
		{
			iLocal_42 = BUILTIN::FLOOR(fVar0) * 100;
		}
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_TITHING_INCREASE_AMOUNT")) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_TITHING_DECREASE_AMOUNT")))
	{
		return true;
	}
	iLocal_43++;
	if (iLocal_43 > iParam0)
	{
		iLocal_43 = 0;
		return true;
	}
	return false;
}

bool func_43()
{
	if (func_14(&uLocal_53) < 1f)
	{
		if (__LIB_1__::func_732(iLocal_59, 1))
		{
			return true;
		}
		if (__LIB_1__::func_732(iLocal_60, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_44(bool bParam0)
{
	if (iLocal_41 == 1000 || iLocal_41 == 100)
	{
		return true;
	}
	if (bParam0)
	{
		if (iLocal_41 == 0)
		{
			return true;
		}
	}
	return false;
}

void func_47()
{
	__LIB_1__::func_281(&iLocal_56, 1, 1);
	__LIB_1__::func_281(&iLocal_57, 1, 1);
	__LIB_1__::func_281(&iLocal_58, 1, 1);
	__LIB_1__::func_281(&iLocal_59, 1, 1);
	__LIB_1__::func_281(&iLocal_60, 1, 1);
	__LIB_1__::func_281(&iLocal_61, 1, 1);
	__LIB_1__::func_281(&iLocal_62, 1, 1);
	__LIB_1__::func_281(&uLocal_65, 1, 1);
	__LIB_1__::func_281(&uLocal_66, 1, 1);
	__LIB_1__::func_281(&uLocal_67, 1, 1);
}

void func_58(int iParam0)
{
	Global_1357549.f_1671 = iParam0;
}

void func_60()
{
	int iVar0[7];
	int iVar8;
	int iVar9;
	int iVar10;
	iVar0[0] = -774242862; /* GXTEntry: "Wróbel\'s Valuables" */
	iVar0[1] = joaat("MONEY_LOANSHARK_LILLY_DEBT");
	iVar0[2] = joaat("MONEY_LOANSHARK_WINTON_DEBT");
	iVar0[3] = joaat("MONEY_LOANSHARK_GWEN_DEBT");
	iVar0[4] = joaat("MONEY_LOANSHARK_CATFISH_DEBT");
	iVar0[5] = joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT");
	iVar0[6] = joaat("MONEY_LOANSHARK_DOWNES_DEBT");
	iVar8 = 0;
	while (iVar8 < 7)
	{
		if (__LIB_2__::func_591(iVar0[iVar8], 1, 0))
		{
			__LIB_1__::func_449(joaat("CSTAG_FLOW_DEBT_COLLECTED"), 1, 0);
			__LIB_4__::func_253(joaat("CSTAG_FLOW_DEBT_CONTRIBUTED"), 1017034651, 1120952528, 2, 1, 1, 0);
			iVar9 = func_101(iVar0[iVar8]);
			iVar10 = func_102(iVar0[iVar8]);
			if (iVar9 > iVar10)
			{
				iVar9 = (iVar9 - iVar10);
			}
			else
			{
				iVar10 = 0;
			}
			__LIB_2__::func_481(iVar0[iVar8], 1, -142743235, 0, 0);
			__LIB_15__::func_666(iVar0[iVar8], iVar9, 1);
			if (iVar9 > 0)
			{
				__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, "FEED_DEBT_RECOVERED", iVar9), "ITEMTYPE_TEXTURES", joaat("TRANSACTION_CAMP_GANG"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
			}
			if (iVar10 > 0)
			{
				__LIB_2__::func_520(iVar10, 0, 1065353216 /* Float: 1f */, 1, 752097756);
				__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar10), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
			}
		}
		iVar8++;
	}
}

int func_61(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = __LIB_2__::func_465(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!__LIB_2__::func_591(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_2__::func_528(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_2__::func_528(iParam0, 0, 0) - iParam1) < 0)
		{
			func_61(iParam0, __LIB_2__::func_528(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
	{
		if (!__LIB_1__::func_433(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!__LIB_2__::func_481(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_4__::func_105(iParam0, iParam1);
	return 1;
}

void func_62(int iParam0)
{
	if (iParam0 > 2000)
	{
		AUDIO::PLAY_SOUND_FRONTEND("Tithe_Donation_Large", "Tithe_Donation_Sounds", true, 0);
	}
	else if (iParam0 > 500)
	{
		AUDIO::PLAY_SOUND_FRONTEND("Tithe_Donation_Medium", "Tithe_Donation_Sounds", true, 0);
	}
	else if (iParam0 > 0)
	{
		AUDIO::PLAY_SOUND_FRONTEND("Tithe_Donation_Small", "Tithe_Donation_Sounds", true, 0);
	}
	if (iParam0 > 0)
	{
		if (iParam0 >= 2000)
		{
			func_113(11, 0, 1, 0, 0, 0, 1.5f, 0);
		}
		else if (iParam0 >= 500)
		{
			if (__LIB_1__::func_426(Global_1357549.f_1487, 1))
			{
				Global_1357549.f_1487 = Global_1899515;
				__LIB_1__::func_446(&(Global_1357549.f_1487), 0, 0, 24, 0, 0, 0, 0);
				func_113(11, 0, 1, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
			}
		}
		else if (__LIB_1__::func_426(Global_1357549.f_1486, 1))
		{
			Global_1357549.f_1486 = Global_1899515;
			__LIB_1__::func_446(&(Global_1357549.f_1486), 0, 0, 24, 0, 0, 0, 0);
			func_113(10, 0, 1, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
		}
	}
}

void func_67()
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		switch (iLocal_73)
		{
			case 0:
			case 1:
				return;
			case 8:
			case 9:
			case 10:
			case 12:
				return;
			default:
				break;
		}
		if (bLocal_46)
		{
			Global_1914319.f_16855 = 19;
			bLocal_46 = false;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
		{
			OBJECT::DELETE_OBJECT(&iLocal_40);
		}
		__LIB_0__::func_698(8192);
		func_39();
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("SATCHEL")))
		{
			UIAPPS::_CLOSE_APP_BY_HASH(joaat("SATCHEL"));
		}
		__LIB_7__::func_723();
		if (__LIB_0__::func_296(0, 0, 1) == 0)
		{
			__LIB_0__::func_703(1, -1);
		}
		iLocal_0 = 0;
	}
}

int func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	__LIB_0__::func_446("ALL SATCHEL", &iVar1, &iVar2, 1084182731, 0);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
		{
			if (__LIB_0__::func_144(Var4.f_4, 0))
			{
				if (__LIB_0__::func_192(Var4.f_4, -111938901))
				{
					iVar0 = 1;
				}
			}
		}
		iVar3++;
	}
	__LIB_0__::func_238(iVar1);
	return iVar0;
}

int func_75()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	__LIB_0__::func_446("ALL SATCHEL", &iVar1, &iVar2, -1162387149, 0);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
		{
			if (__LIB_0__::func_144(Var4.f_4, 0))
			{
				iVar0 = 1;
			}
		}
		iVar3++;
	}
	__LIB_0__::func_238(iVar1);
	return iVar0;
}

bool func_84()
{
	if ((Global_1935689.f_10195 != (Global_1935689.f_19.f_203 - 1) || func_139(__LIB_8__::func_716(0), Global_1935689.f_10190, 0) > 0) || Global_1935689.f_10195 == 15)
	{
		return true;
	}
	return false;
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MONEY_LOANSHARK_GWEN_DEBT"):
			return 4500;
		case joaat("MONEY_LOANSHARK_LILLY_DEBT"):
			return 3600;
		case joaat("MONEY_LOANSHARK_CATFISH_DEBT"):
			return 2900;
		case joaat("MONEY_LOANSHARK_WINTON_DEBT"):
			return 3800;
		case joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT"):
			return 4000;
		case -774242862: /* GXTEntry: "Wróbel\'s Valuables" */
			return 4300;
		default:
			break;
	}
	return 0;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MONEY_LOANSHARK_WINTON_DEBT"):
		case joaat("MONEY_LOANSHARK_GWEN_DEBT"):
		case -774242862: /* GXTEntry: "Wróbel\'s Valuables" */
		case joaat("MONEY_LOANSHARK_LILLY_DEBT"):
		case joaat("MONEY_LOANSHARK_CATFISH_DEBT"):
		case joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT"):
			return __LIB_4__::func_211(joaat("REWARD_MEDIUM"), 0, -1);
		default:
			break;
	}
	return 0;
}

void func_113(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if ((Global_36616 && __LIB_0__::func_347(iParam1)) != 0)
	{
		return;
	}
	iVar0 = __LIB_0__::func_348(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_175(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			__LIB_0__::func_349(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_175(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_139(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_12__::func_160())
	{
		iVar0 = func_203(iParam1, 0);
	}
	else
	{
		iVar0 = __LIB_2__::func_528(iParam1, bParam2, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			iVar0 = (iVar0 + __LIB_7__::func_601(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), iParam1));
		}
	}
	if (iParam1 == Global_1935689.f_1224)
	{
		iVar0++;
	}
	return iVar0;
}

void func_175(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;
	iVar0 = __LIB_0__::func_786();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = __LIB_0__::func_934(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (__LIB_0__::func_293(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!__LIB_0__::func_181())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = __LIB_0__::func_309(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = __LIB_0__::func_786();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = __LIB_0__::func_416(iVar1);
		__LIB_1__::func_454(__LIB_0__::func_417(), 0, 4000);
		__LIB_3__::func_363(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		__LIB_1__::func_427(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > __LIB_0__::func_348(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < __LIB_0__::func_348(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { __LIB_0__::func_14(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		__LIB_0__::func_896(10, 1);
	}
}

int func_203(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_2__::func_528(iParam0, bParam1, 0);
	if (__LIB_0__::func_27(Global_1935689.f_10186, 1))
	{
		iVar0 = __LIB_0__::func_398(__LIB_0__::func_97(0));
		iVar1 = (iVar1 + __LIB_7__::func_601(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar0), iParam0));
	}
	if (__LIB_0__::func_27(Global_1935689.f_10186, 2))
	{
		iVar0 = __LIB_0__::func_398(__LIB_0__::func_97(1));
		iVar1 = (iVar1 + __LIB_7__::func_601(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar0), iParam0));
	}
	if (__LIB_0__::func_27(Global_1935689.f_10186, 4))
	{
		iVar0 = __LIB_0__::func_398(__LIB_0__::func_97(6));
		iVar1 = (iVar1 + __LIB_7__::func_601(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar0), iParam0));
	}
	return iVar1;
}

