#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	struct<53> Local_15 = { 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion
void __EntryFunction__()
{
	struct<152> Var0;
	fLocal_12 = 1f;
	fLocal_13 = 1f;
	Var0.f_5.f_2 = 12;
	Var0.f_5.f_64 = 24;
	Var0.f_5.f_89 = 24;
	Var0.f_150 = 1;
	Var0.f_151 = 1;
	Var0.f_147 = 1;
	Var0.f_127 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		Var0.f_144 = 1;
		func_1(&Var0, &Global_1911866);
	}
	if (__LIB_7__::func_593())
	{
		TASK::_0xED27560703F37258(Global_35);
	}
	Var0.f_134 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@player_journal", 0, "plMain", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(Var0.f_134);
	Var0.f_142 = 0;
	if (MISC::GET_GAME_TIMER() >= Global_1911773 && MISC::GET_GAME_TIMER() >= Global_36632)
	{
		Var0.f_119.f_4 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false);
		Var0.f_142 = 1;
	}
	Global_1911773 = 0;
	Global_36634 = 0;
	Global_36635 = 0;
	if (MISC::GET_GAME_TIMER() < Global_36615 || Var0.f_142)
	{
		Global_36634 = 1;
		Global_36635 = 1;
	}
	if (Global_1935689.f_10189 == 0 || MISC::GET_GAME_TIMER() <= Global_1935496.f_59.f_2 + 3000)
	{
		Global_36634 = 1;
	}
	while (__LIB_9__::func_300(&Var0, &Global_1911866))
	{
		Var0.f_130 = TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Var0.f_134) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Var0.f_134, true, false))
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Var0.f_134, false))
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Var0.f_134, Global_36, ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(Var0.f_134, Global_35, -1);
					ANIMSCENE::START_ANIM_SCENE(Var0.f_134);
				}
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Var0.f_134, false))
			{
				ANIMSCENE::ABORT_ANIM_SCENE(Var0.f_134, true);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		CAM::_0x8910C24B7E0046EC();
		if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("TRANSLATION_OVERLAY")))
		{
			HUD::_0xC9CAEAEEC1256E54(382897689);
		}
		if (Var0.f_142)
		{
			func_4(&Var0, &Global_1911866);
		}
		else
		{
			func_5(&Var0, &Global_1911866);
		}
		func_6(&Var0, &Global_1911866);
		BUILTIN::WAIT(0);
	}
	func_1(&Var0, &Global_1911866);
}

void func_1(var uParam0, var uParam1)
{
	if (__LIB_3__::func_63() && !Global_1935689.f_9)
	{
		if (!SCRIPTS::_0x9E4EF615E307FBBE())
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
		return;
	}
	if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("TRANSLATION_OVERLAY")))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(joaat("TRANSLATION_OVERLAY"));
	}
	if (uParam0->f_141)
	{
		func_8(uParam0, uParam1);
	}
	if (uParam0->f_145)
	{
		__LIB_0__::func_238(uParam0->f_1.f_1);
	}
	__LIB_7__::func_684(uParam0, uParam1);
	__LIB_7__::func_604(uParam0);
	__LIB_7__::func_605(uParam0);
	if (uParam0->f_144)
	{
		func_13(uParam0, uParam1);
	}
	if (!uParam0->f_143)
	{
		if (!(uParam1[0 /*9*/])->f_1)
		{
			__LIB_7__::func_606(0);
		}
		else
		{
			Global_1911894[0 /*6*/].f_1 = 4;
		}
		__LIB_7__::func_606(2);
		__LIB_7__::func_606(1);
		__LIB_9__::func_295(uParam1);
	}
	else
	{
		func_16(uParam0, uParam1);
	}
	if (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

int func_4(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		__LIB_19__::func_449(uParam0, uParam1);
	}
	switch (*uParam0)
	{
		case 0:
			uParam0->f_127 = TASK::_0x05A0100EA714DB68(Global_35, joaat("PRIMARYITEM"));
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
			{
				__LIB_7__::func_679(uParam0, uParam1[0 /*9*/]);
				func_21(uParam0, uParam1);
				__LIB_7__::func_667(uParam0, (*uParam1)[0 /*9*/]);
				__LIB_19__::func_449(uParam0, uParam1);
				__LIB_0__::func_19(uParam0, 4);
			}
			break;
		case 4:
			if (__LIB_9__::func_284((*uParam1)[0 /*9*/], uParam0->f_130))
			{
				__LIB_18__::func_183((*uParam1)[0 /*9*/]);
				__LIB_19__::func_164(uParam0, uParam1, 1);
				__LIB_0__::func_19(uParam0, 6);
			}
			break;
		case 6:
			__LIB_19__::func_450(uParam0, uParam1[0 /*9*/]);
			__LIB_9__::func_285(uParam0, uParam1);
			func_29(uParam0, uParam1);
			if (__LIB_7__::func_668((*uParam1)[0 /*9*/], uParam0->f_130))
			{
				if (__LIB_0__::func_192((*uParam1)[0 /*9*/], -674618190))
				{
					__LIB_0__::func_19(uParam0, 7);
				}
				else
				{
					__LIB_0__::func_19(uParam0, 8);
				}
			}
			else if (__LIB_1__::func_732(Global_36622[3], 1))
			{
				func_33(uParam0, (*uParam1)[0 /*9*/]);
			}
			__LIB_7__::func_604(uParam0);
			break;
		case 8:
			if (__LIB_7__::func_608((*uParam1)[0 /*9*/]) && !uParam0->f_149)
			{
				func_35((*uParam1)[0 /*9*/], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				uParam0->f_149 = 1;
			}
			__LIB_0__::func_19(uParam0, 9);
			break;
		case 7:
			uParam0->f_119.f_3 = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_119.f_4);
			uParam0->f_119 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_119.f_4, true) };
			TASK::_0x4161648394262FDF(uParam0->f_119, 1f);
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_119.f_4))
			{
				uParam0->f_119.f_4 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(uParam0->f_119, uParam0->f_119.f_3, 1f, 1, false);
			}
			uParam0->f_119.f_5 = TASK::_GET_SCENARIO_POINT_ENTITY(uParam0->f_119.f_4, "PrimaryItem");
			uParam0->f_119.f_6 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_119.f_5);
			OBJECT::_SET_APPLY_OBJECT_TXD(uParam0->f_119.f_6, (uParam1[0 /*9*/])->f_3, 0, 0);
			__LIB_0__::func_19(uParam0, 9);
			break;
	}
	return 0;
}

int func_5(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		__LIB_19__::func_449(uParam0, uParam1);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
			{
				uParam0->f_127 = TASK::_0x05A0100EA714DB68(Global_35, joaat("PRIMARYITEM"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
			{
				(*uParam1)[0 /*9*/] = __LIB_7__::func_646(uParam0);
				__LIB_7__::func_609(uParam0, (*uParam1)[0 /*9*/]);
				func_21(uParam0, uParam1);
				__LIB_7__::func_667(uParam0, (*uParam1)[0 /*9*/]);
				__LIB_19__::func_449(uParam0, uParam1);
				__LIB_7__::func_679(uParam0, uParam1[0 /*9*/]);
				func_38(uParam0, uParam1);
				if (Global_1911894[0 /*6*/].f_1 == 2)
				{
					__LIB_7__::func_669(uParam1[0 /*9*/], 0);
					func_40(uParam0, uParam1);
				}
				__LIB_0__::func_19(uParam0, 2);
			}
			break;
		case 2:
			if (__LIB_7__::func_669(uParam1[0 /*9*/], 0) && __LIB_0__::func_16(uParam0, uParam1))
			{
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			if (func_40(uParam0, uParam1))
			{
				__LIB_0__::func_19(uParam0, 4);
			}
			break;
		case 4:
			if (__LIB_9__::func_284((*uParam1)[0 /*9*/], uParam0->f_130))
			{
				__LIB_19__::func_164(uParam0, uParam1, 1);
				__LIB_18__::func_183((*uParam1)[0 /*9*/]);
				__LIB_0__::func_19(uParam0, 5);
			}
			break;
		case 5:
			__LIB_19__::func_450(uParam0, uParam1[0 /*9*/]);
			__LIB_9__::func_285(uParam0, uParam1);
			func_29(uParam0, uParam1);
			if (__LIB_7__::func_668((*uParam1)[0 /*9*/], uParam0->f_130))
			{
				__LIB_0__::func_19(uParam0, 9);
			}
			else if (__LIB_0__::func_139(Global_36622[2]) && __LIB_0__::func_567(Global_36622[2], 1))
			{
				__LIB_0__::func_19(uParam0, 9);
				uParam0->f_144 = 1;
				Global_1935689.f_9 = 1;
				Global_36633 = MISC::GET_GAME_TIMER() + 10000;
				__LIB_3__::func_739(1);
			}
			else if (__LIB_1__::func_732(Global_36622[3], 1))
			{
				func_33(uParam0, (*uParam1)[0 /*9*/]);
			}
			else if (!Global_36634 && __LIB_7__::func_683(uParam0))
			{
				uParam0->f_143 = 1;
				__LIB_0__::func_19(uParam0, 9);
			}
			__LIB_7__::func_604(uParam0);
			break;
	}
	return 0;
}

int func_6(var uParam0, var uParam1)
{
	int iVar0;
	Global_1935496.f_59.f_4 = MISC::GET_GAME_TIMER() + 5000;
	if (Global_36621 == 1)
	{
		iVar0 = TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35);
		if (iVar0 == __LIB_7__::func_647(Global_1911772))
		{
			Global_36621 = 2;
		}
	}
	switch (*uParam0)
	{
		case 9:
			func_1(uParam0, uParam1);
			break;
	}
	return 0;
}

void func_8(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1[24];
	char[] cVar4[8];
	switch ((*uParam1)[0 /*9*/])
	{
		case joaat("DOCUMENT_GUNSLINGER_1_NOTE"):
		case joaat("DOCUMENT_GUNSLINGER_2_NOTE"):
		case joaat("DOCUMENT_GUNSLINGER_3_NOTE"):
		case joaat("DOCUMENT_GUNSLINGER_5_NOTE"):
			if (*uParam1)[0 /*9*/] == joaat("DOCUMENT_GUNSLINGER_1_NOTE")
			{
				iVar0 = 84;
			}
			else if (*uParam1)[0 /*9*/] == joaat("DOCUMENT_GUNSLINGER_2_NOTE")
			{
				iVar0 = 86;
			}
			else if (*uParam1)[0 /*9*/] == joaat("DOCUMENT_GUNSLINGER_3_NOTE")
			{
				iVar0 = 87;
			}
			else if (*uParam1)[0 /*9*/] == joaat("DOCUMENT_GUNSLINGER_5_NOTE")
			{
				iVar0 = 88;
			}
			if (__LIB_0__::func_5(iVar0) && !__LIB_1__::func_187(iVar0))
			{
				__LIB_4__::func_471(iVar0, 1);
				if (__LIB_0__::func_296(0, 0, 1))
				{
					__LIB_3__::func_727(iVar0, 2);
				}
				else
				{
					func_52(iVar0);
				}
				if (!__LIB_3__::func_736(26, 32))
				{
					if ((((__LIB_0__::func_627(84, 0) || __LIB_1__::func_187(84)) && (__LIB_0__::func_627(86, 0) || __LIB_1__::func_187(86))) && (__LIB_0__::func_627(87, 0) || __LIB_1__::func_187(87))) && (__LIB_0__::func_627(88, 0) || __LIB_1__::func_187(88)))
					{
						MemCopy(&cVar1, {Global_1347702[26 /*49*/].f_1}, 3);
						StringConCat(&cVar1, "_obj2", 24);
						if (HUD::DOES_TEXT_LABEL_EXIST(&cVar1) && UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(26), __LIB_3__::func_733(26)))
						{
							cVar4 = __LIB_0__::func_958(0, &cVar1, 0, 0, -1, -1);
							__LIB_5__::func_238(26, &cVar1, cVar4, -1082130432 /* Float: -1f */);
							__LIB_3__::func_727(26, 32);
						}
					}
				}
			}
			break;
	}
}

void func_13(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = (*uParam1)[0 /*9*/];
	if (*uParam0 == 0 && iVar0 == 0)
	{
		iVar0 = Global_1911772;
	}
	if (iVar0 != 0)
	{
		if (__LIB_7__::func_647(iVar0) != 0)
		{
			TASK::_0xB35370D5353995CB(Global_35, __LIB_7__::func_647(iVar0), 1048576000 /* Float: 0.25f */);
		}
		if (((uParam0->f_142 && __LIB_7__::func_608(iVar0)) && !__LIB_1__::func_707(iVar0, 1, 0)) && !uParam0->f_149)
		{
			func_35(iVar0, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			uParam0->f_149 = 1;
		}
	}
}

void func_16(var uParam0, var uParam1)
{
	if (uParam0->f_141)
	{
		func_8(uParam0, uParam1);
	}
	if (uParam0->f_136)
	{
		__LIB_7__::func_610(uParam1);
	}
	else
	{
		__LIB_7__::func_611(uParam1);
	}
	if (uParam0->f_145)
	{
		__LIB_0__::func_238(uParam0->f_1.f_1);
	}
	__LIB_7__::func_612(uParam1);
	(uParam1[0 /*9*/])->f_2 = 0;
	Global_1911772 = (*uParam1)[0 /*9*/];
	__LIB_7__::func_648((*uParam1)[0 /*9*/], 0, 1, 0, 0f);
	GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
	Global_36632 = MISC::GET_GAME_TIMER() + 3000;
}

void func_21(var uParam0, var uParam1)
{
	HUD::_TEXT_DATABASE_REQUEST("NEWS");
	(uParam1[0 /*9*/])->f_5.f_3 = __LIB_16__::func_407((*uParam1)[0 /*9*/]);
	Local_15.f_50 = __LIB_12__::func_502((*uParam1)[0 /*9*/]);
	Local_15.f_51 = func_73(uParam0, (*uParam1)[0 /*9*/]);
	Local_15.f_52 = 0;
	if (Local_15.f_50 != -1)
	{
		if (Global_40.f_9479[Local_15.f_50 /*4*/].f_1 != -1)
		{
			func_74(Global_40.f_9479[Local_15.f_50 /*4*/].f_1, &(Local_15.f_2));
			Local_15.f_52++;
		}
		if (Global_40.f_9479[Local_15.f_50 /*4*/].f_2 != -1)
		{
			func_74(Global_40.f_9479[Local_15.f_50 /*4*/].f_2, &(Local_15.f_18));
			Local_15.f_52++;
		}
		func_75(Global_40.f_9479[Local_15.f_50 /*4*/].f_3, &(Local_15.f_34));
	}
}

void func_29(var uParam0, var uParam1)
{
	func_92(uParam0, &Local_15, (*uParam1)[0 /*9*/]);
}

void func_33(var uParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, -1227898937))
	{
		if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("TRANSLATION_OVERLAY"), joaat("NEWSPAPER")) == 0)
		{
			uParam0->f_5.f_1 = 1;
			AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
			func_94(uParam0, iParam1);
		}
	}
	else if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("TRANSLATION_OVERLAY"), joaat("GENERIC")) == 0)
	{
		uParam0->f_5.f_1 = 1;
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		func_94(uParam0, iParam1);
	}
}

int func_35(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
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
				func_35(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_11__::func_106(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_11__::func_106(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_11__::func_106(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_11__::func_106(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
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
		__LIB_7__::func_501(28);
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
			if (!__LIB_3__::func_708(iParam0, &iVar0, iParam5))
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
			__LIB_12__::func_192(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_12__::func_193(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_12__::func_194(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_15__::func_105(iParam0);
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
			__LIB_12__::func_195(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_15__::func_928(iParam0, 0, 0, 0);
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
						func_35(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_35(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_35(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_35(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_35(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_35(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_35(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_7__::func_501(24);
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
					func_35(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_35(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		if (!__LIB_3__::func_427(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return 1;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			__LIB_7__::func_685(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_9__::func_8(iParam0);
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
				func_35(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
			__LIB_16__::func_384(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_1__::func_158(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_38(var uParam0, var uParam1)
{
	func_179(uParam0, (*uParam1)[0 /*9*/]);
	__LIB_7__::func_671(uParam0, uParam1);
	if ((*uParam1)[1 /*9*/] != 0)
	{
		__LIB_7__::func_617(1, (*uParam1)[1 /*9*/]);
	}
	else
	{
		__LIB_7__::func_606(1);
	}
	__LIB_7__::func_672(uParam0, uParam1);
	if ((*uParam1)[2 /*9*/] != 0)
	{
		__LIB_7__::func_617(2, (*uParam1)[2 /*9*/]);
	}
	else
	{
		__LIB_7__::func_606(2);
	}
	__LIB_9__::func_287(uParam1);
	__LIB_7__::func_618(uParam1);
}

bool func_40(var uParam0, var uParam1)
{
	if (__LIB_7__::func_620(uParam0, uParam1[0 /*9*/]))
	{
		__LIB_7__::func_617(0, (*uParam1)[0 /*9*/]);
		func_187(uParam0, uParam1);
		return true;
	}
	return false;
}

void func_52(int iParam0)
{
	func_193();
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0 /*49*/];
}

int func_73(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (uParam0->f_5.f_2[iVar1 /*5*/].f_2 == 0)
		{
		}
		else if (ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_VALUES(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2) == 0)
		{
		}
		else if (ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, 1) == 0)
		{
			return iVar0;
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_74(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			(*uParam1)[1] = 1058023652;
			(*uParam1)[2] = 83386168;
			(*uParam1)[3] = 1470235786;
			(*uParam1)[5] = 138629420;
			(*uParam1)[6] = -35898274;
			break;
		case 1:
			(*uParam1)[1] = -1132942503;
			(*uParam1)[2] = -306257787;
			(*uParam1)[3] = -1082391552;
			(*uParam1)[5] = -1933252363;
			(*uParam1)[6] = 1921299573;
			break;
		case 2:
			(*uParam1)[1] = 1097896734;
			(*uParam1)[2] = -527730691;
			(*uParam1)[3] = -2020686331;
			(*uParam1)[5] = 1558140816;
			(*uParam1)[6] = 1203318084;
			break;
		case 3:
			(*uParam1)[1] = 635501564;
			(*uParam1)[2] = 1536271015;
			(*uParam1)[3] = -2031552171;
			(*uParam1)[5] = -549142654;
			(*uParam1)[6] = 266150010;
			break;
		case 4:
			(*uParam1)[1] = -486466236;
			(*uParam1)[2] = -857116358;
			(*uParam1)[3] = 1599477265;
			(*uParam1)[5] = 1213931689;
			(*uParam1)[6] = 2136444581;
			break;
		case 5:
			(*uParam1)[1] = -1316093079;
			(*uParam1)[2] = -1046072745;
			(*uParam1)[3] = -1270311012;
			(*uParam1)[5] = 1957525344;
			(*uParam1)[6] = 211363637;
			break;
		case 6:
			(*uParam1)[1] = 679234593;
			(*uParam1)[2] = 790141037;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -393040806;
			(*uParam1)[6] = 225637914;
			break;
		case 7:
			(*uParam1)[1] = 1284380168;
			(*uParam1)[2] = -651770051;
			(*uParam1)[3] = -2097735057;
			(*uParam1)[5] = 821662409;
			(*uParam1)[6] = 619608751;
			break;
		case 8:
			(*uParam1)[1] = -1742930715;
			(*uParam1)[2] = -1352987288;
			(*uParam1)[3] = -1113478667;
			(*uParam1)[5] = 676730061;
			(*uParam1)[6] = -2136718000;
			break;
		case 9:
			(*uParam1)[1] = 233145454;
			(*uParam1)[2] = -1030003209;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -2067943350;
			(*uParam1)[6] = -1761585969;
			break;
		case 10:
			(*uParam1)[1] = 440932517;
			(*uParam1)[2] = 802847004;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -1968735607;
			(*uParam1)[6] = 2094456548;
			break;
		case 11:
			(*uParam1)[1] = -218858354;
			(*uParam1)[2] = -16526676;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -713790542;
			(*uParam1)[6] = -1009301384;
			break;
		case 12:
			(*uParam1)[1] = -1926688180;
			(*uParam1)[2] = -1798429678;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -1095881944;
			(*uParam1)[6] = -1938110786;
			break;
		case 13:
			(*uParam1)[1] = -42574812;
			(*uParam1)[2] = 1232101727;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -1109376882;
			(*uParam1)[6] = 1873683499;
			break;
		case 14:
			(*uParam1)[1] = 56995427;
			(*uParam1)[2] = -626969930;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 1185101111;
			(*uParam1)[6] = 905319389;
			break;
		case 15:
			(*uParam1)[1] = 222587387;
			(*uParam1)[2] = 609189180;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -1234411431;
			(*uParam1)[6] = -1465203498;
			break;
		case 16:
			(*uParam1)[1] = -215060262;
			(*uParam1)[2] = 344902766;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 1697949471;
			(*uParam1)[6] = 449155650;
			break;
		case 17:
			(*uParam1)[1] = 565147534;
			(*uParam1)[2] = 1085644998;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -1673893059;
			(*uParam1)[6] = 1762592015;
			break;
		case 18:
			(*uParam1)[1] = -1947344575;
			(*uParam1)[2] = 1183113484;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 215714142;
			(*uParam1)[6] = -14029317;
			break;
		case 19:
			(*uParam1)[1] = -187013772;
			(*uParam1)[2] = -1718077947;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -529147089;
			(*uParam1)[6] = 1971848557;
			break;
		case 20:
			(*uParam1)[1] = 404261010;
			(*uParam1)[2] = -293066142;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 1536037743;
			(*uParam1)[6] = -1916012566;
			break;
		case 21:
			(*uParam1)[1] = -1369644388;
			(*uParam1)[2] = 885729844;
			(*uParam1)[3] = 445380022;
			(*uParam1)[5] = -757204467;
			(*uParam1)[6] = 206761206;
			break;
		case 22:
			(*uParam1)[1] = -518998776;
			(*uParam1)[2] = 437388956;
			(*uParam1)[3] = 1204871705;
			(*uParam1)[5] = -1805886990;
			(*uParam1)[6] = 330225817;
			break;
		case 23:
			(*uParam1)[1] = 694865154;
			(*uParam1)[2] = 992018002;
			(*uParam1)[3] = 89821894;
			(*uParam1)[5] = 2116883103;
			(*uParam1)[6] = -305630760;
			break;
		case 24:
			(*uParam1)[1] = -544747299;
			(*uParam1)[2] = 1149473811;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 762780430;
			(*uParam1)[6] = 1080508654;
			break;
		case 25:
			(*uParam1)[1] = -1351317536;
			(*uParam1)[2] = -1017472673;
			(*uParam1)[3] = -912546335;
			(*uParam1)[5] = -1902013391;
			(*uParam1)[6] = -1590183587;
			break;
		case 26:
			(*uParam1)[1] = 886055955;
			(*uParam1)[2] = 571895420;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 141091591;
			(*uParam1)[6] = -160252133;
			break;
		case 27:
			(*uParam1)[1] = -556285487;
			(*uParam1)[2] = 1614302152;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -419436105;
			(*uParam1)[6] = -1153592781;
			break;
		case 28:
			(*uParam1)[1] = 2037158384;
			(*uParam1)[2] = 585557722;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -656934440;
			(*uParam1)[6] = 1773837215;
			break;
		case 29:
			(*uParam1)[1] = -546026667;
			(*uParam1)[2] = 2043867312;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -2108845481;
			(*uParam1)[6] = -1131313442;
			break;
		case 30:
			(*uParam1)[1] = 998414367;
			(*uParam1)[2] = 2113575249;
			(*uParam1)[3] = -876464929;
			(*uParam1)[5] = -1369345218;
			(*uParam1)[6] = 1074337419;
			break;
		case 31:
			(*uParam1)[1] = -1513488517;
			(*uParam1)[2] = 757007611;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -1953397901;
			(*uParam1)[6] = -1129290320;
			break;
		case 32:
			(*uParam1)[1] = -188888539;
			(*uParam1)[2] = 1163343855;
			(*uParam1)[3] = 316887816;
			(*uParam1)[5] = 1093667790;
			(*uParam1)[6] = -1053389863;
			break;
		case 33:
			(*uParam1)[1] = -532564011;
			(*uParam1)[2] = -733172977;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 907866416;
			(*uParam1)[6] = 333294770;
			break;
		default:
			break;
	}
}

void func_75(int iParam0, var uParam1)
{
	(*uParam1)[0] = 0;
	switch (iParam0)
	{
		case 0:
			(*uParam1)[1] = 1897544931;
			(*uParam1)[2] = 266041631;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 1509550115;
			(*uParam1)[6] = 509767913;
			(*uParam1)[7] = 0;
			break;
		case 1:
			(*uParam1)[1] = 2015614314;
			(*uParam1)[2] = -882651535;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 197851966;
			(*uParam1)[6] = -521034356;
			(*uParam1)[7] = 0;
			break;
		case 2:
			(*uParam1)[1] = -1930969928;
			(*uParam1)[2] = -1309514843;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -1876026974;
			(*uParam1)[6] = -1163727221;
			(*uParam1)[7] = 0;
			break;
		case 3:
			(*uParam1)[1] = -16828255;
			(*uParam1)[2] = -1765089170;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -949517903;
			(*uParam1)[6] = -1144296811;
			(*uParam1)[7] = 0;
			break;
		case 4:
			(*uParam1)[1] = -2077710768;
			(*uParam1)[2] = 1630201582;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 389673950;
			(*uParam1)[6] = -328163764;
			(*uParam1)[7] = 0;
			break;
		case 5:
			(*uParam1)[1] = -890348822;
			(*uParam1)[2] = 1191730756;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -244620647;
			(*uParam1)[6] = -671633198;
			(*uParam1)[7] = 0;
			break;
		case 6:
			(*uParam1)[1] = -1296064150;
			(*uParam1)[2] = 1840190058;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 2114150388;
			(*uParam1)[6] = 1313079414;
			(*uParam1)[7] = 0;
			break;
		case 7:
			(*uParam1)[1] = 504104914;
			(*uParam1)[2] = -670131942;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -39402208;
			(*uParam1)[6] = 200630717;
			(*uParam1)[7] = 0;
			break;
		case 8:
			(*uParam1)[1] = 772020613;
			(*uParam1)[2] = 2083596926;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 1921439563;
			(*uParam1)[6] = -1454783280;
			(*uParam1)[7] = 0;
			break;
		case 9:
			(*uParam1)[1] = -706329904;
			(*uParam1)[2] = 810875384;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 1942418467;
			(*uParam1)[6] = 1361948401;
			(*uParam1)[7] = 0;
			break;
		case 10:
			(*uParam1)[1] = 1996723693;
			(*uParam1)[2] = -2077382259;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -1609894991;
			(*uParam1)[6] = -1848617156;
			(*uParam1)[7] = 0;
			break;
		case 11:
			(*uParam1)[1] = -1118758269;
			(*uParam1)[2] = 1001361578;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 1188868442;
			(*uParam1)[6] = -85911196;
			(*uParam1)[7] = 0;
			break;
		case 12:
			(*uParam1)[1] = -1084988756;
			(*uParam1)[2] = 664353388;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -925751739;
			(*uParam1)[6] = -1224834402;
			(*uParam1)[7] = 0;
			break;
		case 13:
			(*uParam1)[1] = 1300422639;
			(*uParam1)[2] = -1886721378;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 402394595;
			(*uParam1)[6] = 1280669333;
			(*uParam1)[7] = 0;
			break;
		case 14:
			(*uParam1)[1] = 1031073462;
			(*uParam1)[2] = -1765843222;
			(*uParam1)[3] = -612472729;
			(*uParam1)[5] = 84541090;
			(*uParam1)[6] = -723181991;
			(*uParam1)[7] = -542952491;
			break;
		default:
			break;
	}
}

void func_92(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("TRANSLATION_OVERLAY")))
	{
		iVar0 = (uParam1->f_51 + uParam1->f_52) + 1;
		bVar1 = uParam0->f_135 < (iVar0 - 1);
		bVar2 = uParam0->f_135 > 0;
		if (bVar2)
		{
			if (!__LIB_0__::func_139(uParam1->f_1))
			{
				uParam1->f_1 = __LIB_1__::func_877("NEWS_PREV_ARTICLE", joaat("INPUT_DOCUMENT_PAGE_PREV"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (__LIB_1__::func_514(uParam1->f_1, 1))
			{
				func_219(uParam0, iParam2);
				func_220(uParam0, uParam1, iParam2);
			}
		}
		else if (__LIB_0__::func_139(uParam1->f_1))
		{
			__LIB_1__::func_748(&(uParam1->f_1), 1, 1);
		}
		if (bVar1)
		{
			if (!__LIB_0__::func_139(*uParam1))
			{
				*uParam1 = __LIB_1__::func_877("NEWS_NEXT_ARTICLE", joaat("INPUT_DOCUMENT_PAGE_NEXT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (__LIB_1__::func_514(*uParam1, 1))
			{
				func_222(uParam0, iParam2);
				func_220(uParam0, uParam1, iParam2);
			}
		}
		else if (__LIB_0__::func_139(*uParam1))
		{
			__LIB_1__::func_748(uParam1, 1, 1);
		}
	}
	else
	{
		if (__LIB_0__::func_139(uParam1->f_1))
		{
			__LIB_1__::func_748(&(uParam1->f_1), 1, 1);
		}
		if (__LIB_0__::func_139(*uParam1))
		{
			__LIB_1__::func_748(uParam1, 1, 1);
		}
	}
}

void func_94(var uParam0, int iParam1)
{
	var uVar0;
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "Generic");
	if (__LIB_0__::func_192(iParam1, 1104960349))
	{
		func_223(uParam0, iParam1);
	}
	else if (__LIB_0__::func_192(iParam1, 1989861793))
	{
		func_224(uParam0, iParam1);
	}
	else if (__LIB_0__::func_192(iParam1, -772152977))
	{
		func_225(uParam0, iParam1);
	}
	else if (__LIB_0__::func_192(iParam1, -2081717885))
	{
		func_226(uParam0, iParam1);
	}
	else if (__LIB_0__::func_372(iParam1, 1224357681) == joaat("CI_TAG_FOLDER_BOUNTY_POSTERS"))
	{
		func_227(uParam0, iParam1);
	}
	else if (__LIB_0__::func_192(iParam1, -1227898937))
	{
		uParam0->f_135 = 0;
		__LIB_9__::func_297(uParam0, iParam1);
	}
	else
	{
		__LIB_9__::func_298(uParam0, iParam1);
	}
}

int func_179(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	if (__LIB_0__::func_446("ALL SATCHEL", &(uParam0->f_1.f_1), &(uParam0->f_1), 1084182731, 0))
	{
		uParam0->f_145 = 1;
		iVar0 = 0;
		iVar1 = 0;
		if (uParam0->f_1 > 0)
		{
			Var2.f_9 = -1591664384;
			iVar0 = (uParam0->f_1 - 1);
			while (iVar0 >= 0)
			{
				if (!__LIB_0__::func_236(&Var2, iVar0, uParam0->f_1.f_1, uParam0->f_1))
				{
				}
				else
				{
					if (iParam1 == Var2.f_4)
					{
						uParam0->f_1.f_2 = iVar0;
						uParam0->f_1.f_3 = iVar1;
					}
					if (Global_1935689.f_10189 == 0)
					{
						if (func_358(&Var2, 0, 1))
						{
							iVar1++;
						}
						if (iVar1 >= 16)
						{
							return 1;
						}
					}
				}
				iVar0 = (iVar0 + -1);
			}
			return 1;
		}
	}
	return 0;
}

int func_187(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = __LIB_12__::func_502((*uParam1)[0 /*9*/]);
	if (__LIB_6__::func_706(iVar0))
	{
		func_363(iVar0, func_362((*uParam1)[0 /*9*/]));
		if (!__LIB_11__::func_531(iVar0, 2))
		{
			__LIB_12__::func_565(iVar0, 2);
		}
	}
	return 1;
}

void func_193()
{
	int iVar0;
	int iVar1;
	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (__LIB_5__::func_240(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < Global_1347702)
		{
			if (__LIB_0__::func_5(iVar1) && Global_1347702[iVar1 /*49*/] == iVar0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[iVar1 /*49*/].f_37))
				{
					func_370(iVar1, 0);
					func_372(iVar1, __LIB_1__::func_440(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

void func_219(var uParam0, int iParam1)
{
	uParam0->f_135 = (uParam0->f_135 - 1);
	switch (iParam1)
	{
		case joaat("DOCUMENT_NEWSPAPER_ED_01"):
		case joaat("DOCUMENT_NEWSPAPER_ED_01_SD"):
		case joaat("DOCUMENT_NEWSPAPER_ED_01_NH"):
			if (uParam0->f_135 == 1)
			{
				uParam0->f_135 = 0;
			}
			break;
	}
}

void func_220(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	if (uParam0->f_135 < uParam1->f_51)
	{
		__LIB_9__::func_297(uParam0, iParam2);
	}
	else
	{
		iVar0 = (uParam0->f_135 - uParam1->f_51);
		if (Global_40.f_9479[uParam1->f_50 /*4*/].f_1 != -1)
		{
			if (iVar0 == 0)
			{
				func_382(&(uParam1->f_2));
				return;
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
		if (Global_40.f_9479[uParam1->f_50 /*4*/].f_2 != -1)
		{
			if (iVar0 == 0)
			{
				func_382(&(uParam1->f_18));
				return;
			}
		}
		func_382(&(uParam1->f_34));
	}
}

void func_222(var uParam0, int iParam1)
{
	uParam0->f_135++;
	switch (iParam1)
	{
		case joaat("DOCUMENT_NEWSPAPER_ED_01"):
		case joaat("DOCUMENT_NEWSPAPER_ED_01_SD"):
		case joaat("DOCUMENT_NEWSPAPER_ED_01_NH"):
			if (uParam0->f_135 == 1)
			{
				uParam0->f_135 = 2;
			}
			break;
	}
}

void func_223(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					__LIB_9__::func_302(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					__LIB_9__::func_302(&(uParam0->f_5), 1, 2, 1, 0);
					break;
				case 1724675796:
					__LIB_9__::func_302(&(uParam0->f_5), 2, 1, 1, 0);
					break;
				case 276123595:
					__LIB_9__::func_302(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -139224928:
					__LIB_9__::func_302(&(uParam0->f_5), 4, 1, 1, 0);
					break;
				case -29447330:
					__LIB_9__::func_302(&(uParam0->f_5), 5, 2, 1, 0);
					break;
				case 159464507:
					__LIB_9__::func_302(&(uParam0->f_5), 6, 1, 1, 0);
					break;
				case 1175698187:
					__LIB_9__::func_302(&(uParam0->f_5), 7, 2, 0, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_224(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					__LIB_9__::func_302(&(uParam0->f_5), iVar2, 0, 1, 0);
					iVar2++;
					break;
				case -641080715:
					__LIB_9__::func_302(&(uParam0->f_5), iVar2, 2, 1, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_225(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					__LIB_9__::func_302(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					__LIB_9__::func_302(&(uParam0->f_5), 2, 3, 1, 0);
					break;
				case 276123595:
					__LIB_9__::func_302(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -29447330:
					__LIB_9__::func_302(&(uParam0->f_5), 4, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
	uParam0->f_5 = iParam1;
	__LIB_9__::func_302(&(uParam0->f_5), 1, 1, 1, 0);
}

void func_226(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (iParam1)
			{
				case joaat("DOCUMENT_NOTE_STRAUSS_2"):
				case joaat("DOCUMENT_NOTE_STRAUSS_1"):
				case joaat("DOCUMENT_NOTE_STRAUSS_6"):
				case joaat("DOCUMENT_NOTE_STRAUSS_5"):
				case joaat("DOCUMENT_NOTE_STRAUSS_4"):
				case joaat("DOCUMENT_NOTE_STRAUSS_3"):
					switch (uParam0->f_5.f_2[iVar1 /*5*/])
					{
						case 1410847083:
							__LIB_9__::func_302(&(uParam0->f_5), iVar2, 1, 1, 0);
							iVar2++;
							break;
						case 1724675796:
							__LIB_9__::func_302(&(uParam0->f_5), iVar2, 6, 1, 0);
							iVar2++;
							break;
						case -641080715:
							__LIB_9__::func_302(&(uParam0->f_5), iVar2, 5, 0, __LIB_0__::func_192(iParam1, -1804424566));
							iVar2++;
							break;
						case 276123595:
							__LIB_9__::func_302(&(uParam0->f_5), iVar2, 5, 0, 0);
							iVar2++;
							break;
					}
					break;
				default:
					switch (uParam0->f_5.f_2[iVar1 /*5*/])
					{
						case 1410847083:
							__LIB_9__::func_302(&(uParam0->f_5), iVar2, 1, 1, 0);
							iVar2++;
							break;
						case 1724675796:
							__LIB_9__::func_302(&(uParam0->f_5), iVar2, 3, 1, 0);
							iVar2++;
							break;
						case -641080715:
							__LIB_9__::func_302(&(uParam0->f_5), iVar2, 2, 0, 0);
							iVar2++;
							break;
					}
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_227(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					__LIB_9__::func_302(&(uParam0->f_5), 0, 1, 1, 0);
					break;
				case 1724675796:
					__LIB_9__::func_302(&(uParam0->f_5), 1, 0, 1, 0);
					break;
				case -139224928:
					__LIB_9__::func_302(&(uParam0->f_5), 2, 0, 1, 0);
					break;
				case -641080715:
					__LIB_9__::func_302(&(uParam0->f_5), 3, 0, 1, 0);
					break;
				case 276123595:
					__LIB_9__::func_302(&(uParam0->f_5), 4, 3, 1, 0);
					break;
				case -29447330:
					__LIB_9__::func_302(&(uParam0->f_5), 5, 3, 1, 0);
					break;
				case 1175698187:
					__LIB_9__::func_302(&(uParam0->f_5), 6, 3, 1, 0);
					break;
				case 852595847:
					__LIB_9__::func_302(&(uParam0->f_5), 7, 3, 1, 0);
					break;
				case 1488412754:
					__LIB_9__::func_302(&(uParam0->f_5), 8, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

bool func_358(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!__LIB_7__::func_623(uParam0->f_9))
		{
			return false;
		}
	}
	if (!__LIB_7__::func_624(uParam0->f_4))
	{
		return false;
	}
	if (!func_517(uParam0->f_4, iParam1, 0))
	{
		return false;
	}
	if (!func_518(uParam0->f_4))
	{
		return false;
	}
	if (__LIB_4__::func_807(0))
	{
		if (!__LIB_0__::func_144(uParam0->f_4, 0) || uParam0->f_11 <= 0)
		{
			return false;
		}
	}
	if (Global_1935689.f_10190 == 0 && !__LIB_7__::func_625())
	{
		__LIB_7__::func_626(uParam0->f_4);
	}
	return true;
}

int func_362(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_NEWSPAPER_ED_01"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_02"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_03"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_04"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_05"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_06"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_07"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_08"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_09"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_10"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_11"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_12"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_13"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_14"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_01_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_02_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_03_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_04_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_05_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_06_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_07_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_08_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_09_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_10_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_11_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_12_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_13_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_14_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_01_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_02_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_03_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_04_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_05_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_06_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_07_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_08_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_09_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_10_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_11_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_12_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_13_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_14_SD"):
			return 2;
	}
	return 0;
}

void func_363(int iParam0, int iParam1)
{
	char* sVar0;
	char cVar1[64];
	char cVar9[64];
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	char cVar21[64];
	if (__LIB_6__::func_706(iParam0))
	{
		sVar0 = func_522(iParam1);
		StringCopy(&cVar1, "", 64);
		StringCopy(&cVar9, "", 64);
		uVar17 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Newspaper");
		uVar18 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar17, "DynamicArticle_01");
		uVar19 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar17, "DynamicArticle_02");
		uVar20 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar17, "FishingArticle");
		if (__LIB_8__::func_970(Global_40.f_9479[iParam0 /*4*/].f_1))
		{
			StringConCat(&cVar1, sVar0, 64);
			StringConCat(&cVar1, func_524(Global_40.f_9479[iParam0 /*4*/].f_1), 64);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar18, "Texture", &cVar1);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar18, "Visible", 1);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar18, "Visible", 0);
		}
		if (__LIB_8__::func_970(Global_40.f_9479[iParam0 /*4*/].f_2))
		{
			StringConCat(&cVar9, sVar0, 64);
			StringConCat(&cVar9, func_524(Global_40.f_9479[iParam0 /*4*/].f_2), 64);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar19, "Texture", &cVar9);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar19, "Visible", 1);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar19, "Visible", 0);
		}
		StringCopy(&cVar21, "", 64);
		if (Global_40.f_9479[iParam0 /*4*/].f_3 != -1)
		{
			StringConCat(&cVar21, sVar0, 64);
			StringConCat(&cVar21, func_525(Global_40.f_9479[iParam0 /*4*/].f_3), 64);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar20, "Texture", &cVar21);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar20, "Visible", 1);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar20, "Visible", 0);
		}
	}
}

void func_370(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		__LIB_4__::func_181(&(Global_1347702[iParam0 /*49*/].f_14));
		__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 16);
		__LIB_5__::func_250(iParam0);
		if ((!__LIB_7__::func_411(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43891) || bParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			UIFEED::_0x2F901291EF177B02(Global_1347702[iParam0 /*49*/].f_40, 0);
			__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 4096);
			__LIB_0__::func_325(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		else
		{
			__LIB_4__::func_838(iParam0, 16384);
			func_538(iParam0, 1, __LIB_1__::func_440(iParam0));
		}
	}
}

void func_372(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 256 != 0 && __LIB_0__::func_296(0, 0, 1))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 16 != 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_36 == 0)
	{
		return;
	}
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_38 = __LIB_4__::func_824(iParam0);
	if (!bParam5 && __LIB_4__::func_826(iParam0))
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::_BLIP_ADD_FOR_RADIUS(Global_1347702[iParam0 /*49*/].f_38, func_542(iParam0), Global_1347702[iParam0 /*49*/].f_18);
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(Global_1347702[iParam0 /*49*/].f_37, Global_1347702[iParam0 /*49*/].f_36, true);
	}
	else
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::_BLIP_ADD_FOR_COORD(Global_1347702[iParam0 /*49*/].f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(Global_1347702[iParam0 /*49*/].f_37, Global_1347702[iParam0 /*49*/].f_36, true);
	}
	if (iParam0 == 61)
	{
		func_543(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 838722941);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCEXO");
	}
	__LIB_5__::func_241(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(Global_1347702[iParam0 /*49*/].f_37, 64, iParam0);
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_4__::func_825(iParam0);
		iVar0 = __LIB_1__::func_953(Global_40.f_4283);
		if (__LIB_0__::func_20(iVar0) && __LIB_1__::func_59(Global_1888801[iVar0 /*35*/].f_13))
		{
			bVar1 = true;
			bVar2 = __LIB_5__::func_246(iVar0);
		}
		if (__LIB_4__::func_827(iParam0, bVar1, iVar0))
		{
			__LIB_7__::func_603(Global_1347702[iParam0 /*49*/].f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::_IS_RADAR_HIDDEN_2() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 1 == 0)
	{
		__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 1);
		if (((!__LIB_4__::func_826(iParam0) || __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 1)) || __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 512)) || __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 2048))
		{
			MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 580546400);
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 32768 == 0)
	{
		if ((Global_1347702[iParam0 /*49*/].f_36 == joaat("BLIP_RC") && Global_1347702[iParam0 /*49*/].f_12 & 1 == 0) && Global_1347702[iParam0 /*49*/].f_12 & 2 != 0)
		{
			MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, -211388321);
		}
		else
		{
			__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 32768);
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (__LIB_4__::func_828(iParam0))
		{
			if (iParam0 == 97)
			{
				__LIB_1__::func_240(185, 0);
			}
			else
			{
				__LIB_1__::func_240(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {Global_1347702[iParam0 /*49*/].f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = Global_1347702[iParam0 /*49*/].f_37;
			Global_1347702[iParam0 /*49*/].f_40 = __LIB_0__::func_45(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		__LIB_3__::func_727(iParam0, 2);
	}
}

void func_382(var uParam0)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Newspaper");
	iVar1 = 0;
	while (iVar1 < 15)
	{
		bVar2 = true;
		if ((*uParam0)[iVar1] == joaat("NONE") || (*uParam0)[iVar1] == 0)
		{
			bVar2 = false;
		}
		__LIB_7__::func_674(iVar1, uVar0, bVar2, (*uParam0)[iVar1]);
		iVar1++;
	}
}

bool func_517(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bVar0 = false;
	if (((iParam1 == 0 || iParam1 == -2074770370) || bParam2) || __LIB_4__::func_807(0))
	{
		bVar0 = true;
	}
	if (!bParam2)
	{
		if ((!__LIB_0__::func_144(iParam0, 0) || iParam0 == joaat("CUSTOM_SATCHEL")) || iParam0 == joaat("KIT_WARDROBE"))
		{
			return false;
		}
	}
	if (!bVar0 && __LIB_7__::func_676(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -283002878:
		case 0:
			if (!__LIB_4__::func_807(0))
			{
				if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
				{
					return true;
				}
				if ((((((((((func_517(iParam0, -1559802791, 1) || func_517(iParam0, -1268291907, 1)) || func_517(iParam0, -96974025, 1)) || func_517(iParam0, -1666604090, 1)) || func_517(iParam0, 1561961676, 1)) || func_517(iParam0, -156634416, 1)) || func_517(iParam0, 1061777683, 1)) || func_517(iParam0, -2074770370, 1)) || func_517(iParam0, -693134279, 1)) || func_517(iParam0, -182626652, 1)) || __LIB_7__::func_630(iParam0))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
			break;
		case -1559802791:
			return __LIB_0__::func_192(iParam0, 1422457563);
		case -1268291907:
			return __LIB_0__::func_192(iParam0, 1360707454);
		case -96974025:
			return __LIB_0__::func_192(iParam0, 1009210113);
		case -1666604090:
			return __LIB_0__::func_192(iParam0, -193035453);
		case 1561961676:
			return __LIB_0__::func_192(iParam0, -111938901);
		case -156634416:
			return __LIB_0__::func_192(iParam0, -928967997);
		case 1061777683:
			return __LIB_0__::func_192(iParam0, 747873593);
		case -2074770370:
			if (Global_1935689.f_17 == 1 || Global_1935689.f_17 == 2)
			{
				return __LIB_7__::func_631(iParam0, iParam1);
			}
			else if (__LIB_0__::func_372(iParam0, -949239683) == -1337515701 && iParam0 != joaat("KIT_PLAYER_POCKETWATCH"))
			{
				return true;
			}
			else
			{
				return __LIB_0__::func_192(iParam0, -111938901);
			}
			break;
		case -693134279:
			return __LIB_0__::func_774(iParam0, 8388608);
		case -182626652:
			if (__LIB_8__::func_127(iParam0, Global_1914319.f_16855.f_1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_518(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY"):
			return false;
	}
	if (__LIB_4__::func_807(0) && Global_1914319.f_16855 == 2)
	{
		if (!func_624(iParam0))
		{
			return false;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
				return false;
		}
	}
	if (__LIB_0__::func_2() == 0)
	{
		if (__LIB_0__::func_192(iParam0, -805003139))
		{
			if (!UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
			{
				return false;
			}
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("UPGRADE") && !(__LIB_0__::func_192(iParam0, -1540973036) || __LIB_0__::func_192(iParam0, 1192444843)))
	{
		return false;
	}
	return true;
}

char* func_522(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BL_";
		case 1:
			return "NH_";
		case 2:
			return "SD_";
	}
	return "";
}

char* func_524(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "D_CACR01";
		case 1:
			return "D_CACR02";
		case 2:
			return "D_CACR03";
		case 3:
			return "D_CACR04";
		case 4:
			return "D_STAGE4";
		case 5:
			return "D_CRN1";
		case 6:
			return "D_DST5";
		case 7:
			return "D_MUD5_1";
		case 8:
			return "D_MUD5_2";
		case 9:
			return "D_BNTYSNK";
		case 10:
			return "D_PRNBG";
		case 11:
			return "D_RBRAN";
		case 12:
			return "D_RBT05";
		case 13:
			return "D_RBT15";
		case 14:
			return "D_RBT18A";
		case 15:
			return "D_RBT18B";
		case 17:
			return "D_RBT23A";
		case 16:
			return "D_RBT23B";
		case 19:
			return "D_RBT23C";
		case 18:
			return "D_RBT23D";
		case 21:
			return "D_RCAL13";
		case 20:
			return "D_RCDIN2";
		case 22:
			return "D_RCLDN1";
		case 23:
			return "D_RFMA3";
		case 24:
			return "D_RFMA4";
		case 25:
			return "D_RHNTN6";
		case 26:
			return "D_RKTTY5";
		case 27:
			return "D_RMASN5";
		case 28:
			return "D_RMAYR3A";
		case 29:
			return "D_RMAYR3B";
		case 30:
			return "D_RNATV1";
		case 31:
			return "D_RRTL7";
		case 32:
			return "D_RSKLR";
		case 33:
			return "D_UTP2";
	}
	return "";
}

char* func_525(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FISHING_BLUEGILL";
		case 1:
			return "FISHING_BULLHEAD_CATFISH";
		case 2:
			return "FISHING_CHAIN_PICKEREL";
		case 3:
			return "FISHING_CHANNEL_CATFISH";
		case 4:
			return "FISHING_LAKE_STURGEON";
		case 5:
			return "FISHING_LARGEMOUTH_BASS";
		case 6:
			return "FISHING_LONGNOSE_GAR";
		case 7:
			return "FISHING_MUSKIE";
		case 8:
			return "FISHING_NORTHERN_PIKE";
		case 9:
			return "FISHING_PERCH";
		case 10:
			return "FISHING_REDFIN_PICKEREL";
		case 11:
			return "FISHING_ROCK_BASS";
		case 12:
			return "FISHING_SOCKEYE_SALMON";
		case 13:
			return "FISHING_STEELHEAD_TROUT";
		case 14:
			return "FISHING_STRANGE_DISAPPEARANCE";
	}
	return "";
}

void func_538(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 32 != 0)
	{
		return;
	}
	else if (Global_1347702[iParam0 /*49*/].f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	__LIB_5__::func_250(iParam0);
	if (Global_1347702[iParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[iParam0 /*49*/].f_13 & 2048 == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		func_372(iParam0, func_542(iParam0), 0, 1);
	}
	else if (Global_1347702[iParam0 /*49*/].f_18 > -1f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		func_372(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_372(iParam0, vParam2, 0, 0);
	}
	MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 724623647);
	__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 4096);
}

Vector3 func_542(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		case 33:
			return 905.92f, -421.19f, 88.23f;
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		case 38:
			return -329.32f, -366.6f, 87f;
		case 39:
			return 97.4f, -212.47f, 111.6f;
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		case 84:
			return -73.18f, -392.3f, 70.84f;
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		case 104:
			return 2407f, -585.32f, 40.66f;
		case 105:
			return -219.25f, 212.93f, 94.15f;
		case 116:
			return 211.99f, 512.98f, 126.54f;
		case 117:
			return -329.2f, 797.9f, 116.89f;
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
			return 2688.427f, -1121.766f, 49.6782f;
			return -576.08f, 524.9f, 97.86f;
			return 1248.01f, -1280.07f, 75.17f;
			return 2954.45f, 523.05f, 44.47f;
			return 2304.697f, -0.13289f, 45.70486f;
			return 556.271f, 172.08f, 133.3435f;
			return 556.271f, 172.08f, 133.3435f;
			return -585.6761f, -347.216f, 81.28532f;
			return Global_1347702[iParam0 /*49*/].f_24;
		}
void func_543(int iParam0)
{
	switch (__LIB_0__::func_2())
	{
		case -1:
			Global_1357549.f_1494 = (Global_1357549.f_1494 || iParam0);
			break;
	}
}

bool func_624(int iParam0)
{
	int iVar0;
	if (iParam0 != 0)
	{
		if (__LIB_0__::func_774(iParam0, 8388608))
		{
			iVar0 = __LIB_1__::func_35(__LIB_7__::func_635(iParam0), 10);
			if (iVar0 != 0 && __LIB_1__::func_707(iVar0, 1, 0))
			{
				Global_1901328.f_94 = 1;
				return func_693(__LIB_7__::func_635(iParam0), iParam0);
			}
			else if (iParam0 == __LIB_1__::func_35(__LIB_7__::func_636(iParam0), 5))
			{
				if (!__LIB_1__::func_187(39))
				{
					return false;
				}
				else
				{
					return true;
				}
			}
			else if (iParam0 == __LIB_1__::func_35(__LIB_7__::func_637(iParam0), 5))
			{
				if (!__LIB_1__::func_187(49))
				{
					return false;
				}
				else
				{
					return true;
				}
			}
			else if (__LIB_7__::func_638(iParam0))
			{
				if (!__LIB_1__::func_187(41))
				{
					return false;
				}
				else
				{
					return func_698(__LIB_7__::func_639(iParam0), 5, 0);
				}
			}
			else if (__LIB_7__::func_640(iParam0))
			{
				if (__LIB_1__::func_707(joaat("DOCUMENT_RARE_ORCHID_ORDER_1"), 1, 0))
				{
					if (!__LIB_1__::func_187(48))
					{
						return false;
					}
					else
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			else if (__LIB_7__::func_641(iParam0))
			{
				if (!__LIB_1__::func_187(38))
				{
					return false;
				}
				else
				{
					return true;
				}
			}
			else if (iParam0 == joaat("DOCUMENT_RARE_ORCHID_ORDER_1"))
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_693(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_34(iParam0, 20);
	if (iVar0 == 5)
	{
		if ((((func_698(iParam0, 5, 0) && func_698(iParam0, 6, 0)) && func_698(iParam0, 7, 0)) && func_698(iParam0, 8, 0)) && func_698(iParam0, 9, 0))
		{
			return __LIB_0__::func_774(iParam1, 8388608);
		}
	}
	else if (iVar0 == 4)
	{
		if (((func_698(iParam0, 5, 0) && func_698(iParam0, 6, 0)) && func_698(iParam0, 7, 0)) && func_698(iParam0, 8, 0))
		{
			return __LIB_0__::func_774(iParam1, 8388608);
		}
	}
	else if (iVar0 == 3)
	{
		if ((func_698(iParam0, 5, 0) && func_698(iParam0, 6, 0)) && func_698(iParam0, 7, 0))
		{
			return __LIB_0__::func_774(iParam1, 8388608);
		}
	}
	else if (iVar0 == 2)
	{
		if (func_698(iParam0, 5, 0) && func_698(iParam0, 6, 0))
		{
			return __LIB_0__::func_774(iParam1, 8388608);
		}
	}
	return false;
}

int func_698(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = __LIB_1__::func_35(iParam0, iParam1);
	if ((((((((((((((((((((iVar0 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT") || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT")) || iVar0 == joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_PERCH_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"))
	{
		if (__LIB_1__::func_707(iVar0, 1, 0))
		{
			if (bParam2)
			{
				Global_1901328.f_94 = 1;
				func_741(iVar0, 1, 0, -142743235, 0);
			}
			return 1;
		}
	}
	else if ((((((((((iVar0 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT") || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT")) || iVar0 == joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_MUSKIE_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"))
	{
		if (func_742(iVar0, bParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_741(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_741(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_16__::func_97(iParam0, iParam1);
	return 1;
}

int func_742(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		iVar14 = ITEMSET::CREATE_ITEMSET(false);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar14);
		if (ITEMSET::IS_ITEMSET_VALID(iVar14))
		{
			iVar15 = ITEMSET::GET_ITEMSET_SIZE(iVar14);
			iVar16 = 0;
			while (iVar16 < iVar15)
			{
				iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar16, iVar14));
				if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
				}
				else if (ENTITY::_0x9A100F1CF4546629(iVar0) || ENTITY::_0xC346A546612C49A9(iVar0))
				{
					iVar21 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					iVar1 = __LIB_7__::func_664(iVar21, &uVar2);
					iVar23 = __LIB_7__::func_665(iVar0);
					if (iVar23 == iParam0)
					{
						if (bParam1)
						{
							Global_1901328.f_94 = 1;
							ENTITY::_DELETE_CARRIABLE(&iVar0);
							__LIB_1__::func_158(iVar23, -1, 0, 0, 0);
							Global_1901328.f_94 = 0;
						}
						ITEMSET::DESTROY_ITEMSET(iVar14);
						return 1;
					}
					iVar22 = 0;
					while (iVar22 < iVar1)
					{
						if (uVar2[iVar22] == iParam0)
						{
							if (bParam1)
							{
								Global_1901328.f_94 = 1;
								ENTITY::_DELETE_CARRIABLE(&iVar0);
								__LIB_1__::func_158(uVar2[iVar22], -1, 0, 0, 0);
								Global_1901328.f_94 = 0;
							}
							ITEMSET::DESTROY_ITEMSET(iVar14);
							return 1;
						}
						iVar22++;
					}
				}
				else
				{
					iVar24 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					__LIB_7__::func_642(iVar24, &iVar18, &uVar19, &iVar17, &uVar20);
					if (__LIB_2__::func_999(&iVar13, iVar24, iVar17, iVar18))
					{
						if (iVar13 == iParam0)
						{
							if (bParam1)
							{
								Global_1901328.f_94 = 1;
								ENTITY::_DELETE_CARRIABLE(&iVar0);
								__LIB_1__::func_158(iVar13, -1, 0, 0, 0);
								Global_1901328.f_94 = 0;
							}
							ITEMSET::DESTROY_ITEMSET(iVar14);
							return 1;
						}
					}
				}
				iVar16++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar14);
		}
		else
		{
			return 0;
		}
	}
	return func_757(iParam0, bParam1);
}

int func_757(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<10> Var17;
	int iVar31;
	int iVar32;
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	Var3.f_13 = -1;
	Var17.f_9 = -1591664384;
	Var3.f_1 = 1084182731;
	iVar31 = __LIB_8__::func_716(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar31) && __LIB_7__::func_643(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar31), &Var3, &iVar0, &iVar1))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (__LIB_0__::func_236(&Var17, iVar2, iVar0, iVar1))
			{
				if (iParam0 == Var17.f_4)
				{
					if (bParam1)
					{
						iVar32 = 1;
						func_767(&iVar31, iParam0, &iVar32, 1, -142743235);
					}
					__LIB_0__::func_238(iVar0);
					return 1;
				}
			}
			iVar2++;
		}
		__LIB_0__::func_238(iVar0);
	}
	return 0;
}

int func_767(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(*iParam0);
	iVar1 = __LIB_7__::func_601(iVar0, iParam1);
	if (func_779(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var2 = { __LIB_0__::func_777(iParam1) };
		if (STATS::_STAT_ID_IS_VALID(&Var2))
		{
			STATS::_0xBD861AE8A5181ED7(&Var2, *iParam2);
		}
		if (__LIB_7__::func_599(iParam1))
		{
			__LIB_7__::func_594(*iParam0, iParam1, *iParam2);
		}
		else
		{
			__LIB_7__::func_594(*iParam0, iParam1, *iParam2);
			__LIB_15__::func_79(*iParam0, iParam1, *iParam2, 1);
		}
		iVar4 = (iVar1 - __LIB_7__::func_601(iVar0, iParam1));
		*iParam2 = (*iParam2 - iVar4);
		return 1;
	}
	return 0;
}

int func_779(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0);
	if (__LIB_1__::func_16(iParam0))
	{
		iVar1 = __LIB_0__::func_402(iParam0);
		if (__LIB_0__::func_144(iParam1, 0))
		{
			if (__LIB_7__::func_599(iParam1))
			{
				__LIB_7__::func_681(iVar1, iParam1, iParam2);
			}
		}
	}
	return func_788(iVar0, iParam1, iParam2, bParam3, iParam4);
}

int func_788(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!__LIB_7__::func_654(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { __LIB_0__::func_777(iParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((__LIB_7__::func_601(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((__LIB_7__::func_601(iParam0, iParam1) - iParam2) < 0)
		{
			func_788(iParam0, iParam1, __LIB_1__::func_614(iParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!__LIB_7__::func_653(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && iParam1 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_1__::func_158(iParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

