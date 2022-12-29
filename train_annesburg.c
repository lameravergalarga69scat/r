#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	vector3 vLocal_5 = { 0f, 0f, 0f };
	vector3 vLocal_8 = { 0f, 0f, 0f };
	bool bLocal_11 = false;
	int iLocal_12 = 0;
	int iScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	vLocal_5 = { 2941.792f, 1377.969f, 43.1f };
	vLocal_8 = { 2314.011f, -1512.919f, 44.9053f };
	iLocal_12 = -1;
	iLocal_2 = iScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_2())
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_1()
{
	int iVar0;
	__LIB_8__::func_981(7, 512);
	if (bLocal_11)
	{
		__LIB_11__::func_118(7);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		__LIB_8__::func_981(iVar0, 16384);
		iVar0++;
	}
	return true;
}

bool func_2()
{
	int iVar0;
	int iVar1;
	float fVar2;
	if (iLocal_0 > 0 && iLocal_0 < 6)
	{
		if (func_5())
		{
			iLocal_0 = 6;
		}
	}
	switch (iLocal_0)
	{
		case 0:
			if (!func_6())
			{
				iLocal_0 = 6;
				return false;
			}
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				__LIB_11__::func_118(iVar0);
				__LIB_0__::func_714(iVar0, 16384);
				iVar0++;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2))
			{
				iLocal_0 = 6;
				return false;
			}
			if (!VEHICLE::_0xC29996A337BDD099(Global_1425371[7 /*373*/].f_1))
			{
				iLocal_0 = 6;
				return false;
			}
			if (__LIB_10__::func_35(7, 2))
			{
				iLocal_0 = 6;
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3))
			{
				iLocal_3 = VEHICLE::_0x6E585A616ABB8401(Global_1425371[7 /*373*/].f_1);
				return false;
			}
			iLocal_12 = AUDIO::GET_SOUND_ID();
			__LIB_19__::func_49(iLocal_2, 0, iLocal_12);
			iLocal_1 = 2;
			iLocal_0 = 1;
			break;
		case 1:
			__LIB_19__::func_49(iLocal_2, 0, iLocal_12);
			if (__LIB_0__::func_232(iLocal_3, Global_35, 1) < 2500f)
			{
				if (VEHICLE::_0x86AFC343CF7F0B34(joaat("TRAINS_INTERSECTION1_ANN"), 2940.988f, 1374.5f, 43.1838f, &iVar1))
				{
					VEHICLE::_0x3ABFA128F5BF5A70(joaat("TRAINS_INTERSECTION1_ANN"), iVar1, 1);
				}
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3, true);
				VEHICLE::_0xA7966807953A18EE(Global_1425371[7 /*373*/].f_1, 0.5f);
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[7 /*373*/].f_1, 0.5f);
				VEHICLE::_0xCFE122EC635CC2B2(iLocal_3, "DANGER", 1, 0);
				iLocal_4 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_3, iLocal_1);
				__LIB_0__::func_714(7, 512);
				bLocal_11 = true;
				iLocal_0 = 2;
			}
			break;
		case 2:
			__LIB_19__::func_49(iLocal_2, 0, iLocal_12);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4))
			{
				VEHICLE::_0xCFE122EC635CC2B2(iLocal_3, "ACKNOWLEDGE", 1, 0);
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[7 /*373*/].f_1, __LIB_11__::func_127(0));
				VEHICLE::_0x4182C037AA1F0091(iLocal_3, 0);
				func_12();
				__LIB_8__::func_981(7, 512);
				iLocal_0 = 4;
				return false;
			}
			if (__LIB_1__::func_992(iLocal_4, vLocal_5, 1) < 0.25f)
			{
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[7 /*373*/].f_1, 0f);
				VEHICLE::_0xCFE122EC635CC2B2(iLocal_3, "ACKNOWLEDGE", 1, 0);
				iLocal_0 = 3;
			}
			break;
		case 3:
			fVar2 = __LIB_19__::func_49(iLocal_2, 1, iLocal_12);
			if (fVar2 >= 0.999f)
			{
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[7 /*373*/].f_1, 0.5f);
				VEHICLE::_0xCFE122EC635CC2B2(iLocal_3, "DANGER", 1, 0);
				iLocal_1++;
				iLocal_4 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_3, iLocal_1);
				iLocal_0 = 2;
			}
			break;
		case 4:
			if (__LIB_1__::func_992(iLocal_3, vLocal_8, 1) < 160000f)
			{
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[7 /*373*/].f_1, 5f);
				iLocal_0 = 5;
			}
			break;
		case 5:
			if (__LIB_1__::func_992(iLocal_3, vLocal_8, 1) < 1f)
			{
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[7 /*373*/].f_1, 0f);
				iLocal_0 = 6;
			}
			break;
		case 6:
			if (func_5())
			{
				if (func_1())
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_5()
{
	if (__LIB_0__::func_296(0, 0, 1))
	{
		return true;
	}
	if (!VEHICLE::_0xC29996A337BDD099(Global_1425371[7 /*373*/].f_1))
	{
		return true;
	}
	if (__LIB_10__::func_35(7, 2))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3))
	{
		return true;
	}
	return false;
}

bool func_6()
{
	int iVar0;
	if (__LIB_0__::func_296(0, 0, 1))
	{
		return false;
	}
	if ((__LIB_9__::func_990(54) || __LIB_17__::func_511(54)) || __LIB_2__::func_774(54))
	{
		return false;
	}
	if ((__LIB_0__::func_627(69, 0) || __LIB_7__::func_852(69)) || __LIB_14__::func_445(69))
	{
		return false;
	}
	if (__LIB_17__::func_512(0, 2))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (VEHICLE::_0xC29996A337BDD099(Global_1425371[iVar0 /*373*/].f_1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::_0x6E585A616ABB8401(Global_1425371[iVar0 /*373*/].f_1)))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_12()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = joaat("FREIGHT_GROUP");
	if (VEHICLE::_0x86AFC343CF7F0B34(iVar1, 2855.288f, -1314.826f, 45.0838f, &iVar0))
	{
		VEHICLE::_0x3ABFA128F5BF5A70(iVar1, iVar0, 1);
	}
	iVar0 = 0;
	iVar1 = joaat("TRAINS_NB1");
	if (VEHICLE::_0x86AFC343CF7F0B34(iVar1, 2748.4f, -1434.3f, 45f, &iVar0))
	{
		VEHICLE::_0x3ABFA128F5BF5A70(iVar1, iVar0, 1);
	}
	iVar0 = 0;
	iVar1 = joaat("TRAINS_NB1");
	if (VEHICLE::_0x86AFC343CF7F0B34(iVar1, 2624.2f, -1477.2f, 45f, &iVar0))
	{
		VEHICLE::_0x3ABFA128F5BF5A70(iVar1, iVar0, 1);
	}
	iVar0 = 0;
	iVar1 = joaat("FREIGHT_GROUP");
	if (VEHICLE::_0x86AFC343CF7F0B34(iVar1, 2520.551f, -1482.221f, 45.2577f, &iVar0))
	{
		VEHICLE::_0x3ABFA128F5BF5A70(iVar1, iVar0, 0);
	}
}

