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
	struct<59> Local_14[1];
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<332> Local_77 = { 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434730246, 1934809837, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 4, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_77);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		if (iLocal_76 > 2)
		{
			__LIB_16__::func_879(21, Local_77.f_290, &(Local_77.f_146[0]), &(Local_77.f_136), &(Local_77.f_331), 0, 1097859072 /* Float: 15f */, 0);
			func_3(&Local_77, Local_77.f_290, &iLocal_76);
			func_4(&Local_77, &iLocal_76);
			if (__LIB_16__::func_881(21, Local_77.f_146[0], 1, 1) && iLocal_76 > 2)
			{
				func_6(&Local_77, &(Local_77.f_158), "s_base", 0);
			}
			else
			{
				func_7(&Local_77, &iLocal_76);
				func_8(&Local_77, &iLocal_76);
				__LIB_16__::func_854(Local_77.f_146[0], &(Local_77.f_160), 16384, 21, 0);
				func_10();
				func_11(&Local_77, &(Local_77.f_148[0]), &(Local_77.f_160));
				func_12();
				func_13(Local_77.f_146[0], &(Local_77.f_160), 67108864, 16777216, 134217728, "SPECIAL_PED_CHELONIAN_FOCUS", "PoorJoeConvo");
				func_14(Local_77.f_160, 262144);
				if (__LIB_0__::func_393(Global_35, Local_77.f_154, 0, 1))
				{
					PED::SET_PED_RESET_FLAG(Global_35, 168, true);
				}
				switch (iLocal_76)
				{
					case 0:
						func_16(&Local_77, &iLocal_76);
						break;
					case 1:
						if (func_17(&Local_77))
						{
							func_18(&iLocal_76, 2);
						}
						break;
					case 2:
						func_19(&Local_77, &iLocal_76);
						break;
					case 3:
						func_20(&Local_77, &iLocal_76);
						break;
					case 5:
						func_21(&Local_77, &iLocal_76);
						break;
					case 8:
						func_22(&Local_77, &iLocal_76);
						break;
					case 9:
						func_23(&Local_77, &iLocal_76);
						break;
					case 6:
						func_24(&Local_77, &iLocal_76, 0);
						break;
					case 7:
						func_24(&Local_77, &iLocal_76, 1);
						break;
					case 10:
						func_25(&Local_77, &iLocal_76);
						break;
					case 11:
						func_26(&Local_77, &iLocal_76);
						break;
					case 12:
						func_27(&Local_77, &iLocal_76);
						break;
					case 13:
						func_28(&Local_77, &iLocal_76);
						break;
					case 14:
						func_29(&Local_77, &iLocal_76);
						break;
					case 15:
						func_30(&Local_77, &iLocal_76);
						break;
					case 17:
						break;
					case 4:
						func_31(&Local_77, &iLocal_76);
						break;
					case 16:
						func_32(&Local_77, &iLocal_76);
						break;
					default:
						break;
				}
			}
		}
	}
}

void func_1(var uParam0)
{
	__LIB_16__::func_839(&(uParam0->f_291));
	__LIB_10__::func_515(&(uParam0->f_312));
	__LIB_16__::func_840(21);
	__LIB_17__::func_19();
	__LIB_2__::func_451(&(Local_14[0 /*59*/]), 0);
	__LIB_2__::func_480(&(Local_14[0 /*59*/].f_21), 0, 0, 1, 0);
	__LIB_2__::func_593(&(Local_14[0 /*59*/]), &(Local_14[0 /*59*/].f_21));
	__LIB_2__::func_344(&(uParam0->f_146[0]));
	func_41();
	__LIB_17__::func_298(uParam0->f_146[0]);
	__LIB_3__::func_59(uParam0->f_155);
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "PoorJoeConvo");
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_146[0]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_146[0], 0f);
		PED::DELETE_PED(&(uParam0->f_146[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_148[0]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_148[0]));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_150))
	{
		__LIB_1__::func_544(uParam0->f_150);
		VOLUME::_DELETE_VOLUME(uParam0->f_150);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_152))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_152);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_152);
		VOLUME::_DELETE_VOLUME(uParam0->f_152);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_151))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_151);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_153))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_153);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_154))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_154);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_155))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_155);
	}
	if (HUD::_TEXT_DATABASE_HAS_LOADED("SPPRJAU"))
	{
		HUD::_TEXT_DATABASE_DELETE("SPPRJAU");
	}
	if (HUD::_TEXT_DATABASE_HAS_LOADED("SPPJ"))
	{
		HUD::_TEXT_DATABASE_DELETE("SPPJ");
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_3(var uParam0, int iParam1, int iParam2)
{
	if (*iParam2 <= 2)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1396257[21 /*638*/][iParam1 /*48*/].f_47))
	{
		func_1(uParam0);
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		if (*iParam2 == 11)
		{
			func_54(uParam0);
		}
		func_1(uParam0);
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1396257[21 /*638*/][iParam1 /*48*/].f_47, true, 0))
	{
		if (!__LIB_0__::func_75(&(uParam0->f_127)))
		{
			__LIB_1__::func_283(&(uParam0->f_127), 0);
		}
		else if (__LIB_0__::func_265(&(uParam0->f_127)) > 10f)
		{
			__LIB_0__::func_37(&(uParam0->f_127));
			func_1(uParam0);
		}
	}
	else if (__LIB_16__::func_961(21, iParam1, &(uParam0->f_291), uParam0->f_146[0]))
	{
		uParam0->f_330 = 1;
		if (__LIB_16__::func_809(&(uParam0->f_291)))
		{
			func_1(uParam0);
		}
	}
}

void func_4(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_146[0]))
	{
		if (!__LIB_0__::func_272(uParam0->f_146[0], 0))
		{
			if (*iParam1 == 11)
			{
				func_54(uParam0);
			}
			func_1(uParam0);
		}
		else if (((*iParam1 >= 3 && *iParam1 <= 15) && *iParam1 != 11) && __LIB_12__::func_465(uParam0->f_146[0], 0, &(uParam0->f_98), &(uParam0->f_126), 0, 0))
		{
			if (!__LIB_0__::func_27(uParam0->f_160, 128))
			{
				if (__LIB_0__::func_27(Local_77.f_160, 16777216))
				{
					__LIB_1__::func_993(&(Local_77.f_160), 16777216);
					__LIB_1__::func_993(&(Local_77.f_160), 262144);
					func_61(0);
					if (__LIB_4__::func_813(&(Local_77.f_312)))
					{
						__LIB_10__::func_515(&(Local_77.f_312));
					}
				}
				__LIB_1__::func_581(&(uParam0->f_160), 128);
				__LIB_16__::func_789(21);
				func_18(iParam1, 16);
			}
		}
	}
}

bool func_6(var uParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam1, false))
		{
			ANIMSCENE::START_ANIM_SCENE(*uParam1);
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam1, false))
		{
			if ((!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2) && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam1, sParam2)) && !ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam1, sParam2);
			}
			if (!ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2) && ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, sParam2, true);
				return false;
			}
			else if (ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_base", 1) || ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_base_hide_loop", 1)) || (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*uParam1) > 0.99f && bParam3))
				{
					if (__LIB_16__::func_863(uParam1, uParam0->f_156))
					{
						uParam0->f_156 = sParam2;
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_7(var uParam0, int iParam1)
{
	if (*iParam1 >= 16 || *iParam1 <= 2)
	{
		return;
	}
	__LIB_17__::func_297(&(uParam0->f_145), uParam0->f_153, &(uParam0->f_146[0]), &(uParam0->f_175), &(uParam0->f_133), 5000);
}

void func_8(var uParam0, int iParam1)
{
	if (__LIB_0__::func_27(uParam0->f_160, 64))
	{
		return;
	}
	if (*iParam1 >= 3 && *iParam1 <= 10)
	{
		if (uParam0->f_172 < 2)
		{
			if (__LIB_16__::func_802(&(uParam0->f_146[0]), 249295937))
			{
				__LIB_1__::func_581(&(uParam0->f_160), 64);
			}
		}
	}
}

void func_10()
{
	if (func_75())
	{
		if (func_76(iLocal_74) > -1)
		{
			if (func_77())
			{
				__LIB_16__::func_841(&(Local_14[iLocal_74 /*59*/]), 0);
				__LIB_2__::func_451(&(Local_14[iLocal_74 /*59*/]), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				if (!__LIB_0__::func_27(iLocal_75, 2))
				{
					__LIB_2__::func_344(&(Local_77.f_146[0]));
					__LIB_2__::func_480(&(Local_14[iLocal_74 /*59*/].f_21), 0, 0, 1, 0);
				}
			}
		}
	}
	else
	{
		__LIB_16__::func_841(&(Local_14[iLocal_74 /*59*/]), 0);
		__LIB_2__::func_344(&(Local_77.f_146[0]));
		__LIB_2__::func_451(&(Local_14[iLocal_74 /*59*/]), 0);
		__LIB_2__::func_480(&(Local_14[iLocal_74 /*59*/].f_21), 0, 0, 1, 0);
	}
}

void func_11(var uParam0, var uParam1, var uParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_146[0]) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (!__LIB_0__::func_27(*uParam2, 1024))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(*uParam1, uParam0->f_146[0]))
		{
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(*uParam1, Global_35))
		{
			PED::APPLY_DAMAGE_TO_PED(Global_35, 20, 0, 64826, *uParam1);
			CAM::SHAKE_GAMEPLAY_CAM("JOLT_SHAKE", 0.5f);
			AUDIO::_PLAY_SOUND_FROM_ENTITY("Stone_Hit_Player", Global_35, "SP_Poor_Joe_Sounds", false, 0, 0);
			AUDIO::_0xA6847BBA4FCDD13F(Global_35, "PAIN_LOW");
			PED::SET_PED_TO_RAGDOLL(Global_35, 0, 0, 1, false, false, false);
			ENTITY::APPLY_FORCE_TO_ENTITY(Global_35, 1, Vector(3.5f, 3.5f, 3.5f) * __LIB_0__::func_173(Global_36 - ENTITY::GET_ENTITY_COORDS(*uParam1, false, false)), 0f, 0f, 0f, 0, false, false, true, false, true);
			__LIB_1__::func_581(uParam2, 1024);
		}
		else if (!ENTITY::IS_ENTITY_IN_AIR(*uParam1, 0))
		{
			AUDIO::_PLAY_SOUND_FROM_ENTITY("Stone_Miss_Player", Global_35, "SP_Poor_Joe_Sounds", false, 0, 0);
			__LIB_1__::func_581(uParam2, 1024);
		}
	}
}

void func_12()
{
	if (__LIB_0__::func_27(Local_77.f_160, 131072))
	{
		__LIB_17__::func_299(&(Local_77.f_146[0]), 1, 1, 1, 1, 1, 1, 1);
	}
}

void func_13(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6)
{
	if (!__LIB_0__::func_1(*uParam1, iParam2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam6);
		return;
	}
	if (__LIB_0__::func_1(*uParam1, iParam3))
	{
		if (!__LIB_0__::func_1(*uParam1, iParam4))
		{
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0, sParam5, 0f, 0f, 0f, 0, sParam6);
			__LIB_0__::func_7(uParam1, iParam4);
		}
	}
	else if (__LIB_0__::func_1(*uParam1, iParam4))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam6);
		__LIB_0__::func_8(uParam1, iParam4);
	}
}

void func_14(var uParam0, int iParam1)
{
	if (__LIB_0__::func_1(uParam0, iParam1))
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
		__LIB_1__::func_725();
		HUD::_0xC9CAEAEEC1256E54(-1679307491);
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 174, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 174, true);
		}
		__LIB_16__::func_836();
	}
	else if (PED::GET_PED_CONFIG_FLAG(Global_35, 174, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
	}
}

void func_16(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_158))
	{
		uParam0->f_158 = ANIMSCENE::_CREATE_ANIM_SCENE("script@specialped@pdprj_poor_joe@ig@ig_1@ig_1", 2, 0, false, true);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_158))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_158);
		STREAMING::REQUEST_MODEL(uParam0->f_143, false);
		STREAMING::REQUEST_MODEL(uParam0->f_144, false);
		HUD::_TEXT_DATABASE_REQUEST("SPPJ");
		HUD::_TEXT_DATABASE_REQUEST("SPPRJAU");
		HUD::_TEXT_DATABASE_REQUEST("SPDEF");
		func_83(uParam0);
		__LIB_2__::func_261(uParam0->f_150, "SP_POOR_JOE_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		POPULATION::_0xB56D41A694E42E86(uParam0->f_152, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_152, 0, 0, 0, -1, -1, 0);
		__LIB_9__::func_364(uParam0->f_155, 0, 224, 0);
		uParam0->f_142 = __LIB_1__::func_293(21, 0, 9, __LIB_16__::func_790(21));
		if (!__LIB_0__::func_6(uParam0->f_142))
		{
			return;
		}
		if (__LIB_0__::func_181())
		{
			__LIB_0__::func_928(uParam0, Global_35, "JOHN", 0);
		}
		else
		{
			__LIB_0__::func_928(uParam0, Global_35, "ARTHUR", 0);
		}
		__LIB_16__::func_875(&(uParam0->f_291));
		__LIB_4__::func_228(&(uParam0->f_98));
		__LIB_1__::func_403(&(uParam0->f_98), 1);
		__LIB_8__::func_731(&(uParam0->f_98), 1);
		__LIB_1__::func_399(&(uParam0->f_98), 0);
		__LIB_1__::func_397(&(uParam0->f_98), 0);
		__LIB_1__::func_402(&(uParam0->f_98), 1);
		__LIB_1__::func_404(&(uParam0->f_98), 1);
		__LIB_1__::func_405(&(uParam0->f_98), 1);
		__LIB_1__::func_407(&(uParam0->f_98), 0);
		__LIB_1__::func_406(&(uParam0->f_98), 0);
		__LIB_1__::func_393(&(uParam0->f_98), 1);
		__LIB_10__::func_590(&(uParam0->f_98), 0);
		__LIB_2__::func_619(&(uParam0->f_98), 0);
		__LIB_1__::func_398(&(uParam0->f_98), 1);
		__LIB_1__::func_401(&(uParam0->f_98), 1);
		__LIB_2__::func_830(&(uParam0->f_98), 1);
		__LIB_2__::func_828(&(uParam0->f_98), 1);
		__LIB_1__::func_413(&(uParam0->f_98), 1);
		__LIB_2__::func_829(&(uParam0->f_98), 1);
		__LIB_2__::func_956(&(uParam0->f_98), 1);
		STREAMING::REQUEST_PTFX_ASSET();
		if (__LIB_0__::func_6(uParam0->f_142))
		{
			uParam0->f_161 = __LIB_0__::func_895(uParam0->f_142);
		}
		func_18(iParam1, 1);
	}
}

bool func_17(var uParam0)
{
	PED::_0xED9582B3DA8F02B4(1);
	if (((((((STREAMING::HAS_MODEL_LOADED(uParam0->f_143) && STREAMING::HAS_MODEL_LOADED(uParam0->f_144)) && HUD::_TEXT_DATABASE_HAS_LOADED("SPPRJAU")) && HUD::_TEXT_DATABASE_HAS_LOADED("SPPJ")) && HUD::_TEXT_DATABASE_HAS_LOADED("SPDEF")) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_158, true, false)) && PED::_0x5C16855277819BBF() == 1) && STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		if (__LIB_17__::func_37(&(uParam0->f_142), &(uParam0->f_161)))
		{
			return true;
		}
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_143))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_144))
	{
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SPPRJAU"))
	{
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_158, true, false))
	{
	}
	if (PED::_0x5C16855277819BBF() != 1)
	{
	}
	if (!STREAMING::HAS_PTFX_ASSET_LOADED())
	{
	}
	return false;
}

void func_18(int iParam0, int iParam1)
{
	if (!(iParam1 == 4 || iParam1 == 8))
	{
		if (__LIB_0__::func_27(Local_77.f_160, 2097152))
		{
			__LIB_1__::func_993(&(Local_77.f_160), 2097152);
		}
	}
	if (((iParam1 == 10 || iParam1 == 11) || iParam1 == 16) || iParam1 == 17)
	{
		if (__LIB_0__::func_27(Local_77.f_160, 1048576))
		{
			__LIB_1__::func_993(&(Local_77.f_160), 1048576);
		}
	}
	*iParam0 = iParam1;
}

void func_19(var uParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var4;
	Var0 = { func_114(2) };
	Var4 = { func_114(1) };
	if (__LIB_16__::func_954(&(uParam0->f_146[0]), uParam0->f_143, Var0, Var0.f_3, 1, 0, 1) && __LIB_17__::func_106(&(uParam0->f_148[0]), uParam0->f_144, Var4))
	{
		if (__LIB_0__::func_272(uParam0->f_146[0], 0))
		{
			__LIB_16__::func_792(uParam0->f_146[0], 21);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_146[0], "special_ped_group", 0f);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_146[0], 297, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_146[0], 130, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_146[0], 317, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_146[0], 315, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_146[0], 344, true);
			PED::_0xAE6004120C18DF97(uParam0->f_146[0], 0, 0);
			__LIB_2__::func_279(uParam0->f_146[0], 1);
			AUDIO::_0x4AD019591E94C064("Stone_Hit_Player", Global_35, "SP_Poor_Joe_Sounds", -2);
			AUDIO::_0x4AD019591E94C064("Stone_Miss_Player", Global_35, "SP_Poor_Joe_Sounds", -2);
			__LIB_1__::func_581(&(uParam0->f_160), 1024);
			__LIB_0__::func_928(uParam0, uParam0->f_146[0], "POOR_JOE", 0);
			uParam0->f_159 = func_119(uParam0);
			uParam0->f_173 = 1;
			func_61(0);
			func_120(0, 0, "SPD_UC_GRT", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0);
			func_120(0, 1, "SPD_UC_ANT", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0);
			func_122(0, __LIB_2__::func_340(3, 0, 0), 0);
			func_123(0, 0, 10);
			func_123(0, 1, 10);
			func_124(0, 0);
			__LIB_1__::func_581(&(Local_77.f_160), 1048576);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_146[0], Var0, Var0.f_3, true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_148[0], Var4, Var4.f_3, true, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_158, "CS_POORJOE", uParam0->f_146[0], 0);
			if (!__LIB_0__::func_181())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_158, "b_PlayerArthur", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_158, "ARTHUR", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_158, "b_PlayerArthur", false, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_158, "JOHN", Global_35, 0);
			}
			func_18(iParam1, 3);
		}
	}
}

void func_20(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_146[0]) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (func_6(uParam0, &(uParam0->f_158), "pl_base", 0))
	{
		func_18(iParam1, 5);
	}
}

void func_21(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_146[0]) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!__LIB_1__::func_205(Global_35, uParam0->f_151, 1, 0))
	{
		return;
	}
	if (func_6(uParam0, &(uParam0->f_158), func_126((uParam0->f_163 % 9)), 0))
	{
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_leaves_descend", 2705.561f, 2367.957f, 172f, 0f, 0f, 0f, 1f, false, false, false);
		__LIB_16__::func_981(21, __LIB_0__::func_113());
		uParam0->f_163++;
		func_18(iParam1, 8);
	}
}

void func_22(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_146[0]) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (__LIB_0__::func_636(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_146[0], false, false)) > 20f)
	{
		return;
	}
	if (func_130(uParam0, iParam1))
	{
		return;
	}
	if (func_6(uParam0, &(uParam0->f_158), func_131((uParam0->f_162 % 6)), 0))
	{
		func_18(iParam1, 4);
		uParam0->f_171 = MISC::GET_GAME_TIMER() + 2500;
	}
}

void func_23(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_146[0]) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (func_6(uParam0, &(uParam0->f_158), func_132((uParam0->f_166 % 11)), 0))
	{
		uParam0->f_166++;
		func_18(iParam1, 8);
	}
}

void func_24(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_146[0]) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	bVar0 = ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_146[0], 904987901);
	bVar1 = ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_146[0], -1161663078);
	if (bParam2)
	{
		func_133(&(uParam0->f_146[0]), &(uParam0->f_148[0]), &(uParam0->f_160), bVar0, bVar1);
		if (func_6(uParam0, &(uParam0->f_158), func_134((uParam0->f_165 % 5)), 0))
		{
			uParam0->f_165++;
			func_18(iParam1, 8);
		}
	}
	else
	{
		func_133(&(uParam0->f_146[0]), &(uParam0->f_148[0]), &(uParam0->f_160), bVar0, bVar1);
		if (func_6(uParam0, &(uParam0->f_158), func_135((uParam0->f_164 % 18)), 0))
		{
			if (uParam0->f_164 == 4 || uParam0->f_164 == 14)
			{
				func_136(uParam0);
			}
			uParam0->f_164++;
			func_18(iParam1, 8);
		}
	}
}

void func_25(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_146[0]) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (func_6(uParam0, &(uParam0->f_158), func_137((uParam0->f_167 % 3)), 1))
	{
		uParam0->f_167++;
		func_18(iParam1, 11);
	}
}

void func_26(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_146[0]) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!AUDIO::_0xA2CAC9DEF0195E6F(0))
	{
		if (!__LIB_0__::func_27(uParam0->f_160, 65536))
		{
			if (__LIB_12__::func_465(uParam0->f_146[0], 0, &(uParam0->f_98), &(uParam0->f_126), 0, 0))
			{
				func_138(uParam0, "PDRPJ_AGGRO");
				__LIB_1__::func_581(&(uParam0->f_160), 65536);
				return;
			}
		}
		if (!__LIB_0__::func_27(uParam0->f_160, 32768) && !__LIB_0__::func_75(&(uParam0->f_139)))
		{
			__LIB_1__::func_148(&(uParam0->f_139));
		}
		if (uParam0->f_169 < 3 && __LIB_1__::func_313(&(uParam0->f_139), 6f))
		{
			func_138(uParam0, func_141((uParam0->f_168 % 9)));
			uParam0->f_168++;
			uParam0->f_169++;
			return;
		}
		else if (!__LIB_0__::func_27(uParam0->f_160, 32768) && uParam0->f_169 >= 3)
		{
			__LIB_1__::func_581(&(uParam0->f_160), 32768);
		}
	}
}

void func_27(var uParam0, int iParam1)
{
	char[] cVar0[8];
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_146[0]) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	cVar0 = "pl_conversation_enter";
	if (func_6(uParam0, &(uParam0->f_158), cVar0, 0))
	{
		func_18(iParam1, 13);
	}
}

void func_28(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_146[0]) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	__LIB_10__::func_519(&(Local_77.f_312), "PRJ_UC_POS", "PRJ_UC_NEG", 0, 2, 25000, 0, -1, -1);
	if (__LIB_4__::func_813(&(Local_77.f_312)))
	{
		if (__LIB_10__::func_514(&(Local_77.f_312)))
		{
			if (__LIB_8__::func_349(&(Local_77.f_312)))
			{
				__LIB_10__::func_515(&(Local_77.f_312));
				__LIB_1__::func_581(&(Local_77.f_160), 4194304);
			}
			else if (__LIB_8__::func_350(&(Local_77.f_312)))
			{
				__LIB_10__::func_515(&(Local_77.f_312));
				__LIB_1__::func_581(&(Local_77.f_160), 8388608);
			}
		}
	}
	if (__LIB_0__::func_27(Local_77.f_160, 4194304) || __LIB_0__::func_27(Local_77.f_160, 8388608))
	{
		__LIB_1__::func_581(&(Local_77.f_160), 268435456);
		func_18(iParam1, 14);
	}
}

void func_29(var uParam0, int iParam1)
{
	char[] cVar0[8];
	float fVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_146[0]) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (__LIB_0__::func_27(Local_77.f_160, 4194304))
	{
		cVar0 = "pl_conversation_pos";
		fVar1 = 0.773f;
	}
	else if (__LIB_0__::func_27(Local_77.f_160, 8388608))
	{
		cVar0 = "pl_conversation_neg";
		fVar1 = 0.623f;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0))
	{
		if (func_6(uParam0, &(uParam0->f_158), cVar0, 0))
		{
			__LIB_1__::func_993(&(Local_77.f_160), 262144);
			__LIB_1__::func_993(&(Local_77.f_160), 16777216);
			func_61(0);
			__LIB_1__::func_581(&(Local_77.f_160), 1048576);
			if (__LIB_0__::func_27(Local_77.f_160, 4194304))
			{
				func_18(iParam1, 8);
			}
			else if (__LIB_0__::func_27(Local_77.f_160, 8388608))
			{
				func_18(iParam1, 11);
			}
		}
		if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_158, cVar0) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_158) >= fVar1)
		{
			__LIB_1__::func_993(&(Local_77.f_160), 262144);
			__LIB_1__::func_993(&(Local_77.f_160), 16777216);
			func_61(0);
			__LIB_1__::func_581(&(Local_77.f_160), 1048576);
		}
	}
	else
	{
		__LIB_1__::func_993(&(Local_77.f_160), 262144);
		__LIB_1__::func_993(&(Local_77.f_160), 16777216);
		func_61(0);
		__LIB_1__::func_581(&(Local_77.f_160), 1048576);
		func_18(iParam1, 8);
	}
}

void func_30(var uParam0, int iParam1)
{
	char[] cVar0[8];
	float fVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_146[0]) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (uParam0->f_290 == 0)
	{
		cVar0 = "pl_conversation_arthur_01";
		fVar1 = 0.711f;
	}
	else if (uParam0->f_290 == 1)
	{
		cVar0 = "pl_conversation_arthur_02";
		fVar1 = 0.808f;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0))
	{
		if (func_6(uParam0, &(uParam0->f_158), cVar0, 0))
		{
			__LIB_1__::func_993(&(Local_77.f_160), 262144);
			__LIB_1__::func_993(&(Local_77.f_160), 16777216);
			func_61(0);
			__LIB_1__::func_581(&(Local_77.f_160), 1048576);
			func_18(iParam1, 8);
		}
		if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_158, cVar0) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_158) >= fVar1)
		{
			__LIB_1__::func_993(&(Local_77.f_160), 262144);
			__LIB_1__::func_993(&(Local_77.f_160), 16777216);
			func_61(0);
			__LIB_1__::func_581(&(Local_77.f_160), 1048576);
		}
	}
	else
	{
		__LIB_1__::func_993(&(Local_77.f_160), 262144);
		__LIB_1__::func_993(&(Local_77.f_160), 16777216);
		func_61(0);
		__LIB_1__::func_581(&(Local_77.f_160), 1048576);
		func_18(iParam1, 8);
	}
}

void func_31(var uParam0, int iParam1)
{
	if (func_130(uParam0, iParam1))
	{
		return;
	}
	if (uParam0->f_171 < MISC::GET_GAME_TIMER())
	{
		func_146(uParam0, iParam1);
	}
}

void func_32(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_146[0]))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_148[0]))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_148[0]))
	{
		ENTITY::DETACH_ENTITY(uParam0->f_148[0], true, true);
	}
	if (func_6(uParam0, &(uParam0->f_158), func_147(uParam0), 1))
	{
		func_146(uParam0, iParam1);
		func_18(iParam1, 11);
	}
}

void func_41()
{
	__LIB_2__::func_603(&(Local_77.f_146[0]), &(Local_14[0 /*59*/]), &(Local_14[0 /*59*/].f_21), 1, 1);
}

void func_54(var uParam0)
{
	PED::DELETE_PED(&(uParam0->f_146[0]));
}

void func_61(int iParam0)
{
	if (!__LIB_16__::func_816(iParam0))
	{
		return;
	}
	iLocal_74 = iParam0;
}

bool func_75()
{
	if (((__LIB_0__::func_665(Global_35, Local_77.f_146[0], 1, 0) <= 15f && __LIB_0__::func_27(Local_77.f_160, 1048576)) && !__LIB_0__::func_27(Local_77.f_160, 128)) && !__LIB_0__::func_27(Local_77.f_160, 65536))
	{
		return true;
	}
	return false;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	if (iParam0 < 0 || iParam0 >= 1)
	{
		return iVar0;
	}
	iVar1 = 0;
	iVar0 = func_206(&(Local_77.f_146[0]), &(Local_14[iParam0 /*59*/]), 15f, &(Local_14[iParam0 /*59*/].f_21), 0f, 2, Local_14[iParam0 /*59*/].f_57, iVar1, Local_14[iParam0 /*59*/].f_56, 0, 0, 2, -1082130432 /* Float: -1f */);
	if (func_207())
	{
		__LIB_16__::func_841(&(Local_14[iParam0 /*59*/]), 1);
		if (iVar0 > -1)
		{
			Local_14[iParam0 /*59*/].f_58 = iVar0;
		}
		return iVar0;
	}
	else
	{
		__LIB_16__::func_841(&(Local_14[iParam0 /*59*/]), 0);
	}
	return iVar0;
}

bool func_77()
{
	int iVar0;
	if (func_208() == 0)
	{
		if (func_209(0, &iVar0))
		{
			if (iVar0 == 0)
			{
				if (__LIB_0__::func_181())
				{
					__LIB_5__::func_469(Global_35, "GREET_GENERAL", -417894478, Local_77.f_146[0], 1, 0, 0, 1);
				}
				else
				{
					__LIB_5__::func_469(Global_35, "GREET_GENERAL", -417894478, Local_77.f_146[0], 1, 0, 0, 1);
				}
			}
			else if (iVar0 == 1)
			{
				if (__LIB_0__::func_181())
				{
					if (Local_77.f_290 == 0)
					{
						__LIB_5__::func_469(Global_35, "INSULT_MALE_CONV_PART1", -417894478, Local_77.f_146[0], 1, "JOHN_PLAYER", 13, 1);
					}
					else if (Local_77.f_290 == 1)
					{
						__LIB_5__::func_469(Global_35, "INSULT_MALE_CONV_PART1", -417894478, Local_77.f_146[0], 1, "JOHN_PLAYER", 15, 1);
					}
					else
					{
						__LIB_5__::func_469(Global_35, "INSULT_MALE_CONV_PART1", -417894478, Local_77.f_146[0], 1, "JOHN_PLAYER", 19, 1);
					}
				}
				else if (Local_77.f_290 == 0)
				{
					__LIB_5__::func_469(Global_35, "INSULT_POORJOE_CONV_PART1", -417894478, Local_77.f_146[0], 1, 0, 1, 1);
				}
				else
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
					{
						case 0:
							__LIB_5__::func_469(Global_35, "INSULT_POORJOE_CONV_PART3", -417894478, Local_77.f_146[0], 1, 0, 1, 1);
							break;
						case 1:
							__LIB_5__::func_469(Global_35, "INSULT_POORJOE_CONV_PART1", -417894478, Local_77.f_146[0], 1, 0, 2, 1);
							break;
					}
				}
			}
			__LIB_16__::func_849(21, &(Local_77.f_146[0]), &(Local_77.f_160), 512);
			if (!__LIB_0__::func_27(Local_77.f_160, 262144))
			{
				__LIB_1__::func_581(&(Local_77.f_160), 262144);
				__LIB_1__::func_581(&(Local_77.f_160), 67108864);
				__LIB_1__::func_581(&(Local_77.f_160), 16777216);
			}
			func_212(&Local_77);
			__LIB_1__::func_581(&(Local_77.f_160), 524288);
			if (Local_77.f_290 != 2)
			{
				__LIB_1__::func_581(&(Local_77.f_160), 268435456);
			}
		}
	}
	__LIB_1__::func_993(&(Local_77.f_160), 1048576);
	__LIB_1__::func_993(&(Local_77.f_160), 2097152);
	return true;
}

void func_83(var uParam0)
{
	struct<11> Var0;
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_150))
	{
		Var0 = { func_218(0) };
		uParam0->f_150 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_151))
	{
		Var0 = { func_218(1) };
		uParam0->f_151 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_152))
	{
		Var0 = { func_218(2) };
		uParam0->f_152 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_153))
	{
		Var0 = { func_218(3) };
		uParam0->f_153 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_154))
	{
		Var0 = { func_218(4) };
		uParam0->f_154 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_155))
	{
		Var0 = { func_218(5) };
		uParam0->f_154 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
}

struct<4> func_114(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 2706.158f, 2370.946f, 165.3596f };
			Var0.f_3 = 195.579f;
			break;
		case 1:
			Var0 = { 2706.158f, 2370.946f, 165.3596f };
			Var0.f_3 = 195.579f;
			break;
		case 5:
			Var0 = { 2706.214f, 2370.569f, 166.0049f };
			Var0.f_3 = 195.579f;
			break;
		case 2:
			Var0 = { 2706.285f, 2370.085f, 169.8426f };
			Var0.f_3 = 165.0252f;
			break;
		case 3:
			Var0 = { 2707.254f, 2369.777f, 169.8719f };
			Var0.f_3 = 189.4668f;
			break;
		case 4:
			Var0 = { 2706.539f, 2369.864f, 169.785f };
			Var0.f_3 = -125.94f;
			break;
	}
	return Var0;
}

int func_119(var uParam0)
{
	int iVar0;
	uParam0->f_290 = __LIB_11__::func_133(21);
	if (uParam0->f_290 == 0)
	{
		iVar0 = 0;
		uParam0->f_162 = 0;
		uParam0->f_163 = 0;
		uParam0->f_164 = 0;
		uParam0->f_165 = 0;
		uParam0->f_166 = 0;
		uParam0->f_167 = 0;
		uParam0->f_168 = 0;
		return iVar0;
	}
	else if (uParam0->f_290 == 1)
	{
		iVar0 = 1;
		uParam0->f_162 = 2;
		uParam0->f_163 = 3;
		uParam0->f_164 = 6;
		uParam0->f_165 = 2;
		uParam0->f_166 = 4;
		uParam0->f_167 = 1;
		uParam0->f_168 = 3;
		return iVar0;
	}
	else if (uParam0->f_290 == 2)
	{
		uParam0->f_162 = 4;
		uParam0->f_163 = 6;
		uParam0->f_164 = 12;
		uParam0->f_165 = 4;
		uParam0->f_166 = 8;
		uParam0->f_167 = 2;
		uParam0->f_168 = 6;
		iVar0 = 2;
		return iVar0;
	}
	return iVar0;
}

void func_120(int iParam0, int iParam1, char[4] cParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (!__LIB_16__::func_816(iParam0))
	{
		return;
	}
	if (!__LIB_16__::func_817(iParam1))
	{
		return;
	}
	__LIB_2__::func_602(&(Local_14[iParam0 /*59*/].f_21[iParam1 /*17*/]), cParam2, sParam3, iParam4, iParam5, iParam6, 0, 1, 0);
	if (bParam7)
	{
		__LIB_16__::func_835(&(Local_14[iParam0 /*59*/]), iParam1, 1);
	}
}

void func_122(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_236(iParam0);
	}
	Local_14[iParam0 /*59*/].f_56 = iParam1;
}

void func_123(int iParam0, int iParam1, int iParam2)
{
	__LIB_1__::func_471(&(Local_14[iParam0 /*59*/].f_21[iParam1 /*17*/]), iParam2);
}

void func_124(int iParam0, int iParam1)
{
	if (!__LIB_16__::func_816(iParam0))
	{
		return;
	}
	Local_14[iParam0 /*59*/].f_57 = iParam1;
}

char[] func_126(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Notice_A";
		case 1:
			return "pl_Notice_B";
		case 2:
			return "pl_Notice_C";
		case 3:
			return "pl_Notice_D";
		case 4:
			return "pl_Notice_E";
		case 5:
			return "pl_Notice_F";
		case 6:
			return "pl_Notice_G";
		case 7:
			return "pl_Notice_H";
		case 8:
			return "pl_Notice_I";
		default:
			break;
	}
	return "pl_Notice_A";
}

bool func_130(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_146[0]) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (__LIB_0__::func_27(uParam0->f_160, 33554432))
	{
		return false;
	}
	if (__LIB_0__::func_27(uParam0->f_160, 524288))
	{
		if (func_240())
		{
			__LIB_1__::func_581(&(uParam0->f_160), 33554432);
			if (uParam0->f_290 == 2)
			{
				func_18(iParam1, 12);
			}
			else
			{
				func_18(iParam1, 15);
			}
		}
		return true;
	}
	else if (!__LIB_0__::func_27(Local_77.f_160, 2097152))
	{
		__LIB_1__::func_581(&(Local_77.f_160), 2097152);
	}
	return false;
}

char[] func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_idle_01";
		case 1:
			return "pl_idle_02";
		case 2:
			return "pl_idle_03";
		case 3:
			return "pl_idle_04";
		case 4:
			return "pl_idle_05";
		case 5:
			return "pl_idle_06";
		default:
			break;
	}
	return "pl_idle_01";
}

char[] func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Linger_A";
		case 1:
			return "pl_Linger_B";
		case 2:
			return "pl_Linger_D";
		case 3:
			return "pl_Linger_E";
		case 4:
			return "pl_Linger_C";
		case 5:
			return "pl_Linger_F";
		case 6:
			return "pl_Linger_G";
		case 7:
			return "pl_Linger_H";
		case 8:
			return "pl_Linger_I_01";
		case 9:
			return "pl_Linger_I_02";
		case 10:
			return "pl_Linger_J";
		default:
			break;
	}
	return "pl_Linger_A";
}

void func_133(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam1, *uParam0) && bParam4)
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam1, *uParam0, PED::GET_PED_BONE_INDEX(*uParam0, 64847), 0f, 0f, 0f, 0f, 0f, 0f, true, true, true, false, 2, true, false, false);
		ENTITY::SET_ENTITY_VISIBLE(*uParam1, true);
	}
	else if (bParam3 && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam1, *uParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
		vVar0.f_2 = (vVar0.z + 0.5f);
		vVar3 = { vVar0 - ENTITY::GET_ENTITY_COORDS(*uParam1, true, false) };
		vVar3 = { __LIB_0__::func_173(vVar3) };
		if (__LIB_1__::func_95(vVar3, ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0)) < 0.5f)
		{
			vVar7 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
			vVar3 = { __LIB_0__::func_173(vVar7) };
		}
		fVar6 = 40f;
		ENTITY::DETACH_ENTITY(*uParam1, true, true);
		ENTITY::APPLY_FORCE_TO_ENTITY(*uParam1, 1, vVar3 * Vector(fVar6, fVar6, fVar6), 0f, 0f, 0f, 0, false, false, true, false, true);
		__LIB_1__::func_993(uParam2, 1024);
	}
}

char[] func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Throw_Rock_No_Speech_01";
		case 1:
			return "pl_Throw_Rock_No_Speech_02";
		case 2:
			return "pl_Throw_Rock_No_Speech_03";
		case 3:
			return "pl_Throw_Rock_No_Speech_04";
		case 4:
			return "pl_Throw_Rock_No_Speech_05";
		default:
			break;
	}
	return "pl_Throw_Rock_No_Speech_01";
}

char[] func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Throw_Rock_A";
		case 1:
			return "pl_Throw_Rock_C";
		case 2:
			return "pl_Throw_Rock_D";
		case 3:
			return "pl_Throw_Rock_E";
		case 4:
			return "pl_Throw_Rock_F";
		case 5:
			return "pl_Throw_Rock_G";
		case 6:
			return "pl_Throw_Rock_B";
		case 7:
			return "pl_Throw_Rock_H";
		case 8:
			return "pl_Throw_Rock_I";
		case 9:
			return "pl_Throw_Rock_J";
		case 10:
			return "pl_Throw_Rock_K";
		case 11:
			return "pl_Throw_Rock_No_Speech_01";
		case 12:
			return "pl_Throw_Rock_M";
		case 13:
			return "pl_Throw_Rock_N";
		case 14:
			return "pl_Throw_Rock_O";
		case 15:
			return "pl_Throw_Rock_P";
		case 16:
			return "pl_Throw_Rock_Q";
		case 17:
			return "pl_Throw_Rock_R";
		default:
			break;
	}
	return "pl_Throw_Rock_A";
}

void func_136(var uParam0)
{
	var uVar0;
	__LIB_1__::func_581(&(uParam0->f_161), 16);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(uParam0->f_146[0], &uVar0));
}

char[] func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Hide_Linger_A";
		case 1:
			return "pl_Hide_Linger_B";
		case 2:
			return "pl_Hide_Linger_C";
		default:
			break;
	}
	return "pl_Hide_Linger_A";
}

int func_138(var uParam0, char* sParam1)
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_146[0]))
	{
		return 0;
	}
	vVar0 = { __LIB_1__::func_344(sParam1) };
	if (!__LIB_10__::func_456(&vVar0))
	{
		__LIB_2__::func_813(uParam0, vVar0, 0, -1, 0, 0);
		return 1;
	}
	return 0;
}

char* func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PDRPJ_HIDEA";
		case 1:
			return "PDRPJ_HIDEB";
		case 2:
			return "PDRPJ_HIDEC";
		case 3:
			return "PDRPJ_HIDED";
		case 4:
			return "PDRPJ_HIDEE";
		case 5:
			return "PDRPJ_HIDEF";
		case 6:
			return "PDRPJ_HIDEG";
		case 7:
			return "PDRPJ_HIDEH";
		case 8:
			return "PDRPJ_HIDEI";
		default:
			break;
	}
	return "PDRPJ_HIDEA";
}

void func_146(var uParam0, int iParam1)
{
	if ((uParam0->f_330 && __LIB_16__::func_825(&(uParam0->f_291))) && !__LIB_16__::func_809(&(uParam0->f_291)))
	{
		func_18(iParam1, 10);
		return;
	}
	switch (uParam0->f_170)
	{
		case 0:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 5);
			break;
		case 1:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 6);
			break;
		case 2:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 5);
			break;
		case 3:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 7);
			break;
		case 4:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 5);
			break;
		case 5:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 6);
			break;
		case 6:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 9);
			break;
		case 7:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 6);
			break;
		case 8:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 9);
			break;
		case 9:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 7);
			break;
		case 10:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 6);
			break;
		case 11:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 9);
			break;
		case 12:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 6);
			break;
		case 13:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 9);
			break;
		case 14:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 6);
			break;
		case 15:
			uParam0->f_170++;
			uParam0->f_162++;
			func_18(iParam1, 10);
			break;
	}
}

char[] func_147(var uParam0)
{
	switch (uParam0->f_173)
	{
		case 1:
			return "pl_Front_Quick_Exit";
		case 2:
			return "pl_Left_Quick_Exit";
		case 3:
			return "pl_Right_Quick_Exit";
	}
	return "pl_Front_Quick_Exit";
}

int func_206(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		__LIB_11__::func_839(&iParam8);
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
		if (__LIB_13__::func_384(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_4__::func_163(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_206(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_4__::func_164(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_4__::func_165(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_4__::func_166(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_4__::func_165(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_4__::func_164(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

bool func_207()
{
	if (((((((ENTITY::DOES_ENTITY_EXIST(Global_35) && !Global_1935630.f_12) && VOLUME::_DOES_VOLUME_EXIST(Local_77.f_151)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_77.f_151, true, 0)) && !__LIB_16__::func_871()) && !__LIB_0__::func_27(Local_77.f_160, 268435456)) && __LIB_0__::func_27(Local_77.f_160, 1048576)) && __LIB_0__::func_27(Local_77.f_160, 2097152))
	{
		func_328(0, 1);
		return true;
	}
	else
	{
		func_328(0, 0);
	}
	return false;
}

int func_208()
{
	return iLocal_74;
}

bool func_209(int iParam0, var uParam1)
{
	int iVar0;
	if (!__LIB_16__::func_816(iParam0))
	{
		return false;
	}
	if (Local_14[iParam0 /*59*/].f_58 == -1)
	{
		return false;
	}
	iVar0 = Local_14[iParam0 /*59*/].f_58;
	if (!__LIB_16__::func_817(iVar0))
	{
		return false;
	}
	*uParam1 = iVar0;
	return true;
}

void func_212(var uParam0)
{
	switch (uParam0->f_159)
	{
		case 0:
			__LIB_16__::func_783(21, 1);
			break;
		case 1:
			__LIB_16__::func_783(21, 2);
			break;
		case 2:
			__LIB_16__::func_783(21, 12);
			break;
	}
	__LIB_16__::func_827(21);
}

struct<11> func_218(int iParam0)
{
	struct<11> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { 2706.214f, 2370.569f, 166.0049f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "RandomEventBlock";
			break;
		case 1:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 2706.214f, 2370.569f, 166.0049f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 15f, 15f, 10f };
			Var0.f_10 = "Trigger";
			break;
		case 2:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 2706.214f, 2370.569f, 166.0049f };
			Var0.f_4 = { 0f, 0f, 81.29333f };
			Var0.f_7 = { 9.33105f, 4.768036f, 10f };
			Var0.f_10 = "StayAway";
			break;
		case 3:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 2706.214f, 2366.14f, 166.0049f };
			Var0.f_4 = { 0f, 0f, 90f };
			Var0.f_7 = { 11f, 12f, 6f };
			Var0.f_10 = "LookIKVolume";
			break;
		case 4:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 2706.054f, 2369.111f, 169.591f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "No Climb";
			break;
		case 5:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 2706.116f, 2370.54f, 166.8774f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 46.571f, 48.75949f, 24.01915f };
			Var0.f_10 = "No Animals";
			break;
	}
	return Var0;
}

void func_236(int iParam0)
{
	if (!__LIB_16__::func_816(iParam0))
	{
		return;
	}
	__LIB_2__::func_451(&(Local_14[iParam0 /*59*/]), 0);
}

bool func_240()
{
	if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
		return false;
	}
	if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
	{
		return true;
	}
	return false;
}

void func_328(int iParam0, bool bParam1)
{
	if (!__LIB_16__::func_816(iParam0))
	{
		return;
	}
	if (func_208() == iParam0)
	{
		if (bParam1)
		{
			if (func_400(iParam0) != 1)
			{
				func_122(iParam0, 1, 1);
			}
		}
		else if (func_400(iParam0) != __LIB_2__::func_340(3, 0, 0))
		{
			func_122(iParam0, __LIB_2__::func_340(3, 0, 0), 1);
		}
	}
}

int func_400(int iParam0)
{
	return Local_14[iParam0 /*59*/].f_56;
}

