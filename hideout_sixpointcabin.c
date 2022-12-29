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
	var uLocal_14 = 0;
	struct<14> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<216> Local_29 = { 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8000, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	struct<8> Local_253[4];
	struct<9> Local_286[16];
	struct<9> Local_431[1];
	struct<14> Local_441[7];
	var uLocal_540 = 10;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	struct<5> Local_551[3];
	char* sLocal_567[1] = { NULL };
	var uLocal_569 = 5;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
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
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 2;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	struct<9> Local_634[7];
	struct<5> Local_698[6];
	struct<7> Local_729[1];
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
	int iLocal_749 = 0;
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	int iLocal_753 = 0;
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	var uLocal_757 = 0;
	int iLocal_758 = 0;
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
	var uLocal_775 = 5;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	int iLocal_782 = 0;
	int iLocal_783 = 0;
	int iLocal_784 = 0;
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	int iLocal_787 = 0;
	int iLocal_788 = 0;
	int iLocal_789 = 0;
	var uLocal_790 = 1;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	float fLocal_794 = 0f;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	int iLocal_798 = 0;
	int iLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	int iLocal_802[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_819[1] = { 0 };
	int iLocal_821 = 0;
	int iLocal_822 = 0;
	var uLocal_823 = 0;
	int iLocal_824 = 0;
	int iLocal_825 = 0;
	int iLocal_826 = 0;
	int iLocal_827 = 0;
	int iLocal_828 = 0;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	int iLocal_831 = 0;
	bool bLocal_832 = false;
	vector3 vLocal_833 = { 0f, 0f, 0f };
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	bool bLocal_841 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_798 = -1;
	iLocal_824 = -1;
	iLocal_840 = vScriptParam_0.x;
	iLocal_838 = vScriptParam_0.z;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 54, true);
	}
	func_2();
	while (__LIB_9__::func_579())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_839)
		{
			iLocal_839 = MISC::GET_GAME_TIMER() + 1000;
			iVar0 = iLocal_838;
			__LIB_1__::func_947(iLocal_840, &iLocal_838);
			switch (iLocal_838)
			{
				case 0:
					if (!Global_1879534.f_1)
					{
						bLocal_841 = !__LIB_9__::func_648(iLocal_840, 1);
						if (bLocal_841)
						{
						}
						iLocal_838 = 1;
					}
					break;
				case 1:
					iLocal_838 = 2;
					break;
				case 2:
					if (func_6(bLocal_841))
					{
						iLocal_838 = 4;
					}
					break;
				case 4:
					iLocal_838 = 6;
					break;
				case 6:
					if (__LIB_9__::func_618(iLocal_840, -1, -1, 0))
					{
						__LIB_0__::func_24(iLocal_840, 4);
						iLocal_838 = 7;
					}
					break;
				case 7:
					iLocal_838 = 8;
					break;
				case 8:
					__LIB_1__::func_886(iLocal_840);
					iLocal_838 = 9;
					break;
				case 9:
					if (iLocal_840 != 5)
					{
						__LIB_1__::func_889(&Global_1898004);
						func_11(iLocal_840, &Global_1898004, bLocal_841);
					}
					__LIB_0__::func_24(iLocal_840, 8);
					iLocal_838 = 10;
					break;
				case 10:
					if (!bLocal_841)
					{
						func_12();
						if (__LIB_1__::func_890(32))
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(500);
							}
							__LIB_0__::func_22(32);
						}
						iLocal_838 = 3;
					}
					else
					{
						iLocal_838 = 3;
					}
					break;
				case 3:
					if (!STREAMING::_0xCF45DF50C7775F2A())
					{
						if (func_15(bLocal_841))
						{
							iLocal_838 = 11;
						}
					}
					break;
				case 11:
					if (!bLocal_841)
					{
						if (!func_16(iLocal_840))
						{
							iLocal_839 = 0;
						}
					}
					__LIB_6__::func_414(&Global_1898004, iLocal_840);
					break;
				case 12:
					func_18();
					break;
			}
			if (iVar0 != iLocal_838)
			{
				iLocal_839 = 0;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_18();
}

void func_2()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_18();
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		else
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
	}
}

bool func_6(bool bParam0)
{
	func_42();
	Local_29.f_215 = Local_15.f_4;
	TASK::ADD_COVER_BLOCKING_AREA(-22.69106f, 1231.646f, 171.9786f, -25.49326f, 1227.286f, 174.0642f, true, true, true, true);
	return true;
}

void func_11(int iParam0, var uParam1, bool bParam2)
{
	__LIB_2__::func_766(uParam1, Local_29.f_215, 1);
}

void func_12()
{
	if (__LIB_0__::func_627(63, 0) || __LIB_9__::func_598(128))
	{
		func_52(16384);
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	MISC::CLEAR_AREA(-67.7f, 1234.8f, 168.9f, 4f, 2560);
	func_53();
	func_54();
	func_55();
	func_56();
	func_57();
	func_58();
	func_59();
	func_60();
	__LIB_0__::func_11();
	func_62();
	__LIB_9__::func_661(&Local_29, 36, &sLocal_567, 25);
	WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_REPEATER_CARBINE"), -1, 0);
	__LIB_2__::func_829(&(Local_29.f_155), 0);
	__LIB_2__::func_619(&(Local_29.f_155), 1);
	__LIB_1__::func_413(&(Local_29.f_155), 1);
	__LIB_1__::func_397(&(Local_29.f_155), 1);
	__LIB_2__::func_906(&(Local_29.f_155), 40);
	PLAYER::_0x113EF458AB6CDA67(PLAYER::PLAYER_ID(), 0.1f);
	Local_29.f_187 = 15000;
	__LIB_1__::func_981(&(Local_29.f_155), (__LIB_1__::func_361(&(Local_29.f_155)) - 10f));
}

bool func_15(bool bParam0)
{
	if (bParam0)
	{
		STREAMING::_REMOVE_IMAP(1432023115);
		__LIB_1__::func_408(-2034257789, 0, 0);
	}
	else
	{
		STREAMING::_REQUEST_IMAP(1432023115);
		__LIB_1__::func_408(-2034257789, 1, 0);
	}
	if (PATHFIND::_0x495CFAB2924237C7("six_point_lights_on"))
	{
		PATHFIND::_0x7C334FF4D9215912("six_point_lights_on");
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SIXPOINT_POST_COMBAT"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SIXPOINT_POST_COMBAT", false);
	}
	if ((!__LIB_1__::func_200(63) && !__LIB_7__::func_852(63)) && !__LIB_12__::func_582(63))
	{
		if (Local_29.f_4 >= 0)
		{
			__LIB_1__::func_408(1982676972, 0, 0);
		}
		else
		{
			__LIB_1__::func_408(1982676972, 1, 0);
		}
	}
	__LIB_0__::func_68(joaat("DOOR_SIX_CABIN_FRONT"), 0, 0);
	return true;
}

bool func_16(int iParam0)
{
	switch (Local_29)
	{
		case 0:
			if (__LIB_9__::func_704(&Local_29, &uLocal_775, &uLocal_540, "SIXPT", 0) && func_77())
			{
				__LIB_1__::func_649(&Local_29, 1);
			}
			break;
		case 1:
			if (__LIB_9__::func_663(&Local_29, &Local_286, joaat("REL_GANG_ODRISCOLL"), 0, iLocal_786))
			{
				Local_29.f_197 = 0;
				__LIB_1__::func_649(&Local_29, 2);
			}
			break;
		case 2:
			__LIB_1__::func_649(&Local_29, 5);
			break;
		case 5:
			__LIB_9__::func_646(&(Local_431[0 /*9*/]), joaat("REL_CIVFEMALE"), 0);
			__LIB_9__::func_619(&Local_29, &Local_286, 0, iLocal_786);
			func_82(1);
			func_83();
			func_84(1);
			func_85();
			func_86();
			func_87(0);
			__LIB_9__::func_580(&Local_441);
			if (Local_29.f_4 < 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_441[6 /*14*/].f_8))
				{
					OBJECT::DELETE_OBJECT(&(Local_441[6 /*14*/].f_8));
				}
			}
			func_89();
			OBJECT::_0xC07B91B996C1DE89(iLocal_825, 1);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_825, 2);
			__LIB_1__::func_649(&Local_29, 6);
			break;
		case 6:
			if (Local_29.f_3 < 5)
			{
				if (func_90())
				{
					__LIB_1__::func_649(&Local_29, 7);
				}
				__LIB_1__::func_397(&(Local_29.f_155), 0);
				if (func_91(&Local_29, &Local_286, Local_29.f_199, 0, 0))
				{
					func_92();
					__LIB_1__::func_649(&Local_29, 7);
				}
				__LIB_1__::func_397(&(Local_29.f_155), 1);
			}
			break;
		case 7:
			func_93();
			break;
	}
	if (!__LIB_9__::func_581(&Local_29, 4))
	{
		if (Local_29 >= 6)
		{
			__LIB_9__::func_657(&Local_29, &Local_286);
			func_96();
			if (!func_97(16384))
			{
				func_98();
				if (func_99())
				{
					func_100();
				}
			}
		}
		func_101();
	}
	else
	{
		__LIB_9__::func_696(joaat("ARS_ODRISCOLL_BOYS"));
		func_103();
	}
	__LIB_9__::func_679(&Local_29);
	__LIB_0__::func_11();
	return false;
}

void func_18()
{
	__LIB_0__::func_11(bLocal_841);
	func_122(bLocal_841);
	if (__LIB_0__::func_2() == -1)
	{
		if (iLocal_840 != 5)
		{
			__LIB_2__::func_755(iLocal_840);
		}
	}
	if (iLocal_840 != 5)
	{
		__LIB_2__::func_819(iLocal_840);
		__LIB_0__::func_25(iLocal_840, 4);
		__LIB_0__::func_25(iLocal_840, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
	}
	__LIB_9__::func_582(0);
	if (__LIB_0__::func_61() == iLocal_840)
	{
		__LIB_6__::func_409(0);
	}
	if (__LIB_1__::func_25(__LIB_4__::func_6(iLocal_840), 1))
	{
		__LIB_1__::func_408(__LIB_9__::func_583(iLocal_840), 1, 0);
	}
	func_130(iLocal_840);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_42()
{
	Local_15 = VOLUME::_CREATE_VOLUME_BOX(-63.82038f, 1237.37f, 171.6454f, 0f, 0f, -59.52287f, 30f, 30f, 20f);
	Local_15.f_1 = VOLUME::_CREATE_VOLUME_CYLINDER(-34.83347f, 1228.841f, 169.1569f, 0f, 0f, 0f, 30f, 30f, 20f);
	Local_15.f_2 = VOLUME::_CREATE_VOLUME_BOX(-69.25819f, 1233.486f, 171.5531f, 0f, 0f, 30.12824f, 20.19127f, 35.73563f, 8.534721f);
	Local_15.f_3 = VOLUME::_CREATE_VOLUME_BOX(-62.79739f, 1237.852f, 171.2058f, 0f, 0f, 30.12824f, 9.461426f, 6.02771f, 3.008333f);
	Local_15.f_4 = VOLUME::_CREATE_VOLUME_CYLINDER(-35.90744f, 1223.403f, 162f, 0f, 0f, -20.99443f, 41.93496f, 40.96319f, 20f);
	Local_15.f_5 = VOLUME::_CREATE_VOLUME_CYLINDER(-34.44956f, 1222.662f, 172.7827f, 0f, 0f, 0f, 16f, 16f, 7.020916f);
	Local_15.f_6 = VOLUME::_CREATE_VOLUME_BOX(-61.75919f, 1232.9f, 171.5531f, 0f, 0f, 30.12824f, 25.52597f, 25.00609f, 8.534721f);
	Local_15.f_7 = VOLUME::_CREATE_VOLUME_CYLINDER(-28.77598f, 1228.862f, 173.0764f, 0f, 0f, 0f, 11.5f, 11.5f, 6f);
	Local_15.f_8 = VOLUME::_CREATE_VOLUME_BOX(-71.66011f, 1231.462f, 170.2555f, 0f, 0f, 29.96638f, 10.2195f, 12.99067f, 9.399186f);
	Local_15.f_9 = VOLUME::_CREATE_VOLUME_BOX(-34.70525f, 1232.307f, 172.9949f, 0f, 0f, 0f, 10f, 10f, 10f);
	Local_15.f_10 = VOLUME::_CREATE_VOLUME_BOX(-21.92492f, 1232.307f, 172.9949f, 0f, 0f, 0f, 15.56897f, 10f, 10f);
	Local_15.f_11 = VOLUME::_CREATE_VOLUME_BOX(-34.70525f, 1222.299f, 172.9949f, 0f, 0f, 0f, 10f, 10f, 10f);
	Local_15.f_12 = VOLUME::_CREATE_VOLUME_BOX(-24.37676f, 1222.299f, 172.9949f, 0f, 0f, 0f, 10.65925f, 10f, 10f);
	Local_15.f_13 = VOLUME::_CREATE_VOLUME_BOX(-72.90742f, 1231.863f, 168.8581f, 0f, 0f, -61.08905f, 3.406929f, 14.85746f, 4.510974f);
}

void func_52(int iParam0)
{
	iLocal_749 = (iLocal_749 || iParam0);
}

void func_53()
{
	char* sVar0;
	Local_29.f_206 = "OBJ_KILL";
	Local_29.f_207 = "HIDEOUT_FLEE";
	Local_29.f_4 = __LIB_9__::func_705(&(Local_29.f_4), 36);
	if (func_97(16384))
	{
		Local_29.f_199 = 4;
		sVar0 = "NUM_ACTORS_LITE";
	}
	else
	{
		switch (Local_29.f_4)
		{
			case 0:
				Local_29.f_199 = 13;
				sVar0 = "NUM_ACTORS0";
				break;
			case 1:
				Local_29.f_199 = 16;
				sVar0 = "NUM_ACTORS1";
				break;
			case 2:
				Local_29.f_199 = 16;
				sVar0 = "NUM_ACTORS2";
				break;
			case 3:
				Local_29.f_199 = 16;
				sVar0 = "NUM_ACTORS3";
				break;
		}
	}
	Local_29.f_201 = (Local_29.f_199 + func_158());
	Local_29.f_189 = 3;
}

void func_54()
{
	sLocal_567[0] = "";
}

void func_55()
{
	Local_29.f_6.f_13 = "CUT_SP_DESC1";
	Local_29.f_6.f_14 = "CUT_SP_DESC2";
	Local_29.f_6.f_19 = 1;
	Local_29.f_6.f_20 = { -34.1f, 1229.1f, 180f };
	Local_29.f_6.f_23 = 5f;
	Local_29.f_6.f_24 = 4225f;
	Local_29.f_6.f_25 = 7225f;
	Local_29.f_6.f_27 = 0;
	Local_29.f_6.f_28 = 0;
	func_159();
}

void func_56()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_29.f_199)
	{
		if (func_97(16384) && iVar0 >= 4)
		{
			Local_286[iVar0 /*9*/] = 0;
		}
		else if (iVar0 == 10)
		{
			Local_286[iVar0 /*9*/] = 0;
		}
		else if ((iVar0 % 2) == 0)
		{
			Local_286[iVar0 /*9*/] = joaat("G_M_M_UNIDUSTER_01");
		}
		else
		{
			Local_286[iVar0 /*9*/] = joaat("G_M_M_UNIDUSTER_02");
		}
		iVar0++;
	}
	if (Local_29.f_4 < 1)
	{
		Local_286[4 /*9*/] = 0;
		Local_286[5 /*9*/] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_97(16384))
		{
			Local_431[iVar0 /*9*/] = 0;
		}
		else
		{
			Local_431[iVar0 /*9*/] = joaat("A_F_M_VALPROSTITUTE_01");
		}
		iVar0++;
	}
	__LIB_9__::func_584(&uLocal_540, Local_286[0 /*9*/]);
	__LIB_9__::func_584(&uLocal_540, Local_286[1 /*9*/]);
	__LIB_9__::func_584(&uLocal_540, Local_431[0 /*9*/]);
	__LIB_9__::func_584(&uLocal_540, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	func_161();
}

void func_57()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_802)
	{
		iLocal_802[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_819)
	{
		iLocal_819[iVar0] = -1;
		iVar0++;
	}
}

void func_58()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Local_441[iVar0 /*14*/] = { func_162(12, iVar0) };
		Local_441[iVar0 /*14*/].f_3.f_2 = func_163(12, iVar0);
		iVar0++;
	}
	Local_441[0 /*14*/].f_7 = joaat("P_LANTERN09XMOTHS");
	Local_441[0 /*14*/] = { func_164(12, 1) };
	Local_441[0 /*14*/].f_3.f_2 = func_165(12, 1);
	Local_441[0 /*14*/].f_12 = 1;
	Local_441[1 /*14*/].f_7 = joaat("P_CRATE02X");
	Local_441[1 /*14*/].f_12 = 1;
	Local_441[1 /*14*/] = { func_164(12, 2) };
	Local_441[1 /*14*/].f_3.f_2 = func_165(12, 2);
	Local_441[2 /*14*/].f_7 = joaat("P_LANTERN09XMOTHS");
	Local_441[2 /*14*/] = { func_164(12, 3) };
	Local_441[2 /*14*/].f_3.f_2 = func_165(12, 3);
	Local_441[3 /*14*/].f_7 = joaat("P_BOTTLEBEER01X");
	Local_441[3 /*14*/] = { func_164(12, 4) };
	Local_441[3 /*14*/].f_3.f_2 = func_165(12, 4);
	Local_441[5 /*14*/].f_7 = joaat("P_GLASS01X");
	Local_441[5 /*14*/] = { func_164(12, 6) };
	Local_441[5 /*14*/].f_3.f_2 = func_165(12, 6);
	Local_441[4 /*14*/].f_7 = joaat("P_BOTTLEJD01X");
	Local_441[4 /*14*/] = { func_164(12, 5) };
	Local_441[4 /*14*/].f_3.f_2 = func_165(12, 5);
	Local_441[6 /*14*/].f_7 = joaat("P_TABLE31X");
	Local_441[6 /*14*/] = { func_164(12, 8) };
	Local_441[6 /*14*/].f_3.f_2 = func_165(12, 8);
	__LIB_9__::func_584(&uLocal_540, Local_441[0 /*14*/].f_7);
	__LIB_9__::func_584(&uLocal_540, Local_441[1 /*14*/].f_7);
	__LIB_9__::func_584(&uLocal_540, Local_441[3 /*14*/].f_7);
	__LIB_9__::func_584(&uLocal_540, Local_441[5 /*14*/].f_7);
	__LIB_9__::func_584(&uLocal_540, Local_441[4 /*14*/].f_7);
	__LIB_9__::func_584(&uLocal_540, Local_441[6 /*14*/].f_7);
	func_166();
	STREAMING::REQUEST_MODEL(joaat("P_STRONGBOX_RUSTED_01X"), false);
	if (STREAMING::HAS_MODEL_LOADED(joaat("P_STRONGBOX_RUSTED_01X")))
	{
		iLocal_828 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-61.978f, 1235.021f, 169.765f, 2f, joaat("P_STRONGBOX_RUSTED_01X"), true, false, true);
		__LIB_9__::func_700(joaat("P_STRONGBOX_RUSTED_01X"), -61.978f, 1235.021f, 169.765f, &iLocal_828, 0, 0, 0);
		__LIB_9__::func_721(joaat("P_STRONGBOX_RUSTED_01X"), -61.978f, 1235.021f, 169.765f, &iLocal_828, joaat("CONSUMABLE_GINSENG_ELIXIER"), 1, 0, 0, joaat("S_GINSENGELIXIR01X"));
	}
}

void func_59()
{
	Local_698[0 /*5*/] = { func_164(5, 0) + Vector(2f, 2f, 2f) };
	Local_698[0 /*5*/].f_3 = 3f;
	Local_698[1 /*5*/] = { func_164(5, 2) + Vector(2f, 2f, 2f) };
	Local_698[1 /*5*/].f_3 = 3f;
	Local_698[2 /*5*/] = { func_164(5, 4) + Vector(2f, 2f, 2f) };
	Local_698[2 /*5*/].f_3 = 3f;
	Local_698[3 /*5*/] = { func_164(5, 6) + Vector(2f, 2f, 2f) };
	Local_698[3 /*5*/].f_3 = 3f;
	Local_698[4 /*5*/] = { func_164(5, 8) + Vector(2f, 2f, 2f) };
	Local_698[4 /*5*/].f_3 = 3f;
	Local_698[5 /*5*/] = { func_164(5, 10) + Vector(2f, 2f, 2f) };
	Local_698[5 /*5*/].f_3 = 3f;
}

void func_60()
{
	int iVar0;
	Local_634[0 /*9*/].f_1 = { func_164(6, 0) };
	Local_634[0 /*9*/].f_4 = func_165(6, 0);
	Local_634[0 /*9*/].f_5 = 0;
	Local_634[0 /*9*/].f_6 = 3;
	Local_634[0 /*9*/].f_7 = 1;
	Local_634[1 /*9*/].f_1 = { func_164(6, 1) };
	Local_634[1 /*9*/].f_4 = func_165(6, 1);
	Local_634[1 /*9*/].f_5 = 0;
	Local_634[1 /*9*/].f_6 = 0;
	Local_634[1 /*9*/].f_7 = 1;
	Local_634[2 /*9*/].f_1 = { func_164(6, 2) };
	Local_634[2 /*9*/].f_4 = func_165(6, 2);
	Local_634[2 /*9*/].f_5 = 0;
	Local_634[2 /*9*/].f_6 = 0;
	Local_634[2 /*9*/].f_7 = 1;
	Local_634[3 /*9*/].f_1 = { func_164(6, 3) };
	Local_634[3 /*9*/].f_4 = func_165(6, 3);
	Local_634[3 /*9*/].f_5 = 0;
	Local_634[3 /*9*/].f_6 = 3;
	Local_634[3 /*9*/].f_7 = 1;
	Local_634[4 /*9*/].f_1 = { func_164(6, 4) };
	Local_634[4 /*9*/].f_4 = func_165(6, 4);
	Local_634[4 /*9*/].f_5 = 0;
	Local_634[4 /*9*/].f_6 = 3;
	Local_634[4 /*9*/].f_7 = 1;
	Local_634[5 /*9*/].f_1 = { func_164(6, 5) };
	Local_634[5 /*9*/].f_4 = func_165(6, 5);
	Local_634[5 /*9*/].f_5 = 0;
	Local_634[5 /*9*/].f_6 = 3;
	Local_634[5 /*9*/].f_7 = 1;
	Local_634[6 /*9*/].f_1 = { func_164(6, 6) };
	Local_634[6 /*9*/].f_4 = func_165(6, 6);
	Local_634[6 /*9*/].f_5 = 0;
	Local_634[6 /*9*/].f_6 = 3;
	Local_634[6 /*9*/].f_7 = 1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		__LIB_9__::func_697(&(Local_634[iVar0 /*9*/]), 0);
		iVar0++;
	}
}

void func_62()
{
	int iVar0;
	if (func_97(16384))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_170(iVar0))
		{
			func_171(iVar0, 0, 1);
		}
		iVar0++;
	}
}

int func_77()
{
	int iVar0;
	if (func_97(16384))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_170(iVar0))
		{
			if (!func_201(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_82(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_29.f_199 - 1))
	{
		if (__LIB_2__::func_1(Local_286[iVar0 /*9*/].f_5, 0, 1))
		{
			PED::SET_PED_CONFIG_FLAG(Local_286[iVar0 /*9*/].f_5, 425, bParam0);
		}
		iVar0++;
	}
}

void func_83()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_29.f_199)
	{
		if (__LIB_2__::func_1(Local_286[iVar0 /*9*/].f_5, 0, 1))
		{
			if (func_206(iVar0))
			{
				__LIB_9__::func_666(&(Local_286[iVar0 /*9*/]), 1);
			}
			else
			{
				__LIB_9__::func_666(&(Local_286[iVar0 /*9*/]), 0);
				PED::_0xFC3DB99C8144CD81(Local_286[iVar0 /*9*/].f_5, Local_15.f_4, 0, false, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_286[iVar0 /*9*/].f_5, 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_286[iVar0 /*9*/].f_5, 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_286[iVar0 /*9*/].f_5, 49, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_286[iVar0 /*9*/].f_5, 42, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_286[iVar0 /*9*/].f_5, 71, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_286[iVar0 /*9*/].f_5, 47, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_286[iVar0 /*9*/].f_5, 50, true);
			PED::SET_PED_COMBAT_MOVEMENT(Local_286[iVar0 /*9*/].f_5, 2);
			PED::SET_PED_COMBAT_RANGE(Local_286[iVar0 /*9*/].f_5, 0);
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_286[iVar0 /*9*/].f_5, false);
			PED::SET_PED_HEARING_RANGE(Local_286[iVar0 /*9*/].f_5, 8f);
			DECORATOR::DECOR_SET_INT(Local_286[iVar0 /*9*/].f_5, "iDamageFrame", -1);
			ENTITY::_0x18FF3110CF47115D(Local_286[iVar0 /*9*/].f_5, 1, 0);
			if (!func_206(iVar0))
			{
				PED::SET_PED_CONFIG_FLAG(Local_286[iVar0 /*9*/].f_5, 246, true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (__LIB_2__::func_1(Local_431[iVar0 /*9*/].f_5, 0, 1))
		{
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_431[iVar0 /*9*/].f_5, false);
			PED::SET_PED_ACCURACY(Local_431[iVar0 /*9*/].f_5, 10);
			PED::SET_PED_SHOOT_RATE(Local_431[iVar0 /*9*/].f_5, 150);
		}
		iVar0++;
	}
}

void func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!func_97(16384))
	{
		__LIB_9__::func_667(Local_286[0 /*9*/].f_5, Local_286[0 /*9*/].f_1, 3f, 1, Local_15.f_3, 0, 0);
		__LIB_9__::func_667(Local_286[1 /*9*/].f_5, Local_286[1 /*9*/].f_1, 3f, 1, Local_15.f_3, 0, 0);
		__LIB_2__::func_133(Local_286[0 /*9*/].f_5, "0355_G_M_M_UniDuster_01_WHITE_01", 0);
		__LIB_2__::func_133(Local_286[1 /*9*/].f_5, "0355_G_M_M_UniDuster_01_WHITE_01", 0);
		iVar0 = 0;
		while (iVar0 < Local_29.f_199)
		{
			__LIB_2__::func_133(Local_286[iVar0 /*9*/].f_5, func_210(Local_286[iVar0 /*9*/]), 0);
			iVar0++;
		}
		iVar1 = 6;
		while (iVar1 <= 10)
		{
			if (__LIB_2__::func_1(Local_286[iVar1 /*9*/].f_5, 0, 1))
			{
				if (iVar1 == 7)
				{
					if (__LIB_1__::func_985())
					{
						TASK::_TASK_START_SCENARIO_IN_PLACE(Local_286[iVar1 /*9*/].f_5, joaat("WORLD_HUMAN_COFFEE_DRINK_WIP"), 0, false, 0, -1f, false);
					}
					else
					{
						TASK::_TASK_START_SCENARIO_IN_PLACE(Local_286[iVar1 /*9*/].f_5, joaat("WORLD_HUMAN_SIT_GUITAR_DOWNBEAT"), 0, false, 0, -1f, false);
					}
				}
				else if (iVar1 == 8)
				{
					TASK::_TASK_START_SCENARIO_IN_PLACE(Local_286[iVar1 /*9*/].f_5, joaat("WORLD_HUMAN_DRINK_FLASK"), 0, false, 0, -1f, false);
				}
				else
				{
					__LIB_9__::func_667(Local_286[iVar1 /*9*/].f_5, Local_286[iVar1 /*9*/].f_1, 12f, 1, Local_15.f_7, 0, 0);
				}
			}
			iVar1++;
		}
		if (__LIB_2__::func_1(Local_431[0 /*9*/].f_5, 0, 1))
		{
			__LIB_9__::func_667(Local_431[0 /*9*/].f_5, Local_431[0 /*9*/].f_1, 12f, 1, Local_15.f_7, 0, 0);
		}
		if (func_99())
		{
			func_212();
		}
		else
		{
			iVar0 = iLocal_785;
			while (iVar0 <= iLocal_786)
			{
				if (__LIB_2__::func_1(Local_286[iVar0 /*9*/].f_5, 0, 1))
				{
					__LIB_9__::func_667(Local_286[iVar0 /*9*/].f_5, Local_286[iVar0 /*9*/].f_1, 10f, 1, Local_15.f_7, 0, 0);
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (__LIB_2__::func_1(Local_286[0 /*9*/].f_5, 0, 1))
		{
			__LIB_2__::func_133(Local_286[0 /*9*/].f_5, "0355_G_M_M_UniDuster_01_WHITE_01", 0);
		}
		if (__LIB_2__::func_1(Local_286[1 /*9*/].f_5, 0, 1))
		{
			__LIB_2__::func_133(Local_286[1 /*9*/].f_5, "0357_G_M_M_UniDuster_02_WHITE_01", 0);
		}
		if (__LIB_2__::func_1(Local_286[2 /*9*/].f_5, 0, 1))
		{
			__LIB_2__::func_133(Local_286[2 /*9*/].f_5, "0355_G_M_M_UniDuster_01_WHITE_01", 0);
		}
		if (__LIB_2__::func_1(Local_286[3 /*9*/].f_5, 0, 1))
		{
			__LIB_2__::func_133(Local_286[3 /*9*/].f_5, "0357_G_M_M_UniDuster_02_WHITE_01", 0);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			__LIB_9__::func_667(Local_286[iVar0 /*9*/].f_5, Local_286[iVar0 /*9*/].f_1, 4f, 3, Local_15.f_7, 0, 0);
			iVar0++;
		}
	}
}

void func_85()
{
	Local_729[0 /*7*/].f_5 = 0f;
	Local_729[0 /*7*/] = { -67.3032f, 1235.838f, 169.8232f };
	Local_729[0 /*7*/].f_4 = 1;
	Local_729[0 /*7*/].f_3 = joaat("P_DOOR44X");
}

void func_86()
{
	if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-1016982061))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1016982061, true);
	}
}

void func_87(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_29.f_199 - 1))
	{
		if (__LIB_2__::func_1(Local_286[iVar0 /*9*/].f_5, 0, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_286[iVar0 /*9*/].f_5, bParam0);
			PED::SET_PED_CONFIG_FLAG(Local_286[iVar0 /*9*/].f_5, 130, bParam0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_286[iVar0 /*9*/].f_5, 7, 0, 1);
		}
		iVar0++;
	}
}

void func_89()
{
	if (!__LIB_0__::func_724(iLocal_825))
	{
		iLocal_825 = joaat("DOOR_SIX_CABIN_FRONT");
		__LIB_0__::func_68(iLocal_825, 0, 0);
		__LIB_9__::func_707(iLocal_825, 1);
	}
}

bool func_90()
{
	float fVar0;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_29.f_6.f_20, true);
	if (!CAM::IS_SPHERE_VISIBLE(Local_29.f_6.f_20, Local_29.f_6.f_23) && fVar0 > 65f)
	{
		return false;
	}
	if (CAM::IS_SPHERE_VISIBLE(Local_29.f_6.f_20, Local_29.f_6.f_23) && fVar0 > 85f)
	{
		return false;
	}
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Six_Point_Cabin", true, true);
	func_52(65536);
	AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_SPC_START");
	func_52(268435456);
	return true;
}

bool func_91(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (iParam4 == 0)
	{
		iParam4 = (iParam2 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (__LIB_13__::func_132((iParam1[iVar0 /*9*/])->f_5, 0, &(iParam0->f_155), &(iParam0->f_183), 0, 0) && !PED::GET_PED_CONFIG_FLAG((iParam1[iVar0 /*9*/])->f_5, 9, false))
		{
			iParam0->f_192 = (iParam1[iVar0 /*9*/])->f_5;
			iParam0->f_190 = iVar0;
			return true;
		}
		else if (__LIB_9__::func_623(iParam0, iParam1[iVar0 /*9*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_92()
{
	int iVar0;
	float fVar1;
	int iVar2;
	if (!func_97(268435456))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_SPC_START");
	}
	AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_SPC_ALERT");
	iLocal_824 = __LIB_0__::func_485();
	if (!func_97(16384))
	{
		iVar0 = iLocal_789;
		while (iVar0 <= iLocal_786)
		{
			if (__LIB_2__::func_1(Local_286[iVar0 /*9*/].f_5, 0, 1))
			{
				__LIB_2__::func_357(Local_286[iVar0 /*9*/].f_5, Global_36, 3, 1, 1);
				fVar1 = __LIB_0__::func_665(Global_35, Local_286[iVar0 /*9*/].f_5, 0, 1);
				if (iVar2 < 2)
				{
					PED::SET_PED_COMBAT_RANGE(Local_286[iVar0 /*9*/].f_5, 0);
					iVar2++;
				}
				if (ENTITY::IS_ENTITY_IN_VOLUME(Local_286[iVar0 /*9*/].f_5, Local_15.f_5, true, 0) && fVar1 > 18f)
				{
				}
				if (!PED::IS_PED_IN_COMBAT(Local_286[iVar0 /*9*/].f_5, 0))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_286[iVar0 /*9*/].f_5, 100f, 0, 66);
					__LIB_9__::func_637(&(Local_286[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					PED::SET_PED_TARGET_LOSS_RESPONSE(Local_286[iVar0 /*9*/].f_5, 2);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_29.f_199)
		{
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_286[iVar0 /*9*/].f_5, 100f, 0, 66);
			iVar0++;
		}
	}
	if (!func_97(134217728))
	{
		func_221(1);
	}
	__LIB_2__::func_298();
	func_87(1);
	__LIB_9__::func_640(&(Local_29.f_184), 1);
	__LIB_9__::func_587(&Local_29, 5);
}

void func_93()
{
	if (__LIB_9__::func_581(&Local_29, 5) && !__LIB_9__::func_581(&Local_29, 9))
	{
		Local_29.f_198 = __LIB_9__::func_608(&Local_286, Local_29.f_199, Local_29.f_199);
	}
	func_227();
	func_228();
	switch (Local_29.f_3)
	{
		case 0:
			if (func_229())
			{
				func_52(2);
				func_230();
				__LIB_9__::func_587(&Local_29, 1);
			}
			if (__LIB_1__::func_205(Global_35, Local_15.f_3, 1, 0))
			{
				__LIB_9__::func_587(&Local_29, 4);
			}
			break;
		case 1:
			if (func_230())
			{
				__LIB_9__::func_587(&Local_29, 4);
			}
			break;
		case 4:
			if (func_232())
			{
				func_92();
			}
			break;
		case 5:
			func_233();
			if (func_234())
			{
				__LIB_9__::func_587(&Local_29, 7);
			}
			break;
		case 7:
			__LIB_9__::func_587(&Local_29, 8);
			break;
		case 8:
			if (Local_29.f_198 == 0)
			{
				__LIB_9__::func_587(&Local_29, 9);
				MISC::_0xCC3EDC5614B03F61(26);
			}
			break;
		case 9:
			if (func_236(&Local_29, &Local_286, 85, __LIB_0__::func_0(), 1))
			{
				__LIB_9__::func_587(&Local_29, 10);
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Six_Point_Cabin", false, true);
			}
			break;
		case 10:
			if (__LIB_9__::func_681(&Local_29))
			{
				func_238(0);
			}
			break;
	}
	if (Local_29.f_3 <= 5)
	{
		func_239();
		if (iLocal_752 < 5)
		{
			if (!func_97(33554432))
			{
				if (func_240() || FIRE::IS_EXPLOSION_IN_SPHERE(25, -68.2645f, 1234.905f, 169.812f, 10f))
				{
					func_241();
				}
			}
		}
		if (Local_29.f_3 >= 1)
		{
			func_242();
		}
		__LIB_19__::func_169(&Local_286, &Local_29);
	}
	if (!__LIB_9__::func_581(&Local_29, 4))
	{
		func_244();
	}
	else
	{
		func_245();
	}
	func_246();
	if (!__LIB_9__::func_581(&Local_29, 9))
	{
		if (__LIB_0__::func_51(&(Local_29.f_5), 16384))
		{
			if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SIXPOINT_POST_COMBAT"))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SIXPOINT_POST_COMBAT", true);
			}
			__LIB_9__::func_587(&Local_29, 9);
		}
	}
	__LIB_9__::func_692(&Local_286, &Local_29, 85, 8f);
}

void func_96()
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_51(&(Local_29.f_5), 131072))
	{
		return;
	}
	if (!__LIB_0__::func_51(&(Local_29.f_5), 65536))
	{
		return;
	}
	iVar0 = iLocal_783;
	while (iVar0 <= iLocal_784)
	{
		if (__LIB_2__::func_1(Local_286[iVar0 /*9*/].f_5, 0, 1))
		{
			__LIB_9__::func_637(&(Local_286[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), -662251075);
		}
		iVar0++;
	}
	iVar1 = 6;
	while (iVar1 <= 10)
	{
		if (__LIB_2__::func_1(Local_286[iVar1 /*9*/].f_5, 0, 1))
		{
			__LIB_9__::func_637(&(Local_286[iVar1 /*9*/]), joaat("BLIP_STYLE_ENEMY"), -662251075);
		}
		iVar1++;
	}
	if (iLocal_785 >= 0 && iLocal_786 >= 0)
	{
		iVar0 = iLocal_785;
		while (iVar0 <= iLocal_786)
		{
			if (__LIB_2__::func_1(Local_286[iVar0 /*9*/].f_5, 0, 1))
			{
				__LIB_9__::func_637(&(Local_286[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), -662251075);
			}
			iVar0++;
		}
	}
	__LIB_0__::func_7(&(Local_29.f_5), 131072);
}

bool func_97(int iParam0)
{
	return (iLocal_749 && iParam0) != 0;
}

void func_98()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_551[0 /*5*/]))
	{
		return;
	}
	if (Local_29.f_4 <= 0)
	{
		return;
	}
	if (func_253(32))
	{
		return;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(Local_286[4 /*9*/].f_5) && ENTITY::DOES_ENTITY_EXIST(Local_441[0 /*14*/].f_8)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_551[0 /*5*/], true, false))
	{
		func_254(0, "GUARD", Local_286[4 /*9*/].f_5, 1);
		func_255(0, "LANTERN", Local_441[0 /*14*/].f_8, 1);
		Local_551[0 /*5*/].f_3 = "bBreakLoop1";
		Local_551[0 /*5*/].f_4 = "bBreakLoop2";
		func_256(0, Local_551[0 /*5*/].f_4, 1);
		func_257(0);
		__LIB_1__::func_148(&uLocal_759);
		func_259(32);
	}
}

bool func_99()
{
	if (Local_29.f_4 < 1)
	{
		return true;
	}
	return false;
}

void func_100()
{
	int iVar0;
	vector3 vVar1;
	if (func_97(16384))
	{
		return;
	}
	switch (iLocal_755)
	{
		case 0:
			if (__LIB_10__::func_477(Local_286[iLocal_785 /*9*/].f_5, &uLocal_742, &uLocal_747, &uLocal_748, 1.5f, 50f, 0f, 0, 40f, 1))
			{
				func_52(131072);
				func_261(1);
			}
			break;
		case 1:
			if (!func_97(2))
			{
				func_52(262144);
				func_261(2);
			}
			break;
		case 2:
			vVar1 = { func_262() };
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, -1, 1f, 0, 40000f);
			TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(0, vVar1, 5f, false, false, false, false);
			__LIB_1__::func_474(Local_286[iLocal_785 /*9*/].f_5, &iVar0, 0, 0, 1, 1);
			vVar1 = { func_264() };
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, -1, 1f, 0, 40000f);
			TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(0, vVar1, 5f, false, false, false, false);
			__LIB_1__::func_474(Local_286[iLocal_785 + 1 /*9*/].f_5, &iVar0, 2f, 0, 1, 1);
			func_261(3);
			break;
		case 3:
			break;
	}
}

void func_101()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		OBJECT::SET_FORCE_OBJECT_THIS_FRAME(func_265(iVar0), func_266(iVar0));
		iVar0++;
	}
}

void func_103()
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_3, true, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 41, true);
	}
}

void func_122(bool bParam0)
{
	if ((!__LIB_1__::func_200(63) && !__LIB_7__::func_852(63)) && !__LIB_12__::func_582(63))
	{
		__LIB_1__::func_408(1982676972, 1, 0);
		__LIB_1__::func_408(-2034257789, 0, 0);
	}
}

void func_130(int iParam0)
{
	if (func_97(65536))
	{
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Six_Point_Cabin", false, true);
		func_308(65536);
	}
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	if (Local_29.f_205 != iParam0)
	{
		Local_29.f_205 = iParam0;
	}
	if (PATHFIND::_0x5AC0944C156E5F44("six_point_lights_on"))
	{
		PATHFIND::_0x527B97C203BB8606("six_point_lights_on");
	}
	__LIB_1__::func_941(iLocal_825);
	func_238(1);
}

int func_158()
{
	if (func_97(16384))
	{
		return 0;
	}
	return 1;
}

void func_159()
{
	func_319(&(Local_253[0 /*8*/]), -1.1753f, 1226.903f, 174.2086f, -0.9374f, 0.0294f, 84.0067f, 35.0253f, 0.2f);
	func_319(&(Local_253[1 /*8*/]), -1.0785f, 1228.041f, 174.2081f, -0.9374f, 0.0294f, 86.9617f, 35.0253f, 0.2f);
	func_319(&(Local_253[2 /*8*/]), -67.7526f, 1231.866f, 171.2625f, -0.9435f, -0.0094f, -42.3621f, 29.0226f, 0.2f);
	func_319(&(Local_253[3 /*8*/]), -68.0185f, 1232.112f, 171.2624f, -0.9435f, -0.0094f, -44.4575f, 29.0226f, 0.2f);
}

void func_161()
{
	int iVar0;
	int iVar1;
	if (func_97(16384))
	{
		func_320(7, 0, 0);
		func_320(7, 1, 1);
		func_320(7, 2, 2);
		func_320(7, 3, 3);
	}
	else
	{
		func_321(0, 0, 0);
		func_321(0, 1, 1);
		func_321(0, 2, 2);
		func_321(0, 3, 9);
		func_321(0, 4, 3);
		func_321(0, 5, 4);
		func_321(0, 6, 5);
		func_321(0, 7, 6);
		func_321(0, 8, 7);
		func_321(0, 9, 8);
	}
	switch (Local_29.f_199)
	{
		case 13:
			iLocal_783 = 11;
			iLocal_784 = (iLocal_783 - 1);
			func_322(1, iLocal_783, iLocal_784);
			iLocal_785 = iLocal_784 + 1;
			iLocal_786 = (iLocal_785 + 2 - 1);
			func_323();
			break;
		case 16:
			iLocal_783 = 11;
			iLocal_784 = (iLocal_783 - 1);
			func_322(1, iLocal_783, iLocal_784);
			iLocal_785 = iLocal_784 + 1;
			iLocal_786 = (iLocal_785 + 2 - 1);
			Local_286[iLocal_785 /*9*/].f_1 = { func_164(3, 7) };
			Local_286[iLocal_785 /*9*/].f_4 = func_165(3, 7);
			Local_286[iLocal_786 /*9*/].f_1 = { -60.6907f, 1218.982f, 171.065f };
			Local_286[iLocal_786 /*9*/].f_4 = func_165(3, 5);
			iLocal_787 = iLocal_786 + 1;
			iLocal_788 = (iLocal_787 + 2 - 1);
			break;
		case 4:
			iLocal_783 = 4;
			iLocal_784 = (iLocal_783 - 1);
			func_322(1, iLocal_783, iLocal_784);
			iLocal_785 = iLocal_784 + 1;
			iLocal_786 = (iLocal_785 - 1);
			func_322(3, iLocal_785, iLocal_786);
			break;
	}
	iLocal_789 = 4;
	if (func_97(16384))
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		Local_431[iVar0 /*9*/].f_1 = { func_162(4, iVar0) };
		Local_431[iVar0 /*9*/].f_4 = func_163(4, iVar0);
		iVar0++;
	}
}

Vector3 func_162(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -60.0921f, 1238.496f, 169.7892f;
				case 1:
					return -65.8274f, 1237.815f, 169.7718f;
				case 2:
					return -63.1992f, 1240.423f, 169.8638f;
				case 3:
					return -20.2514f, 1201.776f, 173.0073f;
				case 4:
					return -45.081f, 1211.188f, 170.8305f;
				case 5:
					return -29.0562f, 1228.417f, 171.974f;
				case 6:
					return -27.5658f, 1228.423f, 172.0205f;
				case 7:
					return -25.7407f, 1230.621f, 172.0497f;
				case 8:
					return -27.0871f, 1233.887f, 171.9709f;
				case 9:
					return -60.0711f, 1236.221f, 169.7926f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -35.913f, 1231.742f, 171.8172f;
				case 1:
					return -27.679f, 1229.742f, 172.1358f;
				case 2:
					return -29.5813f, 1228.814f, 172.1861f;
				case 3:
					return -29.36f, 1233.266f, 172.2077f;
				case 4:
					return -37.1605f, 1229.521f, 171.8053f;
				case 5:
					return -19.8795f, 1234.373f, 171.8892f;
				case 6:
					return -29.5499f, 1221.048f, 172.2018f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -32.0774f, 1231.325f, 172.093f;
				case 1:
					return -21.8014f, 1234.167f, 172.119f;
				case 2:
					return -23.4203f, 1236.172f, 172.178f;
				case 3:
					return -20.3377f, 1226.162f, 172.2543f;
				case 4:
					return -23.8255f, 1225.183f, 172.1852f;
				case 5:
					return -25.0364f, 1225.057f, 172.2381f;
				case 6:
					return -26.8974f, 1220.639f, 172.2608f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -21.4474f, 1204.723f, 172.5686f;
				case 1:
					return -23.6206f, 1203.817f, 172.4f;
				case 2:
					return -40.6982f, 1194.733f, 170.6104f;
				case 3:
					return -42.3844f, 1195.365f, 170.4344f;
				case 4:
					return -62.4402f, 1206.165f, 167.6094f;
				case 5:
					return -63.0825f, 1208.596f, 167.8416f;
				case 6:
					return -51.2172f, 1261.65f, 171.4768f;
				case 7:
					return -49.5879f, 1262.588f, 171.5659f;
				case 8:
					return -18.2665f, 1259.888f, 171.8947f;
				case 9:
					return -16.5961f, 1259.329f, 171.9179f;
				case 10:
					return -0.0017f, 1236.806f, 171.903f;
				case 11:
					return 0.3675f, 1235.534f, 171.8479f;
				case 12:
					return 0.1197f, 1206.011f, 174.0529f;
				case 13:
					return -1.6852f, 1204.227f, 174.2121f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -31.0141f, 1232.704f, 171.945f;
				case 1:
					return -27.9542f, 1233.88f, 172.0988f;
				case 2:
					return -28.9327f, 1234.178f, 172.2224f;
				case 3:
					return -28.4374f, 1224.979f, 172.2381f;
				case 4:
					return -36.3424f, 1234.243f, 171.761f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -35.4976f, 1295.293f, 173.4056f;
				case 1:
					return -29.5097f, 1295.012f, 173.1073f;
				case 2:
					return 4.961f, 1166.168f, 174.5798f;
				case 3:
					return 4.4031f, 1172.669f, 174.1718f;
				case 4:
					return -95.426f, 1174.333f, 161.546f;
				case 5:
					return -92.6532f, 1167.358f, 161.6603f;
				case 6:
					return 10.0499f, 1274.08f, 173.6138f;
				case 7:
					return 14.6063f, 1276.69f, 172.5553f;
				case 8:
					return -52.7822f, 1149.34f, 164.8773f;
				case 9:
					return -46.305f, 1148.49f, 165.2613f;
				case 10:
					return -98.0388f, 1247.507f, 166.4168f;
				case 11:
					return -95.7664f, 1253.642f, 166.7171f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -62.3076f, 1237.153f, 169.77f;
				case 1:
					return -62.7273f, 1237.92f, 169.7704f;
				case 2:
					return -61.7331f, 1235.372f, 169.841f;
				case 3:
					return -59.0889f, 1237.213f, 169.8089f;
				case 4:
					return -63.3856f, 1234.635f, 169.8089f;
				case 5:
					return -65.1247f, 1234.541f, 169.8089f;
				case 6:
					return -64.664f, 1239.896f, 169.8089f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -69.1445f, 1231.214f, 169.315f;
				case 1:
					return -67.1511f, 1233.791f, 169.7785f;
				case 2:
					return -29.9526f, 1232.02f, 171.8965f;
				case 3:
					return -28.0641f, 1228.129f, 172.0005f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -25.0005f, 1250.3f, 171f;
				case 1:
					return -40.0654f, 1247.115f, 171.2f;
				case 2:
					return -24.3279f, 1214.071f, 172.23f;
				case 3:
					return -10.1556f, 1217.935f, 172.325f;
				case 4:
					return -53.4701f, 1225.347f, 169.8f;
				case 5:
					return -45.5631f, 1213.21f, 170.95f;
				case 6:
					return -11.6288f, 1229.373f, 171.8399f;
				case 7:
					return -18.664f, 1239.25f, 171.9962f;
				case 8:
					return -38.5096f, 1216.119f, 172.0419f;
				case 9:
					return -32.3295f, 1213.665f, 172.1012f;
				case 10:
					return -44.9822f, 1243.108f, 170.9895f;
				case 11:
					return -48.7546f, 1234.149f, 170.0224f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -27.9198f, 1219.89f, 172.1965f;
				case 1:
					return -34.0534f, 1221.116f, 172.1965f;
				case 2:
					return -38.0381f, 1231.894f, 171.6965f;
				case 3:
					return -32.49f, 1235.244f, 171.9181f;
				case 4:
					return -23.2956f, 1232.5f, 172.1965f;
				case 5:
					return -20.2697f, 1227.302f, 171.9524f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -26.087f, 1230.829f, 172.038f;
				case 1:
					return -26.999f, 1228.591f, 172.4684f;
				case 2:
					return -29.1613f, 1228.634f, 172.037f;
				case 3:
					return -27.0712f, 1235.367f, 171.956f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return -70.469f, 1235.201f, 169.3448f;
				case 1:
					return -60.7599f, 1238.947f, 169.7786f;
				case 2:
					return -66.333f, 1234.696f, 169.779f;
				case 3:
					return -63.065f, 1234.333f, 169.7669f;
				case 4:
					return -64.9454f, 1239.65f, 169.7724f;
				case 5:
					return -67.3141f, 1232.168f, 169.8407f;
				case 6:
					return -69.2746f, 1233.385f, 169.3691f;
				case 7:
					return -65.4173f, 1221.93f, 169.8496f;
				case 8:
					return -5.2719f, 1234.409f, 172.1912f;
				case 9:
					return -51.4867f, 1222.796f, 170.1729f;
				case 10:
					return -10.0786f, 1220.014f, 172.8353f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -21.6306f, 1202.639f, 172.4661f;
				case 1:
					return -21.6032f, 1202.85f, 173.266f;
				case 2:
					return -18.0873f, 1212.031f, 172.556f;
				case 3:
					return -18.2533f, 1211.986f, 173.3724f;
				case 4:
					return -26.1533f, 1231.526f, 172.0271f;
				case 5:
					return -26.6633f, 1228.887f, 172.0427f;
				case 6:
					return -29.447f, 1228.442f, 171.964f;
				case 7:
					return -21.4106f, 1201.459f, 172.615f;
				case 8:
					return -61.936f, 1238.252f, 169.7717f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_163(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 109.2713f;
				case 1:
					return 188.2691f;
				case 2:
					return 188.2691f;
				case 3:
					return 24.9963f;
				case 4:
					return 439.2704f;
				case 5:
					return -39.8164f;
				case 6:
					return 30.1836f;
				case 7:
					return 78.1836f;
				case 8:
					return 160.1836f;
				case 9:
					return 50.1836f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 374.5135f;
				case 1:
					return 408.5135f;
				case 2:
					return -401.4865f;
				case 3:
					return -63.4865f;
				case 4:
					return -251.4865f;
				case 5:
					return -91.5135f;
				case 6:
					return 12.513f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -69.926f;
				case 1:
					return 308.1905f;
				case 2:
					return -60.1845f;
				case 3:
					return 109.313f;
				case 4:
					return 284.5135f;
				case 5:
					return 352.5135f;
				case 6:
					return 278.514f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 18f;
				case 1:
					return 39.8424f;
				case 2:
					return -27.4865f;
				case 3:
					return -359.4865f;
				case 4:
					return -421.4865f;
				case 5:
					return -67.2639f;
				case 6:
					return -171.2639f;
				case 7:
					return -139.2639f;
				case 8:
					return -227.2639f;
				case 9:
					return 162.7361f;
				case 10:
					return 86.7361f;
				case 11:
					return 106.7361f;
				case 12:
					return 30.7361f;
				case 13:
					return 48.7361f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -149.76f;
				case 1:
					return 126.514f;
				case 2:
					return 304.5135f;
				case 3:
					return 352.5135f;
				case 4:
					return 236.514f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 152f;
				case 1:
					return 185.798f;
				case 2:
					return 9f;
				case 3:
					return 29.798f;
				case 4:
					return -23f;
				case 5:
					return -32.202f;
				case 6:
					return 142.945f;
				case 7:
					return 148.945f;
				case 8:
					return -25.6459f;
				case 9:
					return -23.6459f;
				case 10:
					return 255.1421f;
				case 11:
					return 267.1421f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 108.8285f;
				case 1:
					return 120f;
				case 2:
					return 99.265f;
				case 3:
					return 209.6366f;
				case 4:
					return 207.6366f;
				case 5:
					return 121.6366f;
				case 6:
					return 29.6366f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 98f;
				case 1:
					return 4f;
				case 2:
					return -120f;
				case 3:
					return 373f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 22.6873f;
				case 1:
					return 22.6873f;
				case 2:
					return 22.6873f;
				case 3:
					return 22.6873f;
				case 4:
					return 22.6873f;
				case 5:
					return 22.6873f;
				case 6:
					return 142.945f;
				case 7:
					return 128.945f;
				case 8:
					return -25.6459f;
				case 9:
					return -1.6698f;
				case 10:
					return 227.1421f;
				case 11:
					return 243.1421f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0.1071f;
				case 1:
					return -25.8929f;
				case 2:
					return -109.8929f;
				case 3:
					return -167.8929f;
				case 4:
					return -229.8929f;
				case 5:
					return 90.1071f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 92.16f;
				case 1:
					return 50.4f;
				case 2:
					return -41.76f;
				case 3:
					return -12.24f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return -236.5283f;
				case 1:
					return 100.41f;
				case 2:
					return -156.85f;
				case 3:
					return -272.05f;
				case 4:
					return 133.95f;
				case 5:
					return 121.1587f;
				case 6:
					return 123.1587f;
				case 7:
					return 92.6148f;
				case 8:
					return -25.3852f;
				case 9:
					return 148.6148f;
				case 10:
					return 160.6148f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 65.5104f;
				case 1:
					return 3.5104f;
				case 2:
					return 1f;
				case 3:
					return 5f;
				case 4:
					return 46.8542f;
				case 5:
					return 46.8542f;
				case 6:
					return 46.854f;
				case 7:
					return -173.52f;
				case 8:
					return 25.32f;
			}
			break;
	}
	return 0f;
}

Vector3 func_164(int iParam0, int iParam1)
{
	return func_162(iParam0, iParam1);
}

float func_165(int iParam0, int iParam1)
{
	return func_163(iParam0, iParam1);
}

void func_166()
{
	vLocal_833 = { -59.11848f, 1239.897f, 171.3898f };
}

bool func_170(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Local_29.f_4 > 0)
			{
				return true;
			}
			break;
		case 1:
			if (Local_29.f_4 >= 0)
			{
				return true;
			}
			break;
		case 2:
			if (Local_29.f_4 >= 0)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_171(int iParam0, char* sParam1, bool bParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = func_327(iParam0);
	}
	__LIB_9__::func_682(&(Local_551[iParam0 /*5*/]), func_328(iParam0), sParam1, bParam2);
}

int func_201(int iParam0)
{
	return __LIB_9__::func_683(Local_551[iParam0 /*5*/], func_328(iParam0));
}

bool func_206(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (iParam0 == iVar0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_210(int iParam0)
{
	switch (iParam0)
	{
		case joaat("G_M_M_UNIDUSTER_01"):
			return "0355_G_M_M_UniDuster_01_WHITE_01";
		case joaat("G_M_M_UNIDUSTER_02"):
			if (__LIB_1__::func_985())
			{
				return "0357_G_M_M_UniDuster_02_WHITE_01";
			}
			else
			{
				return "0361_G_M_M_UniDuster_03_WHITE_01";
			}
			break;
		case 0:
			return "";
	}
	return "0355_G_M_M_UniDuster_01_WHITE_01";
}

void func_212()
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	if ((iLocal_785 < 0 || iLocal_785 + 1 < 0) || iLocal_786 < 0)
	{
		return;
	}
	if (__LIB_2__::func_1(Local_286[iLocal_785 /*9*/].f_5, 0, 1))
	{
		__LIB_0__::func_928(&(Local_29.f_38), Local_286[iLocal_785 /*9*/].f_5, "ODR_PED4", 1);
		iVar1 = joaat("WORLD_HUMAN_GUARD_SCOUT");
		vVar2 = { ENTITY::GET_ENTITY_COORDS(Local_286[iLocal_785 /*9*/].f_5, true, false) };
		fVar5 = ENTITY::GET_ENTITY_HEADING(Local_286[iLocal_785 /*9*/].f_5);
		uVar0 = TASK::CREATE_SCENARIO_POINT(iVar1, vVar2, fVar5, 0, 0, 1);
		TASK::_TASK_START_SCENARIO_IN_PLACE_2(Local_286[iLocal_785 /*9*/].f_5, uVar0, 0, 0, false, -1f, false);
		PED::SET_PED_COMBAT_RANGE(Local_286[iLocal_785 /*9*/].f_5, 0);
	}
	if (__LIB_2__::func_1(Local_286[iLocal_785 + 1 /*9*/].f_5, 0, 1))
	{
		__LIB_0__::func_928(&(Local_29.f_38), Local_286[iLocal_785 + 1 /*9*/].f_5, "ODR_PED5", 1);
		iVar1 = joaat("WORLD_HUMAN_GUARD_MILITARY");
		vVar2 = { ENTITY::GET_ENTITY_COORDS(Local_286[iLocal_785 + 1 /*9*/].f_5, true, false) };
		fVar5 = ENTITY::GET_ENTITY_HEADING(Local_286[iLocal_785 + 1 /*9*/].f_5);
		uVar0 = TASK::CREATE_SCENARIO_POINT(iVar1, vVar2, fVar5, 0, 0, 1);
		TASK::_TASK_START_SCENARIO_IN_PLACE_2(Local_286[iLocal_785 + 1 /*9*/].f_5, uVar0, 0, 0, false, -1f, false);
		PED::SET_PED_COMBAT_RANGE(Local_286[iLocal_785 + 1 /*9*/].f_5, 0);
	}
}

void func_221(bool bParam0)
{
	int iVar0;
	int iVar1;
	if (func_97(134217728))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (__LIB_2__::func_1(Local_431[iVar0 /*9*/].f_5, 0, 1))
		{
			__LIB_2__::func_357(Local_431[iVar0 /*9*/].f_5, Global_36, 2, 1, 1);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (bParam0)
			{
			}
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 1, 0, 1000f, 6000, 0);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, 1000f, -1, 0);
			__LIB_1__::func_474(Local_431[iVar0 /*9*/].f_5, &iVar1, (0.25f * IntToFloat(iVar0)), (0.25f * IntToFloat(iVar0)), 1, 1);
		}
		iVar0++;
	}
	func_52(134217728);
}

void func_227()
{
	int iVar0;
	if (func_97(16384))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_392(iVar0);
		iVar0++;
	}
}

void func_228()
{
	int iVar0;
	if (func_393() == 0 && !func_97(2097152))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_SPC_CABIN");
		func_52(2097152);
	}
	if (!func_97(524288))
	{
		iVar0 = 0;
		while (iVar0 < Local_29.f_199)
		{
			if (!PED::IS_PED_FLEEING(Local_286[iVar0 /*9*/].f_5))
			{
				if (__LIB_2__::func_1(Local_286[iVar0 /*9*/].f_5, 0, 1))
				{
					return;
				}
			}
			iVar0++;
		}
		AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_SPC_ALL_DEAD");
		func_52(524288);
	}
}

bool func_229()
{
	int iVar0;
	int iVar1;
	if (!func_394())
	{
		__LIB_3__::func_407(&(Local_29.f_155), 18f);
	}
	else
	{
		__LIB_3__::func_407(&(Local_29.f_155), 25f);
	}
	if (!__LIB_9__::func_701(&Local_29, &Local_286, 30f, 1))
	{
		__LIB_1__::func_397(&(Local_29.f_155), 0);
	}
	else
	{
		__LIB_1__::func_397(&(Local_29.f_155), 1);
	}
	iVar0 = 0;
	iVar1 = (Local_29.f_199 - 1);
	__LIB_2__::func_828(&(Local_29.f_155), 0);
	__LIB_1__::func_401(&(Local_29.f_155), 0);
	__LIB_1__::func_398(&(Local_29.f_155), 0);
	Local_29.f_190 = func_398();
	__LIB_2__::func_828(&(Local_29.f_155), 1);
	__LIB_1__::func_401(&(Local_29.f_155), 1);
	__LIB_1__::func_398(&(Local_29.f_155), 1);
	if (Local_29.f_190 == -1)
	{
		Local_29.f_190 = func_399();
	}
	if (Local_29.f_190 == -1)
	{
		if (func_91(&Local_29, &Local_286, Local_29.f_199, iVar0, iVar1))
		{
			Local_29.f_190 = __LIB_9__::func_702(&Local_286, __LIB_4__::func_188(&(Local_29.f_155)), 1);
		}
	}
	if (Local_29.f_190 > -1)
	{
		if (__LIB_1__::func_322("ROB_11"))
		{
			__LIB_5__::func_239("ROB_11", 0, 0);
		}
		else if (__LIB_1__::func_322("ROB_12"))
		{
			__LIB_5__::func_239("ROB_12", 0, 0);
		}
		else if (__LIB_1__::func_322("ROB_21"))
		{
			__LIB_5__::func_239("ROB_21", 0, 0);
		}
		else if (__LIB_1__::func_322("ROB_22"))
		{
			__LIB_5__::func_239("ROB_22", 0, 0);
		}
		if (__LIB_1__::func_322("GUARDTALK"))
		{
			__LIB_5__::func_239("GUARDTALK", 0, 0);
		}
		if (__LIB_1__::func_322("SIX_COUPLE"))
		{
			__LIB_5__::func_239("SIX_COUPLE", 0, 0);
		}
		__LIB_0__::func_82(1, 1, 0);
		__LIB_9__::func_637(&(Local_286[Local_29.f_190 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
		Local_29.f_192 = Local_286[Local_29.f_190 /*9*/].f_5;
		if (Local_29.f_192 == Local_286[4 /*9*/].f_5)
		{
			func_405();
		}
		__LIB_2__::func_357(Local_29.f_192, Global_36, 3, 1, 1);
		__LIB_1__::func_397(&(Local_29.f_155), 1);
		return true;
	}
	return false;
}

bool func_230()
{
	bool bVar0;
	if (!__LIB_2__::func_1(Local_286[Local_29.f_190 /*9*/].f_5, 0, 0))
	{
		if (iLocal_751 < 2)
		{
			if (!func_406())
			{
				Local_29.f_190 = -1;
				Local_29.f_192 = 0;
				__LIB_11__::func_76(0);
				__LIB_9__::func_587(&Local_29, 0);
				return false;
			}
		}
	}
	if (Local_29.f_190 < 0)
	{
	}
	else
	{
		switch (iLocal_751)
		{
			case 0:
				if (__LIB_2__::func_1(Local_286[Local_29.f_190 /*9*/].f_5, 0, 0))
				{
					__LIB_9__::func_594(Local_29.f_205);
					Local_29.f_192 = Local_286[Local_29.f_190 /*9*/].f_5;
					if (Local_29.f_192 == Local_286[4 /*9*/].f_5 && !ENTITY::IS_ENTITY_DEAD(Local_286[4 /*9*/].f_5))
					{
						if (!func_253(8192))
						{
							return false;
						}
						else
						{
							iLocal_782 = 1;
							__LIB_11__::func_76(1);
							return false;
						}
					}
					TASK::TASK_LOOK_AT_ENTITY(Local_29.f_192, Global_35, 7500, 0, 51, 0);
					TASK::_0xE7FA07624574B79A(Local_29.f_192, Global_35, 3, 2, 3f, 1, 0, 0, 0);
					__LIB_2__::func_357(Local_29.f_192, Global_36, 3, 1, 1);
					__LIB_11__::func_76(1);
				}
				break;
			case 1:
				if ((((__LIB_9__::func_698(Local_29.f_192, &iLocal_782, -1, 0) && !TASK::IS_PED_GETTING_UP(Local_29.f_192)) || PED::_IS_PED_LASSOED(Local_29.f_192)) || func_406()) || func_97(33554432))
				{
					iLocal_782 = 0;
					__LIB_1__::func_532(Global_1347702[63 /*49*/].f_15, 1);
					__LIB_9__::func_637(&(Local_286[Local_29.f_190 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					if (PED::_IS_PED_LASSOED(Local_29.f_192))
					{
						bVar0 = true;
					}
					else
					{
						bVar0 = func_411();
					}
					if (bVar0)
					{
						__LIB_11__::func_76(2);
					}
				}
				break;
			case 2:
				if (func_412())
				{
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_232()
{
	switch (iLocal_829)
	{
		case 0:
			func_413();
			if (func_97(16384))
			{
				func_414(&Local_29, &Local_286, 0, (Local_29.f_199 - 1), 1f, 2f);
			}
			else
			{
				func_414(&Local_29, &Local_286, 4, 9, 1f, 2f);
			}
			iLocal_829 = 1;
			break;
		case 1:
			if (!__LIB_9__::func_611(&uLocal_795))
			{
				func_221(1);
				__LIB_9__::func_640(&uLocal_795, 0);
			}
			else if (__LIB_9__::func_658(&uLocal_795, 0f))
			{
				iLocal_829 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_233()
{
	if (!__LIB_0__::func_51(&(Local_29.f_5), 2048))
	{
		if (__LIB_9__::func_709(0, 1, 0, 0))
		{
			__LIB_0__::func_7(&(Local_29.f_5), 2048);
		}
	}
}

bool func_234()
{
	int iVar0;
	int iVar1;
	switch (iLocal_753)
	{
		case 0:
			func_417();
			func_418(1);
			break;
		case 1:
			func_418(2);
			break;
		case 2:
			if (func_393() < 3)
			{
				func_419();
				if (__LIB_2__::func_1(Local_286[0 /*9*/].f_5, 0, 1))
				{
					__LIB_9__::func_637(&(Local_286[0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
				}
				func_418(3);
			}
			break;
		case 3:
			func_418(4);
			break;
		case 4:
			if (iLocal_799 > 1)
			{
				if (func_97(16384))
				{
					if (func_393() == 0)
					{
						func_52(64);
						func_418(5);
					}
				}
				else if (__LIB_18__::func_205(&Local_29, &Local_286, func_393()) || __LIB_9__::func_608(&Local_286, Local_29.f_198, Local_29.f_198) <= 0)
				{
					func_52(64);
					func_418(5);
				}
			}
			else
			{
				iVar0 = 4;
				while (iVar0 <= 9)
				{
					if (__LIB_2__::func_1(Local_286[iVar0 /*9*/].f_5, 0, 1))
					{
						__LIB_9__::func_637(&(Local_286[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
						PED::_0x8ACC0506743A8A5C(Local_286[iVar0 /*9*/].f_5, joaat("SCRIPT_STARTOFCOMBAT_COVERINGFIRE"), 1, -1082130432 /* Float: -1f */);
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, -69.8029f, 1231.87f, 169.2659f, Global_35, 3f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 66);
						__LIB_1__::func_474(Local_286[iVar0 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
					}
					iVar0++;
				}
				func_52(64);
				func_418(5);
			}
			break;
		case 5:
			return true;
	}
	if (!func_97(64))
	{
		if (func_97(16))
		{
			func_52(64);
		}
	}
	if (!func_97(512))
	{
		if (func_97(128))
		{
			if (func_421(&Local_29, &uLocal_615, &Local_286, iLocal_787, iLocal_788))
			{
				func_52(512);
			}
		}
	}
	return false;
}

bool func_236(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!__LIB_9__::func_641(iParam1, iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_5), 256))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		__LIB_9__::func_626(iParam0);
		__LIB_9__::func_622(iParam0);
		if (bParam4)
		{
			func_425(iParam0->f_205, bParam3, 0);
		}
		__LIB_9__::func_607(iParam0, 0);
		__LIB_0__::func_7(&(iParam0->f_5), 256);
		__LIB_0__::func_7(&(iParam0->f_5), 8);
	}
	return true;
}

void func_238(bool bParam0)
{
	Local_29 = 7;
	__LIB_9__::func_710(&uLocal_765);
	if (bParam0)
	{
		TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
		__LIB_9__::func_680(&Local_286, &Local_29, &uLocal_540, SCRIPTS::GET_ID_OF_THIS_THREAD(), "SIXPT");
	}
}

void func_239()
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_789;
	while (iVar0 <= iLocal_786)
	{
		if (!MAP::DOES_BLIP_EXIST(Local_286[iVar0 /*9*/].f_6))
		{
			if (__LIB_2__::func_1(Local_286[iVar0 /*9*/].f_5, 0, 1))
			{
				if (PED::IS_PED_IN_COMBAT(Local_286[iVar0 /*9*/].f_5, 0))
				{
					__LIB_9__::func_637(&(Local_286[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					MISC::SET_BIT(&iLocal_830, iVar0);
				}
				else if (Local_29.f_3 > 0)
				{
					if (!MISC::IS_BIT_SET(iLocal_830, iVar0))
					{
						if (__LIB_9__::func_365(Local_286[iVar0 /*9*/].f_5))
						{
							__LIB_2__::func_357(Local_286[iVar0 /*9*/].f_5, Global_36, 3, 1, 1);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_286[iVar0 /*9*/].f_5, 100f, 0, 66);
							MISC::SET_BIT(&iLocal_830, iVar0);
						}
						else if (iVar1 < 5)
						{
							if (__LIB_2__::func_215(Local_286[iVar0 /*9*/].f_5, Global_35, 1, 20f, 0))
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_286[iVar0 /*9*/].f_5, 100f, 0, 66);
								MISC::SET_BIT(&iLocal_830, iVar0);
							}
							iVar1++;
						}
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_240()
{
	if (__LIB_4__::func_195(iLocal_825) > 0.75f)
	{
		return true;
	}
	if (__LIB_0__::func_266(Global_35, -68.2114f, 1234.923f, 169.8118f, 50f, 1, 1))
	{
		if (__LIB_9__::func_703(iLocal_825, 23))
		{
			return true;
		}
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_3, true, 0))
	{
		return true;
	}
	return false;
}

void func_241()
{
	func_52(33554432);
	if (Local_29.f_3 <= 8 && !__LIB_9__::func_641(&Local_286, &Local_29))
	{
		func_52(1048576);
	}
	PED::_0xF1C03A5352243A30(Local_286[0 /*9*/].f_5);
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_286[0 /*9*/].f_5, 100f, 0, 66);
	func_436(0);
	PED::_0xF1C03A5352243A30(Local_286[1 /*9*/].f_5);
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_286[1 /*9*/].f_5, 100f, 0, 66);
	__LIB_0__::func_105(1);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	if (__LIB_2__::func_1(Local_286[0 /*9*/].f_5, 0, 1))
	{
		__LIB_2__::func_303(Local_286[0 /*9*/].f_5, Local_286[0 /*9*/].f_5, "OPENS_FIRE", "", -1f, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	func_439(5);
}

void func_242()
{
	int iVar0;
	func_413();
	iVar0 = iLocal_789;
	while (iVar0 <= iLocal_786)
	{
		if (func_440(iVar0, &iLocal_830))
		{
			__LIB_2__::func_357(Local_286[iVar0 /*9*/].f_5, Global_36, 3, 1, 1);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_286[iVar0 /*9*/].f_5, 100f, 0, 66);
			MISC::SET_BIT(&iLocal_830, iVar0);
		}
		iVar0++;
	}
	if (!func_97(134217728))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (func_440(iVar0, &uLocal_836))
			{
				func_221(1);
			}
			else
			{
				iVar0++;
			}
		}
	}
}

void func_244()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_29.f_199)
	{
		if (!__LIB_0__::func_51(&(Local_286[iVar0 /*9*/].f_7), 2))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_286[iVar0 /*9*/].f_5))
			{
				if (PED::IS_PED_DEAD_OR_DYING(Local_286[iVar0 /*9*/].f_5, true))
				{
					iLocal_826 = __LIB_0__::func_485();
					iLocal_802[iLocal_821] = iVar0;
					iLocal_821++;
					__LIB_9__::func_588(&(Local_286[iVar0 /*9*/].f_7), 2, 0);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!__LIB_0__::func_51(&(Local_431[iVar0 /*9*/].f_7), 2))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_431[iVar0 /*9*/].f_5))
			{
				if (PED::IS_PED_DEAD_OR_DYING(Local_431[iVar0 /*9*/].f_5, true))
				{
					iLocal_826 = __LIB_0__::func_485();
					iLocal_819[iLocal_822] = iVar0;
					iLocal_822++;
					__LIB_9__::func_588(&(Local_431[iVar0 /*9*/].f_7), 2, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_245()
{
	int iVar0;
	if (!__LIB_0__::func_51(&(Local_29.f_5), 16384))
	{
		iVar0 = 0;
		while (iVar0 < Local_29.f_199)
		{
			if (__LIB_2__::func_1(Local_286[iVar0 /*9*/].f_5, 0, 1))
			{
				if (!PED::IS_PED_FLEEING(Local_286[iVar0 /*9*/].f_5))
				{
					return;
				}
			}
			iVar0++;
		}
		__LIB_0__::func_7(&(Local_29.f_5), 16384);
	}
}

void func_246()
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_3, true, 0))
	{
		if (PED::_0x5407B7288D0478B7(Global_35, 0) == 0)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.2f);
		}
	}
	if (bLocal_832)
	{
		return;
	}
	if (!__LIB_2__::func_1(Global_35, 0, 1))
	{
		return;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 0, false))
	{
		__LIB_0__::func_325(&iLocal_831);
		bLocal_832 = true;
		return;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_3, true, 0))
	{
		func_444();
	}
}

bool func_253(int iParam0)
{
	return (iLocal_750 && iParam0) != 0;
}

void func_254(int iParam0, char[4] cParam1, int iParam2, bool bParam3)
{
	__LIB_9__::func_688(&(Local_551[iParam0 /*5*/]), cParam1, iParam2, func_328(iParam0), bParam3);
}

void func_255(int iParam0, char[4] cParam1, int iParam2, bool bParam3)
{
	func_448(&(Local_551[iParam0 /*5*/]), cParam1, iParam2, func_328(iParam0), bParam3);
}

void func_256(int iParam0, char[4] cParam1, bool bParam2)
{
	__LIB_9__::func_699(&(Local_551[iParam0 /*5*/]), cParam1, bParam2, func_328(iParam0));
}

void func_257(int iParam0)
{
	__LIB_2__::func_594(Local_551[iParam0 /*5*/], func_328(iParam0));
}

void func_259(int iParam0)
{
	iLocal_750 = (iLocal_750 || iParam0);
}

void func_261(int iParam0)
{
	iLocal_755 = iParam0;
}

Vector3 func_262()
{
	return func_164(11, 9);
}

Vector3 func_264()
{
	if (__LIB_0__::func_62(Global_36, -37.4308f, 1177.769f, 170.9882f) < __LIB_0__::func_62(Global_36, -4.3009f, 1259.238f, 172.7533f))
	{
		return func_164(11, 8);
	}
	return func_164(11, 10);
}

Vector3 func_265(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -29.81839f, 1228.388f, 172.554f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_266(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.8f;
		default:
			break;
	}
	return -1f;
}

void func_308(int iParam0)
{
	iLocal_749 = (iLocal_749 - (iLocal_749 && iParam0));
}

void func_319(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8)
{
	uParam0->f_2 = { vParam1 };
	uParam0->f_5 = { vParam4 };
	*uParam0 = fParam7;
	uParam0->f_1 = fParam8;
}

void func_320(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { func_162(iParam0, iParam1) };
	fVar3 = func_163(iParam0, iParam1);
	Local_286[iParam2 /*9*/].f_1 = { vVar0 };
	Local_286[iParam2 /*9*/].f_4 = fVar3;
}

void func_321(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = iParam2;
	func_320(iParam0, iVar0, iParam1);
}

void func_322(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		func_320(iParam0, (iVar0 - iParam1), iVar0);
		iVar0++;
	}
}

void func_323()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar1 = 999.9f;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 <= 13)
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_162(3, iVar3), false);
		if (fVar0 < fVar1)
		{
			fVar1 = fVar0;
			iVar2 = iVar3;
		}
		iVar3 += 2;
	}
	func_320(3, iVar2, iLocal_785);
	func_320(3, iVar2 + 1, iLocal_785 + 1);
}

char* func_327(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_BASE";
		case 2:
			return "PBL_ACTION";
		default:
			break;
	}
	return "";
}

char[] func_328(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@hideout@sixpoint@guard";
		case 1:
			return "script@hideout@sixpoint@cabincover";
		case 2:
			return "script@hideout@sixpoint@cabinstorm";
		default:
			break;
	}
	return "INVALID ANIM SCENE";
}

void func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_552();
			break;
		case 1:
			if (__LIB_9__::func_581(&Local_29, 4) && Local_29.f_4 >= 0)
			{
				func_553();
			}
			break;
		case 2:
			if (__LIB_9__::func_581(&Local_29, 4) && Local_29.f_4 >= 0)
			{
				func_554();
			}
			break;
	}
}

int func_393()
{
	int iVar0;
	iVar0 = Local_29.f_198;
	if (!func_97(16384) && __LIB_2__::func_1(Local_286[0 /*9*/].f_5, 0, 1))
	{
		iVar0 = (iVar0 - 1);
		if (iLocal_799 <= 1)
		{
			if (__LIB_2__::func_1(Local_286[1 /*9*/].f_5, 0, 1))
			{
				iVar0 = (iVar0 - 1);
			}
			if (__LIB_2__::func_1(Local_286[2 /*9*/].f_5, 0, 1))
			{
				iVar0 = (iVar0 - 1);
			}
			if (__LIB_2__::func_1(Local_286[3 /*9*/].f_5, 0, 1))
			{
				iVar0 = (iVar0 - 1);
			}
		}
	}
	return iVar0;
}

bool func_394()
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_1, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15, true, 0))
	{
		return true;
	}
	return false;
}

int func_398()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_97(16384))
		{
			if (Local_29.f_191 >= Local_286 || Local_29.f_191 < 4)
			{
				Local_29.f_191 = 4;
			}
		}
		else if (Local_29.f_191 >= Local_29.f_199 || Local_29.f_191 < 0)
		{
			Local_29.f_191 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_286[Local_29.f_191 /*9*/].f_5))
		{
			if (__LIB_9__::func_675(Local_286[Local_29.f_191 /*9*/].f_5, &(Local_29.f_155), &(Local_29.f_183), 0))
			{
				if (!func_97(16384))
				{
					if (func_556(Local_29.f_183, 1, 1, 1, 0))
					{
						if (iVar0 >= 6 && iVar0 <= 9)
						{
							if (__LIB_0__::func_94(Local_286[Local_29.f_191 /*9*/].f_5, Global_36, 0) > 20f)
							{
								Local_29.f_183 = 0;
								Local_29.f_191++;
							}
							else if (Local_29.f_183 == 262144)
							{
								if (__LIB_0__::func_94(Local_286[Local_29.f_191 /*9*/].f_5, Global_36, 0) > 20f)
								{
									Local_29.f_183 = 0;
									Local_29.f_191++;
								}
								else
								{
									return Local_29.f_191;
									Local_29.f_191++;
								}
								iVar0++;
								return -1;
							}
						}
					}
				}
			}
		}
	}
}

int func_399()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar0 = iLocal_789;
	while (iVar0 <= iLocal_786)
	{
		if (__LIB_2__::func_1(Local_286[iVar0 /*9*/].f_5, 0, 1))
		{
			vVar2 = { ENTITY::GET_ENTITY_COORDS(Local_286[iVar0 /*9*/].f_5, true, false) };
			iVar1 = 0;
			while (iVar1 < iLocal_821)
			{
				if (func_557(Local_286[iVar0 /*9*/].f_5, Local_286[iLocal_802[iVar1] /*9*/].f_5, vVar2, 0))
				{
					iLocal_827 = Local_286[iLocal_802[iVar1] /*9*/].f_5;
					return iVar0;
				}
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < iLocal_822)
			{
				if (func_557(Local_286[iVar0 /*9*/].f_5, Local_431[iLocal_819[iVar1] /*9*/].f_5, vVar2, 0))
				{
					iLocal_827 = Local_286[iLocal_819[iVar1] /*9*/].f_5;
					return iVar0;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_405()
{
	int iVar0;
	vector3 vVar1;
	if (ENTITY::IS_ENTITY_DEAD(Local_286[4 /*9*/].f_5))
	{
		func_558(0);
		return;
	}
	switch (iLocal_754)
	{
		case 1:
			func_558(0);
			break;
		case 6:
		case 8:
			func_560(0, func_559(12));
			func_561(12);
			break;
		default:
			vVar1 = { __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */) };
			iVar0 = __LIB_2__::func_431(Local_286[4 /*9*/].f_5, vVar1, 1060437492 /* Float: 0.707f */);
			if (iVar0 == 3)
			{
				func_560(0, func_559(9));
				func_561(9);
			}
			else if (iVar0 == 2)
			{
				func_560(0, func_559(10));
				func_561(10);
			}
			else if (iVar0 == 0)
			{
				func_560(0, func_559(11));
				func_561(11);
			}
			break;
	}
}

bool func_406()
{
	int iVar0;
	if ((Local_29.f_183 == 256 || Local_29.f_183 == 2) || Local_29.f_183 == 4)
	{
		return true;
	}
	__LIB_1__::func_402(&(Local_29.f_155), 0);
	iVar0 = iLocal_789;
	while (iVar0 <= iLocal_786)
	{
		if (iVar0 != Local_29.f_190)
		{
			if (__LIB_2__::func_1(Local_286[iVar0 /*9*/].f_5, 0, 1))
			{
				if (__LIB_13__::func_132(Local_286[iVar0 /*9*/].f_5, 0, &(Local_29.f_155), &(Local_29.f_183), 0, 0))
				{
					if (!__LIB_2__::func_1(Local_286[Local_29.f_190 /*9*/].f_5, 0, 1))
					{
						Local_29.f_190 = iVar0;
						Local_29.f_192 = Local_286[iVar0 /*9*/].f_5;
					}
					return true;
				}
			}
		}
		iVar0++;
	}
	__LIB_1__::func_402(&(Local_29.f_155), 1);
	if (func_565())
	{
		return true;
	}
	return false;
}

int func_411()
{
	int iVar0;
	int iVar1;
	iVar1 = func_567();
	__LIB_2__::func_357(Local_29.f_192, Global_36, 3, 1, 1);
	if (Local_29.f_192 == Local_286[4 /*9*/].f_5)
	{
		if (!func_253(8192))
		{
			return 0;
		}
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (Local_29.f_192 != Local_286[0 /*9*/].f_5 && Local_29.f_192 != Local_286[1 /*9*/].f_5)
	{
		if (Local_29.f_192 != Local_286[4 /*9*/].f_5)
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
		}
		if (iVar1 > -1)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_162(9, iVar1), 3f, 20000, 0.25f, 0, func_163(9, iVar1));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_162(9, (iVar1 + 2 % 6)), 2f, 20000, 0.25f, 0, func_163(9, (iVar1 + 1 % 6)));
			if (!func_568())
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_162(9, (iVar1 + 4 % 6)), 2f, 20000, 0.25f, 0, func_163(9, (iVar1 + 2 % 6)));
			}
		}
		else
		{
			TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			__LIB_2__::func_45(0, Global_35, 1500);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 2000, false, 1);
		}
	}
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 66);
	__LIB_1__::func_474(Local_29.f_192, &iVar0, 0, 0, 1, 1);
	if (func_568())
	{
		__LIB_2__::func_303(Local_29.f_192, Local_29.f_192, "ARRIVAL_COMBAT_TRAP_MALE", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	else
	{
		__LIB_2__::func_303(Local_29.f_192, Local_29.f_192, "CALLOUT_JUST_KILL_EM_MALE", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	return 1;
}

bool func_412()
{
	if (func_97(16384))
	{
		return true;
	}
	if (__LIB_9__::func_709(-6f, 1, 0, 0))
	{
		return true;
	}
	if (((Local_29.f_183 == 256 || Local_29.f_183 == 4) || func_565()) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_7, true, 0))
	{
		return true;
	}
	return false;
}

void func_413()
{
	func_570();
}

void func_414(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2[14];
	float fVar17[14];
	float fVar32;
	float fVar33;
	float fVar34;
	bool bVar35;
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_192) && __LIB_2__::func_1((iParam1[iVar0 /*9*/])->f_5, 0, 1))
		{
			if ((iParam1[iVar0 /*9*/])->f_5 != iParam0->f_192)
			{
				fVar2[iVar0] = __LIB_0__::func_665((iParam1[iVar0 /*9*/])->f_5, iParam0->f_192, 0, 1);
				if (fVar2[iVar0] > fVar32)
				{
					fVar32 = fVar2[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		bVar35 = false;
		if ((iParam1[iVar0 /*9*/])->f_5 == iParam0->f_192)
		{
		}
		else if (!__LIB_2__::func_1((iParam1[iVar0 /*9*/])->f_5, 0, 1))
		{
		}
		else
		{
			__LIB_2__::func_357((iParam1[iVar0 /*9*/])->f_5, Global_36, 3, 0, 3);
			fVar17[iVar0] = (fVar2[iVar0] / fVar32);
			fVar33 = (fVar17[iVar0] * fParam4);
			fVar34 = (fVar17[iVar0] * fParam5);
			if (__LIB_1__::func_376((iParam1[iVar0 /*9*/])->f_5))
			{
				bVar35 = true;
			}
			else if (PED::IS_PED_FACING_PED((iParam1[iVar0 /*9*/])->f_5, Global_35, 70f))
			{
				fVar33 = (fVar33 / 2f);
				fVar34 = (fVar34 / 2f);
			}
			else if (PED::IS_PED_USING_ANY_SCENARIO(Local_286[iVar0 /*9*/].f_5))
			{
				fVar33 = 0f;
				fVar34 = 0.5f;
			}
			if (!bVar35)
			{
				TASK::_0xE7FA07624574B79A((iParam1[iVar0 /*9*/])->f_5, Global_35, 3, 2, 3f, 1, 0, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				if (!PED::IS_PED_FACING_PED((iParam1[iVar0 /*9*/])->f_5, Global_35, 40f) || fVar2[iVar0] > 20f)
				{
					if (__LIB_1__::func_985())
					{
					}
					else
					{
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					}
				}
				else
				{
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 500, false, 1);
				}
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 66);
				__LIB_1__::func_474((iParam1[iVar0 /*9*/])->f_5, &iVar1, fVar33, fVar34, 1, 1);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 66);
				__LIB_1__::func_474((iParam1[iVar0 /*9*/])->f_5, &iVar1, fVar33, fVar34, 1, 1);
			}
		}
		iVar0++;
	}
}

void func_417()
{
	__LIB_3__::func_442(Local_286[6 /*9*/].f_5, Local_15.f_12, 0, 0);
	__LIB_3__::func_442(Local_286[7 /*9*/].f_5, Local_15.f_11, 0, 0);
	__LIB_3__::func_442(Local_286[8 /*9*/].f_5, Local_15.f_9, 0, 0);
	__LIB_3__::func_442(Local_286[9 /*9*/].f_5, Local_15.f_10, 0, 0);
}

void func_418(int iParam0)
{
	iLocal_753 = iParam0;
}

void func_419()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_29.f_199)
	{
		if (__LIB_2__::func_1(Local_286[iVar0 /*9*/].f_5, 0, 1))
		{
			if (iVar0 > 3)
			{
				PED::SET_PED_COMBAT_MOVEMENT(Local_286[iVar0 /*9*/].f_5, 2);
			}
		}
		iVar0++;
	}
}

bool func_421(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		iVar1 = (iVar0 - iParam3);
		if ((uParam1[iVar1 /*9*/])->f_4 != 6)
		{
			iVar0 = 9000;
		}
		else if (iVar0 == iParam4)
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		iVar1 = (iVar0 - iParam3);
		func_577(iParam0, uParam1[iVar1 /*9*/], iParam2[iVar0 /*9*/], iVar0, 0);
		iVar0++;
	}
	return false;
}

void func_425(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = __LIB_4__::func_6(iParam0);
	if (!__LIB_0__::func_6(iVar0))
	{
		return;
	}
	func_580(iVar0, 1, bParam1, 0, 1);
	__LIB_9__::func_615(iParam0, -1);
	if (bParam2)
	{
		if (__LIB_1__::func_268(iVar0) >= 1)
		{
			__LIB_9__::func_616(iVar0, (__LIB_1__::func_268(iVar0) - 1));
		}
	}
	else
	{
		__LIB_0__::func_703(0, 12);
		iVar1 = __LIB_9__::func_602(iParam0);
		if (__LIB_1__::func_268(iVar0) <= 1)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("GANG_HIDEOUT_COMPLETED")), 1);
		}
		if (iVar1 != -1)
		{
			iVar2 = Global_40.f_9571[iVar1 /*10*/].f_1;
			if (iVar2 == 2 || iVar2 == 1)
			{
				Global_1392050[iVar1 /*14*/].f_1 |= 2;
			}
			iVar3 = 0;
			iVar4 = 12;
			iVar5 = 0;
			if (iVar1 >= 0 && iVar1 < 6)
			{
				Global_1393237.f_192[iVar1] = (__LIB_0__::func_485() / 1000);
			}
			switch (iVar1)
			{
				case 2:
					iVar3 = 0;
					iVar4 = 25;
					iVar5 = 0;
					break;
				case 0:
					if (iParam0 == 36)
					{
						Global_1392050[iVar1 /*14*/].f_1 |= 4;
					}
					else if (iParam0 == 16)
					{
						Global_1392050[iVar1 /*14*/].f_1 |= 8;
					}
					Global_1393237.f_192[iVar1] = (Global_1393237.f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 1:
					Global_1393237.f_192[iVar1] = (Global_1393237.f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 4:
					break;
			}
			__LIB_9__::func_645(__LIB_2__::func_116(iParam0, 1), 350f, 0);
			__LIB_2__::func_304(0, iVar1, iVar5, iVar4, iVar3);
		}
	}
}

void func_436(int iParam0)
{
	if (!__LIB_2__::func_1(Local_286[iParam0 /*9*/].f_5, 0, 1))
	{
		return;
	}
	PED::REMOVE_PED_DEFENSIVE_AREA(Local_286[iParam0 /*9*/].f_5, false);
	PED::_0xFC3DB99C8144CD81(Local_286[iParam0 /*9*/].f_5, Local_15.f_3, 0, false, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_286[iParam0 /*9*/].f_5, 12, false);
	PED::SET_COMBAT_FLOAT(Local_286[iParam0 /*9*/].f_5, 1, 1f);
	PED::SET_COMBAT_FLOAT(Local_286[iParam0 /*9*/].f_5, 3, 4f);
	PED::SET_COMBAT_FLOAT(Local_286[iParam0 /*9*/].f_5, 0, 0f);
}

void func_439(int iParam0)
{
	iLocal_752 = iParam0;
}

bool func_440(int iParam0, int iParam1)
{
	if (iParam0 == Local_29.f_190)
	{
		return false;
	}
	if (MISC::IS_BIT_SET(*iParam1, iParam0))
	{
		return false;
	}
	if (!__LIB_1__::func_376(Local_286[iParam0 /*9*/].f_5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_827) && ENTITY::DOES_ENTITY_EXIST(Local_286[iParam0 /*9*/].f_5))
		{
			if (__LIB_0__::func_665(Local_286[iParam0 /*9*/].f_5, iLocal_827, 0, 1) < 7f)
			{
				return true;
			}
			if (func_604(Local_286[iParam0 /*9*/].f_5, iLocal_827, 100f))
			{
				if (func_605(Local_286[iParam0 /*9*/].f_5, iLocal_827, ENTITY::GET_ENTITY_COORDS(Local_286[iParam0 /*9*/].f_5, true, false)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_444()
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_831))
	{
		iLocal_831 = MAP::_BLIP_ADD_FOR_COORD(-1383961727, vLocal_833);
	}
}

void func_448(var uParam0, char* sParam1, int iParam2, char[4] cParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam1, iParam2, 0);
	ENTITY::SET_ENTITY_VISIBLE(iParam2, bParam4);
}

void func_552()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_551[0 /*5*/]))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_286[4 /*9*/].f_5))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_551[0 /*5*/]);
		return;
	}
	func_658(iLocal_754);
	switch (iLocal_754)
	{
		case 0:
			if (func_253(512))
			{
				if (func_659(3))
				{
					func_660(3, 1);
				}
			}
			else if (func_253(256))
			{
				if (func_659(1))
				{
					func_660(1, 1);
				}
			}
			else if (func_253(2048))
			{
				if (func_659(6))
				{
					func_660(6, 1);
				}
			}
			break;
		case 1:
			if (func_253(128))
			{
				if (func_659(2))
				{
					func_660(2, 1);
				}
			}
			break;
		case 2:
			if (func_253(512))
			{
				if (func_659(3))
				{
					func_660(3, 1);
				}
			}
			else if (func_253(256))
			{
				if (func_659(1))
				{
					func_660(1, 1);
				}
			}
			else if (func_253(2048))
			{
				if (func_659(6))
				{
					func_660(6, 1);
				}
			}
			break;
		case 3:
			if (func_253(128))
			{
				if (func_659(5))
				{
					func_660(5, 1);
				}
			}
			else if (func_253(2048))
			{
				if (func_659(8))
				{
					func_660(8, 0);
				}
			}
			else if (func_253(1024))
			{
				if (func_659(4))
				{
					func_660(4, 0);
				}
			}
			break;
		case 4:
			if (func_253(128))
			{
				if (func_659(5))
				{
					func_660(5, 1);
				}
			}
			else if (func_253(2048))
			{
				if (func_659(8))
				{
					func_660(8, 0);
				}
			}
			else if (func_253(1024))
			{
				if (func_659(4))
				{
					func_660(4, 0);
				}
			}
			break;
		case 5:
			if (func_253(512))
			{
				if (func_659(3))
				{
					func_660(3, 1);
				}
			}
			else if (func_253(256))
			{
				if (func_659(1))
				{
					func_660(1, 1);
				}
			}
			else if (func_253(2048))
			{
				if (func_659(6))
				{
					func_660(6, 1);
				}
			}
			break;
		case 6:
			if (func_253(128))
			{
				if (func_659(7))
				{
					func_660(7, 1);
				}
			}
			break;
		case 7:
			if (func_253(512))
			{
				if (func_659(3))
				{
					func_660(3, 1);
				}
			}
			else if (func_253(256))
			{
				if (func_659(1))
				{
					func_660(1, 1);
				}
			}
			else if (func_253(2048))
			{
				if (func_659(6))
				{
					func_660(6, 1);
				}
			}
			break;
		case 8:
			if (func_253(128))
			{
				if (func_659(7))
				{
					func_660(7, 1);
				}
			}
			break;
		case 9:
			if (!Local_551[0 /*5*/].f_2)
			{
				func_560(0, func_559(9));
			}
			else if (func_661(0, func_559(9)))
			{
				func_662(0, func_559(9), 1);
				func_256(0, Local_551[0 /*5*/].f_3, 1);
				func_256(0, Local_551[0 /*5*/].f_4, 1);
				iLocal_754 = 13;
			}
			break;
		case 10:
			if (!Local_551[0 /*5*/].f_2)
			{
				func_560(0, func_559(10));
			}
			else if (func_661(0, func_559(10)))
			{
				func_662(0, func_559(10), 1);
				func_256(0, Local_551[0 /*5*/].f_3, 1);
				func_256(0, Local_551[0 /*5*/].f_4, 1);
				iLocal_754 = 13;
			}
			break;
		case 11:
			if (!Local_551[0 /*5*/].f_2)
			{
				func_560(0, func_559(11));
			}
			else if (func_661(0, func_559(11)))
			{
				func_662(0, func_559(11), 1);
				func_256(0, Local_551[0 /*5*/].f_3, 1);
				func_256(0, Local_551[0 /*5*/].f_4, 1);
				iLocal_754 = 13;
			}
			break;
		case 12:
			if (!Local_551[0 /*5*/].f_2)
			{
				func_560(0, func_559(12));
			}
			else if (func_661(0, func_559(12)))
			{
				func_662(0, func_559(12), 1);
				func_256(0, Local_551[0 /*5*/].f_3, 1);
				func_256(0, Local_551[0 /*5*/].f_4, 1);
				iLocal_754 = 13;
			}
			break;
		case 13:
			if (!ENTITY::IS_ENTITY_DEAD(Local_286[4 /*9*/].f_5) && ENTITY::HAS_ANIM_EVENT_FIRED(Local_286[4 /*9*/].f_5, joaat("ENDSINRUN")))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_551[0 /*5*/]);
			}
			break;
	}
}

void func_553()
{
	char* sVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;
	switch (iLocal_758)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(Local_286[3 /*9*/].f_5))
			{
				func_663();
				func_664(1, "PBL_RIFLE");
				func_664(1, "PBL_PISTOL");
				PED::REGISTER_TARGET(Local_286[3 /*9*/].f_5, Global_35, 0);
				func_665(1);
			}
			break;
		case 1:
			if (func_661(1, "PBL_RIFLE") && func_661(1, "PBL_PISTOL"))
			{
				TASK::CLEAR_PED_TASKS(Local_286[3 /*9*/].f_5, true, false);
				sVar0 = func_666();
				vVar1 = { func_667(1, "Ped", sVar0) };
				fVar4 = func_668(1, "Ped", sVar0);
				TASK::OPEN_SEQUENCE_TASK(&iVar5);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar1, 2f, 20000, fVar4, 0.15f, 0);
				__LIB_1__::func_474(Local_286[3 /*9*/].f_5, &iVar5, 0, 0, 1, 1);
				func_664(1, sVar0);
				func_665(2);
			}
			break;
		case 2:
			func_663();
			sVar0 = func_666();
			if ((func_669() && func_661(1, sVar0)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_13, false, 0))
			{
				func_662(1, sVar0, 1);
				func_257(1);
				if (__LIB_2__::func_1(Local_286[3 /*9*/].f_5, 0, 1))
				{
					__LIB_9__::func_637(&(Local_286[3 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
				}
				func_665(3);
			}
			break;
		case 3:
			if (func_253(32768) || func_253(65536))
			{
				func_665(4);
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(Local_286[3 /*9*/].f_5))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_441[6 /*14*/].f_8) && ENTITY::HAS_ANIM_EVENT_FIRED(Local_441[6 /*14*/].f_8, -199945954))
				{
					func_670(1, "Ped", Local_286[3 /*9*/].f_5);
					func_259(65536);
				}
				else
				{
					func_259(65536);
				}
			}
			if (!func_253(65536) && func_671(1))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_286[3 /*9*/].f_5, 0, true);
				__LIB_9__::func_666(&(Local_286[3 /*9*/]), 1);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_286[3 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_286[3 /*9*/].f_5, true, false), 1f, 1, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar6);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, ENTITY::GET_ENTITY_COORDS(Local_286[3 /*9*/].f_5, true, false), 3, 1, 0, 0, 0, Local_634[1 /*9*/], 0, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 66);
				__LIB_1__::func_474(Local_286[3 /*9*/].f_5, &iVar6, 0, 0, 1, 1);
				func_259(32768);
			}
			break;
		case 4:
			break;
	}
}

void func_554()
{
	int iVar0;
	int iVar1;
	switch (iLocal_756)
	{
		case 0:
			if (((((!ENTITY::IS_ENTITY_DEAD(Local_286[0 /*9*/].f_5) && !func_97(33554432)) && !__LIB_1__::func_205(Global_35, Local_15.f_3, 1, 0)) && __LIB_2__::func_1(Local_286[0 /*9*/].f_5, 0, 1)) && __LIB_2__::func_1(Local_286[1 /*9*/].f_5, 0, 1)) && __LIB_2__::func_1(Local_286[2 /*9*/].f_5, 0, 1))
			{
				TASK::CLEAR_PED_TASKS(Local_286[0 /*9*/].f_5, true, false);
				__LIB_4__::func_7(Local_286[0 /*9*/].f_5, joaat("WEAPON_REPEATER_CARBINE"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				func_673(Local_286[0 /*9*/].f_5, func_164(11, 2), func_165(11, 2), 2, 1073741824 /* Float: 2f */);
				if (!ENTITY::IS_ENTITY_DEAD(Local_286[1 /*9*/].f_5))
				{
					TASK::CLEAR_PED_TASKS(Local_286[1 /*9*/].f_5, true, false);
					__LIB_4__::func_7(Local_286[1 /*9*/].f_5, joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					func_673(Local_286[1 /*9*/].f_5, func_164(11, 3), func_165(11, 3), 2, 1073741824 /* Float: 2f */);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_286[2 /*9*/].f_5))
				{
					TASK::CLEAR_PED_TASKS(Local_286[2 /*9*/].f_5, true, false);
					__LIB_4__::func_7(Local_286[2 /*9*/].f_5, joaat("WEAPON_REPEATER_CARBINE"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					func_673(Local_286[2 /*9*/].f_5, func_164(11, 4), func_165(11, 4), 2, 1073741824 /* Float: 2f */);
				}
				__LIB_9__::func_890(1);
			}
			else
			{
				__LIB_9__::func_890(3);
				func_52(33554432);
			}
			break;
		case 1:
			func_675();
			if (func_97(33554432) || __LIB_1__::func_205(Global_35, Local_15.f_3, 1, 0))
			{
				func_558(2);
				__LIB_9__::func_890(5);
			}
			else if (func_253(131072) && __LIB_1__::func_205(Global_35, Local_15.f_2, 1, 0))
			{
				__LIB_3__::func_124(iLocal_825, 1);
				func_257(2);
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_SPC_DOOR_BURST");
				__LIB_9__::func_890(2);
			}
			break;
		case 2:
			if (!func_253(1048576))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_286[0 /*9*/].f_5))
				{
					if (__LIB_2__::func_598(Local_286[0 /*9*/].f_5, Local_551[2 /*5*/], "PEDA", 0, 0, 1, 0))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_286[0 /*9*/].f_5, 71, false);
						__LIB_9__::func_637(&(Local_286[0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
						func_436(0);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_COMBAT_PED(0, Global_35, 100663296, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 66);
						__LIB_1__::func_474(Local_286[0 /*9*/].f_5, &iVar0, 0, 0, 1, 1);
						PED::SET_PED_COMBAT_RANGE(Local_286[0 /*9*/].f_5, 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_286[0 /*9*/].f_5, func_164(11, 5), 1f, 0, 0, 0);
						func_259(1048576);
					}
				}
				else
				{
					func_670(2, "PEDA", Local_286[0 /*9*/].f_5);
					func_259(1048576);
				}
			}
			if (!func_253(2097152))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_286[1 /*9*/].f_5))
				{
					if (__LIB_2__::func_598(Local_286[1 /*9*/].f_5, Local_551[2 /*5*/], "PEDB", 0, 0, 1, 0))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_286[1 /*9*/].f_5, 71, false);
						__LIB_9__::func_637(&(Local_286[1 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
						func_436(1);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_COMBAT_PED(0, Global_35, 100663296, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 66);
						__LIB_1__::func_474(Local_286[1 /*9*/].f_5, &iVar0, 0, 0, 1, 1);
						PED::SET_PED_COMBAT_RANGE(Local_286[1 /*9*/].f_5, 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_286[1 /*9*/].f_5, func_164(11, 0), 1f, 0, 0, 0);
						func_259(2097152);
					}
				}
				else
				{
					if (func_253(262144))
					{
						func_670(2, "PEDB", Local_286[1 /*9*/].f_5);
					}
					func_259(2097152);
				}
			}
			if (!func_253(4194304))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_286[2 /*9*/].f_5))
				{
					if (__LIB_2__::func_598(Local_286[2 /*9*/].f_5, Local_551[2 /*5*/], "PEDC", 0, 0, 1, 0))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_286[2 /*9*/].f_5, 71, false);
						__LIB_9__::func_637(&(Local_286[2 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
						func_436(2);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_COMBAT_PED(0, Global_35, 100663296, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 66);
						__LIB_1__::func_474(Local_286[2 /*9*/].f_5, &iVar0, 0, 0, 1, 1);
						PED::SET_PED_COMBAT_RANGE(Local_286[2 /*9*/].f_5, 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_286[2 /*9*/].f_5, func_164(11, 6), 1f, 0, 0, 0);
						func_259(4194304);
					}
				}
				else
				{
					if (func_253(524288))
					{
						func_670(2, "PEDC", Local_286[2 /*9*/].f_5);
					}
					func_259(4194304);
				}
			}
			if ((func_253(1048576) && func_253(2097152)) && func_253(4194304))
			{
				__LIB_1__::func_148(&uLocal_762);
				__LIB_9__::func_890(3);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_3, true, 0) && !func_97(33554432))
			{
				if (__LIB_9__::func_658(&uLocal_762, 4f))
				{
					if (__LIB_2__::func_1(Local_286[0 /*9*/].f_5, 0, 1))
					{
						PED::_0xFC3DB99C8144CD81(Local_286[0 /*9*/].f_5, Local_15.f_8, 0, false, 0);
					}
					if (__LIB_2__::func_1(Local_286[1 /*9*/].f_5, 0, 1))
					{
						PED::_0xFC3DB99C8144CD81(Local_286[1 /*9*/].f_5, Local_15.f_8, 0, false, 0);
					}
					if (__LIB_2__::func_1(Local_286[2 /*9*/].f_5, 0, 1))
					{
						PED::_0xFC3DB99C8144CD81(Local_286[2 /*9*/].f_5, Local_15.f_8, 0, false, 0);
					}
					__LIB_9__::func_890(4);
				}
			}
			else if (func_97(33554432))
			{
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (__LIB_2__::func_1(Local_286[iVar1 /*9*/].f_5, 0, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						PED::_0x9238A3D970BBB0A9(Local_286[iVar1 /*9*/].f_5, -820192119);
						if (iVar1 == 0 || iVar1 == 2)
						{
							TASK::TASK_COMBAT_PED(0, Global_35, 16384, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 66);
						}
						else
						{
							TASK::TASK_COMBAT_PED(0, Global_35, 16384, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 66);
						}
						__LIB_1__::func_474(Local_286[iVar1 /*9*/].f_5, &iVar0, 0, 0, 1, 1);
						__LIB_9__::func_637(&(Local_286[iVar1 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					}
					iVar1++;
				}
				if (func_568())
				{
					__LIB_2__::func_303(Local_286[0 /*9*/].f_5, Local_286[0 /*9*/].f_5, "ARRIVAL_COMBAT_TRAP_MALE", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_303(Local_286[0 /*9*/].f_5, Local_286[0 /*9*/].f_5, "CALLOUT_JUST_KILL_EM_MALE", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_9__::func_890(5);
			}
			break;
		case 4:
			if (__LIB_9__::func_658(&uLocal_762, 6f))
			{
				if (__LIB_2__::func_1(Local_286[0 /*9*/].f_5, 0, 1))
				{
					PED::_0xFC3DB99C8144CD81(Local_286[0 /*9*/].f_5, Local_15.f_4, 0, false, 0);
					PED::SET_PED_COMBAT_RANGE(Local_286[0 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_286[0 /*9*/].f_5, 2);
				}
				if (__LIB_2__::func_1(Local_286[1 /*9*/].f_5, 0, 1))
				{
					PED::_0xFC3DB99C8144CD81(Local_286[1 /*9*/].f_5, Local_15.f_4, 0, false, 0);
					PED::SET_PED_COMBAT_RANGE(Local_286[1 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_286[1 /*9*/].f_5, 2);
				}
				if (__LIB_2__::func_1(Local_286[2 /*9*/].f_5, 0, 1))
				{
					PED::_0xFC3DB99C8144CD81(Local_286[2 /*9*/].f_5, Local_15.f_4, 0, false, 0);
					PED::SET_PED_COMBAT_RANGE(Local_286[2 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_286[2 /*9*/].f_5, 2);
				}
				__LIB_9__::func_890(5);
			}
			break;
		case 5:
			break;
	}
}

bool func_556(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	return !__LIB_1__::func_339(iParam0, iParam1, iParam2, iParam3, iParam4);
}

bool func_557(int iParam0, int iParam1, vector3 vParam2, bool bParam5)
{
	if (iLocal_826 > 0)
	{
		if (__LIB_0__::func_485() > iLocal_826 + 500)
		{
			if (__LIB_0__::func_665(iParam0, iParam1, 0, 1) < 7f)
			{
				return true;
			}
			if (bParam5 || func_604(iParam0, iParam1, 100f))
			{
				if (func_605(iParam0, iParam1, vParam2))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_558(int iParam0)
{
	__LIB_2__::func_506(Local_551[iParam0 /*5*/], func_328(iParam0));
}

char* func_559(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_Base";
		case 1:
			return "PBL_STAND_UP";
		case 2:
			return "PBL_SIT_DOWN";
		case 3:
			return "PBL_FALL_ASLEEP";
		case 4:
			return "PBL_AWAKEN";
		case 5:
			return "PBL_WAKE";
		case 6:
			return "PBL_LANTERN_CHECK";
		case 7:
			return "PBL_LANTERN_SIT";
		case 8:
			return "PBL_SLEEP_LANTERN";
		case 9:
			return "PBL_BREAK_LEFT";
		case 10:
			return "PBL_BREAK_RIGHT";
		case 11:
			return "PBL_BREAK_FRONT";
		case 12:
			return "PBL_LANTERN_BREAK";
		default:
			break;
	}
	return "PBL_BASE";
}

void func_560(int iParam0, char* sParam1)
{
	__LIB_2__::func_544(Local_551[iParam0 /*5*/], sParam1, func_328(iParam0));
	Local_551[iParam0 /*5*/].f_2 = 1;
	Local_551[iParam0 /*5*/].f_1 = sParam1;
}

void func_561(int iParam0)
{
	iLocal_754 = iParam0;
}

bool func_565()
{
	int iVar0;
	var uVar1;
	bool bVar2;
	uVar1 = __LIB_1__::func_372(Global_35, 0);
	bVar2 = (WEAPON::_0x5809DBCA0A37C82B(uVar1) && WEAPON::_0xEA522F991E120D45(uVar1));
	if (Local_29.f_183 == 2 && !bVar2)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Local_29.f_199)
	{
		if (!bVar2)
		{
			if (__LIB_2__::func_1(Local_286[iVar0 /*9*/].f_5, 0, 1))
			{
				if (PED::_0x09D7AFD3716DA8E1(Local_286[iVar0 /*9*/].f_5, 3000))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_567()
{
	vector3 vVar0;
	vector3 vVar3[6];
	int iVar22;
	float fVar23;
	float fVar24;
	int iVar25;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_29.f_192, true, false) };
	fVar24 = 999.9f;
	iVar25 = -1;
	iVar22 = 0;
	while (iVar22 < 6)
	{
		vVar3[iVar22 /*3*/] = { func_162(9, iVar22) };
		iVar22++;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, VOLUME::_GET_VOLUME_COORDS(Local_15.f_7), false) < 11f)
	{
		return -1;
	}
	iVar22 = 0;
	while (iVar22 < 6)
	{
		fVar23 = __LIB_0__::func_636(vVar0, vVar3[iVar22 /*3*/]);
		if (fVar23 < fVar24)
		{
			iVar25 = iVar22;
			fVar24 = fVar23;
		}
		iVar22++;
	}
	return iVar25;
}

bool func_568()
{
	if (__LIB_0__::func_41(__LIB_0__::func_23()) >= 0 && __LIB_0__::func_41(__LIB_0__::func_23()) < 8)
	{
		return false;
	}
	return true;
}

void func_570()
{
	if (!func_253(8192))
	{
		if (__LIB_2__::func_598(Local_286[4 /*9*/].f_5, Local_551[0 /*5*/], "GUARD", 0, 0, 1, 0))
		{
			func_259(8192);
		}
	}
}

void func_577(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (uParam1->f_4 == 6)
	{
		return;
	}
	else if (!__LIB_2__::func_1(uParam2->f_5, 0, 1))
	{
		uParam1->f_4 = 6;
		return;
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(uParam2->f_5, -2117564886, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uParam2->f_5, -219932022, true) == 1)
	{
		uParam1->f_4 = 6;
		return;
	}
	switch (uParam1->f_4)
	{
		case 0:
			func_689(&(uParam2->f_5));
			if (__LIB_9__::func_670(uParam2, 0, 0, bParam4, 0, 0))
			{
				if (__LIB_0__::func_86(uParam1->f_1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(uParam2->f_5, Global_36, 12f, 0, 0, 0);
				}
				else
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(uParam2->f_5, uParam1->f_1, 4f, 1, 0, 0);
				}
			}
			if (uParam1->f_6 <= 0)
			{
				uParam1->f_6 = MISC::GET_RANDOM_INT_IN_RANGE((uParam1->f_7 - 8), uParam1->f_7);
			}
			uParam1->f_4 = 1;
			break;
		case 1:
			if (func_691(iParam0, uParam1, uParam2))
			{
				if (PED::IS_PED_ON_MOUNT(uParam2->f_5))
				{
					*uParam1 = PED::GET_MOUNT(uParam2->f_5);
					uParam1->f_4 = 2;
				}
				else
				{
					uParam1->f_4 = 5;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_869(uParam2->f_5, &(uParam1->f_8), 0, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
			{
				if (!__LIB_0__::func_86(uParam1->f_1))
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(uParam2->f_5, false);
				}
				func_693(&(uParam2->f_5));
				uParam1->f_4 = 5;
			}
			break;
		case 5:
			func_694(uParam1);
			TASK::TASK_COMBAT_PED(uParam2->f_5, Global_35, 0, 0);
			uParam1->f_4 = 6;
			break;
		case 6:
			break;
	}
}

void func_580(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_746(iParam0) == 4)
	{
		__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
		if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
		{
			if (bParam3)
			{
				__LIB_1__::func_242(iParam0, 6);
			}
			else
			{
				__LIB_1__::func_242(iParam0, 5);
			}
			__LIB_1__::func_470(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		__LIB_0__::func_267(1);
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	bVar1 = __LIB_0__::func_2() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		__LIB_1__::func_421(0, 2);
		if (!bVar1 && bParam1)
		{
			__LIB_9__::func_676();
		}
	}
	else
	{
		__LIB_1__::func_142(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		__LIB_0__::func_870(iParam0);
	}
	else
	{
		Var2 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!__LIB_0__::func_13(32768))
		{
			Var4 = { __LIB_0__::func_14(joaat("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && __LIB_0__::func_291(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (__LIB_0__::func_76(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((__LIB_0__::func_76(iParam0) != 95 && __LIB_0__::func_76(iParam0) != 82) && !__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		__LIB_1__::func_641(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		__LIB_1__::func_642(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		iVar9 = __LIB_1__::func_145(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			__LIB_1__::func_629(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = __LIB_0__::func_308(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_300(1);
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				__LIB_0__::func_747(45, 0, 1);
				break;
			case 8:
				iVar10 = __LIB_0__::func_310(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (__LIB_0__::func_311(__LIB_0__::func_76(iParam0)))
				{
					__LIB_1__::func_715(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 2:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 6:
				__LIB_0__::func_747(__LIB_0__::func_312(__LIB_0__::func_872(iParam0)), 0, 1);
				break;
			case 5:
				__LIB_0__::func_747(120, 0, 1);
				break;
		}
	}
	__LIB_1__::func_144(iParam0, 1);
	__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
	__LIB_1__::func_470(iParam0);
	if ((!__LIB_0__::func_291(iParam0) == 0 && bParam1) && __LIB_0__::func_2() == -1)
	{
		iVar12 = __LIB_1__::func_24(iParam0);
		if (iVar12 != -1)
		{
			__LIB_0__::func_867(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = __LIB_1__::func_194();
			if (iVar12 != -1)
			{
				__LIB_0__::func_867(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (__LIB_0__::func_76(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
			case 8:
				if (__LIB_0__::func_76(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
		}
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		if (bParam3)
		{
			__LIB_1__::func_242(iParam0, 6);
		}
		else
		{
			__LIB_1__::func_242(iParam0, 5);
		}
		__LIB_1__::func_470(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						__LIB_0__::func_873();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_727(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_727(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_727(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_727(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_727(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_727(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_727(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_727(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_727(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_727(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_727(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_727(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_727(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_729();
						func_730(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						__LIB_1__::func_101();
						__LIB_0__::func_874();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(__LIB_1__::func_464(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_727(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HUNT_ROOT"), true);
							__LIB_1__::func_240(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_GAMB_ROOT"), true);
							__LIB_1__::func_240(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						__LIB_1__::func_630(304805134, 1, 1);
						if (!__LIB_1__::func_25(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_580(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[21 /*49*/].f_3)), iVar14);
						}
						break;
					case 20:
						__LIB_0__::func_875();
						break;
					case 26:
						__LIB_0__::func_876();
						break;
					case 17:
						__LIB_1__::func_810(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!__LIB_0__::func_878(joaat("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = __LIB_0__::func_23();
							__LIB_1__::func_446(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							__LIB_1__::func_612(joaat("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						__LIB_0__::func_879();
						break;
					case 37:
						__LIB_0__::func_880();
						if (__LIB_0__::func_26())
						{
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), iVar14);
						}
						break;
					case 38:
						__LIB_0__::func_881();
						break;
					case 43:
						__LIB_0__::func_882();
						break;
					case 44:
						if (!__LIB_1__::func_25(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_580(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[82 /*49*/].f_3)), iVar14);
						}
						if (!__LIB_1__::func_25(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_580(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[83 /*49*/].f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						__LIB_0__::func_883();
						break;
					case 59:
						__LIB_0__::func_884();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						__LIB_0__::func_885();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						__LIB_0__::func_886();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_SURV_ROOT"), true);
							__LIB_1__::func_240(451, 0);
						}
						if (!__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_05")))
						{
							if (__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_04")))
							{
								iVar16 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (__LIB_0__::func_315(4))
						{
							if (!__LIB_1__::func_707(joaat("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_727(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_727(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_1__::func_146(89200);
						__LIB_1__::func_146(2300);
						__LIB_1__::func_146(2300);
						break;
					case 68:
						__LIB_0__::func_887();
						break;
					case 76:
						if (Global_1425247.f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[108 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[69 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[70 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[7 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[22 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[23 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[65 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[7 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[8 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[36 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[48 /*74*/].f_8)), iVar14);
						__LIB_0__::func_888();
						__LIB_1__::func_146(-139100);
						break;
					case 69:
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_1__::func_146(-6000);
						}
						break;
					case 70:
						__LIB_1__::func_146(23400);
						__LIB_1__::func_146(1900);
						__LIB_1__::func_146(-15000);
						break;
					case 71:
						__LIB_1__::func_146(-5500);
						break;
				}
				break;
			case 8:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_BEAUG"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444 /* GXTEntry: "Penelope Braithwaite" */);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806 /* GXTEntry: "Scott" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455 /* GXTEntry: "Iain" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411 /* GXTEntry: "Mrs Calhoon" */);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DORKINS"));
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426 /* GXTEntry: "Sister Calderón" */);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876 /* GXTEntry: "Calloway" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_LEVIN"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105 /* GXTEntry: "Emmet Granger" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898 /* GXTEntry: "Flaco Hernández" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548 /* GXTEntry: "Billy Midnight" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082 /* GXTEntry: "Black Belle" */);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767 /* GXTEntry: "Slim Grant" */);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465 /* GXTEntry: "Mr. Black" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187 /* GXTEntry: "Mr. White" */);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALDEN_CARRUTHERS"));
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DOCTOR"));
						break;
					case 58:
						__LIB_0__::func_889();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171 /* GXTEntry: "Lilly Millet" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WROBEL"));
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						__LIB_0__::func_890();
						break;
					case 66:
						__LIB_0__::func_891();
						__LIB_1__::func_599();
						break;
					case 67:
						if (!__LIB_0__::func_892(6))
						{
							__LIB_0__::func_893(6);
						}
						if (!__LIB_0__::func_892(3))
						{
							__LIB_0__::func_893(3);
						}
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_PISTOL_M1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_RINGMASTER"));
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_TIGERHANDLER"));
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833 /* GXTEntry: "Mary Linton" */);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MASON"));
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALGIE_DAVISON"));
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131 /* GXTEntry: "Bertram" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MISS_MARJORIE"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117 /* GXTEntry: "Magnifico" */);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WARVET"));
						break;
					case 9:
						if (__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1))
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(40500);
						}
						else
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(46500);
						}
						break;
				}
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						switch (__LIB_0__::func_872(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		__LIB_0__::func_894(iParam0);
		func_764();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						__LIB_1__::func_777(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						__LIB_1__::func_777(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						__LIB_1__::func_777(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						__LIB_1__::func_777(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						__LIB_1__::func_777(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						__LIB_1__::func_777(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						__LIB_1__::func_777(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						__LIB_1__::func_777(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						__LIB_1__::func_777(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						__LIB_1__::func_777(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_727(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						__LIB_1__::func_777(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						__LIB_1__::func_777(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						__LIB_1__::func_777(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							__LIB_1__::func_777(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							__LIB_1__::func_777(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 536870912))
				{
					__LIB_0__::func_896(11, 1);
				}
				switch (__LIB_0__::func_76(iParam0))
				{
					case 109:
						__LIB_1__::func_777(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						__LIB_1__::func_777(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						__LIB_1__::func_777(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						__LIB_1__::func_777(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						__LIB_1__::func_777(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!__LIB_0__::func_291(iParam0) == 0)
			{
				if (__LIB_0__::func_299(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						__LIB_1__::func_790(__LIB_1__::func_613(Global_1879514.f_1));
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			__LIB_0__::func_703(bParam2, iVar20);
		}
	}
	__LIB_0__::func_301(1);
	if ((bVar13 || __LIB_1__::func_195()) && (__LIB_0__::func_700(iParam0) == 1 || __LIB_0__::func_700(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

bool func_604(int iParam0, int iParam1, float fParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	fVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	fVar7 = __LIB_0__::func_152(vVar1, vVar4, 1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar7 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar7 > (fVar0 - fParam2) && fVar7 < (fVar0 + fParam2))
	{
		return true;
	}
	return false;
}

bool func_605(int iParam0, int iParam1, vector3 vParam2)
{
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_DEAD_BODY"), vParam2, 13f))
	{
		if (PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, true, 0) == 1)
		{
			return true;
		}
	}
	if (__LIB_0__::func_665(iParam0, iParam1, 0, 1) < 10f)
	{
		return true;
	}
	return false;
}

void func_658(int iParam0)
{
	int iVar0;
	func_829();
	if (!func_253(64))
	{
		func_830(512);
		func_830(256);
		func_830(128);
		func_830(1024);
		func_830(2048);
		fLocal_794 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 30f);
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 7:
				if (__LIB_2__::func_117(16))
				{
					if (__LIB_1__::func_985())
					{
						func_259(512);
					}
					else
					{
						func_259(2048);
					}
					func_259(64);
				}
				break;
			case 1:
			case 6:
			case 8:
				func_259(128);
				func_259(64);
				break;
			case 3:
			case 4:
				if (__LIB_2__::func_117(16))
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					if (iVar0 == 0)
					{
						func_259(128);
					}
					else if (iVar0 == 1)
					{
						func_259(2048);
					}
					else
					{
						func_259(1024);
					}
				}
				else
				{
					func_259(128);
				}
				func_259(64);
				break;
		}
	}
}

bool func_659(int iParam0)
{
	if (!Local_551[0 /*5*/].f_2)
	{
		func_560(0, func_559(iParam0));
	}
	else if (func_832(&uLocal_759) >= fLocal_794 && func_661(0, func_559(iParam0)))
	{
		return true;
	}
	return false;
}

void func_660(int iParam0, bool bParam1)
{
	if (func_253(4096))
	{
		__LIB_1__::func_148(&uLocal_759);
		func_833(0, bParam1);
		func_830(4096);
		func_830(64);
		Local_551[0 /*5*/].f_2 = 0;
		func_561(iParam0);
	}
}

bool func_661(int iParam0, char* sParam1)
{
	if (__LIB_2__::func_545(Local_551[iParam0 /*5*/], sParam1, func_328(iParam0)))
	{
		return true;
	}
	return false;
}

void func_662(int iParam0, char* sParam1, bool bParam2)
{
	__LIB_2__::func_543(Local_551[iParam0 /*5*/], sParam1, bParam2, func_328(iParam0));
}

void func_663()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_551[1 /*5*/]))
	{
		return;
	}
	if (func_253(16384))
	{
		return;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(Local_286[3 /*9*/].f_5) && ENTITY::DOES_ENTITY_EXIST(Local_441[6 /*14*/].f_8)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_551[1 /*5*/], true, false))
	{
		__LIB_4__::func_7(Local_286[3 /*9*/].f_5, joaat("WEAPON_REPEATER_CARBINE"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		func_254(1, "Ped", Local_286[3 /*9*/].f_5, 1);
		func_255(1, "table", Local_441[6 /*14*/].f_8, 1);
		func_259(16384);
	}
}

void func_664(int iParam0, char* sParam1)
{
	__LIB_2__::func_544(Local_551[iParam0 /*5*/], sParam1, func_328(iParam0));
	Local_551[iParam0 /*5*/].f_2 = 1;
}

void func_665(int iParam0)
{
	iLocal_758 = iParam0;
}

char* func_666()
{
	int iVar0;
	if (!__LIB_2__::func_1(Local_286[3 /*9*/].f_5, 0, 1))
	{
		return "PBL_PISTOL";
	}
	WEAPON::GET_CURRENT_PED_WEAPON(Local_286[3 /*9*/].f_5, &iVar0, true, 0, false);
	if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		return "PBL_RIFLE";
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
	{
		return "PBL_PISTOL";
	}
	else
	{
		__LIB_4__::func_7(Local_286[3 /*9*/].f_5, joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	}
	return "PBL_PISTOL";
}

Vector3 func_667(int iParam0, char* sParam1, char* sParam2)
{
	return __LIB_9__::func_81(Local_551[iParam0 /*5*/], sParam1, sParam2);
}

float func_668(int iParam0, char* sParam1, char* sParam2)
{
	return __LIB_9__::func_82(Local_551[iParam0 /*5*/], sParam1, sParam2);
}

bool func_669()
{
	if ((iLocal_756 > 1 || func_838()) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_3, true, 0))
	{
		return true;
	}
	return false;
}

void func_670(int iParam0, char* sParam1, var uParam2)
{
	func_839(Local_551[iParam0 /*5*/], func_328(iParam0), sParam1, uParam2);
}

int func_671(int iParam0)
{
	return func_840(Local_551[iParam0 /*5*/], func_328(iParam0));
}

void func_673(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_673(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_673(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_675()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_551[2 /*5*/]))
	{
		return;
	}
	if (func_253(131072))
	{
		return;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(Local_286[0 /*9*/].f_5) && ENTITY::DOES_ENTITY_EXIST(__LIB_3__::func_659(iLocal_825, 0, 0))) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_551[2 /*5*/], true, false))
	{
		func_254(2, "PEDA", Local_286[0 /*9*/].f_5, 1);
		if (!ENTITY::IS_ENTITY_DEAD(Local_286[1 /*9*/].f_5))
		{
			func_259(262144);
			func_254(2, "PEDB", Local_286[1 /*9*/].f_5, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_286[2 /*9*/].f_5))
		{
			func_259(524288);
			func_254(2, "PEDC", Local_286[2 /*9*/].f_5, 1);
		}
		func_255(2, "Door", __LIB_3__::func_659(iLocal_825, 0, 0), 1);
		func_259(131072);
	}
}

void func_689(var uParam0)
{
	if (PED::IS_PED_ON_MOUNT(*uParam0))
	{
		PED::SET_PED_ACCURACY(*uParam0, BUILTIN::FLOOR((0.1f * IntToFloat(PED::GET_PED_ACCURACY(*uParam0)))));
	}
}

bool func_691(int iParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	if (!__LIB_0__::func_86(uParam1->f_1))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(uParam2->f_5, uParam1->f_1, 4f, 4f, 4f, false, false, 0))
		{
			return true;
		}
		if (!__LIB_0__::func_51(&(uParam1->f_5), 1))
		{
			return false;
		}
	}
	fVar1 = __LIB_0__::func_94(uParam2->f_5, Global_36, 0);
	fVar0 = __LIB_0__::func_94(uParam2->f_5, iParam0->f_202, 0);
	if (fVar0 < IntToFloat(uParam1->f_6))
	{
		return true;
	}
	if (fVar1 < 17f)
	{
		return true;
	}
	if (__LIB_2__::func_215(uParam2->f_5, Global_35, 1, (17f + 5f), 0))
	{
		return true;
	}
	return false;
}

void func_693(var uParam0)
{
	PED::SET_PED_ACCURACY(*uParam0, BUILTIN::FLOOR(((1f / 0.1f) * IntToFloat(PED::GET_PED_ACCURACY(*uParam0)))));
}

void func_694(var uParam0)
{
	if (__LIB_2__::func_1(*uParam0, 0, 1))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, joaat("REL_WILD_ANIMAL"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
	}
}

bool func_727(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
		return false;
	}
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return false;
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
				func_727(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_5__::func_391(28);
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
			func_946(iParam0);
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
			func_948(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_950(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			__LIB_1__::func_796(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return false;
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
						func_727(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_727(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_727(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_727(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_727(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_727(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_727(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_5__::func_391(24);
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
					func_727(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_727(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			return false;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_1__::func_825(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return true;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			__LIB_5__::func_507(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_6__::func_187(iParam0);
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
				func_727(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
	return true;
}

void func_729()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_989();
	func_990();
	func_991();
	func_992();
	func_993();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_730(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_996(iParam0, 1, 1, -142743235, 1);
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

void func_764()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575.f_4)
	{
		return;
	}
	if (!__LIB_0__::func_382(64))
	{
		return;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return;
	}
	else if ((__LIB_0__::func_296(0, 0, 1) || __LIB_0__::func_383()) || __LIB_1__::func_195())
	{
		return;
	}
	iVar0 = __LIB_1__::func_194();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1026(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		__LIB_1__::func_103(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		__LIB_0__::func_703(0, -1);
	}
	if (iVar2 > 0)
	{
		__LIB_0__::func_45("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	__LIB_0__::func_385(1, 0);
	Global_1956575.f_4 = 1;
}

void func_829()
{
	if (!func_253(4096))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_286[4 /*9*/].f_5))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_286[4 /*9*/].f_5, -216541277))
			{
				func_259(4096);
			}
		}
	}
}

void func_830(int iParam0)
{
	iLocal_750 = (iLocal_750 - (iLocal_750 && iParam0));
}

float func_832(var uParam0)
{
	if (!__LIB_9__::func_611(uParam0))
	{
		return 0f;
	}
	if (__LIB_9__::func_612(uParam0))
	{
		return uParam0->f_2;
	}
	return (__LIB_0__::func_36() - uParam0->f_1);
}

int func_833(int iParam0, bool bParam1)
{
	if (func_661(iParam0, Local_551[iParam0 /*5*/].f_1))
	{
		func_662(iParam0, Local_551[iParam0 /*5*/].f_1, 1);
		if (bParam1)
		{
			func_1093(iParam0);
		}
		return 1;
	}
	return 0;
}

bool func_838()
{
	if ((__LIB_2__::func_1(Local_286[0 /*9*/].f_5, 0, 1) && __LIB_2__::func_1(Local_286[1 /*9*/].f_5, 0, 1)) && __LIB_2__::func_1(Local_286[2 /*9*/].f_5, 0, 1))
	{
		return false;
	}
	return true;
}

void func_839(int iParam0, char[4] cParam1, char* sParam2, var uParam3)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0, sParam2, uParam3);
}

int func_840(int iParam0, char[4] cParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0, false))
	{
		return 0;
	}
	return 1;
}

void func_946(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			func_1178(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			__LIB_1__::func_408(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_1178(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_1178(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_1178(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			func_1178(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_948(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (!__LIB_1__::func_154(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				__LIB_1__::func_240(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				__LIB_1__::func_240(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				__LIB_1__::func_240(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				__LIB_1__::func_240(400, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 412399755))
		{
			func_1179(joaat("EXOTIC_STAGE_01"));
			if (__LIB_0__::func_944() == 0)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				__LIB_1__::func_240(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				__LIB_1__::func_240(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				__LIB_1__::func_240(401, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 709057512))
		{
			func_1179(joaat("EXOTIC_STAGE_02"));
			if (__LIB_0__::func_944() == 1)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				__LIB_1__::func_240(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				__LIB_1__::func_240(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				__LIB_1__::func_240(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				__LIB_1__::func_240(398, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1478961327))
		{
			func_1179(joaat("EXOTIC_STAGE_03"));
			if (__LIB_0__::func_944() == 2)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						__LIB_1__::func_696(48);
					}
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				__LIB_1__::func_240(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				__LIB_1__::func_240(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				__LIB_1__::func_240(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				__LIB_1__::func_240(406, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1238404098))
		{
			func_1179(joaat("EXOTIC_STAGE_04"));
			if (__LIB_0__::func_944() == 3)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				__LIB_1__::func_240(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				__LIB_1__::func_240(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				__LIB_1__::func_240(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				__LIB_1__::func_240(403, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1160548794))
		{
			func_1179(joaat("EXOTIC_STAGE_05"));
			if (__LIB_0__::func_944() == 4)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_950(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (__LIB_1__::func_707(__LIB_1__::func_35(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1187(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1188(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_989()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1222(0);
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
	func_1222(1);
}

void func_990()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_727(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_991()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1225(0);
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
	func_1225(1);
}

void func_992()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1225(0);
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
	func_1225(1);
}

void func_993()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_727(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_727(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_996(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_996(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_996(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_996(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	func_1233(iParam0, iParam1);
	return 1;
}

int func_1026(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!__LIB_0__::func_144(iVar0, 0))
	{
		return 0;
	}
	if (!__LIB_1__::func_63(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	__LIB_0__::func_794(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (__LIB_0__::func_192(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { __LIB_1__::func_615(iVar0, 0, 1) };
	iVar10 = __LIB_1__::func_119(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1261(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_727(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1093(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bVar0 = func_1295(iParam0, Local_551[iParam0 /*5*/].f_3);
	bVar1 = func_1295(iParam0, Local_551[iParam0 /*5*/].f_4);
	func_256(iParam0, Local_551[iParam0 /*5*/].f_3, !bVar0);
	func_256(iParam0, Local_551[iParam0 /*5*/].f_4, !bVar1);
}

bool func_1178(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
			{
				if (bParam3)
				{
					if (__LIB_1__::func_768(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (__LIB_1__::func_768(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (__LIB_1__::func_768(iVar0))
				{
					*sParam2++;
				}
				if (__LIB_1__::func_768(iVar0))
				{
					return true;
				}
			}
			else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
			{
				if (bParam3)
				{
					if (__LIB_1__::func_768(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (__LIB_1__::func_768(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (__LIB_1__::func_768(iVar0))
				{
					*sParam2++;
				}
				if (__LIB_1__::func_768(iVar1))
				{
					*sParam2++;
				}
				if (__LIB_1__::func_768(iVar0) && __LIB_1__::func_768(iVar1))
				{
					return true;
				}
			}
			else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
			{
				if (bParam3)
				{
					if (__LIB_1__::func_768(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (__LIB_1__::func_768(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (__LIB_1__::func_768(iVar0))
				{
					*sParam2++;
				}
				if (__LIB_1__::func_768(iVar1))
				{
					*sParam2++;
				}
				if (__LIB_1__::func_768(iVar2))
				{
					*sParam2++;
				}
				if ((__LIB_1__::func_768(iVar0) && __LIB_1__::func_768(iVar1)) && __LIB_1__::func_768(iVar2))
				{
					return true;
				}
			}
			else
			{
				if (bParam3)
				{
					if (__LIB_1__::func_768(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (__LIB_1__::func_768(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (__LIB_1__::func_768(iVar0))
				{
					*sParam2++;
				}
				if (__LIB_1__::func_768(iVar1))
				{
					*sParam2++;
				}
				if (__LIB_1__::func_768(iVar2))
				{
					*sParam2++;
				}
				if (__LIB_1__::func_768(iVar3))
				{
					*sParam2++;
				}
				if (((__LIB_1__::func_768(iVar0) && __LIB_1__::func_768(iVar1)) && __LIB_1__::func_768(iVar2)) && __LIB_1__::func_768(iVar3))
				{
					return true;
				}
			}
			return false;
		}
void func_1179(int iParam0)
{
	if (!__LIB_0__::func_448(iParam0))
	{
		__LIB_0__::func_549(__LIB_0__::func_548(iParam0));
	}
}

void func_1187(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		func_1178(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		__LIB_1__::func_832(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1188(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (func_1178(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			__LIB_1__::func_832(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			__LIB_1__::func_832(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

void func_1222(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_727(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1390(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_730(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_996(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1396(Var0);
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

void func_1225(bool bParam0)
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
		func_727(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_727(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_996(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_996(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_996(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_996(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_996(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_996(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_996(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_996(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_996(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_996(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_996(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

void func_1233(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			func_1412(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_950(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1261(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	if (__LIB_0__::func_192(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					iVar49 = (iVar49 + Var0[iVar32 /*2*/].f_1);
					Jump @229; //curOff = 201
				}
				else if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = __LIB_0__::func_372(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = __LIB_0__::func_374(iVar62, iVar61);
					if (__LIB_0__::func_144(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1261(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1261(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_1295(int iParam0, char* sParam1)
{
	return func_1434(Local_551[iParam0 /*5*/], sParam1, func_328(iParam0));
}

void func_1390(int iParam0)
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
	func_996(iParam0, 1, 1, -142743235, 1);
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
		func_996(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1396(struct<6> Param0)
{
	if (!func_1489(Param0.f_4, 1))
	{
	}
	if (!func_1489(Param0, 1))
	{
	}
	if (!func_1489(Param0.f_2, 1))
	{
	}
	if (!func_1489(Param0.f_5, 1))
	{
	}
	if (!func_1489(Param0.f_3, 1))
	{
	}
	if (!func_1489(Param0.f_1, 1))
	{
	}
}

void func_1412(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_154(43))
		{
			if (__LIB_0__::func_192(iParam0, 412399755))
			{
				func_1179(joaat("EXOTIC_STAGE_01"));
				if (__LIB_0__::func_944() == 0)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (__LIB_1__::func_154(44))
		{
			if (__LIB_0__::func_192(iParam0, 709057512))
			{
				func_1179(joaat("EXOTIC_STAGE_02"));
				if (__LIB_0__::func_944() == 1)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (__LIB_0__::func_192(iParam0, -1478961327))
			{
				func_1179(joaat("EXOTIC_STAGE_03"));
				if (__LIB_0__::func_944() == 2)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (__LIB_0__::func_192(iParam0, -1238404098))
			{
				func_1179(joaat("EXOTIC_STAGE_04"));
				if (__LIB_0__::func_944() == 3)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (__LIB_0__::func_192(iParam0, 1160548794))
			{
				func_1179(joaat("EXOTIC_STAGE_05"));
				if (__LIB_0__::func_944() == 4)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_1434(int iParam0, char* sParam1, char[4] cParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	if (ANIMSCENE::_0x6F1F0B17109309DA(iParam0, sParam1))
	{
		return ANIMSCENE::GET_ANIM_SCENE_BOOL(iParam0, sParam1);
	}
	return false;
}

bool func_1489(int iParam0, int iParam1)
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
				if (func_1489(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1489(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1489(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1489(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

