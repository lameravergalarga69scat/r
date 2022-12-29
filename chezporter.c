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
	int iLocal_21 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_17 = 20000;
	iLocal_20 = vScriptParam_0.x;
	iLocal_18 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_19 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_19)
		{
			iLocal_19 = 0;
			__LIB_1__::func_947(iLocal_20, &iLocal_18);
			switch (iLocal_18)
			{
				case 0:
					iLocal_18 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_20);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_20)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_20), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_20));
					iVar1 = __LIB_1__::func_885(iLocal_20);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_21 = (MISC::GET_GAME_TIMER() + iLocal_17);
					iLocal_18 = 2;
					break;
				case 2:
					if (func_11() || iLocal_21 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_20);
						iLocal_21 = (MISC::GET_GAME_TIMER() + iLocal_17);
						iLocal_18 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_20) || iLocal_21 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_20);
						iLocal_21 = (MISC::GET_GAME_TIMER() + iLocal_17);
						iLocal_18 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_20) || iLocal_21 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_20);
						iLocal_21 = (iLocal_17 + MISC::GET_GAME_TIMER());
						iLocal_18 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_20)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_20), 4) && !iLocal_21 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_20) || iLocal_21 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_20, 4);
								iLocal_21 = (iLocal_17 + MISC::GET_GAME_TIMER());
								iLocal_18 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_21 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_20);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_765(2057, 0))
								{
									__LIB_0__::func_11();
								}
								func_25();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_20);
								__LIB_1__::func_886(iLocal_20);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_18 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_20);
							__LIB_0__::func_18();
							iLocal_18 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_5__::func_252(iLocal_20, &Global_1898004);
							iLocal_18 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_20);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_20, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_18 = 11;
							Jump @788; //curOff = 667
							if (func_38(iLocal_20))
							{
								iLocal_19 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_20);
							__LIB_1__::func_891(iLocal_20);
							__LIB_0__::func_24(iLocal_20, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_20 /*35*/].f_10);
							if (Global_1888801[iLocal_20 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_20 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_20 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_20 /*35*/].f_12);
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

bool func_11()
{
	iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER(-380.2749f, 1922.471f, 295.698f, 0f, 0f, 0f, 45f, 45f, 60f);
	return true;
}

void func_25()
{
	__LIB_6__::func_662(3, 1);
	__LIB_6__::func_663(3, iLocal_14);
	__LIB_6__::func_669(3, 0, joaat("DOOR_CHE_CABIN_FRONT"));
	__LIB_6__::func_669(3, 1, joaat("DOOR_CHE_CABIN_SIDE"));
	iLocal_15 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-410.2579f, 1722.699f, 212.61f, 0f, 0f, 103.7064f, 121.5021f, 67.59155f, 24.51105f, "m_volAmbRestriction");
	POPULATION::_0xB56D41A694E42E86(iLocal_15, 192, 16384, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_15, 192, 16384, 0, -1, -1, 0);
}

bool func_38(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	func_56();
	func_57();
	func_58();
	return false;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_20, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_20, 4);
		__LIB_0__::func_25(iLocal_20, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_78(iLocal_20);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_20);
		__LIB_2__::func_819(iLocal_20);
		__LIB_2__::func_755(iLocal_20);
		if (!__LIB_2__::func_756(iLocal_20, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_56()
{
	if (__LIB_8__::func_343(1))
	{
		return;
	}
	if ((((__LIB_6__::func_665(794) && __LIB_6__::func_665(795)) && __LIB_6__::func_665(796)) && __LIB_6__::func_665(797)) && __LIB_6__::func_665(798))
	{
		func_98(1);
	}
	else
	{
		func_99(1);
	}
}

void func_57()
{
	var uVar0;
	var uVar1;
	var uVar2;
	if (__LIB_0__::func_768(3, 32))
	{
		return;
	}
	if ((!func_102(&uVar0, func_101()) || !func_102(&uVar1, func_103())) || !func_102(&uVar2, func_104()))
	{
		return;
	}
	if (((__LIB_0__::func_770(3, 1) || __LIB_0__::func_770(3, 2)) || (__LIB_0__::func_770(3, 134217728) && __LIB_6__::func_668() != 565221344)) || (__LIB_0__::func_770(3, 16) && !__LIB_0__::func_113()))
	{
		func_108(&uVar0, "che_cabin_int_abandoned");
		func_108(&uVar0, "che_cabin_int_roof_intact");
		func_109(&uVar0, "che_cabin_int_roof_broken");
		func_109(&uVar0, "che_maincabin_occupied");
		func_110(&uVar0);
		func_109(&uVar1, "che_shack_occupied");
		func_109(&uVar1, "che_shack_outlaw");
		func_110(&uVar1);
		__LIB_5__::func_440("hmrb_chez_occupied");
		__LIB_5__::func_441("hmrb_chez_abandoned");
	}
	else
	{
		func_108(&uVar0, "che_cabin_int_roof_intact");
		func_108(&uVar0, "che_maincabin_occupied");
		func_109(&uVar0, "che_cabin_int_roof_broken");
		func_109(&uVar0, "che_cabin_int_abandoned");
		func_113(&uVar0);
		func_108(&uVar1, "che_shack_occupied");
		func_109(&uVar1, "che_shack_outlaw");
		func_113(&uVar1);
		__LIB_5__::func_440("hmrb_chez_abandoned");
		__LIB_5__::func_441("hmrb_chez_occupied");
	}
	__LIB_6__::func_661(3, 32);
}

void func_58()
{
	if (__LIB_0__::func_768(3, 64))
	{
		return;
	}
	if (((__LIB_0__::func_770(3, 1) || __LIB_0__::func_770(3, 2)) || (__LIB_0__::func_770(3, 134217728) && __LIB_6__::func_668() != 565221344)) || (__LIB_0__::func_770(3, 16) && !__LIB_0__::func_113()))
	{
		__LIB_0__::func_401(-518858513);
		GRAPHICS::_0xBFCB17895BB99E4E(MISC::GET_HASH_KEY("Che_01_main"), 0);
	}
	else
	{
		__LIB_0__::func_401(-518858513);
		if (__LIB_19__::func_66(3))
		{
			GRAPHICS::_0xBFCB17895BB99E4E(MISC::GET_HASH_KEY("Che_01_main"), 1);
		}
		else
		{
			GRAPHICS::_0xBFCB17895BB99E4E(MISC::GET_HASH_KEY("Che_01_main"), 0);
		}
	}
	__LIB_6__::func_661(3, 64);
}

void func_78(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_6__::func_660(3, 64);
	__LIB_6__::func_660(3, 32);
}

void func_98(int iParam0)
{
	if (__LIB_8__::func_343(iParam0))
	{
		return;
	}
	iLocal_16 = (iLocal_16 || iParam0);
}

void func_99(int iParam0)
{
	if (!__LIB_8__::func_343(iParam0))
	{
		return;
	}
	iLocal_16 = (iLocal_16 - (iLocal_16 && iParam0));
}

Vector3 func_101()
{
	return -399.4595f, 1729.324f, 219.2795f;
}

bool func_102(var uParam0, vector3 vParam1)
{
	*uParam0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam1);
	if (!INTERIOR::IS_VALID_INTERIOR(*uParam0))
	{
		return false;
	}
	return true;
}

Vector3 func_103()
{
	return -423.5326f, 1736.137f, 217.2976f;
}

Vector3 func_104()
{
	return -414.985f, 1752.683f, 217.6035f;
}

void func_108(var uParam0, char* sParam1)
{
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(*uParam0, sParam1))
	{
		return;
	}
	INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(*uParam0, sParam1, 0);
}

void func_109(var uParam0, char* sParam1)
{
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(*uParam0, sParam1))
	{
		return;
	}
	INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(*uParam0, sParam1, true);
}

void func_110(var uParam0)
{
	INTERIOR::_0x2533F2AB0EB9C6F9(*uParam0, 1);
	INTERIOR::_0xFE2B3D5500B1B2E4(*uParam0, 1);
}

void func_113(var uParam0)
{
	INTERIOR::_0x2533F2AB0EB9C6F9(*uParam0, 0);
	INTERIOR::_0xFE2B3D5500B1B2E4(*uParam0, 0);
}

