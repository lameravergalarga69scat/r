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
	struct<14> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_29[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_38 = 1;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	struct<216> Local_46 = { 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8000, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	struct<9> Local_270[14];
	struct<9> Local_397[3];
	struct<9> Local_425[3];
	var uLocal_453 = 10;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	vector3 vLocal_466[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_479 = 0;
	var uLocal_480[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_495[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_506 = 0;
	int iLocal_507 = 0;
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	bool bLocal_510 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_509 = vScriptParam_0.x;
	iLocal_507 = vScriptParam_0.z;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 54, true);
	}
	func_2();
	while (__LIB_9__::func_579())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_508)
		{
			iLocal_508 = MISC::GET_GAME_TIMER() + 1000;
			iVar0 = iLocal_507;
			__LIB_1__::func_947(iLocal_509, &iLocal_507);
			switch (iLocal_507)
			{
				case 0:
					if (!Global_1879534.f_1)
					{
						bLocal_510 = !__LIB_9__::func_648(iLocal_509, 1);
						if (bLocal_510)
						{
						}
						iLocal_507 = 1;
					}
					break;
				case 1:
					iLocal_507 = 2;
					break;
				case 2:
					if (func_6(bLocal_510))
					{
						iLocal_507 = 4;
					}
					break;
				case 4:
					iLocal_507 = 6;
					break;
				case 6:
					if (__LIB_9__::func_618(iLocal_509, -1, -1, 0))
					{
						__LIB_0__::func_24(iLocal_509, 4);
						iLocal_507 = 7;
					}
					break;
				case 7:
					iLocal_507 = 8;
					break;
				case 8:
					__LIB_1__::func_886(iLocal_509);
					iLocal_507 = 9;
					break;
				case 9:
					if (iLocal_509 != 5)
					{
						__LIB_1__::func_889(&Global_1898004);
						func_11(iLocal_509, &Global_1898004, bLocal_510);
					}
					__LIB_0__::func_24(iLocal_509, 8);
					iLocal_507 = 10;
					break;
				case 10:
					if (!bLocal_510)
					{
						func_12();
						if (__LIB_1__::func_890(32))
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(500);
							}
							__LIB_0__::func_22(32);
						}
						iLocal_507 = 3;
					}
					else
					{
						iLocal_507 = 3;
					}
					break;
				case 3:
					if (!STREAMING::_0xCF45DF50C7775F2A())
					{
						if (__LIB_0__::func_0(bLocal_510))
						{
							iLocal_507 = 11;
						}
					}
					break;
				case 11:
					if (!bLocal_510)
					{
						if (!func_16(iLocal_509))
						{
							iLocal_508 = 0;
						}
					}
					__LIB_6__::func_414(&Global_1898004, iLocal_509);
					break;
				case 12:
					func_18();
					break;
			}
			if (iVar0 != iLocal_507)
			{
				iLocal_508 = 0;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_18();
}

void func_2()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_18();
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		else
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
	}
}

bool func_6(bool bParam0)
{
	func_42();
	Local_46.f_215 = Local_15.f_1;
	return true;
}

void func_11(int iParam0, var uParam1, bool bParam2)
{
	__LIB_2__::func_766(uParam1, Local_46.f_215, 1);
}

void func_12()
{
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Solomons_Folly", true, true);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	Local_46.f_189 = 1;
	func_51();
	func_52(&Local_46, 129, &sLocal_29, 30);
	__LIB_3__::func_486(&(Local_46.f_155), 1);
	__LIB_2__::func_52(&(Local_46.f_155), 0);
	__LIB_2__::func_715(&(Local_46.f_155), 1);
	__LIB_3__::func_498(&(Local_46.f_155), 1);
	__LIB_3__::func_387(&(Local_46.f_155), 1);
	__LIB_2__::func_906(&(Local_46.f_155), 67);
}

bool func_16(int iParam0)
{
	switch (Local_46)
	{
		case 0:
			if (__LIB_9__::func_656(&Local_46, &uLocal_38, &uLocal_453, "", 0))
			{
				__LIB_1__::func_649(&Local_46, 1);
			}
			break;
		case 1:
			if (__LIB_9__::func_663(&Local_46, &Local_270, joaat("REL_GANG_SMUGGLERS"), iLocal_40, iLocal_41))
			{
				Local_46.f_197 = 0;
				__LIB_1__::func_649(&Local_46, 5);
				func_62(0);
			}
			break;
		case 5:
			__LIB_9__::func_619(&Local_46, &Local_270, iLocal_40, iLocal_41);
			func_64();
			func_65();
			func_66();
			__LIB_1__::func_649(&Local_46, 6);
			func_67();
			if (!PATHFIND::_0xDE0EA444735C1368(Local_15.f_10))
			{
				PATHFIND::_0x19C7567D2F2287D6(Local_15.f_10, 7);
			}
			break;
		case 6:
			if (__LIB_9__::func_633(&Local_46))
			{
				__LIB_1__::func_649(&Local_46, 7);
			}
			break;
		case 7:
			func_69();
			break;
	}
	if (!__LIB_9__::func_581(&Local_46, 4) && Local_46 >= 6)
	{
		__LIB_9__::func_657(&Local_46, &Local_270);
		func_72();
	}
	__LIB_9__::func_679(&Local_46);
	__LIB_0__::func_11();
	return false;
}

void func_18()
{
	__LIB_0__::func_11(bLocal_510);
	__LIB_0__::func_11(bLocal_510);
	if (__LIB_0__::func_2() == -1)
	{
		if (iLocal_509 != 5)
		{
			__LIB_2__::func_755(iLocal_509);
		}
	}
	if (iLocal_509 != 5)
	{
		__LIB_2__::func_819(iLocal_509);
		__LIB_0__::func_25(iLocal_509, 4);
		__LIB_0__::func_25(iLocal_509, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
	}
	__LIB_9__::func_582(0);
	if (__LIB_0__::func_61() == iLocal_509)
	{
		__LIB_6__::func_409(0);
	}
	if (__LIB_1__::func_25(__LIB_4__::func_6(iLocal_509), 1))
	{
		__LIB_1__::func_408(__LIB_9__::func_583(iLocal_509), 1, 0);
	}
	func_100(iLocal_509);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_42()
{
	Local_15 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0xBCE668AAF83608BE(Local_15, -5423.8f, -3668.253f, -17.5291f, 0f, 0f, -9.875844f, 8.833942f, 7.997889f, 8.122389f);
	VOLUME::_0xBCE668AAF83608BE(Local_15, -5418.933f, -3642.076f, -20.55835f, 0f, 0f, 6.350378f, 12.54178f, 8.9406f, 8.122389f);
	VOLUME::_0xBCE668AAF83608BE(Local_15, -5395.247f, -3660.497f, -25.16899f, 0f, 0f, -166.6848f, 10.04855f, 13.1694f, 8.122389f);
	VOLUME::_0xBCE668AAF83608BE(Local_15, -5384.786f, -3664.757f, -23.68033f, 0f, 0f, 120.9166f, 4.67333f, 2.132036f, 7.794301f);
	VOLUME::_0xBCE668AAF83608BE(Local_15, -5386.069f, -3669.387f, -19.69477f, 0f, 0f, 17.58104f, 3.646398f, 1.121197f, 3.314872f);
	VOLUME::_0xBCE668AAF83608BE(Local_15, -5427.598f, -3641.722f, -21.05931f, 0f, 0f, -14.00166f, 3.625973f, 6.939974f, 2.244514f);
	VOLUME::_0xBCE668AAF83608BE(Local_15, -5412.587f, -3656.424f, -15.22183f, 0f, 0f, 12.18876f, 15.94129f, 17.36843f, 8.345574f);
	Local_15.f_1 = VOLUME::_CREATE_VOLUME_CYLINDER(-5408.369f, -3654.218f, 1.014788f, 0f, 0f, 9.594064f, 47.49536f, 41.66373f, 25.29945f);
	Local_15.f_2 = VOLUME::_CREATE_VOLUME_BOX(-5386.138f, -3654.802f, -21.90395f, 0f, 0f, 27.64716f, 3.695316f, 5.003654f, 3.304657f);
	Local_15.f_3 = VOLUME::_CREATE_VOLUME_BOX(-5430.066f, -3654.371f, -22.18322f, 0f, 0f, -178.9428f, 2.017605f, 2.182692f, 2.563342f);
	Local_15.f_4 = VOLUME::_CREATE_VOLUME_BOX(-5406.504f, -3674.372f, -21.46872f, 0f, 0f, 0f, 16.16496f, 3.987037f, 7.623422f);
	Local_15.f_5 = VOLUME::_CREATE_VOLUME_BOX(-5400.8f, -3642.59f, -21.98592f, 0f, 0f, 51.39919f, 4.393769f, 10.5104f, 5.344145f);
	Local_15.f_6 = VOLUME::_CREATE_VOLUME_BOX(-5395.869f, -3673.922f, -24.07569f, -33.01761f, 0f, 0f, 2.037403f, 4.93454f, 1.61025f);
	Local_15.f_7 = VOLUME::_CREATE_VOLUME_BOX(-5395.51f, -3667.56f, -24.29023f, 0f, 0f, 0f, 5.276103f, 3.713584f, 3.126756f);
	Local_15.f_8 = VOLUME::_CREATE_VOLUME_BOX(-5408.982f, -3664.778f, -23.42198f, 0f, 0f, 9.823705f, 6.624327f, 16.80174f, 2.988009f);
	Local_15.f_9 = VOLUME::_CREATE_VOLUME_BOX(-5407.167f, -3648.37f, -23.42198f, 0f, 0f, 144.0713f, 6.624327f, 15.98342f, 2.988009f);
	Local_15.f_10 = VOLUME::_CREATE_VOLUME_BOX(-5457.955f, -3690.833f, -13.84232f, 0f, 0f, -25.0406f, 17.89915f, 23.20003f, 13.68517f);
	Local_15.f_11 = VOLUME::_CREATE_VOLUME_BOX(-5419.143f, -3653.494f, -21.61982f, 0f, 0f, 0f, 1.321262f, 3.940397f, 3.160098f);
	Local_15.f_12 = VOLUME::_CREATE_VOLUME_BOX(-5432.573f, -3654.257f, -21.57059f, 0f, 0f, 0f, 7.091287f, 9.69798f, 3.264143f);
	Local_15.f_13 = VOLUME::_CREATE_VOLUME_BOX(-5424.123f, -3653.681f, -20.97491f, 0f, 0f, 0f, 5.151814f, 11.39314f, 4.628274f);
}

void func_51()
{
	int iVar0;
	Local_46.f_199 = 14;
	Local_46.f_201 = Local_46.f_199;
	iLocal_40 = 0;
	iLocal_41 = 13;
	iVar0 = iLocal_40;
	while (iVar0 <= iLocal_41)
	{
		Local_270[iVar0 /*9*/] = joaat("G_M_M_UNIBANDITOS_01");
		iVar0++;
	}
	__LIB_9__::func_584(&uLocal_453, Local_270[0 /*9*/]);
	__LIB_9__::func_584(&uLocal_453, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	func_128();
}

void func_52(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	bool bVar0;
	__LIB_9__::func_585(128);
	iParam0->f_205 = iParam1;
	bVar0 = __LIB_0__::func_51(&(iParam0->f_5), 1048576);
	iParam0->f_202 = { __LIB_9__::func_606(iParam0->f_205, bVar0) };
	iParam0->f_187 = MISC::GET_RANDOM_INT_IN_RANGE(7502, 10000);
	if (iParam0->f_205 == 16)
	{
		__LIB_0__::func_568(iParam0->f_202, 120f, 0);
	}
	else
	{
		__LIB_0__::func_568(iParam0->f_202, 80f, 0);
	}
	__LIB_9__::func_607(iParam0, 1);
	func_134(&(iParam0->f_155));
	__LIB_2__::func_290(&(iParam0->f_155));
	__LIB_3__::func_986(&(iParam0->f_155));
	__LIB_2__::func_104(&(iParam0->f_155), 1);
	__LIB_3__::func_407(&(iParam0->f_155), BUILTIN::TO_FLOAT(iParam3));
	__LIB_2__::func_906(&(iParam0->f_155), 50);
	__LIB_1__::func_975(&(iParam0->f_155), 8f);
	__LIB_9__::func_586(sParam2);
	__LIB_9__::func_628(iParam0);
	if (!__LIB_1__::func_200(65))
	{
		__LIB_0__::func_11(iParam0);
	}
	__LIB_9__::func_629(iParam0);
	__LIB_9__::func_634(iParam0);
	__LIB_0__::func_928(&(iParam0->f_38), Global_35, "ARTHUR", 0);
}

void func_62(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_46.f_199 - 1))
	{
		if (__LIB_2__::func_1(Local_270[iVar0 /*9*/].f_5, 0, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_270[iVar0 /*9*/].f_5, bParam0);
			PED::SET_PED_CONFIG_FLAG(Local_270[iVar0 /*9*/].f_5, 130, bParam0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_270[iVar0 /*9*/].f_5, 7, 0, 1);
		}
		iVar0++;
	}
}

void func_64()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_46.f_199 - 1))
	{
		if (__LIB_2__::func_1(Local_270[iVar0 /*9*/].f_5, 0, 1))
		{
			__LIB_2__::func_22(&(Local_46.f_155), Local_270[iVar0 /*9*/].f_5);
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_270[iVar0 /*9*/].f_5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_270[iVar0 /*9*/].f_5, 57, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_270[iVar0 /*9*/].f_5, 58, true);
			PED::SET_PED_HEARING_RANGE(Local_270[iVar0 /*9*/].f_5, 10f);
			PED::SET_PED_COMBAT_MOVEMENT(Local_270[iVar0 /*9*/].f_5, 2);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_270[iVar0 /*9*/].f_5, true, false), 5f, 0, 0, 0);
			PED::SET_PED_COMBAT_RANGE(Local_270[iVar0 /*9*/].f_5, 1);
			switch (iVar0)
			{
				case 0:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_270[iVar0 /*9*/].f_5, true, false), 5f, 0, 0, 0);
					break;
				case 1:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_270[iVar0 /*9*/].f_5, true, false), 10f, 0, 0, 0);
					break;
				case 9:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_270[iVar0 /*9*/].f_5, true, false), 10f, 0, 0, 0);
					break;
				case 10:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_270[iVar0 /*9*/].f_5, true, false), 2f, 0, 0, 0);
					break;
				case 11:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_270[iVar0 /*9*/].f_5, true, false), 2f, 0, 0, 0);
					break;
				case 13:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_270[iVar0 /*9*/].f_5, true, false), 1f, 0, 0, 0);
					break;
			}
		}
		iVar0++;
	}
}

void func_65()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = joaat("WORLD_HUMAN_GUARD_SCOUT");
	iVar2 = joaat("WORLD_HUMAN_GUARD_MILITARY");
	iVar0 = 0;
	while (iVar0 <= (Local_46.f_199 - 1))
	{
		if (__LIB_2__::func_1(Local_270[iVar0 /*9*/].f_5, 0, 1))
		{
			__LIB_4__::func_7(Local_270[iVar0 /*9*/].f_5, joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			PED::SET_PED_CONFIG_FLAG(Local_270[iVar0 /*9*/].f_5, 113, true);
			switch (iVar0)
			{
				case 0:
					uLocal_480[iVar0] = TASK::CREATE_SCENARIO_POINT(iVar1, Local_270[iVar0 /*9*/].f_1, Local_270[iVar0 /*9*/].f_4, 0, 0, 1);
					TASK::_TASK_USE_SCENARIO_POINT(Local_270[iVar0 /*9*/].f_5, uLocal_480[iVar0], 0, -1, false, true, 0, false, -1f, false);
					PED::_0xF1C03A5352243A30(Local_270[iVar0 /*9*/].f_5);
					break;
				case 1:
					uLocal_480[iVar0] = TASK::CREATE_SCENARIO_POINT(iVar2, Local_270[iVar0 /*9*/].f_1, Local_270[iVar0 /*9*/].f_4, 0, 0, 1);
					TASK::_TASK_USE_SCENARIO_POINT(Local_270[iVar0 /*9*/].f_5, uLocal_480[iVar0], 0, -1, false, true, 0, false, -1f, false);
					PED::_0xF1C03A5352243A30(Local_270[iVar0 /*9*/].f_5);
					break;
				case 2:
					uLocal_480[iVar0] = TASK::CREATE_SCENARIO_POINT(iVar1, Local_270[iVar0 /*9*/].f_1, Local_270[iVar0 /*9*/].f_4, 0, -1f, 1);
					TASK::_TASK_USE_SCENARIO_POINT(Local_270[iVar0 /*9*/].f_5, uLocal_480[iVar0], 0, -1, false, true, 0, false, -1f, false);
					PED::_0xF1C03A5352243A30(Local_270[iVar0 /*9*/].f_5);
					break;
				case 7:
					uLocal_480[iVar0] = TASK::CREATE_SCENARIO_POINT(iVar2, Local_270[iVar0 /*9*/].f_1, Local_270[iVar0 /*9*/].f_4, 0, -1f, 1);
					TASK::TASK_WANDER_IN_VOLUME(Local_270[iVar0 /*9*/].f_5, Local_15.f_9, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
					break;
				case 12:
					TASK::TASK_WANDER_IN_VOLUME(Local_270[iVar0 /*9*/].f_5, Local_15.f_8, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
					break;
			}
		}
		iVar0++;
	}
}

void func_66()
{
	sLocal_29[0] = "GANG_TAUNT_GEN";
	sLocal_29[1] = "GANG_TAUNT_GEN";
	sLocal_29[2] = "GANG_TAUNT_GEN";
	sLocal_29[3] = "TAUNT_GEN_MALE";
	sLocal_29[4] = "TAUNT_GEN_MALE";
	sLocal_29[5] = "TAUNT_GEN_MALE";
	sLocal_29[6] = "TAUNT_GEN_MALE";
	sLocal_29[7] = "TAUNT_GEN_MALE";
}

void func_67()
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_495[0]))
	{
		uLocal_495[0] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_TAKE_MONEY_PILE_TABLE"), -5397.3f, -3668.15f, -25.97f, 0f, 2f, 0, 0);
		TASK::_SET_SCENARIO_POINT_FLAG(uLocal_495[0], 45, true);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_495[1]))
	{
		uLocal_495[1] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_TAKE_MONEY_PILE_TABLE"), -5397.47f, -3668.32f, -25.97f, 0f, 2f, 0, 0);
		TASK::_SET_SCENARIO_POINT_FLAG(uLocal_495[1], 45, true);
	}
}

void func_69()
{
	float fVar0;
	switch (Local_46.f_3)
	{
		case 0:
			if (func_155())
			{
				if (__LIB_2__::func_284(5, 100))
				{
					func_157();
				}
				else
				{
					__LIB_9__::func_587(&Local_46, 1);
					func_159();
				}
				AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_START");
			}
			break;
		case 1:
			if (!func_160(1))
			{
				if (func_161())
				{
					__LIB_2__::func_303(Local_46.f_192, 0, "FINAL_WARNING", "", -1f, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_46.f_192, Global_35, -1, false, 1);
					__LIB_9__::func_587(&Local_46, 2);
					__LIB_1__::func_148(&(vLocal_466[0 /*3*/]));
				}
			}
			else if (func_164())
			{
				func_157();
			}
			break;
		case 2:
			if (func_165())
			{
				func_166(1);
				__LIB_2__::func_303(Local_46.f_192, 0, "TAUNT_GEN_LOCATION", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_157();
			}
			if (!TASK::IS_PED_STILL(Global_35))
			{
				if (!PED::IS_PED_FACING_PED(Global_35, Local_46.f_192, 50f))
				{
					__LIB_1__::func_148(&(vLocal_466[0 /*3*/]));
				}
			}
			fVar0 = __LIB_0__::func_665(Local_46.f_192, Global_35, 1, 1);
			if (((((fVar0 < 35f && __LIB_9__::func_638(&(vLocal_466[0 /*3*/])) > 5f) || __LIB_0__::func_665(Local_270[0 /*9*/].f_5, Global_35, 1, 1) < 10f) || __LIB_0__::func_665(Local_270[1 /*9*/].f_5, Global_35, 1, 1) < 10f) || __LIB_0__::func_665(Local_270[2 /*9*/].f_5, Global_35, 1, 1) < 10f) || __LIB_0__::func_665(Local_270[7 /*9*/].f_5, Global_35, 1, 1) < 10f)
			{
				func_157();
			}
			break;
		case 4:
			break;
		case 5:
			Local_46.f_198 = __LIB_9__::func_608(&Local_270, Local_46.f_199, Local_46.f_199);
			func_170();
			func_171();
			func_172();
			func_173();
			if (!func_160(2))
			{
				if (__LIB_9__::func_638(&(vLocal_466[3 /*3*/])) > 20f)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_ACTION");
					func_166(2);
				}
			}
			if (Local_46.f_198 == 0 && func_174())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
				__LIB_9__::func_587(&Local_46, 7);
			}
			break;
		case 7:
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Solomons_Folly", false, true);
			__LIB_9__::func_587(&Local_46, 8);
			break;
		case 8:
			__LIB_9__::func_587(&Local_46, 9);
			break;
		case 9:
			if (func_175(&Local_46, &Local_270, 85, 1, 1))
			{
				PERSISTENCE::_0x9D16896F0DBE78A2(-5397.26f, -3668.29f, -25.97f, 4f);
				__LIB_9__::func_587(&Local_46, 10);
			}
			break;
		case 10:
			break;
	}
	if (Local_46.f_3 <= 2)
	{
		if (func_165())
		{
			func_166(1);
			__LIB_9__::func_587(&Local_46, 1);
		}
	}
	if (Local_46.f_3 <= 5)
	{
		func_176(&Local_270, &Local_46);
	}
	if (!__LIB_9__::func_581(&Local_46, 5))
	{
		if (func_177(&Local_46, &Local_270, Local_46.f_199, 0, 0))
		{
			func_157();
		}
	}
	else if (Local_46.f_3 > 8)
	{
		__LIB_9__::func_692(&Local_270, &Local_46, 100, 1084227584 /* Float: 5f */);
	}
}

void func_72()
{
	int iVar0;
	if (__LIB_0__::func_51(&(Local_46.f_5), 131072))
	{
		return;
	}
	if (!__LIB_0__::func_51(&(Local_46.f_5), 65536))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_46.f_199)
	{
		switch (iVar0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 7:
			case 9:
				if (__LIB_2__::func_1(Local_270[iVar0 /*9*/].f_5, 0, 1))
				{
					__LIB_9__::func_609(&(Local_270[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), -662251075);
				}
				break;
		}
		iVar0++;
	}
	__LIB_0__::func_7(&(Local_46.f_5), 131072);
}

void func_100(int iParam0)
{
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Solomons_Folly", false, true);
	if (PATHFIND::_0xDE0EA444735C1368(Local_15.f_10))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_15.f_10);
	}
	__LIB_9__::func_680(&Local_270, &Local_46, &uLocal_453, SCRIPTS::GET_ID_OF_THIS_THREAD(), "");
}

void func_128()
{
	int iVar0;
	struct<4> Var1;
	iVar0 = 0;
	while (iVar0 < Local_46.f_199)
	{
		Var1 = { func_242(0, iVar0) };
		Local_270[iVar0 /*9*/].f_1 = { Var1 };
		Local_270[iVar0 /*9*/].f_4 = Var1.f_3;
		iVar0++;
	}
}

void func_134(int iParam0)
{
	__LIB_1__::func_981(iParam0, (__LIB_1__::func_361(iParam0) - 6f));
	__LIB_2__::func_179(iParam0, 1);
}

bool func_155()
{
	int iVar0;
	if (!func_266())
	{
		return false;
	}
	Local_46.f_190 = func_267(&Local_270, &Local_46, 0, 0, 0, 13);
	if (Local_46.f_190 < 0 || PED::_0x7F9B9791D4CB71F6(Local_270[Local_46.f_190 /*9*/].f_5, Global_35, 1, 0) != 1)
	{
		return false;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_2), Global_36, false) < 25f)
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) != 1)
		{
			Local_46.f_190 = 0;
		}
		else
		{
			Local_46.f_190 = 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_3), Global_36, false) < 25f)
	{
		Local_46.f_190 = 5;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_4), Global_36, false) < 25f)
	{
		Local_46.f_190 = 2;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_5), Global_36, false) < 25f)
	{
		Local_46.f_190 = 7;
	}
	Local_46.f_192 = Local_270[Local_46.f_190 /*9*/].f_5;
	MISC::_0x870708A6E147A9AD(Local_46.f_192, "", 24f, 0, 8, 0, 0, 0, 0, -1);
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15, true, 0))
	{
		if (__LIB_2__::func_284(5, 100))
		{
			__LIB_2__::func_303(Local_46.f_192, Global_35, "ITS_MALE_EXTREME_RECOGNIZE", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_303(Local_46.f_192, 0, "HEADS_UP_HIDEOUT", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_9__::func_640(&(vLocal_466[0 /*3*/]), 0);
		}
	}
	__LIB_2__::func_357(Local_46.f_192, Global_36, 3, 1, 1);
	if (Local_46.f_190 == 7)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -5406.77f, -3649.18f, -23.09f, Global_35, 1.5f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
		__LIB_1__::func_474(Local_46.f_192, &iVar0, 0, 0, 1, 1);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
		TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_46.f_192, true, false), 30f, 0, false, false, false, false);
		__LIB_1__::func_474(Local_46.f_192, &iVar0, 0, 0, 1, 1);
	}
	__LIB_9__::func_594(Local_46.f_205);
	return true;
}

void func_157()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_46.f_199)
	{
		if (func_274(iVar0))
		{
		}
		iVar0++;
	}
	__LIB_9__::func_587(&Local_46, 5);
	__LIB_1__::func_148(&(vLocal_466[0 /*3*/]));
	__LIB_1__::func_148(&(vLocal_466[3 /*3*/]));
	func_62(1);
}

void func_159()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_46.f_199 - 1))
	{
		if (__LIB_2__::func_1(Local_270[iVar0 /*9*/].f_5, 0, 1))
		{
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_270[iVar0 /*9*/].f_5, 3, 0, 1);
		}
		iVar0++;
	}
}

bool func_160(int iParam0)
{
	return __LIB_0__::func_27(iLocal_479, iParam0);
}

bool func_161()
{
	float fVar0;
	if (func_160(1))
	{
		return false;
	}
	if (__LIB_0__::func_393(Global_35, Local_15, 0, 1))
	{
		if (func_277())
		{
			return true;
		}
	}
	else
	{
		fVar0 = __LIB_0__::func_665(Local_46.f_192, Global_35, 1, 1);
		if (fVar0 < 10f || __LIB_9__::func_658(&(vLocal_466[0 /*3*/]), 10f))
		{
			return true;
		}
		if (__LIB_9__::func_658(&(vLocal_466[0 /*3*/]), 10f))
		{
			if ((fVar0 < 10f && PED::IS_PED_FACING_PED(Global_35, Local_46.f_192, 80f)) && ENTITY::IS_ENTITY_ON_SCREEN(Local_46.f_192))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_164()
{
	int iVar0;
	int iVar1;
	switch (iLocal_464)
	{
		case 0:
			if (__LIB_2__::func_1(Local_46.f_192, 0, 1))
			{
				__LIB_2__::func_45(Local_46.f_192, Global_35, -1);
				__LIB_9__::func_640(&(vLocal_466[1 /*3*/]), 1);
				func_282(1);
			}
			break;
		case 1:
			if (PED::IS_PED_FACING_PED(Local_46.f_192, Global_35, 60f) || __LIB_9__::func_658(&(vLocal_466[1 /*3*/]), 2f))
			{
				__LIB_1__::func_148(&(vLocal_466[1 /*3*/]));
				TASK::TASK_AIM_GUN_AT_ENTITY(Local_46.f_192, Global_35, -1, false, 1);
				__LIB_2__::func_303(Local_46.f_192, 0, "HEADS_UP_THREATEN", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_282(2);
			}
			break;
		case 2:
			iVar1 = (Local_46.f_199 - 1);
			iVar0 = 0;
			while (iVar0 <= iVar1)
			{
				__LIB_9__::func_668(&Local_46, &Local_270, iVar0, "", "", 0, 1, 0, 0);
				iVar0++;
			}
			if (__LIB_9__::func_658(&(vLocal_466[1 /*3*/]), 2f))
			{
				func_282(3);
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_165()
{
	if (!__LIB_1__::func_205(Global_35, Local_15, 1, 0))
	{
		return false;
	}
	Local_46.f_190 = func_267(&Local_270, &Local_46, 0, 0, 0, 13);
	if (Local_46.f_190 < 0)
	{
		return false;
	}
	Local_46.f_192 = Local_270[Local_46.f_190 /*9*/].f_5;
	return true;
}

void func_166(int iParam0)
{
	__LIB_1__::func_336(&iLocal_479, iParam0);
}

void func_170()
{
	int iVar0;
	int iVar1;
	switch (iLocal_45)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_11, true, 0))
			{
				if (__LIB_2__::func_1(Local_270[13 /*9*/].f_5, 0, 1))
				{
					PED::_0xFC3DB99C8144CD81(Local_270[13 /*9*/].f_5, Local_15, 0, 0, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_270[13 /*9*/].f_5, 2);
					PED::SET_PED_COMBAT_RANGE(Local_270[13 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_270[13 /*9*/].f_5, 50, true);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GRAPPLE(0, Global_35, 0, 1, 3f, 1, 0);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					__LIB_1__::func_474(Local_270[13 /*9*/].f_5, &iVar0, 0, 0, 1, 1);
					__LIB_9__::func_609(&(Local_270[13 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					iLocal_45 = 3;
				}
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_12, true, 0))
			{
				if (__LIB_2__::func_1(Local_270[13 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[13 /*9*/].f_5, -5429.34f, -3652.71f, -23.15f, 1f, 0, 0, 0);
					iLocal_45++;
				}
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_12, true, 0))
			{
				if (__LIB_2__::func_1(Local_270[13 /*9*/].f_5, 0, 1))
				{
					PED::_0xFC3DB99C8144CD81(Local_270[13 /*9*/].f_5, Local_15, 0, 0, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_270[13 /*9*/].f_5, 2);
					PED::SET_PED_COMBAT_RANGE(Local_270[13 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_270[13 /*9*/].f_5, 50, true);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_GRAPPLE(0, Global_35, 0, 1, 3f, 1, 0);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					__LIB_1__::func_474(Local_270[13 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
					__LIB_9__::func_609(&(Local_270[13 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					iLocal_45 = 3;
				}
			}
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_171()
{
	if (!func_160(4))
	{
		if (Local_46.f_198 < 7 && __LIB_0__::func_266(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_15), 30f, 1, 1))
		{
			if (func_289(1))
			{
				func_166(4);
			}
		}
	}
	if (!func_160(8))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_13, true, 0))
		{
			if (func_289(2))
			{
				func_166(8);
			}
		}
	}
}

void func_172()
{
	int iVar0;
	switch (iLocal_42)
	{
		case 0:
			if (Local_46.f_198 < 4)
			{
				iVar0 = 0;
				while (iVar0 < Local_46.f_199)
				{
					if (__LIB_2__::func_1(Local_270[iVar0 /*9*/].f_5, 0, 1))
					{
						PED::_0xFC3DB99C8144CD81(Local_270[iVar0 /*9*/].f_5, Local_15, 0, 0, 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_270[iVar0 /*9*/].f_5, 2);
						PED::SET_PED_COMBAT_RANGE(Local_270[iVar0 /*9*/].f_5, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_270[iVar0 /*9*/].f_5, 50, true);
						__LIB_9__::func_609(&(Local_270[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					}
					iVar0++;
				}
				iLocal_42++;
			}
			break;
		case 1:
			break;
	}
}

int func_173()
{
	switch (iLocal_465)
	{
		case 0:
			if (__LIB_0__::func_266(Global_35, -5395.82f, -3677.65f, -23.12f, 10f, 1, 1))
			{
				if (__LIB_2__::func_1(Local_270[10 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[10 /*9*/].f_5, -5395.82f, -3677.65f, -23.12f, 8f, 0, 0, 0);
				}
				func_290(1);
			}
			break;
		case 1:
			if (__LIB_0__::func_393(Global_35, Local_15.f_7, 0, 1))
			{
				if (__LIB_2__::func_1(Local_270[5 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[5 /*9*/].f_5, -5396.11f, -3673.34f, -22.1f, 8f, 0, 0, 0);
				}
				if (__LIB_2__::func_1(Local_270[7 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[7 /*9*/].f_5, -5407.52f, -3667.78f, -23.09f, 8f, 0, 0, 0);
				}
				if (__LIB_2__::func_1(Local_270[0 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_270[0 /*9*/].f_5, true, false), 15f, 0, 0, 0);
				}
				if (__LIB_2__::func_1(Local_270[1 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_270[1 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_270[1 /*9*/].f_5, true, false), 15f, 0, 0, 0);
				}
				func_290(3);
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

bool func_174()
{
	int iVar0;
	int iVar1;
	if (!func_160(4) && !func_160(8))
	{
		return true;
	}
	if (func_160(4))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (__LIB_2__::func_1(Local_397[iVar0 /*9*/].f_5, 0, 1))
			{
				return false;
			}
			iVar0++;
		}
	}
	if (func_160(8))
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (__LIB_2__::func_1(Local_425[iVar1 /*9*/].f_5, 0, 1))
			{
				return false;
			}
			iVar1++;
		}
	}
	return true;
}

bool func_175(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!__LIB_9__::func_641(iParam1, iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_5), 256))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		__LIB_9__::func_626(iParam0);
		__LIB_9__::func_622(iParam0);
		if (bParam4)
		{
			func_294(iParam0->f_205, bParam3, 0);
		}
		__LIB_9__::func_607(iParam0, 0);
		__LIB_0__::func_7(&(iParam0->f_5), 256);
		__LIB_0__::func_7(&(iParam0->f_5), 8);
	}
	return true;
}

void func_176(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_9__::func_620(iParam1->f_205) && !__LIB_0__::func_1(Global_1935630, 32))
	{
		iVar0 = 0;
		while (iVar0 < iParam1->f_199)
		{
			if (ENTITY::DOES_ENTITY_EXIST((iParam0[iVar0 /*9*/])->f_5))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((iParam0[iVar0 /*9*/])->f_5, Global_35, 1, 1))
				{
					func_296(iParam1->f_205);
					return;
				}
			}
			iVar0++;
		}
	}
}

bool func_177(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (iParam4 == 0)
	{
		iParam4 = (iParam2 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (__LIB_19__::func_63((iParam1[iVar0 /*9*/])->f_5, 0, &(iParam0->f_155), &(iParam0->f_183), 0, 0) && !PED::GET_PED_CONFIG_FLAG((iParam1[iVar0 /*9*/])->f_5, 9, false))
		{
			iParam0->f_192 = (iParam1[iVar0 /*9*/])->f_5;
			iParam0->f_190 = iVar0;
			return true;
		}
		else if (__LIB_9__::func_623(iParam0, iParam1[iVar0 /*9*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

struct<4> func_242(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_354(iParam0, iParam1) };
	Var0.f_3 = func_355(iParam0, iParam1);
	return Var0;
}

bool func_266()
{
	if (((MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_2), Global_36, false) > 25f && MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_3), Global_36, false) > 25f) && MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_4), Global_36, false) > 25f) && MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_5), Global_36, false) > 25f)
	{
		return false;
	}
	return true;
}

int func_267(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam5 == 0)
	{
		if (iParam1->f_199 > 0)
		{
			iParam5 = (iParam1->f_199 - 1);
		}
		else
		{
			iParam5 = (*iParam0 - 1);
		}
	}
	iVar1 = __LIB_0__::func_259((iParam5 - iParam4) + 1, 5);
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam1->f_191 == -1)
	{
		iParam1->f_191 = iParam4;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iParam1->f_191 > ((iParam4 + iVar2) - 1) || iParam1->f_191 < iParam4)
		{
			iParam1->f_191 = iParam4;
		}
		if (!__LIB_1__::func_376((iParam0[iParam1->f_191 /*9*/])->f_5) || bParam3)
		{
			if (func_364((iParam0[iParam1->f_191 /*9*/])->f_5, &(iParam1->f_155), &(iParam1->f_183), 0))
			{
				if (bParam2)
				{
					__LIB_9__::func_609(iParam0[iParam1->f_191 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
				}
				return iParam1->f_191;
			}
		}
		else if (__LIB_1__::func_376((iParam0[iParam1->f_191 /*9*/])->f_5))
		{
			if (__LIB_0__::func_665((iParam0[iParam1->f_191 /*9*/])->f_5, Global_35, 0, 1) < 2f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY((iParam0[iParam1->f_191 /*9*/])->f_5, Global_35, 17))
			{
				if (bParam2)
				{
					__LIB_9__::func_609(iParam0[iParam1->f_191 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
				}
				return iParam1->f_191;
			}
		}
		iParam1->f_191++;
		iVar0++;
	}
	return -1;
}

bool func_274(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 1:
			__LIB_9__::func_642(&(Local_270[iVar0 /*9*/]), 0, 1, 1, 0, 0);
			break;
		case 2:
			__LIB_9__::func_642(&(Local_270[iVar0 /*9*/]), 0, 1, 1, 0, 0);
			break;
		case 10:
			__LIB_9__::func_642(&(Local_270[iVar0 /*9*/]), 0, 1, 0, 0, 0);
			__LIB_9__::func_609(&(Local_270[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), -1034486097);
			break;
		case 11:
			__LIB_9__::func_642(&(Local_270[iVar0 /*9*/]), 0, 1, 0, 0, 0);
			__LIB_9__::func_609(&(Local_270[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), -1034486097);
			break;
		case 13:
			__LIB_9__::func_642(&(Local_270[iVar0 /*9*/]), 0, 1, 0, 0, 0);
			__LIB_9__::func_609(&(Local_270[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), -1034486097);
			break;
		default:
			__LIB_9__::func_642(&(Local_270[iVar0 /*9*/]), 0, 1, 1, 0, 0);
			break;
	}
	return true;
}

bool func_277()
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_2), Global_36, false) < 25f)
	{
		Local_46.f_190 = func_267(&Local_270, &Local_46, 0, 0, 0, 1);
	}
	else
	{
		Local_46.f_190 = func_267(&Local_270, &Local_46, 0, 0, 2, 7);
	}
	if (Local_46.f_190 < 0)
	{
		return false;
	}
	else
	{
		Local_46.f_192 = Local_270[Local_46.f_190 /*9*/].f_5;
		__LIB_9__::func_637(&(Local_270[Local_46.f_190 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
		return true;
	}
	return false;
}

void func_282(int iParam0)
{
	iLocal_464 = iParam0;
}

bool func_289(int iParam0)
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case 1:
			switch (iLocal_43)
			{
				case 0:
					func_378(iParam0);
					iLocal_43++;
					break;
				case 1:
					if (__LIB_9__::func_663(&Local_46, &Local_397, joaat("REL_GANG_SMUGGLERS"), 0, 2))
					{
						iVar0 = 0;
						while (iVar0 <= 2)
						{
							if (__LIB_2__::func_1(Local_397[iVar0 /*9*/].f_5, 0, 1))
							{
								__LIB_4__::func_7(Local_397[iVar0 /*9*/].f_5, joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
								PED::SET_PED_COMBAT_RANGE(Local_397[iVar0 /*9*/].f_5, 1);
								PED::_0xFC3DB99C8144CD81(Local_397[iVar0 /*9*/].f_5, Local_15, 0, 0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_397[iVar0 /*9*/].f_5, 2);
								if (iVar0 == 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&iVar1);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -5419.52f, -3629.53f, -23.08f, Global_35, 2.5f, 1, 3f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
									TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
									TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
									__LIB_1__::func_474(Local_397[iVar0 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
								}
								if (iVar0 == 1)
								{
									TASK::OPEN_SEQUENCE_TASK(&iVar1);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -5395.62f, -3634.29f, -23.17f, Global_35, 2.5f, 1, 3f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
									TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
									TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
									__LIB_1__::func_474(Local_397[iVar0 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
								}
								if (iVar0 == 2)
								{
									TASK::OPEN_SEQUENCE_TASK(&iVar1);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -5437.61f, -3656.87f, -23.08f, Global_35, 2.5f, 1, 3f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
									TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
									TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
									__LIB_1__::func_474(Local_397[iVar0 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
								}
								__LIB_9__::func_637(&(Local_397[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
							}
							iVar0++;
						}
						Local_46.f_197 = 0;
						__LIB_9__::func_619(&Local_46, &Local_397, 0, 2);
						iLocal_43++;
					}
					break;
				case 2:
					return true;
			}
			break;
		case 2:
			switch (iLocal_44)
			{
				case 0:
					func_378(iParam0);
					iLocal_44++;
					break;
				case 1:
					if (__LIB_9__::func_663(&Local_46, &Local_425, joaat("REL_GANG_SMUGGLERS"), 0, 2))
					{
						iVar0 = 0;
						while (iVar0 <= 2)
						{
							if (__LIB_2__::func_1(Local_425[iVar0 /*9*/].f_5, 0, 1))
							{
								__LIB_4__::func_7(Local_425[iVar0 /*9*/].f_5, joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
								PED::SET_PED_COMBAT_RANGE(Local_425[iVar0 /*9*/].f_5, 1);
								PED::_0xFC3DB99C8144CD81(Local_425[iVar0 /*9*/].f_5, Local_15, 0, 0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_425[iVar0 /*9*/].f_5, 2);
								if (iVar0 == 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&iVar1);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -5391.7f, -3639.86f, -23.05f, Global_35, 2.5f, 1, 3f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
									TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
									TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
									__LIB_1__::func_474(Local_425[iVar0 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
								}
								if (iVar0 == 1)
								{
									TASK::OPEN_SEQUENCE_TASK(&iVar1);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -5404.16f, -3673.67f, -23.22f, Global_35, 2.5f, 1, 3f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
									TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
									TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
									__LIB_1__::func_474(Local_425[iVar0 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
								}
								if (iVar0 == 2)
								{
									TASK::OPEN_SEQUENCE_TASK(&iVar1);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -5410.3f, -3657.31f, -23f, Global_35, 2.5f, 1, 3f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
									TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
									__LIB_1__::func_474(Local_425[iVar0 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
								}
								__LIB_9__::func_637(&(Local_425[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
							}
							iVar0++;
						}
						Local_46.f_197 = 0;
						__LIB_9__::func_619(&Local_46, &Local_425, 0, 2);
						iLocal_44++;
					}
					break;
				case 2:
					return true;
			}
			break;
	}
	return false;
}

void func_290(int iParam0)
{
	iLocal_465 = iParam0;
}

void func_294(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = __LIB_4__::func_6(iParam0);
	if (!__LIB_0__::func_6(iVar0))
	{
		return;
	}
	func_382(iVar0, 1, bParam1, 0, 1);
	__LIB_9__::func_615(iParam0, -1);
	if (bParam2)
	{
		if (__LIB_1__::func_268(iVar0) >= 1)
		{
			__LIB_9__::func_616(iVar0, (__LIB_1__::func_268(iVar0) - 1));
		}
	}
	else
	{
		__LIB_0__::func_703(0, 12);
		iVar1 = __LIB_9__::func_602(iParam0);
		if (__LIB_1__::func_268(iVar0) <= 1)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("GANG_HIDEOUT_COMPLETED")), 1);
		}
		if (iVar1 != -1)
		{
			iVar2 = Global_40.f_9571[iVar1 /*10*/].f_1;
			if (iVar2 == 2 || iVar2 == 1)
			{
				Global_1392050[iVar1 /*14*/].f_1 |= 2;
			}
			iVar3 = 0;
			iVar4 = 12;
			iVar5 = 0;
			if (iVar1 >= 0 && iVar1 < 6)
			{
				Global_1393237.f_192[iVar1] = (__LIB_0__::func_485() / 1000);
			}
			switch (iVar1)
			{
				case 2:
					iVar3 = 0;
					iVar4 = 25;
					iVar5 = 0;
					break;
				case 0:
					if (iParam0 == 36)
					{
						Global_1392050[iVar1 /*14*/].f_1 |= 4;
					}
					else if (iParam0 == 16)
					{
						Global_1392050[iVar1 /*14*/].f_1 |= 8;
					}
					Global_1393237.f_192[iVar1] = (Global_1393237.f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 1:
					Global_1393237.f_192[iVar1] = (Global_1393237.f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 4:
					break;
			}
			__LIB_9__::func_645(__LIB_2__::func_116(iParam0, 1), 350f, 0);
			__LIB_2__::func_304(0, iVar1, iVar5, iVar4, iVar3);
		}
	}
}

void func_296(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_4__::func_6(iParam0);
	if (!__LIB_0__::func_6(iVar0))
	{
		return;
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	__LIB_7__::func_766(iParam0, 57, __LIB_2__::func_116(iParam0, 1), 0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	if (__LIB_0__::func_746(iVar0) != 4)
	{
		__LIB_0__::func_7(&Global_1935630, 32);
	}
	if (__LIB_1__::func_25(iVar0, 1))
	{
		__LIB_6__::func_778(iVar0);
	}
	iVar1 = __LIB_9__::func_602(iParam0);
	if (iVar1 != -1)
	{
		__LIB_2__::func_304(0, iVar1, 0, 12, 0);
	}
	__LIB_9__::func_603(iParam0);
	__LIB_1__::func_298(iVar0, 1);
	__LIB_1__::func_821(iVar0, 1, __LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1));
	func_399(iParam0);
	__LIB_0__::func_703(0, 12);
}

Vector3 func_354(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -5385.52f, -3657.889f, -23.1497f;
				case 1:
					return -5386.656f, -3651.767f, -23.1457f;
				case 2:
					return -5396.362f, -3677.849f, -23.0987f;
				case 3:
					return -5416.736f, -3640.599f, -23.1302f;
				case 4:
					return -5418.919f, -3639.119f, -23.1376f;
				case 5:
					return -5429.881f, -3653.051f, -23.1469f;
				case 6:
					return -5424.132f, -3654.641f, -23.1408f;
				case 7:
					return -5414.442f, -3650.556f, -23.0791f;
				case 8:
					return -5421.378f, -3657.292f, -19.808f;
				case 9:
					return -5423.621f, -3666.773f, -23.0848f;
				case 10:
					return -5395.485f, -3666.275f, -25.9572f;
				case 11:
					return -5394.703f, -3664.925f, -25.9572f;
				case 12:
					return -5413.796f, -3660.514f, -23.0701f;
				case 13:
					return -5420.302f, -3649.772f, -23.0512f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -5472.842f, -3704.349f, -16.4545f;
				case 1:
					return -5472.161f, -3704.065f, -16.2798f;
				case 2:
					return -5471.186f, -3703.455f, -15.9832f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -5413.406f, -3625.618f, -23.1326f;
				case 1:
					return -5419.229f, -3627.149f, -23.0343f;
				case 2:
					return -5423.638f, -3627.996f, -22.8691f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_355(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -43.2f;
				case 1:
					return -74.16f;
				case 2:
					return 128.0534f;
				case 3:
					return 99.36f;
				case 4:
					return 198.72f;
				case 5:
					return 92.88f;
				case 6:
					return -24.48f;
				case 7:
					return -80.64f;
				case 8:
					return 56.16f;
				case 9:
					return 98.528f;
				case 10:
					return -180f;
				case 11:
					return -185.76f;
				case 12:
					return 71.7035f;
				case 13:
					return 185.5236f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 71.7035f;
				case 1:
					return 71.7035f;
				case 2:
					return 71.7035f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -102.96f;
				case 1:
					return -115.92f;
				case 2:
					return -109.44f;
			}
			break;
	}
	return 0f;
}

bool func_364(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		__LIB_2__::func_270(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && __LIB_1__::func_328(uParam1, iParam0)) && __LIB_2__::func_832(uParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_196(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (__LIB_1__::func_331(uParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && __LIB_1__::func_328(uParam1, iParam0)) && __LIB_2__::func_832(uParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_196(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam2 = 2;
								__LIB_2__::func_196(iParam0, uParam1, *uParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_196(iParam0, uParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_196(iParam0, uParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (__LIB_10__::func_428(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 4;
						__LIB_2__::func_196(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (__LIB_10__::func_429(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 256;
						__LIB_2__::func_196(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (__LIB_6__::func_913(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 131072;
				__LIB_2__::func_196(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (__LIB_4__::func_138(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 262144;
				__LIB_2__::func_196(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

void func_378(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				switch (iVar0)
				{
					case 0:
					case 1:
					case 2:
						Local_397[iVar0 /*9*/] = joaat("G_M_M_UNIBANDITOS_01");
						__LIB_9__::func_588(&(Local_397[iVar0 /*9*/].f_7), 8, 0);
						break;
				}
				func_483(&(Local_397[iVar0 /*9*/].f_1), &(Local_397[iVar0 /*9*/].f_4), 1, iVar0);
				iVar0++;
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				switch (iVar0)
				{
					case 0:
					case 1:
					case 2:
						Local_425[iVar0 /*9*/] = joaat("G_M_M_UNIBANDITOS_01");
						__LIB_9__::func_588(&(Local_425[iVar0 /*9*/].f_7), 8, 0);
						break;
				}
				func_483(&(Local_425[iVar0 /*9*/].f_1), &(Local_425[iVar0 /*9*/].f_4), 2, iVar0);
				iVar0++;
			}
			break;
	}
}

void func_382(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_746(iParam0) == 4)
	{
		__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
		if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
		{
			if (bParam3)
			{
				__LIB_1__::func_242(iParam0, 6);
			}
			else
			{
				__LIB_1__::func_242(iParam0, 5);
			}
			__LIB_1__::func_470(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		__LIB_0__::func_267(1);
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	bVar1 = __LIB_0__::func_2() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		__LIB_1__::func_421(0, 2);
		if (!bVar1 && bParam1)
		{
			__LIB_1__::func_755();
		}
	}
	else
	{
		__LIB_1__::func_142(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		__LIB_0__::func_870(iParam0);
	}
	else
	{
		Var2 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!__LIB_0__::func_13(32768))
		{
			Var4 = { __LIB_0__::func_14(joaat("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && __LIB_0__::func_291(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (__LIB_0__::func_76(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((__LIB_0__::func_76(iParam0) != 95 && __LIB_0__::func_76(iParam0) != 82) && !__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		__LIB_8__::func_366(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		__LIB_8__::func_367(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		iVar9 = __LIB_1__::func_145(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			__LIB_1__::func_629(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = __LIB_0__::func_308(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_300(1);
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				__LIB_0__::func_747(45, 0, 1);
				break;
			case 8:
				iVar10 = __LIB_0__::func_310(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (__LIB_0__::func_311(__LIB_0__::func_76(iParam0)))
				{
					__LIB_1__::func_715(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 2:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 6:
				__LIB_0__::func_747(__LIB_0__::func_312(__LIB_0__::func_872(iParam0)), 0, 1);
				break;
			case 5:
				__LIB_0__::func_747(120, 0, 1);
				break;
		}
	}
	__LIB_1__::func_144(iParam0, 1);
	__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
	__LIB_1__::func_470(iParam0);
	if ((!__LIB_0__::func_291(iParam0) == 0 && bParam1) && __LIB_0__::func_2() == -1)
	{
		iVar12 = __LIB_1__::func_24(iParam0);
		if (iVar12 != -1)
		{
			__LIB_0__::func_867(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = __LIB_1__::func_194();
			if (iVar12 != -1)
			{
				__LIB_0__::func_867(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (__LIB_0__::func_76(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
			case 8:
				if (__LIB_0__::func_76(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
		}
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		if (bParam3)
		{
			__LIB_1__::func_242(iParam0, 6);
		}
		else
		{
			__LIB_1__::func_242(iParam0, 5);
		}
		__LIB_1__::func_470(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						__LIB_0__::func_873();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_519(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_519(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_519(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_519(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_519(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_519(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_519(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_519(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_519(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_519(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_519(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_519(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_519(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_519(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_519(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_519(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_519(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_519(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_519(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_519(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_519(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_519(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_519(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_519(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_519(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_521();
						func_522(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						__LIB_1__::func_101();
						__LIB_0__::func_874();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(__LIB_1__::func_464(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_519(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HUNT_ROOT"), true);
							__LIB_1__::func_240(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_GAMB_ROOT"), true);
							__LIB_1__::func_240(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						__LIB_1__::func_630(304805134, 1, 1);
						if (!__LIB_1__::func_25(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_382(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[21 /*49*/].f_3)), iVar14);
						}
						break;
					case 20:
						__LIB_0__::func_875();
						break;
					case 26:
						__LIB_0__::func_876();
						break;
					case 17:
						__LIB_1__::func_810(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!__LIB_0__::func_878(joaat("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = __LIB_0__::func_23();
							__LIB_1__::func_446(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							__LIB_1__::func_612(joaat("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						__LIB_0__::func_879();
						break;
					case 37:
						__LIB_0__::func_880();
						if (__LIB_0__::func_26())
						{
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), iVar14);
						}
						break;
					case 38:
						__LIB_0__::func_881();
						break;
					case 43:
						__LIB_0__::func_882();
						break;
					case 44:
						if (!__LIB_1__::func_25(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_382(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[82 /*49*/].f_3)), iVar14);
						}
						if (!__LIB_1__::func_25(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_382(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[83 /*49*/].f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						__LIB_0__::func_883();
						break;
					case 59:
						__LIB_0__::func_884();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						__LIB_0__::func_885();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						__LIB_0__::func_886();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_SURV_ROOT"), true);
							__LIB_1__::func_240(451, 0);
						}
						if (!__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_05")))
						{
							if (__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_04")))
							{
								iVar16 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (__LIB_0__::func_315(4))
						{
							if (!__LIB_1__::func_707(joaat("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_519(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_519(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_1__::func_146(89200);
						__LIB_1__::func_146(2300);
						__LIB_1__::func_146(2300);
						break;
					case 68:
						__LIB_0__::func_887();
						break;
					case 76:
						if (Global_1425247.f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[108 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[69 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[70 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[7 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[22 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[23 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[65 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[7 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[8 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[36 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[48 /*74*/].f_8)), iVar14);
						__LIB_0__::func_888();
						__LIB_1__::func_146(-139100);
						break;
					case 69:
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_1__::func_146(-6000);
						}
						break;
					case 70:
						__LIB_1__::func_146(23400);
						__LIB_1__::func_146(1900);
						__LIB_1__::func_146(-15000);
						break;
					case 71:
						__LIB_1__::func_146(-5500);
						break;
				}
				break;
			case 8:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_BEAUG"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444 /* GXTEntry: "Penelope Braithwaite" */);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806 /* GXTEntry: "Scott" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455 /* GXTEntry: "Iain" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411 /* GXTEntry: "Mrs Calhoon" */);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DORKINS"));
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426 /* GXTEntry: "Sister Calderón" */);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876 /* GXTEntry: "Calloway" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_LEVIN"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105 /* GXTEntry: "Emmet Granger" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898 /* GXTEntry: "Flaco Hernández" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548 /* GXTEntry: "Billy Midnight" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082 /* GXTEntry: "Black Belle" */);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767 /* GXTEntry: "Slim Grant" */);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465 /* GXTEntry: "Mr. Black" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187 /* GXTEntry: "Mr. White" */);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALDEN_CARRUTHERS"));
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DOCTOR"));
						break;
					case 58:
						__LIB_0__::func_889();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171 /* GXTEntry: "Lilly Millet" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WROBEL"));
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						__LIB_0__::func_890();
						break;
					case 66:
						__LIB_0__::func_891();
						__LIB_1__::func_599();
						break;
					case 67:
						if (!__LIB_0__::func_892(6))
						{
							__LIB_0__::func_893(6);
						}
						if (!__LIB_0__::func_892(3))
						{
							__LIB_0__::func_893(3);
						}
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_PISTOL_M1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_RINGMASTER"));
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_TIGERHANDLER"));
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833 /* GXTEntry: "Mary Linton" */);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MASON"));
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALGIE_DAVISON"));
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131 /* GXTEntry: "Bertram" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MISS_MARJORIE"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117 /* GXTEntry: "Magnifico" */);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WARVET"));
						break;
					case 9:
						if (__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1))
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(40500);
						}
						else
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(46500);
						}
						break;
				}
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						switch (__LIB_0__::func_872(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		__LIB_0__::func_894(iParam0);
		func_556();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						__LIB_1__::func_777(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						__LIB_1__::func_777(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						__LIB_1__::func_777(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						__LIB_1__::func_777(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						__LIB_1__::func_777(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						__LIB_1__::func_777(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						__LIB_1__::func_777(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						__LIB_1__::func_777(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						__LIB_1__::func_777(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						__LIB_1__::func_777(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_519(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						__LIB_1__::func_777(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						__LIB_1__::func_777(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						__LIB_1__::func_777(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							__LIB_1__::func_777(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							__LIB_1__::func_777(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 536870912))
				{
					__LIB_0__::func_896(11, 1);
				}
				switch (__LIB_0__::func_76(iParam0))
				{
					case 109:
						__LIB_1__::func_777(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						__LIB_1__::func_777(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						__LIB_1__::func_777(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						__LIB_1__::func_777(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						__LIB_1__::func_777(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!__LIB_0__::func_291(iParam0) == 0)
			{
				if (__LIB_0__::func_299(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						__LIB_1__::func_790(__LIB_1__::func_613(Global_1879514.f_1));
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			__LIB_0__::func_703(bParam2, iVar20);
		}
	}
	__LIB_0__::func_301(1);
	if ((bVar13 || __LIB_1__::func_195()) && (__LIB_0__::func_700(iParam0) == 1 || __LIB_0__::func_700(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

void func_399(int iParam0)
{
	int iVar0;
	if (__LIB_9__::func_617(iParam0))
	{
		return;
	}
	iVar0 = __LIB_9__::func_572(iParam0);
	func_598(iVar0, 16);
}

void func_483(var uParam0, var uParam1, int iParam2, int iParam3)
{
	*uParam0 = { func_354(iParam2, iParam3) };
	*uParam1 = func_355(iParam2, iParam3);
}

bool func_519(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
		return false;
	}
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return false;
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
				func_519(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_1__::func_846(iParam0);
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
			__LIB_1__::func_858(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			__LIB_1__::func_796(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return false;
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
						func_519(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_519(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_519(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_519(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_519(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_519(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_519(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_519(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_519(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			return false;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_1__::func_825(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return true;
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
				func_519(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
	return true;
}

void func_521()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_809();
	func_810();
	func_811();
	func_812();
	func_813();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_522(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_816(iParam0, 1, 1, -142743235, 1);
	if (__LIB_0__::func_779(iParam0))
	{
		__LIB_1__::func_798(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = __LIB_0__::func_161(__LIB_1__::func_710(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	__LIB_0__::func_921(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946804.f_57[iVar1 /*11*/];
		Global_1946804.f_1616.f_1[iVar1 /*3*/] = { vVar4 };
		Global_1946804.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_822(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_822(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
				{
					__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
		{
			__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
			{
				Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
		{
			Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
		if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		Global_1946804.f_1378.f_1[iVar1 /*3*/] = { Global_1946804.f_1616.f_1[iVar1 /*3*/] };
		iVar1++;
	}
}

void func_556()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575.f_4)
	{
		return;
	}
	if (!__LIB_0__::func_382(64))
	{
		return;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return;
	}
	else if ((__LIB_0__::func_296(0, 0, 1) || __LIB_0__::func_383()) || __LIB_1__::func_195())
	{
		return;
	}
	iVar0 = __LIB_1__::func_194();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_841(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		__LIB_1__::func_103(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		__LIB_0__::func_703(0, -1);
	}
	if (iVar2 > 0)
	{
		__LIB_0__::func_45("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	__LIB_0__::func_385(1, 0);
	Global_1956575.f_4 = 1;
}

void func_598(int iParam0, int iParam1)
{
	__LIB_1__::func_336(&(Global_40.f_11864[iParam0 /*2*/].f_1), iParam1);
}

void func_809()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1030(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			__LIB_1__::func_851();
		}
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	__LIB_1__::func_116();
	if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("NBD1")) >= 2)
	{
		if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("CABR01")) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED")))
	{
		return;
	}
	func_1030(1);
}

void func_810()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_519(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_811()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1033(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_1033(1);
}

void func_812()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1033(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	__LIB_1__::func_616(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_1033(1);
}

void func_813()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_519(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(1))
			{
				__LIB_0__::func_368(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_519(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(2))
			{
				__LIB_0__::func_368(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_15")) > 0 && !__LIB_0__::func_458(4))
		{
			__LIB_0__::func_368(4);
		}
		if (__LIB_0__::func_458(0))
		{
			__LIB_0__::func_459(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0))
			{
				func_816(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_816(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
			}
		}
		if (__LIB_0__::func_458(1))
		{
			__LIB_0__::func_459(1);
		}
		if (__LIB_0__::func_458(2))
		{
			__LIB_0__::func_459(2);
		}
		if (__LIB_0__::func_458(4))
		{
			__LIB_0__::func_459(4);
		}
		if (!__LIB_0__::func_458(0))
		{
			__LIB_0__::func_368(0);
		}
	}
}

int func_816(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_816(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

bool func_822(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	Var4 = __LIB_0__::func_790(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946804.f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		__LIB_0__::func_947(uParam0, __LIB_0__::func_461(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = __LIB_0__::func_161(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("COMPONENT")))
			{
			}
			else
			{
				Global_1946804.f_2612[Global_1946804.f_2652] = iVar1;
				Global_1946804.f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @348; //curOff = 283
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (__LIB_0__::func_948(iVar3) && __LIB_0__::func_220(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804.f_2652)
						{
							__LIB_1__::func_455(uParam0, uParam0->f_1[Global_1946804.f_2612[iVar1] /*3*/], Global_1946804.f_2612[iVar1], 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

int func_841(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!__LIB_0__::func_144(iVar0, 0))
	{
		return 0;
	}
	if (!__LIB_1__::func_63(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	__LIB_0__::func_794(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (__LIB_0__::func_192(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { __LIB_1__::func_615(iVar0, 0, 1) };
	iVar10 = __LIB_1__::func_119(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1060(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_519(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1030(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_519(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_519(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_519(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1184(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_522(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_816(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1190(Var0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		__LIB_1__::func_178(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (__LIB_0__::func_809(iVar6) == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				__LIB_0__::func_810(iVar6, iVar7);
				__LIB_0__::func_811(iVar6, iVar8);
				__LIB_0__::func_812(iVar6, iVar9);
				__LIB_0__::func_813(iVar6, 0);
				if (__LIB_1__::func_127(iVar6))
				{
					__LIB_1__::func_608(iVar6);
				}
				iVar10 = __LIB_0__::func_553(iVar8);
				__LIB_1__::func_820(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

void func_1033(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_519(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_519(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_519(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_519(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_519(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_519(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_519(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_519(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_519(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_519(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_519(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_816(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_816(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_816(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_816(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_816(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_816(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_816(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_816(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_816(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_816(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_816(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		__LIB_1__::func_178(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (__LIB_0__::func_809(iVar0) == joaat("BREED_ARDENNES_IRONGREYROAN"))
			{
				__LIB_0__::func_810(iVar0, iVar1);
				__LIB_0__::func_811(iVar0, iVar2);
				__LIB_0__::func_812(iVar0, iVar3);
				__LIB_0__::func_813(iVar0, 0);
				if (__LIB_1__::func_127(iVar0))
				{
					__LIB_1__::func_608(iVar0);
				}
				iVar4 = __LIB_0__::func_553(iVar2);
				__LIB_1__::func_820(iVar0, iVar4);
			}
			iVar0++;
		}
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

int func_1060(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	if (__LIB_0__::func_192(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					iVar49 = (iVar49 + Var0[iVar32 /*2*/].f_1);
					Jump @229; //curOff = 201
				}
				else if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = __LIB_0__::func_372(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = __LIB_0__::func_374(iVar62, iVar61);
					if (__LIB_0__::func_144(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1060(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1060(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

void func_1184(int iParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;
	func_816(iParam0, 1, 1, -142743235, 1);
	iVar34 = __LIB_1__::func_415(iParam0, &uVar18);
	__LIB_1__::func_82(iParam0, &uVar18, &iVar34, 1);
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	__LIB_0__::func_827(iParam0, &(Global_26796.f_627.f_121.f_20));
	__LIB_1__::func_798(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_816(uVar18[iVar36], 1, 1, -142743235, 1);
		switch (__LIB_0__::func_357(uVar18[iVar36]))
		{
			case -2061583405:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_25));
				break;
		}
		__LIB_1__::func_798(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = __LIB_0__::func_161(__LIB_1__::func_710(uVar18[iVar36]), 1);
		iVar36++;
	}
	__LIB_0__::func_608(&(Global_1946804.f_1616));
	func_822(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (uVar18[iVar36] == __LIB_0__::func_780(iVar0[iVar36], iVar35))
			{
				__LIB_1__::func_798(__LIB_0__::func_998(iVar35), 1, 1);
				__LIB_0__::func_999(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!__LIB_0__::func_65(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), 2))
						{
						}
						else
						{
							__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), iVar37, 0);
							Global_1946804.f_1497.f_1[iVar37 /*3*/] = { Global_1946804.f_1616.f_1[iVar37 /*3*/] };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_1946804.f_1497.f_1[iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
	{
		if (!__LIB_0__::func_609(8))
		{
			if (__LIB_0__::func_241() == -2125499975)
			{
				if (bVar17)
				{
					func_822(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_822(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					__LIB_0__::func_828(Global_40.f_7729, 4096);
					__LIB_0__::func_806(Global_1905941, 4096);
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					func_1264(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_26796.f_627.f_1.f_1.f_1[iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	func_822(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	func_822(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	Global_1946804.f_1616.f_1[8 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[8 /*3*/] };
	Global_1946804.f_1616.f_1[9 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[9 /*3*/] };
	Global_1946804.f_1616.f_1[0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[0 /*3*/] };
	Global_1946804.f_1616.f_1[2 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[2 /*3*/] };
	Global_1946804.f_1616.f_1[3 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[3 /*3*/] };
	Global_1946804.f_1616.f_1[1 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[1 /*3*/] };
	Global_1946804.f_1616.f_1[5 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[5 /*3*/] };
	Global_1946804.f_1616.f_1[6 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[6 /*3*/] };
	Global_1946804.f_1616.f_1[7 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[7 /*3*/] };
	Global_26796.f_627 = Global_1946804.f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946804.f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar36 /*3*/] = { Global_1946804.f_1616.f_1[iVar36 /*3*/] };
		iVar36++;
	}
}

void func_1190(struct<6> Param0)
{
	if (!func_1275(Param0.f_4, 1))
	{
	}
	if (!func_1275(Param0, 1))
	{
	}
	if (!func_1275(Param0.f_2, 1))
	{
	}
	if (!func_1275(Param0.f_5, 1))
	{
	}
	if (!func_1275(Param0.f_3, 1))
	{
	}
	if (!func_1275(Param0.f_1, 1))
	{
	}
}

int func_1264(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_223(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = __LIB_0__::func_998(iParam1);
	}
	if ((bParam3 && __LIB_0__::func_805(iParam1, 4096)) && Global_1946804.f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !__LIB_1__::func_87(iVar0, Global_1946804.f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		__LIB_0__::func_828(Global_40.f_7729, 4096);
		__LIB_0__::func_806(Global_1905941, 4096);
		Global_40.f_7729 = Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		__LIB_0__::func_207(iParam0);
	}
	__LIB_1__::func_10();
	if (!__LIB_0__::func_58(iParam1))
	{
		func_1337(iVar0, iParam0, __LIB_0__::func_846(iParam1), 1, 0, 1);
	}
	__LIB_0__::func_660(iParam0);
	return 1;
}

bool func_1275(int iParam0, int iParam1)
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
				if (func_1275(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1275(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1275(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1275(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

void func_1337(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = __LIB_0__::func_449(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_0__::func_191();
	if (bParam5)
	{
		if (!func_1383(&(Global_1946804.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (__LIB_0__::func_156(32768) && Global_1946804.f_1378.f_1[10 /*3*/] != Global_1946804.f_57[10 /*11*/])
	{
		__LIB_0__::func_945();
	}
	__LIB_1__::func_443(iVar3, 1, 1, 1, 1, 1);
	__LIB_1__::func_452(31, 0, 0, 0, 0);
	__LIB_1__::func_36(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			__LIB_1__::func_452(2, iVar1, 2, 0, 0);
		}
		else
		{
			__LIB_1__::func_452(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		__LIB_1__::func_550(&(Global_1946804.f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

bool func_1383(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	if (!__LIB_1__::func_138(uParam0, iParam3, iParam2) && !func_822(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (__LIB_0__::func_156(32768))
	{
		if (!*bParam1 || (*bParam1 && uParam0->f_1[iVar0 /*3*/] != Global_1946804.f_57[iVar0 /*11*/]))
		{
			__LIB_0__::func_968(1108822547);
		}
		else
		{
			__LIB_0__::func_860(1108822547);
		}
	}
	__LIB_1__::func_183(uParam0, 0, 0);
	__LIB_0__::func_245(iParam5);
	return true;
}

