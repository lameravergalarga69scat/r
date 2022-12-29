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
	int iLocal_9 = 0;
	bool bLocal_10 = false;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	struct<27> Local_14 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 24;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 1;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 1065353216;
	var uLocal_171 = 1119092736;
	var uLocal_172 = 1092616192;
	var uLocal_173 = 1085276160;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	int iLocal_176 = 0;
	struct<45> Local_177[9];
	var uLocal_583 = 0;
	var uLocal_584[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_602 = false;
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	int iLocal_605 = 0;
	int iLocal_606 = 0;
	int iLocal_607 = 0;
	int iLocal_608 = 0;
	int iLocal_609 = 0;
	int iLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	int iLocal_648 = 0;
	int iLocal_649 = 0;
	int iLocal_650 = 0;
	int iLocal_651[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_665 = NULL;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	bool bLocal_670 = false;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	int iLocal_674 = 0;
	int iLocal_675 = 0;
	int iLocal_676 = 0;
	int iLocal_677 = 0;
	int iLocal_678 = 0;
	int iLocal_679 = 0;
	bool bLocal_680 = false;
	int iLocal_681 = 0;
	int iLocal_682 = 0;
	int iLocal_683[7] = { 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_691 = false;
	bool bLocal_692 = false;
	bool bLocal_693 = false;
	int iLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = -1;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = -1;
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
	int iLocal_762[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_769 = false;
	int iLocal_770 = 0;
	int iLocal_771 = 0;
	int iLocal_772 = 0;
	int iLocal_773 = 0;
	int iLocal_774 = 0;
	int iLocal_775 = 0;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	int iLocal_778 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bLocal_602 = true;
	iLocal_679 = -1;
	iLocal_770 = -1;
	iLocal_771 = 1;
	iLocal_774 = 20000;
	iLocal_777 = vScriptParam_0.x;
	iLocal_775 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_776 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_776)
		{
			iLocal_776 = 0;
			__LIB_1__::func_947(iLocal_777, &iLocal_775);
			switch (iLocal_775)
			{
				case 0:
					iLocal_775 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_777);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_777)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_777), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_777));
					iVar1 = __LIB_1__::func_885(iLocal_777);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_778 = (MISC::GET_GAME_TIMER() + iLocal_774);
					iLocal_775 = 2;
					break;
				case 2:
					if (func_11() || iLocal_778 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_777);
						iLocal_778 = (MISC::GET_GAME_TIMER() + iLocal_774);
						iLocal_775 = 3;
					}
					break;
				case 3:
					if (func_13(iLocal_777) || iLocal_778 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_777);
						iLocal_778 = (MISC::GET_GAME_TIMER() + iLocal_774);
						iLocal_775 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_777) || iLocal_778 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_777);
						iLocal_778 = (iLocal_774 + MISC::GET_GAME_TIMER());
						iLocal_775 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_777)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_777), 4) && !iLocal_778 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_777) || iLocal_778 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_777, 4);
								iLocal_778 = (iLocal_774 + MISC::GET_GAME_TIMER());
								iLocal_775 = 7;
							}
							Jump @870; //curOff = 518
							if (iLocal_778 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_777);
								func_22();
								if (!__LIB_2__::func_765(2057, 0))
								{
									func_24();
								}
								func_25();
								func_26();
								func_27(iLocal_777);
								func_28(iLocal_777);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_775 = 8;
							}
							Jump @870; //curOff = 622
							func_31(iLocal_777);
							__LIB_0__::func_18();
							iLocal_775 = 9;
							Jump @870; //curOff = 641
							__LIB_1__::func_889(&Global_1898004);
							func_34(iLocal_777, &Global_1898004);
							iLocal_775 = 10;
							Jump @870; //curOff = 668
							func_35(iLocal_777);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_777, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_775 = 11;
							Jump @870; //curOff = 741
							if (func_38(iLocal_777))
							{
								iLocal_776 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_6__::func_414(&Global_1898004, iLocal_777);
							__LIB_1__::func_891(iLocal_777);
							__LIB_0__::func_24(iLocal_777, 8);
							if (__LIB_4__::func_66())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_777 /*35*/].f_10);
							if (Global_1888801[iLocal_777 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_777 /*35*/].f_11);
							}
							Jump @870; //curOff = 851
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_777 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_777 /*35*/].f_12);
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
	int iVar0;
	iLocal_603 = Global_1888801[5 /*35*/].f_4;
	VOLUME::_0xB469CFD9E065EB99(iLocal_603, 3);
	__LIB_4__::func_858(iLocal_603, 0, 0, 0);
	iLocal_604 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2714.648f, -1285.207f, 50.173f, 0f, 0f, 25f, 12.259f, 9.427f, 4.002f, "SDN-m_volGunsmith");
	iLocal_605 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2716.798f, -1284.737f, 49.46929f, 0f, 0f, -155.898f, 3.382181f, 1.741518f, 1.678f, "SDN-m_volGunsmithPrompt");
	iLocal_606 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2721.924f, -1281.781f, 49.68018f, 0f, 0f, 27.50082f, 2.604466f, 8.359895f, 3.813055f, "SDN-m_volGunsmithPorch");
	iLocal_634 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2713.302f, -1287.348f, 55.73129f, 0f, 0f, -154.72f, 21.799f, 13.459f, 15.193f, "SDN-m_volGunsmithOwned");
	VOLUME::_0xB469CFD9E065EB99(iLocal_604, 10016);
	iLocal_607 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volGunsmithOfflimits Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_607, 2716.952f, -1287.544f, 49.46929f, 0f, 0f, -155.898f, 4.360659f, 1.741518f, 1.678f);
	VOLUME::_0x39816F6F94F385AD(iLocal_607, 2710.5f, -1287.142f, 50.21229f, 0f, 0f, 25f, 3.074021f, 9.427f, 3.163f);
	iLocal_620 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2553.141f, -1164.299f, 55.07949f, 0f, 0f, -90.293f, 18.31693f, 12.58955f, 4.791f, "SDN-m_volTailorOwner");
	iLocal_621 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2554.85f, -1169.459f, 53.92649f, 0f, 0f, 89.804f, 2.031777f, 3.197688f, 2.484f, "SDN-m_volTailorPrompt");
	iLocal_622 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2555.342f, -1166.591f, 53.92649f, 0f, 0f, 89.804f, 1.641972f, 2.211613f, 2.484f, "SDN-m_volTailorOfflimits");
	iLocal_623 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volTailorPARENT");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_623, iLocal_620);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_623, iLocal_622);
	VOLUME::_0xB469CFD9E065EB99(iLocal_623, 10019);
	iLocal_611 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2826.795f, -1316.664f, 47.5f, 0f, 0f, 49.75f, 18.75406f, 7.946727f, 6.97787f, "SDN-m_volGeneralStore");
	iLocal_612 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2825.75f, -1318.25f, 46.5f, 0f, 0f, 140f, 3f, 1f, 2f, "SDN-m_volGeneralStorePrompt");
	iLocal_614 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2824.25f, -1319.25f, 46.25f, 0f, 0f, 140f, 4f, 1f, 1.25f, "SDN-m_volGeneralStoreOffLimits");
	VOLUME::_0xB469CFD9E065EB99(iLocal_611, 10014);
	iLocal_613 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volGeneralStorePorch Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_613, 2831.25f, -1320.236f, 46.7499f, 0f, 0f, -39.9993f, 3.672313f, 6.642959f, 3.509136f);
	VOLUME::_0x39816F6F94F385AD(iLocal_613, 2822.573f, -1312.954f, 46.7499f, 0f, 0f, -39.9993f, 3.672313f, 9.205815f, 3.509136f);
	iLocal_616 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2655.185f, -1180.077f, 54.07192f, 0f, 0f, 0f, 9.196758f, 6.114635f, 3.576711f, "SDN-m_volBarberShop");
	iLocal_617 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2655.359f, -1180.46f, 53.28771f, 0f, 0f, 0f, 6.583728f, 4.267162f, 2.03105f, "SDN-m_volBarberPrompt");
	iLocal_618 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volBarberPorch Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_618, 2661.405f, -1180.077f, 53.38316f, 0f, 0f, 0f, 2.748698f, 7.856023f, 3.576711f);
	VOLUME::_0x39816F6F94F385AD(iLocal_618, 2648.97f, -1178.597f, 53.38316f, 0f, 0f, 0f, 2.748698f, 9.535893f, 3.576711f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_616, 10006);
	iLocal_643 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volVegMarket Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_643, 2842.875f, -1226.905f, 49.94888f, 0f, 0f, -6.134115f, 11.54989f, 6.402104f, 7.299754f);
	VOLUME::_0x39816F6F94F385AD(iLocal_643, 2840.582f, -1230.514f, 50.87685f, 0f, 0f, -35.12744f, 11.84795f, 7.163202f, 9.132706f);
	iLocal_644 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2842.382f, -1224.84f, 48.28931f, 0f, 0f, -4.719481f, 3.839659f, 2.450074f, 3.736892f, "SDN-m_volVegMarketPrompt");
	iLocal_645 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2816.753f, -1324.524f, 46.45f, 0f, 0f, 49.75f, 4.595f, 2.43f, 2.869f, "SDN-m_volFrenchMarket");
	iLocal_646 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2836.302f, -1305.196f, 46.90116f, 0f, 0f, -39.45339f, 12.6513f, 9.796144f, 4.036131f, "SDN-m_volFrenchMarket02");
	iLocal_647 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2837.245f, -1306.1f, 47.2232f, 0f, 0f, -36.91755f, 2.950097f, 7.146157f, 3.243663f, "SDN-m_volFrenchMarketPrompt02");
	iLocal_637 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volPostOfficeOwner");
	VOLUME::_0x39816F6F94F385AD(iLocal_637, 2748.327f, -1397.359f, 46.234f, 0f, 0f, 24.583f, 4.62f, 3.944f, 2.741917f);
	VOLUME::_0x39816F6F94F385AD(iLocal_637, 2746.954f, -1394.676f, 46.234f, 0f, 0f, 24.583f, 2.197f, 2.146f, 2.742f);
	VOLUME::_0x39816F6F94F385AD(iLocal_637, 2749.686f, -1400.236f, 46.234f, 0f, 0f, 24.583f, 1.971f, 2.636f, 2.742f);
	iLocal_638 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volPostOfficePrompt Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_638, 2747.206f, -1395.105f, 46.214f, 0f, 0f, 22.919f, 1.779f, 1.111f, 2.494324f);
	VOLUME::_0x39816F6F94F385AD(iLocal_638, 2749.444f, -1399.819f, 46.214f, 0f, 0f, 22.919f, 1.767f, 1.472f, 2.494324f);
	iLocal_639 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2748.29f, -1397.222f, 46.214f, 0f, 0f, 25.95989f, 4.162762f, 3.173493f, 2.117f, "SDN - m_volPostOfficeOFF");
	VOLUME::_0xB469CFD9E065EB99(iLocal_637, 10018);
	iLocal_640 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volPostOfficeNoCombat Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_640, 2739.465f, -1399.159f, 45.69f, 0f, 0f, 24.504f, 22.224f, 9.58f, 6.554f);
	VOLUME::_0x39816F6F94F385AD(iLocal_640, 2737.356f, -1394.378f, 47.02f, 0f, 0f, 24.737f, 5.686f, 1.805f, 3.673f);
	func_47();
	iLocal_625 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.034f, -1450.197f, 48.076f, 0f, 0f, 0f, 6.704965f, 28.73499f, 6.621f, "SDN Horse Shop - m_volHorseShop");
	iLocal_626 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN Horse Shop - m_volHorseShopOutsideDoor Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_626, 2502.26f, -1435.017f, 45.37257f, 0f, 0f, 0f, 3.869675f, 2.62296f, 7.47769f);
	VOLUME::_0x39816F6F94F385AD(iLocal_626, 2499.42f, -1450.354f, 45.37257f, 0f, 0f, -90f, 3.869675f, 2.62296f, 7.47769f);
	VOLUME::_0x39816F6F94F385AD(iLocal_626, 2502.348f, -1465.799f, 45.37257f, 0f, 0f, 180f, 3.869675f, 2.62296f, 7.47769f);
	__LIB_14__::func_344(9, iLocal_626);
	VOLUME::_0xB469CFD9E065EB99(iLocal_625, 10017);
	iLocal_669 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volIndGuardDogOwner");
	VOLUME::_0x39816F6F94F385AD(iLocal_669, 2597.014f, -1453.302f, 47.84009f, 0f, 0f, -35.27248f, 13.32053f, 38.94104f, 13.77784f);
	VOLUME::_0x39816F6F94F385AD(iLocal_669, 2594.038f, -1466.641f, 47.84009f, 0f, 0f, 89.60727f, 12.63065f, 19.94241f, 13.77784f);
	VOLUME::_0x39816F6F94F385AD(iLocal_669, 2581.743f, -1471.003f, 47.84009f, 0f, 0f, 89.60727f, 3.533205f, 8.003942f, 13.77784f);
	VOLUME::_0x39816F6F94F385AD(iLocal_669, 2582.623f, -1467.664f, 47.84009f, 0f, 0f, -35.60653f, 6.672962f, 8.003942f, 13.77784f);
	VOLUME::_0x39816F6F94F385AD(iLocal_669, 2593.001f, -1445.323f, 47.84009f, 0f, 0f, 55.78225f, 7.109884f, 5.264667f, 13.77784f);
	iLocal_619 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2683.454f, -1400.018f, 46.693f, -1.313f, -1.416f, 67.454f, 4.909f, 5.2f, 4.113f, "Saint Denis - newspaper boy");
	iLocal_627 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2645.735f, -1295.139f, 53.79828f, 0f, 0f, 25.62823f, 16.5815f, 20.83208f, 5.240817f, "Saint Denis - m_volBank");
	iLocal_628 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2644.218f, -1292.576f, 52.36508f, 0f, 0f, 25.62823f, 2.356534f, 1.366835f, 2.623696f, "Saint Denis - m_volBankPrompt");
	iLocal_629 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2645.618f, -1295.548f, 51.55162f, 0f, 0f, 0f, 2.535386f, 2.647964f, 2.654926f, "Saint Denis - m_volBankShopOfflimits Agg");
	iLocal_674 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volRiverBoatGuardArea");
	VOLUME::_0x39816F6F94F385AD(iLocal_674, 2788.009f, -1499.647f, 45.91699f, 0f, 0f, -59.52556f, 28.86597f, 15.03598f, 14.77563f);
	VOLUME::_0x39816F6F94F385AD(iLocal_674, 2807.164f, -1500.584f, 45.91699f, 0f, 0f, 179.899f, 28.86597f, 15.03598f, 14.77563f);
	iLocal_627 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(__LIB_10__::func_626(0), __LIB_10__::func_627(0), __LIB_10__::func_628(0), "BRL_SAINTDENIS - Bank");
	VOLUME::_0xB469CFD9E065EB99(iLocal_627, 10005);
	iLocal_677 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2839.348f, -1229.419f, 47.30768f, 0f, 0f, -26.82762f, 22.30358f, 30.06492f, 16.24477f, "Saint Denis - m_volSlumsMarketHorseAvoidance");
	POPULATION::_0xB56D41A694E42E86(iLocal_677, 393217, 0, 0, -1, -1, 0);
	iLocal_608 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2720f, -1230.25f, 51f, 0f, 0f, -90f, 10f, 8f, 4f, "SDN-m_volDoctor");
	iLocal_609 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2720f, -1232f, 50f, 0f, 0f, 0f, 2f, 2f, 3f, "SDN-m_volDoctorPrompt");
	iLocal_610 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2721.5f, -1233f, 50f, 0f, 0f, 0f, 1f, 3.5f, 3f, "SDN-m_volDoctorOffLimits");
	VOLUME::_0xB469CFD9E065EB99(iLocal_608, 10011);
	iLocal_630 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2767.35f, -1417.88f, 43.96f, 0f, 0f, -35.20718f, 55.10648f, 55.98696f, 21.39363f, "SDN-m_volTrainStation");
	VOLUME::_0xB469CFD9E065EB99(iLocal_630, 10020);
	iLocal_675 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2734.174f, -1119.755f, 50.10792f, 0f, 0f, 0f, 5.762633f, 7.941937f, 4.04453f, "St. Denis - m_volPhotoStudio");
	iLocal_676 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2734.174f, -1119.957f, 50.10792f, 0f, 0f, 0f, 5.762633f, 6.069339f, 4.04453f, "St. Denis - m_volPhotoStudioPrompt");
	iLocal_624 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2546.452f, -1301.997f, 51.59172f, 0f, 0f, 0.496382f, 18.19264f, 24.24748f, 8.938443f, "Saint Denis - m_volTheatre");
	POPULATION::_0xB56D41A694E42E86(iLocal_624, 10208, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_624, 10208, 0, 0, -1, -1, 0);
	iLocal_678 = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(2607.1f, -1253.1f, 52.9f, 300f, 3f, 3f, 0, 6f, 10f, 25f, 7.5f);
	iLocal_615 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2857.228f, -1199.688f, 47.8205f, 0f, 0f, 4.503f, 10.98f, 10.95572f, 7.601785f, "SDN - m_volFence");
	iLocal_635 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2859.36f, -1200.223f, 49.71552f, 0f, 0f, 4.313612f, 2.547739f, 1.659313f, 2.393255f, "SDN - m_volFencePrompt");
	iLocal_636 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2859.542f, -1202.452f, 49.78863f, 0f, 0f, 4.313612f, 2.547739f, 1.326916f, 2.393255f, "SDN - m_volFenceCounterOff");
	VOLUME::_0xB469CFD9E065EB99(iLocal_615, 10013);
	iLocal_631 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-Cemetery-Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_631, 2700.761f, -1102.983f, 50.71395f, 0f, 0f, 0.216256f, 56.07924f, 9.712024f, 9.222456f);
	VOLUME::_0x39816F6F94F385AD(iLocal_631, 2763.792f, -1031.355f, 46.77443f, 0f, 0f, -0.624653f, 69.38274f, 16.03568f, 7.964019f);
	VOLUME::_0x39816F6F94F385AD(iLocal_631, 2728.395f, -1068.828f, 46.80749f, 0f, 0f, 179.1824f, 105.5484f, 62.22727f, 8.774147f);
	VOLUME::_0x39816F6F94F385AD(iLocal_631, 2785.364f, -1058.214f, 46.63797f, 0f, 0f, 89.47796f, 34.10864f, 25.3308f, 7.36563f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_631, 2783.674f, -1084.674f, 47.11552f, 0f, 0f, -37.88909f, 11.44402f, 18.43804f, 3.770358f);
	VOLUME::_0x39816F6F94F385AD(iLocal_631, 2677.399f, -1052.453f, 45.53098f, 0f, 0f, -33.10271f, 19.00153f, 27.72343f, 8.265499f);
	VOLUME::_0x39816F6F94F385AD(iLocal_631, 2681.971f, -1079.012f, 45.86315f, 0f, 0f, -77.70405f, 51.40699f, 30.2015f, 14.18493f);
	POPULATION::_0xB56D41A694E42E86(iLocal_631, 2048, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_631, 2048, 0, 0, -1, -1, 0);
	func_52();
	iLocal_681 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2502.495f, -1309.387f, 50.70366f, 0f, 0f, 0f, 17f, 9f, 7f, "sd_police_station");
	iLocal_682 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2502.091f, -1308.705f, 47.9537f, 0f, 0f, 0f, 16.88976f, 16.00587f, 10f, "SDN - m_volLawPoliceStationLoitering");
	VOLUME::_0x3EFABB21E14A6BD1(iLocal_682, 5, 1);
	iLocal_641 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2819.564f, -1331.075f, 46.45f, 0f, 0f, 49.75f, 8.176f, 6.124f, 2.869f, "SDN-m_volButcher");
	iLocal_642 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2817.843f, -1329.871f, 46.45f, 0f, 0f, 49.75f, 2.5f, 1.877f, 2f, "SDN-m_volButcherPrompt");
	VOLUME::_0xB469CFD9E065EB99(iLocal_641, 10008);
	iLocal_648 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2696.853f, -1353.716f, 50.90947f, -0.01f, 7E-06f, 39.03817f, 25f, 9.1f, 9f, "SDN - m_volMagicLanternTheatre");
	POPULATION::_0xB56D41A694E42E86(iLocal_648, 10208, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_648, 10208, 0, 0, -1, -1, 0);
	iLocal_671 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2832.552f, -1224.573f, 47.5f, 0f, 0f, 0f, 6.381909f, 6.088969f, 3.5f, "SDN-m_volTrapper");
	iLocal_672 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2832.5f, -1225.328f, 47.5f, 0f, 0f, 0f, 3f, 2f, 3f, "SDN-m_volTrapperPrompt");
	iLocal_673 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2832.5f, -1222.75f, 47.5f, 0f, 0f, 0f, 3f, 2.5f, 3f, "SDN-m_volTrapperOffLimits");
	iLocal_650 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictLoitering Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_650, 2401.805f, -1199.688f, 50.64869f, 0f, 0f, 89.35063f, 118.7466f, 27.85054f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_650, 2404.337f, -1183.499f, 50.6487f, 0f, 0f, 89.5351f, 8.550712f, 187.7067f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_650, 2461.883f, -1136.172f, 50.64869f, 0f, 0f, 0f, 278.0189f, 27.85054f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_650, 2493.894f, -1198.237f, 50.6487f, 0f, 0f, -179.2395f, 22.47914f, 148.257f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_650, 2311.967f, -1157.098f, 50.6487f, 0f, 0f, -2.1579f, 20.14263f, 77.43121f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_650, 2450.991f, -1255.936f, 50.6487f, 0f, 0f, 74.44216f, 17.99708f, 81.91428f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_650, 2404.273f, -1283.045f, 50.6487f, 0f, 0f, 162.6364f, 27.31752f, 67.13039f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_650, 2432.95f, -1310.865f, 50.6487f, 0f, 0f, 71.7864f, 17.99708f, 81.91428f, 75.92666f);
	iLocal_651[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2427.054f, -1284.265f, 49.2916f, 0f, 0f, -15.29399f, 23.856f, 58.70475f, 12.94626f, "SDN-m_volGardenDistrictTrespassing 0");
	iLocal_651[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 1 Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_651[1], 2448.448f, -1286.899f, 49.2916f, 0f, 0f, -15.29399f, 17.29098f, 48.36654f, 18.53969f);
	VOLUME::_0x39816F6F94F385AD(iLocal_651[1], 2456.016f, -1310.996f, 49.2916f, 0f, 0f, -15.29399f, 16.53504f, 5.606594f, 18.53969f);
	VOLUME::_0x39816F6F94F385AD(iLocal_651[1], 2455.733f, -1288.545f, 49.2916f, 0f, 0f, -178.5714f, 16.65417f, 45.1132f, 18.53969f);
	iLocal_651[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 2 Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_651[2], 2362.462f, -1272.869f, 49.2916f, 0f, 0f, -19.75965f, 60.68886f, 48.63572f, 18.53969f);
	VOLUME::_0x39816F6F94F385AD(iLocal_651[2], 2389.465f, -1278.762f, 49.2916f, 0f, 0f, 164.0191f, 13.08261f, 54.88486f, 18.53969f);
	VOLUME::_0x39816F6F94F385AD(iLocal_651[2], 2364.107f, -1246.863f, 49.2916f, 0f, 0f, -89.30434f, 15.33103f, 78.01559f, 18.53969f);
	VOLUME::_0x39816F6F94F385AD(iLocal_651[2], 2339.069f, -1267.846f, 49.2916f, 0f, 0f, -0.4259f, 28.2545f, 35.02214f, 18.52822f);
	iLocal_651[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 3 Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_651[3], 2361.655f, -1164.18f, 49.2916f, 0f, 0f, -90.15806f, 27.47045f, 82.17483f, 20.96592f);
	VOLUME::_0x39816F6F94F385AD(iLocal_651[3], 2354.933f, -1148.675f, 49.2916f, 0f, 0f, 75.14153f, 13.61488f, 64.51537f, 20.96592f);
	VOLUME::_0x39816F6F94F385AD(iLocal_651[3], 2331.474f, -1143.846f, 49.2916f, 0f, 0f, -90.15805f, 27.47045f, 21.4971f, 20.96592f);
	VOLUME::_0x39816F6F94F385AD(iLocal_651[3], 2344.552f, -1139.157f, 49.2916f, 0f, 0f, -111.0944f, 3.614755f, 17.73002f, 20.96592f);
	VOLUME::_0x39816F6F94F385AD(iLocal_651[3], 2345.342f, -1138.515f, 49.2916f, 0f, 0f, 39.12743f, 3.614755f, 17.73002f, 20.96592f);
	iLocal_651[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 4 Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_651[4], 2400.034f, -1058.885f, 49.2916f, 0f, 0f, 0.018814f, 55.618f, 80.51579f, 18.52822f);
	VOLUME::_0x39816F6F94F385AD(iLocal_651[4], 2401.558f, -1073.348f, 49.2916f, 0f, 0f, 0.018814f, 52.17577f, 99.82372f, 18.52822f);
	VOLUME::_0x39816F6F94F385AD(iLocal_651[4], 2401.558f, -1014.455f, 49.2916f, 0f, 0f, 0.018814f, 5.173525f, 9.729424f, 18.52822f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_651[4], 2401.313f, -1002.282f, 39.19f, 0f, 0f, 0f, 9.068625f, 9.340483f, 18.87085f);
	iLocal_651[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2451.604f, -1078.587f, 49.2916f, 0f, 0f, 0.018814f, 47.07628f, 90.20814f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 5");
	iLocal_651[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 6 Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_651[6], 2488.193f, -1058.567f, 49.2916f, 0f, 0f, 0.018814f, 24.72538f, 21.73822f, 18.52822f);
	VOLUME::_0x39816F6F94F385AD(iLocal_651[6], 2493.978f, -1092.539f, 49.2916f, 0f, 0f, 0.018814f, 37.74252f, 62.8319f, 18.52822f);
	iLocal_651[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2539.709f, -1096.017f, 49.2916f, 0f, 0f, 0.018814f, 52.81096f, 55.85768f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 7");
	iLocal_651[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2597.531f, -1096.083f, 49.2916f, 0f, 0f, 0.018814f, 30.5856f, 56.0564f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 8");
	iLocal_651[9] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2623.401f, -1074.223f, 49.2916f, 0f, 0f, 0.018814f, 43.08669f, 27.58172f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 9");
	iLocal_651[10] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 10 Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_651[10], 2629.527f, -1105.324f, 49.2916f, 0f, 0f, 0.018814f, 40.67762f, 37.41682f, 18.52822f);
	VOLUME::_0x39816F6F94F385AD(iLocal_651[10], 2651.13f, -1110.501f, 49.2916f, 0f, 0f, 0.018814f, 3.892076f, 27.00792f, 18.52822f);
	iLocal_651[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2453.628f, -1164.804f, 52.55637f, 0f, 0f, 179.9622f, 72.70865f, 27.57841f, 19.55484f, "SDN-m_volGardenDistrictTrespassing 11");
	iLocal_651[12] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 12 Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_651[12], 2479.08f, -1220.485f, 52.55637f, 0f, 0f, -179.7821f, 20.63473f, 59.85671f, 19.55484f);
	VOLUME::_0x39816F6F94F385AD(iLocal_651[12], 2471.073f, -1249.139f, 52.55637f, 0f, 0f, -16.01828f, 17.98121f, 4.191609f, 19.55484f);
	VOLUME::_0x39816F6F94F385AD(iLocal_651[12], 2465.776f, -1238.28f, 52.55637f, 0f, 0f, -89.74155f, 16.83455f, 6.001091f, 19.55484f);
	VOLUME::_0x39816F6F94F385AD(iLocal_651[12], 2468.223f, -1225.058f, 52.55637f, 0f, 0f, -114.8564f, 14.11476f, 6.010783f, 19.55484f);
	VOLUME::_0x39816F6F94F385AD(iLocal_651[12], 2484.649f, -1251.897f, 52.55637f, 0f, 0f, 178.8598f, 9.602062f, 4.226469f, 19.55484f);
	iVar0 = 0;
	while (iVar0 < iLocal_651)
	{
		VOLUME::_0x3EFABB21E14A6BD1(iLocal_651[iVar0], 2, 1);
		VOLUME::_0x3EFABB21E14A6BD1(iLocal_651[iVar0], 3, 1);
		iVar0++;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_666 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volBronteGuardedRegistration Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_666, 2351.493f, -1215.674f, 52.55637f, 0f, 0f, 179.9622f, 103.357f, 46.93462f, 19.55484f);
		VOLUME::_0x39816F6F94F385AD(iLocal_666, 2289.215f, -1216.538f, 45.98805f, 0f, 0f, 0f, 24.45309f, 6.611898f, 32.63914f);
		VOLUME::_0x39816F6F94F385AD(iLocal_666, 2271.021f, -1217.182f, 45.98805f, 0f, 0f, 0f, 17.01238f, 24.97074f, 32.63914f);
		iLocal_668 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volBronteGuardedThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_668, 2331.856f, -1216.377f, 44.63484f, 0f, 0f, 0f, 11.67815f, 5.418246f, 2.162155f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_668, 2337.601f, -1216.386f, 44.68037f, 0f, 0f, 0f, 1.159829f, 1.789089f, 1f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_668, 2326.144f, -1216.386f, 44.68037f, 0f, 0f, 0f, 1.159829f, 1.789089f, 1f);
		VOLUME::_0x39816F6F94F385AD(iLocal_668, 2379.45f, -1206.713f, 49.77138f, 0f, 0f, 0f, 11.96662f, 3.050557f, 10.67705f);
		VOLUME::_0x39816F6F94F385AD(iLocal_668, 2375.269f, -1216.244f, 48.15978f, 0f, 0f, 0f, 38.31001f, 18.0602f, 24.88261f);
		VOLUME::_0x39816F6F94F385AD(iLocal_668, 2379.45f, -1225.62f, 49.77138f, 0f, 0f, 0f, 11.96662f, 3.050557f, 10.67705f);
		VOLUME::_0x39816F6F94F385AD(iLocal_668, 2364.137f, -1231.286f, 48.31032f, 0f, 0f, 0f, 15.13832f, 2.382603f, 7.528201f);
		iLocal_667 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volBronteGuardedRestriction Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_667, iLocal_668);
		VOLUME::_0x39816F6F94F385AD(iLocal_667, 2351.483f, -1228.943f, 52.55637f, 0f, 0f, 179.9622f, 103.2097f, 20f, 19.55484f);
		VOLUME::_0x39816F6F94F385AD(iLocal_667, 2351.501f, -1203.041f, 52.55637f, 0f, 0f, 179.9622f, 103.2097f, 21.08849f, 19.55484f);
		VOLUME::_0x39816F6F94F385AD(iLocal_667, 2327.945f, -1216.194f, 52.55637f, 0f, 0f, 179.9622f, 56.37261f, 5.997283f, 19.55484f);
		VOLUME::_0x39816F6F94F385AD(iLocal_667, 2289.417f, -1216.377f, 45.98805f, 0f, 0f, 0f, 22.04649f, 5.418246f, 32.63914f);
		VOLUME::_0x39816F6F94F385AD(iLocal_667, 2271.021f, -1217.182f, 45.98805f, 0f, 0f, 0f, 15.4733f, 22.61529f, 32.63914f);
		VOLUME::_0x39816F6F94F385AD(iLocal_667, 2398.721f, -1216.24f, 52.55637f, 0f, 0f, 179.9622f, 8.560711f, 5.997283f, 19.55484f);
		VOLUME::_0x39816F6F94F385AD(iLocal_667, 2351.493f, -1215.559f, 51.74344f, 0f, 0.411779f, 179.9622f, 104.655f, 47.92646f, 10.28843f);
		sLocal_665 = "BRONTE";
		LAW::_CREATE_GUARD_ZONE(sLocal_665);
		LAW::_0x8C598A930F471938(sLocal_665, iLocal_666);
		LAW::_0x35815F372D43E1E5(sLocal_665, iLocal_667);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_665, iLocal_667);
		LAW::_0xA1B0E6301E2E02A6(sLocal_665, iLocal_668);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_665, 2376.87f, -1216.214f, 47.3213f);
		LAW::_0xA8A74AA79FB67159(sLocal_665, iLocal_666);
	}
	iLocal_770 = func_53(2834.069f, -1229.412f, 46.6618f, 0f, 0f, 0f, 18f, 18f, 18f, 1065353216 /* Float: 1f */);
	iLocal_772 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volBankWindowBlocking Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_772, 2644.869f, -1281.59f, 52.684f, 0f, 0f, 26f, 7.327f, 4.785f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_772, 2635.472f, -1286.07f, 52.58f, 0f, 0f, 26f, 6.885f, 4.545f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_772, 2633.45f, -1294.192f, 52.515f, 0f, 0f, 114f, 9.058f, 4.339f, 3f);
	iLocal_773 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volGunsmithWindowBlocking Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_773, 2707.66f, -1288.135f, 49.768f, 0f, 0f, 115.25f, 8.19f, 2.586f, 2.34f);
	return true;
}

bool func_13(int iParam0)
{
	iParam0 = iParam0;
	return !STREAMING::_0xCF45DF50C7775F2A();
}

void func_14(int iParam0)
{
	int iVar0[4];
	int iVar5;
	int iVar6[4];
	int iVar11[4];
	iParam0 = iParam0;
	func_54();
	if (__LIB_0__::func_2() == -1)
	{
		func_55();
		__LIB_3__::func_123(-516807739, 1);
		__LIB_3__::func_123(-777091906, 1);
		__LIB_3__::func_123(-875333368, 1);
		__LIB_3__::func_123(1313209843, 1);
		__LIB_3__::func_123(1291327218, 1);
		__LIB_3__::func_123(1587886668, 1);
		__LIB_3__::func_123(895866323, 1);
		__LIB_3__::func_123(1130131904, 1);
		__LIB_3__::func_123(-3733011, 1);
		__LIB_3__::func_123(913143609, 1);
		__LIB_3__::func_123(622515348, 1);
		__LIB_3__::func_123(-634437954, 1);
		__LIB_3__::func_123(-777462925, 1);
		__LIB_1__::func_408(945612176, 1, 0);
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(426813831) && !__LIB_1__::func_185(31))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(426813831, true);
		}
		__LIB_3__::func_123(joaat("DOOR_GALA_MAN_L1_FOYER_L"), 1);
		__LIB_3__::func_123(joaat("DOOR_GALA_MAN_L1_FOYER_R"), 1);
		__LIB_3__::func_123(957998097, 1);
		__LIB_3__::func_123(1440476271, 1);
		__LIB_3__::func_123(463894517, 1);
		__LIB_3__::func_123(895396725, 1);
		__LIB_3__::func_123(-43861138, 1);
		__LIB_3__::func_123(260726717, 1);
		__LIB_3__::func_123(-1864410491, 1);
		__LIB_3__::func_123(-2103132656, 1);
		__LIB_3__::func_123(515307058, 1);
		__LIB_3__::func_123(2049189737, 1);
		__LIB_3__::func_123(1214137310, 1);
		__LIB_3__::func_123(1462821251, 1);
		__LIB_3__::func_123(883203179, 1);
		__LIB_3__::func_123(1123170566, 1);
		__LIB_3__::func_123(287888768, 1);
		__LIB_3__::func_123(534737645, 1);
		__LIB_3__::func_123(-31117447, 1);
		__LIB_3__::func_123(681362779, 1);
		__LIB_3__::func_123(981199129, 1);
		__LIB_3__::func_123(-183337932, 1);
		__LIB_3__::func_123(-993485919, 1);
		__LIB_3__::func_123(714041173, 1);
		__LIB_3__::func_123(-120290336, 1);
		__LIB_3__::func_123(-443916980, 1);
		__LIB_3__::func_123(-213583679, 1);
		__LIB_3__::func_123(1881469563, 1);
		__LIB_3__::func_123(1072042494, 1);
		__LIB_3__::func_123(1282026246, 1);
		__LIB_3__::func_123(64755943, 1);
		iVar0[0] = joaat("DOOR_NEW_POLICE_CELL01");
		iVar0[1] = 1995743734;
		iVar0[2] = 1711767580;
		iVar0[3] = -1779376146;
		__LIB_14__::func_358(1);
		__LIB_14__::func_269(5, &iVar0, 2);
		iVar5 = 0;
		while (iVar5 < iVar0)
		{
			__LIB_1__::func_948(iVar0[iVar5], 1, 0, 0, 0, 0, 0, 0);
			iVar5++;
		}
		__LIB_3__::func_123(-1137392295, 1);
		__LIB_3__::func_123(-894606774, 1);
		__LIB_3__::func_123(1140042273, 1);
		__LIB_3__::func_123(1136437687, 1);
		__LIB_3__::func_123(-1248137864, 1);
		__LIB_3__::func_123(-165507760, 1);
		__LIB_3__::func_123(-637159859, 1);
		__LIB_3__::func_123(-926477360, 1);
		__LIB_3__::func_123(1716899875, 1);
		__LIB_3__::func_123(-1251534382, 1);
		__LIB_3__::func_123(-1716919724, 1);
		__LIB_3__::func_123(-1946335493, 1);
		__LIB_3__::func_123(2081859374, 1);
		__LIB_3__::func_123(1839303236, 1);
		__LIB_3__::func_123(1840778346, 1);
		__LIB_3__::func_123(2138484711, 1);
		__LIB_3__::func_123(-1267558038, 1);
		__LIB_3__::func_123(-961462809, 1);
		__LIB_3__::func_123(-2001944097, 1);
		__LIB_3__::func_123(-1696700862, 1);
		__LIB_3__::func_123(-17027456, 1);
		__LIB_3__::func_123(156648244, 1);
		__LIB_3__::func_123(-743286807, 1);
		__LIB_3__::func_123(-92962943, 1);
		__LIB_1__::func_948(-1677906128, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(-1497938780, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(777217026, 1, -1f, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(1236966084, 1, 1f, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(-1357945492, 1, 1f, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(-1657159231, 1, 0.9f, 0, 0, 0, 0, 0);
		__LIB_3__::func_123(4672147, 1);
		__LIB_3__::func_123(1466300623, 1);
		__LIB_3__::func_123(-17775075, 1);
		__LIB_3__::func_123(904082413, 1);
		__LIB_3__::func_123(1814232526, 1);
		__LIB_1__::func_948(1074183412, 1, 0.85f, 0, 0, 0, 0, 0);
		__LIB_3__::func_123(-1811333998, 1);
		__LIB_3__::func_123(619011656, 1);
		__LIB_3__::func_123(-1303437386, 1);
		__LIB_3__::func_123(922364198, 1);
		__LIB_3__::func_123(-1017427261, 1);
		iVar6[0] = 544106233;
		iVar6[1] = 340151973;
		iVar6[2] = -317441493;
		iVar6[3] = -2128813450;
		__LIB_1__::func_948(544106233, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(340151973, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(534819197, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(836064614, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(2053545201, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(1449678065, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(-826896261, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(627391959, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(-317441493, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(-2128813450, 1, 0, 0, 0, 0, 0, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(544106233, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(340151973, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(534819197, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(836064614, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(2053545201, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(1449678065, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(-826896261, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(627391959, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(-317441493, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(-2128813450, 0);
		__LIB_18__::func_799(5, 0, iLocal_624, &iVar6, -1, 50);
		__LIB_18__::func_799(9, 0, iLocal_624, &iVar6, -1, 50);
		__LIB_18__::func_799(6, 0, iLocal_624, &iVar6, -1, 50);
		__LIB_18__::func_799(11, 0, iLocal_624, &iVar6, -1, 50);
		__LIB_18__::func_799(13, 0, iLocal_624, &iVar6, -1, 50);
		__LIB_18__::func_799(14, 0, iLocal_624, &iVar6, -1, 50);
		__LIB_18__::func_799(15, 0, iLocal_624, &iVar6, -1, 50);
		__LIB_18__::func_799(7, 0, iLocal_624, &iVar6, -1, 50);
		__LIB_18__::func_799(8, 0, iLocal_624, &iVar6, -1, 50);
		__LIB_18__::func_799(16, 0, iLocal_624, &iVar6, -1, 50);
		__LIB_18__::func_799(17, 0, iLocal_624, &iVar6, -1, 50);
		__LIB_18__::func_799(18, 0, iLocal_624, &iVar6, -1, 50);
		__LIB_18__::func_799(19, 0, iLocal_624, &iVar6, -1, 50);
		__LIB_18__::func_799(12, 0, iLocal_624, &iVar6, -1, 50);
		__LIB_18__::func_799(10, 0, iLocal_624, &iVar6, -1, 50);
		__LIB_18__::func_799(20, 0, iLocal_624, &iVar6, -1, 50);
		__LIB_18__::func_799(0, 0, iLocal_624, &iVar6, 0, 200);
		__LIB_18__::func_799(1, 0, iLocal_624, &iVar6, 1, 200);
		__LIB_18__::func_799(4, 0, iLocal_624, &iVar6, 2, 200);
		__LIB_18__::func_799(2, 0, iLocal_624, &iVar6, 3, 200);
		__LIB_18__::func_799(3, 0, iLocal_624, &iVar6, 4, 200);
		if (!__LIB_0__::func_898(559573222))
		{
			iVar11[0] = -2034821814;
			iVar11[1] = -786191838;
			iVar11[2] = -1518382426;
			iVar11[3] = -223351546;
		}
		else
		{
			iVar11[0] = 235202295;
			iVar11[1] = -71941542;
			iVar11[2] = -723815263;
			iVar11[3] = 1920184275;
		}
		__LIB_1__::func_948(iVar11[0], 1, 0, 0, 0, 0, 0, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(iVar11[0], 0);
		__LIB_1__::func_948(iVar11[1], 1, 0, 0, 0, 0, 0, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(iVar11[1], 0);
		__LIB_1__::func_948(iVar11[2], 1, 0, 0, 0, 0, 0, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(iVar11[2], 0);
		__LIB_1__::func_948(iVar11[3], 1, 0, 0, 0, 0, 0, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(iVar11[3], 0);
		__LIB_4__::func_389(625976453, 1, 0);
		__LIB_4__::func_389(1929232348, 1, 0);
		__LIB_0__::func_401(-278745837);
		__LIB_18__::func_799(21, 1, iLocal_648, &iVar11, -1, 50);
		__LIB_18__::func_799(22, 1, iLocal_648, &iVar11, -1, 50);
		__LIB_18__::func_799(23, 1, iLocal_648, &iVar11, -1, 50);
		__LIB_18__::func_799(24, 1, iLocal_648, &iVar11, -1, 50);
		__LIB_18__::func_799(25, 1, iLocal_648, &iVar11, -1, 50);
		__LIB_18__::func_799(26, 2, iLocal_648, &iVar11, -1, 50);
		__LIB_18__::func_799(27, 2, iLocal_648, &iVar11, -1, 50);
		__LIB_18__::func_799(28, 2, iLocal_648, &iVar11, -1, 50);
		__LIB_18__::func_799(29, 2, iLocal_648, &iVar11, -1, 50);
		__LIB_18__::func_799(30, 2, iLocal_648, &iVar11, -1, 50);
		if (__LIB_0__::func_28())
		{
			bLocal_602 = (!__LIB_1__::func_185(34) || __LIB_1__::func_185(43));
		}
		if (bLocal_602)
		{
			__LIB_0__::func_803(-785605431);
		}
		else
		{
			__LIB_0__::func_804(-785605431);
		}
		__LIB_4__::func_919(&uLocal_719, 947, 12, "", joaat("CHUCKWAGON000X"), 2828.576f, -1331.005f, 46.3125f, 146.2f, 0, 0);
		__LIB_4__::func_919(&uLocal_739, 936, 13, "", joaat("WAGONDAIRY01X"), 2811.872f, -1280.704f, 47.0827f, -126.16f, 0, 0);
	}
	else
	{
		__LIB_3__::func_124(-516807739, 1);
		__LIB_3__::func_124(-777091906, 1);
		__LIB_3__::func_124(-875333368, 1);
		__LIB_3__::func_124(1313209843, 1);
	}
	__LIB_17__::func_615(0, "", "", "", "", 2741.693f, -1265.625f, 79.65331f, "SD_SINGLE_TOLL");
	__LIB_17__::func_632(9, 0, 0);
	__LIB_17__::func_632(12, 0, 0);
	__LIB_17__::func_632(19, 0, 0);
	__LIB_1__::func_408(-1080627546, 1, 0);
	__LIB_1__::func_408(-1847672446, 1, 0);
}

bool func_15(int iParam0)
{
	bool bVar0;
	bVar0 = true;
	HUD::_TEXT_DATABASE_REQUEST("SCSCAUD");
	HUD::_TEXT_DATABASE_REQUEST("SCSFAUD");
	HUD::_TEXT_DATABASE_REQUEST("STDRGAU");
	HUD::_TEXT_DATABASE_REQUEST("RESAMAU");
	HUD::_TEXT_DATABASE_REQUEST("RERIAUD");
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SCSCAUD"))
	{
		bVar0 = false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SCSFAUD"))
	{
		bVar0 = false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("STDRGAU"))
	{
		bVar0 = false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("RESAMAU"))
	{
		bVar0 = false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("RERIAUD"))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_73();
	}
	return bVar0;
}

void func_22()
{
	__LIB_17__::func_625(0, iLocal_627);
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_14__::func_351(0);
	}
}

void func_24()
{
	vector3 vVar0;
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	__LIB_1__::func_65(27, &vVar0, 1);
	__LIB_1__::func_806(&vVar0, 1, 1);
	__LIB_1__::func_65(11, &vVar0, 1);
	__LIB_1__::func_806(&vVar0, 1, 1);
}

void func_25()
{
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (__LIB_0__::func_2() == 0)
		{
		}
	}
}

void func_26()
{
	__LIB_17__::func_626(2, 2633.455f, -1226.72f, 52.3796f, iLocal_632, 5);
	__LIB_17__::func_626(1, 2796.278f, -1168.035f, 46.924f, iLocal_633, 5);
}

void func_27(int iParam0)
{
	__LIB_6__::func_594(0, 140, iLocal_608, iParam0, iLocal_609, iLocal_610, 12, 35f, 0, 0);
	__LIB_2__::func_807(0, -571840810, 0, 0);
	__LIB_2__::func_807(0, 79213682, 0, 0);
	__LIB_2__::func_807(0, 1104407261, 0, 0);
	__LIB_2__::func_807(0, 994323006, 0, 0);
	__LIB_2__::func_807(0, 82263429, 0, 0);
	__LIB_2__::func_775(0, 2725.972f, -1225.743f, 49.3667f, 133.1164f);
	__LIB_6__::func_594(3, 200, iLocal_611, iParam0, iLocal_612, iLocal_614, 12, -1082130432 /* Float: -1f */, 0, 0);
	__LIB_2__::func_807(3, -180076077, 0, 0);
	__LIB_2__::func_807(3, 1051874490, 0, 0);
	__LIB_2__::func_807(3, -308726915, 0, 0);
	__LIB_2__::func_807(3, -60894968, 0, 0);
	__LIB_4__::func_898(3, iLocal_613);
	__LIB_2__::func_775(3, 2829.407f, -1321.891f, 45.6826f, 335.9946f);
	__LIB_6__::func_594(4, 219, iLocal_615, iParam0, iLocal_635, iLocal_636, 44, -1082130432 /* Float: -1f */, 0, 0);
	__LIB_2__::func_807(4, 1687619371, 0, 0);
	__LIB_2__::func_775(4, 2859.97f, -1204.189f, 48.5888f, 271.4583f);
	__LIB_6__::func_594(6, 202, iLocal_604, iParam0, iLocal_605, iLocal_607, 20, 35f, 0, 0);
	__LIB_2__::func_807(6, 1057071735, 0, 0);
	__LIB_2__::func_807(6, -1011766303, 0, 0);
	__LIB_4__::func_898(6, iLocal_606);
	__LIB_2__::func_775(6, 2711.102f, -1286.316f, 48.6304f, 207.0424f);
	__LIB_1__::func_948(joaat("DOOR_NEW_GUNSHOP_INT_BACK"), 1, 0f, 0, 0, 0, 0, 1);
	__LIB_6__::func_594(7, 142, iLocal_623, iParam0, iLocal_621, iLocal_622, 12, -1082130432 /* Float: -1f */, 0, 0);
	__LIB_2__::func_807(7, -1683351620, 0, 0);
	__LIB_2__::func_807(7, -548537711, 0, 0);
	__LIB_2__::func_807(7, -843327635, 0, 0);
	__LIB_2__::func_775(7, 2558.615f, -1164.232f, 52.6835f, 89.2214f);
	__LIB_6__::func_594(8, 201, iLocal_616, iParam0, iLocal_617, 0, 4098, -1082130432 /* Float: -1f */, 0, 0);
	__LIB_2__::func_807(8, 1410192354, 0, 0);
	__LIB_2__::func_807(8, 1708357485, 0, 0);
	__LIB_2__::func_807(8, -910885330, 0, 0);
	__LIB_2__::func_807(8, -1937144872, 0, 0);
	__LIB_2__::func_807(8, 527035651, 0, 0);
	__LIB_2__::func_807(8, 29962690, 0, 0);
	__LIB_4__::func_898(8, iLocal_618);
	__LIB_6__::func_594(12, 241, iLocal_643, iParam0, iLocal_644, 0, 1, (12.5f * 4f), 0, 0);
	__LIB_6__::func_594(13, 243, iLocal_645, iParam0, 0, 0, 1, (12.5f * 4f), 0, 0);
	__LIB_6__::func_594(14, 242, iLocal_646, iParam0, iLocal_647, 0, 1, (12.5f * 4f), 0, 0);
	__LIB_6__::func_350(49, 13, 1, 1);
	__LIB_6__::func_350(50, 14, 1, 1);
	VOLUME::_0xB469CFD9E065EB99(iLocal_643, 10113);
	VOLUME::_0xB469CFD9E065EB99(iLocal_645, 10114);
	VOLUME::_0xB469CFD9E065EB99(iLocal_646, 10115);
	__LIB_6__::func_594(2, 141, iLocal_637, iParam0, iLocal_638, iLocal_639, 491520, (12.5f * 2f), 0, iLocal_640);
	__LIB_2__::func_807(2, 286519629, 0, 0);
	__LIB_2__::func_807(2, 556568958, 0, 0);
	__LIB_2__::func_807(2, 1071894252, 0, 0);
	__LIB_2__::func_807(2, 1299147267, 0, 0);
	__LIB_2__::func_807(2, 1546618759, 0, 0);
	__LIB_2__::func_807(2, 1683822530, 0, 0);
	__LIB_2__::func_807(2, 1437137494, 0, 0);
	__LIB_2__::func_807(2, -1898189633, 0, 0);
	__LIB_6__::func_594(10, 139, iLocal_641, iParam0, iLocal_642, 0, 460, -1082130432 /* Float: -1f */, 0, 0);
	__LIB_2__::func_782(iParam0);
	__LIB_6__::func_594(9, 205, iLocal_625, iParam0, 0, 0, 2, -1082130432 /* Float: -1f */, 0, 0);
	__LIB_14__::func_352(9, 1);
	__LIB_14__::func_352(9, 16384);
	__LIB_11__::func_271(9, 1);
	__LIB_2__::func_807(9, joaat("SD_CARRIAGE_ENTR_01_L"), 1f, 1);
	__LIB_2__::func_807(9, joaat("SD_CARRIAGE_ENTR_01_R"), 1f, 1);
	__LIB_2__::func_807(9, 726257907, -1f, 1);
	__LIB_2__::func_807(9, 229021101, -1f, 1);
	__LIB_2__::func_807(9, 1234907076, 1f, 1);
	__LIB_2__::func_807(9, 1388233219, -1f, 1);
	__LIB_2__::func_807(9, 1797818933, -1f, 1);
	__LIB_2__::func_807(9, 865213245, 0, 0);
	__LIB_1__::func_948(417838256, 1, 0, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-473281914, 1, 0, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-165417159, 1, 0, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-682315365, 1, 0, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-1451043336, 1, 0, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(752868528, 1, 0, 0, 0, 0, 0, 0);
	PERSCHAR::_0x187D65F3AEC5D679(joaat("GLO_WILDERNESS_TRAPPER"), "SaintDenis/SDN_MARKET_VENDOR2");
	if (PERSCHAR::_0x800DF3FC913355F3(PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_WILDERNESS_TRAPPER"))))
	{
		PERSCHAR::_0xD4B614179BCD0654(PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_WILDERNESS_TRAPPER")));
	}
	__LIB_6__::func_594(18, 952, iLocal_671, iParam0, iLocal_672, iLocal_673, 12, -1082130432 /* Float: -1f */, 0, 0);
	__LIB_2__::func_783();
	VOLUME::_0xB469CFD9E065EB99(iLocal_671, 10116);
	__LIB_6__::func_594(22, 251, iLocal_619, iParam0, iLocal_619, 0, 4, 60f, 0, 0);
	__LIB_2__::func_785();
	if (__LIB_14__::func_263())
	{
		__LIB_4__::func_932(51, 1);
	}
	else
	{
		__LIB_4__::func_932(51, 0);
	}
	__LIB_14__::func_253(&uLocal_695, 208, iLocal_627, iLocal_628, iLocal_629);
	__LIB_6__::func_594(21, 143, iLocal_675, iParam0, iLocal_676, 0, 2, -1082130432 /* Float: -1f */, 0, 0);
	__LIB_2__::func_807(21, 123675751, 0, 0);
	__LIB_2__::func_807(21, 1079875175, 0, 0);
	__LIB_3__::func_123(joaat("NEW_TROLLEYDEPOT_09"), 1);
}

void func_28(int iParam0)
{
	iParam0 = iParam0;
	__LIB_2__::func_812(256, iLocal_681, 1);
	__LIB_2__::func_812(202, iLocal_634, 1);
	__LIB_2__::func_812(140, iLocal_608, 1);
	__LIB_2__::func_812(200, iLocal_611, 1);
	__LIB_2__::func_812(219, iLocal_615, 1);
	__LIB_2__::func_812(142, iLocal_623, 1);
	__LIB_2__::func_812(201, iLocal_616, 1);
	__LIB_2__::func_812(141, iLocal_637, 1);
	__LIB_2__::func_812(139, iLocal_641, 1);
	__LIB_2__::func_812(205, iLocal_625, 1);
	__LIB_2__::func_812(231, iLocal_669, 1);
	__LIB_2__::func_812(148, iLocal_674, 1);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_674, 3, 1);
}

void func_31(int iParam0)
{
	__LIB_2__::func_759(1f, 0f, 0f, 0f);
	FLOCK::SET_SPECIES_TUNING_BOOL_PARAM(joaat("SPECIES_HORSE"), 0, 48, true);
	iLocal_683[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionAgriculturalDistrict Agg");
	VOLUME::_0xBCE668AAF83608BE(iLocal_683[0], 2434.277f, -864.2632f, 100.0153f, 0f, 0f, 99.80928f, 76.1365f, 77.5857f, 75f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_683[0], 2711.787f, -748.9066f, 100.009f, 0f, 0f, -19f, 136.4152f, 127.1571f, 75f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[0], 2735.065f, -887.9319f, 99.99515f, 0f, 0f, 110.7696f, 246.8316f, 261.0551f, 150f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[0], 2580.572f, -814.5414f, 100.007f, 0f, 0f, -172.8734f, 256.6486f, 158.023f, 150f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[0], 2552.832f, -875.643f, 99.99637f, 0f, 0f, 92.39069f, 246.8316f, 169.3834f, 150f);
	iLocal_683[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionStFrancesSlums Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_683[1], 2785.521f, -1056.387f, 100.0029f, 0f, 0f, 4.060894f, 91.00164f, 108.2891f, 150f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_683[1], 2817.182f, -1129.093f, 100.0028f, 0f, 0f, -7.581066f, 33.52557f, 40.72814f, 75f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[1], 2857.705f, -1075.989f, 100.0023f, 0f, 0f, 13.5399f, 134.8914f, 242.3996f, 150f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[1], 2706.777f, -1061.12f, 100.0029f, 0f, 0f, 0.041871f, 83.65329f, 91.41635f, 150f);
	iLocal_683[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionMarketDistrict Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_683[2], 2818.136f, -1302.344f, 100.0018f, 0f, 0f, 52.15482f, 136.6019f, 105.5725f, 150f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[2], 2891.593f, -1292.117f, 99.99527f, 0f, 0f, 46.92012f, 94.54254f, 89.92535f, 150f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[2], 2839.955f, -1372.414f, 99.99564f, 0f, 0f, 46.92012f, 94.54254f, 124.4491f, 150f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[2], 2875.316f, -1240.993f, 100.0051f, 0f, 0f, 4.213234f, 159.0249f, 159.6049f, 150f);
	iLocal_683[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionWarehouseDistrict Agg");
	VOLUME::_0xBCE668AAF83608BE(iLocal_683[3], 2366.9f, -1476.441f, 100.0029f, 0f, 0f, -19f, 157.3157f, 152.8212f, 75f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_683[3], 2230.301f, -1436.293f, 100.0025f, 0f, 0f, -19f, 74.26994f, 125.4343f, 75f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[3], 2576.589f, -1518.787f, 99.99567f, 0f, 0f, 108.441f, 195.968f, 141.0048f, 150f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_683[3], 2545.769f, -1422.399f, 99.99963f, 0f, 0f, -0.058653f, 90.14611f, 97.88065f, 75f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[3], 2531.97f, -1414.802f, 99.99918f, 0f, 0f, -163.683f, 153.2008f, 51.76601f, 150f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_683[3], 2491.278f, -1621.654f, 99.99963f, 0f, 0f, -0.058653f, 90.14611f, 97.88065f, 75f);
	iLocal_683[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionCommercialDistrict Agg");
	VOLUME::_0xBCE668AAF83608BE(iLocal_683[4], 2742.656f, -1277.652f, 99.99838f, 0f, 0f, 152.9659f, 35.11092f, 35.81115f, 75f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[4], 2777.891f, -1452.619f, 100.0045f, 0f, 0f, 47.08032f, 120.0883f, 101.6027f, 150f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[4], 2718.392f, -1463.461f, 99.99609f, 0f, 0f, 21.14701f, 189.0947f, 206.6733f, 150f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[4], 2504.361f, -1300.615f, 100.0019f, 0f, 0f, 1.178798f, 82.72056f, 96.96688f, 150f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[4], 2574.647f, -1299.168f, 100.0019f, 0f, 0f, 1.178798f, 82.72056f, 96.96688f, 150f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[4], 2666.968f, -1316.806f, 100.0025f, 0f, 0f, 21.48862f, 147.3396f, 167.8958f, 150f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[4], 2773.729f, -1523.972f, 99.99609f, 0f, 0f, 21.14701f, 100.9043f, 86.45067f, 150f);
	iLocal_683[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionOldQuarter Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_683[5], 2794.772f, -1168.501f, 99.99721f, 0f, 0f, -23.73808f, 40.52186f, 22.18659f, 150f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[5], 2724.767f, -1177.132f, 99.99606f, 0f, 0f, -0.344003f, 131.9037f, 145.4713f, 150f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[5], 2648.325f, -1217.937f, 99.99631f, 0f, 0f, 13.19646f, 112.413f, 48.05493f, 150f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[5], 2638.866f, -1187.82f, 99.99606f, 0f, 0f, -0.344003f, 139.1532f, 82.29633f, 150f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[5], 2559.47f, -1204.827f, 99.99649f, 0f, 0f, 91.19704f, 111.5756f, 115.1564f, 150f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_683[5], 2782.788f, -1204.586f, 100.0032f, 0f, 0f, -4.684483f, 40.16883f, 52.17526f, 75f);
	iLocal_683[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionMansionDistrict Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_683[6], 2274.675f, -1210.538f, 100f, 0f, 0f, -89.39697f, 61.03426f, 73.05703f, 150f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[6], 2347.278f, -1207.533f, 100f, 0f, 0f, 0f, 116.7747f, 179.4705f, 150f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[6], 2418.939f, -1287.882f, 100f, 0f, 0f, 168.6711f, 109.4838f, 85.72875f, 152.763f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[6], 2485.194f, -1067.418f, 100f, 0f, 0f, 0f, 359.5392f, 180.9321f, 150f);
	VOLUME::_0x39816F6F94F385AD(iLocal_683[6], 2446.779f, -1199.126f, 100f, 0f, 0f, -89.39697f, 124.0142f, 103.0166f, 150f);
}

void func_34(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	__LIB_2__::func_766(uParam1, iLocal_603, 1);
	__LIB_2__::func_766(uParam1, iLocal_604, 2);
	__LIB_2__::func_766(uParam1, iLocal_608, 2);
	__LIB_2__::func_766(uParam1, iLocal_611, 2);
	__LIB_2__::func_766(uParam1, iLocal_615, 2);
	__LIB_2__::func_766(uParam1, iLocal_623, 2);
	__LIB_2__::func_766(uParam1, iLocal_630, 10);
	__LIB_2__::func_766(uParam1, iLocal_641, 2);
}

void func_35(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	__LIB_1__::func_939();
	__LIB_4__::func_920(0, joaat("NBX_CIVILIANS"));
	__LIB_4__::func_920(2, joaat("NBX_POLICE"));
}

bool func_38(int iParam0)
{
	iParam0 = iParam0;
	switch (iLocal_771)
	{
		case 0:
			func_102();
			func_103(1);
			break;
		case 1:
			__LIB_19__::func_60();
			func_103(2);
			break;
		case 2:
			func_105();
			func_103(3);
			break;
		case 3:
			func_106();
			func_103(4);
			break;
		case 4:
			__LIB_19__::func_61(5);
			func_103(5);
			break;
		case 5:
			func_108();
			func_103(6);
			break;
		case 6:
			func_109();
			func_110();
			func_103(7);
			break;
		case 7:
			func_111();
			func_103(8);
			break;
		case 8:
			func_112();
			if (__LIB_2__::func_803(22, &iLocal_694))
			{
				__LIB_14__::func_264(iLocal_694);
			}
			func_103(9);
			break;
		case 9:
			if (!__LIB_2__::func_776())
			{
				func_116(&Local_177);
			}
			else if (__LIB_3__::func_563(6, 43) && __LIB_14__::func_126(43, 1))
			{
				__LIB_14__::func_353(5, 4, 8);
			}
			func_103(0);
			break;
	}
	func_120();
	func_121();
	__LIB_6__::func_928(&uLocal_719);
	__LIB_6__::func_928(&uLocal_739);
	func_123(&uLocal_695);
	__LIB_14__::func_265(iLocal_772);
	return false;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		func_142();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_777, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_777, 4);
		__LIB_0__::func_25(iLocal_777, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_144(iLocal_777);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_17__::func_627(iLocal_777);
		__LIB_2__::func_819(iLocal_777);
		__LIB_2__::func_755(iLocal_777);
		if (!__LIB_2__::func_756(iLocal_777, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_47()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_649))
	{
		iLocal_649 = VOLUME::_CREATE_VOLUME_BOX(2638.124f, -1222.767f, 59.76551f, 0f, 0f, 0f, 6.467232f, 5.443256f, 2.511638f);
	}
	__LIB_14__::func_361(9, 2638.124f, -1222.767f, 59.76551f, 0f, iLocal_649);
}

void func_52()
{
	int iVar0;
	iLocal_632 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSaloonFancyInterior");
	iVar0 = VOLUME::_CREATE_VOLUME_BOX(2629.396f, -1221.905f, 54.83224f, 0f, 0f, -135.58f, 3.110129f, 1.920147f, 4.694317f);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_632, iVar0);
	iVar0 = VOLUME::_CREATE_VOLUME_BOX(2628.751f, -1228.086f, 54.83224f, 0f, 0f, 179.42f, 2.229593f, 11.71116f, 4.694317f);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_632, iVar0);
	iVar0 = VOLUME::_CREATE_VOLUME_BOX(2635.506f, -1227.165f, 54.83224f, 0f, 0f, 179.42f, 11.64868f, 13.72192f, 4.694317f);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_632, iVar0);
	iLocal_633 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2796.705f, -1167.971f, 48.56161f, 0f, 0f, -120.25f, 13.49097f, 10.18626f, 3.324371f, "volSaloonSlumInterior");
}

int func_53(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_86(vParam0))
	{
		return -1;
	}
	if (__LIB_0__::func_86(vParam6))
	{
		return -1;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!__LIB_14__::func_345(iVar0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 != -1)
	{
		Global_43894[iVar1] = VOLUME::_CREATE_VOLUME_CYLINDER(vParam0, vParam3, vParam6);
		Global_43894.f_6[iVar1] = iParam9;
		return iVar1;
	}
	return -1;
}

void func_54()
{
	if (!__LIB_0__::func_898(-789397228))
	{
		if (!Global_1934765.f_295)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_GRANDKORRIGANBOAT"), 3290f, -1310f, 0, 0);
			Global_1934765.f_295 = 1;
			MAP::_0xD8C7162AB2E2AF45(1944800674);
		}
	}
	else if (Global_1934765.f_295)
	{
		MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_GRANDKORRIGANBOAT"));
		Global_1934765.f_295 = 0;
		MAP::_MAP_DISCOVERY_SET_ENABLED(1944800674);
	}
	if (__LIB_0__::func_898(1358491857))
	{
		if (!Global_1934765.f_294)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_GRANDKORRIGANBOATDOCKED"), 2870f, -1400f, 0, 0);
			Global_1934765.f_294 = 1;
			MAP::_0xD8C7162AB2E2AF45(-296815465);
		}
	}
	else if (Global_1934765.f_294)
	{
		MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_GRANDKORRIGANBOATDOCKED"));
		Global_1934765.f_294 = 0;
		MAP::_MAP_DISCOVERY_SET_ENABLED(-296815465);
	}
}

void func_55()
{
	int iVar0;
	iVar0 = 5;
	uLocal_584[0] = VOLUME::_0x00BBF7CEAE8C666A(2779.445f, -1215.031f, 45.01f, 31f, iVar0, 16384);
	uLocal_584[1] = VOLUME::_0x00BBF7CEAE8C666A(2781.572f, -1305.132f, 46.713f, 18f, iVar0, 16384);
	uLocal_584[2] = VOLUME::_0x00BBF7CEAE8C666A(2641.416f, -1409.487f, 45.378f, 10f, iVar0, 16384);
	uLocal_584[3] = VOLUME::_0x00BBF7CEAE8C666A(2591.129f, -1465.692f, 45.378f, 16f, iVar0, 16384);
	uLocal_584[4] = VOLUME::_0x00BBF7CEAE8C666A(2606.294f, -1448.95f, 48.258f, 16f, iVar0, 16384);
	uLocal_584[5] = VOLUME::_0x00BBF7CEAE8C666A(2629.197f, -1451.147f, 49.654f, 25f, iVar0, 16384);
	uLocal_584[6] = VOLUME::_0x00BBF7CEAE8C666A(2824.326f, -1255.869f, 49.654f, 22f, iVar0, 16384);
	uLocal_584[7] = VOLUME::_0x00BBF7CEAE8C666A(2538.228f, -1449.766f, 45.378f, 16f, iVar0, 16384);
	uLocal_584[8] = VOLUME::_0x00BBF7CEAE8C666A(2505.081f, -1388.869f, 45.604f, 13f, iVar0, 16384);
	uLocal_584[9] = VOLUME::_0x00BBF7CEAE8C666A(2532.417f, -1386.635f, 45.604f, 20f, iVar0, 16384);
	uLocal_584[10] = VOLUME::_0x00BBF7CEAE8C666A(2545.552f, -1317.497f, 47.647f, 22f, iVar0, 16384);
	uLocal_584[11] = VOLUME::_0x00BBF7CEAE8C666A(2315.248f, -1215.141f, 45.604f, 28f, iVar0, 16384);
	uLocal_584[12] = VOLUME::_0x00BBF7CEAE8C666A(2339.544f, -1213.893f, 45.604f, 30f, iVar0, 16384);
	uLocal_584[13] = VOLUME::_0x00BBF7CEAE8C666A(2360.972f, -1214.77f, 45.604f, 28f, iVar0, 16384);
	uLocal_584[14] = VOLUME::_0x00BBF7CEAE8C666A(2385.62f, -1214.77f, 45.604f, 28f, iVar0, 16384);
	uLocal_584[15] = VOLUME::_0x00BBF7CEAE8C666A(2312.345f, -1536.102f, 42.89f, 25f, iVar0, 16384);
	uLocal_584[16] = VOLUME::_0x00BBF7CEAE8C666A(2337.627f, -1536.506f, 43.051f, 25f, iVar0, 16384);
}

void func_73()
{
	func_181(&uLocal_143);
	func_182();
	Global_1935183.f_29 = 3;
}

void func_102()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_683[iVar0]))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_683[iVar0], false, 0))
			{
				iVar1 = iVar0;
				if (iVar0 == 0)
				{
					bLocal_680 = true;
				}
				else
				{
					bLocal_680 = false;
				}
			}
		}
		iVar0++;
	}
	if (bLocal_680)
	{
		if (__LIB_17__::func_497() != joaat("LAW_REGION_SAINT_DENIS_RURAL"))
		{
			func_242(joaat("LAW_REGION_SAINT_DENIS_RURAL"), -1);
		}
	}
	else if (__LIB_17__::func_497() != joaat("LAW_REGION_SAINT_DENIS"))
	{
		func_242(joaat("LAW_REGION_SAINT_DENIS"), -1);
	}
	if (iVar1 != iLocal_679)
	{
		iLocal_679 = iVar1;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_650))
	{
		if (__LIB_8__::func_837(14))
		{
			if (VOLUME::_0xCA5C90D40665D5CE(iLocal_650, 0) || VOLUME::_0xCA5C90D40665D5CE(iLocal_650, 1))
			{
				VOLUME::_0x3EFABB21E14A6BD1(iLocal_650, 0, 0);
				VOLUME::_0x3EFABB21E14A6BD1(iLocal_650, 1, 0);
			}
		}
		else if (!VOLUME::_0xCA5C90D40665D5CE(iLocal_650, 0) || !VOLUME::_0xCA5C90D40665D5CE(iLocal_650, 1))
		{
			VOLUME::_0x3EFABB21E14A6BD1(iLocal_650, 0, 1);
			VOLUME::_0x3EFABB21E14A6BD1(iLocal_650, 1, 1);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_1__::func_334(256)))
	{
		if (!PED::GET_PED_CONFIG_FLAG(__LIB_1__::func_334(256), 168, true))
		{
			PED::SET_PED_CONFIG_FLAG(__LIB_1__::func_334(256), 168, true);
		}
	}
}

void func_103(int iParam0)
{
	iLocal_771 = iParam0;
}

void func_105()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_669))
	{
		return;
	}
	if (__LIB_2__::func_117(264))
	{
		if (!bLocal_670)
		{
			VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_669, 3, 1);
			bLocal_670 = true;
		}
	}
	else if (bLocal_670)
	{
		VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_669, 3, 0);
		bLocal_670 = false;
	}
}

void func_106()
{
	if (!__LIB_0__::func_296(0, 0, 1))
	{
		if (__LIB_3__::func_751(27) && !__LIB_2__::func_774(27))
		{
			if (!bLocal_691)
			{
				__LIB_3__::func_123(-399528504, 1);
				__LIB_3__::func_123(804086151, 1);
				bLocal_691 = true;
			}
		}
		else if (!__LIB_8__::func_714(9, joaat("TSTAG_LOCKDOWN_SALOON"), 1))
		{
			if (bLocal_691)
			{
				__LIB_3__::func_124(-399528504, 1);
				__LIB_3__::func_124(804086151, 1);
				bLocal_691 = false;
			}
		}
	}
}

void func_108()
{
	if (__LIB_2__::func_776() && !__LIB_0__::func_383())
	{
		if (__LIB_0__::func_898(522677506))
		{
			__LIB_0__::func_804(522677506);
		}
	}
	else if (!__LIB_0__::func_898(522677506))
	{
		__LIB_0__::func_803(522677506);
	}
}

void func_109()
{
	int iVar0;
	int iVar1;
	iVar0 = 250;
	iVar1 = __LIB_1__::func_334(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (bLocal_692)
		{
			bLocal_692 = false;
		}
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		if (((!bLocal_692 && AUDIO::_0xBE28DB99556FF8D9(iVar1) != 0) && !__LIB_2__::func_763(iVar0, 0)) && PED::_IS_PED_USING_SCENARIO_HASH(iVar1, joaat("PROP_HUMAN_PIANO")))
		{
			AUDIO::_0x8E901B65206C2D3E(iVar1);
			AUDIO::_0xB93A769B8B726950(iVar1, -1542215752);
			AUDIO::_0xC4CFCE4C656EF480(iVar1);
			bLocal_692 = true;
		}
		else if (bLocal_692 && !PED::_IS_PED_USING_SCENARIO_HASH(iVar1, joaat("PROP_HUMAN_PIANO")))
		{
			bLocal_692 = false;
		}
	}
}

void func_110()
{
	int iVar0;
	int iVar1;
	iVar0 = 289;
	iVar1 = __LIB_1__::func_334(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (bLocal_693)
		{
			bLocal_693 = false;
		}
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		if (((!bLocal_693 && AUDIO::_0xBE28DB99556FF8D9(iVar1) != 0) && !__LIB_2__::func_763(iVar0, 0)) && PED::_IS_PED_USING_SCENARIO_HASH(iVar1, joaat("PROP_HUMAN_PIANO_SKETCHY")))
		{
			AUDIO::_0x8E901B65206C2D3E(iVar1);
			AUDIO::_0xB93A769B8B726950(iVar1, 533120);
			AUDIO::_0xC4CFCE4C656EF480(iVar1);
			bLocal_693 = true;
		}
		else if (bLocal_693 && !PED::_IS_PED_USING_SCENARIO_HASH(iVar1, joaat("PROP_HUMAN_PIANO_SKETCHY")))
		{
			bLocal_693 = false;
		}
	}
}

void func_111()
{
	int iVar0[2];
	int iVar3;
	iVar0[0] = __LIB_1__::func_334(309);
	iVar0[1] = __LIB_1__::func_334(310);
	iVar3 = 0;
	while (iVar3 < iVar0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0[iVar3]))
		{
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar3]) != joaat("REL_DOMESTICATED_PET_ANIMAL"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar3], joaat("REL_DOMESTICATED_PET_ANIMAL"));
			}
		}
		iVar3++;
	}
}

void func_112()
{
	__LIB_14__::func_355(251);
}

void func_116(var uParam0)
{
	if (!func_273())
	{
		func_274(&uLocal_143);
		func_275(uParam0);
	}
}

void func_120()
{
	if (__LIB_3__::func_332(2504.489f, -1450.591f, 46.31302f, 1) < 225f)
	{
		func_280();
		bLocal_769 = true;
	}
	else if (bLocal_769)
	{
		func_281();
		bLocal_769 = false;
	}
}

void func_121()
{
	__LIB_6__::func_351(&uLocal_759, &uLocal_761, &uLocal_760, 2753.91f, -1396.01f, 45.21f, joaat("UI_NOTE_TROLLEY_DIGEST"), -712193496 /* GXTEntry: "Saint Denis Trolley Rider\'s Digest" */, joaat("WORLD_PLAYER_INSPECT_PAMPHLET_80CM_PAPER_W11_5_H20_5_S_INV_PAMPPOTHORSE01X"));
}

void func_123(var uParam0)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6))
	{
		return;
	}
	if (uParam0->f_17 > 0)
	{
		if (__LIB_2__::func_776())
		{
			uParam0->f_17 = 4;
		}
		if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_5, Global_36) && __LIB_18__::func_798(uParam0, 8, 0, 1))
		{
			uParam0->f_17 = 4;
		}
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_7, Global_36))
		{
			if (__LIB_18__::func_798(uParam0, 65536, 0, 1))
			{
				__LIB_14__::func_255(uParam0, 1);
				uParam0->f_17 = 3;
			}
		}
		if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED") && __LIB_18__::func_798(uParam0, 4096, 0, 1))
		{
			__LIB_14__::func_255(uParam0, 1);
			uParam0->f_17 = 3;
		}
		if (__LIB_4__::func_910(Global_35, uParam0->f_5) && __LIB_18__::func_798(uParam0, 2048, 0, 1))
		{
			__LIB_14__::func_255(uParam0, 1);
			uParam0->f_17 = 3;
		}
		if (__LIB_3__::func_425(&uVar0) && __LIB_18__::func_798(uParam0, 256, 0, 1))
		{
			__LIB_14__::func_255(uParam0, 1);
			uParam0->f_17 = 3;
		}
	}
	switch (uParam0->f_17)
	{
		case 0:
			if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1) || __LIB_2__::func_776())
			{
				return;
			}
			if (VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_5, Global_36))
			{
				if (!__LIB_0__::func_29(uParam0->f_3))
				{
					return;
				}
				if (!PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(uParam0->f_3)))
				{
					return;
				}
				uParam0->f_4 = __LIB_1__::func_334(uParam0->f_3);
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
				{
					return;
				}
				__LIB_14__::func_256(uParam0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_4, 130, true);
				PED::_0x85F500F4E24CA43E(uParam0->f_4, 0f);
				PED::_0x9B9B9FA0EA283E3D(uParam0->f_4, 0f);
				uParam0->f_17 = 1;
			}
			break;
		case 1:
			bVar2 = false;
			if ((VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_6, Global_36) && !__LIB_14__::func_257(uParam0)) && __LIB_14__::func_359(uParam0, -1))
			{
				if (__LIB_2__::func_140(0) && __LIB_18__::func_798(uParam0, 128, 0, 1))
				{
					bVar2 = true;
				}
				else if (__LIB_3__::func_425(&uVar1) && __LIB_18__::func_798(uParam0, 256, 0, 1))
				{
					uParam0->f_17 = 3;
				}
				else if (__LIB_18__::func_798(uParam0, 64, 0, 1))
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				uParam0->f_17 = 2;
			}
			break;
		case 2:
			if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_6, Global_36))
			{
				if (__LIB_14__::func_359(uParam0, 30))
				{
					if (__LIB_18__::func_798(uParam0, 16, 0, 1))
					{
					}
				}
			}
			break;
		case 3:
			if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1) || __LIB_4__::func_910(Global_35, uParam0->f_5))
			{
				if (!__LIB_0__::func_491(Global_35, 474215631))
				{
					TASK::TASK_COWER(uParam0->f_4, -1, Global_35, 0);
				}
				if (__LIB_18__::func_798(uParam0, 1048576, 0, 1))
				{
				}
				uParam0->f_17 = 4;
			}
			else if ((VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_7, Global_36) == 0 && __LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_UNARMED")) && !__LIB_3__::func_425(&uVar1))
			{
				bVar3 = false;
				if (__LIB_18__::func_798(uParam0, 8192, 0, 0))
				{
					bVar3 = true;
				}
				else if (__LIB_18__::func_798(uParam0, 16384, 0, 0))
				{
					bVar3 = true;
				}
				else if (__LIB_18__::func_798(uParam0, 32768, 0, 0))
				{
					bVar3 = true;
				}
				if (bVar3)
				{
					__LIB_17__::func_618(uParam0, 65536);
					__LIB_17__::func_618(uParam0, 256);
					__LIB_17__::func_618(uParam0, 4096);
					__LIB_14__::func_255(uParam0, 0);
					uParam0->f_17 = 0;
				}
			}
			break;
		case 4:
			PED::SET_PED_CONFIG_FLAG(uParam0->f_4, 130, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_4, false);
			PED::_0x85F500F4E24CA43E(uParam0->f_4, -1f);
			PED::_0x9B9B9FA0EA283E3D(uParam0->f_4, -1f);
			__LIB_14__::func_258(uParam0);
			uParam0->f_17 = 0;
			break;
		case 5:
			break;
		case 6:
			break;
	}
}

void func_142()
{
	if (__LIB_14__::func_345(iLocal_770))
	{
		func_332(iLocal_770);
	}
}

void func_144(int iParam0)
{
	iParam0 = iParam0;
	__LIB_2__::func_759(0.775f, 0.2f, 0.025f, 0f);
	FLOCK::SET_SPECIES_TUNING_BOOL_PARAM(joaat("SPECIES_HORSE"), 0, 48, false);
	func_333();
	__LIB_14__::func_349(1);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(426813831, false);
	if (HUD::_DOES_TEXT_DATABASE_EXIST("SCSFAUD"))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED("SCSFAUD"))
		{
			HUD::_TEXT_DATABASE_DELETE("SCSFAUD");
		}
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST("SCSCAUD"))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED("SCSCAUD"))
		{
			HUD::_TEXT_DATABASE_DELETE("SCSCAUD");
		}
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST("STDRGAU"))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED("STDRGAU"))
		{
			HUD::_TEXT_DATABASE_DELETE("STDRGAU");
		}
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST("RESAMAU"))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED("RESAMAU"))
		{
			HUD::_TEXT_DATABASE_DELETE("RESAMAU");
		}
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST("RERIAUD"))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED("RERIAUD"))
		{
			HUD::_TEXT_DATABASE_DELETE("RERIAUD");
		}
	}
	VEHICLE::_REMOVE_SPEED_ZONE(iLocal_678);
	LAW::_REMOVE_GUARD_ZONE(sLocal_665);
	__LIB_0__::func_172(iLocal_666);
	__LIB_0__::func_172(iLocal_667);
	__LIB_0__::func_172(iLocal_668);
	__LIB_17__::func_609();
	func_337();
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_677))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_677);
		VOLUME::_DELETE_VOLUME(iLocal_677);
	}
	__LIB_4__::func_909(&uLocal_719);
	__LIB_4__::func_909(&uLocal_739);
}

void func_181(var uParam0)
{
	uParam0->f_31 = 71347;
	uParam0->f_32 = 71783;
	uParam0->f_11 = 1;
}

void func_182()
{
	var uVar0;
	var uVar6;
	var uVar12;
	var uVar18;
	var uVar24;
	var uVar30;
	var uVar36;
	var uVar42;
	var uVar48;
	uVar0 = 5;
	func_361(&Local_177, 256, &uVar0, 0, 0);
	Local_177[0 /*45*/].f_43 = 72047;
	Local_177[0 /*45*/].f_44 = 72174;
	__LIB_17__::func_463(&(Local_177[0 /*45*/]), 512);
	uVar6 = 5;
	func_361(&Local_177, 200, &uVar6, 1, 0);
	Local_177[1 /*45*/].f_43 = 72303;
	Local_177[1 /*45*/].f_44 = 72174;
	__LIB_17__::func_463(&(Local_177[1 /*45*/]), 512);
	uVar12 = 5;
	func_361(&Local_177, 138, &uVar12, 2, 0);
	Local_177[2 /*45*/].f_43 = 72546;
	Local_177[2 /*45*/].f_44 = 72174;
	__LIB_17__::func_463(&(Local_177[2 /*45*/]), 512);
	uVar18 = 5;
	func_361(&Local_177, 137, &uVar18, 3, 0);
	Local_177[3 /*45*/].f_43 = 72921;
	Local_177[3 /*45*/].f_44 = 72174;
	__LIB_17__::func_463(&(Local_177[3 /*45*/]), 512);
	uVar24 = 5;
	func_361(&Local_177, 202, &uVar24, 4, 0);
	Local_177[4 /*45*/].f_43 = 73108;
	Local_177[4 /*45*/].f_44 = 72174;
	__LIB_17__::func_463(&(Local_177[4 /*45*/]), 512);
	uVar30 = 5;
	func_361(&Local_177, 205, &uVar30, 5, 0);
	Local_177[5 /*45*/].f_43 = 73552;
	Local_177[5 /*45*/].f_44 = 72174;
	__LIB_17__::func_463(&(Local_177[5 /*45*/]), 512);
	uVar36 = 5;
	func_361(&Local_177, 141, &uVar36, 6, 0);
	Local_177[6 /*45*/].f_43 = 73649;
	Local_177[6 /*45*/].f_44 = 72174;
	__LIB_17__::func_463(&(Local_177[6 /*45*/]), 512);
	uVar42 = 5;
	func_361(&Local_177, 219, &uVar42, 7, 0);
	Local_177[7 /*45*/].f_43 = 73831;
	Local_177[7 /*45*/].f_44 = 72174;
	__LIB_17__::func_463(&(Local_177[7 /*45*/]), 512);
	uVar48 = 5;
	func_361(&Local_177, 140, &uVar48, 8, 0);
	Local_177[8 /*45*/].f_43 = 74003;
	Local_177[8 /*45*/].f_44 = 72174;
}

int func_242(int iParam0, int iParam1)
{
	int iVar0;
	if (Global_1934266.f_26 != iParam0)
	{
		Global_1934266.f_26 = iParam0;
		iVar0 = iParam1;
		if (!__LIB_0__::func_630(iParam1))
		{
			iVar0 = __LIB_10__::func_29(iParam0);
		}
		if (!__LIB_0__::func_630(iVar0))
		{
			iVar0 = __LIB_1__::func_905(__LIB_0__::func_979(Global_36));
		}
		if (!__LIB_0__::func_630(iVar0))
		{
			return 0;
		}
		LAW::_SET_LAW_REGION(PLAYER::PLAYER_ID(), Global_1934266.f_26, __LIB_8__::func_977(iVar0));
		return 1;
	}
	return 0;
}

bool func_273()
{
	if (Global_1935183.f_28 && __LIB_4__::func_930(2))
	{
		return true;
	}
	return false;
}

void func_274(var uParam0)
{
	int iVar0;
	int iVar1;
	switch (uParam0->f_8)
	{
		case 1:
			__LIB_4__::func_926(uParam0);
			uParam0->f_8 = 2;
			break;
		case 2:
			if ((__LIB_11__::func_134(2, 2) || __LIB_11__::func_134(1, 2)) || __LIB_11__::func_134(0, 2))
			{
				uParam0->f_4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, -1.25f, -1f, -1f) };
				uParam0->f_8 = 4;
			}
			break;
		case 4:
			if (__LIB_4__::func_927(uParam0))
			{
				Stack.Push(uParam0);
				Call_Loc(uParam0->f_31);
				if (StackVal)
				{
					uParam0->f_8 = 32;
				}
				Jump @1358; //curOff = 175
			}
			else if (uParam0->f_10)
			{
				uParam0->f_3 = __LIB_14__::func_360();
				Stack.Push(uParam0->f_3 != 0);
				Stack.Push(uParam0);
				Call_Loc(uParam0->f_31);
				if (StackVal && StackVal)
				{
					PED::_0xF008E0BA1FE1D644(1);
					STREAMING::REQUEST_MODEL(uParam0->f_3, false);
					uParam0->f_8 = 8;
				}
				else
				{
					uParam0->f_8 = 512;
				}
			}
			else
			{
				uParam0->f_8 = 512;
			}
			break;
		case 8:
			if (!PED::_0x5E420FF293EE5472())
			{
			}
			else if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_3))
			{
			}
			else
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
				{
					Stack.Push(uParam0);
					Stack.Push(uParam0->f_3);
					Call_Loc(uParam0->f_32);
					if (StackVal)
					{
						uParam0->f_1 = __LIB_1__::func_545(uParam0->f_3, uParam0->f_4, ENTITY::GET_ENTITY_HEADING(Global_35), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 130, false);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 315, false);
						PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
						PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 3, 2, 0);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 4, 2, 0);
						uParam0->f_8 = 16;
					}
					else
					{
						Jump @443; //curOff = 431
						uParam0->f_8 = 32;
						Jump @1358; //curOff = 440
						if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
						{
							uParam0->f_8 = 512;
						}
						Jump @1358; //curOff = 462
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(0, Global_35, -1.15f, -0.5f, 0f, 1f, -1, 0);
							TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, 4f, 0f), 2000);
							TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1, iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
							PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
							WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_1, true, true);
							uParam0->f_8 = 32;
						}
						else
						{
							uParam0->f_8 = 256;
							Jump @1358; //curOff = 605
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
							{
								PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
							}
							if (!__LIB_4__::func_928(uParam0->f_1))
							{
								if (__LIB_4__::func_916() && func_426(uParam0->f_1, 1))
								{
									if (func_427(uParam0, uParam0->f_15))
									{
										PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
										PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
										PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 130, false);
										PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 315, false);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 3, 2, 1);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 4, 2, 1);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 7, 1, 0);
										__LIB_0__::func_37(&(uParam0->f_12));
										uParam0->f_8 = 64;
									}
									else
									{
										uParam0->f_8 = 256;
									}
								}
								else if (!__LIB_0__::func_75(&(uParam0->f_12)))
								{
									__LIB_1__::func_283(&(uParam0->f_12), 1);
								}
								else if (__LIB_0__::func_265(&(uParam0->f_12)) > 15f)
								{
									__LIB_0__::func_37(&(uParam0->f_12));
									uParam0->f_8 = 256;
								}
							}
							else
							{
								uParam0->f_8 = 256;
							}
							Jump @1358; //curOff = 861
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
							{
								PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
								PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
							}
							if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_18)))
							{
								uParam0->f_8 = 512;
							}
							else
							{
								if (!__LIB_0__::func_75(&(uParam0->f_12)))
								{
									__LIB_1__::func_283(&(uParam0->f_12), 1);
								}
								else if (__LIB_0__::func_265(&(uParam0->f_12)) > 3f)
								{
									uParam0->f_8 = 128;
								}
								Jump @1358; //curOff = 961
								if (!__LIB_0__::func_481(1))
								{
									if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
									{
										TASK::TASK_LOOK_AT_ENTITY(Global_35, uParam0->f_1, 10000, 0, 51, 0);
										if (!PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_1))
										{
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_1, Global_35, -1, -1f, -1f, -1f);
										}
										if (func_427(uParam0, uParam0->f_18))
										{
										}
									}
									uParam0->f_8 = 256;
								}
								Jump @1358; //curOff = 1063
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
								{
									PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
									PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
									if (__LIB_4__::func_928(uParam0->f_1))
									{
										__LIB_0__::func_82(1, 1, 1);
									}
									if (!__LIB_0__::func_481(1))
									{
										iVar1 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_14__::func_272(), joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_BAR_CA"), 3f, 1, false);
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										TASK::TASK_CLEAR_LOOK_AT(0);
										TASK::TASK_STAND_STILL(0, 2000);
										if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
										{
											TASK::_TASK_USE_SCENARIO_POINT(0, iVar1, 0, 0, true, false, 0, false, -1f, false);
										}
										else
										{
											TASK::TASK_SMART_FLEE_PED(0, Global_35, 50f, -1, 16768, 1f, 0);
										}
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 3, 2, 0);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 4, 2, 0);
										__LIB_2__::func_788(&(uParam0->f_1), 1, 0, 1);
										if (uParam0->f_10)
										{
											PED::_0x7D4E70A67A651C71(1);
										}
										uParam0->f_8 = 512;
									}
								}
								else
								{
									uParam0->f_8 = 512;
								}
								Jump @1358; //curOff = 1305
								if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
								{
									__LIB_0__::func_37(&(uParam0->f_12));
									if (uParam0->f_10)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_3);
									}
									uParam0->f_1 = 0;
									uParam0->f_8 = 1024;
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_275(var uParam0)
{
	if ((uParam0[iLocal_176 /*45*/])->f_29 == 1)
	{
		if (func_436(uParam0[iLocal_176 /*45*/], 1, 1))
		{
			func_437(uParam0[iLocal_176 /*45*/]);
		}
	}
	iLocal_176++;
	if (iLocal_176 >= 9)
	{
		iLocal_176 = 0;
	}
}

void func_280()
{
	__LIB_17__::func_608(&(iLocal_762[0]), joaat("P_DOOR_SD_CARRIAGE01X"), 2504.532f, -1465.064f, 45.311f);
	__LIB_17__::func_608(&(iLocal_762[1]), joaat("P_DOOR_SD_CARRIAGE01X"), 2500.124f, -1465.064f, 45.311f);
	__LIB_17__::func_608(&(iLocal_762[2]), joaat("P_DOOR_SD_CARRIAGE01X"), 2499.337f, -1452.443f, 45.311f);
	__LIB_17__::func_608(&(iLocal_762[3]), joaat("P_DOOR_SD_CARRIAGE03X"), 2499.337f, -1448.036f, 45.311f);
	__LIB_17__::func_608(&(iLocal_762[4]), joaat("P_DOOR_SD_CARRIAGE01X"), 2500.124f, -1435.318f, 45.311f);
	__LIB_17__::func_608(&(iLocal_762[5]), joaat("P_DOOR_SD_CARRIAGE01X"), 2500.53f, -1435.318f, 45.311f);
}

void func_281()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_762)
	{
		__LIB_17__::func_610(&(iLocal_762[iVar0]));
		iVar0++;
	}
}

void func_332(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 5)
	{
		return;
	}
	if (!__LIB_14__::func_345(iParam0))
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_43894[iParam0]))
	{
		VOLUME::_DELETE_VOLUME(Global_43894[iParam0]);
	}
	if (Global_43894.f_6[iParam0] != 1f)
	{
		Global_43894.f_6[iParam0] = 1f;
	}
}

void func_333()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (__LIB_0__::func_75(&(Local_177[iVar0 /*45*/].f_34)))
		{
			__LIB_0__::func_37(&(Local_177[iVar0 /*45*/].f_34));
		}
		__LIB_0__::func_172(Local_177[iVar0 /*45*/].f_38);
		__LIB_0__::func_172(Local_177[iVar0 /*45*/].f_39);
		iVar0++;
	}
	Global_1935183.f_29 = 4;
}

void func_337()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uLocal_584[iVar0]))
		{
			VOLUME::_0xFDFECC6EE4491E11(uLocal_584[iVar0]);
		}
		iVar0++;
	}
}

int func_359(var uParam0)
{
	int iVar0;
	iVar0 = 5;
	if (__LIB_4__::func_930(2))
	{
		switch (uParam0->f_3)
		{
			case joaat("A_M_M_SDFANCYTRAVELLERS_01"):
				if (__LIB_17__::func_468(5, iVar0, 2, 1))
				{
					StringCopy(&(uParam0->f_15), "SCSF_0938A", 24);
					StringCopy(&(uParam0->f_18), "SCSF_0938B", 24);
					uParam0->f_7 = "SALOON_0938";
					return 1;
				}
				break;
			case joaat("A_M_M_RANCHER_01"):
				if (__LIB_17__::func_468(5, iVar0, 4, 1))
				{
					StringCopy(&(uParam0->f_15), "SCSF_0958A", 24);
					StringCopy(&(uParam0->f_18), "SCSF_0958B", 24);
					uParam0->f_7 = "SALOON_0958";
					return 1;
				}
				break;
			case joaat("A_M_O_SDUPPERCLASS_01"):
			case joaat("A_M_M_NBXUPPERCLASS_01"):
				if (__LIB_17__::func_468(5, iVar0, 8, 1))
				{
					StringCopy(&(uParam0->f_15), "SCSF_0803A", 24);
					StringCopy(&(uParam0->f_18), "SCSF_0803B", 24);
					uParam0->f_7 = "SALOON_0803";
					return 1;
				}
				break;
		}
	}
	else if (__LIB_4__::func_930(1))
	{
		switch (uParam0->f_3)
		{
			case joaat("A_M_M_SDSLUMS_02"):
				if (__LIB_17__::func_468(5, iVar0, 32, 1))
				{
					StringCopy(&(uParam0->f_15), "SCSC_0775A", 24);
					StringCopy(&(uParam0->f_18), "SCSC_0775B", 24);
					uParam0->f_7 = "SALOON_0775";
					return 1;
				}
				break;
			case joaat("A_M_M_LOWERSDTOWNFOLK_02"):
				if (__LIB_17__::func_468(5, iVar0, 64, 1))
				{
					StringCopy(&(uParam0->f_15), "SCSC_0789A", 24);
					StringCopy(&(uParam0->f_18), "SCSC_0789B", 24);
					uParam0->f_7 = "SALOON_0789";
					return 1;
				}
				if (__LIB_1__::func_187(77) && __LIB_17__::func_468(5, iVar0, 128, 1))
				{
					StringCopy(&(uParam0->f_15), "SCSC_1016A", 24);
					StringCopy(&(uParam0->f_18), "SCSC_1016B", 24);
					uParam0->f_7 = "SALOON_1016";
					return 1;
				}
				break;
			case joaat("G_M_M_UNICRIMINALS_02"):
				if (__LIB_17__::func_468(5, iVar0, 256, 1))
				{
					StringCopy(&(uParam0->f_15), "SCSC_1064A", 24);
					StringCopy(&(uParam0->f_18), "SCSC_1064B", 24);
					uParam0->f_7 = "SALOON_1064";
					return 1;
				}
				break;
		}
	}
	return 0;
}

int func_360(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("A_M_M_LOWERSDTOWNFOLK_02"):
		case joaat("G_M_M_UNICRIMINALS_02"):
		case joaat("A_M_O_SDUPPERCLASS_01"):
		case joaat("A_M_M_SDSLUMS_02"):
		case joaat("A_M_M_SDFANCYTRAVELLERS_01"):
		case joaat("A_M_M_NBXUPPERCLASS_01"):
		case joaat("A_M_M_RANCHER_01"):
			uParam0->f_3 = iParam1;
			return 1;
	}
	return 0;
}

void func_361(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	(uParam0[iParam3 /*45*/])->f_25 = 64f;
	(uParam0[iParam3 /*45*/])->f_26 = 16f;
	(uParam0[iParam3 /*45*/])->f_20 = iParam3;
	__LIB_2__::func_790(uParam0[iParam3 /*45*/]);
	(*uParam0)[iParam3 /*45*/] = iParam1;
	if (bParam4)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			(uParam0[iParam3 /*45*/])->f_3[iVar0 /*3*/] = (*uParam2)[iVar0];
			iVar0++;
		}
		__LIB_17__::func_463(uParam0[iParam3 /*45*/], 128);
	}
	if (!__LIB_0__::func_75(&((uParam0[iParam3 /*45*/])->f_34)))
	{
		__LIB_1__::func_283(&((uParam0[iParam3 /*45*/])->f_34), 1);
	}
	__LIB_17__::func_463(uParam0[iParam3 /*45*/], 32768);
	__LIB_17__::func_463(uParam0[iParam3 /*45*/], 1024);
	(uParam0[iParam3 /*45*/])->f_29 = 1;
	(uParam0[iParam3 /*45*/])->f_21 = -1;
}

Vector3 func_362(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return __LIB_1__::func_344("");
	}
	if (!__LIB_6__::func_621(uParam0, 4))
	{
		if (__LIB_0__::func_113())
		{
			if (__LIB_2__::func_815(uParam0))
			{
				__LIB_17__::func_463(uParam0, 4);
				uParam0->f_21 = -1;
				return __LIB_1__::func_344("STDRG_NEARCHF");
			}
		}
	}
	if (uParam0->f_21 < 0)
	{
		return __LIB_1__::func_344("");
	}
	return __LIB_1__::func_344("");
}

char* func_363(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return "SD_PoliceChief";
		case 137:
			return "NBX_Bartender";
		case 140:
			return "NBX_Doctor";
		case 202:
			return "NBX_Gunsmith";
		case 200:
			return "NBX_Gen_Store_Owner";
		case 138:
			return "NBX_Bartender_Slums";
		case 219:
			return "NBX_Gen_Store_Shady";
		default:
			break;
	}
	return "";
}

Vector3 func_365(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return __LIB_1__::func_344("");
	}
	iVar1 = 1;
	if (__LIB_17__::func_635(uParam0, 5, iVar1, 4, 34))
	{
		return __LIB_1__::func_344("STDRG_GEN_IND3");
	}
	if (__LIB_17__::func_635(uParam0, 5, iVar1, 2, 33))
	{
		return __LIB_1__::func_344("STDRG_GEN_IND1");
	}
	if (__LIB_17__::func_635(uParam0, 5, iVar1, 16, 28))
	{
		return __LIB_1__::func_344("STDRG_GEN_MOB2");
	}
	if (__LIB_17__::func_635(uParam0, 5, iVar1, 8, 27))
	{
		return __LIB_1__::func_344("STDRG_GEN_MOB1");
	}
	if (__LIB_14__::func_267(39, 1, 0) && __LIB_17__::func_468(5, iVar1, 32, 1))
	{
		return __LIB_1__::func_344("STDRG_GEN_SRDOC");
	}
	if (__LIB_17__::func_473(uParam0, iVar1))
	{
		return __LIB_1__::func_344("STDRG_SHOSICK");
	}
	if (uParam0->f_21 < 0)
	{
		return __LIB_1__::func_344("");
	}
	return __LIB_1__::func_344("");
}

Vector3 func_366(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return __LIB_1__::func_344("");
	}
	if (__LIB_1__::func_988(110))
	{
		return __LIB_1__::func_344("");
	}
	iVar1 = 2;
	if (__LIB_0__::func_113())
	{
		if (__LIB_2__::func_815(uParam0))
		{
			if ((__LIB_1__::func_185(47) && __LIB_1__::func_194() == 5) && __LIB_17__::func_468(5, iVar1, 2, 1))
			{
				uParam0->f_21 = -1;
				return __LIB_1__::func_344("STDRG_SBARPLY_B");
			}
			if ((__LIB_1__::func_185(27) && !__LIB_1__::func_185(28)) && __LIB_17__::func_468(5, iVar1, 4, 1))
			{
				uParam0->f_21 = -1;
				return __LIB_1__::func_344("STDRG_SBARPLY_D");
			}
			if (__LIB_4__::func_74(107, 8192) > 0 && __LIB_17__::func_468(5, iVar1, 8, 1))
			{
				uParam0->f_21 = -1;
				return __LIB_1__::func_344("RERI_CONV_A");
			}
			if (__LIB_4__::func_74(110, 8192) > 0)
			{
				if (PED::_0x7CC2186C32D3540A(iVar0, PLAYER::PLAYER_ID()) > 1 && __LIB_17__::func_468(5, iVar1, 16, 1))
				{
					uParam0->f_21 = -1;
					return __LIB_1__::func_344("RESAM_CONV_A");
				}
				else if (__LIB_17__::func_468(5, iVar1, 32, 1))
				{
					uParam0->f_21 = -1;
					return __LIB_1__::func_344("RESAM_CONV_B");
				}
			}
			if (__LIB_17__::func_473(uParam0, iVar1))
			{
				return __LIB_1__::func_344("STDRG_SLUBAR_SK");
			}
		}
	}
	if (uParam0->f_21 < 0)
	{
		return __LIB_1__::func_344("");
	}
	return __LIB_1__::func_344("");
}

Vector3 func_367(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return __LIB_1__::func_344("");
	}
	if (func_481(4))
	{
		return __LIB_1__::func_344("");
	}
	iVar1 = 3;
	if (__LIB_0__::func_113())
	{
		if (__LIB_17__::func_473(uParam0, iVar1))
		{
			return __LIB_1__::func_344("STDRG_FANBAR_SK");
		}
		if ((__LIB_1__::func_194() == 3 && __LIB_1__::func_185(27)) && __LIB_2__::func_815(uParam0))
		{
			if (__LIB_17__::func_468(5, iVar1, 2, 1))
			{
				uParam0->f_21 = -1;
				return __LIB_1__::func_344("STDRG_FBAR_MOB1");
			}
		}
	}
	if (uParam0->f_21 < 0)
	{
		return __LIB_1__::func_344("");
	}
	return __LIB_1__::func_344("");
}

Vector3 func_368(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return __LIB_1__::func_344("");
	}
	if (func_481(4))
	{
		return __LIB_1__::func_344("");
	}
	iVar1 = 4;
	if (__LIB_17__::func_635(uParam0, 5, iVar1, 2, 46))
	{
		return __LIB_1__::func_344("STDRG_GUN_GNG3");
	}
	if (__LIB_17__::func_635(uParam0, 5, iVar1, 4, 34))
	{
		return __LIB_1__::func_344("STDRG_GUN_IND3");
	}
	if (__LIB_17__::func_635(uParam0, 5, iVar1, 16, 29))
	{
		return __LIB_1__::func_344("STDRG_GUN_MOB3");
	}
	if (__LIB_17__::func_635(uParam0, 5, iVar1, 8, 28))
	{
		return __LIB_1__::func_344("STDRG_GUN_MOB2");
	}
	if (__LIB_14__::func_267(42, 1, 0) && __LIB_17__::func_468(5, iVar1, 32, 1))
	{
		return __LIB_1__::func_344("STDRG_GUN_SRGEN");
	}
	if (__LIB_14__::func_267(41, 1, 0) && __LIB_17__::func_468(5, iVar1, 64, 1))
	{
		return __LIB_1__::func_344("STDRG_GUN_SRSHA");
	}
	if (__LIB_17__::func_473(uParam0, iVar1))
	{
		return __LIB_1__::func_344("STDRG_GUNSICK");
	}
	if (__LIB_2__::func_815(uParam0))
	{
		if (!__LIB_6__::func_621(uParam0, 4))
		{
			if (__LIB_17__::func_468(5, iVar1, 256, 0) && __LIB_14__::func_267(43, 0, 1))
			{
				__LIB_17__::func_463(uParam0, 4);
				if (__LIB_17__::func_468(5, iVar1, 128, 1))
				{
					if (__LIB_0__::func_113())
					{
						return __LIB_1__::func_344("STDRG_GUNPKR_1A");
					}
					else
					{
						return __LIB_1__::func_344("STDRG_GUNPKR_1J");
					}
				}
				if (__LIB_17__::func_468(5, iVar1, 256, 1))
				{
					if (__LIB_0__::func_113())
					{
						return __LIB_1__::func_344("STDRG_GUNPKR_2A");
					}
					else
					{
						return __LIB_1__::func_344("STDRG_GUNPKR_2J");
					}
				}
			}
		}
	}
	if (uParam0->f_21 < 0)
	{
		return __LIB_1__::func_344("");
	}
	return __LIB_1__::func_344("");
}

Vector3 func_369(var uParam0)
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return __LIB_1__::func_344("");
	}
	sVar1 = __LIB_17__::func_631(uParam0, "STDRG_LIVSICK_1", "STDRG_LIVSICK_2", "STDRG_LIVSICK_3");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return __LIB_1__::func_344(sVar1);
	}
	return __LIB_1__::func_344("");
}

Vector3 func_370(var uParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return __LIB_1__::func_344("");
	}
	iVar1 = 6;
	if (__LIB_17__::func_473(uParam0, iVar1))
	{
		sVar2 = __LIB_0__::func_67(Global_1393529.f_288[1 /*8*/]);
		iVar3 = MISC::GET_HASH_KEY(sVar2);
		switch (iVar3)
		{
			case joaat("0832_S_M_M_TRAINSTATIONWORKER_01_WHITE_01"):
				uParam0->f_37 = "0832_TRAINWORKER";
				return __LIB_1__::func_344("STDRG_TSW3SICK");
			case joaat("0833_S_M_M_TRAINSTATIONWORKER_01_WHITE_02"):
				uParam0->f_37 = "0833_TRAINWORKER";
				return __LIB_1__::func_344("STDRG_TSW2SICK");
			case joaat("0834_S_M_M_TRAINSTATIONWORKER_01_WHITE_03"):
				uParam0->f_37 = "0834_TRAINWORKER";
				return __LIB_1__::func_344("STDRG_TSW1SICK");
			default:
				break;
		}
	}
	return __LIB_1__::func_344("");
}

Vector3 func_371(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return __LIB_1__::func_344("");
	}
	iVar1 = 7;
	if (__LIB_0__::func_113())
	{
		if (!__LIB_6__::func_625(5, iVar1, 4))
		{
			if (__LIB_1__::func_187(22))
			{
				if (__LIB_2__::func_815(uParam0))
				{
					uParam0->f_21 = -1;
					__LIB_14__::func_353(5, iVar1, 4);
					if (!__LIB_6__::func_625(5, iVar1, 256))
					{
						return __LIB_1__::func_344("STDRG_SPR_SHA_A");
					}
					else
					{
						return __LIB_1__::func_344("STDRG_SPR_SHA_D");
					}
				}
			}
		}
		if (__LIB_17__::func_473(uParam0, iVar1))
		{
			return __LIB_1__::func_344("STDRG_SHADSICK");
		}
	}
	return __LIB_1__::func_344("");
}

Vector3 func_372(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return __LIB_1__::func_344("");
	}
	iVar1 = 8;
	if (!__LIB_6__::func_621(uParam0, 2))
	{
		if (__LIB_0__::func_113())
		{
			__LIB_9__::func_819(39);
			if (__LIB_2__::func_815(uParam0))
			{
				__LIB_17__::func_463(uParam0, 2);
				if (__LIB_1__::func_187(58))
				{
					if (__LIB_17__::func_468(5, iVar1, 2, 1))
					{
						uParam0->f_21 = -1;
						return __LIB_1__::func_344("STDRG_DOC_A");
					}
					if (__LIB_17__::func_468(5, iVar1, 4, 1))
					{
						uParam0->f_21 = -1;
						if (__LIB_0__::func_786() >= 0)
						{
							return __LIB_1__::func_344("STDRG_DOC_BH");
						}
						else
						{
							return __LIB_1__::func_344("STDRG_DOC_BL");
						}
					}
					if (__LIB_17__::func_468(5, iVar1, 8, 1))
					{
						uParam0->f_21 = -1;
						return __LIB_1__::func_344("STDRG_DOC_C");
					}
					if (__LIB_17__::func_468(5, iVar1, 16, 1))
					{
						uParam0->f_21 = -1;
						return __LIB_1__::func_344("STDRG_DOC_D");
					}
					if (__LIB_17__::func_468(5, iVar1, 32, 1))
					{
						uParam0->f_21 = -1;
						return __LIB_1__::func_344("STDRG_DOC_E");
					}
					if (__LIB_17__::func_468(5, iVar1, 64, 1))
					{
						uParam0->f_21 = -1;
						return __LIB_1__::func_344("STDRG_DOC_F");
					}
				}
			}
		}
	}
	return __LIB_1__::func_344("");
}

bool func_426(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || __LIB_0__::func_255(iParam0, 0))
	{
		return false;
	}
	if (__LIB_2__::func_791(iParam0))
	{
		__LIB_0__::func_37(&uLocal_42);
		return false;
	}
	if (bParam1)
	{
		return true;
	}
	if (__LIB_0__::func_75(&uLocal_42))
	{
		if (__LIB_0__::func_265(&uLocal_42) < 2f)
		{
			return false;
		}
	}
	else
	{
		__LIB_1__::func_283(&uLocal_42, 0);
		return false;
	}
	return true;
}

bool func_427(var uParam0, vector3 vParam1)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&vParam1))
	{
		__LIB_0__::func_928(&uLocal_45, uParam0->f_1, uParam0->f_7, 0);
		if (__LIB_4__::func_931(&uLocal_45, vParam1, uParam0->f_1, Global_35, 1077936128 /* Float: 3f */))
		{
			return true;
		}
	}
	return false;
}

bool func_436(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (uParam0->f_30 == 1)
	{
		if (!__LIB_6__::func_621(uParam0, 65536) && __LIB_0__::func_232(Global_35, iVar0, 1) > 25f)
		{
			__LIB_0__::func_82(1, 1, 0);
		}
		if (func_524(uParam0, bParam2))
		{
			if (__LIB_2__::func_793(__LIB_4__::func_850()))
			{
				__LIB_2__::func_794(__LIB_4__::func_850());
			}
			__LIB_2__::func_795(uParam0);
			uParam0->f_30 = 0;
		}
	}
	else
	{
		if (__LIB_6__::func_621(uParam0, 64))
		{
			return false;
		}
		if (__LIB_0__::func_232(Global_35, iVar0, 1) < 49f)
		{
			if (__LIB_6__::func_684(uParam0, iVar0))
			{
				func_530();
				if (bParam1)
				{
					if (!func_524(uParam0, bParam2))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

void func_437(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	bool bVar7;
	Stack.Push(uParam0);
	Call_Loc(uParam0->f_43);
	vVar0 = { StackVal, StackVal, StackVal };
	if (MISC::IS_STRING_NULL_OR_EMPTY(__LIB_0__::func_57(&vVar0)))
	{
		return;
	}
	iVar3 = __LIB_1__::func_334(*uParam0);
	if (!__LIB_0__::func_272(iVar3, 0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_37))
	{
		Stack.Push(*uParam0);
		Call_Loc(uParam0->f_44);
		uParam0->f_37 = StackVal;
	}
	__LIB_0__::func_928(&uLocal_45, iVar3, uParam0->f_37, 0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar3, true);
	uParam0->f_2 = 1;
	uParam0->f_37 = 0;
	if (!__LIB_6__::func_621(uParam0, 65536))
	{
		if (uParam0->f_21 < 0)
		{
			if (__LIB_0__::func_113())
			{
				__LIB_0__::func_928(&uLocal_45, Global_35, "ARTHUR", 0);
			}
			else
			{
				__LIB_0__::func_928(&uLocal_45, Global_35, "JOHN", 0);
			}
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
			uParam0->f_28 = 1;
		}
		else if (__LIB_6__::func_621(uParam0, 128))
		{
			iVar4 = uParam0->f_21;
			iVar5 = __LIB_1__::func_334(uParam0->f_3[iVar4 /*3*/]);
			if (!__LIB_0__::func_272(iVar5, 0))
			{
				return;
			}
			Stack.Push(uParam0->f_3[iVar4 /*3*/]);
			Call_Loc(uParam0->f_44);
			sVar6 = StackVal;
			__LIB_0__::func_928(&uLocal_45, iVar5, sVar6, 0);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar5, true);
			uParam0->f_3[iVar4 /*3*/].f_2 = 1;
		}
	}
	bVar7 = __LIB_6__::func_621(uParam0, 16384);
	if (__LIB_4__::func_855(&uLocal_45, vVar0, uParam0->f_40, bVar7, 0))
	{
		__LIB_2__::func_796(__LIB_4__::func_850());
		uParam0->f_30 = 1;
	}
	func_535(uParam0);
}

bool func_481(int iParam0)
{
	return __LIB_0__::func_27(iLocal_41, iParam0);
}

bool func_524(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_0__::func_29(*uParam0) && !__LIB_2__::func_767(*uParam0, 0))
	{
		return false;
	}
	if (__LIB_2__::func_763(*uParam0, 0))
	{
		return false;
	}
	iVar0 = __LIB_1__::func_334(*uParam0);
	iVar1 = __LIB_4__::func_850();
	if (__LIB_1__::func_917(iVar1))
	{
		if (__LIB_6__::func_623(iVar1))
		{
			__LIB_17__::func_619(uParam0);
			return uParam0->f_30;
		}
		if (bParam1)
		{
			if (__LIB_2__::func_799(iVar1))
			{
				return uParam0->f_30;
			}
		}
		iVar2 = __LIB_1__::func_921(iVar1);
		iVar3 = __LIB_4__::func_851(iVar2);
		if (iVar3 == 2 || iVar3 == 3)
		{
			__LIB_17__::func_619(uParam0);
			return uParam0->f_30;
		}
		if (__LIB_4__::func_852(iVar2))
		{
			return false;
		}
	}
	if ((Global_1914319.f_17371 || __LIB_2__::func_814(__LIB_1__::func_334(*uParam0), 1, 1, 1, 0)) || PED::_IS_PED_HOGTIED(__LIB_1__::func_334(*uParam0)))
	{
		__LIB_17__::func_619(uParam0);
		return uParam0->f_30;
	}
	if ((((__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1) || __LIB_2__::func_817()) || LAW::_0xF46108C50A22B029()) || LAW::_0x69E181772886F48B(PLAYER::PLAYER_ID())) || PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (Global_1914319.f_3[uParam0->f_24 /*446*/].f_411)
	{
		return false;
	}
	if (__LIB_2__::func_65(Global_35, 0))
	{
		__LIB_17__::func_619(uParam0);
		return uParam0->f_30;
	}
	if (__LIB_2__::func_84())
	{
		if (__LIB_1__::func_988(101))
		{
			return false;
		}
	}
	if (__LIB_0__::func_296(178, 1, 1))
	{
		return false;
	}
	if (!func_426(iVar0, __LIB_6__::func_621(uParam0, 2048)))
	{
		return false;
	}
	if (uParam0->f_30 == 0)
	{
		if (!__LIB_6__::func_621(uParam0, 2048) && !__LIB_6__::func_621(uParam0, 32768))
		{
			if (!__LIB_0__::func_75(&(uParam0->f_34)))
			{
				__LIB_1__::func_283(&(uParam0->f_34), 1);
				return false;
			}
			else if (__LIB_6__::func_621(uParam0, 1024))
			{
				if (__LIB_0__::func_265(&(uParam0->f_34)) < 5f)
				{
					return false;
				}
			}
			else if (__LIB_0__::func_265(&(uParam0->f_34)) < 25f)
			{
				return false;
			}
		}
	}
	return true;
}

void func_530()
{
	if (__LIB_2__::func_774(5))
	{
		func_572(2);
		func_572(4);
	}
	if ((((__LIB_2__::func_774(6) || __LIB_2__::func_774(14)) || __LIB_2__::func_774(26)) || __LIB_2__::func_774(9)) || __LIB_2__::func_774(21))
	{
		func_572(4);
	}
	if (((__LIB_1__::func_200(26) || __LIB_1__::func_200(27)) || __LIB_1__::func_200(28)) || __LIB_1__::func_200(29))
	{
		func_572(4);
	}
	if (((__LIB_3__::func_563(3, 61) || __LIB_3__::func_563(3, 29)) || __LIB_3__::func_563(3, 73)) || __LIB_3__::func_563(3, 43))
	{
		func_572(4);
	}
	if (__LIB_2__::func_84())
	{
		if (__LIB_1__::func_988(101) || __LIB_1__::func_988(79))
		{
			func_572(4);
		}
		if (((((__LIB_1__::func_988(88) || __LIB_1__::func_988(89)) || __LIB_1__::func_988(108)) || __LIB_1__::func_988(98)) || __LIB_1__::func_988(106)) || __LIB_1__::func_988(110))
		{
			func_572(8);
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("GENERIC_WAGON_FENCE_CORE")) > 0)
	{
		func_572(4);
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1396257[16 /*638*/].f_635, false) || SCRIPTS::IS_THREAD_ACTIVE(Global_1396257[13 /*638*/].f_635, false))
	{
		func_572(4);
	}
}

void func_535(var uParam0)
{
	int iVar0;
	int iVar1;
	__LIB_1__::func_283(&(uParam0->f_34), 1);
	uParam0->f_40 = { __LIB_1__::func_977() };
	uParam0->f_21 = -1;
	if (__LIB_6__::func_621(uParam0, 16384))
	{
		__LIB_12__::func_471(uParam0, 16384);
	}
	__LIB_12__::func_471(uParam0, 32768);
	__LIB_12__::func_471(uParam0, 1024);
	__LIB_0__::func_37(&uLocal_42);
	if (__LIB_6__::func_621(uParam0, 4096))
	{
		iVar0 = __LIB_0__::func_560(__LIB_0__::func_12(), uParam0->f_24);
		iVar1 = __LIB_1__::func_334(*uParam0);
		if (__LIB_2__::func_799(iVar0) && func_426(iVar1, 1))
		{
			__LIB_3__::func_820(iVar0, 0);
			__LIB_12__::func_471(uParam0, 8192);
			__LIB_12__::func_471(uParam0, 4096);
		}
	}
}

void func_572(int iParam0)
{
	__LIB_1__::func_336(&iLocal_41, iParam0);
}

