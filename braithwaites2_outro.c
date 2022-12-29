#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<9> Local_3 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	struct<11> Local_19[64];
	int iLocal_724 = 0;
	int iLocal_725 = 0;
	int iLocal_726 = 0;
	int iLocal_727[1] = { 0 };
	var uLocal_729[1] = { 0 };
	int iLocal_731[1] = { 0 };
	bool bLocal_733 = false;
	int iLocal_734 = 0;
	var uLocal_735 = 24;
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
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	int iLocal_833[1] = { 0 };
	int iLocal_835 = 0;
	vector3 vLocal_836[1] = {{ 0f, 0f, 0f } };
	vector3 vLocal_840[1] = {{ 0f, 0f, 0f } };
	int iLocal_844 = 0;
	int iLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	int iLocal_849 = 0;
	float fLocal_850 = 0f;
	char* sLocal_851 = NULL;
	char* sLocal_852 = NULL;
	bool bLocal_853 = false;
	int iLocal_854 = 0;
	struct<4> Local_855 = { 0, 0, 0, 0 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion
void __EntryFunction__()
{
	iLocal_844 = joaat("STAND");
	iLocal_854 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_855);
	}
	func_2(&Local_855, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_855))
	{
		__LIB_5__::func_233(&Local_855);
		switch (__LIB_0__::func_57(Local_855))
		{
			case 0:
				if (func_6(&Local_855))
				{
					__LIB_0__::func_19(&Local_855, 1);
				}
				break;
			case 1:
				if (func_8(&Local_855))
				{
					__LIB_0__::func_19(&Local_855, 2);
				}
				break;
			case 2:
				if (func_9(&Local_855))
				{
					__LIB_0__::func_19(&Local_855, 3);
				}
				break;
			case 3:
				func_1(&Local_855);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_855);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	__LIB_1__::func_752();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (__LIB_0__::func_699(iLocal_727[iVar0]))
		{
			__LIB_1__::func_774(iLocal_727[iVar0], 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 27)
	{
		iVar2 = iVar1;
		if (__LIB_0__::func_31(iVar2) && __LIB_0__::func_699(iVar2))
		{
			iVar3 = Global_1360165[iVar1 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (__LIB_1__::func_22(iVar2))
				{
					__LIB_1__::func_774(iVar2, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar1++;
	}
	if (__LIB_4__::func_802(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
		__LIB_4__::func_803(uParam0, 4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		__LIB_4__::func_804(uParam0, 1);
	}
	if (uParam1->f_3)
	{
		__LIB_4__::func_804(uParam0, 2);
	}
	func_19(uParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	return 1;
}

bool func_6(var uParam0)
{
	if (!__LIB_2__::func_312(iLocal_844, 1, 0, 0))
	{
		return false;
	}
	if ((__LIB_9__::func_359(sLocal_851) && __LIB_2__::func_313(iLocal_844)) && PED::_0x5E420FF293EE5472())
	{
		return true;
	}
	return false;
}

bool func_8(var uParam0)
{
	if ((!__LIB_4__::func_802(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return false;
	}
	return func_24(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (!func_25(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	if (!__LIB_4__::func_805())
	{
		iVar0 = 0;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_11(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_729[iVar0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uLocal_729[iVar0], true))
		{
			if (PED::IS_PED_IN_GROUP(uLocal_729[iVar0]))
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_729[iVar0]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_729[iVar0]));
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_833[iVar0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_833[iVar0], true))
		{
			__LIB_1__::func_463(iLocal_833[iVar0], iLocal_727[iVar0], 1, 0, 0);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_835) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_835, true))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_835);
	}
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_851);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_852);
	__LIB_0__::func_745(8);
	if (PED::DOES_GROUP_EXIST(iLocal_734))
	{
		PED::REMOVE_GROUP(iLocal_734);
	}
	__LIB_4__::func_321(iLocal_844);
	if (PED::_0x5C16855277819BBF() > iLocal_845)
	{
		PED::_0x7D4E70A67A651C71((PED::_0x5C16855277819BBF() + iLocal_845));
	}
	if (__LIB_0__::func_272(uLocal_729[iLocal_849], 0) && PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), uLocal_729[iLocal_849]);
	}
	__LIB_5__::func_540(1);
	func_35();
	MISC::_0x1096603B519C905F("");
}

void func_19(var uParam0)
{
	int iVar0;
	iLocal_727[0] = 8;
	iLocal_849 = 0;
	if (__LIB_0__::func_895(Global_1835011[20 /*74*/].f_1) == 1)
	{
		__LIB_0__::func_900(8);
		bLocal_733 = true;
		__LIB_1__::func_148(&uLocal_846);
		bLocal_853 = true;
	}
	else if (__LIB_0__::func_895(Global_1835011[20 /*74*/].f_1) == 2)
	{
		__LIB_0__::func_900(8);
		bLocal_733 = true;
		bLocal_853 = false;
	}
	else
	{
		bLocal_733 = false;
		bLocal_853 = false;
	}
	sLocal_851 = "brt2_outroRideToCamp";
	sLocal_852 = "brt2_outroCME";
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_851);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_852);
	vLocal_836[0 /*3*/] = { 663.47f, -1230.6f, 43.4f };
	vLocal_840[0 /*3*/] = { 668.77f, -1233.93f, 44.16f };
	StringCopy(&Local_3, "camera_treatments", 64);
	StringCopy(&(Local_3.f_8), "GENERIC_CME_PULL_OUT_TREATMENT_REQUEST", 64);
	CAM::_0x6A4D224FC7643941(&Local_3);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		__LIB_0__::func_634(&(vLocal_836[iVar0 /*3*/]), 50, 10, 0);
		__LIB_0__::func_634(&(vLocal_840[iVar0 /*3*/]), 50, 10, 0);
		iVar0++;
	}
	fLocal_850 = 5.2f;
	iLocal_845 = 2;
	if (PED::_0x5C16855277819BBF() <= iLocal_845)
	{
		PED::_0xED9582B3DA8F02B4((PED::_0x5C16855277819BBF() + iLocal_845));
	}
	__LIB_1__::func_148(&uLocal_846);
	__LIB_5__::func_540(0);
	func_54();
}

int func_24(var uParam0)
{
	switch (iLocal_725)
	{
		case 0:
			if (func_55(&iLocal_727, &uLocal_729, 0, 1, 0, 0, 0, 0))
			{
				iLocal_725 = 1;
			}
		else
		{
			}
			else
			{
				iLocal_835 = PED::GET_MOUNT(Global_35);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_835))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_835, true, true);
				}
				iLocal_725 = 2;
				iLocal_833[0] = PED::GET_MOUNT(uLocal_729[0]);
				iLocal_725 = 3;
				func_56();
				func_57(iLocal_835, &iLocal_833);
				iLocal_725 = 4;
				MISC::_0x1096603B519C905F("BRT2");
				return 1;
			}
			return 0;
			default:
				break;
	}
}

bool func_25(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(uLocal_729[iParam0]))
	{
		return true;
	}
	if (__LIB_11__::func_331(uLocal_729[iParam0], 1, 1))
	{
		iLocal_731[iParam0] = 18;
		if (__LIB_0__::func_699(iLocal_727[iParam0]))
		{
			__LIB_1__::func_774(iLocal_727[iParam0], 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_833[iParam0]))
		{
			__LIB_1__::func_463(iLocal_833[iParam0], iLocal_727[iParam0], 1, 0, 0);
		}
		return true;
	}
	if (bLocal_733 && __LIB_0__::func_232(Global_35, uLocal_729[iParam0], 0) > 6400f)
	{
		MAP::_BLIP_SET_MODIFIER(__LIB_4__::func_244(8), -1269631044);
		bLocal_733 = false;
		bLocal_853 = false;
	}
	switch (iLocal_731[iParam0])
	{
		case 0:
			if (func_61(iParam0))
			{
				if (bLocal_853)
				{
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
					STREAMING::PREFETCH_SRL("script@tripskip@brt2_srl");
					CAM::_0x1B3C2D961F5FC0E1("script@Cinematics@TripSkip@Clemens_Point");
					TASK::OPEN_SEQUENCE_TASK(&iLocal_726);
					TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(uLocal_729[iParam0], true, false) + Vector(0f, -5f, -4f), 1.5f, -1, 0.25f, 8192, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_726);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_729[iParam0], iLocal_726);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_726);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_726);
					TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(uLocal_729[iParam0], true, false) + Vector(0f, -5f, -4f), 1.5f, -1, 0.25f, 8192, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_726);
					TASK::_TASK_PERFORM_SEQUENCE_2(Global_35, iLocal_726, 0.25f, 0.25f);
					if (CAM::_0xDD0B7C5AE58F721D(&Local_3))
					{
						CAM::_0xB8B207C34285E978(&Local_3);
					}
					__LIB_1__::func_148(&uLocal_846);
					iLocal_731[iParam0] = 7;
				}
				else
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(uLocal_729[iParam0], sLocal_851, -1.5f, 0, 9224, -1, 0);
					iLocal_731[iParam0] = 13;
				}
			}
			break;
		case 7:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if ((__LIB_0__::func_265(&uLocal_846) > 3f && CAM::_0xAA235E2F2C09E952("script@Cinematics@TripSkip@Clemens_Point")) && STREAMING::IS_SRL_LOADED())
			{
				CAM::_0x0A5A4F1979ABB40E(&Local_3);
				CAM::_0x798BE43C9393632B(&Local_3);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_729[iParam0], false, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_833[iParam0], false, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_835, false, true);
				func_63(iLocal_835, 1180.4f, -1554.3f, 53.4f, 19.7f, 1, 1073741824 /* Float: 2f */);
				func_63(iLocal_833[0], 1178.3f, -1559f, 53.7f, 19.7f, 1, 1073741824 /* Float: 2f */);
				PED::FORCE_PED_MOTION_STATE(iLocal_833[0], joaat("MOTIONSTATE_SPRINT"), false, 0, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.75f, 2000, 0f, true, false);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(uLocal_729[iParam0], sLocal_852, -1.5f, 5, 4196386, -1, 0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(Global_35, sLocal_852, 1f, 5, 11266, -1, 0);
				AUDIO::_0x5E3CCF03995388B5(-1723251484, 1192.2f, -1557f, 55.4f);
				CAM::_0xBC016635D6A73B31("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_1", 5);
				STREAMING::END_SRL();
				STREAMING::PREFETCH_SRL("script@tripskip@brt2_burning_srl");
				CAM::_0x1B3C2D961F5FC0E1("script@Cinematics@TripSkip@Clemens_Point");
				__LIB_1__::func_148(&uLocal_846);
				iLocal_731[iParam0] = 9;
			}
			break;
		case 9:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_64(2, Global_35, 0, iLocal_835, 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uLocal_729[iParam0], 2.5f);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 2.5f);
			__LIB_4__::func_982(uLocal_729[iParam0], 2.5f);
			__LIB_4__::func_982(Global_35, 2.5f);
			if (AUDIO::_0xFFE9C53DEEA3DB0B((CAM::_0xEA113BF9B0C0C5D7("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_1", 5) - __LIB_1__::func_871(&uLocal_846)), -1485537194, 1919.4f, -1341.3f, 49.1f, 1, 2147483647))
			{
				AUDIO::_PLAY_SOUND_FROM_POSITION("MAIN_LOOP", 1916.311f, -1299.35f, 42f, "VEGETATION_FIRE_SOUNDSET", false, 0, true, 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_729[iParam0], false, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				func_63(iLocal_833[0], 756.4f, -1186.3f, 45f, 144.3f, 6, 1073741824 /* Float: 2f */);
				func_63(iLocal_835, 761.5f, -1179.3f, 44.9f, 144.3f, 6, 1073741824 /* Float: 2f */);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_833[0], true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_835, true);
				func_64(0, Global_35, 0, iLocal_835, 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
				func_64(1, Global_35, 0, iLocal_835, 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
				CAM::_0xA54D643D0773EB65("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_1", 5);
				CAM::_0xBC016635D6A73B31("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_2", 5);
				STREAMING::END_SRL();
				STREAMING::PREFETCH_SRL("script@tripskip@clemens_cove_srl");
				__LIB_18__::func_408(53, 1, 0);
				__LIB_17__::func_911(134, 1, 0, 0, 0);
				__LIB_17__::func_911(138, 1, 0, 0, 0);
				__LIB_1__::func_148(&uLocal_846);
				iLocal_731[iParam0] = 11;
			}
			break;
		case 11:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_64(2, Global_35, 0, iLocal_835, 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
			if (__LIB_0__::func_265(&uLocal_846) >= 9f && !CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(3000);
			}
			if (AUDIO::_0xFFE9C53DEEA3DB0B((CAM::_0xEA113BF9B0C0C5D7("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_2", 5) - __LIB_1__::func_871(&uLocal_846)), 1506582591, 749.7f, -1202.1f, 46f, 1, 2147483647) && CAM::IS_SCREEN_FADED_OUT())
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_833[0], false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_835, false);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(uLocal_729[iParam0], sLocal_852, -1.5f, 444, 9216, -1, 0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(Global_35, sLocal_852, 1f, 439, 9216, -1, 0);
				PED::FORCE_PED_MOTION_STATE(iLocal_833[0], -1415276238, false, 0, false);
				PED::FORCE_PED_MOTION_STATE(iLocal_835, -1415276238, false, 0, false);
				CAM::_0xA54D643D0773EB65("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_2", 5);
				CAM::_0xBC016635D6A73B31("script@Cinematics@TripSkip@Clemens_Point", "1_TripSkip_Clemens_1", 5);
				AUDIO::_STOP_SOUND_WITH_NAME("MAIN_LOOP", "VEGETATION_FIRE_SOUNDSET");
				__LIB_1__::func_148(&uLocal_846);
				STREAMING::END_SRL();
				CAM::DO_SCREEN_FADE_IN(1000);
				iLocal_731[iParam0] = 12;
			}
			break;
		case 12:
			func_64(2, Global_35, 0, iLocal_835, 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
			CAM::_0x702B75DC9D3EDE56(true);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			__LIB_4__::func_982(Global_35, 1.25f);
			__LIB_4__::func_982(uLocal_729[iParam0], 1.25f);
			if (AUDIO::_0xFFE9C53DEEA3DB0B((CAM::_0xEA113BF9B0C0C5D7("script@Cinematics@TripSkip@Clemens_Point", "1_TripSkip_Clemens_1", 5) - __LIB_1__::func_871(&uLocal_846)), 0, 749.7f, -1202.1f, 46f, 1, 2147483647))
			{
				AUDIO::_0x43037ABFE214A851();
				CAM::_0xA54D643D0773EB65("script@Cinematics@TripSkip@Clemens_Point", "1_TripSkip_Clemens_1", 5);
				func_64(3, Global_35, 0, iLocal_835, 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.501f, 3000, 0f, true, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				iLocal_731[iParam0] = 14;
			}
			else if (__LIB_0__::func_265(&uLocal_846) > 6f && !__LIB_0__::func_481(1))
			{
				__LIB_5__::func_544(&uLocal_735, "BRT2_AFTER_CME", uLocal_729[0], Global_35, 0, 0, 1, 1);
			}
			break;
		case 13:
			if (iParam0 == 0)
			{
				func_71();
			}
			if (!PED::IS_PED_ON_MOUNT(uLocal_729[iParam0]))
			{
				TASK::CLEAR_PED_TASKS(uLocal_729[iParam0], true, false);
				__LIB_1__::func_571(uLocal_729[iParam0], iLocal_833[0], 0, -1, 1);
				func_73(14);
			}
			if (__LIB_0__::func_94(uLocal_729[iParam0], vLocal_836[iParam0 /*3*/], 1) < 20f)
			{
				func_75();
				func_73(14);
			}
			else if ((TASK::GET_SCRIPT_TASK_STATUS(uLocal_729[0], 242628503, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_729[0], 242628503, true) != 1) && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_729[0], 0))
			{
				iLocal_731[iParam0] = 0;
			}
			break;
		case 3:
			if (PED::IS_PED_ON_MOUNT(uLocal_729[iParam0]))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_729[iParam0], sLocal_851, 0, 14, -1, 0, 0, -1);
				iLocal_731[iParam0] = 13;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_729[iParam0], 1435919172, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_729[iParam0], 1435919172, true) != 1)
			{
				TASK::TASK_MOUNT_ANIMAL(uLocal_729[iParam0], iLocal_833[0], 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
			}
			break;
		case 14:
			__LIB_4__::func_982(uLocal_729[iParam0], 1.501f);
			if (__LIB_11__::func_332(uLocal_729[iParam0], vLocal_836[iParam0 /*3*/], 1f, 1096810496 /* Float: 14f */))
			{
				iLocal_731[iParam0] = 15;
			}
			break;
		case 15:
			if (func_77(uLocal_729[iParam0]))
			{
				iLocal_731[iParam0] = 16;
			}
			break;
		case 16:
			if (func_78(iLocal_833[iParam0], vLocal_836[iParam0 /*3*/], 2f))
			{
				iLocal_731[iParam0] = 17;
			}
			break;
		case 17:
			if (__LIB_11__::func_332(uLocal_729[iParam0], vLocal_840[iParam0 /*3*/], 1f, 0.5f))
			{
				iLocal_731[iParam0] = 18;
			}
			break;
		case 18:
			return true;
	}
	return false;
}

void func_35()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_19 - 1))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_19[iVar0 /*11*/].f_10))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_19[iVar0 /*11*/].f_10, false);
			GRAPHICS::REMOVE_PARTICLE_FX(Local_19[iVar0 /*11*/].f_10, false);
		}
		iVar0++;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_724))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_724, false);
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_724, false);
		iLocal_724 = 0;
	}
}

void func_54()
{
	int iVar0;
	Local_19[0 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[0 /*11*/].f_1 = { 1867.722f, -1269.971f, 41.75f };
	Local_19[1 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[1 /*11*/].f_1 = { 1874.872f, -1268.89f, 42f };
	Local_19[2 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[2 /*11*/].f_1 = { 1872.931f, -1277.735f, 42f };
	Local_19[3 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[3 /*11*/].f_1 = { 1877.412f, -1277.697f, 42f };
	Local_19[4 /*11*/] = "ent_amb_generic_fire_field_smoke";
	Local_19[4 /*11*/].f_1 = { 1881.375f, -1278.052f, 42f };
	Local_19[5 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[5 /*11*/].f_1 = { 1881.468f, -1273.121f, 42f };
	Local_19[6 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[6 /*11*/].f_1 = { 1884.448f, -1284.069f, 42f };
	Local_19[7 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[7 /*11*/].f_1 = { 1891.398f, -1280.363f, 42f };
	Local_19[8 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[8 /*11*/].f_1 = { 1872.865f, -1264.383f, 41.25f };
	Local_19[9 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[9 /*11*/].f_1 = { 1875.69f, -1259.6f, 41.25f };
	Local_19[10 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[10 /*11*/].f_1 = { 1876.942f, -1264.856f, 41.25f };
	Local_19[11 /*11*/] = "ent_amb_generic_fire_field_smoke";
	Local_19[11 /*11*/].f_1 = { 1877.321f, -1263.243f, 41.25f };
	Local_19[12 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[12 /*11*/].f_1 = { 1883.229f, -1267.838f, 41.25f };
	Local_19[13 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[13 /*11*/].f_1 = { 1886.58f, -1263.57f, 41.25f };
	Local_19[14 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[14 /*11*/].f_1 = { 1887.436f, -1273.811f, 41.25f };
	Local_19[15 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[15 /*11*/].f_1 = { 1895.106f, -1270.913f, 41.25f };
	Local_19[16 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[16 /*11*/].f_1 = { 1916.311f, -1299.35f, 42f };
	Local_19[17 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[17 /*11*/].f_1 = { 1929.981f, -1294.95f, 42f };
	Local_19[18 /*11*/] = "ent_amb_generic_fire_field_smoke";
	Local_19[18 /*11*/].f_1 = { 1929.423f, -1297.452f, 40.94f };
	Local_19[19 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[19 /*11*/].f_1 = { 1929.332f, -1299.335f, 42f };
	Local_19[20 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[20 /*11*/].f_1 = { 1926.691f, -1304.741f, 42f };
	Local_19[21 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[21 /*11*/].f_1 = { 1924.386f, -1287.569f, 41.25f };
	Local_19[22 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[22 /*11*/].f_1 = { 1934.887f, -1282.643f, 41.25f };
	Local_19[23 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[23 /*11*/].f_1 = { 1934.175f, -1288.681f, 41.25f };
	Local_19[24 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[24 /*11*/].f_1 = { 1943.7f, -1290.295f, 41.25f };
	Local_19[25 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[25 /*11*/].f_1 = { 1883.25f, -1240.5f, 41.25f };
	Local_19[26 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[26 /*11*/].f_1 = { 1884.1f, -1239.539f, 41.25f };
	Local_19[27 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[27 /*11*/].f_1 = { 1889.946f, -1225.296f, 41.25f };
	Local_19[28 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[28 /*11*/].f_1 = { 1899.524f, -1227.511f, 41.25f };
	Local_19[29 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[29 /*11*/].f_1 = { 1896.586f, -1233.633f, 41.25f };
	Local_19[30 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[30 /*11*/].f_1 = { 1894.156f, -1244.739f, 41.25f };
	Local_19[31 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[31 /*11*/].f_1 = { 1890.77f, -1242.07f, 41.25f };
	Local_19[32 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[32 /*11*/].f_1 = { 1902.875f, -1244.947f, 41.25f };
	Local_19[33 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[33 /*11*/].f_1 = { 1904.97f, -1246.24f, 41.25f };
	Local_19[34 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[34 /*11*/].f_1 = { 1879.71f, -1212.97f, 42.04f };
	Local_19[35 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[35 /*11*/].f_1 = { 1872.41f, -1212.49f, 42.06f };
	Local_19[36 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[36 /*11*/].f_1 = { 1880.6f, -1223.4f, 42.21f };
	Local_19[37 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[37 /*11*/].f_1 = { 1929.277f, -1257.978f, 41.25f };
	Local_19[38 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[38 /*11*/].f_1 = { 1931.329f, -1252.778f, 41.25f };
	Local_19[39 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[39 /*11*/].f_1 = { 1922.45f, -1247.88f, 41.19f };
	Local_19[40 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[40 /*11*/].f_1 = { 1937.175f, -1238.535f, 41.25f };
	Local_19[41 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[41 /*11*/].f_1 = { 1940.458f, -1246.872f, 41.25f };
	Local_19[42 /*11*/] = "ent_amb_generic_fire_field_smoke";
	Local_19[42 /*11*/].f_1 = { 1934.825f, -1233.654f, 40.8048f };
	Local_19[43 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[43 /*11*/].f_1 = { 1928.609f, -1230.984f, 40.8149f };
	Local_19[44 /*11*/] = "ent_amb_generic_fire_field";
	Local_19[44 /*11*/].f_1 = { 1926.991f, -1227.241f, 40.9096f };
	Local_19[45 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[45 /*11*/].f_1 = { 1920.667f, -1238.667f, 40.891f };
	Local_19[46 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[46 /*11*/].f_1 = { 1908.395f, -1239.765f, 41.1811f };
	Local_19[47 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[47 /*11*/].f_1 = { 1910.051f, -1232.456f, 41.2506f };
	Local_19[48 /*11*/] = "scr_brt2_firesmoke_field";
	Local_19[48 /*11*/].f_1 = { 1909.43f, -1261.56f, 44f };
	Local_19[49 /*11*/].f_1 = { 1833.908f, -1276.66f, 42.25f };
	Local_19[49 /*11*/] = "scr_brt2_fire_roof";
	Local_19[49 /*11*/].f_4 = { 0f, 0f, 55f };
	Local_19[50 /*11*/].f_1 = { 1837.839f, -1275.031f, 42.25f };
	Local_19[50 /*11*/] = "scr_brt2_fire_roof";
	Local_19[51 /*11*/].f_1 = { 1836.424f, -1275.242f, 42.25f };
	Local_19[51 /*11*/] = "scr_brt2_fire_roof";
	Local_19[51 /*11*/].f_7 = 0.7f;
	Local_19[52 /*11*/].f_1 = { 1833.969f, -1272.529f, 42.25f };
	Local_19[52 /*11*/] = "scr_brt2_fire_roof";
	Local_19[53 /*11*/].f_1 = { 1834.613f, -1272.529f, 42.25f };
	Local_19[53 /*11*/] = "scr_brt2_fire_roof";
	Local_19[53 /*11*/].f_7 = 0.7f;
	Local_19[54 /*11*/].f_1 = { 1836.333f, -1273.839f, 42.25f };
	Local_19[54 /*11*/] = "scr_brt2_fire_roof";
	Local_19[54 /*11*/].f_4 = { 0f, 0f, -0.76f };
	Local_19[55 /*11*/].f_1 = { 1831.993f, -1279.635f, 42.25f };
	Local_19[55 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	Local_19[55 /*11*/].f_4 = { 0f, 0f, 100f };
	Local_19[56 /*11*/].f_1 = { 1830.964f, -1278.585f, 42.25f };
	Local_19[56 /*11*/] = "scr_brt2_fire_roof";
	Local_19[56 /*11*/].f_7 = 0.7f;
	Local_19[57 /*11*/].f_1 = { 1829.634f, -1276.956f, 45.765f };
	Local_19[57 /*11*/] = "scr_brt2_fire_roof";
	Local_19[58 /*11*/].f_1 = { 1836.749f, -1276.813f, 48.12f };
	Local_19[58 /*11*/] = "ent_amb_falling_embers";
	Local_19[59 /*11*/].f_1 = { 1830.366f, -1274.423f, 51.5f };
	Local_19[59 /*11*/] = "scr_brt2_fire_roof";
	Local_19[60 /*11*/].f_1 = { 1837.817f, -1278.222f, 48.677f };
	Local_19[60 /*11*/] = "scr_brt2_fire_win";
	Local_19[60 /*11*/].f_4 = { 0f, 0f, 60f };
	Local_19[60 /*11*/].f_7 = 1.5f;
	Local_19[61 /*11*/].f_1 = { 1838.397f, -1278.578f, 50.9f };
	Local_19[61 /*11*/] = "scr_brt2_fire_win";
	Local_19[61 /*11*/].f_4 = { 0f, 0f, 60f };
	Local_19[61 /*11*/].f_7 = 0.8f;
	Local_19[62 /*11*/].f_1 = { 1834.637f, -1277.732f, 51.742f };
	Local_19[62 /*11*/] = "scr_brt2_fire_roof";
	Local_19[62 /*11*/].f_7 = 0.5f;
	Local_19[63 /*11*/].f_1 = { 1833.666f, -1275.347f, 52.15f };
	Local_19[63 /*11*/] = "ent_amb_generic_fire_up";
	iVar0 = 0;
	while (iVar0 <= (Local_19 - 1))
	{
		Local_19[iVar0 /*11*/].f_10 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(Local_19[iVar0 /*11*/], Local_19[iVar0 /*11*/].f_1, Local_19[iVar0 /*11*/].f_4, Local_19[iVar0 /*11*/].f_7, false, false, false, false);
		if (MISC::ARE_STRINGS_EQUAL(Local_19[iVar0 /*11*/], "ent_amb_generic_fire_field") || MISC::ARE_STRINGS_EQUAL(Local_19[iVar0 /*11*/], "ent_amb_generic_fire_field_nosmoke"))
		{
			Local_19[iVar0 /*11*/].f_9 = 1f;
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_19[iVar0 /*11*/].f_10, "spread", Local_19[iVar0 /*11*/].f_9, false);
		}
		GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_19[iVar0 /*11*/].f_10, "strength", Local_19[iVar0 /*11*/].f_8, false);
		iVar0++;
	}
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_724))
	{
		iLocal_724 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("ent_amb_generic_fire_field_glow", 1888.38f, -1298.95f, 41.96f, 0f, 0f, 0f, 1f, false, false, false, false);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_724, "strength", 1f, false);
	}
}

bool func_55(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		if (!__LIB_1__::func_22((*iParam0)[iVar1]))
		{
			(*uParam1)[iVar1] = func_101((*iParam0)[iVar1], bParam2, iParam3, 0, 0, 0, 0, bParam4, 1, 0, bParam5, 0, 0, 0, 0, bParam6, 0, 1, 1, 1, 0, 0, 1, bParam7, 1);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		if ((*uParam1)[iVar1] == 0)
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_56()
{
	WEAPON::SET_CURRENT_PED_WEAPON(uLocal_729[0], joaat("WEAPON_UNARMED"), false, 0, false, false);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_833[0]))
	{
		TASK::CLEAR_PED_TASKS(iLocal_833[0], true, false);
	}
	if (bLocal_853)
	{
		func_102();
	}
	__LIB_0__::func_928(&uLocal_735, uLocal_729[0], "SEAN", 0);
	__LIB_0__::func_928(&uLocal_735, Global_35, "ARTHUR", 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_729[0], true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_833[0], true);
}

void func_57(int iParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_PLAYER_ALLY"));
	}
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar0]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam1)[iVar0], joaat("REL_PLAYER_ALLY"));
		}
		iVar0++;
	}
}

bool func_61(int iParam0)
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(uLocal_729[iParam0]))
	{
		return false;
	}
	fVar0 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 0.3f;
			break;
	}
	if (__LIB_1__::func_285(&uLocal_846, fVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_729[iParam0], joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	return false;
}

void func_63(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_63(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_63(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_64(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!__LIB_0__::func_27(iParam2, 1))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
				if (!ENTITY::IS_ENTITY_DEAD(iParam3))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iParam3, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam4))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iParam4, true);
				}
			}
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam1, 1);
			break;
		case 1:
			if (!__LIB_0__::func_27(iParam2, 4))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_BOX(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true, false), ENTITY::GET_ENTITY_HEADING(iParam1), 0f, (fParam6 * 0.5f), 0f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(iParam1), iParam5, fParam6, 10f);
				MISC::_0x2FCD528A397E5C88(iVar0, 1064968);
				VOLUME::_DELETE_VOLUME(iVar0);
			}
			break;
		case 2:
			if (!__LIB_0__::func_27(iParam2, 8))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam3))
				{
					if (!__LIB_0__::func_394(iParam1, iParam3, 1))
					{
						PED::_SET_PED_ON_MOUNT(iParam1, iParam3, -1, true);
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(iParam4))
				{
					if (!PED::IS_PED_ON_SPECIFIC_VEHICLE(iParam1, iParam4))
					{
						PED::SET_PED_INTO_VEHICLE(iParam1, iParam4, -1);
					}
				}
			}
			if (!__LIB_0__::func_27(iParam2, 16))
			{
				if (PED::IS_PED_ON_MOUNT(iParam1))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_27(iParam2, 2))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
				if (!ENTITY::IS_ENTITY_DEAD(iParam3))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iParam3, false);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam4))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iParam4, false);
				}
			}
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam1, 0);
			break;
	}
}

void func_71()
{
	float fVar0;
	char cVar1[16];
	if (bLocal_853)
	{
		if (__LIB_1__::func_205(Global_35, __LIB_0__::func_559(105), 1, 0))
		{
			fVar0 = 1.501f;
		}
		else
		{
			fVar0 = 1.75f;
		}
		__LIB_5__::func_537(uLocal_729[0], fVar0, 0, 1045220557 /* Float: 0.2f */, 1, 3f, (30f / 2f), (60f / 2f), 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
		if (__LIB_0__::func_665(Global_35, uLocal_729[0], 1, 1) > 80f)
		{
			func_75();
			__LIB_1__::func_148(&uLocal_846);
			bLocal_853 = false;
		}
		if (iLocal_854 <= 2)
		{
			if (__LIB_0__::func_265(&uLocal_846) > 20f)
			{
				StringCopy(&cVar1, "BRT2_OUT_", 16);
				StringIntConCat(&cVar1, iLocal_854, 16);
				if (__LIB_5__::func_544(&uLocal_735, &cVar1, uLocal_729[0], Global_35, 0, 0, 1, 1))
				{
					iLocal_854++;
					__LIB_1__::func_148(&uLocal_846);
				}
			}
		}
	}
	else if (__LIB_0__::func_265(&uLocal_846) > 10f && __LIB_0__::func_665(Global_35, uLocal_729[0], 1, 1) < 10f)
	{
		if (__LIB_5__::func_544(&uLocal_735, "BRT2_OUT_S", uLocal_729[0], Global_35, 0, 0, 1, 1))
		{
			func_102();
			__LIB_1__::func_148(&uLocal_846);
			__LIB_0__::func_900(8);
			bLocal_733 = true;
			bLocal_853 = true;
		}
	}
}

void func_73(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_729[iVar0]))
		{
			iLocal_731[iVar0] = iParam0;
		}
		iVar0++;
	}
}

void func_75()
{
	if (PED::DOES_GROUP_EXIST(iLocal_734))
	{
		PED::REMOVE_GROUP(iLocal_734);
	}
	if (__LIB_0__::func_272(uLocal_729[0], 0) && PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), uLocal_729[0]);
	}
}

bool func_77(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	if (__LIB_0__::func_71(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 501393341, true) > 1)
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
		return true;
	}
	return false;
}

bool func_78(int iParam0, vector3 vParam1, float fParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	if (__LIB_5__::func_541(iParam0, vParam1, fParam4, 0))
	{
		return true;
	}
	return false;
}

int func_101(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || Global_1391438.f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (__LIB_0__::func_287(iParam0, 2, 1))
			{
				__LIB_0__::func_290(iParam0, 2, 1);
			}
			if (__LIB_0__::func_273(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						__LIB_0__::func_288(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						__LIB_1__::func_774(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						__LIB_0__::func_712(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!__LIB_0__::func_287(iParam0, 44, 0))
			{
				__LIB_0__::func_288(iParam0, 44, 0);
			}
			if (__LIB_1__::func_466(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				__LIB_0__::func_201(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			__LIB_0__::func_290(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			__LIB_0__::func_707(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				__LIB_1__::func_296(iParam0, 0, 0, 1);
			}
			__LIB_0__::func_290(iParam0, 33, 1);
			__LIB_0__::func_290(iParam0, 34, 1);
			__LIB_0__::func_290(iParam0, 29, 1);
			if (!__LIB_0__::func_86(vVar0) && bParam7)
			{
				__LIB_0__::func_201(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_0__::func_712(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_63(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (__LIB_1__::func_201(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_1__::func_288(iParam0, iParam13, 0);
						__LIB_1__::func_558(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (__LIB_0__::func_287(iParam0, 25, 0))
						{
							__LIB_0__::func_290(iParam0, 25, 0);
						}
						__LIB_0__::func_288(iParam0, 66, 0);
						__LIB_0__::func_201(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					__LIB_0__::func_201(iParam0, 5);
				}
				__LIB_0__::func_288(iParam0, 28, 1);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				__LIB_0__::func_201(iParam0, 6);
			}
			break;
		case 6:
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					__LIB_1__::func_30(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					__LIB_0__::func_202(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			__LIB_0__::func_201(iParam0, 7);
		case 7:
			__LIB_0__::func_707(iParam0, bParam9, bParam15, 0);
			__LIB_0__::func_289(iParam0, 4, bParam11);
			__LIB_0__::func_706(iParam0);
			if (bParam20)
			{
				if (__LIB_0__::func_203(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			__LIB_3__::func_921(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			__LIB_0__::func_201(iParam0, 0);
			__LIB_0__::func_204(iParam0, 16, 1);
			__LIB_0__::func_290(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_102()
{
	iLocal_734 = PED::CREATE_GROUP(0);
	PED::SET_GROUP_FORMATION(iLocal_734, 10);
	PED::SET_PED_CONFIG_FLAG(uLocal_729[0], 279, true);
	PED::SET_PED_AS_GROUP_LEADER(uLocal_729[0], iLocal_734, false);
	PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), uLocal_729[0], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 2, 0);
}

