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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	vector3 vLocal_21 = { 0f, 0f, 0f };
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	char* sLocal_27 = NULL;
	char* sLocal_28 = NULL;
	char* sLocal_29 = NULL;
	bool bLocal_30 = false;
	bool bLocal_31 = false;
	bool bLocal_32 = false;
	bool bLocal_33 = false;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	bool bLocal_38 = false;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 24;
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
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	bool bLocal_166 = false;
	int iLocal_167 = 0;
	struct<5> Local_168[1];
	struct<4> Local_174 = { 0, 0, 0, 0 } ;
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
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_26 = 1000000f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_174);
	}
	func_2(&Local_174, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_174))
	{
		__LIB_5__::func_233(&Local_174);
		switch (__LIB_0__::func_57(Local_174))
		{
			case 0:
				if (func_6(&Local_174))
				{
					__LIB_0__::func_19(&Local_174, 1);
				}
				break;
			case 1:
				if (func_8(&Local_174))
				{
					__LIB_0__::func_19(&Local_174, 2);
				}
				break;
			case 2:
				if (func_9(&Local_174))
				{
					__LIB_0__::func_19(&Local_174, 3);
				}
				break;
			case 3:
				func_1(&Local_174);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_174);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_12__::func_955();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_31(iVar1) && __LIB_0__::func_699(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (__LIB_1__::func_22(iVar1))
				{
					__LIB_9__::func_203(iVar1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
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
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(sLocal_28))
	{
		return false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(sLocal_29))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_27))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("U_M_M_VALTOWNFOLK_01")))
	{
		return false;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	func_21();
	if (__LIB_4__::func_802(uParam0, 1))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2))
		{
			Local_168[0 /*5*/] = uParam0->f_2;
			Local_168[0 /*5*/].f_1 = 1;
			ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		}
	}
	else if (func_22(0, 0, 0))
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

int func_8(var uParam0)
{
	if ((!__LIB_4__::func_802(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return 0;
	}
	return func_23(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_4__::func_805())
	{
		iVar0 = 0;
	}
	if (!func_25(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_11(var uParam0)
{
	int iVar0;
	__LIB_0__::func_325(&iLocal_18);
	STREAMING::REMOVE_ANIM_DICT(sLocal_27);
	HUD::_TEXT_DATABASE_DELETE(sLocal_28);
	HUD::_TEXT_DATABASE_DELETE(sLocal_29);
	__LIB_2__::func_788(&iLocal_14, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_15, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_16, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_17, 1, 0, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_M_M_VALTOWNFOLK_01"));
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_30(iVar0);
		iVar0++;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_19))
	{
		__LIB_1__::func_544(iLocal_19);
		__LIB_0__::func_172(iLocal_19);
	}
}

int func_19(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	iLocal_20 = 4;
	vLocal_21 = { -324.32f, 739.0914f, 116.5348f };
	fLocal_24 = 121.4624f;
	sLocal_27 = "AI_GESTURES@GEN_MALE@STANDING@SPEAKER";
	sLocal_28 = "MUD3AUD";
	sLocal_29 = "MUD3";
	HUD::_TEXT_DATABASE_REQUEST(sLocal_28);
	HUD::_TEXT_DATABASE_REQUEST(sLocal_29);
	STREAMING::REQUEST_ANIM_DICT(sLocal_27);
	STREAMING::REQUEST_MODEL(joaat("U_M_M_VALTOWNFOLK_01"), false);
	if (PED::_0x5C16855277819BBF() <= iLocal_20)
	{
		PED::_0xED9582B3DA8F02B4((PED::_0x5C16855277819BBF() + iLocal_20));
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_19))
	{
		vVar0 = { -347.47f, 740.87f, 116.45f };
		fVar3 = 21f;
		iLocal_19 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, fVar3, fVar3, fVar3, "Mudtown3_outro_res");
		__LIB_2__::func_261(iLocal_19, "Mudtown3_outro", 0, 0, 0, 0, -1082130432 /* Float: -1f */);
	}
	return 1;
}

void func_21()
{
	int iVar0;
	if (bLocal_30)
	{
		return;
	}
	iVar0 = func_51(joaat("CS_BLWWITNESS"), "MUD3_JIMMY", 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iLocal_16 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (!__LIB_0__::func_255(iLocal_16, 0))
			{
				__LIB_2__::func_279(iLocal_16, 1);
				func_54(&iLocal_16);
				AUDIO::STOP_PED_SPEAKING(iLocal_16, true);
				__LIB_0__::func_928(&uLocal_42, iLocal_16, "MUD3_TheMan", 0);
			}
		}
	}
	iVar0 = func_51(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), "MUD3_JIMMY_HORSE", 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iLocal_17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
		}
	}
	iVar0 = func_51(joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"), "MUD3_STOLEN_HORSE", 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iLocal_15 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_15, true, true);
			func_56();
		}
	}
	bLocal_30 = true;
}

bool func_22(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	sVar0 = func_57(iParam1);
	sVar1 = func_58(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_168[iParam0 /*5*/]))
	{
		Local_168[iParam0 /*5*/] = ANIMSCENE::_CREATE_ANIM_SCENE(sVar1, iParam2, sVar0, false, true);
		Local_168[iParam0 /*5*/].f_4 = iParam1;
		return false;
	}
	if (!Local_168[iParam0 /*5*/].f_1)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_168[iParam0 /*5*/]);
		Local_168[iParam0 /*5*/].f_1 = 1;
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_168[iParam0 /*5*/], true, false))
	{
		return false;
	}
	return true;
}

int func_23(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14))
	{
		iLocal_14 = __LIB_1__::func_545(joaat("U_M_M_VALTOWNFOLK_01"), vLocal_21, fLocal_24, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	}
	if (__LIB_0__::func_272(iLocal_14, 0))
	{
		TASK::_TASK_START_SCENARIO_IN_PLACE(iLocal_14, joaat("WORLD_HUMAN_WAITING_IMPATIENT"), 0, false, 0, -1f, false);
		__LIB_0__::func_928(&uLocal_42, iLocal_14, "MUD3_HORSE_OWNER", 0);
		__LIB_0__::func_928(&uLocal_42, Global_35, "ARTHUR", 0);
		__LIB_2__::func_259(&uLocal_140);
		fLocal_25 = BUILTIN::VDIST(Global_36, vLocal_21);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_14, 17, true);
		AUDIO::STOP_PED_SPEAKING(iLocal_14, true);
		func_54(&iLocal_14);
		return 1;
	}
	return 0;
}

bool func_25(var uParam0)
{
	func_61();
	func_62();
	func_63();
	if (func_64())
	{
		return true;
	}
	if (func_65())
	{
		return true;
	}
	return false;
}

void func_30(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_168[iParam0 /*5*/]))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Local_168[iParam0 /*5*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_168[iParam0 /*5*/]);
		}
	}
}

int func_51(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!ITEMSET::IS_ITEMSET_VALID(Global_43616))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(Global_43616))
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43616));
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43616), __LIB_4__::func_567()) && ENTITY::GET_ENTITY_MODEL(iVar1) == iParam0)
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar1))
				{
					if (!PED::_GET_PED_BLACKBOARD_BOOL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), sParam1))
					{
					}
					else
					{
						if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
						}
						if (bParam2)
						{
							ITEMSET::REMOVE_FROM_ITEMSET(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43616), Global_43616);
						}
						return iVar1;
					}
					iVar0++;
					return 0;
				}
			}
		}
	}
}

void func_54(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	__LIB_7__::func_904(iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 413, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 315, true);
}

void func_56()
{
	var uVar0;
	func_86(iLocal_15);
	uVar0 = PLAYER::_0x227B06324234FB09(PLAYER::PLAYER_ID(), iLocal_15);
	__LIB_7__::func_345(iLocal_15, 0);
}

char* func_57(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_leadout";
		default:
			break;
	}
	return "";
}

char* func_58(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@story@mud3@leadout@ext@leadout";
		default:
			break;
	}
	return "";
}

void func_61()
{
	if (__LIB_0__::func_272(iLocal_16, 1) && __LIB_0__::func_272(iLocal_17, 1))
	{
		func_90();
		if (Local_168[0 /*5*/].f_2 == 1)
		{
			if (!bLocal_31)
			{
				if (func_91(0) || func_92(0, "A_M_M_ValTownfolk_02", 1))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_16, Global_35, 10000f, -1, 0, 3f, iLocal_17);
					AITRANSPORT::_0xBA8818212633500A(iLocal_17, 0, 0);
					bLocal_31 = true;
				}
				else
				{
					AITRANSPORT::_0xBA8818212633500A(iLocal_17, 0, 1);
				}
			}
		}
	}
}

void func_62()
{
	vector3 vVar0[24];
	if (bLocal_33)
	{
		return;
	}
	if (__LIB_5__::func_236(1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_16))
	{
		return;
	}
	if (__LIB_0__::func_272(iLocal_16, 73))
	{
		bLocal_32 = true;
		__LIB_1__::func_991(iLocal_16, 0);
		if (!__LIB_0__::func_48(Global_35, iLocal_16, 50f, 1))
		{
			func_96();
		}
		func_97();
	}
	else if (bLocal_32)
	{
		if (__LIB_2__::func_901(iLocal_16, Global_35) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_16, Global_35, 1, 1))
		{
			StringCopy(&cVar0, "MUD3_SORRYJB", 24);
			if (__LIB_1__::func_104(&uLocal_42, cVar0, 0, -1, 0, 0))
			{
				__LIB_3__::func_465(3, 0, 0, "MUD3_HG_KILL", iLocal_16, 0, 1065353216 /* Float: 1f */, 0);
				bLocal_33 = true;
			}
			if (__LIB_0__::func_272(iLocal_17, 73))
			{
				AITRANSPORT::_0xBA8818212633500A(iLocal_17, 0, 0);
				TASK::TASK_SMART_FLEE_PED(iLocal_17, Global_35, 1000f, -1, 0, 2f, 0);
			}
			__LIB_7__::func_498(1034793488, -2147483648);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_MUD3_KILLED_WITNESS"), true);
		}
	}
}

void func_63()
{
	bool bVar0;
	bVar0 = true;
	func_102(&bVar0);
	if (bVar0)
	{
		if (!__LIB_0__::func_899(&uLocal_149))
		{
			__LIB_2__::func_259(&uLocal_149);
		}
	}
	if (!bLocal_32)
	{
		if (!__LIB_0__::func_30(iLocal_158))
		{
			iLocal_158 = __LIB_0__::func_45("MUD3_H_HONOR_02", 10000, 0, 0, 0, 1);
			return;
		}
		else if (__LIB_3__::func_127(iLocal_158))
		{
			return;
		}
	}
	if (((__LIB_3__::func_127(iLocal_39) || __LIB_3__::func_127(iLocal_40)) || !bLocal_35) || !bLocal_36)
	{
		__LIB_1__::func_725();
	}
	if (__LIB_3__::func_127(iLocal_41) || !bLocal_37)
	{
		if ((__LIB_9__::func_429(Global_35, -354.01f, 491.56f, 95.67f, 35f, 1, 1) || func_108(&iLocal_15)) || func_108(&iLocal_17))
		{
			__LIB_1__::func_725();
		}
	}
	func_109();
	if (func_110(bVar0))
	{
		if (func_111(&iLocal_40, "MUD3_H_RETURN", bVar0, &bLocal_36))
		{
			if (func_112(&iLocal_15) || func_112(&iLocal_17))
			{
				func_113(bVar0);
			}
		}
	}
}

bool func_64()
{
	int iVar0;
	if (!__LIB_0__::func_272(iLocal_14, 0))
	{
		return true;
	}
	if (((iLocal_159 != 9 && iLocal_159 != 10) && iLocal_159 != 7) && iLocal_159 != 6)
	{
		if (PED::IS_PED_FLEEING(iLocal_14) || PED::IS_PED_IN_COMBAT(iLocal_14, 0))
		{
			return true;
		}
	}
	if (BUILTIN::VDIST(Global_36, vLocal_21) > (fLocal_25 + 50f))
	{
		return true;
	}
	if (__LIB_0__::func_272(iLocal_15, 0))
	{
		iVar0 = __LIB_0__::func_402(iLocal_15);
		if (iVar0 != 1 && iVar0 != -1)
		{
			if (bLocal_38)
			{
				return false;
			}
			if (__LIB_0__::func_272(iLocal_14, 0))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_14, Global_35, 1000f, -1, 0, 1f, 0);
			}
			return true;
		}
	}
	return false;
}

bool func_65()
{
	int iVar0;
	struct<28> Var1;
	int iVar29;
	bool bVar30;
	float fVar31;
	float fVar32;
	iVar0 = 2;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14))
	{
		return false;
	}
	if (!__LIB_0__::func_272(iLocal_14, 75))
	{
		func_115(11);
	}
	if (__LIB_0__::func_272(iLocal_15, 73))
	{
		if (__LIB_17__::func_557(iLocal_14, iLocal_15, 1, 80f, 0))
		{
			bLocal_166 = true;
		}
	}
	else if (bLocal_166)
	{
		func_115(10);
	}
	if (iLocal_159 != 0)
	{
		if (!__LIB_0__::func_48(Global_35, iLocal_14, 150f, 1))
		{
			return true;
		}
	}
	Var1.f_8 = -1;
	Var1.f_17 = 1097859072;
	Var1.f_18 = 1000;
	Var1.f_19 = 1067450368;
	Var1.f_20 = 5000;
	Var1.f_21 = 42;
	Var1.f_22 = 1103626240;
	Var1.f_23 = 1077936128;
	Var1.f_24 = 1106247680;
	Var1.f_25 = 1103101952;
	Var1.f_26 = 1097859072;
	Var1.f_27 = 1103626240;
	iVar29 = 2567;
	if (func_117(iLocal_14, 0, &Var1, &iVar29, 0, 0))
	{
		func_115(10);
	}
	switch (iLocal_159)
	{
		case 0:
			if (__LIB_0__::func_48(iLocal_14, Global_35, 80f, 1))
			{
				func_115(1);
			}
			else
			{
				Jump @1051; //curOff = 360
				if (__LIB_17__::func_557(iLocal_14, Global_35, 1, 40f, 0))
				{
					func_115(2);
				}
				else
				{
					Jump @1051; //curOff = 390
					bVar30 = false;
					if (__LIB_0__::func_272(iLocal_15, 73))
					{
						if (__LIB_0__::func_394(Global_35, iLocal_15, 0) || __LIB_0__::func_48(Global_35, iLocal_15, 10f, 1))
						{
							bVar30 = true;
						}
					}
					if (bVar30)
					{
						iVar0 = func_119(1);
					}
					else
					{
						iVar0 = func_119(2);
					}
					if (__LIB_0__::func_48(iLocal_14, Global_35, 20f, 1) && iVar0 == 1)
					{
						func_115(3);
					}
					else
					{
						Jump @1051; //curOff = 501
						if (!__LIB_0__::func_272(iLocal_15, 73))
						{
							func_115(7);
						}
						else if ((!__LIB_0__::func_394(Global_35, iLocal_15, 0) && !__LIB_0__::func_48(Global_35, iLocal_15, 10f, 1)) && !bLocal_34)
						{
							func_115(7);
						}
						else if (__LIB_0__::func_394(Global_35, iLocal_15, 0))
						{
							fVar31 = __LIB_0__::func_665(Global_35, iLocal_14, 1, 1);
							if (fVar31 < fLocal_26)
							{
								fLocal_26 = fVar31;
							}
							fVar32 = (fVar31 - fLocal_26);
							if (!__LIB_0__::func_48(iLocal_14, Global_35, 30f, 1) || fVar32 > 18f)
							{
								func_115(9);
							}
							else
							{
								iVar0 = func_119(64);
								if (__LIB_0__::func_394(Global_35, iLocal_15, 0))
								{
									if (iVar0 == 1 && __LIB_0__::func_899(&uLocal_163))
									{
										func_119(8);
									}
									if (__LIB_8__::func_727(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), &uLocal_163, 6.5f, 6f, 5.5f, 5f, 2f, 0, 0, 1, 1, 0))
									{
										bLocal_34 = true;
									}
								}
								else if (__LIB_0__::func_48(iLocal_14, iLocal_15, 10f, 1) || bLocal_34)
								{
									func_115(4);
								}
								else
								{
									Jump @1051; //curOff = 785
									if (func_122())
									{
										func_115(5);
									}
									else
									{
										Jump @1051; //curOff = 803
										if (__LIB_0__::func_394(Global_35, iLocal_15, 0))
										{
											func_115(9);
										}
										else
										{
											if (!__LIB_0__::func_899(&uLocal_160))
											{
												__LIB_2__::func_259(&uLocal_160);
											}
											if (__LIB_4__::func_118(&uLocal_160) >= 10f || !TASK::_0x9FF5F9B24E870748(iLocal_14))
											{
												func_115(6);
											}
											else
											{
												func_119(8);
												Jump @1051; //curOff = 887
												Jump @1051; //curOff = 890
												if (__LIB_0__::func_272(iLocal_15, 73))
												{
													if (func_119(16) == 1)
													{
														func_115(8);
													}
													else
													{
														Jump @945; //curOff = 923
														if (func_119(32) == 1)
														{
															func_115(8);
														}
														else
														{
															Jump @1051; //curOff = 945
															Jump @1051; //curOff = 948
															if (func_119(4) == 1)
															{
															}
															Jump @1051; //curOff = 960
															if (!__LIB_0__::func_899(&uLocal_155))
															{
																__LIB_1__::func_585(&uLocal_155, 4f);
															}
															if (__LIB_10__::func_919(&uLocal_155) > 3000)
															{
																if (__LIB_0__::func_48(Global_35, iLocal_14, 30f, 1))
																{
																	if (func_125())
																	{
																		if (func_119(256) == 1)
																		{
																			func_126(256);
																			__LIB_2__::func_259(&uLocal_155);
																		}
																	}
																}
															}
															Jump @1051; //curOff = 1041
															return true;
														}
													}
													return false;
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
			default:
				break;
	}
}

void func_86(int iParam0)
{
	int iVar0;
	var uVar1;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (__LIB_1__::func_16(iParam0))
	{
		iVar0 = __LIB_0__::func_402(iParam0);
		__LIB_0__::func_798(iVar0);
	}
	__LIB_0__::func_798(1);
	if (__LIB_0__::func_797(1))
	{
		__LIB_18__::func_340(1, 0);
	}
	__LIB_1__::func_778(1);
	func_147(iParam0, 1, 0);
	__LIB_0__::func_837(1, 1);
	if (__LIB_0__::func_819(1) == 0)
	{
		__LIB_2__::func_226(1, 1);
	}
	uVar1 = PLAYER::_0x227B06324234FB09(PLAYER::PLAYER_ID(), iParam0);
	__LIB_1__::func_643();
}

void func_90()
{
	int iVar0;
	iVar0 = 0;
	if (Local_168[iVar0 /*5*/].f_2 == 1)
	{
		return;
	}
	if (!func_160(iVar0))
	{
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_168[iVar0 /*5*/], false))
	{
		Local_168[iVar0 /*5*/].f_2 = 1;
	}
	if (!Local_168[iVar0 /*5*/].f_2)
	{
		if (__LIB_0__::func_272(iLocal_16, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_168[iVar0 /*5*/], "A_M_M_ValTownfolk_02", iLocal_16, 0);
		}
		if (__LIB_0__::func_272(iLocal_17, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_168[iVar0 /*5*/], "HORSE_01", iLocal_17, 0);
		}
		if (__LIB_0__::func_272(Global_35, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_168[iVar0 /*5*/], "ARTHUR", Global_35, 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_168[iVar0 /*5*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_168[iVar0 /*5*/]);
		Local_168[iVar0 /*5*/].f_2 = 1;
	}
	else
	{
		Local_168[iVar0 /*5*/].f_2 = 1;
	}
}

bool func_91(int iParam0)
{
	if (!func_160(iParam0))
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_168[iParam0 /*5*/], false))
	{
		return true;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_168[iParam0 /*5*/], false))
	{
		return true;
	}
	return false;
}

bool func_92(int iParam0, char* sParam1, bool bParam2)
{
	if (func_91(iParam0))
	{
		return true;
	}
	if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_168[iParam0 /*5*/], sParam1))
	{
		return true;
	}
	if (bParam2)
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_168[iParam0 /*5*/], sParam1))
		{
			return true;
		}
	}
	return false;
}

void func_96()
{
	if (__LIB_1__::func_322("MUD3_EXT_LI_P1"))
	{
		__LIB_5__::func_239("MUD3_EXT_LI_P1", 1, 0);
	}
	if (__LIB_1__::func_322("MUD3_EXT_LI_P2"))
	{
		__LIB_5__::func_239("MUD3_EXT_LI_P2", 1, 0);
	}
}

void func_97()
{
	if (!__LIB_0__::func_272(iLocal_16, 73))
	{
		return;
	}
	if (PED::_0x09D7AFD3716DA8E1(iLocal_16, 1000))
	{
		func_96();
		if (Local_168[0 /*5*/].f_2 == 1)
		{
			if (!bLocal_31)
			{
				func_30(0);
				TASK::TASK_SMART_FLEE_PED(iLocal_16, Global_35, 10000f, -1, 0, 3f, iLocal_17);
				AITRANSPORT::_0xBA8818212633500A(iLocal_17, 0, 0);
				PED::_0x2208438012482A1A(iLocal_16, false, false);
				bLocal_31 = true;
			}
		}
		if (!__LIB_0__::func_899(&uLocal_152))
		{
			__LIB_1__::func_585(&uLocal_152, 4f);
		}
		if (__LIB_10__::func_919(&uLocal_152) > 3000)
		{
			if (func_119(128) == 1)
			{
				func_126(128);
				__LIB_2__::func_259(&uLocal_152);
			}
		}
	}
}

void func_102(bool bParam0)
{
	if (!__LIB_0__::func_899(&uLocal_143))
	{
		__LIB_2__::func_259(&uLocal_143);
	}
	if (__LIB_10__::func_919(&uLocal_143) < 2000)
	{
		__LIB_9__::func_391();
		__LIB_1__::func_725();
		*bParam0 = 0;
	}
	if (__LIB_0__::func_272(iLocal_16, 1) && __LIB_0__::func_272(iLocal_17, 1))
	{
		if ((func_91(0) || func_92(0, "A_M_M_ValTownfolk_02", 1)) || func_171(0, 0.54f))
		{
			return;
		}
		__LIB_9__::func_391();
		__LIB_1__::func_725();
		*bParam0 = 0;
	}
}

int func_108(int iParam0)
{
	if (!__LIB_0__::func_272(*iParam0, 0))
	{
		return 0;
	}
	if (__LIB_0__::func_394(Global_35, *iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_109()
{
	if (!__LIB_0__::func_899(&uLocal_146))
	{
		__LIB_2__::func_259(&uLocal_146);
	}
	if ((__LIB_3__::func_127(iLocal_39) || __LIB_3__::func_127(iLocal_40)) || __LIB_3__::func_127(iLocal_41))
	{
		return;
	}
	if (__LIB_10__::func_598() || __LIB_2__::func_453())
	{
		__LIB_2__::func_259(&uLocal_146);
	}
}

bool func_110(bool bParam0)
{
	if (__LIB_1__::func_185(15))
	{
		return func_111(&iLocal_39, "MUD3_H_THORSEA", bParam0, &bLocal_35);
	}
	return func_111(&iLocal_39, "MUD3_H_THORSE", bParam0, &bLocal_35);
}

bool func_111(int iParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (*bParam3)
	{
		return true;
	}
	if (!__LIB_0__::func_30(*iParam0))
	{
		if (__LIB_10__::func_919(&uLocal_149) > 4000 && bParam2)
		{
			if (func_176())
			{
				*iParam0 = __LIB_0__::func_45(sParam1, 10000, 0, 0, 0, 1);
			}
		}
		return false;
	}
	if (!__LIB_3__::func_127(*iParam0))
	{
		*bParam3 = 1;
		return true;
	}
	return false;
}

int func_112(int iParam0)
{
	if (!__LIB_0__::func_272(*iParam0, 0))
	{
		return 0;
	}
	if (__LIB_0__::func_394(Global_35, *iParam0, 0))
	{
		return 1;
	}
	if (__LIB_0__::func_48(Global_35, *iParam0, 3f, 1) && __LIB_7__::func_437(Global_35, *iParam0, 0))
	{
		return 1;
	}
	return 0;
}

bool func_113(bool bParam0)
{
	if (__LIB_1__::func_185(15))
	{
		return func_111(&iLocal_41, "MUD3_H_SADDLEA", bParam0, &bLocal_37);
	}
	return func_111(&iLocal_41, "MUD3_H_SADDLE", bParam0, &bLocal_37);
}

void func_115(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14))
	{
		return;
	}
	if (!__LIB_0__::func_272(iLocal_14, 75))
	{
		iParam0 = 11;
	}
	if (iLocal_159 == iParam0)
	{
		return;
	}
	iLocal_159 = iParam0;
	if (iLocal_159 == 11 || iLocal_159 == 10)
	{
		func_178(1, 0, 1);
		func_178(2, 0, 1);
		func_178(4, 0, 1);
		func_178(8, 0, 1);
		func_178(16, 0, 1);
		func_178(32, 0, 1);
		func_178(64, 0, 1);
	}
	switch (iLocal_159)
	{
		case 0:
			break;
		case 1:
			TASK::TASK_LOOK_AT_ENTITY(iLocal_14, Global_35, -1, 0, 51, 0);
			break;
		case 2:
			iLocal_18 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iLocal_14);
			MAP::_BLIP_SET_MODIFIER(iLocal_18, 580546400);
			PED::_0xF1C03A5352243A30(iLocal_14);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_14, Global_35, -1, 0, 51, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_27, "neutral_get_attention_l_001", Global_35, __LIB_3__::func_444(sLocal_27, "neutral_get_attention_l_001"), 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_27, "positive_nod_f_002", Global_35, __LIB_3__::func_444(sLocal_27, "positive_nod_f_002"), 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_27, "neutral_get_attention_l_002", Global_35, __LIB_3__::func_444(sLocal_27, "neutral_get_attention_l_002"), 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_27, "neutral_look_around_f_001", Global_35, __LIB_3__::func_444(sLocal_27, "neutral_look_around_f_001"), 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_27, "neutral_get_attention_r_001", Global_35, __LIB_3__::func_444(sLocal_27, "neutral_get_attention_r_001"), 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_27, "neutral_get_attention_r_002", Global_35, __LIB_3__::func_444(sLocal_27, "neutral_get_attention_r_002"), 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
			TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_14, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 3:
			TASK::TASK_LOOK_AT_ENTITY(iLocal_14, Global_35, -1, 0, 51, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_14, Global_35, -1, -1f, -1f, -1f);
			break;
		case 4:
			func_122();
			break;
		case 5:
			TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
			if (__LIB_0__::func_272(iLocal_15, 0))
			{
				AITRANSPORT::_0xBA8818212633500A(iLocal_15, 0, 1);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_15, 48, true);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_27, "positive_nod_f_001", Global_35, __LIB_3__::func_444(sLocal_27, "positive_nod_f_001"), 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
			if (PED::_0xD543D3A8FDE4F185(iLocal_14, iLocal_15))
			{
				TASK::TASK_ANIMAL_INTERACTION(0, iLocal_15, joaat("INTERACTION_POSITIVESHORT"), 0, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_14, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			__LIB_3__::func_465(13, 0, 0, "MUD3_HG_HORSE", iLocal_14, 0, 1065353216 /* Float: 1f */, 0);
			break;
		case 6:
			__LIB_0__::func_325(&iLocal_18);
			PED::SET_PED_KEEP_TASK(iLocal_14, true);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_MOUNT_ANIMAL(0, iLocal_15, -1, -1, 1f, 1, 0, 0);
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, 1f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_14, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 7:
			__LIB_0__::func_325(&iLocal_18);
			TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_14, Global_35, -1, 0, 51, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_14, Global_35, -1, -1f, -1f, -1f);
			break;
		case 8:
			PED::SET_PED_KEEP_TASK(iLocal_14, true);
			TASK::TASK_SMART_FLEE_PED(iLocal_14, Global_35, 1000f, -1, 0, 1f, 0);
			break;
		case 9:
			__LIB_0__::func_325(&iLocal_18);
			PED::SET_PED_KEEP_TASK(iLocal_14, true);
			TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
			LAW::_0xF0B67BAD53C35BD9(iLocal_14, Global_35, iLocal_14, Global_36, joaat("CRIME_THEFT_HORSE"));
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, 1.5f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_14, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			func_178(1, 0, 1);
			func_178(2, 0, 1);
			func_178(8, 0, 1);
			func_178(16, 0, 1);
			func_178(32, 0, 1);
			func_178(64, 0, 1);
			__LIB_3__::func_465(2, joaat("HONOR_EVENT_STEAL_HORSE"), 0, 0, iLocal_14, 0, 1065353216 /* Float: 1f */, 0);
			break;
		case 10:
			__LIB_0__::func_325(&iLocal_18);
			PED::SET_PED_KEEP_TASK(iLocal_14, true);
			TASK::TASK_SMART_FLEE_PED(iLocal_14, Global_35, 1000f, -1, 0, 2f, 0);
			break;
		case 11:
			__LIB_0__::func_325(&iLocal_18);
			break;
	}
}

bool func_117(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_2__::func_899(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_895(iParam0, uParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_882(iParam0, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_874(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_896(iParam0, uParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_897(iParam0, uParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_5__::func_678(uParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_5__::func_683(iParam0, uParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_119(int iParam0)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, func_210(iParam0), 24);
	if (__LIB_0__::func_27(iLocal_167, iParam0))
	{
		if (__LIB_1__::func_322(&cVar0) || __LIB_1__::func_49(&cVar0))
		{
			return 0;
		}
		return 1;
	}
	if (!__LIB_5__::func_236(1))
	{
		if (__LIB_1__::func_104(&uLocal_42, cVar0, 0, -1, 0, 0))
		{
			__LIB_1__::func_683(&iLocal_167, iParam0);
			return 0;
		}
	}
	return 2;
}

bool func_122()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15))
	{
		return true;
	}
	if (!bLocal_38)
	{
		if (__LIB_0__::func_398(1) != iLocal_15)
		{
			return true;
		}
		if (!__LIB_10__::func_818(1))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_15, 300, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_15, 297, false);
			AITRANSPORT::_0xBA8818212633500A(iLocal_15, 0, 1);
			bLocal_38 = true;
			func_219(1, 1);
		}
	}
	else if (!__LIB_11__::func_458())
	{
		return true;
	}
	return false;
}

bool func_125()
{
	if (PED::_IS_PED_FALLING_2(iLocal_14))
	{
		return false;
	}
	if (PED::_0x29FCE825613FEFCA(iLocal_14, 1000))
	{
		return false;
	}
	if (PED::IS_PED_RAGDOLL(iLocal_14))
	{
		return false;
	}
	if (PED::_0x3BDFCF25B58B0415(iLocal_14))
	{
		if (PED::_0x2311F15D971AA680(iLocal_14) != 1)
		{
			return false;
		}
	}
	return true;
}

void func_126(int iParam0)
{
	if (__LIB_0__::func_27(iLocal_167, iParam0))
	{
		__LIB_1__::func_681(&iLocal_167, iParam0);
	}
}

void func_147(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		if (iParam2 == 0)
		{
			return;
		}
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	if (__LIB_1__::func_15(iParam0))
	{
		return;
	}
	if (__LIB_11__::func_451(iParam0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
	}
	__LIB_0__::func_835(iParam1, iParam0);
	__LIB_12__::func_237(iParam1, iParam2);
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (iParam0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar0))
	{
		__LIB_11__::func_452(iParam1, 0);
	}
	else
	{
		iVar1 = __LIB_11__::func_453(iParam0);
		__LIB_11__::func_452(iParam1, iVar1);
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		__LIB_1__::func_177(iParam0);
	}
	if (iParam1 == 0)
	{
		PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iParam0);
	}
	else if (iParam1 == 1)
	{
		uVar2 = PLAYER::_0x227B06324234FB09(iVar0, iParam0);
	}
	if (iParam1 == 6)
	{
		return;
	}
	if (__LIB_1__::func_127(iParam1))
	{
		func_253(iParam1);
	}
	iVar3 = __LIB_0__::func_821(iParam1);
	iVar4 = __LIB_0__::func_553(iVar3);
	__LIB_1__::func_820(iParam1, iVar4);
}

bool func_160(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_168[iParam0 /*5*/]))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_168[iParam0 /*5*/], true, false))
	{
		return false;
	}
	return true;
}

bool func_171(int iParam0, float fParam1)
{
	if (func_91(iParam0))
	{
		return true;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_168[iParam0 /*5*/]) >= fParam1)
	{
		return true;
	}
	return false;
}

bool func_176()
{
	if (__LIB_10__::func_919(&uLocal_146) > 500)
	{
		return true;
	}
	return false;
}

void func_178(int iParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, func_210(iParam0), 24);
	if (__LIB_1__::func_49(&cVar0) || __LIB_1__::func_322(&cVar0))
	{
		__LIB_5__::func_239(&cVar0, bParam1, 0);
	}
	if (bParam2)
	{
		__LIB_1__::func_683(&iLocal_167, iParam0);
	}
}

char* func_210(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MUD3_RET_H_WAVE";
		case 2:
			return "MUD3_RET_N_WAVE";
		case 4:
			return "MUD3_RET_H_TEFT";
		case 8:
			return "MUD3_RET_HORSE";
		case 16:
			return "MUD3_NO_HORSE_0";
		case 32:
			return "MUD3_NO_HORSE_1";
		case 64:
			return "MUD3_RET_H_RID";
		case 128:
			return "MUD3_GRIEFJIMMY";
		case 256:
			return "MUD3_RE_GRIEF";
		default:
			break;
	}
	return "";
}

void func_219(int iParam0, bool bParam1)
{
	int iVar0;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	__LIB_1__::func_721(iParam0);
	__LIB_0__::func_798(iParam0);
	__LIB_4__::func_965(iParam0);
	__LIB_1__::func_108(iParam0);
	if (__LIB_0__::func_823(iParam0))
	{
		iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (__LIB_0__::func_825(iParam0) != iVar0)
		{
			return;
		}
	}
	__LIB_0__::func_782(iParam0, 2);
	if (bParam1)
	{
		__LIB_0__::func_782(iParam0, 16);
	}
}

int func_253(int iParam0)
{
	struct<10> Var0;
	struct<5> Var29;
	Var0.f_9 = -1591664384;
	if (!__LIB_1__::func_416(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_357(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_357(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_427(uParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!__LIB_0__::func_464(*uParam1, &Var0, bParam6, 0))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!__LIB_0__::func_708(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(__LIB_0__::func_162(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_427(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return true;
	}
	return false;
}

