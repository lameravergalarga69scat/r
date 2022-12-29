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
	vector3 vLocal_15 = { 0f, 0f, 0f };
	vector3 vLocal_18 = { 0f, 0f, 0f };
	vector3 vLocal_21 = { 0f, 0f, 0f };
	vector3 vLocal_24 = { 0f, 0f, 0f };
	vector3 vLocal_27 = { 0f, 0f, 0f };
	vector3 vLocal_30 = { 0f, 0f, 0f };
	vector3 vLocal_33 = { 0f, 0f, 0f };
	vector3 vLocal_36 = { 0f, 0f, 0f };
	vector3 vLocal_39 = { 0f, 0f, 0f };
	vector3 vLocal_42 = { 0f, 0f, 0f };
	vector3 vLocal_45 = { 0f, 0f, 0f };
	vector3 vLocal_48 = { 0f, 0f, 0f };
	vector3 vLocal_51 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	float fLocal_57 = 0f;
	int iLocal_58 = 0;
	var uLocal_59 = 21;
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
	var uLocal_151 = 0;
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
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	struct<2> Local_228[21];
	struct<12> Local_271[1];
	struct<23> Local_284 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	struct<193> Local_309 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_502 = 0;
	struct<32> Local_503[3];
	struct<8> Local_600 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<60> Local_608 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	char[] cLocal_673[8] = 0;
	var uLocal_674 = 0;
	float fLocal_675 = 0f;
	float fLocal_676 = 0f;
	int iLocal_677[3] = { 0, 0, 0 };
	var uLocal_681[3] = { 0, 0, 0 };
	struct<24> Local_685 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0 } ;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	int iLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
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
	int iLocal_752 = 0;
	int iLocal_753 = 0;
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	int iLocal_758 = 0;
	int iLocal_759 = 0;
	int iLocal_760 = 0;
	var uLocal_761 = 0;
	int iLocal_762 = 0;
	int iLocal_763 = 0;
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	int iLocal_767 = 0;
	int iLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	int iLocal_773 = 0;
	int iLocal_774 = 0;
	int iLocal_775 = 0;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	int iLocal_778 = 0;
	var uLocal_779 = 0;
	int iLocal_780 = 0;
	struct<4> Local_781 = { 0, 0, 0, 0 } ;
	var uLocal_785 = 0;
	var uLocal_786 = 1065353216;
	var uLocal_787 = 1119092736;
	var uLocal_788 = 1092616192;
	var uLocal_789 = 1085276160;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 1065353216;
	var uLocal_796 = 1119092736;
	var uLocal_797 = 1092616192;
	var uLocal_798 = 1085276160;
	int iLocal_799 = 0;
	vector3 vLocal_800 = { 0f, 0f, 0f };
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	vector3 vLocal_812 = { 0f, 0f, 0f };
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	int iLocal_824 = 0;
	int iLocal_825 = 0;
	int iLocal_826 = 0;
	int iLocal_827 = 0;
	int iLocal_828 = 0;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	int iLocal_831 = 0;
	int iLocal_832 = 0;
	var uLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	int iLocal_837 = 0;
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	int iLocal_843 = 0;
	int iLocal_844 = 0;
	int iLocal_845 = 0;
	int iLocal_846 = 0;
	int iLocal_847 = 0;
	int iLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	bool bLocal_854 = false;
	var uLocal_855 = 0;
	struct<21> Local_856[1];
	struct<17> Local_878[2];
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "NONE";
	cLocal_673 = "Dark_Alley";
	fLocal_676 = 6f;
	iLocal_768 = -1;
	iLocal_775 = 1;
	iLocal_836 = 1;
	iLocal_837 = 1;
	iLocal_839 = 1;
	Local_309.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_854 = true;
	}
	if (!bLocal_854)
	{
		Local_309.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		Local_309.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		Local_309.f_43 = __LIB_0__::func_12();
		uLocal_772 = uLocal_772;
		__LIB_3__::func_420(&Local_309, 1);
		func_5();
		__LIB_2__::func_290(&(Local_309.f_5));
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_854, 1166, 0);
		if (bLocal_854)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_775)
			{
				case 1:
					if (__LIB_4__::func_422(&Local_309, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_10();
						func_11();
						if (__LIB_4__::func_66() && (Local_309.f_51.f_4 == 1 || Local_309.f_51.f_4 == 2))
						{
							func_7();
						}
						else
						{
							__LIB_4__::func_219(&Local_309, &uLocal_779, &uLocal_855);
							__LIB_3__::func_503(&Local_309, uLocal_779, 2199);
							iLocal_775 = 0;
						}
					}
					else if (Local_309.f_160)
					{
						func_7();
					}
					break;
				case 0:
					if (func_16())
					{
						iLocal_775 = 3;
					}
					else if (!__LIB_3__::func_927(BUILTIN::VDIST(Global_36, Local_309.f_51), Local_309.f_3))
					{
						func_7();
					}
					break;
				case 3:
					if (func_18())
					{
						func_19();
						func_20();
						func_21();
						func_22();
						iLocal_775 = 4;
					}
					break;
				case 4:
					if (!func_23(&Local_309, &iLocal_677, iLocal_670, 0, 1, 0, 1, 0))
					{
						func_7();
					}
					if (__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
					{
						__LIB_3__::func_606(&uLocal_761);
					}
					iVar0 = 1;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_677[2]))
					{
						iVar0 = 2;
					}
					if ((!Local_309.f_46 && !__LIB_0__::func_27(iLocal_824, 256)) && !__LIB_0__::func_27(iLocal_824, 2097152))
					{
						if ((func_27(&iLocal_677, &(Local_309.f_5), &iLocal_780, &uLocal_833, 0, iVar0, 1) || PED::IS_PED_RAGDOLL(iLocal_677[0])) || __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
						{
							Local_309.f_46 = 1;
							__LIB_3__::func_606(&uLocal_761);
							if (VOLUME::_DOES_VOLUME_EXIST(iLocal_764))
							{
								__LIB_0__::func_172(iLocal_764);
							}
							if (PED::IS_PED_RAGDOLL(iLocal_677[0]))
							{
							}
							if (iLocal_780 == 16384 || __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
							{
								iLocal_780 = 16384;
								if (__LIB_2__::func_1(iLocal_677[0], 0, 1))
								{
									TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_677[0], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
									PED::SET_PED_KEEP_TASK(iLocal_677[0], true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_677[0], false);
								}
								if (__LIB_2__::func_1(iLocal_677[1], 0, 1))
								{
									TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_677[1], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
									PED::SET_PED_KEEP_TASK(iLocal_677[1], true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_677[1], false);
								}
								if (__LIB_2__::func_1(iLocal_677[2], 0, 1))
								{
									TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_677[2], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
									PED::SET_PED_KEEP_TASK(iLocal_677[2], true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_677[2], false);
								}
								Local_309.f_50 = 1;
								func_7();
							}
							if (iLocal_670 != 1)
							{
							}
							else
							{
								__LIB_1__::func_948(-1370039648, 0, 0f, 0, 1, 0, 0, 0);
								__LIB_1__::func_948(-535642601, 0, 0f, 0, 1, 0, 0, 0);
							}
							iLocal_774 = 6;
						}
					}
					if (func_31())
					{
						Local_309.f_50 = 1;
						func_7();
					}
					if (__LIB_3__::func_365(&Local_309, &iLocal_677, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_7();
					}
					break;
			}
			BUILTIN::WAIT(Local_309.f_158);
		}
	}
}

void func_5()
{
	Local_284 = { 0f, 0f, 0f };
	Local_284.f_3 = Global_35;
	Local_284.f_8 = 4;
	Local_284.f_4 = 21030;
	Local_284.f_19 = 4;
	Local_284.f_20 = 4;
	Local_284.f_21 = 4;
	Local_284.f_22 = 4;
	Local_284.f_17 = 4;
	Local_284.f_18 = 4;
	Local_284.f_7 = 0;
}

void func_7()
{
	__LIB_0__::func_325(&(uLocal_681[0]));
	__LIB_0__::func_325(&(uLocal_681[1]));
	MAP::DISPLAY_RADAR(true);
	if (CAM::IS_SCREEN_FADED_OUT() && iLocal_840 == 1)
	{
		iLocal_840 = 0;
		CAM::DO_SCREEN_FADE_IN(5000);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_760))
	{
		VOLUME::_DELETE_VOLUME(iLocal_760);
	}
	__LIB_3__::func_606(&uLocal_761);
	__LIB_0__::func_172(iLocal_764);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_752))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_752);
		POPULATION::_0xA1CFB35069D23C23(iLocal_752);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_769, false);
		VOLUME::_DELETE_VOLUME(iLocal_752);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_763))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_763);
		POPULATION::_0xA1CFB35069D23C23(iLocal_763);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_771, false);
		VOLUME::_DELETE_VOLUME(iLocal_763);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_757))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_757);
		POPULATION::_0xA1CFB35069D23C23(iLocal_757);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_770, false);
		VOLUME::_DELETE_VOLUME(iLocal_757);
	}
	if (MISC::COMPARE_STRINGS(sLocal_14, "NONE", false, -1) != 0)
	{
		TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE(sLocal_14);
	}
	if (iLocal_670 == 1)
	{
		__LIB_1__::func_948(-1370039648, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(-535642601, 0, 0, 0, 1, 0, 0, 0);
	}
	__LIB_3__::func_480(&Local_271);
	__LIB_0__::func_172(iLocal_754);
	__LIB_0__::func_172(iLocal_753);
	__LIB_0__::func_172(iLocal_759);
	__LIB_0__::func_172(iLocal_755);
	__LIB_0__::func_172(iLocal_756);
	__LIB_0__::func_172(iLocal_757);
	__LIB_0__::func_172(iLocal_762);
	__LIB_0__::func_172(iLocal_765);
	__LIB_0__::func_172(iLocal_766);
	if (PATHFIND::_0xDE0EA444735C1368(iLocal_758))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_758);
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
	__LIB_1__::func_345();
	if (!__LIB_0__::func_27(iLocal_825, 2))
	{
		Local_309.f_45 = 0;
		__LIB_3__::func_252(&Local_309);
	}
	__LIB_3__::func_872(&Local_309, &iLocal_677, &uLocal_681, 0, uLocal_779, uLocal_855, 1, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_10()
{
	switch (__LIB_1__::func_898())
	{
		case 0:
			switch (Local_309.f_51.f_4)
			{
				case 0:
					iLocal_670 = 0;
					sLocal_14 = "RE_DAA_Knockout_Alley";
					break;
				case 1:
					iLocal_670 = 1;
					sLocal_14 = "NONE";
					break;
				case 2:
					iLocal_670 = 0;
					sLocal_14 = "RE_DAA_Knockout_Alley_b";
					break;
			}
			break;
	}
}

void func_11()
{
	switch (iLocal_670)
	{
		case 0:
			Local_600.f_4 = "script@beat@town@darkAlleyAmbush@followMe";
			Local_600.f_5 = "script@beat@town@darkAlleyAmbush@IG1_alley_knockout";
			Local_600.f_6 = "script@beat@town@darkAlleyAmbush@IG3_CRIMINAL_WAKE_UP";
			switch (Local_309.f_51.f_4)
			{
				case 0:
					vLocal_15 = { 2828.35f, -1261.02f, 46.54f };
					fLocal_57 = 0f;
					break;
				case 1:
					break;
				case 2:
					vLocal_15 = { 2731.094f, -1326.561f, 46.64879f };
					fLocal_57 = -182.8f;
					break;
			}
			break;
		case 1:
			Local_600.f_4 = "script@beat@town@darkAlleyAmbush@IG4_smuggler_intro";
			Local_600.f_5 = "script@beat@town@darkAlleyAmbush@IG5_smuggler_action";
			Local_600.f_6 = "script@beat@town@darkAlleyAmbush@IG3_CRIMINAL_WAKE_UP";
			Local_600.f_7 = "script@beat@town@darkAlleyAmbush@IG5_smuggler_action_only";
			break;
	}
}

Vector3 func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 143.404f;
				case 2:
					return 0f, 0f, -18f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_16()
{
	switch (iLocal_773)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_309))
			{
				if (MISC::COMPARE_STRINGS(sLocal_14, "NONE", false, -1) != 0)
				{
					TASK::REQUEST_WAYPOINT_RECORDING(sLocal_14);
				}
				func_55();
				func_56();
				func_57();
				__LIB_3__::func_314(&Local_271);
				func_59();
				WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 0);
				iLocal_773 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_772, cLocal_673))
			{
				return false;
			}
			if (MISC::COMPARE_STRINGS(sLocal_14, "NONE", false, -1) != 0 && !TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_14))
			{
				return false;
			}
			if (!WEAPON::_0xFF07CF465F48B830(joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_59))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_271))
			{
				return false;
			}
			if (!func_63())
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_503))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_18()
{
	switch (iLocal_776)
	{
		case 0:
			if (__LIB_3__::func_479(__LIB_3__::func_179(&Local_309), __LIB_3__::func_526(&Local_309), &Local_503, &iLocal_677, 0, 0, -1, 1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_19()
{
	func_69();
	if (__LIB_2__::func_1(iLocal_677[0], 0, 1))
	{
		ENTITY::SET_ENTITY_HEADING(iLocal_677[0], Local_503[0 /*32*/].f_9);
		__LIB_2__::func_190(iLocal_677[0], __LIB_3__::func_540(joaat("REWARD_BEAT_SMALL"), 0, -1));
		__LIB_2__::func_133(iLocal_677[0], &(Local_503[0 /*32*/].f_23), 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_677[0], true, true);
		__LIB_2__::func_272(iLocal_677[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		__LIB_3__::func_285(iLocal_677[0], &Local_309, 0);
		PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_677[0]);
		iLocal_760 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(iLocal_677[0], true, false), 0f, 0f, 0f, 4f, 4f, 5f, "FOCUS_VOL");
		PED::_0x7C00CFC48A782DC0(iLocal_760, iLocal_677[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		iLocal_768 = __LIB_3__::func_721(iLocal_677[0], iLocal_760, 28);
		__LIB_4__::func_256(iLocal_677[0]);
	}
	if (iLocal_670 == 0)
	{
		__LIB_1__::func_206(Local_503[1 /*32*/].f_6, 1.5f, 0);
	}
	if (__LIB_2__::func_1(iLocal_677[1], 0, 1))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_677[1], Local_503[1 /*32*/].f_6, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_677[1], Local_503[1 /*32*/].f_9);
		__LIB_2__::func_915(iLocal_677[1], joaat("WORLD_HUMAN_SMOKE"), Local_503[1 /*32*/].f_6, Local_503[1 /*32*/].f_9, -1, 1, 1, 0, -1082130432 /* Float: -1f */);
		__LIB_2__::func_190(iLocal_677[1], __LIB_3__::func_540(joaat("REWARD_BEAT_SMALL"), 0, -1));
		__LIB_2__::func_133(iLocal_677[1], &(Local_503[1 /*32*/].f_23), 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_677[1], true, true);
		__LIB_2__::func_272(iLocal_677[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_677[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
		__LIB_3__::func_285(iLocal_677[1], &Local_309, 0);
		PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_677[1]);
		__LIB_4__::func_256(iLocal_677[1]);
	}
	if (iLocal_670 == 1)
	{
		if (__LIB_2__::func_1(iLocal_677[2], 0, 1))
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_677[2], true, true);
			ENTITY::SET_ENTITY_COORDS(iLocal_677[2], Local_503[2 /*32*/].f_6, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_677[2], Local_503[2 /*32*/].f_9);
			__LIB_2__::func_915(iLocal_677[2], joaat("PROP_CAMP_FIRE_SEAT_BENCH"), Local_503[2 /*32*/].f_6, -21.7087f, -1, 1, 1, "PROP_CAMP_FIRE_SEAT_BENCH_MALE_B", -1082130432 /* Float: -1f */);
			__LIB_2__::func_190(iLocal_677[2], __LIB_3__::func_540(joaat("REWARD_BEAT_SMALL"), 0, -1));
			__LIB_2__::func_133(iLocal_677[2], &(Local_503[2 /*32*/].f_23), 0);
			__LIB_2__::func_272(iLocal_677[2], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_677[2], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
			PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_677[2]);
			__LIB_4__::func_256(iLocal_677[2]);
		}
	}
}

void func_20()
{
	if (iLocal_670 == 0)
	{
		Local_600 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_600.f_4, 0, "PBL_FRONT", false, true);
		Local_600.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_600.f_5, 0, "PBL_KNOCKOUT_VAR2_MAIN", false, true);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_600, "THUG_01", iLocal_677[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_600, Local_309.f_51, 0f, 0f, Local_309.f_51.f_3, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_600.f_1, "STRANGER", iLocal_677[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_600.f_1, "THUG", iLocal_677[1], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_600.f_1, "player_zero", Global_35, 0);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_600.f_1, vLocal_15, 0f, 0f, fLocal_57, 2);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_600, "internal_loop", true, false);
	}
	else if (iLocal_670 == 1)
	{
		Local_600 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_600.f_4, 0, "PBL_FRONT", false, true);
		Local_600.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_600.f_5, 0, "pbl_smuggler_enter_room", false, true);
		Local_600.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_600.f_7, 0, "pbl_smuggler_enter_room", false, true);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_600, "STRANGER", iLocal_677[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_600.f_3, "STRANGER", iLocal_677[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_600.f_1, "THUG_02", iLocal_677[1], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_600.f_1, "THUG_03", iLocal_677[2], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_600.f_1, "player_zero", Global_35, 0);
		Local_271[0 /*12*/].f_8 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 2, 2833.42f, -1157.745f, 46.054f, true, 1f);
		ENTITY::SET_ENTITY_ROTATION(Local_271[0 /*12*/].f_8, -87.6568f, -37.8961f, -66.2336f, 2, true);
		ENTITY::SET_ENTITY_COORDS(Local_271[0 /*12*/].f_8, 2833.42f, -1157.745f, 46.054f, true, false, true, true);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_600.f_1, "w_shotgun_doubleBarrel01", Local_271[0 /*12*/].f_8, 0);
	}
	Local_600.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_600.f_6, 0, "PBL_WAKES_UP", false, true);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_600.f_4))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_600, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_600);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_600.f_5))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_600.f_1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_600.f_1);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_600.f_6))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_600.f_2, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_600.f_2);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_600.f_7))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_600.f_3, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_600.f_3);
		}
	}
}

void func_21()
{
	iLocal_752 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("AMBIENT_RESTRICTION");
	VOLUME::_0x39816F6F94F385AD(iLocal_752, Local_608.f_44, Local_608.f_47, Local_608.f_50);
	if (!__LIB_0__::func_86(Local_608.f_53))
	{
		iLocal_753 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(Local_608.f_53, Local_608.f_56, Local_608.f_59, "VOL_ALLEY");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_752, iLocal_753);
	}
	PATHFIND::_0x19C7567D2F2287D6(iLocal_752, 16);
	__LIB_3__::func_627(&uLocal_761, Local_309.f_51, 0f, 0f, 0f, 20f, 20f, 10f, 0, 16384, 0);
	if (iLocal_670 == 0)
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_14, 1, 1065353216 /* Float: 1f */, 0.9f, 1);
	}
	iLocal_754 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(Local_608.f_17, Local_608.f_20, Local_608.f_23, "VOL_TRIGGER");
	if (iLocal_670 == 1)
	{
		iLocal_755 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2833.238f, -1156.629f, 46.82082f, 0f, 0f, 15.83001f, 17.022f, 9.112f, 6.006338f, "ANTI_CLIMB_VOL");
		iLocal_759 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2829.29f, -1157.749f, 46.82082f, 0f, 0f, 15.83001f, 16.611f, 15.653f, 16.929f, "ABANDON_EVENT_TRIGGER");
	}
	if (iLocal_670 == 1)
	{
		__LIB_3__::func_557(&iLocal_756, 2832.81f, -1156.75f, 46.82082f, 0f, 0f, 15.83001f, 10.48214f, 7.46016f, 6.006338f, "REVENGE_VOLUME");
	}
	iLocal_757 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(Local_608.f_35, Local_608.f_38, Local_608.f_41, "VOL_HORSE_DISMOUNT");
	POPULATION::_0xB56D41A694E42E86(iLocal_757, 10208, 0, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_757, 10208, 0, 0, -1, -1, 2);
	__LIB_3__::func_557(&iLocal_758, Local_309.f_51, 0f, 0f, Local_309.f_51.f_3, 11f, 8f, 5f, "NAV_BLOCKER");
	PATHFIND::_0x19C7567D2F2287D6(iLocal_758, 16);
	__LIB_0__::func_566(iLocal_752, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_752, 0, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_752, 0, 0, 0, -1, -1, 0);
	uLocal_769 = PED::_0x4C39C95AE5DB1329(iLocal_752, 0, 15);
	uLocal_770 = PED::_0x4C39C95AE5DB1329(iLocal_757, 0, 15);
	MISC::CLEAR_AREA(Local_309.f_51, 8f, 16384);
	func_83(joaat("P_CS_SACKCORN01X"));
	if (iLocal_670 == 0 && iLocal_58 == 2)
	{
		__LIB_3__::func_557(&iLocal_765, 2738.169f, -1319.127f, 47.648f, 0f, 0f, -35.526f, 1.2f, 7.78f, 5f, "BLOCKER_VOL_1");
		__LIB_3__::func_557(&iLocal_766, 2735.841f, -1317.401f, 47.648f, 0f, 0f, -35.526f, 1.2f, 7.78f, 5f, "BLOCKER_VOL_2");
	}
}

void func_22()
{
	switch (Local_309.f_51.f_4)
	{
		case 0:
			__LIB_1__::func_948(-647494260, 1, 1f, 1, 0, 0f, 1, 0);
			break;
		case 1:
			__LIB_1__::func_948(-1370039648, 1, 0f, 0, 0, 0f, 0, 0);
			__LIB_1__::func_948(-535642601, 1, 0f, 0, 0, 0f, 0, 0);
			break;
	}
}

bool func_23(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam2);
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
			if (!func_92(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
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

bool func_27(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		if (__LIB_3__::func_605((*iParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

bool func_31()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	if (__LIB_0__::func_665(Global_35, iLocal_677[0], 1, 1) < 25f)
	{
		func_106();
		func_107();
		func_108();
		if (iLocal_774 == 3 || iLocal_774 == 1)
		{
			func_109();
		}
		func_110();
		iVar0 = __LIB_0__::func_399(Global_35, 1, 0, 0);
		if ((iVar0 == joaat("WEAPON_KIT_CAMERA") || iVar0 == joaat("WEAPON_KIT_BINOCULARS")) || iVar0 == joaat("WEAPON_KIT_DETECTOR"))
		{
			if ((iLocal_670 == 0 && __LIB_0__::func_27(iLocal_824, 2048)) || (iLocal_670 == 1 && __LIB_0__::func_27(iLocal_824, 256)))
			{
				WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 1);
			}
		}
	}
	func_112();
	func_113();
	func_114();
	if (((ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_600) || ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_600.f_1)) || ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_600.f_2)) || ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_600.f_3))
	{
		func_115();
	}
	_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_677[0], &Local_284);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_677[0], false);
	PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_677[0], false);
	if (iLocal_670 == 1)
	{
		switch (iLocal_832)
		{
			case 0:
				__LIB_0__::func_400(-2096572276);
				iLocal_832++;
				break;
			case 1:
				__LIB_0__::func_401(-2096572276);
				iLocal_832++;
				break;
		}
	}
	if (((iLocal_835 == 1 || __LIB_0__::func_195(vLocal_24, vLocal_27, Global_36)) && iLocal_670 == 0) && __LIB_0__::func_27(iLocal_825, 2))
	{
		PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_BEHIND"), false);
		if ((CAM::_0xA24C1D341C6E0D53(1, 0, 1) && !__LIB_0__::func_27(iLocal_825, 4096)) && Local_309.f_46 == 0)
		{
			if ((!__LIB_1__::func_373(vLocal_30, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */) && iLocal_778 != 2) && !__LIB_0__::func_27(iLocal_824, 2048))
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_764))
				{
					iLocal_764 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), Local_608.f_44, Local_608.f_47, Local_608.f_50);
				}
			}
			else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_764))
			{
				__LIB_0__::func_172(iLocal_764);
			}
		}
		else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_764))
		{
			__LIB_0__::func_172(iLocal_764);
		}
	}
	switch (iLocal_774)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_600, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_600.f_1, true, false))
			{
				func_120();
				func_121();
				ANIMSCENE::START_ANIM_SCENE(Local_600);
				iLocal_774 = 1;
			}
			break;
		case 1:
			if (iLocal_670 == 1 && !__LIB_0__::func_27(iLocal_824, 8))
			{
				if (__LIB_1__::func_205(Global_35, iLocal_756, 1, 0))
				{
					return true;
				}
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600, "PBL_LEFT"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600, "PBL_LEFT");
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600, "PBL_FRONT"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600, "PBL_FRONT");
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600, "PBL_RIGHT"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600, "PBL_RIGHT");
			}
			iLocal_799 = __LIB_3__::func_112(iLocal_677[0], Global_35, 1060437492 /* Float: 0.707f */);
			vVar1 = { __LIB_2__::func_114(Global_35, 1.25f) };
			fVar4 = 16f;
			if (ENTITY::GET_ENTITY_SPEED(Global_35) > 7f)
			{
				fVar4 = (fVar4 + 5f);
			}
			fVar5 = (fVar4 + 5f);
			if (__LIB_0__::func_94(iLocal_677[0], vVar1, 1) < fVar4)
			{
				fVar4 = (fVar4 + 5f);
			}
			if (__LIB_2__::func_215(iLocal_677[0], Global_35, 0, fVar5, 0) && __LIB_3__::func_452(&Local_309, 1f, 40f, fVar4, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				__LIB_1__::func_683(&iLocal_824, 1);
				if (iLocal_799 == 3)
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_600, "PBL_LEFT"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_600, "PBL_LEFT", true);
					}
				}
				else if (iLocal_799 == 0)
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_600, "PBL_FRONT"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_600, "PBL_FRONT", true);
					}
				}
				else if (iLocal_799 == 2)
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_600, "PBL_RIGHT"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_600, "PBL_RIGHT", true);
					}
				}
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_600, "bool_alley_idle", true, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_600, "ACTION_1", true, false);
				iLocal_774 = 3;
			}
			break;
		case 3:
			if (iLocal_670 == 1 && !__LIB_0__::func_27(iLocal_824, 8))
			{
				if (__LIB_1__::func_205(Global_35, iLocal_756, 1, 0))
				{
					return true;
				}
			}
			if ((!__LIB_0__::func_27(iLocal_824, 8192) && __LIB_0__::func_665(Global_35, iLocal_677[0], 1, 1) > 35f) && Local_309.f_46 == 0)
			{
				if (__LIB_0__::func_27(iLocal_825, 4))
				{
					Local_309.f_44 = 1;
				}
				return true;
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_600.f_1) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_600.f_1, false)) && iLocal_670 == 1)
			{
				if (!__LIB_0__::func_27(iLocal_824, 16384))
				{
					if (__LIB_0__::func_94(Global_35, 2839.646f, -1153.57f, 45.46644f, 1) > 6f)
					{
						__LIB_1__::func_683(&iLocal_824, 16384);
						__LIB_1__::func_585(&uLocal_737, -3f);
						__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("WHERE_DO_YOU_THINK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if ((!__LIB_1__::func_205(Global_35, iLocal_752, 1, 0) && __LIB_0__::func_94(Global_35, 2839.646f, -1153.57f, 45.46644f, 1) > 17f) && !__LIB_0__::func_27(iLocal_824, 256))
				{
					return true;
				}
			}
			if (func_132())
			{
				if (iLocal_670 == 1)
				{
					__LIB_3__::func_596(&uLocal_728, 0);
				}
				if (iLocal_670 == 1)
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_677[0], 2834.749f, -1157.708f, 45.57403f, -15.63f, true, false, true);
					__LIB_2__::func_915(iLocal_677[0], joaat("WORLD_HUMAN_SMOKE"), 2834.749f, -1157.708f, 45.57403f, -15.63f, -1, 0, 1, 0, -1082130432 /* Float: -1f */);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_677[1], 2833.864f, -1154.08f, 45.55641f, 161.99f, true, true, true);
					__LIB_2__::func_915(iLocal_677[1], joaat("WORLD_HUMAN_SMOKE"), 2833.864f, -1154.08f, 45.55641f, 161.99f, -1, 0, 1, 0, -1082130432 /* Float: -1f */);
					iVar6 = __LIB_0__::func_23();
					__LIB_3__::func_539(80, 1, iVar6);
					__LIB_1__::func_991(iLocal_677[0], 0);
					__LIB_1__::func_991(iLocal_677[1], 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_677[0], 6, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_677[1], 6, true);
					__LIB_3__::func_480(&Local_271);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_677[2]));
					__LIB_1__::func_948(-1370039648, 0, 0f, 0, 1, 0, 0, 0);
					__LIB_1__::func_948(-535642601, 0, 0f, 0, 1, 0, 0, 0);
				}
				__LIB_2__::func_180(&(Local_309.f_5), 0);
				iLocal_774 = 4;
			}
			break;
		case 4:
			if (iLocal_670 == 0)
			{
				iLocal_774 = 7;
			}
			else
			{
				if (iLocal_828 > 1000)
				{
					iVar13 = __LIB_3__::func_562(80, 1);
					iLocal_828 = 0;
					func_138(iVar13, &uVar7, &uVar8, &iVar9, &iVar10, &uVar11, &uVar12);
					if (((iVar9 > 12 || iVar10 > 1) && func_139()) && !__LIB_0__::func_27(iLocal_824, 4096))
					{
						iLocal_774 = 7;
					}
				}
				else
				{
					iLocal_828++;
				}
				if (__LIB_3__::func_601(&uLocal_725, 1f))
				{
					__LIB_3__::func_600(Global_35, Global_35, func_130("PLY_WAKE_UP_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (!__LIB_0__::func_27(iLocal_824, 4096) && (__LIB_1__::func_205(Global_35, iLocal_756, 1, 0) || ((__LIB_1__::func_205(Global_35, iLocal_752, 1, 0) && __LIB_1__::func_472(iLocal_677[0], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_677[0], Global_35, 17))))
				{
					__LIB_1__::func_683(&iLocal_824, 4096);
					PED::_0x802092B07E3B1EEA(iLocal_677[0], Global_36, 3);
					PED::_0x802092B07E3B1EEA(iLocal_677[1], Global_36, 3);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_671);
					TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "DEFAULT_SHOCKED", 2.5f, 0, 4);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					__LIB_1__::func_474(iLocal_677[0], &iLocal_671, 0, 0, 1, 1);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_671);
					TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "DEFAULT_SHOCKED", 3f, 0, 4);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					__LIB_1__::func_474(iLocal_677[1], &iLocal_671, 0.25f, 0.3f, 1, 1);
					iLocal_774 = 5;
					Local_309.f_46 = 1;
					if (__LIB_2__::func_1(iLocal_677[0], 0, 1))
					{
						__LIB_3__::func_600(Global_35, iLocal_677[0], func_130("PLY_CONFRONT_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_991(iLocal_677[0], 0);
					__LIB_1__::func_991(iLocal_677[1], 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_677[0], 6, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_677[1], 6, true);
					__LIB_2__::func_73(iLocal_677[0], &(uLocal_681[0]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
					__LIB_2__::func_73(iLocal_677[1], &(uLocal_681[1]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
					__LIB_2__::func_259(&uLocal_728);
				}
			}
			break;
		case 5:
			if (!__LIB_0__::func_27(iLocal_825, 268435456))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || __LIB_4__::func_118(&uLocal_728) > 1.5f)
				{
					if (__LIB_2__::func_1(iLocal_677[0], 0, 1))
					{
						__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("HES_BACK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_683(&iLocal_825, 268435456);
					__LIB_2__::func_259(&uLocal_728);
					iLocal_774 = 7;
				}
			}
			break;
		case 6:
			iVar14 = 0;
			iVar15 = 1;
			iLocal_835 = 0;
			if (PATHFIND::_0xDE0EA444735C1368(iLocal_758))
			{
				PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_758);
				__LIB_0__::func_172(iLocal_758);
				POPULATION::_0x74C2B3DC0B294102(iLocal_752);
				__LIB_0__::func_172(iLocal_752);
				POPULATION::_0x74C2B3DC0B294102(iLocal_757);
				__LIB_0__::func_172(iLocal_757);
			}
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
			__LIB_4__::func_86(&Local_781);
			__LIB_1__::func_345();
			iLocal_834 = 0;
			func_147();
			__LIB_3__::func_658(iLocal_768, 1);
			__LIB_0__::func_172(iLocal_767);
			if ((func_149(0) || func_149(1)) || func_149(2))
			{
				iVar14 = 1;
			}
			if (iLocal_851 == 1 && iLocal_58 == 2)
			{
				__LIB_2__::func_426(&(iLocal_677[1]));
			}
			__LIB_3__::func_593(0);
			if (iVar14 == 1)
			{
				if (__LIB_2__::func_1(iLocal_677[0], 0, 1))
				{
					if (iLocal_670 == 1)
					{
						if (__LIB_0__::func_27(iLocal_824, 512))
						{
							__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("BIG_MISTAKE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_824, 4096);
							iVar15 = 0;
							__LIB_1__::func_561(&uLocal_728);
						}
						else
						{
							__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("AGGRO_ROOM"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else
					{
						__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (__LIB_2__::func_1(iLocal_677[1], 0, 1))
				{
					__LIB_3__::func_600(iLocal_677[1], Global_35, func_130("AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (__LIB_2__::func_1(iLocal_677[0], 0, 1) && !__LIB_0__::func_27(iLocal_825, 4096))
			{
				__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("AGGRO_MINOR"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_0__::func_325(&(uLocal_681[0]));
			}
			__LIB_1__::func_683(&iLocal_825, 1024);
			func_153(iVar14, 0, iVar15);
			func_153(iVar14, 1, 0);
			func_153(iVar14, 2, 0);
			if (__LIB_0__::func_27(iLocal_824, 4))
			{
				Local_309.f_44 = 1;
			}
			if (iVar14 == 1)
			{
				iLocal_774 = 7;
			}
			else
			{
				return true;
			}
			break;
		case 7:
			if (__LIB_0__::func_27(iLocal_824, 4096) && __LIB_2__::func_1(iLocal_677[0], 0, 1))
			{
				if (__LIB_4__::func_118(&uLocal_728) > 2f && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_677[0]))
				{
					__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("BIG_MISTAKE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_561(&uLocal_728);
					Local_309.f_46 = 1;
				}
			}
			if ((__LIB_0__::func_27(iLocal_824, 4096) && !__LIB_0__::func_27(iLocal_825, 536870912)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				if (!__LIB_2__::func_1(iLocal_677[0], 0, 1) && !__LIB_2__::func_1(iLocal_677[1], 0, 1))
				{
					__LIB_1__::func_683(&iLocal_825, 536870912);
					__LIB_3__::func_600(Global_35, iLocal_677[0], func_130("PLY_CONFRONT_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			if (__LIB_0__::func_27(iLocal_824, 4096) && __LIB_0__::func_27(iLocal_825, 536870912))
			{
				if (((!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_677[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_677[1])) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_677[2]))
				{
					if ((__LIB_2__::func_1(iLocal_677[0], 0, 0) || __LIB_2__::func_1(iLocal_677[1], 0, 0)) || __LIB_2__::func_1(iLocal_677[2], 0, 0))
					{
						switch (iLocal_831)
						{
							case 0:
								if (__LIB_2__::func_1(iLocal_677[0], 0, 0))
								{
									__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("HOGTIED_POST"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								else if (__LIB_2__::func_1(iLocal_677[1], 0, 0))
								{
									__LIB_3__::func_600(iLocal_677[1], Global_35, func_130("HOGTIED_POST"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								else if (__LIB_2__::func_1(iLocal_677[2], 0, 0))
								{
									__LIB_3__::func_600(iLocal_677[2], Global_35, func_130("HOGTIED_POST"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								iLocal_831++;
								break;
							case 1:
								if (__LIB_2__::func_1(iLocal_677[0], 0, 0))
								{
									__LIB_3__::func_600(Global_35, iLocal_677[0], func_130("CONFRONT_HOGTIE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								else if (__LIB_2__::func_1(iLocal_677[1], 0, 0))
								{
									__LIB_3__::func_600(Global_35, iLocal_677[1], func_130("CONFRONT_HOGTIE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								else if (__LIB_2__::func_1(iLocal_677[2], 0, 0))
								{
									__LIB_3__::func_600(Global_35, iLocal_677[2], func_130("CONFRONT_HOGTIE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								iLocal_831++;
								break;
						}
					}
				}
			}
			if (func_139() || (__LIB_0__::func_27(iLocal_824, 512) && !__LIB_0__::func_27(iLocal_824, 4096)))
			{
				if (__LIB_0__::func_27(iLocal_824, 512))
				{
				}
				if (__LIB_0__::func_27(iLocal_824, 4096))
				{
				}
				return true;
			}
			if (__LIB_0__::func_27(iLocal_825, 4096) && !__LIB_0__::func_27(iLocal_824, 256))
			{
				if (iLocal_670 == 1)
				{
					if (__LIB_1__::func_205(Global_35, iLocal_756, 1, 0))
					{
						return true;
					}
				}
			}
			return false;
	}
	return false;
}

void func_55()
{
	switch (__LIB_0__::func_12())
	{
		case 5:
			if (iLocal_670 == 0)
			{
				Local_503[0 /*32*/].f_1 = joaat("G_M_M_UNICRIMINALS_01");
				Local_503[0 /*32*/] = 4;
				Local_503[0 /*32*/].f_3 = 1649050579;
				StringCopy(&(Local_503[0 /*32*/].f_23), "0130_G_M_M_UniCriminals_01_WHITE_01", 64);
				Local_503[1 /*32*/].f_1 = joaat("RE_DARKALLEYAMBUSH_MALES_01");
				Local_503[1 /*32*/] = 4;
				Local_503[1 /*32*/].f_3 = -2060755033;
				StringCopy(&(Local_503[1 /*32*/].f_23), "1060_G_M_M_UniCriminals_01_WHITE_07", 64);
			}
			else if (iLocal_670 == 1)
			{
				Local_503[0 /*32*/].f_1 = joaat("G_M_M_UNICRIMINALS_01");
				Local_503[0 /*32*/] = 4;
				Local_503[0 /*32*/].f_3 = 1066175139;
				StringCopy(&(Local_503[0 /*32*/].f_23), "1056_G_M_M_UniCriminals_01_WHITE_03", 64);
				Local_503[1 /*32*/].f_1 = joaat("RE_DARKALLEYAMBUSH_MALES_01");
				Local_503[1 /*32*/] = 4;
				Local_503[1 /*32*/].f_3 = 2061486876;
				StringCopy(&(Local_503[1 /*32*/].f_23), "1065_G_M_M_UniCriminals_01_BLACK_04", 64);
				Local_503[2 /*32*/].f_1 = joaat("RE_DARKALLEYAMBUSH_MALES_01");
				Local_503[2 /*32*/] = 4;
				Local_503[2 /*32*/].f_3 = 748072587;
				StringCopy(&(Local_503[2 /*32*/].f_23), "1063_G_M_M_UniCriminals_01_WHITE_10", 64);
				__LIB_3__::func_303(&(Local_503[2 /*32*/].f_22));
			}
			break;
	}
	__LIB_3__::func_303(&(Local_503[0 /*32*/].f_22));
	__LIB_3__::func_303(&(Local_503[1 /*32*/].f_22));
}

void func_56()
{
	__LIB_3__::func_445(&Local_503);
}

void func_57()
{
	Local_271[0 /*12*/].f_7 = __LIB_3__::func_586(joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
}

void func_59()
{
	if (iLocal_670 == 0)
	{
		Local_228[1 /*2*/] = "script_re@dark_alley_ambush";
		Local_228[1 /*2*/].f_1 = "IDLE_INTIAL";
		Local_228[0 /*2*/] = "script_re@dark_alley_ambush";
		Local_228[0 /*2*/].f_1 = "ambush_thug01";
		Local_228[2 /*2*/] = "script_re@dark_alley_ambush";
		Local_228[2 /*2*/].f_1 = "ambush_idle_thug01";
		Local_228[3 /*2*/] = "script_re@dark_alley_ambush";
		Local_228[3 /*2*/].f_1 = "wait_loop_thug01";
		Local_228[4 /*2*/] = "script_re@dark_alley_ambush";
		Local_228[4 /*2*/].f_1 = "like_to_make_money";
		Local_228[5 /*2*/] = "script_re@dark_alley_ambush";
		Local_228[5 /*2*/].f_1 = "follow_me";
		Local_228[6 /*2*/] = "script_re@dark_alley_ambush";
		Local_228[6 /*2*/].f_1 = "exit_thug01";
		Local_228[7 /*2*/] = "script_re@dark_alley_ambush";
		Local_228[7 /*2*/].f_1 = "callover_mid";
		Local_228[8 /*2*/] = "script_re@dark_alley_ambush";
		Local_228[8 /*2*/].f_1 = "idle";
		Local_228[9 /*2*/] = "script_re@dark_alley_ambush";
		Local_228[9 /*2*/].f_1 = "ambush_wait_loop_thug01";
		Local_228[10 /*2*/] = "script_re@dark_alley_ambush";
		Local_228[10 /*2*/].f_1 = "what_r_u_waiting_for";
		Local_228[11 /*2*/] = "script_re@dark_alley_ambush@ig@ig1_alley_knockout";
		Local_228[11 /*2*/].f_1 = "knockout_var2_callover_01_Stranger";
		Local_228[12 /*2*/] = "script_re@dark_alley_ambush@ig@ig1_alley_knockout";
		Local_228[12 /*2*/].f_1 = "knockout_var2_callover_02_Stranger";
		__LIB_3__::func_318(Local_228[0 /*2*/], &uLocal_59);
		__LIB_3__::func_318(Local_228[7 /*2*/], &uLocal_59);
		__LIB_3__::func_318(Local_228[11 /*2*/], &uLocal_59);
	}
	if (iLocal_670 == 1)
	{
		Local_228[13 /*2*/] = "script_re@dark_alley_ambush@ig@ig4_smuggler_intro";
		Local_228[13 /*2*/].f_1 = "Ammunition_explosives_smuggler";
		Local_228[14 /*2*/] = "script_re@dark_alley_ambush@ig@ig4_smuggler_intro";
		Local_228[14 /*2*/].f_1 = "Follow_me_smuggler";
		Local_228[15 /*2*/] = "script_re@dark_alley_ambush@ig@ig4_smuggler_intro";
		Local_228[15 /*2*/].f_1 = "I_guarantee_you_smuggler";
		Local_228[16 /*2*/] = "script_re@dark_alley_ambush@ig@ig4_smuggler_intro";
		Local_228[16 /*2*/].f_1 = "Ive_got_some_goods_smuggler";
		Local_228[17 /*2*/] = "script_re@dark_alley_ambush@ig@ig5_smuggler_action";
		Local_228[17 /*2*/].f_1 = "Smuggler_enter_room_smuggler";
		Local_228[18 /*2*/] = "script_re@dark_alley_ambush@ig@ig5_smuggler_action";
		Local_228[18 /*2*/].f_1 = "Smuggler_enter_room_door";
		Local_228[19 /*2*/] = "script_re@dark_alley_ambush@ig@ig5_smuggler_action";
		Local_228[19 /*2*/].f_1 = "Gang_loop_smuggler";
		Local_228[20 /*2*/] = "script_re@dark_alley_ambush@ig@ig5_smuggler_action";
		Local_228[20 /*2*/].f_1 = "Gang_player_ambushed_smuggler";
		Local_228[7 /*2*/] = "script_re@dark_alley_ambush";
		Local_228[7 /*2*/].f_1 = "callover_mid";
		Local_228[8 /*2*/] = "script_re@dark_alley_ambush";
		Local_228[8 /*2*/].f_1 = "idle";
		__LIB_3__::func_318(Local_228[13 /*2*/], &uLocal_59);
		__LIB_3__::func_318(Local_228[7 /*2*/], &uLocal_59);
		__LIB_3__::func_318(Local_228[17 /*2*/], &uLocal_59);
	}
}

bool func_63()
{
	if (!STREAMING::HAS_MODEL_LOADED(Local_503[0 /*32*/].f_1) || !STREAMING::HAS_MODEL_LOADED(Local_503[1 /*32*/].f_1))
	{
		return false;
	}
	return true;
}

void func_69()
{
	switch (__LIB_0__::func_12())
	{
		case 5:
			func_204();
			break;
		default:
			break;
	}
}

void func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = 0;
	iVar3 = ITEMSET::CREATE_ITEMSET(false);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_752))
	{
		iVar0 = ENTITY::_0x886171A12F400B89(iLocal_752, iVar3, 3);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar3);
			iVar4 = MISC::_GET_ENTITY_FROM_ITEM(iVar2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				iVar5 = ENTITY::GET_ENTITY_MODEL(iVar4);
				if (iVar5 == iParam0)
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, true, false);
					}
					ENTITY::DELETE_ENTITY(&iVar4);
				}
			}
			iVar1++;
		}
	}
	ITEMSET::_CLEAR_ITEMSET(iVar3);
}

bool func_92(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = 30f;
	fVar1 = 150f;
	if (__LIB_1__::func_85(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (__LIB_1__::func_923())
			{
				fVar0 = 15f;
			}
		}
		if (__LIB_3__::func_182(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (!__LIB_3__::func_182(uParam2, fVar1))
		{
			if (!__LIB_2__::func_117(Global_1310750[uParam2->f_3 /*111*/].f_38))
			{
				return false;
			}
		}
		if (!__LIB_3__::func_281(uParam2->f_3, 2) && __LIB_3__::func_290(2))
		{
			return false;
		}
		if (__LIB_1__::func_85(iParam0, 4194304) || __LIB_1__::func_85(iParam0, 33554432))
		{
			if (__LIB_1__::func_995(1))
			{
				return false;
			}
		}
	}
	if (__LIB_1__::func_376(Global_35))
	{
		return false;
	}
	if (__LIB_0__::func_296(0, 1, 1) && !__LIB_1__::func_271(iParam0))
	{
		return false;
	}
	if (!*uParam1 && __LIB_1__::func_85(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (__LIB_3__::func_291(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (__LIB_3__::func_183())
		{
			return false;
		}
		iVar2 = __LIB_3__::func_250(__LIB_0__::func_12());
		if (__LIB_0__::func_625(iVar2))
		{
			if (__LIB_3__::func_184(Global_36, iVar2))
			{
				return false;
			}
		}
		if (__LIB_3__::func_251(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (__LIB_3__::func_602(&(uParam2->f_91), 0, 1084227584 /* Float: 5f */, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_106()
{
	if (__LIB_2__::func_1(iLocal_677[0], 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -393408341))
		{
			ANIMSCENE::SET_ANIM_SCENE_RATE(Local_600.f_1, 1.5f);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -889740022))
		{
			ANIMSCENE::SET_ANIM_SCENE_RATE(Local_600.f_1, 1f);
		}
		if (!__LIB_0__::func_27(iLocal_825, 1))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], 1543070371))
			{
				__LIB_2__::func_73(iLocal_677[0], &(uLocal_681[0]), -89429847, 1679075994, 0, "RE_INTER_STRANGER");
				__LIB_1__::func_683(&iLocal_825, 1);
				__LIB_3__::func_596(&uLocal_746, 0);
				__LIB_2__::func_315(1891783641, iLocal_677[0], 1);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], -400493628))
		{
			__LIB_2__::func_315(1891783641, iLocal_677[0], 1);
		}
		if (!__LIB_0__::func_27(iLocal_825, 2))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], 151604204))
			{
				if (__LIB_0__::func_12() == 38 && !__LIB_2__::func_407(0))
				{
					__LIB_3__::func_593(0);
					__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("MONEY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_825, 2);
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_825, 2))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], 2076716067))
			{
				if (__LIB_0__::func_12() == 38 && __LIB_2__::func_407(0))
				{
					__LIB_3__::func_593(0);
					__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("MONEY_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_825, 2);
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_825, 2))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], 1388775939))
			{
				if (__LIB_0__::func_12() == 5 && !__LIB_2__::func_407(0))
				{
					__LIB_3__::func_593(0);
					__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("MONEY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_825, 2);
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_825, 2))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], -1378311352))
			{
				if (__LIB_0__::func_12() == 5 && __LIB_2__::func_407(0))
				{
					__LIB_3__::func_593(0);
					__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("MONEY_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_825, 2);
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_825, 4))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], 156402854))
			{
				__LIB_1__::func_683(&iLocal_825, 4);
			}
		}
		if (!__LIB_0__::func_27(iLocal_825, 32))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], -746801603))
			{
				__LIB_1__::func_683(&iLocal_825, 32);
			}
		}
		if (!__LIB_0__::func_27(iLocal_825, 32))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], 2104476711))
			{
				__LIB_1__::func_683(&iLocal_825, 32);
			}
		}
		if (!__LIB_0__::func_27(iLocal_825, 128))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], 159718797))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_677[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
				__LIB_1__::func_683(&iLocal_825, 128);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("PLY_HIT")))
		{
			__LIB_3__::func_593(0);
			__LIB_3__::func_600(Global_35, iLocal_677[0], func_130("PLY_HIT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_824, 536870912);
			ANIMSCENE::SET_ANIM_SCENE_RATE(Local_600.f_1, 1f);
			GRAPHICS::ANIMPOSTFX_PLAY("PlayerImpact04");
			__LIB_0__::func_854(Global_35, 0.85f, 0);
			__LIB_1__::func_683(&iLocal_824, 8192);
			if (iLocal_670 == 0)
			{
				MAP::DISPLAY_RADAR(false);
				__LIB_2__::func_480(&Local_878, 1, 1, 1, 0);
				__LIB_4__::func_399(&(Local_856[0 /*21*/]), &Local_878);
			}
			__LIB_4__::func_86(&Local_781);
			__LIB_1__::func_345();
			iLocal_834 = 0;
		}
		if (__LIB_0__::func_27(iLocal_824, 8192) && !__LIB_0__::func_27(iLocal_824, 2097152))
		{
			PED::_0x8B3B71C80A29A4BB(Global_35, joaat("MOODKNOCKEDOUT"), 6);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], joaat("YOU_CAN_TELL")))
		{
			__LIB_3__::func_593(0);
			__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("YOU_CAN_TELL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], joaat("ROB_AND_DUMP")))
		{
			__LIB_3__::func_593(0);
			__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("ROB_AND_DUMP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], -423719632))
		{
			if (iLocal_58 == 2)
			{
				TASK::TASK_PLAY_ANIM(iLocal_677[1], Local_228[1 /*2*/], Local_228[1 /*2*/].f_1, 2f, -2f, -1, 24, 0f, false, 65536, false, 0, false);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], joaat("HEY_YOU")))
		{
			__LIB_3__::func_593(0);
			__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("HEY_YOU"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_2__::func_73(iLocal_677[0], &(uLocal_681[0]), -89429847, 1679075994, 0, "RE_INTER_STRANGER");
			__LIB_1__::func_683(&iLocal_825, 1);
			__LIB_3__::func_596(&uLocal_746, 0);
			__LIB_2__::func_315(1891783641, iLocal_677[0], 1);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], 1024511496))
		{
			if (!MAP::DOES_BLIP_EXIST(uLocal_681[0]))
			{
				__LIB_2__::func_73(iLocal_677[0], &(uLocal_681[0]), -89429847, 1679075994, 0, "RE_INTER_STRANGER");
			}
			__LIB_1__::func_683(&iLocal_825, 2);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], joaat("DRAW_GUN")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_677[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], 1235541442))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_677[0], joaat("WEAPON_UNARMED"), true, 0, false, false);
		}
	}
	if (__LIB_2__::func_1(iLocal_677[1], 0, 1))
	{
		if (!__LIB_0__::func_27(iLocal_825, 256))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[1], 159718797))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_677[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
				__LIB_1__::func_683(&iLocal_825, 256);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[1], 222594952))
		{
			if (__LIB_2__::func_136(Global_35, 0))
			{
				__LIB_2__::func_504(Global_35, 100);
			}
			__LIB_2__::func_480(&Local_878, 1, 1, 1, 0);
			__LIB_4__::func_399(&(Local_856[0 /*21*/]), &Local_878);
			func_286(iLocal_677[0], 1, joaat("AGGRESSIVE"));
			func_286(iLocal_677[1], 1, joaat("AGGRESSIVE"));
			if (__LIB_2__::func_1(iLocal_677[2], 0, 1))
			{
				func_286(iLocal_677[2], 1, joaat("AGGRESSIVE"));
			}
			MAP::DISPLAY_RADAR(false);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[1], joaat("THESE_IDIOTS")))
		{
			__LIB_3__::func_593(0);
			__LIB_3__::func_600(iLocal_677[1], iLocal_677[0], func_130("THESE_IDIOTS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[1], joaat("HOLD_IT")))
		{
			__LIB_3__::func_593(0);
			__LIB_2__::func_504(iLocal_677[0], 100);
			__LIB_3__::func_600(iLocal_677[1], iLocal_677[0], func_130("HOLD_IT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[1], joaat("ROB_AND_DUMP")))
		{
			__LIB_3__::func_593(0);
			__LIB_3__::func_600(iLocal_677[1], iLocal_677[0], func_130("ROB_AND_DUMP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[1], joaat("HANDS_UP")))
		{
			__LIB_3__::func_593(0);
			__LIB_3__::func_600(iLocal_677[1], Global_35, func_130("HANDS_UP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[1], joaat("I_KNEW")))
		{
			if (__LIB_0__::func_492(1) >= 100)
			{
				__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("I_KNEW"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else if (iLocal_670 == 0)
			{
				__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("NO_MONEY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_3__::func_600(iLocal_677[2], iLocal_677[1], func_130("DUMP_HIM"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("PLY_SURPRISE")))
	{
		__LIB_3__::func_593(0);
		__LIB_3__::func_600(Global_35, iLocal_677[0], func_130("PLY_SURPRISE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("WHAT_THE_HELL")))
	{
		__LIB_3__::func_593(0);
		__LIB_3__::func_600(Global_35, Global_35, func_130("PLY_WAKE_UP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("PLY_SHIT")))
	{
		__LIB_3__::func_593(0);
		__LIB_3__::func_600(Global_35, iLocal_677[0], func_130("PLY_SHIT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (__LIB_2__::func_1(iLocal_677[2], 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[2], joaat("FINALLY")))
		{
			__LIB_3__::func_600(iLocal_677[2], Global_35, func_130("FINALLY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[2], joaat("DUMP_HIM")))
		{
			__LIB_1__::func_683(&iLocal_824, 67108864);
			if (__LIB_0__::func_492(1) >= 100)
			{
				__LIB_3__::func_600(iLocal_677[2], iLocal_677[1], func_130("DUMP_HIM"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("NO_MONEY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
	}
}

void func_107()
{
	int iVar0;
	if (Local_309.f_46 == 1 || __LIB_0__::func_27(iLocal_825, 4096))
	{
		return;
	}
	if (iLocal_849 == 0)
	{
		if (iLocal_844 == 1)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_677[0]) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				__LIB_2__::func_526(&Local_878, 0, 0);
				iLocal_844 = 0;
			}
		}
		else if (iLocal_844 == 0)
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_677[0]) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				if (iLocal_845 == 1)
				{
					__LIB_2__::func_411(&(Local_878[0 /*17*/]), 1, 0);
				}
				if (iLocal_846 == 1)
				{
					__LIB_2__::func_411(&(Local_878[1 /*17*/]), 1, 0);
				}
				if (iLocal_847 == 1)
				{
				}
				iLocal_844 = 1;
			}
		}
	}
	iVar0 = -1;
	iVar0 = func_291(&(iLocal_677[0]), &(Local_856[0 /*21*/]), 50f, &Local_878, &(Local_309.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iVar0 == 0 && iLocal_842 == 0)
	{
		__LIB_2__::func_504(iLocal_677[0], 100);
		switch (iLocal_718)
		{
			case 0:
				__LIB_3__::func_600(Global_35, iLocal_677[0], func_130("ILO_FIRST_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_825, 16384);
				break;
			case 1:
				__LIB_3__::func_600(Global_35, iLocal_677[0], func_130("ILO_SECOND_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_825, 32768);
				break;
			case 2:
				__LIB_3__::func_600(Global_35, iLocal_677[0], func_130("ILO_QUESTION"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_825, 8);
				break;
		}
		iLocal_845 = 0;
		iLocal_846 = 0;
		iLocal_852 = 0;
		if (__LIB_0__::func_899(&uLocal_719))
		{
			__LIB_1__::func_585(&uLocal_719, -5f);
		}
		if (__LIB_0__::func_899(&uLocal_737))
		{
			__LIB_1__::func_585(&uLocal_737, -5f);
		}
		if (__LIB_0__::func_899(&uLocal_740))
		{
			__LIB_2__::func_259(&uLocal_740);
		}
		else
		{
			__LIB_3__::func_596(&uLocal_740, 0);
		}
		__LIB_2__::func_411(&(Local_878[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_878[1 /*17*/]), 0, 0);
	}
	else if (iVar0 == 1 && iLocal_842 == 0)
	{
		__LIB_2__::func_504(iLocal_677[0], 100);
		switch (iLocal_718)
		{
			case 0:
				__LIB_3__::func_600(Global_35, iLocal_677[0], func_130("ILO_FIRST_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_825, 262144);
				break;
			case 1:
				__LIB_3__::func_600(Global_35, iLocal_677[0], func_130("ILO_SECOND_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_825, 524288);
				break;
			case 2:
				__LIB_3__::func_600(Global_35, iLocal_677[0], func_130("ILO_QUIT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_825, 64);
				break;
		}
		iLocal_845 = 0;
		iLocal_846 = 0;
		iLocal_852 = 0;
		if (__LIB_0__::func_899(&uLocal_719))
		{
			__LIB_1__::func_585(&uLocal_719, -5f);
		}
		if (__LIB_0__::func_899(&uLocal_737))
		{
			__LIB_1__::func_585(&uLocal_737, -5f);
		}
		if (__LIB_0__::func_899(&uLocal_740))
		{
			__LIB_2__::func_259(&uLocal_740);
		}
		else
		{
			__LIB_3__::func_596(&uLocal_740, 0);
		}
		__LIB_2__::func_411(&(Local_878[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_878[1 /*17*/]), 0, 0);
		func_293(1);
	}
	else if (iVar0 == 2 && iLocal_842 == 0)
	{
		__LIB_2__::func_504(iLocal_677[0], 100);
		switch (iLocal_718)
		{
			case 0:
				break;
			case 1:
				__LIB_2__::func_504(iLocal_677[0], 100);
				__LIB_3__::func_600(Global_35, iLocal_677[0], func_130("ILO_ROB_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_825, 4194304);
				break;
			case 2:
				__LIB_2__::func_504(iLocal_677[0], 100);
				__LIB_3__::func_600(Global_35, iLocal_677[0], func_130("ILO_ROB_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_825, 8388608);
				break;
		}
		iLocal_845 = 0;
		iLocal_846 = 0;
		iLocal_847 = 0;
		if (__LIB_0__::func_899(&uLocal_719))
		{
			__LIB_1__::func_585(&uLocal_719, -5f);
		}
		if (__LIB_0__::func_899(&uLocal_737))
		{
			__LIB_1__::func_585(&uLocal_737, -5f);
		}
		if (__LIB_0__::func_899(&uLocal_740))
		{
			__LIB_2__::func_259(&uLocal_740);
		}
		else
		{
			__LIB_3__::func_596(&uLocal_740, 0);
		}
		func_293(1);
	}
	if (((__LIB_4__::func_118(&uLocal_740) > 1f && __LIB_4__::func_398(-5f, 1, 0, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_677[0]))
	{
		if (__LIB_0__::func_27(iLocal_825, 16384) && !__LIB_0__::func_27(iLocal_825, 65536))
		{
			__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("ILO_FIRST_POS_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_825, 65536);
			__LIB_3__::func_596(&uLocal_743, 0);
		}
		else if (__LIB_0__::func_27(iLocal_825, 32768) && !__LIB_0__::func_27(iLocal_825, 131072))
		{
			__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("ILO_SECOND_POS_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_825, 131072);
			__LIB_3__::func_596(&uLocal_743, 0);
			__LIB_3__::func_596(&uLocal_734, 0);
		}
		else if (__LIB_0__::func_27(iLocal_825, 8) && !__LIB_0__::func_27(iLocal_825, 16))
		{
			if (iLocal_670 == 0)
			{
				__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("QUESTION_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("ILO_QUESTION_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			__LIB_1__::func_683(&iLocal_825, 16);
			__LIB_3__::func_596(&uLocal_743, 0);
			__LIB_3__::func_596(&uLocal_734, 0);
		}
		else if (__LIB_0__::func_27(iLocal_825, 64) && !__LIB_0__::func_27(iLocal_825, 2048))
		{
			if (iLocal_670 == 0)
			{
				__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("QUIT_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("GIVE_UP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_825, 4096);
				func_293(1);
				__LIB_2__::func_259(&uLocal_737);
			}
			__LIB_1__::func_683(&iLocal_825, 2048);
			__LIB_3__::func_596(&uLocal_743, 0);
			__LIB_3__::func_596(&uLocal_734, 0);
			__LIB_1__::func_683(&iLocal_824, 32);
			__LIB_1__::func_683(&iLocal_824, 128);
			__LIB_1__::func_683(&iLocal_825, 67108864);
			__LIB_1__::func_683(&iLocal_825, 134217728);
			if (!__LIB_0__::func_27(iLocal_824, 8))
			{
				__LIB_1__::func_585(&uLocal_719, 7f);
			}
			if (__LIB_0__::func_899(&uLocal_737))
			{
				__LIB_1__::func_585(&uLocal_737, -2f);
			}
		}
		else if (__LIB_0__::func_27(iLocal_825, 262144) && !__LIB_0__::func_27(iLocal_825, 1048576))
		{
			__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("ILO_FIRST_NEG_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_825, 1048576);
			__LIB_3__::func_596(&uLocal_743, 0);
		}
		else if (__LIB_0__::func_27(iLocal_825, 524288) && !__LIB_0__::func_27(iLocal_825, 2097152))
		{
			__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("ILO_SECOND_NEG_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_825, 2097152);
			__LIB_3__::func_596(&uLocal_743, 0);
			__LIB_3__::func_596(&uLocal_734, 0);
		}
		else if (__LIB_0__::func_27(iLocal_825, 4194304) && !__LIB_0__::func_27(iLocal_825, 16777216))
		{
			__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("ILO_ROB_RESP_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_825, 16777216);
		}
		else if (__LIB_0__::func_27(iLocal_825, 8388608) && !__LIB_0__::func_27(iLocal_825, 33554432))
		{
			__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("ILO_ROB_RESP_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_825, 33554432);
		}
		__LIB_1__::func_561(&uLocal_740);
	}
	if (__LIB_4__::func_118(&uLocal_734) > 1f && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_677[0]))
	{
		__LIB_1__::func_561(&uLocal_734);
	}
}

void func_108()
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_396(Global_35) && __LIB_0__::func_27(iLocal_825, 1))
	{
		if (__LIB_0__::func_94(Global_35, Local_309.f_51, 1) < 6.5f)
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			if (__LIB_2__::func_1(iVar0, 0, 1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 0.55f);
			}
		}
		else if (__LIB_0__::func_94(Global_35, Local_309.f_51, 1) < 12f)
		{
			iVar1 = PED::_GET_LAST_MOUNT(Global_35);
			if (__LIB_2__::func_1(iVar1, 0, 1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_757, true, 0) && __LIB_0__::func_27(iLocal_825, 2))
	{
		if (__LIB_0__::func_396(Global_35) && iLocal_841 == 0)
		{
			TASK::TASK_STAND_STILL(PED::_GET_LAST_MOUNT(Global_35), 2000);
			TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
			iLocal_841 = 1;
		}
		if (!__LIB_0__::func_396(Global_35))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		}
		if (iLocal_841 == 1)
		{
			if (!__LIB_0__::func_71(Global_35))
			{
				iLocal_841 = 0;
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PED::_GET_LAST_MOUNT(Global_35), vLocal_51, 0.55f, -1, 2f, 0, 40000f);
			}
		}
	}
}

void func_109()
{
	vector3 vVar0;
	if (!__LIB_0__::func_27(iLocal_824, 2))
	{
		vVar0 = { VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(Global_36) };
		if (ENTITY::_IS_ENTITY_ON_TRAIN_TRACK(Global_35) || __LIB_0__::func_94(Global_35, vVar0, 0) < 2f)
		{
			if (PED::IS_PED_RAGDOLL(Global_35))
			{
				__LIB_1__::func_683(&iLocal_824, 2);
				__LIB_2__::func_504(iLocal_677[0], 0);
				if (!__LIB_0__::func_27(iLocal_824, 1024) && !__LIB_0__::func_27(iLocal_824, 64))
				{
					TASK::TASK_REACT(iLocal_677[0], Global_35, 0f, 0f, 0f, "DEFAULT_SHOCKED", 3f, 0, 4);
				}
				__LIB_3__::func_600(iLocal_677[0], Global_35, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				if (__LIB_0__::func_899(&uLocal_719))
				{
					__LIB_2__::func_259(&uLocal_719);
				}
				if (__LIB_0__::func_899(&uLocal_737))
				{
					__LIB_2__::func_259(&uLocal_737);
				}
			}
		}
	}
}

void func_110()
{
	float fVar0;
	vector3 vVar1;
	if (iLocal_670 == 1)
	{
		if (iLocal_839 == 1 && __LIB_0__::func_27(iLocal_825, 2))
		{
			__LIB_2__::func_298();
			iLocal_839 = 0;
		}
		return;
	}
	if (__LIB_0__::func_27(iLocal_825, 4096) || !__LIB_0__::func_27(iLocal_825, 2))
	{
		return;
	}
	if (iLocal_718 == 2)
	{
		if (iLocal_852 == 1)
		{
			if (__LIB_0__::func_195(vLocal_24, vLocal_27, Global_36))
			{
				if (iLocal_853 == 1)
				{
					__LIB_2__::func_411(&(Local_878[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_878[1 /*17*/]), 0, 0);
					iLocal_853 = 0;
				}
			}
			else if (iLocal_853 == 0)
			{
				__LIB_2__::func_411(&(Local_878[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_878[1 /*17*/]), 1, 0);
				iLocal_853 = 1;
			}
		}
	}
	vVar1 = { 0f, 0f, 0f };
	if (Local_309.f_46 == 0)
	{
		PED::SET_PED_RESET_FLAG(iLocal_677[0], 12, true);
		if (__LIB_0__::func_195(vLocal_24, vLocal_27, Global_36) && !__LIB_0__::func_27(iLocal_824, 8192))
		{
			if (iLocal_839 == 1 && __LIB_0__::func_27(iLocal_825, 2))
			{
				__LIB_2__::func_298();
				iLocal_839 = 0;
			}
			fVar0 = CAM::GET_GAMEPLAY_CAM_FOV();
			if (iLocal_834 == 0)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
				iLocal_834 = 1;
				__LIB_0__::func_7(&(Local_781.f_3), 4);
				__LIB_0__::func_7(&(Local_781.f_3), 2);
			}
			func_299(vLocal_33, &Local_781, vVar1, fVar0, 35f, -1, 2000, 1000, 0);
		}
		else if (iLocal_834 == 1)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
			__LIB_4__::func_86(&Local_781);
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(true);
			}
			iLocal_834 = 0;
		}
	}
	if (iLocal_834 == 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
	else
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
	}
}

void func_112()
{
	if ((iLocal_670 == 1 && iLocal_774 != 4) && Local_309.f_46 == 0)
	{
		if (__LIB_1__::func_205(Global_35, iLocal_755, 1, 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		if ((((__LIB_1__::func_205(Global_35, iLocal_759, 1, 0) && !__LIB_0__::func_27(iLocal_825, 1073741824 /* Float: 2f */)) && __LIB_0__::func_27(iLocal_825, 2)) && !__LIB_0__::func_27(iLocal_824, 256)) && Local_309.f_46 == 0)
		{
			__LIB_1__::func_683(&iLocal_825, 1073741824 /* Float: 2f */);
			TASK::TASK_WANDER_STANDARD(iLocal_677[0], 40000f, 0);
			PED::SET_PED_KEEP_TASK(iLocal_677[0], true);
			PED::SET_PED_KEEP_TASK(iLocal_677[1], true);
			PED::SET_PED_KEEP_TASK(iLocal_677[2], true);
			__LIB_0__::func_325(&(uLocal_681[0]));
			iLocal_774 = 7;
			VOLUME::_DELETE_VOLUME(iLocal_760);
			__LIB_0__::func_172(iLocal_762);
			__LIB_1__::func_948(-1370039648, 0, 0f, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-535642601, 0, 0f, 0, 1, 0, 0, 0);
			if (!__LIB_0__::func_27(iLocal_825, 4096))
			{
				__LIB_3__::func_593(0);
				__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("GIVE_UP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_825, 4096);
			}
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
			__LIB_2__::func_480(&Local_878, 1, 1, 1, 0);
			__LIB_4__::func_399(&(Local_856[0 /*21*/]), &Local_878);
			func_286(iLocal_677[0], 1, joaat("AGGRESSIVE"));
			func_286(iLocal_677[1], 1, joaat("AGGRESSIVE"));
			if (__LIB_2__::func_1(iLocal_677[2], 0, 1))
			{
				func_286(iLocal_677[2], 1, joaat("AGGRESSIVE"));
			}
		}
	}
}

void func_113()
{
	if (Local_309.f_46 == 0)
	{
		if (__LIB_2__::func_1(iLocal_677[2], 0, 1))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_677[2], false);
		}
	}
}

void func_114()
{
	int iVar0;
	int iVar1;
	if (((iLocal_670 != 1 || __LIB_0__::func_27(iLocal_824, 256)) || Local_309.f_46 == 1) || !__LIB_2__::func_1(iLocal_677[0], 0, 1))
	{
		return;
	}
	if (__LIB_0__::func_27(iLocal_824, 16777216) && !__LIB_0__::func_27(iLocal_824, 256))
	{
		iVar0 = 0;
		if (__LIB_0__::func_27(iLocal_824, 16384) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_677[0], Global_35, 17))
		{
			iVar0 = 1;
		}
		if ((!__LIB_0__::func_27(iLocal_825, 67108864) && iVar0 == 0) && !__LIB_0__::func_27(iLocal_825, 4096))
		{
			if ((__LIB_4__::func_118(&uLocal_737) > 8f && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_677[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				if (func_300())
				{
					__LIB_1__::func_585(&uLocal_737, 6f);
				}
				else
				{
					__LIB_1__::func_683(&iLocal_825, 67108864);
					__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("CALLOVER_IDLE_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_259(&uLocal_737);
				}
			}
		}
		else if (((__LIB_0__::func_27(iLocal_825, 67108864) && !__LIB_0__::func_27(iLocal_825, 134217728)) && iVar0 == 0) && !__LIB_0__::func_27(iLocal_825, 4096))
		{
			if ((__LIB_4__::func_118(&uLocal_737) > 7f && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_677[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				if (func_300())
				{
					__LIB_1__::func_585(&uLocal_737, 6f);
				}
				else
				{
					__LIB_1__::func_683(&iLocal_825, 134217728);
					__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("IDLE_WAIT_C"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_259(&uLocal_737);
				}
			}
		}
		else if (((__LIB_0__::func_27(iLocal_825, 67108864) && __LIB_0__::func_27(iLocal_825, 134217728)) || iVar0 == 1) && !__LIB_0__::func_27(iLocal_825, 4096))
		{
			if ((__LIB_4__::func_118(&uLocal_737) > 6f && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_677[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				if (func_300())
				{
					__LIB_1__::func_585(&uLocal_737, 5f);
				}
				else
				{
					__LIB_2__::func_259(&uLocal_737);
					__LIB_3__::func_593(0);
					__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("GIVE_UP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_825, 4096);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
					func_293(1);
				}
			}
		}
		if (__LIB_1__::func_205(Global_35, iLocal_756, 1, 0))
		{
			if (iLocal_830 <= 3)
			{
				iLocal_830 = 5;
				__LIB_2__::func_504(iLocal_677[0], 100);
				__LIB_2__::func_504(iLocal_677[1], 100);
				__LIB_2__::func_504(iLocal_677[2], 100);
			}
		}
		if (((!__LIB_0__::func_27(iLocal_824, -2147483648) && __LIB_0__::func_27(iLocal_825, 4096)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && __LIB_4__::func_118(&uLocal_737) > 1f)
		{
			__LIB_2__::func_259(&uLocal_737);
			TASK::TASK_REACT(iLocal_677[0], 0, 2838.391f, -1155.273f, 45.48989f, "DEFAULT_SHOCKED", 1f, 0, 4);
			__LIB_0__::func_325(&(uLocal_681[0]));
			__LIB_2__::func_480(&Local_878, 1, 1, 1, 0);
			__LIB_4__::func_399(&(Local_856[0 /*21*/]), &Local_878);
			iLocal_774 = 7;
			iLocal_762 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 2838.291f, -1154.944f, 46.821f, 0f, 0f, 15.83f, 0.756f, 4.373f, 3.046f);
			__LIB_3__::func_319(Local_600.f_3);
			__LIB_1__::func_683(&iLocal_824, -2147483648);
			iVar1 = __LIB_3__::func_136(-535642601, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_600.f_3, "p_doorsgl02x", iVar1);
			}
			__LIB_1__::func_948(-535642601, 1, 0f, 0, 0, 0f, 0, 0);
		}
		if (((((__LIB_0__::func_27(iLocal_825, 4096) && __LIB_0__::func_27(iLocal_824, -2147483648)) && __LIB_4__::func_118(&uLocal_737) > 5f) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_677[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_677[1])) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_677[2]))
		{
			switch (iLocal_830)
			{
				case 0:
					__LIB_3__::func_600(iLocal_677[2], iLocal_677[0], func_130("ABANDON"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_830++;
					__LIB_2__::func_915(iLocal_677[0], joaat("WORLD_HUMAN_SMOKE"), 2833.864f, -1154.08f, 45.55641f, 161.99f, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
					func_286(iLocal_677[0], 1, joaat("AGGRESSIVE"));
					func_286(iLocal_677[1], 1, joaat("AGGRESSIVE"));
					if (__LIB_2__::func_1(iLocal_677[2], 0, 1))
					{
						func_286(iLocal_677[2], 1, joaat("AGGRESSIVE"));
					}
					break;
				case 1:
					__LIB_3__::func_600(iLocal_677[1], iLocal_677[0], func_130("ABANDON"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_830++;
					break;
				case 2:
					__LIB_3__::func_600(iLocal_677[0], iLocal_677[2], func_130("ABANDON_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_830++;
					break;
			}
		}
	}
}

void func_115()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
}

int func_120()
{
	int iVar0;
	iVar0 = 1;
	if (iLocal_670 == 0)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_600))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_600, false))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(Local_600, "PBL_FRONT"))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600, "PBL_FRONT"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600, "PBL_FRONT");
						iVar0 = 0;
					}
				}
				if (ANIMSCENE::_0xA9016536015DE29D(Local_600, "PBL_LEFT"))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600, "PBL_LEFT"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600, "PBL_LEFT");
						iVar0 = 0;
					}
				}
				if (ANIMSCENE::_0xA9016536015DE29D(Local_600, "PBL_RIGHT"))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600, "PBL_RIGHT"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600, "PBL_RIGHT");
						iVar0 = 0;
					}
				}
			}
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_600.f_1))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_600.f_1, false))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(Local_600.f_1, "PBL_KNOCKOUT_VAR2_MAIN"))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600.f_1, "PBL_KNOCKOUT_VAR2_MAIN"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600.f_1, "PBL_KNOCKOUT_VAR2_MAIN");
						iVar0 = 0;
					}
				}
				if (ANIMSCENE::_0xA9016536015DE29D(Local_600.f_1, "pbl_knockout_var3"))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600.f_1, "pbl_knockout_var3"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600.f_1, "pbl_knockout_var3");
						iVar0 = 0;
					}
				}
			}
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_600.f_2))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_600.f_2, false))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(Local_600.f_2, "pbl_wakes_up"))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600.f_2, "pbl_wakes_up"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600.f_2, "pbl_wakes_up");
						iVar0 = 0;
					}
				}
			}
		}
	}
	else if (iLocal_670 == 1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_600))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_600, false))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(Local_600, "PBL_FRONT"))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600, "PBL_FRONT"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600, "PBL_FRONT");
						iVar0 = 0;
					}
				}
				if (ANIMSCENE::_0xA9016536015DE29D(Local_600, "PBL_RIGHT"))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600, "PBL_RIGHT"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600, "PBL_RIGHT");
						iVar0 = 0;
					}
				}
				if (ANIMSCENE::_0xA9016536015DE29D(Local_600, "PBL_LEFT"))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600, "PBL_LEFT"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600, "PBL_LEFT");
						iVar0 = 0;
					}
				}
				if (ANIMSCENE::_0xA9016536015DE29D(Local_600, "pbl_smuggler_alleyway_walk"))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600, "pbl_smuggler_alleyway_walk"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600, "pbl_smuggler_alleyway_walk");
						iVar0 = 0;
					}
				}
			}
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_600.f_1))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_600.f_1, false))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(Local_600.f_1, "pbl_gang_player_ambushed"))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600.f_1, "pbl_gang_player_ambushed"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600.f_1, "pbl_gang_player_ambushed");
						iVar0 = 0;
					}
				}
				if (ANIMSCENE::_0xA9016536015DE29D(Local_600.f_1, "pbl_smuggler_enter_room"))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600.f_1, "pbl_smuggler_enter_room"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600.f_1, "pbl_smuggler_enter_room");
						iVar0 = 0;
					}
				}
			}
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_600.f_3))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_600.f_3, false))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(Local_600.f_3, "pbl_gang_player_ambushed"))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600.f_3, "pbl_gang_player_ambushed"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600.f_3, "pbl_gang_player_ambushed");
						iVar0 = 0;
					}
				}
				if (ANIMSCENE::_0xA9016536015DE29D(Local_600.f_3, "pbl_smuggler_enter_room"))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600.f_3, "pbl_smuggler_enter_room"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600.f_3, "pbl_smuggler_enter_room");
						iVar0 = 0;
					}
				}
			}
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_600.f_2))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_600.f_2, false))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(Local_600.f_2, "pbl_wakes_up"))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600.f_2, "pbl_wakes_up"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600.f_2, "pbl_wakes_up");
						iVar0 = 0;
					}
				}
			}
		}
	}
	return iVar0;
}

void func_121()
{
	__LIB_2__::func_480(&Local_878, 1, 1, 1, 0);
	__LIB_4__::func_399(&(Local_856[0 /*21*/]), &Local_878);
	__LIB_3__::func_157(&(Local_878[0 /*17*/]), "RE_INTER_POS", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_878[1 /*17*/]), "RE_INTER_ANTAGONIZE", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_293(1);
	if (!__LIB_0__::func_27(iLocal_825, 8192))
	{
		__LIB_1__::func_683(&iLocal_825, 8192);
	}
}

char* func_130(char* sParam0)
{
	int iVar0;
	if (iLocal_670 == 0)
	{
		iVar0 = 1;
	}
	else if (iLocal_670 == 1)
	{
		iVar0 = 2;
	}
	switch (__LIB_1__::func_898())
	{
		case 0:
			return __LIB_3__::func_394("DAA", "NBX", sParam0, iVar0);
		case 4:
			return __LIB_3__::func_394("DAA", "BLW", sParam0, iVar0);
		default:
			break;
	}
	return "INVALID";
}

bool func_132()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	switch (iLocal_777)
	{
		case 0:
			if (__LIB_0__::func_86(vLocal_800))
			{
				if (iLocal_670 == 0)
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_600.f_1, "player_zero", &vLocal_800, true, "PBL_KNOCKOUT_VAR2_MAIN", 2))
					{
					}
				}
				else if (iLocal_670 == 1)
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_600.f_1, "player_zero", &vLocal_800, true, "pbl_smuggler_enter_room", 2))
					{
					}
				}
			}
			if (__LIB_0__::func_86(vLocal_812))
			{
				if (iLocal_670 == 0)
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_600.f_1, "STRANGER", &vLocal_812, true, "PBL_KNOCKOUT_VAR2_MAIN", 2))
					{
					}
				}
				else if (iLocal_670 == 1)
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_600, "STRANGER", &vLocal_812, true, "pbl_smuggler_alleyway_walk", 2))
					{
					}
				}
			}
			func_314();
			if (((__LIB_2__::func_118(iLocal_677[0], 1, 1) < 7f && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_677[0])) && __LIB_0__::func_27(iLocal_825, 1)) && __LIB_1__::func_472(iLocal_677[0], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				if (iLocal_670 == 0)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_672);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_228[4 /*2*/], Local_228[4 /*2*/].f_1, Global_35, 6833, 2f, -2f, 0, 0f, false, true, -1f, 0, 0, -1f);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_228[5 /*2*/], Local_228[5 /*2*/].f_1, Global_35, 6967, 2f, -2f, 0, 0f, false, true, -1f, 0, 0, -1f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 8566, -1f, -1f, -1f);
					__LIB_1__::func_474(iLocal_677[0], &iLocal_672, 0f, 0f, 0, 1);
				}
				else if (iLocal_670 == 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_672);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_228[16 /*2*/], Local_228[16 /*2*/].f_1, Global_35, 4133, 2f, -2f, 0, 0f, false, true, -1f, 0, 0, -1f);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_228[13 /*2*/], Local_228[13 /*2*/].f_1, Global_35, 6800, 2f, -2f, 0, 0f, false, true, -1f, 0, 0, -1f);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_228[14 /*2*/], Local_228[14 /*2*/].f_1, Global_35, 6966, 2f, -2f, 0, 0f, false, true, -1f, 0, 0, -1f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
					__LIB_1__::func_474(iLocal_677[0], &iLocal_672, 0f, 0f, 0, 1);
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_600);
					Local_600 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_600.f_4, 0, "pbl_smuggler_alleyway_walk", false, true);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_600.f_4))
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_600, true, false))
						{
							ANIMSCENE::LOAD_ANIM_SCENE(Local_600);
						}
					}
				}
				fLocal_675 = __LIB_3__::func_332(Local_608.f_2, 1);
				__LIB_1__::func_683(&iLocal_824, 8);
				iLocal_849 = 1;
				__LIB_2__::func_526(&Local_878, 0, 0);
				iLocal_777 = 1;
			}
			break;
		case 1:
			iLocal_836 = 1;
			if (iLocal_838 == 1)
			{
				func_314();
			}
			if (__LIB_0__::func_86(vLocal_812) && iLocal_670 == 1)
			{
				vLocal_812 = { 2842.826f, -1166.514f, 46.5447f };
			}
			if (__LIB_0__::func_86(vLocal_800) && iLocal_670 == 1)
			{
				vLocal_800 = { 2838.366f, -1154.875f, 46.4583f };
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_600.f_1, false))
			{
				if (func_317())
				{
					TASK::CLEAR_PED_TASKS(iLocal_677[0], true, false);
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_677[0]);
					if (iLocal_670 == 0)
					{
						iLocal_777 = 3;
					}
					else if (iLocal_670 == 1)
					{
						iLocal_777 = 4;
						if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_767))
						{
							iLocal_767 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 2838.624f, -1154.763f, 45.48947f, 0f, 0f, 14.858f, 1.5f, 1.5f, 5f);
						}
					}
					return false;
				}
			}
			if (iLocal_670 == 1)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_677[0], Local_228[14 /*2*/], Local_228[14 /*2*/].f_1, 1))
				{
					fVar0 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_677[0], Local_228[14 /*2*/], Local_228[14 /*2*/].f_1);
				}
			}
			if (((ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], joaat("ENDS_IN_WALK")) || !__LIB_0__::func_163(iLocal_677[0], 1435919172)) || (iLocal_670 == 1 && fVar0 > 0.69f)) || iLocal_848 == 1)
			{
				iLocal_849 = 1;
				iLocal_844 = 0;
				if (!__LIB_0__::func_163(iLocal_677[0], 1435919172))
				{
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_677[0], joaat("ENDS_IN_WALK")))
				{
				}
				if (iLocal_670 == 1 && fVar0 > 0.69f)
				{
				}
				if (iLocal_670 == 0)
				{
					__LIB_1__::func_683(&iLocal_824, 536870912);
				}
				__LIB_1__::func_683(&iLocal_824, 64);
				if (iLocal_670 == 0)
				{
					if (!__LIB_0__::func_86(vLocal_812))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_671);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_812, 1f, -1, 0.25f, 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_30, 1f, -1, 0.25f, 1, 40000f);
						__LIB_1__::func_474(iLocal_677[0], &iLocal_671, 0, 0, 1, 1);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_677[0], vLocal_30, 1f, -1, 0.25f, 0, 40000f);
					}
					iLocal_835 = 1;
				}
				if (iLocal_670 == 1)
				{
					if (iLocal_836 == 1 && !__LIB_0__::func_86(vLocal_812))
					{
					}
					else
					{
						vLocal_812 = { 2842.83f, -1166.53f, 46.5346f };
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_671);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2842.019f, -1169.154f, 46.61454f, 1f, -1, 0.25f, 1, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_812, 1f, -1, 0.2f, 1, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_30, 1f, -1, 0.25f, 0, 40000f);
					__LIB_1__::func_474(iLocal_677[0], &iLocal_671, 0, 0, 1, 1);
				}
				if (iLocal_836 == 1)
				{
					if (iLocal_670 == 0)
					{
						iLocal_777 = 3;
					}
					else if (iLocal_670 == 1)
					{
						iLocal_777 = 4;
						if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_767))
						{
							iLocal_767 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 2838.624f, -1154.763f, 45.48947f, 0f, 0f, 14.858f, 1.5f, 1.5f, 5f);
						}
					}
					iLocal_718 = 1;
					func_319();
				}
			}
			func_320();
			break;
		case 3:
			if (__LIB_2__::func_1(iLocal_677[0], 0, 1))
			{
				func_321();
				func_322();
				func_323();
				if (func_317())
				{
					__LIB_3__::func_593(0);
					if (__LIB_0__::func_27(iLocal_824, 1073741824 /* Float: 2f */))
					{
						__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("WHAT_I_HAVE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_504(iLocal_677[0], 100);
						__LIB_3__::func_600(iLocal_677[1], iLocal_677[0], func_130("HOLD_IT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					if (__LIB_0__::func_27(iLocal_824, 1073741824 /* Float: 2f */))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_677[1], vLocal_48, true, false, true, true);
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_677[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
						if (iLocal_58 == 2)
						{
							if (__LIB_2__::func_1(iLocal_677[1], 0, 1))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_600.f_1, "THUG", iLocal_677[1], 0);
							}
						}
					}
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_600.f_1, "internal_loop", true, false);
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_677[0]);
					iLocal_777 = 5;
				}
			}
			break;
		case 4:
			if (__LIB_2__::func_1(iLocal_677[0], 0, 1))
			{
				PED::SET_PED_RESET_FLAG(iLocal_677[0], 12, true);
				func_321();
				if (((!__LIB_0__::func_86(vLocal_812) && ANIMSCENE::_0x1F0E401031E20146(Local_600, "pbl_smuggler_alleyway_walk")) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_600.f_1, false)) && !__LIB_0__::func_27(iLocal_824, 262144))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600, "pbl_smuggler_alleyway_walk"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600, "pbl_smuggler_alleyway_walk");
					}
					if ((__LIB_0__::func_94(iLocal_677[0], vLocal_812, 1) < 0.25f || __LIB_0__::func_195(vLocal_24, vLocal_27, ENTITY::GET_ENTITY_COORDS(iLocal_677[0], true, false))) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_600, "pbl_smuggler_alleyway_walk"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_600, "STRANGER", iLocal_677[0], 0);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_600, "pbl_smuggler_alleyway_walk", true);
						ANIMSCENE::START_ANIM_SCENE(Local_600);
						ANIMSCENE::SET_ANIM_SCENE_RATE(Local_600, 0.9f);
						__LIB_1__::func_683(&iLocal_824, 262144);
						if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_677[0]))
						{
							__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("GUARANTEE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
				if (__LIB_0__::func_27(iLocal_824, 262144) && !__LIB_0__::func_27(iLocal_824, 16777216))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(Local_600, "s_smuggler_alleyway_idle_loop", 1))
					{
						func_322();
					}
				}
				if (iLocal_718 != 2)
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_600.f_3, false))
					{
						if (ANIMSCENE::_0x8D81E7824B7753F7(Local_600.f_3, "s_gang_loop", 1))
						{
							iLocal_718 = 2;
							__LIB_2__::func_360(&(Local_878[1 /*17*/]), "BEAT_GRT_NEG");
							func_319();
						}
					}
				}
				if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_600.f_1, false) && __LIB_0__::func_665(Global_35, iLocal_677[0], 1, 1) < 3.2f) && __LIB_4__::func_398(-7f, 1, 0, 0))
				{
					if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_600, "s_smuggler_alleyway_idle_loop", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_600, "s_smuggler_alleyway_look_01", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_600, "s_smuggler_alleyway_look_02", 1))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_600, "STRANGER", iLocal_677[0]);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_600.f_3, "STRANGER", iLocal_677[0], 0);
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_600.f_1))
						{
							if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_600.f_1, true, false))
							{
							}
						}
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_600.f_3))
						{
							if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_600.f_3, true, false))
							{
							}
						}
						iVar1 = __LIB_3__::func_136(-535642601, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar1))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_600.f_3, "p_doorsgl02x", iVar1, 0);
						}
						ANIMSCENE::START_ANIM_SCENE(Local_600.f_1);
						ANIMSCENE::START_ANIM_SCENE(Local_600.f_3);
						ANIMSCENE::SET_ANIM_SCENE_RATE(Local_600.f_1, 1f);
						__LIB_1__::func_683(&iLocal_824, 16777216);
						func_293(1);
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_767))
						{
							__LIB_0__::func_172(iLocal_767);
						}
						__LIB_2__::func_259(&uLocal_737);
					}
				}
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600.f_1, "pbl_gang_player_ambushed"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600.f_1, "pbl_gang_player_ambushed");
				}
				if (__LIB_0__::func_27(iLocal_824, 16777216))
				{
					if (__LIB_0__::func_94(Global_35, vLocal_800, 0) < 0.3f)
					{
						if (!ANIMSCENE::_0x8D81E7824B7753F7(Local_600.f_1, "s_gang_loop", 1))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_600.f_1, "pbl_gang_player_ambushed", true);
						}
						__LIB_1__::func_683(&iLocal_824, 256);
						func_325();
						ANIMSCENE::SET_ANIM_SCENE_RATE(Local_600, 1f);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_600.f_1, "internal_loop", true, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_600.f_3, "internal_loop", true, false);
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_677[0]);
						iLocal_777 = 7;
					}
				}
			}
			break;
		case 5:
			if (iLocal_58 == 2)
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_677[1], &Local_284);
			}
			iLocal_777 = 7;
			break;
		case 7:
			if (iLocal_670 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_677[0]))
				{
					CAM::_0xD904F75DBD7AB865(iLocal_677[0]);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_677[1]))
				{
					CAM::_0xD904F75DBD7AB865(iLocal_677[1]);
				}
			}
			if (iLocal_58 == 2)
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_677[1], &Local_284);
			}
			if (iLocal_670 == 0)
			{
				if (__LIB_0__::func_27(iLocal_824, 1024))
				{
					fVar2 = 0.82f;
					iVar3 = 3000;
				}
				else
				{
					fVar2 = 0.486f;
					iVar3 = 3000;
				}
			}
			else
			{
				fVar2 = 0.85f;
				iVar3 = 3000;
			}
			if (((ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_600.f_1) > fVar2 || __LIB_0__::func_27(iLocal_824, 67108864)) && !CAM::IS_SCREEN_FADED_OUT()) && !__LIB_0__::func_27(iLocal_824, 4194304))
			{
				CAM::DO_SCREEN_FADE_OUT(iVar3);
				iLocal_840 = 1;
				__LIB_1__::func_683(&iLocal_824, 4194304);
			}
			if ((ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_600.f_1) || CAM::IS_SCREEN_FADED_OUT()) && __LIB_0__::func_27(iLocal_824, 4194304))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_600.f_1) && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_600.f_1))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_600.f_1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_600.f_3) && !ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_600.f_3))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_600.f_3);
				}
				__LIB_3__::func_594(&iLocal_763, &uLocal_771, vLocal_45, 0f, 0f, 0f, 8.5f, 8.5f, 8.5f, 0, 10208, 1, 0, "WakeUpRestriction");
				__LIB_0__::func_566(iLocal_763, 0);
				PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, false);
				__LIB_3__::func_595(vLocal_36);
				ENTITY::SET_ENTITY_COORDS(Global_35, vLocal_45, true, false, true, true);
				if (!__LIB_0__::func_86(vLocal_39))
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_600.f_2, vLocal_39, vLocal_42, 2);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_600.f_2, "player_zero", Global_35, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 1);
				TASK::TASK_SWAP_WEAPON(Global_35, 1, true, 0, 0);
				MAP::REMOVE_BLIP(&(uLocal_681[0]));
				func_328();
				iVar4 = PLAYER::_0x46FA0AE18F4C7FA9(PLAYER::PLAYER_ID());
				if (__LIB_0__::func_94(iVar4, Local_309.f_51, 1) < 75f)
				{
					if (iLocal_670 == 1)
					{
						ENTITY::SET_ENTITY_COORDS(iVar4, 2848.982f, -1170.919f, 45.24403f, true, false, true, true);
						TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iVar4, 2849.105f, -1170.955f, 45.24839f, 0.25f, 0, false, false, false, false);
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(iVar4, vLocal_51, true, false, true, true);
					}
				}
				__LIB_3__::func_596(&uLocal_722, 0);
				iLocal_777 = 8;
			}
			break;
		case 8:
			STREAMING::_0xA8432A14D4DC2101(vLocal_45);
			iVar5 = 0;
			if (iLocal_850 == 0)
			{
				if (!__LIB_0__::func_899(&uLocal_749))
				{
					__LIB_3__::func_596(&uLocal_749, 0);
				}
				if (STREAMING::_0xCF45DF50C7775F2A())
				{
					if (STREAMING::_0x0909F71B5C070797())
					{
						iVar5 = 1;
					}
					else if (__LIB_4__::func_118(&uLocal_749) > 5f)
					{
						__LIB_1__::func_585(&uLocal_722, 3f);
						iVar5 = 1;
					}
					else
					{
						__LIB_1__::func_585(&uLocal_722, 1f);
					}
				}
				else if (__LIB_4__::func_118(&uLocal_722) > 10f)
				{
					iVar5 = 1;
				}
			}
			else
			{
				iVar5 = 1;
			}
			if ((CAM::IS_SCREEN_FADED_OUT() && iVar5 == 1) && __LIB_3__::func_601(&uLocal_722, 2.5f))
			{
				iLocal_850 = 1;
				STREAMING::_0x5A8B01199C3E79C3();
				if (__LIB_0__::func_247(0) > -100f)
				{
					__LIB_17__::func_382(0, -100f, 0);
				}
				ANIMSCENE::START_ANIM_SCENE(Local_600.f_2);
				ANIMSCENE::SET_ANIM_SCENE_PAUSED(Local_600.f_2, true);
				__LIB_3__::func_596(&uLocal_725, 0);
				__LIB_3__::func_658(iLocal_768, 1);
				__LIB_1__::func_683(&iLocal_824, 2097152);
			}
			if (__LIB_4__::func_118(&uLocal_725) > 0.5f)
			{
				if (iLocal_840 == 1)
				{
					CAM::DO_SCREEN_FADE_IN(6000);
					iLocal_840 = 0;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
			}
			if (__LIB_4__::func_118(&uLocal_725) > 7.5f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_600.f_2) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_600.f_2))
				{
					ANIMSCENE::SET_ANIM_SCENE_PAUSED(Local_600.f_2, false);
				}
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_600.f_2) && ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_600.f_2))
			{
				MAP::DISPLAY_RADAR(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				iVar6 = __LIB_0__::func_492(1);
				if (iLocal_670 == 0)
				{
					if (iVar6 <= 2000)
					{
						if (iVar6 >= 500)
						{
							iLocal_826 = 500;
						}
						else
						{
							iLocal_826 = iVar6;
						}
					}
					else
					{
						iLocal_826 = BUILTIN::CEIL((IntToFloat(iVar6) * 0.25f));
					}
				}
				else
				{
					iLocal_826 = iVar6;
					if (__LIB_0__::func_181())
					{
						__LIB_17__::func_834(1, 0);
					}
					else
					{
						__LIB_17__::func_834(1, 1);
					}
					__LIB_3__::func_755(0);
				}
				if (iLocal_826 > 131000)
				{
					iLocal_826 = 131000;
				}
				__LIB_2__::func_522(iLocal_826, 0, 0, 1, 1);
				iVar7 = (iLocal_826 / 2);
				if (iVar7 >= 65030)
				{
					__LIB_2__::func_190(iLocal_677[0], iVar7);
					__LIB_2__::func_190(iLocal_677[1], iVar7);
				}
				else
				{
					__LIB_2__::func_190(iLocal_677[0], iVar7 + 500);
					__LIB_2__::func_190(iLocal_677[1], iVar7 + 500);
				}
				__LIB_2__::func_526(&Local_878, 0, 0);
				__LIB_1__::func_683(&iLocal_824, 512);
				Local_309.f_44 = 1;
				return true;
			}
			break;
	}
	return false;
}

void func_138(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6)
{
	__LIB_3__::func_597(__LIB_0__::func_23(), iParam0, uParam1, uParam2, iParam3, iParam4, uParam5, uParam6);
}

bool func_139()
{
	if ((!__LIB_2__::func_1(iLocal_677[0], 0, 0) && !__LIB_2__::func_1(iLocal_677[1], 0, 0)) && !__LIB_2__::func_1(iLocal_677[2], 0, 0))
	{
		return true;
	}
	if ((((!__LIB_2__::func_1(iLocal_677[0], 0, 1) && !__LIB_2__::func_1(iLocal_677[1], 0, 1)) && !__LIB_2__::func_1(iLocal_677[2], 0, 1)) && iLocal_831 >= 2) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
	{
		return true;
	}
	if (__LIB_2__::func_1(iLocal_677[0], 0, 0) && (__LIB_0__::func_665(Global_35, iLocal_677[0], 1, 1) < 40f || __LIB_2__::func_215(Global_35, iLocal_677[0], 0, 1114636288 /* Float: 60f */, 0)))
	{
		return false;
	}
	if (__LIB_2__::func_1(iLocal_677[1], 0, 0) && (__LIB_0__::func_665(Global_35, iLocal_677[1], 1, 1) < 40f || __LIB_2__::func_215(Global_35, iLocal_677[1], 0, 1114636288 /* Float: 60f */, 0)))
	{
		return false;
	}
	if (__LIB_2__::func_1(iLocal_677[2], 0, 0) && (__LIB_0__::func_665(Global_35, iLocal_677[2], 1, 1) < 40f || __LIB_2__::func_215(Global_35, iLocal_677[2], 0, 1114636288 /* Float: 60f */, 0)))
	{
		return false;
	}
	return true;
}

void func_147()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_600))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_600, false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_600);
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_600.f_1))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_600.f_1, false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_600.f_1);
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_600.f_3))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_600.f_3, false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_600.f_3);
		}
	}
}

int func_149(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_677[iParam0]))
	{
		if (__LIB_3__::func_605(iLocal_677[iParam0], 0, &(Local_309.f_5), &iLocal_780, 1, 0))
		{
			if (((iLocal_780 == 8 || iLocal_780 == 4) || iLocal_780 == 2) || iLocal_780 == 1)
			{
				__LIB_0__::func_325(&(uLocal_681[iParam0]));
				PED::_0x802092B07E3B1EEA(iLocal_677[iParam0], Global_36, 3);
				return 1;
			}
		}
	}
	return 0;
}

void func_153(int iParam0, int iParam1, int iParam2)
{
	if (__LIB_2__::func_1(iLocal_677[iParam1], 0, 1))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iLocal_677[iParam1]);
		PED::_0x802092B07E3B1EEA(iLocal_677[iParam1], Global_36, 3);
		if (iParam0 == 1)
		{
			__LIB_2__::func_73(iLocal_677[iParam1], &(uLocal_681[iParam1]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_671);
			if (iParam2 == 1)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16384, 0);
			}
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(iLocal_677[iParam1], &iLocal_671, 0, 0, 1, 1);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_671);
			TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "DEFAULT_SHOCKED", 1f, 0, 4);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
			__LIB_1__::func_474(iLocal_677[iParam1], &iLocal_671, 0, 0, 1, 1);
		}
	}
}

void func_204()
{
	switch (Local_309.f_51.f_4)
	{
		case 0:
			iLocal_58 = 0;
			Local_503[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_503[1 /*32*/].f_6 = { 2824.175f, -1265.03f, 46.50659f };
			Local_503[1 /*32*/].f_9 = -37.5f;
			Local_608.f_44 = { 2822.783f, -1269.454f, 46.48936f };
			Local_608.f_47 = { 0f, 0f, 145.235f };
			Local_608.f_50 = { 3.016f, 10.98f, 5f };
			Local_608.f_17 = { 2823.898f, -1267.816f, 46.489f };
			Local_608.f_20 = { 0f, 0f, 146.644f };
			Local_608.f_23 = { 2.628f, 3.275f, 5f };
			Local_608.f_26 = { 2821.746f, -1268.88f, 46.489f };
			Local_608.f_29 = { 0f, 0f, 142.672f };
			Local_608.f_32 = { 1.698f, 7.265f, 5f };
			Local_608.f_35 = { 2828.127f, -1264.132f, 46.489f };
			Local_608.f_38 = { 0f, 0f, 142.672f };
			Local_608.f_41 = { 12.114f, 36.135f, 5f };
			vLocal_18 = { 2821.178f, -1270.017f, 46.50908f };
			vLocal_21 = { 2822.676f, -1271.02f, 46.41917f };
			vLocal_24 = { 2819.853f, -1272.038f, 46.39506f };
			vLocal_27 = { 2821.264f, -1273.028f, 46.28854f };
			vLocal_30 = { 2824.74f, -1266.96f, 47.4982f };
			vLocal_36 = { 2695.086f, -1054.731f, 45.8905f };
			vLocal_33 = { 2826.328f, -1264.247f, 47.50659f };
			vLocal_39 = { 2694.92f, -1062.6f, 45.85f };
			vLocal_42 = { 0f, 0f, 0f };
			vLocal_45 = { 2694.92f, -1062.6f, 45.85f };
			vLocal_48 = { 2820.63f, -1272.42f, 46.30678f };
			vLocal_51 = { 2813.261f, -1270.358f, 46.40242f };
			vLocal_54 = { 2828.034f, -1261.651f, 46.5066f };
			break;
		case 1:
			iLocal_58 = 1;
			Local_503[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_503[1 /*32*/].f_6 = { 2838.125f, -1156.178f, 45.4666f };
			Local_503[1 /*32*/].f_9 = 101f;
			Local_503[2 /*32*/].f_6 = { 2832.443f, -1157.728f, 46.05764f };
			Local_503[2 /*32*/].f_9 = -12f;
			Local_608.f_44 = { 2842.418f, -1162.327f, 45.53325f };
			Local_608.f_47 = { 0f, 0f, 4.782f };
			Local_608.f_50 = { 1.469f, 11.509f, 5f };
			Local_608.f_53 = { 2840.791f, -1154.806f, 45.46649f };
			Local_608.f_56 = { 0f, 0f, 14.523f };
			Local_608.f_59 = { 30.008f, 15.082f, 8.108f };
			Local_608.f_17 = { 2842.95f, -1168.791f, 45.466f };
			Local_608.f_20 = { 0f, 0f, 5.501f };
			Local_608.f_23 = { 1.631f, 1.511f, 5f };
			Local_608.f_26 = { 1f, 1f, 1f };
			Local_608.f_29 = { 0f, 0f, 5.501f };
			Local_608.f_32 = { 1.631f, 1.511f, 5f };
			Local_608.f_35 = { 2841.135f, -1168.966f, 45.466f };
			Local_608.f_38 = { 0f, 0f, 5.501f };
			Local_608.f_41 = { 8.772f, 3.055f, 5f };
			vLocal_18 = { 2838.542f, -1155.294f, 45.46801f };
			vLocal_21 = { 2838.249f, -1154.281f, 45.46918f };
			vLocal_24 = { 2841.712f, -1166.721f, 45.58418f };
			vLocal_27 = { 2843.744f, -1166.532f, 45.50271f };
			vLocal_30 = { 2841.573f, -1154.286f, 45.46648f };
			vLocal_36 = { 2926.278f, -1252.362f, 41.28858f };
			vLocal_33 = { 0f, 0f, 0f };
			vLocal_39 = { 2926.486f, -1248.722f, 41.233f };
			vLocal_42 = { 0f, 0f, -98.85f };
			vLocal_45 = { 2926.486f, -1248.722f, 41.233f };
			vLocal_48 = { 0f, 0f, 0f };
			vLocal_51 = { 2849.219f, -1170.085f, 45.30073f };
			vLocal_54 = { 2839.488f, -1154.44f, 45.46644f };
			vLocal_51 = { 2813.261f, -1270.358f, 46.40242f };
			break;
		case 2:
			iLocal_58 = 2;
			Local_503[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_503[1 /*32*/].f_6 = { 2735.335f, -1323.047f, 46.5794f };
			Local_503[1 /*32*/].f_9 = 143f;
			Local_608.f_44 = { 2736.929f, -1318.923f, 46.632f };
			Local_608.f_47 = { 0f, 0f, 145.235f };
			Local_608.f_50 = { 5.02f, 11.58f, 5f };
			Local_608.f_17 = { 2740.511f, -1313.733f, 46.63953f };
			Local_608.f_20 = { 0f, 0f, 146.644f };
			Local_608.f_23 = { 2.628f, 3.275f, 5f };
			Local_608.f_26 = { 2739.737f, -1314.953f, 46.61479f };
			Local_608.f_29 = { 0f, 0f, 142.672f };
			Local_608.f_32 = { 1.698f, 7.265f, 5f };
			Local_608.f_35 = { 2738.002f, -1316.92f, 46.626f };
			Local_608.f_38 = { 0f, 0f, 142.672f };
			Local_608.f_41 = { 12.114f, 21.304f, 5f };
			vLocal_18 = { 2739.119f, -1317.644f, 46.59245f };
			vLocal_21 = { 2736.796f, -1315.717f, 46.59241f };
			vLocal_24 = { 2740.196f, -1315.667f, 46.63419f };
			vLocal_27 = { 2738.391f, -1314.412f, 46.65739f };
			vLocal_30 = { 2727.462f, -1332.104f, 46.54239f };
			vLocal_36 = { 2695.086f, -1054.731f, 45.8905f };
			vLocal_33 = { 2732.75f, -1324.245f, 47.57427f };
			vLocal_39 = { 2694.92f, -1062.6f, 45.85f };
			vLocal_42 = { 0f, 0f, 0f };
			vLocal_45 = { 2694.92f, -1062.6f, 45.85f };
			vLocal_48 = { 2737.831f, -1316.856f, 46.592f };
			vLocal_51 = { 2745.816f, -1306.729f, 46.6326f };
			vLocal_54 = { 2718.724f, -1333.25f, 46.58735f };
			break;
	}
}

void func_286(int iParam0, bool bParam1, int iParam2)
{
	if (__LIB_2__::func_1(iParam0, 0, 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, bParam1);
		__LIB_3__::func_141(iParam0, 1088421888 /* Float: 7f */, bParam1, 0);
		func_475(&iParam0, &(Local_856[0 /*21*/]), &Local_878, 1, 1);
		PED::_0x24C82EF607105FAA(iParam0, iParam2);
		PED::_0xE737D5F14304A2EC(iParam0, PLAYER::GET_PLAYER_INDEX(), 120000);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 7, 0, 1);
	}
}

int func_291(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_480(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_4__::func_95(iParam1, uParam3, uParam0);
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

void func_293(int iParam0)
{
	__LIB_2__::func_411(&(Local_878[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_878[1 /*17*/]), 0, 0);
	if (iParam0 == 1)
	{
	}
}

void func_299(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (__LIB_0__::func_51(&(fParam3->f_3), 1))
	{
		__LIB_4__::func_498(fParam3);
		if (__LIB_1__::func_378(vParam0, fParam8, 2.5f, fParam12, 1084227584 /* Float: 5f */))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_4__::func_97(vParam0, fParam3, fParam8))
	{
		if (__LIB_0__::func_51(&(fParam3->f_3), 128))
		{
			__LIB_3__::func_518(fParam3, vParam0, fParam7, iParam10);
		}
		CAM::SET_GAMEPLAY_COORD_HINT(vParam0 + vParam4, iParam9, iParam10, iParam11, 0);
		if (!__LIB_0__::func_51(&(fParam3->f_3), 128))
		{
			__LIB_3__::func_518(fParam3, vParam0, fParam7, iParam10);
		}
	}
}

bool func_300()
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { __LIB_2__::func_114(Global_35, 1f) };
	fVar3 = __LIB_0__::func_94(iLocal_677[0], vVar0, 1);
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true) < 0.2f)
	{
		return false;
	}
	if (fVar3 > __LIB_3__::func_588(&Local_309, 0))
	{
		return false;
	}
	return true;
}

void func_314()
{
	if ((__LIB_0__::func_27(iLocal_824, 32) && __LIB_0__::func_27(iLocal_824, 128)) && !__LIB_0__::func_27(iLocal_824, 8))
	{
		if (__LIB_4__::func_118(&uLocal_719) > 10f)
		{
			__LIB_2__::func_259(&uLocal_719);
			if (iLocal_670 == 0)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_671);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_54, 1f, -1, 0.25f, 0, 40000f);
				__LIB_2__::func_915(0, joaat("WORLD_HUMAN_SMOKE"), 2828.015f, -1247.959f, 46.55649f, -27f, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
				__LIB_1__::func_474(iLocal_677[0], &iLocal_671, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(iLocal_677[0], true);
				__LIB_2__::func_915(iLocal_677[1], joaat("WORLD_HUMAN_SMOKE"), 2827.146f, -1242.897f, 46.50665f, -131f, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
				PED::SET_PED_KEEP_TASK(iLocal_677[1], true);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(iLocal_677[0], 40000f, 0);
				PED::SET_PED_KEEP_TASK(iLocal_677[0], true);
				PED::SET_PED_KEEP_TASK(iLocal_677[1], true);
				PED::SET_PED_KEEP_TASK(iLocal_677[2], true);
			}
			__LIB_0__::func_325(&(uLocal_681[0]));
			iLocal_774 = 7;
			if (!__LIB_0__::func_27(iLocal_825, 2048))
			{
				__LIB_3__::func_593(0);
				__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("GIVE_UP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			__LIB_1__::func_683(&iLocal_825, 4096);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
			__LIB_2__::func_480(&Local_878, 1, 1, 1, 0);
			__LIB_4__::func_399(&(Local_856[0 /*21*/]), &Local_878);
			func_286(iLocal_677[0], 1, joaat("AGGRESSIVE"));
			if (iLocal_851 == 1 && iLocal_58 == 2)
			{
				__LIB_2__::func_426(&(iLocal_677[1]));
			}
			else
			{
				func_286(iLocal_677[1], 1, joaat("AGGRESSIVE"));
			}
			if (__LIB_2__::func_1(iLocal_677[2], 0, 1))
			{
				func_286(iLocal_677[2], 1, joaat("AGGRESSIVE"));
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_824, 32) && !__LIB_0__::func_27(iLocal_824, 128))
	{
		if (((__LIB_4__::func_118(&uLocal_719) > 5f && __LIB_2__::func_118(iLocal_677[0], 1, 1) > 7f) && __LIB_2__::func_215(iLocal_677[0], Global_35, 0, 1114636288 /* Float: 60f */, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_677[0]))
		{
			__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("CALLOVER_IDLE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_824, 128);
			__LIB_2__::func_259(&uLocal_719);
			__LIB_2__::func_315(1891783641, iLocal_677[0], 1);
		}
	}
	if (__LIB_0__::func_27(iLocal_824, 32))
	{
		return;
	}
	if (!TASK::GET_IS_TASK_ACTIVE(iLocal_677[0], 3))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_671);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_671);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_228[8 /*2*/], Local_228[8 /*2*/].f_1, Global_35, -1, 2f, -2f, 1, 0f, false, true, -1f, 0, 0, -1f);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_671);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_677[0], iLocal_671);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_671);
		func_319();
		__LIB_3__::func_596(&uLocal_719, 0);
		__LIB_1__::func_683(&iLocal_824, 32);
	}
}

bool func_317()
{
	int iVar0;
	if (iLocal_670 != 0)
	{
		return false;
	}
	iVar0 = 0;
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_600.f_1, "internal_loop", false, false);
	if (!__LIB_0__::func_86(vLocal_812) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_600.f_1, false))
	{
		if (__LIB_0__::func_94(iLocal_677[0], vLocal_812, 0) < 0.25f)
		{
			ANIMSCENE::START_ANIM_SCENE(Local_600.f_1);
			__LIB_1__::func_683(&iLocal_824, 1024);
			if (!__LIB_0__::func_899(&uLocal_737))
			{
				__LIB_3__::func_596(&uLocal_737, 0);
			}
			iLocal_718 = 2;
			__LIB_2__::func_360(&(Local_878[1 /*17*/]), "BEAT_GRT_NEG");
			iLocal_852 = 1;
			iLocal_845 = 1;
			iLocal_846 = 1;
			iLocal_844 = 1;
			if (iLocal_58 == 2)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_600.f_1, "THUG_02", iLocal_677[1]);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_600.f_1, "THUG", iLocal_677[1]);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_671);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, 2725.607f, -1331.955f, 46.54052f, 1f, -1, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2725.497f, -1341.152f, 46.53061f, -1f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2725.497f, -1341.152f, 46.53061f, -1f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				__LIB_1__::func_474(iLocal_677[1], &iLocal_671, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(iLocal_677[1], true);
				__LIB_3__::func_259(iLocal_677[1], 0);
				iLocal_677[1] = __LIB_3__::func_370(Local_503[1 /*32*/].f_1, 2739.988f, -1318.07f, 46.59291f, 0, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0);
				__LIB_3__::func_566(&(iLocal_677[1]), 748072587);
				__LIB_2__::func_272(iLocal_677[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_600.f_1, "THUG", iLocal_677[1], 0);
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_677[1], "1060_G_M_M_UniCriminals_01_WHITE_07");
				iLocal_851 = 1;
			}
		}
	}
	switch (iLocal_778)
	{
		case 0:
			if ((__LIB_0__::func_195(vLocal_18, vLocal_21, Global_36) && !__LIB_0__::func_27(iLocal_824, 33554432)) && __LIB_1__::func_205(Global_35, iLocal_752, 1, 0))
			{
				if (__LIB_0__::func_195(vLocal_18, vLocal_21, ENTITY::GET_ENTITY_COORDS(iLocal_677[0], true, false)))
				{
					__LIB_1__::func_683(&iLocal_824, 1073741824 /* Float: 2f */);
				}
				else if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600.f_1, "pbl_knockout_var3"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600.f_1, "pbl_knockout_var3");
				}
				func_293(1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vLocal_30, 1f, -1, 0.5f, 1, 40000f);
				iLocal_778 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_27(iLocal_824, 1073741824 /* Float: 2f */))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_600.f_1, "player_zero", &vLocal_800, true, "PBL_KNOCKOUT_VAR2_MAIN", 2))
				{
					iVar0 = 1;
				}
			}
			else
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_600.f_1, "player_zero", &vLocal_800, true, "pbl_knockout_var3", 2))
				{
					iVar0 = 1;
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600.f_1, "pbl_knockout_var3"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600.f_1, "pbl_knockout_var3");
					}
				}
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_677[0], Global_35, -1, -1f, -1f, -1f);
				if (iVar0 == 1)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_677[0], vLocal_24, 1f, 20000, 0.25f, 0, 40000f);
				}
			}
			if (iVar0 == 1)
			{
				func_504();
				__LIB_1__::func_683(&iLocal_824, 33554432);
				iLocal_778 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_27(iLocal_824, 1073741824 /* Float: 2f */))
			{
				if (!ANIMSCENE::_0x8D81E7824B7753F7(Local_600.f_1, "s_knockout_var2_stranger_loop", 1))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_600.f_1, "pbl_knockout_var1"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600.f_1, "pbl_knockout_var1");
					}
				}
			}
			if (func_505(&Local_685, 106))
			{
				if (__LIB_0__::func_27(iLocal_824, 1073741824 /* Float: 2f */))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_600.f_1, false))
					{
						if (ANIMSCENE::_0x8D81E7824B7753F7(Local_600.f_1, "s_knockout_var2_stranger_loop", 1))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_677[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
							__LIB_1__::func_683(&iLocal_824, 2048);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_600.f_1, "internal_loop", true, false);
							iLocal_778 = 3;
							func_325();
							return true;
						}
						else if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_600.f_1, "pbl_knockout_var1") && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_600.f_1) >= 0.0857f)
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_600.f_1, "pbl_knockout_var1", true);
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_677[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
							__LIB_1__::func_683(&iLocal_824, 2048);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_600.f_1, "internal_loop", true, false);
							iLocal_778 = 3;
							func_325();
							return true;
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600.f_1, "pbl_knockout_var1");
						}
					}
					else if (__LIB_2__::func_1(iLocal_677[0], 0, 1) && !__LIB_0__::func_163(iLocal_677[0], 1435919172))
					{
						ANIMSCENE::START_ANIM_SCENE(Local_600.f_1);
					}
				}
				else if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_600.f_1, "pbl_knockout_var3") && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_677[0]))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_600.f_1, "pbl_knockout_var3", true);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_677[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
					ANIMSCENE::START_ANIM_SCENE(Local_600.f_1);
					if (iLocal_58 == 2)
					{
						TASK::TASK_PLAY_ANIM(iLocal_677[1], Local_228[1 /*2*/], Local_228[1 /*2*/].f_1, 2f, -2f, -1, 24, 0.956f, true, 65536, false, 0, false);
					}
					__LIB_1__::func_683(&iLocal_824, 2048);
					iLocal_778 = 3;
					func_325();
					return true;
				}
				else if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_677[0]))
				{
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_600.f_1, "pbl_knockout_var3");
				}
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_319()
{
	iLocal_842 = 0;
	__LIB_2__::func_411(&(Local_878[0 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_878[1 /*17*/]), 1, 0);
	if (iLocal_718 == 1 || iLocal_718 == 2)
	{
		iLocal_847 = 1;
	}
	iLocal_845 = 1;
	iLocal_846 = 1;
	iLocal_844 = 1;
}

void func_320()
{
	int iVar0;
	if (iLocal_835 == 1)
	{
		return;
	}
	iVar0 = 0;
	if (__LIB_0__::func_163(iLocal_677[0], 242628503) || __LIB_0__::func_163(iLocal_677[0], 1418067348))
	{
		iVar0 = TASK::GET_SEQUENCE_PROGRESS(iLocal_677[0]);
		if (iVar0 > iLocal_827)
		{
			iLocal_827 = iVar0;
			if ((__LIB_0__::func_665(iLocal_677[0], Global_35, 1, 1) > 7f || (PED::IS_PED_RAGDOLL(Global_35) && __LIB_0__::func_27(iLocal_824, 2))) && iLocal_838 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_677[0]);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_671);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				__LIB_1__::func_474(iLocal_677[0], &iLocal_671, 0, 0, 1, 1);
				iLocal_838 = 1;
				if (__LIB_0__::func_899(&uLocal_719))
				{
					__LIB_1__::func_585(&uLocal_719, 3f);
				}
			}
		}
	}
	if (iLocal_838 == 1)
	{
		if (__LIB_0__::func_665(iLocal_677[0], Global_35, 1, 1) < 5f)
		{
			TASK::TASK_PERFORM_SEQUENCE_FROM_PROGRESS(iLocal_677[0], iLocal_672, iLocal_827, iLocal_827 + 1);
			iLocal_838 = 0;
		}
	}
}

void func_321()
{
	if (iLocal_829 >= 10 && iLocal_837 == 1)
	{
		iLocal_829 = 0;
		if (__LIB_3__::func_643(&Local_309, 0, 7f))
		{
			if (__LIB_0__::func_163(iLocal_677[0], -875674219))
			{
				if (iLocal_670 == 0)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_671);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_812, 1f, -1, 0.25f, 1, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_30, 1f, -1, 0.25f, 1, 40000f);
					__LIB_1__::func_474(iLocal_677[0], &iLocal_671, 0, 0, 1, 1);
				}
				if (iLocal_670 == 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_671);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2842.83f, -1166.51f, 46.5447f, 1f, -1, 0.25f, 0, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
					__LIB_1__::func_474(iLocal_677[0], &iLocal_671, 0, 0, 1, 1);
				}
				iLocal_843 = 0;
				if (__LIB_0__::func_899(&uLocal_737))
				{
					__LIB_1__::func_561(&uLocal_737);
				}
			}
		}
		else if (__LIB_0__::func_163(iLocal_677[0], 242628503))
		{
			if (iLocal_670 == 0)
			{
				if (!__LIB_0__::func_195(vLocal_24, vLocal_27, ENTITY::GET_ENTITY_COORDS(iLocal_677[0], true, false)))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_677[0], Global_35, -1, -1f, -1f, -1f);
					iLocal_843 = 1;
				}
			}
			else if (!__LIB_0__::func_27(iLocal_824, 262144))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_677[0], Global_35, -1, -1f, -1f, -1f);
				iLocal_843 = 1;
			}
		}
	}
	else
	{
		iLocal_829++;
	}
}

void func_322()
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	if (__LIB_0__::func_27(iLocal_824, 33554432) || iLocal_778 == 1)
	{
		return;
	}
	if ((__LIB_0__::func_27(iLocal_824, 1024) || iLocal_843 == 1) || iLocal_670 == 1)
	{
		if ((!__LIB_0__::func_899(&uLocal_737) && !__LIB_0__::func_27(iLocal_824, 134217728)) && !__LIB_0__::func_27(iLocal_824, 268435456))
		{
			__LIB_3__::func_596(&uLocal_737, 0);
		}
		if ((__LIB_4__::func_118(&uLocal_737) > fLocal_676 && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_677[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			fVar0 = (fLocal_676 - 3f);
			vVar1 = { __LIB_2__::func_114(Global_35, 1f) };
			fVar4 = __LIB_0__::func_94(iLocal_677[0], vVar1, 1);
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar1, true) < 0.2f)
			{
			}
			else if (fVar4 > __LIB_3__::func_588(&Local_309, 0))
			{
			}
			else
			{
				__LIB_1__::func_585(&uLocal_737, fVar0);
				return;
			}
			if (!__LIB_0__::func_27(iLocal_824, 134217728))
			{
				if (iLocal_843 == 0)
				{
					TASK::TASK_PLAY_ANIM(iLocal_677[0], Local_228[11 /*2*/], Local_228[11 /*2*/].f_1, 2f, -2f, -1, 16, 0f, false, 0, false, 0, false);
				}
				__LIB_2__::func_259(&uLocal_737);
				__LIB_1__::func_683(&iLocal_824, 134217728);
				fLocal_676 = 6f;
				__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("IDLE_WAIT_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_825, 512);
			}
			else if (__LIB_0__::func_27(iLocal_824, 134217728) && !__LIB_0__::func_27(iLocal_824, 268435456))
			{
				if (iLocal_843 == 0)
				{
					TASK::TASK_PLAY_ANIM(iLocal_677[0], Local_228[12 /*2*/], Local_228[12 /*2*/].f_1, 2f, -2f, -1, 16, 0f, false, 0, false, 0, false);
				}
				__LIB_2__::func_259(&uLocal_737);
				__LIB_1__::func_683(&iLocal_824, 268435456);
				fLocal_676 = 7f;
				__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("IDLE_WAIT_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_825, 512);
			}
			else if (__LIB_0__::func_27(iLocal_824, 134217728) && __LIB_0__::func_27(iLocal_824, 268435456))
			{
				__LIB_1__::func_561(&uLocal_737);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_671);
				if (iLocal_670 == 0)
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, vLocal_54, 1f, -1, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
					__LIB_2__::func_915(0, joaat("WORLD_HUMAN_SMOKE"), 2828.015f, -1247.959f, 46.55649f, -27f, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
				}
				else
				{
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				}
				__LIB_1__::func_474(iLocal_677[0], &iLocal_671, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(iLocal_677[0], true);
				__LIB_0__::func_325(&(uLocal_681[0]));
				if (iLocal_670 == 0)
				{
					__LIB_2__::func_915(iLocal_677[1], joaat("WORLD_HUMAN_SMOKE"), 2827.146f, -1242.897f, 46.50665f, -131f, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
				}
				PED::SET_PED_KEEP_TASK(iLocal_677[1], true);
				iLocal_774 = 7;
				__LIB_3__::func_593(0);
				__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("GIVE_UP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_825, 4096);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
				__LIB_2__::func_480(&Local_878, 1, 1, 1, 0);
				__LIB_4__::func_399(&(Local_856[0 /*21*/]), &Local_878);
				func_286(iLocal_677[0], 1, joaat("AGGRESSIVE"));
				if (iLocal_851 == 1 && iLocal_58 == 2)
				{
					__LIB_2__::func_426(&(iLocal_677[1]));
				}
				else
				{
					func_286(iLocal_677[1], 1, joaat("AGGRESSIVE"));
				}
				if (__LIB_2__::func_1(iLocal_677[2], 0, 1))
				{
					func_286(iLocal_677[2], 1, joaat("AGGRESSIVE"));
				}
			}
		}
	}
}

void func_323()
{
	float fVar0;
	float fVar1;
	if (!__LIB_0__::func_27(iLocal_824, 2048) && !__LIB_0__::func_27(iLocal_824, 1024))
	{
		if (__LIB_0__::func_195(vLocal_24, vLocal_27, Global_36))
		{
			fVar0 = __LIB_0__::func_94(iLocal_677[0], vLocal_812, 1);
			fVar1 = __LIB_0__::func_94(Global_35, vLocal_812, 1);
			if (fVar0 < fVar1)
			{
				if (iLocal_837 == 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_677[0], vLocal_812, 1f, -1, 0.25f, 0, 40000f);
					iLocal_837 = 1;
				}
			}
			else if (__LIB_0__::func_665(Global_35, iLocal_677[0], 1, 1) < 1.85f)
			{
				if (iLocal_837 == 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_677[0], Global_35, 0, -1f, -1f, -1f);
					iLocal_837 = 0;
					if (!__LIB_0__::func_27(iLocal_824, 131072) && __LIB_4__::func_398(-6f, 1, 0, 0))
					{
						__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("BLOCKED_ALLEY_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_824, 131072);
						__LIB_3__::func_596(&uLocal_731, 0);
					}
				}
				if (__LIB_0__::func_899(&uLocal_731) && __LIB_3__::func_601(&uLocal_731, 8f))
				{
					__LIB_3__::func_600(iLocal_677[0], Global_35, func_130("BLOCKED_ALLEY_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
		}
		else if (iLocal_837 == 0)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_677[0], vLocal_812, 1f, -1, 0.25f, 0, 40000f);
			iLocal_837 = 1;
		}
	}
}

void func_325()
{
	if (STREAMING::_0x513F8AA5BF2F17CF(vLocal_45, 10f, 0))
	{
	}
	STREAMING::_0xA8432A14D4DC2101(vLocal_45);
}

void func_328()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_23();
	iVar1 = __LIB_0__::func_41(iVar0);
	iVar2 = iVar1 + 1;
	if (iVar2 > 23)
	{
		iVar2 = (iVar2 - 23);
	}
	__LIB_10__::func_832(iVar2);
}

void func_475(int iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		__LIB_1__::func_480(iParam0);
		__LIB_4__::func_399(iParam1, uParam2);
	}
	__LIB_2__::func_56(*iParam0, 1, bParam4);
}

int func_480(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		__LIB_1__::func_487(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0));
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			__LIB_2__::func_259(&(iParam1->f_13));
		}
		if (__LIB_2__::func_525(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_17__::func_906(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_480(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_1__::func_480(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*iParam0, 317, true))
						{
							__LIB_1__::func_488(*iParam0, 1, 1);
						}
					}
					else if (__LIB_1__::func_489(iParam1, 22))
					{
						__LIB_1__::func_488(*iParam0, 0, 1);
					}
				}
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_758(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (func_615(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_4__::func_394(*iParam0, iParam1, uParam3))
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
				if (__LIB_13__::func_460(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_377(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_615(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_758(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				if (__LIB_13__::func_460(iParam0, iParam1, fParam4, bVar6))
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
			__LIB_4__::func_399(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_504()
{
	__LIB_4__::func_80(&Local_685);
	Local_685.f_1 = Global_35;
	Local_685.f_8 = { vLocal_800 };
	Local_685.f_19 = vLocal_800.f_3.f_2;
	Local_685.f_18 = 0f;
	__LIB_1__::func_336(&(Local_685.f_23), 4);
	__LIB_1__::func_336(&(Local_685.f_23), 2);
	__LIB_1__::func_336(&(Local_685.f_23), 256);
	Local_685.f_4 = 1;
	Local_685.f_14 = { Global_36 };
}

bool func_505(var uParam0, int iParam1)
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
				__LIB_2__::func_259(&(uParam0->f_5));
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
			if (__LIB_4__::func_98(uParam0, iParam1))
			{
				__LIB_2__::func_259(&(uParam0->f_5));
				if (!__LIB_4__::func_104(uParam0, iParam1))
				{
					__LIB_3__::func_671();
				}
				__LIB_0__::func_19(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (__LIB_4__::func_104(uParam0, iParam1))
			{
				__LIB_2__::func_259(&(uParam0->f_5));
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
			if (__LIB_4__::func_99(uParam0, iParam1))
			{
				__LIB_2__::func_259(&(uParam0->f_5));
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
			if (__LIB_4__::func_100(uParam0, iParam1))
			{
				__LIB_2__::func_259(&(uParam0->f_5));
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
					TASK::TASK_ENTER_ANIM_SCENE(uParam0->f_1, uParam0->f_25, &(uParam0->f_30), &(uParam0->f_26), uParam0->f_21, 0, iVar7, 20000, -1082130432 /* Float: -1f */);
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
			if (!__LIB_0__::func_27(uParam0->f_23, 128) && __LIB_3__::func_601(&(uParam0->f_5), 15f))
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
				__LIB_1__::func_561(&(uParam0->f_5));
				__LIB_0__::func_19(uParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_615(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*iParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_899(&(iParam1->f_13)))
	{
		fVar12 = __LIB_1__::func_583(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_3__::func_351(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*iParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_480(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_2__::func_526(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_4__::func_122(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (__LIB_1__::func_500(iParam1, fParam6, iParam1->f_9))
					{
						__LIB_2__::func_259(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_2__::func_526(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar5;
}

