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
	char* sLocal_17 = NULL;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25[5] = { 0, 0, 0, 0, 0 };
	int iLocal_31[5] = { 0, 0, 0, 0, 0 };
	int iLocal_37[5] = { 0, 0, 0, 0, 0 };
	int iLocal_43[5] = { 0, 0, 0, 0, 0 };
	int iLocal_49[5] = { 0, 0, 0, 0, 0 };
	char* sLocal_55[5] = { NULL, NULL, NULL, NULL, NULL };
	vector3 vLocal_61[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_77[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_93[5] = { 0f, 0f, 0f, 0f, 0f };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_23 = joaat("P_DETONATOR01X");
	iLocal_24 = joaat("P_CARCASSHANGMED01B");
	iLocal_100 = 20000;
	iLocal_103 = vScriptParam_0.x;
	iLocal_101 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_102 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_102)
		{
			iLocal_102 = 0;
			__LIB_1__::func_947(iLocal_103, &iLocal_101);
			switch (iLocal_101)
			{
				case 0:
					iLocal_101 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_103);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_103)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_103), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_103));
					iVar1 = __LIB_1__::func_885(iLocal_103);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_104 = (MISC::GET_GAME_TIMER() + iLocal_100);
					iLocal_101 = 2;
					break;
				case 2:
					if (func_11() || iLocal_104 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_103);
						iLocal_104 = (MISC::GET_GAME_TIMER() + iLocal_100);
						iLocal_101 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_103) || iLocal_104 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_103);
						iLocal_104 = (MISC::GET_GAME_TIMER() + iLocal_100);
						iLocal_101 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_103) || iLocal_104 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_103);
						iLocal_104 = (iLocal_100 + MISC::GET_GAME_TIMER());
						iLocal_101 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_103)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_103), 4) && !iLocal_104 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_103) || iLocal_104 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_103, 4);
								iLocal_104 = (iLocal_100 + MISC::GET_GAME_TIMER());
								iLocal_101 = 7;
							}
							Jump @802; //curOff = 470
							if (iLocal_104 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_103);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_806(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								func_27(iLocal_103);
								__LIB_10__::func_616(iLocal_103);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_101 = 8;
							}
							Jump @802; //curOff = 569
							__LIB_5__::func_251(iLocal_103);
							__LIB_0__::func_18();
							iLocal_101 = 9;
							Jump @802; //curOff = 586
							__LIB_1__::func_889(&Global_1898004);
							__LIB_10__::func_13(iLocal_103, &Global_1898004);
							iLocal_101 = 10;
							Jump @802; //curOff = 611
							__LIB_2__::func_749(iLocal_103);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_103, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_101 = 11;
							Jump @802; //curOff = 681
							if (func_38(iLocal_103))
							{
								iLocal_102 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_103);
							__LIB_1__::func_891(iLocal_103);
							__LIB_0__::func_24(iLocal_103, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_103 /*35*/].f_10);
							if (Global_1888801[iLocal_103 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_103 /*35*/].f_11);
							}
							Jump @802; //curOff = 783
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_103 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_103 /*35*/].f_12);
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
	iLocal_14 = Global_1888801[82 /*35*/].f_4;
	VOLUME::_0xB469CFD9E065EB99(iLocal_14, 22);
	iLocal_15 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Butcher - m_volGeneral Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_15, 2595.509f, 778.3701f, 87.90205f, 0f, 0f, 70f, 2.456799f, 2.667848f, 2.166918f);
	VOLUME::_0x39816F6F94F385AD(iLocal_15, 2593.104f, 779.3081f, 87.87495f, 0f, 0f, 70.00001f, 5.401831f, 2.666181f, 2.080325f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_15, 10082);
	iLocal_16 = POPULATION::_CREATE_POPZONE_FROM_VOLUME(iLocal_14);
	POPULATION::SET_POPZONE_POPULATION_SET(iLocal_16, joaat("BUT_MALES"));
	POPULATION::_0x7E6BC0B94F5928F0(iLocal_16, 10, 10);
	POPULATION::_0x08892122769770D5(iLocal_16, true);
	POPULATION::_0x0F1861101C9A9944(iLocal_16, true);
	iLocal_16 = POPULATION::_CREATE_POPZONE_FROM_VOLUME(iLocal_14);
	POPULATION::SET_POPZONE_POPULATION_SET(iLocal_16, joaat("BUT_FEMALES"));
	POPULATION::_0x7E6BC0B94F5928F0(iLocal_16, 2, 2);
	POPULATION::_0x08892122769770D5(iLocal_16, true);
	POPULATION::_0x0F1861101C9A9944(iLocal_16, true);
	iLocal_16 = POPULATION::_CREATE_POPZONE_FROM_VOLUME(iLocal_14);
	POPULATION::SET_POPZONE_POPULATION_SET(iLocal_16, joaat("ANIMALS_DOG_HUSKY"));
	POPULATION::_0x7E6BC0B94F5928F0(iLocal_16, 2, 2);
	POPULATION::_0x08892122769770D5(iLocal_16, true);
	POPULATION::_0x0F1861101C9A9944(iLocal_16, true);
	func_46();
	return true;
}

void func_14(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() == -1)
	{
		func_47();
		STREAMING::REQUEST_MODEL(iLocal_23, false);
		STREAMING::REQUEST_MODEL(iLocal_24, false);
		PED::_0xED9582B3DA8F02B4(5);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			STREAMING::REQUEST_MODEL(iLocal_49[iVar0], false);
			iVar0++;
		}
	}
}

int func_15(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		return func_48();
	}
	return 1;
}

void func_27(int iParam0)
{
	__LIB_3__::func_123(1074283306, 1);
}

bool func_38(int iParam0)
{
	func_58();
	return false;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_103, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_103, 4);
		__LIB_0__::func_25(iLocal_103, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_78(iLocal_103);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_103);
		__LIB_2__::func_819(iLocal_103);
		__LIB_2__::func_755(iLocal_103);
		if (!__LIB_2__::func_756(iLocal_103, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_46()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2711.161f, 710.3177f, 77.27374f, 0f, 0f, -151.2205f, 50.23434f, 27.58518f, 8.132094f, "Butcher Creek - m_volFarmerRegistration");
		iLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Butcher Creek - m_volFarmerThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_20, 2696.193f, 704.9335f, 76.68376f, 0f, 0f, 88.96565f, 4.466922f, 1.336465f, 4.423785f);
		VOLUME::_0x39816F6F94F385AD(iLocal_20, 2698.47f, 703.6447f, 76.68376f, 0f, 0f, -30.46352f, 4.936317f, 2.843117f, 4.423785f);
		VOLUME::_0x39816F6F94F385AD(iLocal_20, 2717.371f, 710.274f, 77.27374f, 0f, 0f, 178.9532f, 3.930448f, 4.35889f, 8.132094f);
		iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Butcher Creek - m_volFarmerRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_19, iLocal_20);
		VOLUME::_0xBCE668AAF83608BE(iLocal_19, 2711.161f, 710.3177f, 77.27374f, 0f, 0f, -151.2205f, 34.23434f, 22.58518f, 8.132094f);
		iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Butcher Creek - m_volFarmerWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_21, iLocal_19);
		VOLUME::_0xBCE668AAF83608BE(iLocal_21, 2711.161f, 710.3177f, 77.27374f, 0f, 0f, -151.2205f, 46.23434f, 26.58518f, 8.132094f);
		sLocal_17 = "BUTCHER_CREEK";
		LAW::_CREATE_GUARD_ZONE(sLocal_17);
		LAW::_0x8C598A930F471938(sLocal_17, iLocal_18);
		LAW::_0xA1B0E6301E2E02A6(sLocal_17, iLocal_20);
		LAW::_0x35815F372D43E1E5(sLocal_17, iLocal_19);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_17, iLocal_21);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_17, 2717.486f, 709.7006f, 79.6157f);
		LAW::_0xA8A74AA79FB67159(sLocal_17, iLocal_18);
	}
}

void func_47()
{
	vLocal_77[0 /*3*/] = { 2560.689f, 839.585f, 79.692f };
	vLocal_77[1 /*3*/] = { 2559.719f, 839.916f, 79.91f };
	vLocal_77[2 /*3*/] = { 2558.63f, 840.218f, 80.152f };
	vLocal_77[3 /*3*/] = { 2557.29f, 840.682f, 80.418f };
	vLocal_77[4 /*3*/] = { 2556.515f, 840.907f, 80.583f };
	vLocal_61[0 /*3*/] = { 2560.689f, 839.58f, 78.982f };
	vLocal_61[1 /*3*/] = { 2559.713f, 839.932f, 79.232f };
	vLocal_61[2 /*3*/] = { 2558.51f, 840.135f, 79.377f };
	vLocal_61[3 /*3*/] = { 2557.239f, 840.718f, 79.394f };
	vLocal_61[4 /*3*/] = { 2556.603f, 840.876f, 79.74f };
	fLocal_93[0] = 0.3f;
	fLocal_93[1] = 0.4f;
	fLocal_93[2] = 0.4f;
	fLocal_93[3] = 0.6f;
	fLocal_93[4] = 0.8f;
	iLocal_49[0] = joaat("A_C_RABBIT_01");
	iLocal_49[1] = joaat("A_C_COYOTE_01");
	iLocal_49[2] = joaat("A_C_COYOTE_01");
	iLocal_49[3] = joaat("A_C_RABBIT_01");
	iLocal_49[4] = joaat("A_C_RABBIT_01");
	sLocal_55[0] = "PD_Ex_Small_aged_carcass_Hvy";
	sLocal_55[1] = "PD_Small_aged_carcass_Hvy";
	sLocal_55[2] = "PD_Small_aged_carcass_Hvy";
	sLocal_55[3] = "PD_Ex_Small_aged_carcass_Hvy";
	sLocal_55[4] = "PD_Ex_Small_aged_carcass_Hvy";
}

int func_48()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bVar1 = true;
	switch (iLocal_22)
	{
		case 0:
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_23))
			{
				bVar1 = false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_24))
			{
				bVar1 = false;
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_49[iVar0]))
				{
					bVar1 = false;
				}
				iVar0++;
			}
			if (!bVar1)
			{
				return 0;
			}
			if (PED::_0x5C16855277819BBF() < 5)
			{
				return 0;
			}
			iLocal_22 = 1;
		case 1:
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_37[iVar0]))
				{
					iLocal_37[iVar0] = OBJECT::CREATE_OBJECT(iLocal_23, vLocal_77[iVar0 /*3*/], true, true, false, false, false);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_37[iVar0], false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_37[iVar0], true);
					ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_37[iVar0], false);
					ENTITY::SET_ENTITY_COLLISION(iLocal_37[iVar0], false, false);
					iLocal_43[iVar0] = OBJECT::CREATE_OBJECT(iLocal_24, vLocal_77[iVar0 /*3*/] - Vector(0.3f, 0f, 0f), true, true, false, false, false);
				}
				iVar0++;
			}
			iLocal_22 = 2;
		case 2:
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_25[iVar0]))
				{
					iLocal_25[iVar0] = __LIB_1__::func_545(iLocal_49[iVar0], vLocal_61[iVar0 /*3*/], 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					PED::_SET_PED_SCALE(iLocal_25[iVar0], 1f);
					ENTITY::SET_ENTITY_COORDS(iLocal_25[iVar0], vLocal_61[iVar0 /*3*/], false, false, true, true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_25[iVar0], true);
					return 0;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				__LIB_1__::func_864(iLocal_25[iVar0], 0, 0);
				iVar0++;
			}
			iLocal_22 = 3;
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_25[iVar0]))
				{
					return 0;
				}
				iVar0++;
			}
			iLocal_22 = 4;
			break;
		case 4:
			if ((MISC::GET_FRAME_COUNT() % 15) == 0)
			{
				if (iLocal_99 < 5)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_49[iLocal_99]);
					func_86(iLocal_99);
					iLocal_99++;
				}
			}
			if (iLocal_99 == 5)
			{
				iLocal_22 = 5;
			}
			break;
		case 5:
			bVar2 = true;
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_25[iVar0]) && !MISC::_0x5170DDA6D63ACAAA(iLocal_25[iVar0]))
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_25[iVar0]))
					{
						PED::APPLY_PED_DAMAGE_PACK(iLocal_25[iVar0], sLocal_55[iVar0], 0f, 1f);
						MISC::_0x674B90BE1115846D(iLocal_25[iVar0], 1);
					}
					else
					{
						bVar2 = false;
					}
				}
				iVar0++;
			}
			if (bVar2)
			{
				return 1;
			}
			return 0;
	}
	return 0;
}

void func_58()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if ((MISC::GET_FRAME_COUNT() % 30) != 0)
	{
		return;
	}
	iVar0 = __LIB_1__::func_334(679);
	iVar1 = __LIB_1__::func_334(680);
	iVar2 = __LIB_1__::func_334(681);
	if (__LIB_0__::func_272(iVar0, 0) && FLOCK::GET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 73) != 0.15f)
	{
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 73, 0.15f);
	}
	if (__LIB_0__::func_272(iVar1, 0) && FLOCK::GET_ANIMAL_TUNING_FLOAT_PARAM(iVar1, 73) != 0.15f)
	{
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar1, 73, 0.15f);
	}
	if (__LIB_0__::func_272(iVar2, 0) && FLOCK::GET_ANIMAL_TUNING_FLOAT_PARAM(iVar2, 73) != 0.15f)
	{
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar2, 73, 0.15f);
	}
}

void func_78(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() == -1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_25[iVar0]))
			{
				PED::DELETE_PED(&(iLocal_25[iVar0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_37[iVar0]))
			{
				ENTITY::DELETE_ENTITY(&(iLocal_37[iVar0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_43[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_43[iVar0]));
			}
			if (PHYSICS::DOES_ROPE_EXIST(iLocal_31[iVar0]))
			{
				PHYSICS::DELETE_ROPE(&(iLocal_31[iVar0]));
			}
			iVar0++;
		}
	}
	LAW::_REMOVE_GUARD_ZONE(sLocal_17);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_19))
	{
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_19);
	}
	__LIB_2__::func_759(0.775f, 0.2f, 0.025f, 0f);
}

int func_86(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_37[iParam0]))
	{
		if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_43[iParam0]))
		{
			OBJECT::_0xB6CBD40F8EA69E8A(iLocal_43[iParam0]);
			iVar9 = 33646;
			switch (iLocal_49[iParam0])
			{
				case joaat("A_C_COYOTE_01"):
					vVar6 = { 0f, -0.005f, -0.025f };
					vVar0 = { 0f, 90f, 0f };
					break;
				case joaat("A_C_RABBIT_01"):
					vVar6 = { -0.0125f, 0f, -0.025f };
					vVar0 = { 0f, 90f, 0f };
					break;
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(iLocal_43[iParam0], iLocal_25[iParam0], 4, PED::GET_PED_BONE_INDEX(iLocal_25[iParam0], iVar9), vVar3, vVar6, vVar0, -1f, 0, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
			iLocal_31[iParam0] = PHYSICS::_ADD_ROPE_2(vLocal_77[iParam0 /*3*/], 0f, 0f, 0f, fLocal_93[iParam0], 1, false, 1, -1f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_25[iParam0], false);
			PHYSICS::_0x462FF2A432733A44(iLocal_31[iParam0], iLocal_37[iParam0], iLocal_43[iParam0], 0f, 0f, 0f, 0f, 0f, 0f, 0, "p_carcassHangMED_Bone2");
			PHYSICS::_0x3C6490D940FF5D0B(iLocal_31[iParam0], 0, 0, fLocal_93[iParam0], 1);
			AUDIO::_0xF092B6030D6FD49C(iLocal_31[iParam0], "ROPE_SETTINGS_DEFAULT");
			PHYSICS::_0x7A54D82227A139DB(&(iLocal_31[iParam0]), 1);
			PHYSICS::_0x76BAD9D538BCA1AA(iLocal_31[iParam0], 0f);
			PHYSICS::_0xB40EA9E0D2E2F7F3(iLocal_31[iParam0], 1f);
			PHYSICS::_0xDEDE679ED29DD4E7(iLocal_31[iParam0], 1);
			PHYSICS::_0xF1EA2A881EB7F2CD(iLocal_31[iParam0], 1);
			PHYSICS::_0x522FA3F490E2F7AC(iLocal_31[iParam0], 1, 1);
			AUDIO::_0x2651DDC0EA269073(iLocal_31[iParam0], 1f);
			PED::SET_PED_TO_RAGDOLL(iLocal_25[iParam0], 1000, 60000, 0, false, true, false);
			return 1;
		}
	}
	return 0;
}

