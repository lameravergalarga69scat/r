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
	struct<162> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 1;
	var uLocal_181 = 1;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = -1;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 1;
	var uLocal_199 = -1;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	struct<32> Local_208[4];
	struct<12> Local_337[1];
	int iLocal_350 = 0;
	struct<5> Local_351[6];
	int iLocal_382[4] = { 0, 0, 0, 0 };
	float fLocal_387 = 0f;
	int iLocal_388 = 0;
	vector3 vLocal_389[24] = "";
	int iLocal_392 = 0;
	var uLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	var uLocal_398 = 0;
	bool bLocal_399 = false;
	bool bLocal_400 = false;
	bool bLocal_401 = false;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	var uLocal_410[4] = { 0, 0, 0, 0 };
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	bool bLocal_417 = false;
	bool bLocal_418 = false;
	bool bLocal_419 = false;
	bool bLocal_420 = false;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
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
	iLocal_388 = joaat("P_DETONATOR01X");
	iLocal_396 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_3__::func_429(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP(), 106);
		bLocal_401 = true;
	}
	if (!bLocal_401)
	{
		Local_14.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		Local_14.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		uLocal_393 = uLocal_393;
		func_4();
		__LIB_3__::func_368(&Local_14, 1);
		func_6();
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_401, 552, 0);
		if (bLocal_401)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_396)
			{
				case 1:
					if (__LIB_3__::func_454(&Local_14, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						iLocal_397 = __LIB_0__::func_979(Local_14.f_51);
						func_11(&Local_14, &iLocal_397, &(Local_14.f_51.f_4));
						func_12(iLocal_397);
						func_13(iLocal_397);
						iLocal_396 = 0;
					}
					else if (Local_14.f_160)
					{
						func_7();
					}
					break;
				case 0:
					if (func_14())
					{
						func_15();
						__LIB_3__::func_400(Local_14.f_51, &Local_337, Local_14.f_51.f_3, 0, 0, -1, 0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_337[0 /*12*/].f_8, 1);
						iLocal_396 = 4;
					}
					break;
				case 4:
					if (!__LIB_17__::func_903(&Local_14, &iLocal_382, iLocal_350, 1, 1, 0, 1, 0))
					{
						func_7();
					}
					if (func_18())
					{
						Local_14.f_50 = 1;
						func_7();
					}
					if (__LIB_3__::func_365(&Local_14, &iLocal_382, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0))
					{
						bLocal_401 = true;
					}
					break;
			}
			BUILTIN::WAIT(Local_14.f_158);
		}
	}
}

void func_4()
{
	if (__LIB_3__::func_657(72) >= 2)
	{
		iLocal_350 = 1;
	}
}

void func_6()
{
	Local_337[0 /*12*/].f_7 = joaat("P_CS_NOOSE01XB");
	Local_337[0 /*12*/] = { 0f, 0f, -1f };
	Local_337[0 /*12*/].f_10 = 0;
}

void func_7()
{
	int iVar0;
	if (!PHYSICS::_0x79C2BEC82CFD7F7F(iLocal_409) && ENTITY::DOES_ENTITY_EXIST(iLocal_382[0]))
	{
		PED::DELETE_PED(&(iLocal_382[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_408))
	{
		ENTITY::DELETE_ENTITY(&iLocal_408);
	}
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_REWH_Area", false, true);
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(iLocal_382[iVar0], 0, 1))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_382[iVar0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		__LIB_2__::func_788(&(iLocal_382[iVar0]), 1, 1, 1);
		iVar0++;
	}
	if (iLocal_428 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_428);
	}
	if (iLocal_429 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_429);
	}
	__LIB_4__::func_493(&Local_14, &iLocal_382, &uLocal_410, 0, iLocal_397, Local_14.f_51.f_4, 0, 1, 0, 1);
	__LIB_3__::func_480(&Local_337);
	__LIB_4__::func_333(&Local_14);
	if (Local_14.f_44)
	{
	}
	if (MAP::DOES_BLIP_EXIST(Local_14.f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(Local_14.f_51.f_6));
	}
	__LIB_0__::func_325(&iLocal_415);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_11(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 0;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 0;
			*uParam2 = 1;
			break;
		case 2:
			*iParam1 = 0;
			*uParam2 = 2;
			break;
		case 3:
			*iParam1 = 0;
			*uParam2 = 3;
			break;
		case 4:
			*iParam1 = 0;
			*uParam2 = 4;
			break;
		case 5:
			*iParam1 = 10;
			*uParam2 = 0;
			break;
		case 6:
			*iParam1 = 10;
			*uParam2 = 1;
			break;
		case 7:
			*iParam1 = 10;
			*uParam2 = 2;
			break;
		case 8:
			*iParam1 = 10;
			*uParam2 = 3;
			break;
	}
}

void func_12(int iParam0)
{
	Local_208[0 /*32*/].f_1 = joaat("A_M_M_UNICORPSE_01");
	Local_208[0 /*32*/] = 4;
	Local_208[0 /*32*/].f_6 = { 0f, 0f, 0f };
	switch (__LIB_3__::func_657(72))
	{
		case 0:
			Local_208[0 /*32*/].f_3 = 152538979;
			break;
		case 1:
			Local_208[0 /*32*/].f_3 = 869917927;
			break;
		case 2:
			Local_208[0 /*32*/].f_3 = -1258854628;
			break;
		default:
			Local_208[0 /*32*/].f_3 = -1557019759;
			break;
	}
	if (iLocal_350 == 0)
	{
		switch (iParam0)
		{
			case 0:
			case 2:
				Local_208[1 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
				Local_208[1 /*32*/] = 4;
				Local_208[1 /*32*/].f_6 = { 0f, 0f, 0f };
				Local_208[1 /*32*/].f_3 = 722162856;
				StringCopy(&(Local_208[1 /*32*/].f_23), "SWAMP_GANG_3", 64);
				Local_208[2 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
				Local_208[2 /*32*/] = 4;
				Local_208[2 /*32*/].f_6 = { 0f, 0f, 0f };
				Local_208[2 /*32*/].f_3 = 1225232544;
				StringCopy(&(Local_208[2 /*32*/].f_23), "SWAMP_GANG_3", 64);
				Local_208[3 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
				Local_208[3 /*32*/] = 4;
				Local_208[3 /*32*/].f_6 = { 0f, 0f, 0f };
				Local_208[3 /*32*/].f_3 = 1590017052;
				StringCopy(&(Local_208[3 /*32*/].f_23), "SWAMP_GANG_3", 64);
				StringCopy(&cLocal_389, "SWAMP3_CHARGE_HISS", 24);
				break;
			case 10:
				Local_208[1 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
				Local_208[1 /*32*/] = 4;
				Local_208[1 /*32*/].f_6 = { 0f, 0f, 0f };
				Local_208[1 /*32*/].f_3 = 722162856;
				StringCopy(&(Local_208[1 /*32*/].f_23), "0202_G_M_M_UniInbred_02_WHITE_02", 64);
				Local_208[2 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
				Local_208[2 /*32*/] = 4;
				Local_208[2 /*32*/].f_6 = { 0f, 0f, 0f };
				Local_208[2 /*32*/].f_3 = 1225232544;
				StringCopy(&(Local_208[2 /*32*/].f_23), "0202_G_M_M_UniInbred_02_WHITE_02", 64);
				Local_208[3 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
				Local_208[3 /*32*/] = 4;
				Local_208[3 /*32*/].f_6 = { 0f, 0f, 0f };
				Local_208[3 /*32*/].f_3 = 1590017052;
				StringCopy(&(Local_208[3 /*32*/].f_23), "0202_G_M_M_UniInbred_02_WHITE_02", 64);
				StringCopy(&cLocal_389, "ITS_MALE_EXTREME", 24);
				break;
		}
		__LIB_3__::func_478(&(Local_208[1 /*32*/].f_22));
		__LIB_3__::func_478(&(Local_208[2 /*32*/].f_22));
		__LIB_3__::func_478(&(Local_208[3 /*32*/].f_22));
	}
}

void func_13(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			switch (Local_14.f_51.f_4)
			{
				case 0:
					fLocal_387 = 3f;
					Local_351[0 /*5*/] = { 2381.604f, -678.5245f, 41.2238f };
					Local_351[1 /*5*/] = { 2367.054f, -669.6215f, 41.4131f };
					Local_351[2 /*5*/] = { 2385.348f, -689.6441f, 41.0374f };
					Local_351[3 /*5*/] = { 2364.461f, -703.4193f, 40.7485f };
					Local_351[4 /*5*/] = { 2369.094f, -713.1428f, 40.7574f };
					Local_351[5 /*5*/] = { 2344.417f, -687.4647f, 40.3963f };
					iLocal_392 = 980234126;
					break;
				case 1:
					fLocal_387 = 6.5f;
					Local_351[0 /*5*/] = { 1642.155f, -989.0815f, 40.7646f };
					Local_351[1 /*5*/] = { 1653.169f, -1003.109f, 40.6712f };
					Local_351[2 /*5*/] = { 1666.871f, -992.6511f, 40.6167f };
					Local_351[3 /*5*/] = { 1655.868f, -962.4775f, 40.8757f };
					Local_351[4 /*5*/] = { 1641.079f, -970.9093f, 40.8529f };
					Local_351[5 /*5*/] = { 1638.028f, -955.3726f, 40.8534f };
					iLocal_392 = 386231914;
					break;
				case 2:
					fLocal_387 = 2.5f;
					Local_351[0 /*5*/] = { 2178.51f, -479.6416f, 41.2001f };
					Local_351[1 /*5*/] = { 2160.796f, -471.0745f, 40.6181f };
					Local_351[2 /*5*/] = { 2173.271f, -437.608f, 40.4018f };
					Local_351[3 /*5*/] = { 2195.132f, -422.9783f, 39.7f };
					Local_351[4 /*5*/] = { 2201.786f, -459.6351f, 40.6278f };
					Local_351[5 /*5*/] = { 2208.477f, -445.0222f, 40.6967f };
					iLocal_392 = -947895270;
					break;
				case 3:
					fLocal_387 = 5f;
					Local_351[0 /*5*/] = { 1798.87f, -917.4672f, 41.0399f };
					Local_351[1 /*5*/] = { 1818.853f, -889.8535f, 41.2592f };
					Local_351[2 /*5*/] = { 1807.716f, -888.3163f, 41.2004f };
					Local_351[3 /*5*/] = { 1846.442f, -894.4678f, 41.2318f };
					Local_351[4 /*5*/] = { 1844.636f, -915.2886f, 41.2117f };
					Local_351[5 /*5*/] = { 1822.49f, -960.1116f, 40.082f };
					iLocal_392 = 18956962;
					break;
				case 4:
					fLocal_387 = 4.5f;
					Local_351[0 /*5*/] = { 1704.468f, -712.8593f, 40.7028f };
					Local_351[1 /*5*/] = { 1707.328f, -724.0922f, 40.52f };
					Local_351[2 /*5*/] = { 1701.637f, -736.1314f, 40.8871f };
					Local_351[3 /*5*/] = { 1689.071f, -749.2666f, 40.6226f };
					Local_351[4 /*5*/] = { 1665.567f, -739.8066f, 40.5219f };
					Local_351[5 /*5*/] = { 1649.841f, -718.8126f, 40.4619f };
					iLocal_392 = 1587477916;
					break;
			}
			break;
		case 10:
			switch (Local_14.f_51.f_4)
			{
				case 0:
					fLocal_387 = 4f;
					Local_351[0 /*5*/] = { 2455.377f, 1311.11f, 111.0119f };
					Local_351[1 /*5*/] = { 2439.848f, 1309.309f, 113.972f };
					Local_351[2 /*5*/] = { 2433.122f, 1296.736f, 114.1275f };
					Local_351[3 /*5*/] = { 2432.646f, 1266.923f, 111.4637f };
					Local_351[4 /*5*/] = { 2475.258f, 1276.263f, 118.9429f };
					Local_351[5 /*5*/] = { 2478.071f, 1302.927f, 113.8858f };
					iLocal_392 = 187740801;
					break;
				case 1:
					fLocal_387 = 3f;
					Local_351[0 /*5*/] = { 2677.001f, 1770.816f, 104.4724f };
					Local_351[1 /*5*/] = { 2699.859f, 1758.607f, 113.7695f };
					Local_351[2 /*5*/] = { 2723.403f, 1772.023f, 118.5926f };
					Local_351[3 /*5*/] = { 2654.84f, 1793.662f, 99.0165f };
					Local_351[4 /*5*/] = { 2654.813f, 1812.082f, 95.9214f };
					Local_351[5 /*5*/] = { 2724.169f, 1797.686f, 115.5204f };
					iLocal_392 = -1939038021;
					break;
				case 2:
					fLocal_387 = 2.5f;
					Local_351[0 /*5*/] = { 3021.08f, 1704.89f, 75.1215f };
					Local_351[1 /*5*/] = { 3036.318f, 1715.678f, 78.3814f };
					Local_351[2 /*5*/] = { 3017.793f, 1715.801f, 76.9615f };
					Local_351[3 /*5*/] = { 2993.655f, 1707.537f, 78.0094f };
					Local_351[4 /*5*/] = { 2998.888f, 1704.022f, 77.3653f };
					Local_351[5 /*5*/] = { 3004.486f, 1689.611f, 76.6323f };
					iLocal_392 = -1613805696;
					break;
				case 3:
					fLocal_387 = 1.5f;
					Local_351[0 /*5*/] = { 2279.092f, 1584.178f, 89.3788f };
					Local_351[1 /*5*/] = { 2294.528f, 1577.505f, 95.7115f };
					Local_351[2 /*5*/] = { 2306.425f, 1597.319f, 86.8008f };
					Local_351[3 /*5*/] = { 2276.351f, 1629.53f, 83.8918f };
					Local_351[4 /*5*/] = { 2301.11f, 1605.774f, 84.8278f };
					Local_351[5 /*5*/] = { 2297.834f, 1612.358f, 83.9911f };
					iLocal_392 = 1623114783;
					break;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Local_351[iVar0 /*5*/].f_3 = 1f;
		iVar0++;
	}
}

bool func_14()
{
	switch (iLocal_394)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_14))
			{
				STREAMING::REQUEST_MODEL(iLocal_388, false);
				STREAMING::_REQUEST_IMAP(iLocal_392);
				__LIB_3__::func_445(&Local_208);
				__LIB_3__::func_314(&Local_337);
				iLocal_394 = 1;
			}
			break;
		case 1:
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_388))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_208))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(Local_337[0 /*12*/].f_7))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_15()
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_382[0]))
	{
		iLocal_382[0] = __LIB_3__::func_870(Local_208[0 /*32*/].f_1, &(Local_208[0 /*32*/]), Local_14.f_51 + Local_208[0 /*32*/].f_6, Local_208[0 /*32*/].f_9, 1, 0, 1, 0, 1);
		__LIB_4__::func_490(iLocal_382[0]);
		__LIB_3__::func_937(iLocal_382[0]);
		switch (iLocal_397)
		{
			case 0:
			case 2:
				if (__LIB_4__::func_177(72, 3) > 0)
				{
					iVar0 = joaat("DOCUMENT_NOTE_HANGED_MAN_NITE_FOLK_2");
				}
				else
				{
					iVar0 = joaat("DOCUMENT_NOTE_HANGED_MAN_NITE_FOLK_1");
				}
				break;
			case 10:
			default:
				if (__LIB_4__::func_177(72, 2) > 0)
				{
					iVar0 = joaat("DOCUMENT_NOTE_HANGED_MURFREE_2");
				}
				else
				{
					iVar0 = joaat("DOCUMENT_NOTE_HANGED_MURFREE_1");
				}
				break;
		}
		__LIB_2__::func_463(iLocal_382[0], iVar0, 1, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_382[0], false, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_382[0], 223, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_382[0], 38, true);
		PED::_0xAE6004120C18DF97(iLocal_382[0], 0, 0);
		TASK::_0x7981037A96E7D174(iLocal_382[0]);
		ENTITY::SET_ENTITY_DYNAMIC(iLocal_382[0], true);
		__LIB_1__::func_991(iLocal_382[0], 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_208[0 /*32*/].f_23)))
		{
			__LIB_2__::func_133(iLocal_382[0], &(Local_208[0 /*32*/].f_23), 0);
		}
		__LIB_3__::func_285(iLocal_382[0], &Local_14, 0);
	}
}

bool func_18()
{
	int iVar0;
	int iVar1;
	func_64();
	if (!bLocal_419)
	{
		iVar0 = PED::_GET_LAST_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0) && __LIB_0__::func_232(iVar0, iLocal_382[0], 1) < 100f)
		{
			PED::_0x2EB75FB86C41F026(iVar0, 3, 1);
			PED::_0x23BDE06596A22CEC(iVar0, 3, 1f, iLocal_382[0]);
			bLocal_419 = true;
		}
	}
	if (iLocal_395 > 0)
	{
		if (PHYSICS::_0x79C2BEC82CFD7F7F(iLocal_409))
		{
			func_66();
		}
		else
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_337[0 /*12*/].f_8) && __LIB_3__::func_411(iLocal_382[0], -668168749, 0))
			{
				ENTITY::DETACH_ENTITY(Local_337[0 /*12*/].f_8, true, true);
				func_66();
			}
			func_68();
		}
	}
	switch (iLocal_395)
	{
		case 0:
			if (__LIB_2__::func_1(iLocal_382[0], 0, 1) && TASK::IS_PED_CUFFED(iLocal_382[0]))
			{
				ENTITY::_0x18FF3110CF47115D(iLocal_382[0], 7, 0);
				if (iLocal_429 == 0)
				{
					iLocal_429 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_DEAD_BODY"), iLocal_382[0], 0f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
				}
				__LIB_1__::func_864(iLocal_382[0], 1, 0);
				__LIB_2__::func_930(iLocal_382[0], 0);
				func_71();
			}
			if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_382[0]))
			{
				if (func_72())
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_382[0]) && ENTITY::IS_ENTITY_DEAD(iLocal_382[0]))
					{
						if (!PED::IS_PED_RAGDOLL(iLocal_382[0]))
						{
							PED::SET_PED_TO_RAGDOLL(iLocal_382[0], 0, 0, 0, true, true, false);
						}
					}
					iLocal_395 = 1;
				}
			}
			break;
		case 1:
			func_68();
			func_73();
			if (__LIB_19__::func_111(Local_14.f_51, &uLocal_402, &uLocal_407, &uLocal_398, 1f, 1110704128 /* Float: 45f */, 0, 0, 15f))
			{
				__LIB_3__::func_426(&Local_14, &(Local_14.f_48), Local_14.f_3, &(Local_14.f_51.f_6));
				__LIB_0__::func_325(&iLocal_415);
				AUDIO::SET_AMBIENT_ZONE_STATE("AZ_REWH_Area", true, true);
				AUDIO::_0x3743CE6948194349("AZ_REWH_Area", Local_14.f_51, 0f);
				if (iLocal_350 == 1)
				{
					iLocal_395 = 5;
				}
				else
				{
					iLocal_395 = 2;
				}
			}
			break;
		case 2:
			func_73();
			if (__LIB_0__::func_665(Global_35, iLocal_382[0], 0, 1) < 6f)
			{
				if (!__LIB_0__::func_75(&uLocal_421))
				{
					__LIB_1__::func_283(&uLocal_421, 0);
				}
				else
				{
					__LIB_2__::func_112(&uLocal_421);
				}
				if (iLocal_350 == 0)
				{
					AUDIO::PREPARE_MUSIC_EVENT("REWH_START");
				}
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				iLocal_395 = 3;
			}
			break;
		case 3:
			func_73();
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (__LIB_0__::func_665(Global_35, iLocal_382[0], 0, 1) >= 6f)
			{
				__LIB_2__::func_113(&uLocal_421);
				iLocal_395 = 2;
			}
			else if (__LIB_1__::func_285(&uLocal_421, 1.5f))
			{
				__LIB_1__::func_148(&uLocal_421);
				iLocal_395 = 4;
			}
			break;
		case 4:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (!bLocal_399)
			{
				func_82();
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_416);
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				TASK::TASK_GO_TO_ENTITY(0, Global_35, 20000, 10f, 2f, 2f, 1);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_416);
				iVar1 = 1;
				while (iVar1 <= 3)
				{
					if (__LIB_2__::func_1(iLocal_382[iVar1], 0, 1))
					{
						if (WEAPON::_0xF29A186ED428B552(iLocal_382[iVar1], joaat("WEAPON_MELEE_KNIFE")))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_382[iVar1], joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_382[iVar1], 93, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_382[iVar1], 58, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_382[iVar1], 46, true);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_382[iVar1], iLocal_416);
						}
						else if (WEAPON::_0xF29A186ED428B552(iLocal_382[iVar1], joaat("WEAPON_SHOTGUN_SAWEDOFF")))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_382[iVar1], joaat("WEAPON_SHOTGUN_SAWEDOFF"), false, 0, false, false);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_382[iVar1], iLocal_416);
						}
					}
					iVar1++;
				}
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_416);
				Local_14.f_44 = 1;
				iLocal_395 = 5;
			}
			break;
		case 5:
			if (iLocal_350 == 0)
			{
				func_83();
			}
			if (func_84(&iLocal_382, 1))
			{
				if (__LIB_1__::func_992(Global_35, Local_14.f_51, 1) >= 10000f)
				{
					return true;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			}
			break;
	}
	return false;
}

void func_64()
{
	int iVar0;
	if (bLocal_417)
	{
		return;
	}
	if (__LIB_1__::func_313(&uLocal_424, 2f))
	{
		iVar0 = 1;
		while (iVar0 <= 3)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_382[iVar0]))
			{
				__LIB_2__::func_478(iLocal_382[iVar0], 0, &cLocal_389, 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				bLocal_417 = true;
			}
			else
			{
				iVar0++;
			}
		}
	}
}

void func_66()
{
	if (bLocal_400)
	{
		return;
	}
	__LIB_2__::func_930(iLocal_382[0], 1);
	ENTITY::_0x18FF3110CF47115D(iLocal_382[0], 7, 1);
	PED::RESET_PED_RAGDOLL_TIMER(iLocal_382[0]);
	TASK::UNCUFF_PED(iLocal_382[0]);
	Local_14.f_44 = 1;
	if (iLocal_395 != 5 && iLocal_395 != 4)
	{
		__LIB_3__::func_426(&Local_14, &(Local_14.f_48), Local_14.f_3, &(Local_14.f_51.f_6));
		iLocal_395 = 4;
	}
	bLocal_400 = true;
}

void func_68()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_382[0]))
	{
		PED::RESET_PED_RAGDOLL_TIMER(iLocal_382[0]);
	}
}

void func_71()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_408))
	{
		iLocal_408 = OBJECT::CREATE_OBJECT(iLocal_388, Local_14.f_51, true, true, false, false, false);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_408, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_408, true);
	}
}

bool func_72()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_408))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_337[0 /*12*/].f_8))
		{
			if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_337[0 /*12*/].f_8))
			{
				OBJECT::_0xB6CBD40F8EA69E8A(Local_337[0 /*12*/].f_8);
				ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_337[0 /*12*/].f_8, iLocal_382[0], -1, PED::GET_PED_BONE_INDEX(iLocal_382[0], 14284), 0.02f, -0.11f, 0f, 0f, 0f, 0f, 183f, 88.5f, 97f, -1f, 0, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
				iLocal_409 = PHYSICS::_ADD_ROPE_2(Local_14.f_51, 0f, 0f, 0f, fLocal_387, 6, true, -1, -1f);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_382[0]))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_382[0], Local_14.f_51 - Vector(fLocal_387, 0f, 0f), false, false, true, true);
					PHYSICS::_0x522FA3F490E2F7AC(iLocal_409, 1, 1);
					PHYSICS::_0x462FF2A432733A44(iLocal_409, iLocal_408, Local_337[0 /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 0, "ropeAttach");
					PHYSICS::_0x3C6490D940FF5D0B(iLocal_409, 0, 0, fLocal_387, 0);
					PHYSICS::_0x76BAD9D538BCA1AA(iLocal_409, 0f);
					PHYSICS::_0xB40EA9E0D2E2F7F3(iLocal_409, 1f);
					PHYSICS::_0xF1EA2A881EB7F2CD(iLocal_409, 1);
					AUDIO::_0xF092B6030D6FD49C(iLocal_409, "ROPE_SETTINGS_DEFAULT");
					return true;
				}
			}
		}
	}
	return false;
}

void func_73()
{
	if (iLocal_427 >= 6)
	{
		iLocal_427 = 0;
	}
	if (!__LIB_0__::func_86(Local_351[iLocal_427 /*5*/]))
	{
		if (__LIB_1__::func_992(Global_35, Local_351[iLocal_427 /*5*/], 1) < 169f && !ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_208[1 /*32*/].f_1, Local_351[iLocal_427 /*5*/], true))
		{
			Local_351[iLocal_427 /*5*/] = { 0f, 0f, 0f };
		}
	}
	iLocal_427++;
}

void func_82()
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_285(&uLocal_421, 10f))
	{
		bLocal_399 = true;
		return;
	}
	if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		bLocal_399 = true;
		iLocal_395 = 5;
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_382[3]))
	{
		bLocal_399 = true;
		return;
	}
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_382[iVar0]))
		{
			iVar1 = func_205(&Local_351);
			if (iVar1 != -1 && !__LIB_0__::func_86(Local_351[iVar1 /*5*/]))
			{
				iLocal_382[iVar0] = __LIB_3__::func_870(Local_208[iVar0 /*32*/].f_1, &(Local_208[iVar0 /*32*/]), Local_351[iVar1 /*5*/], 0f, 1, 0, 1, 0, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_382[iVar0], 6, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_382[iVar0], 265, false);
				TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_382[iVar0], true);
				TASK::_0x9DE63896B176EA94(iLocal_382[iVar0], 1);
				WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_382[iVar0], true, true);
				if (iLocal_428 == 0)
				{
					iLocal_428 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW"), Local_14.f_51, 0f, 40f, 40f, 0f, -1f, -1, -1);
				}
				if (iLocal_397 == 10 && iVar0 == 1)
				{
					__LIB_2__::func_272(iLocal_382[iVar0], joaat("WEAPON_SHOTGUN_SAWEDOFF"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
				else
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_382[iVar0], joaat("WEAPON_MELEE_KNIFE"), 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				}
				if (iLocal_397 != 10 && !bLocal_420)
				{
					__LIB_2__::func_478(iLocal_382[1], 0, "SWAMP3_CALLOUT_CLICK", 0, 300f, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
					bLocal_420 = true;
					__LIB_1__::func_148(&uLocal_424);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_382[iVar0], joaat("REL_PLAYER_DISLIKE"));
				Local_351[iVar1 /*5*/] = { 0f, 0f, 0f };
				return;
			}
		}
		iVar0++;
	}
}

void func_83()
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(iLocal_382[iVar0], 0, 1))
		{
			if (__LIB_0__::func_163(iLocal_382[iVar0], 242628503))
			{
				if (TASK::GET_SEQUENCE_PROGRESS(iLocal_382[iVar0]) == 1)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_382[iVar0], 2f);
				}
				if (__LIB_0__::func_232(iLocal_382[iVar0], Global_35, 1) < 400f)
				{
					TASK::CLEAR_PED_TASKS(iLocal_382[iVar0], true, false);
					TASK::TASK_COMBAT_PED(iLocal_382[iVar0], Global_35, 0, 0);
				}
			}
			if (!MAP::DOES_BLIP_EXIST(uLocal_410[iVar0]) && __LIB_0__::func_665(Global_35, iLocal_382[iVar0], 0, 1) < 25f)
			{
				__LIB_2__::func_73(iLocal_382[iVar0], &(uLocal_410[iVar0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				if (!bLocal_418 && AUDIO::PREPARE_MUSIC_EVENT("REWH_START"))
				{
					if (AUDIO::_0x05D6195FB4D428F4(joaat("REWH_START")))
					{
					}
					bLocal_418 = true;
					__LIB_1__::func_148(&uLocal_424);
				}
			}
		}
		iVar0++;
	}
}

bool func_84(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - iParam1))
	{
		if (__LIB_2__::func_1((*iParam0)[(iVar0 + iParam1)], 0, 1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_205(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!__LIB_0__::func_86(*(uParam0[iVar0 /*5*/])))
		{
			if (CAM::IS_SPHERE_VISIBLE(*(uParam0[iVar0 /*5*/]), (uParam0[iVar0 /*5*/])->f_3) || (uParam0[iVar0 /*5*/])->f_4 == 0f)
			{
				iVar1 = 255;
				iVar2 = 0;
				(uParam0[iVar0 /*5*/])->f_4 = __LIB_0__::func_36();
			}
			else
			{
				iVar2 = 255;
				iVar1 = 0;
			}
			if ((__LIB_0__::func_36() - (uParam0[iVar0 /*5*/])->f_4) > 2f)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

