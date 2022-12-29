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
	vector3 vLocal_16 = { 0f, 0f, 0f };
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	struct<8> Local_28 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<32> Local_36[2];
	int iLocal_101 = 0;
	struct<2> Local_102[2];
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = -1;
	var uLocal_113 = 0;
	var uLocal_114 = -1;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = -1;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 1073741824;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 1;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	struct<17> Local_132[3];
	int iLocal_184[2] = { 0, 0 };
	var uLocal_187[2] = { 0, 0 };
	float fLocal_190 = 0f;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	char cLocal_193[32] = "";
	char cLocal_197[32] = "";
	var uLocal_201 = 2;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	vector3 vLocal_218[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_228 = { 0f, 0f, 0f };
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	var uLocal_234 = 0;
	int iLocal_235 = 0;
	char* sLocal_236 = NULL;
	char* sLocal_237 = NULL;
	char* sLocal_238 = NULL;
	char* sLocal_239 = NULL;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = -1;
	var uLocal_248 = 0;
	char* sLocal_249 = NULL;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	struct<193> Local_252 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	struct<4> Local_450 = { 0, 0, 0, 0 } ;
	var uLocal_454 = 0;
	var uLocal_455 = 1065353216;
	var uLocal_456 = 1119092736;
	var uLocal_457 = 1092616192;
	var uLocal_458 = 1085276160;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	int iLocal_464 = 0;
	bool bLocal_465 = false;
	bool bLocal_466 = false;
	bool bLocal_467 = false;
	bool bLocal_468 = false;
	float fLocal_469 = 0f;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	int iLocal_482 = 0;
	var uLocal_483 = 0;
	int iLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	int iLocal_487[2] = { 0, 0 };
	int iLocal_490[2] = { 0, 0 };
	struct<13> Local_493 = { 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_236 = "mech_skin@BUCK_BUTCHER";
	sLocal_237 = "PBL_BASE";
	sLocal_238 = "PBL_DUMP";
	sLocal_239 = "PBL_DROP_IN";
	sLocal_249 = "beat_gang_camp_reminder";
	iLocal_250 = 23;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_466 = true;
	}
	if (!bLocal_466)
	{
		Local_252.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		Local_252.f_43 = __LIB_0__::func_12();
		Local_252.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		__LIB_3__::func_420(&Local_252, 1);
		__LIB_2__::func_51(&(Local_252.f_5), 1);
		__LIB_2__::func_50(&(Local_252.f_5), 1);
		__LIB_2__::func_105(&(Local_252.f_5), 1);
		__LIB_2__::func_110(&(Local_252.f_5), 1);
		__LIB_2__::func_662(&(Local_252.f_5), 0);
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_466, 956, 0);
		if (bLocal_466)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_448)
			{
				case 0:
					if (func_12())
					{
						iLocal_448 = 1;
					}
					break;
				case 1:
					if (__LIB_4__::func_218(&Local_252, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						if (__LIB_0__::func_12() == 92)
						{
							iLocal_101 = 2;
						}
						else
						{
							iLocal_101 = Local_252.f_51.f_4;
						}
						func_14();
						if (func_15())
						{
							func_16(&Local_252, &uLocal_463, &(Local_252.f_51.f_4));
							__LIB_3__::func_503(&Local_252, uLocal_463, 1956);
							func_19();
							func_20();
							__LIB_3__::func_594(&iLocal_233, &uLocal_479, vLocal_228, 0f, 0f, 0f, 1.75f, 1.75f, 1.75f, 0, 0, 1, 2, 0);
							__LIB_4__::func_212(iLocal_233, 1, 0, 0, 0);
							iLocal_235 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), vLocal_228, 0f, 0f, 0f, 2.5f, 2.5f, 3f);
							VOLUME::_0xBE551C2CC421185D(iLocal_235, 1);
							VOLUME::_0x5B23DFF8E0948BB2(iLocal_235, 0);
							iLocal_448 = 3;
						}
						else
						{
							Local_252.f_160 = 1;
						}
					}
					if (Local_252.f_160)
					{
						func_10();
					}
					break;
				case 3:
					if (func_23())
					{
						WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_184[0], true, true);
						PED::SET_PED_CONFIG_FLAG(iLocal_184[0], 6, true);
						func_24();
						iLocal_448 = 4;
					}
					break;
				case 4:
					if (!func_25(&Local_252, &iLocal_184, iLocal_101, 0, 1, 0, 1, 0))
					{
						func_10();
					}
					if (!Local_252.f_46)
					{
						if (iLocal_447 < 5)
						{
							if (func_26(iLocal_184[0], 0, &(Local_252.f_5), &uLocal_459, 0, 0))
							{
								__LIB_3__::func_380(Local_28);
								Local_252.f_46 = 1;
								if (__LIB_0__::func_27(iLocal_449, 32768))
								{
									iLocal_447 = 8;
								}
								else
								{
									__LIB_4__::func_217(&iLocal_184, Global_35, 0, -1, 1148846080 /* Float: 1000f */, 0, 4);
									Local_252.f_50 = 1;
									func_10();
								}
							}
						}
						else if (iLocal_447 >= 6)
						{
							if (func_26(iLocal_184[0], 0, &(Local_252.f_5), &uLocal_459, 0, 0))
							{
								Local_252.f_46 = 1;
							}
						}
					}
					if (func_29())
					{
						Local_252.f_50 = 1;
						func_10();
					}
					if (func_30())
					{
						if (iLocal_447 > 3)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("REPP_LEAVE");
						}
						Local_252.f_50 = 1;
						func_10();
					}
					break;
			}
			BUILTIN::WAIT(Local_252.f_158);
		}
	}
}

void func_10()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_184[1]))
	{
		if (__LIB_4__::func_274(iLocal_184[1], 0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_184[1], false);
			__LIB_2__::func_753(iLocal_107, 0, 1, 0, 0);
		}
	}
	func_37(0);
	func_38(1);
	func_39(1);
	func_40();
	__LIB_0__::func_172(iLocal_235);
	if (__LIB_0__::func_27(iLocal_449, 1))
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_184[0], Global_35, 500f, -1, 0, 1077936128 /* Float: 3f */, 0);
		PED::_0x39A2FC5AF55A52B1(iLocal_184[0], -1);
		Local_252.f_50 = 1;
	}
	func_42(&Local_252, &iLocal_184, &uLocal_187, iLocal_101, uLocal_463, Local_252.f_51.f_4, 0, 1, 0, 1);
	if (!__LIB_2__::func_1(Global_35, 0, 1))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("REPP_STOP");
	}
	else
	{
		func_44();
	}
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_474);
	if (MAP::DOES_BLIP_EXIST(uLocal_187[0]))
	{
		MAP::REMOVE_BLIP(&(uLocal_187[0]));
	}
	__LIB_1__::func_345();
	__LIB_0__::func_172(iLocal_484);
	__LIB_3__::func_650(&iLocal_233, &uLocal_479);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_12()
{
	switch (iLocal_446)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_252))
			{
				func_49();
				__LIB_3__::func_445(&Local_36);
				func_51();
				AUDIO::PREPARE_MUSIC_EVENT("REPP_START");
				AUDIO::PREPARE_MUSIC_EVENT("REPP_MID");
				AUDIO::PREPARE_MUSIC_EVENT("REPP_STOP");
				AUDIO::PREPARE_MUSIC_EVENT("REPP_LEAVE");
				iLocal_446 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_315(&uLocal_201))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_36))
			{
				return false;
			}
			if (((!AUDIO::PREPARE_MUSIC_EVENT("REPP_START") && !AUDIO::PREPARE_MUSIC_EVENT("REPP_MID")) && !AUDIO::PREPARE_MUSIC_EVENT("REPP_STOP")) && !AUDIO::PREPARE_MUSIC_EVENT("REPP_LEAVE"))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_14()
{
	switch (iLocal_101)
	{
		case 0:
			StringCopy(&cLocal_193, "PB_R", 32);
			StringCopy(&cLocal_197, "pblAction", 32);
			Local_28.f_4 = "script@beat@town@pickpocket@gunsmith";
			Local_28.f_5 = "script@beat@town@pickpocket@slamgate";
			Local_28 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_28.f_4, 0, &cLocal_193, false, true);
			Local_28.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_28.f_5, 0, &cLocal_197, false, true);
			break;
		case 1:
			StringCopy(&cLocal_193, "pb_action", 32);
			Local_28.f_4 = "script@beat@town@pickpocket@tailor";
			Local_28 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_28.f_4, 0, &cLocal_193, false, true);
			break;
		case 2:
			StringCopy(&cLocal_193, "PB_R", 32);
			Local_28.f_4 = "script@beat@town@pickpocket@saloon";
			Local_28 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_28.f_4, 0, &cLocal_193, false, true);
			break;
	}
}

bool func_15()
{
	if (iLocal_192 == 0)
	{
		if (iLocal_101 == 2)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_232))
			{
				if (__LIB_1__::func_205(Global_35, iLocal_232, 1, 0))
				{
					return false;
				}
			}
		}
		else if (iLocal_101 == 1)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_232))
			{
				if (__LIB_1__::func_205(Global_35, iLocal_232, 1, 0))
				{
					return false;
				}
			}
			if (!__LIB_10__::func_716(7, -1))
			{
				return false;
			}
		}
		else if (iLocal_101 == 0)
		{
			if (!__LIB_10__::func_716(6, -1))
			{
				return false;
			}
		}
	}
	iLocal_192++;
	if (iLocal_192 > 1)
	{
		iLocal_192 = 0;
	}
	return true;
}

void func_16(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
	}
}

Vector3 func_17(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 115f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_19()
{
	switch (iLocal_101)
	{
		case 0:
			vLocal_228 = { 2720.405f, -1282.544f, 49.62528f };
			fLocal_190 = 0.71f;
			Local_36[0 /*32*/].f_6 = { 2717.922f, -1282.484f, 48.63041f };
			iLocal_107 = 202;
			break;
		case 1:
			vLocal_228 = { 2552.85f, -1173.651f, 53.55835f };
			fLocal_190 = 0.75f;
			Local_36[0 /*32*/].f_6 = { 2553.374f, -1171.452f, 52.68381f };
			iLocal_107 = 142;
			break;
		case 2:
			vLocal_228 = { 2951.579f, 523.3301f, 45.40511f };
			fLocal_190 = 0.82f;
			Local_36[0 /*32*/].f_6 = { 2948.141f, 524.8362f, 44.35327f };
			iLocal_107 = 443;
			break;
	}
}

void func_20()
{
	switch (iLocal_101)
	{
		case 0:
			__LIB_3__::func_557(&iLocal_231, 2720.082f, -1282.674f, 50.21229f, 0f, 0f, 25f, 3.44f, 2.025184f, 2f, "m_volStore");
			break;
		case 1:
			__LIB_3__::func_557(&iLocal_231, 2552.332f, -1172.637f, 53.67805f, 0f, 0f, 89.806f, 3.44f, 2.025184f, 2f, "m_volStore");
			__LIB_3__::func_557(&iLocal_232, 2552.526f, -1163.992f, 53.678f, 0f, 0f, 89.806f, 15.735f, 10.376f, 2f, "m_volStoreInterior");
			break;
		case 2:
			__LIB_3__::func_557(&iLocal_231, 2951.813f, 523.334f, 45.638f, 0f, 0f, 0f, 1f, 1.084f, 2.939f, "m_volStore");
			iLocal_232 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStoreInterior");
			VOLUME::_0x39816F6F94F385AD(iLocal_232, 2946.673f, 523.207f, 45.638f, 0f, 0f, 0f, 9.53f, 13.21f, 2.939f);
			VOLUME::_0x39816F6F94F385AD(iLocal_232, 2938.664f, 523.398f, 45.638f, 0f, 0f, 0f, 5.466f, 10.017f, 2.939f);
			break;
	}
}

bool func_23()
{
	switch (iLocal_464)
	{
		case 0:
			iLocal_464 = 1;
			break;
		case 1:
			if (!__LIB_3__::func_479(Local_252.f_51, Local_252.f_51.f_3, &Local_36, &iLocal_184, 1, 0, -1, 1))
			{
				return false;
			}
			__LIB_0__::func_568(VOLUME::_GET_VOLUME_COORDS(iLocal_233), 1.75f, 0);
			iLocal_464 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

void func_24()
{
	if (Local_252.f_51.f_4 == 0)
	{
		__LIB_3__::func_594(&uLocal_483, &uLocal_480, 2723.509f, -1279.732f, 48.638f, 0f, 0f, 0f, 2f, 2f, 2f, 0, 0, 1, 2, "volRestriction");
	}
}

bool func_25(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_67(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_317(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_3__::func_234(&(uParam0->f_5));
			}
			__LIB_1__::func_336(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					__LIB_3__::func_433(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!__LIB_3__::func_344(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (__LIB_1__::func_85(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*iParam1)[0]) && !PED::IS_PED_INJURED((*iParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*iParam1)[0])))
			{
				__LIB_4__::func_15(uParam0, (*iParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_26(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_3__::func_396(iParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_100(iParam0, iParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_101(iParam0, iParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_29()
{
	func_106();
	func_107(iLocal_184[0]);
	switch (iLocal_447)
	{
		case 0:
			if (func_108() && func_109())
			{
				if (iLocal_101 == 0)
				{
					__LIB_3__::func_557(&iLocal_482, 2724.637f, -1277.467f, 50.212f, 0f, 0f, 25f, 14.089f, 17.816f, 13.905f, "volRoadDisable");
				}
				else if (iLocal_101 == 1)
				{
					__LIB_3__::func_594(&uLocal_234, &uLocal_481, 2516.728f, -1124.846f, 48.98935f, 0f, 0f, 0f, 2f, 2f, 2f, 0, 0, 1, 2, 0);
				}
				func_110();
				__LIB_1__::func_336(&(Local_450.f_3), 2);
				iLocal_447 = 1;
			}
			else if (__LIB_1__::func_205(Global_35, iLocal_231, 1, 0))
			{
				if (Local_252.f_161)
				{
					__LIB_1__::func_422("BEAT_FAIL_DIR", 7500, 0, 1, 0, 0, -1, -1, 0);
				}
				return true;
			}
			break;
		case 1:
			func_111();
			if (func_15())
			{
				func_112();
				func_113();
				func_114();
				func_115();
				if (__LIB_0__::func_27(iLocal_449, 512))
				{
					if (__LIB_1__::func_205(Global_35, iLocal_231, 1, 0))
					{
						__LIB_1__::func_336(&iLocal_449, 32768);
						MISC::_0x1096603B519C905F(__LIB_3__::func_165(Local_252.f_3));
						func_117(1110704128 /* Float: 45f */);
						func_118();
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_482))
						{
							__LIB_3__::func_730(iLocal_482, 0, 0, 0, 0, 0);
						}
						func_120(vLocal_228, 30f);
						func_121(iLocal_484, iLocal_184[0], 1, ENTITY::GET_ENTITY_COORDS(iLocal_184[0], true, false), 0f, 0f, 0f, 40f, 40f, 40f);
						func_122();
						if (__LIB_1__::func_374(Global_35, vLocal_228, 0.25f) || ((iLocal_101 == 1 && __LIB_1__::func_374(Global_35, vLocal_228, 0.65f)) && PED::GET_MOUNT(Global_35) == 0))
						{
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_28, false))
							{
								__LIB_3__::func_426(&Local_252, &(Local_252.f_48), Local_252.f_3, &(Local_252.f_51.f_6));
								__LIB_3__::func_164(&(Local_252.f_121));
								__LIB_1__::func_991(iLocal_184[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_28, "thief_bool", true, false);
								func_125();
								func_37(1);
								iLocal_447 = 3;
							}
						}
						else
						{
							if (Local_252.f_161)
							{
								__LIB_1__::func_422("BEAT_FAIL_DIR", 7500, 0, 1, 0, 0, -1, -1, 0);
							}
							return true;
						}
					}
				}
			}
			else
			{
				if (Local_252.f_161)
				{
					__LIB_1__::func_422("BEAT_FAIL_TOD", 7500, 0, 1, 0, 0, -1, -1, 0);
				}
				return true;
			}
			break;
		case 3:
			func_115();
			func_113();
			func_126();
			PED::SET_PED_RESET_FLAG(Global_35, 108, true);
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_28, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_28) >= 0.25f)
			{
				__LIB_4__::func_174(iLocal_184[0], &Local_450, 0f, 0f, 0.15f, 0, 1106247680 /* Float: 30f */, 1092616192 /* Float: 10f */, -1, 4000, 1000, 0.25f, 1, 1, 1084227584 /* Float: 5f */);
			}
			if (!__LIB_0__::func_27(iLocal_449, 1))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_28, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_28) >= 0.4417f)
				{
					__LIB_2__::func_73(iLocal_184[0], &(uLocal_187[0]), -89429847, 580546400, 0, 0);
					iLocal_474 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), iLocal_184[0], -1f, 8f, 4f, -1f, 8f, 180f, false, false, -1, -1);
					__LIB_1__::func_336(&iLocal_449, 1);
				}
			}
			else if (!__LIB_0__::func_27(iLocal_449, 2))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_28, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_28) >= 0.5472f)
				{
					__LIB_2__::func_303(Global_35, iLocal_184[0], func_129("BUMP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_336(&iLocal_449, 2);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_28, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_28) >= 0.5861f)
			{
				AUDIO::_0x0D7FD6A55FD63AEF(51, 3, 0);
				iLocal_447 = 4;
			}
			break;
		case 4:
			func_113();
			func_126();
			__LIB_4__::func_174(iLocal_184[0], &Local_450, 0f, 0f, 0.15f, 0, 1106247680 /* Float: 30f */, 1092616192 /* Float: 10f */, -1, 4000, 1000, 0.25f, 1, 1, 1084227584 /* Float: 5f */);
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_28, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_28) >= fLocal_190)
			{
				__LIB_0__::func_172(iLocal_233);
				__LIB_2__::func_110(&(Local_252.f_5), 0);
				func_38(1);
				PED::SET_PED_USING_ACTION_MODE(Global_35, true, 10000, 0);
				__LIB_1__::func_345();
				iLocal_447 = 5;
			}
			break;
		case 5:
			func_113();
			func_131();
			func_126();
			if (func_132())
			{
				__LIB_3__::func_650(&iLocal_233, &uLocal_479);
				__LIB_0__::func_172(iLocal_235);
				Local_252.f_44 = 1;
				MAP::_BLIP_SET_STYLE(uLocal_187[0], joaat("BLIP_STYLE_ENEMY"));
				iLocal_447 = 6;
			}
			break;
		case 6:
			func_113();
			func_133();
			func_131();
			func_134();
			if (!__LIB_2__::func_1(iLocal_184[0], 0, 1))
			{
				func_40();
			}
			if (func_135())
			{
				iLocal_447 = 8;
			}
			break;
		case 7:
			break;
		case 8:
			return true;
	}
	return false;
}

bool func_30()
{
	if (iLocal_447 > 1)
	{
		if (__LIB_3__::func_365(&Local_252, &iLocal_184, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
		{
			return true;
		}
	}
	else if (__LIB_3__::func_365(&Local_252, &iLocal_184, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0))
	{
		return true;
	}
	return false;
}

void func_37(bool bParam0)
{
	if (bParam0)
	{
		__LIB_18__::func_888(47);
		__LIB_18__::func_888(43);
		bLocal_467 = true;
	}
	else if (bLocal_467)
	{
		__LIB_14__::func_700(47);
		__LIB_14__::func_700(43);
		bLocal_467 = false;
	}
}

void func_38(bool bParam0)
{
	if (bParam0)
	{
		if (bLocal_465)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			bLocal_465 = false;
		}
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
		bLocal_465 = true;
	}
}

void func_39(bool bParam0)
{
	if (__LIB_0__::func_27(iLocal_449, -2147483648) || !__LIB_0__::func_27(iLocal_449, 1073741824 /* Float: 2f */))
	{
		return;
	}
	if (AUDIO::_0x4A98E228A936DBCC(Global_35) == iLocal_476 || bParam0)
	{
		PLAYER::_0x216BC0D3D2E413D2(PLAYER::PLAYER_ID(), 0);
		__LIB_1__::func_336(&iLocal_449, -2147483648);
	}
}

void func_40()
{
	if (__LIB_0__::func_27(iLocal_449, 16777216))
	{
		__LIB_0__::func_8(&Global_1935630, 4);
		__LIB_0__::func_516(&iLocal_449, 16777216);
	}
}

void func_42(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_3__::func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			__LIB_3__::func_238(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 0))
			{
				__LIB_3__::func_259((*iParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, iParam1[iVar0]))
				{
					__LIB_2__::func_32(iParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_288((*iParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*iParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_3__::func_468(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		func_67(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_167(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_168(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_44()
{
	if (!__LIB_0__::func_27(iLocal_449, 536870912))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("REPP_STOP");
		__LIB_1__::func_336(&iLocal_449, 536870912);
	}
}

void func_49()
{
	float fVar0;
	float fVar1;
	if (__LIB_0__::func_12() == 5)
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, 2720.815f, -1283.54f, 48.638f, true);
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, 2551.768f, -1173.668f, 52.683f, true);
		if (fVar0 < fVar1)
		{
			Local_36[0 /*32*/].f_1 = joaat("RE_PICKPOCKET_MALES_01");
			StringCopy(&(Local_36[0 /*32*/].f_23), "0882_A_M_M_Civ_Poor_Black_AGGRESSIVE_02", 64);
			Local_36[0 /*32*/] = 22;
			Local_36[0 /*32*/].f_3 = 501456460;
		}
		else
		{
			Local_36[0 /*32*/].f_1 = joaat("RE_PICKPOCKET_MALES_01");
			StringCopy(&(Local_36[0 /*32*/].f_23), "0973_A_M_M_RoughTravellers_White_04", 64);
			Local_36[0 /*32*/] = 22;
			Local_36[0 /*32*/].f_3 = 739130017;
		}
	}
	else
	{
		Local_36[0 /*32*/].f_1 = joaat("RE_PICKPOCKET_MALES_01");
		StringCopy(&(Local_36[0 /*32*/].f_23), "0969_A_M_M_RoughTravellers_Hispanic_03", 64);
		Local_36[0 /*32*/] = 22;
		Local_36[0 /*32*/].f_3 = 1981174472;
	}
	__LIB_3__::func_754(&(Local_36[0 /*32*/].f_22));
	__LIB_3__::func_478(&(Local_36[0 /*32*/].f_22));
}

void func_51()
{
	Local_102[0 /*2*/] = "script_re@pick_pocket@surrender";
	Local_102[0 /*2*/].f_1 = "surrender";
	__LIB_3__::func_318(Local_102[0 /*2*/], &uLocal_201);
}

void func_67(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { __LIB_3__::func_179(uParam0) };
	iVar3 = func_167(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

bool func_100(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (*iParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (__LIB_2__::func_128(iParam0, iParam1, 1))
		{
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!__LIB_1__::func_364(iParam1, iParam0))
					{
						if (__LIB_0__::func_94(iVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			return false;
		}
bool func_101(int iParam0, int iParam1)
{
	if (!__LIB_3__::func_628(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

void func_106()
{
	if (iLocal_15 > 0)
	{
		if (((!__LIB_2__::func_1(iLocal_184[0], 0, 1) || iLocal_15 == 6) || Local_252.f_46) || __LIB_0__::func_27(iLocal_449, 134217728))
		{
			if (!__LIB_0__::func_27(iLocal_449, 8388608))
			{
				__LIB_2__::func_593(&iLocal_111, &Local_132);
				__LIB_1__::func_336(&iLocal_449, 8388608);
			}
			return;
		}
	}
	if (__LIB_0__::func_27(iLocal_449, 131072) && iLocal_15 < 4)
	{
		__LIB_2__::func_411(&(Local_132[1 /*17*/]), 0, 0);
		iLocal_15 = 4;
	}
	if (iLocal_15 > 0)
	{
		iLocal_14 = func_280(&(iLocal_184[0]), &iLocal_111, 35f, &Local_132, &(Local_252.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	switch (iLocal_15)
	{
		case 0:
			if (__LIB_0__::func_27(iLocal_449, 512) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
			{
				__LIB_2__::func_602(&(Local_132[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_132[1 /*17*/]), __LIB_2__::func_460(11), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_132[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_132[1 /*17*/]), 1, 0);
				iLocal_15 = 1;
			}
			break;
		case 1:
			switch (iLocal_14)
			{
				case 0:
					break;
				case 1:
					__LIB_2__::func_303(Global_35, iLocal_184[0], func_129("CHASE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_411(&(Local_132[1 /*17*/]), 0, 0);
					iLocal_15 = 2;
					break;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-4f, 1, Global_35, 0))
			{
				__LIB_2__::func_411(&(Local_132[1 /*17*/]), 1, 0);
				iLocal_15 = 3;
			}
			break;
		case 3:
			switch (iLocal_14)
			{
				case 0:
					break;
				case 1:
					__LIB_2__::func_303(Global_35, iLocal_184[0], func_129("AIM"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_411(&(Local_132[1 /*17*/]), 0, 0);
					iLocal_15 = 4;
					break;
			}
			break;
		case 4:
			if (__LIB_0__::func_27(iLocal_449, 131072))
			{
				if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, iLocal_184[0], 1))
				{
					__LIB_2__::func_411(&(Local_132[1 /*17*/]), 1, 0);
					iLocal_15 = 5;
				}
			}
			else
			{
				switch (iLocal_14)
				{
					case 0:
						break;
					case 1:
						break;
				}
			}
			break;
		case 5:
			switch (iLocal_14)
			{
				case 0:
					break;
				case 1:
					__LIB_2__::func_303(Global_35, iLocal_184[0], func_129("NEVERAGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_411(&(Local_132[1 /*17*/]), 0, 0);
					iLocal_15 = 4;
					break;
			}
			break;
		case 6:
			break;
	}
}

void func_107(int iParam0)
{
	if (bLocal_468 || iLocal_447 <= 1)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			if (__LIB_3__::func_690(Global_35))
			{
				if (__LIB_3__::func_691(Global_35) == __LIB_0__::func_17(iParam0))
				{
					PED::SET_PED_CONFIG_FLAG(iParam0, 6, false);
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_484))
					{
						VOLUME::_DELETE_VOLUME(iLocal_484);
					}
					bLocal_468 = true;
				}
			}
		}
	}
}

int func_108()
{
	switch (iLocal_477)
	{
		case 0:
			if (iLocal_101 == 1)
			{
				uLocal_485 = ENTITY::_0x6F3068258A499E52(joaat("P_DOORNBX_PONTALBA01X"), 2551.768f, -1173.668f, 52.683f, 5);
			}
			else if (iLocal_101 == 0)
			{
				uLocal_485 = ENTITY::_0x6F3068258A499E52(joaat("P_DOORNBD39A"), 2720.815f, -1283.54f, 48.638f, 5);
				uLocal_486 = ENTITY::_0x6F3068258A499E52(joaat("P_DOORNBD39X"), 2720.815f, -1283.54f, 48.638f, 5);
			}
			else if (iLocal_101 == 2)
			{
				uLocal_485 = ENTITY::_0x6F3068258A499E52(joaat("P_DOORVH_SALOON_L"), 2951.605f, 522.7611f, 44.3554f, 5);
				uLocal_486 = ENTITY::_0x6F3068258A499E52(joaat("P_DOORVH_SALOON_R"), 2951.603f, 523.8813f, 44.3554f, 5);
			}
			iLocal_477++;
			break;
		case 1:
			if (iLocal_101 == 1)
			{
				if (ENTITY::_0x1FF441D7954F8709(uLocal_485))
				{
					iLocal_487[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uLocal_485));
					iLocal_477++;
				}
			}
			else if (ENTITY::_0x1FF441D7954F8709(uLocal_485) && ENTITY::_0x1FF441D7954F8709(uLocal_486))
			{
				iLocal_487[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uLocal_485));
				iLocal_487[1] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uLocal_486));
				iLocal_477++;
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_487[0]))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_487[1]))
			{
			}
			iLocal_477++;
			return 1;
		case 3:
			return 1;
	}
	return 0;
}

int func_109()
{
	if (!__LIB_0__::func_27(iLocal_449, 128))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_28))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_28, Local_252.f_51, 0f, 0f, Local_252.f_51.f_3, 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_28, "Thief", iLocal_184[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_28, "Player", Global_35, 0);
			ANIMSCENE::LOAD_ANIM_SCENE(Local_28);
			__LIB_1__::func_336(&iLocal_449, 128);
		}
	}
	if (!__LIB_0__::func_27(iLocal_449, 256))
	{
		if (iLocal_101 == 1 || iLocal_101 == 2)
		{
			__LIB_1__::func_336(&iLocal_449, 256);
		}
		else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_28.f_1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_28.f_1, 2778.515f, -1165.769f, 47.345f, 0f, 0f, -30f, 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_28.f_1, "Thief", iLocal_184[0], 0);
			ANIMSCENE::LOAD_ANIM_SCENE(Local_28.f_1);
			__LIB_1__::func_336(&iLocal_449, 256);
		}
	}
	if (__LIB_0__::func_27(iLocal_449, 128) && __LIB_0__::func_27(iLocal_449, 256))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_28))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_28, true, false))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_28, true))
				{
					return 0;
				}
				else
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_28);
					return 0;
				}
			}
		}
		return 1;
	}
	return 0;
}

void func_110()
{
	switch (iLocal_101)
	{
		case 0:
			if (!__LIB_0__::func_30(iLocal_490[0]))
			{
				iLocal_490[0] = __LIB_0__::func_68(1057071735, 0, 0);
			}
			if (!__LIB_0__::func_30(iLocal_490[1]))
			{
				iLocal_490[1] = __LIB_0__::func_68(-1011766303, 0, 0);
			}
			break;
		case 1:
			if (!__LIB_0__::func_30(iLocal_490[0]))
			{
				iLocal_490[0] = __LIB_0__::func_68(-1683351620, 0, 0);
			}
			break;
		case 2:
			if (!__LIB_0__::func_30(iLocal_490[0]))
			{
				iLocal_490[0] = __LIB_0__::func_68(-1069042457, 0, 0);
			}
			if (!__LIB_0__::func_30(iLocal_490[1]))
			{
				iLocal_490[1] = __LIB_0__::func_68(244699522, 0, 0);
			}
			break;
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_490[0]))
	{
		__LIB_4__::func_213(iLocal_490[0], 0f, 1);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_490[1]))
	{
		__LIB_4__::func_213(iLocal_490[1], 0f, 1);
	}
}

void func_111()
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_184[1]))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_184[1]))
	{
		iVar0 = __LIB_2__::func_963(iLocal_107);
		if (iVar0 != 0)
		{
			iLocal_184[1] = iVar0;
		}
	}
	if (__LIB_2__::func_1(iLocal_184[1], 0, 1))
	{
		return;
	}
}

void func_112()
{
	float fVar0;
	float fVar1;
	char* sVar2;
	if (__LIB_0__::func_27(iLocal_449, 512))
	{
		return;
	}
	if (iLocal_101 == 0)
	{
		switch (iLocal_475)
		{
			case 0:
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_28, false))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_28, true, false))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_28, false))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_28, "PB_RIGHT_0_EXIT_R");
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_28, "PB_RIGHT_45_EXIT_R");
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_28, "PB_RIGHT_90_EXIT_R");
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_28, "PB_LEFT_0_EXIT_R");
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_28, "PB_LEFT_45_EXIT_R");
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_28, "PB_LEFT_90_EXIT_R");
							iLocal_475++;
						}
					}
				}
				break;
			case 1:
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_28, false))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_28, true, false))
					{
						if (((((ANIMSCENE::_0x23E33CB9F4A3F547(Local_28, "PB_RIGHT_0_EXIT_R") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_28, "PB_RIGHT_45_EXIT_R")) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_28, "PB_RIGHT_90_EXIT_R")) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_28, "PB_LEFT_0_EXIT_R")) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_28, "PB_LEFT_45_EXIT_R")) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_28, "PB_LEFT_90_EXIT_R"))
						{
							iLocal_475++;
						}
					}
				}
				break;
			case 2:
				if (Local_252.f_98[0] < 15f)
				{
					if (__LIB_1__::func_205(Global_35, iLocal_231, 1, 0))
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
						if (__LIB_0__::func_195(Global_36, 2722.227f, -1281.693f, 48.465f, 2720.256f, -1282.601f, 48.63037f))
						{
							fVar1 = MISC::ABSF((fVar0 - 112.2723f));
							sVar2 = "PB_LEFT_0_EXIT_R";
							if (MISC::ABSF((fVar0 - 40.5276f)) < fVar1)
							{
								sVar2 = "PB_LEFT_90_EXIT_R";
								fVar1 = MISC::ABSF((fVar0 - 40.5276f));
							}
							if (MISC::ABSF((fVar0 - 81.2258f)) < fVar1)
							{
								sVar2 = "PB_LEFT_45_EXIT_R";
								fVar1 = MISC::ABSF((fVar0 - 81.2258f));
							}
						}
						else
						{
							fVar1 = MISC::ABSF((fVar0 - 112.0495f));
							sVar2 = "PB_RIGHT_0_EXIT_R";
							if (MISC::ABSF((fVar0 - 210.6554f)) < fVar1)
							{
								sVar2 = "PB_RIGHT_90_EXIT_R";
								fVar1 = MISC::ABSF((fVar0 - 210.6554f));
							}
							if (MISC::ABSF((fVar0 - 161f)) < fVar1)
							{
								sVar2 = "PB_RIGHT_45_EXIT_R";
								fVar1 = MISC::ABSF((fVar0 - 161f));
							}
						}
						StringCopy(&cLocal_193, sVar2, 32);
						func_38(0);
						TASK::CLEAR_PED_TASKS(iLocal_184[0], true, false);
						ANIMSCENE::START_ANIM_SCENE(Local_28);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_28, &cLocal_193, true);
						__LIB_1__::func_336(&iLocal_449, 512);
					}
				}
				break;
		}
	}
	else if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_28, false))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_28, true, false))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_28, false))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_28, &cLocal_193);
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_28, &cLocal_193))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_28);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_28, &cLocal_193, true);
				__LIB_1__::func_336(&iLocal_449, 512);
			}
		}
	}
}

void func_113()
{
	if (__LIB_0__::func_27(iLocal_449, 1024))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_28.f_5))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_28.f_1, false))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_28.f_1, true, false))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_28.f_1, false))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_28.f_1, &cLocal_197);
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_28.f_1, &cLocal_197))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_28.f_1, "Thief", &vLocal_16, true, &cLocal_197, 2))
					{
						vLocal_218[0 /*3*/] = { vLocal_16 };
						vLocal_218[1 /*3*/] = { vLocal_16 };
						__LIB_1__::func_336(&iLocal_449, 1024);
					}
				}
			}
		}
	}
	else
	{
		__LIB_1__::func_336(&iLocal_449, 1024);
	}
}

void func_114()
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(Global_35, vLocal_228, 1);
	if (fVar0 < 5f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
		if (fVar0 < (5f / 2f))
		{
			if (PED::GET_PED_STEALTH_MOVEMENT(Global_35) || PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
			{
				PED::SET_PED_STEALTH_MOVEMENT(Global_35, 0, 0, 0);
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			}
		}
	}
}

void func_115()
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(Global_35, vLocal_228, 1);
	if (fVar0 < 5f)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 108, true);
		PED::SET_PED_RESET_FLAG(Global_35, 94, false);
		PED::SET_PED_RESET_FLAG(Global_35, 289, true);
	}
}

void func_117(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iLocal_478 = ITEMSET::CREATE_ITEMSET(false);
	LAW::_0x0C392DB374655176(Local_252.f_51, iParam0, iLocal_478);
	iLocal_473 = ITEMSET::GET_ITEMSET_SIZE(iLocal_478);
	if (iLocal_473 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_473)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iLocal_478);
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(iVar1));
			if (__LIB_2__::func_1(iVar2, 0, 1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
				PED::DELETE_PED(&iVar2);
			}
			iVar0++;
		}
	}
}

void func_118()
{
	switch (iLocal_101)
	{
		case 0:
			vLocal_218[0 /*3*/] = { 2740.582f, -1252.033f, 48.77484f };
			vLocal_218[1 /*3*/] = { vLocal_16 };
			vLocal_218[2 /*3*/] = { 2784.354f, -1141.694f, 45.65385f };
			break;
		case 1:
			vLocal_218[0 /*3*/] = { 2540.22f, -1174.219f, 49.6731f };
			vLocal_218[1 /*3*/] = { 2539.965f, -1157.861f, 49.67161f };
			vLocal_218[2 /*3*/] = { 2542.371f, -1069.98f, 48.76318f };
			break;
		case 2:
			vLocal_218[0 /*3*/] = { 2958.647f, 567.5205f, 43.78986f };
			break;
	}
}

void func_120(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	iVar5 = ITEMSET::CREATE_ITEMSET(false);
	LAW::_0x0C392DB374655176(vParam0, fParam3, iVar5);
	iVar6 = ITEMSET::GET_ITEMSET_SIZE(iVar5);
	if (iVar6 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar6)
		{
			iVar1 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar5));
			if (__LIB_2__::func_1(iVar1, 0, 1))
			{
				vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
				if (ENTITY::IS_ENTITY_OCCLUDED(iVar1))
				{
					PED::DELETE_PED(&iVar1);
				}
			}
			iVar0++;
		}
	}
	ITEMSET::_CLEAR_ITEMSET(iVar5);
	ITEMSET::DESTROY_ITEMSET(iVar5);
}

void func_121(int iParam0, int iParam1, bool bParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	if (!__LIB_2__::func_1(iParam1, 0, 1))
	{
		return;
	}
	if (bParam2)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
		{
			__LIB_3__::func_558(&iParam0, vParam3, vParam6, vParam9, "law_avoidance");
			POPULATION::_0xB56D41A694E42E86(iParam0, 16384, 0, 0, -1, -1, 0);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		PED::_0x7C00CFC48A782DC0(iParam0, iParam1, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

void func_122()
{
	int iVar0;
	if (iLocal_101 != 1)
	{
		return;
	}
	iVar0 = __LIB_0__::func_120(269);
	if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(PERSCHAR::_0x31C70A716CAE1FEE(iVar0)))
		{
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
		}
	}
}

void func_125()
{
	if (!__LIB_0__::func_27(iLocal_449, 16777216))
	{
		__LIB_3__::func_152(103);
		__LIB_0__::func_7(&Global_1935630, 4);
		__LIB_1__::func_336(&iLocal_449, 16777216);
	}
}

void func_126()
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_27(iLocal_449, 16))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_184[0], -285312975))
		{
			iVar0 = __LIB_0__::func_492(1);
			iLocal_191 = BUILTIN::CEIL((IntToFloat(iVar0) * 0.05f));
			iVar1 = BUILTIN::CEIL((IntToFloat(iVar0) * 0.08f));
			if (iLocal_191 > 60000)
			{
				iLocal_191 = 60000;
				iVar1 = 65500;
			}
			__LIB_2__::func_522(iLocal_191, 0, 0, 1, 1);
			__LIB_2__::func_190(iLocal_184[0], iVar1);
			Local_493 = 1;
			Local_493.f_12[0] = iLocal_191;
			Local_493.f_1[0] = joaat("CURRENCY_CASH");
			MISC::_0xBB282CF5D2333FB8(iLocal_184[0], &Local_493);
			__LIB_1__::func_336(&iLocal_449, 16);
		}
	}
}

char* func_129(char* sParam0)
{
	char cVar0[64];
	char cVar8[64];
	StringCopy(&cVar8, "RE_PP_", 64);
	if (iLocal_101 == 0)
	{
		StringCopy(&cVar0, "STD_V1_", 64);
	}
	else if (iLocal_101 == 1)
	{
		StringCopy(&cVar0, "STD_V2_", 64);
	}
	else if (iLocal_101 == 2)
	{
		StringCopy(&cVar0, "VHT_V1_", 64);
	}
	StringConCat(&cVar8, &cVar0, 64);
	__LIB_0__::func_482(sParam0);
	StringConCat(&cVar8, sParam0, 64);
	return __LIB_1__::func_569(cVar8);
}

void func_131()
{
	if (!__LIB_2__::func_1(iLocal_184[0], 0, 1))
	{
		__LIB_0__::func_172(iLocal_484);
	}
	if (!Local_252.f_46)
	{
		func_307(&uLocal_108);
	}
	switch (iLocal_251)
	{
		case 0:
			if (iLocal_447 == 5)
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_184[0], 225, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_184[0], 386, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_184[0], 406, true);
				PED::_0x06D26A96CA1BCA75(iLocal_184[0], 8, 1f, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_184[0], 356, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_184[0], 497, true);
				func_308(1.5f, 0);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_184[0], true, 0f);
				iLocal_251 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_27(iLocal_449, 8))
			{
				func_308(3f, 1);
				if (__LIB_0__::func_86(vLocal_16))
				{
					iLocal_251 = 3;
				}
				else
				{
					iLocal_251 = 2;
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_27(iLocal_449, 2048))
			{
				if (Local_252.f_46)
				{
					if (func_309())
					{
						if (!__LIB_0__::func_27(iLocal_449, 262144))
						{
							__LIB_1__::func_336(&iLocal_449, 262144);
						}
						iLocal_251 = 4;
						Jump @1169; //curOff = 313
					}
					else
					{
						__LIB_2__::func_571(&(Local_252.f_5), &uLocal_459);
					}
				}
			}
			if (func_311())
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_184[0], Global_35, 3, 0, 0f, -1, 0);
				iLocal_251 = 3;
			}
			break;
		case 3:
			if (!__LIB_0__::func_27(iLocal_449, 2048))
			{
				if (Local_252.f_46)
				{
					if (func_309())
					{
						if (!__LIB_0__::func_27(iLocal_449, 262144))
						{
							__LIB_1__::func_336(&iLocal_449, 262144);
						}
						iLocal_251 = 4;
						Jump @1169; //curOff = 417
					}
					else
					{
						__LIB_2__::func_571(&(Local_252.f_5), &uLocal_459);
					}
				}
			}
			break;
		case 4:
			if ((!ENTITY::IS_ENTITY_OCCLUDED(iLocal_184[0]) && !PED::IS_PED_RAGDOLL(iLocal_184[0])) && !TASK::IS_PED_GETTING_UP(iLocal_184[0]))
			{
				__LIB_0__::func_172(iLocal_484);
				PED::_0x24C82EF607105FAA(iLocal_184[0], joaat("SCRIPTEDTIMIDROB"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_184[0], false);
				__LIB_2__::func_603(&(iLocal_184[0]), &iLocal_111, &Local_132, 1, 1);
				iLocal_476 = MISC::GET_HASH_KEY(func_129("GIVEIT"));
				PLAYER::_0x216BC0D3D2E413D2(PLAYER::PLAYER_ID(), func_129("GIVEIT"));
				PED::_0x41C23A8E6B344867(iLocal_184[0], func_129("GIVE_UP"));
				__LIB_1__::func_336(&iLocal_449, 1073741824 /* Float: 2f */);
				func_313(1);
				if (!PED::_0x3BDFCF25B58B0415(iLocal_184[0]))
				{
					EVENT::_0x7C511E91738A0828(Global_35, iLocal_184[0], 41, 0);
					PED::_0x2208438012482A1A(iLocal_184[0], false, false);
				}
				else
				{
					EVENT::_0x7C511E91738A0828(Global_35, iLocal_184[0], 41, 0);
					PED::_0x2208438012482A1A(iLocal_184[0], false, false);
				}
				iLocal_251 = 5;
			}
			break;
		case 5:
			func_39(0);
			if (PED::_0xE33F98BD76490ABC(iLocal_184[0], PLAYER::PLAYER_ID(), 0) || (__LIB_3__::func_578(iLocal_184[0]) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)))
			{
				iLocal_470 = __LIB_0__::func_492(1);
				__LIB_0__::func_172(iLocal_484);
				iLocal_251 = 6;
			}
			break;
		case 6:
			func_39(0);
			func_315();
			func_316(0);
			if ((!PED::_0xE33F98BD76490ABC(iLocal_184[0], PLAYER::PLAYER_ID(), 0) || __LIB_3__::func_578(iLocal_184[0])) || __LIB_0__::func_492(1) > iLocal_470)
			{
				TASK::_0x2948235DB2058E99(iLocal_184[0], 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_184[0], 356, false);
				MAP::REMOVE_BLIP(&(uLocal_187[0]));
				func_313(0);
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_184[0], Global_35, 3, 1024, 0f, -1, 0);
				func_316(1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_184[0], 3, 2, 1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_184[0], 4, 2, 1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_184[0], 7, 2, 1);
				iLocal_251 = 7;
			}
			break;
		case 7:
			func_315();
			if (__LIB_0__::func_27(iLocal_449, 16384))
			{
				if (!__LIB_0__::func_27(iLocal_449, 2097152))
				{
					if ((__LIB_2__::func_227(0, 1, iLocal_184[0], 1) && __LIB_2__::func_227(0, 1, Global_35, 1)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						if (!__LIB_0__::func_27(iLocal_449, 33554432))
						{
							__LIB_2__::func_303(iLocal_184[0], Global_35, func_129("CUT_FREE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							if (__LIB_0__::func_27(iLocal_449, 4194304))
							{
								__LIB_1__::func_336(&iLocal_449, 2097152);
							}
							else
							{
								__LIB_1__::func_336(&iLocal_449, 33554432);
							}
						}
						else
						{
							__LIB_2__::func_303(iLocal_184[0], Global_35, func_129("GIVE_UP_FLEE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_336(&iLocal_449, 2097152);
						}
					}
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_184[0], false);
					iLocal_251 = 8;
				}
			}
			break;
		case 8:
			func_44();
			break;
	}
}

bool func_132()
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_28, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_28) > 0.97f)
	{
		__LIB_1__::func_336(&iLocal_449, 8);
		__LIB_2__::func_303(Global_35, iLocal_184[0], func_129("STOLEN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 0, 1, 291934926, 1, 0, 0);
		TASK::TASK_REACT(iLocal_184[1], Global_35, Global_36, "DEFAULT_SHOCKED", 5f, 0, 4);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_28, "Player", Global_35);
		PED::_0x2208438012482A1A(Global_35, false, false);
		AUDIO::TRIGGER_MUSIC_EVENT("REPP_START");
		return true;
	}
	return false;
}

void func_133()
{
	if (!__LIB_0__::func_27(iLocal_449, 524288))
	{
		if (__LIB_2__::func_227(-5f, 1, Global_35, 1))
		{
			if (__LIB_2__::func_1(iLocal_184[1], 0, 1) && __LIB_0__::func_27(iLocal_449, 8))
			{
				if (__LIB_1__::func_985())
				{
					__LIB_2__::func_303(iLocal_184[1], Global_35, func_129("OWNER_NOTICE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_303(iLocal_184[1], Global_35, func_129("OWNER_STEAL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_336(&iLocal_449, 524288);
			}
		}
	}
}

void func_134()
{
	if (__LIB_2__::func_1(iLocal_184[0], 0, 0))
	{
		if (!PED::_IS_PED_HOGTIED(iLocal_184[0]))
		{
			if (!__LIB_0__::func_27(iLocal_449, 262144))
			{
				if (__LIB_2__::func_227(0, 1, iLocal_184[0], 1) && __LIB_2__::func_227(0, 1, Global_35, 1))
				{
					switch (iLocal_471)
					{
						case 0:
							func_318(&iLocal_471, 6f, 8f);
							break;
						case 1:
							if ((__LIB_0__::func_265(&uLocal_460) >= fLocal_469 && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_184[0])) && !func_320(1092616192 /* Float: 10f */))
							{
								__LIB_2__::func_303(iLocal_184[0], Global_35, func_129("THIEF_FLEE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
								func_318(&iLocal_471, 6f, 12f);
							}
							break;
						case 2:
							if (!__LIB_0__::func_27(iLocal_449, 8192))
							{
								if ((__LIB_0__::func_265(&uLocal_460) >= fLocal_469 && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_184[0])) && !func_320(1092616192 /* Float: 10f */))
								{
									__LIB_2__::func_303(iLocal_184[0], Global_35, func_129("THIEF_TAUNT"), 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
									func_318(&iLocal_471, 6f, 12f);
								}
							}
							break;
						case 3:
							if (!__LIB_0__::func_27(iLocal_449, 8192))
							{
								if ((__LIB_0__::func_265(&uLocal_460) >= fLocal_469 && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_184[0])) && !func_320(1092616192 /* Float: 10f */))
								{
									__LIB_2__::func_303(iLocal_184[0], Global_35, func_129("THIEF_TAUNT"), 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
									func_318(&iLocal_471, 6f, 12f);
								}
							}
							break;
						case 4:
							if (!__LIB_0__::func_27(iLocal_449, 8192))
							{
								if (((__LIB_0__::func_265(&uLocal_460) >= fLocal_469 && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_184[0])) && __LIB_0__::func_665(Global_35, iLocal_184[0], 1, 1) > 10f) && !func_320(1092616192 /* Float: 10f */))
								{
									__LIB_2__::func_303(iLocal_184[0], Global_35, func_129("THIEF_TAUNT"), 0, -1082130432 /* Float: -1f */, 3, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
									func_318(&iLocal_471, 6f, 12f);
								}
							}
							break;
						case 5:
							break;
					}
				}
			}
		}
		else if (!__LIB_13__::func_183(Global_35))
		{
			if (ENTITY::_0x8DE41E9902E85756(iLocal_184[0]))
			{
				if (!__LIB_0__::func_27(iLocal_449, 32))
				{
					__LIB_2__::func_303(Global_35, iLocal_184[0], func_129("RETRIEVE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_336(&iLocal_449, 32);
					return;
				}
			}
			if (!__LIB_0__::func_27(iLocal_449, 4194304))
			{
				__LIB_1__::func_336(&iLocal_449, 4194304);
			}
			switch (iLocal_472)
			{
				case 0:
					if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, iLocal_184[0], 1))
					{
						__LIB_2__::func_303(iLocal_184[0], Global_35, func_129("HOGTIED"), 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_318(&iLocal_472, 6f, 12f);
					}
					break;
				case 1:
					if (((__LIB_0__::func_265(&uLocal_460) >= fLocal_469 && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_184[0])) && __LIB_2__::func_227(0, 1, Global_35, 1)) && __LIB_2__::func_227(0, 1, iLocal_184[0], 1))
					{
						__LIB_2__::func_303(iLocal_184[0], Global_35, func_129("HOGTIED"), 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_318(&iLocal_472, 8f, 15f);
					}
					break;
				case 2:
					if (((__LIB_0__::func_265(&uLocal_460) >= fLocal_469 && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_184[0])) && __LIB_2__::func_227(0, 1, Global_35, 1)) && __LIB_2__::func_227(0, 1, iLocal_184[0], 1))
					{
						if (__LIB_3__::func_578(iLocal_184[0]))
						{
							__LIB_2__::func_303(iLocal_184[0], Global_35, func_129("HOGTIED"), 0, -1082130432 /* Float: -1f */, 3, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						func_318(&iLocal_472, 6f, 12f);
					}
					break;
				case 3:
					if (PED::_GET_CARRIER_AS_PED(iLocal_184[0]) == Global_35)
					{
						if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, iLocal_184[0], 1))
						{
							__LIB_2__::func_303(iLocal_184[0], Global_35, func_129("CARRY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_318(&iLocal_472, 6f, 12f);
						}
					}
					break;
				case 4:
					if (PED::_GET_CARRIER_AS_PED(iLocal_184[0]) == Global_35)
					{
						if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, iLocal_184[0], 1))
						{
							__LIB_2__::func_303(iLocal_184[0], Global_35, func_129("CARRY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_318(&iLocal_472, 6f, 12f);
						}
					}
					break;
				case 5:
					break;
			}
		}
	}
}

bool func_135()
{
	if (__LIB_2__::func_118(iLocal_184[0], 1, 1) > 80f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_184[0]))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("REPP_LEAVE");
		return true;
	}
	return false;
}

int func_167(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
						return -785635151;
						return 1586170447;
						return -291036947;
						return -832026176;
						Jump @5427; //curOff = 4877
						switch (iParam1)
						{
							case 0:
								return -981210833;
							case 1:
								return 875440489;
							default:
								break;
						}
						return -508430848;
						Jump @5427; //curOff = 4924
						switch (iParam1)
						{
							case 0:
								return 1491780341;
							case 1:
								return 1920169067;
							default:
								break;
						}
						return -227796128;
						Jump @5427; //curOff = 4971
						switch (iParam1)
						{
							case 0:
								return -1255044808;
							case 1:
								return -1012076841;
							default:
								break;
						}
						return -871899648;
						Jump @5427; //curOff = 5018
						switch (iParam1)
						{
							case 0:
								return 792345848;
							case 1:
								return 121209110;
							default:
								break;
						}
						return 14115413;
						Jump @5427; //curOff = 5064
						switch (iParam1)
						{
							case 0:
								return -1152301466;
							case 1:
								return -1113682855;
							case 2:
								return -1801389871;
							case 3:
								return -180725957;
							case 4:
								return 1811628790;
							default:
								break;
						}
						return 2016864128;
						Jump @5427; //curOff = 5153
						switch (iParam1)
						{
							case 0:
								return 635397890;
							default:
								break;
						}
						return -717212864;
						Jump @5427; //curOff = 5186
						return 1487351956;
						Jump @5427; //curOff = 5197
						switch (iParam1)
						{
							case 0:
								return 1955914312;
							case 1:
								return 1685893021;
							case 2:
								return -711771194;
							case 3:
								return 146337879;
							default:
								break;
						}
						return 205846784;
						Jump @5427; //curOff = 5272
						switch (iParam1)
						{
							case 0:
								return -775876869;
							case 1:
								return -39469638;
							default:
								break;
						}
						return 1483441280;
						Jump @5427; //curOff = 5319
						switch (iParam1)
						{
							case 0:
								return 2113065035;
							case 1:
								return -2101774133;
							default:
								break;
						}
						return -815072896;
						Jump @5427; //curOff = 5366
						return -689015496;
						Jump @5427; //curOff = 5377
						switch (iParam1)
						{
							case 0:
								return -18903616;
							case 1:
								return -1607469655;
							default:
								break;
						}
						return -640409664;
					}
					else
					{
						switch (iParam0)
						{
							case 119:
								return 1996937952;
						}
					}
					return 1968536545;
				}
void func_168(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (__LIB_0__::func_2() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_280(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_449(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_2__::func_588(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
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

int func_307(var uParam0)
{
	if (Local_252.f_46)
	{
		return 1;
	}
	if (__LIB_0__::func_27(iLocal_449, 67108864))
	{
		if (!__LIB_0__::func_75(uParam0))
		{
			__LIB_1__::func_148(uParam0);
		}
		else if (__LIB_0__::func_265(uParam0) > 2f)
		{
			Local_252.f_46 = 1;
			return 1;
		}
	}
	return 0;
}

void func_308(float fParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_184[0], -1))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_28, "Thief", iLocal_184[0]);
	}
	if (bParam1)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 256;
	}
	TASK::_0x2E1D6D87346BB7D2(iLocal_184[0], Global_35, 0, 0);
	fParam0 = fParam0;
	vLocal_218[0 /*3*/] = { vLocal_218[0 /*3*/] };
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, iVar1, 0f, -1, 0);
	Local_252.f_50 = 1;
	__LIB_1__::func_474(iLocal_184[0], &iVar0, 0, 0, 1, 1);
}

bool func_309()
{
	if (Local_252.f_98[0] < 10f)
	{
		return true;
	}
	return false;
}

bool func_311()
{
	if (__LIB_0__::func_86(vLocal_16) || !__LIB_2__::func_1(iLocal_184[0], 0, 1))
	{
		return true;
	}
	if (!__LIB_0__::func_27(iLocal_449, 8192))
	{
		if (!__LIB_0__::func_27(iLocal_449, 2048))
		{
			if (__LIB_0__::func_94(iLocal_184[0], vLocal_16, 1) < 0.8f)
			{
				if (__LIB_0__::func_94(Global_35, vLocal_16, 1) > 4f)
				{
					TASK::CLEAR_PED_TASKS(iLocal_184[0], true, false);
					ANIMSCENE::START_ANIM_SCENE(Local_28.f_1);
					__LIB_1__::func_336(&iLocal_449, 2048);
				}
				else
				{
					return true;
				}
			}
		}
		else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_28.f_1, false))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_28.f_1) > 0.99f)
			{
				__LIB_0__::func_516(&iLocal_449, 2048);
				return true;
			}
		}
		else
		{
			__LIB_0__::func_516(&iLocal_449, 2048);
			return true;
		}
	}
	return false;
}

void func_313(bool bParam0)
{
	if (bParam0)
	{
		TASK::_0x2948235DB2058E99(iLocal_184[0], 16384);
		TASK::_0x2948235DB2058E99(iLocal_184[0], 65536);
		TASK::_0x2948235DB2058E99(iLocal_184[0], 2048);
		__LIB_1__::func_336(&iLocal_449, 134217728);
	}
	else
	{
		TASK::_0xB2F47A1AFDFCC595(iLocal_184[0], 16384);
		TASK::_0xB2F47A1AFDFCC595(iLocal_184[0], 65536);
		TASK::_0xB2F47A1AFDFCC595(iLocal_184[0], 2048);
		__LIB_1__::func_336(&iLocal_449, 134217728);
	}
}

int func_315()
{
	if (__LIB_0__::func_27(iLocal_449, 16384))
	{
		return 1;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_184[0]))
	{
		if (iLocal_101 == 0 || (iLocal_101 == 1 && __LIB_3__::func_578(iLocal_184[0])))
		{
		}
		else
		{
			__LIB_2__::func_303(iLocal_184[0], Global_35, func_129("GIVE_UP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		__LIB_1__::func_336(&iLocal_449, 16384);
		return 1;
	}
	return 0;
}

void func_316(bool bParam0)
{
	if (!__LIB_0__::func_27(iLocal_449, 268435456))
	{
		if ((((__LIB_3__::func_578(iLocal_184[0]) || ENTITY::_0xEF2D9ED7CE684F08(iLocal_184[0]) == Global_35) || __LIB_0__::func_27(iLocal_449, 131072)) || !__LIB_2__::func_1(iLocal_184[0], 0, 1)) || bParam0)
		{
			if (!__LIB_0__::func_27(iLocal_449, 131072))
			{
				__LIB_1__::func_336(&iLocal_449, 131072);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("REPP_MID");
			__LIB_1__::func_336(&iLocal_449, 268435456);
		}
	}
}

void func_318(int iParam0, float fParam1, float fParam2)
{
	__LIB_1__::func_148(&uLocal_460);
	fLocal_469 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam1, fParam2);
	*iParam0++;
}

bool func_320(float fParam0)
{
	if (iLocal_101 != 0)
	{
		return false;
	}
	if (__LIB_0__::func_94(Global_35, vLocal_16, 1) < fParam0)
	{
		return true;
	}
	return false;
}

int func_449(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_2__::func_525(*uParam0, iParam1, uParam3))
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
						return func_449(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

