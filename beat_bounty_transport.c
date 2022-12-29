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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 6;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 6;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 6;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 6;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 4;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 3;
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
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	float fLocal_83 = 0f;
	bool bLocal_84 = false;
	int iLocal_85[2] = { 0, 0 };
	int iLocal_88[2] = { 0, 0 };
	vector3 vLocal_91[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_116 = { 0f, 0f, 0f };
	vector3 vLocal_119 = { 0f, 0f, 0f };
	vector3 vLocal_122 = { 0f, 0f, 0f };
	vector3 vLocal_125 = { 0f, 0f, 0f };
	vector3 vLocal_128 = { 0f, 0f, 0f };
	struct<213> Local_131[2];
	var uLocal_558 = 2;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561[3] = { 0, 0, 0 };
	var uLocal_565[3] = { 0, 0, 0 };
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	struct<193> Local_573 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_766 = 0;
	int iLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	int iLocal_775 = 0;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	int iLocal_778 = 0;
	int iLocal_779 = 0;
	int iLocal_780 = 0;
	int iLocal_781 = 0;
	int iLocal_782 = 0;
	struct<2> Local_783[2];
	var uLocal_788 = 2;
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
	struct<32> Local_805[3];
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 1065353216;
	var uLocal_907 = 1065353216;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 1065353216;
	var uLocal_912 = 1065353216;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 1065353216;
	var uLocal_917 = 1065353216;
	var uLocal_918 = 0;
	var uLocal_919 = 1040187392;
	var uLocal_920 = 1040187392;
	var uLocal_921 = -1;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = -1082130432;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	int iLocal_940 = 0;
	int iLocal_941 = 0;
	int iLocal_942 = 0;
	int iLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = -1;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 2;
	var uLocal_953 = 1;
	var uLocal_954 = 1;
	var uLocal_955 = 1;
	var uLocal_956 = 0;
	var uLocal_957 = 1;
	var uLocal_958 = 2;
	var uLocal_959 = 2;
	var uLocal_960 = 3;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 3;
	var uLocal_964 = 1;
	var uLocal_965 = 3;
	var uLocal_966 = 3;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	int iLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	int iLocal_994 = 0;
	var uLocal_995[3] = { 0, 0, 0 };
	int iLocal_999[3] = { 0, 0, 0 };
	int iLocal_1003 = 0;
	struct<75> Local_1004[3];
	int iLocal_1230[3] = { 0, 0, 0 };
	var uLocal_1234 = 0;
	struct<23> Local_1235[4];
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_78 = -1;
	iLocal_82 = 5000;
	fLocal_83 = 150f;
	iLocal_778 = 1;
	iLocal_994 = -1;
	Local_573.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		Local_573.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		__LIB_3__::func_368(&Local_573, 1);
		func_4(&iLocal_572, Local_573.f_161);
		__LIB_2__::func_662(&(Local_573.f_5), 1);
		__LIB_2__::func_104(&(Local_573.f_5), 1);
		__LIB_2__::func_105(&(Local_573.f_5), 1);
		__LIB_2__::func_110(&(Local_573.f_5), 1);
		__LIB_3__::func_570(&(Local_573.f_5), 1);
	}
	while (true)
	{
		if (bVar0)
		{
			__LIB_2__::func_265(bVar0, 1626, 0);
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_778)
			{
				case 1:
					if (func_12(&Local_573, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_13(&Local_573, &iLocal_942, &iLocal_943);
						func_14(7, Local_573.f_51.f_4, &vLocal_91);
						Local_573.f_51.f_4 = iLocal_943;
						__LIB_3__::func_455(&Local_573, iLocal_942, 10255);
						func_17(&Local_805, iLocal_942, iLocal_943);
						__LIB_3__::func_440(&uLocal_944, Global_35, 0, 7000, 2, 2, 2, 1, 0, 0, 0, 0);
						iLocal_778 = 0;
					}
					else if (Local_573.f_160)
					{
						func_10();
					}
					break;
				case 0:
					if (func_19())
					{
						iLocal_778 = 3;
					}
					break;
				case 3:
					if (func_20())
					{
						func_21();
						func_22(iLocal_942, &Local_783, &uLocal_788, &Local_131, &uLocal_558);
						iLocal_1230[0] = __LIB_2__::func_340(1, 0, 0) | 64 | 256;
						iLocal_1230[1] = __LIB_2__::func_340(1, 0, 0) | 64 | 256;
						iLocal_1230[2] = __LIB_2__::func_340(1, 0, 0) | 64 | 256;
						func_24(&(Local_1004[0 /*75*/].f_21), &(Local_1004[1 /*75*/].f_21), &(Local_1004[2 /*75*/].f_21), iLocal_942, iLocal_572);
						__LIB_3__::func_462(&(Local_1004[2 /*75*/].f_21), 1);
						__LIB_1__::func_471(&(Local_1004[0 /*75*/].f_21[0 /*17*/]), 8);
						__LIB_1__::func_471(&(Local_1004[0 /*75*/].f_21[1 /*17*/]), 8);
						__LIB_1__::func_471(&(Local_1004[1 /*75*/].f_21[0 /*17*/]), 8);
						__LIB_1__::func_471(&(Local_1004[1 /*75*/].f_21[1 /*17*/]), 8);
						__LIB_1__::func_471(&(Local_1004[2 /*75*/].f_21[0 /*17*/]), 8);
						__LIB_1__::func_471(&(Local_1004[2 /*75*/].f_21[1 /*17*/]), 8);
						if (iLocal_942 == 1 && iLocal_943 == 2)
						{
							__LIB_17__::func_859(8192, 0, 48f);
						}
						iLocal_778 = 4;
					}
					break;
				case 4:
					if (!__LIB_3__::func_466(&Local_573, &uLocal_561, iLocal_572, 0, 1, 0, 1, 0))
					{
						func_10();
					}
					if (__LIB_3__::func_287())
					{
						func_10();
					}
					if (!Local_573.f_46)
					{
						if ((__LIB_3__::func_550(&uLocal_561, &(Local_573.f_5), &iLocal_941, &uLocal_79, 0, 1, 1) || func_31(16384)) || func_32(8, 0))
						{
							if (func_31(16384) || func_32(8, 0))
							{
								bVar1 = true;
							}
							else if (Local_573.f_5.f_10 == uLocal_561[0])
							{
								if (!iLocal_88[0])
								{
									bVar1 = true;
								}
							}
							else if (Local_573.f_5.f_10 == uLocal_561[1])
							{
								if (!iLocal_88[1])
								{
									bVar1 = true;
								}
							}
							if (bVar1)
							{
								switch (iLocal_941)
								{
									case 2:
									case 4:
									case 16:
									case 256:
										func_33(32768);
										break;
								}
								if (!iLocal_88[0])
								{
									__LIB_2__::func_73(uLocal_561[0], &(uLocal_565[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
								}
								if (!iLocal_88[1])
								{
									__LIB_2__::func_73(uLocal_561[1], &(uLocal_565[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
								}
								func_35(4, 2);
								Local_573.f_46 = 1;
							}
						}
						if (Local_573.f_46)
						{
							switch (iLocal_572)
							{
								case 0:
									if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[0]) && !iLocal_88[0])
									{
										__LIB_2__::func_461(0);
										__LIB_2__::func_504(uLocal_561[2], 0);
										func_38(uLocal_561[0], Global_35, 2, -1073741824 /* Float: -2f */, 0, 1744022339);
									}
									else if ((!func_39(iLocal_942) && !ENTITY::IS_ENTITY_DEAD(uLocal_561[1])) && !iLocal_88[1])
									{
										__LIB_2__::func_461(0);
										__LIB_2__::func_504(uLocal_561[2], 0);
										func_38(uLocal_561[1], Global_35, 2, -1073741824 /* Float: -2f */, 0, 1744022339);
									}
									break;
								case 1:
									if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[0]) && !iLocal_88[0])
									{
										__LIB_2__::func_461(0);
										__LIB_2__::func_504(uLocal_561[2], 0);
										func_38(uLocal_561[0], Global_35, 1, -1073741824 /* Float: -2f */, 0, 1744022339);
									}
									else if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[1]) && !iLocal_88[1])
									{
										__LIB_2__::func_461(0);
										__LIB_2__::func_504(uLocal_561[2], 0);
										func_38(uLocal_561[1], Global_35, 2, -1073741824 /* Float: -2f */, 0, 1744022339);
									}
									break;
							}
							__LIB_1__::func_649(&iLocal_776, 4);
						}
					}
					if (func_41())
					{
						Local_573.f_50 = 1;
						func_10();
					}
					if (__LIB_3__::func_431(&Local_573, &uLocal_561, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_573.f_50 = 1;
						func_10();
					}
					break;
			}
			BUILTIN::WAIT(Local_573.f_158);
		}
	}
}

void func_4(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = __LIB_3__::func_390(7, 2, 0);
	*iParam0 = iVar0;
}

void func_10()
{
	__LIB_0__::func_325(&(uLocal_565[0]));
	__LIB_0__::func_325(&(uLocal_565[1]));
	__LIB_0__::func_325(&(uLocal_565[2]));
	if (PED::DOES_GROUP_EXIST(iLocal_570))
	{
		PED::REMOVE_GROUP(iLocal_570);
	}
	__LIB_3__::func_459(uLocal_561[2], 1);
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_561[2], 448, false);
		__LIB_1__::func_727(uLocal_561[2], 1);
		if (!Local_573.f_48)
		{
			if (__LIB_2__::func_215(Global_35, uLocal_561[2], 0, 55f, 0))
			{
				PED::_0x39A2FC5AF55A52B1(uLocal_561[2], -1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_561[2]));
			}
			else
			{
				__LIB_2__::func_426(&(uLocal_561[2]));
			}
		}
		else if (iLocal_572 == 0)
		{
			func_53(0);
		}
		else
		{
			func_53(1);
		}
	}
	func_54(0, 0);
	func_54(1, 0);
	__LIB_3__::func_524(&iLocal_78);
	__LIB_0__::func_172(iLocal_969);
	func_57();
	__LIB_3__::func_493(&Local_573, &uLocal_561, &uLocal_565, iLocal_572, iLocal_942, iLocal_943, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_12(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (bParam6 || func_60(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || __LIB_3__::func_304(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (__LIB_1__::func_85(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				__LIB_3__::func_305(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = __LIB_3__::func_162(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_13(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 1;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 1;
			*iParam2 = 1;
			break;
		case 2:
			*iParam1 = 1;
			*iParam2 = 2;
			break;
		case 3:
			*iParam1 = 1;
			*iParam2 = 3;
			break;
		case 4:
			*iParam1 = 1;
			*iParam2 = 4;
			break;
		case 5:
			*iParam1 = 1;
			*iParam2 = 5;
			break;
		case 6:
			*iParam1 = 3;
			*iParam2 = 0;
			break;
		case 7:
			*iParam1 = 3;
			*iParam2 = 1;
			break;
		case 8:
			*iParam1 = 3;
			*iParam2 = 2;
			break;
		case 9:
			*iParam1 = 6;
			*iParam2 = 0;
			break;
		case 10:
			*iParam1 = 6;
			*iParam2 = 1;
			break;
		case 11:
			*iParam1 = 6;
			*iParam2 = 2;
			break;
		case 12:
			*iParam1 = 6;
			*iParam2 = 3;
			break;
		case 13:
			*iParam1 = 6;
			*iParam2 = 4;
			break;
		case 14:
			*iParam1 = 9;
			*iParam2 = 0;
			break;
		case 15:
			*iParam1 = 9;
			*iParam2 = 1;
			break;
		case 16:
			*iParam1 = 9;
			*iParam2 = 2;
			break;
		case 17:
			*iParam1 = 10;
			*iParam2 = 0;
			break;
		case 18:
			*iParam1 = 10;
			*iParam2 = 1;
			break;
		case 19:
			*iParam1 = 10;
			*iParam2 = 2;
			break;
		case 20:
			*iParam1 = 10;
			*iParam2 = 3;
			break;
		case 21:
			*iParam1 = 10;
			*iParam2 = 4;
			break;
		case 22:
			*iParam1 = 10;
			*iParam2 = 5;
			break;
	}
}

bool func_14(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(iParam2[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*(iParam2[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*(iParam2[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(iParam2[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*(iParam2[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*(iParam2[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(iParam2[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*(iParam2[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(iParam2[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*(iParam2[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*(iParam2[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*(iParam2[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 4:
					*(iParam2[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*(iParam2[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 5:
					*(iParam2[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*(iParam2[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(iParam2[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*(iParam2[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*(iParam2[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(iParam2[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*(iParam2[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*(iParam2[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(iParam2[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*(iParam2[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(iParam2[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*(iParam2[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*(iParam2[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(iParam2[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*(iParam2[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 11:
					*(iParam2[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*(iParam2[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(iParam2[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*(iParam2[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*(iParam2[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*(iParam2[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(iParam2[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*(iParam2[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(iParam2[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*(iParam2[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(iParam2[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*(iParam2[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(iParam2[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*(iParam2[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*(iParam2[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*(iParam2[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(iParam2[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*(iParam2[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*(iParam2[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*(iParam2[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(iParam2[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*(iParam2[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*(iParam2[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*(iParam2[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(iParam2[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*(iParam2[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*(iParam2[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 20:
					*(iParam2[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*(iParam2[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*(iParam2[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 21:
					*(iParam2[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*(iParam2[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*(iParam2[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 22:
					*(iParam2[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*(iParam2[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(iParam2[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*(iParam2[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(iParam2[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*(iParam2[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(iParam2[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*(iParam2[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(iParam2[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*(iParam2[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(iParam2[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*(iParam2[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(iParam2[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*(iParam2[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*(iParam2[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
					*(iParam2[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(iParam2[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
					*(iParam2[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(iParam2[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
					*(iParam2[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(iParam2[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
					*(iParam2[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(iParam2[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
					*(iParam2[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(iParam2[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
					*(iParam2[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 26:
					*(iParam2[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
					*(iParam2[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 27:
					*(iParam2[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
					*(iParam2[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 28:
					*(iParam2[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
					*(iParam2[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 29:
					*(iParam2[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
					*(iParam2[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 30:
					*(iParam2[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
					*(iParam2[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*(iParam2[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
					*(iParam2[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(iParam2[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
					*(iParam2[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(iParam2[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
					*(iParam2[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(iParam2[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
					*(iParam2[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*(iParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
					*(iParam2[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(iParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
					*(iParam2[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(iParam2[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
					*(iParam2[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(iParam2[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
					*(iParam2[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
					*(iParam2[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*(iParam2[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
					*(iParam2[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(iParam2[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
					*(iParam2[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(iParam2[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
					*(iParam2[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(iParam2[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
					*(iParam2[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(iParam2[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
					*(iParam2[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(iParam2[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
					*(iParam2[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(iParam2[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
					*(iParam2[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 24:
					*(iParam2[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
					*(iParam2[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 25:
					*(iParam2[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
					*(iParam2[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
					*(iParam2[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 28:
					*(iParam2[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
					*(iParam2[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 29:
					*(iParam2[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
					*(iParam2[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 30:
					*(iParam2[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
					*(iParam2[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
					*(iParam2[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 31:
					*(iParam2[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
					*(iParam2[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 32:
					*(iParam2[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
					*(iParam2[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 33:
					*(iParam2[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
					*(iParam2[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
					*(iParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(iParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
	}
	return false;
}

Vector3 func_15(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 118.52f;
				case 1:
					return 0f, 0f, -189.21f;
				case 2:
					return 0f, 0f, 156.13f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 121.78f;
				case 1:
					return 0f, 0f, -62.64f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 3:
					return 0f, 0f, 91.44f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -41.78f;
				case 1:
					return 0f, 0f, 8.88f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_17(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	switch (iParam1)
	{
		case 10:
			switch (iParam2)
			{
				case 1:
				case 2:
					(uParam0[0 /*32*/])->f_6 = { 0f, 0f, 0f };
					(uParam0[1 /*32*/])->f_6 = { 2f, 3f, 0f };
					(uParam0[2 /*32*/])->f_6 = { -3f, 0f, 0f };
					(uParam0[0 /*32*/])->f_15 = { 0f, 0f, 0f };
					(uParam0[1 /*32*/])->f_15 = { 0f, 5f, 0f };
					break;
				default:
					(uParam0[0 /*32*/])->f_6 = { 0f, 0f, 0f };
					(uParam0[1 /*32*/])->f_6 = { -2f, -3f, 0f };
					(uParam0[2 /*32*/])->f_6 = { 3f, 0f, 0f };
					(uParam0[0 /*32*/])->f_15 = { 0f, 0f, 0f };
					(uParam0[1 /*32*/])->f_15 = { 0f, -5f, 0f };
					break;
			}
			break;
		default:
			(uParam0[0 /*32*/])->f_6 = { 0f, 0f, 0f };
			(uParam0[1 /*32*/])->f_6 = { -2f, -3f, 0f };
			(uParam0[2 /*32*/])->f_6 = { 3f, 0f, 0f };
			(uParam0[0 /*32*/])->f_15 = { 0f, 0f, 0f };
			(uParam0[1 /*32*/])->f_15 = { 0f, -5f, 0f };
			break;
	}
	fVar0 = __LIB_3__::func_731((uParam0[0 /*32*/])->f_6, Global_36);
	fVar1 = __LIB_2__::func_709(fVar0);
	(uParam0[0 /*32*/])->f_9 = -fVar1;
	fVar0 = __LIB_3__::func_731((uParam0[1 /*32*/])->f_6, Global_36);
	fVar1 = __LIB_2__::func_709(fVar0);
	(uParam0[1 /*32*/])->f_9 = -fVar1;
	(uParam0[2 /*32*/])->f_9 = 180f;
}

bool func_19()
{
	switch (iLocal_775)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_573))
			{
				HUD::_TEXT_DATABASE_REQUEST("BHCR");
				func_68(&Local_805, iLocal_942, iLocal_572);
				func_69();
				AUDIO::_0xD9130842D7226045(__LIB_3__::func_607(), 0);
				func_71(iLocal_572, &iLocal_767);
				func_72(&Local_783, &uLocal_788);
				iLocal_775 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_315(&uLocal_788))
			{
				return false;
			}
			if (!__LIB_3__::func_366(&Local_805))
			{
				return false;
			}
			if (!HUD::_TEXT_DATABASE_HAS_LOADED("BHCR"))
			{
				return false;
			}
			if (iLocal_572 == 1)
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_767, true, false))
				{
					return false;
				}
			}
			return true;
	}
	return false;
}

bool func_20()
{
	switch (iLocal_940)
	{
		case 0:
			if (__LIB_13__::func_859(Local_573.f_51, &uLocal_1234, 1101004800 /* Float: 20f */, 1))
			{
				iLocal_940 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_467(Local_573.f_51, 0f, &Local_805, &uLocal_561, 0, 0, -1, 1))
			{
				return false;
			}
			iLocal_940 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

void func_21()
{
	if (PED::ADD_RELATIONSHIP_GROUP("REL_REBNT", &iLocal_571))
	{
		PED::_0xDC91F22F09BC6C2F(iLocal_571, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[0]))
	{
		__LIB_2__::func_272(uLocal_561[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		ENTITY::SET_ENTITY_HEADING(uLocal_561[0], func_78(ENTITY::GET_ENTITY_COORDS(uLocal_561[0], true, false), Global_35, 0));
		PED::_0xD05AD61F242C626B(uLocal_561[0], 10f);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_561[0], iLocal_571);
		__LIB_2__::func_190(uLocal_561[0], __LIB_3__::func_540(joaat("REWARD_BEAT_SMALL"), 0, -1));
		func_81(&(uLocal_561[0]), joaat("MOODAGITATED"));
		__LIB_1__::func_991(uLocal_561[0], 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_561[0], 6, false);
		LAW::_0x00DB0BC05E3FAA4E(uLocal_561[0], 64);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[1]))
	{
		__LIB_2__::func_272(uLocal_561[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		ENTITY::SET_ENTITY_HEADING(uLocal_561[1], func_78(ENTITY::GET_ENTITY_COORDS(uLocal_561[1], true, false), Global_35, 0));
		PED::_0xD05AD61F242C626B(uLocal_561[1], 10f);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_561[1], iLocal_571);
		__LIB_2__::func_190(uLocal_561[1], __LIB_3__::func_540(joaat("REWARD_BEAT_SMALL"), 0, -1));
		func_81(&(uLocal_561[1]), joaat("MOODAGITATED"));
		__LIB_1__::func_991(uLocal_561[1], 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_561[1], 6, false);
		LAW::_0x00DB0BC05E3FAA4E(uLocal_561[1], 64);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_805[0 /*32*/].f_11))
	{
		Local_1235[0 /*23*/].f_1[0] = joaat("AMMO_REVOLVER");
		Local_1235[0 /*23*/].f_12[0] = 2;
		Local_1235[0 /*23*/] = 2;
		Local_1235[1 /*23*/].f_1[0] = joaat("CONSUMABLE_BAKED_BEANS_CAN");
		Local_1235[1 /*23*/].f_1[1] = joaat("CONSUMABLE_PEACHES_CAN");
		Local_1235[1 /*23*/].f_12[0] = 1;
		Local_1235[1 /*23*/].f_12[1] = 1;
		Local_1235[1 /*23*/] = 2;
		ENTITY::_0xA88E215CEB0435C0(Local_805[0 /*32*/].f_11, &(Local_1235[0 /*23*/]), 205298116, 128, 2, 0);
		ENTITY::_0xA88E215CEB0435C0(Local_805[0 /*32*/].f_11, &(Local_1235[1 /*23*/]), 205298116, 128, 2, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_805[1 /*32*/].f_11))
	{
		Local_1235[2 /*23*/].f_1[0] = joaat("AMMO_REVOLVER");
		Local_1235[2 /*23*/].f_12[0] = 2;
		Local_1235[2 /*23*/] = 2;
		Local_1235[3 /*23*/].f_1[0] = joaat("CONSUMABLE_SWEET_CORN_CAN");
		Local_1235[3 /*23*/].f_1[1] = joaat("CONSUMABLE_PEAS_CAN");
		Local_1235[3 /*23*/].f_12[0] = 1;
		Local_1235[3 /*23*/].f_12[1] = 1;
		Local_1235[3 /*23*/] = 2;
		ENTITY::_0xA88E215CEB0435C0(Local_805[1 /*32*/].f_11, &(Local_1235[2 /*23*/]), 205298116, 128, 2, 0);
		ENTITY::_0xA88E215CEB0435C0(Local_805[1 /*32*/].f_11, &(Local_1235[3 /*23*/]), 205298116, 128, 2, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_573.f_174))
		{
			PED::_0x7C00CFC48A782DC0(Local_573.f_174, uLocal_561[2], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		PED::SET_PED_CONFIG_FLAG(uLocal_561[2], 448, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_561[2], true, true);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_561[2], false);
		__LIB_3__::func_459(uLocal_561[2], 0);
		__LIB_0__::func_169(uLocal_561[2], 0, 1);
		PED::SET_PED_CONFIG_FLAG(uLocal_561[2], 6, true);
		PED::_0x24C82EF607105FAA(uLocal_561[2], joaat("TIMID"));
		PED::_0xB8B6430EAD2D2437(uLocal_561[2], 673924189);
		__LIB_1__::func_991(uLocal_561[2], 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_561[2], joaat("REL_NO_RELATIONSHIP"));
		func_81(&(uLocal_561[2]), joaat("MOODPANIC"));
	}
	if (!PED::DOES_GROUP_EXIST(iLocal_570))
	{
		if (__LIB_4__::func_479(&iLocal_570, 0, 10, 1))
		{
			PED::_0xD5BD1B5318A81994(iLocal_570, 1);
			PED::SET_PED_AS_GROUP_LEADER(uLocal_561[0], iLocal_570, false);
			PED::SET_PED_CONFIG_FLAG(uLocal_561[0], 279, true);
			PED::SET_PED_AS_GROUP_MEMBER(uLocal_561[1], iLocal_570);
			PED::SET_PED_CONFIG_FLAG(uLocal_561[1], 279, true);
		}
		else
		{
			TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_561[1], 2.5f, 0, 0);
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_561[1], uLocal_561[1], -0.5f, -1f, 0f, 2.5f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
		}
	}
	__LIB_3__::func_285(uLocal_561[0], &Local_573, 0);
	__LIB_3__::func_285(uLocal_561[1], &Local_573, 0);
	__LIB_3__::func_285(uLocal_561[2], &Local_573, 0);
}

void func_22(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 1:
		case 9:
			StringCopy(&((uParam3[0 /*213*/])->f_34), "RE_BTR_MTN_V1_THANK", 64);
			StringCopy(&((uParam3[1 /*213*/])->f_54), "RE_BTR_MTN_V1_WLCOM", 64);
			break;
		case 3:
		case 6:
		case 10:
			StringCopy(&((uParam3[0 /*213*/])->f_34), "RE_BTR_FTH_V1_THANK", 64);
			StringCopy(&((uParam3[1 /*213*/])->f_54), "RE_BTR_FTH_V1_WLCOM", 64);
			break;
	}
	StringCopy(&((uParam3[0 /*213*/])->f_2), (*uParam1)[0 /*2*/], 64);
	StringCopy(&((uParam3[0 /*213*/])->f_10), (uParam1[0 /*2*/])->f_1, 64);
	StringCopy(&((uParam3[1 /*213*/])->f_2), (*uParam1)[1 /*2*/], 64);
	StringCopy(&((uParam3[1 /*213*/])->f_10), (uParam1[1 /*2*/])->f_1, 64);
	__LIB_3__::func_318(&((uParam3[0 /*213*/])->f_2), uParam2);
	(uParam3[0 /*213*/])->f_78 = 0;
	(*uParam4)[0] = 0;
	(*uParam4)[1] = 0;
}

void func_24(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (func_39(iParam3))
	{
		switch (iParam4)
		{
			case 0:
				__LIB_2__::func_602(uParam0[0 /*17*/], __LIB_2__::func_460(7), "RE_BTR_FTH_V1_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam0[1 /*17*/], __LIB_2__::func_460(26), "RE_BTR_FTH_V1_ANTAGONIZE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_BTR_FTH_V1_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_BTR_FTH_V1_ANTAGONIZE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam2[0 /*17*/], __LIB_2__::func_460(7), "RE_BTR_FTH_V1_GREET_PRISONER", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam2[1 /*17*/], __LIB_2__::func_460(10), "RE_BTR_FTH_V1_ANTAGONIZE_PRISONER", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				break;
			case 1:
				__LIB_2__::func_602(uParam0[0 /*17*/], __LIB_2__::func_460(7), "RE_BTR_FTH_V2_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam0[1 /*17*/], __LIB_2__::func_460(26), "RE_BTR_FTH_V2_ANTAGONIZE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_BTR_FTH_V2_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_BTR_FTH_V2_ANTAGONIZE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam2[0 /*17*/], __LIB_2__::func_460(7), "RE_BTR_FTH_V2_GREET_PRISONER", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam2[1 /*17*/], __LIB_2__::func_460(10), "RE_BTR_FTH_V2_ANTAGONIZE_PRISONER", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				break;
		}
	}
	else
	{
		switch (iParam4)
		{
			case 0:
				__LIB_2__::func_602(uParam0[0 /*17*/], __LIB_2__::func_460(7), "RE_BTR_MTN_V1_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam0[1 /*17*/], __LIB_2__::func_460(26), "RE_BTR_FTH_V1_ANTAGONIZE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_BTR_MTN_V1_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_BTR_MTN_V1_ANTAGONIZE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam2[0 /*17*/], __LIB_2__::func_460(7), "RE_BTR_MTN_V1_GREET_PRISONER", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam2[1 /*17*/], __LIB_2__::func_460(10), "RE_BTR_MTN_V1_ANTAGONIZE_PRISONER", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				break;
			case 1:
				__LIB_2__::func_602(uParam0[0 /*17*/], __LIB_2__::func_460(7), "RE_BTR_MTN_V2_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam0[1 /*17*/], __LIB_2__::func_460(26), "RE_BTR_FTH_V2_ANTAGONIZE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_BTR_MTN_V2_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_BTR_MTN_V2_ANTAGONIZE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam2[0 /*17*/], __LIB_2__::func_460(7), "RE_BTR_MTN_V2_GREET_PRISONER", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam2[1 /*17*/], __LIB_2__::func_460(10), "RE_BTR_MTN_V2_ANTAGONIZE_PRISONER", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				break;
		}
	}
}

bool func_31(int iParam0)
{
	return __LIB_0__::func_27(iLocal_75, iParam0);
}

bool func_32(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(uLocal_995[iParam1], iParam0);
}

void func_33(int iParam0)
{
	if (!func_31(iParam0))
	{
		__LIB_1__::func_683(&iLocal_75, iParam0);
	}
}

void func_35(int iParam0, int iParam1)
{
	if (func_32(iParam0, iParam1))
	{
		__LIB_1__::func_681(&(uLocal_995[iParam1]), iParam0);
	}
}

bool func_38(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4, int iParam5)
{
	if (!__LIB_2__::func_1(iParam0, 0, 0))
	{
		return false;
	}
	if (__LIB_2__::func_227(fParam3, 1, 0, 0) || bParam4)
	{
		if (!func_117(iParam2))
		{
			if (__LIB_2__::func_478(iParam0, iParam1, func_118(iLocal_942, iLocal_572, iParam2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, iParam5, 1, 0, 0))
			{
				func_120(iParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_39(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 6:
		case 10:
			return true;
		default:
			break;
	}
	return false;
}

bool func_41()
{
	bool bVar0;
	switch (iLocal_776)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(Local_805[1 /*32*/].f_11) && !ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
			{
				TASK::TASK_CARRIABLE(uLocal_561[2], ENTITY::_GET_OPTIMAL_CARRY_CONFIG(uLocal_561[2], 1), Local_805[0 /*32*/].f_11, 0, 0);
			}
			__LIB_1__::func_649(&iLocal_776, 1);
			break;
		case 1:
			func_121();
			func_122();
			func_123();
			if (func_124())
			{
				__LIB_1__::func_649(&iLocal_776, 2);
			}
			break;
		case 2:
			func_121();
			func_125();
			if (ENTITY::IS_ENTITY_DEAD(uLocal_561[0]) && ENTITY::IS_ENTITY_DEAD(uLocal_561[1]))
			{
				__LIB_1__::func_649(&iLocal_776, 4);
			}
			else if (iLocal_88[0] && iLocal_88[1])
			{
				__LIB_1__::func_649(&iLocal_776, 5);
			}
			else if (func_126(2048) || __LIB_2__::func_118(uLocal_561[0], 1, 1) > 120f)
			{
				__LIB_1__::func_649(&iLocal_776, 13);
			}
			break;
		case 4:
			if (!MAP::DOES_BLIP_EXIST(uLocal_565[2]))
			{
				func_128(&Local_573, uLocal_561[2], 0);
				uLocal_565[2] = Local_573.f_181;
			}
			Local_573.f_44 = 1;
			__LIB_7__::func_903(uLocal_565[2], 1);
			if (!iLocal_88[0])
			{
				__LIB_2__::func_480(&(Local_1004[0 /*75*/].f_21), 0, 0, 1, 0);
			}
			if (!iLocal_88[1])
			{
				__LIB_2__::func_480(&(Local_1004[1 /*75*/].f_21), 0, 0, 1, 0);
			}
			func_131();
			__LIB_1__::func_649(&iLocal_776, 5);
			break;
		case 5:
			func_132();
			func_133();
			func_134();
			if (!iLocal_88[1])
			{
				if (__LIB_2__::func_118(uLocal_561[1], 1, 1) > 120f)
				{
					func_54(1, 1);
				}
			}
			if ((!func_31(67108864) && ENTITY::IS_ENTITY_DEAD(uLocal_561[0])) && !iLocal_88[0])
			{
				func_33(67108864);
				func_81(&(uLocal_561[0]), joaat("MOODDEAD"));
				if (!ENTITY::IS_ENTITY_DEAD(Local_805[0 /*32*/].f_11))
				{
					TASK::_0x216343750545A486(Local_805[0 /*32*/].f_11, 1, 1065353216 /* Float: 1f */);
				}
			}
			if ((!func_31(134217728) && ENTITY::IS_ENTITY_DEAD(uLocal_561[1])) && !iLocal_88[1])
			{
				func_33(134217728);
				func_81(&(uLocal_561[1]), joaat("MOODDEAD"));
			}
			if (!func_31(8))
			{
				if (iLocal_73 == 0)
				{
					func_53(1);
					func_135();
					func_33(8);
				}
			}
			if (func_136())
			{
				bVar0 = true;
			}
			if ((!__LIB_2__::func_1(uLocal_561[0], 0, 1) || iLocal_88[0]) && (!__LIB_2__::func_1(uLocal_561[1], 0, 1) || iLocal_88[1]))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_33(32);
				__LIB_2__::func_461(0);
				if (ENTITY::IS_ENTITY_DEAD(uLocal_561[2]) || func_31(8))
				{
					__LIB_1__::func_649(&iLocal_776, 13);
				}
				else
				{
					if (iLocal_572 == 0)
					{
						func_81(&(uLocal_561[2]), joaat("MOODNERVOUS"));
					}
					else
					{
						func_81(&(uLocal_561[2]), joaat("MOODAGITATED"));
					}
					iLocal_78 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), uLocal_561[2], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
					TASK::_0x2E1D6D87346BB7D2(uLocal_561[2], Global_35, 1, 0);
					PED::SET_PED_CAN_BE_TARGETTED(uLocal_561[2], true);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_561[2]);
					__LIB_3__::func_462(&(Local_1004[2 /*75*/].f_21), 0);
					__LIB_2__::func_526(&(Local_1004[2 /*75*/].f_21), 1, 0);
					__LIB_2__::func_451(&(Local_1004[2 /*75*/]), 0);
					__LIB_7__::func_903(uLocal_565[2], 0);
					__LIB_2__::func_662(&(Local_573.f_5), 0);
					__LIB_2__::func_104(&(Local_573.f_5), 0);
					__LIB_2__::func_105(&(Local_573.f_5), 1);
					__LIB_2__::func_110(&(Local_573.f_5), 0);
					__LIB_3__::func_237(&(Local_573.f_5), &iLocal_941);
					__LIB_1__::func_649(&iLocal_776, 6);
				}
			}
			break;
		case 6:
			func_134();
			func_140();
			if (ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
			{
				func_141();
				__LIB_2__::func_461(0);
				__LIB_1__::func_649(&iLocal_776, 13);
			}
			else
			{
				func_133();
				func_142();
				switch (iLocal_73)
				{
					case 3:
						if (iLocal_572 == 1)
						{
							if (func_143())
							{
								PED::SET_PED_RESET_FLAG(Global_35, 282, true);
							}
						}
						break;
					case 0:
					case 10:
						switch (iLocal_572)
						{
							case 0:
								if (func_31(4))
								{
									__LIB_2__::func_526(&(Local_1004[2 /*75*/].f_21), 0, 0);
									__LIB_2__::func_451(&(Local_1004[2 /*75*/]), 0);
									if (func_31(524288))
									{
										func_53(1);
										func_135();
										func_144();
										__LIB_1__::func_649(&iLocal_776, 13);
									}
									else
									{
										__LIB_1__::func_649(&iLocal_776, 9);
									}
								}
								break;
							case 1:
								if (func_31(131072))
								{
									PED::SET_PED_RESET_FLAG(Global_35, 282, true);
								}
								if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_561[2], -6107317) || !PED::_IS_PED_HOGTIED(uLocal_561[2]))
								{
									__LIB_2__::func_526(&(Local_1004[2 /*75*/].f_21), 0, 0);
									__LIB_2__::func_451(&(Local_1004[2 /*75*/]), 0);
									if (func_31(131072))
									{
										func_145();
										__LIB_1__::func_649(&iLocal_776, 7);
										func_81(&(uLocal_561[2]), joaat("MOODANGRY"));
									}
									else
									{
										__LIB_1__::func_649(&iLocal_776, 8);
									}
								}
								break;
						}
						break;
				}
				Jump @1916; //curOff = 1376
				PED::SET_PED_RESET_FLAG(Global_35, 282, true);
				if (func_146())
				{
					if (!func_117(1048576))
					{
						func_38(uLocal_561[2], Global_35, 1048576, -1073741824 /* Float: -2f */, 1, 1744022339);
					}
					func_81(&(uLocal_561[2]), joaat("MOODSCARED"));
					__LIB_0__::func_325(&(uLocal_565[2]));
					__LIB_0__::func_172(iLocal_969);
					func_53(1);
					func_135();
					__LIB_1__::func_649(&iLocal_776, 13);
				}
				Jump @1916; //curOff = 1488
				if (ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
				{
					__LIB_1__::func_649(&iLocal_776, 13);
				}
				else if (!TASK::IS_PED_GETTING_UP(uLocal_561[2]))
				{
					func_147(1);
					__LIB_2__::func_461(0);
					func_148(uLocal_561[2], Global_35, 4096, -1073741824 /* Float: -2f */, 0, 1744022339);
					func_53(1);
					func_135();
					__LIB_0__::func_325(&(uLocal_565[2]));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_561[2], joaat("REL_PLAYER_ENEMY"));
					__LIB_0__::func_172(iLocal_969);
					__LIB_1__::func_649(&iLocal_776, 13);
				}
				Jump @1916; //curOff = 1618
				func_149();
				__LIB_2__::func_182(&(Local_573.f_5), 1);
				__LIB_1__::func_649(&iLocal_776, 11);
				Jump @1916; //curOff = 1644
				if (ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
				{
					__LIB_0__::func_172(iLocal_969);
					__LIB_1__::func_649(&iLocal_776, 13);
				}
				if (__LIB_3__::func_464(uLocal_561[2], 0, &(Local_573.f_5), &iLocal_941, 0, 0))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_561[2], joaat("REL_PLAYER_DISLIKE"));
					func_81(&(uLocal_561[2]), joaat("MOODPANIC"));
					func_53(1);
					func_135();
					func_144();
					__LIB_1__::func_649(&iLocal_776, 13);
				}
				if (func_151())
				{
					__LIB_0__::func_172(iLocal_969);
					__LIB_1__::func_649(&iLocal_776, 13);
				}
				Jump @1916; //curOff = 1775
				func_125();
				if (iLocal_88[0] && iLocal_88[1])
				{
					__LIB_1__::func_649(&iLocal_776, 5);
					return false;
				}
				if (func_31(-2147483648))
				{
					__LIB_0__::func_325(&(uLocal_565[2]));
					return true;
				}
				if (__LIB_0__::func_665(Global_35, uLocal_561[2], 1, 1) > 120f)
				{
					if (Local_573.f_46)
					{
						__LIB_0__::func_325(&(uLocal_565[2]));
						return true;
					}
				}
				if (ENTITY::IS_ENTITY_DEAD(uLocal_561[2]) || func_32(2, 2))
				{
					return true;
				}
			}
			if (func_31(8388608))
			{
				func_153(0);
				func_153(1);
				func_153(2);
				func_154();
			}
			return false;
			default:
				break;
	}
}

void func_53(bool bParam0)
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(uLocal_561[2]) || func_32(2, 2))
	{
		return;
	}
	__LIB_0__::func_325(&(uLocal_565[2]));
	__LIB_0__::func_172(iLocal_969);
	func_168(2, 2);
	fVar0 = 1.5f;
	if (PED::IS_PED_ON_MOUNT(uLocal_561[2]))
	{
		fVar0 = 2f;
	}
	__LIB_3__::func_141(uLocal_561[2], 1088421888 /* Float: 7f */, 0, 0);
	__LIB_2__::func_603(&(uLocal_561[2]), &(Local_1004[2 /*75*/]), &(Local_1004[2 /*75*/].f_21), 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_561[2], false);
	if (bParam0)
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_561[2], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
	}
	else
	{
		TASK::_TASK_MOVE_IN_TRAFFIC_3(uLocal_561[2], uLocal_561[0], fVar0, 0, 0);
	}
	PED::SET_PED_KEEP_TASK(uLocal_561[2], true);
	PED::SET_PED_CONFIG_FLAG(uLocal_561[2], 130, false);
	PED::SET_PED_CONFIG_FLAG(uLocal_561[2], 178, true);
	if (func_31(524288))
	{
		func_171(&(uLocal_561[2]), 24);
	}
	else
	{
		func_171(&(uLocal_561[2]), 35);
	}
	PED::_0x24C82EF607105FAA(uLocal_561[2], joaat("TIMID"));
	PED::_0xE737D5F14304A2EC(uLocal_561[2], PLAYER::GET_PLAYER_INDEX(), 120000);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_561[2], 7, 0, 1);
}

void func_54(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(uLocal_561[iParam0]))
	{
		return;
	}
	TASK::_TASK_MOVE_IN_TRAFFIC_3(uLocal_561[iParam0], Global_35, 2.001f, 0, 0);
	PED::SET_PED_KEEP_TASK(uLocal_561[iParam0], true);
	__LIB_0__::func_325(&(uLocal_565[iParam0]));
	PED::SET_PED_CONFIG_FLAG(uLocal_561[iParam0], 146, false);
	PED::SET_PED_CONFIG_FLAG(uLocal_561[iParam0], 130, false);
	PED::SET_PED_CONFIG_FLAG(uLocal_561[iParam0], 178, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_561[iParam0], joaat("REL_PLAYER_DISLIKE"));
	if (bParam1)
	{
		__LIB_3__::func_456(uLocal_561[iParam0]);
	}
	if (Local_573.f_48)
	{
		func_171(&(uLocal_561[iParam0]), 30);
		func_171(&(uLocal_561[iParam0]), 34);
		func_171(&(uLocal_561[iParam0]), 32);
		func_171(&(uLocal_561[iParam0]), 47);
	}
	iLocal_88[iParam0] = 1;
	__LIB_2__::func_603(&(uLocal_561[iParam0]), &(Local_1004[iParam0 /*75*/]), &(Local_1004[iParam0 /*75*/].f_21), 1, 1);
	PED::_0xB8B6430EAD2D2437(uLocal_561[iParam0], joaat("BOUNTY_HUNTER"));
	PED::_0x24C82EF607105FAA(uLocal_561[iParam0], joaat("AGGRESSIVE"));
	PED::_0xE737D5F14304A2EC(uLocal_561[iParam0], PLAYER::GET_PLAYER_INDEX(), 120000);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_561[iParam0], false);
}

void func_57()
{
	if (iLocal_572 != 1)
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_767))
	{
		return;
	}
	if (func_31(512))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_767, "player", Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_561[2]) && __LIB_2__::func_1(uLocal_561[2], 0, 0))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_767, "Criminal", uLocal_561[2]);
		}
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_767);
}

int func_60(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	if (Param4.f_6 > -1)
	{
		*uParam1 = { __LIB_3__::func_153(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_187(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_340(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { __LIB_3__::func_401(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (__LIB_0__::func_86(*uParam1))
				{
					return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = __LIB_3__::func_240(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (__LIB_0__::func_27(Param4.f_2, 8))
				{
					func_187(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				__LIB_3__::func_170(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (__LIB_3__::func_421(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && __LIB_3__::func_367(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_171(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!__LIB_3__::func_170(uParam1))
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (__LIB_3__::func_423(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_187(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		__LIB_1__::func_422("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

void func_68(var uParam0, int iParam1, int iParam2)
{
	(uParam0[0 /*32*/])->f_1 = joaat("G_M_M_BOUNTYHUNTERS_01");
	(uParam0[1 /*32*/])->f_1 = joaat("G_M_M_BOUNTYHUNTERS_01");
	(uParam0[2 /*32*/])->f_1 = joaat("G_M_M_UNICRIMINALS_01");
	(uParam0[0 /*32*/])->f_12 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	(uParam0[1 /*32*/])->f_12 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	__LIB_3__::func_303(&((uParam0[0 /*32*/])->f_22));
	__LIB_3__::func_303(&((uParam0[1 /*32*/])->f_22));
	__LIB_3__::func_303(&((uParam0[2 /*32*/])->f_22));
	if (func_39(iParam1))
	{
		switch (iParam2)
		{
			case 1:
				(uParam0[0 /*32*/])->f_3 = -1414685225;
				(uParam0[1 /*32*/])->f_3 = 467926594;
				(uParam0[2 /*32*/])->f_3 = -1375282377;
				StringCopy(&((uParam0[0 /*32*/])->f_23), "0745_G_M_M_BountyHunters_01_WHITE_07", 64);
				StringCopy(&((uParam0[1 /*32*/])->f_23), "0746_G_M_M_BountyHunters_01_WHITE_08", 64);
				StringCopy(&((uParam0[2 /*32*/])->f_23), "0970_A_M_M_RoughTravellers_White_01", 64);
				break;
			default:
				(uParam0[0 /*32*/])->f_3 = -955755380;
				(uParam0[1 /*32*/])->f_3 = -1253658359;
				(uParam0[2 /*32*/])->f_3 = -1161759573;
				StringCopy(&((uParam0[0 /*32*/])->f_23), "0747_G_M_M_BountyHunters_01_WHITE_09", 64);
				StringCopy(&((uParam0[1 /*32*/])->f_23), "0744_G_M_M_BountyHunters_01_WHITE_06", 64);
				StringCopy(&((uParam0[2 /*32*/])->f_23), "0976_A_M_M_RoughTravellers_White_07", 64);
				break;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				(uParam0[0 /*32*/])->f_3 = 534840840;
				(uParam0[1 /*32*/])->f_3 = -955755380;
				(uParam0[2 /*32*/])->f_3 = 1415292890;
				StringCopy(&((uParam0[0 /*32*/])->f_23), "0743_G_M_M_BountyHunters_01_WHITE_05", 64);
				StringCopy(&((uParam0[1 /*32*/])->f_23), "0742_G_M_M_BountyHunters_01_WHITE_04", 64);
				StringCopy(&((uParam0[2 /*32*/])->f_23), "0977_A_M_M_RoughTravellers_White_08", 64);
				break;
			default:
				(uParam0[0 /*32*/])->f_3 = 1433891124;
				(uParam0[1 /*32*/])->f_3 = 1270504890;
				(uParam0[2 /*32*/])->f_3 = 1153534118;
				StringCopy(&((uParam0[0 /*32*/])->f_23), "1065_G_M_M_UniCriminals_01_BLACK_04", 64);
				StringCopy(&((uParam0[1 /*32*/])->f_23), "0740_G_M_M_BountyHunters_01_WHITE_02", 64);
				StringCopy(&((uParam0[2 /*32*/])->f_23), "1058_G_M_M_UniCriminals_01_WHITE_05", 64);
				break;
		}
	}
}

void func_69()
{
	__LIB_3__::func_284(&Local_805);
}

void func_71(int iParam0, int iParam1)
{
	if (iParam0 != 1)
	{
		return;
	}
	iParam1->f_4 = "script@beat@wilderness@bountytransport@knock";
	*iParam1 = ANIMSCENE::_CREATE_ANIM_SCENE(iParam1->f_4, 64, "PBL_KNOCK", false, true);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_4))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(*iParam1);
		}
	}
}

void func_72(var uParam0, var uParam1)
{
	(*uParam0)[0 /*2*/] = "script_re@bounty_transport@thanks_hint";
	(uParam0[0 /*2*/])->f_1 = "thanks";
	(*uParam0)[1 /*2*/] = "script_re@bounty_transport@thanks_hint";
	(uParam0[1 /*2*/])->f_1 = "hint";
	__LIB_3__::func_318((*uParam0)[0 /*2*/], uParam1);
}

float func_78(vector3 vParam0, int iParam3, bool bParam4)
{
	if (!bParam4 || !ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return __LIB_3__::func_571(vParam0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
	}
	return 0f;
}

void func_81(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		PED::_0x8B3B71C80A29A4BB(*uParam0, iParam1, 6);
	}
}

bool func_117(int iParam0)
{
	return __LIB_0__::func_27(iLocal_77, iParam0);
}

char* func_118(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 1:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "AGGRO", __LIB_4__::func_221(iParam1));
		case 2:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "AGGRO_B", __LIB_4__::func_221(iParam1));
		case 32:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "AGGRO_HORSE", __LIB_4__::func_221(iParam1));
		case 64:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "UAGGRO_A", __LIB_4__::func_221(iParam1));
		case 128:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "UAGGRO_01", __LIB_4__::func_221(iParam1));
		case 256:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "UAGGRO_02", __LIB_4__::func_221(iParam1));
		case 512:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "UAGGRO_03", __LIB_4__::func_221(iParam1));
		case 4:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "UAGGRO_A", __LIB_4__::func_221(iParam1));
		case 8:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "UAGGRO_01", __LIB_4__::func_221(iParam1));
		case 16:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "UAGGRO_02", __LIB_4__::func_221(iParam1));
		case 1024:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "AREST_01", __LIB_4__::func_221(iParam1));
		case 2048:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "AREST_02", __LIB_4__::func_221(iParam1));
		case 4096:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "AREST_03", __LIB_4__::func_221(iParam1));
		case 8192:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "AREST_01", __LIB_4__::func_221(iParam1));
		case 16384:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "AREST_02", __LIB_4__::func_221(iParam1));
		case 32768:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "AREST_03", __LIB_4__::func_221(iParam1));
		case 65536:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "FIGHT_TO_PLR", __LIB_4__::func_221(iParam1));
		case 131072:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "FIGHT_TO_BNTY", __LIB_4__::func_221(iParam1));
		case 262144:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "FIGHT_TO_PLR", __LIB_4__::func_221(iParam1));
		case 524288:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "FIGHT_TO_BNTY", __LIB_4__::func_221(iParam1));
		case 1048576:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "THANK", __LIB_4__::func_221(iParam1));
		default:
			break;
	}
	return "INVALID DIALOGUE BIT";
}

void func_120(int iParam0)
{
	if (!func_117(iParam0))
	{
		__LIB_1__::func_683(&iLocal_77, iParam0);
	}
}

void func_121()
{
	if ((!ENTITY::IS_ENTITY_DEAD(uLocal_561[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_561[1])) && !ENTITY::IS_ENTITY_DEAD(Local_805[0 /*32*/].f_11))
	{
		if (__LIB_0__::func_665(uLocal_561[0], uLocal_561[1], 1, 1) > 15f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_805[0 /*32*/].f_11, 1.501f);
		}
	}
}

void func_122()
{
	if (!func_126(128))
	{
		if (__LIB_0__::func_665(uLocal_561[0], Global_35, 1, 1) < 60f)
		{
			if (func_148(uLocal_561[2], Global_35, 128, -1073741824 /* Float: -2f */, 1, 1744022339))
			{
				__LIB_2__::func_315(1891783641, uLocal_561[2], 1);
			}
		}
	}
}

bool func_123()
{
	if ((ENTITY::IS_ENTITY_DEAD(uLocal_561[0]) || ENTITY::IS_ENTITY_DEAD(uLocal_561[1])) || ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
	{
		return false;
	}
	switch (iLocal_782)
	{
		case 0:
			if ((ENTITY::IS_ENTITY_DEAD(Local_805[0 /*32*/].f_11) && !iLocal_85[0]) || (ENTITY::IS_ENTITY_DEAD(Local_805[1 /*32*/].f_11) && !iLocal_85[1]))
			{
				__LIB_1__::func_649(&iLocal_782, 2);
				return false;
			}
			if (!__LIB_0__::func_71(uLocal_561[0]) || (!__LIB_0__::func_71(uLocal_561[1]) && !iLocal_88[1]))
			{
				__LIB_1__::func_649(&iLocal_782, 1);
				return false;
			}
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_561[2], Local_805[0 /*32*/].f_11) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_561[2], Local_805[1 /*32*/].f_11))
			{
				__LIB_1__::func_649(&iLocal_782, 6);
				return false;
			}
			break;
		case 1:
			if ((ENTITY::IS_ENTITY_DEAD(Local_805[0 /*32*/].f_11) && !iLocal_85[0]) || (ENTITY::IS_ENTITY_DEAD(Local_805[1 /*32*/].f_11) && !iLocal_85[1]))
			{
				__LIB_1__::func_649(&iLocal_782, 2);
				return false;
			}
			if (!__LIB_0__::func_71(uLocal_561[0]) && !__LIB_0__::func_163(uLocal_561[0], 1868526510))
			{
				if (iLocal_85[0])
				{
					__LIB_1__::func_562(uLocal_561[0], Local_805[1 /*32*/].f_11, 0, 2f, -1);
				}
				else
				{
					__LIB_1__::func_562(uLocal_561[0], Local_805[0 /*32*/].f_11, 0, 2f, -1);
				}
			}
			if ((!iLocal_88[1] && !__LIB_0__::func_71(uLocal_561[1])) && !__LIB_0__::func_163(uLocal_561[1], 1868526510))
			{
				__LIB_1__::func_562(uLocal_561[1], Local_805[1 /*32*/].f_11, 0, 2f, -1);
			}
			if (__LIB_0__::func_71(uLocal_561[0]) && (__LIB_0__::func_71(uLocal_561[1]) || iLocal_88[1]))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_561[0], 1.75f, 16, 0);
				__LIB_1__::func_649(&iLocal_782, 0);
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(Local_805[0 /*32*/].f_11) && !iLocal_85[0])
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_805[1 /*32*/].f_11) && !iLocal_85[1])
				{
					__LIB_1__::func_649(&iLocal_782, 5);
				}
				else
				{
					__LIB_1__::func_649(&iLocal_782, 3);
				}
			}
			else if (ENTITY::IS_ENTITY_DEAD(Local_805[1 /*32*/].f_11) && !iLocal_85[1])
			{
				__LIB_1__::func_649(&iLocal_782, 4);
			}
			else
			{
				__LIB_1__::func_649(&iLocal_782, 0);
				return false;
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_DEAD(Local_805[1 /*32*/].f_11))
			{
				__LIB_1__::func_649(&iLocal_782, 5);
				return false;
			}
			if (PED::_IS_PED_CARRYING(uLocal_561[0]))
			{
				if (!__LIB_0__::func_163(uLocal_561[0], 162923588))
				{
					TASK::TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(uLocal_561[0], uLocal_561[2], Local_805[1 /*32*/].f_11, 2f);
				}
			}
			else if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_561[2], Local_805[1 /*32*/].f_11))
			{
				iLocal_85[0] = 1;
				func_54(1, 1);
				__LIB_1__::func_649(&iLocal_782, 0);
			}
			else if (!__LIB_0__::func_163(uLocal_561[0], 1245594896))
			{
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(uLocal_561[0], uLocal_561[2]);
			}
			return false;
		case 4:
			iLocal_85[1] = 1;
			func_54(1, 1);
			__LIB_1__::func_649(&iLocal_782, 0);
			return false;
		case 5:
			iLocal_85[0] = 1;
			func_54(0, 0);
			iLocal_85[1] = 1;
			func_54(1, 0);
			__LIB_1__::func_649(&iLocal_782, 7);
			break;
		case 6:
			if (ENTITY::IS_ENTITY_DEAD(Local_805[0 /*32*/].f_11) && ENTITY::IS_ENTITY_DEAD(Local_805[1 /*32*/].f_11))
			{
				__LIB_1__::func_649(&iLocal_782, 5);
				return false;
			}
			if (PED::_IS_PED_CARRYING(uLocal_561[0]))
			{
				if (!__LIB_0__::func_163(uLocal_561[0], 162923588))
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_805[0 /*32*/].f_11))
					{
						TASK::TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(uLocal_561[0], uLocal_561[2], Local_805[1 /*32*/].f_11, 2f);
					}
					else
					{
						TASK::TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(uLocal_561[0], uLocal_561[2], Local_805[0 /*32*/].f_11, 2f);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_561[2], Local_805[0 /*32*/].f_11))
			{
				__LIB_1__::func_649(&iLocal_782, 0);
			}
			else if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_561[2], Local_805[1 /*32*/].f_11))
			{
				iLocal_85[0] = 1;
				func_54(1, 1);
				__LIB_1__::func_649(&iLocal_782, 0);
			}
			else if (!__LIB_0__::func_163(uLocal_561[0], 1245594896))
			{
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(uLocal_561[0], uLocal_561[2]);
			}
			return false;
		case 7:
			break;
	}
	return true;
}

bool func_124()
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iLocal_779)
	{
		case 0:
			__LIB_1__::func_649(&iLocal_779, 1);
			break;
		case 1:
			if (!__LIB_13__::func_859(Local_573.f_51, &uLocal_80, 1101004800 /* Float: 20f */, 1))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < vLocal_91.x)
			{
				if (!__LIB_0__::func_86(vLocal_91[iVar0 /*3*/]))
				{
					if (__LIB_0__::func_86(vLocal_116))
					{
						vLocal_116 = { vLocal_91[iVar0 /*3*/] };
					}
					else if (__LIB_3__::func_332(vLocal_91[iVar0 /*3*/], 1) < __LIB_3__::func_332(vLocal_116, 1))
					{
						vLocal_116 = { vLocal_91[iVar0 /*3*/] };
					}
				}
				iVar0++;
			}
			if (__LIB_0__::func_86(vLocal_116))
			{
				vLocal_116 = { Global_36 };
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_116, 1073741824 /* Float: 2f */, 1.75f, 0, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC(0, 1.75f, 16, 0);
				__LIB_1__::func_474(uLocal_561[0], &iVar1, 0, 0, 1, 1);
				__LIB_1__::func_649(&iLocal_779, 2);
			}
			break;
		case 2:
			if (__LIB_3__::func_452(&Local_573, 1f, 80f, 55f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				__LIB_2__::func_526(&(Local_1004[0 /*75*/].f_21), 1, 0);
				__LIB_2__::func_526(&(Local_1004[1 /*75*/].f_21), 1, 0);
				__LIB_11__::func_639(&iLocal_969, ENTITY::GET_ENTITY_COORDS(uLocal_561[2], true, false), 0f, 0f, 0f, 10f, 10f, 10f, "REBNT_ANIMAL_RESTRICTION");
				__LIB_3__::func_457(iLocal_969, 0);
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_969))
				{
					PED::_0x7C00CFC48A782DC0(iLocal_969, uLocal_561[2], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				}
				if (__LIB_0__::func_665(uLocal_561[0], uLocal_561[1], 1, 1) > 35f)
				{
					func_54(1, 1);
				}
				else if (!PED::IS_PED_IN_GROUP(uLocal_561[1]))
				{
					func_54(1, 1);
				}
				if (__LIB_2__::func_1(uLocal_561[0], 0, 1))
				{
					TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_561[0], 1.75f, 16, 0);
					PED::SET_PED_KEEP_TASK(uLocal_561[0], true);
				}
				func_33(8388608);
				__LIB_1__::func_649(&iLocal_779, 3);
			}
			else if (!__LIB_0__::func_163(uLocal_561[0], 242628503))
			{
				if (__LIB_0__::func_396(uLocal_561[0]) && iLocal_782 == 0)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_116, 1073741824 /* Float: 2f */, 1.75f, 0, 0);
					TASK::_TASK_MOVE_IN_TRAFFIC(0, 1.75f, 16, 0);
					__LIB_1__::func_474(uLocal_561[0], &iVar2, 0, 0, 1, 1);
					__LIB_1__::func_649(&iLocal_779, 2);
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_118(uLocal_561[0], 1, 1) < 35f)
			{
				__LIB_1__::func_649(&iLocal_779, 8);
				return true;
			}
			break;
		case 8:
			return true;
	}
	return false;
}

void func_125()
{
	if (((((!__LIB_2__::func_1(uLocal_561[0], 0, 1) || !__LIB_2__::func_1(uLocal_561[1], 0, 1)) || !__LIB_2__::func_1(uLocal_561[2], 0, 0)) || func_31(16384)) || func_32(4, 2)) || Local_573.f_46)
	{
		return;
	}
	if (!func_123())
	{
		return;
	}
	if (func_31(2097152) || func_31(4194304))
	{
		if (__LIB_0__::func_75(&uLocal_973))
		{
			__LIB_1__::func_148(&uLocal_973);
		}
		return;
	}
	if (func_328(15f))
	{
		if (__LIB_0__::func_75(&uLocal_973) && __LIB_1__::func_871(&uLocal_973) < iLocal_82)
		{
			return;
		}
		if (!func_126(1))
		{
			if (func_148(uLocal_561[0], Global_35, 1, -4f, 0, 1744022339))
			{
				func_330(uLocal_561[0], &uLocal_944);
				Local_573.f_45 = 1;
				iLocal_82 = 3000;
				__LIB_1__::func_148(&uLocal_973);
			}
		}
		else if (!func_126(33554432))
		{
			if (func_331(iLocal_942, iLocal_572))
			{
				if (func_332(-4f) && __LIB_2__::func_122(uLocal_561[2], func_333(iLocal_942, iLocal_572, 0), 1744022339, Global_35, 1, &(Local_805[2 /*32*/].f_23), 1, 1))
				{
					func_335(33554432);
					func_330(uLocal_561[2], &uLocal_944);
					func_128(&Local_573, uLocal_561[2], 0);
					__LIB_2__::func_315(1891783641, uLocal_561[2], 1);
					uLocal_565[2] = Local_573.f_181;
					iLocal_82 = 5000;
					__LIB_1__::func_148(&uLocal_973);
				}
			}
			else if (func_332(-4f) && func_148(uLocal_561[2], Global_35, 33554432, -4f, 0, 1744022339))
			{
				func_335(33554432);
				func_330(uLocal_561[2], &uLocal_944);
				func_128(&Local_573, uLocal_561[2], 0);
				__LIB_2__::func_315(1891783641, uLocal_561[2], 1);
				uLocal_565[2] = Local_573.f_181;
				iLocal_82 = 5000;
				__LIB_1__::func_148(&uLocal_973);
			}
		}
		else if (!func_126(2))
		{
			if (func_148(uLocal_561[0], Global_35, 2, -3f, 1, 1744022339))
			{
				iLocal_82 = 7000;
				if (!iLocal_88[1])
				{
					func_330(uLocal_561[1], &uLocal_944);
					if (PED::DOES_GROUP_EXIST(iLocal_570))
					{
						PED::SET_PED_CONFIG_FLAG(uLocal_561[1], 279, false);
						__LIB_11__::func_716(uLocal_561[1], iLocal_570);
					}
					func_337(uLocal_561[1], uLocal_561[0]);
					__LIB_1__::func_148(&uLocal_973);
				}
			}
		}
		else
		{
			func_33(16384);
		}
	}
	else
	{
		if ((!func_31(1) && func_126(2)) && __LIB_1__::func_871(&uLocal_973) > iLocal_82)
		{
			if (PED::DOES_GROUP_EXIST(iLocal_570))
			{
				PED::SET_PED_AS_GROUP_MEMBER(uLocal_561[1], iLocal_570);
				PED::SET_PED_CONFIG_FLAG(uLocal_561[1], 279, true);
			}
			TASK::CLEAR_PED_TASKS(uLocal_561[1], true, false);
			func_33(1);
		}
		if ((AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_561[0]) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_561[1])) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_561[2]))
		{
			return;
		}
		if (!func_126(256))
		{
			if (iLocal_572 == 0)
			{
				if (func_148(uLocal_561[0], uLocal_561[2], 256, func_338(256), 0, 1744022339))
				{
					__LIB_2__::func_315(1891783641, uLocal_561[0], 1);
				}
			}
			else if (func_148(uLocal_561[2], uLocal_561[0], 256, func_338(256), 0, 1744022339))
			{
				__LIB_2__::func_315(1891783641, uLocal_561[2], 1);
			}
		}
		else if (!func_126(512))
		{
			if (iLocal_572 == 0)
			{
				if (func_148(uLocal_561[2], uLocal_561[0], 512, func_338(512), 0, 1744022339))
				{
					__LIB_2__::func_315(1891783641, uLocal_561[2], 1);
				}
			}
			else if (func_148(uLocal_561[0], Global_35, 512, func_338(512), 0, 1744022339))
			{
				__LIB_2__::func_315(1891783641, uLocal_561[0], 1);
			}
		}
		else if (!func_126(1024))
		{
			if (iLocal_572 == 0)
			{
				func_148(uLocal_561[0], uLocal_561[2], 1024, func_338(1024), 0, 1744022339);
			}
			else
			{
				func_148(uLocal_561[2], uLocal_561[0], 1024, func_338(1024), 0, 1744022339);
			}
		}
		else if (!func_126(2048))
		{
			if (iLocal_572 == 0)
			{
				func_148(uLocal_561[2], uLocal_561[0], 2048, func_338(2048), 0, 1744022339);
			}
			else
			{
				func_148(uLocal_561[0], uLocal_561[2], 2048, func_338(2048), 0, 1744022339);
			}
		}
	}
}

bool func_126(int iParam0)
{
	return __LIB_0__::func_27(iLocal_76, iParam0);
}

void func_128(var uParam0, int iParam1, char* sParam2)
{
	if (!uParam0->f_179)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			uParam0->f_181 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iParam1);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				sParam2 = "RE_INTER_STRANGER";
			}
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_181, sParam2);
			uParam0->f_179 = 1;
		}
	}
}

void func_131()
{
	int iVar0;
	int iVar1;
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_571, joaat("PLAYER"));
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[0]) && !iLocal_88[0])
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_561[0], 279, false);
		__LIB_11__::func_716(uLocal_561[0], iLocal_570);
		func_81(&(uLocal_561[0]), joaat("MOODANGRY"));
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (func_31(32768))
		{
			TASK::TASK_REACT(0, Global_35, Global_36, "Default_Brave", 1f, 0, 4);
		}
		if (__LIB_2__::func_118(uLocal_561[0], 1, 1) < 20f && __LIB_3__::func_547(uLocal_561[0], Global_35, 0f) == 0)
		{
			TASK::_TASK_MOVE_IN_TRAFFIC(0, 1.501f, 16, 1);
		}
		else
		{
			TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1.75f, 16, 1);
		}
		__LIB_1__::func_474(uLocal_561[0], &iVar0, 0, 0, 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[1]) && !iLocal_88[1])
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_561[1], 279, false);
		__LIB_11__::func_716(uLocal_561[1], iLocal_570);
		func_81(&(uLocal_561[1]), joaat("MOODANGRY"));
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		if (func_31(32768))
		{
			TASK::TASK_REACT(0, Global_35, Global_36, "Default_Shocked", 1f, 0, 4);
		}
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(uLocal_561[1], &iVar1, 0.4f, 0.4f, 1, 1);
	}
}

void func_132()
{
	int iVar0;
	int iVar1;
	if (iLocal_780 == 11 || !func_332(-2f))
	{
		return;
	}
	iVar0 = __LIB_3__::func_885(&uLocal_561, Global_36, 0, 1, 0, 1);
	iVar1 = iVar0;
	if (iVar1 == 0)
	{
		if (ENTITY::IS_ENTITY_DEAD(uLocal_561[0]) || func_117(4096))
		{
			iVar1 = 1;
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(uLocal_561[1]) || func_117(32768))
	{
		iVar1 = 0;
	}
	switch (iLocal_780)
	{
		case 0:
			__LIB_1__::func_649(&iLocal_780, 1);
			break;
		case 1:
			if (func_342(iVar1))
			{
				__LIB_1__::func_649(&iLocal_780, 2);
			}
			break;
		case 2:
			if (func_343())
			{
				func_120(65536);
				__LIB_1__::func_649(&iLocal_780, 3);
			}
			break;
		case 3:
			if (func_342(iVar1))
			{
				__LIB_1__::func_649(&iLocal_780, 4);
			}
			break;
		case 4:
			if (func_342(iVar1))
			{
				__LIB_1__::func_649(&iLocal_780, 5);
			}
			break;
		case 5:
			if (func_343())
			{
				func_120(131072);
				__LIB_1__::func_649(&iLocal_780, 6);
			}
			break;
		case 6:
			if (func_342(iVar1))
			{
				__LIB_1__::func_649(&iLocal_780, 7);
			}
			break;
		case 7:
			if (func_343())
			{
				func_120(262144);
				__LIB_1__::func_649(&iLocal_780, 8);
			}
			break;
		case 8:
			if (func_342(iVar1))
			{
				__LIB_1__::func_649(&iLocal_780, 9);
			}
			break;
		case 9:
			if (func_342(iVar1))
			{
				__LIB_1__::func_649(&iLocal_780, 10);
			}
			break;
		case 10:
			if (func_343())
			{
				func_120(524288);
				__LIB_1__::func_649(&iLocal_780, 11);
			}
			break;
		case 11:
			break;
	}
}

int func_133()
{
	int iVar0;
	bool bVar1;
	if (__LIB_2__::func_1(uLocal_561[2], 0, 0))
	{
		iLocal_73 = __LIB_3__::func_458(uLocal_561[2]);
		if ((iLocal_73 == 0 && func_31(2)) || (!PED::_IS_PED_HOGTIED(uLocal_561[2]) && !TASK::GET_IS_TASK_ACTIVE(uLocal_561[2], 3)))
		{
			func_33(4);
			iLocal_74 = 0;
			return 1;
		}
		if (iLocal_74 != iLocal_73)
		{
			if (func_31(32))
			{
				if (iLocal_572 == 1)
				{
					if (iLocal_73 == 10)
					{
						iVar0 = 0;
						bVar1 = false;
						ENTITY::_0xD46BF94C4C66FAB0(&iVar0, &bVar1, uLocal_561[2], 3);
						if ((func_143() && iVar0 == 1) && !bVar1)
						{
							func_33(131072);
						}
						else
						{
							func_33(262144);
						}
					}
				}
				__LIB_1__::func_148(&uLocal_970);
			}
		}
		if (!func_31(1048576) && iLocal_73 != 7)
		{
			func_33(1048576);
		}
		if (!__LIB_0__::func_75(&uLocal_970))
		{
			__LIB_1__::func_148(&uLocal_970);
		}
		if ((__LIB_2__::func_227(2.5f, 1, 0, 0) && !PED::IS_PED_RAGDOLL(uLocal_561[2])) && func_31(32))
		{
			switch (iLocal_73)
			{
				case 3:
					iLocal_74 = 3;
					if (iLocal_572 == 1 && !func_31(1073741824 /* Float: 2f */))
					{
						func_81(&(uLocal_561[2]), joaat("MOODPANIC"));
						func_33(1073741824 /* Float: 2f */);
					}
					if (__LIB_1__::func_285(&uLocal_970, 0.25f))
					{
						func_346(uLocal_561[2], Global_35, 32768, 65536, 131072, 0f, 0, 0);
					}
					break;
				case 5:
					iLocal_74 = 5;
					if (iLocal_572 == 1 && !func_31(268435456))
					{
						func_81(&(uLocal_561[2]), joaat("MOODNERVOUS"));
						func_33(268435456);
					}
					if (__LIB_1__::func_285(&uLocal_970, 2f))
					{
						func_346(uLocal_561[2], Global_35, 262144, 524288, 1048576, 0f, 0, 0);
					}
					break;
				case 10:
					iLocal_74 = 10;
					if (!func_31(2))
					{
						if (iLocal_572 == 1)
						{
							func_81(&(uLocal_561[2]), joaat("MOODPANIC"));
						}
						__LIB_2__::func_526(&(Local_1004[2 /*75*/].f_21), 0, 0);
						__LIB_2__::func_451(&(Local_1004[2 /*75*/]), 0);
						func_33(2);
					}
					break;
				case 7:
					iLocal_74 = 7;
					if (!func_31(1048576))
					{
						if ((iLocal_572 == 1 && !func_31(536870912)) && func_126(16777216))
						{
							func_81(&(uLocal_561[2]), joaat("MOODANGRY"));
							func_33(536870912);
						}
						if (__LIB_1__::func_285(&uLocal_970, 4f))
						{
							func_346(uLocal_561[2], Global_35, 4194304, 8388608, 16777216, -1073741824 /* Float: -2f */, 0, 1);
						}
					}
					break;
			}
		}
		func_347();
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_134()
{
	if (func_31(16))
	{
		if (__LIB_0__::func_75(&uLocal_979))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_805[0 /*32*/].f_11))
			{
				__LIB_0__::func_37(&uLocal_979);
			}
			else if (__LIB_0__::func_265(&uLocal_979) > 3f && __LIB_0__::func_665(uLocal_561[0], Local_805[0 /*32*/].f_11, 1, 0) > 5f)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_805[0 /*32*/].f_11, true);
				__LIB_3__::func_460(Local_805[0 /*32*/].f_11, &uLocal_81, 64, 0, 0, 10f, 3000, 0, 0);
				__LIB_0__::func_37(&uLocal_979);
			}
		}
	}
	else if (!__LIB_2__::func_1(uLocal_561[0], 0, 1) && !ENTITY::IS_ENTITY_DEAD(Local_805[0 /*32*/].f_11))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_805[0 /*32*/].f_11, false);
		__LIB_1__::func_148(&uLocal_979);
		func_33(16);
	}
}

void func_135()
{
	if (func_31(-2147483648))
	{
		return;
	}
	__LIB_10__::func_135();
	__LIB_3__::func_696(&(uLocal_561[2]), 1);
	func_352();
	func_33(-2147483648);
}

bool func_136()
{
	int iVar0;
	if (__LIB_0__::func_665(Global_35, uLocal_561[0], 1, 1) > fLocal_83 && __LIB_0__::func_665(Global_35, uLocal_561[1], 1, 1) > fLocal_83)
	{
		__LIB_0__::func_325(&(uLocal_565[0]));
		__LIB_0__::func_325(&(uLocal_565[1]));
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iVar0 != 2 && __LIB_2__::func_1(uLocal_561[iVar0], 0, 1))
			{
				TASK::TASK_SMART_FLEE_PED(uLocal_561[iVar0], Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
				PED::SET_PED_KEEP_TASK(uLocal_561[iVar0], true);
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_140()
{
	vector3 vVar0;
	vector3 vVar3;
	if (!func_31(4096))
	{
		if (iLocal_73 != 7)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_805[0 /*32*/].f_11))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_805[0 /*32*/].f_11, true, false) };
				TASK::TASK_WANDER_IN_AREA(Local_805[0 /*32*/].f_11, vVar0, 20f, 3.5f, 3.5f, 0);
				func_33(4096);
			}
		}
	}
	if (!func_31(8192))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_805[1 /*32*/].f_11))
		{
			vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_805[1 /*32*/].f_11, true, false) };
			TASK::TASK_WANDER_IN_AREA(Local_805[1 /*32*/].f_11, vVar3, 20f, 0.5f, 0.7f, 0);
			func_33(8192);
		}
	}
}

void func_141()
{
	if (bLocal_84)
	{
		return;
	}
	bLocal_84 = true;
	__LIB_3__::func_465(1, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, uLocal_561[2], 0, 1065353216 /* Float: 1f */, 0);
}

void func_142()
{
	float fVar0;
	switch (iLocal_781)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_982);
			__LIB_1__::func_649(&iLocal_781, 1);
			break;
		case 1:
			if (func_117(4))
			{
				fVar0 = 3f;
			}
			else
			{
				fVar0 = 4f;
			}
			if (__LIB_1__::func_313(&uLocal_982, fVar0))
			{
				__LIB_3__::func_237(&(Local_573.f_5), &iLocal_941);
				__LIB_1__::func_649(&iLocal_781, 2);
			}
			break;
		case 2:
			if (__LIB_3__::func_464(uLocal_561[2], 0, &(Local_573.f_5), &iLocal_941, 0, 0))
			{
				if (iLocal_941 == 2)
				{
					func_33(524288);
				}
				func_33(2048);
				__LIB_3__::func_237(&(Local_573.f_5), &iLocal_941);
				__LIB_1__::func_649(&iLocal_781, 3);
			}
			break;
		case 3:
			if (func_358())
			{
				__LIB_1__::func_148(&uLocal_982);
				func_359(2048);
				__LIB_1__::func_649(&iLocal_781, 1);
			}
			break;
		case 4:
			break;
	}
}

bool func_143()
{
	bool bVar0;
	bool bVar1;
	if (func_31(262144))
	{
		return false;
	}
	else if (func_31(131072))
	{
		return true;
	}
	bVar0 = false;
	vLocal_119 = { ENTITY::GET_ENTITY_COORDS(uLocal_561[2], true, false) };
	__LIB_2__::func_106(&vLocal_119, 50, 10, 0);
	vLocal_122 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_119, ENTITY::GET_ENTITY_HEADING(Global_35), 0f, 2.6f, 0f) };
	__LIB_2__::func_106(&vLocal_122, 50, 10, 0);
	if (vLocal_119.z > vLocal_122.z)
	{
		bVar0 = func_361(vLocal_119.z, vLocal_122.z, 1060320051 /* Float: 0.7f */);
	}
	else
	{
		bVar0 = func_361(vLocal_122.z, vLocal_119.z, 1060320051 /* Float: 0.7f */);
	}
	if (bVar0)
	{
		vLocal_125 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_119, ENTITY::GET_ENTITY_HEADING(Global_35), 0f, -2f, 0f) };
		__LIB_2__::func_106(&vLocal_125, 50, 10, 0);
		if (vLocal_119.z > vLocal_125.z)
		{
			bVar0 = func_361(vLocal_119.z, vLocal_125.z, 1060320051 /* Float: 0.7f */);
		}
		else
		{
			bVar0 = func_361(vLocal_125.z, vLocal_119.z, 1060320051 /* Float: 0.7f */);
		}
	}
	if (!bVar0)
	{
		return false;
	}
	bVar1 = false;
	vLocal_128 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_119, ENTITY::GET_ENTITY_HEADING(Global_35), 0f, 6f, 0f) };
	__LIB_2__::func_106(&vLocal_128, 50, 10, 0);
	if (vLocal_119.z > vLocal_128.z)
	{
		bVar1 = func_361(vLocal_119.z, vLocal_128.z, 1.5f);
	}
	else
	{
		bVar1 = func_361(vLocal_128.z, vLocal_119.z, 1.5f);
	}
	if (!bVar1)
	{
		return false;
	}
	return true;
}

void func_144()
{
	if (func_39(iLocal_942))
	{
		func_38(uLocal_561[2], Global_35, 64, -1073741824 /* Float: -2f */, 1, 1744022339);
	}
	else if (!func_117(4))
	{
		func_38(uLocal_561[2], Global_35, 64, -1073741824 /* Float: -2f */, 1, 1744022339);
	}
	else if (!func_117(8))
	{
		func_38(uLocal_561[2], Global_35, 128, -1073741824 /* Float: -2f */, 1, 1744022339);
	}
	else if (!func_117(16))
	{
		func_38(uLocal_561[2], Global_35, 256, -1073741824 /* Float: -2f */, 1, 1744022339);
	}
	else
	{
		func_38(uLocal_561[2], Global_35, 64, -1073741824 /* Float: -2f */, 1, 1744022339);
	}
}

void func_145()
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(uLocal_561[2], true, false) + Vector(-1f, 0f, 0f) };
	fVar3 = ENTITY::GET_ENTITY_HEADING(uLocal_561[2]);
	__LIB_2__::func_106(&vVar0, 50, 10, 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_767, vVar0, 0f, 0f, fVar3, 2);
	TASK::_0x9EBD34958AB6F824(uLocal_561[2]);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_767, "CRIMINAL", uLocal_561[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_767, "player", Global_35, 0);
	ANIMSCENE::START_ANIM_SCENE(iLocal_767);
	func_33(512);
}

bool func_146()
{
	float fVar0;
	if (!__LIB_2__::func_1(uLocal_561[2], 0, 0))
	{
		return true;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_767) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_767, false))
	{
		return true;
	}
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_561[2], iLocal_767))
	{
		return true;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_767);
	if (!func_117(1048576))
	{
		if (func_39(iLocal_942))
		{
			if (fVar0 > 0.0193f)
			{
				func_120(1048576);
			}
		}
		else if (fVar0 > 0.0322f)
		{
			func_120(1048576);
		}
	}
	if (fVar0 > 0.589f)
	{
		func_147(1);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_767, "Criminal", uLocal_561[2]);
		func_362();
		return true;
	}
	return false;
}

void func_147(bool bParam0)
{
	int iVar0[3];
	vector3 vVar4;
	bool bVar7;
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
	{
		iVar0[0] = Local_805[0 /*32*/].f_11;
		iVar0[1] = Local_805[1 /*32*/].f_11;
		iVar0[2] = __LIB_0__::func_398(7);
		vVar4 = { ENTITY::GET_ENTITY_COORDS(uLocal_561[2], true, false) };
		bVar7 = -1;
		if (!bParam0)
		{
			bVar7 = true;
		}
		iLocal_569 = __LIB_4__::func_270(&iVar0, vVar4, 1, 0, bVar7, 0, -1082130432 /* Float: -1f */);
		if (__LIB_0__::func_665(uLocal_561[2], iLocal_569, 1, 1) > 35f)
		{
			iLocal_569 = 0;
		}
	}
}

bool func_148(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4, int iParam5)
{
	if (!__LIB_2__::func_1(iParam0, 0, 0) || func_126(iParam2))
	{
		return false;
	}
	if ((__LIB_2__::func_227(fParam3, 1, 0, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0)) || bParam4)
	{
		if (bParam4)
		{
			__LIB_2__::func_461(0);
		}
		if (__LIB_2__::func_478(iParam0, iParam1, func_365(iLocal_942, iLocal_572, iParam2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, iParam5, 1, 0, 0))
		{
			func_335(iParam2);
			return true;
		}
	}
	return false;
}

void func_149()
{
	int iVar0;
	int iVar1[3];
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	iVar0 = 3;
	if (func_366(61) && !__LIB_4__::func_265(61))
	{
		iVar1[0] = 61;
	}
	else
	{
		iVar1[0] = -1;
	}
	if (func_366(73) && !__LIB_4__::func_265(73))
	{
		iVar1[1] = 73;
	}
	else
	{
		iVar1[1] = -1;
	}
	if (func_366(43) && !__LIB_4__::func_265(43))
	{
		iVar1[2] = 43;
	}
	else
	{
		iVar1[2] = -1;
	}
	iVar6 = -1;
	fVar7 = 1E+10f;
	iVar5 = 0;
	while (iVar5 < iVar0)
	{
		if (iVar1[iVar5] != -1)
		{
			fVar8 = BUILTIN::VDIST2(__LIB_1__::func_974(PLAYER::PLAYER_ID()), __LIB_2__::func_116(__LIB_9__::func_843(iVar1[iVar5]), 1));
			if (fVar8 < fVar7)
			{
				fVar7 = fVar8;
				iVar6 = iVar5;
			}
		}
		iVar5++;
	}
	if (iVar6 != -1)
	{
		iLocal_994 = iVar1[iVar6];
	}
	func_371();
}

bool func_151()
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
	{
		return false;
	}
	switch (iLocal_777)
	{
		case 0:
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_561[2], joaat("REL_PLAYER_LIKE"));
			__LIB_1__::func_148(&uLocal_976);
			func_81(&(uLocal_561[2]), joaat("MOODHAPPY"));
			__LIB_1__::func_649(&iLocal_777, 1);
			break;
		case 1:
			if (__LIB_1__::func_871(&uLocal_976) > 1500 && !TASK::IS_PED_GETTING_UP(uLocal_561[2]))
			{
				func_373(uLocal_561[2], Global_35, &uLocal_902, -1f, 0, 0, -1f, 5f, 1, 256, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 3f, 0, 0, 1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
				TASK::TASK_PLAY_ANIM(uLocal_561[2], Local_783[0 /*2*/], Local_783[0 /*2*/].f_1, 2f, -2f, -1, 67109392, 0f, false, 65536, false, 0, false);
				__LIB_2__::func_111(&(Local_573.f_5), 1);
				__LIB_1__::func_649(&iLocal_777, 2);
			}
			break;
		case 2:
			__LIB_2__::func_966(uLocal_561[2], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_561[2], Local_783[0 /*2*/], Local_783[0 /*2*/].f_1, 1) && __LIB_2__::func_227(-3f, 1, uLocal_561[2], 1))
			{
				if (iLocal_994 != -1)
				{
					__LIB_1__::func_649(&iLocal_777, 3);
				}
				else
				{
					__LIB_1__::func_727(uLocal_561[2], 1);
					__LIB_1__::func_649(&iLocal_777, 5);
				}
			}
			break;
		case 3:
			__LIB_2__::func_966(uLocal_561[2], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (__LIB_2__::func_227(-3f, 1, uLocal_561[2], 1))
			{
				TASK::TASK_PLAY_ANIM(uLocal_561[2], Local_783[1 /*2*/], Local_783[1 /*2*/].f_1, 2f, -2f, -1, 67109392, 0f, false, 65536, false, 0, false);
				__LIB_1__::func_649(&iLocal_777, 4);
			}
			break;
		case 4:
			__LIB_2__::func_966(uLocal_561[2], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_561[2], joaat("RE_BTR_FTH_V1_TH_STR")))
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_478(uLocal_561[2], Global_35, &(Local_131[1 /*213*/].f_34), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_649(&iLocal_777, 5);
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_561[2], Local_783[1 /*2*/], Local_783[1 /*2*/].f_1, 1))
			{
				__LIB_1__::func_649(&iLocal_777, 10);
			}
			break;
		case 5:
			__LIB_2__::func_966(uLocal_561[2], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (__LIB_2__::func_227(-1f, 1, 0, 0))
			{
				if (iLocal_994 != -1)
				{
					__LIB_17__::func_835(iLocal_994);
				}
				iLocal_994 = -1;
				__LIB_1__::func_649(&iLocal_777, 8);
			}
			break;
		case 8:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_561[2], Local_783[1 /*2*/], Local_783[1 /*2*/].f_1, 1))
			{
				__LIB_1__::func_727(uLocal_561[2], 1);
				func_147(0);
				func_168(1, 2);
				__LIB_2__::func_602(&(Local_1004[2 /*75*/].f_21[0 /*17*/]), __LIB_2__::func_460(7), &(Local_131[1 /*213*/].f_54), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
				__LIB_2__::func_411(&(Local_1004[2 /*75*/].f_21[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_1004[2 /*75*/].f_21[1 /*17*/]), 0, 0);
				__LIB_2__::func_451(&(Local_1004[2 /*75*/]), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_569) && !ENTITY::IS_ENTITY_DEAD(iLocal_569))
				{
					__LIB_0__::func_325(&(uLocal_565[2]));
					__LIB_1__::func_562(uLocal_561[2], iLocal_569, 0, 1.5f, -1);
					__LIB_1__::func_649(&iLocal_777, 9);
				}
				else
				{
					__LIB_1__::func_649(&iLocal_777, 10);
				}
			}
			break;
		case 9:
			if (((!ENTITY::DOES_ENTITY_EXIST(iLocal_569) || ENTITY::IS_ENTITY_DEAD(iLocal_569)) || __LIB_0__::func_394(Global_35, iLocal_569, 0)) || __LIB_0__::func_394(uLocal_561[2], iLocal_569, 1))
			{
				__LIB_1__::func_649(&iLocal_777, 10);
			}
			break;
		case 10:
			__LIB_0__::func_325(&(uLocal_565[2]));
			__LIB_3__::func_286(uLocal_561[2]);
			__LIB_1__::func_148(&uLocal_988);
			if (PED::IS_PED_ON_MOUNT(uLocal_561[2]))
			{
				fVar0 = 2f;
			}
			else
			{
				fVar0 = 1.5f;
			}
			TASK::_TASK_MOVE_IN_TRAFFIC_3(uLocal_561[2], uLocal_561[0], fVar0, 0, 0);
			if (func_31(64))
			{
				__LIB_3__::func_461(7, 1, 1);
			}
			else if (func_31(128))
			{
				__LIB_3__::func_461(7, 2, 1);
			}
			else if (func_31(256))
			{
				__LIB_3__::func_461(7, 3, 1);
			}
			__LIB_1__::func_649(&iLocal_777, 11);
			break;
		case 11:
			if (__LIB_1__::func_313(&uLocal_988, 10f))
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_561[2], 448, false);
				func_53(0);
				func_135();
				__LIB_1__::func_649(&iLocal_777, 12);
			}
			break;
		case 12:
			return true;
	}
	return false;
}

void func_153(int iParam0)
{
	float fVar0;
	if (func_32(4, 2) && iParam0 != iLocal_1003)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uLocal_561[iParam0]))
	{
		return;
	}
	if (func_31(2097152))
	{
		fVar0 = -4f;
		if (iLocal_572 == 0 && !func_39(iLocal_942))
		{
			fVar0 = -5f;
		}
		if (__LIB_2__::func_227(fVar0, 1, 0, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			switch (iParam0)
			{
				case 0:
				case 1:
					if (!func_126(1))
					{
						func_148(uLocal_561[0], Global_35, 1, 0f, 1, 1744022339);
					}
					else if (!func_126(2))
					{
						func_148(uLocal_561[0], Global_35, 2, 0f, 1, 1744022339);
					}
					else if (iLocal_572 == 0 && !func_39(iLocal_942))
					{
						func_148(uLocal_561[0], Global_35, 4, 0f, 1, 1744022339);
					}
					else
					{
						__LIB_2__::func_122(uLocal_561[0], "STOP_IN_THE_NAME_OF_THE_LAW", 1808677283, Global_35, 1, &(Local_805[0 /*32*/].f_23), 1, 1);
					}
					__LIB_2__::func_411(&(Local_1004[0 /*75*/].f_21[1 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_1004[1 /*75*/].f_21[1 /*17*/]), 1, 0);
					__LIB_2__::func_451(&(Local_1004[0 /*75*/]), 0);
					__LIB_2__::func_451(&(Local_1004[1 /*75*/]), 0);
					break;
				case 2:
					if (!func_32(1, iParam0))
					{
						if (func_39(iLocal_942))
						{
							__LIB_2__::func_122(uLocal_561[iParam0], "RELIEVED_REACT", -417894478, Global_35, 1, &(Local_805[iParam0 /*32*/].f_23), 1, 1);
						}
						else
						{
							func_148(uLocal_561[iParam0], Global_35, 268435456, 0f, 1, 1744022339);
						}
						func_33(16777216);
						if (!func_31(33554432))
						{
							__LIB_2__::func_411(&(Local_1004[2 /*75*/].f_21[1 /*17*/]), 1, 0);
							__LIB_2__::func_451(&(Local_1004[iParam0 /*75*/]), 0);
						}
					}
					break;
			}
			__LIB_1__::func_148(&uLocal_973);
			func_35(4, 2);
			func_359(2097152);
			func_359(4194304);
		}
	}
	else if (func_31(4194304))
	{
		if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) && __LIB_2__::func_227(-4f, 1, 0, 0))
		{
			switch (iParam0)
			{
				case 0:
				case 1:
					func_168(8, 0);
					break;
				case 2:
					func_148(uLocal_561[iParam0], Global_35, 536870912, 0f, 1, 1744022339);
					func_33(33554432);
					if (!func_31(16777216))
					{
						__LIB_2__::func_411(&(Local_1004[2 /*75*/].f_21[0 /*17*/]), 1, 0);
						__LIB_2__::func_451(&(Local_1004[iParam0 /*75*/]), 0);
					}
					break;
			}
			__LIB_1__::func_148(&uLocal_973);
			func_35(4, 2);
			func_359(2097152);
			func_359(4194304);
		}
	}
	else if (__LIB_2__::func_456(&(Local_1004[iParam0 /*75*/])))
	{
		switch (iLocal_999[iParam0])
		{
			case 0:
				func_33(2097152);
				break;
			case 1:
				func_33(4194304);
				break;
			default:
				return;
		}
		Local_573.f_44 = 1;
		iLocal_1003 = iParam0;
		__LIB_1__::func_148(&uLocal_973);
		func_168(4, 2);
		__LIB_2__::func_526(&(Local_1004[0 /*75*/].f_21), 0, 0);
		__LIB_2__::func_526(&(Local_1004[1 /*75*/].f_21), 0, 0);
		__LIB_2__::func_526(&(Local_1004[2 /*75*/].f_21), 0, 0);
	}
}

void func_154()
{
	if (!Local_573.f_46)
	{
		iLocal_999[0] = func_380(&(uLocal_561[0]), &(Local_1004[0 /*75*/]), 30f, &(Local_1004[0 /*75*/].f_21), &(Local_573.f_192), 0, 1, 0, 0, iLocal_1230[0], 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		iLocal_999[1] = func_380(&(uLocal_561[1]), &(Local_1004[1 /*75*/]), 30f, &(Local_1004[1 /*75*/].f_21), &(Local_573.f_192), 0, 1, 0, 0, iLocal_1230[1], 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	if (!func_32(2, 2))
	{
		iLocal_999[2] = func_380(&(uLocal_561[2]), &(Local_1004[2 /*75*/]), 30f, &(Local_1004[2 /*75*/].f_21), &(Local_573.f_192), 0, 1, 0, 0, iLocal_1230[2], 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
}

void func_168(int iParam0, int iParam1)
{
	if (!func_32(iParam0, iParam1))
	{
		__LIB_1__::func_683(&(uLocal_995[iParam1]), iParam0);
	}
}

void func_171(var uParam0, int iParam1)
{
	struct<15> Var0;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	Var0.f_14 = *uParam0;
	Var0 = Global_35;
	Var0.f_7 = __LIB_0__::func_12();
	Var0.f_8 = 0;
	Var0.f_11 = 100;
	Var0.f_12 = iParam1;
	MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
}

void func_187(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	if (__LIB_1__::func_85(iParam0, 32))
	{
		if (func_14(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { __LIB_3__::func_190(Global_35, &(uParam1->f_12)) };
				if (!__LIB_0__::func_86(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		__LIB_3__::func_261(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = __LIB_3__::func_292(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, __LIB_0__::func_93());
		if (__LIB_0__::func_1(Global_1310750[iParam0 /*111*/], 33554432))
		{
			__LIB_2__::func_213(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			__LIB_2__::func_213(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (__LIB_1__::func_85(iParam0, 1))
		{
			__LIB_2__::func_119(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	__LIB_3__::func_293(iParam0);
}

char* func_310(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MTN";
		case 3:
			return "FTH";
		case 6:
			return "FTH";
		case 9:
			return "MTN";
		case 10:
			return "FTH";
		default:
			break;
	}
	return "INVALID";
}

bool func_328(float fParam0)
{
	if (__LIB_2__::func_118(uLocal_561[0], 1, 1) < fParam0 || __LIB_2__::func_118(uLocal_561[1], 1, 1) < fParam0)
	{
		return true;
	}
	return false;
}

void func_330(int iParam0, var uParam1)
{
	if (__LIB_2__::func_1(iParam0, 0, 0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, uParam1);
	}
}

bool func_331(int iParam0, int iParam1)
{
	if (!func_39(iParam0) && iParam1 == 0)
	{
		return false;
	}
	return true;
}

bool func_332(float fParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[2]) && AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_561[2]))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[0]) && AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_561[0]))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_561[1]) && AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_561[1]))
	{
		return false;
	}
	return __LIB_2__::func_227(fParam0, 1, 0, 0);
}

char* func_333(int iParam0, int iParam1, int iParam2)
{
	if (func_39(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam2)
				{
					case 0:
						return "PANIC_HELP";
					case 1:
						return "SCARED_HELP";
					case 2:
						return "GENERIC_FRIGHTENED_HIGH";
					default:
						break;
				}
				break;
			case 1:
				switch (iParam2)
				{
					case 0:
						return "PANIC_HELP";
					case 1:
						return "SCARED_HELP";
					case 2:
						return "GENERIC_FRIGHTENED_HIGH";
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam2)
				{
					case 0:
						return "PANIC_HELP";
					case 1:
						return "SCARED_HELP";
					case 2:
						return "GENERIC_FRIGHTENED_HIGH";
					default:
						break;
				}
				break;
			case 1:
				switch (iParam2)
				{
					case 0:
						return "PANIC_HELP";
					case 1:
						return "LAW_TATTLE_NEUTRAL";
					case 2:
						return "SCARED_HELP";
					default:
						break;
				}
				break;
		}
	}
	return "SCARED_HELP";
}

void func_335(int iParam0)
{
	if (!func_126(iParam0))
	{
		__LIB_1__::func_683(&iLocal_76, iParam0);
	}
}

void func_337(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1) || !__LIB_2__::func_1(iParam1, 0, 1))
	{
		return;
	}
	TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iParam1, Global_35, 0, -1, 1056964608 /* Float: 0.5f */, 1.75f, 12);
}

float func_338(int iParam0)
{
	if (func_39(iLocal_942))
	{
		switch (iLocal_572)
		{
			case 0:
				switch (iParam0)
				{
					case 256:
						return -2f;
					case 512:
						return -3.5f;
					case 1024:
						return -5.5f;
					case 2048:
						return -2f;
					default:
						break;
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 256:
						return -2f;
					case 512:
						return -4.5f;
					case 1024:
						return -4.5f;
					case 2048:
						return -4.25f;
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iLocal_572)
		{
			case 0:
				switch (iParam0)
				{
					case 256:
						return -4f;
					case 512:
						return -3.5f;
					case 1024:
						return -3.5f;
					case 2048:
						return -4f;
					default:
						break;
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 256:
						return -4f;
					case 512:
						return -3.5f;
					case 1024:
						return -3.5f;
					case 2048:
						return -3.5f;
					default:
						break;
				}
				break;
		}
	}
	return -2f;
}

bool func_342(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_117(1024))
			{
				return func_38(uLocal_561[0], Global_35, 1024, -2f, 0, 1744022339);
			}
			else if (!func_117(2048))
			{
				return func_38(uLocal_561[0], Global_35, 2048, 3f, 0, 1744022339);
			}
			else if (!func_117(4096))
			{
				return func_38(uLocal_561[0], Global_35, 4096, 3f, 0, 1744022339);
			}
			break;
		case 1:
			if (func_39(iLocal_942) && iLocal_572 == 1)
			{
				if (!func_117(8192))
				{
					if (func_332(0f))
					{
						if (__LIB_2__::func_122(uLocal_561[1], "RE_BTR_FTH_V2_AREST", 1744022339, Global_35, 1, &(Local_805[1 /*32*/].f_23), 1, 1))
						{
							func_120(8192);
							__LIB_1__::func_148(&uLocal_991);
							return true;
						}
						else
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				else if (!func_117(16384))
				{
					if (__LIB_1__::func_313(&uLocal_991, 8f))
					{
						if (__LIB_2__::func_122(uLocal_561[1], "RE_BTR_FTH_V2_AREST", 1744022339, Global_35, 1, &(Local_805[1 /*32*/].f_23), 2, 1))
						{
							func_120(16384);
							__LIB_1__::func_148(&uLocal_991);
							return true;
						}
						else
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				else if (!func_117(32768))
				{
					if (__LIB_1__::func_313(&uLocal_991, 10f))
					{
						if (__LIB_2__::func_122(uLocal_561[1], "RE_BTR_FTH_V2_AREST", 1744022339, Global_35, 1, &(Local_805[1 /*32*/].f_23), 3, 1))
						{
							func_120(32768);
							return true;
						}
						else
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
			}
			else if (!func_117(8192))
			{
				return func_38(uLocal_561[1], Global_35, 8192, -2f, 0, 1744022339);
			}
			else if (!func_117(16384))
			{
				return func_38(uLocal_561[1], Global_35, 16384, 3f, 0, 1744022339);
			}
			else if (!func_117(32768))
			{
				return func_38(uLocal_561[1], Global_35, 32768, 3f, 0, 1744022339);
			}
			break;
	}
	return true;
}

bool func_343()
{
	if (ENTITY::IS_ENTITY_DEAD(uLocal_561[2]))
	{
		return true;
	}
	if (!func_39(iLocal_942) && iLocal_572 == 0)
	{
		if (!func_117(65536))
		{
			return func_38(uLocal_561[2], Global_35, 65536, -1073741824 /* Float: -2f */, 0, 1744022339);
		}
		else if (!func_117(131072))
		{
			return func_38(uLocal_561[2], Global_35, 131072, -1073741824 /* Float: -2f */, 0, 1744022339);
		}
		else if (!func_117(262144))
		{
			return func_38(uLocal_561[2], Global_35, 262144, -1073741824 /* Float: -2f */, 0, 1744022339);
		}
		else if (!func_117(524288))
		{
			return func_38(uLocal_561[2], Global_35, 524288, -1073741824 /* Float: -2f */, 0, 1744022339);
		}
	}
	if (!func_117(65536))
	{
		if (func_332(2f))
		{
			if (__LIB_2__::func_122(uLocal_561[2], func_546(iLocal_942, iLocal_572, 0), 1744022339, Global_35, 1, &(Local_805[2 /*32*/].f_23), func_547(iLocal_942, iLocal_572, 0), 1))
			{
				return true;
			}
		}
	}
	else if (!func_117(131072))
	{
		if (func_332(2f))
		{
			if (__LIB_2__::func_122(uLocal_561[2], func_546(iLocal_942, iLocal_572, 1), 1744022339, Global_35, 1, &(Local_805[2 /*32*/].f_23), func_547(iLocal_942, iLocal_572, 1), 1))
			{
				return true;
			}
		}
	}
	else if (!func_117(262144))
	{
		if (func_332(2f))
		{
			if (__LIB_2__::func_122(uLocal_561[2], func_546(iLocal_942, iLocal_572, 2), 1744022339, Global_35, 1, &(Local_805[2 /*32*/].f_23), func_547(iLocal_942, iLocal_572, 2), 1))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_346(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, bool bParam6, bool bParam7)
{
	if (func_32(4, 2))
	{
		return;
	}
	if (!bParam7 && func_31(2048))
	{
		return;
	}
	if (!func_126(iParam2))
	{
		func_148(iParam0, iParam1, iParam2, fParam5, bParam6, 1744022339);
	}
	else if (!func_126(iParam3))
	{
		func_148(iParam0, iParam1, iParam3, fParam5, bParam6, 1744022339);
	}
	else if (!func_126(iParam4))
	{
		func_148(iParam0, iParam1, iParam4, fParam5, bParam6, 1744022339);
	}
}

void func_347()
{
	bool bVar0;
	float fVar1;
	if (iLocal_73 == 5)
	{
		bVar0 = true;
	}
	if (iLocal_73 == 7)
	{
		if (__LIB_0__::func_396(Global_35) && __LIB_2__::func_825(Global_35) == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ENTITY::GET_ENTITY_ATTACHED_TO(uLocal_561[2])))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (__LIB_0__::func_75(&uLocal_985) && !__LIB_0__::func_33(&uLocal_985))
		{
			__LIB_2__::func_113(&uLocal_985);
		}
		return;
	}
	if (__LIB_0__::func_75(&uLocal_985))
	{
		if (__LIB_0__::func_33(&uLocal_985))
		{
			__LIB_2__::func_112(&uLocal_985);
		}
		if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_561[2]))
		{
			fVar1 = 15f;
			if (iLocal_73 == 5)
			{
				fVar1 = 15f;
			}
			if (__LIB_1__::func_313(&uLocal_985, fVar1))
			{
				func_135();
				__LIB_1__::func_649(&iLocal_776, 13);
			}
		}
	}
	else
	{
		__LIB_1__::func_148(&uLocal_985);
	}
}

void func_352()
{
	if (!func_39(iLocal_942) || iLocal_572 == 0)
	{
		func_561(func_560(iLocal_942, iLocal_572, 1));
	}
	func_561(func_560(iLocal_942, iLocal_572, 2));
	func_561(func_560(iLocal_942, iLocal_572, 4));
	if (!func_39(iLocal_942) && iLocal_572 == 0)
	{
		func_561(func_560(iLocal_942, iLocal_572, 8));
	}
	if (!func_39(iLocal_942) && iLocal_572 == 0)
	{
		func_562(func_560(iLocal_942, iLocal_572, 16));
		func_562(func_560(iLocal_942, iLocal_572, 32));
		func_562(func_560(iLocal_942, iLocal_572, 64));
	}
	func_563(func_560(iLocal_942, iLocal_572, 32768));
	if (!func_39(iLocal_942) || iLocal_572 == 0)
	{
		func_564(func_560(iLocal_942, iLocal_572, 128));
	}
	func_564(func_560(iLocal_942, iLocal_572, 256));
	func_564(func_560(iLocal_942, iLocal_572, 512));
	if (!func_39(iLocal_942) && iLocal_572 == 0)
	{
		func_564(func_560(iLocal_942, iLocal_572, 1024));
	}
	func_565(func_560(iLocal_942, iLocal_572, 2048));
	func_566(func_560(iLocal_942, iLocal_572, 4096));
	func_566(func_560(iLocal_942, iLocal_572, 8192));
	func_566(func_560(iLocal_942, iLocal_572, 16384));
	if (__LIB_0__::func_181())
	{
		switch (iLocal_572)
		{
			case 0:
				__LIB_17__::func_837("REBNT_GRTJa", 0, 0);
				break;
			case 1:
				__LIB_17__::func_837("REBNT_GRTJb", 0, 0);
				break;
		}
	}
	else
	{
		switch (iLocal_572)
		{
			case 0:
				__LIB_17__::func_837("REBNT_GRT_A", 0, 0);
				break;
			case 1:
				__LIB_17__::func_837("REBNT_GRT_B", 0, 0);
				break;
		}
	}
	if (!func_39(iLocal_942))
	{
		if (iLocal_572 == 0)
		{
			__LIB_3__::func_530(1, "RE_BTR_MTN_V1_INNOCENT", -1260924842);
		}
		else
		{
			__LIB_3__::func_530(1, "RE_BTR_MTN_V2_INNOCENT", -1260924842);
		}
	}
	else if (iLocal_572 == 0)
	{
		__LIB_3__::func_530(1, "RE_BTR_FTH_V1_INNOCENT", -1260924842);
	}
	else
	{
		__LIB_3__::func_530(1, "RE_BTR_FTH_V2_INNOCENT", -1260924842);
	}
	__LIB_3__::func_530(0, "TELLS_PED_TO_SHUT_UP", 381748758);
}

bool func_358()
{
	if (func_39(iLocal_942) && iLocal_572 == 0)
	{
		if (!func_117(4))
		{
			func_120(4);
			__LIB_2__::func_461(0);
			__LIB_2__::func_122(uLocal_561[2], "RE_BTR_FTH_V1_UAGGRO", 1744022339, Global_35, 1, &(Local_805[2 /*32*/].f_23), 1, 1);
			return true;
		}
		else if (!func_117(8))
		{
			func_120(8);
			__LIB_2__::func_461(0);
			__LIB_2__::func_122(uLocal_561[2], "RE_BTR_FTH_V1_UAGGRO", 1744022339, Global_35, 1, &(Local_805[2 /*32*/].f_23), 2, 1);
			return true;
		}
		else if (!func_117(16))
		{
			func_120(16);
			__LIB_2__::func_461(0);
			__LIB_2__::func_122(uLocal_561[2], "RE_BTR_FTH_V1_UAGGRO", 1744022339, Global_35, 1, &(Local_805[2 /*32*/].f_23), 3, 1);
			return true;
		}
	}
	else if (!func_117(4))
	{
		if (func_38(uLocal_561[2], Global_35, 4, 0f, 1, 1744022339))
		{
			return true;
		}
	}
	else if (!func_117(8))
	{
		if (func_38(uLocal_561[2], Global_35, 8, -3f, 0, 1744022339))
		{
			return true;
		}
	}
	else if (!func_117(16))
	{
		if (func_39(iLocal_942) || iLocal_572 == 0)
		{
			func_38(uLocal_561[2], Global_35, 16, -3f, 0, 1744022339);
		}
		else
		{
			func_120(16);
		}
		return true;
	}
	return false;
}

void func_359(int iParam0)
{
	if (func_31(iParam0))
	{
		__LIB_1__::func_681(&iLocal_75, iParam0);
	}
}

int func_361(float fParam0, float fParam1, float fParam2)
{
	if ((fParam0 - fParam1) < fParam2)
	{
		return 1;
	}
	return 0;
}

void func_362()
{
	int iVar0;
	if (!__LIB_2__::func_1(uLocal_561[2], 0, 0))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FORCE_MOTION_STATE(0, joaat("MOTIONSTATE_SPRINT"), false);
	TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 256, -1082130432 /* Float: -1f */, -1, iLocal_569);
	__LIB_1__::func_474(uLocal_561[2], &iVar0, 0, 0, 1, 1);
	PED::SET_PED_KEEP_TASK(uLocal_561[2], true);
}

char* func_365(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 1:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "APPROCH", __LIB_4__::func_221(iParam1));
		case 2:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "APPROCH_B", __LIB_4__::func_221(iParam1));
		case 4:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "APPROCH_C", __LIB_4__::func_221(iParam1));
		case 128:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "CRY_OUT", __LIB_4__::func_221(iParam1));
		case 256:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "LN1", __LIB_4__::func_221(iParam1));
		case 512:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "LN2", __LIB_4__::func_221(iParam1));
		case 1024:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "LN3", __LIB_4__::func_221(iParam1));
		case 2048:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "LN4", __LIB_4__::func_221(iParam1));
		case 4096:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "THANK", __LIB_4__::func_221(iParam1));
		case 32768:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "UNTIE_A", __LIB_4__::func_221(iParam1));
		case 65536:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "UNTIE_01", __LIB_4__::func_221(iParam1));
		case 131072:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "UNTIE_02", __LIB_4__::func_221(iParam1));
		case 262144:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "PDOWN_A", __LIB_4__::func_221(iParam1));
		case 524288:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "PDOWN_01", __LIB_4__::func_221(iParam1));
		case 1048576:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "PDOWN_02", __LIB_4__::func_221(iParam1));
		case 4194304:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "VRIDE_A", __LIB_4__::func_221(iParam1));
		case 8388608:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "VRIDE_01", __LIB_4__::func_221(iParam1));
		case 16777216:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "VRIDE_02", __LIB_4__::func_221(iParam1));
		case 33554432:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "HELP_01", __LIB_4__::func_221(iParam1));
		case 67108864:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "HELP_02", __LIB_4__::func_221(iParam1));
		case 134217728:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "HELP_03", __LIB_4__::func_221(iParam1));
		case 268435456:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "RELIEF", __LIB_4__::func_221(iParam1));
		case 536870912:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "LEAVE", __LIB_4__::func_221(iParam1));
		default:
			break;
	}
	return "INVALID DIALOGUE BIT";
}

bool func_366(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 43:
		case 61:
		case 73:
			return true;
		default:
			break;
	}
	return false;
}

void func_371()
{
	switch (iLocal_942)
	{
		case 1:
		case 9:
			switch (iLocal_994)
			{
				case 73:
					StringCopy(&(Local_131[1 /*213*/].f_34), "RE_BTR_MTN_V1_TH_VAL", 64);
					func_33(64);
					break;
				case 43:
					StringCopy(&(Local_131[1 /*213*/].f_34), "RE_BTR_MTN_V1_TH_NBX", 64);
					func_33(128);
					break;
				case 61:
					StringCopy(&(Local_131[1 /*213*/].f_34), "RE_BTR_MTN_V1_TH_STR", 64);
					func_33(256);
					break;
			}
			break;
		default:
			switch (iLocal_994)
			{
				case 73:
					StringCopy(&(Local_131[1 /*213*/].f_34), "RE_BTR_FTH_V1_TH_VAL", 64);
					func_33(64);
					break;
				case 43:
					StringCopy(&(Local_131[1 /*213*/].f_34), "RE_BTR_FTH_V1_TH_NBX", 64);
					func_33(128);
					break;
				case 61:
					StringCopy(&(Local_131[1 /*213*/].f_34), "RE_BTR_FTH_V1_TH_STR", 64);
					func_33(256);
					break;
			}
			break;
	}
}

void func_373(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, float fParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = fParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, fParam6, fParam7, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		__LIB_1__::func_735(iParam0, iParam1, iParam18);
	}
}

int func_380(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_584(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_3__::func_156(iParam1, uParam3, uParam0);
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

char* func_546(int iParam0, int iParam1, int iParam2)
{
	if (func_39(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam2)
				{
					case 0:
						return "GENERIC_SHOCKED_HIGH";
					case 1:
						return "TAUNT_GEN_NEUTRAL";
					case 2:
						return "MELEE_TAKE_THAT";
					case 3:
						return "STEAL_BACK";
					default:
						break;
				}
				break;
			case 1:
				switch (iParam2)
				{
					case 0:
						return "GENERIC_SHOCKED_MED";
					case 1:
						return "MELEE_THAT_ALL_YOU_GOT";
					case 2:
						return "GENERIC_THANKS_SHOUTED";
					case 3:
						return "GENERIC_EXCITING_EVENT_COMMENT";
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "";
			case 1:
				switch (iParam2)
				{
					case 0:
						return "GENERIC_MOCK";
					case 1:
						return "MELEE_BRING_IT_ON";
					case 2:
						return "SICK_BASTARD";
					default:
						break;
				}
				break;
		}
	}
	return "";
}

int func_547(int iParam0, int iParam1, int iParam2)
{
	if (func_39(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam2)
				{
					case 0:
						return 1;
					case 1:
						return 1;
					case 2:
						return 1;
					case 3:
						return 1;
					default:
						break;
				}
				break;
			case 1:
				switch (iParam2)
				{
					case 0:
						return 1;
					case 1:
						return 2;
					case 2:
						return 1;
					case 3:
						return 1;
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return -1;
			case 1:
				switch (iParam2)
				{
					case 0:
						return 1;
					case 1:
						return 1;
					case 2:
						return 1;
					default:
						break;
				}
				break;
		}
	}
	return -1;
}

char* func_560(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 1:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "PRIDE_A", __LIB_4__::func_221(iParam1));
		case 2:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "PRIDE_01", __LIB_4__::func_221(iParam1));
		case 4:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "PRIDE_02", __LIB_4__::func_221(iParam1));
		case 8:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "PRIDE_03", __LIB_4__::func_221(iParam1));
		case 16:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "CLOSE_01", __LIB_4__::func_221(iParam1));
		case 32:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "CLOSE_02", __LIB_4__::func_221(iParam1));
		case 64:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "CLOSE_03", __LIB_4__::func_221(iParam1));
		case 128:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "RETURN_A", __LIB_4__::func_221(iParam1));
		case 256:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "RETURN_01", __LIB_4__::func_221(iParam1));
		case 512:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "RETURN_02", __LIB_4__::func_221(iParam1));
		case 1024:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "RETURN_03", __LIB_4__::func_221(iParam1));
		case 32768:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "PLY_CLOSE", __LIB_4__::func_221(iParam1));
		case 2048:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "PLY_KILL_PRIS", __LIB_4__::func_221(iParam1));
		case 4096:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "HOGTIE_RESP_A", __LIB_4__::func_221(iParam1));
		case 8192:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "HOGTIE_RESP_B", __LIB_4__::func_221(iParam1));
		case 16384:
			return __LIB_3__::func_394("BTR", func_310(iParam0), "HOGTIE_RESP_C", __LIB_4__::func_221(iParam1));
		default:
			break;
	}
	return "INVALID DIALOGUE BIT";
}

int func_561(char* sParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_20[iVar0 /*3*/])))
		{
			Global_1395482.f_20[iVar0 /*3*/] = { __LIB_1__::func_344(sParam0) };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_562(char* sParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_52[iVar0 /*3*/])))
		{
			Global_1395482.f_52[iVar0 /*3*/] = { __LIB_1__::func_344(sParam0) };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_563(char* sParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_62[iVar0 /*3*/])))
		{
			Global_1395482.f_62[iVar0 /*3*/] = { __LIB_1__::func_344(sParam0) };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_564(char* sParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_36[iVar0 /*3*/])))
		{
			Global_1395482.f_36[iVar0 /*3*/] = { __LIB_1__::func_344(sParam0) };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_565(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringCopy(&(Global_1395482.f_76), sParam0, 32);
	}
}

int func_566(char* sParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_80[iVar0 /*4*/])))
		{
			StringCopy(&(Global_1395482.f_80[iVar0 /*4*/]), sParam0, 32);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_584(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_584(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

