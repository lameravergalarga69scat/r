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
	int iLocal_14[3] = { 0, 0, 0 };
	var uLocal_18 = 5;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
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
	char cLocal_59[64] = "";
	char cLocal_67[64] = "";
	int iLocal_75 = 0;
	struct<2> Local_76[16];
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	struct<193> Local_111 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_304 = 0;
	struct<32> Local_305[16];
	struct<12> Local_818[7];
	struct<8> Local_903 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_911 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_919 = 0;
	struct<23> Local_920 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	int iLocal_945 = 0;
	int iLocal_946[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_963[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_980 = 0;
	var uLocal_981 = 0;
	int iLocal_982 = 0;
	int iLocal_983 = 0;
	int iLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	int iLocal_1018 = 0;
	int iLocal_1019 = 0;
	int iLocal_1020 = 0;
	int iLocal_1021 = 0;
	int iLocal_1022 = 0;
	int iLocal_1023 = 0;
	int iLocal_1024 = 0;
	int iLocal_1025 = 0;
	var uLocal_1026 = 0;
	int iLocal_1027 = 0;
	int iLocal_1028 = 0;
	int iLocal_1029 = 0;
	float fLocal_1030 = 0f;
	float fLocal_1031 = 0f;
	float fLocal_1032 = 0f;
	float fLocal_1033[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1050 = 0f;
	vector3 vLocal_1051 = { 0f, 0f, 0f };
	vector3 vLocal_1054 = { 0f, 0f, 0f };
	vector3 vLocal_1057 = { 0f, 0f, 0f };
	vector3 vLocal_1060 = { 0f, 0f, 0f };
	vector3 vLocal_1063[6] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_1082 = { 0f, 0f, 0f };
	vector3 vLocal_1085 = { 0f, 0f, 0f };
	int iLocal_1088[3] = { 0, 0, 0 };
	int iLocal_1092 = 0;
	int iLocal_1093 = 0;
	int iLocal_1094 = 0;
	int iLocal_1095 = 0;
	int iLocal_1096[2] = { 0, 0 };
	int iLocal_1099 = 0;
	int iLocal_1100 = 0;
	int iLocal_1101 = 0;
	int iLocal_1102 = 0;
	int iLocal_1103 = 0;
	char cLocal_1104[32] = "";
	char cLocal_1108[32] = "";
	char cLocal_1112[32] = "";
	char cLocal_1116[32] = "";
	int iLocal_1120 = 0;
	struct<17> Local_1121[2];
	struct<17> Local_1156[2];
	struct<17> Local_1191[2];
	struct<17> Local_1226[2];
	struct<17> Local_1261[2];
	int iLocal_1296 = 0;
	int iLocal_1297[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1303[5] = { 0, 0, 0, 0, 0 };
	struct<21> Local_1309[5];
	var uLocal_1415 = 0;
	int iLocal_1416 = 0;
	int iLocal_1417 = 0;
	int iLocal_1418 = 0;
	int iLocal_1419 = 0;
	int iLocal_1420 = 0;
	bool bLocal_1421 = false;
	bool bLocal_1422 = false;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	int iLocal_1425 = 0;
	int iLocal_1426 = 0;
	int iLocal_1427 = 0;
	int iLocal_1428 = 0;
	int iLocal_1429 = 0;
	int iLocal_1430 = 0;
	int iLocal_1431 = 0;
	int iLocal_1432 = 0;
	int iLocal_1433 = 0;
	int iLocal_1434 = 0;
	int iLocal_1435 = 0;
	int iLocal_1436 = 0;
	var uLocal_1437 = 0;
	int iLocal_1438 = 0;
	float fLocal_1439 = 0f;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	int iLocal_1443 = 0;
	char[] cLocal_1444[8] = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	vector3 vLocal_1447 = { 0f, 0f, 0f };
	var uLocal_1450 = 0;
	struct<23> Local_1451 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	bool bLocal_1476 = false;
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
	iLocal_109 = -1;
	fLocal_1050 = 7f;
	iLocal_1120 = -1;
	iLocal_1429 = -1;
	cLocal_1444 = "HNGP";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_1422 = true;
	}
	if (!bLocal_1422)
	{
		Local_111.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		Local_111.f_43 = __LIB_0__::func_12();
		Local_111.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		__LIB_3__::func_232(&(Local_111.f_5), 1);
		__LIB_2__::func_104(&(Local_111.f_5), 0);
		__LIB_2__::func_110(&(Local_111.f_5), 1);
		__LIB_2__::func_111(&(Local_111.f_5), 1);
		__LIB_2__::func_180(&(Local_111.f_5), 1);
		__LIB_2__::func_662(&(Local_111.f_5), 0);
		__LIB_2__::func_182(&(Local_111.f_5), 1);
		__LIB_3__::func_620(&(Local_111.f_5), 1);
		__LIB_3__::func_230(&(Local_111.f_5), 1);
		__LIB_2__::func_595(&(Local_111.f_5), (15f + 5f));
		__LIB_2__::func_507(&(Local_111.f_5), BUILTIN::ROUND((1000f * 1.5f)));
		func_15();
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_1422, 2073, 0);
		if (bLocal_1422)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_1417)
			{
				case 0:
					if (iLocal_109 == -1)
					{
						func_15();
					}
					else if (func_18())
					{
						iLocal_1417 = 1;
					}
					break;
				case 1:
					if (__LIB_3__::func_454(&Local_111, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_20(&Local_111, &uLocal_1446, &uLocal_1445);
						func_21();
						func_22();
						func_23();
						__LIB_3__::func_400(Local_111.f_51, &Local_818, Local_111.f_51.f_3, 0, 0, -1, 0);
						ENTITY::SET_ENTITY_COORDS(Local_818[0 /*12*/].f_8, vLocal_1054, true, false, true, true);
						ENTITY::SET_ENTITY_VISIBLE(Local_818[0 /*12*/].f_8, false);
						ENTITY::FREEZE_ENTITY_POSITION(Local_818[0 /*12*/].f_8, true);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_818[0 /*12*/].f_8, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_818[2 /*12*/].f_8))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_818[2 /*12*/].f_8, false);
						}
						func_25(0);
						iLocal_1417 = 3;
					}
					else if (Local_111.f_160)
					{
						func_16();
					}
					break;
				case 3:
					func_26();
					if (func_27())
					{
						if (func_28())
						{
							if (func_29())
							{
								__LIB_3__::func_285(iLocal_946[1], &Local_111, 0);
								__LIB_3__::func_285(iLocal_946[0], &Local_111, 0);
								__LIB_3__::func_285(iLocal_946[7], &Local_111, 0);
								__LIB_0__::func_169(iLocal_946[0], 0, 1);
								func_32();
								func_33();
								__LIB_2__::func_133(iLocal_946[1], &(Local_305[1 /*32*/].f_23), 0);
								iLocal_1417 = 4;
							}
						}
					}
					else
					{
						if (!__LIB_0__::func_75(&uLocal_1015))
						{
							__LIB_1__::func_148(&uLocal_1015);
						}
						else if (__LIB_0__::func_265(&uLocal_1015) > 10f)
						{
							func_16();
						}
						else if (!Local_111.f_161)
						{
							if ((!ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_305[2 /*32*/].f_1, Local_111.f_51, true) || !ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_305[2 /*32*/].f_1, vLocal_1060, true)) || __LIB_0__::func_94(Global_35, Local_111.f_51, 1) < 20f)
							{
								func_16();
							}
						}
						if (__LIB_3__::func_365(&Local_111, &iLocal_946, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
						{
							func_16();
						}
					}
					break;
				case 4:
					if (!__LIB_3__::func_645(&Local_111, &iLocal_946, iLocal_109, 0, 1, 0, 1, 0))
					{
						func_16();
					}
					if (!Local_111.f_46)
					{
						if (func_41())
						{
							Local_111.f_46 = 1;
							func_42(0);
							EVENT::REMOVE_SHOCKING_EVENT(iLocal_1018);
							if (ENTITY::DOES_ENTITY_EXIST(Local_818[2 /*12*/].f_8))
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903))
								{
									ANIMSCENE::_0x6F1F0B17109309DA(Local_903, "LIST");
									ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903, "LIST", Local_818[2 /*12*/].f_8);
								}
								PHYSICS::ACTIVATE_PHYSICS(Local_818[2 /*12*/].f_8);
							}
							if (iLocal_109 == 1)
							{
								if (!__LIB_2__::func_1(iLocal_946[0], 0, 1) && Local_111.f_5.f_10 == iLocal_946[4])
								{
									__LIB_2__::func_478(iLocal_946[6], 0, "RE_PH_VAL_V1_WIFE_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
							}
							__LIB_3__::func_319(Local_903);
							func_46();
							iLocal_1420 = iLocal_1419;
							__LIB_2__::func_110(&(Local_111.f_5), 0);
							__LIB_2__::func_180(&(Local_111.f_5), 0);
							__LIB_3__::func_230(&(Local_111.f_5), 0);
							__LIB_3__::func_232(&(Local_111.f_5), 0);
							__LIB_3__::func_237(&(Local_111.f_5), &iLocal_1419);
							__LIB_0__::func_172(iLocal_1099);
							__LIB_0__::func_172(iLocal_1094);
							__LIB_0__::func_172(iLocal_1096[0]);
							__LIB_0__::func_172(iLocal_1096[1]);
							__LIB_0__::func_172(iLocal_1100);
							__LIB_3__::func_650(&iLocal_1092, &uLocal_981);
							iLocal_110 = 5;
						}
					}
					if (func_50())
					{
						Local_111.f_50 = 1;
						Local_111.f_44 = 1;
						func_16();
					}
					if (__LIB_3__::func_365(&Local_111, &iLocal_946, __LIB_0__::func_27(iLocal_1019, 2048), 0, 1, func_52(), 1, 1, 0, 0, 0, 0, 0))
					{
						func_16();
					}
					break;
			}
			BUILTIN::WAIT(Local_111.f_158);
		}
	}
}

void func_15()
{
	switch (__LIB_0__::func_12())
	{
		case 76:
			if (Local_111.f_161)
			{
				iLocal_109 = 1;
			}
			if (__LIB_3__::func_993(106, 1) != 7)
			{
				iLocal_109 = 1;
			}
			if (__LIB_11__::func_178(87, 2097152))
			{
				if (__LIB_3__::func_993(87, 0) == 3 && __LIB_3__::func_993(106, 3) != 7)
				{
					func_57();
					iLocal_109 = 3;
				}
			}
			if (__LIB_3__::func_993(84, 0) == 3 || __LIB_3__::func_993(84, 1) == 3)
			{
				if (__LIB_3__::func_993(106, 4) != 7)
				{
					if (__LIB_0__::func_181())
					{
						if (__LIB_3__::func_564(84, 6) == 2)
						{
							__LIB_1__::func_683(&iLocal_1296, 524288);
						}
					}
					else if (__LIB_3__::func_564(84, 6) == 1)
					{
						__LIB_1__::func_683(&iLocal_1296, 524288);
					}
					func_57();
					iLocal_109 = 4;
				}
			}
			break;
		case 105:
			if (Local_111.f_161)
			{
				iLocal_109 = 3;
			}
			if (__LIB_3__::func_993(87, 0) == 3 && __LIB_3__::func_993(106, 3) != 7)
			{
				func_57();
				iLocal_109 = 3;
			}
			if ((__LIB_4__::func_17(13) && __LIB_3__::func_993(106, 5) == 3) && __LIB_3__::func_993(106, 5) != 7)
			{
				if (__LIB_10__::func_705(106, 5))
				{
					func_57();
					iLocal_109 = 5;
				}
			}
			break;
		case 5:
			if (Local_111.f_161)
			{
				iLocal_109 = 7;
			}
			if (((__LIB_4__::func_17(12) && __LIB_3__::func_993(106, 6) == 3) && __LIB_3__::func_993(106, 6) != 7) && __LIB_10__::func_705(106, 6))
			{
				func_57();
				iLocal_109 = 6;
			}
			if ((__LIB_3__::func_993(30, 3) == 3 && __LIB_3__::func_993(106, 7) != 7) && __LIB_10__::func_705(106, 7))
			{
				func_57();
				iLocal_109 = 7;
			}
			break;
		case 38:
			if (Local_111.f_161)
			{
				iLocal_109 = 0;
			}
			if ((__LIB_4__::func_17(18) && __LIB_3__::func_993(106, 0) == 3) && __LIB_3__::func_993(106, 0) != 7)
			{
				func_57();
				iLocal_109 = 0;
			}
			if ((__LIB_4__::func_17(17) && __LIB_3__::func_993(106, 8) == 3) && __LIB_3__::func_993(106, 8) != 7)
			{
				func_57();
				iLocal_109 = 8;
			}
			break;
	}
}

void func_16()
{
	int iVar0;
	if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
	{
		PHYSICS::_0x751DF00EEFF122E3(iLocal_945);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_818[2 /*12*/].f_8))
	{
		__LIB_2__::func_919(Local_818[2 /*12*/].f_8, 1, 1);
	}
	if (ENTITY::_0x1FF441D7954F8709(uLocal_1423))
	{
		ENTITY::_0xD2B9C78537ED5759(uLocal_1423);
	}
	if (ENTITY::_0x1FF441D7954F8709(uLocal_1423))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_1426, true);
		ENTITY::_0xD2B9C78537ED5759(uLocal_1424);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_818[3 /*12*/].f_8))
	{
		OBJECT::DELETE_OBJECT(&(Local_818[3 /*12*/].f_8));
	}
	AUDIO::_0x531A78D6BF27014B("REPH_SOUNDS");
	func_42(0);
	if (__LIB_3__::func_993(Local_111.f_3, iLocal_109) != 7)
	{
		Local_111.f_45 = 0;
	}
	else if (iLocal_109 == 8 || iLocal_109 == 0)
	{
		if (__LIB_0__::func_27(iLocal_1019, 1))
		{
			__LIB_2__::func_115(113, 1, 0, 0, 12, 0, 0, 1);
		}
		else
		{
			__LIB_2__::func_115(113, 1, 0, 0, 0, 1, 0, 1);
		}
	}
	if (bLocal_1476)
	{
		__LIB_4__::func_269(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_946[1]) && iLocal_1120 != -1)
	{
		if (__LIB_4__::func_274(iLocal_946[1], 1))
		{
			__LIB_2__::func_753(iLocal_1120, 0, 1, 0, 0);
		}
	}
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (PED::_0xCC2B20596E29E4E3(iLocal_946[iVar0], 93))
		{
			PED::_0x78815FC52832B690(iLocal_946[iVar0], 1);
		}
		iVar0++;
	}
	if (iLocal_982 != 0)
	{
		PED::_0x13E7320C762F0477(iLocal_982);
	}
	if (PHYSICS::DOES_ROPE_EXIST(iLocal_945) && __LIB_0__::func_27(iLocal_1019, 1))
	{
		PED::DELETE_PED(&(iLocal_946[0]));
	}
	if (!Local_111.f_48)
	{
		if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
		{
			PHYSICS::DELETE_ROPE(&iLocal_945);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_818[1 /*12*/].f_8))
		{
			__LIB_2__::func_919(Local_818[1 /*12*/].f_8, 1, 1);
			OBJECT::DELETE_OBJECT(&(Local_818[1 /*12*/].f_8));
		}
		__LIB_2__::func_426(&(iLocal_946[0]));
	}
	if (__LIB_2__::func_1(iLocal_946[1], 0, 1))
	{
		func_69();
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_946[1]));
		iLocal_946[1] = 0;
	}
	if (__LIB_2__::func_1(iLocal_946[3], 0, 1))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_946[3]));
		iLocal_946[3] = 0;
	}
	if (__LIB_2__::func_1(iLocal_946[2], 0, 1))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_946[2]));
		iLocal_946[2] = 0;
	}
	__LIB_4__::func_152(&Local_111, &iLocal_946, &uLocal_963, iLocal_109, uLocal_1446, uLocal_1445, 0, 1, 0, 1);
	__LIB_3__::func_480(&Local_818);
	__LIB_3__::func_650(&iLocal_1092, &uLocal_981);
	func_72();
	if (__LIB_0__::func_27(iLocal_1019, 32768) && !__LIB_0__::func_27(iLocal_1019, 64))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
	__LIB_1__::func_748(&(Local_111.f_162), 1, 1);
	func_74(iLocal_1093, 0, 16);
	func_74(iLocal_1094, 0, 16);
	__LIB_0__::func_172(iLocal_1099);
	__LIB_0__::func_172(iLocal_1101);
	__LIB_0__::func_172(iLocal_1102);
	__LIB_0__::func_172(iLocal_1103);
	if (__LIB_0__::func_27(iLocal_1020, 524288))
	{
		LAW::_0x15ABD5004CAD2D99(-1);
	}
	if (STREAMING::_IS_IMAP_ACTIVE(-687151759))
	{
		STREAMING::_REMOVE_IMAP(-687151759);
	}
	func_25(1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1116))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(&cLocal_1116);
	}
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_1018);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_18()
{
	vector3 vVar0;
	switch (iLocal_1416)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_111))
			{
				iLocal_984 = __LIB_0__::func_12();
				func_77();
				func_78();
				func_79();
				func_80();
				func_81(8000);
				func_82();
				func_83();
				if (iLocal_984 == 105)
				{
					STREAMING::_REQUEST_IMAP(-687151759);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1116))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&cLocal_1116);
				}
				func_84();
				func_85();
				STREAMING::REQUEST_MODEL(iLocal_983, false);
				__LIB_3__::func_314(&Local_818);
				iLocal_1416 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_86(vLocal_1051))
			{
				func_83();
			}
			if (!__LIB_0__::func_0(&uLocal_1415, cLocal_1444))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_18))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_305))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_818))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_983))
			{
				return false;
			}
			if (!func_92())
			{
				return false;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1116))
			{
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cLocal_1116))
				{
					return false;
				}
			}
			if (!AUDIO::_0xD9130842D7226045("REPH_Sounds", 0))
			{
				return false;
			}
			if (!__LIB_0__::func_27(iLocal_1019, 16))
			{
				if (func_93())
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1425, 1);
					__LIB_1__::func_683(&iLocal_1019, 16);
					vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_1425, true, false) };
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1426, false);
				}
				else
				{
					return false;
				}
			}
			return true;
	}
	return false;
}

void func_20(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
		case 2:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 3:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
	}
}

void func_21()
{
	switch (__LIB_0__::func_12())
	{
		case 76:
			vLocal_1063[0 /*3*/] = { -246.1438f, 737.3981f, 115.4277f };
			vLocal_1063[1 /*3*/] = { -398.7397f, 665.9151f, 113.9332f };
			vLocal_1063[2 /*3*/] = { -296.851f, 787.2361f, 117.2366f };
			vLocal_1063[3 /*3*/] = { -327.1487f, 793.9059f, 116.8969f };
			vLocal_1063[4 /*3*/] = { -327.8563f, 784.8046f, 115.4862f };
			vLocal_1063[5 /*3*/] = { -315.8952f, 795.1304f, 116.6643f };
			break;
		case 105:
			vLocal_1063[0 /*3*/] = { 1375.769f, -1314.466f, 76.32277f };
			vLocal_1063[1 /*3*/] = { 1318.407f, -1296.664f, 75.25097f };
			vLocal_1063[2 /*3*/] = { 1411.61f, -1150.471f, 74.77523f };
			vLocal_1063[3 /*3*/] = { 1305.627f, -1144.795f, 80.3402f };
			break;
		case 5:
			vLocal_1063[0 /*3*/] = { 2722.911f, -1114.496f, 48.62066f };
			vLocal_1063[1 /*3*/] = { 2704.802f, -1150.268f, 49.52885f };
			vLocal_1063[2 /*3*/] = { 2655.789f, -1101.003f, 48.43829f };
			vLocal_1063[3 /*3*/] = { 2666.892f, -1154.844f, 50.07262f };
			break;
		case 38:
			vLocal_1063[0 /*3*/] = { -792.7476f, -1260.206f, 42.64177f };
			vLocal_1063[1 /*3*/] = { -779.3338f, -1214.716f, 42.52651f };
			vLocal_1063[2 /*3*/] = { -743.7635f, -1329.622f, 42.31908f };
			vLocal_1063[3 /*3*/] = { -749.9644f, -1226.849f, 42.28955f };
			break;
	}
}

void func_22()
{
	__LIB_3__::func_626(&(Local_305[0 /*32*/].f_22));
	__LIB_3__::func_626(&(Local_305[1 /*32*/].f_22));
	__LIB_3__::func_626(&(Local_305[2 /*32*/].f_22));
	__LIB_3__::func_626(&(Local_305[3 /*32*/].f_22));
	switch (__LIB_0__::func_12())
	{
		case 76:
			Local_305[0 /*32*/].f_6 = { -315.2755f, 733.6245f, 119.6267f };
			Local_305[0 /*32*/].f_9 = 97.3323f;
			Local_305[1 /*32*/].f_6 = { -316.742f, 735.309f, 119.587f };
			Local_305[1 /*32*/].f_9 = -74.959f;
			Local_305[2 /*32*/].f_6 = { -314.392f, 731.0801f, 119.6233f };
			Local_305[2 /*32*/].f_9 = 102.513f;
			Local_305[3 /*32*/].f_6 = { -311.3262f, 726.8218f, 119.6303f };
			Local_305[3 /*32*/].f_9 = 13.5013f;
			if (iLocal_109 == 1)
			{
				Local_305[4 /*32*/].f_6 = { -326.0518f, 730.278f, 117.2708f };
				Local_305[4 /*32*/].f_9 = 319.7657f;
				Local_305[5 /*32*/].f_6 = { -326.3795f, 730.9361f, 117.2685f };
				Local_305[5 /*32*/].f_9 = 283.096f;
				Local_305[6 /*32*/].f_6 = { -323.824f, 735.172f, 117.479f };
				Local_305[6 /*32*/].f_9 = 254.7158f;
				Local_305[7 /*32*/].f_6 = { -324.22f, 734.338f, 117.37f };
				Local_305[7 /*32*/].f_9 = 273.1146f;
				Local_305[8 /*32*/].f_6 = { -326.187f, 736.137f, 117.278f };
				Local_305[8 /*32*/].f_9 = 267.585f;
				Local_305[9 /*32*/].f_6 = { -322.886f, 730.317f, 117.257f };
				Local_305[9 /*32*/].f_9 = 310.6333f;
				Local_305[10 /*32*/].f_6 = { -322.091f, 731.231f, 117.281f };
				Local_305[10 /*32*/].f_9 = 310.6558f;
				Local_305[11 /*32*/].f_6 = { -326.547f, 728.225f, 117.192f };
				Local_305[11 /*32*/].f_9 = 275.6932f;
				Local_305[12 /*32*/].f_6 = { -325.246f, 726.145f, 117.126f };
				Local_305[12 /*32*/].f_9 = 309.952f;
				Local_305[13 /*32*/].f_6 = { -326.316f, 737.104f, 117.169f };
				Local_305[13 /*32*/].f_9 = 288.0259f;
				Local_305[14 /*32*/].f_6 = { -328.244f, 733.929f, 117.237f };
				Local_305[14 /*32*/].f_9 = 262.5461f;
				Local_305[15 /*32*/].f_6 = { -327.226f, 732.895f, 117.247f };
				Local_305[15 /*32*/].f_9 = 278.8557f;
			}
			else if (iLocal_109 == 3 || iLocal_109 == 4)
			{
				Local_305[4 /*32*/].f_6 = { -322.574f, 728.984f, 117.46f };
				Local_305[4 /*32*/].f_9 = 319.7657f;
				Local_305[5 /*32*/].f_6 = { -322.763f, 729.894f, 117.479f };
				Local_305[5 /*32*/].f_9 = 283.096f;
				Local_305[6 /*32*/].f_6 = { -323.761f, 734.452f, 117.46f };
				Local_305[6 /*32*/].f_9 = 254.7158f;
				Local_305[7 /*32*/].f_6 = { -324.157f, 733.618f, 117.335f };
				Local_305[7 /*32*/].f_9 = 273.1146f;
				Local_305[8 /*32*/].f_6 = { -325.674f, 734.058f, 117.288f };
				Local_305[8 /*32*/].f_9 = 287.585f;
				Local_305[9 /*32*/].f_6 = { -325.077f, 728.763f, 117.247f };
				Local_305[9 /*32*/].f_9 = 310.6333f;
				Local_305[10 /*32*/].f_6 = { -325.282f, 729.677f, 117.26f };
				Local_305[10 /*32*/].f_9 = 310.6558f;
				Local_305[11 /*32*/].f_6 = { -328.009f, 730.349f, 117.13f };
				Local_305[11 /*32*/].f_9 = 275.6932f;
				Local_305[12 /*32*/].f_6 = { -327.708f, 728.269f, 117.027f };
				Local_305[12 /*32*/].f_9 = 309.952f;
				Local_305[13 /*32*/].f_6 = { -327.778f, 729.227f, 117.091f };
				Local_305[13 /*32*/].f_9 = 288.0259f;
				Local_305[14 /*32*/].f_6 = { -326.922f, 733.182f, 117.261f };
				Local_305[14 /*32*/].f_9 = 262.5461f;
				Local_305[15 /*32*/].f_6 = { -325.904f, 732.148f, 117.272f };
				Local_305[15 /*32*/].f_9 = 278.8557f;
			}
			break;
		case 105:
			Local_305[0 /*32*/].f_6 = { 1374.777f, -1215.151f, 83.24785f };
			Local_305[0 /*32*/].f_9 = 91f;
			Local_305[1 /*32*/].f_6 = { 1372.869f, -1213.106f, 83.27f };
			Local_305[1 /*32*/].f_9 = -80.5593f;
			Local_305[2 /*32*/].f_6 = { 1373.672f, -1217.438f, 83.2467f };
			Local_305[2 /*32*/].f_9 = 0.3456f;
			Local_305[3 /*32*/].f_6 = { 1372.142f, -1216.922f, 83.23697f };
			Local_305[3 /*32*/].f_9 = 86.7845f;
			Local_305[4 /*32*/].f_6 = { 1364.32f, -1216.12f, 83.6242f };
			Local_305[4 /*32*/].f_9 = 253.606f;
			Local_305[5 /*32*/].f_6 = { 1364.37f, -1217.08f, 83.6078f };
			Local_305[5 /*32*/].f_9 = 280.1082f;
			Local_305[6 /*32*/].f_6 = { 1366.43f, -1217.19f, 83.7504f };
			Local_305[6 /*32*/].f_9 = 259.3929f;
			Local_305[7 /*32*/].f_6 = { 1366.98f, -1216.25f, 83.7338f };
			Local_305[7 /*32*/].f_9 = 237.8315f;
			Local_305[8 /*32*/].f_6 = { 1368.87f, -1211.26f, 83.3578f };
			Local_305[8 /*32*/].f_9 = 218.6253f;
			Local_305[9 /*32*/].f_6 = { 1368.57f, -1212.43f, 83.4111f };
			Local_305[9 /*32*/].f_9 = 206.3422f;
			Local_305[10 /*32*/].f_6 = { 1368.38f, -1213.16f, 83.4406f };
			Local_305[10 /*32*/].f_9 = 274.9343f;
			break;
		case 5:
			Local_305[0 /*32*/].f_6 = { 2689.182f, -1113.964f, 51.85639f };
			Local_305[0 /*32*/].f_9 = 180f;
			Local_305[1 /*32*/].f_6 = { 2686.217f, -1114.775f, 51.83819f };
			Local_305[1 /*32*/].f_9 = 10f;
			Local_305[2 /*32*/].f_6 = { 2690.83f, -1112.662f, 51.86667f };
			Local_305[2 /*32*/].f_9 = 180f;
			Local_305[3 /*32*/].f_6 = { 2692.438f, -1112.092f, 51.86667f };
			Local_305[3 /*32*/].f_9 = 180f;
			if (iLocal_109 == 6)
			{
				Local_305[4 /*32*/].f_6 = { 2685.39f, -1119.85f, 50.6781f };
				Local_305[4 /*32*/].f_9 = 327.063f;
				Local_305[5 /*32*/].f_6 = { 2686.2f, -1120.16f, 50.6789f };
				Local_305[5 /*32*/].f_9 = 20.66444f;
				Local_305[8 /*32*/].f_6 = { 2689.08f, -1122.67f, 50.6953f };
				Local_305[8 /*32*/].f_9 = 290.6095f;
				Local_305[9 /*32*/].f_6 = { 2690.19f, -1122.2f, 50.6845f };
				Local_305[9 /*32*/].f_9 = 333.2772f;
				Local_305[10 /*32*/].f_6 = { 2690.89f, -1121.91f, 50.6755f };
				Local_305[10 /*32*/].f_9 = 41.86931f;
				Local_305[11 /*32*/].f_6 = { 2686.4f, -1122.98f, 50.7074f };
				Local_305[11 /*32*/].f_9 = 343.3552f;
				Local_305[12 /*32*/].f_6 = { 2672.54f, -1149.74f, 49.7751f };
				Local_305[12 /*32*/].f_9 = 356.2835f;
				Local_305[13 /*32*/].f_6 = { 2687.04f, -1123.36f, 50.7171f };
				Local_305[13 /*32*/].f_9 = 2.224846f;
				Local_305[14 /*32*/].f_6 = { 2685.63f, -1122.69f, 50.6958f };
				Local_305[14 /*32*/].f_9 = 339.1096f;
				Local_305[15 /*32*/].f_6 = { 2691.799f, -1119.679f, 49.67808f };
				Local_305[15 /*32*/].f_9 = 4.9479f;
			}
			else if (iLocal_109 == 7)
			{
				Local_305[4 /*32*/].f_6 = { 2685.39f, -1119.85f, 50.6781f };
				Local_305[4 /*32*/].f_9 = 327.063f;
				Local_305[5 /*32*/].f_6 = { 2686.19f, -1120.15f, 50.6789f };
				Local_305[5 /*32*/].f_9 = 15.11797f;
				Local_305[6 /*32*/].f_6 = { 2689.59f, -1118.63f, 50.6845f };
				Local_305[6 /*32*/].f_9 = 31.44691f;
				Local_305[7 /*32*/].f_6 = { 2688.78f, -1118.51f, 50.6853f };
				Local_305[7 /*32*/].f_9 = 358.8627f;
				Local_305[8 /*32*/].f_6 = { 2689.08f, -1122.67f, 50.6953f };
				Local_305[8 /*32*/].f_9 = 287.6396f;
				Local_305[9 /*32*/].f_6 = { 2690.19f, -1122.2f, 50.6845f };
				Local_305[9 /*32*/].f_9 = 333.2772f;
				Local_305[10 /*32*/].f_6 = { 2690.89f, -1121.91f, 50.6755f };
				Local_305[10 /*32*/].f_9 = 41.86931f;
				Local_305[11 /*32*/].f_6 = { 2686.4f, -1122.98f, 50.7074f };
				Local_305[11 /*32*/].f_9 = 343.3552f;
				Local_305[13 /*32*/].f_6 = { 2687.04f, -1123.36f, 50.7171f };
				Local_305[13 /*32*/].f_9 = 2.224846f;
				Local_305[14 /*32*/].f_6 = { 2685.63f, -1122.69f, 50.6958f };
				Local_305[14 /*32*/].f_9 = 339.1096f;
			}
			break;
		case 38:
			Local_305[0 /*32*/].f_6 = { -764.2183f, -1259.881f, 46.39884f };
			Local_305[0 /*32*/].f_9 = 0f;
			Local_305[1 /*32*/].f_6 = { -762.5f, -1259f, 46.44f };
			Local_305[1 /*32*/].f_9 = 167.5f;
			Local_305[2 /*32*/].f_6 = { -767.0446f, -1260.933f, 46.442f };
			Local_305[2 /*32*/].f_9 = 7.2982f;
			Local_305[3 /*32*/].f_6 = { -759.5256f, -1259.957f, 46.43755f };
			Local_305[3 /*32*/].f_9 = 2.7305f;
			Local_305[4 /*32*/].f_6 = { -758.162f, -1251.22f, 43.4261f };
			Local_305[4 /*32*/].f_9 = 125.292f;
			Local_305[5 /*32*/].f_6 = { -758.796f, -1250.63f, 43.4431f };
			Local_305[5 /*32*/].f_9 = 178.0354f;
			Local_305[6 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_305[6 /*32*/].f_9 = 70f;
			Local_305[7 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_305[7 /*32*/].f_9 = 72.3f;
			Local_305[8 /*32*/].f_6 = { -761.321f, -1248.81f, 43.4796f };
			Local_305[8 /*32*/].f_9 = 145.104f;
			Local_305[9 /*32*/].f_6 = { -762.527f, -1248.86f, 43.4829f };
			Local_305[9 /*32*/].f_9 = 132.821f;
			Local_305[10 /*32*/].f_6 = { -763.282f, -1248.88f, 43.4712f };
			Local_305[10 /*32*/].f_9 = 201.43f;
			Local_305[11 /*32*/].f_6 = { -754.268f, -1249.2f, 43.4834f };
			Local_305[11 /*32*/].f_9 = 132.85f;
			Local_305[13 /*32*/].f_6 = { -754.63f, -1248.55f, 43.5213f };
			Local_305[13 /*32*/].f_9 = 151.72f;
			Local_305[14 /*32*/].f_6 = { -753.753f, -1249.84f, 43.444f };
			Local_305[14 /*32*/].f_9 = 128.6f;
			break;
	}
}

void func_23()
{
	int iVar0;
	iVar0 = __LIB_0__::func_12();
	switch (iVar0)
	{
		case 76:
			iLocal_1088[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-314.9988f, 730.95f, 120.9345f, 0f, 0f, 10.01027f, 3.492473f, 12.3367f, 5.852195f, "volGallows_0");
			iLocal_1088[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-311.7058f, 727.1721f, 120.9345f, 0f, 0f, 10.01027f, 1.952122f, 3.419903f, 5.852195f, "volGallows_1");
			iLocal_1088[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-312.1932f, 729.9329f, 120.9345f, 0f, 0f, 10.01027f, 1.952122f, 2.144702f, 5.852195f, "volGallows_2");
			iLocal_1094 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-315.1509f, 730.9465f, 116.5724f, 0f, 0f, 9.358871f, 3.872445f, 12.2541f, 5.082661f, "m_volUnderGallows");
			POPULATION::_0xB56D41A694E42E86(iLocal_1094, 0, 0, 0, -1, -1, 0);
			iLocal_1093 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-315.1828f, 733.669f, 120.0525f, 0f, 0f, 9.724305f, 1.096262f, 3.183935f, 2.053951f, "m_volGallowsDoor");
			iLocal_1096[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-315.6089f, 730.8422f, 122.4587f, 0f, 0f, 10.01027f, 4.911602f, 12.3367f, 5.852195f, "m_volInstantAggro_0");
			POPULATION::_0xB56D41A694E42E86(iLocal_1096[0], 0, 0, 0, -1, -1, 0);
			iLocal_1099 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-318.447f, 738.67f, 119.023f, 0f, 0f, 9.724f, 5.72f, 5.096f, 5.672f, "m_volCrowdLeaveAvoid");
			POPULATION::_0xB56D41A694E42E86(iLocal_1099, 0, 0, 0, -1, -1, 0);
			iLocal_1101 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-324.482f, 731.722f, 116.33f, 0f, 0f, 0f, 7.03f, 10f, 10f, "m_volSuppressLowCrimes");
			iLocal_1102 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-315.013f, 730.563f, 120.451f, 0f, 0f, 9.724f, 2.5f, 1.75f, 1.75f, "m_volGallowsLever");
			__LIB_3__::func_557(&iLocal_1103, -314.236f, 731.085f, 120.935f, 0f, 0f, 10.01f, 5.104f, 12.337f, 5.852f, "m_volGallowsScenarios");
			PED::_0x4C39C95AE5DB1329(iLocal_1103, 0, 15);
			break;
		case 105:
			iLocal_1088[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1374.03f, -1215.265f, 83.41333f, 0f, 0f, -4.741005f, 4.542981f, 5.232084f, 3.394588f, "volGallows_0");
			iLocal_1088[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1372.817f, -1216.848f, 83.41333f, 0f, 0f, -4.741005f, 4.542981f, 1.490506f, 3.394588f, "volGallows_1");
			iLocal_1094 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1373.982f, -1215.159f, 82.05772f, 0f, 0f, -4.500815f, 4.515121f, 5.183119f, 1.977623f, "m_volUnderGallows");
			POPULATION::_0xB56D41A694E42E86(iLocal_1094, 0, 0, 0, -1, -1, 0);
			iLocal_1093 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1374.948f, -1215.235f, 84.12434f, 0f, 0f, -4.500815f, 1.072868f, 3.429681f, 1.977623f, "m_volGallowsDoor");
			iLocal_1096[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1374.041f, -1213.258f, 84.845f, 0f, 0f, -4.75f, 4.173f, 1.419f, 3.395f, "m_volInstantAggro_0");
			POPULATION::_0xB56D41A694E42E86(iLocal_1096[0], 0, 0, 0, -1, -1, 0);
			iLocal_1096[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1374.769f, -1215.266f, 84.845f, 0f, 0f, -4.75f, 2.828f, 5.388f, 3.395f, "m_volInstantAggro_1");
			POPULATION::_0xB56D41A694E42E86(iLocal_1096[1], 0, 0, 0, -1, -1, 0);
			iLocal_1101 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1366.561f, -1214.614f, 82.744f, 0f, 0f, 0f, 4.935f, 7.247f, 10f, "m_volSuppressLowCrimes");
			iLocal_1102 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1373.779f, -1216.084f, 84.136f, 0f, 0f, -4.501f, 2f, 2f, 2f, "m_volGallowsLever");
			break;
		case 5:
			iLocal_1088[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2688.578f, -1113.029f, 53.17216f, 0f, 0f, 0.105545f, 6.384113f, 4.858785f, 3.215056f, "volGallows_0");
			iLocal_1088[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2693.601f, -1111.802f, 51.86667f, 0f, 0f, -0.28834f, 4.542981f, 1.490506f, 3.394588f, "volGallows_1");
			iLocal_1088[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2692.396f, -1113.742f, 52.6933f, 30.27421f, 0f, -0.28834f, 1.68353f, 4.396268f, 3.201546f, "volGallows_2");
			iLocal_1094 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2688.352f, -1113.003f, 50.029f, 0f, 0f, 88.49092f, 4.515121f, 5.183119f, 2.456721f, "m_volUnderGallows");
			POPULATION::_0xB56D41A694E42E86(iLocal_1094, 0, 0, 0, -1, -1, 0);
			iLocal_1093 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2688.455f, -1113.981f, 52.029f, 0f, 0f, 89.67352f, 1.010195f, 3.503941f, 1.977623f, "m_volGallowsDoor");
			iLocal_1096[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2688.423f, -1113.541f, 53.34824f, 0f, 0f, 0.105545f, 6.148695f, 3.854978f, 3.215056f, "m_volInstantAggro_0");
			POPULATION::_0xB56D41A694E42E86(iLocal_1096[0], 0, 0, 0, -1, -1, 0);
			iLocal_1101 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2688.809f, -1120.589f, 49.678f, 0f, 0f, 0f, 10f, 6.536f, 10f, "m_volSuppressLowCrimes");
			iLocal_1102 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2690.478f, -1113.403f, 52.574f, 0f, 0f, 89.674f, 2.5f, 1.75f, 1.75f, "m_volGallowsLever");
			break;
		case 38:
			iLocal_1088[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-763.6794f, -1260.927f, 47.38294f, 0f, 0f, 0.105545f, 9.793867f, 5.776073f, 5.577005f, "volGallows_0");
			iLocal_1094 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-764.625f, -1261.017f, 44.395f, 0f, 0f, 90f, 5.643f, 7.931f, 5.083f, "m_volUnderGallows");
			POPULATION::_0xB56D41A694E42E86(iLocal_1094, 0, 0, 0, -1, -1, 0);
			iLocal_1093 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-764.699f, -1259.857f, 46.358f, 0f, 0f, 90f, 1.032f, 3.036f, 2.054f, "m_volGallowsDoor");
			iLocal_1096[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-764.6163f, -1260.929f, 49.15394f, 0f, 0f, 0.105545f, 7.838906f, 5.553155f, 5.577005f, "m_volInstantAggro_0");
			POPULATION::_0xB56D41A694E42E86(iLocal_1096[0], 0, 0, 0, -1, -1, 0);
			iLocal_1101 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-763.807f, -1251.237f, 42.46f, 0f, 0f, 0f, 13.632f, 7.392f, 10f, "m_volSuppressLowCrimes");
			iLocal_1102 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-767.09f, -1260.82f, 47.129f, 0f, 0f, 90f, 1.75f, 2.5f, 1.75f, "m_volGallowsLever");
			break;
	}
	func_74(iLocal_1094, 1, 16);
	__LIB_1__::func_683(&iLocal_1019, 1024);
	func_74(iLocal_1093, 1, 23);
	__LIB_1__::func_683(&iLocal_1019, 2097152);
	func_101();
	MISC::CLEAR_AREA(Local_305[0 /*32*/].f_6, 7.5f, 512);
}

void func_25(bool bParam0)
{
	if (__LIB_0__::func_12() != 38)
	{
		return;
	}
	if (bParam0)
	{
		__LIB_2__::func_161(-764.3207f, -1252.488f, 42.41662f, 10f, 5);
	}
	else
	{
		__LIB_2__::func_165(-764.3207f, -1252.488f, 42.41662f, 10f, 0, 0, 4);
	}
}

void func_26()
{
	if (!STREAMING::HAS_COLLISION_FOR_MODEL_LOADED(iLocal_983))
	{
		STREAMING::REQUEST_COLLISION_FOR_MODEL(iLocal_983);
	}
	if (!STREAMING::HAS_COLLISION_FOR_MODEL_LOADED(Local_818[3 /*12*/].f_7))
	{
		STREAMING::REQUEST_COLLISION_FOR_MODEL(Local_818[3 /*12*/].f_7);
	}
}

bool func_27()
{
	if (iLocal_1120 == -1 || __LIB_0__::func_27(iLocal_1296, -2147483648))
	{
		return true;
	}
	if (!__LIB_2__::func_763(iLocal_1120, 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_946[1]))
		{
			iLocal_946[1] = __LIB_2__::func_965(iLocal_1120, 1, 0, 0, 1, 1);
			if (!__LIB_2__::func_1(iLocal_946[1], 0, 1))
			{
				if (__LIB_3__::func_397(iLocal_1120, 1))
				{
					iLocal_946[1] = __LIB_2__::func_965(iLocal_1120, 1, 0, 0, 1, 1);
				}
				else if (__LIB_4__::func_275(iLocal_1120, 1, Local_305[1 /*32*/].f_6, Local_305[1 /*32*/].f_6.f_1, Local_305[1 /*32*/].f_6.f_2, 0))
				{
					iLocal_946[1] = __LIB_2__::func_965(iLocal_1120, 1, 0, 0, 1, 1);
				}
			}
		}
	}
	if (__LIB_2__::func_1(iLocal_946[1], 0, 1))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_946[1]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_946[1], true);
			__LIB_2__::func_133(iLocal_946[1], &(Local_305[1 /*32*/].f_23), 0);
			ENTITY::SET_ENTITY_COORDS(iLocal_946[1], Local_305[0 /*32*/].f_6, true, false, true, true);
			__LIB_1__::func_683(&iLocal_1296, -2147483648);
			return true;
		}
	}
	return false;
}

bool func_28()
{
	switch (iLocal_1418)
	{
		case 0:
			iLocal_1418 = 1;
			break;
		case 1:
			if (!__LIB_3__::func_479(Local_111.f_51, Local_111.f_51.f_3, &Local_305, &iLocal_946, 1, 0, -1, 1))
			{
				return false;
			}
			if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_946[0]))
			{
				return false;
			}
			func_111();
			iLocal_1418 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_29()
{
	switch (iLocal_1433)
	{
		case 0:
			func_112();
			iLocal_1433++;
			break;
		case 1:
			func_113();
			iLocal_1433++;
			break;
		case 2:
			func_114();
			iLocal_1433++;
			break;
		case 3:
			func_115();
			iLocal_1433++;
			break;
		case 4:
			func_116();
			iLocal_1433++;
			break;
		case 5:
			func_117();
			iLocal_1433++;
			break;
		case 6:
			func_118();
			iLocal_1433++;
			break;
		case 7:
			func_119(iLocal_946[2], &cLocal_1112);
			iLocal_1433++;
			return true;
		case 8:
			return true;
	}
	return false;
}

void func_32()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		__LIB_2__::func_487(iLocal_946[iVar0], iLocal_1094);
		if (iVar0 > 3)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1096[0]))
			{
				__LIB_2__::func_487(iLocal_946[iVar0], iLocal_1096[0]);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1096[1]))
			{
				__LIB_2__::func_487(iLocal_946[iVar0], iLocal_1096[1]);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1099))
			{
				__LIB_2__::func_487(iLocal_946[iVar0], iLocal_1099);
			}
		}
		iVar0++;
	}
}

void func_33()
{
	if (iLocal_109 == 1)
	{
		iLocal_1100 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), func_122(), 0f, 0f, 0f, 1f, 1f, 2f);
	}
}

bool func_41()
{
	int iVar0;
	int iVar1;
	float fVar2;
	if (func_139())
	{
		return true;
	}
	if (iLocal_110 >= 2)
	{
		iVar1 = 2;
		if (__LIB_0__::func_75(&uLocal_994))
		{
			if (__LIB_0__::func_265(&uLocal_994) > 2.5f)
			{
				__LIB_1__::func_683(&iLocal_1020, 32768);
				__LIB_1__::func_683(&iLocal_1020, 8192);
				return true;
			}
		}
		if (!__LIB_0__::func_27(iLocal_1019, 1))
		{
			if (__LIB_1__::func_205(Global_35, iLocal_1096[0], 1, 0) || __LIB_1__::func_205(Global_35, iLocal_1096[1], 1, 0))
			{
				__LIB_1__::func_683(&iLocal_1020, 32768);
				return true;
			}
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	else
	{
		iVar0 = 0;
		iVar1 = 1;
	}
	if (func_141(&Local_111, &Local_305, &iLocal_946, 0, &iLocal_1419, iVar0, 15, iVar1))
	{
		if (iLocal_1419 == 65536)
		{
			if (Local_111.f_5.f_10 != 0)
			{
				iLocal_980 = Local_111.f_5.f_10;
				__LIB_3__::func_237(&(Local_111.f_5), &iLocal_1419);
				__LIB_3__::func_541(&(Local_111.f_5), &iLocal_1419);
				vLocal_1447 = { ENTITY::GET_ENTITY_COORDS(Local_111.f_5.f_10, true, false) };
				return false;
			}
		}
		if (iLocal_1419 == 2048)
		{
			__LIB_1__::func_683(&iLocal_1020, 32768);
		}
		if (__LIB_0__::func_27(iLocal_1020, 32768))
		{
			if (((Local_111.f_5.f_10 != iLocal_946[1] && Local_111.f_5.f_10 != iLocal_946[2]) && Local_111.f_5.f_10 != iLocal_946[3]) && Local_111.f_5.f_10 != iLocal_946[0])
			{
				if (!__LIB_0__::func_27(iLocal_1020, 16384))
				{
					__LIB_1__::func_683(&iLocal_1020, 16384);
					__LIB_1__::func_683(&iLocal_1020, 262144);
					EVENT::_0x7C511E91738A0828(Local_111.f_5.f_10, Global_35, 5, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_111.f_5.f_10));
					__LIB_3__::func_237(&(Local_111.f_5), &iLocal_1419);
					__LIB_3__::func_541(&(Local_111.f_5), &iLocal_1419);
					__LIB_1__::func_681(&iLocal_1020, 32768);
					__LIB_1__::func_148(&uLocal_1009);
					__LIB_0__::func_172(iLocal_1092);
					return false;
				}
				else if (__LIB_0__::func_27(iLocal_1020, 262144))
				{
					fVar2 = __LIB_0__::func_265(&uLocal_1009);
					if (fVar2 > 3f)
					{
						__LIB_1__::func_681(&iLocal_1020, 262144);
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_5.f_10))
						{
							EVENT::_0x7C511E91738A0828(Local_111.f_5.f_10, Global_35, 5, 0);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_111.f_5.f_10));
							vLocal_1447 = { ENTITY::GET_ENTITY_COORDS(Local_111.f_5.f_10, true, false) };
							if (!__LIB_0__::func_27(iLocal_1020, 4194304))
							{
								__LIB_2__::func_478(iLocal_946[2], Global_35, "STOP_THAT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
								__LIB_1__::func_683(&iLocal_1020, 4194304);
							}
						}
						__LIB_3__::func_237(&(Local_111.f_5), &iLocal_1419);
						__LIB_3__::func_541(&(Local_111.f_5), &iLocal_1419);
						__LIB_1__::func_681(&iLocal_1020, 32768);
						return false;
					}
				}
			}
		}
		vLocal_1447 = { ENTITY::GET_ENTITY_COORDS(Local_111.f_5.f_10, true, false) };
		vLocal_1447 = { vLocal_1447 };
		return true;
	}
	if (iLocal_110 >= 2)
	{
		if (!bLocal_1421)
		{
			if (Local_111.f_98[0] < 2f)
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, iLocal_946[0]))
				{
					if (!__LIB_2__::func_1(iLocal_946[0], 0, 1))
					{
						if (iLocal_1435 == 0)
						{
							iLocal_1435 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_1435) > 5000)
						{
							__LIB_1__::func_683(&iLocal_1020, 32768);
							__LIB_1__::func_683(&iLocal_1020, 4096);
							bLocal_1421 = true;
						}
					}
					else
					{
						bLocal_1421 = true;
					}
				}
			}
		}
	}
	return false;
}

void func_42(bool bParam0)
{
	if (bParam0)
	{
		if (!__LIB_0__::func_27(iLocal_1019, -2147483648))
		{
			if (iLocal_984 != 105)
			{
				if (func_144())
				{
					AUDIO::PLAY_STREAM_FROM_POSITION(vLocal_1060, uLocal_1437);
					__LIB_1__::func_683(&iLocal_1019, -2147483648);
				}
			}
		}
	}
	else if (__LIB_0__::func_27(iLocal_1019, -2147483648))
	{
		AUDIO::STOP_STREAM(uLocal_1437);
		__LIB_1__::func_681(&iLocal_1019, -2147483648);
	}
}

void func_46()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_818[4 /*12*/].f_8))
	{
		__LIB_2__::func_919(Local_818[4 /*12*/].f_8, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_818[5 /*12*/].f_8))
	{
		__LIB_2__::func_919(Local_818[5 /*12*/].f_8, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_818[6 /*12*/].f_8))
	{
		__LIB_2__::func_919(Local_818[6 /*12*/].f_8, 1, 1);
	}
}

bool func_50()
{
	if (iLocal_110 >= 2)
	{
		func_149();
		func_150(1103626240 /* Float: 25f */);
		func_151();
		func_152();
		func_153();
		func_154();
		func_155();
		func_156();
	}
	func_157(&(iLocal_14[0]), 1);
	func_158(&(iLocal_14[1]), 2);
	func_159(&(iLocal_14[2]), 3);
	func_160();
	switch (iLocal_110)
	{
		case 0:
			if (func_161())
			{
				if (func_162())
				{
					if (func_163())
					{
						func_164();
						__LIB_3__::func_594(&iLocal_1092, &uLocal_981, vLocal_1060, 0f, 0f, 0f, 10f, 10f, 10f, 0, 0, 1, 0, "m_volCrowd");
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_818[3 /*12*/].f_8, vLocal_1057, fLocal_1032, true, false, true);
						ENTITY::PLAY_ENTITY_ANIM(iLocal_1426, "static_lever", Local_76[1 /*2*/], 8f, true, false, false, 0f, 0);
						vLocal_1082 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, 0.88744f, 0.030309f, 1f) };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_4))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_903);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_5))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_903.f_1);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_6))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_903.f_2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_4))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_911);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_5))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_911.f_1);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_6))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_911.f_2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_7))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_911.f_3);
						}
						iLocal_110 = 1;
					}
				}
			}
			break;
		case 1:
			func_42(1);
			if (func_161())
			{
				if (__LIB_0__::func_94(Global_35, Local_111.f_51, 1) < __LIB_3__::func_249(&Local_111, 0))
				{
					if (!__LIB_3__::func_291(Global_35, 1))
					{
						if (__LIB_3__::func_452(&Local_111, 1077936128 /* Float: 3f */, 40f, 35f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
						{
							func_169();
							iLocal_1018 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), iLocal_946[0], 0f, 30f, 40f, -1f, 10f, 180f, false, false, -1, -1);
							__LIB_2__::func_133(iLocal_946[1], &(Local_305[1 /*32*/].f_23), 0);
							func_170();
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_903, &cLocal_1104, true);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_5))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_903.f_1, &cLocal_1108, true);
							}
							if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_6))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_903.f_2, &cLocal_1108, true);
							}
							if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_4))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_911, &cLocal_1108, true);
							}
							if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_5))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_911.f_1, &cLocal_1108, true);
							}
							if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_6))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_911.f_2, &cLocal_1108, true);
							}
							if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_7))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_911.f_3, &cLocal_1108, true);
							}
							__LIB_0__::func_325(&(Local_111.f_181));
							__LIB_3__::func_666(Local_111.f_3, iLocal_109, 7, 0, 0);
							__LIB_2__::func_104(&(Local_111.f_5), 1);
							iLocal_110 = 2;
						}
					}
				}
			}
			break;
		case 2:
			__LIB_0__::func_325(&iLocal_1427);
			func_173();
			func_174();
			if (iLocal_109 == 1)
			{
				func_175(0);
			}
			else if (iLocal_109 == 7)
			{
				func_176();
			}
			if (__LIB_0__::func_27(iLocal_1019, 64))
			{
				func_177();
			}
			else
			{
				func_178();
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_903, false) || (ANIMSCENE::_0x1F0E401031E20146(Local_903, &cLocal_1104) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_903) > 0.995f))
			{
				__LIB_1__::func_683(&iLocal_1019, 524288);
				func_175(1);
				__LIB_3__::func_319(Local_903);
				EVENT::REMOVE_SHOCKING_EVENT(iLocal_1018);
				iLocal_110 = 3;
			}
			break;
		case 3:
			if (iLocal_109 == 1)
			{
				func_175(0);
			}
			else if (iLocal_109 == 7)
			{
				func_176();
			}
			if (func_177())
			{
				iLocal_110 = 7;
			}
			break;
		case 5:
			func_72();
			func_179();
			func_180();
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1426, Local_76[1 /*2*/], "push_lever_deputy_lever", 1) && ENTITY::_0xDF8E49EA89A01DB1(iLocal_1426, Local_76[1 /*2*/], "push_lever_deputy_lever") < 0.99f)
			{
				ENTITY::STOP_ENTITY_ANIM(iLocal_1426, "push_lever_deputy_lever", Local_76[1 /*2*/], 0.0625f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_818[2 /*12*/].f_8))
			{
				__LIB_2__::func_919(Local_818[2 /*12*/].f_8, 1, 1);
				PHYSICS::ACTIVATE_PHYSICS(Local_818[2 /*12*/].f_8);
			}
			iLocal_14[0] = 10;
			iLocal_14[1] = 10;
			iLocal_14[2] = 10;
			if (__LIB_0__::func_27(iLocal_1020, 32768))
			{
				if (__LIB_0__::func_27(iLocal_1020, 8192))
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN_LAW"), 0, 0, 0, 0, 0, 0, 0);
				}
				else if (__LIB_0__::func_27(iLocal_1020, 4096))
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_ASSAULT_CORPSE"), 0, 0, 0, 0, 0, 0, 0);
				}
				else
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_ASSAULT"), 0, 0, 0, 0, 0, 0, 0);
				}
			}
			func_181();
			iLocal_110 = 7;
			break;
		case 6:
			func_180();
			func_179();
			if (__LIB_2__::func_1(iLocal_946[0], 0, 1))
			{
				if (func_182(iLocal_945))
				{
					iLocal_110 = 7;
				}
			}
			else
			{
				iLocal_110 = 7;
			}
			break;
		case 7:
			func_180();
			func_179();
			if (iLocal_109 == 1)
			{
				func_175(0);
			}
			else if (iLocal_109 == 7)
			{
				func_176();
			}
			if (__LIB_0__::func_94(Global_35, Local_111.f_51, 1) > 35f)
			{
				if (!Local_111.f_46)
				{
					if (func_183())
					{
						return true;
					}
				}
				if (func_182(iLocal_945) && Local_111.f_98[0] > 100f)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_52()
{
	if (Local_111.f_48)
	{
		if (!Local_111.f_46)
		{
			if (__LIB_0__::func_27(iLocal_1019, 524288))
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else if (__LIB_0__::func_27(iLocal_1019, 2048) || !__LIB_2__::func_1(iLocal_946[0], 0, 1))
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_57()
{
	__LIB_1__::func_683(&iLocal_1296, 4096);
	if (__LIB_0__::func_181())
	{
	}
}

void func_69()
{
	if (!Local_111.f_48)
	{
		if (iLocal_984 == 76)
		{
			if (__LIB_0__::func_94(iLocal_946[1], Local_305[1 /*32*/].f_6, 1) < 3f)
			{
				if ((ENTITY::IS_ENTITY_OCCLUDED(iLocal_946[1]) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_305[2 /*32*/].f_1, Local_305[1 /*32*/].f_6, true)) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_305[2 /*32*/].f_1, -314.4524f, 735.2739f, 119.6174f, true))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_946[1], -314.4524f, 735.2739f, 119.6174f, true, false, true, true);
				}
			}
		}
	}
}

void func_72()
{
	__LIB_0__::func_172(iLocal_1095);
}

void func_74(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		PATHFIND::_0x19C7567D2F2287D6(iParam0, iParam2);
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iParam0);
	}
}

void func_77()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		fLocal_1033[iVar0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 0.75f);
		iVar0++;
	}
	switch (__LIB_0__::func_12())
	{
		case 76:
			__LIB_3__::func_303(&(Local_305[0 /*32*/].f_22));
			if (iLocal_109 == 1)
			{
				iLocal_1120 = 3;
				Local_305[0 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[0 /*32*/] = 22;
				StringCopy(&(Local_305[0 /*32*/].f_23), "0192_A_M_M_HtlRoughTravellers_01_WHITE_01", 64);
				Local_305[0 /*32*/].f_3 = 1977838224;
				Local_305[1 /*32*/] = 6;
				StringCopy(&(Local_305[1 /*32*/].f_23), "0484_U_M_M_ValSheriff_01", 64);
				Local_305[4 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[4 /*32*/] = 5;
				StringCopy(&(Local_305[4 /*32*/].f_23), "0866_A_F_M_Civ_Poor_White_AVOID_04", 64);
				Local_305[4 /*32*/].f_3 = -193363968;
				Local_305[5 /*32*/].f_1 = joaat("RE_PUBLICHANGING_TEENS_01");
				Local_305[5 /*32*/] = 4;
				StringCopy(&(Local_305[5 /*32*/].f_23), "0830_S_M_Y_NewspaperBoy_01_WHITE_02", 64);
				Local_305[5 /*32*/].f_3 = 1951334013;
				Local_305[2 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[2 /*32*/] = 6;
				StringCopy(&(Local_305[2 /*32*/].f_23), "1010_S_M_M_DispatchPolice_White_06", 64);
				Local_305[2 /*32*/].f_3 = -181744552;
				Local_305[3 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[3 /*32*/] = 6;
				StringCopy(&(Local_305[3 /*32*/].f_23), "1009_S_M_M_DispatchPolice_White_05", 64);
				Local_305[3 /*32*/].f_3 = -1107173821;
				Local_305[6 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[6 /*32*/] = 4;
				Local_305[6 /*32*/].f_3 = -385240971;
				StringCopy(&(Local_305[6 /*32*/].f_23), "0470_A_M_M_ValFarmer_01_WHITE_01", 64);
				Local_305[7 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[7 /*32*/] = 4;
				Local_305[7 /*32*/].f_3 = 347506650;
				StringCopy(&(Local_305[7 /*32*/].f_23), "0467_S_M_M_ValCowpoke_01_WHITE_01", 64);
				Local_305[8 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[8 /*32*/] = 4;
				Local_305[8 /*32*/].f_3 = 1055317050;
				Local_305[9 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[9 /*32*/] = 4;
				Local_305[9 /*32*/].f_3 = -129904911;
				Local_305[10 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[10 /*32*/] = 4;
				Local_305[10 /*32*/].f_3 = 41345883;
				Local_305[11 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[11 /*32*/] = 4;
				Local_305[11 /*32*/].f_3 = 1712564875;
				StringCopy(&(Local_305[11 /*32*/].f_23), "0919_A_M_M_Civ_Poor_White_AVOID_02", 64);
				Local_305[12 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[12 /*32*/] = 4;
				Local_305[12 /*32*/].f_3 = 2011450924;
				StringCopy(&(Local_305[12 /*32*/].f_23), "0466_A_M_M_ValTownfolk_02_WHITE_01", 64);
				Local_305[13 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[13 /*32*/] = 5;
				Local_305[13 /*32*/].f_3 = -385240971;
				Local_305[14 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[14 /*32*/] = 4;
				Local_305[14 /*32*/].f_3 = 1225453698;
				Local_305[15 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[15 /*32*/] = 4;
				Local_305[15 /*32*/].f_3 = 1536333193;
			}
			else if (iLocal_109 == 3)
			{
				iLocal_1120 = 3;
				Local_305[0 /*32*/].f_1 = joaat("RE_DROWNMURDER_MALES_01");
				Local_305[0 /*32*/] = 22;
				StringCopy(&(Local_305[0 /*32*/].f_23), "0585_A_M_M_Civ_White_09", 64);
				Local_305[0 /*32*/].f_3 = -1645688396;
				Local_305[1 /*32*/] = 6;
				StringCopy(&(Local_305[1 /*32*/].f_23), "0484_U_M_M_ValSheriff_01", 64);
				Local_305[2 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[2 /*32*/] = 6;
				StringCopy(&(Local_305[2 /*32*/].f_23), "1010_S_M_M_DispatchPolice_White_06", 64);
				Local_305[2 /*32*/].f_3 = -2095519638;
				Local_305[3 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[3 /*32*/] = 6;
				StringCopy(&(Local_305[3 /*32*/].f_23), "1009_S_M_M_DispatchPolice_White_05", 64);
				Local_305[3 /*32*/].f_3 = 1371178414;
				Local_305[4 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[4 /*32*/] = 5;
				Local_305[4 /*32*/].f_3 = -81725888;
				StringCopy(&(Local_305[4 /*32*/].f_23), "0868_A_F_M_Civ_Poor_White_AVOID_06", 64);
				Local_305[5 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[5 /*32*/] = 4;
				Local_305[5 /*32*/].f_3 = -81725888;
				Local_305[6 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[6 /*32*/] = 4;
				Local_305[6 /*32*/].f_3 = -1716866223;
				StringCopy(&(Local_305[6 /*32*/].f_23), "0466_A_M_M_ValTownfolk_02_WHITE_01", 64);
				Local_305[7 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[7 /*32*/] = 4;
				Local_305[7 /*32*/].f_3 = -1424665050;
				StringCopy(&(Local_305[7 /*32*/].f_23), "0960_A_M_M_Rancher_White_05", 64);
				Local_305[8 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[8 /*32*/] = 4;
				Local_305[8 /*32*/].f_3 = -1137215382;
				Local_305[9 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[9 /*32*/] = 4;
				Local_305[9 /*32*/].f_3 = -810344607;
				StringCopy(&(Local_305[9 /*32*/].f_23), "0919_A_M_M_Civ_Poor_White_AVOID_02", 64);
				Local_305[10 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[10 /*32*/] = 4;
				Local_305[10 /*32*/].f_3 = 1349591263;
				StringCopy(&(Local_305[10 /*32*/].f_23), "0467_S_M_M_ValCowpoke_01_WHITE_01", 64);
				Local_305[11 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[11 /*32*/] = 4;
				Local_305[11 /*32*/].f_3 = 1648215160;
				StringCopy(&(Local_305[11 /*32*/].f_23), "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
				Local_305[12 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[12 /*32*/] = 4;
				Local_305[12 /*32*/].f_3 = 1961093572;
				Local_305[13 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[13 /*32*/] = 5;
				Local_305[13 /*32*/].f_3 = -1716866223;
				Local_305[14 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[14 /*32*/] = 4;
				Local_305[14 /*32*/].f_3 = -2031252009;
				Local_305[15 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[15 /*32*/] = 4;
				Local_305[15 /*32*/].f_3 = 705326154;
			}
			else if (iLocal_109 == 4)
			{
				iLocal_1120 = 3;
				Local_305[0 /*32*/].f_1 = joaat("RE_DEADJOHN_FEMALES_01");
				Local_305[0 /*32*/] = 22;
				StringCopy(&(Local_305[0 /*32*/].f_23), "REDJ_WOMAN1", 64);
				Local_305[0 /*32*/].f_3 = -419378151;
				Local_305[1 /*32*/] = 6;
				StringCopy(&(Local_305[1 /*32*/].f_23), "0484_U_M_M_ValSheriff_01", 64);
				Local_305[2 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[2 /*32*/] = 6;
				StringCopy(&(Local_305[2 /*32*/].f_23), "1010_S_M_M_DispatchPolice_White_06", 64);
				Local_305[2 /*32*/].f_3 = -181744552;
				Local_305[3 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[3 /*32*/] = 6;
				StringCopy(&(Local_305[3 /*32*/].f_23), "1009_S_M_M_DispatchPolice_White_05", 64);
				Local_305[3 /*32*/].f_3 = -1107173821;
				Local_305[4 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[4 /*32*/] = 5;
				Local_305[4 /*32*/].f_3 = 1446783140;
				StringCopy(&(Local_305[4 /*32*/].f_23), "0461_A_F_M_ValTownfolk_01_WHITE_01", 64);
				Local_305[5 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[5 /*32*/] = 4;
				Local_305[5 /*32*/].f_3 = 1446783140;
				Local_305[6 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[6 /*32*/] = 4;
				Local_305[6 /*32*/].f_3 = -258810541;
				Local_305[7 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[7 /*32*/] = 4;
				Local_305[7 /*32*/].f_3 = -1026391597;
				StringCopy(&(Local_305[7 /*32*/].f_23), "0465_A_M_M_ValTownfolk_01_WHITE_01", 64);
				Local_305[8 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[8 /*32*/] = 4;
				Local_305[8 /*32*/].f_3 = 222664376;
				StringCopy(&(Local_305[8 /*32*/].f_23), "0919_A_M_M_Civ_Poor_White_AVOID_02", 64);
				Local_305[9 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[9 /*32*/] = 4;
				Local_305[9 /*32*/].f_3 = 528661298;
				StringCopy(&(Local_305[9 /*32*/].f_23), "0467_S_M_M_ValCowpoke_01_WHITE_01", 64);
				Local_305[10 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[10 /*32*/] = 4;
				Local_305[10 /*32*/].f_3 = -580372742;
				Local_305[11 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[11 /*32*/] = 4;
				Local_305[11 /*32*/].f_3 = -1349461172;
				StringCopy(&(Local_305[11 /*32*/].f_23), "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
				Local_305[12 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[12 /*32*/] = 4;
				Local_305[12 /*32*/].f_3 = -104009789;
				Local_305[13 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[13 /*32*/] = 5;
				Local_305[13 /*32*/].f_3 = -258810541;
				Local_305[14 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[14 /*32*/] = 4;
				Local_305[14 /*32*/].f_3 = -936965000;
				Local_305[15 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[15 /*32*/] = 4;
				Local_305[15 /*32*/].f_3 = 344697576;
			}
			break;
		case 105:
			__LIB_3__::func_626(&(Local_305[0 /*32*/].f_22));
			if (iLocal_109 == 3)
			{
				if (__LIB_2__::func_410(21))
				{
					iLocal_1120 = 70;
				}
				else
				{
					iLocal_1120 = 71;
				}
				Local_305[0 /*32*/].f_1 = joaat("RE_DROWNMURDER_MALES_01");
				Local_305[0 /*32*/] = 22;
				StringCopy(&(Local_305[0 /*32*/].f_23), "0677_A_M_M_RhdTownfolk_02_WHITE_01", 64);
				Local_305[0 /*32*/].f_3 = -806572609;
				Local_305[1 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[1 /*32*/] = 6;
				StringCopy(&(Local_305[1 /*32*/].f_23), "0405_U_M_M_RhdSheriff_01", 64);
				Local_305[1 /*32*/].f_3 = 185498487;
				Local_305[2 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[2 /*32*/] = 6;
				StringCopy(&(Local_305[2 /*32*/].f_23), "1006_S_M_M_DispatchPolice_White_02", 64);
				Local_305[2 /*32*/].f_3 = -62071308;
				Local_305[3 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[3 /*32*/] = 6;
				StringCopy(&(Local_305[3 /*32*/].f_23), "0993_S_M_M_DispatchLawRural_White_08", 64);
				Local_305[3 /*32*/].f_3 = -1502465472;
				Local_305[4 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[4 /*32*/] = 5;
				Local_305[4 /*32*/].f_3 = 985950048;
				Local_305[5 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[5 /*32*/] = 4;
				Local_305[5 /*32*/].f_3 = 985950048;
				StringCopy(&(Local_305[5 /*32*/].f_23), "0925_A_M_M_Civ_Poor_White_AVOID_08", 64);
				Local_305[7 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[7 /*32*/] = 4;
				Local_305[7 /*32*/].f_3 = 276796119;
				Local_305[6 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[6 /*32*/] = 4;
				Local_305[6 /*32*/].f_3 = 508669563;
				StringCopy(&(Local_305[6 /*32*/].f_23), "0907_A_M_M_Civ_Poor_White_AGGRESSIVE_07", 64);
				Local_305[8 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[8 /*32*/] = 4;
				Local_305[8 /*32*/].f_3 = 335813092;
				StringCopy(&(Local_305[8 /*32*/].f_23), "0921_A_M_M_Civ_Poor_White_AVOID_04", 64);
				Local_305[9 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[9 /*32*/] = 5;
				Local_305[9 /*32*/].f_3 = 611695303;
				Local_305[10 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[10 /*32*/] = 4;
				Local_305[10 /*32*/].f_3 = -681434979;
				StringCopy(&(Local_305[10 /*32*/].f_23), "0701_A_M_M_RhdUpperClass_01_WHITE_01", 64);
			}
			else if (iLocal_109 == 5)
			{
				if (__LIB_2__::func_410(21))
				{
					iLocal_1120 = 70;
				}
				else
				{
					iLocal_1120 = 71;
				}
				Local_305[0 /*32*/].f_1 = joaat("U_M_M_HTLRANCHERBOUNTY_01");
				Local_305[0 /*32*/] = 22;
				StringCopy(&(Local_305[0 /*32*/].f_23), "RBRA_TARGET", 64);
				Local_305[1 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[1 /*32*/] = 6;
				StringCopy(&(Local_305[1 /*32*/].f_23), "0405_U_M_M_RhdSheriff_01", 64);
				Local_305[1 /*32*/].f_3 = 498573497;
				Local_305[2 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[2 /*32*/] = 6;
				StringCopy(&(Local_305[2 /*32*/].f_23), "1006_S_M_M_DispatchPolice_White_02", 64);
				Local_305[2 /*32*/].f_3 = 1967280077;
				Local_305[3 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[3 /*32*/] = 6;
				StringCopy(&(Local_305[3 /*32*/].f_23), "0993_S_M_M_DispatchLawRural_White_08", 64);
				Local_305[3 /*32*/].f_3 = 1244494244;
				Local_305[4 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[4 /*32*/] = 5;
				Local_305[4 /*32*/].f_3 = 249987835;
				Local_305[5 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[5 /*32*/] = 4;
				Local_305[5 /*32*/].f_3 = 249987835;
				StringCopy(&(Local_305[5 /*32*/].f_23), "0701_A_M_M_RhdUpperClass_01_WHITE_01", 64);
				Local_305[7 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[7 /*32*/] = 4;
				Local_305[7 /*32*/].f_3 = 1161359263;
				Local_305[6 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[6 /*32*/] = 4;
				Local_305[6 /*32*/].f_3 = 860572612;
				StringCopy(&(Local_305[6 /*32*/].f_23), "0927_A_M_M_Civ_Poor_White_AVOID_10", 64);
				Local_305[8 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[8 /*32*/] = 4;
				Local_305[8 /*32*/].f_3 = -527391152;
				StringCopy(&(Local_305[8 /*32*/].f_23), "0902_A_M_M_Civ_Poor_White_AGGRESSIVE_02", 64);
				Local_305[9 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[9 /*32*/] = 5;
				Local_305[9 /*32*/].f_3 = 985950048;
				Local_305[10 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[10 /*32*/] = 4;
				Local_305[10 /*32*/].f_3 = 204307849;
				StringCopy(&(Local_305[10 /*32*/].f_23), "0921_A_M_M_Civ_Poor_White_AVOID_04", 64);
			}
			break;
		case 5:
			if (iLocal_109 == 7)
			{
				Local_305[0 /*32*/].f_1 = joaat("RE_INJUREDRIDER_MALES_01");
				Local_305[0 /*32*/] = 22;
				StringCopy(&(Local_305[0 /*32*/].f_23), "REIR_Rider", 64);
				Local_305[0 /*32*/].f_3 = -1512795993;
				Local_305[1 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[1 /*32*/] = 6;
				StringCopy(&(Local_305[1 /*32*/].f_23), "ARMA_SHERIFF", 64);
				Local_305[1 /*32*/].f_3 = 263980226;
				Local_305[2 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[2 /*32*/] = 6;
				StringCopy(&(Local_305[2 /*32*/].f_23), "1001_S_M_M_AmbientSDPolice_White_04", 64);
				Local_305[2 /*32*/].f_3 = -403557073;
				Local_305[3 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[3 /*32*/] = 6;
				StringCopy(&(Local_305[3 /*32*/].f_23), "1000_S_M_M_AmbientSDPolice_White_03", 64);
				Local_305[3 /*32*/].f_3 = 909660602;
				Local_305[6 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[6 /*32*/] = 4;
				StringCopy(&(Local_305[6 /*32*/].f_23), "0843_S_M_M_UniButchers_01_WHITE_02", 64);
				Local_305[6 /*32*/].f_3 = 1379548191;
				Local_305[7 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[7 /*32*/] = 4;
				StringCopy(&(Local_305[7 /*32*/].f_23), "0806_S_M_M_Army_01_WHITE_01", 64);
				Local_305[7 /*32*/].f_3 = 1618466970;
				Local_305[4 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[4 /*32*/] = 5;
				Local_305[4 /*32*/].f_3 = 195403865;
				Local_305[5 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[5 /*32*/] = 4;
				Local_305[5 /*32*/].f_3 = 195403865;
				StringCopy(&(Local_305[5 /*32*/].f_23), "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13", 64);
				Local_305[8 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[8 /*32*/] = 4;
				Local_305[8 /*32*/].f_3 = 501171404;
				Local_305[9 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[9 /*32*/] = 4;
				Local_305[9 /*32*/].f_3 = -2049928019;
				StringCopy(&(Local_305[9 /*32*/].f_23), "0301_A_M_M_NbxDockWorkers_01_WHITE_01", 64);
				Local_305[10 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[10 /*32*/] = 4;
				Local_305[10 /*32*/].f_3 = -1721582639;
				Local_305[11 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[11 /*32*/] = 4;
				Local_305[11 /*32*/].f_3 = -468987614;
				Local_305[13 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[13 /*32*/] = 5;
				Local_305[13 /*32*/].f_3 = 501171404;
				Local_305[14 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[14 /*32*/] = 4;
				Local_305[14 /*32*/].f_3 = -187534673;
				StringCopy(&(Local_305[14 /*32*/].f_23), "0293_A_M_M_NbxUpperClass_01_WHITE_01", 64);
			}
			else if (iLocal_109 == 6)
			{
				iLocal_1120 = 256;
				Local_305[0 /*32*/].f_1 = joaat("U_M_M_UNIEXCONFEDSBOUNTY_01");
				Local_305[0 /*32*/] = 22;
				StringCopy(&(Local_305[0 /*32*/].f_23), "RBCO_TARGET", 64);
				Local_305[1 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[1 /*32*/] = 6;
				StringCopy(&(Local_305[1 /*32*/].f_23), "1017_U_M_M_SDPoliceChief_01", 64);
				Local_305[1 /*32*/].f_3 = -228472306;
				Local_305[2 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[2 /*32*/] = 6;
				StringCopy(&(Local_305[2 /*32*/].f_23), "1001_S_M_M_AmbientSDPolice_White_04", 64);
				Local_305[2 /*32*/].f_3 = 119343708;
				Local_305[3 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[3 /*32*/] = 6;
				StringCopy(&(Local_305[3 /*32*/].f_23), "1000_S_M_M_AmbientSDPolice_White_03", 64);
				Local_305[3 /*32*/].f_3 = 1364401863;
				Local_305[4 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[4 /*32*/] = 5;
				Local_305[4 /*32*/].f_3 = 1679487590;
				Local_305[5 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[5 /*32*/] = 4;
				Local_305[5 /*32*/].f_3 = 1679487590;
				StringCopy(&(Local_305[5 /*32*/].f_23), "0291_A_M_M_NbxTownfolk_02_HISPANIC_01", 64);
				Local_305[8 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[8 /*32*/] = 4;
				Local_305[8 /*32*/].f_3 = 1456297931;
				Local_305[9 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[9 /*32*/] = 4;
				Local_305[9 /*32*/].f_3 = 1083648863;
				StringCopy(&(Local_305[9 /*32*/].f_23), "0303_A_M_M_NbxLaborers_01_WHITE_01", 64);
				Local_305[10 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[10 /*32*/] = 4;
				Local_305[10 /*32*/].f_3 = 822119474;
				StringCopy(&(Local_305[10 /*32*/].f_23), "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13", 64);
				Local_305[11 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[11 /*32*/] = 4;
				Local_305[11 /*32*/].f_3 = -1692508048;
				StringCopy(&(Local_305[11 /*32*/].f_23), "0293_A_M_M_NbxUpperClass_01_WHITE_01", 64);
				Local_305[13 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[13 /*32*/] = 5;
				Local_305[13 /*32*/].f_3 = 1456297931;
				Local_305[14 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[14 /*32*/] = 4;
				Local_305[14 /*32*/].f_3 = -1921727203;
			}
			break;
		case 38:
			if (iLocal_109 == 0)
			{
				Local_305[0 /*32*/].f_1 = joaat("U_M_M_BHT_SKINNERSEARCH");
				Local_305[0 /*32*/] = 22;
				StringCopy(&(Local_305[0 /*32*/].f_23), "RBH_TARGET20", 64);
				Local_305[1 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[1 /*32*/] = 6;
				StringCopy(&(Local_305[1 /*32*/].f_23), "ARMA_SHERIFF", 64);
				Local_305[1 /*32*/].f_3 = 597869415;
				Local_305[2 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[2 /*32*/] = 6;
				StringCopy(&(Local_305[2 /*32*/].f_23), "1003_S_M_M_AmbientBlWPolice_White_02", 64);
				Local_305[2 /*32*/].f_3 = 1672364849;
				Local_305[3 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[3 /*32*/] = 6;
				StringCopy(&(Local_305[3 /*32*/].f_23), "1008_S_M_M_DispatchPolice_White_04", 64);
				Local_305[3 /*32*/].f_3 = 290692733;
				Local_305[4 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[4 /*32*/] = 5;
				Local_305[4 /*32*/].f_3 = 1979102785;
				Local_305[5 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[5 /*32*/] = 4;
				Local_305[5 /*32*/].f_3 = 1979102785;
				Local_305[6 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[6 /*32*/] = 4;
				StringCopy(&(Local_305[6 /*32*/].f_23), "BLIND_BEGGAR", 64);
				Local_305[6 /*32*/].f_3 = -1357285928;
				Local_305[7 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[7 /*32*/] = 4;
				Local_305[7 /*32*/].f_3 = 1022955933;
				StringCopy(&(Local_305[7 /*32*/].f_23), "0901_A_M_M_Civ_Poor_White_AGGRESSIVE_01", 64);
				Local_305[8 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[8 /*32*/] = 4;
				Local_305[8 /*32*/].f_3 = -1083029193;
				Local_305[9 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[9 /*32*/] = 4;
				Local_305[9 /*32*/].f_3 = -467627369;
				StringCopy(&(Local_305[9 /*32*/].f_23), "0595_A_M_M_Civ_White_AVOID_11", 64);
				Local_305[10 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[10 /*32*/] = 4;
				Local_305[10 /*32*/].f_3 = -168675782;
				StringCopy(&(Local_305[10 /*32*/].f_23), "0753_A_M_M_BlWLaborer_01_WHITE_01", 64);
				Local_305[11 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[11 /*32*/] = 5;
				Local_305[11 /*32*/].f_3 = -1083029193;
				Local_305[13 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[13 /*32*/] = 4;
				Local_305[13 /*32*/].f_3 = 146365384;
				Local_305[14 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[14 /*32*/] = 4;
				Local_305[14 /*32*/].f_3 = 445120357;
				StringCopy(&(Local_305[14 /*32*/].f_23), "0060_A_M_M_BlWTownfolk_01_WHITE_01", 64);
			}
			else if (iLocal_109 == 8)
			{
				Local_305[0 /*32*/].f_1 = joaat("U_M_M_BHT_SKINNERBROTHER");
				Local_305[0 /*32*/] = 22;
				StringCopy(&(Local_305[0 /*32*/].f_23), "RBH_TARGET18", 64);
				Local_305[1 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[1 /*32*/] = 6;
				StringCopy(&(Local_305[1 /*32*/].f_23), "ARMA_SHERIFF", 64);
				Local_305[1 /*32*/].f_3 = 597869415;
				Local_305[2 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[2 /*32*/] = 6;
				StringCopy(&(Local_305[2 /*32*/].f_23), "1003_S_M_M_AmbientBlWPolice_White_02", 64);
				Local_305[2 /*32*/].f_3 = 1672364849;
				Local_305[3 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[3 /*32*/] = 6;
				StringCopy(&(Local_305[3 /*32*/].f_23), "1008_S_M_M_DispatchPolice_White_04", 64);
				Local_305[3 /*32*/].f_3 = 290692733;
				Local_305[4 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[4 /*32*/] = 5;
				Local_305[4 /*32*/].f_3 = -1971706613;
				Local_305[5 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[5 /*32*/] = 4;
				Local_305[5 /*32*/].f_3 = -1971706613;
				StringCopy(&(Local_305[5 /*32*/].f_23), "0901_A_M_M_Civ_Poor_White_AGGRESSIVE_01", 64);
				Local_305[6 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[6 /*32*/] = 4;
				StringCopy(&(Local_305[6 /*32*/].f_23), "REFR_VICTIM", 64);
				Local_305[6 /*32*/].f_3 = -1357285928;
				Local_305[7 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[7 /*32*/] = 4;
				Local_305[7 /*32*/].f_3 = 1022955933;
				StringCopy(&(Local_305[7 /*32*/].f_23), "0595_A_M_M_Civ_White_AVOID_11", 64);
				Local_305[8 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[8 /*32*/] = 4;
				Local_305[8 /*32*/].f_3 = 2025816470;
				Local_305[9 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[9 /*32*/] = 4;
				Local_305[9 /*32*/].f_3 = 2031551065;
				Local_305[10 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[10 /*32*/] = 4;
				Local_305[10 /*32*/].f_3 = 1692916219;
				StringCopy(&(Local_305[10 /*32*/].f_23), "0751_A_M_O_BlWUpperClass_01_WHITE_01", 64);
				Local_305[11 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[11 /*32*/] = 5;
				Local_305[11 /*32*/].f_3 = 2025816470;
				Local_305[13 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[13 /*32*/] = 4;
				Local_305[13 /*32*/].f_3 = -1652831454;
				Local_305[14 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[14 /*32*/] = 4;
				Local_305[14 /*32*/].f_3 = -1958369610;
				StringCopy(&(Local_305[14 /*32*/].f_23), "0067_A_M_M_BlWConstruction_01_HISPANIC_01", 64);
			}
			break;
	}
}

void func_78()
{
	if (iLocal_109 == 4)
	{
		Local_76[0 /*2*/] = "script_re@public_hanging@female";
		Local_76[3 /*2*/] = "script_re@public_hanging@female";
		Local_76[0 /*2*/].f_1 = "struggle_idle_female";
		Local_76[4 /*2*/].f_1 = "cower_l";
		Local_76[10 /*2*/].f_1 = "flinch_l";
		Local_76[7 /*2*/].f_1 = "cower_r";
		Local_76[11 /*2*/].f_1 = "flinch_r";
		Local_76[14 /*2*/].f_1 = "shot_loose_crim";
	}
	else
	{
		Local_76[0 /*2*/] = "script_re@public_hanging@criminal_male";
		Local_76[3 /*2*/] = "script_re@public_hanging@criminal_male";
		Local_76[0 /*2*/].f_1 = "struggle_idle";
		Local_76[4 /*2*/].f_1 = "cower_l_enter";
		Local_76[5 /*2*/].f_1 = "cower_l_loop";
		Local_76[6 /*2*/].f_1 = "cower_l_exit";
		Local_76[10 /*2*/].f_1 = "flinch_l";
		Local_76[7 /*2*/].f_1 = "cower_r_enter";
		Local_76[8 /*2*/].f_1 = "cower_r_loop";
		Local_76[9 /*2*/].f_1 = "cower_r_exit";
		Local_76[11 /*2*/].f_1 = "flinch_r";
		Local_76[12 /*2*/].f_1 = "cower_l_shoot";
		Local_76[13 /*2*/].f_1 = "cower_r_shoot";
		Local_76[14 /*2*/].f_1 = "shoot_loose_crim_close";
		Local_76[15 /*2*/].f_1 = "shoot_loose_crim_far";
	}
	Local_76[1 /*2*/] = "script_re@public_hanging@lever";
	Local_76[1 /*2*/].f_1 = "push_lever_deputy";
	__LIB_3__::func_318(Local_76[0 /*2*/], &uLocal_18);
	__LIB_3__::func_318(Local_76[3 /*2*/], &uLocal_18);
	__LIB_3__::func_318(Local_76[1 /*2*/], &uLocal_18);
}

void func_79()
{
	StringCopy(&cLocal_1112, "PBL_LEVER_GUARD_V1", 32);
	Local_903.f_7 = "script@beat@town@publicHanging@deputyplayerlever";
	if (iLocal_109 == 0 || iLocal_109 == 8)
	{
		Local_903.f_4 = "script@beat@town@publichanging@sheriffspeech";
		StringCopy(&cLocal_1104, "PBL_rhodes_rancher", 32);
		StringCopy(&cLocal_1108, "PBL_ACTION", 32);
		Local_903.f_5 = "script@beat@town@publichanging@mainscene_spectators";
		Local_903.f_6 = "script@beat@town@publichanging@crowds@generic@groupB";
		Local_911.f_4 = "script@beat@town@publichanging@crowds@generic@groupC";
		Local_911.f_5 = "script@beat@town@publichanging@crowds@generic@groupD";
		Local_911.f_6 = "script@beat@town@publichanging@crowds@generic@groupA";
	}
	else if (iLocal_109 == 1)
	{
		Local_903.f_4 = "script@beat@town@publichanging@sheriffspeech";
		StringCopy(&cLocal_1104, "PBL_Main_Dialogue", 32);
		StringCopy(&cLocal_1108, "PBL_ACTION", 32);
		Local_903.f_5 = "script@beat@town@publichanging@mainscene_family";
		Local_903.f_6 = "script@beat@town@publichanging@crowds@decapitate@groupB";
		Local_911.f_4 = "script@beat@town@publichanging@crowds@decapitate@groupC";
		Local_911.f_5 = "script@beat@town@publichanging@crowds@decapitate@groupD";
		Local_911.f_6 = "script@beat@town@publichanging@crowds@decapitate@groupE";
		Local_911.f_7 = "script@beat@town@publichanging@crowds@decapitate@groupF";
	}
	else if (iLocal_109 == 3)
	{
		Local_903.f_4 = "script@beat@town@publichanging@sheriffspeech";
		StringCopy(&cLocal_1104, "PBL_drown_murder", 32);
		StringCopy(&cLocal_1108, "PBL_ACTION", 32);
		if (__LIB_1__::func_898() == 9)
		{
			Local_903.f_5 = "script@beat@town@publichanging@crowds@decapitate@groupA";
			Local_903.f_6 = "script@beat@town@publichanging@crowds@decapitate@groupB";
			Local_911.f_4 = "script@beat@town@publichanging@crowds@decapitate@groupC";
			Local_911.f_5 = "script@beat@town@publichanging@crowds@decapitate@groupD";
			Local_911.f_6 = "script@beat@town@publichanging@crowds@decapitate@groupE";
			Local_911.f_7 = "script@beat@town@publichanging@crowds@decapitate@groupF";
		}
		else if (__LIB_1__::func_898() == 11)
		{
			Local_903.f_6 = "script@beat@town@publichanging@crowds@generic@groupB";
			Local_911.f_4 = "script@beat@town@publichanging@crowds@generic@groupC";
			Local_911.f_5 = "script@beat@town@publichanging@crowds@generic@groupD";
		}
	}
	else if (iLocal_109 == 4)
	{
		Local_903.f_4 = "script@beat@town@publichanging@sheriffspeech";
		StringCopy(&cLocal_1104, "PBL_dead_john", 32);
		Local_903.f_5 = "script@beat@town@publichanging@crowds@decapitate@groupA";
		Local_903.f_6 = "script@beat@town@publichanging@crowds@decapitate@groupB";
		Local_911.f_4 = "script@beat@town@publichanging@crowds@decapitate@groupC";
		Local_911.f_5 = "script@beat@town@publichanging@crowds@decapitate@groupD";
		Local_911.f_6 = "script@beat@town@publichanging@crowds@decapitate@groupE";
		Local_911.f_7 = "script@beat@town@publichanging@crowds@decapitate@groupF";
		StringCopy(&cLocal_1108, "PBL_ACTION", 32);
	}
	else if (iLocal_109 == 5)
	{
		Local_903.f_4 = "script@beat@town@publichanging@sheriffspeech";
		StringCopy(&cLocal_1104, "PBL_rhodes_rancher", 32);
		Local_903.f_6 = "script@beat@town@publichanging@crowds@generic@groupB";
		Local_911.f_4 = "script@beat@town@publichanging@crowds@generic@groupC";
		Local_911.f_5 = "script@beat@town@publichanging@crowds@generic@groupD";
		StringCopy(&cLocal_1108, "PBL_ACTION", 32);
	}
	else if (iLocal_109 == 6)
	{
		Local_903.f_4 = "script@beat@town@publichanging@sheriffspeech";
		StringCopy(&cLocal_1104, "PBL_st_denis", 32);
		StringCopy(&cLocal_1108, "PBL_ACTION", 32);
		Local_903.f_6 = "script@beat@town@publichanging@crowds@generic@groupB";
		Local_911.f_4 = "script@beat@town@publichanging@crowds@generic@groupC";
		Local_911.f_6 = "script@beat@town@publichanging@crowds@generic@groupA";
		StringCopy(&cLocal_1108, "PBL_ACTION", 32);
	}
	else if (iLocal_109 == 7)
	{
		Local_903.f_4 = "script@beat@town@publichanging@sheriffspeech";
		StringCopy(&cLocal_1104, "PBL_Main_Dialogue", 32);
		StringCopy(&cLocal_1108, "PBL_ACTION", 32);
		Local_903.f_5 = "script@beat@town@publichanging@mainscene_spectators";
		Local_903.f_6 = "script@beat@town@publichanging@crowds@generic@groupB";
		Local_911.f_4 = "script@beat@town@publichanging@crowds@generic@groupC";
		Local_911.f_6 = "script@beat@town@publichanging@crowds@generic@groupA";
	}
}

void func_80()
{
	Local_818[0 /*12*/].f_7 = joaat("P_DETONATOR01X");
	Local_818[0 /*12*/] = { 0f, 0f, 0f };
	Local_818[0 /*12*/].f_10 = 0;
	Local_818[1 /*12*/].f_7 = joaat("P_CS_NOOSE01XB");
	Local_818[1 /*12*/] = { 0f, 0f, -1f };
	Local_818[1 /*12*/].f_10 = 0;
	if (!func_225())
	{
		Local_818[2 /*12*/].f_7 = joaat("P_CS_LETTER01A_X");
		Local_818[2 /*12*/] = { 0f, 0f, -0.5f };
		Local_818[2 /*12*/].f_10 = 0;
	}
	Local_818[3 /*12*/].f_7 = joaat("S_GALLOWLEVERNBX01X");
	Local_818[3 /*12*/] = { 0f, 0.5f, 0f };
	Local_818[3 /*12*/].f_10 = 0;
	Local_818[4 /*12*/].f_7 = joaat("P_CIGARETTE01X");
	Local_818[4 /*12*/] = { 0f, 0.25f, 0f };
	Local_818[4 /*12*/].f_10 = 0;
	Local_818[5 /*12*/].f_7 = joaat("P_CIGARETTE01X");
	Local_818[5 /*12*/] = { 0f, 0.25f, 0f };
	Local_818[5 /*12*/].f_10 = 0;
	Local_818[6 /*12*/].f_7 = joaat("P_CIGARETTE01X");
	Local_818[6 /*12*/] = { 0f, 0.25f, 0f };
	Local_818[6 /*12*/].f_10 = 0;
	if (__LIB_0__::func_12() == 5)
	{
		iLocal_983 = joaat("S_GALLOWDOORNBX01X");
	}
	else
	{
		iLocal_983 = joaat("S_GALLOWSSTAIRS04X");
	}
}

void func_81(int iParam0)
{
	Local_920.f_3 = Global_35;
	Local_920 = { 0f, 0f, 0f };
	Local_920.f_8 = 4;
	Local_920.f_20 = 2;
	Local_920.f_19 = 4;
	Local_920.f_22 = 3;
	Local_920.f_21 = 4;
	Local_920.f_17 = 4;
	Local_920.f_18 = 0;
	Local_920.f_9 = 1;
	Local_920.f_10 = 1;
	Local_920.f_11 = 1;
	Local_920.f_12 = 0;
	Local_920.f_4 = 21030;
	Local_920.f_7 = iParam0;
	Local_920.f_13 = 0;
}

void func_82()
{
	switch (__LIB_0__::func_12())
	{
		case 76:
			StringCopy(&cLocal_1116, "re_ph_val_law", 32);
			break;
		case 5:
			StringCopy(&cLocal_1116, "re_ph_std_law", 32);
			break;
		case 105:
			StringCopy(&cLocal_1116, "re_ph_rhd_law", 32);
			break;
	}
}

void func_83()
{
	switch (__LIB_0__::func_12())
	{
		case 76:
			fLocal_1030 = 3.3f;
			fLocal_1031 = 2.35f;
			vLocal_1054 = { -315.1255f, 733.6245f, 122.897f };
			vLocal_1057 = { -315.075f, 730.922f, 119.6113f };
			fLocal_1032 = 8.9f;
			vLocal_1051 = { -314.6394f, 733.692f, 119.5727f };
			vLocal_1060 = { -324.4821f, 731.7224f, 116.3298f };
			break;
		case 105:
			fLocal_1030 = 2.8f;
			fLocal_1031 = 1.8f;
			vLocal_1054 = { 1375.074f, -1215.15f, 86.75f };
			vLocal_1057 = { 1373.779f, -1216.084f, 83.24623f };
			fLocal_1032 = 265f;
			vLocal_1051 = { 1374.989f, -1214.637f, 83.2235f };
			vLocal_1060 = { 1366.561f, -1214.614f, 82.74409f };
			break;
		case 5:
			fLocal_1030 = 2f;
			fLocal_1031 = 1.25f;
			vLocal_1054 = { 2689.186f, -1113.87f, 54.26801f };
			vLocal_1057 = { 2690.893f, -1113.406f, 51.872f };
			fLocal_1032 = 89.8f;
			vLocal_1051 = { 2688.435f, -1113.967f, 51.049f };
			vLocal_1060 = { 2688.809f, -1120.589f, 49.67804f };
			break;
		case 38:
			fLocal_1030 = 3.3f;
			fLocal_1031 = 2.35f;
			vLocal_1054 = { -764.2183f, -1259.831f, 49.55884f };
			vLocal_1057 = { -767.09f, -1260.82f, 46.452f };
			fLocal_1032 = 260f;
			vLocal_1051 = { -764.7153f, -1260.407f, 46.3581f };
			vLocal_1060 = { -763.8068f, -1247.044f, 42.46014f };
			break;
		default:
			break;
	}
}

void func_84()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Local_305[iVar0 /*32*/].f_1 != 0)
		{
			STREAMING::REQUEST_MODEL(Local_305[iVar0 /*32*/].f_1, false);
		}
		iVar0++;
	}
}

void func_85()
{
	__LIB_2__::func_312(joaat("WORLD_HUMAN_STARE_STOIC"), 15, 0, 0);
	__LIB_2__::func_312(joaat("WORLD_HUMAN_GUARD_SCOUT"), 15, 0, 0);
	__LIB_2__::func_312(joaat("WORLD_HUMAN_SIT_GROUND"), 15, 0, 0);
}

bool func_92()
{
	if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_STARE_STOIC")))
	{
		return false;
	}
	if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_GUARD_SCOUT")))
	{
		return false;
	}
	if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_SIT_GROUND")))
	{
		return false;
	}
	return true;
}

bool func_93()
{
	switch (iLocal_1024)
	{
		case 0:
			uLocal_1423 = ENTITY::_0x6F3068258A499E52(iLocal_983, vLocal_1051, 9);
			uLocal_1424 = ENTITY::_0x6F3068258A499E52(Local_818[3 /*12*/].f_7, vLocal_1057, 9);
			iLocal_1024++;
			break;
		case 1:
			if (ENTITY::_0x1FF441D7954F8709(uLocal_1423) && ENTITY::_0x1FF441D7954F8709(uLocal_1424))
			{
				iLocal_1425 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uLocal_1423));
				iLocal_1426 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uLocal_1424));
				return true;
			}
			break;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1425))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1426))
	{
	}
	return false;
}

void func_101()
{
	iLocal_1095 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vLocal_1060, 0f, 0f, 0f, 6f, 6f, 6f, "m_volAmbientRestrictionCrowd");
	POPULATION::_0xB56D41A694E42E86(iLocal_1095, 2048, 0, 0, -1, -1, 2);
}

void func_111()
{
	int iVar0;
	__LIB_3__::func_459(iLocal_946[0], 0);
	__LIB_4__::func_276(iLocal_946[0], 1, 0);
	WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_946[0], true, true);
	TASK::_0x7981037A96E7D174(iLocal_946[0]);
	PED::_0xAE6004120C18DF97(iLocal_946[0], 0, 0);
	func_262(1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_946[0], 1);
	__LIB_2__::func_279(iLocal_946[0], 1);
	PED::ADD_RELATIONSHIP_GROUP("relCriminal", &iLocal_1443);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_946[0], iLocal_1443);
	TASK::CLEAR_PED_TASKS(iLocal_946[0], true, false);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_1443, joaat("PLAYER"));
	if (func_225())
	{
		__LIB_2__::func_272(iLocal_946[1], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_946[1], 54, false);
	}
	PED::_0x89F5E7ADECCCB49C(iLocal_946[1], "normal");
	PED::SET_PED_CONFIG_FLAG(iLocal_946[1], 188, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_946[1], 58, true);
	__LIB_2__::func_272(iLocal_946[2], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_946[2], 54, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_946[2], 188, true);
	__LIB_2__::func_272(iLocal_946[3], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_946[3], 54, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_946[3], 188, true);
	PED::_0x89F5E7ADECCCB49C(iLocal_946[3], "normal");
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iVar0 >= 4 && ENTITY::DOES_ENTITY_EXIST(iLocal_946[iVar0]))
		{
			if (iLocal_109 == 1 && iVar0 == 4)
			{
			}
			else
			{
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_946[iVar0], 7, 1, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_946[iVar0], 130, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_946[iVar0], 315, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_946[iVar0], 509, true);
			}
			if (iVar0 == 5)
			{
				if (iLocal_109 == 1)
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_946[5], true, true);
					ENTITY::SET_ENTITY_PROOFS(iLocal_946[5], 2, false);
				}
			}
		}
		iVar0++;
	}
}

void func_112()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_4))
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903))
		{
			Local_903 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_903.f_4, 0, &cLocal_1104, false, true);
			if (func_225())
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_903, Local_305[1 /*32*/].f_6, 0f, 0f, Local_305[1 /*32*/].f_9, 2);
			}
			else
			{
				if (__LIB_1__::func_898() == 9)
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_903, -317.072f, 735.11f, 119.587f, 0f, 0f, -74.959f, 2);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_903, Local_305[1 /*32*/].f_6, 0f, 0f, Local_305[1 /*32*/].f_9, 2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_818[2 /*12*/].f_8))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903, "LIST", Local_818[2 /*12*/].f_8, 0);
				}
			}
			if (__LIB_2__::func_1(iLocal_946[1], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903, "Sheriff", iLocal_946[1], 0);
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_903, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_903);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903, "BOOL_Idle", false, false);
		}
	}
}

void func_113()
{
	if (iLocal_109 == 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_5))
		{
			Local_903.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_903.f_5, 64, &cLocal_1108, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_903.f_1, func_122(), 0f, 0f, func_265(), 2);
			if (__LIB_2__::func_1(iLocal_946[5], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_1, "Son", iLocal_946[5], 0);
			}
			if (__LIB_2__::func_1(iLocal_946[4], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_1, "Mother", iLocal_946[4], 0);
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_903.f_1, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_903.f_1);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_1, "LOOP_BOOL", false, false);
		}
	}
	else if (iLocal_109 == 7)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_5))
		{
			Local_903.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_903.f_5, 64, &cLocal_1108, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_903.f_1, func_122(), 0f, 0f, func_265(), 2);
			if (__LIB_2__::func_1(iLocal_946[7], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_1, "MALE_A", iLocal_946[7], 0);
			}
			if (__LIB_2__::func_1(iLocal_946[6], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_1, "MALE_B", iLocal_946[6], 0);
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_903.f_1, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_903.f_1);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_1, "LOOP_BOOL", false, false);
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_5))
	{
		Local_903.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_903.f_5, 64, &cLocal_1108, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_903.f_1, func_122(), 0f, 0f, func_265(), 2);
		if (__LIB_2__::func_1(iLocal_946[4], 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_1, "GROUP_AF01", iLocal_946[4], 0);
		}
		if (__LIB_2__::func_1(iLocal_946[5], 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_1, "GROUP_AM01", iLocal_946[5], 0);
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_903.f_1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_903.f_1);
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_1, "LOOP_BOOL", false, false);
	}
}

void func_114()
{
	if (__LIB_1__::func_898() == 9)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_6))
		{
			Local_903.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_903.f_6, 64, &cLocal_1108, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_903.f_2, func_266(), 0f, 0f, func_267(), 2);
			if (__LIB_2__::func_1(iLocal_946[6], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM01", iLocal_946[6], 0);
			}
			if (__LIB_2__::func_1(iLocal_946[7], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM02", iLocal_946[7], 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_818[4 /*12*/].f_8, iLocal_946[7], PED::GET_PED_BONE_INDEX(iLocal_946[7], 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_818[4 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_818[4 /*12*/].f_8));
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_903.f_2, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_903.f_2);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_2, "LOOP_BOOL", false, false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_818[4 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(Local_818[4 /*12*/].f_8));
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_6))
	{
		Local_903.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_903.f_6, 64, &cLocal_1108, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_903.f_2, func_266(), 0f, 0f, func_267(), 2);
		if (__LIB_2__::func_1(iLocal_946[8], 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM01", iLocal_946[8], 0);
		}
		if (__LIB_2__::func_1(iLocal_946[9], 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM02", iLocal_946[9], 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_818[4 /*12*/].f_8, iLocal_946[9], PED::GET_PED_BONE_INDEX(iLocal_946[9], 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_818[4 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(Local_818[4 /*12*/].f_8));
		}
		if (__LIB_2__::func_1(iLocal_946[10], 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM03", iLocal_946[10], 0);
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_903.f_2, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_903.f_2);
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_2, "LOOP_BOOL", false, false);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_818[4 /*12*/].f_8))
	{
		OBJECT::DELETE_OBJECT(&(Local_818[4 /*12*/].f_8));
	}
}

void func_115()
{
	if (__LIB_1__::func_898() == 9)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_4))
		{
			Local_911 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_911.f_4, 64, &cLocal_1108, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_911, func_268(), 0f, 0f, func_269(), 2);
			if (__LIB_2__::func_1(iLocal_946[8], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911, "GROUP_CM01", iLocal_946[8], 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_818[6 /*12*/].f_8, iLocal_946[8], PED::GET_PED_BONE_INDEX(iLocal_946[8], 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_911, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_911);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911, "LOOP_BOOL", false, false);
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_4))
	{
		Local_911 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_911.f_4, 64, &cLocal_1108, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_911, func_268(), 0f, 0f, func_269(), 2);
		if (__LIB_2__::func_1(iLocal_946[5], 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911, "GROUP_CM01", iLocal_946[5], 0);
		}
		if (__LIB_2__::func_1(iLocal_946[4], 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911, "GROUP_CF01", iLocal_946[4], 0);
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_911, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_911);
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911, "LOOP_BOOL", false, false);
	}
}

void func_116()
{
	if (__LIB_1__::func_898() == 9)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_5))
		{
			Local_911.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_911.f_5, 64, &cLocal_1108, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_911.f_1, func_270(), 0f, 0f, func_271(), 2);
			if (__LIB_2__::func_1(iLocal_946[9], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_1, "GROUP_DM01", iLocal_946[9], 0);
			}
			if (__LIB_2__::func_1(iLocal_946[10], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_1, "GROUP_DM02", iLocal_946[10], 0);
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_911.f_1, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_911.f_1);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911.f_1, "LOOP_BOOL", false, false);
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_5))
	{
		Local_911.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_911.f_5, 64, &cLocal_1108, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_911.f_1, func_270(), 0f, 0f, func_271(), 2);
		if (__LIB_2__::func_1(iLocal_946[6], 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_1, "GROUP_DM01", iLocal_946[6], 0);
		}
		if (__LIB_2__::func_1(iLocal_946[7], 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_1, "GROUP_DM02", iLocal_946[7], 0);
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_911.f_1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_911.f_1);
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911.f_1, "LOOP_BOOL", false, false);
	}
}

void func_117()
{
	if (__LIB_1__::func_898() == 9)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_6))
		{
			Local_911.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_911.f_6, 64, &cLocal_1108, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_911.f_2, func_272(), 0f, 0f, func_273(), 2);
			if (__LIB_2__::func_1(iLocal_946[11], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_EM01", iLocal_946[11], 0);
			}
			if (__LIB_2__::func_1(iLocal_946[12], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_EM02", iLocal_946[12], 0);
			}
			if (__LIB_2__::func_1(iLocal_946[13], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_EF01", iLocal_946[13], 0);
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_911.f_2, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_911.f_2);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911.f_2, "LOOP_BOOL", false, false);
		}
	}
	else if (((iLocal_109 == 0 || iLocal_109 == 8) || iLocal_109 == 7) || iLocal_109 == 6)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_6))
		{
			Local_911.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_911.f_6, 64, &cLocal_1108, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_911.f_2, func_272(), 0f, 0f, func_273(), 2);
			if (__LIB_2__::func_1(iLocal_946[11], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_AF01", iLocal_946[11], 0);
			}
			if (__LIB_2__::func_1(iLocal_946[13], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_AM02", iLocal_946[13], 0);
			}
			if (__LIB_2__::func_1(iLocal_946[14], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_AM03", iLocal_946[14], 0);
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_911.f_2, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_911.f_2);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911.f_2, "LOOP_BOOL", false, false);
		}
	}
}

void func_118()
{
	if (__LIB_1__::func_898() == 9)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_7))
		{
			Local_911.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_911.f_7, 64, &cLocal_1108, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_911.f_3, func_274(), 0f, 0f, func_275(), 2);
			if (__LIB_2__::func_1(iLocal_946[14], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_3, "GROUP_FM01", iLocal_946[14], 0);
			}
			if (__LIB_2__::func_1(iLocal_946[15], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_3, "GROUP_FM02", iLocal_946[15], 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_818[5 /*12*/].f_8, iLocal_946[15], PED::GET_PED_BONE_INDEX(iLocal_946[15], 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_818[5 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_818[5 /*12*/].f_8));
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_911.f_3, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_911.f_3);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911.f_3, "LOOP_BOOL", false, false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_818[5 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(Local_818[5 /*12*/].f_8));
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_818[5 /*12*/].f_8))
	{
		OBJECT::DELETE_OBJECT(&(Local_818[5 /*12*/].f_8));
	}
}

void func_119(int iParam0, char* sParam1)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_7))
	{
		Local_903.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_903.f_7, 0, sParam1, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_903.f_3, vLocal_1057, 0f, 0f, fLocal_1032, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_3, "plr", iParam0, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_3, "lever", Local_818[3 /*12*/].f_8, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_903.f_3, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_903.f_3);
		}
	}
}

Vector3 func_122()
{
	switch (iLocal_109)
	{
		case 0:
			return -763.9165f, -1251.671f, 42.45832f;
		case 8:
			return -763.9165f, -1251.671f, 42.45832f;
		case 1:
			return -326.277f, 730.5281f, 116.2461f;
		case 3:
			if (__LIB_1__::func_898() == 9)
			{
				return -322.7637f, 729.8936f, 116.4863f;
			}
			else
			{
				Jump @223; //curOff = 154
				return -322.7637f, 729.8936f, 116.4863f;
				Jump @223; //curOff = 175
				Jump @223; //curOff = 178
				return 2689.185f, -1118.585f, 49.678f;
				Jump @223; //curOff = 199
				return 2689.185f, -1118.585f, 49.678f;
			}
			return 0f, 0f, 0f;
			default:
				break;
	}
}

bool func_139()
{
	if (func_313())
	{
		return true;
	}
	if (bLocal_1421)
	{
		return true;
	}
	if (__LIB_0__::func_27(iLocal_1019, 32))
	{
		return true;
	}
	if (iLocal_110 >= 2)
	{
		if (func_314())
		{
			return true;
		}
	}
	return false;
}

bool func_141(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	if (*uParam0 < iParam5 || *uParam0 > iParam6)
	{
		*uParam0 = iParam5;
	}
	iVar0 = 0;
	while (iVar0 < iParam7)
	{
		if (func_315((*iParam2)[*uParam0], iParam3, &(uParam0->f_5), iParam4, 0, uParam0->f_98[*uParam0]))
		{
			return true;
		}
		*uParam0++;
		if (*uParam0 > iParam6)
		{
			*uParam0 = iParam5;
		}
		iVar0++;
	}
	return false;
}

bool func_144()
{
	if (__LIB_0__::func_27(iLocal_1019, 268435456))
	{
		return true;
	}
	if (!__LIB_0__::func_27(iLocal_1019, 268435456))
	{
		if (AUDIO::LOAD_STREAM("CROWD_WALLA", "REPH_Sounds"))
		{
			uLocal_1437 = AUDIO::_0x0556C784FA056628("CROWD_WALLA", "REPH_Sounds");
			__LIB_1__::func_683(&iLocal_1019, 268435456);
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

void func_149()
{
	if (iLocal_109 == 1)
	{
		if (__LIB_2__::func_1(iLocal_946[4], 0, 1))
		{
			func_322();
		}
	}
}

void func_150(float fParam0)
{
	int iVar0;
	if (Local_111.f_46 || !ENTITY::DOES_ENTITY_EXIST(iLocal_946[0]))
	{
		return;
	}
	if (Local_111.f_98[0] <= fParam0 && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_946[0]))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!__LIB_0__::func_393(Global_35, iLocal_1088[iVar0], 0, 1))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_1451);
			}
			iVar0++;
		}
	}
}

void func_151()
{
	if (__LIB_0__::func_27(iLocal_1019, 256))
	{
		return;
	}
	if (Local_111.f_46)
	{
		if (!__LIB_0__::func_75(&uLocal_985))
		{
			__LIB_1__::func_148(&uLocal_985);
		}
		else if (__LIB_0__::func_265(&uLocal_985) > 3f)
		{
			__LIB_3__::func_319(Local_903.f_1);
			__LIB_3__::func_319(Local_903.f_2);
			__LIB_3__::func_319(Local_911);
			__LIB_3__::func_319(Local_911.f_1);
			__LIB_3__::func_319(Local_911.f_2);
			__LIB_3__::func_319(Local_911.f_3);
			__LIB_1__::func_683(&iLocal_1019, 256);
		}
	}
}

void func_152()
{
	if (__LIB_0__::func_27(iLocal_1019, 4))
	{
		if (!__LIB_0__::func_27(iLocal_1019, 2048))
		{
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 20, 1);
			if (func_182(iLocal_945))
			{
				if (func_324() && __LIB_2__::func_1(iLocal_946[0], 0, 1))
				{
					__LIB_3__::func_465(2, joaat("HONOR_EVENT_INTERVENED"), 0, 0, iLocal_946[0], 0, 1065353216 /* Float: 1f */, 0);
				}
				__LIB_1__::func_683(&iLocal_1019, 2048);
			}
		}
		if (__LIB_0__::func_27(iLocal_1019, 2048))
		{
			if (!__LIB_0__::func_27(iLocal_1019, 2097152))
			{
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1093))
				{
					if (func_326(&iLocal_946, iLocal_1093) == 0)
					{
						func_74(iLocal_1093, 1, 23);
						__LIB_1__::func_683(&iLocal_1019, 2097152);
					}
				}
			}
		}
	}
}

void func_153()
{
	if (iLocal_110 >= 2)
	{
		if (__LIB_0__::func_27(iLocal_1019, 512) || !ENTITY::DOES_ENTITY_EXIST(Local_818[2 /*12*/].f_8))
		{
			return;
		}
		if (ENTITY::_0x0B7CB1300CBFE19C(Local_818[2 /*12*/].f_8, 1))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_818[2 /*12*/].f_8, true);
			__LIB_1__::func_683(&iLocal_1019, 512);
		}
	}
}

void func_154()
{
	if (Local_111.f_46 || iLocal_110 <= 1)
	{
		return;
	}
	func_327();
	func_328();
}

void func_155()
{
	if (((Local_111.f_46 || iLocal_110 < 2) || __LIB_0__::func_27(iLocal_1019, 67108864)) || iLocal_1436 >= 5)
	{
		return;
	}
	switch (iLocal_1436)
	{
		case 0:
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_946[1]))
			{
				__LIB_2__::func_315(1891783641, iLocal_946[1], 1);
				iLocal_1436++;
			}
			break;
		case 1:
			if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_946[1]))
			{
				iLocal_1436++;
			}
			break;
		case 2:
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_946[1]))
			{
				__LIB_2__::func_315(1891783641, iLocal_946[1], 1);
				iLocal_1436++;
			}
			break;
		case 3:
			if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_946[1]))
			{
				iLocal_1436++;
			}
			break;
		case 4:
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_946[1]))
			{
				__LIB_2__::func_315(1891783641, iLocal_946[1], 1);
				iLocal_1436++;
			}
			break;
		case 5:
			break;
	}
}

void func_156()
{
	if (!__LIB_0__::func_27(iLocal_1020, 524288))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1101))
		{
			if (__LIB_1__::func_205(Global_35, iLocal_1101, 1, 0))
			{
				LAW::_0x15ABD5004CAD2D99(0);
				__LIB_1__::func_683(&iLocal_1020, 524288);
			}
		}
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1101))
	{
		if (!__LIB_1__::func_205(Global_35, iLocal_1101, 1, 0))
		{
			LAW::_0x15ABD5004CAD2D99(-1);
			__LIB_1__::func_681(&iLocal_1020, 524288);
		}
	}
}

void func_157(var uParam0, int iParam1)
{
	if (Local_111.f_46)
	{
		if (*uParam0 < 10)
		{
			*uParam0 = 10;
		}
	}
	if ((*uParam0 >= 1 && iLocal_110 >= 2) && !Local_111.f_46)
	{
		if (!__LIB_0__::func_27(iLocal_1296, 1048576))
		{
			iLocal_1297[iParam1] = func_331(&(iLocal_946[iParam1]), &(Local_1309[iParam1 /*21*/]), 20f, &Local_1226, &(Local_111.f_192), 0f, 1, 0, "", __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 0, Local_111.f_98[iParam1], 0);
		}
	}
	switch (*uParam0)
	{
		case 0:
			__LIB_2__::func_602(&(Local_1226[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_602(&(Local_1226[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_2__::func_411(&(Local_1226[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_1226[1 /*17*/]), 0, 0);
			*uParam0 = 1;
			break;
		case 1:
			if (__LIB_0__::func_27(iLocal_1019, 524288))
			{
				TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_946[1], false);
				PED::_0xA3A9299C4F2ADB98(iLocal_946[1]);
				PED::_0x58F7DB5BD8FA2288(iLocal_946[1]);
				if (__LIB_0__::func_12() == 76)
				{
					func_336(iLocal_946[1], func_335(1), 0f, 0f, 0f, 0, 0, 0);
				}
				else
				{
					func_336(iLocal_946[1], func_335(1), 0f, 0f, 0f, 0, 0, 0);
				}
				PED::_0x2208438012482A1A(iLocal_946[1], false, false);
				__LIB_2__::func_411(&(Local_1226[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_1226[1 /*17*/]), 1, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_946[1], 315, false);
				*uParam0 = 8;
			}
			break;
		case 2:
			break;
		case 4:
			break;
		case 8:
			func_337(1, 1075838976 /* Float: 2.5f */);
			switch (iLocal_1297[iParam1])
			{
				case 0:
					if (__LIB_0__::func_27(iLocal_1296, 524288))
					{
						__LIB_2__::func_478(Global_35, iLocal_946[1], "RE_PH_VAL_V4_ILO_MEMORY_POS", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_109 == 7 && !__LIB_0__::func_27(iLocal_1296, 4096))
					{
						__LIB_2__::func_478(Global_35, iLocal_946[1], func_338("ILO_POS_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_109 == 5)
					{
						__LIB_2__::func_478(Global_35, iLocal_946[1], "RE_PH_RHD_V3_ILO_POS", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(Global_35, iLocal_946[1], func_338("ILO_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_2__::func_411(&(Local_1226[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1226[1 /*17*/]), 0, 0);
					__LIB_1__::func_683(&iLocal_1296, 16);
					*uParam0 = 9;
					break;
				case 1:
					if (__LIB_0__::func_27(iLocal_1296, 524288))
					{
						__LIB_2__::func_478(Global_35, iLocal_946[1], "RE_PH_VAL_V4_ILO_MEMORY_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_109 == 7 && !__LIB_0__::func_27(iLocal_1296, 4096))
					{
						__LIB_2__::func_478(Global_35, iLocal_946[1], func_338("ILO_NEG_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_109 == 5)
					{
						__LIB_2__::func_478(Global_35, iLocal_946[1], "RE_PH_RHD_V3_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(Global_35, iLocal_946[1], func_338("ILO_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_2__::func_411(&(Local_1226[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1226[1 /*17*/]), 0, 0);
					__LIB_1__::func_683(&iLocal_1296, 32);
					*uParam0 = 9;
					break;
			}
			break;
		case 9:
			func_337(1, 1075838976 /* Float: 2.5f */);
			if (!__LIB_0__::func_27(iLocal_1296, 64))
			{
				if (__LIB_2__::func_227(0, 1, Global_35, 1))
				{
					if (__LIB_0__::func_27(iLocal_1296, 16))
					{
						func_340(1);
					}
					else if (__LIB_0__::func_27(iLocal_1296, 32))
					{
						func_340(0);
					}
					__LIB_1__::func_683(&iLocal_1296, 64);
				}
			}
			else if (!__LIB_0__::func_27(iLocal_1296, 1048576))
			{
				if (__LIB_2__::func_227(0, 1, iLocal_946[1], 1))
				{
					__LIB_2__::func_593(&(Local_1309[1 /*21*/]), &Local_1226);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_946[1], false);
					__LIB_2__::func_603(&(iLocal_946[1]), &(Local_1309[1 /*21*/]), &Local_1226, 1, 1);
					__LIB_1__::func_683(&iLocal_1296, 1048576);
				}
			}
			break;
		case 10:
			if (func_343(iLocal_946[1], 1))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_946[1]))
				{
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(iLocal_946[1], 0);
				}
				PED::_0x58F7DB5BD8FA2288(iLocal_946[1]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_946[1]));
				__LIB_2__::func_593(&(Local_1309[1 /*21*/]), &Local_1226);
				*uParam0 = 11;
			}
			break;
		case 11:
			break;
	}
}

void func_158(var uParam0, int iParam1)
{
	if (Local_111.f_46)
	{
		if (*uParam0 < 10)
		{
			if (__LIB_0__::func_27(iLocal_1019, 64) && !__LIB_0__::func_27(iLocal_1019, 1048576))
			{
				func_344();
			}
			*uParam0 = 10;
		}
	}
	if (iLocal_110 >= 2 && !Local_111.f_46)
	{
		iLocal_1297[iParam1] = func_331(&(iLocal_946[iParam1]), &(Local_1309[iParam1 /*21*/]), 20f, &Local_1191, &(Local_111.f_192), 0f, 1, 0, "", __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 0, Local_111.f_98[iParam1], 0);
	}
	switch (*uParam0)
	{
		case 0:
			if (iLocal_110 > 0)
			{
				if (__LIB_2__::func_1(iLocal_946[2], 0, 1))
				{
					__LIB_1__::func_473(iLocal_946[2], joaat("WORLD_HUMAN_GUARD_SCOUT"), -1, 1, joaat("WORLD_HUMAN_GUARD_SCOUT_MALE_C"), 4f);
					ENTITY::SET_ENTITY_COORDS(iLocal_946[2], vLocal_1082, true, true, true, true);
				}
				__LIB_2__::func_602(&(Local_1191[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_1191[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_1191[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_1191[1 /*17*/]), 0, 0);
				if (iLocal_109 == 8)
				{
					fLocal_1439 = 0.57f;
				}
				else
				{
					fLocal_1439 = 0.26f;
				}
				*uParam0 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_27(iLocal_1019, 67108864))
			{
				if (((iLocal_109 == 7 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -175914443)) || ((iLocal_109 != 7 && iLocal_109 != 8) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -112513130))) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") > fLocal_1439))
				{
					PED::_0xF1C03A5352243A30(iLocal_946[2]);
					ENTITY::STOP_ENTITY_ANIM(iLocal_1426, "static_lever", Local_76[1 /*2*/], -8f);
					ANIMSCENE::START_ANIM_SCENE(Local_903.f_3);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_903.f_3, &cLocal_1112, true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_3, "bAction", true, false);
					func_346();
					ENTITY::PLAY_ENTITY_ANIM(iLocal_1425, &cLocal_59, Local_76[1 /*2*/], 1000f, false, true, true, 0.14f, 32768);
					PED::_0x7ABBD9E449E0DB00(iLocal_946[0], 0);
					__LIB_0__::func_172(iLocal_1092);
					__LIB_1__::func_683(&iLocal_1019, 64);
					*uParam0 = 2;
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_903.f_3, false) || (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_903.f_3, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_903.f_3) > 0.62f))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_946[2], Local_903.f_3))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_3, "plr", iLocal_946[2]);
				}
				__LIB_1__::func_473(iLocal_946[2], joaat("WORLD_HUMAN_GUARD_SCOUT"), -1, 0, joaat("WORLD_HUMAN_GUARD_SCOUT_MALE_C"), 1000f);
				*uParam0 = 3;
			}
			break;
		case 4:
			func_347(iLocal_946[2], uParam0, 5, Local_305[2 /*32*/].f_6, Local_305[2 /*32*/].f_9, 1, &(Local_1309[2 /*21*/]), &Local_1191);
			switch (iLocal_1297[2])
			{
				case 0:
					__LIB_2__::func_478(Global_35, iLocal_946[2], func_338("PLY_DEFUSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_411(&(Local_1191[0 /*17*/]), 0, 0);
					__LIB_1__::func_683(&iLocal_1296, 8192);
					fLocal_1050 = (fLocal_1050 + 3f);
					break;
				case 1:
					__LIB_2__::func_478(Global_35, iLocal_946[2], func_338("PLY_ANTAGONIZE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_411(&(Local_1191[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1191[1 /*17*/]), 0, 0);
					__LIB_1__::func_683(&iLocal_1296, 131072);
					__LIB_1__::func_148(&uLocal_994);
					break;
			}
			break;
		case 3:
			if (__LIB_0__::func_27(iLocal_1019, 524288))
			{
				__LIB_2__::func_411(&(Local_1191[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_1191[1 /*17*/]), 1, 0);
				*uParam0 = 5;
			}
			break;
		case 5:
			if (func_348() || (__LIB_1__::func_205(Global_35, iLocal_1094, 1, 0) && !__LIB_2__::func_1(iLocal_946[0], 0, 1)))
			{
				__LIB_1__::func_148(&uLocal_991);
				__LIB_2__::func_451(&(Local_1309[2 /*21*/]), 0);
				__LIB_2__::func_602(&(Local_1191[0 /*17*/]), __LIB_2__::func_460(8), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_1191[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				if (!__LIB_0__::func_27(iLocal_1296, 2))
				{
					__LIB_2__::func_411(&(Local_1191[0 /*17*/]), 1, 0);
				}
				else
				{
					__LIB_2__::func_411(&(Local_1191[0 /*17*/]), 0, 0);
				}
				__LIB_2__::func_411(&(Local_1191[1 /*17*/]), 1, 0);
				*uParam0 = 4;
			}
			else if (__LIB_0__::func_27(iLocal_1296, 65536) && __LIB_0__::func_27(iLocal_1296, 131072))
			{
			}
			else
			{
				if (!__LIB_0__::func_27(iLocal_1296, 65536) && !__LIB_0__::func_27(iLocal_1296, 8192))
				{
					if (!__LIB_2__::func_466(&(Local_1191[0 /*17*/]), 0, 0))
					{
						__LIB_2__::func_602(&(Local_1191[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						__LIB_2__::func_411(&(Local_1191[0 /*17*/]), 1, 0);
					}
				}
				else if (__LIB_2__::func_466(&(Local_1191[0 /*17*/]), 0, 0))
				{
					__LIB_2__::func_411(&(Local_1191[0 /*17*/]), 0, 0);
				}
				if (!__LIB_0__::func_27(iLocal_1296, 131072))
				{
					if (!__LIB_2__::func_466(&(Local_1191[1 /*17*/]), 0, 0))
					{
						__LIB_2__::func_602(&(Local_1191[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
						__LIB_2__::func_411(&(Local_1191[1 /*17*/]), 1, 0);
					}
				}
				else if (__LIB_2__::func_466(&(Local_1191[1 /*17*/]), 0, 0))
				{
					__LIB_2__::func_411(&(Local_1191[1 /*17*/]), 0, 0);
				}
				switch (iLocal_1297[2])
				{
					case 0:
						__LIB_2__::func_478(Global_35, iLocal_946[2], func_338("GRT_POS_DEPUTY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						__LIB_2__::func_411(&(Local_1191[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_1191[1 /*17*/]), 0, 0);
						__LIB_1__::func_148(&uLocal_1006);
						__LIB_1__::func_683(&iLocal_1296, 65536);
						*uParam0 = 6;
						break;
					case 1:
						__LIB_2__::func_478(Global_35, iLocal_946[2], func_338("GRT_NEG_DEPUTY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						__LIB_2__::func_411(&(Local_1191[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_1191[1 /*17*/]), 0, 0);
						__LIB_1__::func_148(&uLocal_1006);
						__LIB_1__::func_683(&iLocal_1296, 131072);
						*uParam0 = 7;
						break;
				}
			}
			break;
		case 6:
			if (func_348() && !__LIB_2__::func_1(iLocal_946[0], 0, 1))
			{
				*uParam0 = 5;
			}
			else if (__LIB_2__::func_227(0, 1, Global_35, 1))
			{
				func_351(1);
				*uParam0 = 5;
			}
			break;
		case 7:
			if (func_348() && !__LIB_2__::func_1(iLocal_946[0], 0, 1))
			{
				*uParam0 = 5;
			}
			else if (__LIB_2__::func_227(0, 1, Global_35, 1))
			{
				func_351(0);
				*uParam0 = 5;
			}
			break;
		case 8:
			func_337(2, 1075838976 /* Float: 2.5f */);
			break;
		case 9:
			func_337(2, 1075838976 /* Float: 2.5f */);
			break;
		case 10:
			if (func_343(iLocal_946[2], 2))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_946[2]));
				__LIB_2__::func_593(&(Local_1309[2 /*21*/]), &Local_1191);
				*uParam0 = 11;
			}
			break;
		case 11:
			break;
	}
}

void func_159(var uParam0, int iParam1)
{
	if (Local_111.f_46)
	{
		if (*uParam0 < 10)
		{
			*uParam0 = 10;
		}
	}
	if (!__LIB_0__::func_27(iLocal_1296, 2048))
	{
		if (iLocal_110 >= 2 && !Local_111.f_46)
		{
			iLocal_1297[iParam1] = func_331(&(iLocal_946[iParam1]), &(Local_1309[iParam1 /*21*/]), 20f, &Local_1156, &(Local_111.f_192), 0f, 1, 0, "", __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (__LIB_2__::func_1(iLocal_946[3], 0, 1))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_946[3], Local_305[3 /*32*/].f_6, Local_305[3 /*32*/].f_9, true, true, true);
				__LIB_1__::func_473(iLocal_946[3], joaat("WORLD_HUMAN_STARE_STOIC"), -1, 1, 0, 4f);
				__LIB_2__::func_602(&(Local_1156[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_1156[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_1156[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_1156[1 /*17*/]), 0, 0);
				*uParam0 = 1;
			}
			break;
		case 1:
			if (!Local_111.f_46)
			{
				if (iLocal_110 >= 2)
				{
					if (!__LIB_0__::func_27(iLocal_1019, 524288))
					{
						if (func_352())
						{
							__LIB_2__::func_593(&(Local_1309[iParam1 /*21*/]), &Local_1156);
							__LIB_2__::func_602(&(Local_1156[0 /*17*/]), __LIB_2__::func_460(8), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							__LIB_2__::func_602(&(Local_1156[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
							if (!__LIB_0__::func_27(iLocal_1296, 2))
							{
								__LIB_2__::func_411(&(Local_1156[0 /*17*/]), 1, 0);
							}
							else
							{
								__LIB_2__::func_411(&(Local_1156[0 /*17*/]), 0, 0);
							}
							__LIB_2__::func_411(&(Local_1156[1 /*17*/]), 1, 0);
							*uParam0 = 4;
						}
					}
					else
					{
						__LIB_2__::func_593(&(Local_1309[3 /*21*/]), &Local_1156);
						PED::SET_PED_CONFIG_FLAG(iLocal_946[3], 130, false);
						PED::SET_PED_CONFIG_FLAG(iLocal_946[3], 315, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_946[3], false);
						__LIB_1__::func_683(&iLocal_1296, 2048);
						TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_946[3], false);
						PED::_0xF1C03A5352243A30(iLocal_946[3]);
						PED::_0x58F7DB5BD8FA2288(iLocal_946[3]);
						func_336(iLocal_946[3], func_335(3), 0f, 0f, 0f, 0f, 0f, 1);
						PED::_0x2208438012482A1A(iLocal_946[3], false, false);
						*uParam0 = 8;
					}
				}
			}
			if (iLocal_110 >= 2)
			{
				if (!__LIB_0__::func_27(iLocal_1019, 524288))
				{
					switch (iLocal_1297[iParam1])
					{
						case 0:
							break;
						case 1:
							__LIB_2__::func_478(Global_35, iLocal_946[3], func_338("PLY_ANTAGONIZE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							__LIB_2__::func_411(&(Local_1156[1 /*17*/]), 0, 0);
							__LIB_1__::func_148(&uLocal_994);
							break;
					}
				}
			}
			break;
		case 2:
			break;
		case 4:
			func_347(iLocal_946[3], uParam0, 1, Local_305[3 /*32*/].f_6, Local_305[3 /*32*/].f_9, 0, &(Local_1309[3 /*21*/]), &Local_1156);
			switch (iLocal_1297[iParam1])
			{
				case 0:
					__LIB_2__::func_478(Global_35, iLocal_946[3], func_338("PLY_DEFUSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_411(&(Local_1156[0 /*17*/]), 0, 0);
					fLocal_1050 = (fLocal_1050 + 3f);
					__LIB_1__::func_683(&iLocal_1296, 2);
					__LIB_1__::func_148(&uLocal_997);
					break;
				case 1:
					__LIB_2__::func_478(Global_35, iLocal_946[3], func_338("PLY_ANTAGONIZE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_411(&(Local_1156[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1156[1 /*17*/]), 0, 0);
					__LIB_1__::func_148(&uLocal_994);
					break;
			}
			break;
		case 8:
			func_337(3, 1075838976 /* Float: 2.5f */);
			break;
		case 9:
			func_337(3, 1075838976 /* Float: 2.5f */);
			break;
		case 10:
			if (func_343(iLocal_946[3], 3))
			{
				PED::_0x58F7DB5BD8FA2288(iLocal_946[3]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_946[3]));
				__LIB_2__::func_593(&(Local_1309[3 /*21*/]), &Local_1156);
				*uParam0 = 11;
			}
			break;
		case 11:
			break;
	}
}

void func_160()
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_946[0]) || !__LIB_0__::func_27(iLocal_1019, 4))
	{
		return;
	}
	if (iLocal_110 >= 2)
	{
		func_353();
		func_354();
		func_355();
		func_356();
		if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
		{
			if (__LIB_2__::func_1(iLocal_946[0], 0, 1))
			{
				PED::SET_PED_RESET_FLAG(iLocal_946[0], 299, true);
			}
			func_357();
			func_358();
		}
	}
	if (iLocal_110 >= 2)
	{
		if (__LIB_0__::func_27(iLocal_1019, 1048576) && !__LIB_0__::func_27(iLocal_1019, 4194304))
		{
			iLocal_919 = 2;
		}
	}
	switch (iLocal_919)
	{
		case 0:
			if (__LIB_0__::func_27(iLocal_1019, 4))
			{
				if (!ANIMSCENE::_0x6F1F0B17109309DA(Local_903, "CRIMINAL"))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_946[0], Local_305[0 /*32*/].f_6, Local_305[0 /*32*/].f_9, true, true, true);
					if (PED::IS_PED_MALE(iLocal_946[0]))
					{
						TASK::TASK_PLAY_ANIM(iLocal_946[0], Local_76[0 /*2*/], "intro_idle", 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
					}
					else
					{
						TASK::TASK_PLAY_ANIM(iLocal_946[0], Local_76[0 /*2*/], "intro_idle_female_crim", 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
					}
				}
				iLocal_919 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_27(iLocal_1019, 65536))
			{
				if (__LIB_0__::func_27(iLocal_1019, 16384))
				{
					if (func_225())
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], "main_dialogue_a", 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
						TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], "intro_idle", 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
						__LIB_1__::func_474(iLocal_946[0], &iVar0, 0, 0, 1, 1);
					}
					__LIB_1__::func_683(&iLocal_1019, 65536);
				}
			}
			if (Local_111.f_46)
			{
				Local_111.f_44 = 1;
				__LIB_0__::func_172(iLocal_1093);
				if (__LIB_0__::func_27(iLocal_1019, 2048))
				{
					TASK::_0x673A8779D229BA5A(iLocal_946[0], ENTITY::GET_ENTITY_COORDS(iLocal_946[0], true, false), 0, 0);
					iLocal_919 = 5;
				}
				else if (__LIB_2__::func_1(iLocal_946[0], 0, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (!func_182(iLocal_945))
					{
						if (__LIB_3__::func_547(iLocal_946[0], Global_35, 1f) == 2)
						{
							if (PED::IS_PED_MALE(iLocal_946[0]))
							{
								TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[11 /*2*/].f_1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
							}
							else
							{
								TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[10 /*2*/].f_1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
							}
						}
						else if (PED::IS_PED_MALE(iLocal_946[0]))
						{
							TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[10 /*2*/].f_1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[11 /*2*/].f_1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
						}
					}
					TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 4f, -4f, -1, 16385, 0f, false, 0, false, 0, false);
					__LIB_1__::func_474(iLocal_946[0], &iVar0, 0, 0, 1, 1);
					iLocal_919 = 4;
				}
			}
			else if (iLocal_110 > 1)
			{
				func_361();
			}
			break;
		case 2:
			if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
			{
				ENTITY::_0x18FF3110CF47115D(iLocal_946[0], 7, 0);
				Local_111.f_44 = 1;
				func_72();
				if (__LIB_2__::func_1(iLocal_946[0], 0, 0) && !__LIB_0__::func_27(iLocal_1019, 4194304))
				{
					PED::SET_PED_TO_RAGDOLL(iLocal_946[0], 1500, 1500, 1, false, true, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_946[0], 449, true);
				}
				__LIB_1__::func_683(&iLocal_1019, 4194304);
				iLocal_919 = 3;
			}
			break;
		case 3:
			iLocal_1023++;
			if (!__LIB_0__::func_27(iLocal_1019, 2048))
			{
				if (iLocal_1023 >= func_362())
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_946[0]))
					{
						__LIB_2__::func_504(iLocal_946[0], 0);
						if (iLocal_984 == 38)
						{
							AUDIO::_PLAY_SOUND_FROM_POSITION("SCRIPT_NECK_SNAP", ENTITY::GET_ENTITY_COORDS(iLocal_946[0], false, false), 0, false, 0, true, 0);
						}
						else if (iLocal_984 == 76)
						{
							AUDIO::_PLAY_SOUND_FROM_POSITION("SCRIPT_NECK_SNAP_V", ENTITY::GET_ENTITY_COORDS(iLocal_946[0], false, false), 0, false, 0, true, 0);
						}
						else if (iLocal_984 == 105)
						{
							AUDIO::_PLAY_SOUND_FROM_POSITION("SCRIPT_NECK_SNAP_R", ENTITY::GET_ENTITY_COORDS(iLocal_946[0], false, false), 0, false, 0, true, 0);
						}
						else if (iLocal_984 == 5)
						{
							AUDIO::_PLAY_SOUND_FROM_POSITION("SCRIPT_NECK_SNAP_SD", ENTITY::GET_ENTITY_COORDS(iLocal_946[0], false, false), 0, false, 0, true, 0);
						}
						func_364(1);
						TASK::CLEAR_PED_TASKS(iLocal_946[0], true, false);
						__LIB_1__::func_864(iLocal_946[0], 1, 0);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_946[0]);
					}
					__LIB_1__::func_683(&iLocal_1019, 1);
					if (iLocal_109 == 4)
					{
						__LIB_3__::func_666(84, 7, 16, 0, 0);
					}
					iLocal_919 = 7;
				}
				else if (iLocal_1023 == 3)
				{
					func_366();
				}
			}
			else
			{
				iLocal_919 = 4;
			}
			break;
		case 4:
			if (__LIB_0__::func_27(iLocal_1019, 2048))
			{
				TASK::_0x673A8779D229BA5A(iLocal_946[0], ENTITY::GET_ENTITY_COORDS(iLocal_946[0], true, false), 0, 0);
				__LIB_0__::func_172(iLocal_1093);
				iLocal_919 = 5;
			}
			else if (!__LIB_0__::func_27(iLocal_1019, 64))
			{
				if (!__LIB_0__::func_27(iLocal_1019, 536870912))
				{
					if (!func_315(iLocal_946[0], 0, &(Local_111.f_5), &iLocal_1419, 0, Local_111.f_98[0]))
					{
						func_367();
					}
					else
					{
						__LIB_1__::func_683(&iLocal_1019, 536870912);
					}
				}
				else
				{
					func_368();
				}
			}
			break;
		case 5:
			if (__LIB_2__::func_1(iLocal_946[0], 0, 0))
			{
				if (func_369())
				{
					TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_946[0], true);
					__LIB_0__::func_172(iLocal_1093);
					__LIB_1__::func_148(&uLocal_1440);
					__LIB_1__::func_681(&iLocal_1019, 2097152);
					PED::_0xAE6004120C18DF97(iLocal_946[0], 0, 1);
					func_262(0);
					func_370();
					iLocal_919 = 6;
				}
			}
			break;
		case 6:
			func_370();
			if (__LIB_1__::func_313(&uLocal_1440, 10f))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1443, joaat("REL_COP"));
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_COP"), iLocal_1443);
			}
			break;
		case 7:
			break;
	}
}

bool func_161()
{
	if (__LIB_0__::func_27(iLocal_1019, 134217728))
	{
		return true;
	}
	if (!func_372(Local_903, &cLocal_1104))
	{
		return false;
	}
	if (!func_372(Local_903.f_1, &cLocal_1108))
	{
		return false;
	}
	if (!func_372(Local_903.f_2, &cLocal_1108))
	{
		return false;
	}
	if (!func_372(Local_903.f_3, &cLocal_1112))
	{
		return false;
	}
	if (!func_372(Local_911, &cLocal_1108))
	{
		return false;
	}
	if (!func_372(Local_911.f_1, &cLocal_1108))
	{
		return false;
	}
	if (!func_372(Local_911.f_2, &cLocal_1108))
	{
		return false;
	}
	if (!func_372(Local_911.f_3, &cLocal_1108))
	{
		return false;
	}
	__LIB_1__::func_683(&iLocal_1019, 134217728);
	return true;
}

bool func_162()
{
	if (__LIB_0__::func_27(iLocal_1019, 33554432))
	{
		return true;
	}
	if (ENTITY::_0x6BFBDC46139C45AB(Local_305[0 /*32*/].f_6) && ENTITY::_0x6BFBDC46139C45AB(Local_305[2 /*32*/].f_6))
	{
		__LIB_1__::func_683(&iLocal_1019, 33554432);
		return true;
	}
	return false;
}

bool func_163()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_818[0 /*12*/].f_8))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_818[1 /*12*/].f_8))
		{
			if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_818[1 /*12*/].f_8))
			{
				OBJECT::_0xB6CBD40F8EA69E8A(Local_818[1 /*12*/].f_8);
				if (ENTITY::DOES_ENTITY_EXIST(Local_818[1 /*12*/].f_8) && __LIB_2__::func_1(iLocal_946[0], 0, 1))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_818[1 /*12*/].f_8, iLocal_946[0], -1, PED::GET_PED_BONE_INDEX(iLocal_946[0], 14284), 0.02f, -0.11f, 0f, 0f, 0f, 0f, 183f, 88.5f, 97f, -1f, 0, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_946[0]))
				{
					iLocal_945 = PHYSICS::_ADD_ROPE_2(ENTITY::GET_ENTITY_COORDS(Local_818[0 /*12*/].f_8, true, false), 0f, 0f, 0f, fLocal_1031, 6, true, 31, -1f);
					AUDIO::_0xF092B6030D6FD49C(iLocal_945, "ROPE_SETTINGS_DEFAULT");
					PHYSICS::_0x522FA3F490E2F7AC(iLocal_945, 1, 1);
					PHYSICS::_0x8D59079C37C21D78(iLocal_945, 2f);
					PHYSICS::_0x462FF2A432733A44(iLocal_945, Local_818[0 /*12*/].f_8, Local_818[1 /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 0, "ropeAttach");
					PHYSICS::_0x3C6490D940FF5D0B(iLocal_945, 0, "ropeAttach", fLocal_1030, 0);
					PHYSICS::_0x76BAD9D538BCA1AA(iLocal_945, 0f);
					PHYSICS::_0xB40EA9E0D2E2F7F3(iLocal_945, 1f);
					PED::_0x86F0B6730C32AC14(iLocal_946[0], 1);
					PED::_0xEF371232BC6053E1(iLocal_946[0]);
					PED::_0x8101BA1C0B462412(iLocal_946[0], iLocal_945);
					__LIB_1__::func_683(&iLocal_1019, 4);
					return true;
				}
			}
		}
		return false;
	}
	return false;
}

void func_164()
{
	Local_1451.f_3 = iLocal_946[0];
	Local_1451.f_7 = 0;
	Local_1451.f_17 = 3;
	Local_1451.f_18 = 3;
	Local_1451.f_19 = 3;
	Local_1451.f_20 = 1;
	Local_1451.f_21 = 3;
	Local_1451.f_22 = 3;
}

void func_169()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	if (iLocal_109 == 4)
	{
		iVar1 = 2;
		iVar2 = 76;
	}
	else if (iLocal_109 == 5)
	{
		iVar1 = 1;
		iVar2 = 105;
	}
	else if (iLocal_109 == 6)
	{
		iVar1 = 4;
		iVar2 = 5;
	}
	else if (iLocal_109 == 8 || iLocal_109 == 0)
	{
		iVar1 = 2;
		iVar2 = 38;
	}
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (__LIB_4__::func_409(iVar2, iVar0) == Local_305[0 /*32*/].f_1)
			{
				__LIB_5__::func_54(iVar2, iVar0);
				__LIB_4__::func_272(iVar2, iVar0);
				func_381();
				__LIB_4__::func_269(1);
				bLocal_1476 = true;
			}
			iVar0++;
		}
	}
}

void func_170()
{
	if (iLocal_109 == 1)
	{
		if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("SC_WORLD_HUMAN_MOURNING"), false))
		{
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("SC_WORLD_HUMAN_MOURNING"), 15, 0, joaat("SCRIPT_COMMON_KNEEL_MOURNING_FEMALE_A"));
		}
	}
}

void func_173()
{
	if (!__LIB_0__::func_27(iLocal_1019, 16384))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903, "BOOL_Idle", true, false);
		}
		if (func_225())
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903.f_1))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_1, "LOOP_BOOL", true, false);
			}
		}
		__LIB_1__::func_683(&iLocal_1019, 16384);
	}
}

void func_174()
{
	if (__LIB_0__::func_27(iLocal_1019, 8192))
	{
		return;
	}
	if (__LIB_0__::func_27(iLocal_1019, 4194304))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903.f_1))
		{
			if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_903.f_1, "LOOP_BOOL") == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_1, "LOOP_BOOL", true, false);
			}
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903.f_2))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_2, "LOOP_BOOL", true, false);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911, "LOOP_BOOL", true, false);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911.f_1))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911.f_1, "LOOP_BOOL", true, false);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911.f_2))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911.f_2, "LOOP_BOOL", true, false);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911.f_3))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911.f_3, "LOOP_BOOL", true, false);
		}
		__LIB_1__::func_683(&iLocal_1019, 8192);
	}
}

void func_175(bool bParam0)
{
	int iVar0;
	if ((iLocal_109 != 1 || Local_111.f_46) || !__LIB_2__::func_1(iLocal_946[4], 0, 1))
	{
		return;
	}
	if (!__LIB_0__::func_27(iLocal_1019, 8388608))
	{
		if (!__LIB_2__::func_313(joaat("SC_WORLD_HUMAN_MOURNING")))
		{
			func_170();
		}
		if (((ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_903.f_1, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_903.f_1) > 0.985f) || bParam0) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_903.f_1, false))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_903.f_1, false))
			{
			}
			__LIB_3__::func_319(Local_903.f_1);
			__LIB_0__::func_172(iLocal_1100);
			if (!Local_111.f_46)
			{
				__LIB_2__::func_478(iLocal_946[4], iLocal_946[5], func_338("RUN_HOME"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_946[4]) || TASK::_0x0C3CB2E600C8977D(iLocal_946[4], 1))
			{
				PED::SET_PED_RESET_FLAG(iLocal_946[4], 12, true);
			}
			func_390(iLocal_946[4]);
			func_391();
			__LIB_1__::func_683(&iLocal_1019, 8388608);
		}
	}
	else
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_946[4]) || TASK::_0x0C3CB2E600C8977D(iLocal_946[4], 1))
		{
			PED::SET_PED_RESET_FLAG(iLocal_946[4], 12, true);
		}
		if (!__LIB_0__::func_27(iLocal_1020, 16777216))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, iLocal_946[4]))
			{
				if (PED::_0xEC6935EBE0847B90(iLocal_946[4], vLocal_1051) || !PED::IS_PED_USING_ANY_SCENARIO(iLocal_946[4]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_SMART_FLEE_PED(0, Global_35, 100f, -1, 128, 1.5f, 0);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
					__LIB_1__::func_474(iLocal_946[4], &iVar0, 0, 0, 1, 1);
					__LIB_2__::func_478(iLocal_946[4], Global_35, "RE_PH_VAL_V1_BUMP_FLEE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_1020, 16777216);
				}
			}
			else if (!__LIB_0__::func_27(iLocal_1019, 4096))
			{
				func_392();
			}
		}
	}
}

void func_176()
{
	if ((((iLocal_109 != 7 || Local_111.f_46) || __LIB_0__::func_27(iLocal_1019, 8388608)) || !__LIB_2__::func_1(iLocal_946[6], 0, 1)) || !__LIB_2__::func_1(iLocal_946[7], 0, 1))
	{
		return;
	}
	if ((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_946[6], -1) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_946[7], -1)) && __LIB_0__::func_27(iLocal_1019, 1))
	{
		switch (iLocal_1029)
		{
			case 0:
				if (__LIB_2__::func_227(0, 1, iLocal_946[6], 1))
				{
					__LIB_2__::func_478(iLocal_946[6], iLocal_946[7], "RE_PH_STD_NASTY_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1029++;
				}
				break;
			case 1:
				if (__LIB_2__::func_227(0, 1, iLocal_946[6], 1))
				{
					__LIB_2__::func_478(iLocal_946[7], iLocal_946[6], "RE_PH_STD_NO_CARE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1029++;
				}
				break;
			case 2:
				if (__LIB_2__::func_227(0, 1, iLocal_946[7], 1))
				{
					__LIB_2__::func_478(iLocal_946[6], iLocal_946[7], "RE_PH_STD_NASTY_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					func_393(iLocal_946[7]);
					iLocal_1029++;
				}
				break;
			case 3:
				if (__LIB_2__::func_227(0, 1, iLocal_946[6], 1))
				{
					func_393(iLocal_946[6]);
					__LIB_1__::func_683(&iLocal_1019, 8388608);
				}
				break;
		}
	}
}

bool func_177()
{
	int iVar0;
	bool bVar1;
	if (!__LIB_0__::func_27(iLocal_1019, 64))
	{
		return false;
	}
	if (iLocal_1429 == 0)
	{
		return true;
	}
	bVar1 = true;
	iVar0 = 4;
	while (iVar0 <= 15)
	{
		if (__LIB_2__::func_1(iLocal_946[iVar0], 0, 1))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_946[iVar0], -1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_946[iVar0], 242628503, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_946[iVar0], 242628503, true) != 0)
				{
					if (iLocal_109 == 7 && (iVar0 == 6 || iVar0 == 7))
					{
						func_394(iLocal_946[iVar0], 0, 0, 1065353216 /* Float: 1f */, 0, 0, 0, 0);
					}
					else
					{
						func_394(iLocal_946[iVar0], 0, 0, 1065353216 /* Float: 1f */, 0, 0, 0, 1);
					}
				}
			}
			else
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		iLocal_1429 = 0;
	}
	return false;
}

void func_178()
{
	if (iLocal_980 != 0)
	{
		if (!LAW::_0x40851BCC33ACD9AB(iLocal_980))
		{
			if (iLocal_980 != iLocal_946[0])
			{
				if (iLocal_109 == 1)
				{
					if (iLocal_980 != iLocal_946[4] && iLocal_980 != iLocal_946[5])
					{
						__LIB_0__::func_172(iLocal_1092);
						TASK::CLEAR_PED_TASKS(iLocal_980, true, false);
						EVENT::_0x7C511E91738A0828(iLocal_980, Global_35, 14, 0);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_980);
						iLocal_1025++;
					}
				}
				else
				{
					__LIB_0__::func_172(iLocal_1092);
					TASK::CLEAR_PED_TASKS(iLocal_980, true, false);
					EVENT::_0x7C511E91738A0828(iLocal_980, Global_35, 14, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_980);
					iLocal_1025++;
				}
			}
		}
	}
}

void func_179()
{
	if (__LIB_0__::func_27(iLocal_1019, 1024))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_1094, 1, 0) && Local_111.f_46)
		{
			__LIB_4__::func_367(iLocal_946[3], iLocal_1094);
			__LIB_4__::func_367(iLocal_946[2], iLocal_1094);
			__LIB_4__::func_367(iLocal_946[1], iLocal_1094);
			func_74(iLocal_1094, 0, 16);
			__LIB_1__::func_681(&iLocal_1019, 1024);
		}
	}
}

void func_180()
{
	int iVar0;
	int iVar1;
	if (!Local_111.f_46)
	{
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_985))
	{
		__LIB_1__::func_148(&uLocal_985);
	}
	iVar0 = 4;
	while (iVar0 <= 15)
	{
		if (__LIB_2__::func_1(iLocal_946[iVar0], 0, 0))
		{
			if (!func_396(iVar0))
			{
				if (__LIB_0__::func_265(&uLocal_985) >= fLocal_1033[iVar0])
				{
					func_397(iVar0);
					if (TASK::PED_HAS_USE_SCENARIO_TASK(iLocal_946[iVar0]))
					{
						PED::_0x802092B07E3B1EEA(iLocal_946[iVar0], Global_36, 3);
					}
					if (((__LIB_0__::func_27(iLocal_1020, 131072) || __LIB_0__::func_27(iLocal_1020, 4096)) || __LIB_0__::func_27(iLocal_1020, 32768)) || (iLocal_1420 == 0 && func_139() == 0))
					{
						PED::_0x2208438012482A1A(iLocal_946[iVar0], false, false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_946[iVar0]));
					}
					else
					{
						if (iLocal_1028 < 5)
						{
							if (AUDIO::_0xF0EE69F500952FA5(iLocal_946[iVar0]))
							{
								__LIB_2__::func_478(iLocal_946[iVar0], 0, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_SHOUTED_CLEAR"), 1, 0, 0);
								iLocal_1028++;
							}
						}
						TASK::_0x2E1D6D87346BB7D2(iLocal_946[iVar0], Global_35, 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						if ((iVar0 % 4) == 2)
						{
							TASK::TASK_REACT(0, Global_35, Global_36, "Flee_Human_MajorThreat", MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 1f), 0, 4);
						}
						if ((iVar0 % 2) == 0)
						{
							TASK::TASK_SMART_FLEE_PED(0, Global_35, 100f, -1, 8192, 3f, 0);
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(0, Global_35, 100f, -1, 8448, 3f, 0);
						}
						__LIB_1__::func_474(iLocal_946[iVar0], &iVar1, 0, 0, 1, 1);
						if (iLocal_109 == 1 && iLocal_946[iVar0] == iLocal_946[4])
						{
						}
						else
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_946[iVar0]));
						}
						PED::_0x2208438012482A1A(iLocal_946[iVar0], false, false);
					}
					func_398(&iLocal_1020, iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_181()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	iVar0 = __LIB_4__::func_374(&iLocal_946, 1, 1, 3, 0f, 30f);
	iVar3 = 0;
	if (iVar0 != 0 && iVar0 != iLocal_946[2])
	{
		switch (iLocal_109)
		{
			case 3:
				if (iLocal_984 == 76)
				{
					if (iVar0 == iLocal_946[3] || iVar0 == iLocal_946[1])
					{
						sVar2 = "RE_PH_VAL_V3_AGGRO";
					}
				}
				else if (iLocal_984 == 105)
				{
					if (iVar0 == iLocal_946[1])
					{
						sVar2 = "RE_PH_RHD_V2_AGGRO";
					}
				}
				break;
			case 4:
				sVar2 = "RE_PH_VAL_V4_AGGRO";
				break;
			case 5:
				if (iVar0 == iLocal_946[1])
				{
					sVar2 = "RE_PH_RHD_V3_AGGRO";
				}
				break;
			case 6:
				if (iVar0 == iLocal_946[1])
				{
					sVar2 = "RE_PH_STD_V3_AGGRO";
				}
				break;
			case 7:
				if (iVar0 == iLocal_946[3])
				{
					sVar2 = "GENERIC_ANGRY_SHOUT";
				}
				break;
			case 0:
				if (iVar0 == iLocal_946[3])
				{
					sVar2 = "OPENS_FIRE";
				}
				break;
			case 8:
				if (iVar0 == iLocal_946[3])
				{
					sVar2 = "OPENS_FIRE";
				}
				break;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			sVar2 = func_338("AGGRO");
		}
	}
	else
	{
		if (iVar0 == iLocal_946[2])
		{
			switch (iLocal_109)
			{
				case 5:
					sVar2 = "GENERIC_ANGRY_SHOUT";
					break;
				case 6:
					sVar2 = "ITS_THEM_NEUTRAL_EXTREME";
					break;
				case 7:
					sVar2 = "ITS_THEM_NEUTRAL_EXTREME";
					break;
				case 0:
					sVar2 = "OPENS_FIRE";
					iVar3 = 2;
					break;
				case 8:
					sVar2 = "OPENS_FIRE";
					iVar3 = 2;
					break;
			}
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2) || iVar0 == 0)
		{
			iVar1 = 1;
			while (iVar1 <= 3)
			{
				if (__LIB_2__::func_1(iLocal_946[iVar1], 0, 0) && __LIB_2__::func_118(iLocal_946[iVar1], 1, 1) < 50f)
				{
					iVar0 = iLocal_946[iVar1];
				}
				iVar1++;
			}
		}
	}
	if (iVar0 != 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			__LIB_2__::func_478(iVar0, Global_35, sVar2, 0, -1082130432 /* Float: -1f */, iVar3, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_FORCE_SHOUTED_CLEAR"), 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_122(iVar0, "GENERIC_INSULT_HIGH_MALE", 1744022339, 0, 1, 0, 0, 1);
		}
	}
}

bool func_182(int iParam0)
{
	if (!PHYSICS::DOES_ROPE_EXIST(iParam0))
	{
		return true;
	}
	return false;
}

bool func_183()
{
	if (iLocal_110 >= 2)
	{
		if ((__LIB_0__::func_27(iLocal_1019, 1) && !Local_111.f_46) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_946[0]))
		{
			return true;
		}
	}
	return false;
}

bool func_225()
{
	if (iLocal_109 == 1 || iLocal_109 == 7)
	{
		return true;
	}
	return false;
}

void func_262(bool bParam0)
{
	PED::SET_PED_CONFIG_FLAG(iLocal_946[0], 137, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_946[0], 44, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_946[0], 26, bParam0);
}

float func_265()
{
	switch (iLocal_109)
	{
		case 0:
			return 253.5f;
		case 8:
			return 253.5f;
		case 1:
			return 10f;
		case 3:
			if (__LIB_1__::func_898() == 9)
			{
				return 283f;
			}
			break;
		case 4:
			return 283f;
		case 5:
			break;
		case 6:
			return 75f;
		case 7:
			return 75f;
	}
	return 0f;
}

Vector3 func_266()
{
	switch (iLocal_109)
	{
		case 0:
			return -762.565f, -1248.871f, 42.458f;
		case 8:
			return -762.565f, -1248.871f, 42.458f;
		case 1:
			return -324.1777f, 734.2256f, 116.4041f;
		case 3:
			if (__LIB_1__::func_898() == 9)
			{
				return -324.1151f, 733.5054f, 116.3617f;
			}
			else
			{
				return 1368.575f, -1212.47f, 82.467f;
			}
			break;
		case 4:
			return -324.1151f, 733.5054f, 116.3617f;
		case 5:
			return 1368.575f, -1212.47f, 82.42701f;
		case 6:
			return 2690.224f, -1122.174f, 49.6898f;
		case 7:
			return 2690.224f, -1122.174f, 49.6898f;
	}
	return 0f, 0f, 0f;
}

float func_267()
{
	switch (iLocal_109)
	{
		case 0:
			return 135.644f;
		case 8:
			return 135.644f;
		case 1:
			return 270.8f;
		case 3:
			if (__LIB_1__::func_898() == 9)
			{
				return 270.8f;
			}
			else
			{
				return -150.835f;
			}
			break;
		case 4:
			return 270.8f;
		case 5:
			return -150.835f;
		case 6:
			return -23.9f;
		case 7:
			return -23.9f;
	}
	return 0f;
}

Vector3 func_268()
{
	switch (iLocal_109)
	{
		case 0:
			return -759.083f, -1250.656f, 42.492f;
		case 8:
			return -759.083f, -1250.656f, 42.492f;
		case 1:
			return -326.1004f, 736.1454f, 116.2898f;
		case 3:
			if (__LIB_1__::func_898() == 9)
			{
				return -325.5957f, 734.0959f, 116.2971f;
			}
			else
			{
				return 1364.445f, -1217.195f, 82.6203f;
			}
			break;
		case 4:
			return -325.5957f, 734.0959f, 116.2971f;
		case 5:
			return 1364.445f, -1217.195f, 82.6203f;
		case 6:
			return 2686.455f, -1120.031f, 49.67808f;
		case 7:
			return 2686.455f, -1120.031f, 49.67808f;
	}
	return 0f, 0f, 0f;
}

float func_269()
{
	switch (iLocal_109)
	{
		case 0:
			return 147.835f;
		case 8:
			return 147.835f;
		case 1:
			return 265.8f;
		case 3:
			if (__LIB_1__::func_898() == 9)
			{
				return 285.8f;
			}
			else
			{
				return 276.149f;
			}
			break;
		case 4:
			return 285.8f;
		case 5:
			return 276.149f;
		case 6:
			return -10.394f;
		case 7:
			return -10.394f;
	}
	return 0f;
}

Vector3 func_270()
{
	switch (iLocal_109)
	{
		case 0:
			return -764.209f, -1251.806f, 42.45041f;
		case 8:
			return -764.209f, -1251.806f, 42.45041f;
		case 1:
			return -322.4158f, 730.6044f, 116.5431f;
		case 3:
			if (__LIB_1__::func_898() == 9)
			{
				return -325.0915f, 728.8259f, 116.2582f;
			}
			else
			{
				return 1366.963f, -1216.577f, 82.7131f;
			}
			break;
		case 4:
			return -325.0915f, 728.8259f, 116.2582f;
		case 5:
			return 1366.963f, -1216.577f, 82.7131f;
		case 6:
			break;
		case 7:
			break;
	}
	return 0f, 0f, 0f;
}

float func_271()
{
	switch (iLocal_109)
	{
		case 0:
			return 180f;
		case 8:
			return 180f;
		case 1:
			return 315.8f;
		case 3:
			if (__LIB_1__::func_898() == 9)
			{
				return 310.8f;
			}
			else
			{
				return 290f;
			}
			break;
		case 4:
			return 310.8f;
		case 5:
			return 290f;
		case 6:
			break;
		case 7:
			break;
	}
	return 0f;
}

Vector3 func_272()
{
	switch (iLocal_109)
	{
		case 0:
			return -753.802f, -1249.84f, 42.544f;
		case 8:
			return -753.802f, -1249.84f, 42.544f;
		case 1:
			return -326.6582f, 728.1327f, 116.1422f;
		case 3:
			if (__LIB_1__::func_898() == 9)
			{
				return -328.0656f, 730.264f, 116.14f;
			}
			break;
		case 4:
			return -328.0656f, 730.264f, 116.14f;
		case 5:
			break;
		case 6:
			return 2685.671f, -1122.667f, 49.69695f;
		case 7:
			return 2685.671f, -1122.667f, 49.69695f;
	}
	return 0f, 0f, 0f;
}

float func_273()
{
	switch (iLocal_109)
	{
		case 0:
			return 133.875f;
		case 8:
			return 133.875f;
		case 1:
			return 290.8f;
		case 3:
			if (__LIB_1__::func_898() == 9)
			{
				return 270.8f;
			}
			break;
		case 4:
			return 270.8f;
		case 5:
			return 0f;
		case 6:
			return 344.376f;
		case 7:
			return 344.376f;
	}
	return 0f;
}

Vector3 func_274()
{
	switch (iLocal_109)
	{
		case 0:
			break;
		case 8:
			break;
		case 1:
			return -328.13f, 733.9528f, 116.2449f;
		case 3:
			if (__LIB_1__::func_898() == 9)
			{
				return -326.8083f, 733.2062f, 116.2685f;
			}
			break;
		case 4:
			return -326.8083f, 733.2062f, 116.2685f;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
	}
	return 0f, 0f, 0f;
}

float func_275()
{
	switch (iLocal_109)
	{
		case 0:
			break;
		case 8:
			break;
		case 1:
			return 270.8f;
		case 3:
			if (__LIB_1__::func_898() == 9)
			{
				return 270.8f;
			}
			break;
		case 4:
			return 270.8f;
		case 5:
			return 0f;
		case 6:
			break;
		case 7:
			break;
			break;
	}
	return 0f;
}

bool func_313()
{
	if (__LIB_0__::func_27(iLocal_1019, 4))
	{
		if (__LIB_0__::func_27(iLocal_1019, 2048) && !__LIB_0__::func_27(iLocal_1019, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_314()
{
	int iVar0;
	if (Local_111.f_46)
	{
		return false;
	}
	iVar0 = __LIB_0__::func_399(Global_35, 1, 0, 0);
	if ((iVar0 == joaat("WEAPON_LASSO") && PED::IS_PED_SHOOTING(Global_35)) && __LIB_9__::func_260(iLocal_946[0], 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */))
	{
		return true;
	}
	return false;
}

bool func_315(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_503(iParam0, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_507(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_508(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((func_513(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && func_515(iParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_513(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && func_515(iParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *iParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_3__::func_396(iParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_521(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_3__::func_399(iParam0, iParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_3__::func_668(iParam0, iParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_322()
{
	if (__LIB_0__::func_27(iLocal_1296, 512))
	{
		return;
	}
	if (iLocal_1303[4] > 0)
	{
		iLocal_1297[4] = func_331(&(iLocal_946[4]), &(Local_1309[4 /*21*/]), 20f, &Local_1121, &(Local_111.f_192), 0f, 1, 0, "", __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 0, Local_111.f_98[4], 0);
	}
	switch (iLocal_1303[4])
	{
		case 0:
			if (!__LIB_0__::func_27(iLocal_1296, 1))
			{
				__LIB_2__::func_593(&(Local_1309[4 /*21*/]), &Local_1121);
				__LIB_2__::func_602(&(Local_1121[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_1121[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_1121[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_1121[1 /*17*/]), 0, 0);
				__LIB_1__::func_683(&iLocal_1296, 1);
			}
			iLocal_1303[4] = 1;
			break;
		case 1:
			if (__LIB_0__::func_27(iLocal_1019, 4096))
			{
				__LIB_2__::func_411(&(Local_1121[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_1121[1 /*17*/]), 1, 0);
				__LIB_1__::func_471(&(Local_1121[0 /*17*/]), 8);
				__LIB_1__::func_471(&(Local_1121[1 /*17*/]), 8);
				iLocal_1303[4] = 5;
			}
			break;
		case 4:
			break;
		case 5:
			switch (iLocal_1297[4])
			{
				case 0:
					__LIB_2__::func_478(Global_35, iLocal_946[4], "RE_PH_VAL_V1_GRT_POS_WIFE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_411(&(Local_1121[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1121[1 /*17*/]), 0, 0);
					__LIB_1__::func_683(&iLocal_1296, 256);
					__LIB_1__::func_683(&iLocal_1296, 1024);
					iLocal_1303[4] = 6;
					break;
				case 1:
					__LIB_2__::func_478(Global_35, iLocal_946[4], "RE_PH_VAL_V1_GRT_NEG_WIFE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					func_81(8000);
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_946[4], &Local_920);
					__LIB_2__::func_411(&(Local_1121[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1121[1 /*17*/]), 0, 0);
					__LIB_1__::func_683(&iLocal_1296, 256);
					iLocal_1303[4] = 6;
					break;
			}
			break;
		case 6:
			if (__LIB_2__::func_227(-2f, 1, Global_35, 1))
			{
				__LIB_2__::func_478(iLocal_946[4], Global_35, "INTIMIDATED_GEN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_946[4], 130, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_946[4], false);
				__LIB_2__::func_603(&(iLocal_946[4]), &(Local_1309[4 /*21*/]), &Local_1121, 1, 1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_946[4], 7, 2, 1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_946[4], 3, 2, 1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_946[4], 4, 2, 1);
				__LIB_1__::func_683(&iLocal_1296, 512);
				iLocal_1303[4] = 16;
			}
			break;
		case 16:
			break;
	}
}

bool func_324()
{
	if (((iLocal_109 == 0 || iLocal_109 == 5) || iLocal_109 == 6) || iLocal_109 == 8)
	{
		return true;
	}
	if (iLocal_109 == 3)
	{
		if (__LIB_0__::func_27(iLocal_1296, 4096))
		{
			return true;
		}
	}
	if (iLocal_109 == 4)
	{
		if (__LIB_0__::func_27(iLocal_1296, 4096))
		{
			return true;
		}
	}
	return false;
}

int func_326(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		if (__LIB_1__::func_205((*iParam0)[iVar1], iParam1, 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_327()
{
	if (!__LIB_2__::func_1(iLocal_946[1], 0, 0))
	{
		return;
	}
	switch (iLocal_1430)
	{
		case 0:
			if (func_225())
			{
				if ((iLocal_109 == 1 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -107150995)) || (iLocal_109 == 7 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1365010891)))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("LAW_INTRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else
			{
				iLocal_1430++;
			}
			break;
		case 1:
			if (func_225())
			{
				if ((iLocal_109 == 1 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -223971469)) || (iLocal_109 == 7 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1569813648)))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("LAW_CRIME"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else
			{
				iLocal_1430++;
			}
			break;
		case 2:
			if (func_225())
			{
				if ((iLocal_109 == 1 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1516677693)) || (iLocal_109 == 7 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 655261354)))
				{
					__LIB_2__::func_478(iLocal_946[1], iLocal_946[0], func_338("LAST_WORDS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_1019, 67108864);
					iLocal_1430++;
				}
			}
			else
			{
				iLocal_1430++;
			}
			break;
		case 3:
			if (func_225())
			{
				if ((iLocal_109 == 1 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -273859117)) || (iLocal_109 == 7 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 962599897)))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("POST_HANG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else
			{
				iLocal_1430++;
			}
			break;
		case 4:
			if (func_225())
			{
				if ((iLocal_109 == 1 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -793724859)) || (iLocal_109 == 7 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 414664215)))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("JUSTICE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else
			{
				iLocal_1430++;
			}
			break;
		case 5:
			if (iLocal_109 == 7)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1349088127))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("JUSTICE_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else
			{
				iLocal_1430++;
			}
			break;
		case 6:
			if (iLocal_109 == 8)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1726099939))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("INTRO_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1817889081))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("INTRO_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 3)
			{
				if (iLocal_984 == 76)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_VAL_V3_DROWN_INTRO_A")))
					{
						__LIB_2__::func_478(iLocal_946[1], 0, "RE_PH_VAL_V3_DROWN_INTRO_A", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
				else if (iLocal_984 == 105)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_RHD_V2_DROWN_INTRO_A")))
					{
						__LIB_2__::func_478(iLocal_946[1], 0, "RE_PH_RHD_V2_DROWN_INTRO_A", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
			}
			else if (iLocal_109 == 6)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1717656596))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("INTRO_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 5)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1445688180))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("INTRO_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01", 1))
			{
				__LIB_2__::func_478(iLocal_946[1], 0, func_338("INTRO_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
				iLocal_1430++;
			}
			break;
		case 7:
			if (iLocal_109 == 8)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 343917799))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("INTRO_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 2123918772))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("INTRO_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 3)
			{
				if (iLocal_984 == 76)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_VAL_V3_DROWN_INTRO_B")))
					{
						__LIB_2__::func_478(iLocal_946[1], 0, "RE_PH_VAL_V3_DROWN_INTRO_B", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
				else if (iLocal_984 == 105)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_RHD_V2_DROWN_INTRO_B")))
					{
						__LIB_2__::func_478(iLocal_946[1], 0, "RE_PH_RHD_V2_DROWN_INTRO_B", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
			}
			else if (iLocal_109 == 6)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 677273707))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("INTRO_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 5)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 457961337))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("INTRO_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_02", 1))
			{
				__LIB_2__::func_478(iLocal_946[1], 0, func_338("INTRO_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
				iLocal_1430++;
			}
			break;
		case 8:
			if (iLocal_109 == 8)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1030184686))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("INTRO_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1203830790))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("INTRO_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 3)
			{
				if (iLocal_984 == 76)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_VAL_V3_DROWN_INTRO_C")))
					{
						__LIB_2__::func_478(iLocal_946[1], 0, "RE_PH_VAL_V3_DROWN_INTRO_C", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
				else if (iLocal_984 == 105)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_RHD_V2_DROWN_INTRO_C")))
					{
						__LIB_2__::func_478(iLocal_946[1], 0, "RE_PH_RHD_V2_DROWN_INTRO_C", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
			}
			else if (iLocal_109 == 6)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 969769709))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("INTRO_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 5)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -43666515))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("INTRO_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03", 1))
			{
				__LIB_2__::func_478(iLocal_946[1], iLocal_946[0], func_338("INTRO_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
				iLocal_1430++;
			}
			break;
		case 9:
			switch (iLocal_109)
			{
				case 8:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -31975006))
					{
						__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
					break;
				case 0:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -770777874))
					{
						__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
					break;
				case 5:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 855458316))
					{
						__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
					break;
				case 6:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1116500892))
					{
						__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
					break;
				case 3:
					if (iLocal_984 == 76)
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1353289895))
						{
							__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
							iLocal_1430++;
						}
					}
					else if (iLocal_984 == 105)
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1525446693))
						{
							__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
							iLocal_1430++;
						}
					}
					break;
				case 4:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "dead_john_speech", 1))
					{
						__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
					break;
			}
			break;
		case 10:
			if (iLocal_109 == 8)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 56960060))
				{
					func_534();
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1253268630))
				{
					func_534();
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 3)
			{
				if (iLocal_984 == 76)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1191738721))
					{
						__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
				else if (iLocal_984 == 105)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_RHD_V2_DROWN_DESC_B")))
					{
						__LIB_2__::func_478(iLocal_946[1], 0, "RE_PH_RHD_V2_DROWN_DESC_B", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
			}
			else if (iLocal_109 == 6)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 483141660))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 5)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1594595880))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (!__LIB_0__::func_75(&uLocal_1012))
			{
				__LIB_1__::func_148(&uLocal_1012);
			}
			else if (__LIB_0__::func_265(&uLocal_1012) > 6.5f && __LIB_2__::func_227(0, 1, iLocal_946[1], 1))
			{
				__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_1012);
				iLocal_1430++;
			}
			break;
		case 11:
			if (iLocal_109 == 8)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -240221997))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1615657336))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 6)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 251563137))
				{
					func_534();
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 5)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1924270420))
				{
					func_534();
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 3)
			{
				if (iLocal_984 == 105)
				{
					iLocal_1430++;
				}
				else if (iLocal_984 == 76)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1929696605))
					{
						__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
			}
			else if (__LIB_0__::func_265(&uLocal_1012) > 5.5f && __LIB_2__::func_227(0, 1, iLocal_946[1], 1))
			{
				__LIB_1__::func_148(&uLocal_1012);
				__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_C"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				iLocal_1430++;
			}
			break;
		case 12:
			if (iLocal_109 == 3)
			{
				if (iLocal_984 == 76)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1625960744))
					{
						__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_D"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
				else
				{
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 4)
			{
				if (__LIB_0__::func_265(&uLocal_1012) > 6.5f && __LIB_2__::func_227(0, 1, iLocal_946[1], 1))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("DESC_D"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else
			{
				iLocal_1430++;
			}
			break;
		case 13:
			if (iLocal_109 == 8)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1707459177))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1358507404))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 3)
			{
				if (iLocal_984 == 76)
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "drown_murder_speech") >= 0.99f)
					{
						func_534();
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1429892085))
					{
						func_534();
						__LIB_2__::func_478(iLocal_946[1], 0, func_338("HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1483046590))
				{
					func_534();
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 6)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1549180221))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 5)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1028405345))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_01", 1))
			{
				func_534();
				__LIB_2__::func_478(iLocal_946[1], iLocal_946[0], func_338("HANG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				iLocal_1430++;
			}
			break;
		case 14:
			if (iLocal_109 == 8)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 267305636))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("LEVER"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_1019, 67108864);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 904913835))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("LEVER"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_1019, 67108864);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 3)
			{
				if (iLocal_984 == 76)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1485395334))
					{
						__LIB_1__::func_683(&iLocal_1019, 67108864);
						__LIB_2__::func_478(iLocal_946[1], 0, func_338("LEVER"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -150311700))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("LEVER"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_1019, 67108864);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 6)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 180043775))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("LEVER"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_1019, 67108864);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 5)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1723680966))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("LEVER"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
			{
				__LIB_2__::func_478(iLocal_946[1], iLocal_946[2], func_338("LEVER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_1019, 67108864);
				iLocal_1430++;
			}
			break;
		case 15:
			if (iLocal_109 == 8)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -499322419))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("POST_HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1515657798))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("POST_HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 3)
			{
				if (iLocal_984 == 76)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1773213251))
					{
						__LIB_2__::func_478(iLocal_946[1], 0, func_338("POST_HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 2122944737))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("POST_HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 6)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1193065802))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("POST_HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 5)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1979997563))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("POST_HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
				else if (!__LIB_0__::func_27(iLocal_1019, 67108864))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.62f)
					{
						__LIB_1__::func_683(&iLocal_1019, 67108864);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03", 1))
			{
				__LIB_2__::func_478(iLocal_946[1], 0, func_338("POST_HANG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				iLocal_1430++;
			}
			break;
		case 16:
			if (func_225())
			{
				iLocal_1430++;
			}
			else if (iLocal_109 == 8)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1048947961))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("JUSTICE"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -312231525))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("JUSTICE"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 3)
			{
				if (iLocal_984 == 76)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 23580437))
					{
						__LIB_2__::func_478(iLocal_946[1], 0, func_338("JUSTICE"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1815770417))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("JUSTICE"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 6)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -385244152))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("JUSTICE"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 5)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -731493435))
				{
					__LIB_2__::func_478(iLocal_946[1], 0, func_338("JUSTICE"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1925903126))
			{
				__LIB_2__::func_478(iLocal_946[1], 0, func_338("JUSTICE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				iLocal_1430++;
			}
			break;
		case 17:
			break;
	}
}

void func_328()
{
	if (iLocal_110 <= 1)
	{
		return;
	}
	func_535();
	if (iLocal_109 == 7)
	{
		switch (iLocal_1432)
		{
			case 0:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "main_dialogue") >= 0.355f)
				{
					__LIB_2__::func_478(iLocal_946[5], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 1:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "main_dialogue") >= 0.418f)
				{
					__LIB_2__::func_478(iLocal_946[9], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 2:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "main_dialogue") >= 0.512f)
				{
					__LIB_2__::func_478(iLocal_946[14], 0, "GENERIC_SHOCKED_DISBELIEF", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1196222537, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 3:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "main_dialogue") >= 0.779f)
				{
					__LIB_2__::func_478(iLocal_946[9], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 4:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "main_dialogue") >= 0.96f)
				{
					__LIB_2__::func_478(iLocal_946[14], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
		}
	}
	else if (iLocal_109 == 6)
	{
		switch (iLocal_1432)
		{
			case 0:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01") >= 0.885f)
					{
						__LIB_2__::func_478(iLocal_946[9], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "new_bordeaux_speech", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "new_bordeaux_speech") >= 0.1f)
					{
						__LIB_2__::func_478(iLocal_946[5], 0, "GENERIC_INSULT_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 2:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "new_bordeaux_speech", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "new_bordeaux_speech") >= 0.325f)
					{
						iLocal_1432++;
					}
				}
				break;
			case 3:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "new_bordeaux_speech", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "new_bordeaux_speech") >= 0.52f)
					{
						__LIB_2__::func_478(iLocal_946[10], 0, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 4:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "new_bordeaux_speech") >= 0.95f)
				{
					__LIB_2__::func_478(iLocal_946[9], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 5:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.62f)
					{
						__LIB_2__::func_478(iLocal_946[10], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 6:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.7f)
				{
					__LIB_2__::func_478(iLocal_946[5], 0, "GENERIC_INSULT_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 7:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.8f)
				{
					__LIB_2__::func_478(iLocal_946[11], 0, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 8:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.9f)
				{
					__LIB_2__::func_478(iLocal_946[9], 0, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 9:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.18f)
					{
						__LIB_2__::func_478(iLocal_946[11], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 10:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.28f)
					{
						__LIB_2__::func_478(iLocal_946[5], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 11:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.28f)
					{
						__LIB_2__::func_478(iLocal_946[5], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 12:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.45f)
					{
						__LIB_2__::func_478(iLocal_946[10], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 13:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.69f)
					{
						__LIB_2__::func_478(iLocal_946[9], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
		}
	}
	else if (iLocal_109 == 1)
	{
		switch (iLocal_1432)
		{
			case 0:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_VAL_V1_CROWD_HANG")))
				{
					__LIB_2__::func_478(iLocal_946[6], 0, "RE_PH_VAL_V1_CROWD_HANG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 1:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -54056400))
				{
					__LIB_2__::func_478(iLocal_946[7], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 2:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("GENERIC_CHEER")))
				{
					__LIB_2__::func_478(iLocal_946[12], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 3:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_VAL_V1_CROWD_LOOKATHIM")))
				{
					__LIB_2__::func_478(iLocal_946[6], 0, "RE_PH_VAL_V1_CROWD_LOOKATHIM", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 4:
				if (__LIB_2__::func_1(iLocal_946[11], 0, 1))
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_946[11], Local_911.f_2))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_911.f_2) > 0.95f)
						{
							__LIB_2__::func_478(iLocal_946[11], 0, "GENERIC_SHOCKED_DISBELIEF", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1432++;
						}
					}
				}
				break;
			case 5:
				break;
		}
		if (!__LIB_2__::func_1(iLocal_946[4], 0, 0) || !__LIB_2__::func_1(iLocal_946[5], 0, 0))
		{
			return;
		}
		switch (iLocal_1431)
		{
			case 0:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[5], -70500784))
				{
					__LIB_2__::func_478(iLocal_946[5], 0, func_338("SON_PLEADCRY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 1:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[4], 613050595))
				{
					__LIB_2__::func_478(iLocal_946[4], 0, func_338("WIFE_NO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 2:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[5], -1000858821))
				{
					__LIB_2__::func_478(iLocal_946[5], 0, func_338("SON_PLEAD"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 3:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[4], -1502025544))
				{
					__LIB_2__::func_478(iLocal_946[4], 0, func_338("WIFE_ILOVEYOU"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 4:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[5], 602807588))
				{
					__LIB_2__::func_478(iLocal_946[5], 0, func_338("SON_NO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 5:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[5], 494331268))
				{
					__LIB_2__::func_478(iLocal_946[5], 0, func_338("SON_NO_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 6:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[4], -129839326))
				{
					__LIB_2__::func_478(iLocal_946[4], 0, func_338("WIFE_CRY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 7:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[5], -782712322))
				{
					__LIB_2__::func_478(iLocal_946[5], 0, func_338("SON_ANGRY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 8:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[4], -219186068))
				{
					__LIB_2__::func_478(iLocal_946[4], 0, func_338("WIFE_SOB"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 9:
				break;
		}
	}
	else if (iLocal_109 == 4)
	{
		switch (iLocal_1431)
		{
			case 0:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01") >= 0.78f)
				{
					__LIB_2__::func_478(iLocal_946[11], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 1:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "dead_john_speech") >= 0.19f)
				{
					__LIB_2__::func_478(iLocal_946[11], 0, "GENERIC_INSULT_HIGH_FEMALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 2:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "dead_john_speech") >= 0.42f)
				{
					__LIB_2__::func_478(iLocal_946[7], 0, "GENERIC_INSULT_MED_FEMALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 3:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "dead_john_speech") >= 0.9f)
				{
					__LIB_2__::func_478(iLocal_946[11], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 4:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "dead_john_speech") >= 0.95f)
				{
					__LIB_2__::func_478(iLocal_946[9], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 5:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.64f)
				{
					__LIB_2__::func_478(iLocal_946[4], 0, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 6:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.7f)
				{
					__LIB_2__::func_478(iLocal_946[11], 0, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 7:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.75f)
				{
					__LIB_2__::func_478(iLocal_946[7], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 8:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.95f)
				{
					__LIB_2__::func_478(iLocal_946[8], 0, "GENERIC_SHOCKED_DISBELIEF", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 9:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.33f)
				{
					__LIB_2__::func_478(iLocal_946[4], 0, "GENERIC_SHOCKED_DISBELIEF", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 10:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.43f)
				{
					__LIB_2__::func_478(iLocal_946[9], 0, "GENERIC_SHOCKING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 11:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.64f)
				{
					__LIB_2__::func_478(iLocal_946[4], 0, "GENERIC_SHOCKED_DISBELIEF", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 12:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.9f)
				{
					__LIB_2__::func_478(iLocal_946[11], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
		}
	}
	else if (iLocal_109 == 5)
	{
		switch (iLocal_1431)
		{
			case 0:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01") >= 0.99f)
				{
					__LIB_2__::func_478(iLocal_946[10], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 1:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech") >= 0.27f)
				{
					__LIB_2__::func_478(iLocal_946[5], 0, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 2:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech") >= 0.8f)
				{
					__LIB_2__::func_478(iLocal_946[8], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 3:
				iLocal_1431++;
				break;
			case 4:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech") >= 0.95f)
				{
					__LIB_2__::func_478(iLocal_946[5], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 5:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0f)
					{
						__LIB_2__::func_478(iLocal_946[6], 0, "GENERIC_SHOCKED_MED", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1431++;
					}
				}
				break;
			case 6:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.05f)
				{
					__LIB_2__::func_478(iLocal_946[8], 0, "GENERIC_SHOCKED_MED", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 7:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.484f)
				{
					__LIB_2__::func_478(iLocal_946[6], 0, "DISMISSIVE_REACT", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 8:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.58f)
				{
					__LIB_2__::func_478(iLocal_946[5], 0, "CONVO_TAIL_OFF", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 9:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.83f)
				{
					__LIB_2__::func_478(iLocal_946[8], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
		}
	}
	else if (iLocal_109 == 3)
	{
		switch (iLocal_984)
		{
			case 105:
				switch (iLocal_1431)
				{
					case 0:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01") >= 0.8f)
						{
							__LIB_2__::func_478(iLocal_946[5], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 1:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_02") >= 0.95f)
						{
							__LIB_2__::func_478(iLocal_946[8], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 2:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03") >= 0.8f)
						{
							__LIB_2__::func_478(iLocal_946[6], 0, "GENERIC_INSULT_HIGH_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 3:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "drown_murder_speech") >= 0.174f)
						{
							__LIB_2__::func_478(iLocal_946[8], 0, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 4:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "drown_murder_speech") >= 0.76f)
						{
							__LIB_2__::func_478(iLocal_946[10], 0, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 5:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_01", 1))
						{
							if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_01") >= 0.95f)
							{
								__LIB_2__::func_478(iLocal_946[5], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
								iLocal_1431++;
							}
						}
						break;
					case 6:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.64f)
						{
							__LIB_2__::func_478(iLocal_946[6], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 7:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.68f)
						{
							__LIB_2__::func_478(iLocal_946[5], 0, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 8:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.85f)
						{
							__LIB_2__::func_478(iLocal_946[10], 0, "GENERIC_SHOCKED_MED", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 9:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0f)
						{
							__LIB_2__::func_478(iLocal_946[6], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 10:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.31f)
						{
							__LIB_2__::func_478(iLocal_946[5], 0, "DISMISSIVE_REACT", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 11:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.45f)
						{
							__LIB_2__::func_478(iLocal_946[8], 0, "DISMISSIVE_REACT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
				}
				break;
			case 76:
				switch (iLocal_1431)
				{
					case 0:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03", 1))
						{
							if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03") >= 0f)
							{
								__LIB_2__::func_478(iLocal_946[11], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
								iLocal_1431++;
							}
						}
						break;
					case 1:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03") >= 0.65f)
						{
							__LIB_2__::func_478(iLocal_946[6], 0, "GENERIC_MOCK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 2:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03") >= 0.9f)
						{
							__LIB_2__::func_478(iLocal_946[4], 0, "GENERIC_ANGRY_SHOUT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 3:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "drown_murder_speech") >= 0.37f)
						{
							__LIB_2__::func_478(iLocal_946[7], 0, "GENERIC_INSULT_HIGH_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 4:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "drown_murder_speech", 1))
						{
							if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "drown_murder_speech") >= 0.89f)
							{
								__LIB_2__::func_478(iLocal_946[10], 0, "GENERIC_MOCK", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
								iLocal_1431++;
							}
						}
						break;
					case 5:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "drown_murder_speech") >= 0.95f)
						{
							__LIB_2__::func_478(iLocal_946[7], 0, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 6:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
						{
							if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.1f)
							{
								__LIB_2__::func_478(iLocal_946[11], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
								iLocal_1431++;
							}
						}
						break;
					case 7:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.63f)
						{
							__LIB_2__::func_478(iLocal_946[4], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 8:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.65f)
						{
							__LIB_2__::func_478(iLocal_946[7], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 9:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.7f)
						{
							__LIB_2__::func_478(iLocal_946[6], 0, "GENERIC_SHOCKED_MED", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 10:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.72f)
						{
							__LIB_2__::func_478(iLocal_946[9], 0, "GENERIC_SHOCKED_MED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 11:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.93f)
						{
							__LIB_2__::func_478(iLocal_946[7], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 12:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03", 1))
						{
							if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.2f)
							{
								iLocal_1431++;
							}
						}
						break;
					case 13:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.6f)
						{
							__LIB_2__::func_478(iLocal_946[11], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 14:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.9f)
						{
							__LIB_2__::func_478(iLocal_946[9], 0, "GENERIC_SHOCKED_DISBELIEF", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
				}
				break;
		}
	}
	else if (iLocal_109 == 8)
	{
		switch (iLocal_1432)
		{
			case 0:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01") >= 0.9f)
					{
						__LIB_2__::func_478(iLocal_946[5], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03") >= 0.92f)
					{
						__LIB_2__::func_478(iLocal_946[10], 0, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 2:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech") >= 0.18f)
					{
						iLocal_1432++;
					}
				}
				break;
			case 3:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech") >= 0.32f)
					{
						__LIB_2__::func_478(iLocal_946[7], 0, "GENERIC_INSULT_HIGH_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 4:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.57f)
					{
						__LIB_2__::func_478(iLocal_946[7], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 5:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.94f)
					{
						__LIB_2__::func_478(iLocal_946[14], 0, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 6:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.97f)
					{
						__LIB_2__::func_478(iLocal_946[7], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 7:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.2f)
				{
					__LIB_2__::func_478(iLocal_946[10], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 8:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.23f)
				{
					__LIB_2__::func_478(iLocal_946[14], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 9:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.35f)
				{
					__LIB_2__::func_478(iLocal_946[7], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 10:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.45f)
				{
					__LIB_2__::func_478(iLocal_946[10], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 11:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.51f)
				{
					__LIB_2__::func_478(iLocal_946[5], 0, "GENERIC_SHOCKING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 12:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.9f)
				{
					__LIB_2__::func_478(iLocal_946[14], 0, "GENERIC_SHOCKING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
		}
	}
	else if (iLocal_109 == 0)
	{
		switch (iLocal_1432)
		{
			case 0:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_02") >= 0.65f)
					{
						__LIB_2__::func_478(iLocal_946[7], 0, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech") >= 0.33f)
					{
						__LIB_2__::func_478(iLocal_946[10], 0, "GENERIC_INSULT_HIGH_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 2:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech") >= 0.93f)
					{
						__LIB_2__::func_478(iLocal_946[9], 0, "GENERIC_INSULT_HIGH_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 3:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech") >= 0.98f)
					{
						__LIB_2__::func_478(iLocal_946[14], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1196222537, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 4:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0f)
					{
						__LIB_2__::func_478(iLocal_946[9], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 5:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.61f)
					{
						__LIB_2__::func_478(iLocal_946[7], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 6:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.71f)
					{
						__LIB_2__::func_478(iLocal_946[14], 0, "GENERIC_SHOCKED_MED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 7:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.81f)
					{
						__LIB_2__::func_478(iLocal_946[10], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 8:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.97f)
					{
						__LIB_2__::func_478(iLocal_946[7], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 9:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.3f)
				{
					__LIB_2__::func_478(iLocal_946[10], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 10:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.44f)
				{
					__LIB_2__::func_478(iLocal_946[14], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 11:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.635f)
				{
					__LIB_2__::func_478(iLocal_946[9], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 12:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.95f)
				{
					__LIB_2__::func_478(iLocal_946[14], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
		}
	}
}

int func_331(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_537(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

Vector3 func_335(int iParam0)
{
	switch (__LIB_0__::func_12())
	{
		case 76:
			switch (iParam0)
			{
				case 1:
					return -278.2031f, 806.9594f, 118.3688f;
				case 2:
					return -276.9769f, 801.252f, 118.4084f;
				case 3:
					return -278.1321f, 803.4739f, 118.3863f;
			}
			break;
		case 105:
			switch (iParam0)
			{
				case 1:
					return 1359.002f, -1306.369f, 76.71498f;
				case 2:
					return 1359.002f, -1306.369f, 76.71498f;
				case 3:
					return 1359.002f, -1306.369f, 76.71498f;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 1:
					return 2718.99f, -1237.612f, 49.03184f;
				case 2:
					return 2718.99f, -1237.612f, 49.03184f;
				case 3:
					return 2718.99f, -1237.612f, 49.03184f;
			}
			break;
		case 38:
			switch (iParam0)
			{
				case 1:
					return -806.8975f, -1268.754f, 43.07741f;
				case 2:
					return -806.8975f, -1268.754f, 43.07741f;
				case 3:
					return -760.8433f, -1269.036f, 43.04134f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_336(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8, bool bParam9)
{
	int iVar0;
	if (__LIB_2__::func_1(iParam0, 0, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1116))
		{
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, &cLocal_1116, 0, 6664, -1, 0, 0, -1);
		}
		if (!__LIB_0__::func_86(vParam1))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam1, 1f, -1, 0.25f, 1, 40000f);
		}
		if (!__LIB_0__::func_86(vParam4))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam4, 1f, -1, 0.25f, 1, 40000f);
		}
		if (!bParam9)
		{
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
		}
		__LIB_1__::func_474(iParam0, &iVar0, fParam7, fParam8, 1, 1);
	}
	if (bParam9)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
	}
}

void func_337(int iParam0, float fParam1)
{
	if (Local_111.f_98[iParam0] < fParam1)
	{
		__LIB_3__::func_699(&(iLocal_946[iParam0]), 0, Global_35, 1, 0, 0, 0, 1);
	}
}

char* func_338(char* sParam0)
{
	char cVar0[64];
	var uVar8;
	StringCopy(&cVar0, "RE_PH_", 64);
	if (iLocal_984 == 76)
	{
		StringConCat(&cVar0, "VAL_", 64);
		if (iLocal_109 == 1)
		{
			StringConCat(&cVar0, "V1_", 64);
		}
		else if (iLocal_109 == 3)
		{
			StringConCat(&cVar0, "V3_DROWN_", 64);
		}
		else if (iLocal_109 == 4)
		{
			StringConCat(&cVar0, "V4_DEAD_JOHN_", 64);
		}
	}
	else if (iLocal_984 == 105)
	{
		StringConCat(&cVar0, "RHD_", 64);
		if (iLocal_109 == 3)
		{
			StringConCat(&cVar0, "V2_DROWN_", 64);
		}
		else if (iLocal_109 == 5)
		{
			StringConCat(&cVar0, "V3_BOUNTY_", 64);
		}
	}
	else if (iLocal_984 == 5)
	{
		StringConCat(&cVar0, "STD_", 64);
		if (iLocal_109 == 7)
		{
			StringConCat(&cVar0, "V1_", 64);
		}
		else if (iLocal_109 == 6)
		{
			StringConCat(&cVar0, "V3_BOUNTY_", 64);
		}
	}
	else if (iLocal_984 == 38)
	{
		StringConCat(&cVar0, "BLW_", 64);
		if (iLocal_109 == 0)
		{
			StringConCat(&cVar0, "V1_", 64);
		}
		if (iLocal_109 == 8)
		{
			StringConCat(&cVar0, "V2_", 64);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringConCat(&cVar0, sParam0, 64);
	}
	uVar8 = __LIB_1__::func_569(cVar0);
	return uVar8;
}

void func_340(bool bParam0)
{
	switch (iLocal_109)
	{
		case 1:
			if (bParam0)
			{
				__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_VAL_V1_ILO_POS", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_VAL_V1_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 3:
			if (__LIB_1__::func_898() == 9)
			{
				if (bParam0)
				{
					if (__LIB_3__::func_628(0))
					{
						__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_VAL_V3_ILO_POS_SICK", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_VAL_V3_ILO_POS", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (__LIB_3__::func_628(0))
				{
					__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_VAL_V3_ILO_NEG_SICK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_VAL_V3_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (bParam0)
			{
				__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_RHD_V2_ILO_POS", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_RHD_V2_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 4:
			if (bParam0)
			{
				if (__LIB_3__::func_628(0))
				{
					__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_VAL_V4_ILO_POS_SICK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_VAL_V4_ILO_POS", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (__LIB_3__::func_628(0))
			{
				__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_VAL_V4_ILO_NEG_SICK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_VAL_V4_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 5:
			if (bParam0)
			{
				__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_RHD_V3_ILO_POS", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_RHD_V3_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 7:
			if (bParam0)
			{
				if (!__LIB_0__::func_27(iLocal_1296, 4096))
				{
					__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_STD_V1_ILO_POS_ALT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_STD_V1_ILO_POS", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (!__LIB_0__::func_27(iLocal_1296, 4096))
			{
				__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_STD_V1_ILO_NEG_ALT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_STD_V1_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 6:
			if (bParam0)
			{
				__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_STD_V3_ILO_POS", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_STD_V3_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 8:
			if (bParam0)
			{
				if (__LIB_0__::func_181())
				{
					__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_BLW_V1_ILO_POS_J", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_BLW_V1_ILO_POS", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (__LIB_0__::func_181())
			{
				__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_BLW_V1_ILO_NEG_J", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_BLW_V1_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 0:
			if (bParam0)
			{
				if (__LIB_0__::func_181())
				{
					__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_BLW_V2_ILO_POS_J", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_BLW_V2_ILO_POS", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (__LIB_0__::func_181())
			{
				__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_BLW_V2_ILO_NEG_J", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(iLocal_946[1], Global_35, "RE_PH_BLW_V2_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
	}
}

bool func_343(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bVar1 = true;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(iParam0))
		{
			if (PED::_0x802092B07E3B1EEA(iParam0, Global_36, 3))
			{
			}
			else
			{
				bVar1 = false;
			}
		}
		if (bVar1)
		{
			__LIB_2__::func_73(iParam0, &(uLocal_963[iParam1]), joaat("BLIP_STYLE_COP"), 0, 0, 0);
			PED::_0x78815FC52832B690(iParam0, 1);
			PED::_0x802092B07E3B1EEA(iParam0, Global_36, 3);
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903))
			{
				if (iParam0 == iLocal_946[1])
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, Local_903))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903, "Sheriff", iParam0);
					}
				}
			}
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			if (__LIB_0__::func_27(iLocal_1020, 32768) || iLocal_1419 == 2048)
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 93, true);
				PED::_0x8ACC0506743A8A5C(iParam0, joaat("SITUATIONNORMAL"), 1, -1082130432 /* Float: -1f */);
				PED::REGISTER_TARGET(iParam0, Global_35, 1);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (__LIB_0__::func_399(iParam0, 1, 0, 0) != joaat("WEAPON_UNARMED"))
				{
					TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				}
				__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
			return true;
		}
	}
	return false;
}

void func_344()
{
	__LIB_1__::func_681(&iLocal_1019, 64);
	ANIMSCENE::RESET_ANIM_SCENE(Local_903.f_3, &cLocal_1112);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_3, "bAction", false, false);
	ENTITY::PLAY_ENTITY_ANIM(iLocal_1426, "static_lever", Local_76[1 /*2*/], 8f, true, false, false, 0f, 0);
	ENTITY::_SET_ENTITY_ANIM_CURRENT_TIME(iLocal_1425, Local_76[1 /*2*/], &cLocal_59, 0f);
	ENTITY::STOP_ENTITY_ANIM(iLocal_1425, &cLocal_59, Local_76[1 /*2*/], -8f);
}

void func_346()
{
	if (iLocal_984 == 5)
	{
		StringCopy(&cLocal_59, "pull_lever_deputy_trapdoor_std", 64);
	}
	else
	{
		StringCopy(&cLocal_59, "pull_lever_deputy_trapdoor_val", 64);
	}
}

void func_347(int iParam0, var uParam1, int iParam2, vector3 vParam3, var uParam6, bool bParam7, var uParam8, var uParam9)
{
	if (!__LIB_0__::func_27(iLocal_1019, 131072))
	{
		if (bParam7)
		{
			if (func_558(iParam0, &Local_920, -1))
			{
				__LIB_1__::func_148(&uLocal_991);
				iLocal_1435 = MISC::GET_GAME_TIMER();
				__LIB_1__::func_683(&iLocal_1019, 131072);
			}
		}
		else if (func_559(iParam0, Global_35, 0, 1048576000 /* Float: 0.25f */))
		{
			__LIB_2__::func_478(iParam0, Global_35, func_560(iParam0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_148(&uLocal_991);
			iLocal_1435 = MISC::GET_GAME_TIMER();
			__LIB_1__::func_683(&iLocal_1019, 131072);
		}
	}
	else if (!__LIB_0__::func_27(iLocal_1019, 262144))
	{
		if (func_348())
		{
			if (__LIB_0__::func_265(&uLocal_991) >= (fLocal_1050 + 1f) || (__LIB_0__::func_27(iLocal_1020, 33554432) && __LIB_2__::func_227(0, 1, iParam0, 1)))
			{
				func_561(iParam0, Global_35, 0, 0, 1048576000 /* Float: 0.25f */);
				__LIB_2__::func_478(iParam0, Global_35, func_562(iParam0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_1019, 262144);
				__LIB_1__::func_148(&uLocal_991);
			}
		}
		else if (!__LIB_0__::func_75(&uLocal_994))
		{
			if (__LIB_0__::func_265(&uLocal_991) >= (fLocal_1050 - 1f) || __LIB_0__::func_665(Global_35, iParam0, 1, 1) > 2f)
			{
				func_563(iParam0, vParam3, uParam6);
				__LIB_2__::func_451(uParam8, 0);
				__LIB_2__::func_602(uParam9[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam9[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(uParam9[0 /*17*/], 0, 0);
				__LIB_2__::func_411(uParam9[1 /*17*/], 1, 0);
				__LIB_1__::func_683(&iLocal_1020, 33554432);
				*uParam1 = iParam2;
			}
		}
	}
	else if (!bLocal_1421)
	{
		if (func_348())
		{
			if (__LIB_0__::func_12() == 76 && __LIB_1__::func_205(Global_35, iLocal_1088[2], 1, 0))
			{
			}
			else if (__LIB_0__::func_265(&uLocal_991) >= fLocal_1050)
			{
				bLocal_1421 = true;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1435919172, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1435919172, true) != 0)
			{
				if (__LIB_0__::func_665(iParam0, Global_35, 1, 1) > 1.5f)
				{
					func_561(iParam0, Global_35, 0, 0f, 0f);
				}
				else
				{
					func_559(iParam0, Global_35, 0f, 0f);
				}
				__LIB_1__::func_148(&uLocal_991);
			}
		}
		else if (!__LIB_0__::func_75(&uLocal_994))
		{
			if (__LIB_0__::func_265(&uLocal_991) >= (fLocal_1050 - 1f) || __LIB_0__::func_665(Global_35, iParam0, 1, 1) > 2f)
			{
				func_563(iParam0, vParam3, uParam6);
				__LIB_2__::func_451(uParam8, 0);
				__LIB_2__::func_602(uParam9[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(uParam9[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(uParam9[0 /*17*/], 0, 0);
				__LIB_2__::func_411(uParam9[1 /*17*/], 1, 0);
				__LIB_1__::func_683(&iLocal_1020, 33554432);
				*uParam1 = iParam2;
			}
		}
	}
}

bool func_348()
{
	if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1088[0], true, 0) || (VOLUME::_DOES_VOLUME_EXIST(iLocal_1088[1]) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1088[1], true, 0))) || (VOLUME::_DOES_VOLUME_EXIST(iLocal_1088[2]) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1088[2], true, 0)))
	{
		if ((ENTITY::IS_ENTITY_IN_VOLUME(iLocal_946[1], iLocal_1088[0], true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(iLocal_946[2], iLocal_1088[0], true, 0)) || ENTITY::IS_ENTITY_IN_VOLUME(iLocal_946[3], iLocal_1088[0], true, 0))
		{
			return true;
		}
	}
	return false;
}

void func_351(bool bParam0)
{
	switch (iLocal_109)
	{
		case 1:
			if (bParam0)
			{
				__LIB_2__::func_478(iLocal_946[2], Global_35, "ARREST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(iLocal_946[2], Global_35, "LAW_INTERACT_NO_BUSINESS_HERE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 3:
			if (bParam0)
			{
				if (__LIB_0__::func_12() == 76)
				{
					__LIB_2__::func_478(iLocal_946[2], Global_35, "ARREST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(iLocal_946[2], Global_35, "LAW_INTERACT_MOVE_ALONG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (__LIB_0__::func_12() == 76)
			{
				__LIB_2__::func_478(iLocal_946[2], Global_35, "LAW_INTERACT_NO_BUSINESS_HERE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(iLocal_946[2], Global_35, "INSULT_RESPONSE", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 4:
			if (bParam0)
			{
				__LIB_2__::func_478(iLocal_946[2], Global_35, "ARREST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(iLocal_946[2], Global_35, "LAW_INTERACT_NO_BUSINESS_HERE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 5:
			if (bParam0)
			{
				__LIB_2__::func_478(iLocal_946[2], Global_35, "LAW_INTERACT_MOVE_ALONG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(iLocal_946[2], Global_35, "INSULT_RESPONSE", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 7:
			if (bParam0)
			{
				__LIB_2__::func_478(iLocal_946[2], Global_35, "CONVO_TAIL_OFF", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(iLocal_946[2], Global_35, "PLAYER_LOITERING", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 6:
			if (bParam0)
			{
				__LIB_2__::func_478(iLocal_946[2], Global_35, "CONVO_TAIL_OFF", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(iLocal_946[2], Global_35, "PLAYER_LOITERING", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 0:
		case 8:
			if (bParam0)
			{
				__LIB_2__::func_478(iLocal_946[2], Global_35, "TIME_TO_GO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(iLocal_946[2], Global_35, "LAW_INTERACT_NO_BUSINESS_HERE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
	}
}

bool func_352()
{
	if (Local_111.f_48)
	{
		if (!__LIB_0__::func_27(iLocal_1019, 4194304))
		{
			if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1088[0], true, 0) || (VOLUME::_DOES_VOLUME_EXIST(iLocal_1088[1]) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1088[1], true, 0))) || (VOLUME::_DOES_VOLUME_EXIST(iLocal_1088[2]) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1088[2], true, 0)))
			{
				return true;
			}
		}
	}
	return false;
}

void func_353()
{
	if (__LIB_0__::func_27(iLocal_1020, 65536) || iLocal_109 != 1)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_946[4]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_946[4], Global_35, 1, 1))
		{
			__LIB_1__::func_683(&iLocal_1020, 65536);
		}
	}
}

void func_354()
{
	if (iLocal_110 < 2)
	{
		return;
	}
	if (iLocal_1303[0] >= 7)
	{
		iLocal_1297[0] = func_331(&(iLocal_946[0]), &(Local_1309[0 /*21*/]), 20f, &Local_1261, &(Local_111.f_192), 0f, 1, 0, "", __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 0, Local_111.f_98[0], 0);
	}
	switch (iLocal_1303[0])
	{
		case 0:
			__LIB_2__::func_593(&(Local_1309[0 /*21*/]), &Local_1261);
			__LIB_2__::func_602(&(Local_1261[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_602(&(Local_1261[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_2__::func_411(&(Local_1261[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_1261[1 /*17*/]), 1, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_946[0], 315, false);
			iLocal_1303[0] = 7;
			break;
		case 7:
			if (Local_111.f_46)
			{
				if (!__LIB_2__::func_364(iLocal_946[0], 0, 0, 0))
				{
					__LIB_2__::func_411(&(Local_1261[0 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_1261[1 /*17*/]), 1, 0);
					iLocal_1303[0] = 8;
				}
			}
			else
			{
				if (iLocal_109 == 1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_VAL_V1_PRE_HANG")))
					{
						__LIB_2__::func_478(iLocal_946[0], iLocal_946[4], "RE_PH_VAL_V1_PRE_HANG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
				}
				switch (iLocal_1297[0])
				{
					case 0:
						break;
					case 1:
						__LIB_2__::func_478(Global_35, iLocal_946[0], func_338("ILO_CRIMINAL_PRE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
						__LIB_2__::func_411(&(Local_1261[1 /*17*/]), 0, 0);
						break;
				}
			}
			break;
		case 8:
			if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
			{
				switch (iLocal_1297[0])
				{
					case 0:
						__LIB_2__::func_478(Global_35, iLocal_946[0], func_338("GRT_POS_CRIMINAL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
						__LIB_2__::func_411(&(Local_1261[0 /*17*/]), 0, 0);
						__LIB_1__::func_148(&uLocal_1006);
						iLocal_1303[0] = 9;
						break;
					case 1:
						__LIB_2__::func_478(Global_35, iLocal_946[0], func_338("GRT_NEG_CRIMINAL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
						__LIB_2__::func_411(&(Local_1261[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_1261[1 /*17*/]), 0, 0);
						__LIB_1__::func_148(&uLocal_1006);
						iLocal_1303[0] = 10;
						break;
				}
			}
			else
			{
				__LIB_2__::func_451(&(Local_1309[0 /*21*/]), 0);
				__LIB_2__::func_411(&(Local_1261[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_1261[1 /*17*/]), 1, 0);
				iLocal_1303[0] = 13;
			}
			break;
		case 9:
			if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
			{
				if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, iLocal_946[0], 1))
				{
					if (iLocal_109 == 1)
					{
					}
					else
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("GRT_POS_CRIMINAL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					iLocal_1303[0] = 8;
				}
			}
			else
			{
				__LIB_2__::func_451(&(Local_1309[0 /*21*/]), 0);
				__LIB_2__::func_411(&(Local_1261[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_1261[1 /*17*/]), 1, 0);
				iLocal_1303[0] = 13;
			}
			break;
		case 10:
			if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
			{
				if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, iLocal_946[0], 1))
				{
					if (iLocal_109 == 1)
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_VAL_V1_CRIMINAL_BEG_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					else if (iLocal_109 == 7)
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_STD_V1_CRIMINAL_GRT_NEG_CRIMINAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("GRT_NEG_CRIMINAL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					__LIB_2__::func_411(&(Local_1261[1 /*17*/]), 1, 0);
					iLocal_1303[0] = 11;
				}
			}
			else
			{
				__LIB_2__::func_451(&(Local_1309[0 /*21*/]), 0);
				__LIB_2__::func_411(&(Local_1261[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_1261[1 /*17*/]), 1, 0);
				iLocal_1303[0] = 13;
			}
			break;
		case 11:
			if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
			{
				switch (iLocal_1297[0])
				{
					case 0:
						break;
					case 1:
						__LIB_2__::func_478(Global_35, iLocal_946[0], func_338("GRT_NEG2_CRIMINAL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
						__LIB_2__::func_411(&(Local_1261[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_1261[1 /*17*/]), 0, 0);
						__LIB_1__::func_148(&uLocal_1006);
						iLocal_1303[0] = 12;
						break;
				}
			}
			else
			{
				__LIB_2__::func_451(&(Local_1309[0 /*21*/]), 0);
				__LIB_2__::func_411(&(Local_1261[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_1261[1 /*17*/]), 1, 0);
				iLocal_1303[0] = 13;
			}
			break;
		case 12:
			if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
			{
				if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, iLocal_946[0], 1))
				{
					if (iLocal_109 == 1)
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, "GENERIC_INSULT_HIGH_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					else if (iLocal_109 == 7)
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_STD_V1_CRIMINAL_GRT_NEG2_CRIMINAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("GRT_NEG2_CRIMINAL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					iLocal_1303[0] = 8;
				}
			}
			else
			{
				__LIB_2__::func_451(&(Local_1309[0 /*21*/]), 0);
				if (iLocal_109 == 1)
				{
					__LIB_2__::func_411(&(Local_1261[0 /*17*/]), 0, 0);
				}
				else
				{
					__LIB_2__::func_411(&(Local_1261[1 /*17*/]), 1, 0);
				}
				iLocal_1303[0] = 13;
			}
			break;
		case 13:
			switch (iLocal_1297[0])
			{
				case 0:
					__LIB_2__::func_478(Global_35, iLocal_946[0], func_338("GRT_POS_CRIMINAL_POST"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					__LIB_2__::func_411(&(Local_1261[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1261[1 /*17*/]), 0, 0);
					__LIB_1__::func_148(&uLocal_1006);
					iLocal_1303[0] = 14;
					break;
				case 1:
					__LIB_2__::func_478(Global_35, iLocal_946[0], func_338("GRT_NEG_CRIMINAL_POST"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					__LIB_2__::func_411(&(Local_1261[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1261[1 /*17*/]), 0, 0);
					__LIB_1__::func_148(&uLocal_1006);
					iLocal_1303[0] = 15;
					break;
			}
			break;
		case 14:
			if (__LIB_2__::func_227(0, 1, Global_35, 1))
			{
				if (iLocal_109 == 1)
				{
				}
				else if (iLocal_109 == 3)
				{
					if (iLocal_984 == 76)
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_VAL_V3_GRT_POS_CRIMINAL_POST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					else if (iLocal_984 == 105)
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_RHD_V2_GRT_POS_CRIMINAL_POST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
				}
				else if (iLocal_109 == 5)
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_RHD_V3_GRT_POS_CRIMINAL_POST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				else if (iLocal_109 == 6)
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_STD_V3_GRT_POS_CRIMINAL_POST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("GRT_POS_CRIMINAL_POST"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				__LIB_1__::func_148(&uLocal_1006);
				iLocal_1303[0] = 4;
			}
			break;
		case 15:
			if (__LIB_2__::func_227(0, 1, Global_35, 1))
			{
				if (iLocal_109 == 1)
				{
				}
				else if (iLocal_109 == 3)
				{
					if (iLocal_984 == 76)
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_VAL_V3_GRT_NEG_CRIMINAL_POST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					else if (iLocal_984 == 105)
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_RHD_V2_GRT_NEG_CRIMINAL_POST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
				}
				else if (iLocal_109 == 5)
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_RHD_V3_GRT_NEG_CRIMINAL_POST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				else if (iLocal_109 == 6)
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_STD_V3_GRT_NEG_CRIMINAL_POST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("GRT_NEG_CRIMINAL_POST"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				__LIB_1__::func_148(&uLocal_1006);
				iLocal_1303[0] = 4;
			}
			break;
		case 4:
			if ((__LIB_0__::func_265(&uLocal_1006) > 6f && __LIB_2__::func_227(0, 1, iLocal_946[0], 1)) && Local_111.f_98[0] < 20f)
			{
				if (iLocal_109 == 3)
				{
					if (iLocal_984 == 76)
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_VAL_V3_GRT_ILO_END", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					else if (iLocal_984 == 105)
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_RHD_V2_GRT_ILO_END", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
				}
				else if (iLocal_109 == 5)
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_RHD_V3_GRT_ILO_END", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				else if (iLocal_109 == 6)
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_STD_V3_GRT_ILO_END", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("GRT_ILO_END"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				iLocal_1303[0] = 16;
			}
			break;
		case 16:
			break;
	}
}

void func_355()
{
	if (!__LIB_0__::func_27(iLocal_1019, 2))
	{
		if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
		{
			if (__LIB_0__::func_27(iLocal_1019, 64))
			{
				func_566(1);
				if (func_567())
				{
					func_568();
					func_366();
					func_364(1);
					__LIB_1__::func_683(&iLocal_1019, 2);
				}
			}
			else
			{
				func_569();
				if (Local_111.f_46 == 1)
				{
					if (!__LIB_0__::func_27(iLocal_1019, 2048))
					{
						func_570();
					}
				}
			}
		}
		else if (__LIB_0__::func_139(Local_111.f_162))
		{
			__LIB_1__::func_748(&(Local_111.f_162), 1, 1);
		}
	}
}

void func_356()
{
	vector3 vVar0;
	if (__LIB_0__::func_27(iLocal_1019, 1) && !__LIB_0__::func_27(iLocal_1020, 268435456))
	{
		if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
		{
			vVar0 = { PED::GET_PED_BONE_COORDS(iLocal_946[0], 21030, 0f, 0f, 0f) };
			if ((((iLocal_984 == 76 && vVar0.z < 119.465f) || (iLocal_984 == 105 && vVar0.z < 83.85f)) || (iLocal_984 == 5 && vVar0.z < 52.17f)) || (iLocal_984 == 38 && vVar0.z < 46.16f))
			{
				PHYSICS::_0x814D453FCFDF119F(iLocal_945, 1, -999);
				__LIB_1__::func_683(&iLocal_1020, 268435456);
			}
		}
	}
}

void func_357()
{
	ENTITY::_0xC3ABCFBC7D74AFA5(iLocal_946[0], 3, 1);
	ENTITY::_0xC3ABCFBC7D74AFA5(iLocal_946[0], 4, 1);
	ENTITY::_0xC3ABCFBC7D74AFA5(iLocal_946[0], 5, 1);
}

void func_358()
{
	if (!__LIB_0__::func_27(iLocal_1020, 2097152))
	{
		if (!PED::_IS_METAPED_USING_COMPONENT(iLocal_946[0], joaat("HEADS")))
		{
			ENTITY::DETACH_ENTITY(Local_818[1 /*12*/].f_8, true, true);
			__LIB_1__::func_683(&iLocal_1020, 2097152);
		}
	}
}

void func_361()
{
	char* sVar0;
	func_572();
	if (iLocal_1022 >= 3)
	{
		return;
	}
	if (iLocal_110 == 2)
	{
		if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_946[0]))
		{
			switch (iLocal_1022)
			{
				case 0:
					__LIB_1__::func_148(&uLocal_1003);
					iLocal_1022++;
					break;
				case 1:
					if (iLocal_109 == 7)
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[0], joaat("RE_PH_STD_V1_ARM")))
						{
							if (__LIB_2__::func_227(0, 1, iLocal_946[0], 1))
							{
								__LIB_2__::func_478(iLocal_946[0], iLocal_946[1], "RE_PH_STD_V1_ARM", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							iLocal_1022 = 3;
						}
					}
					else if (iLocal_109 == 4)
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_VAL_V4_DEAD_JOHN_INNOCENT")))
						{
							if (__LIB_2__::func_227(0, 1, iLocal_946[0], 1))
							{
								__LIB_2__::func_478(iLocal_946[0], iLocal_946[1], "RE_PH_VAL_V4_DEAD_JOHN_INNOCENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -1223286396, 1, 0, 0);
							}
							iLocal_1022 = 3;
						}
					}
					else if (iLocal_109 == 6)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_02", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_02") > 0.75f)
						{
							sVar0 = func_573(0);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								__LIB_2__::func_478(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							__LIB_1__::func_148(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else if (iLocal_109 == 5)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03") > 0.65f)
						{
							sVar0 = func_573(0);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								__LIB_2__::func_478(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							__LIB_1__::func_148(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else if (iLocal_109 == 3)
					{
						if (__LIB_0__::func_265(&uLocal_1003) > 16f)
						{
							if (iLocal_984 == 105)
							{
								sVar0 = func_573(1);
							}
							else
							{
								sVar0 = func_573(0);
							}
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								__LIB_2__::func_478(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							__LIB_1__::func_148(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else if (iLocal_109 == 8)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_02", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_02") > 0.95f)
						{
							sVar0 = func_573(0);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								__LIB_2__::func_478(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							__LIB_1__::func_148(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else if (iLocal_109 == 0)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01") > 0.53f)
						{
							sVar0 = func_573(1);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								__LIB_2__::func_478(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							__LIB_1__::func_148(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else if (__LIB_0__::func_265(&uLocal_1003) > 16f)
					{
						sVar0 = func_573(0);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
						{
							__LIB_2__::func_478(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						__LIB_1__::func_148(&uLocal_1003);
						iLocal_1022++;
					}
					break;
				case 2:
					if (iLocal_109 == 6)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03") > 0.72f)
						{
							sVar0 = func_573(1);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								__LIB_2__::func_478(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							__LIB_1__::func_148(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else if (iLocal_109 == 5)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_01", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_01") > 0.18f)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								__LIB_2__::func_478(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							__LIB_1__::func_148(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else if (iLocal_109 == 8)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech") > 0.8f)
						{
							sVar0 = func_573(1);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								__LIB_2__::func_478(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							__LIB_1__::func_148(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else if (iLocal_109 == 0)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03") > 0.65f)
						{
							sVar0 = func_573(0);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								__LIB_2__::func_478(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							__LIB_1__::func_148(&uLocal_1003);
							iLocal_1022 = (iLocal_1022 + 1);
						}
					}
					else if (iLocal_109 == 3)
					{
						if (iLocal_984 == 105)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "drown_murder_speech", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "drown_murder_speech") > 0.46f)
							{
								sVar0 = func_573(0);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
								{
									__LIB_2__::func_478(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								iLocal_1022++;
							}
						}
						else if (__LIB_0__::func_265(&uLocal_1003) > 12f)
						{
							iLocal_1022++;
						}
					}
					else if (__LIB_0__::func_265(&uLocal_1003) > 12f)
					{
						sVar0 = func_573(1);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
						{
							__LIB_2__::func_478(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						iLocal_1022++;
					}
					break;
				case 3:
					if (iLocal_109 == 6)
					{
						if (__LIB_0__::func_265(&uLocal_1003) > 7f && __LIB_2__::func_227(0, 1, iLocal_946[0], 1))
						{
							sVar0 = func_573(2);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								__LIB_2__::func_478(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							__LIB_1__::func_148(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else
					{
						iLocal_1022++;
					}
					break;
				case 4:
					if (iLocal_109 == 6)
					{
						if (__LIB_0__::func_265(&uLocal_1003) > 8f && __LIB_2__::func_227(0, 1, iLocal_946[0], 1))
						{
							sVar0 = func_573(3);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								__LIB_2__::func_478(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							__LIB_1__::func_148(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else
					{
						iLocal_1022++;
					}
					break;
			}
		}
	}
}

int func_362()
{
	if (iLocal_1438 <= 0)
	{
		switch (__LIB_0__::func_12())
		{
			case 76:
				iLocal_1438 = 8;
				break;
			case 105:
				iLocal_1438 = 6;
				break;
			case 5:
				iLocal_1438 = 7;
				break;
			case 38:
				iLocal_1438 = 11;
				break;
		}
	}
	return iLocal_1438;
}

void func_364(bool bParam0)
{
	if (bParam0)
	{
		if (__LIB_0__::func_27(iLocal_1019, 32))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
	}
}

void func_366()
{
	if (!__LIB_0__::func_27(iLocal_1020, 8388608) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_946[0]))
	{
		if (__LIB_2__::func_1(iLocal_946[0], 0, 1))
		{
			__LIB_2__::func_122(iLocal_946[0], "SCREAM_SHOCKED", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
		}
	}
}

void func_367()
{
	int iVar0;
	char* sVar1;
	if (!PHYSICS::DOES_ROPE_EXIST(iLocal_945) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 1))
	{
		return;
	}
	if (__LIB_2__::func_1(iLocal_946[0], 0, 0))
	{
		if (!__LIB_0__::func_27(iLocal_1019, 8))
		{
			if (__LIB_3__::func_332(vLocal_1057, 1) <= 1.5f && __LIB_2__::func_227(-3f, 1, iLocal_946[0], 1))
			{
				if (PED::IS_PED_MALE(iLocal_946[0]))
				{
					sVar1 = "line_03";
				}
				else
				{
					sVar1 = "line_03_female_crim";
				}
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_946[0], &Local_920);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], sVar1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
				TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 8f, -8f, -1, 16385, 0f, false, 0, false, 0, false);
				__LIB_1__::func_474(iLocal_946[0], &iVar0, 0, 0, 1, 1);
				__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("LEVER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_1019, 8);
				return;
			}
		}
		if (__LIB_2__::func_227(1f, 1, iLocal_946[0], 0))
		{
			switch (iLocal_1428)
			{
				case 0:
					if (iLocal_109 == 4)
					{
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_946[0], &Local_920);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], "line_01_female_crim", 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
						TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 8f, -8f, -1, 16385, 0f, false, 0, false, 0, false);
						__LIB_1__::func_474(iLocal_946[0], &iVar0, 0, 0, 1, 1);
						if ((__LIB_4__::func_271(106, 4) == joaat("CS_JOHNMARSTON") && __LIB_0__::func_181()) || (__LIB_4__::func_271(106, 4) != joaat("CS_JOHNMARSTON") && !__LIB_0__::func_181()))
						{
						}
						iLocal_1428++;
					}
					else if (__LIB_0__::func_27(iLocal_1020, 65536))
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, "SICK_BASTARD", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
						__LIB_1__::func_683(&iLocal_1020, 134217728);
						iLocal_1428++;
					}
					else
					{
						if (iLocal_109 == 3)
						{
							if (__LIB_0__::func_12() == 105)
							{
								if (__LIB_11__::func_178(87, 65536))
								{
									if ((__LIB_4__::func_271(87, 0) == joaat("CS_JOHNMARSTON") && __LIB_0__::func_181()) || (__LIB_4__::func_271(87, 0) != joaat("CS_JOHNMARSTON") && !__LIB_0__::func_181()))
									{
										if (__LIB_3__::func_628(0))
										{
											__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("SPOT_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
										}
										else
										{
											__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("SPOT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
										}
									}
								}
							}
							else if ((__LIB_4__::func_271(87, 0) == joaat("CS_JOHNMARSTON") && __LIB_0__::func_181()) || (__LIB_4__::func_271(87, 0) != joaat("CS_JOHNMARSTON") && !__LIB_0__::func_181()))
							{
								if (__LIB_3__::func_628(0))
								{
									__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("SPOT_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
								else
								{
									__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("SPOT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
							}
						}
						else if (iLocal_109 == 5)
						{
							if ((__LIB_4__::func_271(106, 5) == joaat("CS_JOHNMARSTON") && __LIB_0__::func_181()) || (__LIB_4__::func_271(106, 5) != joaat("CS_JOHNMARSTON") && !__LIB_0__::func_181()))
							{
								if (__LIB_3__::func_628(0))
								{
									__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("SPOT_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
								else
								{
									__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("SPOT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
							}
						}
						else if (iLocal_109 == 6)
						{
							if ((__LIB_4__::func_271(106, 6) == joaat("CS_JOHNMARSTON") && __LIB_0__::func_181()) || (__LIB_4__::func_271(106, 6) != joaat("CS_JOHNMARSTON") && !__LIB_0__::func_181()))
							{
								if (__LIB_3__::func_628(0))
								{
									__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("SPOT_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
								else
								{
									__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("SPOT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
							}
						}
						else if (iLocal_109 == 7)
						{
							if ((__LIB_4__::func_271(30, 7) == joaat("CS_JOHNMARSTON") && __LIB_0__::func_181()) || (__LIB_4__::func_271(30, 7) != joaat("CS_JOHNMARSTON") && !__LIB_0__::func_181()))
							{
								if (__LIB_3__::func_628(0))
								{
									__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("SPOT_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
								else
								{
									__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("SPOT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
							}
						}
						else if (iLocal_109 == 8)
						{
							__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("SPOT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
						}
						else if (iLocal_109 == 0)
						{
							__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("SPOT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
						}
						iLocal_1428++;
					}
					break;
				case 1:
					if (PED::IS_PED_MALE(iLocal_946[0]))
					{
						sVar1 = "line_01";
					}
					else
					{
						sVar1 = "line_01_female_crim";
					}
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_946[0], &Local_920);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], sVar1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
					TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 8f, -8f, -1, 16385, 0f, false, 0, false, 0, false);
					__LIB_1__::func_474(iLocal_946[0], &iVar0, 0, 0, 1, 1);
					if (iLocal_109 == 4 && __LIB_3__::func_993(84, 0) == 3)
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("CRIMINAL_BEG_LAW"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_109 == 1)
					{
						if (__LIB_1__::func_985())
						{
							__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("CRIMINAL_BEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("CRIMINAL_BEG_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("CRIMINAL_BEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_1428++;
					break;
				case 2:
					if (PED::IS_PED_MALE(iLocal_946[0]))
					{
						sVar1 = "line_02";
					}
					else
					{
						sVar1 = "line_02_female_crim";
					}
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_946[0], &Local_920);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], sVar1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
					TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 8f, -8f, -1, 16385, 0f, false, 0, false, 0, false);
					__LIB_1__::func_474(iLocal_946[0], &iVar0, 0, 0, 1, 1);
					__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("ROPE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1428++;
					break;
				case 3:
					if (PED::IS_PED_MALE(iLocal_946[0]))
					{
						sVar1 = "line_02";
					}
					else
					{
						sVar1 = "line_02_female_crim";
					}
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_946[0], &Local_920);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], sVar1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
					TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 8f, -8f, -1, 16385, 0f, false, 0, false, 0, false);
					__LIB_1__::func_474(iLocal_946[0], &iVar0, 0, 0, 1, 1);
					if (iLocal_109 != 1)
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("ROPE_BEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_1428++;
					break;
				case 4:
					if (iLocal_109 == 3)
					{
						if (iLocal_984 == 76)
						{
							if (Local_111.f_98[0] > 20f && __LIB_2__::func_227(-3f, 1, iLocal_946[0], 1))
							{
								__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_VAL_V3_LEAVE_ME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_1428++;
							}
						}
						else if (iLocal_984 == 105)
						{
							if (Local_111.f_98[0] > 20f && __LIB_2__::func_227(-3f, 1, iLocal_946[0], 1))
							{
								__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_RHD_V2_LEAVE_ME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_1428++;
							}
						}
					}
					else if (iLocal_109 == 0)
					{
						if (Local_111.f_98[0] > 20f && __LIB_2__::func_227(-3f, 1, iLocal_946[0], 1))
						{
							__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_BLW_V1_LEAVE_ME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_1428++;
						}
					}
					else if (iLocal_109 == 5)
					{
						if (Local_111.f_98[0] > 20f && __LIB_2__::func_227(-3f, 1, iLocal_946[0], 1))
						{
							__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_RHD_V3_BOUNTY_LEAVE_ME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_1428++;
						}
					}
					else if (iLocal_109 == 6)
					{
						if (Local_111.f_98[0] > 20f && __LIB_2__::func_227(-3f, 1, iLocal_946[0], 1))
						{
							__LIB_2__::func_478(iLocal_946[0], Global_35, "RE_PH_STD_V3_LEAVE_ME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_1428++;
						}
					}
					else
					{
						iLocal_1428++;
					}
					break;
				case 5:
					break;
			}
		}
	}
}

void func_368()
{
	int iVar0;
	if (!__LIB_0__::func_27(iLocal_1019, 1073741824 /* Float: 2f */))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[10 /*2*/].f_1, 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[11 /*2*/].f_1, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (__LIB_3__::func_547(iLocal_946[0], Global_35, 1f) == 2)
			{
				TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[4 /*2*/].f_1, 4f, -8f, -1, 16384, 0f, false, 0, false, 0, false);
				if (PED::IS_PED_MALE(iLocal_946[0]))
				{
					TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[5 /*2*/].f_1, 8f, -4f, -1, 16385, 0f, false, 0, false, 0, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 8f, -4f, -1, 16385, 0f, false, 0, false, 0, false);
				}
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[7 /*2*/].f_1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
				if (PED::IS_PED_MALE(iLocal_946[0]))
				{
					TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[8 /*2*/].f_1, 8f, -4f, -1, 16385, 0f, false, 0, false, 0, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 8f, -4f, -1, 16385, 0f, false, 0, false, 0, false);
				}
			}
			__LIB_1__::func_474(iLocal_946[0], &iVar0, 0, 0, 1, 1);
			__LIB_3__::func_237(&(Local_111.f_5), &iLocal_1419);
			__LIB_1__::func_148(&uLocal_1000);
			func_576();
			__LIB_1__::func_683(&iLocal_1019, 1073741824 /* Float: 2f */);
		}
	}
	else if (PED::IS_PED_MALE(iLocal_946[0]))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[8 /*2*/].f_1, 1))
		{
			if (__LIB_0__::func_265(&uLocal_1000) > 5f)
			{
				if (func_315(iLocal_946[0], 0, &(Local_111.f_5), &iLocal_1419, 0, Local_111.f_98[0]))
				{
					__LIB_1__::func_148(&uLocal_1000);
					__LIB_3__::func_237(&(Local_111.f_5), &iLocal_1419);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[9 /*2*/].f_1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
					if (PED::IS_PED_MALE(iLocal_946[0]))
					{
						TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 8f, -4f, -1, 16385, 0f, false, 0, false, 0, false);
					}
					__LIB_1__::func_474(iLocal_946[0], &iVar0, 0, 0, 1, 1);
					__LIB_1__::func_681(&iLocal_1019, 1073741824 /* Float: 2f */);
					__LIB_1__::func_681(&iLocal_1019, 536870912);
				}
			}
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[5 /*2*/].f_1, 1))
		{
			if (__LIB_0__::func_265(&uLocal_1000) > 5f)
			{
				if (func_315(iLocal_946[0], 0, &(Local_111.f_5), &iLocal_1419, 0, Local_111.f_98[0]))
				{
					__LIB_1__::func_148(&uLocal_1000);
					__LIB_3__::func_237(&(Local_111.f_5), &iLocal_1419);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[6 /*2*/].f_1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
					if (PED::IS_PED_MALE(iLocal_946[0]))
					{
						TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 8f, -4f, -1, 16385, 0f, false, 0, false, 0, false);
					}
					__LIB_1__::func_474(iLocal_946[0], &iVar0, 0, 0, 1, 1);
					__LIB_1__::func_681(&iLocal_1019, 1073741824 /* Float: 2f */);
					__LIB_1__::func_681(&iLocal_1019, 536870912);
				}
			}
		}
	}
	else if (__LIB_0__::func_265(&uLocal_1000) > 5f)
	{
		__LIB_1__::func_681(&iLocal_1019, 1073741824 /* Float: 2f */);
		__LIB_1__::func_681(&iLocal_1019, 536870912);
	}
}

bool func_369()
{
	int iVar0;
	if (PED::IS_PED_MALE(iLocal_946[0]))
	{
		if (((((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[10 /*2*/].f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[11 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[4 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[7 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[6 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[9 /*2*/].f_1, 1))
		{
			func_577();
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[14 /*2*/].f_1, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
			if (__LIB_0__::func_27(iLocal_1020, 65536))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_946[0], 93, true);
				PED::REGISTER_TARGET(iLocal_946[0], Global_35, 1);
				TASK::TASK_COMBAT_PED(0, Global_35, 1048576, 4096);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_946[0], true, false), 500f, -1, 8448, 1077936128);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_946[0], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			return true;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[5 /*2*/].f_1, 1))
		{
			func_577();
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[12 /*2*/].f_1, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
			if (__LIB_0__::func_27(iLocal_1020, 65536))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_946[0], 93, true);
				PED::REGISTER_TARGET(iLocal_946[0], Global_35, 1);
				TASK::TASK_COMBAT_PED(0, Global_35, 1048576, 4096);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_946[0], true, false), 500f, -1, 8448, 1077936128);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_946[0], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			return true;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[8 /*2*/].f_1, 1))
		{
			func_577();
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[13 /*2*/].f_1, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
			if (__LIB_0__::func_27(iLocal_1020, 65536))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_946[0], 93, true);
				PED::REGISTER_TARGET(iLocal_946[0], Global_35, 1);
				TASK::TASK_COMBAT_PED(0, Global_35, 1048576, 4096);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_946[0], true, false), 500f, -1, 8448, 1077936128);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_946[0], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			return true;
		}
		else if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[0 /*2*/], "intro_idle", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[0 /*2*/], "main_dialogue_a", 1))
		{
			func_577();
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[14 /*2*/].f_1, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
			if (__LIB_0__::func_27(iLocal_1020, 65536))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_946[0], 93, true);
				PED::REGISTER_TARGET(iLocal_946[0], Global_35, 1);
				TASK::TASK_COMBAT_PED(0, Global_35, 1048576, 4096);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_946[0], true, false), 500f, -1, 8448, 1077936128);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_946[0], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[10 /*2*/].f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[11 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[4 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[7 /*2*/].f_1, 1))
	{
		func_577();
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], "shot_loose_crim", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
		TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_946[0], true, false), 500f, -1, 8448, 1077936128);
		TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_946[0], iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		return true;
	}
	else if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[0 /*2*/], "intro_idle_female_crim", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[0 /*2*/], "main_dialogue_a", 1))
	{
		func_577();
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], "shot_loose_crim", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
		TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_946[0], true, false), 500f, -1, 8448, 1077936128);
		TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_946[0], iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_370()
{
	if (__LIB_0__::func_27(iLocal_1020, 65536))
	{
		return;
	}
	if (!__LIB_0__::func_27(iLocal_1019, 128))
	{
		if (func_182(iLocal_945))
		{
			if (__LIB_2__::func_227(-1f, 1, iLocal_946[0], 0))
			{
				if (iLocal_109 == 7)
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("CRIMINAL_LEAVE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (__LIB_0__::func_27(iLocal_1020, 65536))
				{
					if (!__LIB_0__::func_27(iLocal_1020, 134217728))
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, "SICK_BASTARD", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					}
				}
				else
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("LEAVE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_683(&iLocal_1019, 128);
			}
		}
	}
	else if (iLocal_109 == 7 && !__LIB_0__::func_27(iLocal_1020, 1048576))
	{
		if (__LIB_2__::func_227(-1f, 1, iLocal_946[0], 0))
		{
			__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("CRIMINAL_LEAVE2"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_1020, 1048576);
		}
	}
}

bool func_372(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return true;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
	{
		return false;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	else if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
		}
		return false;
	}
	else
	{
		return true;
	}
	return false;
}

void func_381()
{
	PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("prisoner_val_1", 1);
	PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("prisoner_rhd_1", 1);
	PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("prisoner_std_1", 1);
	PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("prisoner_str_1", 1);
	PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("prisoner_blw_1", 1);
	PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("prisoner_twd_1", 1);
}

void func_390(int iParam0)
{
	int iVar0;
	PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, "Sad", 1f, -1);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("SC_WORLD_HUMAN_MOURNING"), -1, false, joaat("SCRIPT_COMMON_KNEEL_MOURNING_FEMALE_A"), -1f, false);
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
	PED::_0x2208438012482A1A(iParam0, false, false);
	iLocal_1434 = MISC::GET_GAME_TIMER();
}

void func_391()
{
	int iVar0;
	float fVar1;
	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 5f);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1063[2 /*3*/], 2f, -1, fVar1, 4194309, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -249.038f, 846.9818f, 122.7648f, 2f, -1, 5f, 524293, 40000f);
	TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_SIT_GROUND"), -249.038f, 846.9818f, 122.7648f, 234.4783f, -1, true, false, 0, -1f, false);
	__LIB_1__::func_474(iLocal_946[5], &iVar0, 0.75f, 1f, 1, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_946[5], 3, 2, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_946[5], 4, 2, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_946[5], 130, false);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_946[5]));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_946[5], false);
}

void func_392()
{
	switch (iLocal_1027)
	{
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_1434) > 3000 && __LIB_2__::func_227(0, 1, iLocal_946[4], 1))
			{
				__LIB_2__::func_478(iLocal_946[4], 0, "RE_PH_VAL_V1_WOMAN_SOB_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1027++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(0, 1, iLocal_946[4], 1))
			{
				__LIB_2__::func_478(iLocal_946[4], 0, "RE_PH_VAL_V1_WOMAN_SOB_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1027++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(0, 1, iLocal_946[4], 1))
			{
				__LIB_2__::func_478(iLocal_946[4], 0, "RE_PH_VAL_V1_WOMAN_SOB_C", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1027++;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(0, 1, iLocal_946[4], 1))
			{
				if (func_585(iLocal_946[4]))
				{
					__LIB_2__::func_478(iLocal_946[4], 0, "RE_PH_VAL_V1_WOMAN_SOB_D", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_1019, 4096);
					iLocal_1027++;
				}
			}
			break;
		case 4:
			break;
	}
}

void func_393(int iParam0)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
}

void func_394(int iParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 5f);
	vVar1 = { func_586(iParam0, iParam4, iParam5, iParam6) };
	fParam3 = fParam3;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (!__LIB_0__::func_86(vVar1))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, fParam3, -1, fVar4, 5, 40000f);
	}
	TASK::TASK_WANDER_IN_AREA(0, vVar1, 100f, 0f, 0f, 1);
	__LIB_1__::func_474(iParam0, &iVar0, fParam1, fParam2, 1, 1);
	if (bParam7)
	{
		func_393(iParam0);
	}
	func_587(iParam0);
}

bool func_396(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			if (__LIB_0__::func_27(iLocal_1020, 1))
			{
				return true;
			}
			break;
		case 5:
			if (__LIB_0__::func_27(iLocal_1020, 2))
			{
				return true;
			}
			break;
		case 6:
			if (__LIB_0__::func_27(iLocal_1020, 4))
			{
				return true;
			}
			break;
		case 7:
			if (__LIB_0__::func_27(iLocal_1020, 8))
			{
				return true;
			}
			break;
		case 8:
			if (__LIB_0__::func_27(iLocal_1020, 16))
			{
				return true;
			}
			break;
		case 9:
			if (__LIB_0__::func_27(iLocal_1020, 32))
			{
				return true;
			}
			break;
		case 10:
			if (__LIB_0__::func_27(iLocal_1020, 64))
			{
				return true;
			}
			break;
		case 11:
			if (__LIB_0__::func_27(iLocal_1020, 128))
			{
				return true;
			}
			break;
		case 12:
			if (__LIB_0__::func_27(iLocal_1020, 256))
			{
				return true;
			}
			break;
		case 13:
			if (__LIB_0__::func_27(iLocal_1020, 512))
			{
				return true;
			}
			break;
		case 14:
			if (__LIB_0__::func_27(iLocal_1020, 1024))
			{
				return true;
			}
			break;
		case 15:
			if (__LIB_0__::func_27(iLocal_1020, 2048))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_397(int iParam0)
{
	if (!__LIB_2__::func_1(iLocal_946[iParam0], 0, 1))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903, "Sheriff", iLocal_946[1]);
			}
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903.f_3))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_3, "plr", iLocal_946[2]);
			}
			break;
		case 3:
			break;
		case 4:
			if (iLocal_109 == 1)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903.f_1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_1, "Mother", iLocal_946[4]);
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911, "GROUP_CF01", iLocal_946[4]);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903.f_1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_1, "GROUP_AF01", iLocal_946[4]);
				}
			}
			break;
		case 5:
			if (iLocal_109 == 1)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903.f_1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_1, "Son", iLocal_946[5]);
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903.f_1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_1, "GROUP_AM01", iLocal_946[5]);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911, "GROUP_CM01", iLocal_946[5]);
				}
			}
			break;
		case 6:
			if (iLocal_109 == 7)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903.f_1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_1, "MALE_B", iLocal_946[6]);
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903.f_2))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM01", iLocal_946[6]);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911.f_1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_1, "GROUP_DM01", iLocal_946[6]);
				}
			}
			break;
		case 7:
			if (iLocal_109 == 7)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903.f_1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_1, "MALE_A", iLocal_946[7]);
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911.f_2))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM02", iLocal_946[7]);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911.f_1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_1, "GROUP_DM02", iLocal_946[7]);
				}
			}
			break;
		case 8:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903.f_2))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM01", iLocal_946[8]);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911, "GROUP_CM01", iLocal_946[8]);
			}
			break;
		case 9:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903.f_2))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM02", iLocal_946[9]);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911.f_1))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_1, "GROUP_DM01", iLocal_946[9]);
			}
			break;
		case 10:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903.f_2))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM03", iLocal_946[10]);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911.f_1))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_1, "GROUP_DM02", iLocal_946[10]);
			}
			break;
		case 11:
			if (((iLocal_109 == 0 || iLocal_109 == 8) || iLocal_109 == 7) || iLocal_109 == 6)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911.f_2))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_AF01", iLocal_946[11]);
				}
			}
			else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911.f_2))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_EM01", iLocal_946[11]);
			}
			break;
		case 12:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911.f_2))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_EM02", iLocal_946[12]);
			}
			break;
		case 13:
			if (((iLocal_109 == 0 || iLocal_109 == 8) || iLocal_109 == 7) || iLocal_109 == 6)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911.f_2))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_AM02", iLocal_946[13]);
				}
			}
			else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911.f_2))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_EF01", iLocal_946[13]);
			}
			break;
		case 14:
			if (((iLocal_109 == 0 || iLocal_109 == 8) || iLocal_109 == 7) || iLocal_109 == 6)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911.f_2))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_AM03", iLocal_946[14]);
				}
			}
			else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911.f_3))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_3, "GROUP_FM01", iLocal_946[14]);
			}
			break;
		case 15:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_911.f_3))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_3, "GROUP_FM02", iLocal_946[15]);
			}
			break;
	}
}

void func_398(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			__LIB_1__::func_683(iParam0, 1);
			break;
		case 5:
			__LIB_1__::func_683(iParam0, 2);
			break;
		case 6:
			__LIB_1__::func_683(iParam0, 4);
			break;
		case 7:
			__LIB_1__::func_683(iParam0, 8);
			break;
		case 8:
			__LIB_1__::func_683(iParam0, 16);
			break;
		case 9:
			__LIB_1__::func_683(iParam0, 32);
			break;
		case 10:
			__LIB_1__::func_683(iParam0, 64);
			break;
		case 11:
			__LIB_1__::func_683(iParam0, 128);
			break;
		case 12:
			__LIB_1__::func_683(iParam0, 256);
			break;
		case 13:
			__LIB_1__::func_683(iParam0, 512);
			break;
		case 14:
			__LIB_1__::func_683(iParam0, 1024);
			break;
		case 15:
			__LIB_1__::func_683(iParam0, 2048);
			break;
	}
}

bool func_503(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (__LIB_10__::func_920(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = __LIB_2__::func_90(iParam1);
			if (__LIB_2__::func_91(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = __LIB_2__::func_92(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						__LIB_2__::func_89(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							__LIB_2__::func_89(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_507(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = __LIB_2__::func_93(iParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_515(iParam2, iParam1))
			{
				__LIB_2__::func_89(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_508(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	if (iParam2->f_12 < IntToFloat(__LIB_2__::func_94(iParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_515(iParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					__LIB_2__::func_89(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

int func_513(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (__LIB_1__::func_357(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 1000))
		{
			return 1;
		}
	}
	if (__LIB_1__::func_358(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_515(int iParam0, int iParam1)
{
	if (__LIB_2__::func_96(iParam0))
	{
		return true;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 1000))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	return false;
}

int func_521(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_672(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

void func_534()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_818[2 /*12*/].f_8))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903, "LIST", Local_818[2 /*12*/].f_8);
		ENTITY::SET_ENTITY_VISIBLE(Local_818[2 /*12*/].f_8, false);
		OBJECT::DELETE_OBJECT(&(Local_818[2 /*12*/].f_8));
	}
}

void func_535()
{
	if (__LIB_0__::func_27(iLocal_1019, -2147483648))
	{
		if ((iLocal_1025 > 3 || Local_111.f_46) || (func_691(&uLocal_1026) && func_692(1086324736 /* Float: 6f */) < 4))
		{
			func_42(0);
		}
	}
}

int func_537(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_3__::func_269(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_537(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_3__::func_270(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_3__::func_271(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_3__::func_272(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_3__::func_271(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_270(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

bool func_558(int iParam0, var uParam1, int iParam2)
{
	char* sVar0;
	if (__LIB_2__::func_1(iParam0, 0, 0))
	{
		if (PED::_0x802092B07E3B1EEA(iParam0, Global_36, 3) || !PED::IS_PED_USING_ANY_SCENARIO(iParam0))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, Global_35, -1, -1f, -1f, -1f);
			sVar0 = func_560(iParam0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				__LIB_2__::func_478(iParam0, Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			func_81(iParam2);
			_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, uParam1);
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_559(int iParam0, int iParam1, float fParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	if (__LIB_2__::func_1(iParam0, 0, 0) && __LIB_2__::func_1(iParam1, 0, 0))
	{
		if (PED::_0x802092B07E3B1EEA(iParam0, Global_36, 2) || !PED::IS_PED_USING_ANY_SCENARIO(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, 0, true);
			if (iVar1 != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), false, 0, false, false);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (iVar1 != joaat("WEAPON_UNARMED"))
			{
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			}
			TASK::TASK_CONFRONT(0, Global_35, 3);
			__LIB_1__::func_474(iParam0, &iVar0, fParam2, fParam3, 1, 1);
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

char* func_560(int iParam0)
{
	char* sVar0;
	switch (iLocal_109)
	{
		case 6:
			sVar0 = "RE_PH_STD_V3_PLAYER_WARN";
			break;
		case 3:
			if (iLocal_984 == 76)
			{
				sVar0 = "RE_PH_VAL_V3_PLAYER_WARN";
			}
			else if (iLocal_984 == 105)
			{
				if (iParam0 == iLocal_946[3] || iParam0 == iLocal_946[2])
				{
					sVar0 = "RE_PH_RHD_V2_PLAYER_WARN";
				}
			}
			break;
		case 4:
			sVar0 = "RE_PH_VAL_V4_PLAYER_WARN";
			break;
		case 5:
			if (iParam0 == iLocal_946[3] || iParam0 == iLocal_946[2])
			{
				sVar0 = "RE_PH_RHD_V3_PLAYER_WARN";
			}
			break;
		case 8:
			if (iParam0 == iLocal_946[2])
			{
				sVar0 = "LEAVE_NOW";
			}
			break;
		case 0:
			if (iParam0 == iLocal_946[2])
			{
				sVar0 = "LEAVE_NOW";
			}
			else if (iParam0 == iLocal_946[3])
			{
				sVar0 = "RE_PH_BLW_V1_PLAYER_WARN";
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		sVar0 = func_338("PLAYER_WARN");
	}
	return sVar0;
}

int func_561(int iParam0, int iParam1, bool bParam2, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if (__LIB_2__::func_1(iParam0, 0, 0) && __LIB_2__::func_1(iParam1, 0, 0))
	{
		if ((PED::IS_PED_USING_ANY_SCENARIO(iParam0) && PED::_0x802092B07E3B1EEA(iParam0, Global_36, 3)) || !PED::IS_PED_USING_ANY_SCENARIO(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, 0, true);
			if (iVar1 == joaat("WEAPON_UNARMED"))
			{
				iVar2 = WEAPON::GET_BEST_PED_WEAPON(iParam0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar2, false, 0, false, false);
				bVar3 = true;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (bVar3)
			{
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			}
			if (bParam2)
			{
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, iParam1, iParam1, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			}
			else if (PED::GET_MOUNT(iParam0) == 0)
			{
				PED::_0x8ACC0506743A8A5C(iParam0, joaat("SITUATIONNORMAL"), 1, -1082130432 /* Float: -1f */);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, iParam1, -1, false, 1);
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam1, 0, -1f, -1f, -1f);
			}
			__LIB_1__::func_474(iParam0, &iVar0, fParam3, fParam4, 1, 1);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

char* func_562(int iParam0)
{
	char* sVar0;
	switch (iLocal_109)
	{
		case 6:
			sVar0 = "RE_PH_STD_V3_PLAYER_WARN_AGAIN";
			break;
		case 3:
			if (iLocal_984 == 76)
			{
				sVar0 = "RE_PH_VAL_V3_PLAYER_WARN_AGAIN";
			}
			else if (iLocal_984 == 105)
			{
				if (iParam0 == iLocal_946[3] || iParam0 == iLocal_946[2])
				{
					sVar0 = "RE_PH_RHD_V2_PLAYER_WARN_AGAIN";
				}
			}
			break;
		case 4:
			sVar0 = "RE_PH_VAL_V4_PLAYER_WARN_AGAIN";
			break;
		case 5:
			if (iParam0 == iLocal_946[3])
			{
				sVar0 = "RE_PH_RHD_V3_PLAYER_WARN_AGAIN";
			}
			else if (iParam0 == iLocal_946[2])
			{
				sVar0 = "RE_PH_RHD_V3_PLAYER_WARN_AGAIN";
			}
			break;
		case 8:
			if (iParam0 == iLocal_946[2])
			{
				sVar0 = "LAST_WARNING";
			}
			break;
		case 0:
			if (iParam0 == iLocal_946[2])
			{
				sVar0 = "LAST_WARNING";
			}
			else if (iParam0 == iLocal_946[3])
			{
				sVar0 = "RE_PH_BLW_V1_PLAYER_WARN_AGAIN";
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		sVar0 = func_338("PLAYER_WARN_AGAIN");
	}
	return sVar0;
}

void func_563(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	float fVar1;
	fVar1 = ENTITY::GET_ENTITY_HEADING(iParam0);
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 993674639, true) != 1)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (__LIB_0__::func_94(iParam0, vParam1, 1) > 1f)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam1, 1f, 20000, 0.25f, 0, fParam4);
		}
		if (MISC::ABSF((fVar1 - fParam4)) > 2f)
		{
			TASK::TASK_ACHIEVE_HEADING(0, fParam4, 0);
		}
		if (iParam0 == iLocal_946[3])
		{
			__LIB_1__::func_473(0, joaat("WORLD_HUMAN_STARE_STOIC"), -1, 1, 0, 4f);
		}
		else
		{
			__LIB_1__::func_473(0, joaat("WORLD_HUMAN_GUARD_SCOUT"), -1, 1, 0, 4f);
		}
		__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
	}
}

void func_566(bool bParam0)
{
	if (bParam0)
	{
		if (__LIB_0__::func_27(iLocal_1019, 16777216))
		{
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_946[0], true);
			__LIB_1__::func_681(&iLocal_1019, 16777216);
		}
	}
	else if (!__LIB_0__::func_27(iLocal_1019, 16777216))
	{
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_946[0], false);
		__LIB_1__::func_683(&iLocal_1019, 16777216);
	}
}

bool func_567()
{
	if (__LIB_0__::func_27(iLocal_1019, 1048576))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1425, Local_76[1 /*2*/], &cLocal_59, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1425, -596672321))
		{
			__LIB_1__::func_683(&iLocal_1019, 1048576);
			return true;
		}
	}
	return false;
}

void func_568()
{
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_946[0], Local_903))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903, "CRIMINAL", iLocal_946[0]);
	}
}

void func_569()
{
	if (__LIB_2__::func_1(iLocal_946[0], 0, 0))
	{
		func_566(0);
		PED::SET_PED_RESET_FLAG(iLocal_946[0], 47, true);
		PED::SET_PED_RESET_FLAG(iLocal_946[0], 12, true);
		PED::SET_PED_RESET_FLAG(iLocal_946[0], 36, true);
		PED::SET_PED_RESET_FLAG(iLocal_946[0], 31, true);
	}
	else
	{
		func_566(1);
	}
}

void func_570()
{
	if (!__LIB_0__::func_27(iLocal_1019, 32768))
	{
		if (__LIB_3__::func_273(&(Local_111.f_162), "HNGP_LEVER", vLocal_1057, 0, joaat("INPUT_INTERACT_POS"), 1.75f, 0, 1, 3, 0, 0, iLocal_1102, 0, 0, 0, 1, joaat("SHORT_TIMED_EVENT"), 0))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_903.f_3);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			HUD::_DISPLAY_HUD_COMPONENT(724769646);
			__LIB_1__::func_748(&(Local_111.f_162), 1, 1);
			func_719(&iLocal_75, vLocal_1085);
			StringCopy(&cLocal_67, func_720(iLocal_75), 64);
			__LIB_1__::func_148(&uLocal_988);
			__LIB_1__::func_683(&iLocal_1019, 32768);
		}
	}
	else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903.f_3))
	{
		func_119(Global_35, &cLocal_67);
	}
	else if (func_721(&cLocal_67))
	{
		if (__LIB_4__::func_273(Global_35, Local_903.f_3, "plr", &cLocal_67, &uLocal_1450, 1065353216 /* Float: 1f */, 0, 1, 1) || __LIB_0__::func_264(&uLocal_988) > 10f)
		{
			if (__LIB_0__::func_264(&uLocal_988) > 10f)
			{
			}
			ENTITY::STOP_ENTITY_ANIM(iLocal_1426, "static_lever", Local_76[1 /*2*/], -8f);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_3, "bAction", true, false);
			func_346();
			ENTITY::PLAY_ENTITY_ANIM(iLocal_1425, &cLocal_59, Local_76[1 /*2*/], 1000f, false, true, true, 0.28f, 32768);
			__LIB_1__::func_683(&iLocal_1019, 64);
			__LIB_1__::func_683(&iLocal_1019, 32);
			PED::_0x7ABBD9E449E0DB00(iLocal_946[0], 0);
			__LIB_3__::func_465(2, joaat("HONOR_EVENT_CRUEL_DEATH"), 0, "HONOR_EVENT_CRUEL_DEATH", iLocal_946[0], 0, 1065353216 /* Float: 1f */, 0);
		}
	}
}

void func_572()
{
	if (!__LIB_0__::func_27(iLocal_1019, 8))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_946[1]))
		{
			if (__LIB_0__::func_27(iLocal_1296, 4096))
			{
				if (!__LIB_0__::func_27(iLocal_1020, 67108864))
				{
					if (Local_111.f_98[0] < 12f && PED::_0x7F9B9791D4CB71F6(iLocal_946[0], Global_35, 0, 0) == 1)
					{
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_946[0]))
						{
							if (iLocal_109 == 7)
							{
								if (__LIB_3__::func_628(0))
								{
									__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("CRIMINAL_SPOT_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
								else
								{
									__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("CRIMINAL_SPOT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
							}
							else
							{
								__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("SPOT2"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
							}
							__LIB_1__::func_683(&iLocal_1020, 67108864);
							return;
						}
					}
				}
			}
		}
	}
}

char* func_573(int iParam0)
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			switch (iLocal_109)
			{
				case 1:
					break;
				case 3:
					if (iLocal_984 == 76)
					{
						sVar0 = "RE_PH_VAL_V3_DROWN_IDLE";
					}
					else if (iLocal_984 == 105)
					{
						sVar0 = "RE_PH_RHD_V2_DROWN_IDLE";
					}
					break;
				case 5:
					sVar0 = "RE_PH_RHD_V3_BOUNTY_IDLE2";
					break;
				case 6:
					sVar0 = "RE_PH_STD_V3_BOUNTY_IDLE";
					break;
				case 7:
					break;
				case 8:
					sVar0 = "RE_PH_BLW_V2_THREAT";
					break;
				case 0:
					sVar0 = "RE_PH_BLW_V1_THREAT";
					break;
			}
			break;
		case 1:
			switch (iLocal_109)
			{
				case 1:
					break;
				case 3:
					if (iLocal_984 == 76)
					{
						sVar0 = "RE_PH_VAL_V3_DROWN_IDLE2";
					}
					else if (iLocal_984 == 105)
					{
						sVar0 = "RE_PH_RHD_V2_DROWN_IDLE2";
					}
					break;
				case 4:
					break;
				case 5:
					sVar0 = "RE_PH_RHD_V3_BOUNTY_IDLE";
					break;
				case 6:
					sVar0 = "RE_PH_STD_V3_BOUNTY_IDLE2";
					break;
				case 7:
					break;
				case 8:
					sVar0 = "RE_PH_BLW_V2_THREAT_B";
					break;
				case 0:
					sVar0 = "RE_PH_BLW_V1_THREAT_B";
					break;
			}
			break;
		case 2:
			switch (iLocal_109)
			{
				case 6:
					sVar0 = "RE_PH_STD_V3_BOUNTY_INNOCENT";
					break;
			}
			break;
		case 3:
			switch (iLocal_109)
			{
				case 6:
					sVar0 = "RE_PH_STD_V3_BOUNTY_INNOCENT_B";
					break;
			}
			break;
		case 4:
			break;
	}
	return sVar0;
}

void func_576()
{
	if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_946[0]) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_946[0]))
	{
		switch (iLocal_1021)
		{
			case 0:
				if (iLocal_109 == 1)
				{
					if (__LIB_0__::func_27(iLocal_1020, 65536) && !__LIB_0__::func_27(iLocal_1020, 134217728))
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, "SICK_BASTARD", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_1020, 134217728);
					}
					else
					{
						__LIB_2__::func_478(iLocal_946[0], Global_35, "DONT_BE_STUPID", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					}
					iLocal_1021++;
				}
				else
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("REACT_COWER"), 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				break;
			case 1:
				if (iLocal_109 == 1)
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, "FIGHT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				else
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("REACT_COWER"), 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				break;
			case 2:
				if (iLocal_109 == 1)
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, "GENERIC_ANGRY_SHOUT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				else
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("AGGRO"), 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				break;
			case 3:
				if (iLocal_109 == 1)
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, "GENERIC_ANGRY_SHOUT", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				else
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("AGGRO"), 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				break;
			case 4:
				if (iLocal_109 == 1)
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				else if (iLocal_109 == 7)
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("CRIMINAL_FLINCH"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				else
				{
					__LIB_2__::func_478(iLocal_946[0], Global_35, func_338("FLINCH"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				break;
			case 5:
				break;
		}
	}
}

void func_577()
{
	TASK::UNCUFF_PED(iLocal_946[0]);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903))
	{
		if (ANIMSCENE::_0x6F1F0B17109309DA(Local_903, "CRIMINAL"))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903, "CRIMINAL", iLocal_946[0]);
			TASK::CLEAR_PED_TASKS(iLocal_946[0], true, false);
		}
	}
}

bool func_585(int iParam0)
{
	int iVar0;
	if (PED::_0xEC6935EBE0847B90(iParam0, vLocal_1051))
	{
		PED::_0x24C82EF607105FAA(iParam0, joaat("AVOID"));
		PED::_0xAAB050DA48B57978(iParam0, "Default_Sad", 0, -1, 4);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_586(iLocal_946[4], 0, 0, 0), 1f, -1, 1f, 4, 40000f);
		TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
		__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
		PED::_0x2208438012482A1A(iParam0, false, false);
		return true;
	}
	return false;
}

Vector3 func_586(int iParam0, int iParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	if (__LIB_0__::func_86(iParam1, iParam2, iParam3))
	{
		vVar0 = { func_727(iParam0) };
	}
	else
	{
		vVar0 = { iParam1, iParam2, iParam3 };
	}
	return vVar0;
}

void func_587(int iParam0)
{
	int iVar0;
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		iVar0 = 4;
		while (iVar0 <= 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_818[iVar0 /*12*/].f_8))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_818[iVar0 /*12*/].f_8, iParam0))
				{
					__LIB_2__::func_919(Local_818[iVar0 /*12*/].f_8, 1, 1);
				}
			}
			iVar0++;
		}
	}
}

int func_672(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	if (Global_1935630.f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630.f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 1000))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 1000))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (__LIB_1__::func_357(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 1000))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = __LIB_0__::func_665(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (__LIB_0__::func_665(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_691(var uParam0)
{
	if (!__LIB_0__::func_27(iLocal_1019, 64))
	{
		return false;
	}
	if (*uParam0 == 0)
	{
		*uParam0 = MISC::GET_GAME_TIMER();
		return true;
	}
	if (MISC::GET_GAME_TIMER() >= *uParam0 + 1000)
	{
		*uParam0 = MISC::GET_GAME_TIMER();
		return true;
	}
	return false;
}

int func_692(int iParam0)
{
	var uVar0;
	var uVar7[1];
	uVar0 = 6;
	uVar7[0] = Global_35;
	return func_787(&uVar0, &uVar7, 5, vLocal_1060, iParam0, 0, 1, 1, -1, 1, 0, -1082130432 /* Float: -1f */, 0, 0);
}

void func_719(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	int iVar8;
	iVar8 = __LIB_3__::func_619(Global_35, 0, 0);
	if ((WEAPON::_IS_WEAPON_MELEE(iVar8) || WEAPON::_IS_WEAPON_ONE_HANDED(iVar8)) || WEAPON::_IS_WEAPON_THROWABLE(iVar8))
	{
		if (PED::IS_PED_USING_ACTION_MODE(Global_35))
		{
			vVar0 = { func_824(2) };
			vVar3 = { func_824(8) };
			fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, false);
			fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar3, false);
			if (fVar6 < fVar7)
			{
				*iParam0 = 2;
				vParam1 = { vVar0 };
			}
			else
			{
				*iParam0 = 8;
				vParam1 = { vVar3 };
			}
		}
		else
		{
			vVar0 = { func_824(3) };
			vVar3 = { func_824(7) };
			fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, false);
			fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar3, false);
			if (fVar6 < fVar7)
			{
				*iParam0 = 3;
				vParam1 = { vVar0 };
			}
			else
			{
				*iParam0 = 7;
				vParam1 = { vVar3 };
			}
		}
	}
	else if (WEAPON::_IS_WEAPON_BOW(iVar8))
	{
		vVar0 = { func_824(6) };
		vVar3 = { func_824(12) };
		fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, false);
		fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar3, false);
		if (fVar6 < fVar7)
		{
			*iParam0 = 6;
			vParam1 = { vVar0 };
		}
		else
		{
			*iParam0 = 12;
			vParam1 = { vVar3 };
		}
	}
	else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar8))
	{
		if (PED::IS_PED_USING_ACTION_MODE(Global_35))
		{
			vVar0 = { func_824(6) };
			vVar3 = { func_824(10) };
			fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, false);
			fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar3, false);
			if (fVar6 < fVar7)
			{
				*iParam0 = 6;
				vParam1 = { vVar0 };
			}
			else
			{
				*iParam0 = 10;
				vParam1 = { vVar3 };
			}
		}
		else
		{
			vVar0 = { func_824(5) };
			vVar3 = { func_824(9) };
			fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, false);
			fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar3, false);
			if (fVar6 < fVar7)
			{
				*iParam0 = 6;
				vParam1 = { vVar0 };
			}
			else
			{
				*iParam0 = 10;
				vParam1 = { vVar3 };
			}
		}
	}
	else
	{
		vVar0 = { func_824(4) };
		vVar3 = { func_824(11) };
		fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, false);
		fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar3, false);
		if (fVar6 < fVar7)
		{
			*iParam0 = 4;
			vParam1 = { vVar0 };
		}
		else
		{
			*iParam0 = 11;
			vParam1 = { vVar3 };
		}
	}
}

char* func_720(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_LEVER_GUARD_V1";
		case 1:
			return "PBL_LEVER_GUARD_V2";
		case 2:
			return "PBL_PULL_1H_ACTION";
		case 3:
			return "PBL_PULL_1H_ARMED";
		case 4:
			return "PBL_PULL_ACTION_UNARMED";
		case 5:
			return "PBL_PULL_RIFLE";
		case 6:
			return "PBL_PULL_RIFLE_ACTION";
		case 7:
			return "PBL_PUSH_IH";
		case 8:
			return "PBL_PUSH_1H_ACTION";
		case 9:
			return "PBL_PUSH_RIFLE";
		case 10:
			return "PBL_PUSH_RIFLE_ACTION";
		case 11:
			return "PBL_PUSH_UNARMED";
		case 12:
			return "PBL_kick_behind";
		default:
			break;
	}
	return "PBL_PUSH_1H_ACTION";
}

bool func_721(char[4] cParam0)
{
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_903.f_3, cParam0))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_903.f_3, cParam0);
	}
	else
	{
		return true;
	}
	return false;
}

Vector3 func_727(int iParam0)
{
	switch (iLocal_109)
	{
		case 0:
		case 8:
			if (iParam0 == iLocal_946[4])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[5])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[6])
			{
				return vLocal_1063[0 /*3*/];
			}
			else if (iParam0 == iLocal_946[7])
			{
				return vLocal_1063[0 /*3*/];
			}
			else if (iParam0 == iLocal_946[8])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[9])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[10])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[11])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[12])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[13])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[14])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[15])
			{
				return vLocal_1063[3 /*3*/];
			}
			break;
		case 1:
			if (iParam0 == iLocal_946[4])
			{
				return vLocal_1063[0 /*3*/];
			}
			else if (iParam0 == iLocal_946[5])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[6])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[7])
			{
				return vLocal_1063[4 /*3*/];
			}
			else if (iParam0 == iLocal_946[8])
			{
				return vLocal_1063[5 /*3*/];
			}
			else if (iParam0 == iLocal_946[9])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[10])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[11])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[12])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[13])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[14])
			{
				return vLocal_1063[4 /*3*/];
			}
			else if (iParam0 == iLocal_946[15])
			{
				return vLocal_1063[5 /*3*/];
			}
			break;
		case 3:
			switch (__LIB_1__::func_898())
			{
				case 9:
					if (iParam0 == iLocal_946[4])
					{
						return vLocal_1063[3 /*3*/];
					}
					else if (iParam0 == iLocal_946[5])
					{
						return vLocal_1063[4 /*3*/];
					}
					else if (iParam0 == iLocal_946[6])
					{
						return vLocal_1063[5 /*3*/];
					}
					else if (iParam0 == iLocal_946[7])
					{
						return vLocal_1063[3 /*3*/];
					}
					else if (iParam0 == iLocal_946[8])
					{
						return vLocal_1063[4 /*3*/];
					}
					else if (iParam0 == iLocal_946[9])
					{
						return vLocal_1063[0 /*3*/];
					}
					else if (iParam0 == iLocal_946[10])
					{
						return vLocal_1063[2 /*3*/];
					}
					else if (iParam0 == iLocal_946[11])
					{
						return vLocal_1063[1 /*3*/];
					}
					else if (iParam0 == iLocal_946[12])
					{
						return vLocal_1063[1 /*3*/];
					}
					else if (iParam0 == iLocal_946[13])
					{
						return vLocal_1063[1 /*3*/];
					}
					else if (iParam0 == iLocal_946[14])
					{
						return vLocal_1063[5 /*3*/];
					}
					else if (iParam0 == iLocal_946[15])
					{
						return vLocal_1063[3 /*3*/];
					}
					break;
				case 11:
					if (iParam0 == iLocal_946[4])
					{
						return vLocal_1063[3 /*3*/];
					}
					else if (iParam0 == iLocal_946[5])
					{
						return vLocal_1063[0 /*3*/];
					}
					else if (iParam0 == iLocal_946[6])
					{
						return vLocal_1063[3 /*3*/];
					}
					else if (iParam0 == iLocal_946[7])
					{
						return vLocal_1063[3 /*3*/];
					}
					else if (iParam0 == iLocal_946[8])
					{
						return vLocal_1063[1 /*3*/];
					}
					else if (iParam0 == iLocal_946[9])
					{
						return vLocal_1063[2 /*3*/];
					}
					else if (iParam0 == iLocal_946[10])
					{
						return vLocal_1063[3 /*3*/];
					}
					break;
			}
			break;
		case 4:
			if (iParam0 == iLocal_946[4])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[5])
			{
				return -361.4171f, 738.0641f, 115.7283f;
			}
			else if (iParam0 == iLocal_946[6])
			{
				return vLocal_1063[5 /*3*/];
			}
			else if (iParam0 == iLocal_946[7])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[8])
			{
				return vLocal_1063[4 /*3*/];
			}
			else if (iParam0 == iLocal_946[9])
			{
				return vLocal_1063[4 /*3*/];
			}
			else if (iParam0 == iLocal_946[10])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[11])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[12])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[13])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[14])
			{
				return vLocal_1063[5 /*3*/];
			}
			else if (iParam0 == iLocal_946[15])
			{
				return vLocal_1063[3 /*3*/];
			}
			break;
		case 5:
			if (iParam0 == iLocal_946[4])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[5])
			{
				return vLocal_1063[0 /*3*/];
			}
			else if (iParam0 == iLocal_946[6])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[7])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[8])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[9])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[10])
			{
				return vLocal_1063[3 /*3*/];
			}
			break;
		case 6:
			if (iParam0 == iLocal_946[4])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[5])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[6])
			{
				return vLocal_1063[0 /*3*/];
			}
			else if (iParam0 == iLocal_946[7])
			{
				return vLocal_1063[0 /*3*/];
			}
			else if (iParam0 == iLocal_946[8])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[9])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[10])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[11])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[12])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[13])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[14])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[15])
			{
				return vLocal_1063[3 /*3*/];
			}
			break;
		case 7:
			if (iParam0 == iLocal_946[4])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[5])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[6])
			{
				return vLocal_1063[0 /*3*/];
			}
			else if (iParam0 == iLocal_946[7])
			{
				return vLocal_1063[0 /*3*/];
			}
			else if (iParam0 == iLocal_946[8])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[9])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[10])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[11])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[12])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[13])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[14])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[15])
			{
				return vLocal_1063[3 /*3*/];
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_787(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, iParam6, iParam6, fParam13);
	}
	iVar1 = __LIB_15__::func_799(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

Vector3 func_824(int iParam0)
{
	vector3 vVar0;
	vVar0 = { vLocal_1082 };
	switch (iParam0)
	{
		case 0:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, 0.88744f, 0.030309f, 1f) };
			break;
		case 1:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, 0.88744f, 0.030309f, 1f) };
			break;
		case 2:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, 0.95883f, -0.000471f, 1f) };
			break;
		case 3:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, 0.803585f, -0.006519f, 1.005364f) };
			break;
		case 4:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, 0.852332f, -0.081826f, 1f) };
			break;
		case 5:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, 0.88744f, 0.030309f, 1f) };
			break;
		case 6:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, 1.005871f, -0.070214f, 1f) };
			break;
		case 7:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, -0.830719f, -0.071351f, 1f) };
			break;
		case 8:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, -0.802012f, -0.042675f, 1f) };
			break;
		case 9:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, -0.744065f, 0.00757f, 1f) };
			break;
		case 10:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, -0.899052f, -0.033155f, 1f) };
			break;
		case 11:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, -0.635599f, 0.036676f, 1.005364f) };
			break;
		case 12:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, -1.102158f, -0.069693f, 1.005364f) };
			break;
	}
	return vVar0;
}

