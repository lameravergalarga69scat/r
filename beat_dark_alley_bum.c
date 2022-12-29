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
	struct<36> Local_14[6];
	float fLocal_231 = 0f;
	int iLocal_232 = 0;
	vector3 vLocal_233 = { 0f, 0f, 0f };
	vector3 vLocal_236 = { 0f, 0f, 0f };
	var uLocal_239 = 3;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	struct<2> Local_264[3];
	struct<12> Local_271[7];
	struct<32> Local_356[1];
	struct<193> Local_389 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_582 = 0;
	int iLocal_583 = 0;
	struct<7> Local_584 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	float fLocal_600 = 0f;
	int iLocal_601 = 0;
	struct<23> Local_602 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	bool bLocal_627 = false;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	char[] cLocal_630[8] = 0;
	struct<4> Local_631 = { 0, 0, 0, 0 } ;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	struct<4> Local_643 = { 0, 0, 0, 0 } ;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	struct<24> Local_655 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0 } ;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689[1] = { 0 };
	var uLocal_691[1] = { 0 };
	int iLocal_693 = 0;
	var uLocal_694 = 0;
	int iLocal_695 = 0;
	int iLocal_696 = 0;
	int iLocal_697 = 0;
	int iLocal_698 = 0;
	int iLocal_699 = 0;
	int iLocal_700 = 0;
	int iLocal_701 = 0;
	int iLocal_702 = 0;
	int iLocal_703 = 0;
	int iLocal_704 = 0;
	vector3 vLocal_705 = { 0f, 0f, 0f };
	vector3 vLocal_708 = { 0f, 0f, 0f };
	vector3 vLocal_711 = { 0f, 0f, 0f };
	vector3 vLocal_714 = { 0f, 0f, 0f };
	var uLocal_717 = 0;
	int iLocal_718 = 0;
	int iLocal_719 = 0;
	int iLocal_720 = 0;
	var uLocal_721 = 0;
	int iLocal_722 = 0;
	int iLocal_723 = 0;
	int iLocal_724 = 0;
	int iLocal_725 = 0;
	int iLocal_726 = 0;
	char* sLocal_727 = NULL;
	float fLocal_728 = 0f;
	float fLocal_729 = 0f;
	float fLocal_730 = 0f;
	float fLocal_731 = 0f;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	int iLocal_771 = 0;
	int iLocal_772 = 0;
	int iLocal_773 = 0;
	int iLocal_774 = 0;
	int iLocal_775 = 0;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	int iLocal_778 = 0;
	int iLocal_779 = 0;
	var uLocal_780 = 0;
	int iLocal_781 = 0;
	int iLocal_782 = 0;
	int iLocal_783 = 0;
	bool bLocal_784 = false;
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	var uLocal_787 = 0;
	int iLocal_788 = 0;
	int iLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	struct<21> Local_792[1];
	struct<17> Local_814[2];
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_231 = 1f;
	bLocal_627 = true;
	cLocal_630 = "Dark_Alley";
	vLocal_705 = { 0.805f, 0.62f, 1.67f };
	vLocal_708 = { 1.35f, 0.735f, 1.75f };
	vLocal_711 = { 9f, 4.5f, 5f };
	vLocal_714 = { 0f, 0f, 0f };
	iLocal_723 = 15;
	fLocal_728 = 1f;
	fLocal_730 = 10f;
	fLocal_731 = 7f;
	iLocal_773 = 1;
	iLocal_774 = 1;
	iLocal_776 = 1;
	iLocal_785 = 1;
	Local_389.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_784 = true;
	}
	if (!bLocal_784)
	{
		Local_389.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		Local_389.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		Local_389.f_43 = __LIB_0__::func_12();
		uLocal_694 = uLocal_694;
		func_4();
		func_5();
		__LIB_3__::func_368(&Local_389, 1);
		__LIB_2__::func_433(&(Local_389.f_5));
		if (iLocal_583 == 0)
		{
			__LIB_2__::func_507(&(Local_389.f_5), 0);
		}
		else if (iLocal_583 == 1)
		{
			__LIB_2__::func_507(&(Local_389.f_5), 500);
		}
		func_9();
		Local_389.f_176 = 1;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_784, 1151, 0);
		if (bLocal_784)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_698)
			{
				case 0:
					if (func_12())
					{
						iLocal_698 = 1;
					}
					break;
				case 1:
					if (__LIB_3__::func_631(&Local_389, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_14(&Local_389, &iLocal_700, &(Local_389.f_51.f_4));
						__LIB_3__::func_455(&Local_389, iLocal_700, 2698);
						Local_584 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_584.f_4, 0, "PBL_IDLE", false, true);
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_584, Local_389.f_51, 0f, 0f, Local_389.f_51.f_3, 2);
						iLocal_698 = 3;
					}
					else if (Local_389.f_160)
					{
						func_10();
					}
					break;
				case 3:
					if (func_17())
					{
						func_18();
						func_19();
						__LIB_2__::func_353(&uLocal_688, 1);
						__LIB_3__::func_337(&uLocal_688, Local_389.f_51, 3f);
						func_22();
						func_23();
						func_24();
						iLocal_698 = 4;
					}
					break;
				case 4:
					if (!__LIB_3__::func_617(&Local_389, &uLocal_689, iLocal_583, 1, 1, 0, 0, 0))
					{
						func_10();
					}
					if (!Local_389.f_46)
					{
						if (__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
						{
							__LIB_3__::func_606(&uLocal_790);
						}
						if (func_28(&uLocal_689, &(Local_389.f_5), &iLocal_699, &uLocal_721, 0, 0, 1) || func_29())
						{
							if (iLocal_699 == 8192 && !__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
							{
							}
							else
							{
								Local_389.f_46 = 1;
								UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
								__LIB_2__::func_344(&(uLocal_689[0]));
								__LIB_2__::func_480(&Local_814, 0, 0, 1, 0);
								iLocal_697 = 7;
								if (Local_389.f_44 != 0)
								{
								}
								else
								{
									Local_389.f_44 = 1;
									__LIB_2__::func_115(85, 1, 0, 0, 6, 0, 0, 1);
								}
								iLocal_778 = 1;
								__LIB_3__::func_606(&uLocal_790);
							}
						}
					}
					if (func_33())
					{
						Local_389.f_50 = 1;
						func_10();
					}
					if (__LIB_3__::func_431(&Local_389, &uLocal_689, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_389.f_50 = 1;
						func_10();
					}
					break;
			}
			BUILTIN::WAIT(Local_389.f_158);
		}
	}
}

void func_4()
{
	iLocal_601 = __LIB_3__::func_390(Local_389.f_3, 2, 0);
	iLocal_583 = iLocal_601;
}

void func_5()
{
	if (iLocal_583 == 0)
	{
		Local_584.f_4 = "script@beat@town@darkAlleyBum@desperateGood";
		Local_584.f_5 = "script@beat@town@darkAlleyBum@desperatesteal";
	}
	else if (iLocal_583 == 1)
	{
		Local_584.f_4 = "script@beat@town@darkAlleyBum@drunkGood";
		Local_584.f_5 = "script@beat@town@darkAlleyBum@drunksteal";
	}
	if (iLocal_583 == 0)
	{
		Local_584.f_6 = "script@beat@town@darkAlleyBum@desperategive";
		iLocal_232 = joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED");
	}
	else if (iLocal_583 == 1)
	{
		Local_584.f_6 = "script@beat@town@darkAlleyBum@drunkgive";
		iLocal_232 = joaat("CONSUMABLE_GINSENG_ELIXIER");
	}
}

void func_9()
{
	Local_602 = { 0f, 0f, 0f };
	Local_602.f_3 = Global_35;
	Local_602.f_8 = 4;
	Local_602.f_4 = 21030;
	Local_602.f_19 = 4;
	Local_602.f_20 = 4;
	Local_602.f_21 = 4;
	Local_602.f_22 = 4;
	Local_602.f_7 = 0;
}

void func_10()
{
	int iVar0;
	__LIB_0__::func_325(&(uLocal_691[0]));
	__LIB_2__::func_480(&Local_814, 0, 1, 1, 0);
	if (__LIB_2__::func_1(uLocal_689[0], 0, 0))
	{
		__LIB_2__::func_344(&(uLocal_689[0]));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_689[0], false);
		__LIB_3__::func_141(uLocal_689[0], 1088421888 /* Float: 7f */, 0, 0);
		__LIB_2__::func_603(&(uLocal_689[0]), &(Local_792[0 /*21*/]), &Local_814, 1, 1);
		PED::_0x24C82EF607105FAA(uLocal_689[0], joaat("TIMID"));
		PED::_0xE737D5F14304A2EC(uLocal_689[0], PLAYER::GET_PLAYER_INDEX(), 120000);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_689[0], 7, 0, 1);
	}
	PED::SET_PED_CONFIG_FLAG(uLocal_689[0], 6, false);
	if (iLocal_773 == 0)
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		iLocal_773 = 1;
	}
	if (__LIB_2__::func_1(uLocal_689[0], 0, 1))
	{
		LAW::_0xFFEBE5AA96BC2E4E(uLocal_689[0], joaat("CRIME_UNARMED_ASSAULT"), 1);
	}
	__LIB_3__::func_525(&uLocal_787, &uLocal_791);
	__LIB_3__::func_606(&uLocal_790);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_702))
	{
		TASK::SET_SCENARIO_TYPE_ENABLED(sLocal_727, true);
		func_49(uLocal_717);
	}
	if (__LIB_2__::func_1(uLocal_689[0], 0, 1) && !__LIB_0__::func_27(iLocal_718, 16384))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
		TASK::TASK_PLAY_ANIM(0, Local_264[0 /*2*/], Local_264[0 /*2*/].f_1, 2f, -2f, -1, 16384, 0f, false, 0, false, 0, false);
		TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 6, 257, -1082130432 /* Float: -1f */, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
		TASK::TASK_PERFORM_SEQUENCE(uLocal_689[0], iLocal_693);
		PED::SET_PED_KEEP_TASK(uLocal_689[0], true);
		PED::_0x39A2FC5AF55A52B1(uLocal_689[0], -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_689[0]));
	}
	if (iLocal_778 == 0)
	{
		Local_389.f_45 = 0;
		__LIB_3__::func_252(&Local_389);
	}
	if (iLocal_778 == 1)
	{
		if (Local_389.f_44 == 0)
		{
			iVar0 = __LIB_3__::func_564(81, 0);
			iVar0++;
			if (iVar0 >= 3)
			{
				__LIB_3__::func_461(81, 0, 0);
				Local_389.f_44 = 1;
				__LIB_2__::func_115(85, 1, 0, 0, 6, 0, 0, 1);
			}
			else
			{
				__LIB_3__::func_461(81, 0, iVar0);
			}
		}
		else
		{
			__LIB_3__::func_461(81, 0, 0);
		}
	}
	func_54();
	__LIB_2__::func_353(&uLocal_688, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_271[0 /*12*/].f_8))
	{
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_703))
	{
		VOLUME::_DELETE_VOLUME(iLocal_703);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_704))
	{
		VOLUME::_DELETE_VOLUME(iLocal_704);
	}
	if (PATHFIND::_0xDE0EA444735C1368(iLocal_788))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_788);
		__LIB_0__::func_172(iLocal_703);
	}
	MAP::DISPLAY_RADAR(true);
	__LIB_3__::func_480(&Local_271);
	__LIB_3__::func_709(&Local_389, &uLocal_689, &uLocal_691, iLocal_583, iLocal_700, __LIB_3__::func_172(&Local_389), 0, 1, 0, 1);
	if ((__LIB_4__::func_74(85, 8192) == 2 && Local_389.f_44 == 1) && iLocal_700 == 0)
	{
		__LIB_2__::func_115(81, 1, 0, 0, 0, 16, 0, 1);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_12()
{
	int iVar0;
	switch (iLocal_695)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_389))
			{
				func_62();
				func_63();
				func_64();
				func_65();
				__LIB_3__::func_314(&Local_271);
				PED::_0x91FE941F9FCFB702(-252998940, 0);
				AUDIO::_0xD9130842D7226045(__LIB_3__::func_607(), 0);
				if (iLocal_583 == 0)
				{
					STREAMING::REQUEST_CLIP_SET("SCRIPT_RE@DARK_ALLEY_BUM@DESP@GIVE@ENTER");
					STREAMING::REQUEST_CLIP_SET("SCRIPT_RE@DARK_ALLEY_BUM@DESP@STEAL@ENTER");
				}
				else
				{
					STREAMING::REQUEST_CLIP_SET("SCRIPT_RE@DARK_ALLEY_BUM@DRUNK@GIVE@ENTER");
					STREAMING::REQUEST_CLIP_SET("SCRIPT_RE@DARK_ALLEY_BUM@DRUNK@STEAL@ENTER");
				}
				iLocal_695 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_694, cLocal_630))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_356[iVar0 /*32*/].f_1))
				{
					return false;
				}
				iVar0++;
			}
			if (iLocal_583 == 0)
			{
				if (!STREAMING::HAS_CLIP_SET_LOADED("SCRIPT_RE@DARK_ALLEY_BUM@DESP@GIVE@ENTER"))
				{
					return false;
				}
				if (!STREAMING::HAS_CLIP_SET_LOADED("SCRIPT_RE@DARK_ALLEY_BUM@DESP@STEAL@ENTER"))
				{
					return false;
				}
			}
			else
			{
				if (!STREAMING::HAS_CLIP_SET_LOADED("SCRIPT_RE@DARK_ALLEY_BUM@DRUNK@GIVE@ENTER"))
				{
					return false;
				}
				if (!STREAMING::HAS_CLIP_SET_LOADED("SCRIPT_RE@DARK_ALLEY_BUM@DRUNK@STEAL@ENTER"))
				{
					return false;
				}
			}
			if (!__LIB_3__::func_449(&Local_356))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_239))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_271))
			{
				return false;
			}
			if (!AUDIO::_0xD9130842D7226045("REDAB_Sounds", 0))
			{
				return false;
			}
			PED::_0x91FE941F9FCFB702(-252998940, 0);
			return true;
	}
	return false;
}

void func_14(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 0;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 0;
			*uParam2 = 1;
			break;
		case 2:
			*iParam1 = 0;
			*uParam2 = 2;
			break;
		case 3:
			*iParam1 = 0;
			*uParam2 = 3;
			break;
		case 4:
			*iParam1 = 0;
			*uParam2 = 4;
			break;
		case 5:
			*iParam1 = 0;
			*uParam2 = 5;
			break;
		case 6:
			*iParam1 = 0;
			*uParam2 = 6;
			break;
		case 7:
			*iParam1 = 0;
			*uParam2 = 7;
			break;
		case 8:
			*iParam1 = 0;
			*uParam2 = 8;
			break;
		case 9:
			*iParam1 = 0;
			*uParam2 = 9;
			break;
		case 10:
			*iParam1 = 0;
			*uParam2 = 10;
			break;
		case 11:
			*iParam1 = 0;
			*uParam2 = 11;
			break;
		case 12:
			*iParam1 = 4;
			*uParam2 = 0;
			break;
		case 13:
			*iParam1 = 4;
			*uParam2 = 1;
			break;
		case 14:
			*iParam1 = 4;
			*uParam2 = 2;
			break;
	}
}

Vector3 func_15(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 94.513f;
				case 1:
					return 0f, 0f, -65f;
				case 2:
					return 0f, 0f, -90f;
				case 3:
					return 0f, 0f, -111.148f;
				case 4:
					return 0f, 0f, 0.8f;
				case 5:
					return 0f, 0f, 100.187f;
				case 6:
					return 0f, 0f, -172.261f;
				case 7:
					return 0f, 0f, -83.61f;
				case 8:
					return 0f, 0f, 56.512f;
				case 9:
					return 0f, 0f, 271.129f;
				case 10:
					return 0f, 0f, 101.292f;
				case 11:
					return 0f, 0f, 163.562f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 87.7f;
				case 1:
					return 0f, 0f, 7.352f;
				case 2:
					return 0f, 0f, 87.504f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_17()
{
	switch (iLocal_696)
	{
		case 0:
			if (__LIB_3__::func_479(__LIB_3__::func_179(&Local_389), __LIB_3__::func_526(&Local_389), &Local_356, &uLocal_689, 0, 0, -1, 1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_18()
{
	vector3 vVar0;
	func_80();
	__LIB_2__::func_463(uLocal_689[0], joaat("CONSUMABLE_CHEWING_TOBACCO_USED"), 1, 0);
	__LIB_4__::func_142(uLocal_689[0], 1, 0);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_689[0], true, true);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -440666838 /* GXTEntry: "Beggar" */);
	if (iLocal_583 == 0)
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_389.f_51, Local_389.f_51.f_3, 0.5f, -0.55f, 1f) };
	}
	else
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_389.f_51, Local_389.f_51.f_3, -0.1f, -0.5f, 1f) };
	}
	TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_689[0], Local_264[2 /*2*/], Local_264[2 /*2*/].f_1, vVar0, 0f, 0f, Local_389.f_51.f_3, 1000f, -8f, -1, 1, 0f, 2, 0, 0);
	__LIB_3__::func_285(uLocal_689[0], &Local_389, 0);
	__LIB_3__::func_615(uLocal_689[0], 3);
	PED::SET_PED_CONFIG_FLAG(uLocal_689[0], 6, true);
	LAW::_0xFFEBE5AA96BC2E4E(uLocal_689[0], joaat("CRIME_UNARMED_ASSAULT"), 1);
}

void func_19()
{
	Local_14[0 /*36*/].f_8 = 0;
	Local_14[0 /*36*/].f_10.f_17 = "MECH_PICKUP@OBJECT";
	Local_14[0 /*36*/].f_10.f_15 = "pickup_low";
	Local_14[0 /*36*/].f_10.f_11 = 38.5f;
	Local_14[0 /*36*/].f_10.f_8 = { -1.3068f, 2.3037f, 0.8581f };
	Local_14[0 /*36*/].f_10.f_12 = { 0.2382f, -0.1453f, 0.0733f };
	Local_14[0 /*36*/].f_10.f_2 = { 0f, 1.1f, 0f };
	Local_14[0 /*36*/].f_10.f_22 = 3.5f;
	Local_14[0 /*36*/].f_10.f_23 = -25f;
	Local_14[1 /*36*/].f_8 = 0;
	Local_14[1 /*36*/].f_10.f_17 = "MECH_PICKUP@OBJECT";
	Local_14[1 /*36*/].f_10.f_15 = "pickup_low";
	Local_14[1 /*36*/].f_10.f_11 = 38.5f;
	Local_14[1 /*36*/].f_10.f_8 = { -1.3068f, 2.3037f, 0.8581f };
	Local_14[1 /*36*/].f_10.f_12 = { 0.2382f, -0.1453f, 0.0733f };
	Local_14[1 /*36*/].f_10.f_2 = { 0f, 1.1f, 0f };
	Local_14[1 /*36*/].f_10.f_22 = 3.5f;
	Local_14[1 /*36*/].f_10.f_23 = -25f;
	__LIB_3__::func_318(Local_14[0 /*36*/].f_10.f_17, &uLocal_239);
	__LIB_3__::func_318(Local_14[1 /*36*/].f_10.f_17, &uLocal_239);
}

void func_22()
{
	vector3 vVar0;
	Local_584.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_584.f_5, 0, "PBL_MTH_NORMAL", false, true);
	Local_584.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_584.f_6, 0, "PBL_MTH_NORMAL", false, true);
	vVar0 = { 0f, 180f, 0f };
	Local_271[0 /*12*/].f_8 = PED::_0x9641A9A20310F6B8(-252998940, Local_389.f_51 + Vector(0f, 0f, 0f), vVar0, 0, 0, 0);
	if (bLocal_627)
	{
		Local_271[2 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_271[2 /*12*/].f_7, Local_389.f_51 + Vector(0f, -0.25f, -0.25f), true, true, false, false, true);
	}
	if (iLocal_583 == 1)
	{
		Local_271[1 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_271[1 /*12*/].f_7, Local_389.f_51 + Vector(0f, -0.25f, -0.25f), true, true, false, false, true);
		if (ENTITY::DOES_ENTITY_EXIST(Local_271[1 /*12*/].f_8))
		{
			TASK::_0x67BFCED22909834D(Local_271[1 /*12*/].f_8);
		}
	}
	Local_271[3 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_271[3 /*12*/].f_7, Local_389.f_51 + Vector(0f, 0.25f, 0.25f), true, true, false, false, true);
	Local_271[4 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_271[4 /*12*/].f_7, Local_389.f_51 + Vector(-1f, 0f, 0f), true, true, false, false, true);
	ENTITY::SET_ENTITY_VISIBLE(Local_271[4 /*12*/].f_8, false);
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_271[0 /*12*/].f_8, Local_271[3 /*12*/].f_8, false);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_584, Local_389.f_51, 0f, 0f, Local_389.f_51.f_3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584, "PED_BUM", uLocal_689[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584, "HAT", Local_271[0 /*12*/].f_8, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_584.f_4))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_584, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_584);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_584.f_5))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_584.f_1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_584.f_1);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_584.f_6))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_584.f_2, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_584.f_2);
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_584, "ACTION_1", false, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_584, "ACTION_2", false, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_584, "ACTION_3", false, false);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_584, Local_389.f_51, 0f, 0f, Local_389.f_51.f_3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584, "PED_BUM", uLocal_689[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584, "HAT", Local_271[0 /*12*/].f_8, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584, "Reward", Local_271[2 /*12*/].f_8, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584, "COIN01", Local_271[3 /*12*/].f_8, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584, "COIN02", Local_271[4 /*12*/].f_8, 0);
	if (iLocal_583 == 1)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584, "BOTTLE", Local_271[1 /*12*/].f_8, 0);
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_584.f_1, Local_389.f_51, 0f, 0f, Local_389.f_51.f_3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_1, "PED_BUM", uLocal_689[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_1, "HAT", Local_271[0 /*12*/].f_8, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_1, "COIN01", Local_271[3 /*12*/].f_8, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_1, "COIN02", Local_271[4 /*12*/].f_8, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_1, "player", Global_35, 0);
	if (iLocal_583 == 1)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_1, "BOTTLE", Local_271[1 /*12*/].f_8, 0);
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_584.f_2, Local_389.f_51, 0f, 0f, Local_389.f_51.f_3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "PED_BUM", uLocal_689[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "HAT", Local_271[0 /*12*/].f_8, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "Reward", Local_271[2 /*12*/].f_8, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "player", Global_35, 0);
	if (iLocal_583 == 1)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "BOTTLE", Local_271[1 /*12*/].f_8, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "COIN_GIVE_2", Local_271[4 /*12*/].f_8, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "COIN_GIVE_1", Local_271[3 /*12*/].f_8, 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "COIN_GIVE_2", Local_271[4 /*12*/].f_8, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "COIN01", Local_271[3 /*12*/].f_8, 0);
	}
}

void func_23()
{
	vector3 vVar0;
	if (iLocal_583 == 0)
	{
		__LIB_1__::func_216(&iLocal_703, Local_389.f_51, 0f, 0f, Local_356[0 /*32*/].f_9, vLocal_705);
	}
	else if (iLocal_583 == 1)
	{
		__LIB_1__::func_216(&iLocal_703, Local_389.f_51, 0f, 0f, Local_356[0 /*32*/].f_9, vLocal_708);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_703))
	{
		PED::_0x7C00CFC48A782DC0(iLocal_703, uLocal_689[0], 0f, 0.25f, -0.1f, 0f, 0f, 0f, 2, 1);
	}
	__LIB_3__::func_527(&iLocal_788, Local_389.f_51, 0f, 0f, 0f, 2f, 2f, 5f, "NAV_BLOCKER");
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_788))
	{
		if (PATHFIND::_0x19C7567D2F2287D6(iLocal_788, 7))
		{
		}
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_689[0], 0f, 2f, 0f) };
	__LIB_3__::func_557(&iLocal_789, vVar0, vLocal_236, 8f, 5f, 5f, "INTERACT_AREA");
	if (iLocal_583 == 0)
	{
		iLocal_703 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), Local_389.f_51, 0f, 0f, Local_356[0 /*32*/].f_9, vLocal_705);
	}
	else if (iLocal_583 == 1)
	{
		iLocal_703 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), Local_389.f_51, 0f, 0f, Local_356[0 /*32*/].f_9, vLocal_708);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_703))
	{
		PED::_0x7C00CFC48A782DC0(iLocal_703, uLocal_689[0], 0f, 0f, -0.1f, 0f, 0f, 0f, 2, 1);
	}
	iLocal_704 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), Local_389.f_51, 0f, 0f, 0f, 2.5f, 2.5f, 5f);
	PED::_0x7C00CFC48A782DC0(iLocal_704, uLocal_689[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	VOLUME::_0x5B23DFF8E0948BB2(iLocal_704, 0);
	VOLUME::_0xBE551C2CC421185D(iLocal_704, 1);
	__LIB_3__::func_682(&uLocal_787, &uLocal_791, Local_389.f_51, 0f, 0f, Local_356[0 /*32*/].f_9, vLocal_711, 1, 534496, 1, 2, "AmbientBlocker");
	__LIB_3__::func_378(uLocal_787, 0);
	func_93(&uLocal_790, Local_389.f_51, 0f, 0f, 0f, 20f, 20f, 10f, 0, 16384, 0);
}

void func_24()
{
	__LIB_6__::func_686(&(Local_814[0 /*17*/]), "RE_DAB_GIVE", 25, 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1);
	__LIB_3__::func_157(&(Local_814[1 /*17*/]), "RE_DAB_STEAL_COIN", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_621(&(Local_814[0 /*17*/]), 1, 0);
	__LIB_3__::func_621(&(Local_814[1 /*17*/]), 1, 0);
}

int func_28(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		if (__LIB_11__::func_544((*uParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return 1;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

int func_29()
{
	int iVar0;
	char* sVar1;
	if (Local_389.f_48 == 1)
	{
		if (PED::IS_PED_RAGDOLL(uLocal_689[0]))
		{
			iLocal_699 = 2;
			return 1;
		}
		if (!__LIB_2__::func_1(uLocal_689[0], 0, 1))
		{
			return 0;
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584.f_1))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_584.f_1, false) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_584.f_1))
			{
				return 0;
			}
		}
		else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584.f_2))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_584.f_2, false) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_584.f_2))
			{
				return 0;
			}
		}
		if ((iLocal_771 == 1 && !__LIB_0__::func_27(iLocal_718, 16384)) && !__LIB_0__::func_27(iLocal_718, 512))
		{
			return 0;
		}
		if ((__LIB_0__::func_27(iLocal_718, 268435456) && ANIMSCENE::_0x8D81E7824B7753F7(Local_584.f_2, "idle", 1)) || ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_689[0], Local_584))
		{
			if (!__LIB_0__::func_27(iLocal_718, 32768))
			{
				iVar0 = __LIB_3__::func_112(uLocal_689[0], Global_35, 1060437492 /* Float: 0.707f */);
				switch (iVar0)
				{
					case 0:
						sVar1 = "PBL_REACT_F";
						break;
					case 1:
					case 3:
						sVar1 = "PBL_REACT_L";
						break;
					case 2:
						sVar1 = "PBL_REACT_R";
						break;
				}
				if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, uLocal_689[0]) || __LIB_1__::func_205(Global_35, iLocal_703, 1, 0)) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 663533857))
				{
					if (__LIB_0__::func_27(iLocal_718, 268435456))
					{
						if (func_112(Local_584.f_2, sVar1))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_584.f_2, sVar1, true);
							__LIB_1__::func_683(&iLocal_718, 32768);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_584, "bool_idle_b", false, false);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_584, "bool_idle", false, false);
						}
						else
						{
							return 0;
						}
					}
					else if (func_112(Local_584, sVar1))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_584, sVar1, true);
						__LIB_1__::func_683(&iLocal_718, 32768);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_584, "ACTION_3", false, false);
					}
					else
					{
						return 0;
					}
					__LIB_1__::func_283(&uLocal_762, 0);
				}
				return 0;
			}
			else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, uLocal_689[0]) || __LIB_1__::func_205(Global_35, iLocal_703, 1, 0))
			{
				if (__LIB_0__::func_27(iLocal_718, 268435456))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(Local_584.f_2, "idle", 1) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 663533857))
					{
						return 1;
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_584, "IDLES_REDUX", 1) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 663533857))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_33()
{
	float fVar0;
	int iVar1;
	if (Local_389.f_48 == 1)
	{
		if (__LIB_0__::func_665(Global_35, uLocal_689[0], 1, 1) < 15f)
		{
			func_120();
			func_121();
			func_122();
		}
		func_123();
		func_124();
		if (func_125())
		{
			return true;
		}
	}
	if (iLocal_773 == 0)
	{
		if (((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_584) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_584.f_1)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_584.f_2)) && iLocal_783 == 1)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			iLocal_773 = 1;
			iLocal_783 = 0;
		}
	}
	if (Local_389.f_46 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_602.f_3))
		{
			Local_602.f_3 = Global_35;
		}
		_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_689[0], &Local_602);
	}
	switch (iLocal_697)
	{
		case 0:
			if (!__LIB_0__::func_75(&uLocal_597))
			{
				__LIB_1__::func_283(&uLocal_597, 0);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_584, false)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_584, true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584, "PED_BUM", uLocal_689[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584, "HAT", Local_271[0 /*12*/].f_8, 0);
				ANIMSCENE::START_ANIM_SCENE(Local_584);
				__LIB_2__::func_662(&(Local_389.f_5), 0);
				__LIB_3__::func_675(&(Local_389.f_5), 1097859072 /* Float: 15f */);
				iLocal_774 = 1;
				func_112(Local_584, "PBL_LEFT");
				func_112(Local_584, "PBL_FRONT");
				func_112(Local_584, "PBL_RIGHT");
				func_112(Local_584, "PBL_IDLE");
				func_112(Local_584, "PBL_IDLES_B");
				func_112(Local_584, "PBL_IDLE_LOOP_A");
				func_112(Local_584, "PBL_IDLE_LOOP_B");
				func_112(Local_584, "PBL_IDLE_LOOP_C");
				func_112(Local_584, "PBL_ANYTHING");
				func_112(Local_584, "PBL_COIN_OR_TWO");
				func_112(Local_584, "PBL_DOWN_ON_LUCK");
				func_112(Local_584, "PBL_PLEASE");
				func_112(Local_584, "PBL_SPARE_CHANGE");
				func_112(Local_584, "PBL_WHATEVER");
				iLocal_774 = 1;
				if (iLocal_774 == 1)
				{
					iLocal_697 = 1;
				}
			}
			else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_584, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_584, true))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_584);
				}
			}
			break;
		case 1:
			func_129();
			if (Local_389.f_48 == 1)
			{
				func_130();
				func_131(Local_584, "PBL_IDLE_LOOP_A", "PBL_IDLE", "IDLES_REDUX", "ACTION_1", "ACTION_3");
			}
			fVar0 = 10f;
			if (ENTITY::GET_ENTITY_SPEED(Global_35) > 7f)
			{
				fVar0 = (fVar0 + 5f);
			}
			if (__LIB_3__::func_452(&Local_389, 2f, 20f, fVar0, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				iLocal_697 = 2;
				Local_602.f_3 = Global_35;
			}
			break;
		case 2:
			if (!__LIB_0__::func_75(&uLocal_753) && !__LIB_0__::func_75(&uLocal_756))
			{
				iLocal_701 = __LIB_3__::func_112(uLocal_689[0], Global_35, 1060437492 /* Float: 0.707f */);
				if ((iLocal_701 != 1 && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_689[0])) && func_112(Local_584, "PBL_DOWN_ON_LUCK"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_584, "PBL_DOWN_ON_LUCK", true);
					iLocal_778 = 1;
					func_133(Local_584, 1);
					if (!__LIB_0__::func_27(iLocal_718, 524288))
					{
						__LIB_2__::func_73(uLocal_689[0], &(uLocal_691[0]), -89429847, 1679075994, 0, "RE_INTER_STRANGER");
						__LIB_1__::func_683(&iLocal_718, 524288);
					}
					iLocal_697 = 4;
				}
			}
			break;
		case 4:
			if (!__LIB_0__::func_27(iLocal_718, 262144) && (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584) && ANIMSCENE::_0x8D81E7824B7753F7(Local_584, "IDLES_2", 1)))
			{
				__LIB_1__::func_683(&iLocal_718, 262144);
			}
			if ((__LIB_0__::func_27(iLocal_718, 262144) && !__LIB_0__::func_75(&uLocal_753)) && !__LIB_0__::func_75(&uLocal_756))
			{
				func_135();
			}
			func_136();
			func_137();
			func_130();
			if ((func_138() && __LIB_2__::func_227(-3f, 1, 0, 0)) && __LIB_0__::func_27(iLocal_718, 1))
			{
				iLocal_697 = 8;
			}
			break;
		case 8:
			func_136();
			func_135();
			func_140();
			func_137();
			if (__LIB_0__::func_27(iLocal_719, 524288))
			{
				func_141();
			}
			break;
		case 7:
			func_142();
			func_54();
			if (!__LIB_0__::func_27(iLocal_718, 512))
			{
				if (ENTITY::_0x5AFFA9DDC87846F8(Local_271[2 /*12*/].f_7))
				{
					TASK::_0x78B4567E18B54480(Local_271[2 /*12*/].f_8);
				}
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_584);
			}
			if (PATHFIND::_0xDE0EA444735C1368(iLocal_788))
			{
				PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_788);
				__LIB_0__::func_172(iLocal_703);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584.f_2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_271[1 /*12*/].f_8))
				{
					if (ENTITY::_0x5AFFA9DDC87846F8(Local_271[1 /*12*/].f_7))
					{
						TASK::_0x78B4567E18B54480(Local_271[1 /*12*/].f_8);
					}
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584.f_1))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_584.f_1, "BOTTLE", Local_271[1 /*12*/].f_8);
						ANIMSCENE::_DELETE_ANIM_SCENE(Local_584.f_1);
					}
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584.f_2))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_584.f_2, "BOTTLE", Local_271[1 /*12*/].f_8);
						ANIMSCENE::_DELETE_ANIM_SCENE(Local_584.f_2);
					}
					__LIB_2__::func_919(Local_271[1 /*12*/].f_8, 1, 1);
					PHYSICS::ACTIVATE_PHYSICS(Local_271[1 /*12*/].f_8);
				}
				__LIB_1__::func_683(&iLocal_718, 8192);
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_584.f_2);
			}
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_702))
			{
				TASK::SET_SCENARIO_TYPE_ENABLED(sLocal_727, false);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_703))
			{
				VOLUME::_DELETE_VOLUME(iLocal_703);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_704))
			{
				VOLUME::_DELETE_VOLUME(iLocal_704);
			}
			if (!__LIB_0__::func_27(iLocal_718, 1024))
			{
				if (__LIB_2__::func_1(uLocal_689[0], 0, 1))
				{
					TASK::_0x2E1D6D87346BB7D2(uLocal_689[0], Global_35, 0, 0);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
					if (!PED::IS_PED_RAGDOLL(uLocal_689[0]) && !__LIB_0__::func_27(iLocal_718, 16384))
					{
						TASK::TASK_PLAY_ANIM(0, Local_264[0 /*2*/], Local_264[0 /*2*/].f_1, 2f, -2f, -1, 16384, 0f, false, 0, false, 0, false);
					}
					TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 257, -1082130432 /* Float: -1f */, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_689[0], iLocal_693);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
					__LIB_2__::func_480(&Local_814, 0, 1, 1, 0);
					func_144();
					PED::SET_PED_KEEP_TASK(uLocal_689[0], true);
					__LIB_3__::func_608(uLocal_689[0]);
					iVar1 = __LIB_1__::func_372(Global_35, 0);
					__LIB_2__::func_461(0);
					if (((((iLocal_699 == 8 && iVar1 != joaat("WEAPON_LASSO")) && !WEAPON::_IS_WEAPON_THROWABLE(iVar1)) && !WEAPON::_IS_WEAPON_MELEE(iVar1)) || iLocal_699 == 4) || iLocal_699 == 256)
					{
						__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("AGGRO_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_271[1 /*12*/].f_8))
			{
				PHYSICS::ACTIVATE_PHYSICS(Local_271[1 /*12*/].f_8);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_271[1 /*12*/].f_8, 1, 0f, 0.2f, 0f, 0f, 0f, 0f, 1, true, true, true, false, true);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_271[1 /*12*/].f_8, true);
			}
			TASK::_0x2E1D6D87346BB7D2(uLocal_689[0], Global_35, 0, 0);
			iLocal_697 = 10;
			break;
		case 10:
			if (iLocal_786 == 0 && ENTITY::DOES_ENTITY_EXIST(Local_271[1 /*12*/].f_8))
			{
				if (iLocal_726 >= 2)
				{
					if (__LIB_2__::func_1(uLocal_689[0], 0, 1))
					{
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_271[1 /*12*/].f_8, uLocal_689[0], false);
					}
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_271[1 /*12*/].f_8, 1, 0f, 0f, 0.1f, 0f, 0f, 0f, 1, true, true, true, false, true);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_271[1 /*12*/].f_8, true);
					iLocal_786 = 1;
				}
				else
				{
					iLocal_726++;
				}
			}
			if (__LIB_2__::func_1(uLocal_689[0], 0, 0))
			{
				if (PED::_IS_PED_HOGTIED(uLocal_689[0]) || (PED::_IS_PED_LASSOED(uLocal_689[0]) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_689[0])))
				{
					if (!__LIB_0__::func_27(iLocal_719, 512))
					{
						if (!__LIB_0__::func_75(&uLocal_750))
						{
							__LIB_1__::func_283(&uLocal_750, 0);
							TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_689[0], Global_35, 4, 1, -1082130432 /* Float: -1f */, -1, 0);
							PED::SET_PED_KEEP_TASK(uLocal_689[0], true);
						}
						else if (__LIB_0__::func_264(&uLocal_750) > 5f && __LIB_3__::func_458(uLocal_689[0]) != 1)
						{
							__LIB_2__::func_461(0);
							__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("HOGTIE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_719, 512);
						}
					}
					__LIB_3__::func_608(uLocal_689[0]);
					TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_689[0], Global_35, 4, 257, -1082130432 /* Float: -1f */, -1, 0);
					__LIB_2__::func_480(&Local_814, 0, 1, 1, 0);
					PED::SET_PED_KEEP_TASK(uLocal_689[0], true);
				}
			}
			func_152();
			func_142();
			break;
	}
	return false;
}

var func_49(var uParam0)
{
	return STREAMING::_0x4EDDD9E9CA5AF985(uParam0);
}

void func_54()
{
	if (iLocal_772 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_271[3 /*12*/].f_8))
		{
			if (ENTITY::_0x5AFFA9DDC87846F8(Local_271[3 /*12*/].f_7))
			{
				TASK::_0x78B4567E18B54480(Local_271[3 /*12*/].f_8);
				GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_gen_shiny_bling", Local_271[3 /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 1f, true, false, false);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_271[3 /*12*/].f_8));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_271[4 /*12*/].f_8) && __LIB_0__::func_27(iLocal_718, 4))
		{
			if (ENTITY::_0x5AFFA9DDC87846F8(Local_271[4 /*12*/].f_7))
			{
				TASK::_0x78B4567E18B54480(Local_271[4 /*12*/].f_8);
				GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_gen_shiny_bling", Local_271[4 /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 1f, true, false, false);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_271[4 /*12*/].f_8));
			}
		}
		iLocal_772 = 1;
	}
}

void func_62()
{
	switch (__LIB_0__::func_12())
	{
		case 5:
			if (iLocal_583 == 0)
			{
				Local_356[0 /*32*/].f_1 = joaat("RE_DARKALLEYBUM_MALES_01");
				Local_356[0 /*32*/] = 4;
				Local_356[0 /*32*/].f_3 = -1905408471;
				StringCopy(&(Local_356[0 /*32*/].f_23), "0838_S_M_M_MarketVendor_01_WHITE_01", 64);
			}
			else if (iLocal_583 == 1)
			{
				Local_356[0 /*32*/].f_1 = joaat("RE_DARKALLEYBUM_MALES_01");
				Local_356[0 /*32*/] = 4;
				Local_356[0 /*32*/].f_3 = 884347675;
				StringCopy(&(Local_356[0 /*32*/].f_23), "0779_A_M_M_SDLaborers_02_BLACK_01", 64);
			}
			__LIB_3__::func_303(&(Local_356[0 /*32*/].f_22));
			break;
		case 38:
			if (iLocal_583 == 0)
			{
				Local_356[0 /*32*/].f_1 = joaat("RE_DARKALLEYBUM_MALES_01");
				Local_356[0 /*32*/] = 4;
				Local_356[0 /*32*/].f_3 = -1273957148;
				StringCopy(&(Local_356[0 /*32*/].f_23), "0914_A_M_M_Civ_Poor_White_AGGRESSIVE_14", 64);
			}
			else if (iLocal_583 == 1)
			{
				Local_356[0 /*32*/].f_1 = joaat("RE_DARKALLEYBUM_MALES_01");
				Local_356[0 /*32*/] = 4;
				Local_356[0 /*32*/].f_3 = -549369016;
				StringCopy(&(Local_356[0 /*32*/].f_23), "0045_A_M_M_BynRoughTravellers_01_BLACK_01", 64);
			}
			__LIB_3__::func_303(&(Local_356[0 /*32*/].f_22));
			break;
	}
}

void func_63()
{
	__LIB_3__::func_445(&Local_356);
}

void func_64()
{
	if (iLocal_583 == 0)
	{
		Local_264[0 /*2*/] = "script_re@dark_alley_bum@desp";
		Local_264[0 /*2*/].f_1 = "breakout_bum";
		Local_264[1 /*2*/] = "script_re@dark_alley_bum@desp";
		Local_264[1 /*2*/].f_1 = "breakout_hat";
		Local_264[2 /*2*/] = "script_re@dark_alley_bum@desp";
		Local_264[2 /*2*/].f_1 = "idle_bum";
	}
	else if (iLocal_583 == 1)
	{
		Local_264[0 /*2*/] = "script_re@dark_alley_bum@drunk";
		Local_264[0 /*2*/].f_1 = "breakout_bum";
		Local_264[1 /*2*/] = "script_re@dark_alley_bum@drunk";
		Local_264[1 /*2*/].f_1 = "breakout_hat";
		Local_264[2 /*2*/] = "script_re@dark_alley_bum@drunk";
		Local_264[2 /*2*/].f_1 = "idle_bum";
	}
	__LIB_3__::func_318(Local_264[0 /*2*/], &uLocal_239);
}

void func_65()
{
	Local_271[0 /*12*/].f_7 = joaat("P_CS_BEGGARHAT01X");
	Local_271[1 /*12*/].f_7 = joaat("S_INV_WHISKEY01X");
	Local_271[3 /*12*/].f_7 = joaat("P_COIN01X");
	Local_271[4 /*12*/].f_7 = joaat("P_COIN01X");
	if (iLocal_583 == 0)
	{
		Local_271[2 /*12*/].f_7 = joaat("S_INV_SNAKEOIL01X");
	}
	else if (iLocal_583 == 1)
	{
		Local_271[2 /*12*/].f_7 = joaat("S_INV_RUM01X");
	}
	STREAMING::REQUEST_PTFX_ASSET();
}

void func_80()
{
	switch (__LIB_0__::func_12())
	{
		case 5:
			func_206();
			break;
		case 38:
			func_207();
			break;
	}
}

void func_93(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, bool bParam10, int iParam11, int iParam12)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		if (bParam10)
		{
			__LIB_3__::func_581(iParam0, vParam1, vParam4, vParam7);
		}
		else
		{
			__LIB_1__::func_266(iParam0, vParam1, vParam4, vParam7);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*iParam0, iParam11, iParam12, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*iParam0, iParam11, iParam12, 0, -1, -1, 0);
	}
}

bool func_112(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iParam0, false))
		{
			if (ANIMSCENE::_0xA9016536015DE29D(iParam0, sParam1))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
				}
				else
				{
					return true;
				}
			}
		}
	}
	iLocal_774 = 0;
	return false;
}

int func_120()
{
	if (iLocal_776 == 1)
	{
		return 90;
	}
	return 74;
}

void func_121()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_27(iLocal_718, 1024))
	{
		return;
	}
	if (__LIB_2__::func_1(uLocal_689[0], 0, 1))
	{
		fVar0 = __LIB_0__::func_665(Global_35, uLocal_689[0], 1, 1);
		iLocal_701 = __LIB_3__::func_112(uLocal_689[0], Global_35, 0f);
		if (Local_389.f_46 == 0)
		{
			if (iLocal_771 == 0 || iLocal_779 == 1)
			{
				fVar1 = (Global_36.f_2 - (Local_389.f_51.f_2 + 1f));
				fVar1 = MISC::ABSF(fVar1);
				if ((((((fVar0 > fLocal_731 || PED::IS_PED_ON_MOUNT(Global_35)) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true)) || __LIB_3__::func_291(Global_35, 1)) || __LIB_3__::func_112(uLocal_689[0], Global_35, 1060437492 /* Float: 0.707f */) == 1) || fVar1 >= 1f) || !__LIB_1__::func_205(Global_35, iLocal_789, 1, 0))
				{
					if (iLocal_777 == 0)
					{
						__LIB_2__::func_411(&(Local_814[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_814[1 /*17*/]), 0, 0);
						__LIB_2__::func_451(&(Local_792[0 /*21*/]), 0);
						iLocal_777 = 1;
					}
				}
				else if (iLocal_777 == 1)
				{
					if (!__LIB_0__::func_27(iLocal_718, 268435456))
					{
						__LIB_2__::func_411(&(Local_814[0 /*17*/]), 1, 0);
					}
					__LIB_2__::func_411(&(Local_814[1 /*17*/]), 1, 0);
					__LIB_2__::func_451(&(Local_792[0 /*21*/]), 0);
					iLocal_777 = 0;
				}
			}
		}
	}
	if (Local_389.f_48 == 1)
	{
		if (__LIB_1__::func_313(&uLocal_744, 15f))
		{
			if (iLocal_773 == 0)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				iLocal_773 = 1;
			}
		}
		iVar2 = 0;
		iVar3 = -1;
		iVar3 = func_293(&(uLocal_689[0]), &(Local_792[0 /*21*/]), 10f, &Local_814, &(Local_389.f_192), 0f, 1, 0, 0, func_120(), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (iLocal_629 == 0)
		{
			if (iVar3 == 0)
			{
				iVar2 = 1;
				iLocal_771 = 1;
				__LIB_1__::func_683(&iLocal_718, 268435456);
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_584.f_2, true, false))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_584.f_2);
				}
				else if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_584.f_2, "PBL_MTH_NORMAL"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_584.f_2, "PBL_MTH_NORMAL");
				}
				__LIB_2__::func_411(&(Local_814[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_814[1 /*17*/]), 0, 0);
				__LIB_2__::func_451(&(Local_792[0 /*21*/]), 0);
				iLocal_628 = 0;
				iLocal_776 = 0;
			}
			else if (iVar3 == 1)
			{
				iVar2 = 1;
				iLocal_771 = 1;
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_584.f_1, true, false))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_584.f_1);
				}
				else if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_584.f_1, "PBL_MTH_NORMAL"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_584.f_1, "PBL_MTH_NORMAL");
				}
				iLocal_772 = 1;
				__LIB_1__::func_683(&iLocal_718, 536870912);
				__LIB_2__::func_411(&(Local_814[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_814[1 /*17*/]), 0, 0);
				iLocal_628 = 0;
				__LIB_2__::func_451(&(Local_792[0 /*21*/]), 0);
				iLocal_776 = 0;
			}
			if (iVar2 == 1)
			{
				if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
				{
					TASK::TASK_SET_CROUCH_MOVEMENT(Global_35, false, 0, false);
				}
				__LIB_3__::func_608(uLocal_689[0]);
				__LIB_0__::func_325(&(uLocal_691[0]));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
				iLocal_773 = 0;
				func_294();
				Local_389.f_44 = 1;
				__LIB_2__::func_115(85, 1, 0, 0, 6, 0, 0, 1);
				func_133(Local_584, 0);
				__LIB_2__::func_51(&(Local_389.f_5), 0);
				iLocal_593 = 8;
			}
			if (((__LIB_2__::func_227(-6f, 1, 0, 0) && __LIB_1__::func_313(&uLocal_756, 3f)) && __LIB_0__::func_27(iLocal_718, 268435456)) && __LIB_0__::func_665(Global_35, uLocal_689[0], 1, 1) <= 4f)
			{
			}
		}
	}
}

void func_122()
{
	int iVar0;
	if (Local_389.f_48 == 1)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 566901322))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_271[4 /*12*/].f_8, true);
			if (!__LIB_0__::func_27(iLocal_718, 4))
			{
				__LIB_2__::func_303(Global_35, uLocal_689[0], func_148("PLY_GIVE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_718, 4);
			}
		}
		if (__LIB_2__::func_1(uLocal_689[0], 0, 1))
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				if (__LIB_0__::func_665(Global_35, uLocal_689[0], 0, 1) < 3f && __LIB_3__::func_254(Local_389.f_51, Global_35))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DROP"), false);
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -968032324))
			{
				if (func_297())
				{
					if (iLocal_583 == 0)
					{
						if (__LIB_1__::func_898() == 0)
						{
							__LIB_2__::func_122(uLocal_689[0], "PLAYER_LOITERING", 291934926, Global_35, 1, &(Local_356[0 /*32*/].f_23), 1, 1);
						}
						else
						{
							__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("TOO_CLOSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else if (iLocal_583 == 1)
					{
						if (__LIB_1__::func_898() == 0)
						{
							__LIB_2__::func_122(uLocal_689[0], func_148("STARE"), 291934926, Global_35, 1, &(Local_356[0 /*32*/].f_23), 1, 1);
						}
						else
						{
							__LIB_2__::func_122(uLocal_689[0], func_148("STARE"), 291934926, Global_35, 1, &(Local_356[0 /*32*/].f_23), 2, 1);
						}
					}
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_718, 256))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 119677702))
			{
				iVar0 = 25;
				__LIB_2__::func_522(iVar0, 0, 0, 1, 1);
				__LIB_4__::func_467(12, 0, 0, "RE_HONOR_CHARITY", uLocal_689[0], 0, 1065353216 /* Float: 1f */, 0);
				__LIB_3__::func_609(13, 3);
				__LIB_1__::func_683(&iLocal_718, 256);
			}
		}
		if (((!__LIB_0__::func_27(iLocal_718, 512) && __LIB_0__::func_27(iLocal_718, 256)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584.f_2)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_584.f_2))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
			{
				func_303(iLocal_232, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				TASK::_0x67BFCED22909834D(Local_271[3 /*12*/].f_8);
				MAP::DISPLAY_RADAR(true);
				__LIB_1__::func_683(&iLocal_718, 512);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1037210774))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_271[2 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_271[2 /*12*/].f_8));
			}
		}
		if (!__LIB_0__::func_27(iLocal_718, 16384))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1745322408))
			{
				__LIB_3__::func_609(13, 1);
				__LIB_1__::func_683(&iLocal_718, 16384);
				__LIB_4__::func_467(3, joaat("HONOR_EVENT_THEFT"), 0, 0, uLocal_689[0], 0, 1065353216 /* Float: 1f */, 0);
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_703))
				{
					VOLUME::_DELETE_VOLUME(iLocal_703);
				}
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_704))
				{
					VOLUME::_DELETE_VOLUME(iLocal_704);
				}
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -425661854))
		{
			bLocal_627 = false;
			__LIB_1__::func_283(&uLocal_735, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_271[3 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_271[3 /*12*/].f_8));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_271[4 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_271[4 /*12*/].f_8));
			}
			if (__LIB_0__::func_27(iLocal_718, 256))
			{
				__LIB_2__::func_590(50, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
			else
			{
				__LIB_2__::func_590(25, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
			MAP::DISPLAY_RADAR(true);
			__LIB_2__::func_344(&(uLocal_689[0]));
			__LIB_2__::func_480(&Local_814, 0, 0, 1, 0);
			if (PATHFIND::_0xDE0EA444735C1368(iLocal_788))
			{
				PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_788);
				__LIB_0__::func_172(iLocal_703);
			}
		}
		if (__LIB_0__::func_75(&uLocal_735) && __LIB_1__::func_313(&uLocal_735, 0.5f))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			iLocal_773 = 1;
		}
	}
}

void func_123()
{
	int iVar0;
	if (Local_389.f_48 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_718, 536870912))
		{
			return;
		}
		if (iLocal_583 == 1)
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_271[1 /*12*/].f_8, uLocal_689[0], false);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uLocal_689[0], Local_271[1 /*12*/].f_8, false);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584.f_1))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_584.f_1, false))
			{
				fLocal_729 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_584.f_1);
				if ((iLocal_583 == 1 && __LIB_2__::func_1(uLocal_689[0], 0, 1)) && !__LIB_0__::func_27(iLocal_718, 8192))
				{
					if (fLocal_729 > 0.98f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_271[1 /*12*/].f_8))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_584.f_2, "BOTTLE", Local_271[1 /*12*/].f_8);
							__LIB_2__::func_919(Local_271[1 /*12*/].f_8, 1, 1);
							PHYSICS::ACTIVATE_PHYSICS(Local_271[1 /*12*/].f_8);
							if (ENTITY::_0x5AFFA9DDC87846F8(Local_271[1 /*12*/].f_7))
							{
								TASK::_0x78B4567E18B54480(Local_271[1 /*12*/].f_8);
							}
							__LIB_1__::func_683(&iLocal_718, 8192);
						}
					}
				}
			}
		}
		else
		{
			return;
		}
		if (__LIB_2__::func_1(uLocal_689[0], 0, 0))
		{
			iVar0 = 0;
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_689[0], Local_264[0 /*2*/], Local_264[0 /*2*/].f_1, 1))
			{
				iVar0 = 1;
			}
			if ((((fLocal_729 > 0.99f || !TASK::GET_IS_TASK_ACTIVE(uLocal_689[0], 3)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_584.f_1)) && iVar0 == 0) && __LIB_0__::func_27(iLocal_718, 16384))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584.f_1))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_584.f_1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584.f_2))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_584.f_2);
				}
				__LIB_3__::func_608(uLocal_689[0]);
				__LIB_2__::func_73(uLocal_689[0], &(uLocal_691[0]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_703))
				{
					VOLUME::_DELETE_VOLUME(iLocal_703);
				}
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_704))
				{
					VOLUME::_DELETE_VOLUME(iLocal_704);
				}
				PED::SET_PED_COMBAT_ABILITY(uLocal_689[0], 0);
				__LIB_2__::func_279(uLocal_689[0], 1);
				PED::SET_COMBAT_FLOAT(uLocal_689[0], 7, 0f);
				PED::SET_PED_USING_ACTION_MODE(uLocal_689[0], true, -1, 0);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
				TASK::TASK_STAND_STILL(0, 100);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 400, -1f, -1f, 0.52f);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
				__LIB_1__::func_474(uLocal_689[0], &iLocal_693, 0, 0, 1, 1);
				if (iLocal_773 == 0)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					iLocal_773 = 1;
				}
				MAP::DISPLAY_RADAR(true);
				__LIB_2__::func_480(&Local_814, 0, 1, 1, 0);
				__LIB_1__::func_683(&iLocal_718, 1024);
				iLocal_697 = 10;
			}
		}
	}
}

void func_124()
{
	if (Local_389.f_48 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_718, 4))
		{
			if ((iLocal_700 == 0 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -810980703)) || (iLocal_700 == 4 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -351422439)))
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_303(Global_35, uLocal_689[0], func_148("PLY_GIVE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_718, 4);
			}
		}
		if (!__LIB_0__::func_27(iLocal_718, 8))
		{
			if (((iLocal_700 == 0 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -1534042890)) || (iLocal_700 == 4 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -201751642))) && func_297())
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("THANKS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_718, 8);
			}
		}
		if (!__LIB_0__::func_27(iLocal_718, 16))
		{
			if (((iLocal_700 == 0 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -1992440724)) || (iLocal_700 == 4 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -880545320))) && func_297())
			{
				__LIB_1__::func_683(&iLocal_718, 16);
			}
		}
		if (!__LIB_0__::func_27(iLocal_718, 32))
		{
			if ((iLocal_700 == 0 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -388538119)) || (iLocal_700 == 4 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 1159035066)))
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_303(Global_35, uLocal_689[0], func_148("PLY_THANKS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_718, 32);
			}
		}
		if (!__LIB_0__::func_27(iLocal_718, 64))
		{
			if ((iLocal_700 == 0 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -949284496)) || (iLocal_700 == 4 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -1514322287)))
			{
				if (iLocal_700 == 0 && iLocal_583 == 1)
				{
					__LIB_2__::func_461(0);
					if (func_307())
					{
						__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("POKER_INFO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_700 == 0)
					{
						__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("JUDGE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				if (iLocal_700 == 0 && iLocal_583 == 0)
				{
					__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("JUDGE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_683(&iLocal_718, 64);
			}
		}
		if (!__LIB_0__::func_27(iLocal_718, 128))
		{
			if (((iLocal_700 == 0 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -1009643791)) || (iLocal_700 == 4 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 835310037))) && !__LIB_3__::func_291(Global_35, 1))
			{
				if (iLocal_700 == 0 && iLocal_583 == 1)
				{
					__LIB_2__::func_461(0);
					if (func_307())
					{
						__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("POKER_LAST"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_700 == 0)
					{
						__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("REGRET"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (iLocal_700 == 0)
				{
					__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("REGRET"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_2__::func_462(&uLocal_756, -1f, 0);
				__LIB_1__::func_683(&iLocal_718, 128);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 1963997353))
		{
			if (iLocal_583 == 0)
			{
				iLocal_777 = 1;
				iLocal_779 = 1;
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 1271397199) && iLocal_700 != 0)
		{
			iLocal_777 = 1;
			iLocal_779 = 1;
			__LIB_1__::func_283(&uLocal_765, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 1522384656) && iLocal_700 == 0)
		{
			iLocal_777 = 1;
			iLocal_779 = 1;
			__LIB_1__::func_283(&uLocal_765, 0);
		}
		if (!__LIB_0__::func_27(iLocal_718, 4096))
		{
			if (((iLocal_700 == 0 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -287137215)) || (iLocal_700 == 4 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -234871529))) && __LIB_0__::func_665(Global_35, uLocal_689[0], 1, 1) < 12f)
			{
				if (func_307())
				{
					__LIB_17__::func_835(43);
					__LIB_1__::func_683(&iLocal_718, 4096);
				}
			}
		}
		if (((((__LIB_0__::func_27(iLocal_718, 4096) && !__LIB_0__::func_27(iLocal_719, 262144)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_689[0])) && Local_389.f_46 == 0) && !__LIB_0__::func_27(iLocal_718, 536870912))
		{
			if (__LIB_0__::func_665(Global_35, uLocal_689[0], 1, 1) < 12f)
			{
				__LIB_2__::func_303(Global_35, uLocal_689[0], func_148("PLY_POKER_THANKS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			__LIB_1__::func_683(&iLocal_719, 262144);
		}
		if ((((__LIB_0__::func_264(&uLocal_765) > 10f && Local_389.f_46 == 0) && !__LIB_0__::func_27(iLocal_718, 536870912)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_689[0]))
		{
			__LIB_0__::func_37(&uLocal_765);
			__LIB_1__::func_683(&iLocal_719, 524288);
		}
	}
}

bool func_125()
{
	vector3 vVar0;
	if (Local_389.f_48 == 1)
	{
		if (!__LIB_2__::func_1(uLocal_689[0], 0, 0))
		{
			if (PED::GET_PED_CONFIG_FLAG(uLocal_689[0], 11, true))
			{
				iLocal_775 = 1;
				if (__LIB_0__::func_665(uLocal_689[0], Global_35, 1, 0) > 25f && ENTITY::IS_ENTITY_OCCLUDED(uLocal_689[0]))
				{
					PED::_0x39A2FC5AF55A52B1(uLocal_689[0], -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_689[0]));
					return true;
				}
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_689[0], 6, false);
				iLocal_781 = 1;
			}
			if (!__LIB_0__::func_75(&uLocal_759))
			{
				__LIB_1__::func_283(&uLocal_759, 0);
			}
		}
		if (__LIB_0__::func_75(&uLocal_759))
		{
			if (iLocal_781 == 1)
			{
				return true;
			}
		}
		if (iLocal_775 == 1)
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(uLocal_689[0], false, false) };
			EVENT::_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE_IN_AREA(vVar0, 2f, joaat("EVENT_SHOCKING_INJURED_PED"), false);
		}
	}
	return false;
}

void func_129()
{
	var uVar0;
	if (__LIB_0__::func_94(uLocal_689[0], Global_36, 0) < 30f)
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_689[0]) && !__LIB_0__::func_75(&uLocal_597))
		{
			__LIB_1__::func_148(&uLocal_597);
			return;
		}
		if ((!__LIB_0__::func_75(&uLocal_753) && !__LIB_0__::func_75(&uLocal_756)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_689[0]))
		{
			if (__LIB_1__::func_285(&uLocal_597, fLocal_231))
			{
				if (__LIB_2__::func_1(uLocal_689[0], 0, 1))
				{
					__LIB_0__::func_37(&uLocal_597);
					__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("RAMBLE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(1891783641, uLocal_689[0], 1);
					EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), uLocal_689[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
					fLocal_231 = 10f;
				}
				if (PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(uLocal_689[0], true, false), 15f, 1, 0, &uVar0, 0, 1, 1, -1))
				{
					Local_602.f_3 = uVar0;
				}
			}
		}
	}
}

void func_130()
{
	if (Local_389.f_48 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_718, 67108864))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584.f_1))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_584.f_1, "PBL_MTH_NORMAL");
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_584.f_1, "player", &Local_643, false, 0, 2))
				{
					if (!__LIB_0__::func_86(Local_643) && !__LIB_0__::func_86(Local_643.f_3))
					{
						__LIB_1__::func_683(&iLocal_718, 67108864);
					}
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_718, 134217728))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584.f_2))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_584.f_2, "PBL_MTH_NORMAL");
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_584.f_2, "player", &Local_631, false, 0, 2))
				{
					if (!__LIB_0__::func_86(Local_631) && !__LIB_0__::func_86(Local_631.f_3))
					{
						__LIB_1__::func_683(&iLocal_718, 134217728);
					}
				}
			}
		}
	}
}

int func_131(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	float fVar0;
	if (__LIB_0__::func_27(iLocal_718, 1024))
	{
		return 0;
	}
	if (Local_389.f_48 == 1)
	{
		fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0);
		switch (iLocal_592)
		{
			case 0:
				if (iLocal_720 > 3)
				{
					iLocal_720 = 0;
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
					{
						if (ANIMSCENE::_0xA9016536015DE29D(iParam0, sParam1))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
							return 0;
						}
						else
						{
							return 0;
						}
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam2))
					{
						if (ANIMSCENE::_0xA9016536015DE29D(iParam0, sParam2))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam2);
							return 0;
						}
						else
						{
							return 0;
						}
					}
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0, sParam4, false, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0, sParam5, false, false);
					iLocal_592 = 1;
				}
				else
				{
					iLocal_720++;
				}
				break;
			case 1:
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
				{
					if (ANIMSCENE::_0xA9016536015DE29D(iParam0, sParam1))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
						return 0;
					}
					else
					{
						return 0;
					}
				}
				else if (!ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
					__LIB_1__::func_148(&uLocal_594);
					fLocal_600 = MISC::GET_RANDOM_FLOAT_IN_RANGE(4.5f, 9f);
					iLocal_592 = 2;
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			case 2:
				if (__LIB_1__::func_313(&uLocal_594, fLocal_600))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0, sParam4, true, false);
					iLocal_592 = 3;
				}
				break;
			case 3:
				if (ANIMSCENE::_0x8D81E7824B7753F7(iParam0, sParam3, 1) || fVar0 > 0.975f)
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0, sParam4, false, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0, sParam5, false, false);
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam2))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam2, true);
						iLocal_592 = 0;
					}
					else if (ANIMSCENE::_0xA9016536015DE29D(iParam0, sParam2))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam2);
						return 0;
					}
					else
					{
						return 0;
					}
					return 1;
				}
				break;
		}
	}
	return 0;
}

void func_133(int iParam0, bool bParam1)
{
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0, "ACTION_1", bParam1, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0, "ACTION_2", bParam1, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0, "ACTION_3", bParam1, false);
}

void func_135()
{
	if (((iLocal_771 == 1 || __LIB_0__::func_75(&uLocal_753)) || __LIB_0__::func_75(&uLocal_756)) || (__LIB_0__::func_27(iLocal_718, 32768) && __LIB_0__::func_264(&uLocal_762) < 10f))
	{
		return;
	}
	switch (iLocal_593)
	{
		case 0:
			if (((__LIB_0__::func_27(iLocal_719, 1) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 663533857)) && __LIB_0__::func_665(uLocal_689[0], Global_35, 1, 1) < fLocal_730) && __LIB_0__::func_264(&uLocal_741) > fLocal_728)
			{
				if (func_112(Local_584, "PBL_WHATEVER"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_584, "PBL_WHATEVER", true);
					func_133(Local_584, 1);
					if (iLocal_583 == 0)
					{
						fLocal_728 = 2f;
					}
					else if (iLocal_583 == 1)
					{
						fLocal_728 = 6f;
					}
					iLocal_593 = 1;
				}
			}
			break;
		case 1:
			if (((__LIB_0__::func_27(iLocal_719, 4) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 663533857)) && __LIB_0__::func_665(uLocal_689[0], Global_35, 1, 1) < fLocal_730) && __LIB_0__::func_264(&uLocal_741) > fLocal_728)
			{
				if (func_112(Local_584, "PBL_COIN_OR_TWO"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_584, "PBL_COIN_OR_TWO", true);
					func_133(Local_584, 1);
					if (iLocal_583 == 0)
					{
						fLocal_728 = 2f;
					}
					else if (iLocal_583 == 1)
					{
						fLocal_728 = 3f;
					}
					iLocal_593 = 2;
				}
			}
			break;
		case 2:
			if (((__LIB_0__::func_27(iLocal_719, 2) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 663533857)) && __LIB_0__::func_665(uLocal_689[0], Global_35, 1, 1) < fLocal_730) && __LIB_0__::func_264(&uLocal_741) > fLocal_728)
			{
				if (func_112(Local_584, "PBL_ANYTHING"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_584, "PBL_ANYTHING", true);
					func_133(Local_584, 1);
					if (iLocal_583 == 0)
					{
						fLocal_728 = 2f;
					}
					else if (iLocal_583 == 1)
					{
						fLocal_728 = 6f;
					}
					iLocal_593 = 3;
				}
			}
			break;
		case 3:
			if (((__LIB_0__::func_27(iLocal_719, 8) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 663533857)) && __LIB_0__::func_665(uLocal_689[0], Global_35, 1, 1) < fLocal_730) && __LIB_0__::func_264(&uLocal_741) > fLocal_728)
			{
				if (func_112(Local_584, "PBL_PLEASE"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_584, "PBL_PLEASE", true);
					func_133(Local_584, 1);
					if (iLocal_583 == 0)
					{
						fLocal_728 = 4f;
					}
					else if (iLocal_583 == 1)
					{
						fLocal_728 = 2f;
					}
					iLocal_593 = 4;
				}
			}
			break;
		case 4:
			if ((__LIB_0__::func_27(iLocal_719, 16) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 663533857)) && __LIB_0__::func_665(uLocal_689[0], Global_35, 1, 1) < fLocal_730)
			{
				iLocal_593 = 5;
			}
			break;
		case 5:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 663533857))
			{
				if (!__LIB_0__::func_75(&uLocal_738))
				{
					__LIB_1__::func_283(&uLocal_738, 0);
				}
				else if (__LIB_0__::func_264(&uLocal_738) > 6f && __LIB_0__::func_665(uLocal_689[0], Global_35, 1, 1) < fLocal_730)
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("LOITER_BEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(249295937, uLocal_689[0], 1);
					EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), uLocal_689[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
					__LIB_1__::func_683(&iLocal_719, 32);
					__LIB_1__::func_148(&uLocal_738);
					iLocal_593 = 6;
				}
			}
			break;
		case 6:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 663533857) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_689[0]))
			{
				if (__LIB_0__::func_264(&uLocal_738) > 9f)
				{
					if (__LIB_0__::func_665(uLocal_689[0], Global_35, 1, 1) < fLocal_730)
					{
						if (!__LIB_0__::func_27(iLocal_719, 128) && __LIB_0__::func_27(iLocal_719, 64))
						{
							__LIB_2__::func_461(0);
							__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("GIVE_UP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), uLocal_689[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
							__LIB_1__::func_683(&iLocal_719, 128);
						}
						if (!__LIB_0__::func_27(iLocal_719, 64))
						{
							__LIB_2__::func_461(0);
							__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("FINAL_BEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), uLocal_689[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
							__LIB_1__::func_683(&iLocal_719, 64);
							__LIB_1__::func_148(&uLocal_738);
						}
					}
					else if (__LIB_0__::func_27(iLocal_719, 128))
					{
						if (func_112(Local_584, "PBL_SPARE_CHANGE") && __LIB_2__::func_227(0, 1, 0, 0))
						{
							if (!__LIB_0__::func_27(iLocal_719, 256))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_584, "PBL_SPARE_CHANGE", true);
							}
							iLocal_593 = 7;
						}
					}
				}
			}
			break;
		case 7:
			if (__LIB_0__::func_27(iLocal_719, 256) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 663533857))
			{
				iLocal_593 = 8;
			}
			break;
		case 8:
			if (iLocal_583 == 1)
			{
				func_141();
			}
			break;
	}
}

void func_136()
{
	if (Local_389.f_48 == 1)
	{
		if ((__LIB_0__::func_75(&uLocal_753) || __LIB_0__::func_75(&uLocal_756)) || !__LIB_2__::func_1(uLocal_689[0], 0, 1))
		{
			return;
		}
		if (!__LIB_0__::func_27(iLocal_718, 1048576))
		{
			if (__LIB_2__::func_118(uLocal_689[0], 1, 1) < 6f)
			{
				__LIB_1__::func_683(&iLocal_718, 1048576);
			}
		}
		else if (!__LIB_0__::func_27(iLocal_718, 2097152) && !__LIB_0__::func_27(iLocal_718, 256))
		{
			if (__LIB_2__::func_118(uLocal_689[0], 1, 1) > fLocal_730 && !__LIB_0__::func_27(iLocal_718, 2))
			{
				if (!__LIB_0__::func_27(iLocal_719, 256))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 663533857) && func_112(Local_584, "PBL_SPARE_CHANGE"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_584, "PBL_SPARE_CHANGE", true);
					}
					else
					{
						return;
					}
				}
				__LIB_1__::func_683(&iLocal_718, 2097152);
			}
		}
	}
}

void func_137()
{
	if (__LIB_2__::func_1(uLocal_689[0], 0, 1))
	{
		if (!__LIB_0__::func_27(iLocal_719, 1))
		{
			if ((iLocal_700 == 0 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -843416894)) || (iLocal_700 == 4 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 15321140)))
			{
				if (func_297())
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("CALLOUT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_2__::func_315(1891783641, uLocal_689[0], 1);
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), uLocal_689[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
				__LIB_1__::func_683(&iLocal_719, 1);
				func_133(Local_584, 0);
				__LIB_1__::func_283(&uLocal_741, 0);
				__LIB_1__::func_283(&uLocal_747, 0);
			}
		}
		if (!__LIB_0__::func_27(iLocal_719, 2))
		{
			if ((iLocal_700 == 0 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -335040700)) || (iLocal_700 == 4 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 2009822318)))
			{
				if (func_297())
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("COIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_2__::func_315(249295937, uLocal_689[0], 1);
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), uLocal_689[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
				__LIB_1__::func_683(&iLocal_719, 2);
				func_133(Local_584, 0);
			}
		}
		if (!__LIB_0__::func_27(iLocal_719, 8))
		{
			if ((iLocal_700 == 0 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -1142896989)) || (iLocal_700 == 4 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -1139386619)))
			{
				if (func_297())
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("ANYTHING"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_2__::func_315(249295937, uLocal_689[0], 1);
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), uLocal_689[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
				__LIB_1__::func_683(&iLocal_719, 8);
				func_133(Local_584, 0);
			}
		}
		if (!__LIB_0__::func_27(iLocal_719, 16))
		{
			if ((iLocal_700 == 0 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -2101883506)) || (iLocal_700 == 4 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 1529335315)))
			{
				if (func_297())
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("PLEASE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_2__::func_315(249295937, uLocal_689[0], 1);
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), uLocal_689[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
				__LIB_1__::func_683(&iLocal_719, 16);
				func_133(Local_584, 0);
			}
		}
		if (!__LIB_0__::func_27(iLocal_719, 256))
		{
			if ((iLocal_700 == 0 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -1682902257)) || (iLocal_700 == 4 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -1422641698)))
			{
				if (func_297())
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("LUCK_RSP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_2__::func_315(249295937, uLocal_689[0], 1);
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), uLocal_689[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
				__LIB_1__::func_683(&iLocal_719, 256);
				func_133(Local_584, 0);
			}
		}
		if (!__LIB_0__::func_27(iLocal_719, 4))
		{
			if ((iLocal_700 == 0 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -168145339)) || (iLocal_700 == 4 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -94050732)))
			{
				if (func_297())
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("SPARE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_2__::func_315(1891783641, uLocal_689[0], 1);
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), uLocal_689[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
				__LIB_1__::func_683(&iLocal_719, 4);
				func_133(Local_584, 0);
			}
		}
		if (Local_389.f_48 == 1)
		{
			if (((iLocal_700 == 0 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 1678776164)) || (iLocal_700 == 4 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -801582249))) && func_297())
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("STEAL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
		if (__LIB_1__::func_313(&uLocal_747, 3f))
		{
			if (!__LIB_0__::func_27(iLocal_718, 1))
			{
				__LIB_1__::func_683(&iLocal_718, 1);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], -907806954) && __LIB_0__::func_75(&uLocal_741))
		{
			if (!__LIB_0__::func_27(iLocal_718, 1))
			{
				__LIB_1__::func_683(&iLocal_718, 1);
			}
			__LIB_1__::func_148(&uLocal_741);
		}
	}
}

bool func_138()
{
	if (!__LIB_2__::func_1(uLocal_689[0], 0, 1))
	{
		return false;
	}
	if (__LIB_2__::func_118(uLocal_689[0], 1, 1) > 7f)
	{
		return false;
	}
	if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) >= 1.5f)
	{
		return false;
	}
	iLocal_701 = __LIB_3__::func_112(uLocal_689[0], Global_35, 0f);
	if (iLocal_701 == 1)
	{
		return false;
	}
	return true;
}

void func_140()
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	float fVar7;
	if (((__LIB_0__::func_27(iLocal_718, 1073741824 /* Float: 2f */) && !__LIB_0__::func_27(iLocal_718, -2147483648)) && !__LIB_0__::func_163(Global_35, -875674219)) && !__LIB_0__::func_27(iLocal_718, 1024))
	{
		if (PATHFIND::_0xDE0EA444735C1368(iLocal_788))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_788);
			__LIB_0__::func_172(iLocal_703);
		}
		if (PED::_IS_PED_CARRYING(Global_35))
		{
			if (!__LIB_0__::func_163(Global_35, 242628503))
			{
				vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, -5f, 0f) };
				TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
				if (__LIB_3__::func_254(Local_389.f_51, Global_35) && __LIB_0__::func_665(Global_35, uLocal_689[0], 0, 1) < 4.5f)
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, 0);
				}
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), Global_36, 1f, 1);
				__LIB_1__::func_474(Global_35, &iLocal_693, 0, 0, 1, 1);
			}
			return;
		}
		iVar3 = 0;
		if (iLocal_628 == 0)
		{
			iLocal_723 = 15;
			vLocal_714 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
			iLocal_724 = 0;
		}
		if (iLocal_785 == 1)
		{
			if ((iLocal_628 == 2 && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_584.f_1)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_584.f_2))
			{
				if (iLocal_723 <= 0)
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
					fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar4, vLocal_714, true);
					if (fVar7 < 0.2f)
					{
						iLocal_724++;
					}
					vLocal_714 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
					iLocal_723 = 15;
					if (iLocal_724 >= 3)
					{
						iLocal_724 = 0;
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						iLocal_628 = 0;
						iLocal_725++;
					}
					if (iLocal_725 >= 3)
					{
						__LIB_1__::func_681(&iLocal_718, 1073741824 /* Float: 2f */);
						__LIB_1__::func_681(&iLocal_718, -2147483648);
						if (__LIB_0__::func_27(iLocal_718, 536870912))
						{
							__LIB_1__::func_681(&iLocal_718, 536870912);
						}
						else if (__LIB_0__::func_27(iLocal_718, 268435456))
						{
							__LIB_1__::func_681(&iLocal_718, 268435456);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						MAP::DISPLAY_RADAR(true);
						iLocal_725 = 0;
						iLocal_779 = 1;
						iLocal_777 = 1;
						return;
					}
				}
				else
				{
					iLocal_723 = (iLocal_723 - 1);
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_718, 536870912))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584.f_1))
			{
				Local_584.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_584.f_5, 0, "PBL_MTH_NORMAL", false, true);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_584.f_1, Local_389.f_51, 0f, 0f, Local_389.f_51.f_3, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_1, "PED_BUM", uLocal_689[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_1, "HAT", Local_271[0 /*12*/].f_8, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_1, "COIN01", Local_271[3 /*12*/].f_8, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_1, "COIN02", Local_271[4 /*12*/].f_8, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_1, "player", Global_35, 0);
				if (iLocal_583 == 1)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_1, "BOTTLE", Local_271[1 /*12*/].f_8, 0);
				}
				return;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_584.f_1, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_584.f_1);
			}
			else if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_584.f_1, "PBL_MTH_NORMAL"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_584.f_1, "PBL_MTH_NORMAL");
			}
			else if (__LIB_3__::func_678(Global_35, Local_584.f_1, "player", "PBL_MTH_NORMAL", &iLocal_628, 1065353216 /* Float: 1f */, 1, 1, 1))
			{
				iVar3 = 1;
			}
		}
		else
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584.f_2))
			{
				Local_584.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_584.f_6, 0, "PBL_MTH_NORMAL", false, true);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_584.f_2, Local_389.f_51, 0f, 0f, Local_389.f_51.f_3, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "PED_BUM", uLocal_689[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "HAT", Local_271[0 /*12*/].f_8, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "Reward", Local_271[2 /*12*/].f_8, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "player", Global_35, 0);
				if (iLocal_583 == 1)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "BOTTLE", Local_271[1 /*12*/].f_8, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "COIN_GIVE_2", Local_271[4 /*12*/].f_8, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "COIN_GIVE_1", Local_271[3 /*12*/].f_8, 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "COIN_GIVE_2", Local_271[4 /*12*/].f_8, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "COIN01", Local_271[3 /*12*/].f_8, 0);
				}
				return;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_584.f_2, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_584.f_2);
			}
			else if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_584.f_2, "PBL_MTH_NORMAL"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_584.f_2, "PBL_MTH_NORMAL");
			}
			else if (__LIB_3__::func_678(Global_35, Local_584.f_2, "player", "PBL_MTH_NORMAL", &iLocal_628, 1065353216 /* Float: 1f */, 1, 1, 1))
			{
				iVar3 = 1;
			}
		}
		if (!__LIB_0__::func_27(iLocal_718, 16777216))
		{
			if (__LIB_0__::func_27(iLocal_718, 536870912) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_584.f_1))
			{
				__LIB_2__::func_303(Global_35, uLocal_689[0], func_148("PLY_STEAL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_718, 16777216);
			}
		}
		if (!__LIB_0__::func_27(iLocal_718, 4))
		{
			if (!__LIB_0__::func_27(iLocal_718, 536870912) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_584.f_2))
			{
				__LIB_2__::func_303(Global_35, uLocal_689[0], func_148("PLY_GIVE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_718, 4);
			}
		}
		if (iVar3 == 1 && ((__LIB_0__::func_27(iLocal_718, 536870912) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_584.f_1, false)) || (!__LIB_0__::func_27(iLocal_718, 536870912) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_584.f_2, false))))
		{
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), uLocal_689[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
			__LIB_1__::func_283(&uLocal_744, 0);
			__LIB_2__::func_51(&(Local_389.f_5), 1);
			iLocal_783 = 1;
			if (__LIB_0__::func_27(iLocal_718, 536870912))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584.f_1))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_584.f_1, true, false))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_1, "PED_BUM", uLocal_689[0], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_1, "HAT", Local_271[0 /*12*/].f_8, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_1, "player", Global_35, 0);
						if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_584.f_1, false))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_584.f_1);
						}
						__LIB_1__::func_683(&iLocal_718, -2147483648);
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_788))
						{
							if (PATHFIND::_0x19C7567D2F2287D6(iLocal_788, 7))
							{
								if (iLocal_583 == 0)
								{
									iLocal_703 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), Local_389.f_51, 0f, 0f, Local_356[0 /*32*/].f_9, vLocal_705);
								}
								else if (iLocal_583 == 1)
								{
									iLocal_703 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), Local_389.f_51, 0f, 0f, Local_356[0 /*32*/].f_9, vLocal_708);
								}
								if (VOLUME::_DOES_VOLUME_EXIST(iLocal_703))
								{
									PED::_0x7C00CFC48A782DC0(iLocal_703, uLocal_689[0], 0f, 0f, -0.1f, 0f, 0f, 0f, 2, 1);
								}
							}
						}
					}
					else
					{
						ANIMSCENE::LOAD_ANIM_SCENE(Local_584.f_1);
					}
				}
			}
			else if (__LIB_0__::func_27(iLocal_718, 268435456))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_584.f_2))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_584.f_2, true, false))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "PED_BUM", uLocal_689[0], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "HAT", Local_271[0 /*12*/].f_8, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_584.f_2, "player", Global_35, 0);
						if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_584.f_2, false))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_584.f_2);
						}
						__LIB_1__::func_683(&iLocal_718, -2147483648);
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_788))
						{
							if (PATHFIND::_0x19C7567D2F2287D6(iLocal_788, 7))
							{
								if (iLocal_583 == 0)
								{
									iLocal_703 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), Local_389.f_51, 0f, 0f, Local_356[0 /*32*/].f_9, vLocal_705);
								}
								else if (iLocal_583 == 1)
								{
									iLocal_703 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), Local_389.f_51, 0f, 0f, Local_356[0 /*32*/].f_9, vLocal_708);
								}
								if (VOLUME::_DOES_VOLUME_EXIST(iLocal_703))
								{
									PED::_0x7C00CFC48A782DC0(iLocal_703, uLocal_689[0], 0f, 0f, -0.1f, 0f, 0f, 0f, 2, 1);
								}
							}
						}
						__LIB_2__::func_411(&(Local_814[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_814[1 /*17*/]), 0, 0);
					}
					else
					{
						ANIMSCENE::LOAD_ANIM_SCENE(Local_584.f_2);
					}
				}
			}
		}
		return;
	}
}

void func_141()
{
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uLocal_689[0], 0, 1);
	if ((Local_389.f_46 == 0 && !__LIB_0__::func_27(iLocal_718, 536870912)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_689[0]))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 663533857))
		{
			switch (iLocal_722)
			{
				case 0:
					__LIB_2__::func_303(uLocal_689[0], uLocal_689[0], func_148("POST_IDLE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					break;
				case 1:
					__LIB_2__::func_303(uLocal_689[0], uLocal_689[0], func_148("POST_IDLE_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					break;
				case 2:
					__LIB_2__::func_303(uLocal_689[0], uLocal_689[0], func_148("POST_IDLE_C"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					break;
				case 3:
					__LIB_2__::func_303(uLocal_689[0], uLocal_689[0], func_148("POST_IDLE_D"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					break;
			}
			iLocal_722++;
		}
	}
}

void func_142()
{
	if ((__LIB_2__::func_1(uLocal_689[0], 0, 1) && PED::IS_PED_FLEEING(uLocal_689[0])) && !__LIB_0__::func_27(iLocal_718, 4194304))
	{
		if (iLocal_583 == 1)
		{
			PED::_0x89F5E7ADECCCB49C(uLocal_689[0], "very_drunk");
		}
		else
		{
			PED::_0x89F5E7ADECCCB49C(uLocal_689[0], "scared");
		}
		__LIB_1__::func_683(&iLocal_718, 4194304);
	}
	if (iLocal_583 != 1 || __LIB_0__::func_27(iLocal_718, 8192))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_271[1 /*12*/].f_8))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_584, false))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_584, "BOTTLE", Local_271[1 /*12*/].f_8);
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_584.f_1, false))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_584.f_1, "BOTTLE", Local_271[1 /*12*/].f_8);
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_584.f_2, false))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_584.f_2, "BOTTLE", Local_271[1 /*12*/].f_8);
		}
		__LIB_2__::func_919(Local_271[1 /*12*/].f_8, 1, 1);
		if (ENTITY::_0x5AFFA9DDC87846F8(Local_271[1 /*12*/].f_7))
		{
			TASK::_0x78B4567E18B54480(Local_271[1 /*12*/].f_8);
		}
		PHYSICS::ACTIVATE_PHYSICS(Local_271[1 /*12*/].f_8);
		ENTITY::APPLY_FORCE_TO_ENTITY(Local_271[1 /*12*/].f_8, 1, 0f, 0.2f, 0f, 0f, 0f, 0f, 1, true, true, true, false, true);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_271[1 /*12*/].f_8, true);
		__LIB_1__::func_683(&iLocal_718, 8192);
	}
}

void func_144()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_584, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_584, "HAT", Local_271[0 /*12*/].f_8);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_584.f_1, "COIN01", Local_271[3 /*12*/].f_8);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_584.f_1, "COIN02", Local_271[4 /*12*/].f_8);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_584.f_1, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_584.f_1, "HAT", Local_271[0 /*12*/].f_8);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_584.f_1, "COIN01", Local_271[3 /*12*/].f_8);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_584.f_2, "COIN02", Local_271[4 /*12*/].f_8);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_584.f_2, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_584.f_2, "HAT", Local_271[0 /*12*/].f_8);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_584.f_1, "COIN01", Local_271[3 /*12*/].f_8);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_584.f_1, "COIN_GIVE_1", Local_271[3 /*12*/].f_8);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_584.f_2, "COIN_GIVE_2", Local_271[4 /*12*/].f_8);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_271[0 /*12*/].f_8))
	{
		PHYSICS::ACTIVATE_PHYSICS(Local_271[0 /*12*/].f_8);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_271[3 /*12*/].f_8))
	{
		PHYSICS::ACTIVATE_PHYSICS(Local_271[3 /*12*/].f_8);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_271[4 /*12*/].f_8))
	{
		PHYSICS::ACTIVATE_PHYSICS(Local_271[4 /*12*/].f_8);
	}
	func_142();
}

char* func_148(char* sParam0)
{
	int iVar0;
	if (iLocal_583 == 0)
	{
		iVar0 = 1;
	}
	else if (iLocal_583 == 1)
	{
		iVar0 = 2;
	}
	switch (__LIB_1__::func_898())
	{
		case 0:
			return __LIB_3__::func_394("DAB", "NBX", sParam0, iVar0);
		case 4:
			return __LIB_3__::func_394("DAB", "BLW", sParam0, iVar0);
		default:
			break;
	}
	return "INVALID";
}

void func_152()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	if (__LIB_2__::func_1(uLocal_689[0], 0, 0) && !__LIB_0__::func_27(iLocal_718, 65536))
	{
		if ((iLocal_583 == 0 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 369679343)) || (iLocal_583 == 1 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 1198751374)))
		{
			func_144();
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_689[0], Global_35, 4, 1, -1082130432 /* Float: -1f */, -1, 0);
			PED::SET_PED_KEEP_TASK(uLocal_689[0], true);
			__LIB_1__::func_683(&iLocal_718, 65536);
			__LIB_2__::func_480(&Local_814, 0, 1, 1, 0);
		}
		else if (!__LIB_0__::func_163(uLocal_689[0], 1435919172))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_689[0], Global_35, 4, 257, -1082130432 /* Float: -1f */, -1, 0);
			PED::SET_PED_KEEP_TASK(uLocal_689[0], true);
			__LIB_1__::func_683(&iLocal_718, 65536);
			__LIB_2__::func_480(&Local_814, 0, 1, 1, 0);
		}
		if (PED::_IS_PED_HOGTIED(uLocal_689[0]) || (PED::_IS_PED_LASSOED(uLocal_689[0]) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_689[0])))
		{
			if (!__LIB_0__::func_27(iLocal_719, 512))
			{
				if (!__LIB_0__::func_75(&uLocal_750))
				{
					__LIB_1__::func_283(&uLocal_750, 0);
				}
				else if (__LIB_0__::func_264(&uLocal_750) > 5f)
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("HOGTIE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_719, 512);
				}
			}
			__LIB_3__::func_608(uLocal_689[0]);
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_689[0], Global_35, 4, 257, -1082130432 /* Float: -1f */, -1, 0);
			PED::SET_PED_KEEP_TASK(uLocal_689[0], true);
			__LIB_2__::func_480(&Local_814, 0, 1, 1, 0);
			return;
		}
	}
	if ((__LIB_0__::func_27(iLocal_718, 65536) || bLocal_627) || !__LIB_2__::func_1(uLocal_689[0], 0, 1))
	{
		return;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_689[0], 780511057, true) == 1 || ((__LIB_0__::func_27(iLocal_718, 1024) && __LIB_0__::func_163(uLocal_689[0], 242628503)) && TASK::GET_SEQUENCE_PROGRESS(uLocal_689[0]) >= 2))
	{
		iVar1 = 0;
		fVar2 = __LIB_0__::func_665(Global_35, uLocal_689[0], 1, 1);
		if (!__LIB_0__::func_75(&uLocal_768))
		{
			__LIB_1__::func_283(&uLocal_768, 0);
		}
		fVar3 = __LIB_0__::func_264(&uLocal_768);
		if ((fVar2 > 20f && fVar3 > 15f) || fVar3 > 30f)
		{
			iVar1 = 1;
		}
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false) || iVar1 == 1)
		{
			if (((iVar0 != joaat("WEAPON_UNARMED") && iVar0 != joaat("WEAPON_LASSO")) && __LIB_2__::func_401(uLocal_689[0], 1, 1, 0, 0, 0)) || iVar1 == 1)
			{
				if (iVar1 == 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
					TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "DEFAULT_ANGRY", 3f, 0, 4);
					TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 2, 257, -1082130432 /* Float: -1f */, -1, 0);
					__LIB_1__::func_474(uLocal_689[0], &iLocal_693, 0, 0, 1, 1);
				}
				else
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_689[0], Global_35, 4, 257, -1082130432 /* Float: -1f */, -1, 0);
					if (iLocal_583 == 0)
					{
						PED::_0x89F5E7ADECCCB49C(uLocal_689[0], "scared");
					}
					__LIB_2__::func_461(0);
					__LIB_2__::func_303(uLocal_689[0], Global_35, func_148("AGGRO_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (iLocal_583 == 1)
				{
					PED::_0x89F5E7ADECCCB49C(uLocal_689[0], "very_drunk");
				}
				PED::SET_PED_KEEP_TASK(uLocal_689[0], true);
				__LIB_3__::func_608(uLocal_689[0]);
				__LIB_1__::func_683(&iLocal_718, 65536);
			}
		}
	}
}

void func_206()
{
	switch (Local_389.f_51.f_4)
	{
		case 0:
			Local_356[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_356[0 /*32*/].f_9 = 94.513f;
			vLocal_233 = { 2814.41f, -1222.949f, 47.527f };
			vLocal_236 = { 0f, 0f, 94.513f };
			break;
		case 1:
			Local_356[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_356[0 /*32*/].f_9 = -65f;
			vLocal_233 = { 2603.891f, -1286.316f, 52.258f };
			vLocal_236 = { 0f, 0f, -65f };
			break;
		case 2:
			Local_356[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_356[0 /*32*/].f_9 = -90f;
			vLocal_233 = { 2662.243f, -1202.89f, 53.284f };
			vLocal_236 = { 0f, 0f, -90f };
			break;
		case 3:
			Local_356[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_356[0 /*32*/].f_9 = -117f;
			vLocal_233 = { 2752.048f, -1205.806f, 49.335f };
			vLocal_236 = { 0f, 0f, -117f };
			break;
		case 4:
			Local_356[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_356[0 /*32*/].f_9 = -179.5f;
			vLocal_233 = { 2531.345f, -1148.01f, 49.972f };
			vLocal_236 = { 0f, 0f, -179.5f };
			break;
		case 5:
			Local_356[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_356[0 /*32*/].f_9 = 89.937f;
			vLocal_233 = { 2713.135f, -1232.871f, 50.163f };
			vLocal_236 = { 0f, 0f, 89.937f };
			break;
		case 6:
			Local_356[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_356[0 /*32*/].f_9 = -172.261f;
			vLocal_233 = { 2639.69f, -1418.491f, 46.37f };
			vLocal_236 = { 0f, 0f, -172.261f };
			break;
		case 7:
			Local_356[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_356[0 /*32*/].f_9 = -90f;
			vLocal_233 = { 2704.596f, -1185.193f, 51.848f };
			vLocal_236 = { 0f, 0f, -90f };
			break;
		case 8:
			Local_356[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_356[0 /*32*/].f_9 = 56.512f;
			vLocal_233 = { 2780.219f, -1277.374f, 47.401f };
			vLocal_236 = { 0f, 0f, 56.512f };
			break;
		case 9:
			Local_356[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_356[0 /*32*/].f_9 = -89.871f;
			vLocal_233 = { 2594.572f, -1207.724f, 53.303f };
			vLocal_236 = { 0f, 0f, -89.871f };
			break;
		case 10:
			Local_356[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_356[0 /*32*/].f_9 = 95f;
			vLocal_233 = { 2668.58f, -1113.233f, 50.545f };
			vLocal_236 = { 0f, 0f, 95f };
			break;
		case 11:
			Local_356[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_356[0 /*32*/].f_9 = 95f;
			vLocal_233 = { 2481.515f, -1467.387f, 46.201f };
			vLocal_236 = { 0f, 0f, -8.75f };
			break;
	}
	__LIB_3__::func_626(&(Local_356[0 /*32*/].f_22));
}

void func_207()
{
	switch (Local_389.f_51.f_4)
	{
		case 0:
			Local_356[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_356[0 /*32*/].f_9 = 90f;
			vLocal_233 = { -793.317f, -1311.097f, 43.614f };
			vLocal_236 = { 0f, 0f, 90f };
			break;
		case 1:
			Local_356[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_356[0 /*32*/].f_9 = 0f;
			vLocal_233 = { -778.608f, -1259.018f, 43.642f };
			vLocal_236 = { 0f, 0f, 0f };
			break;
		case 2:
			Local_356[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_356[0 /*32*/].f_9 = 90f;
			vLocal_233 = { -844.141f, -1283.546f, 43.569f };
			vLocal_236 = { 0f, 0f, 90f };
			break;
	}
	__LIB_3__::func_626(&(Local_356[0 /*32*/].f_22));
}

int func_293(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_470(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_294()
{
	var uVar0[3];
	var uVar4;
	int iVar6;
	__LIB_3__::func_623(&Local_655);
	Local_655.f_1 = Global_35;
	if (__LIB_0__::func_27(iLocal_718, 536870912))
	{
		Local_655.f_8 = { Local_643 };
		Local_655.f_19 = Local_643.f_3.f_2;
	}
	else if (__LIB_0__::func_27(iLocal_718, 268435456))
	{
		Local_655.f_8 = { Local_631 };
		Local_655.f_19 = Local_631.f_3.f_2;
	}
	Local_655.f_4 = 1;
	Local_655.f_14 = { Global_36 };
	Local_655.f_18 = 0f;
	__LIB_1__::func_336(&(Local_655.f_23), 1024);
	__LIB_1__::func_336(&(Local_655.f_23), 1);
	__LIB_1__::func_681(&iLocal_718, -2147483648);
	__LIB_1__::func_683(&iLocal_718, 1073741824 /* Float: 2f */);
	uVar4 = 1;
	__LIB_11__::func_841(&uVar0, &uVar4, 3, Local_389.f_51, 3f);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar0[iVar6]))
		{
			TASK::_TASK_SMART_FLEE_STYLE_COORD(uVar0[iVar6], Local_389.f_51, 6, 0, 4f, -1, 0);
		}
		iVar6++;
	}
	MAP::DISPLAY_RADAR(false);
}

bool func_297()
{
	if (__LIB_1__::func_898() == 0)
	{
		if (iLocal_583 == 0)
		{
			return false;
		}
		else if (iLocal_583 == 1)
		{
			return false;
		}
	}
	else if (iLocal_583 == 0)
	{
		return false;
	}
	else if (iLocal_583 == 1)
	{
		return false;
	}
	return false;
}

int func_303(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!func_484(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_485(iParam0, &iVar0, iParam1))
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
			__LIB_4__::func_465(iVar5);
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
				func_303(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_507(28);
	}
	if (!bVar3)
	{
		if (__LIB_0__::func_192(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (__LIB_0__::func_357(iParam0) == -1447088266)
			{
				iVar1 = __LIB_0__::func_775(__LIB_0__::func_914(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iVar1);
					}
					if (__LIB_0__::func_708(0) && func_513(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
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
					if (__LIB_0__::func_708(0) && func_513(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
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
			if (!func_515(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!func_517(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			func_518(iParam0);
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
				__LIB_4__::func_127(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
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
			__LIB_4__::func_469(iParam0, iParam1);
			__LIB_4__::func_466(iParam0);
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
			__LIB_4__::func_468(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_303(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_303(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_303(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_303(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_303(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_303(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_601(iParam0);
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
				func_303(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_507(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_539(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					func_513(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_539(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
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
					func_303(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_303(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		if (!func_559(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return 1;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			func_560(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_561(iParam0);
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
				func_303(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
			__LIB_4__::func_120(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_4__::func_463(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

bool func_307()
{
	if (iLocal_700 == 0 && iLocal_583 == 1)
	{
		if ((__LIB_14__::func_640(2) == 0 && !__LIB_18__::func_844()) || iLocal_782 == 1)
		{
			return true;
		}
	}
	return false;
}

int func_470(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_470(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

bool func_484(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && func_674(iParam0))
		{
			__LIB_7__::func_449(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_485(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	*iParam1 = iParam2;
	__LIB_1__::func_111(iParam0, iParam1);
	Var0 = { func_677(iParam0, 0, 1) };
	iVar5 = __LIB_0__::func_936(iParam0, &Var0, 0, 0);
	iVar6 = __LIB_0__::func_788(iParam0, 0);
	if ((iVar5 > 1 && !__LIB_1__::func_195()) && (iVar6 + iParam2) >= iVar5)
	{
		if (__LIB_0__::func_192(iParam0, -2051813666))
		{
			__LIB_1__::func_240(583, 1);
		}
		else
		{
			__LIB_1__::func_240(582, 0);
		}
	}
	if (func_681(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_507(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_705(iParam0);
}

bool func_513(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_677(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_708((386 + iVar28), 1);
			if (func_709(iParam0, &Var0, iVar5, 0))
			{
				if (__LIB_1__::func_429(iParam0, &Var6, iVar5))
				{
					Var29 = { __LIB_0__::func_429(iParam0, Var0, iVar5, 0) };
					__LIB_0__::func_939(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (__LIB_0__::func_708(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					__LIB_0__::func_916(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					__LIB_0__::func_718(iParam0, iParam1);
					return true;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_515(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
			if (iParam1 == 1248274121)
			{
				__LIB_1__::func_618(iVar0);
			}
		}
		if (!func_681(iParam0, &uVar1, 1, 0, 0))
		{
			__LIB_7__::func_449(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_513(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_513(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_513(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !__LIB_0__::func_181())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!__LIB_0__::func_216(iVar0))
				{
					func_513(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_513(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = __LIB_0__::func_153(Global_35, 2, 0, 1);
				if ((((__LIB_0__::func_154(iVar7) && !Global_43891) && iVar7 != iVar0) && !__LIB_0__::func_293(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (__LIB_0__::func_154(iVar7) && __LIB_0__::func_293(24))
				{
					if (!func_513(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_513(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_513(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		__LIB_1__::func_240(480, 1);
	}
	return true;
}

bool func_517(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!__LIB_0__::func_258(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (__LIB_0__::func_154(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (__LIB_1__::func_707(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		__LIB_1__::func_424(__LIB_0__::func_941(iParam0), __LIB_0__::func_776(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			if (__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
			{
				__LIB_1__::func_240(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (__LIB_0__::func_708(0))
	{
		if (__LIB_0__::func_916(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_559(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_518(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_720(Global_35, iParam0, &uVar0))
		{
			func_539(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			__LIB_0__::func_362();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			__LIB_0__::func_360();
			break;
	}
}

int func_539(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { func_677(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_758(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	__LIB_1__::func_467(1, (__LIB_0__::func_2() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_1__::func_452(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (__LIB_0__::func_156(32768) && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_0__::func_945();
				__LIB_1__::func_452(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			__LIB_1__::func_452(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = __LIB_0__::func_445(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		__LIB_1__::func_452(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			__LIB_1__::func_36(0);
			__LIB_1__::func_37(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		__LIB_1__::func_452(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_559(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_677(iParam0, 0, 1) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	return func_773(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_560(int iParam0)
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
				if (__LIB_1__::func_335(-525676072, &iVar1))
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
			func_539(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_507(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			func_513(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_561(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_782(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_782(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_782(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_782(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_782(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_782(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_782(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_782(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_782(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_782(-1, iParam0);
	}
}

bool func_674(int iParam0)
{
	var uVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (__LIB_0__::func_774(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_681(iParam0, &uVar0, 1, 0, 0);
	}
	return __LIB_1__::func_707(iParam0, 1, 0);
}

struct<5> func_677(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	Var0 = { __LIB_0__::func_949(bParam1) };
	Var0.f_4 = 1084182731;
	switch (__LIB_0__::func_356(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { __LIB_0__::func_429(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { __LIB_1__::func_117(bParam1) };
			if (bParam2 && __LIB_0__::func_950(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_709(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_709(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (__LIB_1__::func_429(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -813824107;
			Var0 = { __LIB_1__::func_118(bParam1) };
			switch (__LIB_0__::func_357(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
			if (__LIB_0__::func_793(iParam0, -1823706425))
			{
				Var0 = { __LIB_0__::func_429(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (__LIB_0__::func_793(iParam0, -1483207246))
			{
				Var0 = { __LIB_0__::func_429(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!__LIB_0__::func_464(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

bool func_681(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;
	__LIB_0__::func_799(&iParam0);
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam3 = true;
	}
	if (__LIB_0__::func_787(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { __LIB_1__::func_117(0) };
			Var4.f_9 = -1591664384;
			if (!func_709(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (__LIB_1__::func_429(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (__LIB_0__::func_950(iParam0, 1))
			{
				if (!func_709(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (__LIB_1__::func_429(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_874(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = __LIB_0__::func_936(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = __LIB_0__::func_800(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

void func_705(int iParam0)
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
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			__LIB_0__::func_539(1);
			break;
		case 34:
			__LIB_0__::func_540(1);
			break;
		case 35:
			__LIB_0__::func_541(1);
			break;
		case 36:
			break;
		case 37:
			__LIB_0__::func_542(0);
			break;
		case 38:
			__LIB_0__::func_543(0);
			break;
		case 39:
			__LIB_0__::func_544(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			__LIB_1__::func_240(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			__LIB_1__::func_240(587, 0);
			break;
		case 4:
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
			break;
		case 5:
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
			break;
		case 24:
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
						func_559(iVar0, 1, 752097756);
					}
					func_539(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					func_559(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					func_559(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					func_559(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					func_559(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					func_559(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					func_559(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_915();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

int func_708(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return joaat("SLOTID_HORSE_BEDROLL");
		case 237:
			return joaat("SLOTID_HORSE_BLANKET");
		case 238:
			return joaat("SLOTID_HORSE_CANTLE");
		case 239:
			return joaat("SLOTID_HORSE_FENDER");
		case 240:
			return joaat("SLOTID_HORSE_HORN");
		case 241:
			return joaat("SLOTID_HORSE_INSURANCE");
		case 242:
			return 802754820;
		case 243:
			return joaat("SLOTID_HORSE_MANE");
		case 244:
			return -1886147520;
		case 245:
			return joaat("SLOTID_HORSE_REINS");
		case 246:
			return joaat("SLOTID_HORSE_SADDLE");
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return joaat("SLOTID_HORSE_SADDLEBAG");
		case 258:
			return 724026534;
		case 259:
			return joaat("SLOTID_HORSE_SEAT");
		case 260:
			return joaat("SLOTID_HORSE_SEX");
		case 261:
			return joaat("SLOTID_HORSE_SKIRT");
		case 262:
			return -1824203570;
		case 263:
			return -1654197998;
		case 264:
			return 798987653;
		case 265:
			return 976923323;
		case 266:
			return 1167442289;
		case 267:
			return joaat("SLOTID_HORSE_STIRRUP");
		case 268:
			return joaat("SLOTID_HORSE_TAIL");
		case 269:
			return -2015960939;
		case 270:
			return 1132377945;
		case 271:
			return 739936401;
		case 272:
			return 1201880974;
		case 273:
			return 819728896;
		case 274:
			return 1746010219;
		case 275:
			return 1433393959;
		case 276:
			return -1287636759;
		case 277:
			return -706917073;
		case 278:
			return -2166805;
		case 279:
			return -1391602433;
		case 280:
			return 1782075221;
		case 281:
			return 1282544585;
		case 282:
			return 1732594027;
		case 283:
			return -1058817012;
		case 284:
			return 1090546265;
		case 285:
			return -1783120823;
		case 286:
			return -1535745896;
		case 287:
			return -2086922122;
		case 288:
			return -1675198649;
		case 289:
			return 1189497682;
		case 290:
			return -1565675519;
		case 291:
			return -268973591;
		case 292:
			return 1039159916;
		case 293:
			return 1111816631;
		case 294:
			return 405591388;
		case 295:
			return 897456793;
		case 296:
			return 104187473;
		case 297:
			return 773808542;
		case 298:
			return -1120669954;
		case 299:
			return -1389278274;
		case 300:
			return 552979403;
		case 301:
			return -1571578784;
		case 302:
			return -708312114;
		case 303:
			return 688823508;
		case 304:
			return -1622147240;
		case 305:
			return 830292162;
		case 306:
			return 226276782;
		case 307:
			return -678416628;
		case 308:
			return -1098528034;
		case 309:
			return 316207340;
		case 310:
			return -1909200748;
		case 311:
			return -939652363;
		case 312:
			return joaat("SLOTID_PROGRESSION");
		case 313:
			return -375447933;
		case 314:
			return 537014919;
		case 315:
			return 1784584921;
			return -140655024;
			return 1084182731;
			return -1045471300;
			return 1617414719;
			return -787761753;
			return -490616606;
			return 1491346514;
			return -1360128126;
			return -1311702610;
			return -904250715;
			return 1034665895;
			return -101524555;
			return 1419152594;
			return -451359317;
			return -1915385310;
			return 1315162488;
			return -361152079;
			return -2041626192;
			return -2077812539;
			return -1371514637;
			return 1730017037;
			return 892816668;
			return -1994943603;
			return 603133554;
			return -30160144;
			return -1248299493;
			return 727393558;
			return 755611221;
			return -170255458;
			return 1011151573;
			return 1122339631;
			return 454815308;
			return 990701735;
			return -246340825;
			return -1410671073;
			return 1547608292;
			return -714132970;
			return 732290690;
			return 971340545;
			return -234132662;
			return -2143057988;
			return -993947465;
			return -486552269;
			return -1156317860;
			return 1229625803;
			return -388596167;
			return -1204639465;
			return -1384685096;
			return -2026728113;
			return -1228057307;
			return 1835126290;
			return 1890833594;
			return -751549960;
			return -1682270750;
			return -1839865333;
			return -1990383629;
			return 1712094016;
			return 1532953697;
			return 1620318083;
			return -307230331;
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return -1162387149;
			return 1728382685 /* GXTEntry: "Right" */;
			return -649335959 /* GXTEntry: "Left" */;
			return -1876502240;
			return -2107032155;
			return 1570861011;
			return 1075981185;
			return 960195961;
			return 1150460649;
			return 1689424794;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return 1232060796;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
			return 2051264661;
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 244353594;
			return 302954672;
			return -1870144662;
			return 257892944;
			return -607182722;
			return -13254502;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}
bool func_709(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return __LIB_0__::func_800(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_720(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return false;
	}
	if (__LIB_0__::func_356(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = __LIB_0__::func_2() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (__LIB_0__::func_357(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_920(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (__LIB_0__::func_192(iParam1, 866047851))
	{
		iVar5 = __LIB_0__::func_161(iVar4, 1);
		if (__LIB_0__::func_545(&(Global_1946804.f_1497)) >= 2 && Global_1946804.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return false;
			}
			iVar5 = 10;
			iVar3 = __LIB_0__::func_357(Global_1946804.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] != Global_1946804.f_57[iVar5 /*11*/] && __LIB_0__::func_192(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return false;
			}
			break;
		case -1505978566:
			if (__LIB_1__::func_182(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
				iVar10 = __LIB_0__::func_546(iVar8, iVar4, iVar2, bVar1);
				iVar9 = __LIB_0__::func_546(Global_1946804.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = __LIB_0__::func_357(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_218(Global_1946804.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
						return false;
					}
					if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

bool func_758(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { func_677(iParam0, 1, 0) };
		iParam2 = __LIB_0__::func_161(__LIB_0__::func_709(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, 866047851) && __LIB_0__::func_545(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((__LIB_0__::func_156(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		__LIB_0__::func_968(__LIB_0__::func_158(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	__LIB_1__::func_40(iParam2);
	__LIB_1__::func_41(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		__LIB_0__::func_47(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		__LIB_0__::func_47(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	__LIB_1__::func_455(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = __LIB_0__::func_969(iParam0, iParam2, iParam1, __LIB_0__::func_2() != -1);
	if (bParam4)
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804.f_2589)
		{
			if (Global_1946804.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946804.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				__LIB_0__::func_550(__LIB_0__::func_158(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

int func_773(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_681(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(__LIB_0__::func_162(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_782(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_977(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_977(iParam1, 1);
		func_978(iParam0);
	}
}

bool func_874(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_677(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_708((386 + iVar29), 1);
		if (func_709(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = __LIB_1__::func_429(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

void func_915()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1024();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_559(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_559(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

int func_920(int iParam0)
{
	struct<5> Var0;
	Var0 = { func_677(iParam0, 1, 0) };
	return __LIB_0__::func_709(Var0.f_4);
}

void func_977(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_507(50);
			}
			else
			{
				func_507(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_507(51);
			}
			else
			{
				func_507(49);
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
			func_507(24);
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

void func_978(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (__LIB_1__::func_771(0))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(2))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(4))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(16))
			{
				if (iVar0 == 1)
				{
					func_1060();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(16);
				}
			}
			if (!__LIB_0__::func_605(32))
			{
				if (iVar0 >= 3)
				{
					func_1060();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (__LIB_1__::func_771(1))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(3))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(7))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(1))
			{
				if (iVar0 == 1)
				{
					func_1062();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(1);
				}
			}
			if (!__LIB_0__::func_605(2))
			{
				if (iVar0 >= 3)
				{
					func_1062();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (__LIB_1__::func_771(5))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(6))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(8))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(4))
			{
				if (iVar0 == 1)
				{
					func_1063();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(4);
				}
			}
			if (!__LIB_0__::func_605(8))
			{
				if (iVar0 >= 3)
				{
					func_1063();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(8);
				}
			}
			break;
	}
}

void func_1024()
{
	var uVar0;
	struct<4> Var30;
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	__LIB_3__::func_150(Global_35, &uVar0);
	Var30 = { __LIB_0__::func_949(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1089(0);
	func_1090(7);
	func_1091(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		func_1091(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_1091(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

void func_1060()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_559(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(1);
	__LIB_1__::func_132(1, iVar0, 0);
}

void func_1062()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_559(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(2);
	__LIB_1__::func_132(2, iVar0, 0);
}

void func_1063()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_559(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(0);
	__LIB_1__::func_132(0, iVar0, 0);
}

void func_1089(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_144(iVar1, 0))
		{
			func_1123(iVar1, 0, bParam0);
		}
		Global_1946804.f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804.f_2657.f_20 = 0;
	Global_1946804.f_2657.f_21 = 0;
	Global_1946804.f_2657.f_22 = 0;
	Global_1946804.f_2657.f_23 = 0;
	Global_1946804.f_2657.f_24 = 0;
	Global_1946804.f_2657.f_25 = 0;
	Global_1946804.f_2657.f_19 = 0;
	Global_1946804.f_2657.f_26.f_6 = 0;
}

void func_1090(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Global_1946804.f_2657.f_26.f_2 = 3;
	Global_1946804.f_2657.f_26.f_1 = 3;
	Global_1946804.f_2657.f_26 = 3;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_1__::func_94(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_26796.f_20;
		Global_1946804.f_2657.f_21 = Global_26796.f_21;
		Global_1946804.f_2657.f_22 = Global_26796.f_22;
		Global_1946804.f_2657.f_23 = Global_26796.f_23;
		Global_1946804.f_2657.f_24 = Global_26796.f_24;
		Global_1946804.f_2657.f_25 = Global_26796.f_25;
		Global_1946804.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar2 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_357(iVar2) != -999503751)
		{
			func_1125(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1126(iVar2, 0))
		{
			func_1127(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1091(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	if (!__LIB_0__::func_673(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_357(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1129(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1129(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1129(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1129(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1129(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1129(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == __LIB_0__::func_856(0))
	{
		func_1131(iParam0, 1);
		if (__LIB_0__::func_241() == 1160113249)
		{
			func_1131(__LIB_0__::func_856(-2125499975), 0);
		}
		else
		{
			func_1131(__LIB_0__::func_856(1160113249), 0);
		}
	}
	__LIB_0__::func_460();
	if (__LIB_1__::func_18(iVar0))
	{
		INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), iParam0, 0);
	}
	func_1127(iParam0, bParam3);
	if (bParam2)
	{
		__LIB_0__::func_719(0, 0);
	}
}

void func_1123(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	switch (__LIB_0__::func_357(iParam0))
	{
		case -2061583405:
			bVar0 = func_1148(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1148(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1148(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1148(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1148(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1148(iParam0, &(Global_1946804.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		__LIB_0__::func_460();
	}
	if (bParam1)
	{
		__LIB_0__::func_719(0, 0);
	}
}

void func_1125(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	__LIB_0__::func_691(iParam2, *uParam0);
	func_1150(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1126(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_677(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(__LIB_0__::func_162(0), &Var5, iParam1);
	return true;
}

void func_1127(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_677(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(__LIB_0__::func_162(0), &Var5, bParam1);
}

int func_1129(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	iVar1 = iParam0;
	if (Global_1946804.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (__LIB_0__::func_554(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1126(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		func_1125(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1131(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_677(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, __LIB_0__::func_162(0), &Var5);
	return 1;
}

int func_1148(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = iParam0;
	if (!__LIB_0__::func_554(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804.f_2657.f_19 == 1)
	{
		Global_1946804.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (__LIB_0__::func_357(iParam0) != -999503751)
		{
			__LIB_1__::func_459(&(Global_1946804.f_2657.f_26), 0, Global_1946804.f_2657.f_19);
		}
		Global_1946804.f_2657[0] = 0;
		return 1;
	}
	Global_1946804.f_2657.f_19 = (Global_1946804.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804.f_2657[iVar0] = Global_1946804.f_2657[Global_1946804.f_2657.f_19];
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = 0;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		__LIB_1__::func_459(&(Global_1946804.f_2657.f_26), iVar0, Global_1946804.f_2657.f_19);
	}
	func_1126(iParam0, 1);
	return 1;
}

void func_1150(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		__LIB_1__::func_13(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = __LIB_0__::func_161(func_920(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		__LIB_1__::func_192(uParam0);
	}
}

