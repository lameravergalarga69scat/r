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
	struct<652> Local_14 = { 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 4, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<4> Var0;
	vector3 vVar4;
	var uVar8;
	char* sVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_14);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		if ((__LIB_16__::func_881(18, Local_14.f_226, 1, 1) && Local_14 > 18) && !Local_14.f_647)
		{
			if (Local_14.f_1 == 0)
			{
				func_4(&Local_14, &(Local_14.f_250), 0, func_3(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, 0, 0);
			}
			else if (Local_14.f_1 != 2)
			{
				if (Local_14.f_1 == 3)
				{
					func_4(&Local_14, &(Local_14.f_250), 2, __LIB_16__::func_874(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, "s_BASE", "s_base_end");
				}
			}
			else
			{
				func_4(&Local_14, &(Local_14.f_250), 1, func_6(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End");
			}
		}
		__LIB_16__::func_879(18, 0, &(Local_14.f_226), &(Local_14.f_150), &(Local_14.f_648), 0, 1097859072 /* Float: 15f */, 0);
		if (Local_14.f_643)
		{
			PED::SET_PED_RESET_FLAG(Local_14.f_226, 49, true);
		}
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Local_14.f_226, 0, 1);
		__LIB_16__::func_928(Local_14.f_226, Local_14.f_234);
		if (!__LIB_0__::func_272(Global_35, 0))
		{
			func_1(&Local_14);
		}
		else if (__LIB_0__::func_12() != 26)
		{
			if (!__LIB_0__::func_75(&(Local_14.f_132)))
			{
				__LIB_1__::func_283(&(Local_14.f_132), 0);
			}
			else if (__LIB_0__::func_265(&(Local_14.f_132)) > 10f)
			{
				__LIB_0__::func_37(&(Local_14.f_132));
				func_1(&Local_14);
			}
		}
		else if ((PED::IS_PED_USING_ANY_SCENARIO(Global_35) && TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("PROP_PLAYER_SLEEP_BED")) && CAM::IS_SCREEN_FADED_OUT())
		{
			__LIB_0__::func_37(&(Local_14.f_132));
			func_1(&Local_14);
		}
		else if (__LIB_17__::func_296(18, __LIB_11__::func_133(18), &(Local_14.f_259), Local_14.f_226))
		{
			Local_14.f_651 = 1;
			if (__LIB_16__::func_809(&(Local_14.f_259)))
			{
				func_1(&Local_14);
			}
		}
		if ((Local_14 == 11 || Local_14 == 6) || Local_14 == 17)
		{
			if (Local_14.f_651)
			{
				if (__LIB_16__::func_894(&(Local_14.f_259)))
				{
					if (!__LIB_16__::func_809(&(Local_14.f_259)))
					{
						if (Local_14 != 11)
						{
							if (Local_14 == 6)
							{
								if (func_19(&(Local_14.f_225), 3))
								{
									__LIB_1__::func_649(&Local_14, 20);
									__LIB_1__::func_581(&(Local_14.f_253), 134217728);
								}
							}
							else if (Local_14 == 17)
							{
								__LIB_1__::func_649(&Local_14, 58);
							}
						}
						else
						{
							__LIB_1__::func_649(&Local_14, 13);
						}
					}
				}
			}
		}
		func_22(&Local_14);
		func_23(&Local_14);
		func_24(&Local_14);
		func_25(&Local_14);
		if ((((Local_14 >= 5 && Local_14 < 60) && Local_14 != 57) && Local_14 != 58) && Local_14 != 18)
		{
			func_26(&Local_14, &(Local_14.f_141));
			func_27(&Local_14);
			func_28(&Local_14);
			func_29(&Local_14);
		}
		func_30(&Local_14);
		__LIB_16__::func_854(Local_14.f_226, &(Local_14.f_253), 8192, 18, 0);
		if (((Local_14.f_1 == 0 || Local_14.f_1 == 2) && VOLUME::_DOES_VOLUME_EXIST(Local_14.f_239)) && __LIB_1__::func_205(Global_35, Local_14.f_239, 1, 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DYNAMIC_SCENARIO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DROP"), false);
		}
		switch (Local_14)
		{
			case 0:
				func_33(&(Local_14.f_253));
				if (__LIB_0__::func_27(Local_14.f_253, 16))
				{
					Local_14.f_1 = 0;
					__LIB_1__::func_649(&Local_14, 3);
				}
				else if (__LIB_0__::func_27(Local_14.f_253, 8))
				{
					Local_14.f_1 = 2;
					__LIB_1__::func_649(&Local_14, 8);
				}
				else if (__LIB_0__::func_27(Local_14.f_253, 32))
				{
					Local_14.f_1 = 3;
					__LIB_1__::func_649(&Local_14, 14);
				}
				break;
			case 3:
				Local_14.f_257 = 2;
				Local_14.f_248 = (8 - 1);
				Local_14.f_249 = (2 - 1);
				HUD::_TEXT_DATABASE_REQUEST("SPMS");
				HUD::_TEXT_DATABASE_REQUEST("SPMAYAU");
				STREAMING::REQUEST_MODEL(func_35(0), false);
				STREAMING::REQUEST_MODEL(func_35(1), false);
				STREAMING::REQUEST_MODEL(func_35(2), false);
				STREAMING::REQUEST_MODEL(func_35(3), false);
				STREAMING::REQUEST_MODEL(func_35(4), false);
				STREAMING::REQUEST_MODEL(func_35(5), false);
				func_36(&Local_14);
				__LIB_2__::func_261(Local_14.f_232, "SP_MayorOfStrawberry1_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
				POPULATION::_0xB56D41A694E42E86(Local_14.f_235, 0, 0, 0, -1, -1, 0);
				POPULATION::_0x18262CAFEBB5FBE1(Local_14.f_235, 0, 0, 0, -1, -1, 0);
				Local_14.f_644 = __LIB_1__::func_391(Local_14.f_239, 0, 0, 0);
				Local_14.f_280 = "NICHOLAS_TIMMINS";
				Local_14.f_159 = __LIB_1__::func_293(18, 0, 9, __LIB_16__::func_790(18));
				if (!__LIB_0__::func_6(Local_14.f_159))
				{
				}
				Local_14.f_254 = __LIB_0__::func_895(Local_14.f_159);
				Local_14.f_258 = __LIB_5__::func_297(__LIB_1__::func_293(18, 0, 9, __LIB_16__::func_790(18)));
				if (__LIB_0__::func_27(Local_14.f_254, 128))
				{
					__LIB_1__::func_993(&(Local_14.f_254), 128);
				}
				if (__LIB_0__::func_181())
				{
					__LIB_0__::func_928(&(Local_14.f_5), Global_35, "JOHN", 0);
				}
				else
				{
					__LIB_0__::func_928(&(Local_14.f_5), Global_35, "ARTHUR", 0);
				}
				__LIB_16__::func_875(&(Local_14.f_259));
				__LIB_4__::func_228(&(Local_14.f_103));
				__LIB_1__::func_403(&(Local_14.f_103), 1);
				__LIB_1__::func_399(&(Local_14.f_103), 0);
				__LIB_1__::func_397(&(Local_14.f_103), 0);
				__LIB_1__::func_402(&(Local_14.f_103), 1);
				__LIB_2__::func_828(&(Local_14.f_103), 1);
				__LIB_1__::func_413(&(Local_14.f_103), 0);
				__LIB_2__::func_830(&(Local_14.f_103), 1);
				__LIB_2__::func_829(&(Local_14.f_103), 1);
				__LIB_1__::func_401(&(Local_14.f_103), 1);
				Local_14.f_640 = 8;
				if (__LIB_0__::func_6(Local_14.f_159))
				{
					__LIB_1__::func_649(&Local_14, 4);
				}
				break;
			case 8:
				Local_14.f_257 = 4;
				Local_14.f_248 = (5 - 1);
				Local_14.f_249 = (2 - 1);
				HUD::_TEXT_DATABASE_REQUEST("SPMS");
				HUD::_TEXT_DATABASE_REQUEST("SPMAYAU");
				STREAMING::REQUEST_MODEL(func_35(0), false);
				STREAMING::REQUEST_MODEL(func_35(2), false);
				STREAMING::REQUEST_MODEL(func_35(3), false);
				STREAMING::REQUEST_MODEL(func_35(6), false);
				func_58(&Local_14);
				__LIB_2__::func_261(Local_14.f_232, "SP_MayorOfStrawberry2_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
				POPULATION::_0xB56D41A694E42E86(Local_14.f_235, 0, 0, 0, -1, -1, 0);
				POPULATION::_0x18262CAFEBB5FBE1(Local_14.f_235, 0, 0, 0, -1, -1, 0);
				PATHFIND::_0xB03944057FD735BA(Local_14.f_238, 6, 0);
				Local_14.f_644 = __LIB_1__::func_391(Local_14.f_239, 0, 0, 0);
				Local_14.f_645 = PED::_0x4C39C95AE5DB1329(Local_14.f_240, false, 15);
				Local_14.f_280 = "NICHOLAS_TIMMINS";
				Local_14.f_159 = __LIB_1__::func_293(18, 1, 9, 0);
				if (!__LIB_0__::func_6(Local_14.f_159))
				{
				}
				Local_14.f_254 = __LIB_0__::func_895(Local_14.f_159);
				Local_14.f_258 = __LIB_5__::func_297(__LIB_1__::func_293(18, 0, 9, __LIB_16__::func_790(18)));
				if (__LIB_0__::func_27(Local_14.f_254, 128))
				{
					__LIB_1__::func_993(&(Local_14.f_254), 128);
				}
				if (__LIB_0__::func_181())
				{
					__LIB_0__::func_928(&(Local_14.f_5), Global_35, "JOHN", 0);
				}
				else
				{
					__LIB_0__::func_928(&(Local_14.f_5), Global_35, "ARTHUR", 0);
				}
				__LIB_16__::func_875(&(Local_14.f_259));
				__LIB_4__::func_228(&(Local_14.f_103));
				__LIB_1__::func_403(&(Local_14.f_103), 1);
				__LIB_1__::func_399(&(Local_14.f_103), 0);
				__LIB_1__::func_397(&(Local_14.f_103), 0);
				__LIB_1__::func_402(&(Local_14.f_103), 1);
				__LIB_2__::func_828(&(Local_14.f_103), 1);
				__LIB_1__::func_413(&(Local_14.f_103), 0);
				__LIB_2__::func_830(&(Local_14.f_103), 1);
				__LIB_2__::func_829(&(Local_14.f_103), 1);
				__LIB_1__::func_401(&(Local_14.f_103), 1);
				Local_14.f_640 = 3;
				ENTITY::CREATE_MODEL_HIDE(-1817.047f, -371.4747f, 163.116f, 1f, joaat("P_CS_NEWSPAPER_03X"), false);
				if (__LIB_0__::func_6(Local_14.f_159))
				{
					__LIB_1__::func_649(&Local_14, 9);
				}
				break;
			case 14:
				Local_14.f_257 = 4;
				Local_14.f_248 = (6 - 1);
				HUD::_TEXT_DATABASE_REQUEST("SPMS");
				HUD::_TEXT_DATABASE_REQUEST("SPMAYAU");
				STREAMING::REQUEST_MODEL(func_35(0), false);
				STREAMING::REQUEST_MODEL(func_35(2), false);
				STREAMING::REQUEST_MODEL(func_35(3), false);
				func_59(&Local_14);
				if (!__LIB_0__::func_27(Local_14.f_253, 268435456))
				{
					iVar11 = __LIB_0__::func_120(884);
					if (PERSCHAR::_0x800DF3FC913355F3(iVar11))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(__LIB_2__::func_963(884)) || (!ENTITY::IS_ENTITY_ON_SCREEN(__LIB_2__::func_963(884)) && __LIB_0__::func_665(Global_35, __LIB_2__::func_963(884), 1, 1) > 100f))
						{
							__LIB_3__::func_229(884);
							PERSCHAR::_0xFCC6DB8DBE709BC8(iVar11);
							__LIB_1__::func_581(&(Local_14.f_253), 268435456);
						}
					}
				}
				__LIB_2__::func_261(Local_14.f_232, "SP_MayorOfStrawberry5_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
				POPULATION::_0xB56D41A694E42E86(Local_14.f_235, 0, 0, 0, -1, -1, 0);
				POPULATION::_0x18262CAFEBB5FBE1(Local_14.f_235, 0, 0, 0, -1, -1, 0);
				PED::_0x7C00CFC48A782DC0(Local_14.f_235, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				Local_14.f_644 = __LIB_1__::func_391(Local_14.f_239, 0, 0, 0);
				Local_14.f_280 = "NICHOLAS_TIMMINS";
				Local_14.f_159 = __LIB_1__::func_293(18, 2, 9, 0);
				if (!__LIB_0__::func_6(Local_14.f_159))
				{
				}
				if (__LIB_0__::func_181())
				{
					__LIB_0__::func_928(&(Local_14.f_5), Global_35, "JOHN", 0);
				}
				else
				{
					__LIB_0__::func_928(&(Local_14.f_5), Global_35, "ARTHUR", 0);
				}
				Local_14.f_254 = __LIB_0__::func_895(Local_14.f_159);
				Local_14.f_258 = __LIB_5__::func_297(__LIB_1__::func_293(18, 0, 9, __LIB_16__::func_790(18)));
				if (__LIB_0__::func_27(Local_14.f_254, 128))
				{
					__LIB_1__::func_993(&(Local_14.f_254), 128);
				}
				__LIB_16__::func_875(&(Local_14.f_259));
				__LIB_4__::func_228(&(Local_14.f_103));
				__LIB_1__::func_403(&(Local_14.f_103), 1);
				__LIB_1__::func_399(&(Local_14.f_103), 0);
				__LIB_1__::func_397(&(Local_14.f_103), 0);
				__LIB_1__::func_402(&(Local_14.f_103), 1);
				__LIB_2__::func_828(&(Local_14.f_103), 1);
				__LIB_1__::func_413(&(Local_14.f_103), 0);
				__LIB_2__::func_830(&(Local_14.f_103), 1);
				__LIB_2__::func_829(&(Local_14.f_103), 1);
				__LIB_1__::func_401(&(Local_14.f_103), 1);
				__LIB_10__::func_590(&(Local_14.f_103), 0);
				Local_14.f_640 = 11;
				if (__LIB_0__::func_6(Local_14.f_159))
				{
					__LIB_1__::func_649(&Local_14, 15);
				}
				break;
			case 4:
				PED::_0xED9582B3DA8F02B4(5);
				if ((((((((HUD::_TEXT_DATABASE_HAS_LOADED("SPMS") && HUD::_TEXT_DATABASE_HAS_LOADED("SPMAYAU")) && STREAMING::HAS_MODEL_LOADED(func_35(0))) && STREAMING::HAS_MODEL_LOADED(func_35(1))) && STREAMING::HAS_MODEL_LOADED(func_35(2))) && STREAMING::HAS_MODEL_LOADED(func_35(3))) && STREAMING::HAS_MODEL_LOADED(func_35(4))) && STREAMING::HAS_MODEL_LOADED(func_35(5))) && PED::_0x5C16855277819BBF() == 5)
				{
					__LIB_1__::func_649(&Local_14, 5);
				}
				break;
			case 9:
				PED::_0xED9582B3DA8F02B4(5);
				if ((((((((HUD::_TEXT_DATABASE_HAS_LOADED("SPMS") && HUD::_TEXT_DATABASE_HAS_LOADED("SPMAYAU")) && STREAMING::HAS_MODEL_LOADED(func_35(0))) && STREAMING::HAS_MODEL_LOADED(func_35(2))) && STREAMING::HAS_MODEL_LOADED(func_35(3))) && STREAMING::HAS_MODEL_LOADED(func_35(6))) && PED::_0x5C16855277819BBF() == 5) && func_65(&Local_14, 0)) && func_19(&(Local_14.f_225), 3))
				{
					__LIB_1__::func_649(&Local_14, 10);
				}
				break;
			case 15:
				PED::_0xED9582B3DA8F02B4(5);
				if (((((HUD::_TEXT_DATABASE_HAS_LOADED("SPMS") && HUD::_TEXT_DATABASE_HAS_LOADED("SPMAYAU")) && STREAMING::HAS_MODEL_LOADED(func_35(0))) && STREAMING::HAS_MODEL_LOADED(func_35(2))) && STREAMING::HAS_MODEL_LOADED(func_35(3))) && PED::_0x5C16855277819BBF() == 5)
				{
					__LIB_1__::func_649(&Local_14, 16);
				}
				break;
			case 5:
				Var0 = { func_66(0) };
				vVar4 = { func_66(1) };
				if ((((func_67(&(Local_14.f_226), 483, Var0, 1, 1320127128) && __LIB_17__::func_106(&(Local_14.f_229), func_35(4), vVar4)) && __LIB_17__::func_106(&(Local_14.f_230), func_35(5), vVar4)) && func_69(&(Local_14.f_646), &(Local_14.f_228), func_35(1), vVar4, 9)) && func_70(&Local_14))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_14.f_226, "special_ped_group", 0f);
					__LIB_16__::func_792(Local_14.f_226, 18);
					PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_14.f_226, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "MayorBubble");
					sVar9 = func_72(&Local_14, &iVar10);
					__LIB_16__::func_806(&(Local_14.f_226), &(Local_14.f_255), joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 20f, -1082130432 /* Float: -1f */);
					__LIB_2__::func_602(&(Local_14.f_303[0 /*17*/]), "INTERACT_GREET", __LIB_17__::func_104(), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(&(Local_14.f_303[1 /*17*/]), "INTERACT_INSULT", sVar9, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, iVar10);
					__LIB_1__::func_471(&(Local_14.f_303[0 /*17*/]), 10);
					__LIB_1__::func_471(&(Local_14.f_303[1 /*17*/]), 10);
					iVar12 = 0;
					while (iVar12 < Local_14.f_257)
					{
						__LIB_2__::func_602(&(Local_14.f_338[iVar12 /*75*/].f_21[0 /*17*/]), "INTERACT_GREET", __LIB_17__::func_104(), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						__LIB_2__::func_602(&(Local_14.f_338[iVar12 /*75*/].f_21[1 /*17*/]), "INTERACT_INSULT", sVar9, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, iVar10);
						__LIB_2__::func_411(&(Local_14.f_338[iVar12 /*75*/].f_21[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_14.f_338[iVar12 /*75*/].f_21[1 /*17*/]), 0, 0);
						iVar12++;
					}
					if (!__LIB_0__::func_27(Local_14.f_253, 16777216))
					{
						Local_14.f_639 = __LIB_2__::func_340(3, 0, 0);
						__LIB_2__::func_451(&(Local_14.f_281[0 /*21*/]), 0);
						__LIB_1__::func_581(&(Local_14.f_253), 16777216);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_226, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_14.f_226, false);
					PED::SET_PED_CONFIG_FLAG(Local_14.f_226, 448, true);
					__LIB_0__::func_928(&(Local_14.f_5), Local_14.f_226, Local_14.f_280, 0);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_226, Var0, Var0.f_3, true, false, true);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_14.f_226, true, 15f);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_226, 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_226, 5, false);
					if (__LIB_0__::func_181())
					{
						__LIB_0__::func_862(Local_14.f_226, 1689938120);
					}
					AUDIO::STOP_PED_SPEAKING(Local_14.f_226, true);
					PED::_0x7C00CFC48A782DC0(Local_14.f_237, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					PED::_0x7C00CFC48A782DC0(Local_14.f_234, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					PED::_0x7C00CFC48A782DC0(Local_14.f_242, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					__LIB_1__::func_649(&Local_14, 32);
				}
				break;
			case 10:
				Var0 = { func_66(2) };
				vVar4 = { func_66(2) };
				if ((func_67(&(Local_14.f_226), 483, Var0, 1, 1320127128) && __LIB_17__::func_106(&(Local_14.f_231), func_35(6), vVar4)) && func_70(&Local_14))
				{
					func_81(&Local_14);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_14.f_226, "special_ped_group", 0f);
					__LIB_16__::func_792(Local_14.f_226, 18);
					PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_14.f_226, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "MayorBubble");
					sVar9 = func_72(&Local_14, &iVar10);
					__LIB_16__::func_806(&(Local_14.f_226), &(Local_14.f_255), joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 20f, -1082130432 /* Float: -1f */);
					__LIB_2__::func_602(&(Local_14.f_303[0 /*17*/]), "INTERACT_GREET", __LIB_17__::func_104(), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(&(Local_14.f_303[1 /*17*/]), "INTERACT_INSULT", sVar9, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, iVar10);
					__LIB_1__::func_471(&(Local_14.f_303[0 /*17*/]), 10);
					__LIB_1__::func_471(&(Local_14.f_303[1 /*17*/]), 10);
					iVar13 = 0;
					while (iVar13 < Local_14.f_257)
					{
						__LIB_2__::func_602(&(Local_14.f_338[iVar13 /*75*/].f_21[0 /*17*/]), "INTERACT_GREET", __LIB_17__::func_104(), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						__LIB_2__::func_602(&(Local_14.f_338[iVar13 /*75*/].f_21[1 /*17*/]), "INTERACT_INSULT", sVar9, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, iVar10);
						__LIB_2__::func_411(&(Local_14.f_338[iVar13 /*75*/].f_21[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_14.f_338[iVar13 /*75*/].f_21[1 /*17*/]), 0, 0);
						iVar13++;
					}
					if (!__LIB_0__::func_27(Local_14.f_253, 16777216))
					{
						Local_14.f_639 = __LIB_2__::func_340(3, 0, 0);
						__LIB_2__::func_451(&(Local_14.f_281[0 /*21*/]), 0);
						__LIB_1__::func_581(&(Local_14.f_253), 16777216);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_226, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_14.f_226, false);
					PED::SET_PED_CONFIG_FLAG(Local_14.f_226, 448, true);
					__LIB_0__::func_928(&(Local_14.f_5), Local_14.f_226, Local_14.f_280, 0);
					__LIB_0__::func_928(&(Local_14.f_5), Global_35, "ARTHUR", 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_226, 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_226, 5, false);
					AUDIO::STOP_PED_SPEAKING(Local_14.f_226, true);
					if (__LIB_0__::func_181())
					{
						__LIB_0__::func_862(Local_14.f_226, 1689938120);
					}
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_226, Var0, Var0.f_3, true, false, true);
					PED::_0x7C00CFC48A782DC0(Local_14.f_237, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					PED::_0x7C00CFC48A782DC0(Local_14.f_234, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					PED::_0x7C00CFC48A782DC0(Local_14.f_242, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					__LIB_1__::func_649(&Local_14, 42);
				}
				break;
			case 16:
				Var0 = { func_66(3) };
				if (func_67(&(Local_14.f_226), 483, Var0, 1, 1320127128) && func_70(&Local_14))
				{
					func_81(&Local_14);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_14.f_226, "special_ped_group", 0f);
					__LIB_16__::func_792(Local_14.f_226, 18);
					PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_14.f_226, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "MayorBubble");
					sVar9 = func_72(&Local_14, &iVar10);
					__LIB_16__::func_806(&(Local_14.f_226), &(Local_14.f_255), joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 20f, -1082130432 /* Float: -1f */);
					__LIB_2__::func_602(&(Local_14.f_303[0 /*17*/]), "INTERACT_GREET", __LIB_17__::func_104(), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(&(Local_14.f_303[1 /*17*/]), "INTERACT_INSULT", sVar9, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, iVar10);
					__LIB_1__::func_471(&(Local_14.f_303[0 /*17*/]), 10);
					__LIB_1__::func_471(&(Local_14.f_303[1 /*17*/]), 10);
					iVar14 = 0;
					while (iVar14 < Local_14.f_257)
					{
						__LIB_2__::func_602(&(Local_14.f_338[iVar14 /*75*/].f_21[0 /*17*/]), "INTERACT_GREET", __LIB_17__::func_104(), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						__LIB_2__::func_602(&(Local_14.f_338[iVar14 /*75*/].f_21[1 /*17*/]), "INTERACT_INSULT", sVar9, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, iVar10);
						__LIB_2__::func_411(&(Local_14.f_338[iVar14 /*75*/].f_21[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_14.f_338[iVar14 /*75*/].f_21[1 /*17*/]), 0, 0);
						iVar14++;
					}
					if (!__LIB_0__::func_27(Local_14.f_253, 16777216))
					{
						Local_14.f_639 = __LIB_2__::func_340(3, 0, 0);
						__LIB_2__::func_451(&(Local_14.f_281[0 /*21*/]), 0);
						__LIB_1__::func_581(&(Local_14.f_253), 16777216);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_226, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_14.f_226, false);
					PED::SET_PED_CONFIG_FLAG(Local_14.f_226, 448, true);
					PED::SET_PED_CONFIG_FLAG(Local_14.f_226, 153, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_226, 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_226, 5, false);
					__LIB_0__::func_928(&(Local_14.f_5), Local_14.f_226, Local_14.f_280, 0);
					AUDIO::STOP_PED_SPEAKING(Local_14.f_226, true);
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(Local_14.f_226, &uVar8));
					if (__LIB_0__::func_181())
					{
						__LIB_0__::func_862(Local_14.f_226, 1689938120);
					}
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_226, Var0, Var0.f_3, true, false, true);
					PED::_0x7C00CFC48A782DC0(Local_14.f_237, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					PED::_0x7C00CFC48A782DC0(Local_14.f_234, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					PED::_0x7C00CFC48A782DC0(Local_14.f_242, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					__LIB_1__::func_649(&Local_14, 50);
				}
				break;
			case 6:
				if (__LIB_0__::func_27(Local_14.f_253, 1))
				{
					__LIB_1__::func_649(&Local_14, 60);
				}
				else if (__LIB_0__::func_27(Local_14.f_253, 2) && !__LIB_0__::func_27(Local_14.f_253, 4))
				{
					func_82(180);
					func_83(&Local_14);
				}
				else if (!__LIB_0__::func_75(&(Local_14.f_153)))
				{
					__LIB_1__::func_283(&(Local_14.f_153), 0);
				}
				else if (__LIB_0__::func_265(&(Local_14.f_153)) > func_84(&Local_14) || !__LIB_0__::func_27(Local_14.f_253, 524288))
				{
					if (__LIB_0__::func_665(Global_35, Local_14.f_226, 1, 1) <= 35f)
					{
						if (func_85(&Local_14))
						{
							__LIB_0__::func_37(&(Local_14.f_153));
							__LIB_1__::func_581(&(Local_14.f_253), 524288);
						}
					}
				}
				break;
			case 11:
				if (__LIB_0__::func_27(Local_14.f_253, 1))
				{
					__LIB_1__::func_649(&Local_14, 63);
				}
				else if (__LIB_0__::func_27(Local_14.f_253, 2) && !__LIB_0__::func_27(Local_14.f_253, 4))
				{
					func_82(180);
					func_86(&Local_14);
				}
				else if (!__LIB_0__::func_75(&(Local_14.f_153)))
				{
					__LIB_1__::func_283(&(Local_14.f_153), 0);
				}
				else if (__LIB_0__::func_265(&(Local_14.f_153)) > func_84(&Local_14) || !__LIB_0__::func_27(Local_14.f_253, 524288))
				{
					if (__LIB_0__::func_665(Global_35, Local_14.f_226, 1, 1) <= 35f)
					{
						if (func_87(&Local_14))
						{
							__LIB_0__::func_37(&(Local_14.f_153));
							__LIB_1__::func_581(&(Local_14.f_253), 524288);
						}
					}
				}
				break;
			case 17:
				if (__LIB_0__::func_27(Local_14.f_253, 1))
				{
					__LIB_1__::func_649(&Local_14, 66);
				}
				else if (__LIB_0__::func_27(Local_14.f_253, 2) && !__LIB_0__::func_27(Local_14.f_253, 4))
				{
					__LIB_1__::func_649(&Local_14, 18);
				}
				else if (!__LIB_0__::func_75(&(Local_14.f_153)))
				{
					__LIB_1__::func_283(&(Local_14.f_153), 0);
				}
				else if (__LIB_0__::func_265(&(Local_14.f_153)) > func_84(&Local_14) || !__LIB_0__::func_27(Local_14.f_253, 524288))
				{
					if (__LIB_0__::func_665(Global_35, Local_14.f_226, 1, 1) <= 35f)
					{
						if (func_88(&Local_14))
						{
							__LIB_0__::func_37(&(Local_14.f_153));
							__LIB_1__::func_581(&(Local_14.f_253), 524288);
						}
					}
				}
				break;
			case 7:
				if (__LIB_0__::func_27(Local_14.f_253, 1))
				{
					__LIB_1__::func_649(&Local_14, 60);
				}
				else if (__LIB_0__::func_27(Local_14.f_253, 4))
				{
					if (__LIB_16__::func_876(&(Local_14.f_250)))
					{
						if (func_4(&Local_14, &(Local_14.f_250), 0, func_3(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, 0, 0))
						{
							__LIB_1__::func_649(&Local_14, 32);
						}
					}
				}
				else
				{
					func_82(180);
					func_83(&Local_14);
				}
				break;
			case 12:
				if (__LIB_0__::func_27(Local_14.f_253, 1))
				{
					__LIB_1__::func_649(&Local_14, 63);
				}
				else if (__LIB_0__::func_27(Local_14.f_253, 4))
				{
					if (func_4(&Local_14, &(Local_14.f_250), 1, func_6(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
					{
						__LIB_1__::func_649(&Local_14, 42);
					}
				}
				else
				{
					func_82(180);
					func_86(&Local_14);
				}
				break;
			case 13:
				PED::SET_PED_RESET_FLAG(Local_14.f_226, 202, true);
				PED::_0x3BBDD6143FF16F98(Local_14.f_226, Local_14.f_231, "p_cs_newspaper_03x_PH_R_HAND", "WORLD_HUMAN_NEWSPAPER_PUTDOWN", 0, 1);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_250, "internal_loop", true, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_250, "internal_loop_end", true, false);
				__LIB_1__::func_581(&(Local_14.f_253), 65536);
				if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_238))
				{
					PATHFIND::_0x5A4E1A41E3A02AD0(Local_14.f_238, 6, 0);
					VOLUME::_DELETE_VOLUME(Local_14.f_238);
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_14.f_250, false))
				{
					TASK::CLEAR_PED_TASKS(Local_14.f_226, true, false);
				}
				else if (func_90(&Local_14, &(Local_14.f_224), 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(Local_14.f_226, func_91(0), 1f, 1f, 3f, false, true, 0))
					{
						PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
						__LIB_1__::func_148(&(Local_14.f_135));
						__LIB_1__::func_649(&Local_14, 57);
					}
				}
				break;
			case 18:
				if (((!ENTITY::IS_ENTITY_DEAD(Local_14.f_226) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_252)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_14.f_252, true, false)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					if (!__LIB_0__::func_27(Local_14.f_253, 32768))
					{
						Local_14.f_647 = 1;
						__LIB_0__::func_82(1, 1, 0);
						__LIB_3__::func_887(Global_35, Local_14.f_226, &(Local_14.f_160), 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
						__LIB_16__::func_931(Local_14.f_226, Global_35, &(Local_14.f_160), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
						__LIB_1__::func_731(&(Local_14.f_198));
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_252, "CS_NicholasTimmins", Local_14.f_226, 0);
						if (!__LIB_0__::func_181())
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_252, "b_PlayerArthur", true, false);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_252, "ARTHUR", Global_35, 0);
						}
						else
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_252, "JOHN", Global_35, 0);
						}
						ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_250, 0);
						ANIMSCENE::START_ANIM_SCENE(Local_14.f_252);
						PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
						__LIB_1__::func_581(&(Local_14.f_253), 65536);
						__LIB_1__::func_581(&(Local_14.f_253), 32768);
						__LIB_1__::func_581(&(Local_14.f_253), 262144);
					}
					if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_242))
					{
						VOLUME::_DELETE_VOLUME(Local_14.f_242);
					}
					__LIB_2__::func_961(&(Local_14.f_198), Local_14.f_226);
					__LIB_2__::func_966(Local_14.f_226, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_14.f_252, false))
					{
						__LIB_1__::func_993(&(Local_14.f_253), 32768);
						func_82(180);
						__LIB_1__::func_649(&Local_14, 58);
					}
				}
				else if ((!ENTITY::IS_ENTITY_DEAD(Local_14.f_226) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_14.f_252, true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_14.f_252, true))
				{
					if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_252))
					{
						Local_14.f_252 = ANIMSCENE::_CREATE_ANIM_SCENE(func_99(), 0, 0, false, true);
					}
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_252))
					{
						ANIMSCENE::LOAD_ANIM_SCENE(Local_14.f_252);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_226))
				{
					if (__LIB_0__::func_272(Local_14.f_226, 0))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_226, 1.5f);
					}
				}
				break;
			case 19:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_100(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					__LIB_1__::func_649(&Local_14, 32);
				}
				break;
			case 33:
				break;
			case 34:
				break;
			case 22:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_101(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(Local_14.f_226, &uVar8));
					Local_14.f_256++;
					__LIB_1__::func_649(&Local_14, 32);
				}
				break;
			case 23:
				if (func_4(&Local_14, &(Local_14.f_250), 0, __LIB_17__::func_141(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(Local_14.f_226, &uVar8));
					Local_14.f_256++;
					__LIB_1__::func_649(&Local_14, 32);
				}
				break;
			case 24:
				if (func_4(&Local_14, &(Local_14.f_250), 0, __LIB_17__::func_135(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256++;
					__LIB_1__::func_649(&Local_14, 32);
				}
				break;
			case 25:
				if (func_4(&Local_14, &(Local_14.f_250), 0, __LIB_17__::func_136(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					__LIB_1__::func_649(&Local_14, 32);
				}
				break;
			case 26:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_105(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256++;
					__LIB_1__::func_649(&Local_14, 32);
				}
				break;
			case 27:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_106(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256++;
					__LIB_1__::func_649(&Local_14, 32);
				}
				break;
			case 28:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_107(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256++;
					__LIB_1__::func_649(&Local_14, 32);
				}
				break;
			case 29:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_108(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					__LIB_1__::func_649(&Local_14, 32);
				}
				break;
			case 30:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_109(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256++;
					__LIB_1__::func_649(&Local_14, 32);
				}
				break;
			case 31:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_110(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256++;
					__LIB_1__::func_649(&Local_14, 32);
				}
				break;
			case 32:
				if (__LIB_0__::func_27(Local_14.f_253, 2) && !__LIB_0__::func_27(Local_14.f_253, 4))
				{
					if (func_4(&Local_14, &(Local_14.f_251), 3, func_3(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 0, 0, 0))
					{
						__LIB_1__::func_649(&Local_14, 7);
					}
				}
				else if (func_4(&Local_14, &(Local_14.f_250), 0, func_3(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, 0, 0))
				{
					__LIB_1__::func_649(&Local_14, 6);
				}
				break;
			case 20:
				PED::SET_PED_RESET_FLAG(Local_14.f_226, 202, true);
				PED::_0x3BBDD6143FF16F98(Local_14.f_226, Local_14.f_229, "p_cigar01x_PH_R_HAND", "WORLD_HUMAN_SMOKE_CIGAR", 0, 1);
				if (!ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_14.f_250, false))
				{
					func_4(&Local_14, &(Local_14.f_250), 0, func_112(), &(Local_14.f_3), &(Local_14.f_4), 1, 1, 0, 0, 0);
				}
				if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_14.f_250, "CS_NicholasTimmins"))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_14.f_250, "CS_NicholasTimmins", Local_14.f_226);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_14.f_250, "p_cigar02x", Local_14.f_229);
					if (__LIB_0__::func_27(Local_14.f_253, 134217728))
					{
						func_90(&Local_14, &(Local_14.f_225), -1);
					}
					else
					{
						func_113(&Local_14, 1);
					}
					__LIB_1__::func_649(&Local_14, 59);
				}
				break;
			case 21:
				if (!ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_14.f_250, false))
				{
					func_4(&Local_14, &(Local_14.f_250), 0, func_114(), &(Local_14.f_3), &(Local_14.f_4), 1, 1, 0, 0, 0);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_226))
				{
				}
				break;
			case 35:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_101(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(Local_14.f_226, &uVar8));
					Local_14.f_256 = (1 + Local_14.f_256);
					__LIB_1__::func_649(&Local_14, 42);
				}
				break;
			case 36:
				if (func_4(&Local_14, &(Local_14.f_250), 1, __LIB_17__::func_141(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					__LIB_1__::func_649(&Local_14, 42);
				}
				break;
			case 37:
				if (func_4(&Local_14, &(Local_14.f_250), 1, __LIB_17__::func_134(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					__LIB_1__::func_649(&Local_14, 42);
				}
				break;
			case 38:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_118(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					__LIB_1__::func_649(&Local_14, 42);
				}
				break;
			case 39:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_119(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					Local_14.f_256++;
					__LIB_1__::func_649(&Local_14, 42);
				}
				break;
			case 40:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_120(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG3_PDMOS_Base", "s_IG3_PDMOS_Base_End"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					__LIB_1__::func_649(&Local_14, 42);
				}
				break;
			case 41:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_121(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG3_PDMOS_Base", "s_IG3_PDMOS_Base_End"))
				{
					Local_14.f_256++;
					__LIB_1__::func_649(&Local_14, 42);
				}
				break;
			case 42:
				if (__LIB_0__::func_27(Local_14.f_253, 2) && !__LIB_0__::func_27(Local_14.f_253, 4))
				{
					if (func_4(&Local_14, &(Local_14.f_251), 4, __LIB_16__::func_874(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 0, 0, 0))
					{
						__LIB_1__::func_649(&Local_14, 12);
					}
				}
				else if (func_4(&Local_14, &(Local_14.f_250), 1, func_6(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					__LIB_1__::func_649(&Local_14, 11);
				}
				break;
			case 43:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_101(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(Local_14.f_226, &uVar8));
					Local_14.f_256++;
					__LIB_1__::func_649(&Local_14, 50);
				}
				break;
			case 44:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_124(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					Local_14.f_256++;
					__LIB_1__::func_649(&Local_14, 50);
				}
				break;
			case 45:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_125(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					Local_14.f_256++;
					__LIB_1__::func_649(&Local_14, 50);
				}
				break;
			case 46:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_126(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					__LIB_1__::func_649(&Local_14, 50);
				}
				break;
			case 47:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_127(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					__LIB_1__::func_649(&Local_14, 50);
				}
				break;
			case 48:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_128(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					Local_14.f_256++;
					__LIB_1__::func_649(&Local_14, 50);
				}
				break;
			case 49:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_129(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG5_Base", "s_IG5_Base_End"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					__LIB_1__::func_649(&Local_14, 50);
				}
				break;
			case 50:
				if (__LIB_0__::func_27(Local_14.f_253, 2) && !__LIB_0__::func_27(Local_14.f_253, 4))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_226))
					{
						__LIB_1__::func_649(&Local_14, 18);
					}
				}
				else if (func_4(&Local_14, &(Local_14.f_250), 2, __LIB_16__::func_874(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, "s_BASE", "s_base_end"))
				{
					__LIB_1__::func_649(&Local_14, 17);
				}
				break;
			case 51:
				__LIB_16__::func_948(&(Local_14.f_239), &(Local_14.f_649), &(Local_14.f_650));
				__LIB_16__::func_832(1);
				if (func_132(Local_14.f_226, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_14.f_226, 0.25f, 2f, 0f), 1036831949 /* Float: 0.1f */, 20000) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					if (func_4(&Local_14, &(Local_14.f_251), 3, func_133(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 0, 0, 0))
					{
						PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
						if (!__LIB_0__::func_27(Local_14.f_253, 4))
						{
							__LIB_1__::func_581(&(Local_14.f_253), 4);
						}
						__LIB_3__::func_158(&(Local_14.f_303[0 /*17*/]), 0);
						__LIB_3__::func_158(&(Local_14.f_303[1 /*17*/]), 0);
						__LIB_2__::func_411(&(Local_14.f_303[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_14.f_303[1 /*17*/]), 0, 0);
						Local_14.f_639 = __LIB_2__::func_340(3, 0, 0);
						__LIB_2__::func_451(&(Local_14.f_281[0 /*21*/]), 0);
						__LIB_16__::func_832(0);
						__LIB_1__::func_649(&Local_14, 53);
					}
				}
				break;
			case 52:
				__LIB_16__::func_948(&(Local_14.f_239), &(Local_14.f_649), &(Local_14.f_650));
				__LIB_16__::func_832(1);
				if (func_132(Local_14.f_226, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_14.f_226, 0.25f, 2f, 0f), 1036831949 /* Float: 0.1f */, 20000) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					if (func_4(&Local_14, &(Local_14.f_251), 3, func_133(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 0, 0, 0))
					{
						PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
						if (!__LIB_0__::func_27(Local_14.f_253, 4))
						{
							__LIB_1__::func_581(&(Local_14.f_253), 4);
						}
						__LIB_3__::func_158(&(Local_14.f_303[0 /*17*/]), 0);
						__LIB_3__::func_158(&(Local_14.f_303[1 /*17*/]), 0);
						__LIB_2__::func_411(&(Local_14.f_303[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_14.f_303[1 /*17*/]), 0, 0);
						Local_14.f_639 = __LIB_2__::func_340(3, 0, 0);
						__LIB_2__::func_451(&(Local_14.f_281[0 /*21*/]), 0);
						__LIB_16__::func_832(0);
						__LIB_1__::func_649(&Local_14, 53);
					}
				}
				break;
			case 53:
				if (__LIB_4__::func_240(&(Local_14.f_303[0 /*17*/]), 0))
				{
					__LIB_3__::func_158(&(Local_14.f_303[0 /*17*/]), 0);
					__LIB_3__::func_158(&(Local_14.f_303[1 /*17*/]), 0);
					__LIB_2__::func_411(&(Local_14.f_303[0 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_14.f_303[1 /*17*/]), 1, 0);
				}
				if (__LIB_0__::func_27(Local_14.f_253, 4))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_14.f_251, "p_chaireagle01x", Local_14.f_228);
					if (func_4(&Local_14, &(Local_14.f_250), 0, func_3(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 0, 0, 0))
					{
						__LIB_1__::func_649(&Local_14, 6);
					}
				}
				else if (func_4(&Local_14, &(Local_14.f_251), 3, func_3(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 0, 0, 0))
				{
					__LIB_1__::func_649(&Local_14, 7);
				}
				break;
			case 54:
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					if (func_4(&Local_14, &(Local_14.f_251), 4, func_133(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 0, 0, 0))
					{
						if (!__LIB_0__::func_27(Local_14.f_253, 4))
						{
							__LIB_1__::func_581(&(Local_14.f_253), 4);
						}
						__LIB_1__::func_649(&Local_14, 56);
					}
				}
				break;
			case 55:
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					if (func_4(&Local_14, &(Local_14.f_251), 4, func_133(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 0, 0, 0))
					{
						if (!__LIB_0__::func_27(Local_14.f_253, 4))
						{
							__LIB_1__::func_581(&(Local_14.f_253), 4);
						}
						__LIB_1__::func_649(&Local_14, 56);
					}
				}
				break;
			case 56:
				if (__LIB_0__::func_27(Local_14.f_253, 4))
				{
					if (func_4(&Local_14, &(Local_14.f_250), 1, func_6(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 0, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
					{
						__LIB_1__::func_649(&Local_14, 11);
					}
				}
				else if (func_4(&Local_14, &(Local_14.f_251), 4, __LIB_16__::func_874(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 0, 0, 0))
				{
					__LIB_1__::func_649(&Local_14, 12);
				}
				break;
			case 57:
				if (!PED::_IS_PED_USING_SCENARIO_POINT(Local_14.f_226, Local_14.f_224))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_14.f_226, func_91(3), 1f, 1f, 3f, false, true, 0))
					{
						if (!__LIB_0__::func_163(Local_14.f_226, 713668775))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_14.f_226, func_91(3), 1f, -1, 0.25f, 0, 40000f);
						}
					}
					else if (__LIB_0__::func_264(&(Local_14.f_135)) > 3f)
					{
						if (func_90(&Local_14, &(Local_14.f_225), -1))
						{
							__LIB_1__::func_993(&(Local_14.f_253), 1024);
							__LIB_1__::func_649(&Local_14, 62);
						}
					}
				}
				break;
			case 58:
				if (__LIB_0__::func_665(Local_14.f_226, Global_35, 1, 1) > 10f)
				{
					if (!ANIMSCENE::_0x34A0671BE613D3D0(Local_14.f_252) && !ANIMSCENE::_0xD70C7A30412F8FA0(Local_14.f_252))
					{
						ANIMSCENE::ABORT_ANIM_SCENE(Local_14.f_252, false);
					}
				}
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_14.f_252, false) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_14.f_252, false))
				{
					ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_252, 0);
					if (!__LIB_0__::func_27(Local_14.f_253, 4))
					{
						__LIB_1__::func_581(&(Local_14.f_253), 4);
					}
					if (__LIB_0__::func_27(Local_14.f_253, 262144))
					{
						__LIB_3__::func_10(Global_35);
						__LIB_1__::func_726(Local_14.f_226, 1);
						__LIB_1__::func_727(Global_35, 1);
						__LIB_1__::func_993(&(Local_14.f_253), 262144);
					}
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(Local_14.f_226, &uVar8));
					if (func_113(&Local_14, 2))
					{
						__LIB_1__::func_993(&(Local_14.f_253), 1024);
						__LIB_1__::func_649(&Local_14, 65);
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_226))
					{
						if (__LIB_0__::func_272(Local_14.f_226, 0))
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_226, 1.5f);
						}
					}
					__LIB_2__::func_966(Local_14.f_226, Global_35, 1, 1, 1, 1, 1, 1, 0, 1, 1);
				}
				break;
			case 63:
				Local_14.f_643 = 0;
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_231))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_14.f_231))
					{
						__LIB_2__::func_919(Local_14.f_231, 1, 1);
						PHYSICS::ACTIVATE_PHYSICS(Local_14.f_231);
					}
				}
				if (!__LIB_0__::func_27(Local_14.f_254, 128))
				{
					if (__LIB_16__::func_933(Local_14.f_226, "PANIC_HELP", joaat("SPEECH_PARAMS_SHOUTED"), 0, Local_14.f_280, 0))
					{
						__LIB_1__::func_581(&(Local_14.f_254), 128);
					}
				}
				if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_238))
				{
					PATHFIND::_0x5A4E1A41E3A02AD0(Local_14.f_238, 6, 0);
					VOLUME::_DELETE_VOLUME(Local_14.f_238);
				}
				if (!PED::IS_PED_FLEEING(Local_14.f_226))
				{
					__LIB_2__::func_56(Local_14.f_226, 1, 1);
					__LIB_16__::func_804(Local_14.f_226);
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_14.f_226, Global_35, 3, 256, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_CONFIG_FLAG(Local_14.f_226, 153, false);
					__LIB_0__::func_172(Local_14.f_242);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_226, false);
					AUDIO::STOP_PED_SPEAKING(Local_14.f_226, false);
					PED::SET_PED_KEEP_TASK(Local_14.f_226, true);
				}
				break;
			case 62:
				break;
			case 64:
				break;
			case 60:
				Local_14.f_643 = 0;
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorConvo");
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_229))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_14.f_229))
					{
						__LIB_2__::func_919(Local_14.f_229, 1, 1);
						PHYSICS::ACTIVATE_PHYSICS(Local_14.f_229);
					}
				}
				if (!__LIB_0__::func_27(Local_14.f_254, 128))
				{
					if (__LIB_16__::func_933(Local_14.f_226, "PANIC_HELP", joaat("SPEECH_PARAMS_SHOUTED"), 0, Local_14.f_280, 0))
					{
						__LIB_1__::func_581(&(Local_14.f_254), 128);
					}
				}
				if (__LIB_0__::func_27(Local_14.f_253, 4194304))
				{
					if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_250) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_14.f_226, -1)) && (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_14.f_250, false) || (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_251) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_14.f_251, false))))
					{
						func_4(&Local_14, &(Local_14.f_250), 0, func_114(), &(Local_14.f_3), &(Local_14.f_4), 0, 0, 0, 0, 0);
						if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_14.f_250, false) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_251)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_14.f_251, false))
						{
							ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_251, 0);
						}
					}
					else if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_14.f_250, false) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_14.f_226, -1))
					{
						func_149(&Local_14);
						__LIB_1__::func_993(&(Local_14.f_253), 4194304);
					}
				}
				else if (!PED::IS_PED_FLEEING(Local_14.f_226))
				{
					__LIB_2__::func_56(Local_14.f_226, 1, 1);
					__LIB_16__::func_804(Local_14.f_226);
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_14.f_226, Global_35, 3, 256, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_CONFIG_FLAG(Local_14.f_226, 153, false);
					__LIB_0__::func_172(Local_14.f_242);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_226, false);
					AUDIO::STOP_PED_SPEAKING(Local_14.f_226, false);
					PED::SET_PED_KEEP_TASK(Local_14.f_226, true);
				}
				break;
			case 2:
				break;
			case 59:
				PED::SET_PED_RESET_FLAG(Local_14.f_226, 202, true);
				if (__LIB_0__::func_27(Local_14.f_253, 134217728))
				{
					func_90(&Local_14, &(Local_14.f_225), -1);
				}
				else
				{
					func_113(&Local_14, 1);
				}
				if (!__LIB_0__::func_27(Local_14.f_253, 65536))
				{
					if (__LIB_0__::func_665(Local_14.f_226, Local_14.f_214[0], 1, 1) > 4f)
					{
						__LIB_1__::func_581(&(Local_14.f_253), 65536);
					}
				}
				break;
			case 61:
				break;
			case 66:
				Local_14.f_643 = 0;
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
				if (!__LIB_0__::func_27(Local_14.f_254, 128))
				{
					if (__LIB_16__::func_933(Local_14.f_226, "PANIC_HELP", joaat("SPEECH_PARAMS_SHOUTED"), 0, Local_14.f_280, 0))
					{
						__LIB_1__::func_581(&(Local_14.f_254), 128);
					}
				}
				if (!PED::IS_PED_FLEEING(Local_14.f_226))
				{
					__LIB_2__::func_56(Local_14.f_226, 1, 1);
					__LIB_16__::func_804(Local_14.f_226);
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_14.f_226, Global_35, 3, 256, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_CONFIG_FLAG(Local_14.f_226, 153, false);
					__LIB_0__::func_172(Local_14.f_242);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_226, false);
					AUDIO::STOP_PED_SPEAKING(Local_14.f_226, false);
					PED::SET_PED_KEEP_TASK(Local_14.f_226, true);
				}
				break;
			case 65:
				break;
			case 67:
				break;
			default:
				break;
		}
		if (__LIB_0__::func_6(Local_14.f_159))
		{
			switch (Local_14)
			{
				case 62:
					if (!PED::_0x5102307CE88798EB(Local_14.f_226))
					{
						PED::REQUEST_PED_VISIBILITY_TRACKING(Local_14.f_226);
					}
					if (__LIB_0__::func_665(Global_35, Local_14.f_226, 1, 1) > 50f && !PED::IS_TRACKED_PED_VISIBLE(Local_14.f_226))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_226))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_14.f_226, 0f);
							PED::DELETE_PED(&(Local_14.f_226));
						}
						func_1(&Local_14);
					}
					break;
				case 59:
				case 65:
					if (!PED::_0x5102307CE88798EB(Local_14.f_226))
					{
						PED::REQUEST_PED_VISIBILITY_TRACKING(Local_14.f_226);
					}
					if (__LIB_0__::func_665(Global_35, Local_14.f_226, 1, 1) > 100f && !PED::IS_TRACKED_PED_VISIBLE(Local_14.f_226))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_226))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_14.f_226, 0f);
							PED::DELETE_PED(&(Local_14.f_226));
						}
						func_1(&Local_14);
					}
					break;
			}
		}
	}
}

void func_1(int iParam0)
{
	int iVar0;
	__LIB_16__::func_839(&(iParam0->f_259));
	__LIB_16__::func_840(18);
	if (__LIB_0__::func_27(iParam0->f_253, 262144))
	{
		__LIB_1__::func_726(iParam0->f_226, 1);
		__LIB_1__::func_727(Global_35, 1);
	}
	if (__LIB_0__::func_6(iParam0->f_159))
	{
		__LIB_1__::func_532(iParam0->f_159, iParam0->f_254);
		__LIB_7__::func_448(__LIB_1__::func_293(18, 0, 9, __LIB_16__::func_790(18)), iParam0->f_258);
	}
	__LIB_16__::func_803(&(iParam0->f_226), &(iParam0->f_255), joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 20f, 1);
	AUDIO::STOP_PED_SPEAKING(iParam0->f_226, false);
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_226))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_226, false);
		__LIB_2__::func_56(iParam0->f_226, 1, 1);
		__LIB_16__::func_804(iParam0->f_226);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_226, 0f);
		PED::_0x39A2FC5AF55A52B1(iParam0->f_226, -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_226));
	}
	if (__LIB_2__::func_763(483, 0))
	{
		__LIB_2__::func_753(483, 0, 1, 0, 0);
	}
	if (__LIB_0__::func_27(iParam0->f_253, 268435456))
	{
		iVar0 = __LIB_0__::func_120(884);
		if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			PERSCHAR::_0x4F81EAD1DE8FA19B(iVar0);
		}
	}
	func_157(&(iParam0->f_646));
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_229))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0->f_229))
		{
			__LIB_2__::func_919(iParam0->f_229, 1, 1);
			PHYSICS::ACTIVATE_PHYSICS(iParam0->f_229);
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_229));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_230))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0->f_230))
		{
			__LIB_2__::func_919(iParam0->f_230, 1, 1);
			PHYSICS::ACTIVATE_PHYSICS(iParam0->f_230);
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_230));
	}
	ENTITY::REMOVE_MODEL_HIDE(-1817.047f, -371.4747f, 163.116f, 1f, joaat("P_CS_NEWSPAPER_03X"), 0);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_224))
	{
		TASK::_DELETE_SCENARIO_POINT(iParam0->f_224);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_231))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0->f_231))
		{
			__LIB_2__::func_919(iParam0->f_231, 1, 1);
			PHYSICS::ACTIVATE_PHYSICS(iParam0->f_231);
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_231));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_237))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_237);
	}
	if (PED::_0x91A5F9CBEBB9D936(iParam0->f_645))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iParam0->f_645, false);
	}
	func_158(iParam0);
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[18 /*638*/][0 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[18 /*638*/][0 /*48*/].f_47);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[18 /*638*/][1 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[18 /*638*/][1 /*48*/].f_47);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[18 /*638*/][2 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[18 /*638*/][2 /*48*/].f_47);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[18 /*638*/][3 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[18 /*638*/][3 /*48*/].f_47);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[18 /*638*/][4 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[18 /*638*/][4 /*48*/].f_47);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_649))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_649);
	}
	__LIB_16__::func_832(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

char* func_3()
{
	return "pbl_Base_Reset";
}

bool func_4(int iParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, char* sParam10)
{
	if (!func_163(uParam1, iParam2, uParam5))
	{
		return false;
	}
	if (!func_164(uParam1, uParam4, iParam2, iParam0))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam1, false) && !bParam8)
	{
		ANIMSCENE::START_ANIM_SCENE(*uParam1);
	}
	if (bParam8 && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam1, false))
	{
		if ((!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam3) && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam1, sParam3)) && !ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam3))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam1, sParam3);
		}
		if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam3))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, sParam3, true);
			ANIMSCENE::START_ANIM_SCENE(*uParam1);
		}
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam1, false))
	{
		if ((!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam3) && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam1, sParam3)) && !ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam3))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam1, sParam3);
		}
		if (!ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam3) && ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam3))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, sParam3, true);
			BUILTIN::WAIT(0);
			return false;
		}
		else if (ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam3))
		{
			if (iParam0->f_244 != -1)
			{
				if (iParam0->f_244 == *uParam1)
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_244, iParam0->f_243);
				}
				else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_244) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_244, true, false))
				{
					ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_244, func_165(iParam0->f_245));
				}
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_Base_End", 1))
			{
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return true;
			}
			else if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_base_end", 1))
			{
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return true;
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10) && ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, sParam10, 1))
			{
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return true;
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*uParam1, false))
			{
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return true;
			}
			else if ((iParam0->f_641 && __LIB_0__::func_27(iParam0->f_253, 16384)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_226))
			{
				iParam0->f_641 = 0;
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return true;
			}
		}
	}
	return false;
}

char* func_6()
{
	return "pbl_IG2_base_reset";
}

bool func_19(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { func_91(iParam1) };
	iVar3 = func_186(iParam1);
	*uParam0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar0, iVar3, 1f, 0, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(*uParam0))
	{
		return true;
	}
	return false;
}

void func_22(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_226))
	{
		if (!__LIB_0__::func_272(iParam0->f_226, 0))
		{
			if (!__LIB_0__::func_27(iParam0->f_253, 33554432))
			{
				__LIB_1__::func_649(iParam0, func_188(iParam0));
				__LIB_1__::func_581(&(iParam0->f_253), 33554432);
			}
		}
		else if ((*iParam0 > 5 && *iParam0 < func_188(iParam0)) && (__LIB_12__::func_465(iParam0->f_226, 0, &(iParam0->f_103), &(iParam0->f_131), 0, 0) || __LIB_0__::func_27(iParam0->f_253, 8388608)))
		{
			__LIB_16__::func_789(18);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_226, 448, false);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_226, 153, false);
			AUDIO::STOP_PED_SPEAKING(iParam0->f_226, false);
			AUDIO::_0x36559148B78853B3(1, 0, 0);
			__LIB_1__::func_581(&(iParam0->f_253), 8388608);
			if (iParam0->f_1 == 0)
			{
				__LIB_1__::func_581(&(iParam0->f_253), 4194304);
				__LIB_1__::func_649(iParam0, 60);
			}
			else if (iParam0->f_1 == 2)
			{
				__LIB_1__::func_649(iParam0, 63);
				func_149(iParam0);
			}
			else if (iParam0->f_1 == 3)
			{
				__LIB_1__::func_649(iParam0, 66);
				func_149(iParam0);
			}
		}
	}
}

void func_23(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_257)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_214[iVar0]))
		{
			if (!PED::IS_PED_FLEEING(iParam0->f_214[iVar0]))
			{
				if (iParam0->f_643)
				{
					PED::SET_PED_RESET_FLAG(iParam0->f_214[iVar0], 49, true);
				}
				if (__LIB_12__::func_465(iParam0->f_214[iVar0], 0, &(iParam0->f_103), &(iParam0->f_131), 0, 0) || __LIB_0__::func_27(iParam0->f_253, 8388608))
				{
					if (!__LIB_0__::func_75(&(iParam0->f_147)) || __LIB_0__::func_264(&(iParam0->f_147)) > 0.4f)
					{
						if (iParam0->f_1 == 0)
						{
							PED::_0xEEED8FAFEC331A70(iParam0->f_214[iVar0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1);
						}
						else
						{
							PED::_0xF1C03A5352243A30(iParam0->f_214[iVar0]);
						}
						__LIB_2__::func_451(&(iParam0->f_338[iVar0 /*75*/]), 0);
						__LIB_4__::func_487(&(iParam0->f_338[iVar0 /*75*/]));
						PED::SET_PED_CONFIG_FLAG(iParam0->f_214[iVar0], 315, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_214[iVar0], 17, true);
						TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0->f_214[iVar0], Global_35, 3, 1, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(iParam0->f_214[iVar0], true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_214[iVar0], false);
						__LIB_1__::func_148(&(iParam0->f_147));
						__LIB_1__::func_581(&(iParam0->f_253), 8388608);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bVar1 = false;
	iVar0 = iParam0->f_1;
	switch (iVar0)
	{
		case 0:
			if (((*iParam0 == 6 && __LIB_0__::func_27(iParam0->f_253, 524288)) || ((*iParam0 != 6 && !AUDIO::_0x54B187F111D9C6F8(iParam0->f_226, 0)) && !ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_226, -1546655685))) && !__LIB_0__::func_27(iParam0->f_253, 2))
			{
				bVar1 = true;
			}
			break;
		case 1:
			if (((*iParam0 == 6 && __LIB_0__::func_27(iParam0->f_253, 524288)) && !__LIB_0__::func_27(iParam0->f_253, 2)) && !__LIB_16__::func_871())
			{
				bVar1 = true;
			}
			break;
		case 2:
			if ((*iParam0 == 11 && __LIB_0__::func_27(iParam0->f_253, 524288)) && !__LIB_0__::func_27(iParam0->f_253, 2))
			{
				bVar1 = true;
			}
			break;
		case 3:
			if ((*iParam0 == 17 && __LIB_0__::func_27(iParam0->f_253, 524288)) && !__LIB_0__::func_27(iParam0->f_253, 2))
			{
				bVar1 = true;
			}
			break;
	}
	iVar2 = 0;
	if ((VOLUME::_DOES_VOLUME_EXIST(iParam0->f_234) && VOLUME::_DOES_VOLUME_EXIST(iParam0->f_233)) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_234, true, 0))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_233, true, 0) && bVar1)
			{
				if (!__LIB_2__::func_466(&(iParam0->f_303[0 /*17*/]), 1, 0))
				{
					__LIB_2__::func_411(&(iParam0->f_303[0 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(iParam0->f_303[1 /*17*/]), 1, 0);
				}
				if (__LIB_0__::func_27(iParam0->f_253, 16777216))
				{
					iParam0->f_639 = __LIB_2__::func_340(2, 0, 0);
					__LIB_2__::func_451(&(iParam0->f_281[0 /*21*/]), 0);
					__LIB_1__::func_993(&(iParam0->f_253), 16777216);
				}
			}
			else
			{
				if (__LIB_2__::func_466(&(iParam0->f_303[0 /*17*/]), 1, 0))
				{
					__LIB_2__::func_411(&(iParam0->f_303[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(iParam0->f_303[1 /*17*/]), 0, 0);
				}
				if (!__LIB_0__::func_27(iParam0->f_253, 16777216))
				{
					iParam0->f_639 = __LIB_2__::func_340(3, 0, 0);
					__LIB_2__::func_451(&(iParam0->f_281[0 /*21*/]), 0);
					__LIB_1__::func_581(&(iParam0->f_253), 16777216);
				}
			}
		}
		else if (__LIB_2__::func_466(&(iParam0->f_303[0 /*17*/]), 1, 0))
		{
			__LIB_2__::func_411(&(iParam0->f_303[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(iParam0->f_303[1 /*17*/]), 0, 0);
			if (!__LIB_0__::func_27(iParam0->f_253, 16777216))
			{
				iParam0->f_639 = __LIB_2__::func_340(3, 0, 0);
				__LIB_2__::func_451(&(iParam0->f_281[0 /*21*/]), 0);
				__LIB_1__::func_581(&(iParam0->f_253), 16777216);
			}
		}
		iVar3 = -1;
		iVar4 = 0;
		iVar3 = func_193(&(iParam0->f_226), &(iParam0->f_281[0 /*21*/]), 15f, &(iParam0->f_303), &iVar4, 0f, 2, 0, iVar2, iParam0->f_639, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (!__LIB_0__::func_27(iParam0->f_253, 2))
		{
			switch (iVar3)
			{
				case 0:
				case 1:
					if (iVar3 == 1)
					{
						iParam0->f_258++;
					}
					__LIB_2__::func_411(&(iParam0->f_303[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(iParam0->f_303[1 /*17*/]), 0, 0);
					if (!__LIB_0__::func_27(iParam0->f_253, 16777216))
					{
						iParam0->f_639 = __LIB_2__::func_340(3, 0, 0);
						__LIB_2__::func_451(&(iParam0->f_281[0 /*21*/]), 0);
						__LIB_1__::func_581(&(iParam0->f_253), 16777216);
					}
					__LIB_16__::func_849(18, &(iParam0->f_226), &(iParam0->f_253), 2048);
					__LIB_1__::func_581(&(iParam0->f_253), 2);
					__LIB_16__::func_783(18, func_195(iParam0));
					iParam0->f_641 = 1;
					if (iVar0 == 0)
					{
						__LIB_3__::func_158(&(iParam0->f_303[0 /*17*/]), 1);
						__LIB_3__::func_158(&(iParam0->f_303[1 /*17*/]), 1);
						func_82(180);
						func_83(iParam0);
					}
					break;
			}
		}
		iVar5 = 0;
		while (iVar5 < iParam0->f_257)
		{
			func_197(&(iParam0->f_214[iVar5]), &(iParam0->f_338[iVar5 /*75*/]), 15f, &(iParam0->f_338[iVar5 /*75*/].f_21), 0f, 2, 0, "", __LIB_2__::func_340(3, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */);
			iVar5++;
		}
	}
}

void func_25(int iParam0)
{
	int iVar0;
	bool bVar1;
	if ((((__LIB_0__::func_27(iParam0->f_253, 65536) && !__LIB_0__::func_27(iParam0->f_253, 131072)) && *iParam0 != 60) && *iParam0 != 63) && *iParam0 != 66)
	{
		bVar1 = true;
		iVar0 = 0;
		while (iVar0 < iParam0->f_257)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_214[iVar0]))
			{
				bVar1 = false;
				if (!__LIB_0__::func_75(&(iParam0->f_144)) || __LIB_0__::func_264(&(iParam0->f_144)) > 0.4f)
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_214[iVar0]))
					{
						TASK::CLEAR_PED_TASKS(iParam0->f_214[iVar0], true, false);
					}
					__LIB_2__::func_451(&(iParam0->f_338[iVar0 /*75*/]), 0);
					__LIB_4__::func_487(&(iParam0->f_338[iVar0 /*75*/]));
					PED::SET_PED_CONFIG_FLAG(iParam0->f_214[iVar0], 315, false);
					__LIB_3__::func_10(iParam0->f_214[iVar0]);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_214[iVar0], false);
					PED::_0x39A2FC5AF55A52B1(iParam0->f_214[iVar0], -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_214[iVar0]));
					__LIB_1__::func_148(&(iParam0->f_144));
				}
			}
			iVar0++;
		}
		if (bVar1)
		{
			__LIB_1__::func_581(&(iParam0->f_253), 131072);
		}
	}
}

void func_26(int iParam0, var uParam1)
{
	if (__LIB_0__::func_27(iParam0->f_253, 128) || __LIB_0__::func_27(iParam0->f_253, 4))
	{
		return;
	}
	if (AUDIO::_0xA2CAC9DEF0195E6F(0))
	{
		return;
	}
	if (!__LIB_0__::func_75(uParam1))
	{
		__LIB_0__::func_268(uParam1, 0f);
		func_198(iParam0);
	}
}

void func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = iParam0->f_1;
	if (iVar1 == 2)
	{
		iVar2 = 0;
		iVar3 = 3;
	}
	else if (iVar1 == 3)
	{
		iVar2 = 2;
		iVar3 = 3;
	}
	if (*iParam0 == func_188(iParam0))
	{
		iParam0->f_2 = 3;
	}
	switch (iParam0->f_2)
	{
		case 0:
		case 1:
			switch (iVar1)
			{
				case 0:
				case 2:
				case 3:
					iVar0 = 0;
					while (iVar0 < iParam0->f_257)
					{
						__LIB_16__::func_877(iParam0->f_214[iVar0]);
						iVar0++;
					}
					break;
			}
			break;
	}
	switch (iParam0->f_2)
	{
		case 0:
			if (func_199(iParam0))
			{
				iParam0->f_2 = 1;
			}
			break;
		case 1:
			switch (iVar1)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < iParam0->f_257)
					{
						TASK::TASK_LOOK_AT_ENTITY(iParam0->f_214[iVar0], iParam0->f_226, -1, 2108, 51, 1);
						if (!__LIB_0__::func_163(iParam0->f_214[iVar0], -76381094))
						{
							iParam0->f_2 = 0;
						}
						iVar0++;
					}
					break;
				case 2:
				case 3:
					iVar0 = 0;
					while (iVar0 < iParam0->f_257)
					{
						if (__LIB_0__::func_272(iParam0->f_214[iVar0], 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(iParam0->f_214[iVar0], iParam0->f_226, -1, 2108, 51, 1);
							if (!__LIB_0__::func_163(iParam0->f_214[iVar0], 993674639))
							{
								iParam0->f_2 = 0;
							}
							if (__LIB_0__::func_665(Global_35, iParam0->f_226, 1, 1) <= 14f)
							{
								if (!__LIB_0__::func_75(&(iParam0->f_144)))
								{
									__LIB_1__::func_148(&(iParam0->f_144));
								}
								if (!__LIB_0__::func_27(iParam0->f_253, 67108864))
								{
									if (__LIB_0__::func_264(&(iParam0->f_144)) > 2f)
									{
										__LIB_1__::func_148(&(iParam0->f_144));
										iParam0->f_2 = 2;
									}
								}
								else if (__LIB_0__::func_264(&(iParam0->f_144)) > 30f)
								{
									__LIB_1__::func_148(&(iParam0->f_144));
									iParam0->f_2 = 2;
								}
							}
							else
							{
								__LIB_1__::func_148(&(iParam0->f_144));
							}
						}
						iVar0++;
					}
					break;
			}
			break;
		case 2:
			switch (iVar1)
			{
				case 2:
				case 3:
					if (!__LIB_0__::func_27(iParam0->f_253, 67108864))
					{
						iVar0 = iVar2;
					}
					else
					{
						iVar0 = iVar3;
					}
					if (__LIB_0__::func_272(iParam0->f_214[iVar0], 0))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_214[iVar0]))
						{
							TASK::CLEAR_PED_TASKS(iParam0->f_214[iVar0], true, false);
							__LIB_1__::func_148(&(iParam0->f_144));
						}
						else if (__LIB_0__::func_264(&(iParam0->f_144)) > 4f)
						{
							__LIB_2__::func_451(&(iParam0->f_338[iVar0 /*75*/]), 0);
							__LIB_4__::func_487(&(iParam0->f_338[iVar0 /*75*/]));
							PED::SET_PED_CONFIG_FLAG(iParam0->f_214[iVar0], 315, false);
							PED::_0x39A2FC5AF55A52B1(iParam0->f_214[iVar0], -1);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_214[iVar0]));
							__LIB_1__::func_148(&(iParam0->f_144));
							iParam0->f_2 = 1;
							__LIB_1__::func_581(&(iParam0->f_253), 67108864);
						}
						__LIB_3__::func_10(iParam0->f_214[iVar0]);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_214[iVar0], false);
					}
					break;
			}
			break;
		case 3:
			if (func_200(iParam0))
			{
				func_201(iParam0);
			}
			break;
	}
}

void func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	switch (iParam0->f_1)
	{
		case 2:
			if (__LIB_0__::func_272(iParam0->f_226, 0))
			{
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_251) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_251, false)) && ANIMSCENE::_0x1F0E401031E20146(iParam0->f_251, func_133()))
				{
					if (!__LIB_0__::func_27(iParam0->f_253, 2097152))
					{
						TASK::TASK_LOOK_AT_ENTITY(iParam0->f_226, Global_35, -1, 2108, 51, 1);
						__LIB_1__::func_581(&(iParam0->f_253), 2097152);
					}
				}
				else
				{
					if (__LIB_0__::func_27(iParam0->f_253, 2097152))
					{
						__LIB_3__::func_10(iParam0->f_226);
						__LIB_1__::func_993(&(iParam0->f_253), 2097152);
					}
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_250) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_250, false))
					{
						if (!__LIB_0__::func_75(&(iParam0->f_156)))
						{
							__LIB_1__::func_148(&(iParam0->f_156));
						}
						else if (__LIB_0__::func_264(&(iParam0->f_156)) > 6f)
						{
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam0->f_257);
							if (__LIB_0__::func_272(iParam0->f_214[iVar0], 0))
							{
								TASK::TASK_LOOK_AT_ENTITY(iParam0->f_226, iParam0->f_214[iVar0], -1, 2108, 51, 1);
								__LIB_1__::func_148(&(iParam0->f_156));
							}
						}
					}
				}
			}
			break;
		case 0:
			if (__LIB_0__::func_272(iParam0->f_226, 0) && __LIB_0__::func_272(iParam0->f_214[1], 0))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_251) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_251, false))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_251, func_133()))
					{
						if (!__LIB_0__::func_27(iParam0->f_253, 2097152))
						{
							TASK::TASK_LOOK_AT_ENTITY(iParam0->f_226, Global_35, -1, 2108, 51, 1);
							__LIB_1__::func_581(&(iParam0->f_253), 2097152);
						}
					}
					else
					{
						if (__LIB_0__::func_27(iParam0->f_253, 2097152))
						{
							__LIB_3__::func_10(iParam0->f_226);
							__LIB_1__::func_993(&(iParam0->f_253), 2097152);
						}
						TASK::TASK_LOOK_AT_ENTITY(iParam0->f_226, iParam0->f_214[1], -1, 2108, 51, 1);
					}
				}
				else
				{
					__LIB_3__::func_10(iParam0->f_226);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_250) && !func_202(iParam0))
				{
					__LIB_3__::func_10(iParam0->f_226);
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_272(iParam0->f_226, 0))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_250) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_250, false))
				{
					if (!__LIB_0__::func_75(&(iParam0->f_156)))
					{
						__LIB_1__::func_148(&(iParam0->f_156));
					}
					else if (__LIB_0__::func_264(&(iParam0->f_156)) > 6f)
					{
						iVar1 = __LIB_9__::func_844(0, iParam0->f_257, 3);
						if (__LIB_0__::func_272(iParam0->f_214[iVar1], 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(iParam0->f_226, iParam0->f_214[iVar1], -1, 2108, 51, 1);
							__LIB_1__::func_148(&(iParam0->f_156));
						}
					}
				}
			}
			break;
	}
}

void func_29(int iParam0)
{
	if (*iParam0 != 51 && *iParam0 != 52)
	{
		func_204(iParam0);
		return;
	}
	if (__LIB_0__::func_27(iParam0->f_253, 4))
	{
		func_204(iParam0);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_226) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		func_204(iParam0);
		return;
	}
	if (__LIB_0__::func_48(Global_35, iParam0->f_226, 15f, 1))
	{
		if (!__LIB_0__::func_27(iParam0->f_253, 1048576))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0->f_226, "SPECIAL_PED_GENERIC_INTERACT_FOCUS", 0f, 0f, 0f, 0, "MayorConvo");
			__LIB_1__::func_581(&(iParam0->f_253), 1048576);
		}
	}
	else
	{
		func_204(iParam0);
	}
}

void func_30(int iParam0)
{
	if (__LIB_0__::func_27(iParam0->f_253, 4096))
	{
		return;
	}
	if (*iParam0 >= 22 && *iParam0 <= 49)
	{
		if (iParam0->f_256 < 2)
		{
			if (__LIB_16__::func_802(&(iParam0->f_226), 249295937))
			{
				__LIB_1__::func_581(&(iParam0->f_253), 4096);
			}
		}
	}
}

void func_33(var uParam0)
{
	if (__LIB_0__::func_27(*uParam0, 64))
	{
		return;
	}
	if (__LIB_11__::func_133(18) == 0)
	{
		if (!__LIB_0__::func_27(*uParam0, 8))
		{
			__LIB_1__::func_581(uParam0, 8);
			__LIB_1__::func_581(uParam0, 64);
		}
	}
	else if (__LIB_11__::func_133(18) == 1)
	{
		if (!__LIB_0__::func_27(*uParam0, 16))
		{
			__LIB_1__::func_581(uParam0, 16);
			__LIB_1__::func_581(uParam0, 64);
		}
	}
	else if (__LIB_11__::func_133(18) == 2)
	{
		if (!__LIB_0__::func_27(*uParam0, 32))
		{
			__LIB_1__::func_581(uParam0, 32);
			__LIB_1__::func_581(uParam0, 64);
		}
	}
}

int func_35(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("CS_NICHOLASTIMMINS");
			break;
		case 1:
			iVar0 = joaat("P_CHAIRWICKER03X");
			break;
		case 2:
			iVar0 = joaat("A_F_M_STRTOWNFOLK_01");
			break;
		case 3:
			iVar0 = joaat("A_M_M_STRTOWNFOLK_01");
			break;
		case 4:
			iVar0 = joaat("P_CIGAR02X");
			break;
		case 5:
			iVar0 = joaat("P_MATCHSTICK01X");
			break;
		case 6:
			iVar0 = joaat("S_CS_NH_NEWSPAPER01X");
			break;
	}
	return iVar0;
}

void func_36(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_232))
	{
		iParam0->f_232 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-1807.259f, -373.538f, 160.545f, 0f, 0f, -40.7371f, 40f, 40f, 40f, "RandomEventBlock");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_233))
	{
		iParam0->f_233 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1808.178f, -372.9722f, 162.925f, 0f, 0f, 0f, 2.4f, 3.25f, 3f, "BarTrigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_234))
	{
		iParam0->f_234 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1780.52f, -386.1113f, 164.7127f, 0f, 0f, 0f, 15f, 15f, 10f, "Interaction");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_235))
	{
		iParam0->f_235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 2f, 2f, 3f, "BarStayAway");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_236))
	{
		iParam0->f_236 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1805.002f, -370.4279f, 162.451f, 0f, 0f, 0f, 5f, 5f, 3f, "LookIKVol");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_237))
	{
		iParam0->f_237 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 3f, 3f, 6f, "Focus");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_239))
	{
		iParam0->f_239 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1808.159f, -370.5105f, 162.2462f, 0f, 0f, 0f, 2.370875f, 9.299027f, 3.438804f, "ScenarioBlock");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_235))
	{
		iParam0->f_235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 2f, 2f, 3f, "BarStayAway");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_242))
	{
		iParam0->f_242 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1808.158f, -374.1018f, 163.1033f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
		VOLUME::_0x5B23DFF8E0948BB2(iParam0->f_242, 0);
		VOLUME::_0xBE551C2CC421185D(iParam0->f_242, 1);
	}
}

void func_58(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_232))
	{
		iParam0->f_232 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-1807.259f, -373.538f, 160.545f, 0f, 0f, -40.7371f, 40f, 40f, 40f, "RandomEventBlock");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_233))
	{
		iParam0->f_233 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1803.973f, -372.7202f, 162.9169f, 0f, 0f, 0f, 2.5f, 3.5f, 3f, "BarTrigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_234))
	{
		iParam0->f_234 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1780.52f, -386.1113f, 164.7127f, 0f, 0f, 0f, 15f, 15f, 10f, "Interaction");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_235))
	{
		iParam0->f_235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1812.402f, -366.9263f, 163.2964f, 0f, 0f, 0f, 2f, 2f, 3f, "BarStayAway");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_236))
	{
		iParam0->f_236 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1804.474f, -373.0866f, 163.7856f, 0f, 0f, 170f, 5f, 7f, 9f, "LookIKVolume");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_237))
	{
		iParam0->f_237 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 3f, 3f, 6f, "Focus");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_239))
	{
		iParam0->f_239 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1807.266f, -370.5105f, 161.9648f, 0f, 0f, 0f, 5.4f, 9.3f, 3.8f, "ScenarioBlock");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_235))
	{
		iParam0->f_235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 2f, 2f, 3f, "BarStayAway");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_240))
	{
		iParam0->f_240 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1817.343f, -371.0179f, 163.4183f, 0f, 0f, 0f, 1.5f, 1.5f, 3f, "EndScenarioBlock");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_238))
	{
		iParam0->f_238 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("BridgeBlock");
		VOLUME::_0x39816F6F94F385AD(iParam0->f_238, -1812.224f, -389.8523f, 161.4299f, 0f, 0f, -33f, 6f, 52f, 5f);
		VOLUME::_0x39816F6F94F385AD(iParam0->f_238, -1779.902f, -384.4528f, 159.3328f, 0f, 0f, 47f, 10f, 50f, 10f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_242))
	{
		iParam0->f_242 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1808.158f, -374.1018f, 163.1033f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
		VOLUME::_0x5B23DFF8E0948BB2(iParam0->f_242, 0);
		VOLUME::_0xBE551C2CC421185D(iParam0->f_242, 1);
	}
}

void func_59(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_232))
	{
		iParam0->f_232 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-1781.978f, -387.436f, 158.14f, 0f, 0f, 0f, 40f, 40f, 40f, "RandomEventBlock");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_233))
	{
		iParam0->f_233 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1780.52f, -386.1113f, 164.7127f, 0f, 0f, 0f, 5f, 5f, 10f, "BarTrigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_234))
	{
		iParam0->f_234 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1780.52f, -386.1113f, 164.7127f, 0f, 0f, 0f, 15f, 15f, 10f, "Interaction");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_235))
	{
		iParam0->f_235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1781.117f, -386.2386f, 158.8012f, 0f, 0f, 49.00006f, 2.280238f, 2.759403f, 5f, "BarStayAway");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_236))
	{
		iParam0->f_236 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1779.163f, -383.5739f, 161.6929f, 0f, 0f, 140f, 8f, 4f, 7f, "LookIKVolume");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_237))
	{
		iParam0->f_237 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 3f, 3f, 6f, "Focus");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_239))
	{
		iParam0->f_239 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1781.01f, -387.628f, 158.5448f, 0f, 0f, 53f, 4f, 4f, 7f, "ScenarioBlock");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_235))
	{
		iParam0->f_235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 2f, 2f, 3f, "BarStayAway");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_242))
	{
		iParam0->f_242 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1808.158f, -374.1018f, 163.1033f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
		VOLUME::_0x5B23DFF8E0948BB2(iParam0->f_242, 0);
		VOLUME::_0xBE551C2CC421185D(iParam0->f_242, 1);
	}
}

bool func_65(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	vVar0 = { func_91(iParam1) };
	fVar3 = func_232(iParam1);
	iVar4 = func_233(iParam1);
	iParam0->f_224 = TASK::CREATE_SCENARIO_POINT(iVar4, vVar0, fVar3, 0, 0, 0);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_224))
	{
		return true;
	}
	return false;
}

struct<4> func_66(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { -1807.855f, -373.9421f, 161.8663f };
			Var0.f_3 = 193.945f;
			break;
		case 1:
			Var0 = { -1807.839f, -374.7922f, 161.8436f };
			Var0.f_3 = 180f;
			break;
		case 2:
			Var0 = { -1807.327f, -372.7494f, 161.8703f };
			Var0.f_3 = -80.87f;
			break;
		case 3:
			Var0 = { -1781.684f, -387.2436f, 159.247f };
			Var0.f_3 = -44.78f;
			break;
	}
	return Var0;
}

int func_67(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (__LIB_0__::func_120(iParam1) == 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_272(*uParam0, 0))
	{
		*uParam0 = __LIB_2__::func_965(iParam1, 1, 0, 0, 1, 1);
	}
	else
	{
		if (iParam6 != 1320127128)
		{
			__LIB_0__::func_862(*uParam0, iParam6);
		}
		if (bParam5)
		{
			PERSCHAR::_0x59C7AD6FEA2AC449(__LIB_0__::func_120(iParam1), vParam2);
		}
		return 1;
	}
	return 0;
}

int func_69(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6)
{
	if (!ENTITY::_0x1FF441D7954F8709(*uParam0))
	{
		*uParam0 = ENTITY::_0x6F3068258A499E52(iParam2, vParam3, iParam6);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		*uParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(*uParam0));
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)
{
	int iVar0;
	bool bVar1;
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < iParam0->f_257)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_214[iVar0]))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	bVar1 = true;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_257)
	{
		if (!__LIB_17__::func_295(&(iParam0->f_214[iVar0]), func_35(func_235(iParam0, iVar0)), func_236(iParam0, iVar0), func_237(iParam0, iVar0), func_238(iParam0, iVar0), 0, 1))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

char* func_72(int iParam0, int iParam1)
{
	if (__LIB_0__::func_113())
	{
		switch (iParam0->f_258)
		{
			case 0:
				*iParam1 = 1;
				return "INSULT_MAYOR_CONV_PART1";
			case 1:
				*iParam1 = 2;
				return "INSULT_MAYOR_CONV_PART1";
			case 2:
				*iParam1 = 2;
				return "INSULT_MALE_CONV_PART1";
			case 3:
				*iParam1 = 19;
				return "INSULT_MALE_CONV_PART1";
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				*iParam1 = 16;
				return "INSULT_MALE_CONV_PART1";
			case 1:
				*iParam1 = 2;
				return "INSULT_MALE_CONV_PART1";
			case 2:
				*iParam1 = 6;
				return "INSULT_MALE_CONV_PART1";
			case 3:
				*iParam1 = 18;
				return "INSULT_MALE_CONV_PART1";
			case 4:
				*iParam1 = 19;
				return "INSULT_MALE_CONV_PART1";
		}
	}
	*iParam1 = 2;
	return "INSULT_MALE_CONV_PART1";
}

void func_81(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_257)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_214[iVar0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_214[iVar0], true);
		}
		iVar0++;
	}
}

void func_82(int iParam0)
{
	__LIB_1__::func_924();
	__LIB_1__::func_309(-1, 0, 0, 0, 0);
	__LIB_0__::func_77(iParam0, 0, 1);
}

void func_83(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_9__::func_844(0, (2 - 1), iParam0->f_249);
	iParam0->f_249 = iVar0;
	switch (iVar0)
	{
		case 0:
			__LIB_1__::func_649(iParam0, 51);
			break;
		case 1:
			__LIB_1__::func_649(iParam0, 52);
			break;
		case 2:
			__LIB_1__::func_649(iParam0, 53);
			break;
		default:
			break;
	}
}

float func_84(int iParam0)
{
	if (__LIB_0__::func_27(iParam0->f_253, 2))
	{
		return 3f;
	}
	if (__LIB_0__::func_665(Global_35, iParam0->f_226, 1, 1) <= 14f)
	{
		return 5f;
	}
	return 13f;
}

bool func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
	if (iVar0 != 0)
	{
		if (INTERIOR::_GET_INTERIOR_MINIMAP_HASH(iVar0) != joaat("STR_WHORE_INT"))
		{
			return false;
		}
	}
	switch (iParam0->f_640)
	{
		case 8:
			if (__LIB_0__::func_665(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!__LIB_0__::func_27(iParam0->f_254, 256))
				{
					__LIB_1__::func_649(iParam0, 22);
					iParam0->f_640 = 9;
					__LIB_1__::func_581(&(iParam0->f_254), 256);
					return true;
				}
			}
			break;
		case 9:
			if (__LIB_0__::func_665(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!__LIB_0__::func_27(iParam0->f_254, 512))
				{
					__LIB_1__::func_649(iParam0, 23);
					iParam0->f_640 = 10;
					__LIB_1__::func_581(&(iParam0->f_254), 512);
					return true;
				}
			}
			break;
		case 10:
			if (__LIB_0__::func_665(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!__LIB_0__::func_27(iParam0->f_254, 1024))
				{
					__LIB_1__::func_649(iParam0, 24);
					iParam0->f_640 = 16;
					__LIB_1__::func_581(&(iParam0->f_254), 1024);
					return true;
				}
			}
			break;
	}
	iVar1 = __LIB_9__::func_844(3, 8, iParam0->f_248);
	iParam0->f_248 = iVar1;
	if (iParam0->f_640 == 16)
	{
		__LIB_16__::func_783(18, func_195(iParam0));
		__LIB_1__::func_649(iParam0, 20);
		return true;
	}
	switch (iVar1)
	{
		case 3:
			if (!__LIB_0__::func_27(iParam0->f_254, 2048))
			{
				__LIB_1__::func_649(iParam0, 25);
				__LIB_1__::func_581(&(iParam0->f_254), 2048);
				return true;
			}
			break;
		case 4:
			if (!__LIB_0__::func_27(iParam0->f_254, 4096))
			{
				__LIB_1__::func_649(iParam0, 26);
				__LIB_1__::func_581(&(iParam0->f_254), 4096);
				return true;
			}
			break;
		case 5:
			if (!__LIB_0__::func_27(iParam0->f_254, 32768))
			{
				__LIB_1__::func_649(iParam0, 29);
				__LIB_1__::func_581(&(iParam0->f_254), 32768);
				return true;
			}
			break;
		case 6:
			if (!__LIB_0__::func_27(iParam0->f_254, 65536))
			{
				__LIB_1__::func_649(iParam0, 30);
				__LIB_1__::func_581(&(iParam0->f_254), 65536);
				return true;
			}
			break;
		case 7:
			if (!__LIB_0__::func_27(iParam0->f_254, 131072))
			{
				__LIB_1__::func_649(iParam0, 31);
				__LIB_1__::func_581(&(iParam0->f_254), 131072);
				return true;
			}
			break;
		case 8:
			__LIB_1__::func_649(iParam0, 32);
			break;
		default:
			break;
	}
	return false;
}

void func_86(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_9__::func_844(0, 2, iParam0->f_249);
	iParam0->f_249 = iVar0;
	switch (iVar0)
	{
		case 0:
			__LIB_1__::func_649(iParam0, 54);
			break;
		case 1:
			__LIB_1__::func_649(iParam0, 55);
			break;
		case 2:
			__LIB_1__::func_649(iParam0, 56);
			break;
		default:
			break;
	}
}

bool func_87(int iParam0)
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
	if (iVar0 != 0)
	{
		if (INTERIOR::_GET_INTERIOR_MINIMAP_HASH(iVar0) != joaat("STR_WHORE_INT"))
		{
			return false;
		}
	}
	switch (iParam0->f_640)
	{
		case 0:
			if (__LIB_0__::func_665(Global_35, iParam0->f_226, 1, 1) >= 14f)
			{
				if (!__LIB_0__::func_27(iParam0->f_254, 1))
				{
					__LIB_1__::func_649(iParam0, 37);
					__LIB_1__::func_581(&(iParam0->f_254), 1);
					return true;
				}
				func_256(iParam0, 1);
			}
			else
			{
				func_256(iParam0, 3);
			}
			return false;
		case 1:
			if (__LIB_0__::func_665(Global_35, iParam0->f_226, 1, 1) >= 14f)
			{
				if (!__LIB_0__::func_27(iParam0->f_254, 2))
				{
					__LIB_1__::func_649(iParam0, 38);
					__LIB_1__::func_581(&(iParam0->f_254), 2);
					return true;
				}
				func_256(iParam0, 2);
			}
			else
			{
				func_256(iParam0, 3);
			}
			return false;
		case 2:
			if (__LIB_0__::func_665(Global_35, iParam0->f_226, 1, 1) >= 14f)
			{
				if (!__LIB_0__::func_27(iParam0->f_254, 4))
				{
					__LIB_1__::func_649(iParam0, 41);
					__LIB_1__::func_581(&(iParam0->f_254), 4);
					return true;
				}
				func_256(iParam0, 3);
			}
			else
			{
				func_256(iParam0, 3);
			}
			return false;
		case 3:
			if (__LIB_0__::func_665(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!__LIB_0__::func_27(iParam0->f_254, 8))
				{
					__LIB_1__::func_649(iParam0, 36);
					__LIB_1__::func_581(&(iParam0->f_254), 8);
					return true;
				}
				else
				{
					func_256(iParam0, 4);
				}
			}
			else
			{
				func_256(iParam0, 0);
			}
			return false;
		case 4:
			if (__LIB_0__::func_665(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!__LIB_0__::func_27(iParam0->f_254, 16))
				{
					__LIB_1__::func_649(iParam0, 40);
					__LIB_1__::func_581(&(iParam0->f_254), 16);
					return true;
				}
				else
				{
					func_256(iParam0, 5);
				}
			}
			else
			{
				func_256(iParam0, 0);
			}
			return false;
		case 5:
			if (__LIB_0__::func_665(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!__LIB_0__::func_27(iParam0->f_254, 32))
				{
					__LIB_1__::func_649(iParam0, 39);
					__LIB_1__::func_581(&(iParam0->f_254), 32);
					return true;
				}
				else
				{
					func_256(iParam0, 6);
				}
			}
			else
			{
				func_256(iParam0, 0);
			}
			return false;
		case 6:
			if (__LIB_0__::func_665(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!__LIB_0__::func_27(iParam0->f_254, 64))
				{
					__LIB_1__::func_649(iParam0, 35);
					__LIB_1__::func_581(&(iParam0->f_254), 64);
					return true;
				}
				else
				{
					func_256(iParam0, 16);
				}
			}
			else
			{
				func_256(iParam0, 0);
			}
			return false;
		case 16:
			__LIB_16__::func_783(18, func_195(iParam0));
			__LIB_1__::func_649(iParam0, 13);
			return true;
	}
	return false;
}

bool func_88(int iParam0)
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
	if (iVar0 != 0)
	{
		if (INTERIOR::_GET_INTERIOR_MINIMAP_HASH(iVar0) != joaat("STR_WHORE_INT"))
		{
			return false;
		}
	}
	switch (iParam0->f_640)
	{
		case 11:
			if (__LIB_0__::func_665(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!__LIB_0__::func_27(iParam0->f_254, 262144))
				{
					__LIB_1__::func_649(iParam0, 43);
					iParam0->f_640 = 12;
					__LIB_1__::func_581(&(iParam0->f_254), 262144);
					return true;
				}
			}
			break;
		case 12:
			if (__LIB_0__::func_665(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!__LIB_0__::func_27(iParam0->f_254, 524288))
				{
					__LIB_1__::func_649(iParam0, 45);
					iParam0->f_640 = 13;
					__LIB_1__::func_581(&(iParam0->f_254), 524288);
					return true;
				}
			}
			break;
		case 13:
			if (__LIB_0__::func_665(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!__LIB_0__::func_27(iParam0->f_254, 1048576))
				{
					__LIB_1__::func_649(iParam0, 44);
					iParam0->f_640 = 14;
					__LIB_1__::func_581(&(iParam0->f_254), 1048576);
					return true;
				}
			}
			break;
		case 14:
			if (__LIB_0__::func_665(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!__LIB_0__::func_27(iParam0->f_254, 2097152))
				{
					__LIB_1__::func_649(iParam0, 46);
					iParam0->f_640 = 15;
					__LIB_1__::func_581(&(iParam0->f_254), 2097152);
					return true;
				}
			}
			break;
		case 15:
			if (__LIB_0__::func_665(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!__LIB_0__::func_27(iParam0->f_254, 4194304))
				{
					__LIB_1__::func_649(iParam0, 47);
					iParam0->f_640 = 16;
					__LIB_1__::func_581(&(iParam0->f_254), 4194304);
					return true;
				}
			}
			break;
	}
	if (iParam0->f_640 == 16)
	{
		__LIB_16__::func_783(18, func_195(iParam0));
		func_257(iParam0);
		__LIB_1__::func_649(iParam0, 62);
		return true;
	}
	if (!__LIB_0__::func_27(iParam0->f_254, 8388608))
	{
		__LIB_1__::func_649(iParam0, 49);
		__LIB_1__::func_581(&(iParam0->f_254), 8388608);
		return true;
	}
	return false;
}

bool func_90(int iParam0, var uParam1, int iParam2)
{
	if (!__LIB_0__::func_272(iParam0->f_226, 0))
	{
		return false;
	}
	if (PED::_IS_PED_USING_SCENARIO_POINT(iParam0->f_226, *uParam1))
	{
		return true;
	}
	if (!__LIB_0__::func_163(iParam0->f_226, -76381094))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_242))
		{
			VOLUME::_DELETE_VOLUME(iParam0->f_242);
		}
		TASK::_TASK_USE_SCENARIO_POINT(iParam0->f_226, *uParam1, 0, iParam2, true, false, 0, false, -1f, false);
		__LIB_3__::func_10(iParam0->f_226);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_226, 448, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_226, 153, false);
		AUDIO::STOP_PED_SPEAKING(iParam0->f_226, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_226, false);
		PED::SET_PED_KEEP_TASK(iParam0->f_226, true);
	}
	return false;
}

Vector3 func_91(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1817.09f, -370.825f, 162.296f };
			break;
		case 1:
			vVar0 = { -1796.195f, -432.0646f, 154.8438f };
			break;
		case 2:
			vVar0 = { -1830.637f, -411.2434f, 161.4105f };
			break;
		case 3:
			vVar0 = { -1820.684f, -374.7641f, 165.4969f };
			break;
	}
	return vVar0;
}

char* func_99()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_9_mainstreetwalkntalk";
}

char* func_100()
{
	return "pbl_Enter01";
}

char* func_101()
{
	return "pbl_P1_Loop01";
}

char* func_105()
{
	return "pbl_P4_Loop02";
}

char* func_106()
{
	return "pbl_P4_Loop03";
}

char* func_107()
{
	return "pbl_P4_Loop04";
}

char* func_108()
{
	return "pbl_P4_Loop05";
}

char* func_109()
{
	return "pbl_P4_Loop06";
}

char* func_110()
{
	return "pbl_P4_Loop07";
}

char* func_112()
{
	return "pbl_Exit01";
}

bool func_113(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (!__LIB_0__::func_272(iParam0->f_226, 0))
	{
		return false;
	}
	iVar0 = iParam1;
	iVar1 = func_233(iVar0);
	if (iVar0 != -1)
	{
		if (PED::_IS_PED_USING_SCENARIO_HASH(iParam0->f_226, iVar1))
		{
			return true;
		}
	}
	else if (PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_226))
	{
		return true;
	}
	if (!__LIB_0__::func_163(iParam0->f_226, 1647992574))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_242))
		{
			VOLUME::_DELETE_VOLUME(iParam0->f_242);
		}
		vVar2 = { func_91(iVar0) };
		TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iParam0->f_226, vVar2, 5f, -1, false, false, true, false);
		__LIB_3__::func_10(iParam0->f_226);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_226, 448, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_226, 153, false);
		AUDIO::STOP_PED_SPEAKING(iParam0->f_226, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_226, false);
		PED::SET_PED_KEEP_TASK(iParam0->f_226, true);
	}
	return false;
}

char* func_114()
{
	return "pbl_Exit02";
}

char* func_118()
{
	return "pbl_P2_Loop03";
}

char* func_119()
{
	return "pbl_P2_Loop04";
}

char* func_120()
{
	return "pbl_T04_Loop01";
}

char* func_121()
{
	return "pbl_T05_Loop01";
}

char* func_124()
{
	return "pbl_P2_loop01";
}

char* func_125()
{
	return "pbl_P3_loop01";
}

char* func_126()
{
	return "pbl_P4_loop01";
}

char* func_127()
{
	return "pbl_Part01";
}

char* func_128()
{
	return "pbl_Part02";
}

char* func_129()
{
	return "pbl_IG5_Loop01";
}

bool func_132(int iParam0, vector3 vParam1, var uParam4, var uParam5)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	HUD::_0xC9CAEAEEC1256E54(724769646);
	__LIB_16__::func_836();
	__LIB_1__::func_725();
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
	TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
	if (!__LIB_0__::func_163(Global_35, 242628503))
	{
		if (__LIB_0__::func_665(Global_35, iParam0, 1, 1) < __LIB_0__::func_94(iParam0, vParam1, 1))
		{
			if (PED::IS_PED_FACING_PED(Global_35, iParam0, 20f))
			{
				return true;
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0, 0, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
				PED::SET_PED_KEEP_TASK(Global_35, true);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
		}
	}
	if (!__LIB_3__::func_501(Global_35, vParam1, (ENTITY::GET_ENTITY_HEADING(iParam0) - 180f), uParam4, 45f, 1))
	{
		if (!__LIB_0__::func_163(Global_35, 242628503))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, vParam1, 1f, uParam5, (ENTITY::GET_ENTITY_HEADING(iParam0) - 180f), uParam4, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0, 0, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
			PED::SET_PED_KEEP_TASK(Global_35, true);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
	else
	{
		return true;
	}
	return false;
}

char* func_133()
{
	return "pbl_Loop01";
}

void func_149(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_250) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_250, false))
	{
		ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_250, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_251) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_251, false))
	{
		ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_251, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_252) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_252, false))
	{
		ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_252, 0);
	}
}

int func_157(var uParam0)
{
	if (ENTITY::_0x1FF441D7954F8709(*uParam0))
	{
		ENTITY::_0xD2B9C78537ED5759(*uParam0);
		return 0;
	}
	if (ENTITY::_0x1FF441D7954F8709(*uParam0))
	{
		return 0;
	}
	return 1;
}

void func_158(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_250))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_250);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_251))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_251);
	}
	func_201(iParam0);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_226))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_226, 0f);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_232))
	{
		__LIB_1__::func_544(iParam0->f_232);
		VOLUME::_DELETE_VOLUME(iParam0->f_232);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_235))
	{
		POPULATION::_0x74C2B3DC0B294102(iParam0->f_235);
		POPULATION::_0xA1CFB35069D23C23(iParam0->f_235);
		VOLUME::_DELETE_VOLUME(iParam0->f_235);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_233))
	{
		POPULATION::_0x74C2B3DC0B294102(iParam0->f_233);
		POPULATION::_0xA1CFB35069D23C23(iParam0->f_233);
		VOLUME::_DELETE_VOLUME(iParam0->f_233);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_236))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_236);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_241))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_241);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_239))
	{
		__LIB_0__::func_484(&(iParam0->f_644), iParam0->f_239, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_240))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_240);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_238))
	{
		PATHFIND::_0x5A4E1A41E3A02AD0(iParam0->f_238, 6, 0);
		VOLUME::_DELETE_VOLUME(iParam0->f_238);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_242))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_242);
	}
}

bool func_163(var uParam0, int iParam1, var uParam2)
{
	switch (*uParam2)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
			{
				return true;
			}
			else
			{
				*uParam2 = 1;
			}
			break;
		case 1:
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(func_280(iParam1), 0, func_165(iParam1), false, true);
			*uParam2 = 2;
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
			{
				*uParam2 = 3;
			}
			break;
		case 3:
			*uParam2 = 0;
			return true;
	}
	return false;
}

bool func_164(var uParam0, var uParam1, int iParam2, int iParam3)
{
	switch (*uParam1)
	{
		case 0:
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true))
			{
				*uParam1 = 1;
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
			{
				return true;
			}
			break;
		case 1:
			ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
			*uParam1 = 2;
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
			{
				*uParam1 = 3;
			}
			break;
		case 3:
			func_281(uParam0, iParam2, iParam3);
			*uParam1 = 4;
			break;
		case 4:
			*uParam1 = 0;
			return true;
	}
	return false;
}

char* func_165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_3();
		case 1:
			return func_6();
		case 2:
			return __LIB_16__::func_874();
		case 3:
			return func_133();
		case 4:
			return func_133();
		case 5:
			return "";
	}
	return "";
}

int func_186(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("WORLD_HUMAN_NEWSPAPER_PUTDOWN");
			break;
		case 1:
			iVar0 = joaat("WORLD_HUMAN_SMOKE_CIGAR");
			break;
		case 2:
			iVar0 = joaat("WORLD_HUMAN_LEAN_RAILING");
			break;
		case 3:
			iVar0 = joaat("WORLD_HUMAN_SMOKE_CIGAR");
			break;
	}
	return iVar0;
}

int func_188(int iParam0)
{
	if (iParam0->f_1 == 2)
	{
		return 63;
	}
	else if (iParam0->f_1 == 0)
	{
		return 60;
	}
	else if (iParam0->f_1 == 3)
	{
		return 66;
	}
	return -1;
}

int func_193(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_197(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_16__::func_964(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
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

int func_195(int iParam0)
{
	int iVar0;
	switch (iParam0->f_1)
	{
		case 2:
			iVar0 = 1;
			break;
		case 0:
			iVar0 = 2;
			break;
		case 3:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

int func_197(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_4__::func_231(*uParam0, iParam1, uParam3))
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
						return func_197(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
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
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
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

void func_198(int iParam0)
{
	__LIB_1__::func_993(&(iParam0->f_253), 8);
	__LIB_1__::func_993(&(iParam0->f_253), 16);
	__LIB_1__::func_993(&(iParam0->f_253), 32);
	__LIB_1__::func_993(&(iParam0->f_253), 64);
}

bool func_199(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0->f_1;
	switch (iVar0)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < iParam0->f_257)
			{
				if (func_349(&(iParam0->f_214[iVar1]), func_347(iVar1), func_348(iVar1), 20000, 1f, 360f))
				{
					iVar2++;
					iParam0->f_219[iVar1] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(func_347(iVar1), func_350(iVar1), 0.25f, 0, false);
					TASK::_SET_SCENARIO_POINT_FLAG(iParam0->f_219[iVar1], 16, true);
					TASK::_TASK_USE_SCENARIO_POINT(iParam0->f_214[iVar1], iParam0->f_219[iVar1], 0, -1, false, true, func_350(iVar1), false, -1f, false);
				}
				else
				{
					iVar2 = 0;
				}
				iVar1++;
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 < iParam0->f_257)
			{
				if (func_349(&(iParam0->f_214[iVar1]), func_351(iVar1), func_352(iVar1), 20000, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */))
				{
					iVar2++;
					TASK::_TASK_START_SCENARIO_IN_PLACE(iParam0->f_214[iVar1], func_353(iVar1), -1, true, 0, -1f, false);
				}
				else
				{
					iVar2 = 0;
				}
				iVar1++;
			}
			break;
		case 3:
			iVar1 = 0;
			while (iVar1 < iParam0->f_257)
			{
				if (func_349(&(iParam0->f_214[iVar1]), func_354(iVar1), func_355(iVar1), 20000, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */))
				{
					iVar2++;
					TASK::_TASK_START_SCENARIO_IN_PLACE(iParam0->f_214[iVar1], func_356(iVar1), -1, true, 0, -1f, false);
				}
				else
				{
					iVar2 = 0;
				}
				iVar1++;
			}
			break;
	}
	if (iVar2 == iParam0->f_257)
	{
		return true;
	}
	return false;
}

bool func_200(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_257)
	{
		if (__LIB_0__::func_272(iParam0->f_214[iVar0], 0))
		{
			if (!PED::IS_PED_FLEEING(iParam0->f_214[iVar0]))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_201(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_214[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_214[iVar0]))
		{
			if (TASK::PED_HAS_USE_SCENARIO_TASK(iParam0->f_214[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(iParam0->f_214[iVar0], true, false);
			}
			__LIB_3__::func_10(iParam0->f_214[iVar0]);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_214[iVar0], false);
			PED::_0x39A2FC5AF55A52B1(iParam0->f_214[iVar0], -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_214[iVar0]));
		}
		iVar0++;
	}
}

bool func_202(int iParam0)
{
	if (__LIB_0__::func_272(iParam0->f_226, 0))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_250))
		{
			if (((((((((ANIMSCENE::_0x1F0E401031E20146(iParam0->f_250, func_100()) || ANIMSCENE::_0x1F0E401031E20146(iParam0->f_250, __LIB_17__::func_136())) || ANIMSCENE::_0x1F0E401031E20146(iParam0->f_250, func_105())) || ANIMSCENE::_0x1F0E401031E20146(iParam0->f_250, func_106())) || ANIMSCENE::_0x1F0E401031E20146(iParam0->f_250, func_107())) || ANIMSCENE::_0x1F0E401031E20146(iParam0->f_250, func_108())) || ANIMSCENE::_0x1F0E401031E20146(iParam0->f_250, func_109())) || ANIMSCENE::_0x1F0E401031E20146(iParam0->f_250, func_110())) || ANIMSCENE::_0x1F0E401031E20146(iParam0->f_250, func_112())) || ANIMSCENE::_0x1F0E401031E20146(iParam0->f_250, func_114()))
			{
				return false;
			}
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
	return true;
}

void func_204(int iParam0)
{
	if (__LIB_0__::func_27(iParam0->f_253, 1048576))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorConvo");
		PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0->f_226, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "MayorBubble");
		__LIB_1__::func_993(&(iParam0->f_253), 1048576);
	}
}

float func_232(int iParam0)
{
	float fVar0;
	fVar0 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 179.6551f;
			break;
	}
	return fVar0;
}

int func_233(int iParam0)
{
	int iVar0;
	iVar0 = joaat("WORLD_HUMAN_LEAN_RAILING");
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("WORLD_HUMAN_NEWSPAPER_PUTDOWN");
			break;
		case 1:
			iVar0 = joaat("WORLD_HUMAN_SMOKE_CIGAR");
			break;
		case 2:
			iVar0 = joaat("WORLD_HUMAN_LEAN_RAILING");
			break;
		case 3:
			iVar0 = joaat("WORLD_HUMAN_SMOKE_CIGAR");
			break;
	}
	return iVar0;
}

int func_235(int iParam0, int iParam1)
{
	if (*iParam0 >= 3 && *iParam0 <= 7)
	{
		return func_370(iParam1);
	}
	if (*iParam0 >= 8 && *iParam0 <= 12)
	{
		return func_371(iParam1);
	}
	if (*iParam0 >= 14 && *iParam0 <= 18)
	{
		return func_372(iParam1);
	}
	return 3;
}

Vector3 func_236(int iParam0, int iParam1)
{
	if (*iParam0 >= 3 && *iParam0 <= 7)
	{
		return func_347(iParam1);
	}
	if (*iParam0 >= 8 && *iParam0 <= 12)
	{
		return func_351(iParam1);
	}
	if (*iParam0 >= 14 && *iParam0 <= 18)
	{
		return func_354(iParam1);
	}
	return 0f, 0f, 0f;
}

float func_237(int iParam0, int iParam1)
{
	if (*iParam0 >= 3 && *iParam0 <= 7)
	{
		return func_348(iParam1);
	}
	if (*iParam0 >= 8 && *iParam0 <= 12)
	{
		return func_352(iParam1);
	}
	if (*iParam0 >= 14 && *iParam0 <= 18)
	{
		return func_355(iParam1);
	}
	return 0f;
}

int func_238(int iParam0, int iParam1)
{
	if (*iParam0 >= 3 && *iParam0 <= 7)
	{
		return func_373(iParam1);
	}
	if (*iParam0 >= 8 && *iParam0 <= 12)
	{
		return func_374(iParam1);
	}
	if (*iParam0 >= 14 && *iParam0 <= 18)
	{
		return func_375(iParam1);
	}
	return 1;
}

void func_256(int iParam0, int iParam1)
{
	iParam0->f_640 = iParam1;
}

void func_257(int iParam0)
{
	if (__LIB_2__::func_763(483, 0))
	{
		__LIB_2__::func_753(483, 0, 1, 0, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_250))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_250, "internal_loop", true, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_250, "internal_loop_end", true, false);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_251))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_251, "internal_loop", true, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_251, "internal_loop_end", true, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_226))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_226, 0f);
		PED::_0x39A2FC5AF55A52B1(iParam0->f_226, -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_226));
	}
	func_158(iParam0);
}

char* func_280(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_399();
		case 1:
			return func_400();
		case 2:
			return func_401();
		case 3:
			return func_402();
		case 4:
			return func_403();
		case 5:
			return func_99();
	}
	return "";
}

void func_281(var uParam0, int iParam1, int iParam2)
{
	ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "internal_loop", false, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "internal_loop_end", false, false);
	switch (iParam1)
	{
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, func_404(), func_405(), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "cs_nicholastimmins", iParam2->f_226, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "p_chaireagle01x", iParam2->f_228, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "p_cigar02x", iParam2->f_229, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "p_matchstick01x", iParam2->f_230, 0);
			break;
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, func_406(), func_407(), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "cs_nicholastimmins", iParam2->f_226, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "P_CS_NEWSPAPER_02X", iParam2->f_231, 0);
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, func_408(), func_409(), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "cs_nicholastimmins", iParam2->f_226, 0);
			break;
		case 3:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, func_410(), func_411(), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "cs_nicholastimmins", iParam2->f_226, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "p_chaireagle_01x", iParam2->f_228, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "p_cigar02x", iParam2->f_229, 0);
			if (!__LIB_0__::func_181())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "b_PlayerArthur", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "ARTHUR", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "JOHN", Global_35, 0);
			}
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, func_412(), func_413(), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "cs_nicholastimmins", iParam2->f_226, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "P_CS_NEWSPAPER_02X", iParam2->f_231, 0);
			if (!__LIB_0__::func_181())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "b_PlayerArthur", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "ARTHUR", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "JOHN", Global_35, 0);
			}
			break;
		case 5:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "CS_NicholasTimmins", iParam2->f_226, 0);
			if (!__LIB_0__::func_181())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "b_PlayerArthur", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "ARTHUR", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "JOHN", Global_35, 0);
			}
			break;
	}
}

Vector3 func_347(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1808.908f, -373.3501f, 162.3387f };
			break;
		case 1:
			vVar0 = { -1808.91f, -372.71f, 162.32f };
			break;
	}
	return vVar0;
}

float func_348(int iParam0)
{
	float fVar0;
	switch (iParam0)
	{
		case 0:
			fVar0 = 284.2307f;
			break;
		case 1:
			fVar0 = 92.6596f;
			break;
	}
	return fVar0;
}

bool func_349(var uParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6, float fParam7)
{
	int iVar0;
	if (__LIB_0__::func_272(*uParam0, 0))
	{
		if (__LIB_0__::func_163(*uParam0, -1098463898) || __LIB_0__::func_163(*uParam0, 993674639))
		{
			return false;
		}
		if (!__LIB_3__::func_501(*uParam0, vParam1, fParam4, fParam6, fParam7, 0))
		{
			if (!__LIB_0__::func_163(*uParam0, 242628503))
			{
				TASK::CLEAR_PED_TASKS(*uParam0, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam1, 1f, iParam5, fParam6, 0, 40000f);
				TASK::TASK_ACHIEVE_HEADING(0, fParam4, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
				PED::SET_PED_KEEP_TASK(*uParam0, true);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

int func_350(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("PROP_HUMAN_SEAT_CHAIR");
			break;
		case 1:
			iVar0 = joaat("PROP_HUMAN_SEAT_CHAIR_SMOKING");
			break;
	}
	return iVar0;
}

Vector3 func_351(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1805.405f, -371.9168f, 160.4901f };
			break;
		case 1:
			vVar0 = { -1805.56f, -373.7274f, 160.3914f };
			break;
		case 2:
			vVar0 = { -1805.595f, -374.8352f, 160.3612f };
			break;
		case 3:
			vVar0 = { -1805.926f, -376.052f, 160.3409f };
			break;
		case 4:
			vVar0 = { -1804.244f, -372.0793f, 160.3452f };
			break;
	}
	return vVar0;
}

float func_352(int iParam0)
{
	float fVar0;
	switch (iParam0)
	{
		case 0:
			fVar0 = 132.3116f;
			break;
		case 1:
			fVar0 = 75.5789f;
			break;
		case 2:
			fVar0 = 58.7203f;
			break;
		case 3:
			fVar0 = 54.6217f;
			break;
		case 4:
			fVar0 = 119.06f;
			break;
	}
	return fVar0;
}

int func_353(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("WORLD_HUMAN_SMOKE");
			break;
		case 1:
			iVar0 = joaat("WORLD_HUMAN_STAND_WAITING");
			break;
		case 2:
			iVar0 = joaat("WORLD_HUMAN_STAND_WAITING");
			break;
		case 3:
			iVar0 = joaat("WORLD_HUMAN_STAND_WAITING");
			break;
		case 4:
			iVar0 = joaat("WORLD_HUMAN_SMOKE");
			break;
	}
	return iVar0;
}

Vector3 func_354(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1781.5f, -384.5139f, 156.9384f };
			break;
		case 1:
			vVar0 = { -1780.587f, -385.0345f, 156.7968f };
			break;
		case 2:
			vVar0 = { -1779.604f, -387.0019f, 156.7149f };
			break;
		case 3:
			vVar0 = { -1775.285f, -382.412f, 156.4505f };
			break;
	}
	return vVar0;
}

float func_355(int iParam0)
{
	float fVar0;
	switch (iParam0)
	{
		case 0:
			fVar0 = 160.8908f;
			break;
		case 1:
			fVar0 = 148.6998f;
			break;
		case 2:
			fVar0 = 100.2494f;
			break;
		case 3:
			fVar0 = 134.7941f;
			break;
	}
	return fVar0;
}

int func_356(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("WORLD_HUMAN_STAND_WAITING");
			break;
		case 1:
			iVar0 = joaat("WORLD_HUMAN_STAND_WAITING");
			break;
		case 2:
			iVar0 = joaat("WORLD_HUMAN_SMOKE");
			break;
		case 3:
			iVar0 = joaat("WORLD_HUMAN_SMOKE");
			break;
	}
	return iVar0;
}

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
	}
	return 3;
}

int func_371(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 3;
		case 4:
			return 3;
	}
	return 3;
}

int func_372(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 3;
	}
	return 3;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 1;
	}
	return 1;
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
	}
	return 1;
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 1;
		case 3:
			return 1;
	}
	return 1;
}

char* func_399()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_1_sittingspeech";
}

char* func_400()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_2_and_3_porchspeechwnewspaper";
}

char* func_401()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_4_and_5_hotelporchandsherrifofficespeech";
}

char* func_402()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_6_sittingspeech";
}

char* func_403()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_7_porchspeechwnewspaper";
}

Vector3 func_404()
{
	return -1807.839f, -374.7922f, 161.8656f;
}

Vector3 func_405()
{
	return 0f, 0f, 180f;
}

Vector3 func_406()
{
	return -1807.44f, -373.83f, 161.84f;
}

Vector3 func_407()
{
	return 0f, 0f, -97.5f;
}

Vector3 func_408()
{
	return -1781.675f, -387.235f, 158.3f;
}

Vector3 func_409()
{
	return 0f, 0f, -44.787f;
}

Vector3 func_410()
{
	return func_404();
}

Vector3 func_411()
{
	return func_405();
}

Vector3 func_412()
{
	return func_406();
}

Vector3 func_413()
{
	return func_407();
}

