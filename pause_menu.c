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
	char* sLocal_14 = NULL;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = -1;
	var uLocal_26 = 0;
	char* sLocal_27 = NULL;
	int iLocal_28 = 0;
	struct<168> Local_29 = { 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	var uVar0;
	var uVar1;
	struct<30> Var2;
	var uVar32;
	bool bVar33;
	int iVar34;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	sLocal_27 = "beat_gang_camp_reminder";
	iLocal_28 = 23;
	TXD::REQUEST_STREAMED_TEXTURE_DICT("pausemenu_player_update", false);
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "AllowedToSave", 0);
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bPauseMenuAllowedToReplay", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "sessionInfo"), "isArthur", !__LIB_0__::func_181());
	Local_29.f_156 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bDisplayMissionChallengeChecklist", 0);
	Local_29.f_157 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowChecklistToggle", 1);
	if (__LIB_0__::func_313())
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bPauseMenuPhotoModeVisible", 1);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bEnablePauseMenuPhotoMode", func_3());
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bEnablePauseMenuPhotoMode", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bPauseMenuPhotoModeVisible", 0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1935689.f_10217))
	{
		Local_29.f_166 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_10217);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10217, false);
	}
	Var2 = { Global_40.f_9 };
	if (TXD::_DOES_STREAMED_TXD_EXIST(-637848863))
	{
		TXD::_REQUEST_STREAMED_TXD(-637848863, false);
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		if (!Global_20)
		{
			Global_40.f_9 = { Var2 };
		}
		func_4(uVar0, uVar1);
	}
	Global_0.f_14 = func_5();
	if (Global_0.f_14)
	{
		Global_20 = 0;
		func_6(0, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uVar0, true);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uVar1, func_7());
	func_8(&Local_29);
	BUILTIN::WAIT(0);
	func_9(&Local_29);
	UIFEED::_0xDD1232B332CBB9E7(6, 1, 0);
	Global_43890 = -1;
	__LIB_1__::func_168();
	iVar34 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(Global_35, 0);
	__LIB_4__::func_692(1, BUILTIN::TO_FLOAT(iVar34), 0);
	__LIB_1__::func_167();
	iVar34 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(Global_35, 1);
	__LIB_4__::func_692(2, BUILTIN::TO_FLOAT(iVar34), 0);
	__LIB_1__::func_166();
	iVar34 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(Global_35, 2);
	__LIB_4__::func_692(3, BUILTIN::TO_FLOAT(iVar34), 0);
	func_14();
	while (((!SCRIPTS::_0x9E4EF615E307FBBE() && !__LIB_0__::func_6(Global_43890)) && !bVar33) && !Local_29.f_167)
	{
		func_16(&Local_29);
		Global_43890 = func_17(&Local_29, &uVar32);
		bVar33 = func_18();
		BUILTIN::WAIT(0);
	}
	__LIB_0__::func_11(&Local_29);
	if (!Global_20)
	{
		Global_40.f_9 = { Var2 };
	}
	if (bVar33)
	{
		func_20();
		SCRIPTS::_0xBC2C927F5C264243(0);
		AUDIO::_0x6339C1EA3979B5F7("Main_Menu", "Load_Menu_Scenes");
	}
	if (__LIB_0__::func_6(Global_43890))
	{
		UIAPPS::_CLOSE_ALL_APPS();
		CAM::DO_SCREEN_FADE_OUT(0);
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_PHOTOMODE")) > 0)
		{
			__LIB_4__::func_808(joaat("CAMERA_PHOTOMODE"), 523);
		}
	}
	if (__LIB_0__::func_313())
	{
		if (Local_29.f_167)
		{
			UIAPPS::_CLOSE_ALL_APPS();
			__LIB_16__::func_424();
		}
	}
	func_4(uVar0, uVar1);
}

int func_3()
{
	if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("SHOP_MENU")))
	{
		return 0;
	}
	if (((((((GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh01") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh02")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh03")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh04")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh05")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh06")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh08Epi01")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh09Epi02"))
	{
		return 0;
	}
	if (((((((((((((((((((GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewDaysLater") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewDaysLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewHoursLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewHoursLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewMonthsLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewMonthsLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewWeeksLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewWeeksLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupledayslater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupledayslater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_couplemonthslater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_couplemonthslater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupleweekslater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupleweekslater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_daylater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_daylater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_somedaysLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_somedaysLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_someyearsLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_someyearsLater_onblack"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
	{
		if (DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
		{
			return 0;
		}
	}
	if (__LIB_0__::func_1(Global_1935630, 4096))
	{
		return 0;
	}
	if (Global_1392040.f_6)
	{
		return 0;
	}
	if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("FAST_TRAVEL_MENU")) || UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("FAST_TRAVEL_MENU")))
	{
		return 0;
	}
	if (__LIB_0__::func_1(Global_1935630, 16384) || STREAMING::_0x99F92061EFE908BA())
	{
		return 0;
	}
	if (__LIB_0__::func_69(__LIB_5__::func_824(__LIB_0__::func_12())))
	{
		if (Global_40.f_9384[__LIB_5__::func_824(__LIB_0__::func_12()) /*2*/] == 256)
		{
			return 0;
		}
	}
	if ((GRAPHICS::ANIMPOSTFX_IS_RUNNING("MissionChoice") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerHonorChoiceGood")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerHonorChoiceBad"))
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FINALE3")) > 0)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			return 0;
		}
	}
	if (__LIB_3__::func_63() || __LIB_3__::func_64())
	{
		return 0;
	}
	if (CAM::_0x139EFB0A71DD9011())
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_ITEM")) > 0)
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("PLAYER_MENU")) > 0)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SPD_ARMADILLOTOWNCRIER")) > 0)
	{
		if (__LIB_0__::func_94(Global_35, -3704.772f, -2616.527f, -14.9239f, 1) < 4f)
		{
			return 0;
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SPD_ANDERSHELGERSON")) > 0)
	{
		if (__LIB_0__::func_94(Global_35, 2435.137f, -1225.753f, 44.8932f, 1) < 4f)
		{
			return 0;
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SPD_BLANDPREACHER")) > 0)
	{
		if (__LIB_0__::func_94(Global_35, -1786.264f, -423.6425f, 154.3952f, 1) < 4f)
		{
			return 0;
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SPD_EUGENICSPROPONENT")) > 0)
	{
		if (__LIB_0__::func_94(Global_35, 2674.925f, -1389.901f, 45.4948f, 1) < 4f)
		{
			return 0;
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SPD_MADSCIENTIST")) > 0)
	{
		if (__LIB_0__::func_94(Global_35, 2944.418f, 1337.022f, 43.1089f, 1) < 4f)
		{
			return 0;
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SPD_TIMOTHYDONAHUE1")) > 0)
	{
		if (__LIB_0__::func_94(Global_35, 2644.537f, -1209.317f, 52.3504f, 1) < 4f)
		{
			return 0;
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SPD_VAMPIRE")) > 0)
	{
		if (__LIB_0__::func_94(Global_35, 2780.151f, -1310.231f, 45.5924f, 1) < 4f)
		{
			return 0;
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BEAT_PEEPING_TOM")) > 0)
	{
		if (__LIB_0__::func_94(Global_35, -283.7343f, 865.7388f, 120.1339f, 1) < 10f)
		{
			return 0;
		}
	}
	return 1;
}

void func_4(var uParam0, var uParam1)
{
	if (__LIB_0__::func_6(Global_43890))
	{
		AUDIO::_0x64B956F4E761DF5C(1);
		__LIB_11__::func_882();
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam1);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_29.f_156);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_29.f_157);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_29.f_158);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1935689.f_10217))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10217, Local_29.f_166);
	}
	if (__LIB_0__::func_2() == -1)
	{
		func_32();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_5()
{
	int iVar0;
	if (__LIB_0__::func_296(0, 1, 0))
	{
		return 0;
	}
	if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 0;
	}
	if (PED::_0x336B3D200AB007CB(Global_35, Global_36, 50f, 0) > 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_28())
	{
		return 0;
	}
	if (__LIB_8__::func_974())
	{
		return 0;
	}
	if (__LIB_11__::func_888() > 0)
	{
		return 0;
	}
	if (Global_1914319.f_18941.f_17)
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_298(0);
	if (__LIB_0__::func_6(iVar0) && __LIB_0__::func_700(iVar0) == 8)
	{
		return 0;
	}
	if (__LIB_0__::func_644(16) || __LIB_4__::func_233(8192))
	{
		return 0;
	}
	return 1;
}

void func_6(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_0__::func_991();
	}
	else
	{
		return;
	}
	__LIB_0__::func_591();
	Global_40.f_9.f_14 = __LIB_0__::func_23();
	Global_40.f_9.f_20 = LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = SAVE::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (__LIB_0__::func_826())
		{
			__LIB_0__::func_322(Global_1310720.f_1);
		}
		else if (__LIB_0__::func_61() == __LIB_1__::func_447(Global_36, 1) && __LIB_0__::func_592() != 2)
		{
			__LIB_0__::func_322(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			__LIB_0__::func_322(Global_36);
		}
		__LIB_1__::func_627(Global_36, &vVar0, &uVar4);
		if (!__LIB_0__::func_826())
		{
			if (__LIB_0__::func_62(vVar0, Global_36) < __LIB_0__::func_62(Global_40.f_9.f_7, Global_36))
			{
				__LIB_0__::func_322(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = __LIB_1__::func_447(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		__LIB_1__::func_627(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		__LIB_0__::func_7(&Global_1935630, 8192);
	}
	func_53();
}

int func_7()
{
	if (__LIB_0__::func_296(0, 0, 1))
	{
		return 0;
	}
	if (__LIB_1__::func_195())
	{
		return 0;
	}
	if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 0;
	}
	if (PLAYER::_0x72AD59F7B7FB6E24(PLAYER::GET_PLAYER_INDEX(), 5000))
	{
		return 0;
	}
	if (PED::_0x336B3D200AB007CB(Global_35, Global_36, 50f, 0) > 0)
	{
		return 0;
	}
	if (Global_1934266.f_60)
	{
		return 0;
	}
	if (Global_16)
	{
		return 0;
	}
	if (Global_1914319.f_18969)
	{
		return 0;
	}
	if (Global_1956584)
	{
		return 0;
	}
	if (__LIB_4__::func_807(0))
	{
		return 0;
	}
	if (__LIB_7__::func_152())
	{
		return 0;
	}
	if (__LIB_0__::func_102())
	{
		return 0;
	}
	if (Global_1357549.f_1641 > 1)
	{
		return 0;
	}
	if (__LIB_0__::func_6(Global_43890))
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("PAUSE_MENU_REPLAY_LAUNCHER")) > 0)
	{
		return 0;
	}
	if (__LIB_0__::func_190())
	{
		return 0;
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(Global_35, true))
	{
		return 0;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1900073, false))
	{
		return 0;
	}
	if (__LIB_11__::func_875())
	{
		return 0;
	}
	if (Global_36560 >= 2 && Global_36560 <= 5)
	{
		return 0;
	}
	if (__LIB_4__::func_233(4096))
	{
		return 0;
	}
	if (__LIB_0__::func_644(16) || __LIB_4__::func_233(8192))
	{
		return 0;
	}
	return 1;
}

void func_8(var uParam0)
{
	if (Global_43891)
	{
		return;
	}
}

void func_9(var uParam0)
{
	struct<2> Var0;
	float fVar2;
	int iVar3;
	if (__LIB_1__::func_185(76))
	{
		Var0 = { __LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP1")) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 6);
		Var0 = { __LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP2")) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 22);
		Var0 = { __LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP3")) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 19);
		Var0 = { __LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP4")) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 12);
		Var0 = { __LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP5")) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 6);
		Var0 = { __LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP6")) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 18);
		Var0 = { __LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP7")) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 1);
		Var0 = { __LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP8")) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 8);
		Var0 = { __LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP9")) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 15);
		Var0 = { __LIB_0__::func_38(joaat("COMPLETED"), joaat("REQUIRED_MISSIONS")) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 107);
		func_53();
	}
	uParam0->f_158 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "progress");
	fVar2 = __LIB_12__::func_128(__LIB_0__::func_650(__LIB_0__::func_14(joaat("TOTAL_PROGRESS_MADE"))), 1, 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_158, "completionPercent", MISC::_CREATE_VAR_STRING(6, "PM_SCR_PROG_PERCENT", fVar2));
	uParam0->f_161 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_158, "label", "");
	uParam0->f_162 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_158, "description", "");
	uParam0->f_163 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_158, "descriptionVisible", false);
	uParam0->f_164 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_158, "textureName", "");
	uParam0->f_165 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_158, "textureTxd", -637848863);
	uParam0->f_159 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_158, "itemList");
	iVar3 = 0;
	while (iVar3 < 40)
	{
		func_65(uParam0, iVar3);
		iVar3++;
	}
}

void func_14()
{
	func_79(2, 3, 0);
	func_79(6, 18, 0);
	func_79(34, 13, 1);
	func_79(34, 19, 1);
	func_79(34, 26, 1);
	func_79(34, 13, 0);
	func_79(34, 19, 0);
	func_79(34, 26, 0);
}

void func_16(var uParam0)
{
	struct<4> Var0;
	int iVar4;
	iVar4 = joaat("PAUSE_MENU");
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &Var0))
		{
			switch (Var0)
			{
				case -2075827635:
					switch (Var0.f_2)
					{
						case 1979383369:
							break;
						case 2084001267:
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				case -1740156697:
					switch (Var0.f_2)
					{
						case -1330172908:
							break;
						case 1238474784:
							break;
						case 248393197:
							func_80(Var0.f_3);
							break;
						case 1537860827:
							func_81(uParam0, &Var0);
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				case -1203660660:
					switch (Var0.f_2)
					{
						case -385109718:
							func_82();
							break;
						case -609314343:
							func_83();
							break;
						case 1371972537:
							func_84();
							break;
						case -17440837:
							func_85();
							break;
						case -1123713079:
							func_86();
							break;
						case -1332231262:
							break;
						case 2096096105:
							break;
						case -1086656831:
							break;
						case 1777696068:
							break;
						case 891622121:
							break;
						case 792408241:
							break;
						case 1070621771:
							break;
						case 1320195282:
							uParam0->f_167 = 1;
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				default:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
			}
		}
	}
}

int func_17(var uParam0, var uParam1)
{
	vector3 vVar0;
	int iVar4;
	iVar4 = -4325789;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &vVar0))
		{
			switch (vVar0.x)
			{
				case -1203660660:
					if (vVar0.z == 270525852)
					{
						uParam0->f_155 = !uParam0->f_155;
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_156, uParam0->f_155);
					}
					else if (vVar0.z == 920946524)
					{
						if (__LIB_0__::func_6(*uParam1))
						{
							return *uParam1;
						}
					}
					break;
				case -1740156697:
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_157, STATS::_0x4DAC398297981B87(vVar0.z));
					*uParam1 = __LIB_5__::func_121(vVar0.z);
					break;
				default:
					break;
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
		}
	}
	return -1;
}

int func_18()
{
	int iVar0;
	int iVar4;
	iVar4 = -37892458;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &iVar0))
		{
			switch (iVar0)
			{
				case -1203660660:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					return 1;
				case -1740156697:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				default:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
			}
		}
	}
	return 0;
}

void func_20()
{
	__LIB_0__::func_867(1);
	__LIB_17__::func_385();
}

void func_32()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_92();
	func_93();
	func_94();
	func_95();
	func_96();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_53()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	if (!__LIB_0__::func_1(Global_1935630, 8192))
	{
		return;
	}
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	__LIB_0__::func_8(&Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP1")))));
	fVar0 = (fVar0 + (0.2525252f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP2")))));
	fVar0 = (fVar0 + (0.2923976f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP3")))));
	fVar0 = (fVar0 + (0.462963f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP4")))));
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP5")))));
	fVar0 = (fVar0 + (0.308642f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP6")))));
	fVar0 = (fVar0 + (5.555555f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP7")))));
	fVar0 = (fVar0 + (0.6944444f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP8")))));
	fVar0 = (fVar0 + (0.3703704f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP9")))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(10f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("RC_STRANDS"))))));
	fVar0 = (fVar0 + (0.6f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY"))))));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(25f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("UNIQUE_BEATS_COMPLETED"))))));
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("GANG_AMBUSH_ENCOUNTERED"))))));
	fVar0 = (fVar0 + (0.3333333f * __LIB_0__::func_646(6f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("GANG_HIDEOUT_COMPLETED"))))));
	fVar0 = (fVar0 + (3f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("DISCOVERABLE_FOUND"))))));
	iVar1 = __LIB_11__::func_883();
	fVar0 = (fVar0 + (0.1111111f * __LIB_0__::func_646(9f, BUILTIN::TO_FLOAT(iVar1))));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ACTRESSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ACTRESSES"))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_AMERICANS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_AMERICANS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ANIMALS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ANIMALS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ARTISTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ARTISTS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_GIRLS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_GIRLS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_GUNSLINGERS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_GUNSLINGERS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_HORSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_HORSES")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_INVENTIONS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_INVENTIONS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_LANDMARKS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_LANDMARKS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_PLANTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_PLANTS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_SPORTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_SPORTS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_VEHICLES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_VEHICLES")))));
	fVar0 = (fVar0 + __LIB_0__::func_646(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * __LIB_0__::func_646(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(__LIB_7__::func_496()))));
	if (__LIB_1__::func_187(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 499813453)));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 666607663))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), -220219788))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 218622660))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 390004462))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 6410548))));
	fVar0 = (fVar0 + (1f * __LIB_0__::func_646(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("SHACK_FOUND"))))));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("KILLS"), joaat("LEGENDARY_ANIMALS"))))));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("ANIMALS")), 50)) / BUILTIN::TO_FLOAT(50)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("EQUIPMENT")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("FISH")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + COMPENDIUM::_0x725D52F21A5E9E22(joaat("GANGS")));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("HERBS")), 20)) / BUILTIN::TO_FLOAT(20)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("HORSES")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("WEAPONS")), 48)) / BUILTIN::TO_FLOAT(48)));
	__LIB_1__::func_702(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_838(joaat("HORSES_REACHED_MAX_BOND"))))));
	fVar5 = BUILTIN::TO_FLOAT(__LIB_1__::func_6());
	fVar0 = (fVar0 + ((3f * fVar5) / BUILTIN::TO_FLOAT(9)));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("BLACKJACK"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("DOMINOES_HAND"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("FIVE_FINGER"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("POKER_HAND"))))));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("SPECIAL_PED_INTERACTION"))))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("BATHS_TAKEN"))))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("SHOWS_SEEN"))))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("THEATRE_VISITS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("AMMO"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("FOOD"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("COACH"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("HOME"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("SHOP"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("TRAIN"))))));
	Var6 = { __LIB_0__::func_14(joaat("TOTAL_PROGRESS_MADE")) };
	fVar8 = __LIB_0__::func_650(Var6);
	STATS::_0xE141F6B40B1E3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (__LIB_0__::func_6(Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < Global_1898329)
		{
			if (!__LIB_0__::func_6(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = __LIB_0__::func_291(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					__LIB_1__::func_722(Global_1898330[iVar61]);
				}
				else
				{
					__LIB_1__::func_130(iVar61, 0);
					if (__LIB_0__::func_700(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = __LIB_0__::func_299(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (Global_40.f_450[iVar63] > -1 && Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = __LIB_0__::func_299(Global_1347702[Global_40.f_450[iVar63] /*49*/].f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_TELEMETRY_GAME_PROGRESS(__LIB_0__::func_299(Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_65(var uParam0, int iParam1)
{
	char cVar0[32];
	var uVar4;
	int iVar5;
	MISC::_INT_TO_STRING(iParam1, "%u", &cVar0);
	uVar4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_158, &cVar0);
	if (func_131(iParam1))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar4, "label", func_132(iParam1));
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_159, iParam1, "itemEntryGroup", uVar4);
	}
	else
	{
		StringCopy(&cVar0, func_133(iParam1, &iVar5), 32);
		switch (iVar5)
		{
			case 0:
			case 2:
				if (func_134(iParam1, iVar5))
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar4, "label", func_132(iParam1));
					DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar4, "value", &cVar0);
					DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar4, "isActive", true);
				}
				else
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar4, "label", func_135(iParam1));
					DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar4, "value", "");
					DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar4, "isActive", false);
				}
				break;
			case 1:
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar4, "label", func_132(iParam1));
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar4, "isActive", false);
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar4, "value", "");
				DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar4, "textureName", joaat("CHECK"));
				DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar4, "textureTxd", joaat("HUD_TEXTURES"));
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar4, "textureVisible", true);
				break;
		}
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar4, "focus_event_hash", 1537860827);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_159, iParam1, "itemEntry", uVar4);
	}
}

void func_79(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = __LIB_6__::func_847(iParam0);
	iVar1 = __LIB_6__::func_847(iParam1);
	if (__LIB_8__::func_964(__LIB_0__::func_38(joaat("PICK"), iVar1)) < 0)
	{
		return;
	}
	if (__LIB_8__::func_964(__LIB_0__::func_38(joaat("PICK"), iVar0)) > 0)
	{
		if (__LIB_8__::func_964(__LIB_0__::func_38(joaat("USED_IN_RECIPE"), iVar0)) >= __LIB_8__::func_964(__LIB_0__::func_38(joaat("PICK"), iVar0)))
		{
			iVar2 = (__LIB_8__::func_964(__LIB_0__::func_38(joaat("PICK"), iVar1)) - __LIB_8__::func_964(__LIB_0__::func_38(joaat("EATEN"), iVar1)));
			if (__LIB_8__::func_964(__LIB_0__::func_38(joaat("USED_IN_RECIPE"), iVar1)) < iVar2)
			{
				iVar3 = ((__LIB_8__::func_964(__LIB_0__::func_38(joaat("USED_IN_RECIPE"), iVar0)) - __LIB_8__::func_964(__LIB_0__::func_38(joaat("PICK"), iVar0))) - __LIB_8__::func_964(__LIB_0__::func_38(joaat("EATEN"), iVar0)));
				if (iVar3 > 0)
				{
					iVar4 = __LIB_0__::func_259(iVar3, iVar2);
					iVar4 = __LIB_0__::func_259((iVar2 - __LIB_8__::func_964(__LIB_0__::func_38(joaat("USED_IN_RECIPE"), iVar1))), iVar4);
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("USED_IN_RECIPE"), iVar1), iVar4);
					func_143(__LIB_0__::func_38(joaat("USED_IN_RECIPE"), iVar0), iVar4);
				}
			}
		}
		else if ((__LIB_8__::func_964(__LIB_0__::func_38(joaat("USED_IN_RECIPE"), iVar0)) > 0 && __LIB_8__::func_964(__LIB_0__::func_38(joaat("PICK"), iVar1)) > 0) && __LIB_8__::func_964(__LIB_0__::func_38(joaat("USED_IN_RECIPE"), iVar1)) <= 0)
		{
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("USED_IN_RECIPE"), iVar1), 1);
			func_143(__LIB_0__::func_38(joaat("USED_IN_RECIPE"), iVar0), 1);
		}
	}
	else
	{
		iVar5 = __LIB_8__::func_964(__LIB_0__::func_38(joaat("USED_IN_RECIPE"), iVar0));
		if (iVar5 > 0)
		{
			iVar6 = (__LIB_8__::func_964(__LIB_0__::func_38(joaat("PICK"), iVar1)) - __LIB_8__::func_964(__LIB_0__::func_38(joaat("EATEN"), iVar1)));
			if (__LIB_8__::func_964(__LIB_0__::func_38(joaat("USED_IN_RECIPE"), iVar1)) < iVar6)
			{
				if (!bParam2 || __LIB_8__::func_964(__LIB_0__::func_38(joaat("USED_IN_RECIPE"), iVar1)) < 1)
				{
					iVar7 = __LIB_0__::func_259(iVar5, iVar6);
					if (bParam2)
					{
						iVar7 = 1;
					}
					else
					{
						iVar7 = __LIB_0__::func_259((iVar6 - __LIB_8__::func_964(__LIB_0__::func_38(joaat("USED_IN_RECIPE"), iVar1))), iVar7);
					}
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("USED_IN_RECIPE"), iVar1), iVar7);
					func_143(__LIB_0__::func_38(joaat("USED_IN_RECIPE"), iVar0), iVar7);
				}
			}
		}
	}
}

void func_80(var uParam0)
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, "rpg_pause_item_index");
	switch (Global_1955569.f_5.f_747)
	{
		case 0:
			func_144(iVar0);
			break;
		case 1:
			func_145(iVar0);
			break;
		case 2:
			func_146(iVar0);
			break;
		case 3:
			func_147(iVar0);
			break;
		case 4:
			func_148(iVar0);
			break;
	}
}

void func_81(var uParam0, var uParam1)
{
	int iVar0;
	char* sVar1;
	char cVar2[128];
	iVar0 = uParam1->f_1;
	sVar1 = DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(uParam1->f_3, "label");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_161, sVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_163, true);
	if (func_149(iVar0))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_163, false);
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_160))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_160);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_164, func_150(iVar0));
		uParam0->f_160 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_158, "checklist");
		func_151(uParam0, iVar0);
	}
	else
	{
		StringCopy(&cVar2, func_132(iVar0), 128);
		StringConCat(&cVar2, "_DESC", 128);
		if (HUD::DOES_TEXT_LABEL_EXIST(&cVar2) && !MISC::_DOES_STRING_EXIST_IN_STRING(sVar1, "Unknown"))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_162, &cVar2);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_164, func_150(iVar0));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_162, "");
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_164, "UNDISCOVERED");
		}
	}
}

void func_82()
{
	char* sVar0;
	vector3 vVar1[24];
	bool bVar4;
	func_152(1, 1);
	Global_1955569.f_5.f_747 = 0;
	func_154(MISC::_CREATE_VAR_STRING(2, __LIB_16__::func_288(0)));
	func_155(0, "PMPLAYER_STATISTICS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	func_156(2, "PMPLAYER_HONOR", "", 1, 0, 1, __LIB_0__::func_522(Global_40.f_11095.f_35), "pausemenu_player");
	func_155(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar1, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[0]), 24);
	bVar4 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_12[0]);
	if (bVar4)
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar4, &cVar1, "pausemenu_player");
	}
	else
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0);
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_12[1]);
	if (__LIB_0__::func_729())
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player");
	}
	else if (__LIB_0__::func_728())
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player");
	}
	else
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0);
	}
	if (Global_40.f_11095.f_43)
	{
		func_156(6, "PMPLAYER_CONDITION_TOXICITY", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player");
	}
	else
	{
		func_156(6, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0);
	}
	func_158(7);
	func_155(8, "PMPLAYER_PERKS");
	func_159(9, joaat("PROVISION_TALISMAN_RAVEN_CLAW"), "PROVISION_TALISMAN_RAVEN_CLAW");
	func_159(10, joaat("PROVISION_TRINKET_BEAVER_TOOTH"), "PROVISION_TRINKET_BEAVER_TOOTH");
	func_159(11, joaat("PROVISION_TRINKET_FOX_CLAW"), "PROVISION_TRINKET_FOX_CLAW");
	func_159(12, joaat("PROVISION_TRINKET_BUCK_ANTLER"), "PROVISION_TRINKET_BUCK_ANTLER");
	func_159(13, joaat("PROVISION_TRINKET_RAM_HORN"), "PROVISION_TRINKET_RAM_HORN");
	func_159(14, joaat("PROVISION_TRINKET_WOLF_HEART"), "PROVISION_TRINKET_WOLF_HEART");
	func_159(15, joaat("PROVISION_TRINKET_PRONGHORN_ANTLER"), "PROVISION_TRINKET_PRONGHORN_ANTLER");
	if (__LIB_0__::func_26())
	{
		func_159(16, joaat("PROVISION_TALISMAN_EAGLE_TALON"), "PROVISION_TALISMAN_EAGLE_TALON");
	}
	if (__LIB_0__::func_313())
	{
		func_159(17, joaat("PROVISION_TRINKET_CAT_EYE"), "PROVISION_TRINKET_CAT_EYE");
		func_159(18, joaat("PROVISION_TRINKET_SHARK_TOOTH"), "PROVISION_TRINKET_SHARK_TOOTH");
		func_159(19, joaat("PROVISION_TRINKET_CROW_BEAK"), "PROVISION_TRINKET_CROW_BEAK");
	}
	func_159(20, joaat("PROVISION_DISCO_ARROWHEAD_02"), "PROVISION_DISCO_ARROWHEAD_02");
	func_159(21, joaat("DOCUMENT_FIELD_MANUAL"), "DOCUMENT_FIELD_MANUAL");
	func_159(22, joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"), "CLOTHING_LEGENDARY_EAST_OUTFIT");
	func_160(0);
	func_161(0);
	func_144(1);
}

void func_83()
{
	char* sVar0;
	int iVar1;
	vector3 vVar2[24];
	bool bVar5;
	Global_1955569.f_5.f_747 = 1;
	func_152(1, 1);
	func_154(MISC::_CREATE_VAR_STRING(2, __LIB_16__::func_288(1)));
	func_155(0, "PMPLAYER_STATISTICS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	iVar1 = __LIB_0__::func_963(0);
	func_156(2, "PMPLAYER_PROGRESSION", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", iVar1 + 1), 1, 0, 0, 0, 0);
	func_155(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[0]), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_12[0]);
	if (bVar5)
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player");
	}
	else
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0);
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_12[1]);
	if (__LIB_0__::func_729())
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player");
	}
	else if (__LIB_0__::func_728())
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player");
	}
	else
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0);
	}
	if (Global_40.f_11095.f_43)
	{
		func_156(6, "PMPLAYER_CONDITION_TOXICITY", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player");
	}
	else
	{
		func_156(6, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0);
	}
	func_158(7);
	func_155(8, "PMPLAYER_PERKS");
	func_159(9, joaat("PROVISION_TRINKET_BISON_HORN"), "PROVISION_TRINKET_BISON_HORN");
	func_159(10, joaat("PROVISION_TRINKET_MOOSE_ANTLER"), "PROVISION_TRINKET_MOOSE_ANTLER");
	func_159(11, joaat("PROVISION_TALISMAN_BEAR_CLAW"), "PROVISION_TALISMAN_BEAR_CLAW");
	func_159(12, joaat("PROVISION_TRINKET_OWL_FEATHER"), "PROVISION_TRINKET_OWL_FEATHER");
	if (__LIB_0__::func_26())
	{
		func_159(13, joaat("PROVISION_TRINKET_IGUANA_SCALE"), "PROVISION_TRINKET_IGUANA_SCALE");
	}
	if (__LIB_0__::func_313())
	{
		func_159(14, joaat("PROVISION_TRINKET_TURTLE_SHELL"), "PROVISION_TRINKET_TURTLE_SHELL");
	}
	func_159(15, joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"), "CLOTHING_LEGENDARY_EAST_OUTFIT");
	func_160(0);
	func_161(0);
	func_145(1);
	func_163("PMPLAYER_HEALTH_OVERVIEW_TOOLTIP");
}

void func_84()
{
	char* sVar0;
	int iVar1;
	vector3 vVar2[24];
	bool bVar5;
	Global_1955569.f_5.f_747 = 2;
	func_152(1, 1);
	func_154(MISC::_CREATE_VAR_STRING(2, __LIB_16__::func_288(2)));
	func_155(0, "PMPLAYER_STATISTICS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	iVar1 = __LIB_0__::func_963(1);
	func_156(2, "PMPLAYER_PROGRESSION", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", iVar1 + 1), 1, 0, 0, 0, 0);
	func_155(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[0]), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_12[0]);
	if (bVar5)
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player");
	}
	else
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0);
	}
	func_158(5);
	func_155(6, "PMPLAYER_PERKS");
	func_159(7, joaat("PROVISION_TRINKET_LION_PAW"), "PROVISION_TRINKET_LION_PAW");
	func_159(8, joaat("PROVISION_TRINKET_COUGAR_FANG"), "PROVISION_TRINKET_COUGAR_FANG");
	func_159(9, joaat("PROVISION_TALISMAN_BUFFALO_HORN"), "PROVISION_TALISMAN_BUFFALO_HORN");
	func_159(10, joaat("PROVISION_TRINKET_OWL_FEATHER"), "PROVISION_TRINKET_OWL_FEATHER");
	if (__LIB_0__::func_313())
	{
		func_159(11, joaat("PROVISION_TRINKET_HAWK_TALON"), "PROVISION_TRINKET_HAWK_TALON");
	}
	func_159(12, joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"), "CLOTHING_LEGENDARY_EAST_OUTFIT");
	func_160(0);
	func_161(0);
	func_146(1);
	func_163("PMPLAYER_STAMINA_OVERVIEW_TOOLTIP");
}

void func_85()
{
	char* sVar0;
	int iVar1;
	vector3 vVar2[24];
	bool bVar5;
	Global_1955569.f_5.f_747 = 3;
	func_152(1, 1);
	func_154(MISC::_CREATE_VAR_STRING(2, __LIB_16__::func_288(3)));
	func_155(0, "PMPLAYER_STATISTICS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	iVar1 = __LIB_0__::func_963(2);
	func_156(2, "PMPLAYER_PROGRESSION", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", iVar1 + 1), 1, 0, 0, 0, 0);
	func_155(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[0]), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_12[0]);
	if (bVar5)
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player");
	}
	else
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0);
	}
	func_158(5);
	func_155(6, "PMPLAYER_PERKS");
	func_159(7, joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"), "PROVISION_TALISMAN_ALLIGATOR_TOOTH");
	func_159(8, joaat("PROVISION_TRINKET_COYOTE_FANG"), "PROVISION_TRINKET_COYOTE_FANG");
	func_159(9, joaat("PROVISION_TRINKET_PANTHER_EYE"), "PROVISION_TRINKET_PANTHER_EYE");
	func_159(10, joaat("PROVISION_TRINKET_OWL_FEATHER"), "PROVISION_TRINKET_OWL_FEATHER");
	func_159(11, joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"), "CLOTHING_LEGENDARY_EAST_OUTFIT");
	func_160(0);
	func_161(0);
	func_147(1);
	func_163("PMPLAYER_DEADEYE_OVERVIEW_TOOLTIP");
}

void func_86()
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	char cVar18[64];
	char cVar26[64];
	char cVar34[64];
	float fVar42;
	var uVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	int iVar48;
	struct<8> Var50;
	char* sVar58;
	func_152(1, 1);
	Global_1955569.f_5.f_747 = 4;
	iVar0 = -1;
	iVar1 = -1;
	if (__LIB_1__::func_105(0))
	{
		iVar0 = 0;
	}
	if (__LIB_1__::func_105(1))
	{
		iVar1 = 1;
	}
	if (__LIB_0__::func_394(Global_35, __LIB_0__::func_398(iVar1), 0) || iVar0 == -1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 == -1)
	{
		return;
	}
	StringCopy(&cVar2, MISC::_CREATE_VAR_STRING(2, "HORSE_BONDING_LEVEL", __LIB_0__::func_819(iVar0)), 64);
	iVar47 = __LIB_12__::func_205(iVar0, 0);
	if (iVar47 <= 50)
	{
		StringCopy(&cVar10, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_CLEAN"), 64);
	}
	else if (iVar47 < 100)
	{
		StringCopy(&cVar10, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_DIRTY"), 64);
		bVar45 = true;
	}
	else
	{
		StringCopy(&cVar10, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_FILTHY"), 64);
		bVar45 = true;
	}
	fVar42 = __LIB_12__::func_225(iVar0);
	if (fVar42 > 0f)
	{
		StringCopy(&cVar18, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_MOOD_AGITATED"), 64);
		bVar46 = true;
	}
	else
	{
		StringCopy(&cVar18, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_MOOD_CALM"), 64);
	}
	if (__LIB_1__::func_439(joaat("SLOTID_HORSE_SADDLE"), &uVar43))
	{
		if (__LIB_14__::func_856(uVar43, &iVar48, 14460646, 0))
		{
			StringCopy(&cVar26, HUD::_GET_LABEL_TEXT_BY_HASH(iVar48), 64);
		}
	}
	if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar44))
	{
		StringCopy(&cVar34, __LIB_1__::func_72(iVar44), 64);
	}
	Var50 = { __LIB_5__::func_978(iVar0) };
	sVar58 = MISC::_CREATE_VAR_STRING(2, "AT_HORSE");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var50))
	{
		sVar58 = __LIB_11__::func_876(&Var50);
	}
	func_154(sVar58);
	func_155(0, "PMPLAYER_STATS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	func_156(2, "PMPLAYER_HORSE_PHYSIQUE_TITLE", "", 1, 0, 0, 0, 0);
	func_156(3, "PMPLAYER_HORSE_BONDING_TITLE", &cVar2, 1, 0, 0, 0, 0);
	func_156(4, "PMPLAYER_HORSE_HEALTH_TITLE", "", 1, 0, 0, 0, 0);
	func_156(5, "PMPLAYER_HORSE_STAMINA_TITLE", "", 1, 0, 0, 0, 0);
	func_155(6, "PMPLAYER_CONDITIONS");
	func_156(7, "PMPLAYER_HORSE_CONDITION_CLEANLINESS", &cVar10, 1, bVar45, bVar45, "rpg_horse_dirty", "pausemenu_player");
	func_156(8, "PMPLAYER_HORSE_CONDITION_MOOD", &cVar18, 1, bVar46, bVar46, "rpg_horse_agitation", "pausemenu_player");
	func_155(9, "PMPLAYER_HORSE_TACK");
	func_156(10, "PMPLAYER_HORSE_TACK_SADDLE_TITLE", &cVar26, 1, 0, 0, 0, 0);
	func_156(11, "PMPLAYER_HORSE_TACK_STIRRUPS_TITLE", &cVar34, 1, 0, 0, 0, 0);
	func_148(1);
}

void func_92()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_186(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			__LIB_1__::func_851();
		}
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	__LIB_1__::func_116();
	if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("NBD1")) >= 2)
	{
		if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("CABR01")) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED")))
	{
		return;
	}
	func_186(1);
}

void func_93()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_189(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_94()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_190(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_190(1);
}

void func_95()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_190(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	__LIB_1__::func_616(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_190(1);
}

void func_96()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_189(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(1))
			{
				__LIB_0__::func_368(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_189(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(2))
			{
				__LIB_0__::func_368(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_15")) > 0 && !__LIB_0__::func_458(4))
		{
			__LIB_0__::func_368(4);
		}
		if (__LIB_0__::func_458(0))
		{
			__LIB_0__::func_459(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0))
			{
				func_198(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_198(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
			}
		}
		if (__LIB_0__::func_458(1))
		{
			__LIB_0__::func_459(1);
		}
		if (__LIB_0__::func_458(2))
		{
			__LIB_0__::func_459(2);
		}
		if (__LIB_0__::func_458(4))
		{
			__LIB_0__::func_459(4);
		}
		if (!__LIB_0__::func_458(0))
		{
			__LIB_0__::func_368(0);
		}
	}
}

bool func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
		case 18:
		case 26:
		case 30:
			return true;
	}
	return false;
}

char* func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PM_PROG_EVENTS";
		case 1:
			return "PM_PROG_EVENT_STORY";
		case 2:
			return "PM_PROG_EVENT_STRANGER";
		case 3:
			return "PM_PROG_EVENT_BOUNTY";
		case 4:
			return "PM_PROG_EVENT_RANDOM";
		case 5:
			return "PM_PROG_EVENT_AMBUSH";
		case 6:
			return "PM_PROG_EVENT_HIDEOUT";
		case 7:
			return "PM_PROG_COLLECTABLES";
		case 8:
			return "PM_PROG_COLLECT_DISCOVERABLES";
		case 9:
			return "PM_PROG_COLLECT_GRAVES";
		case 10:
			return "PM_PROG_COLLECT_CARDS";
		case 11:
			return "PM_PROG_COLLECT_BONES";
		case 12:
			return "PM_PROG_COLLECT_FISH";
		case 13:
			return "PM_PROG_COLLECT_EXOTICS";
		case 14:
			return "PM_PROG_COLLECT_ROCKS";
		case 15:
			return "PM_PROG_COLLECT_TAXIDERMY";
		case 16:
			return "PM_PROG_COLLECT_TREASURE";
		case 17:
			return "PM_PROG_COLLECT_DREAMCATCHER";
		case 31:
			return "PM_PROG_LOC_SHACKS";
		case 32:
			return "PM_PROG_LOC_LEG_ANIMALS";
		case 18:
			return "PM_PROG_COMPENDIUM";
		case 19:
			return "PM_PROG_COMP_ANIMALS";
		case 20:
			return "PM_PROG_COMP_EQUIP";
		case 21:
			return "PM_PROG_COMP_FISH";
		case 22:
			return "PM_PROG_COMP_GANGS";
		case 23:
			return "PM_PROG_COMP_HORSES";
		case 24:
			return "PM_PROG_COMP_PLANTS";
		case 25:
			return "PM_PROG_COMP_WEAPONS";
		case 26:
			return "PM_PROG_CHARACTER";
		case 27:
			return "PM_PROG_CHAR_RPG";
		case 28:
			return "PM_PROG_CHAR_BOND";
		case 29:
			return "PM_PROG_CHAR_CHALLENGES";
		case 30:
			return "PM_PROG_MISCELLANEOUS";
		case 33:
			return "PM_PROG_MISC_TABLE";
		case 34:
			return "PM_PROG_MISC_SPD";
		case 35:
			return "PM_PROG_MISC_BATH";
		case 36:
			return "PM_PROG_MISC_SHOW";
		case 37:
			return "PM_PROG_MISC_THEATRE";
		case 38:
			return "PM_PROG_MISC_CRAFT";
		case 39:
			return "PM_PROG_MISC_ROBBERY";
		default:
			break;
	}
	return "";
}

char* func_133(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case 1:
			iVar0 = __LIB_0__::func_645(joaat("COMPLETED"), joaat("REQUIRED_MISSIONS"));
			iVar1 = 107;
			if (iVar0 >= iVar1)
			{
				*iParam1 = 1;
			}
			else
			{
				*iParam1 = 0;
			}
			return MISC::_CREATE_VAR_STRING(2, "PM_PROG_STORY_VAR_STRING", iVar0);
		case 2:
			iVar0 = __LIB_0__::func_259(__LIB_0__::func_645(joaat("COMPLETED"), joaat("RC_STRANDS")), 10);
			iVar1 = 10;
			break;
		case 3:
			iVar0 = __LIB_0__::func_259(__LIB_0__::func_645(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY")), 5);
			iVar1 = 5;
			break;
		case 4:
			iVar0 = __LIB_0__::func_259(__LIB_0__::func_647(joaat("UNIQUE_BEATS_COMPLETED")), 25);
			iVar1 = 25;
			break;
		case 5:
			iVar0 = __LIB_0__::func_259(__LIB_0__::func_647(joaat("GANG_AMBUSH_ENCOUNTERED")), 1);
			iVar1 = 1;
			break;
		case 6:
			iVar0 = __LIB_0__::func_259(__LIB_0__::func_647(joaat("GANG_HIDEOUT_COMPLETED")), 6);
			iVar1 = 6;
			break;
		case 8:
			iVar0 = __LIB_0__::func_259(__LIB_0__::func_647(joaat("DISCOVERABLE_FOUND")), 1);
			iVar1 = 1;
			break;
		case 9:
			iVar0 = __LIB_11__::func_883();
			iVar1 = 9;
			break;
		case 10:
			if (((((((((((COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ACTRESSES")) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ACTRESSES")) || COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_AMERICANS")) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_AMERICANS"))) || COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ANIMALS")) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ANIMALS"))) || COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ARTISTS")) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ARTISTS"))) || COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_GIRLS")) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_GIRLS"))) || COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_GUNSLINGERS")) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_GUNSLINGERS"))) || COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_HORSES")) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_HORSES"))) || COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_INVENTIONS")) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_INVENTIONS"))) || COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_LANDMARKS")) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_LANDMARKS"))) || COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_PLANTS")) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_PLANTS"))) || COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_SPORTS")) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_SPORTS"))) || COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_VEHICLES")) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_VEHICLES")))
			{
				*iParam1 = 1;
				return MISC::_CREATE_VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
			}
			else
			{
				if (COLLECTION::_0x5461C821D00FE15A(-2076669067, 0) > 0)
				{
					*iParam1 = 0;
				}
				else
				{
					*iParam1 = 2;
				}
				return "";
			}
			break;
		case 11:
			if (__LIB_1__::func_187(39))
			{
				if (__LIB_1__::func_187(40))
				{
					*iParam1 = 1;
					return MISC::_CREATE_VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 12:
			if (__LIB_1__::func_187(41))
			{
				if (__LIB_1__::func_187(42))
				{
					*iParam1 = 1;
					return MISC::_CREATE_VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 13:
			if (__LIB_1__::func_187(43))
			{
				if (__LIB_1__::func_187(48))
				{
					*iParam1 = 1;
					return MISC::_CREATE_VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 14:
			if (__LIB_1__::func_187(49))
			{
				if (__LIB_1__::func_187(50))
				{
					*iParam1 = 1;
					return MISC::_CREATE_VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 15:
			if (__LIB_1__::func_187(51))
			{
				if (__LIB_1__::func_187(52))
				{
					*iParam1 = 1;
					return MISC::_CREATE_VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 16:
			if (__LIB_18__::func_415() > 0)
			{
				if (((((func_222(499813453) || func_222(666607663)) || func_222(-220219788)) || func_222(218622660)) || func_222(390004462)) || func_222(6410548))
				{
					*iParam1 = 1;
					return MISC::_CREATE_VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 17:
			iVar0 = __LIB_7__::func_496();
			iVar1 = 20;
			break;
		case 31:
			iVar0 = __LIB_0__::func_259(__LIB_0__::func_647(joaat("SHACK_FOUND")), 5);
			iVar1 = 5;
			break;
		case 32:
			iVar0 = __LIB_0__::func_259(__LIB_0__::func_645(joaat("KILLS"), joaat("LEGENDARY_ANIMALS")), 5);
			iVar1 = 5;
			break;
		case 19:
			iVar0 = __LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("ANIMALS")), 50);
			iVar1 = 50;
			break;
		case 20:
			iVar0 = __LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("EQUIPMENT")), 10);
			iVar1 = 10;
			break;
		case 21:
			iVar0 = __LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("FISH")), 10);
			iVar1 = 10;
			break;
		case 22:
			iVar0 = COMPENDIUM::_0x729D52F61A5A9E22(joaat("GANGS"));
			iVar1 = COMPENDIUM::_0x729D52461AEA9E22(joaat("GANGS"));
			break;
		case 23:
			iVar0 = __LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("HORSES")), 10);
			iVar1 = 10;
			break;
		case 24:
			iVar0 = __LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("HERBS")), 20);
			iVar1 = 20;
			break;
		case 25:
			iVar0 = __LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("WEAPONS")), 48);
			iVar1 = 48;
			break;
		case 27:
			__LIB_1__::func_702(&iVar0, &iVar1);
			if (iVar0 == iVar1)
			{
				*iParam1 = 1;
			}
			else
			{
				*iParam1 = 0;
			}
			return "";
		case 28:
			iVar0 = __LIB_0__::func_259(1, __LIB_0__::func_838(joaat("HORSES_REACHED_MAX_BOND")));
			iVar1 = 1;
			break;
		case 29:
			iVar0 = __LIB_1__::func_6();
			iVar1 = 9;
			break;
		case 33:
			iVar0 = __LIB_0__::func_259(1, __LIB_0__::func_645(joaat("ATTEMPTS"), joaat("BLACKJACK")));
			iVar0 = (iVar0 + __LIB_0__::func_259(1, __LIB_0__::func_645(joaat("ATTEMPTS"), joaat("DOMINOES_HAND"))));
			iVar0 = (iVar0 + __LIB_0__::func_259(1, __LIB_0__::func_645(joaat("ATTEMPTS"), joaat("FIVE_FINGER"))));
			iVar0 = (iVar0 + __LIB_0__::func_259(1, __LIB_0__::func_645(joaat("ATTEMPTS"), joaat("POKER_HAND"))));
			iVar1 = 4;
			break;
		case 34:
			iVar0 = __LIB_0__::func_259(5, __LIB_0__::func_647(joaat("SPECIAL_PED_INTERACTION")));
			iVar1 = 5;
			break;
		case 35:
			iVar0 = __LIB_0__::func_259(1, __LIB_0__::func_647(joaat("BATHS_TAKEN")));
			iVar1 = 1;
			break;
		case 36:
			iVar0 = __LIB_0__::func_259(1, __LIB_0__::func_647(joaat("SHOWS_SEEN")));
			iVar1 = 1;
			break;
		case 37:
			iVar0 = __LIB_0__::func_259(1, __LIB_0__::func_647(joaat("THEATRE_VISITS")));
			iVar1 = 1;
			break;
		case 38:
			iVar0 = __LIB_0__::func_259(1, __LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("AMMO")));
			iVar0 = (iVar0 + __LIB_0__::func_259(1, __LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("FOOD"))));
			iVar0 = (iVar0 + __LIB_0__::func_259(1, __LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE"))));
			iVar0 = (iVar0 + __LIB_0__::func_259(1, __LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES"))));
			iVar0 = (iVar0 + __LIB_0__::func_259(1, __LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS"))));
			iVar0 = (iVar0 + __LIB_0__::func_259(1, __LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING"))));
			iVar1 = 6;
			break;
		case 39:
			iVar0 = __LIB_0__::func_259(1, __LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("COACH")));
			iVar0 = (iVar0 + __LIB_0__::func_259(1, __LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("HOME"))));
			iVar0 = (iVar0 + __LIB_0__::func_259(1, __LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("SHOP"))));
			iVar0 = (iVar0 + __LIB_0__::func_259(1, __LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("TRAIN"))));
			iVar1 = 4;
			break;
	}
	if (iVar0 > 0)
	{
		if (iVar0 == iVar1)
		{
			*iParam1 = 1;
		}
		else
		{
			*iParam1 = 0;
		}
	}
	else
	{
		*iParam1 = 2;
	}
	if (iVar1 == 1 && iVar0 == 0)
	{
		return "";
	}
	return MISC::_CREATE_VAR_STRING(2, "PM_PROG_VAR_STRING", iVar0, iVar1);
}

bool func_134(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			return __LIB_1__::func_185(76);
		case 3:
		case 5:
		case 11:
		case 12:
		case 13:
		case 14:
			return iParam1 == 0;
		case 15:
			return (__LIB_1__::func_614(joaat("DOCUMENT_TAXIDERMY_ORDER_1"), 0, 0) > 0 || __LIB_11__::func_877() >= 1);
	}
	return true;
}

char* func_135(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return "PM_PROG_EVENT_UNKNOWN";
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			return "PM_PROG_COLLECT_UNKNOWN";
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return "PM_PROG_COMP_UNKNOWN";
		case 27:
		case 28:
		case 29:
			return "PM_PROG_CHAR_UNKNOWN";
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			return "PM_PROG_MISC_UNKNOWN";
	}
	return "";
}

void func_143(var uParam0, int iParam1, int iParam2)
{
	STATS::_0xBD861AE8A5181ED7(&uParam0, iParam2);
}

void func_144(int iParam0)
{
	float fVar0;
	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(__LIB_11__::func_878(0, 0), 0);
			func_232(__LIB_16__::func_289(0));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_GENERAL_OVERVIEW_HAIR"), MISC::_CREATE_VAR_STRING(2, func_234()), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_GENERAL_OVERVIEW_FACIAL_HAIR"), MISC::_CREATE_VAR_STRING(2, func_236()), 0, 0, 0, 0, 0, 0, 0, 0);
			func_163("PMPLAYER_OVERVIEW_TOOLTIP");
			func_224(1);
			func_225(1);
			func_226(1);
			break;
		case 2:
			if (__LIB_0__::func_181())
			{
				func_230("PLAYER_JOHN_HONOR", 0);
			}
			else
			{
				func_230("PLAYER_ARTHUR_HONOR", 0);
			}
			func_232("PMPLAYER_GENERAL_HONOR_DESC");
			func_233("PMPLAYER_HONOR");
			func_152(0, 1);
			fVar0 = ((1f - __LIB_15__::func_72()) * 100f);
			if (fVar0 == 0f)
			{
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_GENERAL_HONOR_STORE_PRICES"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_GENERAL_HONOR_STORE_PRICES"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(fVar0)), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			func_163("PMPLAYER_HONOR_TOOLTIP");
			break;
		case 4:
			func_230(func_238(), 0);
			func_232("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_152(0, 1);
			func_239(0);
			func_163("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_230(func_240(), func_241());
			func_232("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_233("PMPLAYER_CONDITION_TEMPERATURE");
			func_152(0, 1);
			func_242();
			func_163("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 6:
			func_230(func_243(), func_241());
			func_232("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_233("PMPLAYER_CONDITION_TOXICITY");
			func_152(0, 1);
			func_245();
			func_163("PMPLAYER_CONDITION_TOXICITY_TOOLTIP");
			break;
		case 7:
			func_230(func_246(), 0);
			func_232("PMPLAYER_CONDITION_WELLBEING_DESC");
			func_233("PMPLAYER_CONDITION_WELLBEING");
			func_152(0, 1);
			func_247(1, 1, 1);
			if (__LIB_0__::func_181())
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_JOHN_TOOLTIP");
			}
			else
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_TOOLTIP");
			}
			break;
		case 9:
			func_248(joaat("PROVISION_TALISMAN_RAVEN_CLAW"), "PROVISION_TALISMAN_RAVEN_CLAW", "PROVISION_TALISMAN_RAVEN_CLAW_DESC", "TALISMAN_RAVEN_CLAW", 0);
			func_152(0, 1);
			break;
		case 10:
			func_248(joaat("PROVISION_TRINKET_BEAVER_TOOTH"), "PROVISION_TRINKET_BEAVER_TOOTH", "PROVISION_TRINKET_BEAVER_TOOTH_DESC", "TRINKET_BEAVER_TOOTH", 0);
			func_152(0, 1);
			break;
		case 11:
			func_248(joaat("PROVISION_TRINKET_FOX_CLAW"), "PROVISION_TRINKET_FOX_CLAW", "PROVISION_TRINKET_FOX_CLAW_DESC", "TRINKET_FOX_CLAW", 0);
			func_152(0, 1);
			break;
		case 12:
			func_248(joaat("PROVISION_TRINKET_BUCK_ANTLER"), "PROVISION_TRINKET_BUCK_ANTLER", "PROVISION_TRINKET_BUCK_ANTLER_DESC", "TRINKET_BUCK_ANTLER", 0);
			func_152(0, 1);
			break;
		case 13:
			func_248(joaat("PROVISION_TRINKET_RAM_HORN"), "PROVISION_TRINKET_RAM_HORN", "PROVISION_TRINKET_RAM_HORN_DESC", "TRINKET_RAM_HORN", 0);
			func_152(0, 1);
			break;
		case 14:
			func_248(joaat("PROVISION_TRINKET_WOLF_HEART"), "PROVISION_TRINKET_WOLF_HEART", "PROVISION_TRINKET_WOLF_HEART_DESC", "TRINKET_WOLF_HEART", 0);
			func_152(0, 1);
			break;
		case 15:
			func_248(joaat("PROVISION_TRINKET_PRONGHORN_ANTLER"), "PROVISION_TRINKET_PRONGHORN_ANTLER", "PROVISION_TRINKET_PRONGHORN_ANTLER_DESC", "TRINKET_PRONGHORN_ANTLER", 0);
			func_152(0, 1);
			break;
		case 16:
			func_248(joaat("PROVISION_TALISMAN_EAGLE_TALON"), "PROVISION_TALISMAN_EAGLE_TALON", "PROVISION_TALISMAN_EAGLE_TALON_DESC", "TALISMAN_EAGLE_TALON", 0);
			func_152(0, 1);
			break;
		case 17:
			func_248(joaat("PROVISION_TRINKET_CAT_EYE"), "PROVISION_TRINKET_CAT_EYE", "PROVISION_TRINKET_CAT_EYE_DESC", "PROVISION_TRINKET_CAT_EYE", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 18:
			func_248(joaat("PROVISION_TRINKET_SHARK_TOOTH"), "PROVISION_TRINKET_SHARK_TOOTH", "PROVISION_TRINKET_SHARK_TOOTH_DESC", "PROVISION_TRINKET_SHARK_TOOTH", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 19:
			func_248(joaat("PROVISION_TRINKET_CROW_BEAK"), "PROVISION_TRINKET_CROW_BEAK", "PROVISION_TRINKET_CROW_BEAK_DESC", "PROVISION_TRINKET_CROW_BEAK", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 20:
			func_248(joaat("PROVISION_DISCO_ARROWHEAD_02"), "PROVISION_DISCO_ARROWHEAD_02", "PROVISION_DISCO_ARROWHEAD_02_DESC", "PERK_ARROWHEAD", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 21:
			func_248(joaat("DOCUMENT_FIELD_MANUAL"), "DOCUMENT_FIELD_MANUAL", "DOCUMENT_FIELD_MANUAL_DESC", "PERK_MANUAL", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 22:
			func_152(0, 1);
			func_249(-1);
			break;
	}
}

void func_145(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;
	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(__LIB_11__::func_878(1, 0), 0);
			func_232(__LIB_16__::func_289(1));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[1 /*36*/].f_12[0]);
			func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[1 /*36*/].f_12[1]);
			func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[1 /*36*/].f_12[2]);
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1955569.f_5.f_2[1 /*36*/].f_16[2]);
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1955569.f_5.f_2[1 /*36*/].f_32[2]);
			func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Health");
			if (bVar1)
			{
				func_250(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_250(2, "RPG_ARROW_UP", 0);
			}
			func_224(1);
			func_163("");
			break;
		case 2:
			func_230(__LIB_11__::func_878(1, 0), 0);
			func_232("PMPLAYER_HEALTH_PROGRESSION_DESC");
			func_233("PMPLAYER_PROGRESSION");
			func_152(0, 1);
			func_251(0, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_HEALTH_PROGRESSION_STAT_MAX", "toast_rpg_level_health");
			func_163("PMPLAYER_HEALTH_PROGRESSION_TOOLTIP");
			break;
		case 4:
			func_230(func_238(), 0);
			func_232("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_152(0, 1);
			func_239(1);
			func_163("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_230(func_240(), func_241());
			func_232("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_233("PMPLAYER_CONDITION_TEMPERATURE");
			func_152(0, 1);
			func_242();
			func_163("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 6:
			func_230(func_243(), func_241());
			func_232("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_233("PMPLAYER_CONDITION_TOXICITY");
			func_152(0, 1);
			func_245();
			func_163("PMPLAYER_CONDITION_TOXICITY_TOOLTIP");
			break;
		case 7:
			func_230(func_246(), 0);
			func_232("PMPLAYER_CONDITION_WELLBEING_DESC");
			func_233("PMPLAYER_CONDITION_WELLBEING");
			func_152(0, 1);
			func_247(1, 0, 0);
			if (__LIB_0__::func_181())
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_JOHN_TOOLTIP");
			}
			else
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_TOOLTIP");
			}
			break;
		case 9:
			func_248(joaat("PROVISION_TRINKET_BISON_HORN"), "PROVISION_TRINKET_BISON_HORN", "PROVISION_TRINKET_BISON_HORN_DESC", "TRINKET_BISON_HORN", 0);
			func_152(0, 1);
			break;
		case 10:
			func_248(joaat("PROVISION_TRINKET_MOOSE_ANTLER"), "PROVISION_TRINKET_MOOSE_ANTLER", "PROVISION_TRINKET_MOOSE_ANTLER_DESC", "TRINKET_MOOSE_ANTLER", 0);
			func_152(0, 1);
			break;
		case 11:
			func_248(joaat("PROVISION_TALISMAN_BEAR_CLAW"), "PROVISION_TALISMAN_BEAR_CLAW", "PROVISION_TALISMAN_BEAR_CLAW_DESC", "TALISMAN_BEAR_CLAW", 0);
			func_152(0, 1);
			break;
		case 12:
			func_248(joaat("PROVISION_TRINKET_OWL_FEATHER"), "PROVISION_TRINKET_OWL_FEATHER", "PROVISION_TRINKET_OWL_FEATHER_DESC", "TRINKET_OWL_FEATHER", 0);
			func_152(0, 1);
			break;
		case 13:
			func_248(joaat("PROVISION_TRINKET_IGUANA_SCALE"), "PROVISION_TRINKET_IGUANA_SCALE", "PROVISION_TRINKET_IGUANA_SCALE_DESC", "TRINKET_IGUANA_SCALE", 0);
			func_152(0, 1);
			break;
		case 14:
			func_248(joaat("PROVISION_TRINKET_TURTLE_SHELL"), "PROVISION_TRINKET_TURTLE_SHELL", "PROVISION_TRINKET_TURTLE_SHELL_DESC", "PROVISION_TRINKET_TURTLE_SHELL", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 15:
			func_152(0, 1);
			func_249(0);
			break;
	}
}

void func_146(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;
	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(__LIB_11__::func_878(2, 0), 0);
			func_232(__LIB_16__::func_289(2));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[2 /*36*/].f_12[0]);
			func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[2 /*36*/].f_12[1]);
			func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[2 /*36*/].f_12[2]);
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1955569.f_5.f_2[2 /*36*/].f_16[2]);
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1955569.f_5.f_2[2 /*36*/].f_32[2]);
			func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Stamina");
			if (bVar1)
			{
				func_250(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_250(2, "RPG_ARROW_UP", 0);
			}
			func_225(1);
			func_163("");
			break;
		case 2:
			func_230(__LIB_11__::func_878(2, 0), 0);
			func_232("PMPLAYER_STAMINA_PROGRESSION_DESC");
			func_233("PMPLAYER_PROGRESSION");
			func_152(0, 1);
			func_251(1, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_STAMINA_PROGRESSION_STAT_MAX", "toast_rpg_level_stamina");
			func_163("PMPLAYER_STAMINA_PROGRESSION_TOOLTIP");
			break;
		case 4:
			func_230(func_238(), 0);
			func_232("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_152(0, 1);
			func_239(2);
			func_163("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_230(func_246(), 0);
			func_232("PMPLAYER_CONDITION_WELLBEING_DESC");
			func_233("PMPLAYER_CONDITION_WELLBEING");
			func_152(0, 1);
			func_247(0, 1, 0);
			if (__LIB_0__::func_181())
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_JOHN_TOOLTIP");
			}
			else
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_TOOLTIP");
			}
			break;
		case 7:
			func_248(joaat("PROVISION_TRINKET_LION_PAW"), "PROVISION_TRINKET_LION_PAW", "PROVISION_TRINKET_LION_PAW_DESC", "TRINKET_LION_PAW", 0);
			func_152(0, 1);
			break;
		case 8:
			func_248(joaat("PROVISION_TRINKET_COUGAR_FANG"), "PROVISION_TRINKET_COUGAR_FANG", "PROVISION_TRINKET_COUGAR_FANG_DESC", "TRINKET_COUGAR_FANG", 0);
			func_152(0, 1);
			break;
		case 9:
			func_248(joaat("PROVISION_TALISMAN_BUFFALO_HORN"), "PROVISION_TALISMAN_BUFFALO_HORN", "PROVISION_TALISMAN_BUFFALO_HORN_DESC", "TALISMAN_BUFFALO_HORN", 0);
			func_152(0, 1);
			break;
		case 10:
			func_248(joaat("PROVISION_TRINKET_OWL_FEATHER"), "PROVISION_TRINKET_OWL_FEATHER", "PROVISION_TRINKET_OWL_FEATHER_DESC", "TRINKET_OWL_FEATHER", 0);
			func_152(0, 1);
			break;
		case 11:
			func_248(joaat("PROVISION_TRINKET_HAWK_TALON"), "PROVISION_TRINKET_HAWK_TALON", "PROVISION_TRINKET_HAWK_TALON_DESC", "PROVISION_TRINKET_HAWK_TALON", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 12:
			func_152(0, 1);
			func_249(1);
			break;
	}
}

void func_147(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;
	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(__LIB_11__::func_878(3, 0), 0);
			func_232(__LIB_16__::func_289(3));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[3 /*36*/].f_12[0]);
			func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[3 /*36*/].f_12[1]);
			func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1955569.f_5.f_2[3 /*36*/].f_12[2]);
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1955569.f_5.f_2[3 /*36*/].f_16[2]);
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1955569.f_5.f_2[3 /*36*/].f_32[2]);
			func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			if (bVar1)
			{
				func_250(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_250(2, "RPG_ARROW_UP", 0);
			}
			func_226(1);
			func_163("");
			break;
		case 2:
			func_230(__LIB_11__::func_878(3, 0), 0);
			func_232("PMPLAYER_DEAD_EYE_PROGRESSION_DESC");
			func_233("PMPLAYER_PROGRESSION");
			func_152(0, 1);
			func_251(2, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_DEAD_EYE_PROGRESSION_STAT_MAX", "toast_rpg_level_deadeye");
			func_163("PMPLAYER_DEADEYE_PROGRESSION_TOOLTIP");
			break;
		case 4:
			func_230(func_238(), 0);
			func_232("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_152(0, 1);
			func_239(3);
			func_163("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_230(func_246(), 0);
			func_232("PMPLAYER_CONDITION_WELLBEING_DESC");
			func_233("PMPLAYER_CONDITION_WELLBEING");
			func_152(0, 1);
			func_247(0, 0, 1);
			if (__LIB_0__::func_181())
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_JOHN_TOOLTIP");
			}
			else
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_TOOLTIP");
			}
			break;
		case 7:
			func_248(joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"), "PROVISION_TALISMAN_ALLIGATOR_TOOTH", "PROVISION_TALISMAN_ALLIGATOR_TOOTH_DESC", "TALISMAN_ALLIGATOR_TOOTH", 0);
			func_152(0, 1);
			break;
		case 8:
			func_248(joaat("PROVISION_TRINKET_COYOTE_FANG"), "PROVISION_TRINKET_COYOTE_FANG", "PROVISION_TRINKET_COYOTE_FANG_DESC", "TRINKET_COYOTE_FANG", 0);
			func_152(0, 1);
			break;
		case 9:
			func_248(joaat("PROVISION_TRINKET_PANTHER_EYE"), "PROVISION_TRINKET_PANTHER_EYE", "PROVISION_TRINKET_PANTHER_EYE_DESC", "TRINKET_PANTHER_EYE", 0);
			func_152(0, 1);
			break;
		case 10:
			func_248(joaat("PROVISION_TRINKET_OWL_FEATHER"), "PROVISION_TRINKET_OWL_FEATHER", "PROVISION_TRINKET_OWL_FEATHER_DESC", "TRINKET_OWL_FEATHER", 0);
			func_152(0, 1);
			break;
		case 11:
			func_152(0, 1);
			func_249(2);
			break;
	}
}

void func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	int iVar16;
	int iVar17;
	char cVar18[32];
	int iVar22;
	int iVar23;
	int iVar24;
	iVar0 = -1;
	iVar1 = -1;
	if (__LIB_1__::func_105(0))
	{
		iVar0 = 0;
	}
	if (__LIB_1__::func_105(1))
	{
		iVar1 = 1;
	}
	if (__LIB_0__::func_394(Global_35, __LIB_0__::func_398(iVar1), 0) || iVar0 == -1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar2 = __LIB_0__::func_821(iVar0);
	iVar3 = __LIB_0__::func_398(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		iVar4 = __LIB_6__::func_95(iVar3);
		iVar6 = __LIB_6__::func_96(iVar3);
	}
	else
	{
		iVar4 = func_255(iVar2);
		iVar6 = func_256(iVar2);
	}
	iVar5 = __LIB_11__::func_884(iVar0, 0);
	iVar7 = __LIB_11__::func_884(iVar0, 1);
	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(__LIB_11__::func_878(4, 0), 0);
			func_232(__LIB_16__::func_289(4));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			if (iVar0 == 0 && __LIB_0__::func_479() == iVar0)
			{
				__LIB_15__::func_60(&iVar8, &iVar9);
				iVar8 = BUILTIN::FLOOR((IntToFloat(iVar8) * 0.01f));
				iVar9 = BUILTIN::FLOOR((IntToFloat(iVar9) * 0.01f));
			}
			if (__LIB_11__::func_879())
			{
				iVar8++;
			}
			fVar10 = (IntToFloat(func_261(iVar2) + 1) * 10f);
			fVar11 = (fVar10 + (BUILTIN::TO_FLOAT(iVar8) * 10f));
			fVar12 = ((fVar10 + (3f * 10f)) * 0.01f);
			fVar13 = (IntToFloat(func_262(iVar2) + 1) * 10f);
			fVar14 = (fVar13 + (BUILTIN::TO_FLOAT(iVar9) * 10f));
			fVar15 = ((fVar13 + (2f * 10f)) * 0.01f);
			func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), "", 0, 0, 0, 1, fVar10, fVar11, fVar12, 0);
			func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), "", 0, 0, 0, 1, fVar13, fVar14, fVar15, 0);
			func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_HANDLING"), MISC::_CREATE_VAR_STRING(2, __LIB_12__::func_524(func_263(iVar2))), 0, 0, 0, 0, 0, 0, 0, 0);
			func_160(1);
			func_161(1);
			func_227(1);
			func_265(10, (IntToFloat(iVar4 + 1) / 10f), BUILTIN::ROUND(((IntToFloat(iVar5) / 100f) * 15f)));
			func_266(10, (IntToFloat(iVar6 + 1) / 10f), BUILTIN::ROUND(((IntToFloat(iVar7) / 100f) * 15f)));
			func_163("PMPLAYER_HORSE_OVERVIEW_TIP");
			break;
		case 2:
			func_230(__LIB_11__::func_878(4, 0), 0);
			func_232("PMPLAYER_HORSE_PHYSIQUE_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_TITLE");
			func_152(0, 1);
			iVar16 = __LIB_9__::func_812(iVar2);
			if (!ENTITY::IS_ENTITY_DEAD(iVar3))
			{
				iVar17 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar3, 13);
			}
			else
			{
				iVar17 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iVar2, 13);
			}
			if (iVar17 < 10)
			{
				StringCopy(&cVar18, "HORSE_WEIGHT_MALNOURISHED", 32);
			}
			else if (iVar17 < 30)
			{
				StringCopy(&cVar18, "HORSE_WEIGHT_THIN", 32);
			}
			else if (iVar17 < 70)
			{
				StringCopy(&cVar18, "HORSE_WEIGHT_FIT", 32);
			}
			else if (iVar17 < 90)
			{
				StringCopy(&cVar18, "HORSE_WEIGHT_OVERWEIGHT", 32);
			}
			else
			{
				StringCopy(&cVar18, "HORSE_WEIGHT_OBESE", 32);
			}
			func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_TYPE"), MISC::_CREATE_VAR_STRING(2, __LIB_15__::func_61(__LIB_12__::func_523(iVar2), iVar16)), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_BREED"), MISC::_CREATE_VAR_STRING(2, __LIB_15__::func_46(iVar16)), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_GENDER"), MISC::_CREATE_VAR_STRING(2, func_272(__LIB_12__::func_200(iVar0))), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT"), MISC::_CREATE_VAR_STRING(2, &cVar18), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_COAT"), MISC::_CREATE_VAR_STRING(2, __LIB_12__::func_525(iVar16)), 0, 0, 0, 0, 0, 0, 0, 0);
			func_163("PMPLAYER_HORSE_PHYSIQUE_TIP");
			break;
		case 3:
			if (__LIB_0__::func_181())
			{
				func_230("JOHN_HORSE_BONDING", 0);
			}
			else
			{
				func_230("HORSE_BONDING", 0);
			}
			func_232("PMPLAYER_HORSE_BONDING_DESC");
			func_233("PMPLAYER_HORSE_BONDING_TITLE");
			func_152(0, 1);
			iVar22 = __LIB_0__::func_819(iVar0);
			iVar23 = BUILTIN::FLOOR(__LIB_0__::func_833(iVar0));
			iVar24 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar2, 7, iVar22 + 1);
			func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar22, 4), 0, 0, 0, 0, 0, 0, 0, 0);
			if (iVar22 < 4)
			{
				func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_PROGRESSION_STAT_NEXT"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar23, iVar24), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			func_163("PMPLAYER_HORSE_BONDING_TIP");
			func_227(1);
			break;
		case 4:
			func_230("HORSE_HEALTH", 0);
			func_232("PMPLAYER_HORSE_HEALTH_DESC");
			func_233("PMPLAYER_HORSE_HEALTH_TITLE");
			func_152(0, 1);
			func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar4 + 1, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", iVar5), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
			func_275(2, iVar0, 0);
			func_163("PMPLAYER_HORSE_HEALTH_TIP");
			break;
		case 5:
			func_230("HORSE_STAMINA", 0);
			func_232("PMPLAYER_HORSE_STAMINA_DESC");
			func_233("PMPLAYER_HORSE_STAMINA_TITLE");
			func_152(0, 1);
			func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar6 + 1, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", iVar7), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
			func_275(2, iVar0, 1);
			func_163("PMPLAYER_HORSE_STAMINA_TIP");
			break;
		case 7:
			if (__LIB_0__::func_181())
			{
				func_230("JOHN_HORSE_CLEANLINESS", 0);
			}
			else
			{
				func_230("HORSE_CLEANLINESS", 0);
			}
			func_232("PMPLAYER_HORSE_CONDITION_CLEANLINESS_DESC");
			func_233("PMPLAYER_HORSE_CONDITION_CLEANLINESS");
			func_152(0, 1);
			if (__LIB_12__::func_205(iVar0, 0) > 50)
			{
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF((0.25f * 100f)))), 1, 0, 1, 0, 0, 0, 0, "RPG_Horse_Health");
				func_250(0, "RPG_ARROW_DOWN", 0);
			}
			func_163("PMPLAYER_HORSE_CONDITION_CLEANLINESS_TIP");
			break;
		case 10:
			func_230(__LIB_11__::func_878(4, 0), 0);
			func_232("PMPLAYER_HORSE_TACK_SADDLE_DESC");
			func_233("PMPLAYER_HORSE_TACK_SADDLE_TITLE");
			func_152(0, 1);
			func_276();
			func_163("PMPLAYER_HORSE_TACK_SADDLE_TIP");
			break;
		case 8:
			if (__LIB_0__::func_181())
			{
				func_230("JOHN_HORSE_TEMPERAMENT", 0);
			}
			else
			{
				func_230("HORSE_TEMPERAMENT", 0);
			}
			func_232("PMPLAYER_HORSE_CONDITION_MOOD_DESC");
			func_233("PMPLAYER_HORSE_CONDITION_MOOD");
			func_152(0, 1);
			func_163("PMPLAYER_HORSE_CONDITION_MOOD_TIP");
			break;
		case 11:
			func_230("HORSE_TACK_STIRRUPS", 0);
			func_232("PMPLAYER_HORSE_TACK_STIRRUPS_DESC");
			func_233("PMPLAYER_HORSE_TACK_STIRRUPS_TITLE");
			func_152(0, 1);
			func_277();
			func_163("PMPLAYER_HORSE_TACK_STIRRUPS_TIP");
			break;
	}
}

bool func_149(int iParam0)
{
	return false;
	switch (iParam0)
	{
		case 6:
		case 29:
		case 33:
		case 38:
		case 39:
			return true;
	}
	return false;
}

char* func_150(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "STORY_MISSIONS";
		case 2:
			return "RANDOM_CHARACTER_MISSIONS";
		case 3:
			return "BOUNTY_HUNTER_MISSIONS";
		case 4:
			return "RANDOM_EVENTS";
		case 5:
			return "RIVAL_GANGS_AMBUSH";
		case 6:
			return "RIVAL_GANGS_HIDEOUTS";
		case 8:
			return "COLLECTABLES_DISCOVERABLES";
		case 9:
			return "COLLECTABLES_GRAVES";
		case 10:
			return "COLLECTABLES_CIG_CARDS";
		case 11:
			return "COLLECTABLES_DINO";
		case 12:
			return "COLLECTABLES_FISH";
		case 13:
			return "COLLECTABLES_EXOTICS";
		case 14:
			return "COLLECTABLES_ROCKS";
		case 15:
			return "COLLECTABLES_TAXIDERMY";
		case 16:
			return "COLLECTABLES_TREASURE";
		case 17:
			return "COLLECTABLES_DREAMCATCHERS";
		case 31:
			return "LOCATION_SHACKS";
		case 32:
			return "LOCATION_LEGENDARY_ANIMALS";
		case 19:
			return "COMPENDIUM_DISCOVER_ANIMALS";
		case 20:
			return "COMPENDIUM_DISCOVER_EQUIPMENT";
		case 21:
			return "COMPENDIUM_DISCOVER_FISH";
		case 22:
			return "COMPENDIUM_DISCOVER_GANGS";
		case 23:
			return "COMPENDIUM_DISCOVER_HORSES";
		case 24:
			return "COMPENDIUM_DISCOVER_PLANTS";
		case 25:
			return "COMPENDIUM_DISCOVER_WEAPONS";
		case 27:
			return "CHARACTER_MAX_RPG_TANKS";
		case 28:
			return "CHARACTER_HORSE_BOND";
		case 29:
			return "CHARACTER_CHALLENGES";
		case 33:
			return "MISC_TABLE_GAMES";
		case 34:
			return "MISC_SPECIAL_PEDS";
		case 35:
			return "MISC_BATH";
		case 36:
			return "MISC_SHOW";
		case 37:
			return "MISC_THEATRE";
		case 38:
			return "MISC_CRAFT_EACH_RECIPE";
		case 39:
			return "MISC_ROBBERIES";
		default:
			break;
	}
	return "STORY_MISSIONS";
}

void func_151(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 33:
			func_278(uParam0, 0, "MAP_CARD_MINIGAMES_BLACKJACK", 1);
			func_278(uParam0, 1, "MAP_CARD_MINIGAMES_DOMINOES_DRAW", 1);
			func_278(uParam0, 2, "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_CLASSIC", 1);
			func_278(uParam0, 3, "MAP_CARD_MINIGAMES_POKER", 1);
			break;
	}
}

void func_152(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1955569.f_5.f_147.f_22);
	}
	if (bParam1)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1955569.f_5.f_147.f_21);
	}
}

void func_154(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147, sParam0);
}

void func_155(int iParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_16, sParam1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569.f_5.f_147.f_22, iParam0, "player_group_item", Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_15);
}

void func_156(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, char* sParam7)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_16, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_17, sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_18, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_19, bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_22, bParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_20, sParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_21, sParam7);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569.f_5.f_147.f_22, iParam0, "player_list_item", Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_15);
}

void func_158(int iParam0)
{
	if (__LIB_0__::func_181())
	{
		func_156(iParam0, "PMPLAYER_CONDITION_WELLBEING", "", 0, 0, 0, 0, 0);
		return;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		func_156(iParam0, "PMPLAYER_CONDITION_WELLBEING", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_WELLBEING_SICK2"), 1, 1, 1, "rpg_sick", "pausemenu_player");
	}
	else if (Global_40.f_11095.f_67 >= 7)
	{
		func_156(iParam0, "PMPLAYER_CONDITION_WELLBEING", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_WELLBEING_SICK1"), 1, 1, 1, "rpg_sick", "pausemenu_player");
	}
	else
	{
		func_156(iParam0, "PMPLAYER_CONDITION_WELLBEING", "", 0, 0, 0, 0, 0);
	}
}

void func_159(int iParam0, int iParam1, char* sParam2)
{
	if (__LIB_1__::func_707(iParam1, 1, 0))
	{
		func_156(iParam0, sParam2, "", 1, 0, 0, 0, 0);
	}
	else
	{
		func_156(iParam0, "PMPLAYER_PERK_UNDISCOVERED_TALISMAN", "", 0, 0, 0, 0, 0);
	}
}

void func_160(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_9, bParam0);
}

void func_161(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_10, bParam0);
}

void func_163(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_5, sParam0);
}

void func_186(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_189(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_293(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_294(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_198(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_299(Var0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		__LIB_1__::func_178(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (__LIB_0__::func_809(iVar6) == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				__LIB_0__::func_810(iVar6, iVar7);
				__LIB_0__::func_811(iVar6, iVar8);
				__LIB_0__::func_812(iVar6, iVar9);
				__LIB_0__::func_813(iVar6, 0);
				if (__LIB_1__::func_127(iVar6))
				{
					__LIB_1__::func_608(iVar6);
				}
				iVar10 = __LIB_0__::func_553(iVar8);
				__LIB_1__::func_820(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

int func_189(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	__LIB_0__::func_912(iParam0, bParam2);
	iVar2 = 0;
	if (__LIB_1__::func_614(iParam0, 0, 0) == 0)
	{
		if (__LIB_1__::func_153(iParam0))
		{
			iVar5 = __LIB_0__::func_913(iParam0);
			iVar6 = __LIB_0__::func_352(iVar5);
			iVar7 = __LIB_1__::func_756(iVar6) + 1;
			__LIB_1__::func_757(iVar5);
			if (__LIB_1__::func_154(38))
			{
				__LIB_1__::func_240(483, 0);
			}
			else
			{
				__LIB_1__::func_240(482, 0);
			}
			if (iVar7 == __LIB_0__::func_353(iVar6))
			{
				func_189(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(1);
				}
			}
			if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_450(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_1__::func_450(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if ((!__LIB_0__::func_192(iParam0, 866047851) && !__LIB_0__::func_192(iParam0, -1979000645)) && !__LIB_0__::func_192(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (__LIB_0__::func_774(iParam0, 8388608) && !__LIB_0__::func_293(28))
	{
		func_333(28);
	}
	if (!bVar3)
	{
		if (__LIB_0__::func_192(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (__LIB_0__::func_357(iParam0) == -1447088266)
			{
				iVar1 = __LIB_0__::func_775(func_335(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iVar1);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iParam0);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
		{
			if (!__LIB_1__::func_823(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!__LIB_1__::func_842(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			__LIB_1__::func_833(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, 2000026003))
		{
			__LIB_1__::func_632(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -103750053))
		{
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (__LIB_0__::func_192(iParam0, -121341956) && !__LIB_0__::func_192(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
				{
					__LIB_1__::func_240(498, 0);
				}
			}
			if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
			{
				__LIB_1__::func_796(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -136654233))
		{
			if (__LIB_0__::func_192(iParam0, -1021472396))
			{
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1466706512) && __LIB_0__::func_192(iParam0, 1147021565))
		{
			__LIB_1__::func_240(484, 0);
		}
		else if (__LIB_0__::func_192(iParam0, 1147021565) && __LIB_0__::func_192(iParam0, -524514947))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 554195525))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 589988438))
		{
			if (__LIB_1__::func_709())
			{
				__LIB_1__::func_797(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_843(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_1__::func_844(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_1__::func_845(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_846(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (__LIB_0__::func_192(iParam0, 1841149704))
		{
			__LIB_0__::func_359();
		}
		else if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_1__::func_847(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_1__::func_858(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			__LIB_1__::func_796(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return 0;
			}
			__LIB_1__::func_824(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_189(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_189(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_189(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_189(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_189(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_189(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_816(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1399091007))
		{
			__LIB_0__::func_917(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_189(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				func_333(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				__LIB_1__::func_240(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				__LIB_0__::func_361();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				__LIB_0__::func_362();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				__LIB_0__::func_363();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				__LIB_1__::func_244();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				__LIB_1__::func_424(242, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				__LIB_1__::func_424(240, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				__LIB_1__::func_424(241, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				__LIB_1__::func_240(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				__LIB_1__::func_240(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				__LIB_1__::func_240(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_189(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_189(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (__LIB_0__::func_293(1))
				{
					__LIB_1__::func_240(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				__LIB_1__::func_240(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (__LIB_0__::func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				__LIB_1__::func_240(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_1__::func_825(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return 1;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			func_378(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_379(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (__LIB_0__::func_708(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_189(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			__LIB_1__::func_451(iVar2, 0);
		}
	}
	Var35 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	__LIB_1__::func_602(iParam0);
	if (fParam6 > 0f)
	{
		if (__LIB_0__::func_192(iParam0, -839724752))
		{
			__LIB_1__::func_157(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_1__::func_158(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_190(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_189(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_198(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_198(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_198(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_198(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_198(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_198(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_198(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_198(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_198(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_198(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_198(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		__LIB_1__::func_178(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (__LIB_0__::func_809(iVar0) == joaat("BREED_ARDENNES_IRONGREYROAN"))
			{
				__LIB_0__::func_810(iVar0, iVar1);
				__LIB_0__::func_811(iVar0, iVar2);
				__LIB_0__::func_812(iVar0, iVar3);
				__LIB_0__::func_813(iVar0, 0);
				if (__LIB_1__::func_127(iVar0))
				{
					__LIB_1__::func_608(iVar0);
				}
				iVar4 = __LIB_0__::func_553(iVar2);
				__LIB_1__::func_820(iVar0, iVar4);
			}
			iVar0++;
		}
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

int func_198(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
	iVar3 = __LIB_0__::func_937(iParam0, 1);
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
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!__LIB_1__::func_707(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) < 0)
		{
			func_198(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	else if (!__LIB_1__::func_698(iParam0, iParam1, iParam3, bParam2, bParam4))
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
		__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

bool func_222(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 499813453:
			iVar0 = joaat("TREASURE_HUNT_LOOT_04");
			break;
		case 666607663:
			iVar0 = joaat("TREASURE_HUNT_LOOT_08");
			break;
		case -220219788:
			iVar0 = joaat("TREASURE_HUNT_LOOT_12");
			break;
		case 218622660:
			iVar0 = joaat("TREASURE_HUNT_LOOT_15");
			break;
		case 390004462:
			iVar0 = joaat("TREASURE_HUNT_LOOT_19");
			break;
		case 6410548:
			iVar0 = joaat("TREASURE_HUNT_LOOT_24");
			break;
		default:
			return false;
	}
	return COLLECTION::_0xF83D3DDA4D3C8169(iVar0) > 0;
}

void func_224(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_6, bParam0);
}

void func_225(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_7, bParam0);
}

void func_226(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_8, bParam0);
}

void func_227(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_11, bParam0);
}

void func_228(bool bParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_18, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_19, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_20, sParam2);
}

void func_230(char* sParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = __LIB_11__::func_881();
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_3, sParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_4, sParam1);
}

void func_232(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_2, sParam0);
}

void func_233(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_1, sParam0);
}

char* func_234()
{
	if (Global_40.f_7748.f_1 >= 7)
	{
		return "PMPLAYER_GENERAL_OVERVIEW_HAIR_LONG";
	}
	else if (Global_40.f_7748.f_1 >= 4)
	{
		return "PMPLAYER_GENERAL_OVERVIEW_HAIR_MEDIUM";
	}
	return "PMPLAYER_GENERAL_OVERVIEW_HAIR_SHORT";
}

void func_235(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, char* sParam10)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_4, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_5, sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_1, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_2, sParam10);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_6, bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_7, bParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_11, bParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_8, iParam7);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_9, iParam8);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_10, iParam9);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_12, false);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569.f_5.f_147.f_21, iParam0, "player_attribute_item", Global_1955569.f_5.f_147.f_24[iParam0 /*23*/]);
}

char* func_236()
{
	if (Global_40.f_7731[0 /*5*/] >= 8 || Global_40.f_7731[2 /*5*/] >= 8)
	{
		return "PMPLAYER_GENERAL_OVERVIEW_HAIR_LONG";
	}
	else if (Global_40.f_7731[0 /*5*/] >= 4 || Global_40.f_7731[2 /*5*/] >= 4)
	{
		return "PMPLAYER_GENERAL_OVERVIEW_HAIR_MEDIUM";
	}
	return "PMPLAYER_GENERAL_OVERVIEW_HAIR_SHORT";
}

char* func_238()
{
	if (__LIB_0__::func_181())
	{
		return "PLAYER_JOHN_WEIGHT";
	}
	return "PLAYER_ARTHUR_WEIGHT";
}

void func_239(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	switch (iParam0)
	{
		case 0:
			fVar0 = (MISC::ABSF(Global_40.f_11095.f_45) * 100f);
			fVar1 = (MISC::ABSF(Global_40.f_11095.f_62) * 100f);
			if (Global_40.f_11095.f_45 == 0f)
			{
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			}
			else if (Global_40.f_11095.f_45 > 0f)
			{
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_MINUS_VALUE", fVar0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_250(0, "RPG_ARROW_UP", 0);
				func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_PLUS_VALUE", fVar1), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
				func_250(1, "RPG_ARROW_DOWN", 0);
			}
			else
			{
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_PLUS_VALUE", fVar0), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_250(0, "RPG_ARROW_DOWN", 0);
				func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_MINUS_VALUE", fVar1), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
				func_250(1, "RPG_ARROW_UP", 0);
			}
			break;
		case 1:
		case 2:
		case 3:
			fVar2 = __LIB_0__::func_727();
			if (fVar2 < 0f)
			{
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100f * fVar2)))), 1, 0, 1, 0, 0f, 0f, 0f, func_425(iParam0));
				func_250(0, "RPG_ARROW_DOWN", 0);
			}
			else if (fVar2 == 0f)
			{
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100f * fVar2)))), 1, 0, 0, 0, 0f, 0f, 0f, func_425(iParam0));
			}
			else
			{
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100f * fVar2)))), 1, 0, 0, 0, 0f, 0f, 0f, func_425(iParam0));
				func_250(0, "RPG_ARROW_UP", 0);
			}
			break;
	}
}

char* func_240()
{
	if (__LIB_0__::func_181())
	{
		return "PLAYER_JOHN_TEMPERATURE";
	}
	return "PLAYER_ARTHUR_TEMPERATURE";
}

char* func_241()
{
	if (__LIB_0__::func_181())
	{
		return "pausemenu_player_update";
	}
	return "pausemenu_player";
}

void func_242()
{
	if (__LIB_0__::func_728() || __LIB_0__::func_729())
	{
		func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
		func_250(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
	}
}

char* func_243()
{
	if (__LIB_0__::func_181())
	{
		return "PLAYER_JOHN_TOXICITY";
	}
	return "PLAYER_ARTHUR_TOXICITY";
}

void func_245()
{
	if (Global_40.f_11095.f_43)
	{
		func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
		func_250(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
	}
}

char* func_246()
{
	if (__LIB_0__::func_181())
	{
		return "PLAYER_JOHN_WELLBEING";
	}
	return "PLAYER_ARTHUR_WELLBEING";
}

void func_247(bool bParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	fVar0 = 0f;
	sVar1 = "PMPLAYER_CORE_PC_PLUS_VALUE";
	if (!__LIB_0__::func_181())
	{
		if (Global_40.f_11095.f_67 >= 7)
		{
			fVar0 = MISC::ABSF((100f * __LIB_0__::func_249()));
			sVar1 = "PMPLAYER_CORE_PC_PLUS_VALUE";
			bVar2 = true;
		}
	}
	if (bParam0)
	{
		func_235(iVar3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, sVar1, BUILTIN::ROUND(fVar0)), 1, 0, bVar2, 0, 0f, 0f, 0f, "RPG_Health");
		if (bVar2)
		{
			func_250(iVar3, "RPG_ARROW_DOWN", 0);
		}
		iVar3++;
	}
	if (bParam1)
	{
		func_235(iVar3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, sVar1, BUILTIN::ROUND(fVar0)), 1, 0, bVar2, 0, 0f, 0f, 0f, "RPG_Stamina");
		if (bVar2)
		{
			func_250(iVar3, "RPG_ARROW_DOWN", 0);
		}
		iVar3++;
	}
	if (bParam2)
	{
		func_235(iVar3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, sVar1, BUILTIN::ROUND(fVar0)), 1, 0, bVar2, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
		if (bVar2)
		{
			func_250(iVar3, "RPG_ARROW_DOWN", 0);
		}
	}
}

void func_248(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!__LIB_1__::func_707(iParam0, 1, 0))
	{
		func_230("UNDISCOVERED", 0);
		func_232("PMPLAYER_PERK_UNDISCOVERED_TALISMAN_DESC");
		func_233("PMPLAYER_PERK_UNDISCOVERED_TALISMAN");
	}
	else
	{
		func_230(sParam3, sParam4);
		func_232(sParam2);
		func_233(sParam1);
	}
	func_163("PMPLAYER_PERK_TOOLTIP");
}

void func_249(int iParam0)
{
	if (!__LIB_1__::func_707(joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"), 1, 0))
	{
		func_230("UNDISCOVERED", 0);
		func_232("PMPLAYER_PERK_UNDISCOVERED_TALISMAN_DESC");
		func_233("PMPLAYER_PERK_UNDISCOVERED_TALISMAN");
	}
	else
	{
		func_230("PERK_LEGEND_OUTFIT", "pausemenu_player_update");
		func_232("CLOTHING_LEGENDARY_EAST_OUTFIT_DESC");
		func_233("CLOTHING_LEGENDARY_EAST_OUTFIT");
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", 10), 1, 0, 0, 0, 0f, 0f, 0f, __LIB_0__::func_655(iParam0));
				func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_XP_BONUS"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 10), 1, 0, 0, 0, 0f, 0f, 0f, __LIB_0__::func_655(iParam0));
				break;
			default:
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_WEAPON_CONDITION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 10), 1, 0, 0, 0, 0, 0, 0, 0);
				func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_LOOT_BONUS"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 10), 1, 0, 0, 0, 0, 0, 0, 0);
				func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_MELEE_RESIST"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", 10), 1, 0, 0, 0, 0, 0, 0, 0);
				func_235(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_DAMAGE_RESIST"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", 10), 1, 0, 0, 0, 0, 0, 0, 0);
				func_235(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_EAGLE_EYE_DURATION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TIME_VALUE_SECONDS", 5), 1, 0, 0, 0, 0, 0, 0, 0);
				break;
		}
	}
	func_163("PMPLAYER_PERK_TOOLTIP");
}

void func_250(int iParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_13, sParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_14, sParam2);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_14, "pausemenu_player_update");
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_12, true);
}

void func_251(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	fVar0 = Global_40.f_11095.f_11[iParam0];
	iVar1 = __LIB_0__::func_593(fVar0);
	fVar2 = BUILTIN::TO_FLOAT(__LIB_0__::func_652(iVar1 + 1));
	if (iVar1 == 7)
	{
		fVar2 = BUILTIN::TO_FLOAT(1100);
	}
	func_235(0, MISC::_CREATE_VAR_STRING(2, sParam1), MISC::_CREATE_VAR_STRING(18, "PMPLAYER_VALUE_X_OF_Y", BUILTIN::FLOOR(fVar0), fVar2), 0, 0, 0, 0, 0, 0, 0, 0);
	func_235(1, MISC::_CREATE_VAR_STRING(2, sParam2), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar1 + 1, 7 + 1), 0, 0, 0, 0, 0, 0, 0, 0);
	switch (iParam0)
	{
		case 0:
			iVar3 = __LIB_1__::func_614(joaat("UPGRADE_HEALTH_TANK_1"), 0, 0);
			if (iVar3 > 0)
			{
				func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HEALTH_PROGRESSION_STAT_BONUS"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar3, 2), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		case 1:
			iVar3 = __LIB_1__::func_614(joaat("UPGRADE_STAMINA_TANK_1"), 0, 0);
			if (iVar3 > 0)
			{
				func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_PROGRESSION_STAT_BONUS"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar3, 2), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		case 2:
			iVar3 = __LIB_1__::func_614(joaat("UPGRADE_DEADEYE_TANK_1"), 0, 0);
			if (iVar3 > 0)
			{
				func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DEAD_EYE_PROGRESSION_STAT_BONUS"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar3, 2), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
	}
	iVar4 = (iVar1 + iVar3) + 1;
	sVar5 = __LIB_0__::func_67(__LIB_0__::func_653(iVar4, 0));
	func_228(1, sVar5, sParam3);
}

int func_255(int iParam0)
{
	int iVar0;
	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, __LIB_1__::func_976());
	return iVar0;
}

int func_256(int iParam0)
{
	int iVar0;
	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, __LIB_0__::func_16());
	return iVar0;
}

int func_261(int iParam0)
{
	int iVar0;
	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, __LIB_11__::func_454());
	return iVar0;
}

int func_262(int iParam0)
{
	int iVar0;
	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, __LIB_9__::func_816());
	return iVar0;
}

int func_263(int iParam0)
{
	int iVar0;
	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return -1;
	}
	iVar0 = func_436(iParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
		case 3:
			return 1;
		case 4:
		case 5:
			return 2;
		case 6:
		case 7:
		case 8:
		case 9:
			return 3;
	}
	return -1;
}

void func_265(int iParam0, float fParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569.f_5.f_147.f_12, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1955569.f_5.f_147.f_13, fParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569.f_5.f_147.f_14, iParam2);
}

void func_266(int iParam0, float fParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569.f_5.f_147.f_15, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1955569.f_5.f_147.f_16, fParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569.f_5.f_147.f_17, iParam2);
}

char* func_272(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HORSE_GENDER_MALE";
		case 2:
			return "HORSE_GENDER_FEMALE";
	}
	return "HORSE_GENDER_UNKNOWN";
}

void func_275(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	char* sVar1;
	fVar0 = (func_439(iParam1, iParam2) * 100f);
	sVar1 = __LIB_0__::func_196(0 == iParam2, "RPG_Horse_Health", "RPG_Horse_Stamina");
	if (fVar0 > 0f)
	{
		func_235(iParam0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 1, 0, 0, 0, 0, sVar1);
		func_250(iParam0, "RPG_ARROW_DOWN", 0);
	}
	else if (fVar0 == 0f)
	{
		func_235(iParam0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
	}
	else
	{
		func_235(iParam0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
		func_250(iParam0, "RPG_ARROW_UP", 0);
	}
}

void func_276()
{
	int iVar0;
	struct<2> Var1;
	struct<6> Var23;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	int iVar34;
	int iVar35;
	char* sVar36;
	if (!__LIB_1__::func_439(joaat("SLOTID_HORSE_SADDLE"), &iVar0))
	{
		return;
	}
	Var1.f_1 = 20;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar0, &Var1))
	{
		return;
	}
	iVar34 = 0;
	while (iVar34 < Var1)
	{
		if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var1.f_1[iVar34], &Var23))
		{
		}
		else
		{
			switch (Var23.f_1)
			{
				case -225223329:
					fVar30 = Var23.f_5;
					break;
				case 1167068375:
					fVar31 = Var23.f_5;
					break;
				case -845587290:
					fVar32 = Var23.f_5;
					break;
				case 1605773431:
					fVar33 = Var23.f_5;
					break;
			}
		}
		iVar34++;
	}
	iVar35 = 0;
	sVar36 = "";
	if (fVar30 < 0f)
	{
		sVar36 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar30)));
	}
	else if (fVar30 > 0f)
	{
		sVar36 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar30)));
	}
	if (fVar30 != 0f)
	{
		func_235(iVar35, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar36, 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
		iVar35++;
	}
	if (fVar31 < 0f)
	{
		sVar36 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar31)));
	}
	else if (fVar31 > 0f)
	{
		sVar36 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar31)));
	}
	if (fVar31 != 0f)
	{
		func_235(iVar35, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar36, 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		iVar35++;
	}
	if (fVar32 < 0f)
	{
		sVar36 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar32)));
	}
	else if (fVar32 > 0f)
	{
		sVar36 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar32)));
	}
	if (fVar32 != 0f)
	{
		func_235(iVar35, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), sVar36, 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		iVar35++;
	}
	if (fVar33 > 0f)
	{
		sVar36 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar33)));
	}
	else if (fVar33 < 0f)
	{
		sVar36 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar33)));
	}
	if (fVar33 != 0f)
	{
		func_235(iVar35, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_REGEN_RATE"), sVar36, 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		iVar35++;
	}
}

void func_277()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	struct<2> Var4;
	struct<6> Var26;
	int iVar33;
	if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar0))
	{
		Var4.f_1 = 20;
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar0, &Var4);
		iVar33 = 0;
		while (iVar33 < Var4)
		{
			ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var4.f_1[iVar33], &Var26);
			switch (Var26.f_1)
			{
				case 2086291460:
					iVar1 = (iVar1 + BUILTIN::FLOOR((IntToFloat(Var26.f_2) * 0.01f)));
					break;
				case -1620444701:
					iVar2 = (iVar2 + BUILTIN::FLOOR((IntToFloat(Var26.f_2) * 0.01f)));
					break;
				case -845587290:
					fVar3 = (fVar3 + Var26.f_5);
					break;
			}
			iVar33++;
		}
		func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar1), 0, 0, 0, 0, 0, 0, 0, 0);
		func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar2), 0, 0, 0, 0, 0, 0, 0, 0);
		if (fVar3 <= 0f)
		{
			func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar3)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		}
		else
		{
			func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar3))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		}
	}
}

void func_278(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	char cVar0[32];
	var uVar4;
	IntToString(&cVar0, iParam1, 32);
	uVar4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_158, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar4, "labelText", sParam2);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar4, "isComplete", bParam3);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_160, iParam1, "story_checklist_item", uVar4);
}

void func_293(int iParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;
	func_198(iParam0, 1, 1, -142743235, 1);
	iVar34 = __LIB_1__::func_415(iParam0, &uVar18);
	__LIB_1__::func_82(iParam0, &uVar18, &iVar34, 1);
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	__LIB_0__::func_827(iParam0, &(Global_26796.f_627.f_121.f_20));
	__LIB_1__::func_798(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_198(uVar18[iVar36], 1, 1, -142743235, 1);
		switch (__LIB_0__::func_357(uVar18[iVar36]))
		{
			case -2061583405:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_25));
				break;
		}
		__LIB_1__::func_798(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = __LIB_0__::func_161(__LIB_1__::func_710(uVar18[iVar36]), 1);
		iVar36++;
	}
	__LIB_0__::func_608(&(Global_1946804.f_1616));
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (uVar18[iVar36] == __LIB_0__::func_780(iVar0[iVar36], iVar35))
			{
				__LIB_1__::func_798(__LIB_0__::func_998(iVar35), 1, 1);
				__LIB_0__::func_999(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!__LIB_0__::func_65(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), 2))
						{
						}
						else
						{
							__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), iVar37, 0);
							Global_1946804.f_1497.f_1[iVar37 /*3*/] = { Global_1946804.f_1616.f_1[iVar37 /*3*/] };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_1946804.f_1497.f_1[iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
	{
		if (!__LIB_0__::func_609(8))
		{
			if (__LIB_0__::func_241() == -2125499975)
			{
				if (bVar17)
				{
					__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					__LIB_1__::func_633(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					__LIB_0__::func_828(Global_40.f_7729, 4096);
					__LIB_0__::func_806(Global_1905941, 4096);
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					__LIB_1__::func_811(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_26796.f_627.f_1.f_1.f_1[iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	Global_1946804.f_1616.f_1[8 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[8 /*3*/] };
	Global_1946804.f_1616.f_1[9 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[9 /*3*/] };
	Global_1946804.f_1616.f_1[0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[0 /*3*/] };
	Global_1946804.f_1616.f_1[2 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[2 /*3*/] };
	Global_1946804.f_1616.f_1[3 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[3 /*3*/] };
	Global_1946804.f_1616.f_1[1 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[1 /*3*/] };
	Global_1946804.f_1616.f_1[5 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[5 /*3*/] };
	Global_1946804.f_1616.f_1[6 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[6 /*3*/] };
	Global_1946804.f_1616.f_1[7 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[7 /*3*/] };
	Global_26796.f_627 = Global_1946804.f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946804.f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar36 /*3*/] = { Global_1946804.f_1616.f_1[iVar36 /*3*/] };
		iVar36++;
	}
}

void func_294(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_198(iParam0, 1, 1, -142743235, 1);
	if (__LIB_0__::func_779(iParam0))
	{
		__LIB_1__::func_798(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = __LIB_0__::func_161(__LIB_1__::func_710(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	__LIB_0__::func_921(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946804.f_57[iVar1 /*11*/];
		Global_1946804.f_1616.f_1[iVar1 /*3*/] = { vVar4 };
		Global_1946804.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
				{
					__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
		{
			__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
			{
				Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
		{
			Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
		if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		Global_1946804.f_1378.f_1[iVar1 /*3*/] = { Global_1946804.f_1616.f_1[iVar1 /*3*/] };
		iVar1++;
	}
}

void func_299(struct<6> Param0)
{
	if (!func_482(Param0.f_4, 1))
	{
	}
	if (!func_482(Param0, 1))
	{
	}
	if (!func_482(Param0.f_2, 1))
	{
	}
	if (!func_482(Param0.f_5, 1))
	{
	}
	if (!func_482(Param0.f_3, 1))
	{
	}
	if (!func_482(Param0.f_1, 1))
	{
	}
}

void func_333(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_534(iParam0);
}

int func_335(int iParam0, bool bParam1)
{
	int iVar0;
	switch (iParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_HATCHET"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			iVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			iVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (__LIB_0__::func_144(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_535(iVar0) || __LIB_0__::func_214(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

void func_378(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_1__::func_697(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_1__::func_452(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_62(-525676072, &iVar1))
				{
					__LIB_1__::func_452(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			__LIB_1__::func_775(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_333(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_379(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_593(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_593(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_593(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_593(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_593(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_593(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_593(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_593(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_593(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_593(-1, iParam0);
	}
}

char* func_425(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_Health";
		case 2:
			return "RPG_Stamina";
		case 3:
			return "RPG_Dead_Eye";
		default:
			break;
	}
	return "";
}

int func_436(int iParam0)
{
	int iVar0;
	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, __LIB_9__::func_881());
	return iVar0;
}

float func_439(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	fVar0 = 0f;
	if (iParam1 == 0)
	{
		if (__LIB_12__::func_205(iParam0, 0) > 50)
		{
			fVar0 = (fVar0 + 0.25f);
		}
	}
	if (__LIB_1__::func_707(joaat("PROVISION_TALISMAN_BOAR_TUSK"), 1, 0))
	{
		fVar0 = (fVar0 + -0.1f);
	}
	if (__LIB_5__::func_917() == 0 && __LIB_0__::func_479() == iParam0)
	{
		fVar1 = __LIB_12__::func_222(iParam1);
		fVar0 = (fVar0 - fVar1);
	}
	return fVar0;
}

bool func_482(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_703(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { __LIB_1__::func_124() };
	Var14 = { __LIB_0__::func_429(iParam0, Var10, iVar9, 0) };
	if (__LIB_1__::func_556(Var14, iParam1))
	{
		if (__LIB_0__::func_847(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_482(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_482(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_482(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_482(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

void func_534(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			__LIB_0__::func_537(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			__LIB_0__::func_538(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			__LIB_0__::func_538(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			__LIB_0__::func_538(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			Jump @1577; //curOff = 474
			Jump @1577; //curOff = 477
			Jump @1577; //curOff = 480
			Jump @1577; //curOff = 483
			Jump @1577; //curOff = 486
			Jump @1577; //curOff = 489
			__LIB_0__::func_539(1);
			Jump @1577; //curOff = 497
			__LIB_0__::func_540(1);
			Jump @1577; //curOff = 505
			__LIB_0__::func_541(1);
			Jump @1577; //curOff = 513
			Jump @1577; //curOff = 516
			__LIB_0__::func_542(0);
			Jump @1577; //curOff = 524
			__LIB_0__::func_543(0);
			Jump @1577; //curOff = 532
			__LIB_0__::func_544(0);
			Jump @1577; //curOff = 540
			Jump @1577; //curOff = 543
			Jump @1577; //curOff = 546
			Jump @1577; //curOff = 549
			Jump @1577; //curOff = 552
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			Jump @1577; //curOff = 574
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			__LIB_1__::func_240(586, 0);
			Jump @1577; //curOff = 677
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			__LIB_1__::func_240(587, 0);
			Jump @1577; //curOff = 790
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			__LIB_1__::func_240(588, 0);
			Jump @1577; //curOff = 913
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			__LIB_1__::func_240(589, 0);
			Jump @1577; //curOff = 1046
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || __LIB_0__::func_802(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (__LIB_0__::func_181())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!__LIB_1__::func_707(iVar0, 1, 0))
					{
						__LIB_1__::func_825(iVar0, 1, 752097756);
					}
					__LIB_1__::func_775(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			Jump @1577; //curOff = 1191
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_1__::func_825(1013902307, 1, 752097756);
				}
			}
			Jump @1577; //curOff = 1233
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_1__::func_825(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					__LIB_1__::func_825(142640135, 1, 752097756);
				}
			}
			Jump @1577; //curOff = 1306
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_1__::func_825(786809402, 1, 752097756);
				}
			}
			Jump @1577; //curOff = 1348
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_1__::func_825(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					__LIB_1__::func_825(-518019409, 1, 752097756);
				}
			}
			Jump @1577; //curOff = 1421
			PLAYER::_0x5B9813ECF7633FE8(0);
			Jump @1577; //curOff = 1429
			Jump @1577; //curOff = 1432
			Jump @1577; //curOff = 1435
			Jump @1577; //curOff = 1438
			Jump @1577; //curOff = 1441
			Jump @1577; //curOff = 1444
			Jump @1577; //curOff = 1447
			Jump @1577; //curOff = 1450
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			Jump @1577; //curOff = 1490
			__LIB_1__::func_881();
			Jump @1577; //curOff = 1497
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			Jump @1577; //curOff = 1509
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			Jump @1577; //curOff = 1522
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			Jump @1577; //curOff = 1535
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			Jump @1577; //curOff = 1548
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			Jump @1577; //curOff = 1561
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
		}
bool func_535(int iParam0)
{
	int iVar0;
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return true;
	}
	return false;
}

void func_593(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_749(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_749(iParam1, 1);
		__LIB_1__::func_856(iParam0);
	}
}

void func_749(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_333(50);
			}
			else
			{
				func_333(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_333(51);
			}
			else
			{
				func_333(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
			}
			break;
		case 3:
			func_333(24);
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

