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
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 24;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
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
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
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
	int iLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_15 = joaat("A_M_M_ARMTOWNFOLK_01");
	iLocal_122 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1();
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		func_2();
		func_3();
		__LIB_16__::func_984(12, iLocal_14, &iLocal_146, &uLocal_150, &uLocal_124, 0, 1097859072 /* Float: 15f */, 0);
		__LIB_16__::func_971(iLocal_146, &iLocal_120, 8, 12, 0);
		if (iLocal_114 != 4)
		{
		}
		else
		{
			func_6();
		}
		switch (iLocal_114)
		{
			case 0:
				func_7();
				func_8(1);
				break;
			case 1:
				if (func_9())
				{
					func_8(2);
				}
				break;
			case 2:
				if (func_10())
				{
					func_8(3);
				}
				break;
			case 3:
				func_11();
				break;
			case 4:
				func_12();
				break;
		}
	}
}

void func_1()
{
	__LIB_16__::func_840(12);
	if (iLocal_114 >= 4)
	{
		__LIB_16__::func_972(12, &iLocal_146, &iLocal_120, 16);
		if (iLocal_14 == 3)
		{
			__LIB_16__::func_783(12, 12);
		}
		else
		{
			__LIB_16__::func_783(12, iLocal_14 + 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_146))
	{
		PED::DELETE_PED(&iLocal_146);
	}
	__LIB_16__::func_839(&uLocal_125);
	AUDIO::_0x36559148B78853B3(1, 1, 0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		func_1();
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_117) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_117, true, 0))
	{
		if (!__LIB_0__::func_75(&uLocal_147))
		{
			__LIB_1__::func_283(&uLocal_147, 0);
		}
		else if (__LIB_0__::func_265(&uLocal_147) > 10f)
		{
			func_1();
		}
	}
	else if (__LIB_18__::func_993(12, iLocal_14, &uLocal_125, iLocal_146))
	{
		func_1();
	}
}

void func_3()
{
	if (iLocal_114 == 4 && MISC::GET_GAME_TIMER() >= iLocal_123 + 1000)
	{
		if (!PED::IS_PED_HEADTRACKING_ENTITY(Global_35, iLocal_146))
		{
			TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_146, -1, 2048, 51, 0);
		}
	}
	else if (PED::IS_PED_HEADTRACKING_ENTITY(Global_35, iLocal_146))
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_35);
	}
}

void func_6()
{
	if (!__LIB_0__::func_27(iLocal_120, 1))
	{
		if (__LIB_17__::func_102(&iLocal_146, 1715123483))
		{
			__LIB_1__::func_683(&iLocal_120, 1);
		}
	}
}

void func_7()
{
	iLocal_14 = __LIB_11__::func_133(12);
	__LIB_16__::func_970(&uLocal_125);
	HUD::_TEXT_DATABASE_REQUEST("SPGATAU");
	STREAMING::REQUEST_MODEL(iLocal_15, false);
	PED::_0xED9582B3DA8F02B4(1);
}

void func_8(int iParam0)
{
	iLocal_114 = iParam0;
	switch (iParam0)
	{
		case 4:
			iLocal_123 = MISC::GET_GAME_TIMER();
			break;
	}
}

bool func_9()
{
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SPGATAU"))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_15))
	{
		return false;
	}
	if (PED::_0x5C16855277819BBF() != 1)
	{
		return false;
	}
	return true;
}

bool func_10()
{
	var uVar0;
	if (func_37(&uVar0, 1706.732f, 2183.457f, 323.2325f, 177f))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_146, joaat("PLAYER"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_146, true);
		PED::SET_PED_KEEP_TASK(iLocal_146, true);
		PED::SET_PED_CAN_RAGDOLL(iLocal_146, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_146, true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_146, false, false);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_146, false);
		AUDIO::STOP_PED_SPEAKING(iLocal_146, true);
		__LIB_1__::func_991(iLocal_146, 0);
		__LIB_16__::func_792(iLocal_146, 12);
		if (__LIB_0__::func_181())
		{
			__LIB_0__::func_928(&uLocal_16, Global_35, "JOHN", 0);
		}
		else
		{
			__LIB_0__::func_928(&uLocal_16, Global_35, "ARTHUR", 0);
		}
		__LIB_0__::func_928(&uLocal_16, iLocal_146, "GIANT", 0);
		iLocal_115 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1705f, 2171f, 324f, 0f, 0f, 0f, 15f, 21f, 8f, "giant_speak");
		iLocal_116 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1705f, 2171f, 320f, 0f, 0f, 0f, 35f, 40f, 8f, "giant_stop");
		iLocal_117 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1710f, 2148f, 319f, 0f, 0f, 0f, 160f, 160f, 80f, "giant_end");
		iLocal_119 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1705f, 2171f, 320f, 0f, 0f, 0f, 26f, 32f, 8f, "m_volStayAway");
		POPULATION::_0xB56D41A694E42E86(iLocal_119, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_119, 0, 0, 0, -1, -1, 0);
		iLocal_118 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(1710f, 2148f, 319f, 0f, 0f, 0f, 110f, 110f, 110f, "m_volRandomEventBlock");
		__LIB_2__::func_261(iLocal_118, "SP_Giant_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		return true;
	}
	return false;
}

void func_11()
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_115, true, 0))
	{
		func_8(4);
	}
}

void func_12()
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	if (iLocal_121 < func_43())
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_116, true, 0))
		{
			sVar0 = "";
			bVar1 = false;
			iVar2 = -1;
			sVar0 = func_44(iLocal_121, &iVar2);
			if (iVar2 < 0)
			{
				if (func_45(sVar0))
				{
					bVar1 = true;
					iLocal_121++;
				}
			}
			else if (func_46(sVar0, iVar2))
			{
				bVar1 = true;
				iLocal_121++;
			}
			if (!__LIB_0__::func_27(iLocal_120, 4))
			{
				if (bVar1)
				{
					__LIB_16__::func_981(12, __LIB_0__::func_113());
					__LIB_1__::func_683(&iLocal_120, 4);
				}
			}
		}
		else if (!__LIB_0__::func_27(iLocal_120, 2))
		{
			AUDIO::_0x36559148B78853B3(1, 1, 0);
			iLocal_121 = func_43();
			__LIB_1__::func_683(&iLocal_120, 2);
		}
	}
	else if (!__LIB_0__::func_481(1))
	{
		if (iLocal_122 < 0)
		{
			iLocal_122 = MISC::GET_GAME_TIMER() + 1100;
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_122)
		{
			func_1();
		}
	}
}

bool func_37(var uParam0, vector3 vParam1, float fParam4)
{
	if (*uParam0)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_146))
	{
		return true;
	}
	iLocal_146 = __LIB_1__::func_545(iLocal_15, vParam1, fParam4, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_146))
	{
		*uParam0 = 1;
		return true;
	}
	return false;
}

int func_43()
{
	switch (iLocal_14)
	{
		case 0:
			return 6;
		case 1:
			return 15;
		case 2:
			return 2;
		case 3:
			return 5;
	}
	return 1;
}

char* func_44(int iParam0, int iParam1)
{
	char* sVar0;
	sVar0 = "";
	switch (iLocal_14)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					sVar0 = "SPGAT_CNV1_ART";
					*iParam1 = -1;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					sVar0 = "SPGAT_CNV2_ART";
					*iParam1 = -1;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					sVar0 = "SPGAT_CNV3_JHN";
					*iParam1 = -1;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					sVar0 = "SPGAT_CNV4_JHN";
					*iParam1 = -1;
					break;
			}
			break;
	}
	return sVar0;
}

bool func_45(char* sParam0)
{
	vector3 vVar0[24];
	if (!__LIB_0__::func_481(1))
	{
		StringCopy(&cVar0, sParam0, 24);
		return __LIB_1__::func_104(&uLocal_16, cVar0, 0, -1, 0, 0);
	}
	return false;
}

bool func_46(char* sParam0, int iParam1)
{
	vector3 vVar0[24];
	if (!__LIB_0__::func_481(1))
	{
		StringCopy(&cVar0, sParam0, 24);
		return __LIB_1__::func_104(&uLocal_16, cVar0, 1, iParam1, 0, 0);
	}
	return false;
}

