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
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_73 = 20000;
	iLocal_76 = vScriptParam_0.x;
	iLocal_74 = vScriptParam_0.z;
	__LIB_7__::func_430();
	__LIB_0__::func_11();
	iLocal_75 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_75)
		{
			iLocal_75 = 0;
			__LIB_1__::func_947(iLocal_76, &iLocal_74);
			switch (iLocal_74)
			{
				case 0:
					iLocal_74 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_76);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_76)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_76), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_76));
					iVar1 = __LIB_1__::func_885(iLocal_76);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_77 = (MISC::GET_GAME_TIMER() + iLocal_73);
					iLocal_74 = 2;
					break;
				case 2:
					if (__LIB_0__::func_0() || iLocal_77 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_76);
						iLocal_77 = (MISC::GET_GAME_TIMER() + iLocal_73);
						iLocal_74 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_76) || iLocal_77 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_76);
						iLocal_77 = (MISC::GET_GAME_TIMER() + iLocal_73);
						iLocal_74 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_76) || iLocal_77 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_76);
						iLocal_77 = (iLocal_73 + MISC::GET_GAME_TIMER());
						iLocal_74 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_76)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_76), 4) && !iLocal_77 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_76) || iLocal_77 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_76, 4);
								iLocal_77 = (iLocal_73 + MISC::GET_GAME_TIMER());
								iLocal_74 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_77 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_0__::func_11(iLocal_76);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_806(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_76);
								__LIB_1__::func_886(iLocal_76);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_74 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_76);
							__LIB_0__::func_18();
							iLocal_74 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_2__::func_747(iLocal_76, &Global_1898004);
							iLocal_74 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_76);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_76, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_74 = 11;
							Jump @788; //curOff = 667
							if (__LIB_4__::func_806(iLocal_76))
							{
								iLocal_75 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_76);
							__LIB_1__::func_891(iLocal_76);
							__LIB_0__::func_24(iLocal_76, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_76 /*35*/].f_10);
							if (Global_1888801[iLocal_76 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_76 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							__LIB_7__::func_428(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_76 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_76 /*35*/].f_12);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!__LIB_7__::func_428(iVar0))
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

int func_15(int iParam0)
{
	int iVar0;
	var uVar1;
	float fVar2;
	bool bVar3;
	iVar0 = __LIB_1__::func_293(__LIB_3__::func_574(8192), 0, 3, __LIB_3__::func_575(8192));
	func_49(&iVar0, &uVar1);
	bVar3 = __LIB_6__::func_624(8192, &fVar2);
	if (!__LIB_0__::func_1(uVar1, 8))
	{
		if (!__LIB_0__::func_1(uVar1, 4) || (bVar3 && (__LIB_3__::func_992() - fVar2) >= 24f))
		{
			return func_55(&uLocal_14, 8192, &uLocal_14, __LIB_14__::func_588(), 0, __LIB_14__::func_594(), 0, 0, 0);
		}
	}
	return 1;
}

int func_49(int iParam0, var uParam1)
{
	if (__LIB_0__::func_6(*iParam0))
	{
		*uParam1 = __LIB_0__::func_895(*iParam0);
		if (!__LIB_0__::func_1(*uParam1, 2))
		{
			__LIB_1__::func_581(uParam1, 2);
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_55(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	vector3 vVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(*uParam2, false))
	{
		return 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(__LIB_0__::func_559(iParam3)))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, __LIB_0__::func_559(iParam3), true, 0))
	{
		return 0;
	}
	if (bParam8)
	{
		vVar1 = { __LIB_6__::func_619(iParam1) };
		if (!__LIB_0__::func_86(vVar1))
		{
			if (__LIB_1__::func_989(vVar1, 1, 776, 0))
			{
				return 0;
			}
		}
	}
	if ((bParam6 && __LIB_0__::func_296(128, 0, 1)) && !iParam1 == 64)
	{
		return 0;
	}
	if (iParam7 && __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 1, 1, 1))
	{
		return 0;
	}
	uParam0->f_1 = iParam1;
	uParam0->f_5 = __LIB_1__::func_293(__LIB_3__::func_574(iParam1), 0, 3, __LIB_3__::func_575(iParam1));
	func_49(&(uParam0->f_5), &(uParam0->f_3));
	if (!__LIB_0__::func_1(uParam0->f_3, 4))
	{
		iVar0 = 4;
	}
	else if (!__LIB_0__::func_1(uParam0->f_3, 8))
	{
		iVar0 = 8;
	}
	else if (!__LIB_0__::func_1(uParam0->f_3, 16))
	{
		iVar0 = 16;
	}
	else if (!__LIB_0__::func_1(uParam0->f_3, 32))
	{
		iVar0 = 32;
	}
	else if (!__LIB_0__::func_1(uParam0->f_3, 64))
	{
		iVar0 = 64;
	}
	if (iParam1 == 32768)
	{
		if (!__LIB_7__::func_429(uParam0))
		{
			return 0;
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_3, iVar0))
	{
		if (__LIB_0__::func_1(uParam0->f_3, 2))
		{
			if (!SCRIPTS::IS_THREAD_ACTIVE(*uParam2, false))
			{
				SCRIPTS::REQUEST_SCRIPT(sParam5);
				if (SCRIPTS::HAS_SCRIPT_LOADED(sParam5))
				{
					uParam0->f_52 = { __LIB_6__::func_620(iParam1) };
					uParam0->f_5 = __LIB_1__::func_293(__LIB_3__::func_574(iParam1), 0, 3, __LIB_3__::func_575(iParam1));
					*uParam2 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(sParam5, uParam0, 59, 1024);
					SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam5);
					return 1;
				}
			}
		}
	}
	return 0;
}

