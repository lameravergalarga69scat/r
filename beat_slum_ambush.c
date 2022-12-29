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
	struct<193> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_207 = 0;
	int iLocal_208[4] = { 0, 0, 0, 0 };
	var uLocal_213[4] = { 0, 0, 0, 0 };
	struct<32> Local_218[4];
	int iLocal_347[1] = { 0 };
	var uLocal_349[1] = { 0 };
	struct<32> Local_351[1];
	struct<12> Local_384[5];
	int iLocal_445[3] = { 0, 0, 0 };
	var uLocal_449[2] = { 0, 0 };
	int iLocal_452[4] = { 0, 0, 0, 0 };
	vector3 vLocal_457[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_470[4] = { 0f, 0f, 0f, 0f };
	vector3 vLocal_475[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_488[4] = { 0f, 0f, 0f, 0f };
	vector3 vLocal_493 = { 0f, 0f, 0f };
	float fLocal_496 = 0f;
	char* sLocal_497 = NULL;
	vector3 vLocal_498 = { 0f, NaNf, 0f };
	var uLocal_501 = -1;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = -1;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 1073741824;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 1;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	struct<17> Local_519[2];
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	struct<24> Local_557 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0 } ;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	struct<13> Local_596[2];
	struct<17> Local_623[2];
	int iLocal_658 = 0;
	bool bLocal_659 = false;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	bool bLocal_674 = false;
	bool bLocal_675 = false;
	var uLocal_676 = 0;
	int iLocal_677 = 0;
	int iLocal_678 = 0;
	var uLocal_679 = 0;
	int iLocal_680 = 0;
	int iLocal_681 = 0;
	int iLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	int iLocal_685 = 0;
	int iLocal_686 = 0;
	int iLocal_687 = 0;
	int iLocal_688 = 0;
	int iLocal_689 = 0;
	var uLocal_690 = 0;
	struct<17> Local_691 = { 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_708 = 1097859072;
	var uLocal_709 = 1000;
	var uLocal_710 = 1067450368;
	var uLocal_711 = 5000;
	var uLocal_712 = 42;
	var uLocal_713 = 1103626240;
	var uLocal_714 = 1077936128;
	var uLocal_715 = 1106247680;
	var uLocal_716 = 1103101952;
	var uLocal_717 = 1097859072;
	var uLocal_718 = 1103626240;
	int iLocal_719 = 0;
	int iLocal_720 = 0;
	int iLocal_721 = 0;
	int iLocal_722 = 0;
	int iLocal_723 = 0;
	var uLocal_724[4] = { 0, 0, 0, 0 };
	var uLocal_729[1] = { 0 };
	int iLocal_731 = 0;
	vector3 vLocal_732[13] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_772[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_800[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	int iLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	bool bLocal_843 = false;
	struct<4> Local_844 = { 0, 0, 0, 0 } ;
	var uLocal_848 = 0;
	var uLocal_849 = 1065353216;
	var uLocal_850 = 1119092736;
	var uLocal_851 = 1092616192;
	var uLocal_852 = 1085276160;
	int iLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	int iLocal_858 = 0;
	bool bLocal_859 = false;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	char[] cVar0[8];
	bool bVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_593 = -1;
	iLocal_594 = -1;
	iLocal_595 = -1;
	bLocal_674 = true;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_859 = true;
	}
	if (!bLocal_859)
	{
		Local_14.f_3 = __LIB_0__::func_81(&uScriptParam_0);
		Local_14.f_43 = __LIB_0__::func_12();
		uLocal_679 = uLocal_679;
		__LIB_3__::func_368(&Local_14, 1);
		__LIB_2__::func_433(&(Local_14.f_5));
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_859, 629, 0);
		if (bLocal_859)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_682)
			{
				case 0:
					if (func_7())
					{
						Local_14.f_176 = 1;
						iLocal_682 = 1;
					}
					break;
				case 1:
					if (__LIB_3__::func_454(&Local_14, &uScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						__LIB_4__::func_362(&Local_14, &uLocal_855, &uLocal_854);
						func_10();
						iLocal_682 = 3;
					}
					else if (Local_14.f_160)
					{
						func_5();
					}
					break;
				case 3:
					if (func_11())
					{
						if (func_12())
						{
							StringCopy(&cVar0, "Woman", 8);
							__LIB_4__::func_375(0f, 0f, 0f, &Local_384, 0f, 0, 0, -1, 0);
							func_14(1);
							if (Local_14.f_161)
							{
								__LIB_3__::func_124(-1334037078, 1);
								__LIB_3__::func_124(-1641377529, 1);
							}
							iLocal_682 = 4;
						}
					}
					break;
				case 4:
					__LIB_0__::func_11();
					if (!func_17())
					{
						func_5();
					}
					if (func_18())
					{
						func_5();
					}
					if (!Local_14.f_46)
					{
						if (func_19() || (func_20(0, 128) && !func_20(0, 256)))
						{
							if (func_21())
							{
								__LIB_2__::func_480(&Local_519, 1, 1, 1, 0);
								if (iLocal_681 == 7)
								{
								}
								else
								{
									func_5();
								}
							}
						}
					}
					if (func_23())
					{
						Local_14.f_50 = 1;
						func_5();
					}
					if (!func_24(64))
					{
						bVar1 = false;
					}
					else if (!func_24(128))
					{
						bVar1 = true;
					}
					else
					{
						bVar1 = false;
					}
					if (__LIB_3__::func_365(&Local_14, &iLocal_208, bVar1, bVar1, !bVar1, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_5();
					}
					break;
			}
			BUILTIN::WAIT(Local_14.f_158);
		}
	}
}

void func_5()
{
	int iVar0;
	__LIB_3__::func_474(&uLocal_669);
	if (!func_35(2048) && func_35(1024))
	{
		return;
	}
	__LIB_3__::func_124(-74215266, 1);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("re_slum_ambush_assistcurve", 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
	TASK::REMOVE_WAYPOINT_RECORDING("re_slum_ambush_assistcurve");
	func_14(0);
	if (__LIB_2__::func_763(287, 1))
	{
		__LIB_2__::func_753(287, 0, 1, 0, 0);
	}
	if (__LIB_2__::func_763(288, 1))
	{
		__LIB_2__::func_753(288, 0, 1, 0, 0);
	}
	__LIB_4__::func_372(1, 2048);
	__LIB_4__::func_193(298);
	if (__LIB_2__::func_763(138, 1))
	{
		func_40(1);
		__LIB_2__::func_753(138, 0, 1, 0, 0);
	}
	if (!bLocal_843)
	{
		Local_14.f_45 = 0;
	}
	__LIB_3__::func_124(1236420520, 1);
	__LIB_3__::func_124(-74215266, 1);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_449[0]))
	{
		ENTITY::SET_ENTITY_VISIBLE(uLocal_449[0], true);
	}
	AUDIO::_0x531A78D6BF27014B("RESAM_Sounds");
	if (PED::_0x91A5F9CBEBB9D936(uLocal_676))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_676, false);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_208[iVar0]))
		{
			if (func_41(iLocal_208[iVar0]))
			{
				PED::DELETE_PED(&(iLocal_208[iVar0]));
			}
			else
			{
				if (__LIB_2__::func_178(iLocal_208[iVar0]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_208[iVar0], joaat("REL_PLAYER_DISLIKE"));
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_208[iVar0]));
			}
		}
		iVar0++;
	}
	if (!__LIB_2__::func_1(Global_35, 0, 1))
	{
		if (iLocal_681 == 7)
		{
			func_44(joaat("RESAM_FAIL"));
		}
	}
	else
	{
		func_45(0);
	}
	PLAYER::_0x3A8611BD7BDE84F7(PLAYER::PLAYER_ID(), -1f);
	PLAYER::_0x3BB84F812E052C90(PLAYER::PLAYER_ID());
	func_46(0);
	func_47(1);
	__LIB_4__::func_200(&Local_596);
	func_49(&Local_14, &iLocal_208, &uLocal_213, 0, uLocal_855, uLocal_854, 0, 1, 0, 1);
	if (iLocal_856 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(iLocal_856))
		{
			ENTITY::_0xD2B9C78537ED5759(iLocal_856);
		}
	}
	if (iLocal_857 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(iLocal_857))
		{
			ENTITY::_0xD2B9C78537ED5759(iLocal_857);
		}
	}
	__LIB_2__::func_603(&(iLocal_347[0]), &vLocal_498, &Local_519, 1, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_7()
{
	switch (iLocal_680)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_14))
			{
				func_53();
				func_54();
				__LIB_3__::func_284(&Local_218);
				__LIB_3__::func_284(&Local_351);
				__LIB_4__::func_363(&Local_384);
				STREAMING::REQUEST_CLIP_SET("SCRIPT_RE@SLUM_AMBUSH@PLAYER_ENTERS@FOWARD@ENTER");
				STREAMING::REQUEST_CLIP_SET("SCRIPT_RE@SLUM_AMBUSH@PLAYER_ENTERS@ANGLE@ENTER");
				func_57();
				AUDIO::_0xD9130842D7226045("RESAM_Sounds", 0);
				STREAMING::REQUEST_ANIM_DICT("script_re@slum_ambush@ig1_woman_leads_to_ambush");
				TASK::REQUEST_WAYPOINT_RECORDING("re_slum_ambush_assistcurve");
				iLocal_680 = 1;
			}
			break;
		case 1:
			if (!STREAMING::HAS_CLIP_SET_LOADED("SCRIPT_RE@SLUM_AMBUSH@PLAYER_ENTERS@ANGLE@ENTER"))
			{
				return false;
			}
			if (!STREAMING::HAS_CLIP_SET_LOADED("SCRIPT_RE@SLUM_AMBUSH@PLAYER_ENTERS@FOWARD@ENTER"))
			{
				return false;
			}
			if (!func_58())
			{
				return false;
			}
			func_59();
			func_60();
			func_61();
			AUDIO::_0xD9130842D7226045("RESAM_Sounds", 0);
			iLocal_680 = 2;
			break;
		case 2:
			if (!__LIB_3__::func_366(&Local_218))
			{
				return false;
			}
			if (!__LIB_3__::func_366(&Local_351))
			{
				return false;
			}
			if (!__LIB_4__::func_364(&Local_384))
			{
				return false;
			}
			if (!AUDIO::_0xD9130842D7226045("RESAM_Sounds", 0))
			{
				return false;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("script_re@slum_ambush@ig1_woman_leads_to_ambush"))
			{
				return false;
			}
			if (!func_64())
			{
				return false;
			}
			if (!func_65())
			{
				return false;
			}
			if (!func_66())
			{
				return false;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("re_slum_ambush_assistcurve"))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_10()
{
	iLocal_772[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2795.761f, -1167.354f, 48.58631f, 0f, 0f, -120.3074f, 13.42273f, 7.539795f, 3.324608f, "volInterior");
	iLocal_772[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2794.366f, -1169.742f, 48.58631f, 0f, 0f, -120.3074f, 7.899674f, 7.539795f, 3.324608f, "volInteriorFront");
	iLocal_772[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2797.782f, -1163.901f, 48.58631f, 0f, 0f, -120.3074f, 5.691954f, 7.539795f, 3.324608f, "volInteriorBack");
	iLocal_772[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2802.154f, -1166.341f, 48.58631f, 0f, 0f, -120.3074f, 5.691954f, 2.435783f, 3.324608f, "volHallway");
	iLocal_772[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2794.115f, -1170.172f, 48.58631f, 0f, 0f, -120.3074f, 5.129912f, 7.539795f, 3.324608f, "volSaloonTrigger");
	iLocal_772[7] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volClearBack");
	VOLUME::_0x39816F6F94F385AD(iLocal_772[7], 2800.547f, -1167.316f, 47.82606f, 0f, 0f, -120.3074f, 2.377788f, 4.495595f, 1.977563f);
	VOLUME::_0x39816F6F94F385AD(iLocal_772[7], 2802.991f, -1165.14f, 47.82606f, 0f, 0f, -120.3074f, 4.661293f, 2.064157f, 1.977563f);
	iLocal_772[8] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volClearWoman");
	VOLUME::_0x39816F6F94F385AD(iLocal_772[8], 2794.374f, -1168.608f, 46.95134f, 0f, 0f, 59.91685f, 2.609969f, 1.29966f, 2.008859f);
	VOLUME::_0x39816F6F94F385AD(iLocal_772[8], 2796.543f, -1166.821f, 46.95134f, 0f, 0f, 59.91685f, 3.134632f, 0.77195f, 2.008859f);
	iLocal_772[9] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volClearAmbush");
	VOLUME::_0x39816F6F94F385AD(iLocal_772[9], 2793.602f, -1159.435f, 46.27899f, 0f, 0f, 149.8131f, 3.273284f, 3.174029f, 5.780732f);
	VOLUME::_0x39816F6F94F385AD(iLocal_772[9], 2800.958f, -1159.599f, 46.27899f, 0f, 0f, 149.8131f, 16.34188f, 4.28829f, 5.780732f);
	VOLUME::_0x39816F6F94F385AD(iLocal_772[9], 2810.511f, -1161.566f, 46.27899f, 0f, 0f, 14.17312f, 10.16935f, 5.320351f, 5.780732f);
	iLocal_772[13] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2804.711f, -1162.195f, 47.92543f, 0f, 0f, -120.3074f, 3.426658f, 4.006002f, 2.371395f, "volTriggerAmbush");
	iLocal_772[14] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2802.442f, -1160.358f, 47.826f, 0f, 0f, -120.3074f, 4.661293f, 2.784669f, 2.337036f, "volEAggroLeft");
	iLocal_772[15] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2809.831f, -1161.877f, 47.82606f, 0f, 0f, 105.0279f, 4.912741f, 4.938f, 2.337036f, "volEAggroRight");
	iLocal_772[16] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2801.706f, -1166.686f, 47.826f, 0f, 0f, -120.3074f, 4.37f, 2.784669f, 2.337036f, "volEAggroBack");
	iLocal_772[17] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAmbushFail");
	VOLUME::_0x39816F6F94F385AD(iLocal_772[17], 2818.589f, -1155.41f, 48.66834f, 0f, 0f, 14.19906f, 14.6062f, 25.36564f, 5.404681f);
	VOLUME::_0x39816F6F94F385AD(iLocal_772[17], 2790.087f, -1149.638f, 48.66834f, 0f, 0f, 59.06705f, 14.6062f, 19.54346f, 6.528077f);
	iLocal_772[10] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2793.995f, -1168.895f, 47.974f, 0f, 0f, 0f, 0.79f, 0.79f, 2f, "volPlayerClear");
	iLocal_772[19] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2794.06f, -1168.97f, 48f, 0f, 0f, 59.917f, 2.216f, 0.952f, 4f, "volPlayerDrink");
	iLocal_772[20] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volMainFightArea");
	VOLUME::_0x39816F6F94F385AD(iLocal_772[20], 2805.044f, -1163.121f, 47.92543f, 0f, 0f, -120.3074f, 2.317865f, 7.094168f, 2.371395f);
	VOLUME::_0x39816F6F94F385AD(iLocal_772[20], 2808.274f, -1162.295f, 47.82606f, 0f, 0f, 105.0279f, 4.912741f, 8.215481f, 2.337036f);
	iLocal_772[22] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volNonWitnessArea");
	VOLUME::_0x39816F6F94F385AD(iLocal_772[22], 2805.044f, -1163.121f, 47.92543f, 0f, 0f, -120.3074f, 2.317865f, 7.094168f, 2.371395f);
	VOLUME::_0x39816F6F94F385AD(iLocal_772[22], 2808.274f, -1162.295f, 47.82606f, 0f, 0f, 105.0279f, 4.912741f, 8.215481f, 2.337036f);
	VOLUME::_0x39816F6F94F385AD(iLocal_772[22], 2793.405f, -1152.577f, 47.54876f, 0f, 0f, -120.3074f, 14.55113f, 9.776126f, 4.107668f);
	VOLUME::_0x39816F6F94F385AD(iLocal_772[22], 2800.949f, -1156.203f, 47.54876f, 0f, 0f, -120.3074f, 10.2354f, 7.094168f, 4.107668f);
	iLocal_772[21] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volMainFightBlockers");
	VOLUME::_0x39816F6F94F385AD(iLocal_772[21], 2801.512f, -1159.699f, 47.63895f, 0f, 0f, 59.4658f, 6.192841f, 2.402921f, 2.337036f);
	VOLUME::_0x39816F6F94F385AD(iLocal_772[21], 2813.471f, -1160.556f, 47.82606f, 0f, 0f, 105.0279f, 6.192841f, 2.402921f, 2.337036f);
	iLocal_772[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2794.84f, -1171.943f, 47.47393f, 0f, 0f, -31f, 3.503484f, 3.725594f, 3f, "volClearAmbientSaloon1");
	iLocal_772[12] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2796.161f, -1168.411f, 47.47393f, 0f, 0f, -31f, 1.546385f, 4.166866f, 3f, "volClearAmbientSaloon2");
	iLocal_772[23] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2803.593f, -1164.016f, 47.73468f, 0f, 0f, 60.00001f, 2f, 2.173012f, 3f, "volNearBackDoor");
	iLocal_772[24] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2794.729f, -1172.525f, 48.03175f, 0f, 0f, -120.3074f, 28.16211f, 28.79004f, 5.511137f, "volDeclineCleanup");
	iLocal_772[25] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volPlayerEnter");
	VOLUME::_0x39816F6F94F385AD(iLocal_772[25], 2794.224f, -1168.893f, 48f, 0f, 0f, 59.917f, 1.469709f, 1.141513f, 4f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_772[25], 2794.622f, -1168.444f, 47.8667f, 0f, 0f, -30.00001f, 0.7f, 0.7f, 1f);
	iLocal_772[26] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volPlayerEnterAggressive");
	VOLUME::_0x39816F6F94F385AD(iLocal_772[26], 2794.02f, -1169.659f, 48f, 0f, 0f, 59.917f, 1.723403f, 1.582908f, 4f);
	VOLUME::_0x39816F6F94F385AD(iLocal_772[26], 2794.792f, -1168.715f, 48f, 0f, 0f, 59.917f, 1.723403f, 1.582908f, 4f);
}

bool func_11()
{
	switch (iLocal_683)
	{
		case 0:
			iLocal_683 = 1;
			break;
		case 1:
			iLocal_683 = 2;
			break;
		case 2:
			if (func_72(138, 2, 1))
			{
				__LIB_2__::func_133(iLocal_445[2], "0312_U_M_M_NbxBartender_02", 0);
				iLocal_683 = 3;
			}
			break;
		case 3:
			if (func_74())
			{
				func_75();
				iLocal_828 = 0;
				iLocal_683 = 4;
			}
			break;
		case 4:
			if (!func_76())
			{
				return false;
			}
			iLocal_347[iLocal_828] = __LIB_3__::func_870(Local_351[iLocal_828 /*32*/].f_1, &(Local_351[iLocal_828 /*32*/]), Local_351[iLocal_828 /*32*/].f_6, Local_351[iLocal_828 /*32*/].f_9, 1, 0, 1, 0, 1);
			if (!__LIB_2__::func_1(iLocal_347[iLocal_828], 0, 1))
			{
				return false;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_351[iLocal_828 /*32*/].f_23)))
			{
				__LIB_2__::func_133(iLocal_347[iLocal_828], &(Local_351[iLocal_828 /*32*/].f_23), 0);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_347[iLocal_828], true);
			iLocal_828++;
			if (iLocal_828 >= 1)
			{
				iLocal_828 = 0;
				iLocal_683 = 5;
			}
			break;
		case 5:
			return true;
	}
	return false;
}

bool func_12()
{
	int iVar0;
	int iVar1[4];
	var uVar6[1];
	int iVar8;
	int iVar9;
	switch (iLocal_858)
	{
		case 0:
			iLocal_856 = ENTITY::_0x6F3068258A499E52(joaat("P_DOORBRAIT01BX"), 2812.46f, -1161.848f, 46.6195f, 9);
			iLocal_857 = ENTITY::_0x6F3068258A499E52(joaat("P_DOORNBD39X"), 2803.279f, -1163.525f, 46.9388f, 5);
			iLocal_858 = 1;
			return false;
		case 1:
			if (ENTITY::_0x1FF441D7954F8709(iLocal_856) && ENTITY::_0x1FF441D7954F8709(iLocal_857))
			{
				uLocal_449[0] = ENTITY::_0x4735E2A4BB83D9DA(iLocal_857);
				uLocal_449[1] = ENTITY::_0x4735E2A4BB83D9DA(iLocal_856);
				iLocal_858 = 2;
			}
			else
			{
				return false;
			}
			break;
	}
	if (!__LIB_2__::func_1(iLocal_347[0], 0, 1))
	{
		return false;
	}
	else
	{
		__LIB_2__::func_289(&Local_691);
		__LIB_2__::func_433(&Local_691);
		__LIB_2__::func_111(&Local_691, 1);
		__LIB_2__::func_662(&Local_691, 0);
		__LIB_3__::func_482(&Local_691, 12f);
		func_81(1, "player_zero", Global_35, 1);
		func_81(0, "PROSTITUTE", iLocal_347[0], 1);
		func_81(0, "player_zero", Global_35, 1);
		func_82(0, "p_doornbd39x", uLocal_449[0], 1);
		func_82(0, "p_doornbd6panelfqg01x", uLocal_449[1], 1);
		func_83(0, "internal_loop", 0);
		func_83(0, "BAR_LOOP", 0);
		Local_351[0 /*32*/].f_6 = { 2794.302f, -1168.331f, 47.9004f };
		Local_351[0 /*32*/].f_9 = -120.53f;
		func_84(0);
		func_85(0, "PBL_CALLOVER_L", 1);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(iLocal_347[0], true, false), 0f, 0f, 0f, 2.56f, 2.56f, 1.25f, "volFocus");
		PED::_0x7C00CFC48A782DC0(iVar0, iLocal_347[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		uVar6[0] = iLocal_347[0];
		iVar8 = func_86(&iVar1, &uVar6, iVar1, iLocal_772[8], 0, 0, 0, -1, 1, 0, 0, 0);
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1[iVar9]))
			{
				PED::DELETE_PED(&(iVar1[iVar9]));
			}
			iVar9++;
		}
	}
	vLocal_457[0 /*3*/] = { func_87(Global_35, 1, "player_zero", "PBL_ENTER_L") };
	fLocal_470[0] = func_88(Global_35, 1, "player_zero", "PBL_ENTER_L");
	vLocal_457[1 /*3*/] = { func_87(Global_35, 1, "player_zero", "PBL_ENTER_N") };
	fLocal_470[1] = func_88(Global_35, 1, "player_zero", "PBL_ENTER_N");
	vLocal_457[2 /*3*/] = { func_87(Global_35, 1, "player_zero", "PBL_ENTER_R") };
	fLocal_470[2] = func_88(Global_35, 1, "player_zero", "PBL_ENTER_R");
	vLocal_457[3 /*3*/] = { func_87(Global_35, 1, "player_zero", "PBL_ENTER_STAND") };
	fLocal_470[3] = func_88(Global_35, 1, "player_zero", "PBL_ENTER_STAND");
	__LIB_3__::func_285(iLocal_347[0], &Local_14, 0);
	return true;
}

void func_14(bool bParam0)
{
	if (bParam0)
	{
		if (!func_24(268435456))
		{
			__LIB_3__::func_820(53, 1);
			__LIB_4__::func_373(1, 8388608);
			__LIB_4__::func_373(1, 2048);
			func_96(268435456);
		}
	}
	else if (func_24(268435456))
	{
		__LIB_3__::func_820(53, 0);
		__LIB_4__::func_372(1, 8388608);
		__LIB_4__::func_372(1, 2048);
		func_97(268435456);
	}
}

bool func_17()
{
	if (__LIB_2__::func_157(iLocal_772[1], Global_36) && !bLocal_843)
	{
		bLocal_843 = true;
	}
	if (!func_100(&Local_14, &iLocal_208, 0, 0, 1, 0, 1, 0))
	{
		return false;
	}
	return true;
}

bool func_18()
{
	if (iLocal_684 == 13)
	{
		if (!func_101(64))
		{
			if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_772[24], Global_36))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_19()
{
	if (__LIB_3__::func_464(iLocal_347[0], 0, &Local_691, &iLocal_719, 0, 0))
	{
		if (__LIB_1__::func_339(iLocal_719, 1, 1, 1, 0))
		{
			return true;
		}
		switch (iLocal_719)
		{
			case 8192:
				if (((__LIB_2__::func_157(iLocal_772[2], Global_36) || __LIB_2__::func_157(iLocal_772[4], Global_36)) || __LIB_2__::func_157(iLocal_772[3], Global_36)) || Global_1935630.f_24)
				{
					return true;
				}
				break;
		}
	}
	if (iLocal_684 > 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_347[0]))
		{
			if (__LIB_2__::func_157(iLocal_772[2], Global_36) && PED::IS_PED_RAGDOLL(iLocal_347[0]))
			{
				return true;
			}
		}
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"), 2791.884f, -1173.433f, 48.86314f, 5.25f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_WINDOW_SMASHED"), 2791.884f, -1173.433f, 48.86314f, 5.25f))
	{
		return true;
	}
	return false;
}

bool func_20(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(uLocal_729[iParam0], iParam1);
}

bool func_21()
{
	int iVar0;
	int iVar1;
	if (iLocal_681 <= 0 || iLocal_685 < 1)
	{
		switch (iLocal_719)
		{
			case 2048:
				if (!PED::IS_PED_RAGDOLL(iLocal_347[0]))
				{
					return false;
				}
			default:
				break;
		}
		if (!func_20(0, 128))
		{
			if (func_105(0, iLocal_347[0]))
			{
				if (func_106(0, "s_DOOR_LOOP"))
				{
					func_85(0, "PB_DOOR_FLEE", 0);
					func_107(0, 128);
				}
				else if (func_108())
				{
					iVar0 = __LIB_3__::func_547(iLocal_347[0], Global_35, 1f);
					switch (iVar0)
					{
						case 0:
						case 1:
							break;
						case 3:
							func_85(0, "PB_BAR_REACT_L", 0);
							func_107(0, 128);
							break;
						case 2:
							func_85(0, "PB_BAR_REACT_R", 0);
							func_107(0, 128);
							break;
					}
				}
				else if (func_106(0, "s_HALL_LOOP"))
				{
					func_85(0, "PB_HALLWAY_FLEE", 0);
					func_107(0, 128);
				}
				else
				{
					func_107(0, 128);
					func_107(0, 256);
				}
			}
		}
		if (!func_20(0, 256))
		{
			if (func_110(iLocal_347[0], 0, "PROSTITUTE", 0, 0, 1, 0))
			{
				func_107(0, 256);
			}
		}
		if (!func_20(0, 512))
		{
			if (((__LIB_2__::func_157(iLocal_772[1], Global_36) || __LIB_2__::func_157(iLocal_772[2], Global_36)) || __LIB_2__::func_157(iLocal_772[3], Global_36)) || VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_772[4], Global_36))
			{
				__LIB_2__::func_504(iLocal_347[0], 0);
				func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V2_WHOREAGGRO", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				func_107(0, 512);
			}
		}
		if (func_20(0, 256))
		{
			__LIB_0__::func_325(&(uLocal_213[0]));
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_347[0], Global_35, 2, 524288, -1082130432 /* Float: -1f */, -1, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_347[0], 230, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_347[0], 288, true);
			return true;
		}
	}
	else
	{
		switch (iLocal_719)
		{
			case 2048:
				if (!PED::IS_PED_RAGDOLL(iLocal_347[0]))
				{
					return false;
				}
			default:
				break;
		}
		iVar1 = __LIB_4__::func_374(&iLocal_208, 1, 0, -1, 0, -1082130432 /* Float: -1f */);
		func_112(iVar1, Global_35, "RE_SAM_STD_V1_FAIL", -1082130432 /* Float: -1f */, 1, 291934926, 0);
		__LIB_0__::func_325(&(uLocal_213[0]));
		TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_347[0], Global_35, 2, 524288, -1082130432 /* Float: -1f */, -1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_347[0], 230, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_347[0], 288, true);
		func_115(0);
		iLocal_681 = 7;
		return true;
	}
	return false;
}

bool func_23()
{
	if (iLocal_681 < 7)
	{
		if (iLocal_685 <= 1)
		{
			if (iLocal_684 >= 10)
			{
				func_118();
			}
			if (func_119())
			{
				func_115(0);
				iLocal_681 = 7;
			}
		}
	}
	else if (!bLocal_675)
	{
		if (func_120(0))
		{
			bLocal_675 = true;
		}
	}
	switch (iLocal_681)
	{
		case 0:
			if (((iLocal_684 < 13 && iLocal_684 > 6) && __LIB_2__::func_157(iLocal_772[4], Global_36)) && func_121())
			{
				func_96(2048);
				func_122();
				iLocal_685 = 1;
				iLocal_681 = 2;
			}
			else if (func_123())
			{
				func_122();
				iLocal_681 = 2;
			}
			break;
		case 2:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 31, 1);
			if (func_124())
			{
				func_125();
				func_126(0);
				iLocal_681 = 7;
			}
			break;
		case 7:
			func_127(0);
			if (!Local_14.f_46)
			{
				Local_14.f_46 = 1;
			}
			if (func_128())
			{
				func_129();
				__LIB_3__::func_124(1236420520, 1);
				__LIB_3__::func_124(-74215266, 1);
				Local_14.f_44 = 1;
				func_44(joaat("RESAM_STOP"));
				iLocal_681 = 8;
			}
			break;
		case 8:
			if (func_130())
			{
				iLocal_681 = 9;
			}
			break;
		case 9:
			if (func_131())
			{
				return true;
			}
			break;
	}
	__LIB_0__::func_11();
	return false;
}

bool func_24(int iParam0)
{
	return __LIB_0__::func_27(iLocal_720, iParam0);
}

bool func_35(int iParam0)
{
	return __LIB_0__::func_27(iLocal_721, iParam0);
}

void func_40(bool bParam0)
{
	if (__LIB_2__::func_1(iLocal_445[2], 0, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_445[2], 130, !bParam0);
		PED::SET_PED_CONFIG_FLAG(iLocal_445[2], 301, !bParam0);
		PED::SET_PED_CONFIG_FLAG(iLocal_445[2], 315, !bParam0);
		PED::SET_PED_CONFIG_FLAG(iLocal_445[2], 317, bParam0);
		PED::SET_PED_CONFIG_FLAG(iLocal_445[2], 297, bParam0);
	}
}

bool func_41(int iParam0)
{
	if (!func_24(64))
	{
		return true;
	}
	if (__LIB_4__::func_117(iParam0, 1114636288 /* Float: 60f */, 0))
	{
		return false;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return false;
	}
	return true;
}

void func_44(int iParam0)
{
	AUDIO::_0x05D6195FB4D428F4(iParam0);
}

void func_45(bool bParam0)
{
	PED::SET_PED_CONFIG_FLAG(Global_35, 364, bParam0);
}

void func_46(bool bParam0)
{
	if (bParam0)
	{
		if (!func_24(262144))
		{
			HUD::_HIDE_HUD_COMPONENT(724769646);
			func_96(262144);
		}
	}
	else if (func_24(262144))
	{
		HUD::_DISPLAY_HUD_COMPONENT(724769646);
		func_97(262144);
	}
}

void func_47(bool bParam0)
{
	if (bParam0)
	{
		if (func_24(134217728))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			func_97(134217728);
		}
	}
	else if (!func_24(134217728))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
		func_96(134217728);
	}
}

void func_49(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
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
			__LIB_3__::func_238(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 0))
			{
				__LIB_3__::func_259((*iParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, iParam1[iVar0]))
				{
					__LIB_2__::func_32(iParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_288((*iParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*iParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_3__::func_468(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		func_164(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_165(uParam0->f_3, uParam0->f_185);
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
		func_166(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_53()
{
	switch (__LIB_0__::func_12())
	{
		case 5:
			Local_218[0 /*32*/].f_6 = { 2808.137f, -1160.175f, 46.74862f };
			Local_218[0 /*32*/].f_9 = 203.2619f;
			StringCopy(&(Local_218[0 /*32*/].f_23), "BRONTE_GOON_3", 64);
			Local_218[0 /*32*/].f_1 = joaat("G_M_M_UNIBRONTEGOONS_01");
			Local_218[0 /*32*/].f_3 = 240805573;
			__LIB_3__::func_478(&(Local_218[0 /*32*/].f_22));
			Local_218[1 /*32*/].f_6 = { 2802.65f, -1160.09f, 46.77583f };
			Local_218[1 /*32*/].f_9 = 104.15f;
			StringCopy(&(Local_218[1 /*32*/].f_23), "BRONTE_GOON_2", 64);
			Local_218[1 /*32*/].f_1 = joaat("G_M_M_UNIBRONTEGOONS_01");
			Local_218[1 /*32*/].f_3 = -616595312;
			__LIB_3__::func_478(&(Local_218[1 /*32*/].f_22));
			Local_218[2 /*32*/].f_6 = { 2811.663f, -1162.713f, 46.6329f };
			Local_218[2 /*32*/].f_9 = 135.2267f;
			StringCopy(&(Local_218[2 /*32*/].f_23), "BRONTE_GOON_1", 64);
			Local_218[2 /*32*/].f_1 = joaat("G_M_M_UNIBRONTEGOONS_01");
			Local_218[2 /*32*/].f_3 = 1255563200;
			__LIB_3__::func_478(&(Local_218[2 /*32*/].f_22));
			Local_218[3 /*32*/].f_6 = { 2794.222f, -1175.921f, 46.8704f };
			Local_218[3 /*32*/].f_9 = 32.4675f;
			StringCopy(&(Local_218[3 /*32*/].f_23), "BRONTE_GOON_1", 64);
			Local_218[3 /*32*/].f_1 = joaat("G_M_M_UNIBRONTEGOONS_01");
			__LIB_3__::func_478(&(Local_218[3 /*32*/].f_22));
			Local_351[0 /*32*/].f_6 = { 2794.444f, -1168.486f, 46.95134f };
			Local_351[0 /*32*/].f_9 = 250.6102f;
			StringCopy(&(Local_351[0 /*32*/].f_23), "RESAM_Whore", 64);
			Local_351[0 /*32*/].f_1 = joaat("RE_SLUMAMBUSH_FEMALES_01");
			Local_351[0 /*32*/].f_10 = 1;
			Local_351[0 /*32*/].f_3 = 1948524275;
			__LIB_3__::func_478(&(Local_351[0 /*32*/].f_22));
			break;
	}
}

void func_54()
{
	int iVar0;
	Local_384[0 /*12*/] = { 2793.153f, -1167.919f, 47.30885f };
	Local_384[0 /*12*/].f_7 = joaat("P_BOTTLEJD01X");
	Local_384[1 /*12*/] = { 2792.958f, -1168.253f, 47.3092f };
	Local_384[1 /*12*/].f_7 = joaat("P_CS_RAG01X");
	Local_384[2 /*12*/] = { 2792.809f, -1168.509f, 47.30913f };
	Local_384[2 /*12*/].f_7 = joaat("P_CS_SHOTGLASS01X");
	Local_384[3 /*12*/] = { 2792.643f, -1168.795f, 47.2922f };
	Local_384[3 /*12*/].f_7 = joaat("P_CS_SHOTGLASS01X");
	Local_384[4 /*12*/] = { 2793.042f, -1168.395f, 47.2922f };
	Local_384[4 /*12*/].f_7 = joaat("P_CS_SHOTGLASS01X");
	iVar0 = 0;
	while (iVar0 < Local_384)
	{
		Local_384[2 /*12*/].f_3 = 0f;
		Local_384[0 /*12*/].f_10 = 0;
		__LIB_1__::func_581(&(Local_384[iVar0 /*12*/].f_11), 8);
		iVar0++;
	}
}

void func_57()
{
	func_177();
}

bool func_58()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < __LIB_9__::func_881())
	{
		if (!func_179(iVar0))
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (!STREAMING::HAS_MODEL_LOADED(func_180(iVar1)))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

void func_59()
{
	func_181(0, "PBL_AMBUSH");
	func_181(0, "PBL_BAR_ACCEPT");
	func_181(0, "PBL_BAR_REJECT");
	func_181(0, "PBL_DOOR_ABANDON");
	func_181(0, "PBL_DOOR_REMIND_1");
	func_181(0, "PBL_DOOR_REMIND_2");
	func_181(0, "PBL_HALL_REMIND_1");
	func_181(0, "PBL_HALL_REMIND_2");
	func_181(0, "PBL_HALL_TO_DOOR");
	func_181(0, "PBL_OUTSIDE_AMBUSH");
	func_181(0, "PBL_AMBUSH_NO_WOMAN");
	func_181(0, "PB_DOOR_FLEE");
	func_181(0, "PB_BAR_REACT_L");
	func_181(0, "PB_BAR_REACT_R");
	func_181(0, "PB_HALLWAY_FLEE");
}

void func_60()
{
	func_181(0, "PBL_CALLOVER_L");
	func_181(0, "PBL_CALLOVER_N");
	func_181(0, "PBL_CALLOVER_R");
	func_181(0, "PBL_ENTER_L");
	func_181(0, "PBL_ENTER_N");
	func_181(0, "PBL_ENTER_R");
	func_181(0, "PBL_ENTER_STAND");
	func_181(1, "PBL_ENTER_L");
	func_181(1, "PBL_ENTER_N");
	func_181(1, "PBL_ENTER_R");
	func_181(1, "PBL_ENTER_STAND");
	func_181(1, "PBL_BAR_ACCEPT");
	func_181(1, "PBL_BAR_REJECT");
	func_181(1, "PL_MTH_ENTER_LEFT");
	func_181(1, "PL_MTH_ENTER_FORWARD");
}

void func_61()
{
	func_181(2, "PB_DRINK");
	func_181(2, "PB_HELLO_L");
	func_181(2, "PB_HELLO_N");
	func_181(2, "PB_HELLO_R");
	func_181(2, "PB_POUR_DRINK");
	func_181(2, "PB_TAKE_GLASS");
	func_181(3, "PB_ENTER_FL");
	func_181(3, "PB_ENTER_FR");
	func_181(3, "PB_ENTER_L");
	func_181(3, "PB_ENTER_N");
	func_181(3, "PB_MTH_ENTER");
}

bool func_64()
{
	if (!func_183(0, "PBL_CALLOVER_L"))
	{
		return false;
	}
	if (!func_183(0, "PBL_CALLOVER_N"))
	{
		return false;
	}
	if (!func_183(0, "PBL_CALLOVER_R"))
	{
		return false;
	}
	if (!func_183(1, "PBL_ENTER_L"))
	{
		return false;
	}
	if (!func_183(1, "PBL_ENTER_N"))
	{
		return false;
	}
	if (!func_183(1, "PBL_ENTER_R"))
	{
		return false;
	}
	if (!func_183(1, "PBL_ENTER_STAND"))
	{
		return false;
	}
	if (!func_183(1, "PBL_BAR_ACCEPT"))
	{
		return false;
	}
	if (!func_183(1, "PBL_BAR_REJECT"))
	{
		return false;
	}
	if (!func_183(1, "PL_MTH_ENTER_LEFT"))
	{
		return false;
	}
	if (!func_183(1, "PL_MTH_ENTER_FORWARD"))
	{
		return false;
	}
	if (!func_183(0, "PBL_ENTER_L"))
	{
		return false;
	}
	if (!func_183(0, "PBL_ENTER_N"))
	{
		return false;
	}
	if (!func_183(0, "PBL_ENTER_R"))
	{
		return false;
	}
	if (!func_183(0, "PBL_ENTER_STAND"))
	{
		return false;
	}
	if (!func_183(0, "PB_DOOR_FLEE"))
	{
		return false;
	}
	if (!func_183(0, "PB_BAR_REACT_L"))
	{
		return false;
	}
	if (!func_183(0, "PB_BAR_REACT_R"))
	{
		return false;
	}
	if (!func_183(0, "PB_HALLWAY_FLEE"))
	{
		return false;
	}
	return true;
}

bool func_65()
{
	if (!func_183(0, "PBL_AMBUSH"))
	{
		return false;
	}
	if (!func_183(0, "PBL_BAR_ACCEPT"))
	{
		return false;
	}
	if (!func_183(0, "PBL_BAR_REJECT"))
	{
		return false;
	}
	if (!func_183(0, "PBL_DOOR_ABANDON"))
	{
		return false;
	}
	if (!func_183(0, "PBL_DOOR_REMIND_1"))
	{
		return false;
	}
	if (!func_183(0, "PBL_DOOR_REMIND_2"))
	{
		return false;
	}
	if (!func_183(0, "PBL_HALL_REMIND_1"))
	{
		return false;
	}
	if (!func_183(0, "PBL_HALL_REMIND_2"))
	{
		return false;
	}
	if (!func_183(0, "PBL_HALL_TO_DOOR"))
	{
		return false;
	}
	if (!func_183(0, "PBL_AMBUSH_NO_WOMAN"))
	{
		return false;
	}
	return true;
}

bool func_66()
{
	if (!func_183(2, "PB_DRINK"))
	{
		return false;
	}
	if (!func_183(2, "PB_HELLO_L"))
	{
		return false;
	}
	if (!func_183(2, "PB_HELLO_N"))
	{
		return false;
	}
	if (!func_183(2, "PB_HELLO_R"))
	{
		return false;
	}
	if (!func_183(2, "PB_POUR_DRINK"))
	{
		return false;
	}
	if (!func_183(2, "PB_TAKE_GLASS"))
	{
		return false;
	}
	if (!func_183(3, "PB_ENTER_FL"))
	{
		return false;
	}
	if (!func_183(3, "PB_ENTER_FR"))
	{
		return false;
	}
	if (!func_183(3, "PB_ENTER_L"))
	{
		return false;
	}
	if (!func_183(3, "PB_ENTER_N"))
	{
		return false;
	}
	if (!func_183(3, "PB_MTH_ENTER"))
	{
		return false;
	}
	return true;
}

bool func_72(int iParam0, int iParam1, bool bParam2)
{
	if (__LIB_2__::func_1(iLocal_445[iParam1], 0, 1))
	{
		return true;
	}
	if (!__LIB_1__::func_220(5))
	{
		return false;
	}
	if (bParam2)
	{
		iLocal_445[iParam1] = __LIB_2__::func_963(iParam0);
	}
	else if (__LIB_2__::func_934(iParam0, 0))
	{
		iLocal_445[iParam1] = __LIB_2__::func_965(iParam0, 0, 0, 0, 1, 1);
	}
	if (!__LIB_2__::func_1(iLocal_445[iParam1], 0, 1))
	{
		__LIB_2__::func_935(iParam0, 1, 0, 0, 0, 0);
		return false;
	}
	return false;
}

bool func_74()
{
	if (func_24(8))
	{
		return true;
	}
	iLocal_208[iLocal_828] = __LIB_3__::func_870(Local_218[iLocal_828 /*32*/].f_1, &(Local_218[iLocal_828 /*32*/]), Local_218[iLocal_828 /*32*/].f_6, Local_218[iLocal_828 /*32*/].f_9, 1, 0, 1, 0, 1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_218[iLocal_828 /*32*/].f_23)))
	{
		__LIB_2__::func_133(iLocal_208[iLocal_828], &(Local_218[iLocal_828 /*32*/].f_23), 0);
	}
	PED::SET_PED_CONFIG_FLAG(iLocal_208[iLocal_828], 278, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_208[iLocal_828], 6, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_208[iLocal_828], joaat("REL_CRIMINALS"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_208[iLocal_828], true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_208[iLocal_828], true, true);
	iLocal_828++;
	if (iLocal_828 >= 3)
	{
		iLocal_828 = 0;
		func_208();
		func_96(8);
		return true;
	}
	return false;
}

void func_75()
{
	__LIB_14__::func_439(iLocal_772[10], 8);
	if (!__LIB_4__::func_930(1))
	{
		__LIB_3__::func_378(iLocal_772[11], 0);
		__LIB_3__::func_378(iLocal_772[12], 0);
	}
	func_212(8, 1);
	uLocal_676 = PED::_0x4C39C95AE5DB1329(iLocal_772[8], 0, 5);
	func_212(7, 0);
}

bool func_76()
{
	if (!__LIB_4__::func_930(1) || MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, 2807.53f, -1164.435f, 46.96497f, false) < 5.9f)
	{
		return true;
	}
	if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_351[0 /*32*/].f_1, Local_351[0 /*32*/].f_6, false))
	{
		if (!__LIB_0__::func_75(&(vLocal_732[9 /*3*/])))
		{
			__LIB_1__::func_283(&(vLocal_732[9 /*3*/]), 0);
		}
		else if (__LIB_1__::func_285(&(vLocal_732[9 /*3*/]), 4f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_351[0 /*32*/].f_6, true) > 6f)
		{
			return true;
		}
	}
	else if (!__LIB_0__::func_75(&(vLocal_732[9 /*3*/])))
	{
		__LIB_1__::func_283(&(vLocal_732[9 /*3*/]), 0);
	}
	else
	{
		if (__LIB_3__::func_135(&(vLocal_732[9 /*3*/])) > 500)
		{
		}
		__LIB_1__::func_148(&(vLocal_732[9 /*3*/]));
	}
	return false;
}

void func_81(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	sVar0 = func_237(iParam0);
	if (bParam3)
	{
		if (!__LIB_2__::func_1(iParam2, 0, 1))
		{
			return;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_452[iParam0], sParam1, iParam2, 0);
}

void func_82(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	sVar0 = func_237(iParam0);
	if (bParam3)
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam2))
		{
			return;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_452[iParam0], sParam1, iParam2, 0);
}

void func_83(int iParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_452[iParam0]))
	{
		return;
	}
	if (bParam2)
	{
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_452[iParam0], sParam1, bParam2, false);
}

void func_84(int iParam0)
{
	char* sVar0;
	sVar0 = func_237(iParam0);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_452[iParam0]))
	{
		return;
	}
	ANIMSCENE::START_ANIM_SCENE(iLocal_452[iParam0]);
}

void func_85(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;
	sVar0 = func_237(iParam0);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_452[iParam0]))
	{
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_452[iParam0], sParam1, bParam2);
}

int func_86(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(uParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *iParam0) && iVar4 < iParam2)
			{
				if (__LIB_2__::func_444(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!__LIB_0__::func_208(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*iParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

Vector3 func_87(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	return __LIB_3__::func_508(iParam0, iLocal_452[iParam1], sParam2, sParam3, 0);
}

float func_88(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	return __LIB_3__::func_656(iParam0, iLocal_452[iParam1], sParam2, sParam3, 0);
}

void func_96(int iParam0)
{
	__LIB_1__::func_336(&iLocal_720, iParam0);
}

void func_97(int iParam0)
{
	__LIB_0__::func_516(&iLocal_720, iParam0);
}

bool func_100(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_164(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_317(uParam0, iParam1);
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
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
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
					__LIB_3__::func_433(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!__LIB_3__::func_344(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (__LIB_1__::func_85(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*iParam1)[0]) && !PED::IS_PED_INJURED((*iParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*iParam1)[0])))
			{
				__LIB_3__::func_345(uParam0, (*iParam1)[0]);
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

bool func_101(int iParam0)
{
	return __LIB_0__::func_27(iLocal_723, iParam0);
}

bool func_105(int iParam0, int iParam1)
{
	char* sVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_452[iParam0]))
	{
		return false;
	}
	sVar0 = func_237(iParam0);
	return ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam1, iLocal_452[iParam0]);
}

bool func_106(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_452[iParam0], sParam1, 1))
	{
		return true;
	}
	return false;
}

void func_107(int iParam0, int iParam1)
{
	__LIB_1__::func_336(&(uLocal_729[iParam0]), iParam1);
}

bool func_108()
{
	if (func_106(0, "s_BAR_BASE") || func_106(0, "s_BASE_R"))
	{
		return true;
	}
	return false;
}

bool func_110(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, int iParam6)
{
	if (__LIB_2__::func_598(iParam0, iLocal_452[iParam1], sParam2, iParam3, fParam4, 1, iParam6))
	{
		return true;
	}
	return false;
}

bool func_112(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (iParam0 == iLocal_347[0] || iParam1 == iLocal_347[0])
	{
		bParam4 = false;
	}
	if (__LIB_2__::func_303(iParam0, iParam1, sParam2, "", fParam3, 0, 0, 0, 1, fParam3 > 0f, bParam4, iParam5, 1, bParam6, 0))
	{
		if (iParam0 == Global_35)
		{
			if (iParam0 != iParam1)
			{
				if (!PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(Global_35, iParam1, 7500, 48, 31, 0);
				}
			}
		}
		else if (iParam1 == Global_35)
		{
			if (iParam0 != iParam1)
			{
				if (!PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(Global_35, iParam0, 7500, 48, 31, 0);
				}
			}
		}
		iLocal_678 = iParam0;
		return true;
	}
	return false;
}

void func_115(bool bParam0)
{
	bool bVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (__LIB_2__::func_1(iLocal_208[iVar1], 0, 1))
		{
			TASK::TASK_COMBAT_PED(iLocal_208[iVar1], Global_35, 0, 0);
			PED::SET_PED_COMBAT_RANGE(iLocal_208[iVar1], 0);
			PED::_0x1854217C640B39EC(iLocal_208[iVar1], Global_35, 0f, 0f, 0f, 11f, 0, 0);
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_208[iVar1], 2);
			__LIB_2__::func_73(iLocal_208[iVar1], &(uLocal_213[iVar1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			if (!bVar0 && bParam0)
			{
				if (__LIB_2__::func_227(0f, 1, iLocal_208[iVar1], 1))
				{
					if (func_112(iLocal_208[iVar1], Global_35, "RE_SAM_STD_V1_AGGRO", -1082130432 /* Float: -1f */, 1, 291934926, 0))
					{
						bVar0 = true;
					}
				}
			}
		}
		iVar1++;
	}
	__LIB_3__::func_124(-74215266, 1);
	__LIB_3__::func_124(1236420520, 1);
	if (__LIB_2__::func_1(iLocal_347[0], 0, 0))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_347[0], Global_35, 3, 524288, -1082130432 /* Float: -1f */, -1, 0);
	}
	func_96(1);
}

void func_118()
{
	float fVar0;
	vector3 vVar1;
	if (!__LIB_2__::func_1(iLocal_347[0], 0, 1))
	{
		return;
	}
	if (PED::IS_PED_FACING_PED(iLocal_347[0], Global_35, 90f))
	{
		return;
	}
	if (!PED::IS_PED_FACING_PED(Global_35, iLocal_347[0], 90f))
	{
		return;
	}
	fVar0 = __LIB_0__::func_94(iLocal_347[0], Global_36, 0);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iLocal_347[0], true, false) };
	vVar1.f_2 = (vVar1.z - 0.1f);
	if (fVar0 > 3f)
	{
		return;
	}
	TASK::TASK_LOOK_AT_COORD(Global_35, vVar1, 500, 12, 41, 0);
}

bool func_119()
{
	int iVar0;
	int iVar1;
	if (!func_24(8))
	{
		return false;
	}
	if (!func_24(64))
	{
		return false;
	}
	if (!__LIB_2__::func_157(iLocal_772[17], Global_36))
	{
		return false;
	}
	iVar1 = -1;
	if (!func_300(&iLocal_208, &(Local_14.f_5), &uLocal_690, &iLocal_658, 0, 2, 1))
	{
		return false;
	}
	iVar1 = iLocal_658;
	if (iVar1 == -1)
	{
		return false;
	}
	func_112(iLocal_208[iVar0], Global_35, "RE_SAM_STD_V1_FAIL", -1082130432 /* Float: -1f */, 1, 291934926, 0);
	return true;
}

bool func_120(int iParam0)
{
	if (!__LIB_2__::func_1(iLocal_347[iParam0], 0, 1))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iLocal_347[iParam0], 0))
	{
		return true;
	}
	if (PED::IS_PED_FLEEING(iLocal_347[iParam0]))
	{
		return true;
	}
	if (PED::_0xD0B7AEB56229D317(iLocal_347[iParam0]) == Global_35)
	{
		return true;
	}
	if (PED::_0xD0B7AEB56229D317(Global_35) == iLocal_347[iParam0])
	{
		return true;
	}
	return false;
}

bool func_121()
{
	if (TASK::_0x038B1F1674F0E242(Global_35))
	{
		return false;
	}
	if (__LIB_4__::func_365())
	{
		return false;
	}
	if (__LIB_1__::func_499() || __LIB_0__::func_100())
	{
		return false;
	}
	if (__LIB_2__::func_157(iLocal_772[23], Global_36))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		if ((!PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_OPEN_WHEEL_MENU")) && !PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_OPEN_JOURNAL"))) && !PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_MENU")))
		{
			return true;
		}
	}
	if (__LIB_2__::func_157(iLocal_772[23], __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	}
	return false;
}

void func_122()
{
	AUDIO::PREPARE_MUSIC_EVENT("RESAM_START");
	AUDIO::PREPARE_MUSIC_EVENT("RESAM_KNIFE");
	AUDIO::PREPARE_MUSIC_EVENT("RESAM_STOP");
	AUDIO::PREPARE_MUSIC_EVENT("RESAM_FAIL");
}

bool func_123()
{
	float fVar0;
	if (!func_24(8192))
	{
		func_305();
	}
	else
	{
		func_306();
	}
	if (iLocal_684 > 1)
	{
		func_307();
	}
	if (func_101(131072))
	{
		if (iLocal_681 < 7)
		{
			if (__LIB_2__::func_227(0, 1, iLocal_347[0], 1))
			{
				func_14(0);
				func_40(1);
			}
		}
	}
	if (iLocal_684 <= 1)
	{
		if (BUILTIN::VDIST2(Global_36, 2793.271f, -1175.137f, 46.8972f) < 16f || __LIB_2__::func_157(iLocal_772[2], Global_36))
		{
			__LIB_3__::func_815(1, 1065353216 /* Float: 1f */);
		}
	}
	else
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 31, 1);
	}
	if (iLocal_684 < 7 && iLocal_684 >= 1)
	{
		func_309();
		if (iLocal_684 > 1)
		{
			func_40(0);
		}
	}
	if (!func_24(524288))
	{
		if (iLocal_684 >= 11 && iLocal_684 < 13)
		{
			if (__LIB_2__::func_227(0f, 1, Global_35, 1) && __LIB_2__::func_227(0f, 1, iLocal_347[0], 1))
			{
				if (__LIB_0__::func_94(iLocal_347[0], Global_36, 0) < 1.5f && !func_121())
				{
					if (func_110(Global_35, 1, "player_zero", 0, 0, 0, 0))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_347[0], Global_35))
						{
							func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHOREFEISTY", -1082130432 /* Float: -1f */, 1, 291934926, 0);
							func_96(524288);
						}
					}
				}
			}
		}
	}
	switch (iLocal_684)
	{
		case 0:
			func_310(1, 1);
			iLocal_684 = 1;
			break;
		case 1:
			if (__LIB_2__::func_157(iLocal_772[1], Global_36))
			{
				func_40(0);
				func_311(0);
				if (__LIB_19__::func_168(iLocal_347[0], &uLocal_829, &uLocal_834, &iLocal_835, 1.5f, 10f, 0f, 0, 3.5f, 1) || func_313())
				{
					if (func_314())
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_347[0], Global_35, -1, 48, 31, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
						TASK::TASK_SWAP_WEAPON(Global_35, 1, true, 0, 0);
						iLocal_684 = 3;
					}
					else
					{
						func_315(&uLocal_829, &uLocal_834);
						iLocal_835 = 0;
					}
				}
				else if (!func_24(131072))
				{
					func_316(iLocal_347[0], Global_35, 2, 1, 10f, 1);
					func_96(131072);
				}
			}
			break;
		case 3:
			func_317();
			if (__LIB_2__::func_157(iLocal_772[1], Global_36))
			{
				if (func_313())
				{
					iLocal_684 = 5;
				}
				else if (func_108())
				{
					if ((!PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_347[0], false, false), 45f) || ENTITY::GET_ENTITY_SPEED(Global_35) < 0.5f) && __LIB_0__::func_94(iLocal_347[0], Global_36, 0) > 3f)
					{
						if (!func_101(2048))
						{
							if (__LIB_1__::func_285(&(vLocal_732[1 /*3*/]), 18f))
							{
								__LIB_1__::func_148(&(vLocal_732[1 /*3*/]));
								func_83(0, "internal_loop", 1);
								func_85(0, "PBL_CALLOVER_N", 1);
								func_316(iLocal_347[0], Global_35, 1, 1, -1f, 1);
							}
						}
						else if (__LIB_1__::func_285(&(vLocal_732[1 /*3*/]), 14f))
						{
							func_96(1024);
							func_318(32768);
							func_96(16384);
							__LIB_2__::func_592(&Local_519, 1, 1);
							iLocal_684 = 8;
						}
					}
				}
			}
			break;
		case 5:
			func_317();
			if (func_313())
			{
				func_320(1);
				__LIB_2__::func_298();
				iLocal_684 = 6;
			}
			break;
		case 6:
			func_322();
			if (__LIB_2__::func_157(iLocal_772[1], Global_36))
			{
				if (func_106(1, "s_BAR_IDLE_LOOP"))
				{
					func_47(1);
					func_46(1);
				}
				if (__LIB_2__::func_227(-2f, 1, 0, 0))
				{
					func_323();
					iLocal_684 = 7;
				}
			}
			break;
		case 7:
			func_322();
			if (func_106(1, "s_BAR_IDLE_LOOP"))
			{
				func_47(1);
				func_46(1);
			}
			if (iLocal_593 == -1)
			{
				if ((__LIB_2__::func_227(-3f, 1, 0, 0) || func_101(512)) && func_101(256))
				{
					if (!func_324(2048))
					{
						__LIB_2__::func_451(&vLocal_498, 0);
						func_310(0, 1);
						__LIB_1__::func_283(&(vLocal_732[7 /*3*/]), 0);
						func_326(2048);
					}
					func_327();
				}
				else
				{
					func_309();
				}
			}
			else
			{
				func_309();
			}
			if ((func_106(1, "s_BAR_IDLE_LOOP") && func_108()) && __LIB_2__::func_227(0f, 1, iLocal_347[0], 1))
			{
				switch (iLocal_593)
				{
					case 0:
						func_83(0, "internal_loop", 1);
						func_85(0, "PBL_BAR_ACCEPT", 1);
						func_83(1, "BAR_LOOP", 1);
						func_85(1, "PBL_BAR_ACCEPT", 1);
						func_328();
						func_316(iLocal_347[0], Global_35, 1, 1, 10f, 1);
						TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("re_slum_ambush_assistcurve", 1, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
						__LIB_2__::func_592(&Local_519, 1, 1);
						vLocal_498.f_2 = 0;
						iLocal_684 = 9;
						break;
					case 1:
						func_328();
						func_316(iLocal_347[0], Global_35, 1, 1, 10f, 1);
						__LIB_2__::func_592(&Local_519, 1, 1);
						vLocal_498.f_2 = 0;
						iLocal_684 = 8;
						break;
					default:
						if (!__LIB_4__::func_366(&vLocal_498))
						{
							if (!func_101(512))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_347[0], Global_35, 4000, 48, 41, 0);
								if (__LIB_1__::func_285(&(vLocal_732[7 /*3*/]), 7f))
								{
									func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_POST_OFFER_A", -1082130432 /* Float: -1f */, 1, 291934926, 0);
									func_318(512);
								}
							}
							else if (!func_101(536870912))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_347[0], Global_35, 4000, 48, 41, 0);
								if (__LIB_1__::func_285(&(vLocal_732[7 /*3*/]), 16f))
								{
									func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_POST_OFFER_B", -1082130432 /* Float: -1f */, 1, 291934926, 0);
									func_318(536870912);
								}
							}
							else if (!func_101(1073741824 /* Float: 2f */))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_347[0], Global_35, 4000, 48, 41, 0);
								if (__LIB_1__::func_285(&(vLocal_732[7 /*3*/]), 28f))
								{
									func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_POST_OFFER_TIMEOUT", -1082130432 /* Float: -1f */, 1, 291934926, 0);
									func_318(1073741824 /* Float: 2f */);
								}
							}
							else
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_347[0], Global_35, 4000, 48, 41, 0);
								if (__LIB_1__::func_285(&(vLocal_732[7 /*3*/]), 32f))
								{
									func_328();
									func_316(iLocal_347[0], Global_35, 1, 1, 10f, 1);
									__LIB_2__::func_592(&Local_519, 1, 1);
									vLocal_498.f_2 = 0;
									iLocal_684 = 8;
								}
							}
						}
						break;
				}
				__LIB_1__::func_283(&uLocal_554, 0);
				if ((__LIB_1__::func_285(&uLocal_554, 3f) && !__LIB_4__::func_366(&vLocal_498)) && !__LIB_3__::func_383(PLAYER::PLAYER_ID(), &(iLocal_347[0])))
				{
					if (func_331())
					{
						func_316(iLocal_347[0], Global_35, 1, 1, 10f, 1);
						func_328();
						__LIB_2__::func_592(&Local_519, 1, 1);
						vLocal_498.f_2 = 0;
						iLocal_684 = 8;
					}
				}
			}
			break;
		case 8:
			func_309();
			func_83(0, "internal_loop", 1);
			func_85(0, "PBL_BAR_REJECT", 1);
			if (!func_110(Global_35, 1, "player_zero", 0, 0, 0, 0))
			{
				func_83(1, "BAR_LOOP", 1);
				func_85(1, "PBL_BAR_REJECT", 1);
			}
			func_326(1024);
			iLocal_684 = 9;
			break;
		case 9:
			__LIB_2__::func_298();
			func_309();
			__LIB_3__::func_123(-74215266, 1);
			func_212(9, 1);
			if (__LIB_2__::func_763(287, 1))
			{
				__LIB_2__::func_753(287, 0, 1, 0, 0);
			}
			if (__LIB_2__::func_763(288, 1))
			{
				__LIB_2__::func_753(288, 0, 1, 0, 0);
			}
			if (func_324(1024))
			{
				iLocal_684 = 13;
			}
			else
			{
				__LIB_2__::func_592(&Local_519, 0, 1);
				func_311(0);
				iLocal_684 = 11;
			}
			break;
		case 11:
			func_333();
			if (!func_35(512))
			{
				if (func_110(Global_35, 1, "player_zero", 0, 0, 0, 0))
				{
					func_46(0);
					func_47(1);
					func_334(512);
				}
			}
			else
			{
				func_335();
			}
			if (func_106(0, "s_HALL_LOOP"))
			{
				if (!func_24(8192))
				{
					func_336();
					func_311(1);
					func_96(8192);
				}
				__LIB_1__::func_283(&(vLocal_732[4 /*3*/]), 0);
				if (__LIB_0__::func_94(iLocal_347[0], Global_36, 0) < 3.12f || func_24(1048576))
				{
					func_83(0, "internal_loop", 1);
					func_85(0, "PBL_HALL_TO_DOOR", 1);
					iLocal_594 = -1;
					iLocal_684 = 12;
				}
				else if (!func_101(2))
				{
					if ((__LIB_1__::func_285(&(vLocal_732[4 /*3*/]), 6f) && !__LIB_4__::func_366(&vLocal_498)) || iLocal_594 != -1)
					{
						__LIB_1__::func_148(&(vLocal_732[4 /*3*/]));
						func_83(0, "internal_loop", 1);
						func_85(0, "PBL_HALL_REMIND_1", 1);
						iLocal_594 = -1;
						func_311(0);
						func_326(4096);
						func_318(2);
					}
				}
				else if (!func_101(4))
				{
					if (iLocal_595 != -1)
					{
						if (__LIB_2__::func_227(-4f, 1, 0, 0))
						{
							switch (iLocal_595)
							{
								case 0:
									if (!__LIB_2__::func_466(&(Local_519[1 /*17*/]), 1, 0))
									{
										__LIB_2__::func_411(&(Local_519[1 /*17*/]), 1, 0);
									}
									break;
								case 1:
									if (!__LIB_2__::func_466(&(Local_519[0 /*17*/]), 1, 0))
									{
										__LIB_2__::func_411(&(Local_519[0 /*17*/]), 1, 0);
									}
									break;
							}
						}
					}
					else if (func_324(4096))
					{
						if (__LIB_1__::func_285(&(vLocal_732[4 /*3*/]), 2f) && __LIB_2__::func_227(0f, 1, iLocal_347[0], 1))
						{
							func_311(1);
							func_339(4096);
						}
					}
					if ((__LIB_1__::func_285(&(vLocal_732[4 /*3*/]), 12f) && !__LIB_4__::func_366(&vLocal_498)) || iLocal_594 != -1)
					{
						__LIB_1__::func_148(&(vLocal_732[4 /*3*/]));
						func_83(0, "internal_loop", 1);
						func_85(0, "PBL_HALL_REMIND_2", 1);
						func_311(0);
						iLocal_594 = -1;
						func_318(4);
					}
				}
			}
			else if (func_340(0, "internal_loop"))
			{
				func_83(0, "internal_loop", 0);
			}
			break;
		case 12:
			func_309();
			if (func_340(0, "internal_loop"))
			{
				func_83(0, "internal_loop", 0);
			}
			__LIB_1__::func_148(&(vLocal_732[4 /*3*/]));
			__LIB_0__::func_37(&(vLocal_732[4 /*3*/]));
			__LIB_3__::func_123(-74215266, 1);
			iLocal_595 = -1;
			iLocal_684 = 13;
			break;
		case 13:
			func_333();
			func_342();
			if (!func_35(512))
			{
				if (func_110(Global_35, 1, "player_zero", 0, 0, 0, 0))
				{
					func_46(0);
					func_47(1);
					func_334(512);
				}
			}
			if (func_121() && !func_343())
			{
				iLocal_684 = 14;
			}
			else if (func_106(0, "s_DOOR_LOOP"))
			{
				__LIB_1__::func_283(&(vLocal_732[4 /*3*/]), 0);
				if (!func_324(2))
				{
					func_344();
					__LIB_2__::func_592(&Local_519, 0, 1);
					__LIB_2__::func_411(&(Local_519[1 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_519[0 /*17*/]), 1, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_347[0], 401, false);
					VOLUME::_SET_VOLUME_SCALE(iLocal_772[23], 3f, 2.173f, 3f);
					func_326(2);
				}
				else if (!func_324(8192))
				{
					if (iLocal_678 != Global_35 && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						func_311(1);
						func_326(8192);
					}
				}
				if (__LIB_2__::func_157(iLocal_772[4], Global_36) || func_101(16))
				{
					if (__LIB_0__::func_94(iLocal_347[0], Global_36, 0) < 6.22f)
					{
						if (!func_101(16))
						{
							if ((((__LIB_1__::func_285(&(vLocal_732[4 /*3*/]), 3f) && !__LIB_4__::func_366(&vLocal_498)) && __LIB_2__::func_227(0f, 1, Global_35, 1)) && __LIB_2__::func_227(0f, 1, iLocal_347[0], 1)) || iLocal_594 != -1)
							{
								__LIB_1__::func_148(&(vLocal_732[4 /*3*/]));
								func_83(0, "internal_loop", 1);
								func_85(0, "PBL_DOOR_REMIND_1", 1);
								iLocal_594 = -1;
								func_311(0);
								func_326(4096);
								func_318(16);
							}
						}
						else if (!func_101(32))
						{
							if (iLocal_595 != -1)
							{
								if (__LIB_2__::func_227(-4f, 1, 0, 0))
								{
									switch (iLocal_595)
									{
										case 0:
											if (!__LIB_2__::func_466(&(Local_519[1 /*17*/]), 1, 0))
											{
												__LIB_2__::func_411(&(Local_519[1 /*17*/]), 1, 0);
											}
											break;
										case 1:
											if (!__LIB_2__::func_466(&(Local_519[0 /*17*/]), 1, 0))
											{
												__LIB_2__::func_411(&(Local_519[0 /*17*/]), 1, 0);
											}
											break;
									}
								}
							}
							else if (func_324(4096))
							{
								if (__LIB_1__::func_285(&(vLocal_732[4 /*3*/]), 2f) && __LIB_2__::func_227(0f, 1, iLocal_347[0], 1))
								{
									func_311(1);
									func_339(4096);
								}
							}
							if ((__LIB_1__::func_285(&(vLocal_732[4 /*3*/]), 12f) && !__LIB_4__::func_366(&vLocal_498)) || iLocal_594 != -1)
							{
								__LIB_1__::func_148(&(vLocal_732[4 /*3*/]));
								func_83(0, "internal_loop", 1);
								func_85(0, "PBL_DOOR_REMIND_2", 1);
								iLocal_594 = -1;
								__LIB_2__::func_592(&Local_519, 1, 1);
								func_326(4096);
								func_318(32);
							}
						}
						else if (!func_101(64))
						{
							if (iLocal_595 != -1)
							{
								if (__LIB_2__::func_227(-4f, 1, 0, 0))
								{
									switch (iLocal_595)
									{
										case 0:
											if (!__LIB_2__::func_466(&(Local_519[1 /*17*/]), 1, 0))
											{
												__LIB_2__::func_411(&(Local_519[1 /*17*/]), 1, 0);
											}
											break;
										case 1:
											if (!__LIB_2__::func_466(&(Local_519[0 /*17*/]), 1, 0))
											{
												__LIB_2__::func_411(&(Local_519[0 /*17*/]), 1, 0);
											}
											break;
									}
								}
							}
							else if (func_324(4096))
							{
								if (__LIB_1__::func_285(&(vLocal_732[4 /*3*/]), 2f) && __LIB_2__::func_227(0f, 1, iLocal_347[0], 1))
								{
									func_311(1);
									func_339(4096);
								}
							}
							if (__LIB_1__::func_285(&(vLocal_732[4 /*3*/]), 12f))
							{
								__LIB_1__::func_148(&(vLocal_732[4 /*3*/]));
								func_83(0, "internal_loop", 1);
								func_85(0, "PBL_DOOR_ABANDON", 1);
								func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHOREABANDON", -1082130432 /* Float: -1f */, 0, 291934926, 0);
								func_14(0);
								func_40(1);
								func_318(64);
								iLocal_684 = 17;
							}
						}
					}
				}
			}
			else
			{
				if (func_340(0, "internal_loop"))
				{
					func_83(0, "internal_loop", 0);
				}
				if (__LIB_0__::func_94(iLocal_347[0], Global_36, 0) < 4f)
				{
					if (__LIB_2__::func_1(Global_35, 0, 1))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0.75f);
					}
				}
			}
			break;
		case 14:
			func_309();
			__LIB_1__::func_148(&(vLocal_732[4 /*3*/]));
			__LIB_0__::func_37(&(vLocal_732[4 /*3*/]));
			iLocal_684 = 15;
			break;
		case 15:
			func_309();
			func_345();
			func_342();
			if (func_121())
			{
				func_47(0);
				func_346();
				if (__LIB_0__::func_181())
				{
					__LIB_3__::func_465(2, 0, 0, "RE_HONOR_CHEATED", 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				if (__LIB_2__::func_227(0f, 1, iLocal_347[0], 1))
				{
					if (func_324(1024))
					{
						func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHOREBRETURN", -1082130432 /* Float: -1f */, 0, 291934926, 0);
					}
				}
				func_334(8);
				__LIB_1__::func_991(iLocal_347[0], 0);
				iLocal_684 = 16;
			}
			break;
		case 16:
			func_346();
			fVar0 = CAM::_0xA2B1C7EF759A63CE();
			if (fVar0 >= 0.97f)
			{
				func_83(0, "internal_loop", 1);
				func_85(0, "PBL_AMBUSH", 0);
				func_47(1);
				iLocal_684 = 17;
			}
			break;
		case 17:
			func_346();
			__LIB_3__::func_124(-74215266, 1);
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("re_slum_ambush_assistcurve", 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
			func_309();
			func_345();
			func_342();
			return true;
	}
	return false;
}

bool func_124()
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	func_350();
	if (iLocal_685 < 6 && iLocal_685 >= 2)
	{
		func_351(2797.752f, -1163.661f, 47.72393f, 4.2f);
		func_351(2794.14f, -1169.7f, 47.72393f, 4.5f);
		if (func_352())
		{
			func_353();
			if (!func_20(0, 16))
			{
				__LIB_0__::func_325(&(uLocal_349[0]));
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_347[0], Global_35, 0, 536960, -1f, -1, 0);
				func_107(0, 16);
			}
			iLocal_685 = 6;
		}
	}
	if (iLocal_685 >= 0 || func_35(1024))
	{
		func_346();
	}
	switch (iLocal_685)
	{
		case 0:
			func_345();
			func_354();
			if (func_121())
			{
				if (__LIB_2__::func_1(iLocal_445[2], 0, 1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_445[2], true);
				}
				func_320(1);
				func_346();
				__LIB_2__::func_246(&Local_844);
				__LIB_1__::func_991(iLocal_347[0], 0);
				iLocal_685 = 1;
			}
			break;
		case 1:
			func_345();
			if (func_24(2048))
			{
				if (!func_356(0, "PBL_AMBUSH_NO_WOMAN"))
				{
					__LIB_0__::func_325(&(uLocal_349[0]));
					func_84(0);
					func_320(1);
					func_85(0, "PBL_AMBUSH_NO_WOMAN", 1);
					__LIB_3__::func_124(-74215266, 1);
				}
			}
			else if (func_24(32768))
			{
				if (!func_35(256))
				{
				}
				else
				{
					func_81(0, "Gangster01", iLocal_208[0], 1);
					func_81(0, "Gangster02", iLocal_208[1], 1);
					func_81(0, "Gangster03", iLocal_208[2], 1);
					if (func_357(iLocal_347[0], 0, "PROSTITUTE", "PBL_OUTSIDE_AMBUSH", 0.5f, 180f))
					{
						func_81(0, "PROSTITUTE", iLocal_347[0], 1);
						func_84(0);
						func_85(0, "PBL_OUTSIDE_AMBUSH", 1);
					}
					else
					{
						func_84(0);
						func_85(0, "PBL_AMBUSH_NO_WOMAN", 1);
					}
					func_354();
					if (__LIB_2__::func_157(iLocal_772[13], Global_36))
					{
						if (__LIB_2__::func_1(iLocal_445[2], 0, 0))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_445[2], true);
						}
						__LIB_1__::func_283(&(vLocal_732[2 /*3*/]), 0);
						if (!func_24(2048))
						{
						}
						else
						{
							func_112(iLocal_208[0], iLocal_347[0], "RE_SAM_STD_V1_FOUND", -1082130432 /* Float: -1f */, 1, 291934926, 0);
						}
						__LIB_0__::func_7(&(Local_844.f_3), 2);
						func_127(1);
						func_359();
						func_360();
						TASK::_0x2E1D6D87346BB7D2(iLocal_347[0], Global_35, 0, 0);
						__LIB_2__::func_507(&(Local_14.f_5), 500);
						iLocal_685 = 2;
					}
					Jump @1682; //curOff = 658
					func_354();
					bVar4 = func_362(&iLocal_208, 0, &(Local_14.f_5), &(Local_14.f_5.f_16), 0, -1);
					if (bVar4)
					{
						__LIB_2__::func_504(iLocal_208[0], 0);
					}
					if (!func_363(0, 16))
					{
						if (func_110(iLocal_208[0], 0, "Gangster01", 0, 0, 1, 0) || bVar4)
						{
							PED::SET_PED_USING_ACTION_MODE(iLocal_208[0], true, -1, 0);
							if (!bVar4)
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iLocal_208[0], joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
								vVar8 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_208[0]) };
								vVar5 = { ENTITY::GET_ENTITY_COORDS(iLocal_208[0], true, false) + vVar8 };
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_SWAP_WEAPON(0, 1, false, 0, 0);
								TASK::TASK_STAND_STILL(0, 1000);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 3500, -1f, -1f, -1f);
								TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar5, 1f, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
								TASK::TASK_COMBAT_PED(0, Global_35, 68157440, 4096);
								__LIB_1__::func_474(iLocal_208[0], &iVar0, 0, 0, 1, 1);
								PED::_0x2208438012482A1A(iLocal_208[0], true, false);
							}
							else
							{
								TASK::TASK_COMBAT_PED(iLocal_208[0], Global_35, 68157440, 4096);
							}
							__LIB_2__::func_73(iLocal_208[0], &(uLocal_213[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
							func_365(0, 16);
						}
					}
					if (!func_363(1, 16))
					{
						if (func_110(iLocal_208[1], 0, "Gangster02", 0, 0, 1, 0) || bVar4)
						{
							if ((!bVar4 || !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_208[1])) && PED::_0xD0B7AEB56229D317(Global_35) != iLocal_208[1])
							{
								TASK::TASK_STAND_STILL(iLocal_208[1], 1000);
								PED::_0x2208438012482A1A(iLocal_208[1], true, false);
							}
							else
							{
								__LIB_2__::func_504(iLocal_208[1], 0);
								TASK::TASK_COMBAT_PED(iLocal_208[1], Global_35, 68157440, 4096);
							}
							__LIB_2__::func_73(iLocal_208[1], &(uLocal_213[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
							func_365(1, 16);
						}
					}
					if (!func_363(2, 16))
					{
						if (func_110(iLocal_208[2], 0, "Gangster03", 0, 0, 1, 0) || bVar4)
						{
							if (!bVar4)
							{
								PED::SET_PED_USING_ACTION_MODE(iLocal_208[2], true, -1, 0);
								PED::_0x2208438012482A1A(iLocal_208[2], true, false);
								vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_208[2], 0f, 1.5f, 0f) };
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, 20000, 0.25f, 1, 40000f);
								TASK::TASK_COMBAT_PED(0, Global_35, 68157440, 4096);
								__LIB_1__::func_474(iLocal_208[2], &iVar0, 0, 0, 1, 1);
								PED::_0x2208438012482A1A(iLocal_208[2], true, false);
							}
							else
							{
								__LIB_2__::func_504(iLocal_208[2], 0);
								TASK::TASK_COMBAT_PED(iLocal_208[2], Global_35, 68157440, 4096);
							}
							__LIB_2__::func_73(iLocal_208[2], &(uLocal_213[2]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
							func_365(2, 16);
						}
					}
					if (!func_20(0, 16))
					{
						if (func_110(iLocal_347[0], 0, "PROSTITUTE", 0, 0, 1, 0) || bVar4)
						{
							__LIB_0__::func_325(&(uLocal_349[0]));
							TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_347[0], Global_35, 0, 536960, -1f, -1, 0);
							func_107(0, 16);
						}
					}
					if (!func_101(67108864))
					{
						if (func_106(0, "s_OUTSIDE_AMBUSH_GANG_CONFRONT"))
						{
							if (!bVar4)
							{
								if (!__LIB_0__::func_181())
								{
									func_112(iLocal_208[0], Global_35, "RE_SAM_STD_V1_CONFRONT", -1082130432 /* Float: -1f */, 1, 291934926, 0);
								}
								else
								{
									func_112(iLocal_208[0], Global_35, "RE_SAM_STD_V1_CONFRONTJ", -1082130432 /* Float: -1f */, 1, 291934926, 0);
								}
							}
							func_318(67108864);
						}
					}
					if (!bVar4)
					{
						func_353();
					}
					if (!PED::IS_PED_USING_ACTION_MODE(Global_35))
					{
						PED::SET_PED_USING_ACTION_MODE(Global_35, true, -1, 0);
					}
					if (((func_363(0, 16) && func_363(1, 16)) && func_363(2, 16)) && func_20(0, 16))
					{
						__LIB_2__::func_298();
						iLocal_685 = 5;
					}
					Jump @1682; //curOff = 1638
					if (__LIB_2__::func_227(-6f, 1, 0, 0) || Global_1935630.f_25)
					{
						iLocal_685 = 6;
					}
					Jump @1682; //curOff = 1672
					return true;
				}
				return false;
			}
			default:
				break;
	}
}

void func_125()
{
	if (Local_691.f_16 != 0)
	{
		__LIB_3__::func_237(&Local_691, &iLocal_719);
	}
	__LIB_2__::func_104(&Local_691, 0);
	__LIB_2__::func_51(&Local_691, 1);
	__LIB_2__::func_111(&Local_691, 1);
	__LIB_2__::func_52(&Local_691, 0);
	__LIB_2__::func_634(&Local_691, 1);
	__LIB_2__::func_180(&Local_691, 0);
	__LIB_3__::func_232(&Local_691, 1);
}

void func_126(bool bParam0)
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (__LIB_2__::func_1(iLocal_208[iVar0], 0, 1))
			{
				TASK::TASK_COMBAT_PED(iLocal_208[iVar0], Global_35, 68157440, 4096);
				__LIB_2__::func_73(iLocal_208[iVar0], &(uLocal_213[iVar0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		func_371();
	}
	func_44(joaat("RESAM_START"));
}

void func_127(bool bParam0)
{
	int iVar0;
	if ((__LIB_2__::func_157(iLocal_772[20], Global_36) && !func_24(1)) || bParam0)
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (!func_363(iVar0, 64))
			{
				if (__LIB_2__::func_1(iLocal_208[iVar0], 0, 0) && __LIB_1__::func_205(iLocal_208[iVar0], iLocal_772[20], 1, 0))
				{
					__LIB_2__::func_487(iLocal_208[iVar0], iLocal_772[21]);
					func_365(iVar0, 64);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_363(iVar0, 64))
			{
				if (__LIB_2__::func_1(iLocal_208[iVar0], 0, 0))
				{
					__LIB_4__::func_367(iLocal_208[iVar0], iLocal_772[21]);
					func_375(iVar0, 64);
				}
			}
			iVar0++;
		}
	}
}

bool func_128()
{
	if (func_131())
	{
		if (!func_24(128))
		{
			func_96(128);
		}
		if (func_376())
		{
			return true;
		}
	}
	func_351(2797.752f, -1163.661f, 47.72393f, 4.2f);
	func_351(2794.14f, -1169.7f, 47.72393f, 4.5f);
	if (!func_24(32))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				func_44(joaat("RESAM_FAIL"));
				func_96(32);
			}
		}
	}
	if (!func_24(65536))
	{
		if (func_377())
		{
			func_96(65536);
		}
	}
	func_378();
	if (!func_101(268435456))
	{
		if (__LIB_3__::func_464(iLocal_347[0], 0, &Local_691, &iLocal_719, 0, 0))
		{
			func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHOREATTACK", -1082130432 /* Float: -1f */, 1, 1744022339, 1);
			func_318(268435456);
		}
	}
	if (iLocal_853 == 0)
	{
		if (__LIB_2__::func_1(Global_35, 0, 1))
		{
			iLocal_853 = ENTITY::GET_ENTITY_HEALTH(Global_35);
		}
		else
		{
			iLocal_853 = 100;
		}
	}
	if (!func_24(1))
	{
		if (func_379())
		{
			func_115(1);
		}
	}
	func_380();
	func_381();
	func_382();
	return false;
}

void func_129()
{
	__LIB_1__::func_148(&(vLocal_732[6 /*3*/]));
	__LIB_3__::func_623(&Local_557);
	vLocal_493 = { 0f, 0f, 0f };
	fLocal_496 = 0f;
	sLocal_497 = "";
}

bool func_130()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	float fVar8;
	iVar0 = -1;
	if (iLocal_686 >= 2 && iLocal_686 < 14)
	{
		iVar0 = func_384();
	}
	if (iLocal_686 < 14)
	{
		if (!__LIB_2__::func_1(iLocal_445[2], 0, 1))
		{
			if (__LIB_1__::func_285(&uLocal_660, 1f))
			{
				iLocal_686 = 14;
			}
		}
		else if (__LIB_2__::func_157(iLocal_772[1], Global_36))
		{
			if ((__LIB_3__::func_464(iLocal_445[2], 0, &(Local_14.f_5), &uLocal_690, 1, 0) || PED::IS_PED_IN_COMBAT(iLocal_445[2], 0)) || PED::IS_PED_FLEEING(iLocal_445[2]))
			{
				if ((__LIB_3__::func_894(Local_14.f_5.f_16) || PED::IS_PED_IN_COMBAT(iLocal_445[2], 0)) || PED::IS_PED_FLEEING(iLocal_445[2]))
				{
					func_112(iLocal_445[2], Global_35, "RE_SAM_STD_V1_ILO_NEG_FINAL_AGGRO", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				}
				else
				{
					func_112(iLocal_445[2], Global_35, "RE_SAM_STD_V1_ILO_NEG_FINAL_LAW", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				}
				func_386(2, "RAG", Local_384[1 /*12*/].f_8);
				func_386(2, "SHOTGLASS_A", Local_384[2 /*12*/].f_8);
				func_386(2, "SHOTGLASS_B", Local_384[3 /*12*/].f_8);
				if (ENTITY::DOES_ENTITY_EXIST(Local_384[1 /*12*/].f_8))
				{
					PHYSICS::ACTIVATE_PHYSICS(Local_384[1 /*12*/].f_8);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_384[2 /*12*/].f_8))
				{
					PHYSICS::ACTIVATE_PHYSICS(Local_384[2 /*12*/].f_8);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_384[3 /*12*/].f_8))
				{
					PHYSICS::ACTIVATE_PHYSICS(Local_384[3 /*12*/].f_8);
				}
				__LIB_2__::func_753(138, 0, 0, 0, 0);
				iLocal_686 = 14;
			}
		}
		else if (iLocal_686 > 1 && __LIB_2__::func_227(0f, 1, Global_35, 1))
		{
			if (!func_24(256))
			{
				func_112(Global_35, Global_35, "RE_SAM_STD_V1_PLYFINAL", -1082130432 /* Float: -1f */, 0, 291934926, 0);
				func_96(256);
			}
			iLocal_686 = 14;
		}
	}
	if (!func_35(32))
	{
		if (func_387())
		{
			if (iLocal_686 < 5)
			{
				__LIB_2__::func_482(&(Local_519[1 /*17*/]), 1, 1);
				iLocal_686 = 5;
			}
			else
			{
				iLocal_686 = 9;
			}
			func_334(32);
		}
	}
	if (iLocal_686 <= 2)
	{
		if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			iLocal_686 = 14;
		}
	}
	switch (iLocal_686)
	{
		case 0:
			__LIB_1__::func_283(&uLocal_660, 0);
			__LIB_2__::func_312(joaat("WORLD_HUMAN_BARTENDER_CLEAN_GLASS"), 1, joaat("U_M_M_NBXBARTENDER_02"), joaat("WORLD_HUMAN_BARTENDER_CLEAN_GLASS_MALE_B"));
			if (func_72(138, 2, 0))
			{
				__LIB_2__::func_507(&(Local_14.f_5), 0);
				func_14(1);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_445[2], true, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_445[2], true);
				func_390();
				func_391();
				func_40(1);
				iLocal_686 = 1;
			}
			else
			{
				if (__LIB_1__::func_285(&uLocal_660, 1f))
				{
					iLocal_445[2] = 0;
				}
				return false;
			}
			break;
		case 1:
			if (__LIB_2__::func_157(iLocal_772[1], Global_36))
			{
				func_378();
				__LIB_2__::func_593(&vLocal_498, &Local_519);
				func_392();
				func_311(0);
				vVar1 = { func_393(iLocal_445[2], 2, "bartender", "PB_TAKE_GLASS") };
				fVar4 = func_394(iLocal_445[2], 2, "bartender", "PB_TAKE_GLASS");
				__LIB_2__::func_106(&vVar1, 1, 10, 0);
				uLocal_666 = __LIB_2__::func_488(joaat("WORLD_HUMAN_BARTENDER_CLEAN_GLASS"), vVar1, fVar4, 0f, -1f, 1);
				if (PED::IS_PED_USING_ACTION_MODE(Global_35) || PED::_0xEBB208D6AE712C03(Global_35))
				{
					PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
				}
				func_396(&(Local_596[0 /*13*/]), &(Local_623[0 /*17*/]), joaat("EVENT_SHOCKING_BEAT_INTERESTING_NEW"), "playerInteresting", Global_35, 30f, 20f, 15f, 5f, 0);
				iLocal_686 = 2;
			}
			else
			{
				vVar5 = { VOLUME::_GET_VOLUME_COORDS(iLocal_772[1]) };
				if (__LIB_0__::func_62(vVar5, Global_36) > 900f && __LIB_2__::func_227(0f, 1, Global_35, 1))
				{
					if (!func_24(256))
					{
						func_112(Global_35, Global_35, "RE_SAM_STD_V1_PLYFINAL", -1082130432 /* Float: -1f */, 0, 291934926, 0);
						func_96(256);
					}
					iLocal_686 = 14;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_94(iLocal_445[2], Global_36, 0) < 5f)
			{
				if (func_397())
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_445[2], 130, true);
					if (!func_24(1))
					{
						func_112(iLocal_445[2], Global_35, "RE_SAM_STD_V1_BARTENDER_SHOCK", -1082130432 /* Float: -1f */, 1, 291934926, 0);
					}
					else
					{
						func_112(iLocal_445[2], Global_35, "RE_SAM_STD_V1_BARTENDER_SHOCK_GUN", -1082130432 /* Float: -1f */, 1, 291934926, 0);
					}
					iLocal_686 = 3;
				}
			}
			break;
		case 3:
			if (!func_35(64))
			{
				if (func_398())
				{
					func_334(64);
				}
			}
			if (__LIB_1__::func_313(&(vLocal_732[12 /*3*/]), 1f))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_384[2 /*12*/].f_8, true);
			}
			if (func_106(2, "POUR_DRINK"))
			{
				if ((__LIB_2__::func_227(-5f, 1, 0, 0) && __LIB_2__::func_227(0, 1, iLocal_445[2], 1)) && __LIB_2__::func_227(0, 1, Global_35, 1))
				{
					func_112(iLocal_445[2], Global_35, "RE_SAM_STD_V1_BARTENDER_DRINK", -1082130432 /* Float: -1f */, 1, 291934926, 0);
					func_316(iLocal_445[2], Global_35, 1, 1, 4f, 0);
					iLocal_686 = 4;
				}
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-3f, 1, 0, 0) && func_106(2, "Base"))
			{
				if (vLocal_498.y == -1)
				{
					func_311(1);
					iLocal_686 = 5;
				}
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					iLocal_686 = 8;
					break;
				case 1:
					func_112(iLocal_445[2], Global_35, "RE_SAM_STD_V1_ILO_NEGRESP_BARTENDER1", -1082130432 /* Float: -1f */, 1, 291934926, 0);
					func_316(iLocal_445[2], Global_35, 2, 1, 4f, 1);
					iLocal_686 = 6;
					break;
				default:
					if (!func_24(512))
					{
						__LIB_1__::func_283(&(vLocal_732[11 /*3*/]), 0);
						if (((__LIB_1__::func_285(&(vLocal_732[11 /*3*/]), 5f) && !__LIB_4__::func_366(&vLocal_498)) && __LIB_2__::func_227(0, 1, iLocal_445[2], 1)) && __LIB_2__::func_227(0, 1, Global_35, 1))
						{
							func_112(iLocal_445[2], Global_35, "RE_SAM_STD_V1_BARTENDER_DRINK_REMIND", -1082130432 /* Float: -1f */, 1, 291934926, 0);
							func_316(iLocal_445[2], Global_35, 2, 1, 4f, 1);
							func_96(512);
						}
					}
					break;
			}
			break;
		case 6:
			if ((__LIB_2__::func_227(-3.5f, 1, 0, 0) && __LIB_2__::func_227(0f, 1, Global_35, 1)) && __LIB_2__::func_227(0f, 1, iLocal_445[2], 1))
			{
				func_112(iLocal_445[2], Global_35, "RE_SAM_STD_V1_ILO_NEGRESP_BARTENDER2", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				func_316(iLocal_445[2], Global_35, 2, 1, 4f, 1);
				iLocal_686 = 7;
			}
			break;
		case 7:
			if ((__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_2__::func_227(0f, 1, Global_35, 1)) && __LIB_2__::func_227(0f, 1, iLocal_445[2], 1))
			{
				func_311(1);
				iLocal_686 = 8;
			}
			break;
		case 8:
			switch (iVar0)
			{
				case 0:
					iLocal_686 = 8;
					break;
				case 1:
					func_112(iLocal_445[2], Global_35, "RE_SAM_STD_V1_ILO_NEG_C", -1082130432 /* Float: -1f */, 1, 291934926, 0);
					func_316(iLocal_445[2], Global_35, 2, 1, 4f, 1);
					func_96(4);
					__LIB_1__::func_748(&(Local_14.f_162), 1, 1);
					iLocal_686 = 12;
					break;
			}
			break;
		case 9:
			func_400();
			if (func_110(Global_35, 3, "player", 0, 0, 1, 0))
			{
				iLocal_686 = 10;
			}
			else
			{
				__LIB_1__::func_283(&uLocal_663, 0);
				fVar8 = __LIB_0__::func_264(&uLocal_663);
				if (!func_24(8388608))
				{
					if (__LIB_1__::func_285(&uLocal_663, 4.5f))
					{
						func_112(Global_35, iLocal_445[2], "RE_SAM_STD_V1_ILO_POS_BAR", -1082130432 /* Float: -1f */, 1, 291934926, 0);
						func_96(8388608);
					}
				}
			}
			break;
		case 10:
			if (__LIB_2__::func_227(0f, 1, Global_35, 1))
			{
				func_112(iLocal_445[2], Global_35, "RE_SAM_STD_V1_ILO_POS_BAR", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				iLocal_686 = 11;
			}
			break;
		case 11:
			if (__LIB_2__::func_227(0f, 1, iLocal_445[2], 1))
			{
				iLocal_686 = 12;
			}
			break;
		case 12:
			func_400();
			if (__LIB_0__::func_27(iLocal_731, 32))
			{
				__LIB_1__::func_283(&(vLocal_732[8 /*3*/]), 0);
			}
			if (__LIB_1__::func_285(&(vLocal_732[8 /*3*/]), 4f))
			{
				__LIB_2__::func_753(138, 0, 0, 0, 0);
				iLocal_686 = 13;
			}
			break;
		case 13:
			func_400();
			__LIB_1__::func_283(&uLocal_590, 0);
			break;
		case 14:
			func_400();
			return true;
	}
	return false;
}

bool func_131()
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_1(iLocal_208[iVar0], 0, 1))
		{
			iVar1 = 0;
		}
		else if (MAP::DOES_BLIP_EXIST(uLocal_213[iVar0]))
		{
			__LIB_0__::func_325(&(uLocal_213[iVar0]));
		}
		iVar0++;
	}
	return iVar1;
}

void func_164(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { __LIB_3__::func_179(uParam0) };
	iVar3 = func_165(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

int func_165(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
				Jump @3258; //curOff = 1397
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
				Jump @3258; //curOff = 1444
				return -1065165983;
				Jump @3258; //curOff = 1455
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
				Jump @3258; //curOff = 1516
				return -1641231995;
				Jump @3258; //curOff = 1527
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
				Jump @3258; //curOff = 1574
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
				Jump @3258; //curOff = 1621
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
				Jump @3258; //curOff = 1668
				return -800701784;
				Jump @3258; //curOff = 1679
				return -1599472750;
				Jump @3258; //curOff = 1690
				return 239043929;
				Jump @3258; //curOff = 1701
				return -1534174498;
				Jump @3258; //curOff = 1712
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
				Jump @3258; //curOff = 1759
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
				Jump @3258; //curOff = 1806
				return 1895786957;
				Jump @3258; //curOff = 1817
				return -2058137475;
				Jump @3258; //curOff = 1828
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
				Jump @3258; //curOff = 1917
				return 598461796;
				Jump @3258; //curOff = 1928
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
				Jump @3258; //curOff = 1975
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
				Jump @3258; //curOff = 2050
				return 544369376;
				Jump @3258; //curOff = 2061
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
				Jump @3258; //curOff = 2108
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
				Jump @3258; //curOff = 2155
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
				Jump @3258; //curOff = 2188
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
				Jump @3258; //curOff = 2221
				return 1602493990;
				Jump @3258; //curOff = 2232
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
				Jump @3258; //curOff = 2321
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
				Jump @3258; //curOff = 2368
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
				Jump @3258; //curOff = 2415
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
				Jump @3258; //curOff = 2462
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
				Jump @3258; //curOff = 2509
				return 1762656414;
				Jump @3258; //curOff = 2520
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
				Jump @3258; //curOff = 2581
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
				Jump @3258; //curOff = 2642
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
				Jump @3258; //curOff = 2689
				return -2018341642;
				Jump @3258; //curOff = 2700
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
				Jump @3258; //curOff = 2733
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
				Jump @3258; //curOff = 2766
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
				Jump @3258; //curOff = 2813
				return -1618254924;
				Jump @3258; //curOff = 2824
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
				Jump @3258; //curOff = 2871
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
				Jump @3258; //curOff = 2918
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
				Jump @3258; //curOff = 2951
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
				Jump @3258; //curOff = 2998
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
				Jump @3258; //curOff = 3045
				return -2137572125;
				Jump @3258; //curOff = 3056
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
				Jump @3258; //curOff = 3103
				return -774894224;
				Jump @3258; //curOff = 3114
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
				Jump @3258; //curOff = 3161
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
				Jump @3258; //curOff = 3222
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
			}
			else if (iParam0 >= 75 && iParam0 <= 118)
			{
				switch (iParam0)
				{
					case 75:
						return -346537584;
					case 76:
						switch (iParam1)
						{
							case 0:
								return -550739017;
							default:
								break;
						}
						return -1829585536;
					case 77:
						switch (iParam1)
						{
							case 0:
								return -609376390;
							case 1:
								return -311112952;
							case 2:
								return -682765316;
							case 3:
								return -2127446978;
							default:
								break;
						}
						return 1338777472;
					case 78:
						switch (iParam1)
						{
							case 0:
								return 581221752;
							case 1:
								return 20416722;
							default:
								break;
						}
						return 1293249792;
					case 79:
						switch (iParam1)
						{
							case 0:
								return -1786500412;
							default:
								break;
						}
						return 235904384;
					case 80:
						return -334565466;
					case 81:
						switch (iParam1)
						{
							case 0:
								return 31964051;
							case 1:
								return 245875704;
							default:
								break;
						}
						return 1046770304;
					case 82:
						switch (iParam1)
						{
							case 0:
								return 48921735;
							case 1:
								return 1062398415;
							default:
								break;
						}
						return -2047991552;
					case 83:
						return -1752276745;
					case 84:
						switch (iParam1)
						{
							case 0:
								return 418356694;
							case 1:
								return -1090928636;
							default:
								break;
						}
						return -1021157760;
					case 85:
						switch (iParam1)
						{
							case 0:
								return 278246928;
							case 1:
								return 1092461253;
							default:
								break;
						}
						return 900051136;
					case 86:
						return 1417655457;
					case 87:
						switch (iParam1)
						{
							case 0:
								return 188835226;
							case 1:
								return 220332139;
							default:
								break;
						}
						return 1359760512;
					case 88:
						switch (iParam1)
						{
							case 0:
								return -1638860831;
							case 1:
								return -812497188;
							default:
								break;
						}
						return 1616003072;
					case 89:
						return -69702063;
					case 90:
						switch (iParam1)
						{
							case 0:
								return -479871262;
							default:
								break;
						}
						return -1670654720;
					case 91:
						return -331264815;
					case 92:
						return -1217205534;
					case 93:
						switch (iParam1)
						{
							case 0:
								return -1662432355;
							case 1:
								return -368935814;
							default:
								break;
						}
						return -1021345856;
					case 94:
						switch (iParam1)
						{
							case 0:
								return -735413614;
							case 1:
								return -972169639;
							case 2:
								return -673250821;
							case 3:
								return 161473916;
							default:
								break;
						}
						return -1329933952;
					case 95:
						switch (iParam1)
						{
							case 0:
								return -1645068573;
							default:
								break;
						}
						return 1248360320;
					case 96:
						switch (iParam1)
						{
							case 0:
								return 884363685;
							case 1:
								return 368673822;
							case 2:
								return 578628915;
							case 3:
								return 689154642;
							case 4:
								return 471198511;
							case 5:
								return 967199063;
							case 6:
								return -38616787;
							case 7:
								return -1294637989;
							default:
								break;
						}
						return -84111088;
					case 97:
						switch (iParam1)
						{
							case 0:
								return -1639179308;
							case 1:
								return -436408638;
							default:
								break;
						}
						return 1995021696;
					case 98:
						switch (iParam1)
						{
							case 0:
								return 1464772696;
							case 1:
								return 6449957;
							default:
								break;
						}
						return -1853564800;
					case 99:
						switch (iParam1)
						{
							case 0:
								return 803309489;
							case 1:
								return -31873580;
							case 2:
								return -1922690045;
							case 3:
								return 515105064;
							default:
								break;
						}
						return -1759022208;
					case 100:
						return -307424281;
					case 101:
						switch (iParam1)
						{
							case 0:
								return 1006898715;
							case 1:
								return 1573993134;
							default:
								break;
						}
						return -1402545280;
					case 102:
						return -1979014350;
					case 103:
						return 2096137174;
					case 104:
						switch (iParam1)
						{
							case 0:
								return -861435303;
							case 1:
								return 2076430727;
							case 2:
								return -1266577036;
							default:
								break;
						}
						return 493009408;
					case 105:
						return 1152564685;
					case 106:
						switch (iParam1)
						{
							case 0:
								return 2036836823;
							case 1:
								return 2046057828;
							case 2:
								return -526712830;
							case 3:
								return -242317110;
							case 4:
								return 1729814355;
							case 5:
								return 1868875718;
							case 6:
								return -785635151;
							case 7:
								return 1586170447;
							case 8:
								return -291036947;
							default:
								break;
						}
						return -832026176;
					case 107:
						switch (iParam1)
						{
							case 0:
								return -981210833;
							case 1:
								return 875440489;
							default:
								break;
						}
						return -508430848;
					case 108:
						switch (iParam1)
						{
							case 0:
								return 1491780341;
							case 1:
								return 1920169067;
							default:
								break;
						}
						return -227796128;
					case 109:
						switch (iParam1)
						{
							case 0:
								return -1255044808;
							case 1:
								return -1012076841;
							default:
								break;
						}
						return -871899648;
					case 110:
						switch (iParam1)
						{
							case 0:
								return 792345848;
							case 1:
								return 121209110;
							default:
								break;
						}
						return 14115413;
					case 111:
						switch (iParam1)
						{
							case 0:
								return -1152301466;
							case 1:
								return -1113682855;
							case 2:
								return -1801389871;
							case 3:
								return -180725957;
							case 4:
								return 1811628790;
							default:
								break;
						}
						return 2016864128;
					case 112:
						switch (iParam1)
						{
							case 0:
								return 635397890;
							default:
								break;
						}
						return -717212864;
					case 113:
						return 1487351956;
					case 114:
						switch (iParam1)
						{
							case 0:
								return 1955914312;
							case 1:
								return 1685893021;
							case 2:
								return -711771194;
							case 3:
								return 146337879;
							default:
								break;
						}
						return 205846784;
					case 115:
						switch (iParam1)
						{
							case 0:
								return -775876869;
							case 1:
								return -39469638;
							default:
								break;
						}
						return 1483441280;
					case 116:
						switch (iParam1)
						{
							case 0:
								return 2113065035;
							case 1:
								return -2101774133;
							default:
								break;
						}
						return -815072896;
					case 117:
						return -689015496;
					case 118:
						switch (iParam1)
						{
							case 0:
								return -18903616;
							case 1:
								return -1607469655;
							default:
								break;
						}
						return -640409664;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 119:
						return 1996937952;
				}
			}
			return 1968536545;
		}
void func_166(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (__LIB_0__::func_2() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

void func_177()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < __LIB_9__::func_881())
	{
		func_429(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		func_430(iVar1);
		iVar1++;
	}
}

bool func_179(int iParam0)
{
	char* sVar0;
	sVar0 = func_237(iParam0);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_452[iParam0]))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_452[iParam0], true, false))
	{
		return false;
	}
	return true;
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_DOORNBD39X");
		default:
			break;
	}
	return 0;
}

void func_181(int iParam0, char* sParam1)
{
	char* sVar0;
	sVar0 = func_237(iParam0);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_452[iParam0]))
	{
		return;
	}
	if (ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_452[iParam0], sParam1) || ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_452[iParam0], sParam1))
	{
		return;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_452[iParam0], sParam1);
}

bool func_183(int iParam0, char* sParam1)
{
	char* sVar0;
	sVar0 = func_237(iParam0);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_452[iParam0]))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_452[iParam0], sParam1))
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_208()
{
	int iVar0;
	int iVar1;
	var uVar2;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_1(iLocal_208[iVar0], 0, 1))
		{
			iVar1 = __LIB_2__::func_272(iLocal_208[iVar0], joaat("GROUP_PISTOL"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar1))
			{
				__LIB_2__::func_272(iLocal_208[iVar0], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
			PED::SET_PED_COMBAT_RANGE(iLocal_208[iVar0], 0);
			PED::SET_COMBAT_FLOAT(iLocal_208[iVar0], 7, 0.3f);
			PED::SET_PED_CONFIG_FLAG(iLocal_208[iVar0], 233, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_208[iVar0], 6, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_208[iVar0], 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_208[iVar0], 46, true);
			if (iVar0 == 2)
			{
				uVar2 = __LIB_2__::func_488(joaat("WORLD_HUMAN_SMOKE"), Local_218[iVar0 /*32*/].f_6, (Local_218[iVar0 /*32*/].f_9 - 180f), 0, -1f, 1);
				TASK::_TASK_USE_SCENARIO_POINT(iLocal_208[iVar0], uVar2, 0, -1, false, true, 0, false, -1f, false);
			}
			else if (iVar0 == 1)
			{
				uVar2 = __LIB_2__::func_488(joaat("WORLD_HUMAN_SMOKE"), Local_218[iVar0 /*32*/].f_6, Local_218[iVar0 /*32*/].f_9, 0, -1f, 1);
				TASK::_TASK_USE_SCENARIO_POINT(iLocal_208[iVar0], uVar2, 0, -1, false, true, 0, false, -1f, false);
				__LIB_2__::func_272(iLocal_208[iVar0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
			else if (iVar0 == 0)
			{
				uVar2 = __LIB_2__::func_488(joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING"), Local_218[0 /*32*/].f_6, Local_218[0 /*32*/].f_9, 0f, -1f, 1);
				TASK::_TASK_USE_SCENARIO_POINT(iLocal_208[0], uVar2, "WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_MALE_B", -1, false, true, 0, false, -1f, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_208[0], 234, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_208[0], 235, true);
				__LIB_2__::func_272(iLocal_208[iVar0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
		}
		iVar0++;
	}
	func_320(0);
	func_81(0, "Gangster01", iLocal_208[0], 1);
	func_81(0, "Gangster02", iLocal_208[1], 1);
	func_81(0, "Gangster03", iLocal_208[2], 1);
}

void func_212(int iParam0, bool bParam1)
{
	if (bParam1 || !__LIB_4__::func_930(1))
	{
		__LIB_9__::func_394(iLocal_772[iParam0], 0, 0);
		__LIB_3__::func_378(iLocal_772[iParam0], 0);
	}
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_772[iParam0], 10208, 0, 0, -1, -1, 2);
	POPULATION::_0xB56D41A694E42E86(iLocal_772[iParam0], 10208, 0, 0, -1, -1, 2);
	iLocal_800[iParam0] = 1;
}

char* func_237(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@beat@town@slum_ambush@IG1_WOMAN_LEADS_TO_AMBUSH";
		case 1:
			return "script@beat@town@slum_ambush@playerEnterBar";
		case 2:
			return "script@beat@town@slum_ambush@bartenderserve";
		case 3:
			return "script@beat@town@slum_ambush@bartenderserve_player";
		default:
			break;
	}
	return "INVALID ANIM SCENE";
}

bool func_300(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (*iParam3 < iParam4 || *iParam3 > iParam5)
	{
		*iParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_3__::func_464((*iParam0)[*iParam3], 0, iParam1, iParam2, 0, 0))
		{
			return true;
		}
		*iParam3++;
		if (*iParam3 > iParam5)
		{
			*iParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

void func_305()
{
	var uVar0;
	if (!func_101(1024))
	{
		if (__LIB_2__::func_448(iLocal_347[0], joaat("BLINEWOMANCALLOVER"), "bLineWomanCallover", uVar0, 1067030938 /* Float: 1.2f */, 1))
		{
			__LIB_2__::func_315(249295937, iLocal_347[0], 1);
			func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHOREALERT", -1082130432 /* Float: -1f */, 1, 291934926, 0);
			func_316(iLocal_347[0], Global_35, 1, 3, 8f, 1);
			__LIB_1__::func_148(&(vLocal_732[1 /*3*/]));
			__LIB_2__::func_73(iLocal_347[0], &(uLocal_349[0]), -89429847, 580546400, 0, 0);
			__LIB_0__::func_7(&(Local_844.f_3), 2);
			func_318(1024);
		}
	}
	else if (!func_24(1024))
	{
		if (!func_101(2048))
		{
			if (__LIB_2__::func_448(iLocal_347[0], joaat("BLINECALLOVERREMINDER"), "bLineCalloverReminder", uVar0, 1067030938 /* Float: 1.2f */, 1))
			{
				__LIB_2__::func_315(249295937, iLocal_347[0], 1);
				func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHOREALERTB", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				func_316(iLocal_347[0], Global_35, 1, 3, 8f, 1);
				func_318(2048);
			}
		}
	}
	else if (func_356(0, "PBL_BAR_ACCEPT"))
	{
		if (!func_101(4096))
		{
			if (__LIB_2__::func_448(iLocal_347[0], joaat("BLINEPLAYERACCEPT"), "bLinePlayerAccept", uVar0, 1067030938 /* Float: 1.2f */, 1))
			{
				if (!__LIB_0__::func_181())
				{
					func_112(Global_35, iLocal_347[0], "RE_SAM_STD_V1_PLAYERAPOS", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				}
				else
				{
					func_112(Global_35, iLocal_347[0], "RE_SAM_STD_V1_PLAYERAPOS", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				}
				func_318(4096);
			}
		}
		else if (!func_101(8192))
		{
			if (__LIB_2__::func_448(iLocal_347[0], joaat("BLINEWOMANACCEPT1"), "bLineWomanAccept1", uVar0, 1067030938 /* Float: 1.2f */, 1))
			{
				func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHORECOMEWITH", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				func_318(8192);
			}
		}
		else if (!func_101(16384))
		{
			if (__LIB_2__::func_448(iLocal_347[0], joaat("BLINEWOMANACCEPT2"), "bLineWomanAccept2", uVar0, 1067030938 /* Float: 1.2f */, 1))
			{
				func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHOREWAIT1", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				func_318(16384);
			}
		}
	}
	else if (func_356(0, "PBL_BAR_REJECT"))
	{
		if (!func_101(32768))
		{
			if (__LIB_2__::func_448(iLocal_347[0], joaat("BLINEPLAYERREJECT"), "bLinePlayerReject", uVar0, 1f, 1))
			{
				if (!__LIB_0__::func_181())
				{
					func_112(Global_35, iLocal_347[0], "RE_SAM_STD_V1_PLAYERANEG", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				}
				else
				{
					func_112(Global_35, iLocal_347[0], "RE_SAM_STD_V1_PLAYERANEG", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				}
				func_318(32768);
			}
		}
		if (!func_101(65536))
		{
			if (__LIB_2__::func_448(iLocal_347[0], joaat("BLINEWOMANREJECT1"), "bLineWomanReject1", uVar0, 1067030938 /* Float: 1.2f */, 1))
			{
				func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHORECOMEON", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				func_318(65536);
			}
		}
		else if (!func_101(131072))
		{
			if (__LIB_2__::func_448(iLocal_347[0], joaat("BLINEWOMANREJECT2"), "bLineWomanReject2", uVar0, 1067030938 /* Float: 1.2f */, 1))
			{
				func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHOREMEETME", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				func_318(131072);
				func_96(8192);
			}
		}
	}
	else if (!func_101(128))
	{
		if (__LIB_2__::func_448(iLocal_347[0], joaat("BLINEWHOREMEET"), "bLineWhoreMeet", uVar0, 1067030938 /* Float: 1.2f */, 1))
		{
			if (!__LIB_0__::func_181())
			{
				func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHOREAMEET", -1082130432 /* Float: -1f */, 0, 291934926, 0);
			}
			else
			{
				func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHOREJMEET", -1082130432 /* Float: -1f */, 0, 291934926, 0);
			}
			func_318(128);
		}
	}
	else if (!func_101(256))
	{
		if (__LIB_2__::func_448(iLocal_347[0], joaat("BLINEWHOREOFFER"), "bLineWhoreOffer", uVar0, 1067030938 /* Float: 1.2f */, 1) || bLocal_659)
		{
			bLocal_659 = true;
			if (__LIB_2__::func_227(0f, 1, iLocal_347[0], 1))
			{
				if (!__LIB_0__::func_181())
				{
					func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHOREAOFFER", -1082130432 /* Float: -1f */, 0, 291934926, 0);
				}
				else
				{
					func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHOREJOFFER", -1082130432 /* Float: -1f */, 0, 291934926, 0);
				}
				func_318(256);
			}
		}
	}
}

void func_306()
{
	var uVar0;
	if (iLocal_684 == 11)
	{
		if (!func_101(262144))
		{
			if (__LIB_2__::func_448(iLocal_347[0], joaat("BLINEHALLREMIND1"), "bLineHallRemind1", uVar0, 1067030938 /* Float: 1.2f */, 1))
			{
				func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHOREWAIT1R1", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				func_318(262144);
			}
		}
		else if (!func_101(524288))
		{
			if (__LIB_2__::func_448(iLocal_347[0], joaat("BLINEHALLREMIND2"), "bLineHallRemind2", uVar0, 1067030938 /* Float: 1.2f */, 1))
			{
				func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHOREWAIT1R2", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				func_318(524288);
				__LIB_1__::func_283(&(vLocal_732[10 /*3*/]), 0);
			}
		}
		else if (__LIB_1__::func_313(&(vLocal_732[10 /*3*/]), 10f))
		{
			func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHOREWAIT1R3", -1082130432 /* Float: -1f */, 1, 291934926, 0);
			func_14(0);
			func_40(1);
			func_96(1048576);
		}
	}
	else if (iLocal_684 == 13)
	{
		if (!func_101(2097152))
		{
			if (__LIB_2__::func_448(iLocal_347[0], joaat("BLINEDOORREMIND1"), "bLineDoorRemind1", uVar0, 1067030938 /* Float: 1.2f */, 1))
			{
				func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHOREWAIT2", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				func_318(2097152);
			}
		}
		else if (!func_101(4194304))
		{
			if (__LIB_2__::func_448(iLocal_347[0], joaat("BLINEDOORREMIND2"), "bLineDoorRemind2", uVar0, 1067030938 /* Float: 1.2f */, 1))
			{
				func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WHOREWAIT2R1", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				func_318(4194304);
			}
		}
	}
}

void func_307()
{
	if (!func_108())
	{
		if (func_562(0, "internal_loop"))
		{
			if (iLocal_684 <= 14)
			{
				func_83(0, "internal_loop", 0);
			}
		}
	}
}

void func_309()
{
	func_566(&(iLocal_347[0]), &vLocal_498, 8f, &Local_519, &(Local_14.f_192), 0f, 3, 0, "RE_INTER_STRANGER", __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
}

void func_310(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (bParam1)
		{
			__LIB_2__::func_602(&(Local_519[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
			__LIB_2__::func_602(&(Local_519[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
		}
		func_569(0, 0);
		func_569(1, 0);
	}
	else if (bParam1)
	{
		__LIB_2__::func_602(&(Local_519[0 /*17*/]), __LIB_2__::func_460(0), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
		__LIB_2__::func_602(&(Local_519[1 /*17*/]), __LIB_2__::func_460(1), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	}
}

void func_311(bool bParam0)
{
	if (bParam0)
	{
		if (!func_570(0))
		{
			func_569(0, 1);
		}
		if (!func_570(1))
		{
			func_569(1, 1);
		}
	}
	else
	{
		if (func_570(0))
		{
			func_569(0, 0);
		}
		if (func_570(1))
		{
			func_569(1, 0);
		}
	}
}

bool func_313()
{
	bool bVar0;
	if (!func_574())
	{
		return false;
	}
	__LIB_1__::func_283(&(vLocal_732[6 /*3*/]), 0);
	if (!bLocal_674)
	{
		bVar0 = (func_575(&Local_557, 106) && func_357(Global_35, 1, "player_zero", sLocal_497, (0.25f + 0.4f), (10f + 20f)));
	}
	else if (!ENTITY::IS_ENTITY_IN_AIR(Global_35, 1))
	{
		bVar0 = func_576(1, sLocal_497, "player_zero", &uLocal_667, 1);
		if (func_105(3, Global_35))
		{
			bVar0 = true;
		}
	}
	if (bVar0 || __LIB_1__::func_285(&(vLocal_732[6 /*3*/]), 10f))
	{
		if (!bLocal_674)
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
		func_322();
		func_45(1);
		return true;
	}
	return false;
}

bool func_314()
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_2__::func_431(iLocal_347[0], Global_36, 1060437492 /* Float: 0.707f */);
	switch (iVar0)
	{
		case 0:
			sVar1 = "PBL_CALLOVER_N";
			break;
		case 2:
			sVar1 = "PBL_CALLOVER_L";
			break;
		case 3:
			sVar1 = "PBL_CALLOVER_R";
			break;
		default:
			return false;
	}
	if (!func_356(0, sVar1))
	{
		func_85(0, sVar1, 1);
	}
	func_83(0, "internal_loop", 1);
	func_316(iLocal_347[0], Global_35, 1, 1, -1f, 1);
	return true;
}

void func_315(var uParam0, var uParam1)
{
	__LIB_4__::func_477(uParam0);
	*uParam1 = 0f;
}

void func_316(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5)
{
	struct<23> Var0;
	if (!__LIB_2__::func_1(iParam0, 0, 1) || iParam0 == iLocal_347[0])
	{
		return;
	}
	if (!bParam5)
	{
		TASK::_0xE7FA07624574B79A(iParam0, iParam1, iParam2, iParam3, fParam4, 1, 0, 0, 0);
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	if (fParam4 < 0f)
	{
		TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, -1, 0, 51, 0);
	}
	else
	{
		TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, BUILTIN::FLOOR((fParam4 * 1000f)), 0, 51, 0);
	}
	__LIB_2__::func_281(&Var0, iParam1, 0, BUILTIN::FLOOR((fParam4 * 1000f)), 3, 3, 2, 1, 0, 0, 0, 0);
	_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Var0);
}

void func_317()
{
	func_579(iLocal_347[0], &Local_844, 0f, 0f, 0f, 0, (30f + 10f), 8f, 4000, 4000, 2000, 1.5f, 1, 1, 1084227584 /* Float: 5f */);
}

void func_318(int iParam0)
{
	__LIB_1__::func_336(&iLocal_723, iParam0);
}

void func_320(bool bParam0)
{
	int iVar0;
	if (func_24(64))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_1(iLocal_208[iVar0], 0, 0))
		{
			if (bParam0)
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_208[iVar0], true);
				ENTITY::SET_ENTITY_COLLISION(iLocal_208[iVar0], true, false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_208[iVar0], 0, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_208[iVar0], false);
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_208[iVar0], false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_208[iVar0], false, false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_208[iVar0], 127, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_208[iVar0], true);
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
		func_96(64);
	}
}

void func_322()
{
	if (!func_35(16))
	{
		if (func_108())
		{
			if (!bLocal_674)
			{
				if (MISC::ARE_STRINGS_EQUAL(sLocal_497, "PBL_ENTER_STAND"))
				{
					func_85(0, "PBL_ENTER_R", 1);
				}
				else
				{
					func_85(0, sLocal_497, 1);
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(sLocal_497, "PL_MTH_ENTER_LEFT"))
			{
				func_85(0, "PBL_ENTER_L", 1);
			}
			else
			{
				func_85(0, "PBL_ENTER_N", 1);
			}
			func_83(0, "internal_loop", 1);
			func_334(16);
		}
	}
}

void func_323()
{
	int iVar0;
	if (Local_14.f_5.f_16 != 0)
	{
		__LIB_3__::func_237(&(Local_14.f_5), &uLocal_690);
	}
	__LIB_2__::func_433(&(Local_14.f_5));
	__LIB_2__::func_289(&(Local_14.f_5));
	__LIB_2__::func_613(&(Local_14.f_5), 1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_1(iLocal_208[iVar0], 0, 1))
		{
			PED::SET_PED_HEARING_RANGE(iLocal_208[iVar0], 10f);
		}
		iVar0++;
	}
}

bool func_324(int iParam0)
{
	return __LIB_0__::func_27(iLocal_722, iParam0);
}

void func_326(int iParam0)
{
	__LIB_1__::func_336(&iLocal_722, iParam0);
}

void func_327()
{
	int iVar0;
	bool bVar1;
	iVar0 = -1;
	iVar0 = func_566(&(iLocal_347[0]), &vLocal_498, 8f, &Local_519, &(Local_14.f_192), 0f, 3, 0, "RE_INTER_STRANGER", __LIB_2__::func_340(2, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iLocal_593 == -1)
	{
		iLocal_593 = iVar0;
		if (iLocal_593 != -1)
		{
			bVar1 = true;
		}
	}
	if (iLocal_593 != -1 && bVar1)
	{
		func_310(1, 0);
		func_311(0);
	}
}

void func_328()
{
	PLAYER::_0x3A8611BD7BDE84F7(PLAYER::PLAYER_ID(), -1f);
}

bool func_331()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	func_582(&iVar0, &iVar1, &uVar2, &uVar3, joaat("INPUT_SCRIPT_LEFT_AXIS_X"), joaat("INPUT_SCRIPT_LEFT_AXIS_Y"), joaat("INPUT_SCRIPT_RIGHT_AXIS_X"), joaat("INPUT_SCRIPT_RIGHT_AXIS_Y"), 2);
	iVar4 = (MISC::ABSI(iVar0) + MISC::ABSI(iVar1));
	if (iVar4 > 80 || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SPRINT")))
	{
		return true;
	}
	return false;
}

void func_333()
{
	int iVar0;
	bool bVar1;
	iVar0 = -1;
	iVar0 = func_566(&(iLocal_347[0]), &vLocal_498, 8f, &Local_519, &(Local_14.f_192), 2.5f, 3, 0, "RE_INTER_STRANGER", __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iLocal_594 == -1)
	{
		iLocal_594 = iVar0;
		if (iLocal_594 != -1)
		{
			bVar1 = true;
		}
	}
	if (iLocal_594 != -1 && bVar1)
	{
		iLocal_595 = iLocal_594;
		func_569(iLocal_594, 0);
	}
}

void func_334(int iParam0)
{
	__LIB_1__::func_336(&iLocal_721, iParam0);
}

void func_335()
{
	int iVar0;
	int iVar1;
	int iVar2[5];
	var uVar8[2];
	int iVar11;
	int iVar12;
	bool bVar13;
	if (func_35(4))
	{
		return;
	}
	if (!__LIB_2__::func_157(iLocal_772[3], Global_36))
	{
		return;
	}
	uVar8[0] = iLocal_347[0];
	uVar8[1] = Global_35;
	iVar0 = func_86(&iVar2, &uVar8, iVar2, iLocal_772[3], 0, 0, 0, -1, 1, 0, 0, 0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_2__::func_1(iVar2[iVar1], 0, 0))
		{
			if (PED::IS_PED_FACING_PED(iVar2[iVar1], Global_35, 60f))
			{
				iVar11 = 1;
			}
			else
			{
				iVar11 = 1;
			}
			if (__LIB_1__::func_985())
			{
				iVar12 = 1;
			}
			else
			{
				iVar12 = 3;
			}
			if (__LIB_3__::func_138(iVar2[iVar1], joaat("PROP_HUMAN_PIANO")))
			{
				bVar13 = true;
			}
			else
			{
				bVar13 = false;
			}
			func_316(iVar2[iVar1], Global_35, iVar11, iVar12, 6f, bVar13);
		}
		iVar1++;
	}
	func_334(4);
}

void func_336()
{
	__LIB_2__::func_602(&(Local_519[0 /*17*/]), __LIB_2__::func_460(24), "RE_SAM_STD_V1_QUESTION1", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	__LIB_2__::func_602(&(Local_519[1 /*17*/]), __LIB_2__::func_460(10), "RE_SAM_STD_V1_ANTAGONIZE1", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
}

void func_339(int iParam0)
{
	__LIB_0__::func_516(&iLocal_722, iParam0);
}

bool func_340(int iParam0, char* sParam1)
{
	return ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_452[iParam0], sParam1);
}

void func_342()
{
	PED::SET_PED_RESET_FLAG(Global_35, 4, true);
	PED::SET_PED_RESET_FLAG(Global_35, 94, false);
	PED::SET_PED_RESET_FLAG(Global_35, 108, true);
}

bool func_343()
{
	if (__LIB_2__::func_167(Global_35, 0))
	{
		return true;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 1, 0))
	{
		return true;
	}
	if (__LIB_2__::func_470())
	{
		if (Global_1935630.f_44 != joaat("WEAPON_UNARMED") && Global_1935630.f_44 != 0)
		{
			if (WEAPON::_0x705BE297EEBDB95D(Global_1935630.f_44))
			{
				return true;
			}
		}
	}
	return false;
}

void func_344()
{
	__LIB_2__::func_602(&(Local_519[0 /*17*/]), __LIB_2__::func_460(24), "RE_SAM_STD_V1_QUESTION2", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	__LIB_2__::func_602(&(Local_519[1 /*17*/]), __LIB_2__::func_460(10), "RE_SAM_STD_V1_ANTAGONIZE2", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
}

void func_345()
{
	int iVar0;
	if (!func_24(32768))
	{
		if (func_101(64))
		{
			if (func_110(iLocal_347[0], 0, "PROSTITUTE", 0, 0, 1, 0))
			{
				func_591(0);
				func_429(0);
				__LIB_3__::func_124(-74215266, 1);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2792.794f, -1149.984f, 47.37978f, 1f, 20000, 0.25f, 2112, 40000f);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 2, 536960, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_1__::func_474(iLocal_347[0], &iVar0, 0, 0, 1, 1);
				__LIB_0__::func_325(&(uLocal_349[0]));
				func_96(32768);
			}
		}
	}
	else if (!func_35(256))
	{
		if (func_179(0))
		{
			func_181(0, "PBL_OUTSIDE_AMBUSH");
			func_181(0, "PBL_AMBUSH_NO_WOMAN");
			if (func_183(0, "PBL_OUTSIDE_AMBUSH") && func_183(0, "PBL_AMBUSH_NO_WOMAN"))
			{
				if (!func_35(256))
				{
					func_334(256);
				}
			}
		}
	}
}

void func_346()
{
	if (func_35(2048))
	{
		return;
	}
	if (func_35(1024) && !func_35(2048))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	if (!func_35(1024) && !func_101(64))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		func_334(1024);
	}
	else if (func_110(Global_35, 0, "player_zero", 0, 0, 1, 0))
	{
		func_334(2048);
	}
}

void func_350()
{
	var uVar0;
	if (!func_101(8388608))
	{
		if (__LIB_2__::func_448(iLocal_347[0], joaat("BDOORWALKTHROUGH"), "bDoorWalkthrough", uVar0, 1067030938 /* Float: 1.2f */, 1))
		{
			if (!func_101(64))
			{
				func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_WALKTHRU", -1082130432 /* Float: -1f */, 0, 291934926, 0);
			}
			func_318(8388608);
		}
	}
	if (!func_101(16777216))
	{
		if (__LIB_2__::func_448(iLocal_208[0], joaat("BGANGREVEAL"), "bGangReveal", uVar0, 1067030938 /* Float: 1.2f */, 1))
		{
			func_112(iLocal_208[0], Global_35, "RE_SAM_STD_V1_FOUND", -1082130432 /* Float: -1f */, 0, 291934926, 0);
			func_318(16777216);
		}
	}
	if (!func_101(33554432))
	{
		if (__LIB_2__::func_448(iLocal_347[0], joaat("BWOMANFLEE"), "bWomanFlee", uVar0, 1067030938 /* Float: 1.2f */, 1))
		{
			func_112(iLocal_347[0], Global_35, "RE_SAM_STD_V1_SORRY", -1082130432 /* Float: -1f */, 0, 291934926, 0);
			func_318(33554432);
		}
	}
}

void func_351(vector3 vParam0, float fParam3)
{
	EVENT::_REMOVE_ALL_SHOCKING_EVENTS_IN_AREA(vParam0, fParam3, false);
}

bool func_352()
{
	if (__LIB_0__::func_94(iLocal_208[0], Global_36, 1) < 1.5f)
	{
		return true;
	}
	if (__LIB_2__::func_157(iLocal_772[14], Global_36))
	{
		return true;
	}
	if (__LIB_2__::func_157(iLocal_772[15], Global_36))
	{
		return true;
	}
	if (__LIB_2__::func_157(iLocal_772[16], Global_36))
	{
		func_96(4096);
		return true;
	}
	return false;
}

void func_353()
{
	if (func_101(67108864))
	{
		if (!func_24(4194304))
		{
			if (__LIB_2__::func_227(0f, 1, iLocal_208[0], 1))
			{
				if (!__LIB_0__::func_181())
				{
					func_112(iLocal_208[0], Global_35, "RE_SAM_STD_V1_TRIGGER", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				}
				else
				{
					func_112(iLocal_208[0], Global_35, "RE_SAM_STD_V1_TRIGGERJ", -1082130432 /* Float: -1f */, 1, 291934926, 0);
				}
				func_96(4194304);
			}
		}
	}
}

void func_354()
{
	int iVar0;
	func_342();
	if (!func_35(1))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, 2803.718f, -1163.859f, 46.93762f, false) < 1f || func_356(0, "PBL_AMBUSH"))
		{
			func_47(0);
			if (!func_35(8))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 1, true, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (!func_24(2048) && !func_24(32768))
				{
					TASK::TASK_STAND_STILL(0, 2100);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2804.824f, -1162.504f, 46.7758f, 1f, 20000, 0.25f, 2112, 317.466f);
				__LIB_1__::func_474(Global_35, &iVar0, 0, 0, 1, 1);
			}
			func_334(1);
		}
	}
	else if (!func_35(2))
	{
		if (func_596())
		{
			__LIB_3__::func_123(-74215266, 1);
			func_47(1);
			func_334(2);
		}
	}
}

bool func_356(int iParam0, char* sParam1)
{
	char* sVar0;
	sVar0 = func_237(iParam0);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_452[iParam0]))
	{
		return false;
	}
	if (ANIMSCENE::_0x1F0E401031E20146(iLocal_452[iParam0], sParam1))
	{
		return true;
	}
	return false;
}

bool func_357(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5)
{
	return func_598(iParam0, iLocal_452[iParam1], sParam2, sParam3, fParam4, fParam5, 1);
}

void func_359()
{
	int iVar0;
	int iVar1;
	int iVar2[10];
	var uVar13[2];
	uVar13[0] = iLocal_445[2];
	uVar13[1] = Global_35;
	iVar0 = func_86(&iVar2, &uVar13, iVar2, iLocal_772[3], 0, 1, 0, -1, 1, 0, 0, 0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_2__::func_1(iVar2[iVar1], 0, 0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2[iVar1], true);
		}
		iVar1++;
	}
}

void func_360()
{
	int iVar0;
	int iVar1;
	int iVar2[10];
	var uVar13[2];
	uVar13[0] = iLocal_445[2];
	uVar13[1] = Global_35;
	iVar0 = func_86(&iVar2, &uVar13, iVar2, iLocal_772[2], 0, 1, 0, -1, 1, 0, 0, 0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_2__::func_1(iVar2[iVar1], 0, 0))
		{
			if (__LIB_2__::func_419(iVar2[iVar1], 0) == -1)
			{
				__LIB_2__::func_426(&(iVar2[iVar1]));
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2[iVar1], true);
			}
		}
		iVar1++;
	}
}

int func_362(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	if (iParam5 < 0 || iParam5 >= *iParam0)
	{
		iParam5 = (*iParam0 - 1);
	}
	iVar0 = iParam4;
	while (iVar0 <= iParam5)
	{
		if (__LIB_3__::func_464((*iParam0)[iVar0], iParam1, iParam2, iParam3, 0, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_363(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(uLocal_724[iParam0], iParam1);
}

void func_365(int iParam0, int iParam1)
{
	__LIB_1__::func_336(&(uLocal_724[iParam0]), iParam1);
}

void func_371()
{
	int iVar0;
	if (__LIB_2__::func_1(iLocal_208[0], 0, 1))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_208[0], joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SWAP_WEAPON(0, 1, false, 0, 0);
		TASK::TASK_COMBAT_PED(0, Global_35, 68157440, 4096);
		__LIB_1__::func_474(iLocal_208[0], &iVar0, 0, 0, 1, 1);
		__LIB_2__::func_73(iLocal_208[0], &(uLocal_213[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	}
	if (__LIB_2__::func_1(iLocal_208[2], 0, 1))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_COMBAT_PED(0, Global_35, 68157440, 4096);
		__LIB_1__::func_474(iLocal_208[2], &iVar0, 0.75f, 0, 1, 1);
		__LIB_2__::func_73(iLocal_208[2], &(uLocal_213[2]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	}
	if (__LIB_2__::func_1(iLocal_208[1], 0, 1))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2802.013f, -1161.511f, 46.77583f, 1f, 20000, 0.25f, 2048, 40000f);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
		__LIB_1__::func_474(iLocal_208[1], &iVar0, 0, 0, 1, 1);
		__LIB_2__::func_272(iLocal_208[1], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		__LIB_2__::func_73(iLocal_208[1], &(uLocal_213[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	}
	func_96(2);
}

void func_375(int iParam0, int iParam1)
{
	__LIB_0__::func_516(&(uLocal_724[iParam0]), iParam1);
}

bool func_376()
{
	__LIB_4__::func_369(&uLocal_669);
	if (__LIB_2__::func_393(&uLocal_669))
	{
		__LIB_3__::func_474(&uLocal_669);
		return true;
	}
	else if (__LIB_4__::func_376(&uLocal_669, &iLocal_208, 0, -1, 2f, 0))
	{
		__LIB_3__::func_474(&uLocal_669);
		func_112(Global_35, Global_35, "RE_SAM_STD_V1_POST_COMBAT", -1082130432 /* Float: -1f */, 1, 291934926, 0);
		return true;
	}
	return false;
}

bool func_377()
{
	int iVar0;
	if (!__LIB_2__::func_157(iLocal_772[22], Global_36) || func_24(1))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_208)
		{
			if (__LIB_2__::func_1(iLocal_208[iVar0], 0, 0))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_208[iVar0], 6, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_208[iVar0], 494, true);
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_378()
{
	if (!func_24(536870912))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_772[1], Global_36) || VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_772[16], Global_36))
		{
			func_602();
			func_603();
			func_96(536870912);
		}
	}
}

bool func_379()
{
	int iVar0;
	float fVar1;
	iVar0 = func_604();
	if (__LIB_2__::func_1(iVar0, 0, 1))
	{
		fVar1 = __LIB_0__::func_94(iVar0, Global_36, 1);
		if (fVar1 > 11f)
		{
			return true;
		}
	}
	return false;
}

void func_380()
{
	switch (iLocal_687)
	{
		case 0:
			if (func_24(4096))
			{
				iLocal_828 = 3;
				iLocal_687 = 1;
			}
			break;
		case 1:
			iLocal_208[iLocal_828] = __LIB_3__::func_870(Local_218[iLocal_828 /*32*/].f_1, &(Local_218[iLocal_828 /*32*/]), Local_218[iLocal_828 /*32*/].f_6, Local_218[iLocal_828 /*32*/].f_9, 1, 0, 1, 0, 1);
			if (__LIB_2__::func_1(iLocal_208[iLocal_828], 0, 1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_218[iLocal_828 /*32*/].f_23)))
				{
					__LIB_2__::func_133(iLocal_208[iLocal_828], &(Local_218[iLocal_828 /*32*/].f_23), 0);
				}
				PED::_0xFFA1594703ED27CA(iLocal_208[iLocal_828], iLocal_828);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_208[iLocal_828], joaat("REL_GANG_SMUGGLERS"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_208[iLocal_828], true);
				iLocal_828++;
			}
			if (iLocal_828 >= 4)
			{
				iLocal_687 = 2;
			}
			break;
		case 2:
			if (func_605())
			{
				func_606();
				iLocal_687 = 3;
			}
			break;
		case 3:
			break;
	}
}

void func_381()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (((!__LIB_2__::func_1(iLocal_208[1], 0, 0) || PED::IS_PED_IN_COMBAT(iLocal_208[1], 0)) || !func_24(2)) || func_24(16))
	{
		return;
	}
	if (Local_14.f_98[1] < 2f)
	{
		TASK::TASK_COMBAT_PED(iLocal_208[1], Global_35, 68157440, 4096);
	}
	else
	{
		if (!__LIB_2__::func_1(iLocal_208[0], 0, 1))
		{
			iVar0 = iVar0;
			bVar1 = true;
		}
		else
		{
			iVar0 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(iLocal_208[0]));
		}
		if (!__LIB_2__::func_1(iLocal_208[2], 0, 1))
		{
			iVar0 = iVar0;
			bVar1 = true;
		}
		else
		{
			iVar0 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(iLocal_208[2]));
		}
		if ((IntToFloat(iVar0) < 85f || bVar1) || (__LIB_2__::func_0(iLocal_208[1], 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */) && PED::_0x164CECC59E70DF86(iLocal_208[1], 40f)))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_208[1], joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			TASK::TASK_SWAP_WEAPON(0, 1, false, 0, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 68157440, 4096);
			__LIB_1__::func_474(iLocal_208[1], &iVar2, 0, 0, 1, 1);
			func_112(iLocal_208[1], Global_35, "RE_SAM_STD_V1_FINISH", -1082130432 /* Float: -1f */, 1, 291934926, 0);
			func_44(joaat("RESAM_KNIFE"));
			func_96(16);
		}
	}
}

void func_382()
{
	func_608();
	if (func_24(1))
	{
		return;
	}
	if (func_24(2097152))
	{
		func_609();
		func_610();
	}
}

int func_384()
{
	int iVar0;
	int iVar1;
	iVar0 = func_566(&(iLocal_445[2]), &vLocal_498, 8f, &Local_519, &(Local_14.f_192), 3f, 3, 1, 0, __LIB_2__::func_340(3, 0, 0), iLocal_772[1], 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar1 = iVar0;
	if (__LIB_4__::func_366(&vLocal_498))
	{
		if (vLocal_498.y != -1)
		{
			__LIB_2__::func_482(&(Local_519[0 /*17*/]), 1, 1);
			__LIB_2__::func_482(&(Local_519[1 /*17*/]), 1, 1);
			func_311(0);
		}
	}
	if (iVar1 == 1)
	{
		iLocal_677++;
		if (iLocal_677 >= 2)
		{
			__LIB_2__::func_592(&Local_519, 1, 1);
		}
		else
		{
			Local_519[1 /*17*/].f_13 = "RE_SAM_STD_V1_ILO_NEG_BAR_C";
		}
	}
	return iVar1;
}

void func_386(int iParam0, char* sParam1, var uParam2)
{
	char* sVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_452[iParam0]))
	{
		return;
	}
	sVar0 = func_237(iParam0);
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_452[iParam0], sParam1, uParam2);
}

bool func_387()
{
	if (!func_35(128))
	{
		if (func_611())
		{
			if (func_612())
			{
				func_334(128);
			}
		}
	}
	else if (func_106(2, "Base") && func_106(3, "Base"))
	{
		func_85(2, "PB_DRINK", 1);
		func_83(2, "BASE_BOOL", 1);
		func_83(3, "BASE_BOOL", 1);
		return true;
	}
	return false;
}

void func_390()
{
	int iVar0;
	func_81(2, "bartender", iLocal_445[2], 1);
	func_82(2, "BOTTLE", Local_384[0 /*12*/].f_8, 1);
	func_82(2, "RAG", Local_384[1 /*12*/].f_8, 1);
	func_82(2, "SHOTGLASS_A", Local_384[2 /*12*/].f_8, 1);
	func_82(2, "SHOTGLASS_B", Local_384[3 /*12*/].f_8, 1);
	func_83(2, "BASE_BOOL", 0);
	func_85(2, "PB_HELLO_L", 1);
	func_84(2);
	func_81(3, "player", Global_35, 1);
	func_82(3, "SHOTGLASS_B", Local_384[4 /*12*/].f_8, 1);
	func_83(2, "BASE_BOOL", 0);
	iVar0 = 0;
	while (iVar0 < Local_384)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_384[iVar0 /*12*/].f_8) && !ENTITY::IS_ENTITY_DEAD(Local_384[iVar0 /*12*/].f_8))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_384[iVar0 /*12*/].f_8, true);
		}
		iVar0++;
	}
	ENTITY::SET_ENTITY_VISIBLE(Local_384[2 /*12*/].f_8, false);
	func_613();
}

void func_391()
{
	int iVar0;
	int iVar1[15];
	var uVar17;
	int iVar19;
	int iVar20;
	vector3 vVar21;
	iVar0 = __LIB_1__::func_334(298);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!__LIB_1__::func_472(iVar0, 150f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
		{
			__LIB_3__::func_229(298);
		}
	}
	uVar17 = 1;
	iVar19 = func_86(&iVar1, &uVar17, iVar1, iLocal_772[1], 0, 0, 1, -1, 1, 1, 0, 0);
	iVar20 = 0;
	while (iVar20 < iVar19)
	{
		if (__LIB_2__::func_1(iVar1[iVar20], 0, 1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1[iVar20]) == joaat("A_F_M_NBXWHORE_01") && !__LIB_1__::func_472(iVar1[iVar20], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1[iVar20], true, false);
				vVar21 = { ENTITY::GET_ENTITY_COORDS(iVar1[iVar20], false, false) };
				PED::DELETE_PED(&(iVar1[iVar20]));
			}
		}
		iVar20++;
	}
}

void func_392()
{
	char* sVar0;
	char* sVar1;
	sVar0 = "RE_SAM_STD_V1_ILO_POS_BAR";
	sVar1 = "RE_SAM_STD_V1_ILO_NEG_BAR";
	__LIB_2__::func_602(&(Local_519[0 /*17*/]), __LIB_2__::func_460(7), sVar0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	__LIB_2__::func_602(&(Local_519[1 /*17*/]), __LIB_2__::func_460(10), sVar1, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	func_569(0, 0);
	func_569(1, 0);
	__LIB_2__::func_482(&(Local_519[0 /*17*/]), 1, 1);
}

Vector3 func_393(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	return __LIB_4__::func_370(iParam0, iLocal_452[iParam1], sParam2, sParam3, 0);
}

float func_394(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	return __LIB_4__::func_371(iParam0, iLocal_452[iParam1], sParam2, sParam3, 0);
}

void func_396(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9)
{
	__LIB_2__::func_663(uParam1);
	*uParam1 = iParam2;
	uParam1->f_8 = fParam6;
	uParam1->f_6 = fParam5;
	uParam1->f_11 = fParam8;
	uParam1->f_7 = fParam6;
	uParam1->f_9 = fParam7;
	uParam1->f_14 = iParam9;
	uParam1->f_1 = uParam4;
	__LIB_2__::func_668(uParam0, uParam1, sParam3);
}

bool func_397()
{
	char* sVar0;
	int iVar1;
	iVar1 = __LIB_3__::func_547(iLocal_445[2], Global_35, 1060437492 /* Float: 0.707f */);
	switch (iVar1)
	{
		case 0:
			sVar0 = "PB_HELLO_N";
			break;
		case 3:
			sVar0 = "PB_HELLO_L";
			break;
		case 2:
			sVar0 = "PB_HELLO_R";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return false;
	}
	if (!func_356(2, sVar0))
	{
		func_85(2, sVar0, 1);
	}
	func_83(2, "BASE_BOOL", 1);
	__LIB_1__::func_283(&(vLocal_732[12 /*3*/]), 0);
	return true;
}

bool func_398()
{
	if (!func_106(2, "Base"))
	{
		if (func_562(2, "BASE_BOOL"))
		{
			func_83(2, "BASE_BOOL", 0);
			return true;
		}
	}
	return false;
}

void func_400()
{
	if (!__LIB_0__::func_27(iLocal_731, 32))
	{
		if (func_110(iLocal_445[2], 2, "bartender", 0, 0, 1, 1))
		{
			func_386(2, "RAG", Local_384[1 /*12*/].f_8);
			func_386(2, "SHOTGLASS_A", Local_384[2 /*12*/].f_8);
			func_386(2, "SHOTGLASS_B", Local_384[3 /*12*/].f_8);
			if (ENTITY::DOES_ENTITY_EXIST(Local_384[1 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_384[1 /*12*/].f_8));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_384[2 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_384[2 /*12*/].f_8));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_384[3 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_384[3 /*12*/].f_8));
			}
			TASK::_TASK_USE_SCENARIO_POINT(iLocal_445[2], uLocal_666, "WORLD_HUMAN_BARTENDER_CLEAN_GLASS_MALE_B", -1, false, true, joaat("WORLD_HUMAN_BARTENDER_CLEAN_GLASS"), false, 0.3f, false);
			PED::_0x2208438012482A1A(iLocal_445[2], false, false);
			__LIB_1__::func_336(&iLocal_731, 32);
		}
	}
}

void func_429(int iParam0)
{
	char* sVar0;
	sVar0 = func_237(iParam0);
	iLocal_452[iParam0] = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, 0, false, true);
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_452[iParam0], true, false))
	{
		return;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(iLocal_452[iParam0]);
}

void func_430(int iParam0)
{
	int iVar0;
	iVar0 = func_180(iParam0);
	STREAMING::REQUEST_MODEL(iVar0, false);
}

bool func_562(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_452[iParam0]))
	{
		return false;
	}
	return ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_452[iParam0], sParam1);
}

int func_566(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_706(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_569(int iParam0, bool bParam1)
{
	__LIB_2__::func_411(&(Local_519[iParam0 /*17*/]), bParam1, 0);
}

bool func_570(int iParam0)
{
	if (__LIB_2__::func_466(&(Local_519[iParam0 /*17*/]), 1, 0) && !__LIB_1__::func_489(&(Local_519[iParam0 /*17*/]), 13))
	{
		return true;
	}
	return false;
}

bool func_574()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	if (!__LIB_0__::func_86(vLocal_493))
	{
		return true;
	}
	fVar2 = 1E+10f;
	if (!bLocal_674)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, 2793.895f, -1169.001f, 46.91584f, false) <= 0.76f)
		{
			iVar1 = 3;
			fVar2 = 0.76f;
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, 2794.894f, -1168.188f, 46.92398f, false) <= 0.68f)
		{
			iVar1 = 2;
			fVar2 = 0.68f;
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, 2794.423f, -1168.606f, 46.92398f, false) <= 0.6f)
		{
			iVar1 = 3;
			fVar2 = 0.6f;
		}
		else if (PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_347[0], false, true), 45f))
		{
			iVar0 = 0;
			while (iVar0 < vLocal_457.x)
			{
				fVar3 = __LIB_0__::func_636(Global_36, vLocal_457[iVar0 /*3*/]);
				if (fVar3 < fVar2)
				{
					if (PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, vLocal_457[iVar0 /*3*/], 70f))
					{
						iVar1 = iVar0;
						fVar2 = fVar3;
					}
				}
				iVar0++;
			}
		}
		if (fVar2 > 1.3f)
		{
			return false;
		}
		vLocal_493 = { vLocal_457[iVar1 /*3*/] };
		fLocal_496 = fLocal_470[iVar1];
		switch (iVar1)
		{
			case 3:
				sLocal_497 = "PBL_ENTER_STAND";
				break;
			case 0:
				sLocal_497 = "PBL_ENTER_L";
				break;
			case 1:
				sLocal_497 = "PBL_ENTER_N";
				break;
			case 2:
				sLocal_497 = "PBL_ENTER_R";
				break;
		}
	}
	else
	{
		if (!__LIB_2__::func_157(iLocal_772[26], Global_36))
		{
			return false;
		}
		if (!func_719())
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_IN_AIR(Global_35, 1))
		{
			return false;
		}
		vLocal_493 = { Global_36 };
		iVar4 = __LIB_2__::func_431(iLocal_347[0], __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */), 0.85f);
		switch (iVar4)
		{
			case 2:
				sLocal_497 = "PL_MTH_ENTER_LEFT";
				break;
			default:
				sLocal_497 = "PL_MTH_ENTER_FORWARD";
				break;
		}
	}
	if (__LIB_2__::func_1(Global_35, 0, 1))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
	}
	func_96(1024);
	func_47(0);
	if (!bLocal_674)
	{
		func_720(vLocal_493, fLocal_496);
		func_575(&Local_557, 106);
	}
	return true;
}

bool func_575(var uParam0, int iParam1)
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
	int iVar10;
	int iVar11;
	int iVar12;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && !__LIB_0__::func_27(uParam0->f_23, 4))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (PED::IS_PED_A_PLAYER(uParam0->f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, uParam0->f_3, false);
					if (__LIB_0__::func_27(uParam0->f_23, 2048))
					{
						HUD::_DISPLAY_HUD_COMPONENT(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				}
				if (!__LIB_0__::func_27(uParam0->f_23, 4))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_1);
				}
				if (!__LIB_0__::func_27(uParam0->f_23, 2))
				{
					uParam0->f_2 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && __LIB_0__::func_71(uParam0->f_1))
					{
						__LIB_3__::func_622(uParam0->f_1);
						iVar0 = __LIB_2__::func_431(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_1, true);
						VEHICLE::BRING_VEHICLE_TO_HALT(iVar2, 5f, -1, false);
						iVar3 = __LIB_2__::func_431(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_1, 0, iVar4);
					}
					else
					{
						__LIB_1__::func_336(&(uParam0->f_23), 2);
					}
				}
				if (__LIB_0__::func_86(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				__LIB_0__::func_19(uParam0, 1, iParam1);
			}
			else
			{
				__LIB_0__::func_19(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (__LIB_3__::func_663(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!__LIB_3__::func_670(uParam0, iParam1))
				{
					__LIB_3__::func_671();
				}
				__LIB_0__::func_19(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (__LIB_3__::func_670(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!__LIB_0__::func_27(uParam0->f_23, 4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, __LIB_0__::func_27(uParam0->f_23, 512), 0, 0);
				}
				__LIB_0__::func_19(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (__LIB_3__::func_664(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!PED::_IS_PED_CARRYING(uParam0->f_1))
				{
					__LIB_1__::func_336(&(uParam0->f_23), 256);
				}
				if (__LIB_0__::func_27(uParam0->f_23, 4096) && !PED::_IS_PED_CARRYING(uParam0->f_1))
				{
					__LIB_1__::func_336(&(uParam0->f_23), 256);
					iVar6 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (__LIB_0__::func_665(iVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = __LIB_3__::func_661(iVar6);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(uParam0->f_1, iVar5);
					}
				}
				else if (!__LIB_0__::func_27(uParam0->f_23, 256))
				{
					iVar5 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(uParam0->f_1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				__LIB_0__::func_19(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (__LIB_3__::func_665(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (__LIB_0__::func_27(uParam0->f_23, 8192))
				{
					if (__LIB_0__::func_27(uParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					TASK::TASK_ENTER_ANIM_SCENE(uParam0->f_1, uParam0->f_25, &(uParam0->f_30), &(uParam0->f_26), uParam0->f_21, false, iVar7, 20000, -1082130432 /* Float: -1f */);
				}
				else
				{
					if (!__LIB_0__::func_86(uParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!__LIB_0__::func_27(uParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar9);
					if (!__LIB_0__::func_86(uParam0->f_11))
					{
						if (__LIB_0__::func_27(uParam0->f_23, 16))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_11, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
						}
					}
					if (__LIB_0__::func_27(uParam0->f_23, 16))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_8, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_8, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
					}
					if (__LIB_0__::func_27(uParam0->f_23, 1))
					{
						TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_19, 0);
					}
					__LIB_1__::func_474(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				__LIB_0__::func_19(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (__LIB_0__::func_27(uParam0->f_23, 8192))
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!__LIB_0__::func_27(uParam0->f_23, 1))
			{
				uParam0->f_19 = ENTITY::GET_ENTITY_HEADING(uParam0->f_1);
			}
			if (!__LIB_0__::func_27(uParam0->f_23, 128) && __LIB_1__::func_313(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!__LIB_0__::func_27(uParam0->f_23, 8192))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((__LIB_0__::func_86(uParam0->f_11) || !__LIB_0__::func_163(uParam0->f_1, 242628503)) || TASK::GET_SEQUENCE_PROGRESS(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (__LIB_3__::func_625(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, __LIB_0__::func_27(uParam0->f_23, 8)) && (!__LIB_0__::func_27(uParam0->f_23, 64) || MISC::ABSF(__LIB_3__::func_592(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (__LIB_0__::func_27(uParam0->f_23, 32))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_1, uParam0->f_8, 0);
				}
				__LIB_0__::func_37(&(uParam0->f_5));
				__LIB_0__::func_19(uParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

int func_576(int iParam0, char* sParam1, char* sParam2, var uParam3, bool bParam4)
{
	return func_733(Global_35, iLocal_452[iParam0], sParam2, sParam1, uParam3, 1065353216 /* Float: 1f */, 1, bParam4, 1);
}

void func_579(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (__LIB_0__::func_51(&(uParam1->f_3), 1))
	{
		func_735(uParam1);
		if (__LIB_3__::func_517(iParam0, fParam7, fParam11, bParam12, bParam13, fParam14))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_2__::func_524(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		__LIB_2__::func_496(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

void func_582(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*iParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam4) * 127f));
	*iParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam5) * 127f));
	*iParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam6) * 127f));
	*iParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam7) * 127f));
}

void func_591(int iParam0)
{
	ANIMSCENE::RESET_ANIM_SCENE(iLocal_452[iParam0], 0);
}

bool func_596()
{
	if (func_35(8))
	{
		if (func_110(Global_35, 0, "player_zero", 0, 0, 1, 0))
		{
			PED::SET_PED_USING_ACTION_MODE(Global_35, true, -1, 0);
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				return true;
			}
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, 2804.824f, -1162.504f, 46.7758f, false) < 1f && !__LIB_0__::func_163(Global_35, 242628503))
	{
		if (CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			return true;
		}
	}
	return false;
}

int func_598(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, bool bParam6)
{
	struct<4> Var0;
	if (!bParam6 && PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return 0;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1, sParam2, &Var0, true, sParam3, 2))
	{
		if (__LIB_3__::func_625(iParam0, Var0, Var0.f_3.f_2, fParam4, fParam5, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_602()
{
	int iVar0;
	int iVar1;
	int iVar2[10];
	var uVar13[2];
	uVar13[0] = iLocal_445[2];
	uVar13[1] = Global_35;
	iVar0 = func_86(&iVar2, &uVar13, iVar2, iLocal_772[3], 0, 1, 0, -1, 1, 0, 0, 0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_2__::func_1(iVar2[iVar1], 0, 0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2[iVar1], false);
		}
		iVar1++;
	}
}

void func_603()
{
	int iVar0;
	int iVar1;
	int iVar2[10];
	var uVar13[2];
	uVar13[0] = iLocal_445[2];
	uVar13[1] = Global_35;
	iVar0 = func_86(&iVar2, &uVar13, iVar2, iLocal_772[2], 0, 1, 0, -1, 1, 0, 0, 0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_2__::func_1(iVar2[iVar1], 0, 0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2[iVar1], false);
		}
		iVar1++;
	}
}

int func_604()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar1 = -1;
	fVar3 = 9999.9f;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_2__::func_1(iLocal_208[iVar0], 0, 1))
		{
			fVar2 = __LIB_0__::func_94(iLocal_208[iVar0], Global_36, 1);
			if (fVar2 < fVar3)
			{
				iVar1 = iVar0;
				fVar3 = fVar2;
			}
		}
		iVar0++;
	}
	if (iVar1 < 0)
	{
		return 0;
	}
	return iLocal_208[iVar1];
}

bool func_605()
{
	vector3 vVar0;
	__LIB_1__::func_283(&(vLocal_732[3 /*3*/]), 0);
	if (__LIB_1__::func_285(&(vLocal_732[3 /*3*/]), 3f))
	{
		return true;
	}
	vVar0 = { func_757(3) };
	if (func_758(vVar0, &uLocal_836, &uLocal_841, &uLocal_842, 0.5f, 1110704128 /* Float: 45f */, 0, 0, 8f))
	{
		return true;
	}
	return false;
}

void func_606()
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 3;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(iLocal_208[iVar0], 0, 1))
		{
			vVar1 = { func_757(iVar0) };
			__LIB_2__::func_542(iLocal_208[iVar0], vVar1, 1.5f, 1, 0);
			TASK::TASK_COMBAT_PED(iLocal_208[iVar0], Global_35, 0, 0);
			__LIB_2__::func_73(iLocal_208[iVar0], &(uLocal_213[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_208[iVar0], 45, true);
		}
		iVar0++;
	}
}

void func_608()
{
	int iVar0;
	if (!func_24(2097152))
	{
		if (((__LIB_2__::func_227(5f, 1, 0, 0) && __LIB_2__::func_227(0f, 1, iLocal_208[0], 1)) && __LIB_2__::func_227(0f, 1, iLocal_208[1], 1)) && __LIB_2__::func_227(0f, 1, iLocal_208[2], 1))
		{
			iVar0 = 1;
			while (iVar0 <= 2)
			{
				if (__LIB_2__::func_1(iLocal_208[iVar0], 0, 1))
				{
					if (__LIB_2__::func_227(0f, 1, iLocal_208[iVar0], 1))
					{
						func_112(iLocal_208[iVar0], Global_35, "RE_SAM_STD_V1_EBRAWL", -1082130432 /* Float: -1f */, 1, 291934926, 0);
						func_96(2097152);
					}
					else
					{
						iVar0++;
					}
				}
			}
		}
	}
}

void func_609()
{
	bool bVar0;
	int iVar1;
	switch (iLocal_688)
	{
		case 0:
			if (__LIB_2__::func_227(2f, 1, 0, 0))
			{
				if (func_760(Global_35, 1) < 85)
				{
					if (!PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 3000))
					{
						iVar1 = 0;
						while (iVar1 <= 1)
						{
							if (__LIB_2__::func_1(iLocal_208[iVar1], 0, 0) && __LIB_2__::func_227(0f, 1, iLocal_208[iVar1], 1))
							{
								func_112(iLocal_208[iVar1], Global_35, "RE_SAM_STD_V1_FIGHTPOS1", -1082130432 /* Float: -1f */, 1, 291934926, 0);
								bVar0 = true;
							}
							else
							{
								iVar1++;
							}
						}
						if (bVar0)
						{
							iLocal_688 = 1;
						}
					}
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(2f, 1, 0, 0))
			{
				if (func_760(Global_35, 1) < 60)
				{
					if (!PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 3000))
					{
						iVar1 = 0;
						while (iVar1 <= 1)
						{
							if (__LIB_2__::func_1(iLocal_208[iVar1], 0, 0) && __LIB_2__::func_227(0f, 1, iLocal_208[iVar1], 1))
							{
								func_112(iLocal_208[iVar1], Global_35, "RE_SAM_STD_V1_FIGHTPOS2", -1082130432 /* Float: -1f */, 1, 291934926, 0);
								bVar0 = true;
							}
							else
							{
								iVar1++;
							}
						}
						if (bVar0)
						{
							iLocal_688 = 2;
						}
					}
				}
			}
			break;
		case 2:
			break;
	}
}

void func_610()
{
	bool bVar0;
	int iVar1;
	switch (iLocal_689)
	{
		case 0:
			if (__LIB_2__::func_227(2f, 1, 0, 0))
			{
				if (((func_760(iLocal_208[0], 0) < 50 || func_760(iLocal_208[1], 0) < 50) || func_760(iLocal_208[2], 0) < 50) || func_761(1) < 80)
				{
					if (PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 2000))
					{
						iVar1 = 0;
						while (iVar1 <= 1)
						{
							if (__LIB_2__::func_1(iLocal_208[iVar1], 0, 0) && __LIB_2__::func_227(0f, 1, iLocal_208[iVar1], 1))
							{
								func_112(iLocal_208[iVar1], Global_35, "RE_SAM_STD_V1_FIGHTNEG1", -1082130432 /* Float: -1f */, 1, 291934926, 0);
								bVar0 = true;
							}
							else
							{
								iVar1++;
							}
						}
						if (bVar0)
						{
							iLocal_689 = 1;
						}
					}
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(2f, 1, 0, 0))
			{
				if (((func_760(iLocal_208[0], 0) < 30 || func_760(iLocal_208[1], 0) < 30) || func_760(iLocal_208[2], 0) < 30) || func_761(1) < 50)
				{
					if (PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 2000))
					{
						iVar1 = 0;
						while (iVar1 <= 1)
						{
							if (__LIB_2__::func_1(iLocal_208[iVar1], 0, 0) && __LIB_2__::func_227(0f, 1, iLocal_208[iVar1], 1))
							{
								func_112(iLocal_208[iVar1], Global_35, "RE_SAM_STD_V1_FIGHTNEG2", -1082130432 /* Float: -1f */, 1, 291934926, 0);
								bVar0 = true;
							}
							else
							{
								iVar1++;
							}
						}
						if (bVar0)
						{
							iLocal_689 = 2;
						}
					}
				}
			}
			break;
		case 2:
			break;
	}
}

bool func_611()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	if (!__LIB_0__::func_86(vLocal_493))
	{
		return true;
	}
	if (!__LIB_0__::func_139(Local_14.f_162))
	{
		if (!func_24(4))
		{
			Local_14.f_162 = __LIB_3__::func_905("RESA_TAKE_DRINK", joaat("INPUT_CONTEXT_Y"), iLocal_772[25], 3, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
		}
		return false;
	}
	else if (!__LIB_0__::func_567(Local_14.f_162, 0))
	{
		return false;
	}
	else
	{
		__LIB_1__::func_748(&(Local_14.f_162), 1, 1);
	}
	if (__LIB_2__::func_1(Global_35, 0, 1))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
	}
	if (!bLocal_674)
	{
		fVar2 = 1E+10f;
		iVar0 = 0;
		while (iVar0 < vLocal_475.x)
		{
			fVar3 = __LIB_0__::func_636(Global_36, vLocal_475[iVar0 /*3*/]);
			if (fVar3 < fVar2)
			{
				if ((ENTITY::GET_ENTITY_SPEED(Global_35) > 0.25f && PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, vLocal_475[iVar0 /*3*/], 70f)) || (ENTITY::GET_ENTITY_SPEED(Global_35) <= 0.25f && __LIB_1__::func_374(Global_35, vLocal_475[iVar0 /*3*/], 0.5f)))
				{
					iVar1 = iVar0;
					fVar2 = fVar3;
				}
			}
			iVar0++;
		}
		vLocal_493 = { vLocal_475[iVar1 /*3*/] };
		fLocal_496 = fLocal_488[iVar1];
		switch (iVar1)
		{
			case 0:
				sLocal_497 = "PB_ENTER_FL";
				break;
			case 1:
				sLocal_497 = "PB_ENTER_FR";
				break;
			case 2:
				sLocal_497 = "PB_ENTER_L";
				break;
			case 3:
				sLocal_497 = "PB_ENTER_N";
				break;
		}
	}
	else
	{
		sLocal_497 = "PB_MTH_ENTER";
		vLocal_493 = { Global_36 };
	}
	func_96(1024);
	func_47(0);
	if (!bLocal_674)
	{
		func_720(vLocal_493, fLocal_496);
		func_575(&Local_557, 106);
	}
	return true;
}

bool func_612()
{
	bool bVar0;
	if (!func_611())
	{
		return false;
	}
	__LIB_1__::func_283(&(vLocal_732[6 /*3*/]), 0);
	if (!bLocal_674)
	{
		bVar0 = (func_575(&Local_557, 106) && func_357(Global_35, 3, "player", sLocal_497, (0.25f + 0.4f), (10f + 20f)));
	}
	else
	{
		bVar0 = func_576(3, "PB_MTH_ENTER", "player", &uLocal_668, 1);
		if (func_105(3, Global_35))
		{
			bVar0 = true;
		}
	}
	if (bVar0 || __LIB_1__::func_285(&(vLocal_732[6 /*3*/]), 10f))
	{
		if (!bLocal_674)
		{
			func_85(3, sLocal_497, 0);
		}
		func_47(1);
		return true;
	}
	return false;
}

void func_613()
{
	vLocal_475[0 /*3*/] = { func_87(Global_35, 3, "player", "PB_ENTER_FL") };
	fLocal_488[0] = func_88(Global_35, 3, "player", "PB_ENTER_FL");
	vLocal_475[1 /*3*/] = { func_87(Global_35, 3, "player", "PB_ENTER_FR") };
	fLocal_488[1] = func_88(Global_35, 3, "player", "PB_ENTER_FR");
	vLocal_475[2 /*3*/] = { func_87(Global_35, 3, "player", "PB_ENTER_L") };
	fLocal_488[2] = func_88(Global_35, 3, "player", "PB_ENTER_L");
	vLocal_475[3 /*3*/] = { func_87(Global_35, 3, "player", "PB_ENTER_N") };
	fLocal_488[3] = func_88(Global_35, 3, "player", "PB_ENTER_N");
}

int func_706(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_4__::func_163(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_706(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_4__::func_164(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_4__::func_165(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_4__::func_166(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_4__::func_165(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_4__::func_164(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

bool func_719()
{
	if (__LIB_2__::func_157(iLocal_772[25], Global_36))
	{
		return true;
	}
	if (PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_347[0], false, false), 40f) && ENTITY::GET_ENTITY_SPEED(Global_35) > 0.25f)
	{
		return true;
	}
	return false;
}

void func_720(vector3 vParam0, float fParam3)
{
	Local_557.f_1 = Global_35;
	Local_557.f_8 = { vParam0 };
	Local_557.f_17 = 0.25f;
	Local_557.f_18 = 0.25f;
	Local_557.f_20 = 10f;
	Local_557.f_19 = fParam3;
	__LIB_1__::func_336(&(Local_557.f_23), 529);
}

int func_733(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar5 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		switch (*uParam4)
		{
			case 0:
				if (bParam8 && PED::IS_PED_ON_MOUNT(iParam0))
				{
					vVar0 = { __LIB_3__::func_508(iParam0, iParam1, sParam2, sParam3, 0) };
					if (!__LIB_0__::func_86(vVar0))
					{
						if (__LIB_0__::func_195(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), vVar0))
						{
							iVar5 = 131072;
						}
						else
						{
							iVar5 = 262144;
						}
					}
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, iVar5, 0, 0, 0, 0);
					*uParam4 = 1;
				}
				else
				{
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, false, 0, 0);
					}
					if (PED::_IS_PED_CARRYING(iParam0))
					{
						iVar6 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar6, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 2f, 8);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432 /* Float: -1f */);
					__LIB_1__::func_474(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 1:
				if (!PED::IS_PED_ON_MOUNT(iParam0))
				{
					iVar3 = PED::_GET_LAST_MOUNT(iParam0);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iVar3, iParam0, 6, 0, 4f, -1, 0);
					}
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, false, 0, 0);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432 /* Float: -1f */);
					__LIB_1__::func_474(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 2:
				if (bParam7)
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, iParam1))
					{
						return 1;
					}
				}
				else if (__LIB_0__::func_163(iParam0, 242628503))
				{
					if (!bParam6 || TASK::GET_SEQUENCE_PROGRESS(iParam0) > 0)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam1, sParam3))
						{
							if (!ANIMSCENE::_0x3B393716C3FD8237(iParam0) && ANIMSCENE::_0x337F1CC8EE895601(iParam1, sParam2))
							{
								*uParam4 = 3;
								return 1;
							}
						}
					}
				}
				break;
			case 3:
				return 1;
		}
	}
	return 0;
}

void func_735(var uParam0)
{
	if (__LIB_0__::func_51(&(uParam0->f_3), 4))
	{
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if ((!__LIB_2__::func_519(uParam0) || __LIB_0__::func_51(&(uParam0->f_3), 4)) && !__LIB_0__::func_51(&(uParam0->f_3), 256))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_BEHIND"), false);
		}
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_NEXT_CAMERA"), false);
	}
	if (func_838(uParam0))
	{
		__LIB_1__::func_539();
	}
	if (!__LIB_0__::func_51(&(uParam0->f_3), 16))
	{
		if (__LIB_0__::func_75(uParam0))
		{
			if (__LIB_1__::func_871(uParam0) < uParam0->f_4)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
	}
}

Vector3 func_757(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2796.94f, -1165.947f, 46.924f;
		case 1:
			return 2802.509f, -1161.617f, 46.7758f;
		case 2:
			return 2810.745f, -1163.047f, 46.6765f;
		case 3:
			return 2793.972f, -1172.766f, 46.924f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_758(vector3 vParam0, var uParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, bool bParam9, float fParam10)
{
	float fVar0;
	if (fParam8 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam8)
		{
			return false;
		}
	}
	fVar0 = __LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), vParam0, 1);
	if (fVar0 < fParam7)
	{
		if (__LIB_18__::func_202(vParam0, 0, uParam3, iParam4, iParam5, fParam6, fParam7, bParam9, 0))
		{
			return true;
		}
		if (fVar0 < fParam10)
		{
			*iParam4 = 0f;
			return true;
		}
	}
	return false;
}

int func_760(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!bParam1)
		{
			return (ENTITY::GET_ENTITY_HEALTH(iParam0) * 100 / PED::GET_PED_MAX_HEALTH(iParam0));
		}
	}
	if (bParam1)
	{
		return (ENTITY::GET_ENTITY_HEALTH(iParam0) * 100 / iLocal_853);
	}
	return 0;
}

int func_761(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(iLocal_208[iVar0], 0, 0))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(iLocal_208[iVar0]) || !bParam0)
			{
				iVar2 = (iVar2 + func_760(iLocal_208[iVar0], 0));
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	return (iVar2 / iVar1);
}

bool func_838(var uParam0)
{
	if (!__LIB_2__::func_519(uParam0))
	{
		return false;
	}
	if (func_923(uParam0->f_7, uParam0->f_8, __LIB_0__::func_51(&(uParam0->f_3), 4)))
	{
		return true;
	}
	if (!__LIB_0__::func_51(&(uParam0->f_3), 4))
	{
		if (__LIB_1__::func_383())
		{
			return true;
		}
	}
	return false;
}

bool func_923(float fParam0, float fParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	func_582(&uVar0, &uVar1, &iVar2, &iVar3, joaat("INPUT_SCRIPT_LEFT_AXIS_X"), joaat("INPUT_SCRIPT_LEFT_AXIS_Y"), joaat("INPUT_SCRIPT_RIGHT_AXIS_X"), joaat("INPUT_SCRIPT_RIGHT_AXIS_Y"), 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return true;
		}
	}
	if (!__LIB_1__::func_379(fParam0, fParam1))
	{
		return true;
	}
	return false;
}

