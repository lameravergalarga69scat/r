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
	struct<154> Local_73 = { 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_227 = 20000;
	iLocal_230 = vScriptParam_0.x;
	iLocal_228 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_229 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_229)
		{
			iLocal_229 = 0;
			__LIB_1__::func_947(iLocal_230, &iLocal_228);
			switch (iLocal_228)
			{
				case 0:
					iLocal_228 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_230);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_230)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_230), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_230));
					iVar1 = __LIB_1__::func_885(iLocal_230);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_231 = (MISC::GET_GAME_TIMER() + iLocal_227);
					iLocal_228 = 2;
					break;
				case 2:
					if (__LIB_0__::func_0() || iLocal_231 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_230);
						iLocal_231 = (MISC::GET_GAME_TIMER() + iLocal_227);
						iLocal_228 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_230) || iLocal_231 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_230);
						iLocal_231 = (MISC::GET_GAME_TIMER() + iLocal_227);
						iLocal_228 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_230) || iLocal_231 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_230);
						iLocal_231 = (iLocal_227 + MISC::GET_GAME_TIMER());
						iLocal_228 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_230)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_230), 4) && !iLocal_231 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_230) || iLocal_231 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_230, 4);
								iLocal_231 = (iLocal_227 + MISC::GET_GAME_TIMER());
								iLocal_228 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_231 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_230);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_806(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_230);
								__LIB_1__::func_886(iLocal_230);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_228 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_230);
							__LIB_0__::func_18();
							iLocal_228 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_2__::func_747(iLocal_230, &Global_1898004);
							iLocal_228 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_230);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_230, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_228 = 11;
							Jump @788; //curOff = 667
							if (__LIB_4__::func_806(iLocal_230))
							{
								iLocal_229 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_230);
							__LIB_1__::func_891(iLocal_230);
							__LIB_0__::func_24(iLocal_230, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_230 /*35*/].f_10);
							if (Global_1888801[iLocal_230 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_230 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_230 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_230 /*35*/].f_12);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!func_42(iVar0))
						{
							iVar0++;
							BUILTIN::WAIT(0);
						}
						SCRIPTS::TERMINATE_THIS_THREAD();
					}
					default:
						break;
			}
		}
	}
}

void func_1()
{
	int iVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		iVar0 = 0;
		while (!func_42(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

int func_15(int iParam0)
{
	iParam0 = iParam0;
	return __LIB_7__::func_431(&uLocal_14, 8, &uLocal_14, __LIB_14__::func_523(), 0, func_47(), 0, 0, 0);
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_230, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_230, 4);
		__LIB_0__::func_25(iLocal_230, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_74(iLocal_230);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_230);
		__LIB_2__::func_819(iLocal_230);
		__LIB_2__::func_755(iLocal_230);
		if (!__LIB_2__::func_756(iLocal_230, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

char* func_47()
{
	return "shack_beechersc1";
}

void func_74(int iParam0)
{
	func_129(&uLocal_14);
	iParam0 = iParam0;
}

void func_129(var uParam0)
{
	func_169(uParam0);
}

void func_169(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_6(uParam0->f_5) && (__LIB_0__::func_702(uParam0->f_5) || __LIB_1__::func_44(uParam0->f_5)))
	{
		__LIB_1__::func_559(uParam0->f_5, 0, 2);
	}
	if (__LIB_0__::func_1(Global_1935630, 128))
	{
		__LIB_0__::func_8(&Global_1935630, 128);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_7__::func_458(&(Local_73.f_99[iVar0 /*12*/]));
		iVar0++;
	}
	__LIB_9__::func_710(&(Local_73.f_146));
	__LIB_0__::func_172(Local_73.f_153);
}

