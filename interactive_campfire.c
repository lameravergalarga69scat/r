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
	char* sLocal_15 = NULL;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion
void __EntryFunction__()
{
	struct<253> Var0;
	bool bVar255;
	float fVar256;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "props_misc@campfires@5_logs";
	sLocal_15 = "Script_PropCampfire";
	Var0 = 6;
	Var0.f_7 = 6;
	Var0.f_26.f_29 = 1;
	Var0.f_57 = 7;
	Var0.f_57.f_21 = -1;
	Var0.f_57.f_22 = 1;
	Var0.f_57.f_23 = 1;
	Var0.f_57.f_36 = 1;
	Var0.f_57.f_37 = -1;
	Var0.f_57.f_41 = 4;
	Var0.f_57.f_46 = 4;
	Var0.f_57.f_57 = 1;
	Var0.f_150 = 16191;
	Var0.f_151 = 131136;
	Var0.f_154 = -1;
	Var0.f_156 = -1;
	Var0.f_162 = 18;
	Var0.f_186 = 6;
	Var0.f_187 = -1;
	Var0.f_191 = joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME");
	Var0.f_197 = -1;
	Var0.f_207 = -1;
	Var0.f_208 = 1;
	Var0.f_210 = joaat("P_CAMPFIRE02X_COMBO");
	Var0.f_212.f_9 = 1084227584;
	Var0.f_212.f_10 = 1073741824;
	Var0.f_212.f_30 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(vScriptParam_0.y))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_249 = { TASK::_GET_SCENARIO_POINT_COORDS(vScriptParam_0.y, true) };
	Var0.f_252 = TASK::_GET_SCENARIO_POINT_HEADING(vScriptParam_0.y, true);
	if (func_2(&Var0))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar255 = false;
	while (!__LIB_9__::func_510(1) && !bVar255)
	{
		switch (Var0.f_211)
		{
			case 0:
				fVar256 = __LIB_1__::func_992(Global_35, Var0.f_249, 1);
				if (!__LIB_1__::func_923() || fVar256 < 6400f)
				{
					__LIB_0__::func_8(&(Var0.f_151), 131072);
					func_7(&Var0, vScriptParam_0.z);
					STREAMING::REQUEST_MODEL(Var0.f_210, false);
					__LIB_0__::func_19(&(Var0.f_211), 1);
				}
				break;
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(Var0.f_210))
				{
					__LIB_0__::func_19(&(Var0.f_211), 2);
				}
				break;
			case 2:
				Var0.f_152 = OBJECT::CREATE_OBJECT(Var0.f_210, Var0.f_249, false, false, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Var0.f_152, Var0.f_252);
				Var0.f_248 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), Var0.f_249, 0f, 0f, 0f, 0.3f, 0.3f, 2f);
				__LIB_0__::func_19(&(Var0.f_211), 3);
				break;
			case 3:
				if (func_2(&Var0))
				{
					bVar255 = true;
				}
				else
				{
					fVar256 = __LIB_1__::func_992(Global_35, Var0.f_249, 1);
					if (fVar256 < func_9() || !Var0.f_212.f_34)
					{
						__LIB_19__::func_228(&(Var0.f_212), &(Var0.f_152));
					}
					if (!__LIB_0__::func_1(Global_1935630, 2097152))
					{
						if (fVar256 < func_12())
						{
							func_13(&Var0, 0);
						}
					}
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Var0);
	SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
}

void func_1(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_152))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_152));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_248))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_248);
	}
	func_14(uParam0, 1);
}

bool func_2(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - uParam0->f_253) > 1000)
	{
		iVar1 = func_15(uParam0->f_249);
		if (__LIB_0__::func_27(iVar1, 8))
		{
			return true;
		}
		if (__LIB_0__::func_27(iVar1, 1) || uParam0->f_254)
		{
			if (__LIB_0__::func_27(uParam0->f_150, 8192))
			{
				__LIB_0__::func_7(&(uParam0->f_150), 64);
			}
		}
		else if (__LIB_0__::func_27(iVar1, 2) && !uParam0->f_254)
		{
			if (!__LIB_0__::func_27(uParam0->f_150, 8192))
			{
				__LIB_0__::func_7(&(uParam0->f_150), 128);
			}
		}
		else if (__LIB_0__::func_296(0, 0, 1) && !__LIB_7__::func_770())
		{
			if (__LIB_0__::func_27(uParam0->f_150, 8192))
			{
				__LIB_0__::func_7(&(uParam0->f_150), 64);
			}
		}
		else if (!uParam0->f_254)
		{
			if (!__LIB_0__::func_27(uParam0->f_150, 8192))
			{
				__LIB_0__::func_7(&(uParam0->f_150), 128);
			}
		}
		if (__LIB_0__::func_27(iVar1, 32))
		{
			func_20(uParam0, 1, 0, 0, 0, 0, 0);
		}
		else if (__LIB_0__::func_27(iVar1, 4))
		{
			func_20(uParam0, 0, 1, 0, 0, 0, 0);
		}
		else if (__LIB_0__::func_27(iVar1, 16))
		{
			func_20(uParam0, 0, 0, 1, 0, 0, 0);
		}
		else if (__LIB_0__::func_27(iVar1, 64))
		{
			func_20(uParam0, 0, 0, 0, 1, 0, 0);
		}
		else if (__LIB_0__::func_27(iVar1, 128))
		{
			func_20(uParam0, 0, 0, 0, 0, 1, 0);
		}
		else if (__LIB_0__::func_27(iVar1, 256))
		{
			func_20(uParam0, 0, 0, 0, 0, 0, 1);
		}
		uParam0->f_253 = iVar0;
	}
	return false;
}

void func_7(var uParam0, int iParam1)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (!__LIB_1__::func_185(4))
		{
			__LIB_0__::func_8(&(uParam0->f_150), 8075);
			__LIB_0__::func_7(&(uParam0->f_150), 64);
			uParam0->f_254 = 1;
			return;
		}
	}
	switch (iParam1)
	{
		case joaat("WB_INTERACTIVE_CAMPFIRE_CARAVAN"):
			__LIB_0__::func_8(&(uParam0->f_150), 6402);
			if (__LIB_1__::func_707(joaat("UPGRADE_UPG_COFFEE_KIT"), 1, 0))
			{
				__LIB_0__::func_7(&(uParam0->f_150), 1);
			}
			break;
		case joaat("WB_INTERACTIVE_CAMPFIRE_DFLT"):
			__LIB_0__::func_8(&(uParam0->f_150), 267);
			if (__LIB_1__::func_707(joaat("UPGRADE_UPG_COFFEE_KIT"), 1, 0))
			{
				__LIB_0__::func_7(&(uParam0->f_150), 1);
			}
			break;
		case joaat("WB_INTERACTIVE_CAMPFIRE_FIREPLACE"):
			__LIB_0__::func_8(&(uParam0->f_150), 7435);
			if (__LIB_1__::func_707(joaat("UPGRADE_UPG_COFFEE_KIT"), 1, 0))
			{
				__LIB_0__::func_7(&(uParam0->f_150), 1);
			}
			break;
		case joaat("WB_INTERACTIVE_CAMPFIRE_FIREPLACE_IN_TOWNS"):
			__LIB_0__::func_8(&(uParam0->f_150), 7435);
			if (__LIB_1__::func_707(joaat("UPGRADE_UPG_COFFEE_KIT"), 1, 0))
			{
				__LIB_0__::func_7(&(uParam0->f_150), 1);
			}
			break;
		case joaat("WB_INTERACTIVE_CAMPFIRE_TWOPOINT"):
			__LIB_0__::func_8(&(uParam0->f_150), 6402);
			if (__LIB_1__::func_707(joaat("UPGRADE_UPG_COFFEE_KIT"), 1, 0))
			{
				__LIB_0__::func_7(&(uParam0->f_150), 1);
			}
			break;
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE"):
			__LIB_0__::func_8(&(uParam0->f_150), 8075);
			__LIB_0__::func_7(&(uParam0->f_150), 64);
			uParam0->f_254 = 1;
			break;
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE_IN_TOWNS"):
			__LIB_0__::func_8(&(uParam0->f_150), 8075);
			__LIB_0__::func_7(&(uParam0->f_150), 64);
			uParam0->f_254 = 1;
			break;
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE_UNDERPOT"):
			__LIB_0__::func_8(&(uParam0->f_150), 8075);
			__LIB_0__::func_7(&(uParam0->f_150), 64);
			uParam0->f_212.f_4 = 1;
			uParam0->f_254 = 1;
			break;
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE_UNDERPOT_IN_TOWNS"):
			__LIB_0__::func_8(&(uParam0->f_150), 8075);
			__LIB_0__::func_7(&(uParam0->f_150), 64);
			uParam0->f_212.f_4 = 1;
			uParam0->f_254 = 1;
			break;
		default:
			break;
	}
}

float func_9()
{
	if (__LIB_0__::func_1(Global_1935630, 2097152))
	{
		return 1600f;
	}
	if (__LIB_1__::func_923())
	{
		if (__LIB_0__::func_12() == 5)
		{
			return 3600f;
		}
		else
		{
			return 6400f;
		}
	}
	return 10000f;
}

float func_12()
{
	if (__LIB_1__::func_923())
	{
		if (__LIB_0__::func_12() == 5)
		{
			return 400f;
		}
		else
		{
			return 1600f;
		}
	}
	return 6400f;
}

int func_13(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	char* sVar5;
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return 0;
	}
	func_33(uParam0);
	if (uParam0->f_153 > 4 && uParam0->f_153 < 13)
	{
		__LIB_1__::func_538(0);
	}
	if (uParam0->f_153 > 3)
	{
		if (((uParam0->f_153 != 8 && uParam0->f_153 != 13) && uParam0->f_153 != 4) && uParam0->f_154 != 5)
		{
			CAM::_0x18C3DFAC458783BB();
			func_35(uParam0);
		}
	}
	else
	{
		if (uParam0->f_153 == 3)
		{
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				iVar0 = func_36(uParam0);
				if (iVar0 >= 0 && iVar0 <= 3)
				{
					func_35(uParam0);
				}
			}
			else if (CAM::_0x927B810E43E99932(&(uParam0->f_26)))
			{
				CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_26));
			}
		}
		if (__LIB_0__::func_27(uParam0->f_151, 64))
		{
			HUD::_DISPLAY_HUD_COMPONENT(2011163970);
			__LIB_0__::func_8(&(uParam0->f_151), 64);
		}
	}
	if (__LIB_0__::func_27(uParam0->f_151, 2097152))
	{
		if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("HOLSTERWEAPON")))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				__LIB_0__::func_8(&(uParam0->f_151), 2097152);
			}
		}
	}
	switch (uParam0->f_153)
	{
		case 0:
			if (func_38(uParam0))
			{
				func_39(uParam0);
			}
			func_40(uParam0);
			uParam0->f_57.f_31 = 1;
			uParam0->f_57.f_32 = __LIB_0__::func_27(uParam0->f_150, 8);
			func_41(uParam0, 1);
			break;
		case 1:
			if (func_38(uParam0))
			{
				func_39(uParam0);
			}
			if (__LIB_0__::func_0(uParam0))
			{
				func_41(uParam0, 2);
			}
			break;
		case 2:
			if (func_38(uParam0))
			{
				func_39(uParam0);
			}
			if (func_43(uParam0))
			{
				func_41(uParam0, 3);
			}
			break;
		case 3:
			if (func_38(uParam0))
			{
				AUDIO::_0x9428447DED71FC7E("Player_Campfire_Scenes");
				__LIB_19__::func_633(&(uParam0->f_57), 1);
				__LIB_16__::func_753(&(uParam0->f_57), 2);
				func_39(uParam0);
			}
			func_46(uParam0);
			if (bParam1)
			{
				return 1;
			}
			__LIB_4__::func_229(8388608);
			if (!__LIB_0__::func_27(uParam0->f_150, 8192))
			{
				__LIB_9__::func_805(2048);
			}
			else
			{
				__LIB_9__::func_817(2048);
			}
			if (!__LIB_0__::func_27(uParam0->f_151, 131072))
			{
				__LIB_9__::func_805(1024);
			}
			else
			{
				if (!TASK::_DOES_SCENARIO_POINT_EXIST((*uParam0)[5]))
				{
					if (__LIB_0__::func_86(uParam0->f_188))
					{
						uParam0->f_188 = { 2.526f, 2.68f, 0f };
					}
					vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_152, true, false), ENTITY::GET_ENTITY_HEADING(uParam0->f_152), uParam0->f_188) };
					uParam0->f_7[5 /*3*/] = { vVar1 + Vector(1f, 0f, 0f) };
					(*uParam0)[5] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar1, uParam0->f_191, 1.5f, 0, false);
				}
				__LIB_9__::func_817(1024);
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_194) >= 500)
			{
				if (func_51(uParam0))
				{
					__LIB_0__::func_7(&(uParam0->f_151), 4194304);
				}
				else
				{
					__LIB_0__::func_8(&(uParam0->f_151), 4194304);
				}
				uParam0->f_194 = MISC::GET_GAME_TIMER();
			}
			if (__LIB_0__::func_232(Global_35, uParam0->f_152, 1) > 36f)
			{
				func_53(uParam0);
				func_54(uParam0);
				__LIB_4__::func_226(8388608);
				if (!__LIB_0__::func_27(uParam0->f_151, 131072))
				{
					__LIB_9__::func_817(1024);
				}
				func_41(uParam0, 4);
				if (CAM::_0x927B810E43E99932(&(uParam0->f_26)))
				{
					CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_26));
				}
				return 0;
			}
			if (__LIB_0__::func_644(2097152) || __LIB_0__::func_27(uParam0->f_150, 64))
			{
				if (__LIB_0__::func_27(uParam0->f_150, 8192))
				{
					func_57(uParam0, 0);
					__LIB_0__::func_8(&(uParam0->f_150), 8192);
				}
				__LIB_4__::func_226(2097152);
				__LIB_0__::func_8(&(uParam0->f_150), 64);
			}
			else if (__LIB_0__::func_644(4194304) || __LIB_0__::func_27(uParam0->f_150, 128))
			{
				if (!__LIB_0__::func_27(uParam0->f_150, 8192))
				{
					func_57(uParam0, 1);
					__LIB_0__::func_7(&(uParam0->f_150), 8192);
				}
				__LIB_4__::func_226(4194304);
				__LIB_0__::func_8(&(uParam0->f_150), 128);
			}
			func_58(uParam0);
			if (__LIB_0__::func_27(uParam0->f_151, 1))
			{
				func_41(uParam0, 6);
				uParam0->f_157 = 10;
				__LIB_0__::func_7(&(uParam0->f_151), 64);
				HUD::_HIDE_HUD_COMPONENT(2011163970);
			}
			else
			{
				uParam0->f_154 = func_36(uParam0);
				if (uParam0->f_154 != -1 && uParam0->f_154 != 5)
				{
					__LIB_12__::func_107();
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
				}
				if ((__LIB_9__::func_980(uParam0->f_154 == 4) && uParam0->f_154 != -1) || (((__LIB_0__::func_27(uParam0->f_151, 131072) && __LIB_0__::func_644(268435456)) && __LIB_0__::func_644(16777216)) && Global_1392040.f_2))
				{
					uParam0->f_155 = __LIB_12__::func_108();
					HUD::_HIDE_HUD_COMPONENT(2011163970);
					__LIB_0__::func_7(&(uParam0->f_151), 64);
					func_41(uParam0, 5);
					if ((__LIB_0__::func_644(16777216) || __LIB_0__::func_27(uParam0->f_151, 524288)) || Global_1392040.f_2)
					{
						if (__LIB_0__::func_644(268435456))
						{
							Global_1392040.f_2 = 0;
							__LIB_4__::func_226(16777216);
							__LIB_16__::func_753(&(uParam0->f_57), 2);
							__LIB_14__::func_578(uParam0, 0);
							func_41(uParam0, 10);
						}
					}
					else if (__LIB_0__::func_2() == -1)
					{
						if (__LIB_1__::func_185(4) && !__LIB_0__::func_296(0, 0, 1))
						{
							__LIB_1__::func_240(99, 1);
						}
					}
					func_54(uParam0);
				}
				else
				{
					func_64(uParam0);
					func_65(uParam0);
					if ((!__LIB_4__::func_233(4) && !__LIB_0__::func_644(536870912)) && __LIB_0__::func_27(uParam0->f_150, 8192))
					{
						if (__LIB_0__::func_27(uParam0->f_151, 4194304) && __LIB_0__::func_232(Global_35, uParam0->f_152, 1) <= 9f)
						{
							uParam0->f_185 = __LIB_12__::func_109(HUD::_UIPROMPT_GET_GROUP_ACTIVE_PAGE(1754796591));
							HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_152, 3f, 0, 1, 1754796591, uParam0->f_185, 2);
						}
						else if ((__LIB_0__::func_27(uParam0->f_151, 131072) && __LIB_0__::func_232(Global_35, uParam0->f_152, 1) > 9f) && __LIB_0__::func_232(Global_35, uParam0->f_152, 1) < 25f)
						{
							uParam0->f_185 = __LIB_12__::func_109(0);
							if (!HUD::_UIPROMPT_DOES_AMBIENT_GROUP_EXIST(1754796591))
							{
								HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_152, 5f, 0, 1, -523698323, uParam0->f_185, 2);
							}
						}
					}
					if ((__LIB_0__::func_644(16777216) && __LIB_0__::func_27(uParam0->f_151, 131072)) || __LIB_0__::func_27(uParam0->f_151, 524288))
					{
						if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
						{
							if (uParam0->f_197 != -1 && (MISC::GET_GAME_TIMER() - uParam0->f_197) > 1000)
							{
								__LIB_4__::func_226(16777216);
								__LIB_0__::func_8(&(uParam0->f_151), 524288);
								uParam0->f_197 = -1;
								TASK::CLEAR_PED_TASKS(Global_35, true, false);
								uParam0->f_157 = 0;
							}
							else
							{
								uParam0->f_157 = 2;
								func_68(uParam0);
								uParam0->f_197 = MISC::GET_GAME_TIMER();
								if (__LIB_0__::func_644(268435456))
								{
									__LIB_4__::func_226(16777216);
									__LIB_0__::func_8(&(uParam0->f_151), 524288);
									__LIB_0__::func_7(&(uParam0->f_151), 64);
									HUD::_HIDE_HUD_COMPONENT(2011163970);
									__LIB_16__::func_753(&(uParam0->f_57), 2);
									__LIB_14__::func_578(uParam0, 0);
									func_41(uParam0, 10);
								}
							}
						}
						else if (uParam0->f_157 == 2)
						{
							if ((MISC::GET_GAME_TIMER() - uParam0->f_197) > 10000)
							{
								TASK::CLEAR_PED_TASKS(Global_35, true, false);
								__LIB_4__::func_226(16777216);
								__LIB_0__::func_8(&(uParam0->f_151), 524288);
								uParam0->f_197 = -1;
								uParam0->f_157 = 0;
							}
						}
						else if (uParam0->f_154 == 5)
						{
							func_41(uParam0, 9);
						}
					}
				}
				Jump @4934; //curOff = 1996
				if (func_38(uParam0))
				{
					func_39(uParam0);
				}
				if (__LIB_0__::func_232(Global_35, uParam0->f_152, 1) <= 36f)
				{
					func_41(uParam0, 3);
				}
				Jump @4934; //curOff = 2042
				if (func_38(uParam0))
				{
					AUDIO::_0x6339C1EA3979B5F7("idle", "Player_Campfire_Scenes");
					func_39(uParam0);
				}
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
				__LIB_12__::func_162();
				func_58(uParam0);
				if ((__LIB_0__::func_139(uParam0->f_162[17]) && __LIB_5__::func_645(uParam0->f_162[17], 1)) && __LIB_12__::func_163())
				{
					__LIB_0__::func_7(&Global_43907, 4);
				}
				else if (!__LIB_9__::func_980(1) || __LIB_0__::func_51(&Global_43907, 8))
				{
					__LIB_1__::func_538(0);
					uParam0->f_156 = -1;
					func_75(uParam0, 0);
					if (__LIB_0__::func_51(&Global_43907, 8))
					{
						__LIB_0__::func_7(&(uParam0->f_151), 262144);
						func_41(uParam0, 13);
					}
					else
					{
						__LIB_16__::func_770();
						func_41(uParam0, 3);
					}
				}
				else
				{
					if (uParam0->f_154 != -1 && uParam0->f_154 != 5)
					{
						__LIB_12__::func_107();
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -996707397) || __LIB_12__::func_98() == 1)
					{
						func_75(uParam0, 0);
					}
					else
					{
						func_75(uParam0, 1);
					}
					func_78(uParam0);
					if (uParam0->f_157 == 1 || func_79(uParam0, 0, 0, -1))
					{
						__LIB_16__::func_770();
						if (uParam0->f_157 != 10)
						{
							func_75(uParam0, 0);
						}
						else
						{
							func_53(uParam0);
						}
						if (uParam0->f_157 == 2)
						{
							if (uParam0->f_154 == 5)
							{
								func_41(uParam0, 9);
							}
							else
							{
								__LIB_16__::func_753(&(uParam0->f_57), 2);
								__LIB_14__::func_578(uParam0, 0);
								func_41(uParam0, 10);
							}
						}
						else if (uParam0->f_157 == 0)
						{
							func_41(uParam0, 13);
						}
						else if (uParam0->f_157 == 12 || uParam0->f_157 == 11)
						{
							func_41(uParam0, 11);
						}
						else
						{
							if (uParam0->f_157 == 1)
							{
								uParam0->f_57.f_84 = (uParam0->f_57.f_84 - 1);
							}
							func_41(uParam0, 6);
						}
					}
				}
				Jump @4934; //curOff = 2498
				if (func_38(uParam0))
				{
					func_39(uParam0);
				}
				if (uParam0->f_154 != -1 && uParam0->f_154 != 5)
				{
					__LIB_12__::func_107();
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				}
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
				if (((ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 2000) && !__LIB_0__::func_27(uParam0->f_151, 4)) && uParam0->f_157 != 1)
				{
					if (func_79(uParam0, 1, uParam0->f_157, uParam0->f_156))
					{
						if (uParam0->f_157 == 0)
						{
							func_41(uParam0, 13);
							func_53(uParam0);
							return 0;
						}
						else
						{
							func_75(uParam0, 0);
							uParam0->f_196 = MISC::GET_GAME_TIMER();
						}
					}
				}
				if ((func_80(uParam0) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35)) || __LIB_0__::func_27(uParam0->f_151, 1))
				{
					if (uParam0->f_157 == 10 || __LIB_0__::func_27(uParam0->f_151, 1))
					{
						uParam0->f_156 = -1;
						AUDIO::_0x6339C1EA3979B5F7("Fade_To_Black", "Sleep_Respawn_Scenes");
						func_41(uParam0, 8);
					}
					else if ((uParam0->f_154 == uParam0->f_156 || uParam0->f_156 == -1) || uParam0->f_157 == 1)
					{
						if (uParam0->f_157 != 0)
						{
							uParam0->f_155 = uParam0->f_157;
						}
						if (uParam0->f_156 != -1)
						{
							uParam0->f_154 = uParam0->f_156;
						}
						else
						{
							uParam0->f_154 = func_36(uParam0);
						}
						uParam0->f_156 = -1;
						if (uParam0->f_157 == 1)
						{
							uParam0->f_157 = 6;
							uParam0->f_155 = 6;
							uParam0->f_162[8] = __LIB_4__::func_864("DRINK", joaat("INPUT_CRAFTING_EAT"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
							__LIB_4__::func_12(uParam0->f_162[8], -1067771379, 0, 1);
							__LIB_1__::func_522(uParam0->f_162[8], 10, 1, 1);
							__LIB_1__::func_221(uParam0->f_162[8], 0, 1);
							func_41(uParam0, 12);
						}
						else
						{
							func_41(uParam0, 5);
						}
					}
				}
				Jump @4934; //curOff = 3012
				if (func_38(uParam0))
				{
					func_39(uParam0);
				}
				iVar4 = PED::_0xC22AA08A8ADB87D4(Global_35);
				if (func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
				{
					if ((iVar4 == joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR") || iVar4 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A")) || iVar4 == joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC"))
					{
						if (uParam0->f_157 == 12)
						{
							if (INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), joaat("DOCUMENT_PLAYER_JOURNAL"), 0))
							{
								INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("DOCUMENT_PLAYER_JOURNAL"));
							}
							func_87(joaat("DOCUMENT_PLAYER_JOURNAL"), 0, 0, 0, 1, 0, 0);
							uParam0->f_196 = MISC::GET_GAME_TIMER();
							uParam0->f_157 = 0;
						}
						else if (uParam0->f_157 == 11)
						{
							func_87(joaat("CUSTOM_SATCHEL"), 0, 0, 0, 1, 0, 0);
							uParam0->f_196 = MISC::GET_GAME_TIMER();
							uParam0->f_157 = 0;
						}
						else
						{
							uParam0->f_157 = 0;
							ATTRIBUTE::_0xD962F8579D702DB5();
							__LIB_1__::func_148(&(uParam0->f_204));
							func_41(uParam0, 5);
						}
					}
					else if (iVar4 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A"))
					{
						__LIB_12__::func_110(joaat("SIT_TRANS_KNEEL"), 0.5f);
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
					else if (iVar4 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
					{
						__LIB_12__::func_110(joaat("KNIFE1_TRANS_KNEEL1"), 2f);
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
					else if (iVar4 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
					{
						__LIB_12__::func_110(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 2f);
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
				{
					ATTRIBUTE::_0xD962F8579D702DB5();
					uParam0->f_157 = 0;
					func_41(uParam0, 5);
				}
				Jump @4934; //curOff = 3370
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, joaat("CONSUMABLE_COFFEE")), 1, 0, 0, 0);
				iVar4 = PED::_0x569F1E1237508DEB(Global_35);
				func_89(uParam0, iVar4);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
				{
					if (__LIB_0__::func_190())
					{
						__LIB_3__::func_180(1);
					}
					else if (__LIB_0__::func_189())
					{
						__LIB_3__::func_180(0);
					}
					func_93(joaat("CONSUMABLE_COFFEE"), 1f, 1);
				}
				if ((func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500) && iVar4 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
				{
					func_41(uParam0, 5);
				}
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
				{
					ATTRIBUTE::_0xD962F8579D702DB5();
					uParam0->f_157 = 0;
					func_41(uParam0, 5);
				}
				Jump @4934; //curOff = 3597
				if (func_38(uParam0))
				{
					func_39(uParam0);
					switch (uParam0->f_155)
					{
						case 8:
							__LIB_12__::func_110(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
							break;
						case 7:
							__LIB_12__::func_110(joaat("SIT_TRANS_KNEEL"), 0.5f);
							break;
					}
				}
				func_94(uParam0);
				Jump @4934; //curOff = 3680
				if (func_38(uParam0))
				{
					func_39(uParam0);
				}
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					if (func_85(uParam0))
					{
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
					}
					CAM::DO_SCREEN_FADE_OUT(1500);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (uParam0->f_154 != 0)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, (*uParam0)[0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, false, true, 0, false, -1f, false);
						uParam0->f_196 = MISC::GET_GAME_TIMER();
						uParam0->f_154 = 0;
					}
					else if ((MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
					{
						CAM::DO_SCREEN_FADE_IN(1000);
						__LIB_0__::func_489(77.236f, -5.6759f);
						__LIB_16__::func_753(&(uParam0->f_57), 2);
						__LIB_14__::func_578(uParam0, 0);
						func_41(uParam0, 10);
					}
				}
				Jump @4934; //curOff = 3867
				if (func_38(uParam0))
				{
					func_39(uParam0);
				}
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				func_96(uParam0);
				__LIB_12__::func_107();
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				if ((((func_97(uParam0, uParam0->f_155) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35)) || TASK::_0x916B8E075ABC8B4E(Global_35, 1)) || FIRE::IS_ENTITY_ON_FIRE(Global_35)) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
				{
					ENTITY::SET_ENTITY_PROOFS(Global_35, 0, false);
					AUDIO::_STOP_SOUND_WITH_NAME("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
					__LIB_19__::func_633(&(uParam0->f_57), 1);
					ATTRIBUTE::_0xD962F8579D702DB5();
					if (((!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) || TASK::_0x916B8E075ABC8B4E(Global_35, 1)) || FIRE::IS_ENTITY_ON_FIRE(Global_35)) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_160))
						{
							OBJECT::DELETE_OBJECT(&(uParam0->f_160));
						}
						if (__LIB_0__::func_708(0) && !__LIB_0__::func_27(uParam0->f_151, 1024))
						{
							if (((((((uParam0->f_149 == 3 || uParam0->f_149 == 4) || uParam0->f_149 == 15) || uParam0->f_149 == 20) || uParam0->f_149 == 7) || uParam0->f_149 == 6) || uParam0->f_149 == 18) || uParam0->f_149 == 19)
							{
								func_99(uParam0->f_57.f_77, 1, 1, 1, 0);
								__LIB_0__::func_7(&(uParam0->f_151), 1024);
							}
						}
						if (FIRE::IS_ENTITY_ON_FIRE(Global_35))
						{
							TASK::CLEAR_PED_TASKS(Global_35, true, false);
						}
					}
					if (uParam0->f_154 == 4)
					{
						uParam0->f_155 = 9;
						uParam0->f_157 = 9;
					}
					else
					{
						uParam0->f_155 = 6;
						uParam0->f_157 = 6;
					}
					__LIB_1__::func_148(&(uParam0->f_204));
					func_41(uParam0, 5);
				}
				Jump @4934; //curOff = 4366
				if (func_38(uParam0))
				{
					func_39(uParam0);
				}
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if ((!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT()) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -954213463))
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				}
				if ((__LIB_0__::func_27(uParam0->f_151, 1) || ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_195, 0)) || CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::_0x8910C24B7E0046EC();
					func_53(uParam0);
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_193))
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_193, true, false))
						{
							if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_193, true))
							{
								ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_193);
							}
						}
						else
						{
							__LIB_0__::func_322(Global_36);
							Global_40.f_9 = 0;
							__LIB_0__::func_703(0, 7);
							__LIB_0__::func_8(&(uParam0->f_151), 1);
							AUDIO::_0xAC84686C06184B0D("Clouds", "Sleep_Respawn_Scenes");
							ANIMSCENE::START_ANIM_SCENE(uParam0->f_193);
							AUDIO::TRIGGER_MUSIC_EVENT("SLEEP_TRANSITION_START");
							__LIB_10__::func_725(14, 1);
							__LIB_18__::func_517();
							if (!TASK::_DOES_SCENARIO_POINT_EXIST((*uParam0)[5]))
							{
								(*uParam0)[5] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(uParam0->f_7[5 /*3*/], uParam0->f_191, 1f, 0, false);
							}
							if (uParam0->f_191 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
							{
								sVar5 = "PROP_PLAYER_SLEEP_TENT_MALE_A";
							}
							else
							{
								sVar5 = "WORLD_PLAYER_SLEEP_BEDROLL_ARTHUR";
							}
							__LIB_0__::func_8(&(uParam0->f_151), 4);
							TASK::_TASK_USE_SCENARIO_POINT(Global_35, (*uParam0)[5], sVar5, 0, false, true, 0, false, -1f, false);
							if (CAM::_0x927B810E43E99932(&(uParam0->f_26)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_26));
							}
							__LIB_1__::func_716(1);
							CLOCK::ADVANCE_CLOCK_TIME_TO(uParam0->f_186, 0, 0);
							TELEMETRY::_0xF9F14080D80937BD(uParam0->f_186);
							if (!__LIB_0__::func_296(0, 0, 1))
							{
								MISC::SET_RANDOM_WEATHER_TYPE(true, true);
							}
							__LIB_12__::func_99(1);
							__LIB_2__::func_761(Global_36, 300f, 0, 0);
							__LIB_1__::func_309(-1, 0, 0, 0, 0);
							__LIB_1__::func_199(0);
							__LIB_0__::func_188(PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::PLAYER_ID()));
							uParam0->f_156 = -1;
							__LIB_0__::func_7(&(uParam0->f_151), 1048576);
							PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
							func_41(uParam0, 3);
						}
					}
					else
					{
						func_41(uParam0, 3);
					}
				}
				Jump @4934; //curOff = 4840
				if (func_38(uParam0))
				{
					__LIB_9__::func_805(8192);
					func_39(uParam0);
				}
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
				{
					ATTRIBUTE::_0xD962F8579D702DB5();
					__LIB_9__::func_817(8192);
					__LIB_19__::func_633(&(uParam0->f_57), 1);
					func_41(uParam0, 3);
				}
				else if (!TASK::_0x0C3CB2E600C8977D(Global_35, 1))
				{
					func_110(uParam0);
				}
				Jump @4934; //curOff = 4924
				return 1;
			}
			return 0;
			default:
				break;
	}
}

void func_14(var uParam0, bool bParam1)
{
	func_53(uParam0);
	__LIB_12__::func_102(uParam0);
	__LIB_12__::func_103(uParam0);
	func_54(uParam0);
	if (CAM::_0x927B810E43E99932(&(uParam0->f_26)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_26));
	}
	if (bParam1)
	{
		__LIB_12__::func_104(uParam0);
	}
	uParam0->f_197 = -1;
	__LIB_19__::func_633(&(uParam0->f_57), 0);
}

int func_15(vector3 vParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (__LIB_2__::func_157(Global_1935475[iVar0 /*2*/], vParam0))
		{
			return Global_1935475[iVar0 /*2*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_20(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	uParam0->f_212.f_5 = iParam1;
	uParam0->f_212.f_2 = iParam2;
	uParam0->f_212.f_3 = iParam3;
	uParam0->f_212.f_2 = iParam4;
	uParam0->f_212.f_2 = iParam5;
	uParam0->f_212.f_2 = iParam6;
}

void func_33(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_644(16777216) || uParam0->f_153 == 10)
	{
		iVar0 = func_36(uParam0);
		if (iVar0 != -1 && iVar0 != 5)
		{
			if (!__LIB_0__::func_139(uParam0->f_162[10]))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			}
			if (!__LIB_0__::func_139(uParam0->f_162[9]))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
		}
	}
}

void func_35(var uParam0)
{
	vector3 vVar0;
	bool bVar25;
	bool bVar26;
	vVar0.f_4 = -1;
	vVar0.f_8 = 2;
	vVar0.f_9 = 1;
	vVar0.f_10 = 1;
	vVar0.f_11 = 1;
	vVar0.f_13 = 1;
	vVar0.f_14 = 2;
	vVar0.f_15 = 2;
	vVar0.f_16 = 3;
	vVar0.f_19 = 3;
	vVar0.f_20 = 1;
	vVar0.f_21 = 3;
	vVar0.f_22 = 3;
	vVar0.f_8 = 0;
	vVar0.f_14 = 0;
	vVar0.f_3 = uParam0->f_152;
	vVar0 = { 0f, 0f, 0.5f };
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &vVar0);
	bVar25 = false;
	bVar26 = false;
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
	{
		bVar26 = true;
	}
	if (!bVar26)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			bVar25 = true;
		}
	}
	if (bVar26 || (bVar25 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1206250122)))
	{
		if (CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_26)))
		{
			if (!CAM::_0x927B810E43E99932(&(uParam0->f_26)))
			{
				CAM::_0xB8B207C34285E978(&(uParam0->f_26));
			}
		}
	}
}

int func_36(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0) && !TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST((*uParam0)[iVar1]))
			{
				if (iVar0 == (*uParam0)[iVar1])
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_38(var uParam0)
{
	return __LIB_0__::func_27(uParam0->f_151, 4096);
}

void func_39(var uParam0)
{
	__LIB_0__::func_8(&(uParam0->f_151), 4096);
}

void func_40(var uParam0)
{
	StringCopy(&(uParam0->f_26), "restbyfire_orbit_cam", 64);
	StringCopy(&(uParam0->f_26.f_8), "RESTBYFIRE_ORBIT_REQUEST", 64);
}

void func_41(var uParam0, int iParam1)
{
	__LIB_0__::func_7(&(uParam0->f_151), 4096);
	uParam0->f_153 = iParam1;
}

bool func_43(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_152))
	{
		if (__LIB_0__::func_27(uParam0->f_150, 512))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_152, -0.966f, 0.203f, 0f) };
			uParam0->f_7[0 /*3*/] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_152) + -99.171f);
			(*uParam0)[0] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1"), vVar0, fVar3, 0, 0, 0);
		}
		if (__LIB_0__::func_27(uParam0->f_150, 1024))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_152, -0.212f, -1.045f, 0f) };
			uParam0->f_7[1 /*3*/] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_152) + -11.405f);
			(*uParam0)[1] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2"), vVar0, fVar3, 0, 0, 0);
		}
		if (__LIB_0__::func_27(uParam0->f_150, 2048))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_152, 1.025f, 0.043f, 0f) };
			uParam0->f_7[2 /*3*/] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_152) + 91.78f);
			(*uParam0)[2] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3"), vVar0, fVar3, 0, 0, 0);
		}
		if (__LIB_0__::func_27(uParam0->f_150, 4096))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_152, 0.249f, 1.05f, 0f) };
			uParam0->f_7[3 /*3*/] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_152) + 164.29f);
			(*uParam0)[3] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4"), vVar0, fVar3, 0, 0, 0);
		}
		if (__LIB_0__::func_27(uParam0->f_150, 2))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_152, -1.534f, 0.233f, 0.5f) };
			uParam0->f_7[4 /*3*/] = { vVar0 + Vector(0.5f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_152) + -97.186f);
			(*uParam0)[4] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_PLAYER_SEAT_CHAIR_PLAYER_CAMP"), vVar0, fVar3, 0, 0, 0);
			TASK::_SET_SCENARIO_POINT_FLAG((*uParam0)[4], 51, true);
		}
		if (!TASK::_DOES_SCENARIO_POINT_EXIST((*uParam0)[5]))
		{
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_152, true, false), ENTITY::GET_ENTITY_HEADING(uParam0->f_152), uParam0->f_188) };
			uParam0->f_7[5 /*3*/] = { vVar0 + Vector(1f, 0f, 0f) };
			(*uParam0)[5] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar0, uParam0->f_191, 1f, 0, false);
		}
		return true;
	}
	return false;
}

void func_46(var uParam0)
{
	if (!CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_26)))
	{
		if (!CAM::_0xC285FD21294A1C49(&(uParam0->f_26)))
		{
			CAM::_0x6A4D224FC7643941(&(uParam0->f_26));
		}
	}
}

bool func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_8(&(uParam0->f_151), 16384);
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::_0x9A100F1CF4546629(iVar1))
			{
				__LIB_0__::func_7(&(uParam0->f_151), 16384);
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
	if (__LIB_0__::func_644(134217728) || !__LIB_0__::func_27(uParam0->f_150, 8192))
	{
		return false;
	}
	if (__LIB_2__::func_65(Global_35, 0))
	{
		return false;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_195))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_195, false))
		{
			return false;
		}
	}
	if (PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "inInspectionMode"))
	{
		return false;
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 227, true))
	{
		return false;
	}
	if (__LIB_0__::func_71(Global_35))
	{
		return false;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return false;
	}
	if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
	{
		return false;
	}
	if ((__LIB_2__::func_365(Global_35) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35))
	{
		return false;
	}
	if (!__LIB_2__::func_123(Global_35, uParam0->f_152, -0.5f))
	{
		return false;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_152, true, false), 1.5f) > 2)
	{
		return false;
	}
	return true;
}

void func_53(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (__LIB_0__::func_139(uParam0->f_162[iVar0]))
		{
			__LIB_1__::func_748(&(uParam0->f_162[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

void func_54(var uParam0)
{
	__LIB_1__::func_748(&(uParam0->f_183), 1, 1);
	__LIB_1__::func_748(&(uParam0->f_182), 1, 1);
	__LIB_1__::func_748(&(uParam0->f_181), 1, 1);
}

void func_57(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST((*uParam0)[iVar0]) && (*uParam0)[iVar0] != (*uParam0)[5])
		{
			TASK::_SET_SCENARIO_POINT_FLAG((*uParam0)[iVar0], 8, !bParam1);
		}
		iVar0++;
	}
}

void func_58(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_193))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_193))
		{
			PED::_0xD65FDC686A031C83(Global_35, joaat("SLEEP_TRANS_RESTING_W_HAT"), 3f);
			AUDIO::_0x9428447DED71FC7E("Sleep_Respawn_Scenes");
			AUDIO::TRIGGER_MUSIC_EVENT("SLEEP_TRANSITION_STOP");
			CAM::DO_SCREEN_FADE_OUT(0);
			CAM::DO_SCREEN_FADE_IN(1500);
			__LIB_12__::func_181(1);
			__LIB_12__::func_590();
			if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
			{
				__LIB_0__::func_489(98.2971f, -4.2336f);
				PED::_0xEC6935EBE0847B90(Global_35, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Global_36, ENTITY::GET_ENTITY_HEADING(Global_35), -5f, 0f, 0f));
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			__LIB_12__::func_99(0);
			Global_1392040.f_7 = __LIB_0__::func_23();
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_193, false))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CAM::_0x8910C24B7E0046EC();
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			__LIB_1__::func_538(0);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
		}
	}
}

void func_64(var uParam0)
{
	if (((!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && __LIB_0__::func_27(uParam0->f_151, 4194304)) && !PED::_IS_PED_CARRYING(Global_35)) && !__LIB_0__::func_644(4))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_152))
		{
			if (!__LIB_0__::func_139(uParam0->f_181))
			{
				uParam0->f_181 = __LIB_2__::func_403("REST_BY_FIRE", joaat("INPUT_CONTEXT_Y"), uParam0->f_152, 1, 1, 1, 0, 5, 9f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
			}
			else if (__LIB_0__::func_567(uParam0->f_181, 1))
			{
				func_68(uParam0);
				func_54(uParam0);
				__LIB_0__::func_8(&(uParam0->f_151), 4194304);
			}
			if (uParam0->f_57.f_84 > 0 && (__LIB_0__::func_62(Global_36, TASK::_GET_SCENARIO_POINT_COORDS((*uParam0)[0], true)) < 0.5625f || __LIB_0__::func_62(Global_36, TASK::_GET_SCENARIO_POINT_COORDS((*uParam0)[1], true)) < 0.5625f))
			{
				func_96(uParam0);
				if (!__LIB_0__::func_139(uParam0->f_183))
				{
					uParam0->f_183 = __LIB_2__::func_403("POUR_COFFEE", joaat("INPUT_CONTEXT_A"), uParam0->f_152, 1, 1, 1, 0, 5, 9f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
					__LIB_4__::func_12(uParam0->f_183, 1754796591, 0, 1);
				}
				else if (__LIB_0__::func_567(uParam0->f_183, 1))
				{
					uParam0->f_157 = 1;
					func_68(uParam0);
					func_54(uParam0);
					__LIB_0__::func_8(&(uParam0->f_151), 4194304);
				}
			}
			else if (__LIB_0__::func_139(uParam0->f_183))
			{
				func_153(uParam0);
			}
		}
	}
	else
	{
		func_153(uParam0);
		func_154(uParam0);
	}
	if (__LIB_0__::func_139(uParam0->f_181))
	{
		__LIB_4__::func_12(uParam0->f_181, 1754796591, 0, 1);
	}
}

void func_65(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_151, 4194304))
	{
		if (!__LIB_0__::func_139(uParam0->f_182))
		{
			if (((((!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && !__LIB_0__::func_644(16777216)) && !__LIB_0__::func_644(4096)) && !__LIB_0__::func_644(1)) && !__LIB_2__::func_800()) && !__LIB_0__::func_27(uParam0->f_151, 524288))
			{
				uParam0->f_182 = __LIB_2__::func_403("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_152, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
				MISC::SET_BIT(&(Global_1956580.f_1), 2);
				MISC::SET_BIT(&(Global_1956580.f_1), 3);
				if (__LIB_0__::func_27(uParam0->f_151, 16384))
				{
					if (func_156(uParam0))
					{
						__LIB_1__::func_484(uParam0->f_182, "CAMP_REC_COOK", 1);
					}
					else
					{
						MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
						__LIB_1__::func_221(uParam0->f_182, 0, 1);
					}
				}
			}
		}
		else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
		{
			func_54(uParam0);
			__LIB_0__::func_8(&(uParam0->f_151), 4194304);
		}
		else if (__LIB_0__::func_644(16777216) || __LIB_0__::func_27(uParam0->f_151, 524288))
		{
			__LIB_4__::func_226(16777216);
			__LIB_0__::func_7(&(uParam0->f_151), 524288);
			func_54(uParam0);
			__LIB_0__::func_8(&(uParam0->f_151), 4194304);
		}
		else
		{
			if (__LIB_0__::func_27(uParam0->f_151, 16384) != __LIB_0__::func_27(uParam0->f_151, 32768))
			{
				if (__LIB_0__::func_27(uParam0->f_151, 16384))
				{
					if (func_156(uParam0) && !__LIB_0__::func_139(Global_1935496.f_114))
					{
						__LIB_1__::func_484(uParam0->f_182, "CAMP_REC_COOK", 1);
						__LIB_1__::func_221(uParam0->f_182, 1, 1);
						__LIB_0__::func_7(&(uParam0->f_151), 65536);
					}
					else
					{
						__LIB_1__::func_748(&(uParam0->f_182), 1, 1);
						uParam0->f_182 = __LIB_2__::func_403("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_152, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
						__LIB_1__::func_221(uParam0->f_182, 0, 1);
						__LIB_0__::func_8(&(uParam0->f_151), 65536);
					}
				}
				else
				{
					MISC::SET_BIT(&(Global_1956580.f_1), 2);
					MISC::SET_BIT(&(Global_1956580.f_1), 3);
					__LIB_1__::func_748(&(uParam0->f_182), 1, 1);
					uParam0->f_182 = __LIB_2__::func_403("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_152, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
				}
				if (__LIB_0__::func_27(uParam0->f_151, 16384))
				{
					__LIB_0__::func_7(&(uParam0->f_151), 32768);
				}
				else
				{
					__LIB_0__::func_8(&(uParam0->f_151), 32768);
				}
			}
			if (__LIB_0__::func_567(uParam0->f_182, 1))
			{
				__LIB_0__::func_7(&(uParam0->f_151), 524288);
				MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
				func_54(uParam0);
				__LIB_0__::func_8(&(uParam0->f_151), 4194304);
				if (__LIB_0__::func_27(uParam0->f_151, 16384))
				{
					if (func_156(uParam0))
					{
						__LIB_0__::func_7(&(uParam0->f_151), 65536);
					}
					else
					{
						__LIB_0__::func_8(&(uParam0->f_151), 65536);
					}
				}
				if (__LIB_0__::func_27(uParam0->f_151, 16384) && __LIB_0__::func_27(uParam0->f_151, 65536))
				{
					__LIB_4__::func_229(268435456);
				}
			}
		}
	}
	else
	{
		__LIB_1__::func_748(&(uParam0->f_182), 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_182))
	{
		__LIB_4__::func_12(uParam0->f_182, 1754796591, 0, 1);
	}
}

void func_68(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	bool bVar5;
	fVar0 = 10000f;
	iVar1 = -1;
	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	iVar3 = 0;
	while (iVar3 < 6)
	{
		if (iVar3 < 5)
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST((*uParam0)[iVar3]))
			{
				if (TASK::_GET_PED_USING_SCENARIO_POINT((*uParam0)[iVar3]) != 0)
				{
				}
				else if (!PED::_0xAB643407D0B26F07(Global_35, (*uParam0)[iVar3], 0, 0, 1) && !__LIB_0__::func_644(268435456))
				{
				}
				else
				{
					ITEMSET::_CLEAR_ITEMSET(iVar2);
					if (__LIB_12__::func_118(&iVar2, TASK::_GET_SCENARIO_POINT_COORDS((*uParam0)[iVar3], true)))
					{
					}
					else
					{
						fVar4 = __LIB_0__::func_62(Global_36, uParam0->f_7[iVar3 /*3*/]);
						if (fVar4 < fVar0)
						{
							iVar1 = iVar3;
							fVar0 = fVar4;
						}
					}
				}
			}
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar2);
	if (iVar1 == -1)
	{
		__LIB_4__::func_226(268435456);
		__LIB_4__::func_226(16777216);
		__LIB_0__::func_8(&(uParam0->f_151), 524288);
		uParam0->f_157 = 0;
		return;
	}
	if (__LIB_0__::func_644(268435456))
	{
		func_159(Global_35, 1, 1);
		switch (iVar1)
		{
			case 4:
				uParam0->f_157 = 2;
				TASK::_TASK_USE_SCENARIO_POINT(Global_35, (*uParam0)[4], "PROP_PLAYER_SEAT_CHAIR_PLAYER_CAMP", 0, false, true, 0, false, -1f, false);
				uParam0->f_155 = 9;
				uParam0->f_154 = 4;
				break;
			case 0:
			case 3:
				uParam0->f_157 = 2;
				TASK::_TASK_USE_SCENARIO_POINT(Global_35, (*uParam0)[0], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1f, false);
				uParam0->f_155 = 6;
				uParam0->f_154 = 0;
				break;
			case 1:
			case 2:
				uParam0->f_157 = 2;
				TASK::_TASK_USE_SCENARIO_POINT(Global_35, (*uParam0)[1], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1f, false);
				uParam0->f_155 = 6;
				uParam0->f_154 = 1;
				break;
		}
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	else
	{
		switch (iVar1)
		{
			case 4:
				TASK::_TASK_USE_SCENARIO_POINT(Global_35, (*uParam0)[iVar1], "PROP_PLAYER_SEAT_CHAIR_PLAYER_CAMP", 0, true, false, 0, false, -1f, false);
				break;
			case 0:
			case 1:
			case 2:
			case 3:
				if (__LIB_0__::func_644(16777216) || __LIB_0__::func_27(uParam0->f_151, 524288))
				{
					bVar5 = true;
					if (__LIB_12__::func_167(0) || __LIB_12__::func_167(1))
					{
						bVar5 = false;
					}
					if (bVar5)
					{
						PED::_0xD65FDC686A031C83(Global_35, joaat("DYNAMIC_KNEEL_QUICK_ENTER"), 3f);
					}
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, (*uParam0)[iVar1], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1f, false);
				}
				else if (uParam0->f_157 == 1)
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, (*uParam0)[iVar1], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1f, false);
				}
				else if (__LIB_12__::func_119())
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, (*uParam0)[iVar1], "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", 0, true, false, 0, false, -1f, false);
				}
				else
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, (*uParam0)[iVar1], "WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A", 0, true, false, 0, false, -1f, false);
				}
				break;
		}
		uParam0->f_154 = iVar1;
	}
}

void func_75(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (__LIB_0__::func_139(uParam0->f_162[iVar0]))
		{
			if (__LIB_0__::func_572(uParam0->f_162[iVar0], 0) == bParam1)
			{
			}
			else
			{
				__LIB_1__::func_221(uParam0->f_162[iVar0], bParam1, 1);
			}
		}
		iVar0++;
	}
}

void func_78(var uParam0)
{
	int iVar0;
	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
	if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A"))
	{
		ENTITY::SET_ENTITY_PROOFS(Global_35, 2, false);
	}
	else
	{
		ENTITY::SET_ENTITY_PROOFS(Global_35, 0, false);
	}
	if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"))
	{
		if (((((func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500) && !__LIB_0__::func_27(uParam0->f_151, 524288)) && !__LIB_0__::func_644(16777216)) && !__LIB_2__::func_774(15)) && uParam0->f_157 != 1)
		{
			__LIB_1__::func_148(&(uParam0->f_204));
			__LIB_12__::func_110(joaat("KNEEL_TRANS_SQUAT"), 0.5f);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A"))
	{
		if (func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
		{
			if (!__LIB_0__::func_75(&(uParam0->f_204)))
			{
				__LIB_1__::func_148(&(uParam0->f_204));
			}
			if (__LIB_1__::func_285(&(uParam0->f_204), 180f))
			{
				__LIB_1__::func_148(&(uParam0->f_204));
				if (!__LIB_12__::func_119())
				{
					__LIB_12__::func_110(joaat("SQUAT_TRANS_SIT"), 0.5f);
					uParam0->f_196 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	else if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A"))
	{
		if (func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
		{
			if (!__LIB_0__::func_75(&(uParam0->f_204)))
			{
				__LIB_1__::func_148(&(uParam0->f_204));
			}
			if (__LIB_1__::func_285(&(uParam0->f_204), 10f))
			{
				if (__LIB_12__::func_119())
				{
					__LIB_1__::func_148(&(uParam0->f_204));
					uParam0->f_196 = MISC::GET_GAME_TIMER();
					__LIB_12__::func_110(joaat("SIT_TRANS_SQUAT"), 0.5f);
				}
			}
		}
	}
	else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
	{
		if (func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
		{
			__LIB_12__::func_110(joaat("KNIFE1_TRANS_KNEEL1"), 2f);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
	{
		if (func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
		{
			__LIB_12__::func_110(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 2f);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
	}
}

bool func_79(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_0__::func_100())
	{
		if (bParam1)
		{
			iVar2 = iParam2;
			if (iParam3 != -1)
			{
				iVar1 = iParam3;
			}
			else
			{
				iVar1 = uParam0->f_154;
			}
		}
		else
		{
			iVar1 = uParam0->f_154;
			iVar2 = uParam0->f_155;
		}
		switch (iVar1)
		{
			case 0:
			case 1:
				switch (iVar2)
				{
					case 1:
						iVar0 = 0;
						break;
					case 3:
					case 4:
						iVar0 = 0;
						break;
					default:
						if (__LIB_0__::func_2() != 0)
						{
							iVar0 = 544882;
						}
						else
						{
							iVar0 = 20498;
						}
						break;
				}
				break;
			case 2:
			case 3:
				if ((iVar2 == 3 || iVar2 == 4) || iVar2 == 1)
				{
					iVar0 = 0;
				}
				else if (__LIB_0__::func_2() != 0)
				{
					iVar0 = 544882;
				}
				else
				{
					iVar0 = 20498;
				}
				break;
			case 4:
				switch (iVar2)
				{
					case 1:
						iVar0 = 56;
						break;
					default:
						if (__LIB_0__::func_2() != 0)
						{
							iVar0 = 544880;
						}
						else
						{
							iVar0 = 20498;
						}
						break;
				}
				break;
		}
	}
	if ((TASK::_0x038B1F1674F0E242(Global_35) || Global_1357517) || __LIB_0__::func_27(uParam0->f_151, 262144))
	{
		iVar0 = 0;
	}
	else if (__LIB_2__::func_65(Global_35, 0))
	{
		if (!__LIB_0__::func_27(uParam0->f_151, 32))
		{
			__LIB_1__::func_240(178, 1);
			__LIB_0__::func_7(&(uParam0->f_151), 32);
		}
		iVar0 = 16;
	}
	func_168(uParam0, iVar0);
	if (uParam0->f_157 == 2)
	{
		func_75(uParam0, 0);
	}
	iVar3 = func_169(uParam0);
	if (iVar3 != -1)
	{
		if (uParam0->f_156 != -1)
		{
			uParam0->f_154 = uParam0->f_156;
		}
	}
	switch (iVar3)
	{
		case 0:
			__LIB_9__::func_987(&(uParam0->f_57));
			__LIB_16__::func_753(&(uParam0->f_57), 1);
			uParam0->f_157 = 6;
			break;
		case 2:
			func_53(uParam0);
			uParam0->f_157 = 1;
			break;
		case 4:
			uParam0->f_187 = -1;
			func_53(uParam0);
			func_41(uParam0, 7);
			return false;
		case 16:
			HUD::_DISPLAY_HUD_COMPONENT(2011163970);
			func_53(uParam0);
			__LIB_0__::func_7(&(uParam0->f_151), 262144);
			break;
		case 5:
			__LIB_16__::func_753(&(uParam0->f_57), 2);
			__LIB_14__::func_578(uParam0, 0);
			uParam0->f_57.f_35 = 1;
			uParam0->f_157 = 2;
			func_53(uParam0);
			func_41(uParam0, 10);
			break;
		case 9:
			func_53(uParam0);
			uParam0->f_157 = 12;
			return true;
		case 10:
			func_53(uParam0);
			uParam0->f_157 = 11;
			return true;
		case 3:
			func_170(uParam0, __LIB_0__::func_27(uParam0->f_151, 16));
			uParam0->f_157 = 0;
			func_53(uParam0);
			HUD::_DISPLAY_HUD_COMPONENT(2011163970);
			break;
		default:
			return false;
	}
	return true;
}

int func_80(var uParam0)
{
	if (uParam0->f_157 == 10)
	{
		return func_94(uParam0);
	}
	else
	{
		switch (uParam0->f_154)
		{
			case 0:
				return func_171(uParam0);
			case 1:
				return func_172(uParam0);
			case 2:
				return func_173(uParam0);
			case 3:
				return func_174(uParam0);
			case 4:
				return func_175(uParam0);
		}
	}
	func_53(uParam0);
	return 0;
}

bool func_85(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = PED::_0xC488B8C0E52560D8(Global_35);
	bVar1 = PED::_0x2DC0E8DCBD3546E9(Global_35);
	if ((bVar0 || bVar1) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1944546609))
	{
		return false;
	}
	if (bVar1 && uParam0->f_156 != -1)
	{
		iVar2 = func_36(uParam0);
		if (iVar2 != uParam0->f_156)
		{
			return false;
		}
		if (uParam0->f_154 != iVar2)
		{
			uParam0->f_154 = iVar2;
			return false;
		}
	}
	if (__LIB_3__::func_63())
	{
		return false;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return false;
	}
	return true;
}

int func_87(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	int iVar26;
	int iVar27;
	int iVar28;
	var uVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	if (__LIB_7__::func_775())
	{
		Global_1935689.f_10191 = iParam0;
		__LIB_1__::func_698(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (__LIB_6__::func_126())
	{
		HUD::_0xBFFF81E12A745A5F();
		__LIB_5__::func_905(iParam0, 0);
		__LIB_1__::func_698(__LIB_7__::func_776(), 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_188(iParam0, bParam4))
	{
		return 0;
	}
	if (__LIB_19__::func_389(iParam0))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return 0;
	}
	iVar31 = 0;
	bVar32 = true;
	iVar33 = 1;
	bVar34 = true;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (__LIB_0__::func_192(iParam0, -2081717885))
	{
		__LIB_18__::func_510(iParam0, Var10, Var0, uVar29, bVar32, iVar33);
	}
	else if (__LIB_0__::func_192(iParam0, -1909684001))
	{
		__LIB_9__::func_181(iParam0, Var10, Var0, bVar32, iVar33);
	}
	else if (__LIB_0__::func_192(iParam0, 587975446))
	{
		__LIB_7__::func_777(iParam0, Var10);
	}
	else if (__LIB_0__::func_192(iParam0, 566155764))
	{
		if (!__LIB_0__::func_0(iParam0))
		{
			return 0;
		}
	}
	if (func_195(iParam0, bParam5, bParam6))
	{
		Global_1911772 = iParam0;
		Global_1911913 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (__LIB_0__::func_192(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		__LIB_4__::func_709(Var10, 1);
		iVar33 = 0;
		bVar32 = false;
	}
	else if ((__LIB_0__::func_192(iParam0, -1472964441) || __LIB_0__::func_192(iParam0, -228153877)) || __LIB_0__::func_192(iParam0, 566155764))
	{
	}
	else if (__LIB_0__::func_192(iParam0, 1919582297))
	{
		if (((__LIB_1__::func_652() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) || TASK::_0x0C3CB2E600C8977D(Global_35, 1)) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			return 0;
		}
		switch (iParam0)
		{
			case joaat("CONSUMABLE_HERBIVORE_BAIT"):
			case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case joaat("CONSUMABLE_PREDATOR_BAIT"):
			case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
		}
		Var0.f_1 = iParam0;
		Var0.f_3 = iParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		__LIB_4__::func_709(Var10, 0);
		bVar32 = false;
	}
	else if (__LIB_0__::func_356(iParam0) == joaat("EMOTE"))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = __LIB_7__::func_778(Global_1058888.f_49121.f_4.f_31);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		__LIB_4__::func_709(Var10, 0);
		iVar33 = 1;
	}
	else if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if (__LIB_0__::func_357(iParam0) == -999503751)
		{
			if (__LIB_0__::func_2() != -1)
			{
				return iVar33;
			}
			if (!__LIB_7__::func_842(iParam0))
			{
				__LIB_0__::func_45("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			bVar35 = __LIB_9__::func_992(7, iParam0);
			bVar36 = __LIB_9__::func_992(1, iParam0);
			if (bVar36 && !bVar35)
			{
				__LIB_0__::func_45("SI_ITEM_USE_OUTFITS_TEMP_HORSE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!__LIB_7__::func_830(7))
			{
				__LIB_0__::func_45("SI_ITEM_USE_OUTFITS_NO_SADDLE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!bVar35)
			{
				if (__LIB_0__::func_394(Global_35, __LIB_0__::func_398(7), 0))
				{
					__LIB_0__::func_45("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
				}
				else
				{
					__LIB_0__::func_45("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
				}
				return iVar33;
			}
			iVar30 = __LIB_0__::func_449(iParam0);
			if (iVar30 == -1)
			{
				__LIB_1__::func_452(20, iParam0, 8, 0, 0);
			}
			else
			{
				__LIB_1__::func_452(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (__LIB_0__::func_357(iParam0))
			{
				case -525676072:
				case -68128151:
				case 81053684:
					__LIB_5__::func_386(iParam0, 0);
					return iVar33;
				case -2061583405:
					__LIB_9__::func_997(iParam0);
					return 1;
				case -1719060085:
					if (iParam0 == Global_1946804.f_1497.f_1[23 /*3*/])
					{
						__LIB_1__::func_775(Global_35, joaat("CLOTHING_ITEM_GLOVES_NONE"), 0, -358215195, 1, 1, 1, 0, 1, 0);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayUnequipGlovesFidget", true, 15);
						__LIB_1__::func_704(iParam0, 0);
						return 1;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayEquipGlovesFidget", true, 15);
						__LIB_1__::func_704(iParam0, 1);
					}
					break;
			}
			__LIB_1__::func_775(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 0);
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("CUSTOM_SATCHEL"):
				__LIB_3__::func_739(1);
				break;
			case joaat("KIT_WARDROBE"):
				if (__LIB_0__::func_2() != -1)
				{
				}
				else if (!__LIB_7__::func_842(iParam0))
				{
					__LIB_0__::func_45("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar35 = __LIB_9__::func_992(7, iParam0);
					bVar36 = __LIB_9__::func_992(1, iParam0);
					if (bVar36 && !bVar35)
					{
						if (MAP::DOES_BLIP_EXIST(Global_36559))
						{
							MAP::REMOVE_BLIP(&Global_36559);
						}
						Global_36559 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::_BLIP_SET_MODIFIER(Global_36559, 673950256);
						__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_36559), 10000, 0, 0, 0, 1);
					}
					else if (!__LIB_7__::func_830(7))
					{
						__LIB_0__::func_45("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar35)
					{
						if (__LIB_0__::func_394(Global_35, __LIB_0__::func_398(7), 0))
						{
							__LIB_0__::func_45("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_36559))
							{
								MAP::REMOVE_BLIP(&Global_36559);
							}
							Global_36559 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
							MAP::_BLIP_SET_MODIFIER(Global_36559, 673950256);
							__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(0, -482898802, Global_36559), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = joaat("PLAYER_WARDROBE");
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							__LIB_4__::func_709(Var10, 0);
						}
						Jump @2541; //curOff = 1636
						__LIB_9__::func_182();
						Jump @2541; //curOff = 1643
						if (!__LIB_0__::func_27(Global_1392040.f_1, 1) || __LIB_0__::func_27(Global_1392040.f_1, 512))
						{
							if (__LIB_0__::func_2() == -1)
							{
								if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("player_camp")) > 3)
								{
								}
								else
								{
									StringCopy(&(Var10.f_10), "player_camp", 32);
									Var10.f_14 = 6096;
									if (__LIB_1__::func_200(120))
									{
										iVar31 |= 8;
										Var0.f_6 = { -1407.407f, 1508.33f, 239f };
										Var0.f_6.f_3 = 260f;
									}
									else if (__LIB_2__::func_774(15))
									{
										iVar31 |= 16;
										Var0.f_6 = { 1775.903f, 1255.647f, 189.6069f };
										Var0.f_6.f_3 = 90f;
									}
									else if (!__LIB_7__::func_842(iParam0) || ((!__LIB_0__::func_48(Global_35, __LIB_0__::func_398(7), __LIB_1__::func_136(7), 1) || __LIB_5__::func_917() != 0) && !__LIB_0__::func_48(Global_35, Global_1900383.f_393, 5f, 1)))
									{
										iVar31 |= 128 | 32;
									}
									if (__LIB_0__::func_27(iVar31, 128) && Global_1357522.f_10[1])
									{
										Global_1357522.f_10[1] = 0;
									}
									else if (!__LIB_0__::func_27(iVar31, 128) && Global_1357522.f_10[0])
									{
										Global_1357522.f_10[0] = 0;
									}
									Var0 = iVar31;
									Var10 = { Var0 };
									Var10.f_15 = 1;
									__LIB_4__::func_709(Var10, 2);
								}
							}
							else if (__LIB_7__::func_842(joaat("KIT_CAMP")))
							{
								if (__LIB_9__::func_982(1))
								{
									__LIB_9__::func_985(2);
								}
								else if (__LIB_7__::func_820(1))
								{
									__LIB_0__::func_45("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
									{
										__LIB_0__::func_45("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
									}
									else
									{
										__LIB_0__::func_45("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									__LIB_12__::func_191(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
								}
							}
							else if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								__LIB_0__::func_45("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								__LIB_12__::func_191(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
							else
							{
								__LIB_0__::func_45("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1392040.f_1 |= 2;
							iVar33 = 1;
						}
						Jump @2541; //curOff = 2207
						if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_KIT_BINOCULARS"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_BINOCULARS"), true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2248
						if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_KIT_CAMERA"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_CAMERA"), true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2289
						iVar27 = __LIB_7__::func_821(__LIB_0__::func_12());
						iVar28 = __LIB_7__::func_779();
						if (__LIB_0__::func_69(iVar27))
						{
							if (iVar27 == iVar28 && !__LIB_7__::func_780())
							{
								bVar34 = false;
							}
						}
						if (bVar34)
						{
							__LIB_0__::func_45("PROPERTY_SHAVE_INV", 10000, 0, 0, 0, 1);
						}
						Jump @2541; //curOff = 2359
						func_226(iParam0, 1, 0, 562618531, 0);
						Jump @2541; //curOff = 2377
						__LIB_1__::func_240(497, 1);
						Jump @2541; //curOff = 2388
						__LIB_9__::func_183(1);
						Jump @2541; //curOff = 2396
						func_226(iParam0, 1, 0, 562618531, 0);
						func_228(joaat("PROVISION_BEAUS_GIFT_2"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						Jump @2541; //curOff = 2437
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("DOCUMENT_PLAYER_JOURNAL"), 1928812891, 1, 0, -1082130432 /* Float: -1f */);
						bVar32 = false;
						return 1;
						Jump @2541; //curOff = 2472
						Var0.f_2 = joaat("DOCUMENT_NATIVE_AMERICAN_JOURNAL");
						Var10 = { Var0 };
						StringCopy(&(Var10.f_10), "native_american_journal", 32);
						Var10.f_14 = 512;
						Var10.f_15 = 1;
						__LIB_4__::func_709(Var10, 0);
						iVar33 = 0;
						bVar32 = false;
						Jump @2541; //curOff = 2532
						iVar33 = 0;
					}
				}
				if (bVar32)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar33;
				default:
					break;
		}
	}
}

int func_89(var uParam0, int iParam1)
{
	if (!func_85(uParam0) || (MISC::GET_GAME_TIMER() - uParam0->f_196) < 500)
	{
		return 0;
	}
	if (!__LIB_0__::func_139(uParam0->f_162[8]))
	{
		return 0;
	}
	if (!__LIB_0__::func_572(uParam0->f_162[8], 0) && iParam1 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
	{
		__LIB_1__::func_221(uParam0->f_162[8], 1, 1);
	}
	if (__LIB_1__::func_732(uParam0->f_162[8], 1))
	{
		__LIB_12__::func_110(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736 /* Float: 6f */);
		__LIB_1__::func_748(&(uParam0->f_162[8]), 1, 1);
		return 1;
	}
	return 0;
}

void func_93(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	var uVar9;
	var uVar10;
	struct<2> Var11;
	struct<7> Var33[20];
	bool bVar174;
	bool bVar175;
	if ((__LIB_0__::func_192(iParam0, 1573112293) || __LIB_0__::func_192(iParam0, 672467738)) || __LIB_0__::func_192(iParam0, -550842268))
	{
		bVar8 = true;
	}
	Var11.f_1 = 20;
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1935496.f_26 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var11))
	{
		iVar0 = 0;
		while (iVar0 < Var11)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var11.f_1[iVar0], &(Var33[iVar0 /*7*/])))
			{
				if (-943921969 == Var33[iVar0 /*7*/].f_1)
				{
					fVar1 = __LIB_9__::func_271(0, (IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1));
					__LIB_9__::func_272((IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1), 1);
					__LIB_0__::func_597(0, 7000);
					bVar175 = true;
				}
				else if (-1104847406 == Var33[iVar0 /*7*/].f_1)
				{
					fVar3 = __LIB_9__::func_271(2, (IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1));
					__LIB_9__::func_273((IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1));
					__LIB_0__::func_597(2, 7000);
					bVar174 = true;
				}
				else if (381158954 == Var33[iVar0 /*7*/].f_1)
				{
					fVar2 = __LIB_9__::func_271(1, (IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1));
					__LIB_9__::func_274((IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1));
					__LIB_0__::func_597(1, 7000);
				}
				else if (-416929031 == Var33[iVar0 /*7*/].f_1)
				{
					fVar4 = __LIB_6__::func_41((IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1), (Var33[iVar0 /*7*/].f_5 / fParam1));
					if (__LIB_7__::func_840(&uVar9, &uVar10, fVar4))
					{
						__LIB_9__::func_160(fVar4, 1, bVar8, 1);
						__LIB_0__::func_597(0, 7000);
						bVar175 = true;
					}
				}
				else if (1857353317 == Var33[iVar0 /*7*/].f_1)
				{
					fVar5 = __LIB_6__::func_41((IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1), (Var33[iVar0 /*7*/].f_5 / fParam1));
					if (__LIB_7__::func_840(&uVar9, &uVar10, fVar5))
					{
						__LIB_9__::func_159(fVar5, 1, bVar8, 1);
						__LIB_0__::func_597(2, 7000);
						bVar174 = true;
					}
				}
				else if (1681823811 == Var33[iVar0 /*7*/].f_1)
				{
					fVar6 = __LIB_6__::func_41((IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1), (Var33[iVar0 /*7*/].f_5 / fParam1));
					if (__LIB_7__::func_840(&uVar9, &uVar10, fVar6))
					{
						__LIB_9__::func_158(fVar6, 1, bVar8, 1);
						__LIB_0__::func_597(1, 7000);
					}
				}
				else if (-816334026 == Var33[iVar0 /*7*/].f_1)
				{
					__LIB_12__::func_187((BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_2) / fParam1), 1);
				}
				else if (bParam2)
				{
					if (2062242710 == Var33[iVar0 /*7*/].f_1)
					{
						fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_3), Var33[iVar0 /*7*/].f_4);
						__LIB_9__::func_278(19, fVar7);
						bVar175 = true;
					}
					else if (-826379728 == Var33[iVar0 /*7*/].f_1)
					{
						fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_3), Var33[iVar0 /*7*/].f_4);
						__LIB_9__::func_278(20, fVar7);
						bVar174 = true;
					}
					else if (-1191740624 == Var33[iVar0 /*7*/].f_1)
					{
						fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_3), Var33[iVar0 /*7*/].f_4);
						__LIB_9__::func_278(18, fVar7);
					}
					else if (1869697234 == Var33[iVar0 /*7*/].f_1)
					{
						fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_3), Var33[iVar0 /*7*/].f_4);
						__LIB_9__::func_278(0, fVar7);
						bVar175 = true;
					}
					else if (1342237631 == Var33[iVar0 /*7*/].f_1)
					{
						fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_3), Var33[iVar0 /*7*/].f_4);
						__LIB_9__::func_278(2, fVar7);
						bVar174 = true;
					}
					else if (-1240225157 == Var33[iVar0 /*7*/].f_1)
					{
						fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_3), Var33[iVar0 /*7*/].f_4);
						__LIB_9__::func_278(1, fVar7);
					}
				}
			}
			iVar0++;
		}
		__LIB_9__::func_312(iParam0, bParam2, bVar174, bVar175);
		PLAYER::_0x0E1DB1F8F5B561DC(fVar1, fVar2, fVar3, BUILTIN::ROUND((fVar4 / 2f)), BUILTIN::ROUND((fVar6 / 2f)), BUILTIN::ROUND((fVar5 / 2f)));
	}
}

int func_94(var uParam0)
{
	bool bVar0;
	int iVar1;
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
	if (!__LIB_0__::func_27(uParam0->f_151, 8))
	{
		func_244(uParam0);
		HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(1323335645, "SLEEP", 1, 0, 0, 0);
		bVar0 = false;
		if (__LIB_1__::func_732(uParam0->f_162[12], 1))
		{
			bVar0 = true;
			uParam0->f_186 = 6;
		}
		else if (__LIB_1__::func_732(uParam0->f_162[13], 1))
		{
			bVar0 = true;
			uParam0->f_186 = 12;
		}
		else if (__LIB_1__::func_732(uParam0->f_162[14], 1))
		{
			bVar0 = true;
			uParam0->f_186 = 18;
		}
		else if (__LIB_1__::func_732(uParam0->f_162[15], 1))
		{
			bVar0 = true;
			uParam0->f_186 = 0;
		}
		if (bVar0)
		{
			uParam0->f_187 = -1;
			if (!TASK::_DOES_SCENARIO_POINT_EXIST((*uParam0)[5]))
			{
				(*uParam0)[5] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(uParam0->f_7[5 /*3*/], uParam0->f_191, 3f, 0, false);
			}
			__LIB_0__::func_7(&(uParam0->f_151), 8);
			__LIB_9__::func_805(256);
			if (!__LIB_0__::func_27(uParam0->f_151, 1))
			{
				if (uParam0->f_154 == 4)
				{
					uParam0->f_195 = ANIMSCENE::_CREATE_ANIM_SCENE("scenario@MECH@CAMP_SETUP@sit_yawn_exit", 0, 0, false, true);
				}
				else
				{
					uParam0->f_195 = ANIMSCENE::_CREATE_ANIM_SCENE("scenario@MECH@CAMP_SETUP@kneel_yawn_exit", 0, 0, false, true);
				}
			}
			uParam0->f_156 = 5;
			uParam0->f_193 = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_17__::func_514(uParam0->f_186), 0, 0, false, true);
			if (__LIB_0__::func_644(524288))
			{
				uParam0->f_186 = 6;
			}
			if (Global_1392040.f_7 == -15)
			{
				Global_1392040.f_7 = __LIB_0__::func_23();
			}
			iVar1 = Global_1392040.f_7;
			__LIB_1__::func_446(&iVar1, 0, 0, 3, 0, 0, 0, 0);
			if (!__LIB_3__::func_77(iVar1))
			{
				Global_1392040.f_8++;
			}
			else
			{
				Global_1392040.f_8 = 0;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_193);
			func_53(uParam0);
		}
		else
		{
			__LIB_9__::func_817(256);
		}
	}
	else if (__LIB_0__::func_27(uParam0->f_151, 8))
	{
		if (!__LIB_0__::func_27(uParam0->f_151, 1))
		{
			if (__LIB_12__::func_101(uParam0->f_195))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_195, "player", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_195, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_195);
				__LIB_0__::func_8(&(uParam0->f_151), 8);
				__LIB_9__::func_817(256);
				uParam0->f_187 = -1;
				func_41(uParam0, 8);
				return 1;
			}
			else
			{
				__LIB_12__::func_101(uParam0->f_195);
				return 0;
			}
		}
	}
	if (__LIB_1__::func_732(uParam0->f_162[3], 1) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
	{
		__LIB_9__::func_817(256);
		uParam0->f_187 = -1;
		func_53(uParam0);
		func_41(uParam0, 5);
		return 1;
	}
	return 0;
}

void func_96(var uParam0)
{
	if (!__LIB_0__::func_27(uParam0->f_151, 2048))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_159))
		{
			uParam0->f_159 = TASK::_GET_SCENARIO_POINT_ENTITY((*uParam0)[0], "p_boiler02x");
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_159))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_159, true);
			__LIB_0__::func_7(&(uParam0->f_150), 1);
			uParam0->f_57.f_83 = 1;
		}
		else
		{
			__LIB_0__::func_8(&(uParam0->f_150), 1);
			uParam0->f_57.f_83 = 0;
		}
		__LIB_0__::func_7(&(uParam0->f_151), 2048);
	}
	else if (uParam0->f_57.f_83)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_159))
		{
			uParam0->f_57.f_83 = 0;
			__LIB_0__::func_8(&(uParam0->f_150), 1);
			uParam0->f_57.f_84 = 0;
		}
	}
}

bool func_97(var uParam0, var uParam1)
{
	__LIB_4__::func_229(131072);
	if (func_249(uParam0))
	{
		ENTITY::SET_ENTITY_PROOFS(Global_35, 0, false);
		return true;
	}
	else
	{
		ENTITY::SET_ENTITY_PROOFS(Global_35, 2, false);
	}
	return false;
}

void func_99(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	struct<2> Var1;
	vector3 vVar3;
	int iVar10;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return;
	}
	__LIB_0__::func_15(__LIB_0__::func_358(joaat("ITEMS_CRAFTED")), iParam1);
	if (bParam3 && iParam0 != joaat("CONSUMABLE_COFFEE"))
	{
		if (__LIB_0__::func_2() == -1)
		{
			if (__LIB_0__::func_192(iParam0, -1588156645))
			{
				iVar0 = __LIB_0__::func_775(__LIB_0__::func_914(iParam0, 0), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar0))
				{
					__LIB_0__::func_915(iVar0);
				}
			}
		}
		if (iParam4 == 0)
		{
			if (__LIB_0__::func_356(iParam0) == joaat("HORSE_EQUIPMENT"))
			{
				if (func_255(iParam0, 0))
				{
					__LIB_1__::func_158(iParam0, 1, 0, 1, 0);
				}
			}
			else
			{
				func_228(iParam0, iParam1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		else
		{
			__LIB_16__::func_766(iParam0, iParam4, iParam1);
		}
	}
	Var1 = { __LIB_12__::func_168(iParam0) };
	STATS::_STAT_ID_INCREMENT_INT(&Var1, iParam1);
	if (__LIB_12__::func_566(iParam0, 0))
	{
		Var1 = { __LIB_0__::func_38(joaat("MADE_RECIPE_TYPE"), joaat("FOOD")) };
	}
	else if (__LIB_12__::func_566(iParam0, 2))
	{
		Var1 = { __LIB_0__::func_38(joaat("MADE_RECIPE_TYPE"), joaat("AMMO")) };
	}
	else if (__LIB_12__::func_566(iParam0, 5))
	{
		Var1 = { __LIB_0__::func_38(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE")) };
	}
	else if (__LIB_12__::func_566(iParam0, 1))
	{
		Var1 = { __LIB_0__::func_38(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES")) };
	}
	else if (__LIB_12__::func_566(iParam0, 3))
	{
		Var1 = { __LIB_0__::func_38(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS")) };
	}
	else if (__LIB_12__::func_566(iParam0, 4))
	{
		Var1 = { __LIB_0__::func_38(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING")) };
	}
	STATS::_STAT_ID_INCREMENT_INT(&Var1, 1);
	if (__LIB_0__::func_2() == 0)
	{
		Global_1051039 = iParam0;
		return;
	}
	if (bParam2)
	{
		if (__LIB_12__::func_566(iParam0, 0))
		{
			__LIB_1__::func_696(40);
		}
		else
		{
			__LIB_1__::func_696(39);
		}
	}
	iVar10 = 0;
	if ((ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar3) && vVar3.z == joaat("CLOTHING")) && __LIB_12__::func_188(Global_35, iParam0, &iVar10))
	{
		__LIB_1__::func_775(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 1, 0);
	}
}

void func_110(var uParam0)
{
	int iVar0;
	if (func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 250)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
		if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
		{
			__LIB_12__::func_110(joaat("KNIFE1_TRANS_KNEEL1"), 1086324736 /* Float: 6f */);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
		else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
		{
			__LIB_12__::func_110(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 1086324736 /* Float: 6f */);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
		else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && (MISC::GET_FRAME_COUNT() % 2) == 0)
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
	}
}

void func_153(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_183))
	{
		__LIB_1__::func_748(&(uParam0->f_183), 1, 1);
	}
}

void func_154(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_181))
	{
		__LIB_1__::func_748(&(uParam0->f_181), 1, 1);
	}
}

bool func_156(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		iVar2 = __LIB_12__::func_111(iVar1);
		if (((__LIB_12__::func_164(iVar2) && !ENTITY::_0x8DE41E9902E85756(iVar0)) && FLOCK::_0xF8B48A361DC388AE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)) != 2) && !FIRE::_0xCDC25355C0D65963(iVar0))
		{
			uParam0->f_57.f_77 = iVar2;
			uParam0->f_57.f_78 = -214678071;
			if (__LIB_0__::func_139(uParam0->f_182))
			{
				__LIB_4__::func_12(uParam0->f_182, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_159(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar25;
	int iVar26;
	int iVar27[10];
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = __LIB_3__::func_697(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!__LIB_0__::func_708(0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		__LIB_1__::func_451(iVar1, 0);
	}
	else if (PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
	{
		Var2.f_1 = 10;
		Var2.f_12 = 10;
		MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar0), &Var2, 0);
		iVar25 = 0;
		while (iVar25 < 10)
		{
			iVar26 = Var2.f_1[iVar25];
			if (__LIB_0__::func_144(iVar26, 0))
			{
				if (!bParam1 || __LIB_12__::func_570(iVar26))
				{
					func_228(iVar26, Var2.f_12[iVar25], bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar25++;
		}
	}
	else
	{
		iVar39 = PED::_GET_PED_DAMAGE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		if (__LIB_1__::func_707(joaat("PROVISION_TRINKET_BUCK_ANTLER"), 1, 0))
		{
			if (iVar39 < 2 && MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				iVar40 = iVar39;
				iVar40++;
				iVar39 = iVar40;
			}
		}
		iVar41 = FLOCK::_0xF8B48A361DC388AE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		iVar42 = __LIB_9__::func_806(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar41);
		PED::_0x6B89FAA36FC909A3(&iVar27, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar39, iVar42);
		iVar38 = 0;
		while (iVar38 < iVar27)
		{
			if (iVar27[iVar38] != 0)
			{
				if (__LIB_9__::func_807(iVar0) && !__LIB_9__::func_808(iVar27[iVar38]))
				{
					iVar27[iVar38] = 0;
				}
				else if (!bParam1 || __LIB_12__::func_570(iVar27[iVar38]))
				{
					func_228(iVar27[iVar38], 1, bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar38++;
		}
	}
	iVar43 = __LIB_9__::func_984(iVar0);
	if (!__LIB_0__::func_144(iVar43, 0))
	{
		iVar43 = __LIB_8__::func_694(iVar0);
	}
	if (__LIB_0__::func_144(iVar43, 0))
	{
		func_327(iVar43, 1, 1, -142743235, 0);
	}
	ENTITY::_DELETE_CARRIABLE(&iVar0);
}

void func_168(var uParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -996707397))
	{
		__LIB_0__::func_7(&(uParam0->f_151), 2);
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_151), 2);
	}
	if (__LIB_0__::func_27(iParam1, 1))
	{
		if (!__LIB_0__::func_139(uParam0->f_162[0]))
		{
			uParam0->f_162[0] = __LIB_4__::func_864("KNEEL_FIRE", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_4__::func_12(uParam0->f_162[0], 1754796591, 0, 1);
		}
	}
	else if (__LIB_0__::func_139(uParam0->f_162[0]))
	{
		__LIB_1__::func_748(&(uParam0->f_162[0]), 1, 1);
	}
	if (((__LIB_0__::func_27(iParam1, 4096) && __LIB_0__::func_27(uParam0->f_150, 16)) && !__LIB_0__::func_644(536870912)) && uParam0->f_157 != 2)
	{
		MISC::SET_BIT(&(Global_1956580.f_1), 2);
		MISC::SET_BIT(&(Global_1956580.f_1), 3);
		if (!__LIB_0__::func_139(uParam0->f_162[5]))
		{
			uParam0->f_162[5] = __LIB_4__::func_864("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_4__::func_12(uParam0->f_162[5], 1754796591, 0, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
		if (__LIB_0__::func_139(uParam0->f_162[5]))
		{
			__LIB_1__::func_748(&(uParam0->f_162[5]), 1, 1);
		}
	}
	if (__LIB_0__::func_27(iParam1, 64) && __LIB_0__::func_27(uParam0->f_150, 16384))
	{
		if (!__LIB_0__::func_139(uParam0->f_162[17]))
		{
			uParam0->f_162[17] = __LIB_4__::func_864("CAMP_FT_PROMPT", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 2, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_4__::func_12(uParam0->f_162[17], 1754796591, 0, 1);
		}
	}
	else if (__LIB_0__::func_139(uParam0->f_162[17]))
	{
		__LIB_1__::func_748(&(uParam0->f_162[17]), 1, 1);
	}
	if ((((__LIB_0__::func_27(iParam1, 16384) && !__LIB_0__::func_644(536870912)) && uParam0->f_157 != 2) && __LIB_0__::func_2() != 0) && !__LIB_2__::func_774(15))
	{
		if (!__LIB_0__::func_139(uParam0->f_162[9]) && __LIB_1__::func_707(joaat("DOCUMENT_PLAYER_JOURNAL"), 1, 0))
		{
			uParam0->f_162[9] = __LIB_4__::func_864("JOURNAL", joaat("INPUT_OPEN_JOURNAL"), 3, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
			__LIB_1__::func_522(uParam0->f_162[9], 21, 1, 1);
			__LIB_1__::func_522(uParam0->f_162[9], 13, 1, 1);
			__LIB_1__::func_522(uParam0->f_162[9], 20, 1, 1);
			__LIB_4__::func_12(uParam0->f_162[9], 1754796591, 0, 1);
		}
		if (!__LIB_0__::func_139(uParam0->f_162[10]))
		{
			uParam0->f_162[10] = __LIB_4__::func_864("CAMP_SATCHEL", joaat("INPUT_OPEN_SATCHEL_MENU"), 3, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
			__LIB_1__::func_522(uParam0->f_162[10], 21, 1, 1);
			__LIB_4__::func_12(uParam0->f_162[10], 1754796591, 0, 1);
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	}
	else
	{
		if (uParam0->f_154 != 5)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
		}
		if (__LIB_0__::func_139(uParam0->f_162[9]))
		{
			__LIB_1__::func_748(&(uParam0->f_162[9]), 1, 1);
		}
		if (__LIB_0__::func_139(uParam0->f_162[10]))
		{
			__LIB_1__::func_748(&(uParam0->f_162[10]), 1, 1);
		}
	}
	if (__LIB_0__::func_644(134217728))
	{
		if (__LIB_0__::func_139(uParam0->f_162[9]))
		{
			__LIB_1__::func_221(uParam0->f_162[9], 0, 1);
		}
		if (__LIB_0__::func_139(uParam0->f_162[10]))
		{
			__LIB_1__::func_221(uParam0->f_162[10], 0, 1);
		}
	}
	else
	{
		if (__LIB_0__::func_139(uParam0->f_162[9]) && !__LIB_0__::func_572(uParam0->f_162[9], 0))
		{
			__LIB_1__::func_221(uParam0->f_162[9], 1, 1);
		}
		if (__LIB_0__::func_139(uParam0->f_162[10]) && !__LIB_0__::func_572(uParam0->f_162[10], 0))
		{
			__LIB_1__::func_221(uParam0->f_162[10], 1, 1);
		}
	}
	if ((((__LIB_0__::func_644(1) || __LIB_0__::func_644(134217728)) || __LIB_0__::func_27(uParam0->f_151, 2)) && !__LIB_0__::func_644(4096)) && uParam0->f_157 != 2)
	{
		if (__LIB_0__::func_139(uParam0->f_162[5]))
		{
			__LIB_1__::func_221(uParam0->f_162[5], 0, 1);
		}
	}
	else if (__LIB_0__::func_139(uParam0->f_162[5]))
	{
		__LIB_1__::func_221(uParam0->f_162[5], 1, 1);
	}
	if ((__LIB_0__::func_27(iParam1, 2) && __LIB_0__::func_27(uParam0->f_150, 1)) && uParam0->f_57.f_84 > 0)
	{
		func_96(uParam0);
		if (!__LIB_0__::func_139(uParam0->f_162[2]))
		{
			uParam0->f_162[2] = __LIB_4__::func_864("POUR_COFFEE", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_4__::func_12(uParam0->f_162[2], 1754796591, 0, 1);
		}
	}
	else if (__LIB_0__::func_139(uParam0->f_162[2]))
	{
		__LIB_1__::func_748(&(uParam0->f_162[2]), 1, 1);
	}
	if (__LIB_0__::func_27(iParam1, 8) && __LIB_0__::func_27(uParam0->f_150, 2))
	{
		if (!__LIB_0__::func_139(uParam0->f_162[1]))
		{
			if (uParam0->f_154 == 4)
			{
				uParam0->f_162[1] = __LIB_4__::func_864("PLAYER_SIT", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else if (__LIB_0__::func_27(iParam1, 32))
			{
				uParam0->f_162[1] = __LIB_4__::func_864("PLAYER_SIT", joaat("INPUT_CONTEXT_X"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				uParam0->f_162[1] = __LIB_4__::func_864("PLAYER_SIT", joaat("INPUT_CONTEXT_Y"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			__LIB_4__::func_12(uParam0->f_162[1], 1754796591, 0, 1);
		}
	}
	else if (__LIB_0__::func_139(uParam0->f_162[1]))
	{
		__LIB_1__::func_748(&(uParam0->f_162[1]), 1, 1);
	}
	if (__LIB_0__::func_644(4) || __LIB_0__::func_27(uParam0->f_151, 2))
	{
		if (__LIB_0__::func_139(uParam0->f_162[1]))
		{
			__LIB_1__::func_221(uParam0->f_162[1], 0, 1);
		}
	}
	else if (__LIB_0__::func_139(uParam0->f_162[1]))
	{
		__LIB_1__::func_221(uParam0->f_162[1], 1, 1);
	}
	if ((__LIB_0__::func_27(iParam1, 16) && !__LIB_0__::func_644(536870912)) && uParam0->f_157 != 2)
	{
		if (!__LIB_0__::func_139(uParam0->f_162[3]))
		{
			uParam0->f_162[3] = __LIB_4__::func_864("LEAVE", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			if (__LIB_0__::func_27(iParam1, 524288) && __LIB_0__::func_27(uParam0->f_151, 131072))
			{
				__LIB_1__::func_382(uParam0->f_162[3], 0, 1);
				__LIB_1__::func_522(uParam0->f_162[3], 20, 1, 1);
				__LIB_1__::func_522(uParam0->f_162[3], 13, 1, 1);
			}
			__LIB_4__::func_12(uParam0->f_162[3], 1754796591, 0, 1);
		}
		if (__LIB_0__::func_27(iParam1, 524288) && __LIB_0__::func_27(uParam0->f_151, 131072))
		{
			if (!__LIB_0__::func_139(uParam0->f_162[16]))
			{
				uParam0->f_162[16] = __LIB_4__::func_864("LEAVE", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
				__LIB_1__::func_522(uParam0->f_162[16], 19, 1, 1);
				__LIB_1__::func_522(uParam0->f_162[16], 20, 1, 1);
				__LIB_1__::func_522(uParam0->f_162[16], 13, 1, 1);
				__LIB_12__::func_122(&(uParam0->f_162[16]), "INPUT_PCAMP_TEARDWN");
				__LIB_4__::func_12(uParam0->f_162[16], 1754796591, 0, 1);
			}
		}
		else if (__LIB_0__::func_139(uParam0->f_162[16]))
		{
			__LIB_1__::func_748(&(uParam0->f_162[16]), 1, 1);
		}
	}
	else
	{
		if (__LIB_0__::func_139(uParam0->f_162[3]))
		{
			__LIB_1__::func_748(&(uParam0->f_162[3]), 1, 1);
		}
		if (__LIB_0__::func_139(uParam0->f_162[16]))
		{
			__LIB_1__::func_748(&(uParam0->f_162[16]), 1, 1);
		}
	}
	if (__LIB_0__::func_644(1048576) || __LIB_0__::func_27(uParam0->f_151, 2))
	{
		if (__LIB_0__::func_139(uParam0->f_162[3]) && __LIB_0__::func_572(uParam0->f_162[3], 0))
		{
			__LIB_1__::func_221(uParam0->f_162[3], 0, 1);
			if (__LIB_0__::func_27(iParam1, 524288) && __LIB_0__::func_27(uParam0->f_151, 131072))
			{
				__LIB_1__::func_382(uParam0->f_162[3], 0, 1);
			}
		}
	}
	else if (__LIB_0__::func_139(uParam0->f_162[3]) && !__LIB_0__::func_572(uParam0->f_162[3], 0))
	{
		__LIB_1__::func_221(uParam0->f_162[3], 1, 1);
		if (__LIB_0__::func_27(iParam1, 524288) && __LIB_0__::func_27(uParam0->f_151, 131072))
		{
			__LIB_1__::func_382(uParam0->f_162[3], 0, 1);
		}
	}
	if (__LIB_0__::func_644(256))
	{
		if (__LIB_0__::func_139(uParam0->f_162[16]))
		{
			__LIB_1__::func_221(uParam0->f_162[16], 0, 1);
		}
	}
	else if (__LIB_0__::func_139(uParam0->f_162[16]))
	{
		__LIB_1__::func_221(uParam0->f_162[16], 1, 1);
	}
	if (__LIB_0__::func_2() != 0 && __LIB_0__::func_27(uParam0->f_150, 256))
	{
		if (!__LIB_0__::func_644(2048) || __LIB_0__::func_27(uParam0->f_151, 2))
		{
			if (((__LIB_0__::func_27(iParam1, 32) && !__LIB_0__::func_644(536870912)) && uParam0->f_157 != 2) && func_333(uParam0))
			{
				if (!__LIB_0__::func_139(uParam0->f_162[4]))
				{
					uParam0->f_162[4] = __LIB_4__::func_864("SLEEP", joaat("INPUT_CONTEXT_Y"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_4__::func_12(uParam0->f_162[4], 1754796591, 0, 1);
				}
			}
			else if (__LIB_0__::func_139(uParam0->f_162[4]))
			{
				__LIB_1__::func_748(&(uParam0->f_162[4]), 1, 1);
			}
		}
	}
	if (((__LIB_0__::func_644(2048) || __LIB_0__::func_644(134217728)) || __LIB_0__::func_27(uParam0->f_151, 2)) || __LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		if (__LIB_0__::func_139(uParam0->f_162[4]))
		{
			__LIB_1__::func_221(uParam0->f_162[4], 0, 1);
		}
	}
	else if (__LIB_0__::func_139(uParam0->f_162[4]))
	{
		__LIB_1__::func_221(uParam0->f_162[4], 1, 1);
	}
	uParam0->f_185 = __LIB_12__::func_109(HUD::_UIPROMPT_GET_GROUP_ACTIVE_PAGE(1754796591));
	iVar0 = 1;
	if (!__LIB_0__::func_644(536870912))
	{
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_152, 3f, 0, iVar0, 1754796591, uParam0->f_185, 0);
	}
}

int func_169(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_644(16777216) || __LIB_0__::func_27(uParam0->f_151, 524288))
	{
		__LIB_0__::func_8(&(uParam0->f_151), 524288);
		__LIB_4__::func_226(16777216);
		uParam0->f_197 = -1;
		return 5;
	}
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (__LIB_0__::func_139(uParam0->f_162[iVar0]))
		{
			if (iVar0 == 3)
			{
				if (__LIB_0__::func_572(uParam0->f_162[iVar0], 0))
				{
					if (__LIB_1__::func_732(uParam0->f_162[iVar0], 1))
					{
						return iVar0;
					}
					else if (__LIB_12__::func_123())
					{
						if (!__LIB_0__::func_75(&(uParam0->f_198)))
						{
							__LIB_1__::func_148(&(uParam0->f_198));
						}
						if (__LIB_1__::func_313(&(uParam0->f_198), 0.5f))
						{
							return iVar0;
						}
					}
					else if (__LIB_0__::func_75(&(uParam0->f_198)))
					{
						__LIB_0__::func_37(&(uParam0->f_198));
					}
				}
			}
			else if ((iVar0 == 16 || iVar0 == 9) || iVar0 == 10)
			{
				if (__LIB_0__::func_567(uParam0->f_162[iVar0], 1))
				{
					return iVar0;
				}
				else if (iVar0 == 16)
				{
					if (__LIB_1__::func_530(uParam0->f_162[16], 1))
					{
						if (!__LIB_0__::func_75(&(uParam0->f_57.f_89)))
						{
							__LIB_1__::func_148(&(uParam0->f_57.f_89));
						}
						else if (__LIB_1__::func_285(&(uParam0->f_57.f_89), 0.1f))
						{
							__LIB_1__::func_484(uParam0->f_162[16], "CAMP_TEARDOWN", 1);
						}
					}
					else
					{
						if (__LIB_0__::func_75(&(uParam0->f_57.f_89)))
						{
							__LIB_0__::func_37(&(uParam0->f_57.f_89));
						}
						__LIB_1__::func_484(uParam0->f_162[16], "LEAVE", 1);
					}
				}
			}
			else if (__LIB_1__::func_732(uParam0->f_162[iVar0], 1))
			{
				if (iVar0 == 5)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
				}
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_170(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_8(&(uParam0->f_151), 16);
	}
}

int func_171(var uParam0)
{
	if (func_339(uParam0) && !__LIB_0__::func_27(uParam0->f_151, 4))
	{
		return 1;
	}
	if (!func_85(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_157)
	{
		case 1:
			switch (uParam0->f_155)
			{
				case 8:
					__LIB_12__::func_110(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
				case 7:
					__LIB_12__::func_110(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
				case 6:
					if (func_340(uParam0, 0))
					{
						if (__LIB_12__::func_110(joaat("KNEEL1_TRANS_COFFEE1"), 1f))
						{
							return 1;
						}
					}
					break;
				default:
					func_341(uParam0);
					break;
			}
			break;
		case 9:
			uParam0->f_156 = 4;
			if (func_342(uParam0))
			{
				if (__LIB_12__::func_124(Global_35, (*uParam0)[4], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL1@MALE_A@KNEEL1_TRANS_STOOL1", "KNEEL1_TRANS_STOOL1", "PROP_PLAYER_SEAT_CHAIR_GENERIC_HUNTING1"))
				{
					__LIB_0__::func_8(&(uParam0->f_151), 4);
				}
			}
			break;
		case 6:
			func_342(uParam0);
			break;
	}
	return 0;
}

int func_172(var uParam0)
{
	if (func_339(uParam0) && !__LIB_0__::func_27(uParam0->f_151, 4))
	{
		return 1;
	}
	if (!func_85(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_157)
	{
		case 1:
			switch (uParam0->f_155)
			{
				case 8:
					__LIB_12__::func_110(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
				case 7:
					__LIB_12__::func_110(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
				case 6:
					if (func_340(uParam0, 1))
					{
						__LIB_12__::func_110(joaat("KNEEL2_TRANS_COFFEE2"), 1f);
						return 1;
					}
					break;
				default:
					func_341(uParam0);
					break;
			}
			break;
		case 9:
			uParam0->f_156 = 4;
			if (func_344(uParam0))
			{
				if (__LIB_12__::func_124(Global_35, (*uParam0)[4], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL2@MALE_A@KNEEL2_TRANS_STOOL1", "KNEEL2_TRANS_STOOL1", "PROP_PLAYER_SEAT_CHAIR_GENERIC_HUNTING1"))
				{
				}
			}
			break;
		case 6:
			func_344(uParam0);
			break;
	}
	return 0;
}

int func_173(var uParam0)
{
	if (func_339(uParam0) && !__LIB_0__::func_27(uParam0->f_151, 4))
	{
		return 1;
	}
	if (!func_85(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_157)
	{
		case 1:
			switch (uParam0->f_155)
			{
				case 8:
					__LIB_12__::func_110(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
				case 7:
					__LIB_12__::func_110(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
				case 6:
					uParam0->f_156 = 1;
					if (func_340(uParam0, 2))
					{
						if (__LIB_12__::func_124(Global_35, (*uParam0)[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COFFEE2", "KNEEL3_TRANS_COFFEE2", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
						{
							return 1;
						}
					}
					break;
				default:
					func_341(uParam0);
					break;
			}
			break;
		case 9:
			if (__LIB_12__::func_124(Global_35, (*uParam0)[4], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_STOOL1", "KNEEL3_TRANS_STOOL1", "PROP_PLAYER_SEAT_CHAIR_GENERIC_HUNTING1"))
			{
			}
			break;
	}
	return 0;
}

int func_174(var uParam0)
{
	if (func_339(uParam0) && !__LIB_0__::func_27(uParam0->f_151, 4))
	{
		return 1;
	}
	if (!func_85(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_157)
	{
		case 1:
			switch (uParam0->f_155)
			{
				case 8:
					__LIB_12__::func_110(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
				case 7:
					__LIB_12__::func_110(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
				case 6:
					uParam0->f_156 = 0;
					if (func_340(uParam0, 3))
					{
						if (__LIB_12__::func_124(Global_35, (*uParam0)[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COFFEE1", "KNEEL4_TRANS_COFFEE1", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
						{
							return 1;
						}
					}
					break;
				default:
					func_341(uParam0);
					break;
			}
			break;
		case 9:
			uParam0->f_156 = 4;
			if (__LIB_12__::func_124(Global_35, (*uParam0)[4], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_STOOL1", "KNEEL4_TRANS_STOOL1", "PROP_PLAYER_SEAT_CHAIR_GENERIC_HUNTING1"))
			{
			}
			break;
	}
	return 0;
}

int func_175(var uParam0)
{
	if (func_339(uParam0) && !__LIB_0__::func_27(uParam0->f_151, 4))
	{
		return 1;
	}
	if (!func_85(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_157)
	{
		case 1:
			if (!PED::_0x68821369A2CEADD5(Global_35, -260069069))
			{
				if (func_340(uParam0, 4))
				{
					__LIB_12__::func_110(-260069069, 1086324736 /* Float: 6f */);
				}
			}
			break;
		case 6:
			uParam0->f_156 = 0;
			if (__LIB_12__::func_124(Global_35, (*uParam0)[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@STOOL1@MALE_A@STOOL1_TRANS_KNEEL1", "STOOL1_TRANS_KNEEL1", "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"))
			{
			}
			break;
	}
	return 0;
}

bool func_188(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (Global_1935689.f_8)
	{
		return false;
	}
	if (((iParam0 != joaat("CUSTOM_SATCHEL") && iParam0 != joaat("KIT_CAMP")) && iParam0 != joaat("KIT_CAMP_SIMPLE")) && bParam1)
	{
		iVar0 = __LIB_9__::func_986(iParam0);
		if (__LIB_0__::func_192(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_349(&uVar1, HUD::_0x0501D52D24EA8934(1), 1, iVar0))
		{
			return false;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == joaat("UPGRADE_UPG_MORTAR_PESTLE"))
	{
		if (__LIB_7__::func_781())
		{
			return false;
		}
	}
	if (!__LIB_1__::func_707(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

bool func_195(int iParam0, bool bParam1, bool bParam2)
{
	if (__LIB_7__::func_822(iParam0, bParam1, 0, 0, -1082130432 /* Float: -1f */))
	{
		Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}
	switch (__LIB_0__::func_372(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1245009814, 1, 0, -1082130432 /* Float: -1f */);
				return true;
			}
			break;
		case 1174751405:
			if (!bParam1)
			{
				func_373(iParam0);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!__LIB_7__::func_790())
				{
					if (__LIB_4__::func_385(&Global_35))
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("APPLY_POMADE_WITH_HAT"), 1, 0, -1082130432 /* Float: -1f */);
					}
					else
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("APPLY_POMADE_WITH_NO_HAT"), 1, 0, -1082130432 /* Float: -1f */);
					}
					return true;
				}
				else
				{
					__LIB_0__::func_45("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 280850861, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1087288635, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -268993254, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -1401979141, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1834614641, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 136592566, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				func_376(iParam0);
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_377(iParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_378(iParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					func_379(iParam0);
				}
				else
				{
					func_380(iParam0);
				}
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				func_381(iParam0);
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				func_382(iParam0);
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				func_383(iParam0);
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				func_384(iParam0);
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("POCKET_WATCH_INSPECT_UNHOLSTER"), 1, 0, -1082130432 /* Float: -1f */);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_385(iParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_386(iParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_387(iParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_388(iParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_389(iParam0);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_390(iParam0);
				return true;
			}
			break;
	}
	return false;
}

bool func_226(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
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
			return false;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return false;
	}
	if (!__LIB_1__::func_707(iParam0, 1, bParam4))
	{
		return false;
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
			func_226(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return false;
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
	{
		if (!__LIB_1__::func_433(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!__LIB_1__::func_698(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return false;
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
	return true;
}

int func_228(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_228(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_18__::func_511(iParam0);
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
						func_228(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_228(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_228(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_228(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_228(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_228(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_228(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_228(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_228(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		if (!__LIB_1__::func_825(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return 1;
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
				func_228(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_244(var uParam0)
{
	int iVar0;
	bool bVar1;
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (uParam0->f_187 != iVar0)
	{
		if (uParam0->f_187 == -1)
		{
			bVar1 = true;
		}
		uParam0->f_187 = iVar0;
		if (!func_526(uParam0) && bVar1)
		{
			__LIB_0__::func_45("CMP_SLP_SOON", 10000, 0, 0, 0, 1);
		}
	}
}

bool func_249(var uParam0)
{
	int iVar0;
	float fVar1;
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	__LIB_4__::func_226(1024);
	uParam0->f_57.f_35 = 1;
	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
	if (__LIB_0__::func_644(268435456) && uParam0->f_149 < 13)
	{
		__LIB_12__::func_126(&(uParam0->f_57));
		__LIB_16__::func_754(&(uParam0->f_57));
		if ((MISC::GET_GAME_TIMER() - uParam0->f_197) > 1000 && __LIB_18__::func_515(&(uParam0->f_57)))
		{
			__LIB_10__::func_248();
			if (func_85(uParam0))
			{
				if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A"))
				{
					__LIB_12__::func_110(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					return false;
				}
				else if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A"))
				{
					__LIB_12__::func_110(joaat("SIT_TRANS_KNEEL"), 0.5f);
					return false;
				}
			}
			else
			{
				return false;
			}
			if (Global_1911914.f_1577 != 0)
			{
				uParam0->f_57.f_77 = Global_1911914.f_1577;
			}
			uParam0->f_57.f_78 = -214678071;
			uParam0->f_197 = -1;
			CAM::DO_SCREEN_FADE_IN(500);
			if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE"), true, 0, false, false);
				__LIB_0__::func_7(&(uParam0->f_151), 2097152);
			}
			__LIB_4__::func_229(16384);
			__LIB_4__::func_226(65536);
			Global_1392040.f_2 = 0;
			if (__LIB_0__::func_708(0))
			{
				func_543(uParam0->f_57.f_77, uParam0->f_57.f_78, 1, 0, 0);
			}
			STATS::_0x378D3B1B11D9385B(uParam0->f_57.f_77);
			uParam0->f_208 = 3;
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_160))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_160));
			}
			uParam0->f_160 = OBJECT::CREATE_OBJECT(__LIB_12__::func_170(uParam0->f_57.f_77), Global_36, false, false, false, false, true);
			if (PED::_0x3BBDD6143FF16F98(Global_35, uParam0->f_160, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
			{
			}
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_160, false);
			OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_160, 0f, true);
			__LIB_9__::func_987(&(uParam0->f_57));
			__LIB_16__::func_753(&(uParam0->f_57), 2);
			uParam0->f_162[6] = __LIB_4__::func_864("CRAFT_FASTER", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 6, 7000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_545(uParam0, 6, 0, 0);
			__LIB_1__::func_221(uParam0->f_162[6], 0, 1);
			__LIB_4__::func_12(uParam0->f_162[6], -1067771379, 0, 1);
			uParam0->f_57.f_62 = 0;
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_57.f_39);
			__LIB_0__::func_7(&(uParam0->f_151), 16);
			__LIB_14__::func_578(uParam0, 13);
		}
		return false;
	}
	if (uParam0->f_149 != 0)
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	}
	if (uParam0->f_149 > 0)
	{
		HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_57.f_77), 1, 0, 0, 0);
	}
	if (uParam0->f_149 != 12)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
		{
			uParam0->f_209++;
			func_93(uParam0->f_57.f_77, BUILTIN::TO_FLOAT(uParam0->f_208), uParam0->f_209 >= uParam0->f_208);
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
	{
		uParam0->f_209++;
		if (__LIB_0__::func_190())
		{
			__LIB_3__::func_180(1);
		}
		else if (__LIB_0__::func_189())
		{
			__LIB_3__::func_180(0);
		}
		func_93(uParam0->f_57.f_77, BUILTIN::TO_FLOAT(uParam0->f_208), uParam0->f_209 >= uParam0->f_208);
	}
	if (__LIB_0__::func_708(0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -936525963))
		{
			__LIB_0__::func_7(&(uParam0->f_151), 1024);
			func_99(uParam0->f_57.f_77, 1, 1, 1, 0);
			__LIB_16__::func_761();
		}
	}
	if (uParam0->f_149 >= 14)
	{
		if (__LIB_0__::func_139(uParam0->f_162[8]) && __LIB_1__::func_732(uParam0->f_162[8], 1))
		{
		}
	}
	if (uParam0->f_57.f_21 != -1 && __LIB_9__::func_493(&(uParam0->f_57)) != 12)
	{
		if (__LIB_16__::func_756(uParam0->f_57.f_21))
		{
		}
		else
		{
			uParam0->f_57.f_21 = -1;
		}
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
	switch (uParam0->f_149)
	{
		case 0:
			if (uParam0->f_154 == 4)
			{
				if (__LIB_12__::func_124(Global_35, (*uParam0)[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@STOOL1@MALE_A@STOOL1_TRANS_KNEEL1", "STOOL1_TRANS_KNEEL1", "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"))
				{
					uParam0->f_154 = 0;
				}
				return false;
			}
			if (func_85(uParam0))
			{
				if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A"))
				{
					__LIB_12__::func_110(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					return false;
				}
				else if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A"))
				{
					__LIB_12__::func_110(joaat("SIT_TRANS_KNEEL"), 0.5f);
					return false;
				}
			}
			if (((func_85(uParam0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336)) && (((((iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR")) || iVar0 == joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC")) || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE")) || iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A")) || iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A"))) || __LIB_9__::func_493(&(uParam0->f_57)) == 12)
			{
				func_549(&(uParam0->f_57), 1);
				if (__LIB_9__::func_493(&(uParam0->f_57)) == 11)
				{
					if (__LIB_12__::func_164(uParam0->f_57.f_77))
					{
						func_550(uParam0);
					}
					else if (uParam0->f_57.f_80)
					{
						uParam0->f_208 = 1;
						__LIB_4__::func_229(131072);
						if (__LIB_0__::func_708(0))
						{
							func_543(uParam0->f_57.f_77, uParam0->f_57.f_78, 1, __LIB_12__::func_171(), 0);
						}
						__LIB_16__::func_753(&(uParam0->f_57), 0);
						__LIB_9__::func_987(&(uParam0->f_57));
						__LIB_1__::func_748(&(uParam0->f_162[6]), 1, 1);
						if (__LIB_0__::func_372(uParam0->f_57.f_77, -1636519629) == -701492487)
						{
							uParam0->f_162[8] = __LIB_4__::func_864("POUR_COFFEE", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 0, 6000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
							__LIB_1__::func_221(uParam0->f_162[8], 0, 1);
							__LIB_4__::func_12(uParam0->f_162[8], -1067771379, 0, 1);
							func_552(uParam0, 0);
						}
						else
						{
							uParam0->f_162[6] = __LIB_4__::func_864("CRAFT_FASTER", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 6, 6000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
							func_545(uParam0, 6, 0, 0);
							__LIB_1__::func_221(uParam0->f_162[6], 0, 1);
							__LIB_4__::func_12(uParam0->f_162[6], -1067771379, 0, 1);
						}
						__LIB_10__::func_250();
						uParam0->f_196 = MISC::GET_GAME_TIMER();
						__LIB_14__::func_578(uParam0, 1);
					}
					else
					{
						__LIB_0__::func_8(&(uParam0->f_151), 4);
						__LIB_4__::func_229(131072);
					}
				}
				else if (__LIB_9__::func_493(&(uParam0->f_57)) == 0)
				{
					func_75(uParam0, 1);
					__LIB_4__::func_226(131072);
					__LIB_4__::func_226(16384);
					__LIB_4__::func_229(262144);
					__LIB_4__::func_229(65536);
					if (__LIB_0__::func_644(8192))
					{
						__LIB_16__::func_753(&(uParam0->f_57), 0);
						uParam0->f_196 = MISC::GET_GAME_TIMER();
						__LIB_9__::func_987(&(uParam0->f_57));
						__LIB_0__::func_8(&(uParam0->f_151), 512);
						return true;
					}
				}
				else if (__LIB_9__::func_493(&(uParam0->f_57)) == 1 || __LIB_2__::func_65(Global_35, 0))
				{
					__LIB_0__::func_8(&(uParam0->f_151), 4);
					uParam0->f_57.f_35 = 0;
					func_170(uParam0, uParam0->f_57.f_22);
					func_75(uParam0, 1);
					__LIB_9__::func_987(&(uParam0->f_57));
					__LIB_4__::func_226(131072);
					__LIB_4__::func_226(16384);
					__LIB_4__::func_229(262144);
					__LIB_4__::func_229(65536);
					if (uParam0->f_154 == 4)
					{
						uParam0->f_157 = 9;
					}
					else
					{
						uParam0->f_157 = 6;
					}
					uParam0->f_196 = MISC::GET_GAME_TIMER();
					__LIB_0__::func_8(&(uParam0->f_151), 512);
					return true;
				}
			}
			break;
		case 1:
			if (func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 250)
			{
				if (uParam0->f_154 == 4)
				{
					if (__LIB_12__::func_124(Global_35, (*uParam0)[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@STOOL1@MALE_A@STOOL1_TRANS_KNEELFIRECRAFT", "STOOL1_TRANS_KNEELFIRECRAFT", "WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT"))
					{
						uParam0->f_154 = 0;
						__LIB_14__::func_578(uParam0, 2);
					}
				}
				else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
				{
					if (__LIB_12__::func_110(joaat("KNIFE1_TRANS_KNEEL1"), 1086324736 /* Float: 6f */))
					{
					}
				}
				else if (__LIB_0__::func_372(uParam0->f_57.f_77, -1636519629) == -701492487)
				{
					if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
					{
						if (__LIB_12__::func_110(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 1086324736 /* Float: 6f */))
						{
							__LIB_14__::func_578(uParam0, 2);
						}
					}
					else if (uParam0->f_154 == 0)
					{
						if (func_340(uParam0, 0))
						{
							__LIB_12__::func_110(joaat("KNEEL1_TRANS_BREWCOFFEE_KNEEL1"), 1f);
							__LIB_14__::func_578(uParam0, 9);
						}
					}
					else if (uParam0->f_154 == 1)
					{
						if (func_340(uParam0, 1))
						{
							__LIB_12__::func_110(joaat("KNEEL2_TRANS_BREWCOFFEE_KNEEL2"), 1f);
							__LIB_14__::func_578(uParam0, 9);
						}
					}
					else if (uParam0->f_154 == 2)
					{
						if (__LIB_12__::func_124(Global_35, (*uParam0)[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_KNEEL2", "KNEEL3_TRANS_KNEEL2", "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"))
						{
							uParam0->f_154 = 1;
						}
					}
					else if (uParam0->f_154 == 3)
					{
						if (__LIB_12__::func_124(Global_35, (*uParam0)[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_KNEEL1", "KNEEL4_TRANS_KNEEL1", "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"))
						{
							uParam0->f_154 = 0;
						}
					}
				}
				else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
				{
					__LIB_12__::func_110(joaat("KNEELFIRECRAFTCUP_TRANS_KNEELFIRECRAFT"), 1086324736 /* Float: 6f */);
					__LIB_14__::func_578(uParam0, 2);
				}
				else
				{
					__LIB_12__::func_110(joaat("KNEEL1_TRANS_KNEELFIRECRAFT"), 1086324736 /* Float: 6f */);
					__LIB_14__::func_578(uParam0, 2);
				}
				uParam0->f_196 = MISC::GET_GAME_TIMER();
			}
			break;
		case 2:
			if (!__LIB_0__::func_572(uParam0->f_162[6], 0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458) || func_85(uParam0))
				{
					__LIB_1__::func_221(uParam0->f_162[6], 1, 1);
				}
			}
			if (__LIB_0__::func_567(uParam0->f_162[6], 1) || __LIB_0__::func_372(uParam0->f_57.f_77, -1636519629) == -701492487)
			{
				if (PAD::_0x1252C029FC8EBB4D())
				{
					PAD::_0x709BA8C08C5C008D();
				}
				func_545(uParam0, 6, 1, 0);
				__LIB_1__::func_748(&(uParam0->f_162[6]), 1, 1);
				if (((__LIB_0__::func_356(uParam0->f_57.f_77) == joaat("CONSUMABLE") && !__LIB_0__::func_192(uParam0->f_57.f_77, -1242251796)) && !__LIB_0__::func_192(uParam0->f_57.f_77, 1919582297)) && !__LIB_0__::func_192(uParam0->f_57.f_77, -651046900))
				{
					uParam0->f_162[8] = __LIB_4__::func_864("USE_ITEM", joaat("INPUT_CRAFTING_EAT"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_4__::func_12(uParam0->f_162[8], -1067771379, 0, 1);
					__LIB_1__::func_522(uParam0->f_162[8], 10, 1, 1);
					uParam0->f_162[7] = __LIB_4__::func_864("STOW_ITEM", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_1__::func_522(uParam0->f_162[7], 10, 1, 1);
					__LIB_4__::func_12(uParam0->f_162[7], -1067771379, 0, 1);
					ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_57.f_77, 1);
				}
				if (!__LIB_0__::func_708(0))
				{
					uParam0->f_57.f_21 = __LIB_19__::func_608(uParam0->f_57.f_77, uParam0->f_57.f_78);
				}
				uParam0->f_209 = 0;
				__LIB_1__::func_148(&(uParam0->f_201));
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				__LIB_0__::func_8(&(uParam0->f_151), 1024);
				__LIB_14__::func_578(uParam0, 3);
			}
			else if (__LIB_0__::func_572(uParam0->f_162[6], 0))
			{
				func_554(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_85(uParam0))
			{
				if (__LIB_1__::func_313(&(uParam0->f_201), 0.1f))
				{
					if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE"))
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
						__LIB_12__::func_110(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFT"), 1f);
						__LIB_1__::func_148(&(uParam0->f_201));
					}
					else
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
						__LIB_12__::func_110(joaat("KNEELFIRECRAFT_TRANS_KNEELPOSTFIRECRAFT"), 1086324736 /* Float: 6f */);
					}
				}
			}
			if (__LIB_0__::func_139(uParam0->f_162[8]))
			{
				__LIB_0__::func_597(0, 7000);
				__LIB_0__::func_597(2, 7000);
				__LIB_0__::func_597(1, 7000);
				if (__LIB_0__::func_572(uParam0->f_162[8], 0) && (__LIB_1__::func_732(uParam0->f_162[8], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CRAFTING_EAT"))))
				{
					if (!__LIB_0__::func_708(0))
					{
						func_226(uParam0->f_57.f_77, 1, 1, -142743235, 0);
					}
					ATTRIBUTE::_0xD962F8579D702DB5();
					func_99(uParam0->f_57.f_77, 1, 1, 0, 0);
					__LIB_16__::func_761();
					__LIB_1__::func_748(&(uParam0->f_162[8]), 1, 1);
					__LIB_1__::func_748(&(uParam0->f_162[7]), 1, 1);
					func_552(uParam0, 1);
					__LIB_4__::func_226(131072);
					__LIB_16__::func_753(&(uParam0->f_57), 15);
					__LIB_14__::func_578(uParam0, 5);
					return false;
				}
			}
			if ((!__LIB_0__::func_139(uParam0->f_162[8]) || (__LIB_0__::func_572(uParam0->f_162[7], 0) && (__LIB_1__::func_514(uParam0->f_162[7], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CONTEXT_X"))))) || __LIB_2__::func_65(Global_35, 0))
			{
				__LIB_1__::func_748(&(uParam0->f_162[8]), 1, 1);
				__LIB_1__::func_748(&(uParam0->f_162[7]), 1, 1);
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				if (__LIB_0__::func_27(uParam0->f_151, 512))
				{
					__LIB_0__::func_8(&(uParam0->f_151), 512);
					__LIB_12__::func_165(&(uParam0->f_57), 0);
					AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
					__LIB_16__::func_753(&(uParam0->f_57), 1);
				}
				else
				{
					__LIB_16__::func_753(&(uParam0->f_57), 15);
				}
				func_552(uParam0, 1);
				__LIB_14__::func_578(uParam0, 4);
				return false;
			}
			break;
		case 4:
			if (func_85(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_196) > 100 || __LIB_0__::func_75(&(uParam0->f_201))))
			{
				if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE"))
				{
					__LIB_12__::func_110(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736 /* Float: 6f */);
				}
				else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT"))
				{
					__LIB_12__::func_110(joaat("KNEELFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736 /* Float: 6f */);
					__LIB_12__::func_110(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736 /* Float: 6f */);
				}
				else
				{
					__LIB_12__::func_110(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736 /* Float: 6f */);
				}
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				__LIB_14__::func_578(uParam0, 7);
			}
			break;
		case 5:
			if (func_85(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_196) > 100 || __LIB_0__::func_75(&(uParam0->f_201))))
			{
				if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE"))
				{
					__LIB_12__::func_110(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736 /* Float: 6f */);
				}
				else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT"))
				{
					__LIB_12__::func_110(joaat("KNEELFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736 /* Float: 6f */);
					__LIB_12__::func_110(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736 /* Float: 6f */);
				}
				else
				{
					__LIB_12__::func_110(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736 /* Float: 6f */);
				}
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				__LIB_14__::func_578(uParam0, 6);
			}
			break;
		case 9:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_196) > 1000)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458) || func_85(uParam0))
				{
					ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_57.f_77, 1);
					uParam0->f_57.f_84 = 2;
					__LIB_1__::func_221(uParam0->f_162[8], 1, 1);
					func_556(uParam0, 1);
					__LIB_14__::func_578(uParam0, 10);
				}
			}
			break;
		case 10:
			__LIB_0__::func_597(0, 7000);
			__LIB_0__::func_597(2, 7000);
			__LIB_0__::func_597(1, 7000);
			if (__LIB_0__::func_139(uParam0->f_162[8]) && __LIB_1__::func_732(uParam0->f_162[8], 1))
			{
				if (__LIB_0__::func_708(0))
				{
					func_99(uParam0->f_57.f_77, 1, 1, 0, 0);
				}
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_57.f_84 = (uParam0->f_57.f_84 - 1);
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				__LIB_12__::func_165(&(uParam0->f_57), 0);
				__LIB_16__::func_753(&(uParam0->f_57), 15);
				__LIB_9__::func_987(&(uParam0->f_162));
				uParam0->f_162[8] = __LIB_4__::func_864("DRINK", joaat("INPUT_CRAFTING_EAT"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_4__::func_12(uParam0->f_162[8], -1067771379, 0, 1);
				__LIB_1__::func_522(uParam0->f_162[8], 10, 1, 1);
				__LIB_1__::func_221(uParam0->f_162[8], 0, 1);
				__LIB_14__::func_578(uParam0, 11);
			}
			if (__LIB_1__::func_732(uParam0->f_162[11], 1))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				__LIB_9__::func_987(&(uParam0->f_162));
				__LIB_14__::func_578(uParam0, 0);
				__LIB_16__::func_753(&(uParam0->f_57), 15);
				__LIB_0__::func_8(&(uParam0->f_151), 512);
			}
			else if (__LIB_0__::func_567(uParam0->f_162[3], 1))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				__LIB_9__::func_987(&(uParam0->f_162));
				__LIB_14__::func_578(uParam0, 0);
				__LIB_0__::func_8(&(uParam0->f_151), 512);
				__LIB_12__::func_165(&(uParam0->f_57), 0);
				AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
				__LIB_16__::func_753(&(uParam0->f_57), 1);
				__LIB_14__::func_578(uParam0, 0);
				return false;
			}
			else if (__LIB_1__::func_530(uParam0->f_162[3], 1))
			{
				if (!__LIB_0__::func_75(&(uParam0->f_57.f_89)))
				{
					__LIB_1__::func_148(&(uParam0->f_57.f_89));
				}
				else if (__LIB_1__::func_285(&(uParam0->f_57.f_89), 0.1f))
				{
					__LIB_1__::func_484(uParam0->f_162[3], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (__LIB_0__::func_75(&(uParam0->f_57.f_89)))
				{
					__LIB_0__::func_37(&(uParam0->f_57.f_89));
				}
				__LIB_1__::func_484(uParam0->f_162[3], "CAMP_REC_BACK", 1);
			}
			break;
		case 11:
			if (func_558(uParam0))
			{
				__LIB_14__::func_578(uParam0, 12);
			}
			break;
		case 12:
			func_89(uParam0, iVar0);
			if ((func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500) && iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
			{
				__LIB_14__::func_578(uParam0, 0);
			}
			break;
		case 13:
			if (func_85(uParam0))
			{
				if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
				{
					__LIB_12__::func_110(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 1086324736 /* Float: 6f */);
					return false;
				}
				__LIB_4__::func_226(268435456);
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				if (__LIB_0__::func_27(uParam0->f_150, 8) && uParam0->f_57.f_78 == joaat("COST_CRAFTING_GRILL"))
				{
					switch (uParam0->f_154)
					{
						case 0:
							if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
							{
								if (__LIB_12__::func_110(joaat("KNIFE1_TRANS_COOKGRILL_A"), 1086324736 /* Float: 6f */))
								{
									__LIB_4__::func_229(16384);
									__LIB_14__::func_578(uParam0, 14);
								}
							}
							else if (__LIB_12__::func_110(joaat("KNEEL1_TRANS_COOKGRILL1_A"), 1086324736 /* Float: 6f */))
							{
								__LIB_4__::func_229(16384);
								__LIB_14__::func_578(uParam0, 14);
							}
							break;
						case 1:
							if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
							{
								if (__LIB_12__::func_110(joaat("KNIFE2_TRANS_COOKGRILL2_B"), 1086324736 /* Float: 6f */))
								{
									__LIB_4__::func_229(16384);
									__LIB_14__::func_578(uParam0, 14);
								}
							}
							else if (__LIB_12__::func_110(joaat("KNEEL2_TRANS_COOKGRILL2_B"), 1086324736 /* Float: 6f */))
							{
								__LIB_4__::func_229(16384);
								__LIB_14__::func_578(uParam0, 14);
							}
							break;
						case 2:
							if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
							{
								if (__LIB_12__::func_124(Global_35, (*uParam0)[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNIFE3@MALE_A@KNIFE3_TRANS_COOKGRILL2_B", "KNIFE3_TRANS_COOKGRILL2_B", "WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2"))
								{
									uParam0->f_154 = 1;
									__LIB_4__::func_229(16384);
									__LIB_14__::func_578(uParam0, 14);
								}
							}
							else if (__LIB_12__::func_124(Global_35, (*uParam0)[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COOKGRILL2_B", "KNEEL3_TRANS_COOKGRILL2_B", "WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2"))
							{
								uParam0->f_154 = 1;
								__LIB_4__::func_229(16384);
								__LIB_14__::func_578(uParam0, 14);
							}
							break;
						case 3:
							if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
							{
								if (__LIB_12__::func_124(Global_35, (*uParam0)[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNIFE4@MALE_A@KNIFE4_TRANS_COOKGRILL1_A", "KNIFE4_TRANS_COOKGRILL1_A", "WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL1"))
								{
									uParam0->f_154 = 0;
									__LIB_4__::func_229(16384);
									__LIB_14__::func_578(uParam0, 14);
								}
							}
							else if (__LIB_12__::func_124(Global_35, (*uParam0)[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COOKGRILL1_A", "KNEEL4_TRANS_COOKGRILL1_A", "WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL1"))
							{
								uParam0->f_154 = 0;
								__LIB_4__::func_229(16384);
								__LIB_14__::func_578(uParam0, 14);
							}
							break;
						case 4:
							if (__LIB_12__::func_110(joaat("STOOL1_TRANS_STOOLCOOKGRILL1_A"), 1086324736 /* Float: 6f */))
							{
								__LIB_4__::func_229(16384);
								__LIB_14__::func_578(uParam0, 14);
							}
							break;
					}
				}
				else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
				{
					__LIB_12__::func_110(joaat("KNIFE1_TRANS_COOKKNIFE"), 1086324736 /* Float: 6f */);
					__LIB_4__::func_229(16384);
					__LIB_14__::func_578(uParam0, 14);
				}
				else
				{
					__LIB_12__::func_110(joaat("KNEEL1_TRANS_COOKKNIFE"), 1086324736 /* Float: 6f */);
					__LIB_4__::func_229(16384);
					__LIB_14__::func_578(uParam0, 14);
				}
			}
			break;
		case 14:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -560091334))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_160, true);
			}
			if (!__LIB_0__::func_572(uParam0->f_162[6], 0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("cook_meat_sizzle_loop", uParam0->f_160, "Player_Campfire_Sounds", false, 0, 0);
					AUDIO::_0x9821B68CD3E05F2B("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
					__LIB_1__::func_221(uParam0->f_162[6], 1, 1);
					__LIB_1__::func_515(uParam0->f_162[6], 1);
				}
			}
			if (__LIB_0__::func_567(uParam0->f_162[6], 1))
			{
				uParam0->f_207 = -1;
				OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_160, 1f, true);
				if (PAD::_0x1252C029FC8EBB4D())
				{
					PAD::_0x709BA8C08C5C008D();
				}
				uParam0->f_162[7] = __LIB_4__::func_864("STOW_ITEM", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				uParam0->f_162[8] = __LIB_4__::func_864("EAT_MEAT", joaat("INPUT_CRAFTING_EAT"), 1, 0, 0, 0, 570, 4000, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_1__::func_522(uParam0->f_162[8], 10, 1, 1);
				__LIB_1__::func_522(uParam0->f_162[7], 10, 1, 1);
				__LIB_4__::func_12(uParam0->f_162[7], -1067771379, 0, 1);
				__LIB_4__::func_12(uParam0->f_162[8], -1067771379, 0, 1);
				if (__LIB_11__::func_426(uParam0->f_57.f_77, 1, 0) || __LIB_4__::func_233(64))
				{
					__LIB_1__::func_221(uParam0->f_162[7], 0, 1);
					__LIB_9__::func_817(64);
				}
				__LIB_1__::func_748(&(uParam0->f_162[6]), 1, 1);
				__LIB_1__::func_148(&(uParam0->f_201));
				__LIB_4__::func_226(16384);
				uParam0->f_209 = 0;
				if (!__LIB_0__::func_708(0))
				{
					uParam0->f_57.f_21 = __LIB_19__::func_608(uParam0->f_57.f_77, uParam0->f_57.f_78);
				}
				ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_57.f_77, 1);
				AUDIO::_STOP_SOUND_WITH_NAME("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				__LIB_0__::func_8(&(uParam0->f_151), 1024);
				__LIB_14__::func_578(uParam0, 15);
			}
			else
			{
				func_554(uParam0, iVar0);
				if (uParam0->f_207 == -1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458))
					{
						uParam0->f_207 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					fVar1 = __LIB_0__::func_486(uParam0->f_162[6], 1);
					fVar1 = __LIB_0__::func_251(fVar1, 0f, 1f);
					OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_160, (1f * fVar1), true);
				}
			}
			break;
		case 15:
			__LIB_0__::func_597(0, 7000);
			__LIB_0__::func_597(2, 7000);
			__LIB_0__::func_597(1, 7000);
			if (func_85(uParam0))
			{
				if (__LIB_1__::func_313(&(uParam0->f_201), 0.1f))
				{
					uParam0->f_196 = MISC::GET_GAME_TIMER();
					if (__LIB_0__::func_27(uParam0->f_150, 8) && uParam0->f_57.f_78 == joaat("COST_CRAFTING_GRILL"))
					{
						switch (uParam0->f_154)
						{
							case 0:
								if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_SEARGRILL1"))
								{
									__LIB_12__::func_110(joaat("SEARGRILL1_TRANS_BETWEEN_BITES"), 1f);
								}
								else
								{
									__LIB_12__::func_110(joaat("COOKGRILL1_TRANS_BETWEEN_BITES"), 1f);
								}
								break;
							case 1:
								if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2_SEARGRILL2"))
								{
									__LIB_12__::func_110(joaat("SEARGRILL2_TRANS_BETWEEN_BITES"), 1f);
								}
								else
								{
									__LIB_12__::func_110(joaat("COOKGRILL2_TRANS_BETWEEN_BITES"), 1f);
								}
								break;
						}
					}
					else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR"))
					{
						__LIB_12__::func_110(joaat("COOKKNIFE_SEAR_TRANS_BETWEEN_BITES"), 2f);
					}
					else
					{
						__LIB_12__::func_110(joaat("COOKKNIFE_TRANS_BETWEEN_BITES"), 2f);
					}
				}
			}
			if (__LIB_0__::func_139(uParam0->f_162[8]))
			{
				if (__LIB_0__::func_572(uParam0->f_162[8], 0) && (__LIB_1__::func_732(uParam0->f_162[8], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CRAFTING_EAT"))))
				{
					ATTRIBUTE::_0xD962F8579D702DB5();
					func_99(uParam0->f_57.f_77, 1, 1, 0, 0);
					__LIB_16__::func_761();
					__LIB_1__::func_748(&(uParam0->f_162[8]), 1, 1);
					__LIB_1__::func_748(&(uParam0->f_162[7]), 1, 1);
					func_552(uParam0, 1);
					__LIB_4__::func_229(32768);
					if (!__LIB_0__::func_708(0))
					{
						func_226(uParam0->f_57.f_77, 1, 1, -142743235, 0);
					}
					uParam0->f_196 = MISC::GET_GAME_TIMER();
					__LIB_14__::func_578(uParam0, 17);
					return false;
				}
			}
			if (__LIB_0__::func_139(uParam0->f_162[7]))
			{
				if ((((__LIB_0__::func_572(uParam0->f_162[7], 0) && (__LIB_1__::func_732(uParam0->f_162[7], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CONTEXT_X")))) || __LIB_0__::func_27(uParam0->f_151, 256)) || __LIB_2__::func_65(Global_35, 0)) || TASK::_0x916B8E075ABC8B4E(Global_35, 1))
				{
					__LIB_9__::func_805(16);
					__LIB_0__::func_8(&(uParam0->f_151), 256);
					ATTRIBUTE::_0xD962F8579D702DB5();
					__LIB_1__::func_748(&(uParam0->f_162[7]), 1, 1);
					__LIB_1__::func_748(&(uParam0->f_162[8]), 1, 1);
					func_552(uParam0, 1);
					__LIB_14__::func_578(uParam0, 20);
					return false;
				}
			}
			break;
		case 20:
			if (func_85(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_196) > 250 || __LIB_0__::func_75(&(uParam0->f_201))))
			{
				if (!__LIB_0__::func_27(uParam0->f_150, 8) || uParam0->f_57.f_78 != joaat("COST_CRAFTING_GRILL"))
				{
					if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR"))
					{
						__LIB_12__::func_110(joaat("COOKKNIFE_SEAR_TRANS_KNIFE1_STOW"), 1f);
					}
					else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ARTHUR"))
					{
						__LIB_12__::func_110(joaat("COOKKNIFE_TRANS_KNIFE1_STOW"), 1f);
					}
					else
					{
						__LIB_12__::func_110(joaat("BETWEEN_BITES_TRANS_KNIFE1_STOW"), 1f);
					}
				}
				else
				{
					switch (uParam0->f_154)
					{
						case 0:
							if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_SEARGRILL1"))
							{
								__LIB_12__::func_110(joaat("SEARGRILL1_TRANS_KNIFE1_STOW"), 1f);
							}
							else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL1"))
							{
								__LIB_12__::func_110(joaat("COOKGRILL_TRANS_KNIFE1_STOW"), 1f);
							}
							else
							{
								__LIB_12__::func_110(joaat("BETWEEN_BITES_TRANS_KNIFE1_STOW"), 1f);
							}
							break;
						case 1:
							if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2_SEARGRILL2"))
							{
								__LIB_12__::func_110(joaat("SEARGRILL2_TRANS_KNIFE2_STOW"), 1f);
							}
							else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2"))
							{
								__LIB_12__::func_110(joaat("COOKGRILL2_TRANS_KNIFE2_STOW"), 1f);
							}
							else
							{
								__LIB_12__::func_110(joaat("BETWEEN_BITES_TRANS_KNIFE1_STOW"), 1f);
							}
							break;
					}
				}
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				__LIB_14__::func_578(uParam0, 19);
			}
			break;
		case 17:
			if (func_85(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_196) > 250 || __LIB_0__::func_75(&(uParam0->f_201))))
			{
				if (uParam0->f_57.f_32 && uParam0->f_57.f_78 == joaat("COST_CRAFTING_GRILL"))
				{
					switch (uParam0->f_154)
					{
						case 0:
							if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_SEARGRILL1"))
							{
								__LIB_12__::func_110(joaat("SEARGRILL_TRANS_KNIFE1_EAT"), 1f);
							}
							else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL1"))
							{
								__LIB_12__::func_110(joaat("COOKGRILL1_TRANS_KNIFE1_EAT"), 1f);
							}
							else
							{
								__LIB_12__::func_110(joaat("BETWEEN_BITES_TRANS_KNIFE1_EAT"), 2f);
							}
							break;
						case 1:
							if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2_SEARGRILL2"))
							{
								__LIB_12__::func_110(joaat("SEARGRILL2_TRANS_KNIFE2_EAT"), 1f);
							}
							else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2"))
							{
								__LIB_12__::func_110(joaat("COOKGRILL2_TRANS_KNIFE2_EAT"), 1f);
							}
							else
							{
								__LIB_12__::func_110(joaat("BETWEEN_BITES_TRANS_KNIFE1_EAT"), 2f);
							}
							break;
					}
				}
				else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR"))
				{
					__LIB_12__::func_110(joaat("COOKKNIFE_SEAR_TRANS_KNIFE1_EAT"), 1f);
				}
				else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ARTHUR"))
				{
					__LIB_12__::func_110(joaat("COOKKNIFE_TRANS_KNIFE1_EAT"), 1f);
				}
				else
				{
					__LIB_12__::func_110(joaat("BETWEEN_BITES_TRANS_KNIFE1_EAT"), 2f);
				}
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				__LIB_14__::func_578(uParam0, 18);
			}
			break;
		case 6:
		case 7:
		case 18:
		case 19:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -243011316) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336))
			{
				func_556(uParam0, 1);
				__LIB_4__::func_226(32768);
				__LIB_9__::func_817(16);
				if (uParam0->f_149 == 18 || uParam0->f_149 == 19)
				{
					__LIB_4__::func_229(65536);
					__LIB_14__::func_578(uParam0, 16);
				}
				else
				{
					__LIB_14__::func_578(uParam0, 8);
				}
			}
			else if ((MISC::GET_GAME_TIMER() - uParam0->f_196) > 750)
			{
				if (!PED::_0xC488B8C0E52560D8(Global_35))
				{
					if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
					{
						__LIB_4__::func_229(65536);
						__LIB_14__::func_578(uParam0, 16);
					}
					else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
					{
						__LIB_14__::func_578(uParam0, 8);
					}
					else if (uParam0->f_149 == 18)
					{
						__LIB_14__::func_578(uParam0, 17);
					}
					else if (uParam0->f_149 == 19)
					{
						__LIB_14__::func_578(uParam0, 20);
					}
					else if (uParam0->f_149 == 7)
					{
						__LIB_14__::func_578(uParam0, 4);
					}
					else if (uParam0->f_149 == 6)
					{
						__LIB_14__::func_578(uParam0, 5);
					}
				}
			}
			break;
		case 8:
		case 16:
			__LIB_4__::func_229(1024);
			if (__LIB_4__::func_233(128))
			{
				if (__LIB_0__::func_572(uParam0->f_162[11], 0))
				{
					__LIB_1__::func_221(uParam0->f_162[11], 0, 1);
				}
				if (__LIB_0__::func_572(uParam0->f_162[3], 0))
				{
					__LIB_1__::func_221(uParam0->f_162[3], 0, 1);
				}
			}
			else
			{
				func_556(uParam0, 0);
			}
			if (__LIB_0__::func_572(uParam0->f_162[6], 0))
			{
				if (__LIB_2__::func_65(Global_35, 0))
				{
					__LIB_1__::func_221(uParam0->f_162[6], 0, 1);
				}
			}
			if (__LIB_1__::func_732(uParam0->f_162[6], 1))
			{
				__LIB_4__::func_226(65536);
				__LIB_9__::func_987(&(uParam0->f_162));
				if (uParam0->f_149 == 16)
				{
					func_550(uParam0);
				}
				else
				{
					func_562(uParam0);
				}
			}
			else if (__LIB_1__::func_732(uParam0->f_162[11], 1))
			{
				__LIB_4__::func_226(65536);
				__LIB_9__::func_987(&(uParam0->f_162));
				__LIB_14__::func_578(uParam0, 0);
				__LIB_16__::func_753(&(uParam0->f_57), 15);
				__LIB_0__::func_8(&(uParam0->f_151), 512);
			}
			else if (__LIB_0__::func_567(uParam0->f_162[3], 1))
			{
				__LIB_4__::func_226(65536);
				__LIB_9__::func_987(&(uParam0->f_162));
				__LIB_14__::func_578(uParam0, 0);
				__LIB_0__::func_8(&(uParam0->f_151), 512);
				__LIB_12__::func_165(&(uParam0->f_57), 0);
				AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
				__LIB_16__::func_753(&(uParam0->f_57), 1);
				__LIB_14__::func_578(uParam0, 0);
				return false;
			}
			else if (__LIB_1__::func_530(uParam0->f_162[3], 1))
			{
				if (!__LIB_0__::func_75(&(uParam0->f_57.f_89)))
				{
					__LIB_1__::func_148(&(uParam0->f_57.f_89));
				}
				else if (__LIB_1__::func_285(&(uParam0->f_57.f_89), 0.1f))
				{
					__LIB_1__::func_484(uParam0->f_162[3], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (__LIB_0__::func_75(&(uParam0->f_57.f_89)))
				{
					__LIB_0__::func_37(&(uParam0->f_57.f_89));
				}
				__LIB_1__::func_484(uParam0->f_162[3], "CAMP_REC_BACK", 1);
			}
			break;
	}
	return false;
}

bool func_255(int iParam0, bool bParam1)
{
	var uVar0;
	var uVar5;
	var uVar9;
	struct<5> Var10;
	var uVar15;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_703(iParam0, 856287005, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { __LIB_1__::func_124() };
	Var10.f_4 = uVar9;
	if (__LIB_1__::func_792(iParam0, &uVar15, &Var10, 1, 752097756, 0))
	{
		if (bParam1)
		{
			if (!func_568(iParam0, 1))
			{
			}
		}
		if (__LIB_0__::func_848(iParam0))
		{
			func_255(__LIB_0__::func_661(iParam0), 1);
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

int func_327(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	if (!bParam4)
	{
		iParam1 = func_644(iParam0, iParam1, 1, 1, -142743235);
	}
	else
	{
		iVar0 = __LIB_8__::func_716(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_646(&iVar0, iParam0, &iParam1, bParam2, iParam3);
		}
	}
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_647(iParam0, iParam1, bParam2, iParam3);
}

bool func_333(var uParam0)
{
	int iVar0;
	if (TASK::_DOES_SCENARIO_POINT_EXIST((*uParam0)[5]))
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(TASK::_GET_SCENARIO_POINT_COORDS((*uParam0)[5], true), 1.5f) > 0)
		{
			return false;
		}
		iVar0 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO((*uParam0)[5]);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(iVar0))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_339(var uParam0)
{
	int iVar0;
	uParam0->f_155 = __LIB_12__::func_108();
	iVar0 = func_36(uParam0);
	if ((((uParam0->f_156 == -1 || iVar0 == uParam0->f_156) && (uParam0->f_157 == 0 || __LIB_12__::func_131(uParam0->f_155, uParam0->f_157))) || (uParam0->f_156 == -1 && __LIB_12__::func_131(uParam0->f_155, uParam0->f_157))) && !(PED::_0xC488B8C0E52560D8(Global_35) || PED::_0x2DC0E8DCBD3546E9(Global_35)))
	{
		uParam0->f_154 = iVar0;
		return true;
	}
	return false;
}

bool func_340(var uParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		if (iParam1 != uParam0->f_158)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_159))
			{
				uParam0->f_159 = TASK::_GET_SCENARIO_POINT_ENTITY((*uParam0)[0], "p_boiler02x");
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_159, true);
			}
			if (uParam0->f_158 != -1)
			{
				if (TASK::_0x6EF4E31B4D5D2DA0((*uParam0)[uParam0->f_158], "p_boiler02x"))
				{
					uParam0->f_158 = -1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_159))
			{
				if (TASK::_0x8360C47380B6F351((*uParam0)[iParam1], uParam0->f_159, "p_boiler02x", 1))
				{
					uParam0->f_158 = iParam1;
					return true;
				}
			}
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_341(var uParam0)
{
	int iVar0;
	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
	if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
	{
		if (func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
		{
			__LIB_12__::func_110(joaat("KNIFE1_TRANS_KNEEL1"), 2f);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
	{
		if (func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
		{
			__LIB_12__::func_110(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 2f);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
	}
}

bool func_342(var uParam0)
{
	if (uParam0->f_155 == 6 && __LIB_9__::func_980(1))
	{
		return true;
	}
	else
	{
		switch (uParam0->f_155)
		{
			case 1:
				__LIB_12__::func_110(joaat("COFFEE_TRANS_KNEEL"), 1086324736 /* Float: 6f */);
				break;
		}
	}
	return false;
}

bool func_344(var uParam0)
{
	if (uParam0->f_155 == 6 && __LIB_9__::func_980(1))
	{
		return true;
	}
	else
	{
		switch (uParam0->f_155)
		{
			case 1:
				__LIB_12__::func_110(joaat("COFFEE_TRANS_KNEEL"), 1086324736 /* Float: 6f */);
				break;
			case 8:
				__LIB_12__::func_110(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
				break;
			case 7:
				__LIB_12__::func_110(joaat("SIT_TRANS_KNEEL"), 0.5f);
				break;
		}
	}
	return false;
}

bool func_349(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	__LIB_19__::func_394(iParam1);
	if (!uParam0->f_1)
	{
		*uParam0 = PED::IS_PED_DEAD_OR_DYING(Global_35, true);
		uParam0->f_1 = 1;
	}
	if (Global_1935630.f_12 || *uParam0)
	{
		return false;
	}
	if (__LIB_0__::func_2() == 0)
	{
		if (Global_1935496.f_7 & 131072 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 1 == 0)
	{
		if (Global_1935496.f_7 & 1024 != 0)
		{
			return false;
		}
	}
	if (Global_1935630.f_22)
	{
		return false;
	}
	if (iParam3 & 2 == 0)
	{
		if (Global_1935496.f_7 & 32 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4 == 0)
	{
		if (Global_1935496.f_7 & 4096 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 8 == 0)
	{
		if (Global_1935496.f_7 & 512 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 512 == 0)
	{
		if (!uParam0->f_3)
		{
			uParam0->f_2 = __LIB_9__::func_186(bParam2);
			uParam0->f_3 = 1;
		}
		if (!uParam0->f_2)
		{
			return false;
		}
	}
	if (iParam3 & 262144 == 0)
	{
		if (!uParam0->f_5)
		{
			uParam0->f_4 = __LIB_7__::func_807(bParam2);
			uParam0->f_5 = 1;
		}
		if (!uParam0->f_4)
		{
			return false;
		}
	}
	if (iParam3 & 64 == 0)
	{
		if (!uParam0->f_7)
		{
			uParam0->f_6 = __LIB_7__::func_808(bParam2, iParam3, 1);
			uParam0->f_7 = 1;
		}
		if (!uParam0->f_6)
		{
			return false;
		}
	}
	if (iParam3 & 128 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = __LIB_2__::func_386(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = __LIB_0__::func_396(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
		if ((uParam0->f_10 || uParam0->f_12) || uParam0->f_8)
		{
			if (bParam2)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 8388608 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = __LIB_2__::func_386(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = __LIB_0__::func_396(Global_35);
			uParam0->f_9 = 1;
		}
		if (uParam0->f_10 || uParam0->f_8)
		{
			if (!uParam0->f_15)
			{
				uParam0->f_14 = PED::IS_PED_SWIMMING(Global_1935630.f_40);
				uParam0->f_15 = 1;
			}
			if (uParam0->f_14)
			{
				return false;
			}
		}
	}
	if (iParam3 & 16 == 0)
	{
		if (!uParam0->f_9)
		{
			uParam0->f_8 = __LIB_0__::func_396(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
		if (uParam0->f_8)
		{
			if (uParam0->f_12)
			{
				if (!uParam0->f_17)
				{
					uParam0->f_16 = __LIB_7__::func_809(Global_1935630.f_40, 1);
					uParam0->f_17 = 1;
				}
				if (!uParam0->f_16)
				{
					if (bParam2)
					{
						__LIB_0__::func_45("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
					}
					return false;
				}
			}
		}
	}
	if (iParam3 & 256 == 0)
	{
		if (Global_1935496.f_7 & 8192 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 1024 == 0)
	{
		if (Global_1935496.f_7 & 65536 != 0)
		{
			if (bParam2)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 2048 == 0)
	{
		if (Global_1935496.f_7 & 32768 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4096 == 0)
	{
		if (Global_1935496.f_7 & 16384 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 8192 == 0)
	{
		if (Global_1935496.f_7 & 16 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 16384 == 0)
	{
		if (Global_1935496.f_7 & 256 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 32768 == 0)
	{
		if (!uParam0->f_19)
		{
			uParam0->f_18 = __LIB_3__::func_63();
			uParam0->f_19 = 1;
		}
		if (uParam0->f_18)
		{
			if (bParam2)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 131072 == 0)
	{
		if (Global_1935496.f_7 & 524288 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 65536 == 0)
	{
		if (Global_1935496.f_7 & 262144 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 524288 == 0)
	{
		if (Global_1935496.f_7 & 2097152 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 1048576 == 0)
	{
		if (Global_1935496.f_7 & 8388608 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 2097152 == 0)
	{
		if (Global_1935496.f_7 & 33554432 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4194304 == 0)
	{
		if (Global_1935496.f_7 & 67108864 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 16777216 == 0)
	{
		if (Global_1935496.f_7 & 134217728 == 0)
		{
			return false;
		}
	}
	if (Global_1935496.f_7 & 17825988 != 0)
	{
		return false;
	}
	return true;
}

void func_373(int iParam0)
{
	int iVar0;
	iVar0 = joaat("APPLY_LOTION_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("APPLY_LOTION_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("APPLY_LOTION_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("APPLY_LOTION_BOTH_HANDS");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_376(int iParam0)
{
	int iVar0;
	iVar0 = 16939881;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = 16939881;
			break;
		case 1:
			iVar0 = -1165614444;
			break;
		case 3:
			iVar0 = 968591133;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_377(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = -45077177;
	switch (__LIB_3__::func_18())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -2137817968;
			}
			else
			{
				iVar0 = -45077177;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = -1947358597;
			}
			else
			{
				iVar0 = 36807409;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = -750686877;
			}
			else
			{
				iVar0 = 1293288723;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_378(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 1700817728;
	switch (__LIB_3__::func_18())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -447623645;
			}
			else
			{
				iVar0 = 1700817728;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = 1880532390;
			}
			else
			{
				iVar0 = -480771797;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = 468890170;
			}
			else
			{
				iVar0 = 764367205;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_379(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_380(int iParam0)
{
	int iVar0;
	iVar0 = -680642132;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = -680642132;
			break;
		case 1:
			iVar0 = -267849149;
			break;
		case 3:
			iVar0 = 1759003815;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_381(int iParam0)
{
	int iVar0;
	iVar0 = 2105609037;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = 2105609037;
			break;
		case 3:
			iVar0 = -457187977;
			break;
		case 1:
			iVar0 = -1595716047;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_382(int iParam0)
{
	int iVar0;
	iVar0 = 1964324114;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = 1964324114;
			break;
		case 3:
			iVar0 = -654111932;
			break;
		case 1:
			iVar0 = 1826089606;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_383(int iParam0)
{
	int iVar0;
	iVar0 = -1530144981;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = -1530144981;
			break;
		case 3:
			iVar0 = -389189374;
			break;
		case 1:
			iVar0 = -312546963;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_384(int iParam0)
{
	int iVar0;
	iVar0 = -1074475556;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = -1074475556;
			break;
		case 3:
			iVar0 = 392506445;
			break;
		case 1:
			iVar0 = -1846586910;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_385(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_386(int iParam0)
{
	int iVar0;
	iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_387(int iParam0)
{
	int iVar0;
	iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_388(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (__LIB_0__::func_192(iParam0, 1573112293))
		{
			__LIB_16__::func_431(__LIB_6__::func_846(&iParam0), 1, 1);
		}
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_389(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_TONIC_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_TONIC_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_390(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

bool func_526(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = 12;
	while (iVar0 <= 15)
	{
		__LIB_1__::func_748(&(uParam0->f_162[iVar0]), 1, 1);
		iVar0++;
	}
	if (!__LIB_0__::func_139(uParam0->f_162[3]))
	{
		uParam0->f_162[3] = __LIB_4__::func_864("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		__LIB_4__::func_12(uParam0->f_162[3], 1323335645, 0, 1);
	}
	if (__LIB_0__::func_644(524288))
	{
		uParam0->f_162[12] = __LIB_4__::func_864("CMP_SLP_MRN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_187 > 3 && uParam0->f_187 <= 9)
	{
		uParam0->f_162[13] = __LIB_4__::func_864("CMP_SLP_NOON", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		uParam0->f_162[14] = __LIB_4__::func_864("CMP_SLP_EVE", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		uParam0->f_162[15] = __LIB_4__::func_864("CMP_SLP_MDN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_187 > 9 && uParam0->f_187 <= 15)
	{
		uParam0->f_162[14] = __LIB_4__::func_864("CMP_SLP_EVE", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		uParam0->f_162[15] = __LIB_4__::func_864("CMP_SLP_MDN", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		uParam0->f_162[12] = __LIB_4__::func_864("CMP_SLP_MRN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_187 > 15 && uParam0->f_187 <= 21)
	{
		uParam0->f_162[15] = __LIB_4__::func_864("CMP_SLP_MDN", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		uParam0->f_162[12] = __LIB_4__::func_864("CMP_SLP_MRN", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		uParam0->f_162[13] = __LIB_4__::func_864("CMP_SLP_NOON", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_187 > 21 || uParam0->f_187 <= 3)
	{
		uParam0->f_162[12] = __LIB_4__::func_864("CMP_SLP_MRN", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		uParam0->f_162[13] = __LIB_4__::func_864("CMP_SLP_NOON", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		uParam0->f_162[14] = __LIB_4__::func_864("CMP_SLP_EVE", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	bVar1 = true;
	if (__LIB_0__::func_644(524288))
	{
		bVar1 = true;
	}
	else
	{
		if (Global_1392040.f_7 == -15)
		{
			Global_1392040.f_7 = __LIB_0__::func_23();
		}
		iVar2 = Global_1392040.f_7;
		__LIB_1__::func_446(&iVar2, 0, 0, 3, 0, 0, 0, 0);
		if (!__LIB_3__::func_77(iVar2))
		{
			if (Global_1392040.f_8 > 1)
			{
				bVar1 = false;
			}
		}
		else
		{
			Global_1392040.f_8 = 0;
		}
	}
	if (__LIB_0__::func_139(uParam0->f_162[12]))
	{
		if (uParam0->f_187 < 6)
		{
			iVar3 = (6 - uParam0->f_187);
		}
		else
		{
			iVar3 = (24 - uParam0->f_187) + 6;
		}
		__LIB_1__::func_483(uParam0->f_162[12], "CMP_SLP_MRN", iVar3, 1);
		__LIB_4__::func_12(uParam0->f_162[12], 1323335645, 0, 1);
		__LIB_1__::func_221(uParam0->f_162[12], bVar1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_162[13]))
	{
		if (uParam0->f_187 < 12)
		{
			iVar3 = (12 - uParam0->f_187);
		}
		else
		{
			iVar3 = (24 - uParam0->f_187) + 12;
		}
		__LIB_1__::func_483(uParam0->f_162[13], "CMP_SLP_NOON", iVar3, 1);
		__LIB_4__::func_12(uParam0->f_162[13], 1323335645, 0, 1);
		__LIB_1__::func_221(uParam0->f_162[13], bVar1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_162[14]))
	{
		if (uParam0->f_187 < 18)
		{
			iVar3 = (18 - uParam0->f_187);
		}
		else
		{
			iVar3 = (24 - uParam0->f_187) + 18;
		}
		__LIB_1__::func_483(uParam0->f_162[14], "CMP_SLP_EVE", iVar3, 1);
		__LIB_4__::func_12(uParam0->f_162[14], 1323335645, 0, 1);
		__LIB_1__::func_221(uParam0->f_162[14], bVar1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_162[15]))
	{
		iVar3 = (24 - uParam0->f_187);
		__LIB_1__::func_483(uParam0->f_162[15], "CMP_SLP_MDN", iVar3, 1);
		__LIB_4__::func_12(uParam0->f_162[15], 1323335645, 0, 1);
		__LIB_1__::func_221(uParam0->f_162[15], bVar1, 1);
	}
	return bVar1;
}

int func_543(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(iParam0, iParam1, 0);
	return func_855(iParam0, iParam1, bParam2, bParam3, iParam4);
}

void func_545(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam2)
	{
		uParam0->f_57.f_20++;
	}
	if (uParam0->f_57.f_37 == -1)
	{
		iVar0 = __LIB_1__::func_614(uParam0->f_57.f_77, 0, 0);
		iVar1 = __LIB_8__::func_959(uParam0->f_57.f_77, 0);
		iVar2 = __LIB_18__::func_516(uParam0->f_57.f_77, uParam0->f_57.f_78, __LIB_12__::func_171(), 0);
		if (iVar1 == -1)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = (iVar1 - iVar0);
		}
		uParam0->f_57.f_37 = __LIB_0__::func_259(iVar1, iVar2);
	}
	if (__LIB_12__::func_164(uParam0->f_57.f_77))
	{
		if (bParam3)
		{
			__LIB_1__::func_484(uParam0->f_162[iParam1], "CAMP_REC_COOK_AGN", 1);
		}
		else
		{
			__LIB_1__::func_484(uParam0->f_162[iParam1], "CAMP_REC_COOK", 1);
		}
	}
	else if (bParam3)
	{
		__LIB_1__::func_484(uParam0->f_162[iParam1], "CAMP_REC_MAKE_AGN", 1);
	}
	else if (__LIB_0__::func_372(uParam0->f_57.f_77, -1636519629) == -701492487)
	{
		__LIB_1__::func_484(uParam0->f_162[iParam1], "CAMP_REC_BREW", 1);
	}
	else
	{
		__LIB_1__::func_484(uParam0->f_162[iParam1], "CAMP_REC_MAKE", 1);
	}
}

void func_549(var uParam0, int iParam1)
{
	var uVar0[1];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	uVar0[0] = (*uParam0)[1];
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		__LIB_19__::func_633(uParam0, 0);
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
	if ((__LIB_0__::func_2() != -1 && __LIB_7__::func_729()) || __LIB_0__::func_100())
	{
		if (__LIB_0__::func_572((*uParam0)[0], 0))
		{
			__LIB_9__::func_987(uParam0);
			__LIB_12__::func_117(uParam0);
		}
		return;
	}
	if (uParam0->f_58)
	{
		HUD::_0xC9CAEAEEC1256E54(-469828803);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	switch (__LIB_9__::func_493(uParam0))
	{
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (__LIB_1__::func_352(uParam0))
			{
				__LIB_12__::func_126(uParam0);
				__LIB_16__::func_754(uParam0);
				__LIB_12__::func_134(uParam0);
			}
			if (__LIB_18__::func_515(uParam0))
			{
				__LIB_16__::func_753(uParam0, 3);
			}
			break;
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (__LIB_0__::func_2() == 0 && CAM::_0x251241CAEC707106())
			{
				__LIB_9__::func_987(uParam0);
				return;
			}
			if (__LIB_1__::func_352(uParam0))
			{
				__LIB_9__::func_987(uParam0);
				__LIB_12__::func_134(uParam0);
				if (__LIB_12__::func_112())
				{
					__LIB_12__::func_113(0);
				}
			}
			if (((uParam0->f_34 || __LIB_1__::func_732((*uParam0)[0], 1)) || __LIB_0__::func_644(8192)) || uParam0->f_35)
			{
				__LIB_18__::func_512(uParam0);
			}
			break;
		case 4:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (__LIB_19__::func_229(uParam0))
			{
				uParam0->f_62 = 1;
				if (__LIB_0__::func_644(4096))
				{
					uParam0->f_52 = 0;
				}
				else if (__LIB_0__::func_644(8192))
				{
					uParam0->f_52 = 4;
				}
				__LIB_16__::func_753(uParam0, 5);
			}
			break;
		case 5:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (__LIB_16__::func_755(uParam0))
			{
				__LIB_16__::func_753(uParam0, 6);
			}
			break;
		case 6:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (__LIB_19__::func_654(uParam0))
			{
				__LIB_16__::func_753(uParam0, 7);
			}
			break;
		case 7:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (__LIB_1__::func_352(uParam0))
			{
				__LIB_12__::func_135(uParam0);
				__LIB_12__::func_134(uParam0);
				return;
			}
			if (__LIB_19__::func_655(uParam0, 0))
			{
				if (__LIB_12__::func_172(uParam0, 0))
				{
					__LIB_16__::func_753(uParam0, 8);
				}
				else if (uParam0->f_31)
				{
					__LIB_16__::func_753(uParam0, 1);
				}
				else
				{
					__LIB_16__::func_753(uParam0, 0);
				}
			}
			break;
		case 15:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (!uParam0->f_62)
			{
				__LIB_16__::func_753(uParam0, 4);
				return;
			}
			if (__LIB_19__::func_645(uParam0))
			{
				__LIB_12__::func_172(uParam0, 1);
				__LIB_16__::func_753(uParam0, 8);
			}
			break;
		case 8:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("CRAFTING")))
			{
				if (UISTATEMACHINE::_0xF7C180F57F85D0B8(joaat("CRAFTING")))
				{
					Global_1911914.f_1580 = 0;
					__LIB_16__::func_753(uParam0, 10);
				}
			}
			break;
		case 9:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (__LIB_1__::func_352(uParam0))
			{
				__LIB_12__::func_135(uParam0);
				__LIB_12__::func_134(uParam0);
				return;
			}
			if (__LIB_19__::func_655(uParam0, 1))
			{
				__LIB_16__::func_753(uParam0, 10);
			}
			break;
		case 10:
			__LIB_12__::func_173(0);
			if (__LIB_0__::func_2() == 0 && CAM::_0x43AB9D5A7D415478())
			{
				__LIB_9__::func_987(uParam0);
				return;
			}
			if (__LIB_1__::func_352(uParam0))
			{
				__LIB_9__::func_987(uParam0);
				__LIB_12__::func_136(uParam0, 1);
				(*uParam0)[2] = __LIB_4__::func_864("CAMP_REC_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				if (__LIB_4__::func_233(32))
				{
					__LIB_1__::func_221((*uParam0)[2], 0, 1);
				}
				else
				{
					__LIB_1__::func_221((*uParam0)[2], 1, 1);
				}
				(*uParam0)[1] = __LIB_4__::func_864("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				if (__LIB_0__::func_144(uParam0->f_75, 0))
				{
					uParam0->f_77 = uParam0->f_75;
					uParam0->f_78 = uParam0->f_76;
					__LIB_19__::func_606(uParam0, &(uParam0->f_74));
				}
				else
				{
					uParam0->f_77 = 0;
				}
				if (__LIB_12__::func_164(uParam0->f_75))
				{
					__LIB_1__::func_484((*uParam0)[1], "CAMP_REC_COOK", 1);
				}
				else if (__LIB_0__::func_372(uParam0->f_75, -1636519629) == -701492487)
				{
					__LIB_1__::func_484((*uParam0)[1], "CAMP_REC_BREW", 1);
				}
				else
				{
					__LIB_1__::func_484((*uParam0)[1], "CAMP_REC_MAKE", 1);
				}
				(*uParam0)[3] = __LIB_4__::func_864(__LIB_12__::func_137(uParam0), joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				(*uParam0)[5] = __LIB_5__::func_651("RECIPE", joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
				__LIB_4__::func_862((*uParam0)[5], joaat("INPUT_GAME_MENU_LEFT"));
				__LIB_4__::func_862((*uParam0)[5], joaat("INPUT_GAME_MENU_RIGHT"));
				if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_73))
				{
					iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iNumCostVariants");
				}
				if (iVar2 > 1 && __LIB_0__::func_144(uParam0->f_77, 0))
				{
					__LIB_1__::func_221((*uParam0)[5], 1, 1);
				}
				else
				{
					__LIB_1__::func_221((*uParam0)[5], 0, 1);
				}
				(*uParam0)[6] = __LIB_4__::func_864("INFO", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				if (!uParam0->f_82)
				{
					__LIB_1__::func_484((*uParam0)[6], "INFO", 1);
				}
				else
				{
					__LIB_1__::func_484((*uParam0)[6], "INGREDIENTS", 1);
				}
				if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_40) == 0)
				{
					__LIB_12__::func_138(uParam0);
					__LIB_1__::func_221((*uParam0)[6], 0, 1);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_NO_REC_TIP"));
				}
				__LIB_19__::func_536(uParam0, uParam0->f_77, uParam0->f_78);
				__LIB_12__::func_134(uParam0);
			}
			if (Global_1911914.f_1580)
			{
				Global_1911914.f_1580 = 0;
				ATTRIBUTE::_0xD962F8579D702DB5();
				__LIB_12__::func_138(uParam0);
				uParam0->f_77 = 0;
				uParam0->f_78 = 0;
				__LIB_19__::func_536(uParam0, 0, 0);
				__LIB_1__::func_221((*uParam0)[5], 0, 1);
				__LIB_16__::func_753(uParam0, 9);
			}
			else if (__LIB_5__::func_645((*uParam0)[2], 1))
			{
				if (uParam0->f_34)
				{
					__LIB_16__::func_753(uParam0, 16);
				}
				else
				{
					__LIB_12__::func_165(uParam0, 0);
					__LIB_4__::func_860("Exit", "SSCRFT_Sounds");
					if (uParam0->f_35)
					{
						uParam0->f_35 = 0;
						__LIB_16__::func_753(uParam0, 1);
					}
					else
					{
						__LIB_16__::func_753(uParam0, 3);
					}
				}
			}
			else if (__LIB_1__::func_732((*uParam0)[1], 1))
			{
				__LIB_18__::func_960(uParam0);
			}
			else if (__LIB_1__::func_732((*uParam0)[3], 1))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_57 = !uParam0->f_57;
				__LIB_12__::func_138(uParam0);
				uParam0->f_77 = 0;
				uParam0->f_78 = 0;
				__LIB_19__::func_536(uParam0, 0, 0);
				__LIB_1__::func_221((*uParam0)[5], 0, 1);
				__LIB_16__::func_753(uParam0, 9);
			}
			else if (__LIB_5__::func_649((*uParam0)[5], 0, 1))
			{
				if (uParam0->f_79)
				{
					__LIB_4__::func_860("Nav_Left", "SSCRFT_Sounds");
					__LIB_19__::func_646(uParam0, 0);
				}
			}
			else if (__LIB_5__::func_649((*uParam0)[5], 1, 1))
			{
				if (uParam0->f_79)
				{
					__LIB_4__::func_860("Nav_Right", "SSCRFT_Sounds");
					__LIB_19__::func_646(uParam0, 1);
				}
			}
			else if (__LIB_1__::func_732((*uParam0)[6], 1))
			{
				__LIB_18__::func_966(uParam0, 1);
			}
			else
			{
				iVar3 = -813979060;
				while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar3))
				{
					if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar3, &iVar4))
					{
						if (iVar4 == 703281244 || iVar4 == -722926211)
						{
							__LIB_19__::func_607(uParam0);
						}
						else if (iVar4 == -1740156697)
						{
							__LIB_19__::func_634(uParam0, &iVar4);
						}
						else if (iVar4 == -1203660660)
						{
							if (__LIB_0__::func_572((*uParam0)[1], 0))
							{
								__LIB_18__::func_960(uParam0);
							}
						}
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar3);
					}
				}
			}
			break;
		case 11:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			break;
		case 12:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_77), 1, 0, 0, 0);
			__LIB_12__::func_173(0);
			iVar8 = PED::_0xC22AA08A8ADB87D4(Global_35);
			iVar9 = __LIB_0__::func_372(uParam0->f_77, -1636519629);
			if (iVar8 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
			{
				if (!PED::_0x68821369A2CEADD5(Global_35, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1")))
				{
					PED::_0xD65FDC686A031C83(Global_35, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 6f);
					PED::_0x6D07B371E9439019(Global_35);
				}
				return;
			}
			if (iVar9 != -715814988)
			{
				if (iVar8 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
				{
					if (!PED::_0x68821369A2CEADD5(Global_35, joaat("KNIFE1_TRANS_KNEEL1")))
					{
						PED::_0xD65FDC686A031C83(Global_35, joaat("KNIFE1_TRANS_KNEEL1"), 6f);
						PED::_0x6D07B371E9439019(Global_35);
					}
					return;
				}
				else
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				}
				if (((((((((iVar9 == 414472632 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_63, true, false)) || (iVar9 == -1136843638 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_66, true, false))) || (uParam0->f_88 != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_88))) || (iVar9 == -732326901 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_68, true, false))) || (iVar9 == 786205940 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_67, true, false))) || (iVar9 == -1141771998 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_69, true, false))) || (iVar9 == 364689687 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_70, true, false))) || (iVar9 == -842117252 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_71, true, false))) || (iVar9 == -1610298873 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_72, true, false)))
				{
					return;
				}
				else if (uParam0->f_64)
				{
					__LIB_16__::func_760(uParam0);
					uParam0->f_64 = 0;
				}
			}
			else
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_65, true, false) || (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0)))
				{
					return;
				}
				else if (uParam0->f_64)
				{
					__LIB_16__::func_760(uParam0);
					uParam0->f_64 = 0;
				}
				if (iVar8 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
				{
					if (uParam0->f_31)
					{
						if (!PED::_0x68821369A2CEADD5(Global_35, joaat("KNEEL1_TRANS_KNIFE1")))
						{
							PED::_0xD65FDC686A031C83(Global_35, joaat("KNEEL1_TRANS_KNIFE1"), 2f);
							PED::_0x6D07B371E9439019(Global_35);
						}
						return;
					}
				}
			}
			if (__LIB_1__::func_352(uParam0))
			{
				__LIB_12__::func_134(uParam0);
				__LIB_12__::func_174(uParam0, 0, &uVar0);
				__LIB_16__::func_760(uParam0);
				if (__LIB_0__::func_139((*uParam0)[1]))
				{
					__LIB_1__::func_748(uParam0[1], 1, 1);
				}
				if (__LIB_12__::func_139(iVar9))
				{
					uParam0->f_53 = 250;
					(*uParam0)[1] = __LIB_4__::func_864("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_53, uParam0->f_53 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_19__::func_536(uParam0, uParam0->f_77, uParam0->f_78);
					__LIB_4__::func_12((*uParam0)[1], -1067771379, 0, 1);
					__LIB_1__::func_522((*uParam0)[1], 10, 1, 1);
					__LIB_1__::func_522((*uParam0)[1], 11, 1, 1);
					__LIB_1__::func_221((*uParam0)[1], 0, 1);
				}
				else
				{
					(*uParam0)[1] = __LIB_4__::func_864("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 250, 251, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_4__::func_12((*uParam0)[1], -1067771379, 0, 1);
					__LIB_1__::func_382((*uParam0)[1], 1, 1);
					__LIB_1__::func_522((*uParam0)[1], 10, 1, 1);
					__LIB_1__::func_522((*uParam0)[1], 11, 1, 1);
					__LIB_1__::func_221((*uParam0)[1], 0, 1);
				}
				return;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -563455375))
			{
				PAD::_0x5F217BC1190503D8("CRFT_BLIP_LIGHT", 0.2f);
			}
			if (__LIB_12__::func_139(iVar9))
			{
				if (!uParam0->f_36)
				{
					if (__LIB_0__::func_572((*uParam0)[1], 0))
					{
						if (__LIB_1__::func_514((*uParam0)[1], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT")))
						{
							uParam0->f_36 = 1;
							__LIB_1__::func_221((*uParam0)[1], 0, 1);
							__LIB_1__::func_221((*uParam0)[4], 0, 1);
						}
					}
				}
				if ((((((iVar9 == -1136843638 || iVar9 == -732326901) || iVar9 == 786205940) || iVar9 == -1141771998) || iVar9 == 364689687) || iVar9 == -842117252) || iVar9 == -1610298873)
				{
					if (uParam0->f_88 != 0)
					{
						if ((uParam0->f_88 == joaat("S_CFT_ARROW_SMALLGAME") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1011038463)) || (uParam0->f_88 != joaat("S_CFT_ARROW_SMALLGAME") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2024314131)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
							{
								OBJECT::DELETE_OBJECT(&(uParam0->f_86));
							}
							if (__LIB_0__::func_192(uParam0->f_77, -1588156645) && iVar9 != -842117252)
							{
								uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(__LIB_0__::func_914(uParam0->f_77, 0), 1, Global_36, true, 1f);
								ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
								if (iVar9 == -1610298873)
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(__LIB_12__::func_140(uParam0, iVar9), "DYNAMITE", uParam0->f_86, 0);
								}
							}
							else
							{
								uParam0->f_86 = OBJECT::CREATE_OBJECT(uParam0->f_88, Global_36, true, true, false, false, false);
								ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
							}
							if (iVar9 == 786205940)
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							}
							else if (iVar9 == -1141771998 || iVar9 == -1610298873)
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							}
							else if (iVar9 == -842117252)
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							}
							else
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							}
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 966057053))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
						{
							OBJECT::DELETE_OBJECT(&(uParam0->f_86));
						}
						if (iVar9 == -732326901 || iVar9 == 364689687)
						{
							uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, Global_36, true, 1f);
						}
						else if (iVar9 == -1141771998)
						{
							uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_TOMAHAWK"), 1, Global_36, true, 1f);
						}
						else if (iVar9 == -842117252)
						{
							uParam0->f_86 = OBJECT::CREATE_OBJECT(joaat("P_MOLOTOVEMPTY01X"), Global_36, true, true, false, false, true);
						}
						else if (iVar9 == -1610298873)
						{
							uParam0->f_86 = OBJECT::CREATE_OBJECT(joaat("W_STICK_DYNAMITE01"), Global_36, true, true, false, false, true);
							if (iVar9 == -1610298873)
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(__LIB_12__::func_140(uParam0, iVar9), "DYNAMITE", uParam0->f_86, 0);
							}
						}
						else
						{
							uParam0->f_86 = OBJECT::CREATE_OBJECT(joaat("S_CFT_ARROW"), Global_36, true, true, false, false, false);
						}
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
						if (iVar9 == 786205940)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else if ((iVar9 == -1141771998 || iVar9 == -1610298873) || iVar9 == -842117252)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1394836706))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
						{
							OBJECT::DELETE_OBJECT(&(uParam0->f_86));
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1471149551))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_87))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_87, true);
						}
					}
				}
				else if (iVar9 == 414472632 || iVar9 == -715814988)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 966057053))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_85, true);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -61921192))
				{
					if (!__LIB_0__::func_708(0))
					{
						if (uParam0->f_21 == -1)
						{
							uParam0->f_21 = __LIB_19__::func_608(uParam0->f_77, uParam0->f_78);
							if (uParam0->f_21 == -1)
							{
								__LIB_18__::func_961(uParam0, iVar9, 0);
							}
							return;
						}
						else if (__LIB_16__::func_756(uParam0->f_21))
						{
							return;
						}
						uParam0->f_21 = -1;
					}
					else
					{
						func_543(uParam0->f_77, uParam0->f_78, 1, __LIB_12__::func_171(), 0);
						func_99(uParam0->f_77, 1, 0, 1, 0);
						if (uParam0->f_31)
						{
							__LIB_16__::func_761();
						}
					}
					if (iVar9 == -842117252)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
						{
							OBJECT::DELETE_OBJECT(&(uParam0->f_86));
						}
					}
					uParam0->f_20++;
					uParam0->f_38++;
					if ((!__LIB_19__::func_537(uParam0->f_77, uParam0->f_78, 0, __LIB_12__::func_171(), 0, 0) || __LIB_11__::func_426(uParam0->f_77, 1, 0)) || uParam0->f_20 >= uParam0->f_37)
					{
						__LIB_18__::func_961(uParam0, iVar9, 0);
						return;
					}
				}
				if (!uParam0->f_36)
				{
					if (!(__LIB_0__::func_572((*uParam0)[1], 0) && PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT"))))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("SAFETOBREAKOUT")))
						{
							__LIB_18__::func_961(uParam0, iVar9, 1);
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1290366555) && uParam0->f_20 < (uParam0->f_37 - 1))
				{
					__LIB_1__::func_221((*uParam0)[1], 1, 1);
					__LIB_1__::func_221((*uParam0)[4], 1, 1);
					uParam0->f_36 = 0;
				}
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(__LIB_12__::func_140(uParam0, iVar9), "player"))
				{
					__LIB_18__::func_961(uParam0, iVar9, 0);
				}
			}
			else if (__LIB_1__::func_285(&(uParam0->f_89), (IntToFloat(uParam0->f_53) / 1000f)))
			{
				if (!__LIB_0__::func_708(0))
				{
					if (uParam0->f_21 == -1)
					{
						uParam0->f_21 = __LIB_19__::func_608(uParam0->f_77, uParam0->f_78);
						if (uParam0->f_21 == -1)
						{
							__LIB_18__::func_961(uParam0, iVar9, 0);
						}
						return;
					}
					else if (__LIB_16__::func_756(uParam0->f_21))
					{
						return;
					}
					uParam0->f_21 = -1;
				}
				else
				{
					func_543(uParam0->f_77, uParam0->f_78, 1, __LIB_12__::func_171(), 0);
					func_99(uParam0->f_77, 1, 1, 1, 0);
					if (uParam0->f_31)
					{
						__LIB_16__::func_761();
					}
				}
				uParam0->f_37 = -1;
				uParam0->f_38 = 0;
				__LIB_4__::func_226(131072);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_86));
				}
				uParam0->f_55 = 0;
				bVar10 = true;
				if (!__LIB_19__::func_537(uParam0->f_77, uParam0->f_78, 0, __LIB_12__::func_171(), 0, 0) || __LIB_11__::func_426(uParam0->f_77, 1, 0))
				{
					bVar10 = false;
				}
				__LIB_18__::func_961(uParam0, iVar9, bVar10);
			}
			break;
		case 0:
			if (__LIB_12__::func_112())
			{
				__LIB_12__::func_113(0);
			}
			if (__LIB_1__::func_352(uParam0))
			{
				__LIB_9__::func_987(uParam0);
				__LIB_12__::func_134(uParam0);
			}
			break;
		case 13:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_77), 1, 0, 0, 0);
			__LIB_12__::func_173(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2015667492))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_87));
				}
			}
			if (!__LIB_4__::func_233(128))
			{
				if (!__LIB_0__::func_572((*uParam0)[2], 0))
				{
					__LIB_1__::func_221((*uParam0)[2], 1, 1);
					__LIB_1__::func_382((*uParam0)[2], 0, 1);
				}
				if (!__LIB_0__::func_572((*uParam0)[4], 0))
				{
					__LIB_1__::func_221((*uParam0)[4], 1, 1);
					__LIB_1__::func_382((*uParam0)[4], 1, 1);
				}
			}
			if (__LIB_5__::func_645((*uParam0)[2], 1))
			{
				__LIB_9__::func_987(uParam0);
				__LIB_0__::func_37(&(uParam0->f_89));
				__LIB_16__::func_753(uParam0, 14);
				return;
			}
			else if (__LIB_0__::func_567((*uParam0)[4], 1))
			{
				__LIB_9__::func_987(uParam0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_85));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_86));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_87));
				}
				iVar11 = PED::_0x569F1E1237508DEB(Global_35);
				if (iVar11 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
				iVar9 = __LIB_0__::func_372(uParam0->f_77, -1636519629);
				iVar12 = __LIB_12__::func_140(uParam0, iVar9);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar12, "player", Global_35);
				__LIB_12__::func_165(uParam0, 0);
				__LIB_4__::func_860("Exit", "SSCRFT_Sounds");
				if (uParam0->f_31)
				{
					__LIB_16__::func_753(uParam0, 1);
				}
				else
				{
					__LIB_16__::func_753(uParam0, 0);
				}
				return;
			}
			else if (__LIB_1__::func_732((*uParam0)[1], 1))
			{
				__LIB_1__::func_221((*uParam0)[4], 0, 1);
				__LIB_1__::func_221((*uParam0)[2], 0, 1);
				__LIB_1__::func_221((*uParam0)[1], 0, 1);
				iVar9 = __LIB_0__::func_372(uParam0->f_77, -1636519629);
				iVar13 = __LIB_12__::func_140(uParam0, iVar9);
				if (iVar13 != 0)
				{
					ANIMSCENE::RESET_ANIM_SCENE(iVar13, "pl_craft");
					ANIMSCENE::LOAD_ANIM_SCENE(iVar13);
				}
				__LIB_0__::func_37(&(uParam0->f_89));
				uParam0->f_36 = 0;
				__LIB_16__::func_753(uParam0, 12);
				return;
			}
			if (__LIB_1__::func_530((*uParam0)[4], 1))
			{
				if (!__LIB_0__::func_75(&(uParam0->f_89)))
				{
					__LIB_1__::func_148(&(uParam0->f_89));
				}
				else if (__LIB_1__::func_285(&(uParam0->f_89), 0.1f))
				{
					__LIB_1__::func_484((*uParam0)[4], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (__LIB_0__::func_75(&(uParam0->f_89)))
				{
					__LIB_0__::func_37(&(uParam0->f_89));
				}
				__LIB_1__::func_484((*uParam0)[4], "CAMP_REC_BACK", 1);
			}
			break;
		case 14:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_77), 1, 0, 0, 0);
			__LIB_12__::func_173(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2015667492))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_87));
				}
			}
			iVar9 = __LIB_0__::func_372(uParam0->f_77, -1636519629);
			iVar14 = __LIB_12__::func_140(uParam0, iVar9);
			if ((iVar14 == 0 || (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar14) || ANIMSCENE::_0xF94692EB9DC15D74(iVar14, 0))) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_85));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_86));
				}
				iVar15 = PED::_0x569F1E1237508DEB(Global_35);
				if (iVar15 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar14, "player", Global_35);
				__LIB_16__::func_753(uParam0, 15);
			}
			break;
		case 1:
			if (__LIB_12__::func_112())
			{
				__LIB_12__::func_113(0);
			}
			if (__LIB_1__::func_352(uParam0))
			{
				if (__LIB_0__::func_139((*uParam0)[0]))
				{
					__LIB_1__::func_221((*uParam0)[0], 0, 1);
				}
				__LIB_12__::func_134(uParam0);
			}
			break;
		case 16:
			if (__LIB_12__::func_112())
			{
				__LIB_12__::func_113(0);
			}
			if (__LIB_1__::func_352(uParam0))
			{
				__LIB_12__::func_134(uParam0);
			}
			__LIB_12__::func_165(uParam0, 0);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_39);
			Global_1911914.f_1576 = 0;
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
}

void func_550(var uParam0)
{
	bool bVar0;
	if (uParam0->f_57.f_78 == joaat("COST_CRAFTING_GRILL"))
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		__LIB_0__::func_15(__LIB_0__::func_358(joaat("FOOD_SEASONED")), 1);
	}
	STATS::_0x378D3B1B11D9385B(uParam0->f_57.f_77);
	__LIB_4__::func_229(16384);
	__LIB_4__::func_226(65536);
	__LIB_9__::func_817(16);
	if (__LIB_0__::func_708(0))
	{
		func_543(uParam0->f_57.f_77, uParam0->f_57.f_78, 1, __LIB_12__::func_171(), 0);
	}
	__LIB_1__::func_748(&(uParam0->f_162[6]), 1, 1);
	if (bVar0)
	{
		uParam0->f_162[6] = __LIB_4__::func_864("CRAFT_FASTER", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 6, 7000, 10000, 35, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		uParam0->f_162[6] = __LIB_4__::func_864("CRAFT_FASTER", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 6, 7000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	func_545(uParam0, 6, 0, 0);
	__LIB_1__::func_221(uParam0->f_162[6], 0, 1);
	__LIB_4__::func_12(uParam0->f_162[6], -1067771379, 0, 1);
	uParam0->f_196 = MISC::GET_GAME_TIMER();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_160))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_160));
	}
	uParam0->f_160 = OBJECT::CREATE_OBJECT(__LIB_12__::func_170(uParam0->f_57.f_77), Global_36, false, false, false, false, true);
	if (PED::_0x3BBDD6143FF16F98(Global_35, uParam0->f_160, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
	{
	}
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_160, false);
	OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_160, 0f, true);
	uParam0->f_208 = 3;
	__LIB_9__::func_987(&(uParam0->f_57));
	__LIB_16__::func_753(&(uParam0->f_57), 0);
	__LIB_10__::func_250();
	AUDIO::_0xAC84686C06184B0D("cooking", "Player_Campfire_Scenes");
	__LIB_14__::func_578(uParam0, 13);
}

void func_552(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_162[6] = __LIB_4__::func_864("CRAFT_FASTER", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 0, 7000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		func_545(uParam0, 6, 0, 1);
		__LIB_1__::func_221(uParam0->f_162[6], 0, 1);
		__LIB_4__::func_12(uParam0->f_162[6], -1067771379, 0, 1);
	}
	uParam0->f_162[11] = __LIB_4__::func_864("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	uParam0->f_162[3] = __LIB_4__::func_864("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
	__LIB_12__::func_122(&(uParam0->f_162[3]), "INPUT_PCRAFT_EXIT");
	__LIB_1__::func_382(uParam0->f_162[11], 0, 1);
	__LIB_4__::func_12(uParam0->f_162[11], -1067771379, 0, 1);
	__LIB_4__::func_12(uParam0->f_162[3], -1067771379, 0, 1);
	__LIB_1__::func_522(uParam0->f_162[3], 19, 1, 1);
	__LIB_1__::func_522(uParam0->f_162[3], 20, 1, 1);
	__LIB_1__::func_522(uParam0->f_162[3], 13, 1, 1);
	__LIB_1__::func_522(uParam0->f_162[11], 13, 1, 1);
	__LIB_1__::func_221(uParam0->f_162[11], 0, 1);
	__LIB_1__::func_221(uParam0->f_162[3], 0, 1);
}

void func_554(var uParam0, int iParam1)
{
	bool bVar0;
	if (__LIB_1__::func_530(uParam0->f_162[6], 1))
	{
		bVar0 = true;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1812847403))
	{
		if (PAD::_0x1252C029FC8EBB4D())
		{
			AUDIO::_0x9821B68CD3E05F2B("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			PAD::_0x709BA8C08C5C008D();
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1738621174))
	{
		if (!PAD::_0x1252C029FC8EBB4D())
		{
			AUDIO::_0x9821B68CD3E05F2B("distanceToFlame", 0f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			PAD::_0x5F217BC1190503D8("CRFT_SEAR_MEAT", 7f);
		}
	}
	switch (iParam1)
	{
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ARTHUR"):
			if (bVar0)
			{
				if (func_85(uParam0))
				{
					if (__LIB_12__::func_110(joaat("COOKKNIFE_TRANS_COOKKNIFE_ACTIVE"), 0.5f))
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL1"):
			if (bVar0)
			{
				if (func_85(uParam0))
				{
					if (__LIB_12__::func_110(joaat("COOKGRILL1_TRANS_SEARGRILL1"), 0.5f))
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2"):
			if (bVar0)
			{
				if (func_85(uParam0))
				{
					if (__LIB_12__::func_110(joaat("COOKGRILL2_TRANS_SEARGRILL2"), 0.5f))
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR"):
			if (!bVar0)
			{
				if (func_85(uParam0))
				{
					if (__LIB_12__::func_110(joaat("COOKKNIFE_ACTIVE_TRANS_COOKKNIFE"), 0.5f))
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_SEARGRILL1"):
			if (!bVar0)
			{
				if (func_85(uParam0))
				{
					if (__LIB_12__::func_110(joaat("SEARGRILL1_TRANS_COOKGRILL1"), 0.5f))
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2_SEARGRILL2"):
			if (!bVar0)
			{
				if (func_85(uParam0))
				{
					if (__LIB_12__::func_110(joaat("SEARGRILL2_TRANS_COOKGRILL2"), 0.5f))
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT"):
			if (bVar0)
			{
				if (func_85(uParam0))
				{
					if (__LIB_12__::func_110(joaat("KNEELFIRECRAFT_TRANS_KNEELFIRECRAFTACTIVE"), 0.5f))
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE"):
			if (!bVar0)
			{
				if (func_85(uParam0))
				{
					if (__LIB_12__::func_110(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFT"), 0.5f))
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
	}
}

void func_556(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((__LIB_0__::func_139(uParam0->f_162[6]) && __LIB_19__::func_537(uParam0->f_57.f_77, uParam0->f_57.f_78, 0, __LIB_12__::func_171(), 0, 0)) && !__LIB_11__::func_426(uParam0->f_57.f_77, 1, 0))
		{
			__LIB_1__::func_221(uParam0->f_162[6], 1, 1);
		}
	}
	if (!__LIB_0__::func_572(uParam0->f_162[11], 0))
	{
		__LIB_1__::func_221(uParam0->f_162[11], 1, 1);
		__LIB_1__::func_382(uParam0->f_162[11], 0, 1);
	}
	if (!__LIB_0__::func_572(uParam0->f_162[3], 0))
	{
		__LIB_1__::func_221(uParam0->f_162[3], 1, 1);
	}
}

bool func_558(var uParam0)
{
	if (!func_85(uParam0) || (MISC::GET_GAME_TIMER() - uParam0->f_196) < 500)
	{
		return false;
	}
	if (uParam0->f_154 == 0)
	{
		__LIB_12__::func_110(joaat("KNEEL1_TRANS_COFFEE1"), 6f);
		uParam0->f_196 = MISC::GET_GAME_TIMER();
		return true;
	}
	else if (uParam0->f_154 == 1)
	{
		__LIB_12__::func_110(joaat("KNEEL2_TRANS_COFFEE2"), 6f);
		uParam0->f_196 = MISC::GET_GAME_TIMER();
		return true;
	}
	else if (uParam0->f_154 == 2)
	{
		if (!func_340(uParam0, 2))
		{
			return false;
		}
		if (__LIB_12__::func_124(Global_35, (*uParam0)[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COFFEE2", "KNEEL3_TRANS_COFFEE2", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
		{
			uParam0->f_157 = 6;
			uParam0->f_154 = 1;
			uParam0->f_196 = MISC::GET_GAME_TIMER();
			return true;
		}
	}
	else if (uParam0->f_154 == 3)
	{
		if (!func_340(uParam0, 3))
		{
			return false;
		}
		if (__LIB_12__::func_124(Global_35, (*uParam0)[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COFFEE1", "KNEEL4_TRANS_COFFEE1", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
		{
			uParam0->f_157 = 6;
			uParam0->f_154 = 0;
			uParam0->f_196 = MISC::GET_GAME_TIMER();
			return true;
		}
	}
	return false;
}

void func_562(var uParam0)
{
	__LIB_1__::func_748(&(uParam0->f_162[6]), 1, 1);
	uParam0->f_162[6] = __LIB_4__::func_864("CRAFT_FASTER", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 6, 6000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	func_545(uParam0, 6, 0, 0);
	__LIB_4__::func_12(uParam0->f_162[6], -1067771379, 0, 1);
	if (__LIB_0__::func_708(0))
	{
		func_543(uParam0->f_57.f_77, uParam0->f_57.f_78, 1, __LIB_12__::func_171(), 0);
	}
	__LIB_1__::func_221(uParam0->f_162[6], 0, 1);
	__LIB_10__::func_250();
	uParam0->f_196 = MISC::GET_GAME_TIMER();
	AUDIO::_0xAC84686C06184B0D("crafting", "Player_Campfire_Scenes");
	__LIB_14__::func_578(uParam0, 1);
}

bool func_568(int iParam0, int iParam1)
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
				if (func_568(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_568(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_568(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_568(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

int func_644(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	iParam1 = __LIB_11__::func_103(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	iVar0 = __LIB_8__::func_716(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_646(&iVar0, iParam0, &iParam1, bParam3, iParam4);
	}
	return iParam1;
}

int func_646(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
	if (func_945(*iParam0, iParam1, *iParam2, bParam3, iParam4))
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
			__LIB_11__::func_103(*iParam0, iParam1, *iParam2, 1);
		}
		iVar4 = (iVar1 - __LIB_7__::func_601(iVar0, iParam1));
		*iParam2 = (*iParam2 - iVar4);
		return 1;
	}
	return 0;
}

int func_647(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_1__::func_614(iParam0, 0, 0);
	if (iVar0 >= iParam1)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar1 = iVar0;
		iVar2 = (iParam1 - iVar1);
	}
	if (iVar1 > 0)
	{
		if (!func_226(iParam0, iVar1, bParam2, iParam3, 0))
		{
			return 0;
		}
	}
	if (iVar2 > 0)
	{
		if (!__LIB_9__::func_988(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		if (!bParam2)
		{
			__LIB_0__::func_45("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

int func_855(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar33;
	int iVar34;
	var uVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	if (!__LIB_0__::func_708(0))
	{
		return 0;
	}
	if (iParam4 != 0)
	{
		bParam3 = false;
	}
	if (!__LIB_18__::func_963(iParam0, 1, iParam1, &iVar31, &uVar35, bParam3, iParam4, 1))
	{
		iVar33 = iVar31;
		return 0;
	}
	if (__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar34, 1, 0))
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			iVar33 = Var0[iVar36 /*2*/];
			if (__LIB_0__::func_144(iVar33, 0))
			{
				if (iVar33 == joaat("CURRENCY_CASH"))
				{
					__LIB_1__::func_432(Var0[iVar36 /*2*/].f_1, 0, 0, bParam2, 1);
				}
				else if (bParam3)
				{
					if (__LIB_12__::func_570(iVar33) || __LIB_12__::func_129(iVar33))
					{
						if (!__LIB_1__::func_707(iVar33, Var0[iVar36 /*2*/].f_1, 0))
						{
							iVar37 = func_1086(7, iVar33, Var0[iVar36 /*2*/].f_1);
						}
						__LIB_1__::func_698(iVar33, iVar37, 562618531, 0, 0);
						Var0[iVar36 /*2*/].f_1 = (Var0[iVar36 /*2*/].f_1 - iVar37);
						if (Var0[iVar36 /*2*/].f_1 > 0)
						{
							if (!__LIB_1__::func_707(iVar33, Var0[iVar36 /*2*/].f_1, 0))
							{
								func_1087(iVar33, Var0[iVar36 /*2*/].f_1);
							}
							if (__LIB_1__::func_707(iVar33, Var0[iVar36 /*2*/].f_1, 0))
							{
								func_226(iVar33, Var0[iVar36 /*2*/].f_1, bParam2, -142743235, 0);
							}
						}
					}
					else
					{
						if (__LIB_12__::func_143(iVar33) > 0)
						{
							__LIB_12__::func_176(iVar33);
							Var0[iVar36 /*2*/].f_1 = (Var0[iVar36 /*2*/].f_1 - 1);
						}
						if (Var0[iVar36 /*2*/].f_1 > 0)
						{
							if (__LIB_12__::func_177(7, iVar33) > 0)
							{
								__LIB_12__::func_184(7, iVar33, Var0[iVar36 /*2*/].f_1);
								Var0[iVar36 /*2*/].f_1 = (Var0[iVar36 /*2*/].f_1 - __LIB_12__::func_184(7, iVar33, Var0[iVar36 /*2*/].f_1));
							}
						}
						if (Var0[iVar36 /*2*/].f_1 > 0)
						{
							func_226(iVar33, Var0[iVar36 /*2*/].f_1, bParam2, 562618531, 0);
						}
					}
				}
				else if (iParam4 == 0)
				{
					if (__LIB_12__::func_570(iVar33) || __LIB_12__::func_129(iVar33))
					{
						if (!__LIB_1__::func_707(iVar33, Var0[iVar36 /*2*/].f_1, 0))
						{
							func_1087(iVar33, Var0[iVar36 /*2*/].f_1);
						}
					}
					func_226(iVar33, Var0[iVar36 /*2*/].f_1, bParam2, 562618531, 0);
				}
				else
				{
					__LIB_6__::func_301(iVar33, iParam4, Var0[iVar36 /*2*/].f_1, 562618531);
				}
				iVar38 = __LIB_6__::func_846(&iVar33);
				if (__LIB_3__::func_959(iVar38))
				{
					iVar39 = __LIB_6__::func_847(iVar38);
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("USED_IN_RECIPE"), iVar39), Var0[iVar36 /*2*/].f_1);
				}
			}
			iVar36++;
		}
		return 1;
	}
	return 0;
}

int func_945(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
	return func_1153(iVar0, iParam1, iParam2, bParam3, iParam4);
}

int func_1086(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		if (iVar26 >= iParam2)
		{
		}
		else
		{
			iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
			if (!__LIB_12__::func_152(iVar28))
			{
			}
			else
			{
				MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
				iVar29 = 0;
				while (iVar29 < 10)
				{
					iVar30 = Var3.f_1[iVar29];
					if (iVar30 == iParam1)
					{
						__LIB_1__::func_825(iParam1, 1, 752097756);
						if (ENTITY::DOES_ENTITY_EXIST(iVar28))
						{
							iVar31 = __LIB_9__::func_984(iVar28);
							if (!__LIB_0__::func_144(iVar31, 0))
							{
								iVar31 = __LIB_8__::func_694(iVar28);
							}
							if (__LIB_0__::func_144(iVar31, 0))
							{
								func_327(iVar31, 1, 1, -142743235, 0);
							}
							ENTITY::_DELETE_CARRIABLE(&iVar28);
						}
						iVar26++;
					}
					iVar29++;
				}
			}
			iVar27++;
		}
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

void func_1087(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	if (iParam1 > 0)
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = __LIB_0__::func_372(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return;
		}
		Var2 = { __LIB_0__::func_373(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar12, 0) };
		if (__LIB_0__::func_778(Var2, &iVar0, &iVar1, 0))
		{
			iVar14 = 0;
			while (iVar14 < iVar1)
			{
				if (iParam1 <= 0)
				{
				}
				else
				{
					iVar13 = __LIB_0__::func_374(iVar14, iVar0);
					if (__LIB_0__::func_144(iVar13, 0) && iParam0 != iVar13)
					{
						iVar15 = __LIB_1__::func_614(iVar13, 0, 0);
						while (iVar15 > 0 && iParam1 > 0)
						{
							iParam1 = (iParam1 - func_1208(iVar13, iParam0));
							iVar15 = (iVar15 - 1);
						}
					}
					iVar14++;
				}
			}
			__LIB_0__::func_375(iVar0);
		}
	}
}

int func_1153(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
			func_1153(iParam0, iParam1, __LIB_1__::func_614(iParam1, 0, 0), bParam3, iParam4);
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

int func_1208(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = 1;
	iVar2 = 0;
	iVar1 = __LIB_12__::func_154(iParam0);
	iVar2 = __LIB_12__::func_153(iParam0);
	if (iVar2 != 0)
	{
		func_226(iParam0, 1, 1, -142743235, 0);
		iVar0 = func_1266(iVar2, iVar1, iParam0, iParam1);
	}
	return iVar0;
}

int func_1266(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0[15];
	int iVar16;
	int iVar17;
	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, __LIB_12__::func_154(iParam2));
	iVar16 = 0;
	while (iVar16 < 15)
	{
		if ((__LIB_0__::func_144(uVar0[iVar16], 0) && !__LIB_0__::func_192(uVar0[iVar16], 1286414894)) && !uVar0[iVar16] == iParam2)
		{
			func_228(uVar0[iVar16], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (iParam3 != 0)
			{
				if (iParam3 == uVar0[iVar16])
				{
					iVar17++;
				}
			}
			else
			{
				iVar17++;
			}
		}
		iVar16++;
	}
	__LIB_15__::func_497(__LIB_0__::func_708(0), 1, 0);
	return iVar17;
}

