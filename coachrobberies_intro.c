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
	bool bLocal_14 = false;
	bool bLocal_15 = false;
	bool bLocal_16 = false;
	bool bLocal_17 = false;
	int iLocal_18 = 0;
	bool bLocal_19 = false;
	bool bLocal_20 = false;
	bool bLocal_21 = false;
	bool bLocal_22 = false;
	int iLocal_23 = 0;
	bool bLocal_24 = false;
	bool bLocal_25 = false;
	bool bLocal_26 = false;
	bool bLocal_27 = false;
	bool bLocal_28 = false;
	bool bLocal_29 = false;
	bool bLocal_30 = false;
	bool bLocal_31 = false;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = -1;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 1097859072;
	var uLocal_50 = 1000;
	var uLocal_51 = 1067450368;
	var uLocal_52 = 5000;
	var uLocal_53 = 42;
	var uLocal_54 = 1103626240;
	var uLocal_55 = 1077936128;
	var uLocal_56 = 1106247680;
	var uLocal_57 = 1103101952;
	var uLocal_58 = 1097859072;
	var uLocal_59 = 1103626240;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	struct<169> Local_73 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_242 = 0;
	var uLocal_243 = -1;
	var uLocal_244 = 0;
	var uLocal_245 = -1;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = -1;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 1073741824;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 1;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 1;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 570;
	var uLocal_267 = 1065353216;
	var uLocal_268 = -1082130432;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 2;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bLocal_19 = true;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	__LIB_6__::func_704(8192);
	if (func_3())
	{
		iLocal_62 = 13;
	}
	else
	{
		iLocal_62 = iScriptParam_0;
	}
	func_4();
	while (true)
	{
		func_5();
		if (__LIB_0__::func_272(Local_73, 0))
		{
			if (bLocal_22)
			{
				if (__LIB_0__::func_94(Local_73, Global_36, 1) > 5f)
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "COACHROB");
					bLocal_22 = false;
				}
			}
			if (!func_8())
			{
				func_10(&Local_73, &iLocal_242, func_9(), &uLocal_263, 0f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
			}
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Local_73, 0, 1);
		}
		if (func_11())
		{
			func_1();
		}
		func_12();
		switch (iLocal_65)
		{
			case 0:
				func_13();
				break;
			case 1:
				switch (iLocal_67)
				{
					case 0:
						func_14();
						break;
					case 1:
						func_15();
						break;
				}
				break;
			case 2:
				func_16();
				break;
			case 3:
				func_17();
				break;
			case 4:
				func_1();
				break;
		}
		if (!bLocal_16)
		{
			if ((bLocal_15 && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_73.f_162)) && __LIB_1__::func_707(__LIB_13__::func_361(iLocal_62), 1, 0))
			{
				bLocal_16 = true;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_1()
{
	if (bLocal_22)
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "COACHROB");
		bLocal_22 = false;
	}
	if (__LIB_0__::func_272(Local_73, 0))
	{
		if (ENTITY::_IS_ENTITY_FROZEN(Local_73))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_73, false);
		}
		if (PED::GET_PED_CONFIG_FLAG(Local_73, 413, true))
		{
			PED::SET_PED_CONFIG_FLAG(Local_73, 413, false);
		}
		if (PED::GET_PED_CONFIG_FLAG(Local_73, 330, true))
		{
			PED::SET_PED_CONFIG_FLAG(Local_73, 330, false);
		}
		if (ENTITY::_0x0B7CB1300CBFE19C(Local_73, 1))
		{
			TASK::STOP_ANIM_PLAYBACK(Local_73, 0, false);
		}
		if (TASK::PED_HAS_USE_SCENARIO_TASK(Local_73))
		{
			TASK::CLEAR_PED_TASKS(Local_73, true, false);
		}
	}
	func_20(1);
	func_21(0);
	if (__LIB_2__::func_763(Local_73.f_1, 1))
	{
		__LIB_2__::func_753(Local_73.f_1, 0, 1, 0, 0);
	}
	HUD::_TEXT_DATABASE_DELETE("SCRB");
	__LIB_1__::func_222(Local_73.f_2, 0);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_73.f_168))
	{
		TASK::_DELETE_SCENARIO_POINT(Local_73.f_168);
	}
	func_25(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3()
{
	if (__LIB_0__::func_627(128, 0) || __LIB_1__::func_200(128))
	{
		return true;
	}
	return false;
}

void func_4()
{
	switch (iLocal_62)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			iLocal_61 = 0;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			iLocal_61 = 1;
			break;
		case 13:
			if (BUILTIN::VDIST(Global_36, func_28(0)) < BUILTIN::VDIST(Global_36, func_28(1)))
			{
				iLocal_61 = 0;
			}
			else
			{
				iLocal_61 = 1;
			}
			break;
	}
	func_29();
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
	iLocal_70 = 0;
	__LIB_2__::func_887(&uLocal_32, 0);
	__LIB_1__::func_402(&uLocal_32, 1);
	__LIB_1__::func_398(&uLocal_32, 1);
	__LIB_1__::func_401(&uLocal_32, 1);
	__LIB_2__::func_828(&uLocal_32, 1);
	__LIB_2__::func_829(&uLocal_32, 1);
	__LIB_2__::func_830(&uLocal_32, 1);
}

void func_5()
{
	if (!bLocal_30)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_73.f_159))
		{
			if (!bLocal_31)
			{
				TXD::_REQUEST_STREAMED_TXD(func_37(), false);
				bLocal_31 = true;
			}
			else if (TXD::_HAS_STREAMED_TXD_LOADED(func_37()))
			{
				DECORATOR::DECOR_SET_INT(Local_73.f_159, "letter_item", __LIB_13__::func_361(iLocal_62));
				OBJECT::_SET_APPLY_OBJECT_TXD(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Local_73.f_159), func_37(), 0, 0);
				bLocal_30 = true;
			}
		}
	}
}

bool func_8()
{
	switch (iLocal_62)
	{
		case 0:
		case 1:
		case 2:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, -1761.251f, -386.2874f, 156.2065f, -1768.777f, -380.2981f, 159.7317f, 5.25f, false, true, 0))
			{
				return true;
			}
			break;
		case 4:
		case 5:
		case 6:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 1238.886f, -1303.498f, 75.40268f, 1222.679f, -1288.258f, 78.89932f, 9.25f, false, true, 0))
			{
				return true;
			}
			break;
	}
	return false;
}

float func_9()
{
	return 2.4f;
}

int func_10(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
			__LIB_1__::func_148(&(iParam1->f_13));
		}
		if (__LIB_4__::func_231(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_10__::func_887(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_10(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_8__::func_963(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_10__::func_888(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_2__::func_589(*iParam0, iParam1, uParam3))
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
				if (__LIB_3__::func_756(iParam0, iParam1, fParam4, bVar6))
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
					__LIB_4__::func_166(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_10__::func_888(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_8__::func_963(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				if (__LIB_3__::func_756(iParam0, iParam1, fParam4, bVar6))
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

bool func_11()
{
	if (__LIB_6__::func_702(8192))
	{
		return true;
	}
	else if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return true;
	}
	else if (func_60())
	{
		return true;
	}
	else if (!__LIB_14__::func_433(2, -1))
	{
		return true;
	}
	else if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return true;
	}
	else if (func_63(iLocal_62))
	{
		return true;
	}
	else if (iLocal_65 > 0)
	{
		if (!__LIB_2__::func_767(Local_73.f_1, 0))
		{
			return true;
		}
		else if (!__LIB_0__::func_272(Local_73, 3))
		{
			return true;
		}
		else if (PED::IS_PED_FLEEING(Local_73))
		{
			return true;
		}
		else if (PED::IS_PED_IN_COMBAT(Local_73, 0))
		{
			return true;
		}
		else if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return true;
		}
		else if (__LIB_0__::func_296(0, 0, 1) && !__LIB_1__::func_200(128))
		{
			return true;
		}
	}
	return false;
}

void func_12()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_73.f_162))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_73.f_162, false))
	{
		return;
	}
	if (iLocal_62 != 0)
	{
		if (!Local_73.f_163)
		{
			if (__LIB_1__::func_104(&(Local_73.f_29), Local_73.f_134, 0, -1, 0, 0))
			{
				Local_73.f_163 = 1;
			}
		}
	}
	if (!Local_73.f_165)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -329659517))
		{
			func_67();
			Local_73.f_165 = 1;
		}
	}
}

void func_13()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bVar0 = true;
	bVar1 = false;
	bVar2 = false;
	bVar3 = false;
	if (((iLocal_62 == 13 || iLocal_62 == 0) || iLocal_62 == 1) || iLocal_62 == 2)
	{
		bVar1 = true;
		bVar2 = true;
		bLocal_28 = true;
	}
	if (iLocal_62 == 0)
	{
		bVar3 = true;
	}
	switch (iLocal_66)
	{
		case 0:
			func_68();
			iLocal_66 = 1;
			break;
		case 1:
			if (func_69())
			{
				if (__LIB_0__::func_29(Local_73.f_1))
				{
					if (__LIB_2__::func_767(Local_73.f_1, 0))
					{
						iLocal_66 = 2;
					}
					else if (iLocal_62 == 13)
					{
						if (!__LIB_0__::func_75(&(Local_73.f_17)))
						{
							__LIB_1__::func_148(&(Local_73.f_17));
						}
						else if (__LIB_0__::func_265(&(Local_73.f_17)) > 10f)
						{
							__LIB_1__::func_940(Local_73.f_1, 1);
						}
					}
				}
			}
			break;
		case 2:
			HUD::_TEXT_DATABASE_REQUEST("SCRB");
			HUD::_TEXT_DATABASE_REQUEST(Local_73.f_127);
			if (iLocal_62 == 0)
			{
				HUD::_TEXT_DATABASE_REQUEST("crst1a");
			}
			STREAMING::REQUEST_ANIM_DICT(func_74());
			STREAMING::REQUEST_ANIM_DICT(func_75());
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_SHOPKEEPER"), 15, 0, 0);
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_SHOPKEEPER_MALE_A"), 15, 0, 0);
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_SHOPKEEPER_MALE_B"), 15, 0, 0);
			if (iLocal_62 == 6)
			{
				STREAMING::REQUEST_MODEL(joaat("P_CS_NOTE01X"), false);
			}
			iLocal_66 = 3;
			break;
		case 3:
			if (!HUD::_TEXT_DATABASE_HAS_LOADED("SCRB"))
			{
				bVar0 = false;
			}
			if (!HUD::_TEXT_DATABASE_HAS_LOADED(Local_73.f_127))
			{
				bVar0 = false;
			}
			if (iLocal_62 == 0)
			{
				if (!HUD::_TEXT_DATABASE_HAS_LOADED("crst1a"))
				{
					bVar0 = false;
				}
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_74()))
			{
				bVar0 = false;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_75()))
			{
				bVar0 = false;
			}
			if (iLocal_62 == 6)
			{
				if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_NOTE01X")))
				{
					bVar0 = false;
				}
			}
			if (!func_76())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_66 = 4;
			}
			break;
		case 4:
			if (func_77(bVar1, bVar2, bVar3))
			{
				if (iLocal_62 == 13)
				{
					iLocal_66 = 5;
				}
				else if (func_78())
				{
					if (func_79())
					{
						if (__LIB_2__::func_215(Local_73, Global_35, 1, 5f, 0))
						{
							__LIB_1__::func_104(&(Local_73.f_29), Local_73.f_146, 0, -1, 0, 0);
							Global_40.f_9146.f_4[iLocal_62] = 3;
							Global_40.f_9146.f_79[iLocal_62] = -15;
							Global_40.f_9146.f_3 = -1;
							__LIB_13__::func_376(iLocal_62);
							iLocal_65 = 2;
						}
					}
				}
				else if (func_82())
				{
					iLocal_66 = 5;
				}
				else if (func_79())
				{
					__LIB_1__::func_104(&(Local_73.f_29), Local_73.f_143, 0, -1, 0, 0);
					iLocal_65 = 2;
				}
			}
			break;
		case 5:
			if (iLocal_62 == 6)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_73.f_159))
				{
					Local_73.f_159 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_CS_NOTE01X"), 1226.21f, -1294.86f, 76.9511f, true, true, false, true);
					ENTITY::SET_ENTITY_ROTATION(Local_73.f_159, -0.207494f, 0.0267885f, 50.0482f, 2, true);
				}
			}
			__LIB_2__::func_862(Local_73.f_2, 6f, "Coach_robbery_intro", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
			if (!__LIB_0__::func_86(Local_73.f_156))
			{
				Local_73.f_155 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_73.f_156 - Vector(1f, 1f, 1f), Local_73.f_156 + Vector(1f, 1f, 1f), 0, 15);
			}
			iLocal_65 = 1;
			break;
	}
}

void func_14()
{
	float fVar0;
	if (iLocal_68 > 0 && iLocal_68 != 3)
	{
		if (!func_85())
		{
			__LIB_1__::func_748(&(Local_73.f_23), 1, 1);
			iLocal_68 = 0;
		}
	}
	switch (iLocal_68)
	{
		case 0:
			if (iLocal_62 == 13)
			{
				func_25(1);
				iLocal_68 = 1;
			}
			else if (func_85())
			{
				func_25(1);
				PED::SET_PED_CONFIG_FLAG(Local_73, 297, true);
				PED::SET_PED_CONFIG_FLAG(Local_73, 315, true);
				iLocal_68 = 1;
			}
			break;
		case 1:
			func_87();
			func_88();
			if (func_79())
			{
				if (func_89())
				{
					func_20(0);
					Local_73.f_27 = 1;
					iLocal_68 = 3;
				}
				else
				{
					if (!Local_73.f_27)
					{
						if (bLocal_17)
						{
							__LIB_1__::func_104(&(Local_73.f_29), Local_73.f_131, 0, -1, 0, 0);
						}
						else
						{
							__LIB_1__::func_104(&(Local_73.f_29), Local_73.f_128, 0, -1, 0, 0);
						}
						Local_73.f_27 = 1;
					}
					__LIB_1__::func_748(&(Local_73.f_23), 1, 1);
					iLocal_68 = 2;
				}
			}
			break;
		case 3:
			if (func_90())
			{
				func_20(1);
				func_21(1);
				iLocal_68 = 2;
			}
			break;
		case 2:
			if (bLocal_17)
			{
				if (__LIB_5__::func_259(&(Local_73.f_131)))
				{
					return;
				}
			}
			if (!__LIB_0__::func_75(&(Local_73.f_8)))
			{
				__LIB_1__::func_148(&(Local_73.f_8));
			}
			if (__LIB_1__::func_313(&(Local_73.f_8), 0.2f))
			{
				if (bLocal_24)
				{
					__LIB_6__::func_841(65536);
				}
				if (bLocal_25)
				{
					__LIB_6__::func_841(131072);
				}
				if (PED::GET_PED_CONFIG_FLAG(Local_73, 301, true))
				{
					PED::SET_PED_CONFIG_FLAG(Local_73, 301, false);
				}
				iLocal_68 = 4;
			}
			break;
		case 4:
			if (func_79())
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
				func_94(1094713344 /* Float: 12f */);
				if (!__LIB_0__::func_139(Local_73.f_23))
				{
					fVar0 = 2.5f;
					if (iLocal_62 == 13)
					{
						if (__LIB_2__::func_364(Local_73, 0, 0, 0))
						{
							Local_73.f_23 = __LIB_2__::func_403("CR_C_RTL2", joaat("INPUT_INTERACT_LOCKON_A"), Local_73, 1, 0, 0, 0, 5, fVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
						}
						else
						{
							__LIB_1__::func_748(&(Local_73.f_23), 1, 1);
						}
					}
					else
					{
						Local_73.f_23 = __LIB_2__::func_403("CR_C_PAYTIP", joaat("INPUT_INTERACT_LOCKON_A"), Local_73, 1, 0, 0, 0, 5, fVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
						__LIB_1__::func_483(Local_73.f_23, "CR_C_PAYTIP", 2, 1);
					}
					if (__LIB_0__::func_139(Local_73.f_23))
					{
						HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(Local_73.f_23) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_73), 0);
						__LIB_6__::func_697(Local_73.f_23, 0, 1);
						ENTITY::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(Local_73, true);
					}
					if (iLocal_62 == 0)
					{
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
					}
				}
				else
				{
					iLocal_23 = PED::_0xC22AA08A8ADB87D4(Local_73);
					func_101();
					if ((!__LIB_2__::func_364(Local_73, 0, 0, 0) && bLocal_19) && !bLocal_29)
					{
						__LIB_1__::func_382(Local_73.f_23, 0, 1);
					}
					else if (__LIB_3__::func_254(ENTITY::GET_ENTITY_COORDS(Local_73, true, false), Global_35))
					{
						__LIB_1__::func_382(Local_73.f_23, 1, 1);
						if (((__LIB_0__::func_492(1) >= 200 || iLocal_62 == 13) && !__LIB_5__::func_236(1)) && !func_106())
						{
							if (!__LIB_0__::func_572(Local_73.f_23, 0))
							{
								__LIB_1__::func_221(Local_73.f_23, 1, 1);
							}
						}
						else if (__LIB_0__::func_572(Local_73.f_23, 0))
						{
							__LIB_1__::func_221(Local_73.f_23, 0, 1);
						}
						if (__LIB_0__::func_567(Local_73.f_23, 1) || bLocal_29)
						{
							if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
							{
								WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
								TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
								bLocal_29 = true;
							}
							else
							{
								bLocal_29 = false;
							}
							if (PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35) != 0)
							{
								if (!__LIB_0__::func_163(Global_35, -208384378))
								{
									TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), Global_36, 1f, 0);
									bLocal_29 = true;
								}
								else
								{
									bLocal_29 = true;
								}
							}
							else
							{
								bLocal_29 = false;
							}
							if (bLocal_29 == 0)
							{
								__LIB_1__::func_309(-1, 0, 0, 0, 0);
								func_20(0);
								if (iLocal_62 != 13)
								{
									__LIB_1__::func_432(200, 0, 0, 1, 1);
									__LIB_2__::func_190(Local_73, (200 + MISC::GET_RANDOM_INT_IN_RANGE(5, 20)));
								}
								__LIB_0__::func_37(&(Local_73.f_11));
								__LIB_1__::func_748(&(Local_73.f_23), 1, 1);
								__LIB_2__::func_480(&uLocal_263, 1, 1, 1, 0);
								MISC::_0xE98D55C5983F2509(Local_73);
								PED::SET_PED_CONFIG_FLAG(Local_73, 301, true);
								iLocal_67 = 1;
							}
						}
					}
					else
					{
						__LIB_1__::func_382(Local_73.f_23, 0, 1);
					}
				}
			}
			else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_73, true, false), Global_36) >= 5f)
			{
				__LIB_0__::func_37(&(Local_73.f_11));
				__LIB_1__::func_748(&(Local_73.f_23), 1, 1);
				if (!bLocal_14)
				{
					__LIB_1__::func_104(&(Local_73.f_29), Local_73.f_140, 0, -1, 0, 0);
					bLocal_14 = true;
				}
				iLocal_68 = 6;
			}
			break;
		case 6:
			if (func_79())
			{
				iLocal_68 = 4;
			}
			break;
	}
}

void func_15()
{
	switch (iLocal_69)
	{
		case 0:
			if (func_117())
			{
				if (iLocal_62 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_73.f_159))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_73.f_159, true, false);
						OBJECT::DELETE_OBJECT(&(Local_73.f_159));
					}
				}
				func_67();
				if (iLocal_62 == 13)
				{
					__LIB_1__::func_532(Global_1347702[128 /*49*/].f_15, 1);
				}
				func_20(1);
				func_21(1);
				iLocal_69 = 1;
			}
			break;
		case 1:
			iLocal_65 = 2;
			break;
	}
}

void func_16()
{
	if (bLocal_22)
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "COACHROB");
		bLocal_22 = false;
	}
	if (PED::GET_PED_CONFIG_FLAG(Local_73, 413, true))
	{
		PED::SET_PED_CONFIG_FLAG(Local_73, 413, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(Local_73, 330, true))
	{
		PED::SET_PED_CONFIG_FLAG(Local_73, 330, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(Local_73, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(Local_73, 301, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_73.f_159))
	{
		OBJECT::DELETE_OBJECT(&(Local_73.f_159));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_73.f_160))
	{
		OBJECT::DELETE_OBJECT(&(Local_73.f_160));
	}
	if (PED::_0x91A5F9CBEBB9D936(Local_73.f_155))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_73.f_155, false);
	}
	__LIB_1__::func_748(&(Local_73.f_23), 1, 1);
	__LIB_1__::func_748(&(Local_73.f_24), 1, 1);
	iLocal_65 = 3;
}

void func_17()
{
	if (__LIB_0__::func_266(Local_73, Global_36, 5f, 1, 1) || ENTITY::IS_ENTITY_ON_SCREEN(Local_73))
	{
		return;
	}
	iLocal_65 = 4;
}

void func_20(bool bParam0)
{
	switch (iLocal_61)
	{
		case 0:
			__LIB_4__::func_932(65, bParam0);
			break;
		case 1:
			__LIB_4__::func_932(30, bParam0);
			__LIB_4__::func_932(31, bParam0);
			break;
	}
}

void func_21(bool bParam0)
{
	int iVar0;
	switch (iLocal_61)
	{
		case 0:
			iVar0 = 65;
			break;
		case 1:
			iVar0 = 30;
			break;
	}
	if (bParam0)
	{
		__LIB_1__::func_936(iVar0, 16777216);
	}
	else
	{
		__LIB_1__::func_937(iVar0, 16777216);
	}
}

void func_25(bool bParam0)
{
	switch (iLocal_61)
	{
		case 0:
			__LIB_3__::func_820(65, bParam0);
			break;
		case 1:
			__LIB_3__::func_820(30, bParam0);
			break;
	}
}

Vector3 func_28(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1226.71f, -1295.08f, 75.9f;
		case 0:
			if (iLocal_62 == 0)
			{
				return -1763.9f, -385.1f, 156.74f;
			}
			else
			{
				return -1763.73f, -385.23f, 156.74f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_29()
{
	iLocal_63 = __LIB_16__::func_309(iLocal_62);
	iLocal_64 = __LIB_16__::func_310(iLocal_62);
}

int func_37()
{
	switch (iLocal_62)
	{
		case 4:
			return joaat("UI_COACH_AMB1");
		case 5:
			return joaat("UI_COACH_AMB2");
		case 6:
			return joaat("UI_COACH_AMB3");
		case 12:
			return joaat("UI_COACH_AMB4");
		case 13:
			return joaat("UI_COACH_AMB5");
		case 0:
			return joaat("UI_COACH_AMB7");
		case 1:
			return joaat("UI_COACH_AMB8");
		case 2:
			return joaat("UI_COACH_AMB9");
		default:
			break;
	}
	return joaat("UI_COACH_AMB1");
}

bool func_60()
{
	if (!__LIB_0__::func_86(Local_73.f_2))
	{
		if (BUILTIN::VDIST2(Local_73.f_2, Global_36) > (10000f + (10000f / 20f)))
		{
			return true;
		}
	}
	return false;
}

bool func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_6__::func_842(iParam0))
	{
		iVar0 = 476;
	}
	else
	{
		iVar0 = 72;
	}
	iVar1 = __LIB_1__::func_334(iVar0);
	if (__LIB_0__::func_272(iVar1, 0))
	{
		if (PED::_GET_PED_BLACKBOARD_BOOL(iVar1, __LIB_10__::func_647()) || __LIB_9__::func_723(iVar1, 0, &uLocal_32, &uLocal_60, 0, 0))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(iVar1, __LIB_10__::func_647(), true, -1);
			return true;
		}
	}
	return false;
}

void func_67()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_73.f_159))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(Local_73.f_159))
		{
			ENTITY::DETACH_ENTITY(Local_73.f_159, true, true);
		}
		OBJECT::DELETE_OBJECT(&(Local_73.f_159));
	}
	if (bLocal_15)
	{
		return;
	}
	if (iLocal_61 == 0)
	{
		__LIB_6__::func_841(32768);
	}
	else
	{
		func_189(32768);
	}
	Global_40.f_9146.f_110 = __LIB_0__::func_23();
	__LIB_1__::func_446(&(Global_40.f_9146.f_110), 0, 0, 8, 0, 0, 0, 0);
	if (iLocal_62 != 13)
	{
		func_192(iLocal_62);
		__LIB_6__::func_811(iLocal_62, iLocal_63, iLocal_64);
	}
	func_194();
	func_195(__LIB_13__::func_361(iLocal_62), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	Global_40.f_9146.f_94[iLocal_62] = 0;
	if (!__LIB_6__::func_843(262144))
	{
		__LIB_6__::func_841(262144);
	}
	__LIB_0__::func_45("CR_H_NOTE", 10000, 0, 0, 0, 1);
	if (iLocal_62 == 2)
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_THROWN_DYNAMITE"), 0, false))
		{
			__LIB_1__::func_766(Global_35, joaat("WEAPON_THROWN_DYNAMITE"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 3, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::_ADD_AMMO_TO_PED(Global_35, joaat("WEAPON_THROWN_DYNAMITE"), 3, 752097756);
		}
	}
	bLocal_15 = true;
}

void func_68()
{
	Local_73.f_25 = 0;
	if (__LIB_0__::func_181())
	{
		__LIB_0__::func_928(&(Local_73.f_29), Global_35, "JOHN", 0);
	}
	else
	{
		__LIB_0__::func_928(&(Local_73.f_29), Global_35, "ARTHUR", 0);
	}
	switch (iLocal_61)
	{
		case 0:
			Local_73.f_2 = { func_28(iLocal_61) };
			Local_73.f_5 = 55.15f;
			Local_73.f_6 = joaat("U_M_M_STRFREIGHTSTATIONOWNER_01");
			Local_73.f_1 = 476;
			Local_73.f_7 = "STR_Freight_Clerk";
			break;
		case 1:
			Local_73.f_2 = { func_28(iLocal_61) };
			Local_73.f_5 = 46.3f;
			Local_73.f_6 = joaat("U_M_M_RHDTRAINSTATIONWORKER_01");
			Local_73.f_1 = 72;
			Local_73.f_7 = "RHO_STATWRK";
			Local_73.f_156 = { 1223.57f, -1295.27f, 75.93f };
			break;
	}
	func_201();
}

bool func_69()
{
	if (bLocal_28)
	{
		return true;
	}
	if (__LIB_0__::func_71(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		return false;
	}
	if (BUILTIN::VDIST(Global_36, func_28(iLocal_61)) > 20f)
	{
		return false;
	}
	bLocal_28 = true;
	return true;
}

char* func_74()
{
	return "amb_work@world_human_shopkeeper@MALE_A@base";
}

char* func_75()
{
	return "amb_work@world_human_shopkeeper@MALE_B@base";
}

bool func_76()
{
	int iVar0;
	iVar0 = 1;
	PED::_0xED9582B3DA8F02B4(iVar0);
	if (PED::_0x313778EDCA9158E2() >= iVar0)
	{
		return true;
	}
	return false;
}

bool func_77(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	if (Local_73.f_28)
	{
		return true;
	}
	if (__LIB_0__::func_29(Local_73.f_1))
	{
		if (bParam0)
		{
			if (!__LIB_0__::func_122(Local_73.f_1))
			{
				__LIB_1__::func_926(Local_73.f_1);
			}
			Local_73 = __LIB_2__::func_965(Local_73.f_1, 0, 0, 0, 1, 1);
		}
		else
		{
			Local_73 = __LIB_1__::func_334(Local_73.f_1);
		}
		if (!__LIB_0__::func_272(Local_73, 0))
		{
			return false;
		}
		if (bParam1)
		{
			if ((bParam2 && iLocal_62 == 0) && !__LIB_6__::func_843(4096))
			{
				Local_73.f_2 = (Local_73.f_2 + 0.055f);
				Local_73.f_2.f_1 = (Local_73.f_2.f_1 + 0.015f);
				Local_73.f_2.f_2 = (Local_73.f_2.f_2 - 0.01f);
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_73, Local_73.f_2, Local_73.f_5, true, false, true);
			if (bParam2)
			{
				if (iLocal_62 == 0 && !__LIB_6__::func_843(4096))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_73, true);
				}
				PED::_0xF1C03A5352243A30(Local_73);
				TASK::TASK_PLAY_ANIM(Local_73, func_74(), "base", 8f, -8f, -1, 5, 0f, false, 0, false, 0, false);
				TASK::TASK_LOOK_AT_ENTITY(Local_73, Global_35, -1, 0, 51, 0);
				bLocal_26 = true;
			}
			else
			{
				TASK::TASK_START_SCENARIO_AT_POSITION(Local_73, joaat("WORLD_HUMAN_SHOPKEEPER"), Local_73.f_2, Local_73.f_5, 0, false, true, "WORLD_HUMAN_SHOPKEEPER_MALE_B", -1f, false);
				bLocal_27 = true;
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_73, true);
		}
		PED::SET_PED_CONFIG_FLAG(Local_73, 130, true);
		__LIB_0__::func_928(&(Local_73.f_29), Local_73, Local_73.f_7, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_73, joaat("REL_PLAYER_ALLY"));
		if ((iLocal_61 == 1 || iLocal_62 == 1) || iLocal_62 == 2)
		{
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(Local_73, &uVar0));
		}
		if (bParam0 || bParam1)
		{
			func_21(1);
		}
		Local_73.f_28 = 1;
		PED::SET_PED_CONFIG_FLAG(Local_73, 413, true);
		PED::SET_PED_CONFIG_FLAG(Local_73, 330, true);
		return true;
	}
	return false;
}

bool func_78()
{
	switch (iLocal_61)
	{
		case 0:
			if (iLocal_62 == 3)
			{
				return true;
			}
			break;
		case 1:
			if (iLocal_62 == 7)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_79()
{
	if (iLocal_61 == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_73))
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, -1768.272f, -381.6094f, 156.2363f, -1764.41f, -384.2305f, 159.2827f, 2.5f, false, true, 0) && PED::IS_PED_FACING_PED(Local_73, Global_35, 70f)) && PED::IS_PED_ON_FOOT(Global_35))
			{
				return true;
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_73))
	{
		if ((BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_73, true, false), Global_36) < 4.5f && PED::IS_PED_FACING_PED(Local_73, Global_35, 35f)) && PED::IS_PED_ON_FOOT(Global_35))
		{
			return true;
		}
	}
	return false;
}

bool func_82()
{
	if (!__LIB_0__::func_923(Global_40.f_9146.f_110) || __LIB_1__::func_426(Global_40.f_9146.f_110, 1))
	{
		return true;
	}
	return false;
}

bool func_85()
{
	if (!__LIB_0__::func_272(Local_73, 0))
	{
		return false;
	}
	if (!func_218())
	{
		return false;
	}
	if (iLocal_62 != 13)
	{
		if (__LIB_0__::func_923(Global_40.f_9146.f_110) && !__LIB_1__::func_426(Global_40.f_9146.f_110, 1))
		{
			return false;
		}
	}
	return true;
}

void func_87()
{
	if (bLocal_26)
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_73, func_74(), "base", 1))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_73, Local_73.f_2, Local_73.f_5, true, false, true);
			PED::_0xF1C03A5352243A30(Local_73);
			TASK::TASK_PLAY_ANIM(Local_73, func_74(), "base", 8f, -8f, -1, 5, 0f, false, 0, false, 0, false);
			TASK::TASK_LOOK_AT_ENTITY(Local_73, Global_35, -1, 0, 51, 0);
			PED::_0x2208438012482A1A(Local_73, false, false);
		}
	}
}

void func_88()
{
	if (bLocal_27)
	{
		if (!__LIB_0__::func_163(Local_73, -1098463898))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_73, Local_73.f_2, Local_73.f_5, true, false, true);
			TASK::TASK_START_SCENARIO_AT_POSITION(Local_73, joaat("WORLD_HUMAN_SHOPKEEPER"), Local_73.f_2, Local_73.f_5, 0, false, true, "WORLD_HUMAN_SHOPKEEPER_MALE_A", -1f, false);
			TASK::TASK_LOOK_AT_ENTITY(Local_73, Global_35, -1, 0, 51, 0);
			PED::_0x2208438012482A1A(Local_73, false, false);
		}
	}
}

bool func_89()
{
	switch (iLocal_62)
	{
		case 0:
			if (!__LIB_6__::func_843(4096))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_90()
{
	vector3 vVar0[24];
	float fVar3;
	bool bVar4;
	char* sVar5;
	var uVar6;
	sVar5 = "SCRIPT_PROC@ROBBERIES@COACH@STRAWBERRY";
	if (__LIB_0__::func_94(Local_73, Global_36, 1) < 5f)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_EMOTE_WHEEL"), false);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	switch (iLocal_72)
	{
		case 0:
			fVar3 = func_9();
			if (!__LIB_0__::func_139(Local_73.f_23))
			{
				STREAMING::REQUEST_ANIM_DICT(sVar5);
				Local_73.f_23 = __LIB_2__::func_403("CR_C_TALK", joaat("INPUT_INTERACT_LOCKON_POS"), Local_73, 1, 0, 0, 0, 0, fVar3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(Local_73.f_23) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_73), 0);
			}
			else if ((!__LIB_2__::func_364(Local_73, 0, 0, 0) && bLocal_19) || __LIB_0__::func_94(Local_73, Global_36, 1) > fVar3)
			{
				__LIB_1__::func_382(Local_73.f_23, 0, 1);
			}
			else
			{
				__LIB_1__::func_382(Local_73.f_23, 1, 1);
				if (__LIB_1__::func_732(Local_73.f_23, 1) && STREAMING::HAS_ANIM_DICT_LOADED(sVar5))
				{
					bVar4 = true;
				}
			}
			if (bVar4)
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_73, -1, 0, 51, 0);
				if (!bLocal_22)
				{
					PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_73, func_221(), 0f, 0f, 0f, 0, "COACHROB");
					bLocal_22 = true;
				}
				__LIB_1__::func_748(&(Local_73.f_23), 1, 1);
				PED::SET_PED_CONFIG_FLAG(Local_73, 301, true);
				TASK::TASK_LOOK_AT_ENTITY(Local_73, Global_35, -1, 0, 51, 0);
				PED::_0xF1C03A5352243A30(Local_73);
				TASK::TASK_PLAY_ANIM(Local_73, sVar5, "action_pt01_hector", 2f, -4f, -1, 57346, 0f, false, 0, false, 0, false);
				func_20(0);
				iLocal_72 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_75(&(Local_73.f_20)))
			{
				__LIB_1__::func_148(&(Local_73.f_20));
			}
			else if (__LIB_0__::func_265(&(Local_73.f_20)) > 0f)
			{
				if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "CRF1SJ", 24);
				}
				else
				{
					StringCopy(&cVar0, "CRF1S", 24);
				}
				if (__LIB_1__::func_104(&(Local_73.f_29), cVar0, 0, -1, 0, 0))
				{
					__LIB_0__::func_37(&(Local_73.f_20));
					iLocal_72 = 2;
				}
			}
			break;
		case 2:
			if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Local_73, sVar5, "action_pt01_hector") > 0.99f)
			{
				if (bLocal_22)
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "COACHROB");
					bLocal_22 = false;
				}
				PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(Local_73, &uVar6));
				TASK::TASK_PLAY_ANIM(Local_73, func_75(), "base", 4f, -4f, -1, 8193, 0f, false, 0, false, 0, false);
				TASK::TASK_LOOK_AT_ENTITY(Local_73, Global_35, -1, 0, 51, 0);
				PED::_0x2208438012482A1A(Local_73, true, false);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_6__::func_841(4096);
				iLocal_72 = 6;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_94(float fParam0)
{
	if (iLocal_18 >= 6)
	{
		return;
	}
	if (!func_79())
	{
		return;
	}
	if (bLocal_14)
	{
		return;
	}
	if (func_106())
	{
		return;
	}
	if (!__LIB_0__::func_75(&(Local_73.f_11)))
	{
		__LIB_1__::func_148(&(Local_73.f_11));
		return;
	}
	else if (__LIB_0__::func_265(&(Local_73.f_11)) < fParam0)
	{
		return;
	}
	__LIB_1__::func_104(&(Local_73.f_29), Local_73.f_149, 0, -1, 0, 0);
	__LIB_0__::func_37(&(Local_73.f_11));
	iLocal_18++;
}

void func_101()
{
	if (iLocal_62 != 0)
	{
		return;
	}
	if (bLocal_21)
	{
		return;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_73, true, false), Global_36) >= 2f && !PED::IS_PED_FACING_PED(Global_35, Local_73, 70f))
	{
		if (!bLocal_14)
		{
			__LIB_1__::func_104(&(Local_73.f_29), Local_73.f_140, 0, -1, 0, 0);
			bLocal_14 = true;
		}
		PED::_0x6D07B371E9439019(Local_73);
		PED::_0xD65FDC686A031C83(Local_73, joaat("CRHEC_LINE02"), 3f);
		bLocal_21 = true;
	}
}

bool func_106()
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[31 /*49*/].f_42, false))
	{
		return false;
	}
	if (((__LIB_5__::func_259("RBWCG_ALD_METJ") || __LIB_5__::func_259("RBWCG_ALD_NOTJ")) || __LIB_5__::func_259("RBWCG_ALD_META")) || __LIB_5__::func_259("RBWCG_ALD_NOTA"))
	{
		return true;
	}
	return false;
}

bool func_117()
{
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	switch (iLocal_70)
	{
		case 0:
			HUD::_HIDE_HUD_COMPONENT(724769646);
			TASK::TASK_CLEAR_LOOK_AT(Global_35);
			PED::_0xAAC0EE3B4999ABB5(Global_35, 0);
			func_242();
			iLocal_70 = 1;
			break;
		case 1:
			func_242();
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_73.f_162))
			{
				if (bLocal_20)
				{
					__LIB_1__::func_104(&(Local_73.f_29), Local_73.f_152, 0, -1, 0, 0);
				}
				iLocal_70 = 6;
			}
			break;
		case 6:
			func_242();
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_73.f_162))
			{
				if (bLocal_22)
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "COACHROB");
					bLocal_22 = false;
				}
				__LIB_1__::func_390("CR_DG_P_ACP_L", 1);
				func_67();
				if (iLocal_62 == 13)
				{
					__LIB_1__::func_532(Global_1347702[128 /*49*/].f_15, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_73.f_159))
				{
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_73.f_159));
				}
				HUD::_DISPLAY_HUD_COMPONENT(724769646);
				func_20(1);
				func_21(1);
				iLocal_70 = 8;
			}
			break;
		case 8:
			func_242();
			if (iLocal_62 == 0)
			{
				if (!__LIB_0__::func_266(Local_73, Global_36, 5f, 1, 1))
				{
					if (__LIB_5__::func_259(&(Local_73.f_134)))
					{
						AUDIO::STOP_SCRIPTED_CONVERSATION(&(Local_73.f_134), true, false);
					}
					else if (__LIB_5__::func_259(&(Local_73.f_137)))
					{
						AUDIO::STOP_SCRIPTED_CONVERSATION(&(Local_73.f_137), true, false);
					}
				}
				iLocal_23 = joaat("WORLD_HUMAN_SHOPKEEPER_MALE_B");
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_73.f_162, false))
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_73, Local_73.f_162))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_73.f_162) > 0.98f)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_73, func_75(), "base", 1))
							{
								TASK::TASK_PLAY_ANIM(Local_73, func_75(), "base", 2f, -2f, -1, 5, 0f, false, 0, false, 0, false);
							}
						}
					}
				}
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_73.f_162, false) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_73.f_162))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_73.f_160))
				{
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_73.f_160));
				}
				if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_73.f_168))
				{
					Local_73.f_168 = func_244(joaat("WORLD_HUMAN_SHOPKEEPER"), ENTITY::GET_ENTITY_COORDS(Local_73, true, false), ENTITY::GET_ENTITY_HEADING(Local_73), 0, 0, 1);
				}
				if (iLocal_23 == joaat("WORLD_HUMAN_SHOPKEEPER_MALE_A"))
				{
					TASK::_TASK_START_SCENARIO_IN_PLACE_2(Local_73, Local_73.f_168, "WORLD_HUMAN_SHOPKEEPER_MALE_A", 0, false, -1f, false);
				}
				else if (iLocal_23 == joaat("WORLD_HUMAN_SHOPKEEPER_MALE_B"))
				{
					TASK::_TASK_START_SCENARIO_IN_PLACE_2(Local_73, Local_73.f_168, "WORLD_HUMAN_SHOPKEEPER_MALE_B", 0, false, -1f, false);
				}
				else if (iLocal_23 == joaat("WORLD_HUMAN_SHOPKEEPER_MALE_C"))
				{
					TASK::_TASK_START_SCENARIO_IN_PLACE_2(Local_73, Local_73.f_168, "WORLD_HUMAN_SHOPKEEPER_MALE_C", 0, false, -1f, false);
				}
				else
				{
					TASK::_TASK_START_SCENARIO_IN_PLACE_2(Local_73, Local_73.f_168, 0, 0, false, -1f, false);
				}
				PED::_0x2208438012482A1A(Local_73, false, false);
				PED::SET_PED_KEEP_TASK(Local_73, true);
				func_245();
				return true;
			}
			break;
	}
	return false;
}

void func_189(int iParam0)
{
	Global_40.f_9146.f_126 = (Global_40.f_9146.f_126 - (Global_40.f_9146.f_126 && iParam0));
}

void func_192(int iParam0)
{
	if (!__LIB_6__::func_706(iParam0))
	{
		return;
	}
	Global_40.f_9146.f_49[iParam0]++;
}

void func_194()
{
	int iVar0[7];
	int iVar8;
	iVar0[0] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_01");
	iVar0[1] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_02");
	iVar0[2] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_03");
	iVar0[3] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_04");
	iVar0[4] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_07");
	iVar0[5] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_08");
	iVar0[6] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_09");
	iVar8 = 0;
	while (iVar8 < 7)
	{
		if (__LIB_1__::func_707(iVar0[iVar8], 1, 0))
		{
			func_324(iVar0[iVar8], 1, 1, -142743235, 0);
		}
		iVar8++;
	}
}

int func_195(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_195(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_19__::func_439(28);
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
			__LIB_4__::func_129(iParam0);
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
			__LIB_1__::func_847(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_4__::func_130(iParam0, 0, 0, 0);
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
						func_195(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_195(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_195(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_195(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_195(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_195(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_195(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_19__::func_439(24);
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
					func_195(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_195(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_19__::func_562(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_19__::func_639(iParam0);
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
				func_195(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
	return 1;
}

void func_201()
{
	int iVar0;
	switch (iLocal_62)
	{
		case 0:
			Local_73.f_127 = "CRSTRA";
			StringCopy(&(Local_73.f_128), "CRG1S", 24);
			StringCopy(&(Local_73.f_131), "CRF1S", 24);
			StringCopy(&(Local_73.f_140), "CRB1SB", 24);
			StringCopy(&(Local_73.f_143), "CRT1S", 24);
			StringCopy(&(Local_73.f_146), "CRT2S", 24);
			StringCopy(&(Local_73.f_149), "CRSTL", 24);
			break;
		case 1:
		case 2:
		case 3:
			Local_73.f_127 = "CRSTRA";
			StringCopy(&(Local_73.f_128), "CRG1S", 24);
			StringCopy(&(Local_73.f_131), "CRF1S", 24);
			StringCopy(&(Local_73.f_140), "CRB1S", 24);
			StringCopy(&(Local_73.f_143), "CRT1S", 24);
			StringCopy(&(Local_73.f_146), "CRT2S", 24);
			StringCopy(&(Local_73.f_149), "CRSTL", 24);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			Local_73.f_127 = "CRRHOA";
			StringCopy(&(Local_73.f_128), "CRG1R", 24);
			if (__LIB_0__::func_181())
			{
				StringCopy(&(Local_73.f_131), "CRF1R", 24);
			}
			else
			{
				StringCopy(&(Local_73.f_131), "CRRH1_GREET_A", 24);
			}
			StringCopy(&(Local_73.f_140), "CRB1R", 24);
			StringCopy(&(Local_73.f_143), "CRT1R", 24);
			StringCopy(&(Local_73.f_146), "CRT2R", 24);
			StringCopy(&(Local_73.f_149), "CRRHL", 24);
			break;
		case 13:
			if (iLocal_61 == 0)
			{
				Local_73.f_127 = "CRSTRA";
				StringCopy(&(Local_73.f_128), "CRG1S", 24);
				StringCopy(&(Local_73.f_131), "CRF1S", 24);
				StringCopy(&(Local_73.f_140), "CRB1S", 24);
				StringCopy(&(Local_73.f_143), "CRT1S", 24);
				StringCopy(&(Local_73.f_146), "CRT2S", 24);
				StringCopy(&(Local_73.f_149), "CRSTL", 24);
			}
			else
			{
				Local_73.f_127 = "CRRHOA";
				StringCopy(&(Local_73.f_128), "CRRH1_GREET_H", 24);
				if (__LIB_0__::func_181())
				{
					StringCopy(&(Local_73.f_131), "CRF1R", 24);
				}
				else
				{
					StringCopy(&(Local_73.f_131), "CRG1R", 24);
				}
				StringCopy(&(Local_73.f_140), "CRB1R", 24);
				StringCopy(&(Local_73.f_143), "CRT1R", 24);
				StringCopy(&(Local_73.f_146), "CRT2R", 24);
				StringCopy(&(Local_73.f_149), "CRRHL", 24);
			}
			break;
	}
	switch (iLocal_62)
	{
		case 0:
			StringCopy(&(Local_73.f_134), "CRXS1", 24);
			StringCopy(&(Local_73.f_137), "CRXS1B", 24);
			if (__LIB_6__::func_843(2048))
			{
				StringCopy(&(Local_73.f_128), "CRL0S", 24);
				func_189(2048);
			}
			break;
		case 1:
			StringCopy(&(Local_73.f_134), "CRXS2", 24);
			if (__LIB_6__::func_843(2048))
			{
				StringCopy(&(Local_73.f_128), "CRL1S", 24);
				func_189(2048);
			}
			else
			{
				StringCopy(&(Local_73.f_128), "CRG1S", 24);
			}
			break;
		case 2:
			StringCopy(&(Local_73.f_134), "CRXS3", 24);
			if (__LIB_6__::func_843(2048))
			{
				StringCopy(&(Local_73.f_128), "CRL2S", 24);
				func_189(2048);
			}
			else
			{
				StringCopy(&(Local_73.f_128), "CRG2S", 24);
			}
			break;
		case 4:
			if (!__LIB_0__::func_181())
			{
				StringCopy(&(Local_73.f_152), "CRRIR", 24);
			}
			StringCopy(&(Local_73.f_134), "CRRH1_ALD_STL", 24);
			if (__LIB_6__::func_843(1024))
			{
				StringCopy(&(Local_73.f_128), "CRL0R", 24);
				func_189(1024);
			}
			else
			{
				StringCopy(&(Local_73.f_128), "CRRH1_GREET_A", 24);
			}
			break;
		case 5:
			StringCopy(&(Local_73.f_134), "CRRH1_ALD_VIP", 24);
			if (__LIB_6__::func_843(1024))
			{
				StringCopy(&(Local_73.f_128), "CRL1R", 24);
				func_189(1024);
			}
			else if (__LIB_0__::func_181() && !bLocal_24)
			{
				StringCopy(&(Local_73.f_128), "CRRH1_GREET_CJ", 24);
			}
			else
			{
				StringCopy(&(Local_73.f_128), "CRRH1_GREET_B", 24);
			}
			break;
		case 6:
			StringCopy(&(Local_73.f_134), "CRRH1_ALD_CNV", 24);
			if (__LIB_6__::func_843(1024))
			{
				StringCopy(&(Local_73.f_128), "CRL2R", 24);
				func_189(1024);
			}
			else
			{
				StringCopy(&(Local_73.f_128), "CRRH1_GREET_F", 24);
			}
			break;
		case 13:
			if (iLocal_61 == 0)
			{
				StringCopy(&(Local_73.f_134), "CRSRL", 24);
			}
			else
			{
				StringCopy(&(Local_73.f_134), "CRRH1_RTL_ALD", 24);
			}
			break;
	}
	if (__LIB_0__::func_181())
	{
		if (iLocal_61 == 1 && !__LIB_6__::func_843(65536))
		{
			bLocal_24 = true;
		}
		if (iLocal_61 == 0 && !__LIB_6__::func_843(131072))
		{
			bLocal_25 = true;
		}
		StringConCat(&(Local_73.f_131), "J", 24);
		StringConCat(&(Local_73.f_134), "J", 24);
		StringConCat(&(Local_73.f_137), "J", 24);
		StringConCat(&(Local_73.f_149), "J", 24);
		if (!__LIB_6__::func_843(128))
		{
			__LIB_6__::func_841(128);
		}
		if (bLocal_24 || bLocal_25)
		{
			iVar0 = 0;
			while (iVar0 < 14)
			{
				Global_40.f_9146.f_49[iVar0] = 0;
				iVar0++;
			}
			func_189(2);
			func_189(4);
			func_189(8);
			func_189(16);
			switch (iLocal_61)
			{
				case 1:
					StringCopy(&(Local_73.f_131), "CRG3RJ", 24);
					break;
				case 0:
					StringCopy(&(Local_73.f_131), "CRG3SJ", 24);
					break;
			}
			bLocal_17 = true;
		}
	}
	else if (iLocal_61 == 1)
	{
		StringConCat(&(Local_73.f_134), "A", 24);
	}
}

bool func_218()
{
	if (ENTITY::IS_ENTITY_AT_COORD(Local_73, Local_73.f_2, 2f, 2f, 5f, false, true, 0) && __LIB_2__::func_955(Local_73, Local_73.f_5, 60f))
	{
		return true;
	}
	return false;
}

char* func_221()
{
	return "COACHROB_HANDOVER";
}

void func_242()
{
	char* sVar0;
	char* sVar1;
	vector3 vVar2;
	int iVar5;
	char* sVar6;
	sVar0 = func_423();
	sVar1 = func_424();
	vVar2 = { 1.23889f, 0.326256f, 0f };
	switch (iLocal_71)
	{
		case 0:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				func_425();
				Local_73.f_162 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, 0, false, true);
				iLocal_71 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_73.f_162))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_73.f_162);
				iLocal_71 = 2;
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_73.f_162, true, false) && func_426())
			{
				if (iLocal_61 != 1 && iLocal_62 != 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_73.f_162, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_73.f_2, Local_73.f_5, vVar2), 0f, 0f, (Local_73.f_5 - 180f), 2);
				}
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_73.f_162, sVar1);
				iLocal_71 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_73.f_162, sVar1))
			{
				if (iLocal_62 == 0)
				{
					if (__LIB_0__::func_181())
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_73.f_162, "b_PlayerArthur", false, false);
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_73.f_162, "b_PlayerArthur", true, false);
					}
				}
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_73.f_162, sVar1, true);
				func_427();
				if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar5, true, 0, false) && iVar5 != joaat("WEAPON_UNARMED"))
				{
					WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
				}
				if (iLocal_62 == 0)
				{
					if (__LIB_0__::func_181())
					{
						sVar6 = "JOHN";
					}
					else
					{
						sVar6 = "ARTHUR";
					}
				}
				else
				{
					sVar6 = "player";
				}
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_73.f_162, sVar6, sVar1, 1069379748 /* Float: 1.48f */, 1, 0, 20000, -1082130432 /* Float: -1f */);
				iLocal_71 = 4;
			}
			break;
		case 4:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_73.f_162, false))
			{
				iLocal_71 = 5;
			}
			break;
		case 5:
			if (iLocal_62 == 0)
			{
				if (__LIB_0__::func_181())
				{
					sVar6 = "JOHN";
				}
				else
				{
					sVar6 = "ARTHUR";
				}
			}
			else
			{
				sVar6 = "player";
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_73.f_162, false))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2049568183) || ANIMSCENE::_0xB89FCFF19DAFFF28(Local_73.f_162, sVar6))
				{
					if (func_8())
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(Local_73.f_162);
					}
				}
			}
			break;
	}
}

var func_244(int iParam0, vector3 vParam1, int iParam4, int iParam5, var uParam6, var uParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, iParam4, iParam5, uParam6, uParam7);
}

void func_245()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_NOTE01X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_FOLDEDBILLSXSMALL01X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_INV_MONEYCLIP01X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_PEN01X"));
}

int func_324(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_324(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_6__::func_701(iParam0, iParam1);
	return 1;
}

char* func_423()
{
	if (iLocal_62 == 0)
	{
		return "script@proc@robberies@coach@strawberry@hector";
	}
	if (iLocal_62 == 1 || iLocal_62 == 2)
	{
		switch (iLocal_23)
		{
			case joaat("WORLD_HUMAN_SHOPKEEPER_MALE_A"):
				return "scenario@proc@robberies@coach@strawberry@scenario_a";
			case joaat("WORLD_HUMAN_SHOPKEEPER_MALE_B"):
				return "scenario@proc@robberies@coach@strawberry@scenario_b";
			case joaat("WORLD_HUMAN_SHOPKEEPER_MALE_C"):
				return "scenario@proc@robberies@coach@strawberry@scenario_c";
			default:
				break;
		}
	}
	switch (iLocal_23)
	{
		case joaat("WORLD_HUMAN_SHOPKEEPER_MALE_A"):
			return "scenario@proc@robberies@coach@rhodes@scenario_a";
		case joaat("WORLD_HUMAN_SHOPKEEPER_MALE_B"):
			return "scenario@proc@robberies@coach@rhodes@scenario_b";
		case joaat("WORLD_HUMAN_SHOPKEEPER_MALE_C"):
			return "scenario@proc@robberies@coach@rhodes@scenario_c";
		default:
			break;
	}
	if (iLocal_62 == 1 || iLocal_62 == 2)
	{
		return "scenario@proc@robberies@coach@strawberry@scenario_a";
	}
	return "scenario@proc@robberies@coach@rhodes@scenario_a";
}

char* func_424()
{
	if (iLocal_62 == 13)
	{
		return "PBL_ROB_COACH";
	}
	if (iLocal_62 == 0)
	{
		return "pbl_action";
	}
	switch (iLocal_63)
	{
		case 3:
			return "PBL_STEAL_COACH";
		case 1:
			return "PBL_ROB_VIP";
		case 2:
			return "PBL_ROB_CONVOY";
		case 0:
			return "PBL_ROB_COACH";
		default:
			break;
	}
	return "";
}

void func_425()
{
	STREAMING::REQUEST_MODEL(joaat("P_CS_NOTE01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_FOLDEDBILLSXSMALL01X"), false);
	STREAMING::REQUEST_MODEL(joaat("S_INV_MONEYCLIP01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_PEN01X"), false);
}

bool func_426()
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_NOTE01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_FOLDEDBILLSXSMALL01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_INV_MONEYCLIP01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_PEN01X")))
	{
		return false;
	}
	return true;
}

void func_427()
{
	if (iLocal_62 == 0)
	{
		if (__LIB_0__::func_272(Local_73, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_73.f_162, "Hector", Local_73, 0);
		}
		if (__LIB_0__::func_272(Global_35, 0))
		{
			if (__LIB_0__::func_181())
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_73.f_162, "john", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_73.f_162, "arthur", Global_35, 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_73.f_159))
		{
			Local_73.f_159 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_CS_NOTE01X"), ENTITY::GET_ENTITY_COORDS(Local_73, true, false), true, true, false, true);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_73.f_162, "note", Local_73.f_159, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(Local_73.f_160))
		{
			Local_73.f_160 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_FOLDEDBILLSXSMALL01X"), ENTITY::GET_ENTITY_COORDS(Local_73, true, false), true, true, false, true);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_73.f_162, "MONEY", Local_73.f_160, 1);
		return;
	}
	if (__LIB_0__::func_272(Local_73, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_73.f_162, "Alden", Local_73, 0);
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_73.f_162, "player", Global_35, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_73.f_159))
	{
		Local_73.f_159 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_CS_NOTE01X"), ENTITY::GET_ENTITY_COORDS(Local_73, true, false), true, true, false, true);
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_73.f_162, "routes", Local_73.f_159, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_73.f_160))
	{
		Local_73.f_160 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("S_INV_MONEYCLIP01X"), ENTITY::GET_ENTITY_COORDS(Local_73, true, false), true, true, false, true);
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_73.f_162, "money", Local_73.f_160, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_73.f_161))
	{
		Local_73.f_161 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_PEN01X"), ENTITY::GET_ENTITY_COORDS(Local_73, true, false), true, true, false, true);
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_73.f_162, "PEN", Local_73.f_161, 1);
}

