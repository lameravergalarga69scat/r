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
	bool bLocal_14 = false;
	bool bLocal_15 = false;
	int iLocal_16 = 0;
	bool bLocal_17 = false;
	bool bLocal_18 = false;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	struct<1030> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0 } ;
	var uLocal_1052 = 0;
	var uLocal_1053 = 3;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<10> Var3;
	int iVar14;
	int iVar15;
	bool bVar16;
	float fVar17;
	bool bVar18;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&Local_22, 1);
		__LIB_1__::func_993(&(Global_40.f_9028.f_12), 4);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		func_1(&Local_22, 1);
		__LIB_1__::func_993(&(Global_40.f_9028.f_12), 4);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (__LIB_4__::func_17(144))
	{
		__LIB_1__::func_581(&(Global_40.f_9028.f_12), 1);
	}
	if (__LIB_0__::func_1(Global_1394141.f_1326, -2147483648))
	{
		__LIB_1__::func_993(&(Global_1394141.f_1326), -2147483648);
	}
	Local_22.f_125 = vScriptParam_0.y;
	if (!Global_1935630.f_12)
	{
		if (__LIB_1__::func_205(Global_35, Global_1394141.f_7[Local_22.f_125 /*31*/].f_4, 1, 0))
		{
			if (__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 0, 0, 0)))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			}
			if (__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 0, 1, 0)))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
			}
		}
	}
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_UNARMED"), 0);
	while (true)
	{
		bVar0 = __LIB_1__::func_205(Global_35, Global_1394141.f_7[Local_22.f_125 /*31*/].f_4, 1, 0);
		bVar1 = __LIB_1__::func_205(Global_35, Local_22.f_119[4], 1, 0);
		bVar2 = __LIB_0__::func_1(Global_1394141.f_1326, 8192);
		if (bVar0 || bVar1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
		}
		if (bVar1)
		{
			func_9();
		}
		else
		{
			func_10(Global_1394141.f_7[Global_1394141 /*31*/].f_30);
		}
		func_11(bVar0);
		Local_22.f_112 = __LIB_0__::func_94(Global_35, Global_1394141.f_7[Local_22.f_125 /*31*/].f_1, 1);
		if ((__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1) && Local_22 != 9) && Local_22 != 10)
		{
			__LIB_1__::func_581(&(Local_22.f_13), 128);
			__LIB_1__::func_649(&Local_22, 9);
		}
		if (func_15(&Local_22, bVar0))
		{
			if (Local_22 != 9 && Local_22 != 10)
			{
				__LIB_1__::func_581(&(Local_22.f_13), 128);
				__LIB_1__::func_649(&Local_22, 9);
			}
		}
		if (Local_22 < 9)
		{
			if (Local_22.f_112 > 75f && !bVar2)
			{
				__LIB_1__::func_581(&(Local_22.f_13), -2147483648);
				__LIB_1__::func_649(&Local_22, 9);
			}
			if (__LIB_0__::func_1(Global_1394141.f_1326, -2147483648))
			{
				__LIB_1__::func_581(&(Local_22.f_13), -2147483648);
				__LIB_1__::func_649(&Local_22, 9);
			}
		}
		func_16(&Local_22, bVar0);
		func_17(&Local_22);
		if (!bVar0)
		{
			if ((func_18(Local_22.f_125) && !bVar2) && Local_22 < 9)
			{
				__LIB_1__::func_581(&(Local_22.f_13), -2147483648);
				__LIB_1__::func_649(&Local_22, 9);
			}
			if (__LIB_0__::func_73(1) || Global_1415398.f_1)
			{
				if (!__LIB_0__::func_75(&(Local_22.f_135)))
				{
					__LIB_1__::func_148(&(Local_22.f_135));
				}
				else if (__LIB_0__::func_265(&(Local_22.f_135)) > 10f)
				{
					if (Global_1415398.f_1)
					{
						Global_1415398.f_1 = 0;
					}
					if (__LIB_0__::func_73(1))
					{
						__LIB_1__::func_979(1);
					}
					if (__LIB_0__::func_1(Local_22.f_13, 4194304))
					{
						__LIB_0__::func_11();
						POPULATION::_0xBC90BDF4E5228EA1();
						__LIB_6__::func_357();
						__LIB_1__::func_993(&(Local_22.f_13), 4194304);
					}
					__LIB_16__::func_738(0);
					__LIB_0__::func_37(&(Local_22.f_135));
				}
			}
		}
		else
		{
			if (!__LIB_0__::func_73(1))
			{
				__LIB_2__::func_29(1);
				__LIB_1__::func_309(-1, 0, 0, 0, 0);
				__LIB_1__::func_924();
			}
			if (!__LIB_0__::func_1(Local_22.f_13, 4194304))
			{
				__LIB_0__::func_11();
				POPULATION::_0xC6DCC2A3A8825C85(1);
				__LIB_6__::func_282(80);
				__LIB_1__::func_581(&(Local_22.f_13), 4194304);
			}
			if (!Global_1415398.f_1)
			{
				Global_1415398.f_1 = 1;
			}
			if (__LIB_0__::func_75(&(Local_22.f_135)))
			{
				__LIB_0__::func_37(&(Local_22.f_135));
			}
		}
		__LIB_16__::func_558(&(Local_22.f_178), Global_1394141.f_7[Global_1394141 /*31*/].f_30);
		__LIB_16__::func_688(&(Local_22.f_178), Global_1394141.f_7[Global_1394141 /*31*/].f_30);
		func_35(&Local_22);
		func_36(&Local_22);
		switch (Local_22)
		{
			case 0:
				PED::_0xF008E0BA1FE1D644(1);
				Local_22.f_12 = vScriptParam_0.z;
				__LIB_1__::func_993(&(Global_1394141.f_1326), 4096);
				func_37(&Local_22);
				__LIB_16__::func_492(&(Local_22.f_178));
				__LIB_1__::func_581(&(Global_1394141.f_1325), 512);
				__LIB_1__::func_581(&(Global_1394141.f_1325), 131072);
				Global_1394141.f_1331 = 0;
				Global_1394141.f_1324 = 0;
				if (__LIB_0__::func_181())
				{
					__LIB_0__::func_928(&(Local_22.f_14), Global_35, "JOHN", 0);
				}
				else
				{
					__LIB_0__::func_928(&(Local_22.f_14), Global_35, "ARTHUR", 0);
				}
				__LIB_1__::func_649(&Local_22, 1);
				break;
			case 1:
				if (!PED::_0x5E420FF293EE5472())
				{
					return;
				}
				if (((((func_41() && func_42()) && func_43()) && func_44()) && func_45()) && func_46(&Local_22))
				{
					__LIB_1__::func_649(&Local_22, 2);
				}
				break;
			case 2:
				if (func_47(&Local_22))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_22.f_128, "CURTAIN", Local_22.f_127, 0);
					ANIMSCENE::START_ANIM_SCENE(Local_22.f_128);
					iVar15 = 1;
					while (iVar15 <= (5 - 1))
					{
						iVar14 = iVar15;
						if (!VOLUME::_DOES_VOLUME_EXIST(Local_22.f_119[iVar14]))
						{
							Var3 = { func_48(iVar14) };
							Local_22.f_119[iVar14] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var3.f_10, Var3, Var3.f_3, Var3.f_6, Var3.f_9);
						}
						iVar15++;
					}
					__LIB_16__::func_560(&(Local_22.f_984), 0);
					__LIB_1__::func_649(&Local_22, 3);
				}
				break;
			case 3:
				if (__LIB_16__::func_709(&(Local_22.f_984), 0))
				{
					__LIB_1__::func_649(&Local_22, 4);
				}
				break;
			case 4:
				if (func_51(&(Local_22.f_423), 0, Local_22.f_125))
				{
					__LIB_1__::func_649(&Local_22, 5);
				}
				break;
			case 5:
				if (func_52(&(Local_22.f_423), &(Local_22.f_984), 0))
				{
					if (__LIB_16__::func_685(&(Local_22.f_423), 0))
					{
						__LIB_1__::func_649(&Local_22, 6);
					}
				}
				break;
			case 6:
				VOLUME::_0xFD010A2154B40676(Global_1394141.f_7[Local_22.f_125 /*31*/].f_4, joaat("REL_GANG_DUTCHS"));
				__LIB_1__::func_581(&(Global_1394141.f_1326), 4096);
				BUILTIN::SETTIMERA(0);
				__LIB_1__::func_649(&Local_22, 7);
				break;
			case 7:
				bVar16 = false;
				if (BUILTIN::TIMERA() > 30000)
				{
					bVar16 = true;
					Global_1394141.f_1330 = 1;
				}
				if (bVar0 || bVar1)
				{
					if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_22.f_984.f_12[1 /*2*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_22.f_984.f_12[1 /*2*/], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_22.f_984.f_12[1 /*2*/], false))
					{
						ANIMSCENE::START_ANIM_SCENE(Local_22.f_984.f_12[1 /*2*/]);
					}
					if (!__LIB_0__::func_75(&(Local_22.f_132)))
					{
						__LIB_1__::func_148(&(Local_22.f_132));
					}
					else
					{
						fVar17 = __LIB_0__::func_265(&(Local_22.f_132));
						if (fVar17 > 10f)
						{
							bVar16 = true;
						}
						if (fVar17 > 5f && !Global_1394141.f_1330)
						{
							Global_1394141.f_1330 = 1;
						}
					}
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_22.f_984.f_12[1 /*2*/], false))
				{
					func_54(&(Local_22.f_984), &(Local_22.f_423), 0);
				}
				if (bVar16)
				{
					__LIB_1__::func_581(&(Global_1394141.f_1325), 2);
					__LIB_1__::func_581(&(Global_1394141.f_1325), 4096);
					func_55(&Local_22);
					func_56();
					__LIB_0__::func_37(&(Local_22.f_132));
					__LIB_1__::func_649(&Local_22, 8);
				}
				break;
			case 8:
				func_54(&(Local_22.f_984), &(Local_22.f_423), 0);
				func_57(&Local_22);
				if (func_58(&Local_22))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_22.f_118) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_22.f_118, false))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(Local_22.f_118);
						__LIB_1__::func_581(&(Global_1394141.f_1325), 4);
						__LIB_1__::func_581(&(Global_1394141.f_1325), 8192);
						Local_22.f_984.f_19 = 1;
						Global_1394141.f_1329 = 1;
						Global_1394141.f_1332 = 48;
						__LIB_1__::func_649(&Local_22, 9);
					}
				}
				break;
			case 9:
				bVar18 = __LIB_0__::func_1(Local_22.f_13, -2147483648);
				func_59(&Local_22);
				func_54(&(Local_22.f_984), &(Local_22.f_423), 0);
				func_60(&Local_22);
				func_61(&Local_22);
				if (func_1(&Local_22, bVar18) && !__LIB_16__::func_502(Local_22.f_125))
				{
					__LIB_16__::func_495();
					__LIB_1__::func_649(&Local_22, 10);
				}
				break;
			case 10:
				__LIB_1__::func_993(&(Global_1394141.f_1326), 8192);
				__LIB_1__::func_993(&(Global_1394141.f_1326), 4096);
				__LIB_1__::func_993(&(Global_40.f_9028.f_12), 4);
				Global_1394141.f_1328 = 0;
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

bool func_1(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = __LIB_1__::func_205(Global_35, Global_1394141.f_7[iParam0->f_125 /*31*/].f_4, 1, 0);
	bVar1 = __LIB_1__::func_205(Global_35, Local_22.f_119[4], 1, 0);
	if (__LIB_0__::func_75(&(iParam0->f_9)))
	{
		__LIB_0__::func_37(&(iParam0->f_9));
	}
	Global_1394141.f_1328 = 0;
	Global_1394141.f_1330 = 0;
	if (CAM::DOES_CAM_EXIST(iParam0->f_141))
	{
		if (CAM::IS_CAM_RENDERING(iParam0->f_141))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::SET_CAM_ACTIVE(iParam0->f_141, false);
		}
		CAM::DESTROY_CAM(iParam0->f_141, false);
	}
	INVENTORY::_0xD5D72F1624F3BA7C(__LIB_0__::func_162(0));
	__LIB_16__::func_738(0);
	if (__LIB_0__::func_1(Local_22.f_13, 67108864))
	{
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_16__::func_442(0));
		if (INTERIOR::IS_VALID_INTERIOR(iVar2))
		{
			INTERIOR::UNPIN_INTERIOR(iVar2);
		}
		__LIB_1__::func_993(&(Local_22.f_13), 67108864);
	}
	if (__LIB_0__::func_1(Local_22.f_13, 4194304))
	{
		__LIB_0__::func_11();
		POPULATION::_0xBC90BDF4E5228EA1();
		__LIB_6__::func_357();
		__LIB_1__::func_993(&(Local_22.f_13), 4194304);
	}
	if (Global_1415398.f_1)
	{
		Global_1415398.f_1 = 0;
	}
	if (__LIB_0__::func_73(1))
	{
		__LIB_1__::func_979(1);
	}
	if (bParam1)
	{
		if (func_66(iParam0))
		{
			__LIB_16__::func_443(&(iParam0->f_423), Global_1394141.f_7[iParam0->f_125 /*31*/].f_4);
			if (__LIB_0__::func_73(1))
			{
				__LIB_1__::func_979(1);
			}
			if (Global_1415398.f_1)
			{
				Global_1415398.f_1 = 0;
			}
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1394141.f_7[iParam0->f_125 /*31*/].f_4) && VOLUME::_0x666C2F53ABEFC952(Global_1394141.f_7[iParam0->f_125 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
			{
				VOLUME::_0xFD010A2154B40676(Global_1394141.f_7[iParam0->f_125 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_126))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_126, -1f);
				PED::DELETE_PED(&(iParam0->f_126));
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_128))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_128);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_127))
			{
				OBJECT::DELETE_OBJECT(&(iParam0->f_127));
			}
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			func_68(&(iParam0->f_984), Global_1394141.f_7[Global_1394141 /*31*/].f_30);
			__LIB_16__::func_564(Global_1394141.f_7[Global_1394141 /*31*/].f_30);
			__LIB_16__::func_493(&(iParam0->f_178));
			func_71();
			Global_1394141.f_1321 = 0;
			Global_1394141.f_1322 = 0;
			Global_1394141.f_1323 = 0;
			if (!__LIB_0__::func_1(Global_1394141.f_1326, -2147483648))
			{
				Global_1394141.f_1327 = 0;
			}
			func_72(iParam0);
			return true;
		}
	}
	else
	{
		if (__LIB_0__::func_1(iParam0->f_13, 128) && !__LIB_0__::func_1(iParam0->f_13, 32))
		{
			__LIB_16__::func_443(&(iParam0->f_423), Global_1394141.f_7[iParam0->f_125 /*31*/].f_4);
			__LIB_1__::func_581(&(iParam0->f_13), 32);
		}
		if (!bVar0)
		{
			if (__LIB_0__::func_73(1))
			{
				__LIB_1__::func_979(1);
			}
			if (Global_1415398.f_1)
			{
				Global_1415398.f_1 = 0;
			}
		}
		if ((!bVar0 && !bVar1) && Local_22.f_112 > 17f)
		{
			if (func_66(iParam0) && !__LIB_9__::func_313(Global_36))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_126))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_126, -1f);
					PED::DELETE_PED(&(iParam0->f_126));
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_128))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_128);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_127))
				{
					OBJECT::DELETE_OBJECT(&(iParam0->f_127));
				}
				if (VOLUME::_DOES_VOLUME_EXIST(Global_1394141.f_7[iParam0->f_125 /*31*/].f_4) && VOLUME::_0x666C2F53ABEFC952(Global_1394141.f_7[iParam0->f_125 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
				{
					VOLUME::_0xFD010A2154B40676(Global_1394141.f_7[iParam0->f_125 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
				}
				__LIB_16__::func_493(&(iParam0->f_178));
				func_68(&(iParam0->f_984), Global_1394141.f_7[Global_1394141 /*31*/].f_30);
				__LIB_16__::func_564(Global_1394141.f_7[Global_1394141 /*31*/].f_30);
				func_71();
				__LIB_16__::func_443(&(iParam0->f_423), Global_1394141.f_7[iParam0->f_125 /*31*/].f_4);
				Global_1394141.f_1321 = 0;
				Global_1394141.f_1322 = 0;
				Global_1394141.f_1323 = 0;
				if (!__LIB_0__::func_1(Global_1394141.f_1326, -2147483648))
				{
					Global_1394141.f_1327 = 0;
				}
				func_72(iParam0);
				return true;
			}
		}
	}
	return false;
}

void func_9()
{
	bool bVar0;
	int iVar1;
	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	switch (iLocal_21)
	{
		case 0:
			bVar0 = false;
			if (__LIB_3__::func_417(Global_35) || __LIB_11__::func_394(Global_35))
			{
				bLocal_18 = true;
				iLocal_20 = __LIB_0__::func_147();
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iLocal_20, __LIB_1__::func_974(PLAYER::GET_PLAYER_INDEX()), 1f, 8);
				__LIB_0__::func_148(2);
				__LIB_0__::func_149(-1);
				__LIB_0__::func_150(__LIB_1__::func_974(PLAYER::GET_PLAYER_INDEX()));
				iVar1 = __LIB_0__::func_23();
				__LIB_9__::func_23(iVar1);
				bVar0 = true;
			}
			else if (PED::_IS_PED_CARRYING(Global_35))
			{
				bLocal_17 = true;
				iLocal_19 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iLocal_19, __LIB_1__::func_974(PLAYER::GET_PLAYER_INDEX()), 1f, 8);
				bVar0 = true;
			}
			if (bVar0)
			{
				__LIB_1__::func_649(&iLocal_21, 1);
			}
			break;
		case 1:
			__LIB_1__::func_649(&iLocal_21, 2);
			break;
		case 2:
			if ((!PED::_IS_PED_CARRYING(Global_35) && !__LIB_3__::func_417(Global_35)) && !__LIB_11__::func_394(Global_35))
			{
				__LIB_1__::func_649(&iLocal_21, 3);
			}
			break;
		case 3:
			__LIB_1__::func_649(&iLocal_21, 0);
			break;
	}
}

void func_10(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	if (bLocal_17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_19))
		{
			if (__LIB_0__::func_665(Global_35, iLocal_19, 1, 1) > 7f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_19))
			{
				vVar0 = { func_90(iParam0) };
				vVar0.f_2 = (vVar0.z - 1f);
				ENTITY::SET_ENTITY_COORDS(iLocal_19, vVar0, true, false, true, true);
				bLocal_17 = false;
			}
		}
		else
		{
			bLocal_17 = false;
		}
	}
	else if (bLocal_18)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_20))
		{
			if (__LIB_0__::func_665(Global_35, iLocal_20, 1, 1) > 7f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_20))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_20, func_90(iParam0), true, false, true, true);
				__LIB_0__::func_148(2);
				__LIB_0__::func_149(-1);
				__LIB_0__::func_150(func_90(iParam0));
				uVar3 = __LIB_0__::func_23();
				__LIB_9__::func_23(uVar3);
				bLocal_18 = false;
			}
		}
		else
		{
			bLocal_18 = false;
		}
	}
}

void func_11(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	bVar0 = true;
	bVar1 = true;
	bVar2 = true;
	bVar3 = true;
	bVar4 = true;
	bVar5 = false;
	if (__LIB_0__::func_1(Global_1394141.f_1326, 1))
	{
		bVar3 = false;
		bVar1 = false;
		bVar4 = false;
	}
	if (__LIB_0__::func_1(Global_1394141.f_1326, 2))
	{
		bVar0 = false;
	}
	if (__LIB_0__::func_1(Global_1394141.f_1326, 4))
	{
		bVar2 = false;
		bVar0 = false;
		bVar1 = false;
	}
	if (__LIB_0__::func_1(Global_1394141.f_1326, 64))
	{
		bVar2 = false;
	}
	if (__LIB_0__::func_1(Global_1394141.f_1326, 512))
	{
		bVar5 = true;
	}
	__LIB_1__::func_538(0);
	if (bParam0)
	{
		if (INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), joaat("WEAPON_UNARMED"), 0))
		{
			INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("WEAPON_UNARMED"));
		}
		if (!bVar0)
		{
			if (!__LIB_0__::func_1(Global_1394141.f_1326, 8))
			{
				if (VOLUME::_DOES_VOLUME_EXIST(Global_1394141.f_7[Global_1394141 /*31*/].f_4) && VOLUME::_0x666C2F53ABEFC952(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
				{
					VOLUME::_0xFD010A2154B40676(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_16, true, 2, false))
					{
						if ((iLocal_16 != joaat("WEAPON_UNARMED") && iLocal_16 != joaat("OBJECT_1")) && iLocal_16 != joaat("OBJECT_2"))
						{
							if (INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), iLocal_16, 0))
							{
								INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), iLocal_16);
								func_92(iLocal_16);
							}
						}
						if (VOLUME::_0x666C2F53ABEFC952(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
						{
							VOLUME::_0xFD010A2154B40676(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
						}
						__LIB_1__::func_581(&(Global_1394141.f_1326), 8);
					}
				}
			}
		}
		else if (__LIB_0__::func_1(Global_1394141.f_1326, 8))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1394141.f_7[Global_1394141 /*31*/].f_4) && bVar3)
			{
				VOLUME::_0xFD010A2154B40676(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_GANG_DUTCHS"));
				__LIB_1__::func_993(&(Global_1394141.f_1326), 8);
			}
		}
		else
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_16, true, 0, false))
			{
				iVar6 = TASK::GET_SCRIPT_TASK_STATUS(Global_35, 716706914, true);
				iVar7 = TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, true);
				if ((((((iLocal_16 != joaat("WEAPON_UNARMED") && iLocal_16 != joaat("OBJECT_1")) && iLocal_16 != joaat("OBJECT_2")) && iVar6 != 1) && iVar6 != 0) && iVar7 != 1) && iVar7 != 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
					if (PED::IS_PED_USING_ACTION_MODE(Global_35))
					{
						PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
					}
				}
			}
			func_93(&iLocal_16, 1);
		}
		if (bVar3)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		}
		if (bVar1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		}
		if (bVar0)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), false);
		}
		if (bVar2)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		CAM::_0x632BE8D84846FA56();
		CAM::_0x3C8F74E8FE751614();
		CAM::_0x8910C24B7E0046EC();
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 489, false))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 489, true);
		}
		if (bVar4)
		{
			if (bVar5)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
			}
			else
			{
				HUD::_0xC9CAEAEEC1256E54(1664736751);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		}
		else
		{
			if (bVar5)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
			}
			if (!__LIB_0__::func_1(Global_1394141.f_1326, 8))
			{
				if (VOLUME::_DOES_VOLUME_EXIST(Global_1394141.f_7[Global_1394141 /*31*/].f_4) && VOLUME::_0x666C2F53ABEFC952(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_16, true, 2, false))
					{
						if ((iLocal_16 != joaat("WEAPON_UNARMED") && iLocal_16 != joaat("OBJECT_1")) && iLocal_16 != joaat("OBJECT_2"))
						{
							if (INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), iLocal_16, 0))
							{
								INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), iLocal_16);
								func_92(iLocal_16);
							}
						}
						if (VOLUME::_0x666C2F53ABEFC952(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
						{
							VOLUME::_0xFD010A2154B40676(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
						}
						__LIB_1__::func_581(&(Global_1394141.f_1326), 8);
					}
				}
			}
		}
		func_94();
	}
	else
	{
		func_95();
		func_93(&iLocal_16, 1);
		if (PED::GET_PED_CONFIG_FLAG(Global_35, 489, false))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 489, false);
		}
	}
}

bool func_15(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		bVar0 = false;
		bVar1 = false;
		switch (iParam0->f_984)
		{
			case 9:
			case 11:
			case 15:
				bVar0 = true;
				break;
		}
		if (bVar0)
		{
			if (!bParam1)
			{
				bVar1 = true;
			}
			switch (iParam0->f_984)
			{
				case 9:
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1394141.f_1335) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false))
					{
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "PL_A_Performance"))
						{
							bVar1 = true;
						}
					}
					break;
				case 15:
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1394141.f_1335) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false))
					{
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "pbl_FightIntro"))
						{
							bVar1 = true;
						}
					}
					break;
				case 11:
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1394141.f_1335) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false))
					{
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "PL_A_Performance") || ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "PL_B_Trying_To_Escape"))
						{
							bVar1 = true;
						}
					}
					break;
			}
		}
		else
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			return true;
		}
	}
	return false;
}

void func_16(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(iParam0->f_13, 131072))
	{
		if (bParam1)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("show_crowd_sfx_start");
			__LIB_1__::func_581(&(iParam0->f_13), 131072);
		}
	}
	else if (!bParam1)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("show_crowd_sfx_stop");
		__LIB_1__::func_993(&(iParam0->f_13), 131072);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_118))
	{
		if (bParam1)
		{
			if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iParam0->f_118, "b_ShowCrowd"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_118, "b_ShowCrowd", true, false);
			}
		}
		else if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iParam0->f_118, "b_ShowCrowd"))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_118, "b_ShowCrowd", false, false);
		}
	}
}

void func_17(int iParam0)
{
	switch (iParam0->f_8)
	{
		case 0:
			if ((*iParam0 >= 6 && *iParam0 <= 8) && !__LIB_16__::func_445())
			{
				__LIB_0__::func_19(&(iParam0->f_8), 1);
			}
			if ((__LIB_1__::func_205(Global_35, Global_1394141.f_7[iParam0->f_1030 /*31*/].f_4, 1, 0) && !__LIB_16__::func_445()) && *iParam0 >= 6)
			{
				__LIB_0__::func_19(&(iParam0->f_8), 1);
			}
			break;
		case 1:
			if (func_99(iParam0->f_125))
			{
				__LIB_0__::func_19(&(iParam0->f_8), 2);
			}
			break;
		case 2:
			if (__LIB_16__::func_445() && !__LIB_1__::func_205(Global_35, Global_1394141.f_7[iParam0->f_1030 /*31*/].f_4, 1, 0))
			{
				__LIB_0__::func_19(&(iParam0->f_8), 3);
			}
			if (((*iParam0 == 9 && !__LIB_1__::func_205(Global_35, Global_1394141.f_7[iParam0->f_125 /*31*/].f_4, 1, 0)) && !__LIB_1__::func_205(Global_35, iParam0->f_119[4], 1, 0)) && iParam0->f_112 > 17f)
			{
				__LIB_0__::func_19(&(iParam0->f_8), 3);
			}
			break;
		case 3:
			if (func_100(iParam0->f_125))
			{
				__LIB_0__::func_19(&(iParam0->f_8), 0);
			}
			break;
	}
}

bool func_18(int iParam0)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if ((MISC::GET_FRAME_COUNT() % 15) == 0)
	{
		__LIB_7__::func_486(Global_40.f_9028.f_6[Global_1394141.f_7[iParam0 /*31*/].f_30], &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
		if (((iVar2 >= 11 || iVar3 >= 1) || iVar4 >= 1) || iVar5 >= 1)
		{
			return true;
		}
	}
	return false;
}

void func_35(int iParam0)
{
	switch (iParam0->f_5)
	{
		case 0:
			if (__LIB_0__::func_1(iParam0->f_13, 32768))
			{
				__LIB_0__::func_19(&(iParam0->f_5), 1);
				return;
			}
			if (__LIB_0__::func_1(iParam0->f_13, 65536))
			{
				__LIB_0__::func_19(&(iParam0->f_5), 2);
				return;
			}
			if (__LIB_0__::func_1(iParam0->f_13, 512) && !__LIB_0__::func_1(iParam0->f_13, 2048))
			{
				__LIB_0__::func_19(&(iParam0->f_5), 3);
				return;
			}
			if (__LIB_0__::func_1(iParam0->f_13, 1024) && !__LIB_0__::func_1(iParam0->f_13, 4096))
			{
				__LIB_0__::func_19(&(iParam0->f_5), 4);
				return;
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_113[2]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_113[2]);
			}
			iParam0->f_113[2] = 0;
			func_156(iParam0);
			__LIB_1__::func_993(&(iParam0->f_13), 32768);
			__LIB_0__::func_19(&(iParam0->f_5), 0);
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_113[3]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_113[3]);
			}
			iParam0->f_113[3] = 0;
			func_157(iParam0);
			__LIB_1__::func_993(&(iParam0->f_13), 65536);
			__LIB_0__::func_19(&(iParam0->f_5), 0);
			break;
		case 3:
			if (!__LIB_16__::func_494(&(iParam0->f_113[2]), &(iParam0->f_13), func_159(func_158(iParam0), 2), func_160(func_158(iParam0)), 1))
			{
				return;
			}
			__LIB_1__::func_581(&(iParam0->f_13), 2048);
			__LIB_0__::func_19(&(iParam0->f_5), 0);
			break;
		case 4:
			if (Global_1394141.f_1324)
			{
				if (!__LIB_16__::func_494(&(iParam0->f_113[3]), &(iParam0->f_13), func_159(func_158(iParam0), 3), func_162(func_158(iParam0), 0), 1))
				{
					return;
				}
			}
			else if (!__LIB_16__::func_494(&(iParam0->f_113[3]), &(iParam0->f_13), func_159(func_158(iParam0), 3), func_162(func_158(iParam0), 1), 1))
			{
				return;
			}
			__LIB_1__::func_581(&(iParam0->f_13), 4096);
			__LIB_0__::func_19(&(iParam0->f_5), 0);
			break;
	}
}

void func_36(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bVar0 = PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SEAT_CHAIR_DYNAMIC"));
	bVar1 = __LIB_1__::func_205(Global_35, iParam0->f_119[2], 1, 0);
	bVar2 = __LIB_1__::func_205(Global_35, iParam0->f_119[3], 1, 0);
	if (Global_36.f_2 > 51f)
	{
		bVar2 = true;
	}
	if (__LIB_2__::func_774(36))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (bVar1)
		{
			if (!__LIB_0__::func_1(iParam0->f_13, 8388608) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_126))
			{
				if (CAM::_0xDD0B7C5AE58F721D(&(iParam0->f_146)) && !CAM::_0x927B810E43E99932(&(iParam0->f_146)))
				{
					CAM::_0xB8B207C34285E978(&(iParam0->f_146));
					__LIB_1__::func_581(&(iParam0->f_13), 8388608);
				}
			}
		}
		if (bVar2)
		{
			if (!__LIB_0__::func_1(iParam0->f_13, 8388608) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_126))
			{
				if (CAM::_0xDD0B7C5AE58F721D(&(iParam0->f_162)) && !CAM::_0x927B810E43E99932(&(iParam0->f_162)))
				{
					CAM::_0xB8B207C34285E978(&(iParam0->f_162));
					__LIB_1__::func_581(&(iParam0->f_13), 8388608);
				}
			}
		}
	}
	else
	{
		if (CAM::_0x927B810E43E99932(&(iParam0->f_146)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(iParam0->f_146));
			__LIB_1__::func_993(&(iParam0->f_13), 8388608);
		}
		if (CAM::_0x927B810E43E99932(&(iParam0->f_162)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(iParam0->f_162));
			__LIB_1__::func_993(&(iParam0->f_13), 8388608);
		}
	}
}

void func_37(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	if ((!__LIB_0__::func_1(Global_40.f_9028.f_12, 2) && __LIB_0__::func_1(Global_40.f_9028.f_12, 1)) && !__LIB_2__::func_774(36))
	{
		iVar0 = 1;
		func_164(&(iParam0->f_1018), 20, 0);
		__LIB_1__::func_581(&(Global_1394141.f_1326), 16);
		__LIB_1__::func_581(&(Global_40.f_9028.f_12), 2);
	}
	if (__LIB_0__::func_296(0, 0, 1) && __LIB_2__::func_774(36))
	{
		iParam0->f_12 = 2;
		iParam0->f_984.f_20 = 1;
	}
	if (__LIB_0__::func_1(Global_40.f_9028.f_12, 4) && !__LIB_0__::func_1(Global_40.f_9028.f_12, 8))
	{
		iParam0->f_12 = 2;
		iParam0->f_984.f_20 = 1;
	}
	switch (iParam0->f_12)
	{
		case 0:
			__LIB_0__::func_19(&(iParam0->f_1018), (3 + iVar0));
			func_164(&(iParam0->f_1018), 9, (0 + iVar0));
			func_164(&(iParam0->f_1018), 12, (1 + iVar0));
			func_164(&(iParam0->f_1018), 7, (2 + iVar0));
			iParam0->f_1029 = Global_1394141.f_1327;
			break;
		case 1:
			__LIB_0__::func_19(&(iParam0->f_1018), (3 + iVar0));
			func_164(&(iParam0->f_1018), 5, (0 + iVar0));
			func_164(&(iParam0->f_1018), 16, (1 + iVar0));
			func_164(&(iParam0->f_1018), 18, (2 + iVar0));
			iParam0->f_1029 = Global_1394141.f_1327;
			break;
		case 2:
			__LIB_0__::func_19(&(iParam0->f_1018), (3 + iVar0));
			func_164(&(iParam0->f_1018), 8, (0 + iVar0));
			func_164(&(iParam0->f_1018), 14, (1 + iVar0));
			func_164(&(iParam0->f_1018), 6, (2 + iVar0));
			iParam0->f_1029 = Global_1394141.f_1327;
			break;
		case 3:
			__LIB_0__::func_19(&(iParam0->f_1018), (3 + iVar0));
			func_164(&(iParam0->f_1018), 17, (0 + iVar0));
			func_164(&(iParam0->f_1018), 10, (1 + iVar0));
			func_164(&(iParam0->f_1018), 15, (2 + iVar0));
			iParam0->f_1029 = Global_1394141.f_1327;
			break;
		case 4:
			__LIB_0__::func_19(&(iParam0->f_1018), (3 + iVar0));
			func_164(&(iParam0->f_1018), 13, (0 + iVar0));
			func_164(&(iParam0->f_1018), 19, (1 + iVar0));
			func_164(&(iParam0->f_1018), 11, (2 + iVar0));
			iParam0->f_1029 = Global_1394141.f_1327;
			break;
	}
}

int func_41()
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_16__::func_442(0));
	if (!__LIB_0__::func_1(Local_22.f_13, 67108864))
	{
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar0);
			__LIB_1__::func_581(&(Local_22.f_13), 67108864);
		}
	}
	else if (INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_42()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = func_168(iVar0);
		STREAMING::REQUEST_MODEL(iVar1, false);
		if (!STREAMING::HAS_MODEL_LOADED(iVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_43()
{
	if (!__LIB_16__::func_494(&(Local_22.f_128), &(Local_22.f_13), __LIB_16__::func_447(), __LIB_16__::func_446(0), 1))
	{
		return 0;
	}
	if (!__LIB_14__::func_8(Local_22.f_128, func_171(1), __LIB_16__::func_447()))
	{
		return 0;
	}
	if (!__LIB_14__::func_8(Local_22.f_128, func_171(2), __LIB_16__::func_447()))
	{
		return 0;
	}
	return 1;
}

int func_44()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_173()))
	{
		if (HUD::_DOES_TEXT_DATABASE_EXIST(func_173()))
		{
			HUD::_TEXT_DATABASE_REQUEST(func_173());
		}
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(func_173()))
		{
			return 0;
		}
	}
	return 1;
}

int func_45()
{
	if (!__LIB_16__::func_494(&(Local_22.f_113[0]), &(Local_22.f_13), func_174(Local_22.f_12, 0), func_175(Local_22.f_12), 1))
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0)
{
	StringCopy(&(iParam0->f_146), "camera_treatments", 64);
	StringCopy(&(iParam0->f_146.f_8), "THEATRE_CUSTOM_TREATMENT_REQUEST", 64);
	StringCopy(&(iParam0->f_162), "camera_treatments", 64);
	StringCopy(&(iParam0->f_162.f_8), "THEATRE_RIGHT_SIDE_CUSTOM_TREATMENT_REQUEST", 64);
	CAM::_0x6A4D224FC7643941("camera_treatments");
	return 1;
}

bool func_47(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_126))
	{
		iParam0->f_126 = __LIB_1__::func_545(func_168(0), func_176(1), func_177(1), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_126))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_127))
	{
		iParam0->f_127 = OBJECT::CREATE_OBJECT(func_168(1), func_176(0), true, true, false, false, true);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_127))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_126))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam0->f_126, "Default_Show_Performers_Group", -1f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_126, true);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_126, 448, true);
		AUDIO::STOP_PED_SPEAKING(iParam0->f_126, true);
		PED::SET_PED_CAN_BE_TARGETTED(iParam0->f_126, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_126, joaat("REL_PLAYER_ALLY"));
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iParam0->f_126, 0, 1);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_126, 169, true);
	}
	return true;
}

struct<11> func_48(int iParam0)
{
	struct<11> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 2546.392f, -1311.06f, 49.80124f };
			Var0.f_3 = { 0f, 0f, -0.428209f };
			Var0.f_6 = { 17.93956f, 6.905415f, 3.337901f };
			Var0.f_9 = "SHOW_MC_ON_STAGE";
			Var0.f_10 = joaat("VOLBOX");
			break;
		case 1:
			Var0 = { 2546.448f, -1301.489f, 51.592f };
			Var0.f_3 = { 0f, 0f, 0.496f };
			Var0.f_6 = { 18.193f, 22.845f, 8.938f };
			Var0.f_9 = "SHOW_MC_VOLUME_FOCUS_CAM";
			Var0.f_10 = joaat("VOLBOX");
			break;
		case 2:
			Var0 = { 2549.975f, -1299.587f, 48.85019f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 5.433204f, 11.15138f, 4.404195f };
			Var0.f_9 = "SHOW_MC_LEFT_SEATS";
			Var0.f_10 = joaat("VOLBOX");
			break;
		case 3:
			Var0 = { 2542.911f, -1299.587f, 48.85019f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 5.433204f, 11.15138f, 4.404195f };
			Var0.f_9 = "SHOW_MC_RIGHT_SEATS";
			Var0.f_10 = joaat("VOLBOX");
			break;
		case 4:
			Var0 = { 2546.598f, -1288.292f, 51.77531f };
			Var0.f_3 = { 0f, 0f, 1.8f };
			Var0.f_6 = { 9.553825f, 4.673606f, 7.770726f };
			Var0.f_9 = "SHOW_MC_FRONT_BUFFER";
			Var0.f_10 = joaat("VOLBOX");
			break;
	}
	return Var0;
}

bool func_51(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_16__::func_454(iParam1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (iVar0 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar2 /*10*/]))
		{
			iVar3 = POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(__LIB_16__::func_455(iParam1), __LIB_16__::func_456(iParam1, iVar2), -156825994, false, true, __LIB_16__::func_457(iParam1, iVar2));
			bVar1 = false;
			if (__LIB_0__::func_1(Global_1394141.f_1326, 16))
			{
				if (iVar2 == 4)
				{
					iVar3 = joaat("U_M_M_ODDFELLOWPARTICIPANT_01");
					bVar1 = true;
				}
			}
			else if (iParam2 == 0)
			{
				if (iVar2 == 5)
				{
					iVar3 = joaat("U_M_M_BULLETCATCHVOLUNTEER_01");
					bVar1 = true;
				}
				else if (iVar2 == 31)
				{
					iVar3 = joaat("U_M_M_CABARETFIREHAT_01");
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				STREAMING::REQUEST_MODEL(iVar3, false);
			}
			if (bVar1 && !STREAMING::HAS_MODEL_LOADED(iVar3))
			{
				return false;
			}
			if (STREAMING::IS_MODEL_VALID(iVar3))
			{
				(*uParam0)[iVar2 /*10*/] = __LIB_1__::func_545(iVar3, __LIB_16__::func_457(iParam1, iVar2), func_187(iParam1, iVar2), 1, 1, func_188(iParam1, iVar2), 1, 1, 1, 0, 0, 0, 0);
			}
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar2 /*10*/]))
		{
			return false;
		}
		iVar2++;
	}
	return true;
}

bool func_52(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!func_189(uParam1, iParam2))
	{
		return false;
	}
	iVar0 = __LIB_16__::func_454(iParam2);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((__LIB_16__::func_458(iVar1, uParam1->f_17) && iParam2 == 0) && !uParam1->f_20)
		{
			(uParam0[iVar1 /*10*/])->f_1 = 6;
			(uParam0[iVar1 /*10*/])->f_2 = iVar1;
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_12[1 /*2*/], __LIB_16__::func_459(1, iVar1, uParam1->f_17), (*uParam0)[iVar1 /*10*/], 0);
		}
		else if (__LIB_16__::func_460(iParam2))
		{
			(uParam0[iVar1 /*10*/])->f_1 = 1;
			(uParam0[iVar1 /*10*/])->f_2 = iVar1;
			func_193(uParam0[iVar1 /*10*/], iParam2);
		}
		else
		{
			(uParam0[iVar1 /*10*/])->f_1 = 1;
			(uParam0[iVar1 /*10*/])->f_2 = iVar1;
			func_194(uParam0[iVar1 /*10*/], iParam2);
		}
		iVar1++;
	}
	return true;
}

void func_54(var uParam0, var uParam1, int iParam2)
{
	if (__LIB_0__::func_1(uParam0->f_18, 1) && !__LIB_0__::func_1(uParam0->f_18, 2))
	{
		STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_CHAIR"), 15, 0, 0);
		__LIB_1__::func_581(&(uParam0->f_18), 2);
	}
	if (__LIB_0__::func_1(uParam0->f_18, 2) && !__LIB_0__::func_1(uParam0->f_18, 4))
	{
		if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_HUMAN_SEAT_CHAIR"), false))
		{
			__LIB_1__::func_581(&(uParam0->f_18), 4);
		}
	}
	if (__LIB_0__::func_1(uParam0->f_18, 8) && !__LIB_0__::func_1(uParam0->f_18, 16))
	{
		TASK::REQUEST_WAYPOINT_RECORDING(__LIB_16__::func_462(iParam2));
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(__LIB_16__::func_462(iParam2)))
		{
			__LIB_1__::func_581(&(uParam0->f_18), 16);
		}
	}
	func_197(uParam0, uParam1, iParam2);
	switch (Global_1394141.f_1332)
	{
		case 0:
			break;
		default:
			if (Global_1394141.f_1332 != Global_1394141.f_1333)
			{
				__LIB_16__::func_723(uParam0, uParam1, iParam2, __LIB_16__::func_545(*uParam0, uParam0->f_1, Global_1394141.f_1332));
				Global_1394141.f_1333 = Global_1394141.f_1332;
			}
			break;
	}
}

void func_55(int iParam0)
{
	switch (iParam0->f_125)
	{
		case 0:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1971419888 /* GXTEntry: "Benjamin Lazarus" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -84935522 /* GXTEntry: "Assistant" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -990515711 /* GXTEntry: "Antoinette Sanseverino" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1197974168 /* GXTEntry: "Robin Koninsky" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1327359026 /* GXTEntry: "Band" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1327359026 /* GXTEntry: "Band" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1327359026 /* GXTEntry: "Band" */);
			break;
		case 1:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265 /* GXTEntry: "Dancers" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265 /* GXTEntry: "Dancers" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265 /* GXTEntry: "Dancers" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265 /* GXTEntry: "Dancers" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265 /* GXTEntry: "Dancers" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1938155306 /* GXTEntry: "Maya" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -2040461796 /* GXTEntry: "Hortensia" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -84935522 /* GXTEntry: "Assistant" */);
			break;
		case 4:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1197974168 /* GXTEntry: "Robin Koninsky" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1327359026 /* GXTEntry: "Band" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1327359026 /* GXTEntry: "Band" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1327359026 /* GXTEntry: "Band" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -990515711 /* GXTEntry: "Antoinette Sanseverino" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265 /* GXTEntry: "Dancers" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265 /* GXTEntry: "Dancers" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265 /* GXTEntry: "Dancers" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265 /* GXTEntry: "Dancers" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265 /* GXTEntry: "Dancers" */);
			break;
		case 2:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1938155306 /* GXTEntry: "Maya" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1971419888 /* GXTEntry: "Benjamin Lazarus" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -84935522 /* GXTEntry: "Assistant" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -2040461796 /* GXTEntry: "Hortensia" */);
			break;
		case 3:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -990515711 /* GXTEntry: "Antoinette Sanseverino" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1938155306 /* GXTEntry: "Maya" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1971419888 /* GXTEntry: "Benjamin Lazarus" */);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -84935522 /* GXTEntry: "Assistant" */);
			break;
	}
	if (__LIB_0__::func_1(Global_40.f_9028.f_12, 1))
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MISS_MARJORIE"));
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131 /* GXTEntry: "Bertram" */);
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117 /* GXTEntry: "Magnifico" */);
	}
}

void func_56()
{
	Global_40.f_9028.f_14++;
	Global_40.f_9028.f_13++;
}

void func_57(int iParam0)
{
	bool bVar0;
	bVar0 = false;
	if (__LIB_1__::func_205(Global_35, iParam0->f_119[1], 1, 0))
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_1(Global_1394141.f_1326, 1024) && iParam0->f_7 < 6)
	{
		__LIB_0__::func_19(&(iParam0->f_7), 6);
	}
	switch (iParam0->f_7)
	{
		case 0:
			if (*iParam0 != 8)
			{
				return;
			}
			if (!bVar0)
			{
				return;
			}
			if (bVar0)
			{
				if (!CAM::DOES_CAM_EXIST(iParam0->f_141))
				{
					iParam0->f_141 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), func_201(0), func_202(0), CAM::GET_FINAL_RENDERED_CAM_FOV(), false, 2);
				}
				__LIB_0__::func_19(&(iParam0->f_7), 1);
			}
			break;
		case 1:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_FOCUS_CAM")))
			{
				if (!__LIB_0__::func_75(&(iParam0->f_142)))
				{
					__LIB_1__::func_148(&(iParam0->f_142));
					return;
				}
				else if (__LIB_1__::func_871(&(iParam0->f_142)) < 800)
				{
					return;
				}
			}
			else
			{
				if (__LIB_0__::func_75(&(iParam0->f_142)))
				{
					__LIB_0__::func_37(&(iParam0->f_142));
				}
				if (__LIB_0__::func_139(iParam0->f_1031[2]))
				{
					__LIB_1__::func_748(&(iParam0->f_1031[2]), 1, 1);
				}
				return;
			}
			if (!__LIB_0__::func_139(iParam0->f_1031[2]))
			{
				iParam0->f_1031[2] = __LIB_1__::func_877("INTERACT_LOOK", joaat("INPUT_FOCUS_CAM"), 6, 570, 570, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 1, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else if (__LIB_0__::func_567(iParam0->f_1031[2], 1))
			{
				if (CAM::DOES_CAM_EXIST(iParam0->f_141))
				{
					if (!CAM::IS_CAM_RENDERING(iParam0->f_141))
					{
						CAM::SET_CAM_ACTIVE(iParam0->f_141, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						__LIB_1__::func_748(&(iParam0->f_1031[2]), 1, 1);
						__LIB_1__::func_581(&(Global_1394141.f_1326), 512);
						__LIB_0__::func_19(&(iParam0->f_7), 2);
					}
				}
			}
			break;
		case 2:
			if (!PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_FOCUS_CAM")))
			{
				__LIB_0__::func_19(&(iParam0->f_7), 3);
			}
			break;
		case 3:
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_FOCUS_CAM")))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				__LIB_1__::func_993(&(Global_1394141.f_1326), 512);
				__LIB_0__::func_37(&(iParam0->f_142));
				__LIB_0__::func_19(&(iParam0->f_7), 4);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_CINEMATIC_CAM_CHANGE_SHOT")))
			{
				iParam0->f_145++;
				if (iParam0->f_145 > 2)
				{
					iParam0->f_145 = 0;
				}
				CAM::SET_CAM_COORD(iParam0->f_141, func_201(iParam0->f_145));
				CAM::SET_CAM_ROT(iParam0->f_141, func_202(iParam0->f_145), 2);
			}
			if (*iParam0 == 9 || !bVar0)
			{
				__LIB_0__::func_19(&(iParam0->f_7), 6);
			}
			break;
		case 4:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (!PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_FOCUS_CAM")))
			{
				__LIB_0__::func_19(&(iParam0->f_7), 1);
			}
			break;
		case 6:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			if (!bVar0)
			{
				if (CAM::DOES_CAM_EXIST(iParam0->f_141) && CAM::IS_CAM_RENDERING(iParam0->f_141))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(iParam0->f_141, false);
				}
				if (__LIB_0__::func_139(iParam0->f_1031[2]))
				{
					__LIB_1__::func_748(&(iParam0->f_1031[2]), 1, 1);
				}
				__LIB_0__::func_19(&(iParam0->f_7), 8);
			}
			else if (CAM::DOES_CAM_EXIST(iParam0->f_141))
			{
				if (CAM::IS_CAM_RENDERING(iParam0->f_141))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(iParam0->f_141, false);
				}
				else
				{
					CAM::DESTROY_CAM(iParam0->f_141, false);
					if (__LIB_0__::func_139(iParam0->f_1031[2]))
					{
						__LIB_1__::func_748(&(iParam0->f_1031[2]), 1, 1);
					}
					__LIB_0__::func_19(&(iParam0->f_7), 8);
				}
			}
			__LIB_1__::func_993(&(Global_1394141.f_1326), 512);
			break;
		case 8:
			if (!__LIB_0__::func_1(Global_1394141.f_1326, 1024))
			{
				__LIB_0__::func_19(&(iParam0->f_7), 0);
			}
			break;
	}
}

bool func_58(int iParam0)
{
	bool bVar0;
	bVar0 = __LIB_1__::func_205(Global_35, Global_1394141.f_7[iParam0->f_125 /*31*/].f_4, 1, 0);
	func_208(iParam0);
	func_60(iParam0);
	func_209(iParam0);
	if ((bVar0 && ENTITY::DOES_ENTITY_EXIST(Local_22.f_126)) && !ENTITY::IS_ENTITY_DEAD(Local_22.f_126))
	{
		switch (iParam0->f_4)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 8:
			case 9:
			case 10:
			case 11:
				PED::SET_PED_RESET_FLAG(iParam0->f_126, 261, true);
				break;
		}
	}
	switch (iParam0->f_4)
	{
		case 0:
			if (!__LIB_0__::func_75(&(Local_22.f_132)))
			{
				__LIB_1__::func_148(&(Local_22.f_132));
				__LIB_1__::func_581(&(iParam0->f_13), 33554432);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_984.f_12[1 /*2*/]) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0->f_984.f_12[1 /*2*/], false)) || (__LIB_0__::func_75(&(Local_22.f_132)) && __LIB_0__::func_265(&(Local_22.f_132)) > 15f))
			{
				__LIB_1__::func_581(&(iParam0->f_13), 512);
				func_71();
				__LIB_0__::func_19(&(iParam0->f_4), 1);
			}
			break;
		case 1:
			iParam0->f_118 = iParam0->f_113[0];
			Global_1394141.f_1335 = iParam0->f_118;
			iParam0->f_984 = iParam0->f_1018.f_1[iParam0->f_1029];
			if (iParam0->f_1029 + 1 < iParam0->f_1018)
			{
				iParam0->f_984.f_1 = iParam0->f_1018.f_1[iParam0->f_1029 + 1];
			}
			else
			{
				iParam0->f_984.f_1 = -1;
			}
			iParam0->f_1030 = iParam0->f_1018.f_1[iParam0->f_1029];
			func_211(iParam0->f_118, iParam0->f_126, iParam0->f_127);
			__LIB_1__::func_993(&(Global_1394141.f_1326), 4096);
			__LIB_1__::func_581(&(iParam0->f_13), 64);
			__LIB_0__::func_19(&(iParam0->f_4), 2);
			break;
		case 2:
			__LIB_16__::func_562(&(iParam0->f_126));
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_118, false))
			{
				return false;
			}
			else
			{
				if (__LIB_0__::func_1(iParam0->f_13, 33554432) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_118) > 0.1f)
				{
					__LIB_1__::func_993(&(iParam0->f_13), 33554432);
				}
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_118) > 0.5f)
				{
					__LIB_0__::func_19(&(iParam0->f_4), 3);
				}
			}
			break;
		case 3:
			func_213(iParam0->f_1030);
			__LIB_16__::func_562(&(iParam0->f_126));
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam0->f_118, func_214()) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0->f_118, false))
			{
				iParam0->f_118 = iParam0->f_113[2];
				Global_1394141.f_1335 = iParam0->f_118;
				func_211(iParam0->f_118, iParam0->f_126, iParam0->f_127);
				func_215(iParam0, 65536);
				__LIB_0__::func_19(&(iParam0->f_4), 4);
			}
			break;
		case 4:
			__LIB_16__::func_562(&(iParam0->f_126));
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_118, false))
			{
				return false;
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_113[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_113[0], true, false))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_113[0]);
				}
				if (!__LIB_0__::func_1(iParam0->f_13, 33554432) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_118) > 0.9f)
				{
					__LIB_1__::func_581(&(iParam0->f_13), 33554432);
				}
				if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam0->f_118, func_214()) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0->f_118, false))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0->f_126, func_176(4), func_177(4), true, false, true);
					__LIB_0__::func_19(&(iParam0->f_4), 5);
				}
			}
			break;
		case 5:
			if (func_216(iParam0))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_984.f_12[0 /*2*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_984.f_12[0 /*2*/]);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_984.f_12[1 /*2*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_984.f_12[1 /*2*/]);
				}
				func_215(iParam0, 32768);
				__LIB_1__::func_993(&(iParam0->f_13), 64);
				__LIB_0__::func_19(&(iParam0->f_4), 6);
			}
			break;
		case 6:
			if (Global_1394141.f_1322)
			{
				__LIB_1__::func_581(&(iParam0->f_13), 256);
				if (!__LIB_0__::func_75(&(Local_22.f_129)))
				{
					__LIB_1__::func_148(&(Local_22.f_129));
				}
				__LIB_0__::func_37(&(Local_22.f_132));
				__LIB_0__::func_19(&(iParam0->f_4), 7);
			}
			break;
		case 7:
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_113[2]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_113[2], true, false)) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0->f_113[2], false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_113[2]);
			}
			if ((!__LIB_0__::func_1(iParam0->f_13, 524288) && Local_22.f_1029 >= 0) && __LIB_0__::func_265(&(Local_22.f_129)) > 30f)
			{
				if (__LIB_2__::func_774(36) || __LIB_0__::func_1(Global_40.f_9028.f_12, 4))
				{
					__LIB_1__::func_993(&(Global_40.f_9028.f_12), 4);
					__LIB_1__::func_581(&(Global_40.f_9028.f_12), 8);
				}
				else
				{
					Global_40.f_9028[Global_1394141.f_7[Global_1394141 /*31*/].f_30]++;
				}
				if (__LIB_0__::func_1(Global_1394141.f_1326, 8192))
				{
					__LIB_1__::func_993(&(Global_1394141.f_1326), 8192);
				}
				__LIB_1__::func_581(&(iParam0->f_13), 524288);
			}
			if (!Global_1394141.f_1323)
			{
				return false;
			}
			if (!func_217(iParam0))
			{
				return false;
			}
			if (!__LIB_0__::func_75(&(Local_22.f_132)))
			{
				__LIB_1__::func_148(&(Local_22.f_132));
				return false;
			}
			else if (__LIB_0__::func_265(&(Local_22.f_132)) < 7f)
			{
				return false;
			}
			__LIB_1__::func_993(&(Global_1394141.f_1326), 4);
			__LIB_1__::func_993(&(Global_1394141.f_1326), 2);
			__LIB_1__::func_993(&(Global_1394141.f_1326), 1);
			__LIB_0__::func_37(&(Local_22.f_132));
			if (iParam0->f_125 == 15 && Global_1394141.f_1324)
			{
				Local_22.f_1029++;
				Global_1394141.f_1323 = 0;
				Global_1394141.f_1321 = 0;
				Global_1394141.f_1322 = 0;
				Global_1394141.f_1324 = 0;
				__LIB_0__::func_19(&(iParam0->f_4), 12);
			}
			else
			{
				func_215(iParam0, 1024);
				__LIB_1__::func_581(&(iParam0->f_13), 64);
				__LIB_0__::func_19(&(iParam0->f_4), 8);
			}
			break;
		case 8:
			__LIB_16__::func_562(&(iParam0->f_126));
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_113[3]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_113[3], true, false))
			{
				Local_22.f_1029++;
				Global_1394141.f_1323 = 0;
				Global_1394141.f_1321 = 0;
				Global_1394141.f_1322 = 0;
				Global_1394141.f_1324 = 0;
				iParam0->f_118 = iParam0->f_113[3];
				Global_1394141.f_1335 = iParam0->f_118;
				func_211(iParam0->f_118, iParam0->f_126, iParam0->f_127);
				if (Local_22.f_1029 < Local_22.f_1018)
				{
					__LIB_1__::func_581(&(iParam0->f_13), 512);
				}
				__LIB_0__::func_19(&(iParam0->f_4), 9);
			}
			break;
		case 9:
			__LIB_16__::func_562(&(iParam0->f_126));
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_118, false))
			{
				return false;
			}
			else
			{
				if (Local_22.f_1029 >= Local_22.f_1018)
				{
					func_218();
				}
				if (__LIB_0__::func_1(iParam0->f_13, 33554432) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_118) > 0.1f)
				{
					__LIB_1__::func_993(&(iParam0->f_13), 33554432);
				}
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_118) > 0.98f)
				{
					if (Local_22.f_1029 >= Local_22.f_1018)
					{
						func_71();
						iParam0->f_984.f_11 = 0;
						__LIB_0__::func_19(&(iParam0->f_4), 10);
					}
					else
					{
						func_71();
						iParam0->f_984 = iParam0->f_1018.f_1[iParam0->f_1029];
						iParam0->f_1030 = iParam0->f_1018.f_1[iParam0->f_1029];
						iParam0->f_984.f_11 = 0;
						__LIB_0__::func_19(&(iParam0->f_4), 3);
					}
				}
			}
			break;
		case 10:
			__LIB_16__::func_562(&(iParam0->f_126));
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam0->f_118, func_214()) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0->f_118, false))
			{
				iParam0->f_118 = iParam0->f_113[1];
				Global_1394141.f_1335 = iParam0->f_118;
				func_211(iParam0->f_118, iParam0->f_126, iParam0->f_127);
				__LIB_0__::func_19(&(iParam0->f_4), 11);
			}
			break;
		case 11:
			__LIB_16__::func_562(&(iParam0->f_126));
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam0->f_118, func_214()))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0->f_126, func_176(4), func_177(4), true, false, true);
			}
			if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_118, false) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_113[3])) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_113[3], true, false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_113[3]);
			}
			if (!__LIB_0__::func_1(iParam0->f_13, 33554432) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_118) > 0.9f)
			{
				__LIB_1__::func_581(&(iParam0->f_13), 33554432);
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0->f_118, false))
			{
				if (iParam0->f_12 == 4)
				{
					__LIB_1__::func_581(&(Global_40.f_9028.f_12), 16);
				}
				__LIB_1__::func_581(&(Global_1394141.f_1325), 32);
				__LIB_1__::func_581(&(Global_1394141.f_1325), 4);
				__LIB_1__::func_581(&(Global_1394141.f_1325), 128);
				__LIB_1__::func_581(&(Global_1394141.f_1325), 32768);
				Global_1394141.f_1335 = 0;
				__LIB_0__::func_19(&(iParam0->f_4), 12);
			}
			break;
		case 12:
			return true;
	}
	return false;
}

void func_59(int iParam0)
{
	if (CAM::DOES_CAM_EXIST(iParam0->f_141))
	{
		if (CAM::IS_CAM_RENDERING(iParam0->f_141))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::SET_CAM_ACTIVE(iParam0->f_141, false);
		}
		CAM::DESTROY_CAM(iParam0->f_141, false);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	__LIB_1__::func_993(&(Global_1394141.f_1326), 512);
	if (__LIB_0__::func_139(iParam0->f_1031[2]))
	{
		__LIB_1__::func_748(&(iParam0->f_1031[2]), 1, 1);
	}
}

void func_60(int iParam0)
{
	switch (iParam0->f_3)
	{
		case 0:
			if (!__LIB_14__::func_8(iParam0->f_128, func_171(1), __LIB_16__::func_447()))
			{
				return;
			}
			__LIB_0__::func_19(&(iParam0->f_3), 1);
			break;
		case 1:
			if (__LIB_0__::func_1(iParam0->f_13, 256))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_128, __LIB_16__::func_448(), iParam0->f_127, 0);
				__LIB_10__::func_942(iParam0->f_128, func_171(1), __LIB_16__::func_447());
				__LIB_0__::func_19(&(iParam0->f_3), 2);
			}
			break;
		case 2:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_128, func_171(1)))
			{
				func_222(iParam0->f_128, func_171(2), __LIB_16__::func_447());
				__LIB_1__::func_993(&(iParam0->f_13), 256);
				__LIB_0__::func_19(&(iParam0->f_3), 3);
			}
			break;
		case 3:
			if (!__LIB_14__::func_8(iParam0->f_128, func_171(2), __LIB_16__::func_447()))
			{
				return;
			}
			__LIB_0__::func_19(&(iParam0->f_3), 4);
			break;
		case 4:
			if (Global_1394141.f_1321)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_128, __LIB_16__::func_448(), iParam0->f_127, 0);
				__LIB_10__::func_942(iParam0->f_128, func_171(2), __LIB_16__::func_447());
				__LIB_0__::func_19(&(iParam0->f_3), 5);
			}
			break;
		case 5:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_128, func_171(2)))
			{
				func_222(iParam0->f_128, func_171(1), __LIB_16__::func_447());
				__LIB_0__::func_19(&(iParam0->f_3), 0);
			}
			break;
		case 6:
			if (!__LIB_14__::func_8(iParam0->f_128, func_171(4), __LIB_16__::func_447()))
			{
				return;
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_128, __LIB_16__::func_448(), iParam0->f_127, 0);
			__LIB_10__::func_942(iParam0->f_128, func_171(4), __LIB_16__::func_447());
			__LIB_0__::func_19(&(iParam0->f_3), 7);
			break;
		case 7:
			break;
	}
}

void func_61(int iParam0)
{
	struct<10> Var0;
	if (!__LIB_0__::func_1(Global_40.f_9028.f_12, 16))
	{
		return;
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_126))
			{
				PED::DELETE_PED(&(iParam0->f_126));
			}
			if (!__LIB_0__::func_75(&(iParam0->f_138)))
			{
				__LIB_1__::func_148(&(iParam0->f_138));
			}
			else if (__LIB_0__::func_265(&(iParam0->f_138)) > 3f)
			{
				iParam0->f_3 = 6;
				if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_119[0]))
				{
					Var0 = { func_48(0) };
					iParam0->f_119[0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0.f_10, Var0, Var0.f_3, Var0.f_6, Var0.f_9);
				}
				if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1770598824))
				{
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1770598824, true);
				}
				__LIB_1__::func_581(&(Global_1394141.f_1326), 64);
				__LIB_0__::func_19(&(iParam0->f_6), 1);
			}
			break;
		case 1:
			if (__LIB_1__::func_205(Global_35, iParam0->f_119[0], 1, 0))
			{
				if (!__LIB_0__::func_1(iParam0->f_13, 1048576))
				{
					if (AUDIO::LOAD_STREAM(func_224(0), func_225()))
					{
						AUDIO::PLAY_STREAM_FROM_POSITION(func_226(0), AUDIO::_0x0556C784FA056628(func_224(0), func_225()));
						__LIB_1__::func_581(&(iParam0->f_13), 1048576);
					}
				}
				if (!__LIB_0__::func_1(iParam0->f_13, 2097152) && TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
				{
					if (AUDIO::LOAD_STREAM(func_224(1), func_225()))
					{
						AUDIO::PLAY_STREAM_FROM_POSITION(func_226(1), AUDIO::_0x0556C784FA056628(func_224(1), func_225()));
						__LIB_1__::func_581(&(iParam0->f_13), 2097152);
						Global_1394141.f_1332 = 49;
						__LIB_0__::func_19(&(iParam0->f_6), 2);
					}
				}
			}
			break;
		case 2:
			break;
	}
}

bool func_66(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iParam0->f_1018 - 1))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(iParam0->f_1018.f_6[iVar0], false) && !SCRIPTS::_0x30BED53646C86D11(iParam0->f_1018.f_6[iVar0]))
		{
			SCRIPTS::_0x7DE4643157AD646C(iParam0->f_1018.f_6[iVar0]);
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_68(var uParam0, int iParam1)
{
	int iVar0;
	if (__LIB_16__::func_470(iParam1) != -1)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= __LIB_16__::func_470(iParam1))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_22[iVar0]))
			{
				VOLUME::_DELETE_VOLUME(uParam0->f_22[iVar0]);
			}
			iVar0++;
		}
	}
}

void func_71()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS(2546.453f, -1303.998f, 46.793f);
	iVar1 = 0;
	while (iVar1 <= (41 - 1))
	{
		iVar0 = iVar1;
		if (__LIB_16__::func_450(iVar0) == 0)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_232(iVar0)))
			{
				if (INTERIOR::IS_VALID_INTERIOR(iVar2))
				{
					if (INTERIOR::IS_INTERIOR_READY(iVar2))
					{
						if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iVar2, func_232(iVar0)))
						{
							INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar2, func_232(iVar0), true);
						}
					}
				}
			}
		}
		iVar1++;
	}
}

void func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		iVar1 = iVar0;
		if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_119[iVar1]))
		{
			VOLUME::_DELETE_VOLUME(iParam0->f_119[iVar1]);
		}
		iVar0++;
	}
}

Vector3 func_90(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -356.7324f, 707.2336f, 116.8609f;
		case 0:
			return 2530.901f, -1280.573f, 49.19497f;
		case 1:
		case 2:
			return 2688.514f, -1367.675f, 46.9404f;
		case 4:
			return -794.3981f, -1359.429f, 43.75871f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_92(int iParam0)
{
	if (!bLocal_15)
	{
		WEAPON::_0xD63B4BA3A02A99E0(Global_35, iParam0);
		bLocal_15 = true;
	}
}

void func_93(int iParam0, bool bParam1)
{
	if (bLocal_15)
	{
		WEAPON::_0x404514D231DB27A0(Global_35, *iParam0);
		bLocal_15 = false;
		if (bParam1)
		{
			*iParam0 = 0;
		}
	}
}

void func_94()
{
	if (!bLocal_14)
	{
		INVENTORY::_0xE3A46370F70F3607(__LIB_0__::func_162(0), 0);
		bLocal_14 = true;
	}
}

void func_95()
{
	if (bLocal_14)
	{
		INVENTORY::_0xD5D72F1624F3BA7C(__LIB_0__::func_162(0));
		bLocal_14 = false;
	}
}

bool func_99(int iParam0)
{
	int iVar0;
	int iVar1;
	if (Global_1394141.f_7[iParam0 /*31*/].f_7[0] == 0)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1394141.f_7[iParam0 /*31*/].f_7[iVar0];
		if (iVar1 != 0)
		{
			if (!__LIB_4__::func_925(iVar1))
			{
				__LIB_4__::func_389(iVar1, 0, 0);
			}
		}
		iVar0++;
	}
	return true;
}

bool func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	if (Global_1394141.f_7[iParam0 /*31*/].f_7[0] == 0)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1394141.f_7[iParam0 /*31*/].f_7[iVar0];
		if (iVar1 != 0)
		{
			if (!__LIB_2__::func_769(iVar1) && !__LIB_10__::func_699(iVar1))
			{
				__LIB_1__::func_948(iVar1, 1, 0, 0, 0, 0, 0, 0);
			}
		}
		iVar0++;
	}
	return true;
}

void func_156(int iParam0)
{
	__LIB_1__::func_993(&(iParam0->f_13), 512);
	__LIB_1__::func_993(&(iParam0->f_13), 2048);
}

void func_157(int iParam0)
{
	__LIB_1__::func_993(&(iParam0->f_13), 1024);
	__LIB_1__::func_993(&(iParam0->f_13), 4096);
}

int func_158(int iParam0)
{
	return iParam0->f_1018.f_1[iParam0->f_1029];
}

char* func_159(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 8:
			switch (iParam1)
			{
				case 2:
					return "script@shows@band_play@shw_bgb2@intro";
				case 3:
					return "script@shows@band_play@shw_bgb2@outro";
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 2:
					return "script@shows@band_play@shw_bgb1@intro";
				case 3:
					return "script@shows@band_play@shw_bgb1@outro";
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 2:
					return "script@shows@bulletcatcher@shw_bulc@intro";
				case 3:
					return "script@shows@bulletcatcher@shw_bulc@outro";
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 2:
					return "script@shows@cancan_dance@p1_intro";
				case 3:
					return "script@shows@cancan_dance@p1_outro";
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 2:
					return "script@shows@cancan_dance@p2_intro";
				case 3:
					return "script@shows@cancan_dance@p2_outro";
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 2:
					return "script@shows@escape_artist@shw_esca@intro";
				case 3:
					return "script@shows@escape_artist@shw_esca@outro";
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 2:
					return "script@shows@escape_noose@shw_escn@intro";
				case 3:
					return "script@shows@escape_noose@shw_escn@outro";
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 2:
					return "script@shows@fire_breather@shw_firb@intro";
				case 3:
					return "script@shows@fire_breather@shw_firb@outro";
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 2:
					return "script@shows@fire_performer@shw_frd1@intro";
				case 3:
					return "script@shows@fire_performer@shw_frd1@outro";
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 2:
					return "script@shows@fire_dancer@shw_frd2@intro";
				case 3:
					return "script@shows@fire_dancer@shw_frd2@outro";
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 2:
					return "script@shows@flex_fight@shw_flxf@intro";
				case 3:
					return "script@shows@flex_fight@shw_flxf@outro";
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 2:
					return "script@shows@snake_dancer@act1_p1@shw_snd1@intro";
				case 3:
					return "script@shows@snake_dancer@act1_p1@shw_snd1@outro";
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					return "script@shows@snake_dancer@act2_p1@shw_snd2@intro";
				case 3:
					return "script@shows@snake_dancer@act2_p1@shw_snd2@outro";
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 2:
					return "script@shows@feats_of_strength@shw_strw@intro";
				case 3:
					return "script@shows@feats_of_strength@shw_strw@outro";
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 2:
					return "script@shows@sword_dancer@shw_swrd@intro";
				case 3:
					return "script@shows@sword_dancer@shw_swrd@outro";
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 2:
					return "script@shows@odd_fellows@shw_oddf_int@intro";
				case 3:
					return "script@shows@odd_fellows@shw_oddf_out@outro";
			}
			break;
	}
	return "";
}

char* func_160(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return "PL_INTRO";
		case 7:
			return "PL_INTRO";
		case 9:
			return "PL_INTRO";
		case 5:
			return "PL_INTRO";
		case 6:
			return "PL_INTRO";
		case 10:
			return "PL_INTRO";
		case 11:
			return "PL_INTRO";
		case 12:
			return "PL_INTRO";
		case 13:
			return "PL_INTRO";
		case 14:
			return "PL_INTRO";
		case 15:
			return "PL_INTRO";
		case 16:
			return "PL_INTRO";
		case 17:
			return "PL_INTRO";
		case 18:
			return "PL_INTRO";
		case 19:
			return "PL_INTRO";
		case 20:
			return "PL_INTRO";
	}
	return "";
}

char* func_162(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 8:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 7:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 9:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 10:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 11:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 12:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 13:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 14:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 15:
			if (bParam1)
			{
				return "PL_INTRO";
			}
			else
			{
				return "PL_INTRO";
			}
			break;
		case 16:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 17:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 18:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 19:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 20:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
	}
	return "";
}

void func_164(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[iParam2] = iParam1;
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CS_CABARETMC");
		case 1:
			return joaat("P_NEW_THEATER_CURTAIN");
		default:
			break;
	}
	return 0;
}

char* func_171(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_IDLE_CLOSED";
		case 1:
			return "PBL_OPEN_SLOW";
		case 2:
			return "PBL_CLOSE_SLOW";
		case 3:
			return "PBL_IDLE_OPEN";
		case 4:
			return "pl_OPEN_SLOW_HALF";
		default:
			break;
	}
	return "FAIL";
}

char* func_173()
{
	return "SHRCTAU";
}

char[] func_174(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_1@intro";
				case 1:
					return "script@shows@set_1@outro";
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_2@intro";
				case 1:
					return "script@shows@set_2@outro";
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_3@intro";
				case 1:
					return "script@shows@set_3@outro";
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_4@intro";
				case 1:
					return "script@shows@set_4@outro";
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_5@intro";
				case 1:
					return "script@shows@set_5@outro";
			}
			break;
	}
	return "";
}

char* func_175(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_INTRO";
		case 1:
			return "PL_INTRO";
		case 2:
			return "PL_INTRO";
		case 3:
			return "PL_INTRO";
		case 4:
			return "PL_INTRO";
	}
	return "";
}

Vector3 func_176(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2546.522f, -1306.835f, 48.2666f;
		case 1:
			return 2538.551f, -1313.008f, 48.21665f;
		case 2:
			return 2546.186f, -1309.756f, 48.21665f;
		case 3:
			return 2546.202f, -1295.387f, 48.2419f;
		case 4:
			return 2538.551f, -1313.008f, 48.21665f;
		case 5:
			return 2546.278f, -1301.387f, 49.2503f;
		case 6:
			return 1.2492f, 0f, -179.3095f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_177(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 1:
			return -88.38f;
		case 2:
			return 355.6767f;
		case 3:
			return 0f;
		case 4:
			return -88.38f;
		case 5:
			return 0f;
		case 6:
			return 0f;
		default:
			break;
	}
	return 0f;
}

float func_187(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 189.76f;
				case 1:
					return 194.54f;
				case 2:
					return 185.02f;
				case 3:
					return 185.67f;
				case 4:
					return 186.48f;
				case 5:
					return 189.64f;
				case 6:
					return 194.87f;
				case 7:
					return 197.45f;
				case 8:
					return 192.94f;
				case 9:
					return 190.4f;
				case 10:
					return 187.74f;
				case 11:
					return 188.21f;
				case 12:
					return 191.46f;
				case 13:
					return 187.8f;
				case 14:
					return 197.77f;
				case 15:
					return 197.28f;
				case 16:
					return 195.7f;
				case 17:
					return 194.38f;
				case 18:
					return 189.91f;
				case 19:
					return 187.19f;
				case 20:
					return 183.35f;
				case 21:
					return 195.68f;
				case 22:
					return 195.08f;
				case 23:
					return 197.6f;
				case 24:
					return 192.22f;
				case 25:
					return 187.31f;
				case 26:
					return 186.63f;
				case 27:
					return 174.21f;
				case 28:
					return 175.4f;
				case 29:
					return 177.33f;
				case 30:
					return 177.62f;
				case 31:
					return 175.4f;
				case 32:
					return 176.59f;
				case 33:
					return 165.32f;
				case 34:
					return 170.16f;
				case 35:
					return 170.37f;
				case 36:
					return 174.13f;
				case 37:
					return 175.59f;
				case 38:
					return 173.64f;
				case 39:
					return 178.62f;
				case 40:
					return 169.96f;
				case 41:
					return 171.41f;
				case 42:
					return 170.19f;
				case 43:
					return 171.15f;
				case 44:
					return 174.93f;
				case 45:
					return 177.61f;
				case 46:
					return 169.6f;
				case 47:
					return 171.53f;
				case 48:
					return 172.77f;
				case 49:
					return 174.2f;
				case 50:
					return 175.33f;
				case 51:
					return 175.1f;
				case 52:
					return 176.09f;
				case 53:
					return 152.8307f;
				case 54:
					return 152.8307f;
				case 55:
					return 190.6648f;
				default:
					break;
			}
			Jump @1597; //curOff = 1113
			switch (iParam1)
			{
				case 0:
					return -164f;
				case 1:
					return -164f;
				case 2:
					return -164f;
				case 3:
					return -164f;
				case 4:
					return -164f;
				case 5:
					return -164f;
				case 6:
					return -164f;
				case 7:
					return -164f;
				case 8:
					return -164f;
				case 9:
					return -164f;
				default:
					break;
			}
			Jump @1597; //curOff = 1264
			switch (iParam1)
			{
				case 0:
					return -37.72f;
				case 1:
					return -39.69f;
				case 2:
					return -39.97f;
				case 3:
					return -39.02f;
				case 4:
					return -52.61f;
				case 5:
					return -55.28f;
				case 6:
					return -56.79f;
				case 7:
					return -39.3f;
				case 8:
					return -38.34f;
				case 9:
					return -39.92f;
				case 10:
					return -57.96f;
				case 11:
					return -56.65f;
				case 12:
					return -38.24f;
				case 13:
					return -39.76f;
				case 14:
					return -56.13f;
				case 15:
					return -58.55f;
				case 16:
					return -54.07f;
				case 17:
					return -40.84f;
				case 18:
					return -40.21f;
				case 19:
					return -44.17f;
				case 20:
					return -52.32f;
				case 21:
					return -54.76f;
				default:
					break;
			}
			Jump @1597; //curOff = 1583
			return -88.69f;
			return -175.57f;
		}
bool func_188(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					return true;
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
					return true;
				case 17:
					return 2;
				case 18:
					return 2;
				case 20:
				case 31:
					return true;
				case 32:
					return true;
				case 39:
					return true;
				case 53:
				case 54:
				case 55:
					return true;
				default:
					break;
			}
			break;
		case 3:
			break;
	}
	return false;
}

bool func_189(var uParam0, int iParam1)
{
	int iVar0;
	struct<11> Var1;
	if (__LIB_16__::func_470(iParam1) != -1)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= __LIB_16__::func_470(iParam1))
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_22[iVar0]))
			{
				Var1 = { func_256(iParam1, iVar0) };
				uParam0->f_22[iVar0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var1.f_9, Var1, Var1.f_3, Var1.f_6, Var1.f_10);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= __LIB_16__::func_470(iParam1))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_22[iVar0]))
			{
				PED::_0x4C39C95AE5DB1329(uParam0->f_22[iVar0], 0, 2);
			}
			iVar0++;
		}
		return true;
	}
	else
	{
		return true;
	}
	return false;
}

void func_193(var uParam0, int iParam1)
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
	{
		TASK::TASK_START_SCENARIO_AT_POSITION(*uParam0, joaat("PROP_HUMAN_SEAT_CHAIR"), __LIB_16__::func_457(iParam1, uParam0->f_2), func_187(iParam1, uParam0->f_2), -1, false, true, 0, 0.25f, false);
	}
}

void func_194(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	int iVar8;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		iVar0 = 2;
		if (PED::IS_PED_MALE(*uParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { __LIB_16__::func_457(iParam1, uParam0->f_2) };
		fVar4 = func_187(iParam1, uParam0->f_2);
		vVar5 = { 0f, 0f, fVar4 };
		iVar8 = func_257(iParam1, uParam0->f_2);
		uParam0->f_5 = 1;
		uParam0->f_6 = -1;
		uParam0->f_7 = __LIB_16__::func_551(uParam0->f_5);
		uParam0->f_8 = __LIB_16__::func_712(uParam0->f_5, iVar0, iVar8);
		if (iVar8 == 0)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 1000f, -1000f, -1, 49153, __LIB_16__::func_471(), 2, 1, 0);
		}
		else
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 1000f, -1000f, -1, 49153, __LIB_16__::func_471(), 2, 0, 0);
		}
	}
}

void func_197(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	bool bVar7;
	bVar0 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1);
	iVar1 = __LIB_16__::func_454(iParam2);
	fVar2 = 0f;
	if (__LIB_0__::func_75(&(uParam0->f_8)))
	{
		fVar2 = __LIB_0__::func_265(&(uParam0->f_8));
	}
	iVar5 = 0;
	while (iVar5 <= (iVar1 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar5 /*10*/]) || ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5 /*10*/]))
		{
		}
		else
		{
			PED::SET_PED_RESET_FLAG((*uParam1)[iVar5 /*10*/], 153, true);
			if (Global_1394141.f_1334)
			{
				if (__LIB_16__::func_472(*uParam0, iVar5) && (uParam1[iVar5 /*10*/])->f_1 != 5)
				{
					(uParam1[iVar5 /*10*/])->f_1 = 5;
				}
			}
			else if (__LIB_16__::func_472(*uParam0, iVar5) && (uParam1[iVar5 /*10*/])->f_1 == 5)
			{
				__LIB_0__::func_19(&(uParam0->f_11), 0);
				(uParam1[iVar5 /*10*/])->f_1 = 3;
			}
			if (uParam0->f_19 && __LIB_16__::func_504(iParam2))
			{
				if (!__LIB_0__::func_75(&(uParam0->f_8)))
				{
					__LIB_1__::func_581(&(uParam0->f_18), 1);
					__LIB_1__::func_581(&(uParam0->f_18), 8);
					__LIB_1__::func_148(&(uParam0->f_8));
				}
				else if ((uParam1[iVar5 /*10*/])->f_1 < 7)
				{
					if (__LIB_16__::func_473(iParam2, iVar5) >= 0f && fVar2 > __LIB_16__::func_473(iParam2, iVar5))
					{
						(uParam1[iVar5 /*10*/])->f_1 = 7;
					}
				}
			}
			if ((!uParam0->f_19 && !__LIB_16__::func_472(*uParam0, iVar5)) && (uParam1[iVar5 /*10*/])->f_1 != 5)
			{
				if ((uParam1[iVar5 /*10*/])->f_9)
				{
					fVar6 = __LIB_0__::func_665(Global_35, (*uParam1)[iVar5 /*10*/], 1, 1);
					if (fVar6 > 2f || !__LIB_16__::func_474(uParam1[iVar5 /*10*/]))
					{
						(uParam1[iVar5 /*10*/])->f_9 = 0;
						uParam0->f_21 = 0;
						(uParam1[iVar5 /*10*/])->f_5 = 2;
						func_267(uParam1[iVar5 /*10*/], iParam2);
					}
				}
				else if (!uParam0->f_21 && (uParam1[iVar5 /*10*/])->f_1 != 6)
				{
					fVar6 = __LIB_0__::func_665(Global_35, (*uParam1)[iVar5 /*10*/], 1, 1);
					if (fVar6 < 1.5f && __LIB_16__::func_474(uParam1[iVar5 /*10*/]))
					{
						(uParam1[iVar5 /*10*/])->f_5 = __LIB_16__::func_475(iVar5);
						func_267(uParam1[iVar5 /*10*/], iParam2);
						(uParam1[iVar5 /*10*/])->f_9 = 1;
						uParam0->f_21 = 1;
					}
				}
			}
			switch ((uParam1[iVar5 /*10*/])->f_1)
			{
				case 0:
					break;
				case 1:
					if (__LIB_16__::func_476(iParam2, iVar5))
					{
						__LIB_9__::func_314(uParam1[iVar5 /*10*/], __LIB_16__::func_477(iParam2), 500);
					}
					break;
				case 3:
					func_272(uParam1[iVar5 /*10*/], iParam2);
					(uParam1[iVar5 /*10*/])->f_1 = 4;
					break;
				case 4:
					bVar7 = false;
					if ((uParam1[iVar5 /*10*/])->f_6 == -1)
					{
						func_267(uParam1[iVar5 /*10*/], iParam2);
						(uParam1[iVar5 /*10*/])->f_1 = 1;
						return;
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam1)[iVar5 /*10*/], (uParam1[iVar5 /*10*/])->f_7, (uParam1[iVar5 /*10*/])->f_8, 1))
					{
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME((*uParam1)[iVar5 /*10*/], (uParam1[iVar5 /*10*/])->f_7, (uParam1[iVar5 /*10*/])->f_8) > 0.97f)
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						func_267(uParam1[iVar5 /*10*/], iParam2);
						(uParam1[iVar5 /*10*/])->f_1 = 1;
					}
					break;
				case 5:
					if (!uParam0->f_19)
					{
						func_273(uParam0, uParam1[iVar5 /*10*/]);
					}
					break;
				case 6:
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_12[1 /*2*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5 /*10*/]))
						{
							PED::SET_PED_RESET_FLAG((*uParam1)[iVar5 /*10*/], 261, true);
						}
						if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_12[1 /*2*/], __LIB_16__::func_459(1, iVar5, uParam0->f_17)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_12[1 /*2*/], false))
						{
							func_194(uParam1[iVar5 /*10*/], iParam2);
							(uParam1[iVar5 /*10*/])->f_1 = 1;
						}
						if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1((*uParam1)[iVar5 /*10*/], uParam0->f_12[1 /*2*/]))
						{
							func_194(uParam1[iVar5 /*10*/], iParam2);
							(uParam1[iVar5 /*10*/])->f_1 = 1;
						}
					}
					break;
				case 2:
					TASK::TASK_START_SCENARIO_AT_POSITION((*uParam1)[iVar5 /*10*/], joaat("PROP_HUMAN_SEAT_CHAIR"), __LIB_16__::func_457(iParam2, iVar5), func_187(iParam2, iVar5), -1, false, true, 0, 0.25f, false);
					(uParam1[iVar5 /*10*/])->f_1 = 1;
					break;
				case 7:
					if (!__LIB_0__::func_1(uParam0->f_18, 4))
					{
						return;
					}
					if (func_257(iParam2, iVar5) == 0 && !__LIB_16__::func_460(iParam2))
					{
						TASK::TASK_START_SCENARIO_AT_POSITION((*uParam1)[iVar5 /*10*/], joaat("PROP_HUMAN_SEAT_CHAIR"), __LIB_16__::func_457(iParam2, iVar5), func_187(iParam2, iVar5), -1, false, true, 0, 0.25f, false);
						PED::_0x2208438012482A1A((*uParam1)[iVar5 /*10*/], false, false);
						(uParam1[iVar5 /*10*/])->f_1 = 8;
					}
					else
					{
						(uParam1[iVar5 /*10*/])->f_1 = 9;
					}
					break;
				case 8:
					if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar5 /*10*/]) && !ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5 /*10*/]))
					{
						if (TASK::IS_PED_ACTIVE_IN_SCENARIO((*uParam1)[iVar5 /*10*/], 0))
						{
							PED::_0x463803429297117C((*uParam1)[iVar5 /*10*/], 2546.344f, -1307.994f, 48.42698f, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar5 /*10*/], true);
							(uParam1[iVar5 /*10*/])->f_1 = 9;
						}
						else if (fVar2 > (__LIB_16__::func_473(iParam2, iVar5) + 2f))
						{
							(uParam1[iVar5 /*10*/])->f_1 = 9;
						}
					}
					break;
				case 9:
					if (__LIB_16__::func_467(iParam2))
					{
						if (__LIB_0__::func_1(uParam0->f_18, 16))
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING((*uParam1)[iVar5 /*10*/], __LIB_16__::func_462(iParam2), 0, 10, -1, 0, 0, -1);
							(uParam1[iVar5 /*10*/])->f_1 = 10;
						}
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam1)[iVar5 /*10*/], __LIB_16__::func_478(iParam2), 1f, -1, 0.25f, 5373953, 40000f);
						PED::_0x2208438012482A1A((*uParam1)[iVar5 /*10*/], false, false);
						(uParam1[iVar5 /*10*/])->f_1 = 10;
					}
					break;
				case 10:
					if ((bVar0 || PED::IS_PED_SHOOTING(Global_35)) || __LIB_0__::func_1(uParam0->f_18, 32))
					{
						__LIB_1__::func_581(&(uParam0->f_18), 32);
						(uParam1[iVar5 /*10*/])->f_1 = 12;
						return;
					}
					if (__LIB_16__::func_467(iParam2))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iVar5 /*10*/], 658540077, true) == 1)
						{
							(uParam1[iVar5 /*10*/])->f_1 = 11;
						}
						else if (fVar2 > (__LIB_16__::func_473(iParam2, iVar5) + 3f))
						{
							(uParam1[iVar5 /*10*/])->f_1 = 9;
						}
					}
					else if (!__LIB_9__::func_313(ENTITY::GET_ENTITY_COORDS((*uParam1)[iVar5 /*10*/], true, false)))
					{
						PED::SET_PED_CONFIG_FLAG((*uParam1)[iVar5 /*10*/], 301, false);
						PED::SET_PED_CAN_BE_TARGETTED((*uParam1)[iVar5 /*10*/], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam1)[iVar5 /*10*/], joaat("REL_NO_RELATIONSHIP"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar5 /*10*/], false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iVar5 /*10*/]);
						(uParam1[iVar5 /*10*/])->f_1 = 14;
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iVar5 /*10*/], 713668775, true) != 1 && fVar2 > (__LIB_16__::func_473(iParam2, iVar5) + 3f))
					{
						(uParam1[iVar5 /*10*/])->f_1 = 9;
					}
					break;
				case 11:
					if ((bVar0 || PED::IS_PED_SHOOTING(Global_35)) || __LIB_0__::func_1(uParam0->f_18, 32))
					{
						__LIB_1__::func_581(&(uParam0->f_18), 32);
						(uParam1[iVar5 /*10*/])->f_1 = 12;
						return;
					}
					TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(__LIB_16__::func_462(iParam2), &iVar3);
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(__LIB_16__::func_462(iParam2), ENTITY::GET_ENTITY_COORDS((*uParam1)[iVar5 /*10*/], true, false), &iVar4);
					if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iVar5 /*10*/], 658540077, true) != 1 || iVar4 >= (iVar3 - 2))
					{
						PED::SET_PED_CONFIG_FLAG((*uParam1)[iVar5 /*10*/], 301, false);
						PED::SET_PED_CAN_BE_TARGETTED((*uParam1)[iVar5 /*10*/], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam1)[iVar5 /*10*/], joaat("REL_NO_RELATIONSHIP"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar5 /*10*/], false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iVar5 /*10*/]);
						(uParam1[iVar5 /*10*/])->f_1 = 14;
					}
					break;
				case 12:
					PED::SET_PED_CONFIG_FLAG((*uParam1)[iVar5 /*10*/], 301, false);
					PED::SET_PED_CAN_BE_TARGETTED((*uParam1)[iVar5 /*10*/], true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam1)[iVar5 /*10*/], joaat("REL_NO_RELATIONSHIP"));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar5 /*10*/], false);
					TASK::_TASK_SMART_FLEE_STYLE_PED((*uParam1)[iVar5 /*10*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iVar5 /*10*/]);
					(uParam1[iVar5 /*10*/])->f_1 = 14;
					break;
				case 13:
					if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iVar5 /*10*/], 713668775, true) != 1 && !TASK::IS_PED_ACTIVE_IN_SCENARIO((*uParam1)[iVar5 /*10*/], 0))
					{
						PED::DELETE_PED(uParam1[iVar5 /*10*/]);
						(uParam1[iVar5 /*10*/])->f_1 = 14;
					}
					else
					{
						(uParam1[iVar5 /*10*/])->f_1 = 8;
					}
					break;
				case 14:
					break;
			}
		}
		iVar5++;
	}
}

Vector3 func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2546.278f, -1301.387f, 49.2503f;
		case 1:
			return 2546.242f, -1298.337f, 51.3709f;
		case 2:
			return 2546.77f, -1304.337f, 48.7382f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_202(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.2492f, 0f, -179.3095f;
		case 1:
			return -7.8585f, 0f, -179.3892f;
		case 2:
			return 9.5547f, 0f, 178.3628f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_208(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_126))
	{
		return;
	}
	if (!__LIB_0__::func_1(iParam0->f_13, 262144) && func_280(iParam0))
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALDRIDGE_T_ABINGTON"));
		__LIB_1__::func_581(&(iParam0->f_13), 262144);
	}
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iParam0->f_126, 0, 1);
	if (__LIB_0__::func_1(Global_1394141.f_1326, 512))
	{
		if (__LIB_0__::func_1(iParam0->f_13, 64))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0->f_126, 301, true);
			__LIB_1__::func_993(&(iParam0->f_13), 64);
		}
	}
	else if (!__LIB_0__::func_1(iParam0->f_13, 64))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0->f_126, 301, false);
		__LIB_1__::func_581(&(iParam0->f_13), 64);
	}
	if (Global_1394141.f_1322 || __LIB_0__::func_1(iParam0->f_13, 33554432))
	{
		if (!PED::GET_PED_CONFIG_FLAG(iParam0->f_126, 301, true))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0->f_126, 301, true);
		}
	}
	else if (PED::GET_PED_CONFIG_FLAG(iParam0->f_126, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0->f_126, 301, false);
	}
	switch (iParam0->f_2)
	{
		case 0:
			if (ENTITY::IS_ENTITY_DEAD(iParam0->f_126))
			{
				return;
			}
			MISC::_0x870708A6E147A9AD(iParam0->f_126, "", 20f, 0, 4, 0, 0, 0, 0, -1);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_126, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_126, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_126, 130, true);
			PLAYER::_0x3A8611BD7BDE84F7(PLAYER::GET_PLAYER_INDEX(), 17f);
			Global_1394141.f_1334 = 0;
			func_281();
			if (__LIB_0__::func_1(iParam0->f_13, 64))
			{
				__LIB_0__::func_19(&(iParam0->f_2), 1);
			}
			else
			{
				__LIB_0__::func_19(&(iParam0->f_2), 2);
			}
			break;
		case 1:
			__LIB_2__::func_462(&(iParam0->f_9), 5f, 0);
			__LIB_0__::func_19(&(iParam0->f_2), 3);
			break;
		case 2:
			if (__LIB_0__::func_139(iParam0->f_1031[0]))
			{
				__LIB_1__::func_748(&(iParam0->f_1031[0]), 1, 1);
			}
			if (__LIB_0__::func_139(iParam0->f_1031[1]))
			{
				__LIB_1__::func_748(&(iParam0->f_1031[1]), 1, 1);
			}
			if (__LIB_0__::func_1(iParam0->f_13, 64) && !__LIB_0__::func_1(Global_1394141.f_1326, 16384))
			{
				__LIB_0__::func_19(&(iParam0->f_2), 1);
			}
			break;
		case 3:
			if (!__LIB_0__::func_1(iParam0->f_13, 64) || __LIB_0__::func_1(Global_1394141.f_1326, 16384))
			{
				__LIB_0__::func_19(&(iParam0->f_2), 2);
				return;
			}
			iVar1 = __LIB_0__::func_57(iParam0->f_126);
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, 0, 0) && iVar0 == iVar1)
			{
				if (Global_36.f_2 > 51f)
				{
					ENTITY::_0xAF7F3099B9FEB535(iVar1, 0f, 0f, -2f);
				}
				else
				{
					ENTITY::_0xAF7F3099B9FEB535(iVar1, 0f, 0f, 0f);
				}
				if (!__LIB_0__::func_75(&(iParam0->f_9)))
				{
					__LIB_1__::func_148(&(iParam0->f_9));
				}
				else if (!__LIB_0__::func_139(iParam0->f_1031[0]) || !__LIB_0__::func_139(iParam0->f_1031[1]))
				{
					iParam0->f_1031[0] = __LIB_2__::func_403("SHOW_POS_RESPONSE", joaat("INPUT_INTERACT_LOCKON_POS"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(iParam0->f_1031[0]) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam0->f_126), 0);
					iParam0->f_1031[1] = __LIB_2__::func_403("SHOW_NEG_RESPONSE", joaat("INPUT_INTERACT_LOCKON_NEG"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(iParam0->f_1031[1]) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam0->f_126), 0);
				}
				else if (__LIB_1__::func_871(&(iParam0->f_9)) > 8500)
				{
					bVar2 = false;
					if (!__LIB_0__::func_572(iParam0->f_1031[0], 0))
					{
						__LIB_1__::func_221(iParam0->f_1031[0], 1, 1);
					}
					if (!__LIB_0__::func_572(iParam0->f_1031[1], 0))
					{
						__LIB_1__::func_221(iParam0->f_1031[1], 1, 1);
					}
					if (__LIB_1__::func_732(iParam0->f_1031[0], 1))
					{
						bVar2 = true;
						__LIB_0__::func_19(&(iParam0->f_2), 4);
					}
					if (__LIB_1__::func_732(iParam0->f_1031[1], 1))
					{
						bVar2 = true;
						__LIB_0__::func_19(&(iParam0->f_2), 5);
					}
					if (bVar2)
					{
						__LIB_1__::func_221(iParam0->f_1031[0], 0, 1);
						__LIB_1__::func_221(iParam0->f_1031[1], 0, 1);
						__LIB_1__::func_148(&(iParam0->f_9));
					}
				}
				else
				{
					if (__LIB_0__::func_572(iParam0->f_1031[0], 0))
					{
						__LIB_1__::func_221(iParam0->f_1031[0], 0, 1);
					}
					if (__LIB_0__::func_572(iParam0->f_1031[1], 0))
					{
						__LIB_1__::func_221(iParam0->f_1031[1], 0, 1);
					}
				}
			}
			else
			{
				if (__LIB_0__::func_139(iParam0->f_1031[0]))
				{
					__LIB_1__::func_748(&(iParam0->f_1031[0]), 1, 1);
				}
				if (__LIB_0__::func_139(iParam0->f_1031[1]))
				{
					__LIB_1__::func_748(&(iParam0->f_1031[1]), 1, 1);
				}
			}
			break;
		case 4:
			vVar3 = { __LIB_1__::func_344(func_289()) };
			if (__LIB_2__::func_813(&(iParam0->f_14), vVar3, 1, -1, 0, 0))
			{
				__LIB_0__::func_19(&(iParam0->f_2), 1);
			}
			break;
		case 5:
			vVar6 = { __LIB_1__::func_344(func_292()) };
			if (__LIB_2__::func_813(&(iParam0->f_14), vVar6, 1, -1, 0, 0))
			{
				__LIB_0__::func_19(&(iParam0->f_2), 1);
			}
			break;
		case 6:
			break;
	}
}

void func_209(int iParam0)
{
	bool bVar0;
	bVar0 = false;
	if (iParam0->f_4 >= 2 && iParam0->f_4 <= 4)
	{
		bVar0 = true;
	}
	if (iParam0->f_4 >= 8 && iParam0->f_4 <= 11)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		switch (iParam0->f_984)
		{
			case 9:
				func_293(iParam0);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 1965240012))
				{
					Global_1394141.f_1332 = 5;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 914796948))
				{
					Global_1394141.f_1332 = 6;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -2016029647))
				{
					Global_1394141.f_1332 = 7;
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_118))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_118, "PL_OUTRO_NEG"))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 9812678))
						{
							Global_1394141.f_1332 = 10;
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 1441097060))
						{
							Global_1394141.f_1332 = 11;
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 102680024))
						{
							Global_1394141.f_1332 = 12;
						}
					}
					else if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_118, "PL_OUTRO_POS"))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 9812678))
						{
							Global_1394141.f_1332 = 8;
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 1441097060))
						{
							Global_1394141.f_1332 = 9;
						}
					}
				}
				break;
			case 12:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1898689755))
				{
					Global_1394141.f_1332 = 1;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 607876597))
				{
					Global_1394141.f_1332 = 2;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -243756944))
				{
					Global_1394141.f_1332 = 3;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 45626095))
				{
					Global_1394141.f_1332 = 4;
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_118))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_118, "PL_OUTRO_POS"))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 256044616))
						{
							Global_1394141.f_1332 = 5;
						}
					}
					else if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_118, "PL_OUTRO_NEG"))
					{
						if (!__LIB_0__::func_1(iParam0->f_13, 16777216))
						{
							Global_1394141.f_1332 = 6;
							__LIB_1__::func_581(&(iParam0->f_13), 16777216);
						}
					}
				}
				break;
			case 7:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -354261736))
				{
					Global_1394141.f_1332 = 1;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1610789398))
				{
					Global_1394141.f_1332 = 2;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1371346315))
				{
					Global_1394141.f_1332 = 3;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 1511914274))
				{
					Global_1394141.f_1332 = 4;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -328228921))
				{
					Global_1394141.f_1332 = 5;
				}
				break;
			case 5:
				func_294(iParam0);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1050877829))
				{
					Global_1394141.f_1332 = 5;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -671085119))
				{
					Global_1394141.f_1332 = 6;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1203214149))
				{
					Global_1394141.f_1332 = 7;
				}
				break;
			case 16:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -701171441))
				{
					Global_1394141.f_1332 = 1;
				}
				if (!Global_1394141.f_1324)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1696950789))
					{
						Global_1394141.f_1332 = 2;
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -2061800835))
					{
						Global_1394141.f_1332 = 3;
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1696950789))
				{
					Global_1394141.f_1332 = 4;
				}
				break;
			case 18:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 399563686))
				{
					Global_1394141.f_1332 = 1;
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_118))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_118, "PL_OUTRO_NEG"))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1289759123))
						{
							Global_1394141.f_1332 = 2;
						}
					}
					else if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_118, "PL_OUTRO_POS"))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_118) < 0.5f)
						{
							if (!__LIB_0__::func_1(iParam0->f_13, 16777216))
							{
								Global_1394141.f_1332 = 6;
								__LIB_1__::func_581(&(iParam0->f_13), 16777216);
							}
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1347013244))
				{
					Global_1394141.f_1332 = 3;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1116417791))
				{
					Global_1394141.f_1332 = 4;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1283474165))
				{
					Global_1394141.f_1332 = 5;
				}
				break;
			case 8:
				func_295(iParam0);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 339574134))
				{
					Global_1394141.f_1332 = 4;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 2002413044))
				{
					Global_1394141.f_1332 = 5;
				}
				break;
			case 14:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 2039367936))
				{
					Global_1394141.f_1332 = 1;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 659966729))
				{
					Global_1394141.f_1332 = 2;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 511687004))
				{
					Global_1394141.f_1332 = 3;
				}
				break;
			case 6:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 2033997287))
				{
					Global_1394141.f_1332 = 1;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -190474029))
				{
					Global_1394141.f_1332 = 2;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 1389314580))
				{
					Global_1394141.f_1332 = 3;
				}
				break;
			case 17:
				func_296(iParam0);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1314916643))
				{
					Global_1394141.f_1332 = 5;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1679176847))
				{
					Global_1394141.f_1332 = 6;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 222841341))
				{
					Global_1394141.f_1332 = 7;
				}
				break;
			case 10:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 1680071222))
				{
					Global_1394141.f_1332 = 1;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 1915680332))
				{
					Global_1394141.f_1332 = 2;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -2140695879))
				{
					Global_1394141.f_1332 = 3;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1916949147))
				{
					Global_1394141.f_1332 = 4;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1825287773))
				{
					Global_1394141.f_1332 = 5;
				}
				break;
			case 15:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 258163243))
				{
					Global_1394141.f_1332 = 1;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 1433430811))
				{
					Global_1394141.f_1332 = 2;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 701100200))
				{
					Global_1394141.f_1332 = 3;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -73657267))
				{
					Global_1394141.f_1332 = 4;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -2140267017))
				{
					Global_1394141.f_1332 = 5;
				}
				break;
			case 13:
				func_297(iParam0);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, joaat("CROWD_FIREDANCER2_01")))
				{
					Global_1394141.f_1332 = 4;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, joaat("CROWD_FIREDANCER2_02")))
				{
					Global_1394141.f_1332 = 5;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 1663249175))
				{
					Global_1394141.f_1332 = 6;
				}
				break;
			case 19:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 275246134))
				{
					Global_1394141.f_1332 = 1;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -254082133))
				{
					Global_1394141.f_1332 = 2;
				}
				break;
			case 11:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 1017851950))
				{
					Global_1394141.f_1332 = 1;
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_118))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_118, "PL_OUTRO_NEG"))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1005071104))
						{
							Global_1394141.f_1332 = 3;
						}
					}
					else if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_118, "PL_OUTRO_POS"))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1005071104))
						{
							Global_1394141.f_1332 = 2;
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 1554422650))
				{
					Global_1394141.f_1332 = 4;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 1867956442))
				{
					Global_1394141.f_1332 = 5;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1580882497))
				{
					Global_1394141.f_1332 = 6;
				}
				break;
			case 20:
				switch (iParam0->f_1018.f_1[1])
				{
					case 9:
						func_293(iParam0);
						break;
					case 5:
						func_294(iParam0);
						break;
					case 8:
						func_295(iParam0);
						break;
					case 17:
						func_296(iParam0);
						break;
					case 14:
						func_297(iParam0);
						break;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1753281299))
				{
					Global_1394141.f_1332 = 5;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 261848356))
				{
					Global_1394141.f_1332 = 6;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1954518104))
				{
					Global_1394141.f_1332 = 7;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 817083916))
				{
					Global_1394141.f_1332 = 8;
				}
				break;
		}
	}
}

void func_211(int iParam0, int iParam1, int iParam2)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, func_214(), iParam1, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, __LIB_16__::func_448(), iParam2, 0);
	ANIMSCENE::START_ANIM_SCENE(iParam0);
}

int func_213(int iParam0)
{
	int iVar0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_232(iParam0)))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(2546.453f, -1303.998f, 46.793f);
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			if (INTERIOR::IS_INTERIOR_READY(iVar0))
			{
				if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iVar0, func_232(iParam0)))
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, func_232(iParam0), 0);
				}
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_214()
{
	return "MC";
}

void func_215(int iParam0, int iParam1)
{
	__LIB_1__::func_581(&(iParam0->f_13), iParam1);
}

bool func_216(int iParam0)
{
	char* sVar0;
	struct<2> Var1;
	if (iParam0->f_1029 != 0)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(iParam0->f_1018.f_6[(iParam0->f_1029 - 1)], false))
		{
			return false;
		}
	}
	sVar0 = func_301(iParam0->f_1018.f_1[iParam0->f_1029]);
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sVar0))
	{
		return false;
	}
	Var1.f_1 = iParam0->f_1018.f_1[iParam0->f_1029];
	Var1 = 1;
	iParam0->f_1018.f_6[iParam0->f_1029] = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(sVar0, &Var1, 10, 2051);
	return true;
}

bool func_217(int iParam0)
{
	bool bVar0;
	bVar0 = __LIB_0__::func_1(Global_1394141.f_1326, 2048);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_128))
	{
		if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_128, func_171(2)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_128) > 0.413f)
		{
			if (!bVar0)
			{
				__LIB_1__::func_581(&(Global_1394141.f_1326), 2048);
			}
			return true;
		}
		if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_128, func_171(0)))
		{
			if (!bVar0)
			{
				__LIB_1__::func_581(&(Global_1394141.f_1326), 2048);
			}
			return true;
		}
	}
	if (bVar0)
	{
		__LIB_1__::func_993(&(Global_1394141.f_1326), 2048);
	}
	return false;
}

int func_218()
{
	if (!__LIB_16__::func_494(&(Local_22.f_113[1]), &(Local_22.f_13), func_174(Local_22.f_12, 1), func_302(Local_22.f_12), 1))
	{
		return 0;
	}
	return 1;
}

void func_222(var uParam0, char* sParam1, char[4] cParam2)
{
	if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0, sParam1);
	}
}

char* func_224(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EASTER_EGG_LEADUP_MUSIC";
		case 1:
			return "EASTER_EGG_TADA_MUSIC";
		default:
			break;
	}
	return "EASTER_EGG_LEADUP_MUSIC";
}

char* func_225()
{
	return "3235391231_intro";
}

Vector3 func_226(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2546.551f, -1310.422f, 51.21665f;
		case 1:
			return 2546.551f, -1310.422f, 51.21665f;
		default:
			break;
	}
	return 2546.551f, -1310.422f, 51.21665f;
}

char* func_232(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			return "new_theater_cancan";
		case 9:
			return "new_theater_magician";
		case 12:
		case 13:
		case 14:
			return "new_theater_fireperformer";
		case 16:
		case 17:
		case 19:
			return "new_theater_snakedancer";
		case 15:
		case 18:
			return "new_theater_strongwoman";
		case 20:
			return "new_theater_theOddFellows";
	}
	return "";
}

struct<11> func_256(int iParam0, int iParam1)
{
	struct<11> Var0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2543.514f, -1303.811f, 47.16364f };
					Var0.f_3 = { 0f, 0f, 9.568836f };
					Var0.f_6 = { 4.336886f, 2f, 2.155625f };
					Var0.f_10 = "SHOW_BLOCKING_ROW1_LEFT";
					Var0.f_9 = joaat("VOLBOX");
					Jump @604; //curOff = 146
					Var0 = { 2549.294f, -1303.83f, 47.04182f };
					Var0.f_3 = { 0f, 0f, -9.89514f };
					Var0.f_6 = { 4.260345f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW1_RIGHT";
					Var0.f_9 = joaat("VOLBOX");
					Jump @604; //curOff = 211
					Var0 = { 2543.097f, -1302.039f, 47.34119f };
					Var0.f_3 = { 0f, 0f, 8.842982f };
					Var0.f_6 = { 5.463117f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW2_LEFT";
					Var0.f_9 = joaat("VOLBOX");
					Jump @604; //curOff = 276
					Var0 = { 2550.183f, -1302.069f, 47.34119f };
					Var0.f_3 = { 0f, 0f, -10.03278f };
					Var0.f_6 = { 4.277905f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW2_RIGHT";
					Var0.f_9 = joaat("VOLBOX");
					Jump @604; //curOff = 341
					Var0 = { 2542.933f, -1300.3f, 47.63106f };
					Var0.f_3 = { 0f, 0f, 9.537826f };
					Var0.f_6 = { 5.29451f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW3_LEFT";
					Var0.f_9 = joaat("VOLBOX");
					Jump @604; //curOff = 406
					Var0 = { 2550.596f, -1300.471f, 47.63106f };
					Var0.f_3 = { 0f, 0f, -9.448911f };
					Var0.f_6 = { 3.957135f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW3_RIGHT";
					Var0.f_9 = joaat("VOLBOX");
					Jump @604; //curOff = 471
					Var0 = { 2542.582f, -1298.776f, 47.90404f };
					Var0.f_3 = { 0f, 0f, 9.277945f };
					Var0.f_6 = { 4.706136f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW4_LEFT";
					Var0.f_9 = joaat("VOLBOX");
					Jump @604; //curOff = 536
					Var0 = { 2549.868f, -1298.625f, 47.904f };
					Var0.f_3 = { 0f, 0f, -9.896723f };
					Var0.f_6 = { 5.116724f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW4_RIGHT";
					Var0.f_9 = joaat("VOLBOX");
					return Var0;
				}
int func_257(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 53:
				case 54:
					return 2;
				case 55:
				case 56:
					return 1;
				default:
					break;
			}
			return 0;
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
	}
	return 0;
}

void func_267(int* iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	int iVar8;
	if ((ENTITY::DOES_ENTITY_EXIST(*iParam0) && !iParam0->f_9) && iParam0->f_5 != -1)
	{
		iVar0 = 2;
		if (PED::IS_PED_MALE(*iParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { __LIB_16__::func_457(iParam1, iParam0->f_2) };
		fVar4 = func_187(iParam1, iParam0->f_2);
		vVar5 = { 0f, 0f, fVar4 };
		iVar8 = func_257(iParam1, iParam0->f_2);
		iParam0->f_6 = -1;
		iParam0->f_7 = __LIB_16__::func_551(iParam0->f_5);
		iParam0->f_8 = __LIB_16__::func_712(iParam0->f_5, iVar0, iVar8);
		if (iVar8 == 0)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, iParam0->f_7, iParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49153, __LIB_16__::func_471(), 2, 1, 0);
		}
		else
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, iParam0->f_7, iParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49153, __LIB_16__::func_471(), 2, 0, 0);
		}
	}
	if (!iParam0->f_9)
	{
		iParam0->f_5 = -1;
		iParam0->f_6 = -1;
	}
}

void func_272(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	if ((ENTITY::DOES_ENTITY_EXIST(*uParam0) && uParam0->f_6 != -1) && !uParam0->f_9)
	{
		iVar0 = 2;
		if (PED::IS_PED_MALE(*uParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { __LIB_16__::func_457(iParam1, uParam0->f_2) };
		fVar4 = func_187(iParam1, uParam0->f_2);
		vVar5 = { 0f, 0f, fVar4 };
		iVar8 = func_257(iParam1, uParam0->f_2);
		if (uParam0->f_6 == 26)
		{
			iVar9 = __LIB_16__::func_481(uParam0->f_2);
			uParam0->f_6 = iVar9;
			uParam0->f_7 = __LIB_16__::func_551(uParam0->f_6);
			uParam0->f_8 = __LIB_16__::func_712(uParam0->f_6, iVar0, iVar8);
		}
		else if (uParam0->f_6 == 31)
		{
			iVar10 = __LIB_16__::func_482(uParam0->f_2);
			uParam0->f_6 = iVar10;
			uParam0->f_7 = __LIB_16__::func_551(uParam0->f_6);
			uParam0->f_8 = __LIB_16__::func_712(uParam0->f_6, iVar0, iVar8);
		}
		else
		{
			uParam0->f_7 = __LIB_16__::func_551(uParam0->f_6);
			uParam0->f_8 = __LIB_16__::func_712(uParam0->f_6, iVar0, iVar8);
		}
		if (iVar8 == 0)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49154, 0f, 2, 1, 0);
		}
		else
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49154, 0f, 2, 0, 0);
		}
	}
}

void func_273(var uParam0, int* iParam1)
{
	float fVar0;
	bool bVar1;
	fVar0 = 0f;
	bVar1 = false;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1394141.f_1335))
	{
		fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Global_1394141.f_1335);
		bVar1 = true;
	}
	switch (*uParam0)
	{
		case 9:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "PL_A_Performance") && fVar0 > 0.82f)
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "Crowd_Member", *iParam1, 0);
							__LIB_0__::func_19(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "PL_A_Performance") && fVar0 > 0.9f)
						{
							func_267(iParam1, 0);
							__LIB_0__::func_19(&(uParam0->f_11), 2);
						}
						break;
					case 2:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "PL_D_LOOP_2_Challenge_Crowd") && fVar0 > 0.95f)
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "Crowd_Member", *iParam1, 0);
							__LIB_0__::func_19(&(uParam0->f_11), 3);
						}
						break;
					case 3:
						break;
				}
			}
			break;
		case 12:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "Pl_BreathLoop"))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "male", *iParam1, 0);
							__LIB_0__::func_19(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "Pl_BreathFail") && ANIMSCENE::_0x005E6F28DD7ED58D(Global_1394141.f_1335, "male"))
						{
							PED::FORCE_PED_MOTION_STATE(*iParam1, joaat("MOTIONSTATE_WALK"), false, 0, false);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, 2504.978f, -1245.074f, 48.2112f, 1f, -1, 0.25f, 0, 40000f);
							__LIB_0__::func_19(&(uParam0->f_11), 2);
						}
						break;
					case 2:
						if (__LIB_0__::func_163(*iParam1, 713668775))
						{
							PED::SET_PED_KEEP_TASK(*iParam1, true);
							__LIB_16__::func_479(*iParam1);
							*iParam1 = 0;
							Global_1394141.f_1334 = 0;
							__LIB_0__::func_19(&(uParam0->f_11), 3);
						}
						break;
					case 3:
						break;
				}
			}
			break;
		case 10:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Global_1394141.f_1335, "BoolLoop"))
						{
							PED::DELETE_PED(iParam1);
							*iParam1 = 0;
							Global_1394141.f_1334 = 0;
							__LIB_0__::func_19(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						break;
				}
			}
			break;
		case 15:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "pbl_CrowdChallenge_P2") && ANIMSCENE::_0x005E6F28DD7ED58D(Global_1394141.f_1335, "CrowdMember"))
						{
							PED::DELETE_PED(iParam1);
							*iParam1 = 0;
							__LIB_0__::func_19(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						Global_1394141.f_1334 = 0;
						break;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
			{
				PED::DELETE_PED(iParam1);
				*iParam1 = 0;
				Global_1394141.f_1334 = 0;
			}
			break;
		case 20:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1394141.f_1335) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false)) && ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "pl_Performance")) && ANIMSCENE::_0x8D81E7824B7753F7(Global_1394141.f_1335, "s_Performance_P2", 1))
						{
							__LIB_0__::func_19(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						if (__LIB_0__::func_1(Global_1394141.f_1326, 2048) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Global_1394141.f_1335) > 0.96f)
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "CS_GENSTORYMALE", *iParam1);
							ENTITY::SET_ENTITY_COORDS(*iParam1, 2538.857f, -1312.293f, 48.21665f, true, false, true, true);
							PED::DELETE_PED(iParam1);
							*iParam1 = 0;
							Global_1394141.f_1334 = 0;
							__LIB_0__::func_19(&(uParam0->f_11), 2);
						}
						break;
					case 2:
						break;
				}
			}
			else
			{
				iParam1->f_5 = 2;
				func_267(iParam1, 0);
				Global_1394141.f_1334 = 0;
			}
			break;
	}
}

bool func_280(int iParam0)
{
	float fVar0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_118))
	{
		fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_118);
	}
	switch (iParam0->f_125)
	{
		case 0:
			if (fVar0 > 0.23f)
			{
				return true;
			}
			break;
		case 1:
			if (fVar0 > 0.2f)
			{
				return true;
			}
			break;
		case 4:
			if (fVar0 > 0.15f)
			{
				return true;
			}
			break;
		case 2:
			if (fVar0 > 0.19f)
			{
				return true;
			}
			break;
		case 3:
			if (fVar0 > 0.33f)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_281()
{
	__LIB_1__::func_993(&(Global_1394141.f_1326), 1);
	__LIB_1__::func_993(&(Global_1394141.f_1326), 2);
	__LIB_1__::func_993(&(Global_1394141.f_1326), 4);
	__LIB_1__::func_993(&(Global_1394141.f_1326), 64);
	__LIB_1__::func_993(&(Global_1394141.f_1326), 512);
}

char* func_289()
{
	if (__LIB_0__::func_181())
	{
		return "SHRCT_GENCHEERJ";
	}
	return "SHRCT_GENCHEERA";
}

char* func_292()
{
	if (__LIB_0__::func_181())
	{
		return "SHRCT_GENBOOJ";
	}
	return "SHRCT_GENBOOA";
}

void func_293(int iParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 2141021393))
	{
		Global_1394141.f_1332 = 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 1784625749))
	{
		Global_1394141.f_1332 = 2;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1128440048))
	{
		Global_1394141.f_1332 = 3;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1037833763))
	{
		Global_1394141.f_1332 = 4;
	}
}

void func_294(int iParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -2066013608))
	{
		Global_1394141.f_1332 = 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1600759346))
	{
		Global_1394141.f_1332 = 2;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -1302332063))
	{
		Global_1394141.f_1332 = 3;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 2113246357))
	{
		Global_1394141.f_1332 = 4;
	}
}

void func_295(int iParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 281318749))
	{
		Global_1394141.f_1332 = 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -425803506))
	{
		Global_1394141.f_1332 = 2;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -117283371))
	{
		Global_1394141.f_1332 = 3;
	}
}

void func_296(int iParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 1730660823))
	{
		Global_1394141.f_1332 = 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 882468027))
	{
		Global_1394141.f_1332 = 2;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 139955256))
	{
		Global_1394141.f_1332 = 3;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -800285661))
	{
		Global_1394141.f_1332 = 4;
	}
}

void func_297(int iParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 708995863))
	{
		Global_1394141.f_1332 = 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, -124778573))
	{
		Global_1394141.f_1332 = 2;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_126, 182266957))
	{
		Global_1394141.f_1332 = 3;
	}
}

char* func_301(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return "show_nbx_cancan";
		case 9:
			return "show_nbx_bulletCatch";
		case 6:
			return "show_nbx_cancan_02";
		case 11:
			return "show_nbx_escapeNoose";
		case 10:
			return "show_nbx_escapeArtist";
		case 12:
			return "show_nbx_fireBreath_01";
		case 13:
			return "show_nbx_fireDance_01";
		case 14:
			return "show_nbx_fireDance_02";
		case 15:
			return "show_nbx_flexFight";
		case 16:
			return "show_nbx_snakeDance_01";
		case 17:
			return "show_nbx_snakeDance_02";
		case 18:
			return "show_nbx_strongWoman";
		case 19:
			return "show_nbx_swordDance_01";
		case 8:
			return "show_nbx_bigband_02";
		case 7:
			return "show_nbx_bigband";
		case 20:
			return "show_nbx_oddFellows";
		case 36:
			return "show_movie_magic_lantern";
		case 37:
			return "show_movie_magic_lantern";
		case 38:
			return "show_movie_magic_lantern";
		case 21:
			return "show_movie_magic_lantern";
		case 22:
			return "show_movie_magic_lantern";
		case 23:
			return "show_movie_magic_lantern";
		case 24:
			return "show_movie_magic_lantern";
		case 25:
			return "show_movie_magic_lantern";
		case 26:
			return "show_movie_magic_lantern";
		case 27:
			return "show_movie_magic_lantern";
		case 28:
			return "show_movie_magic_lantern";
		case 31:
			return "show_movie_magic_lantern";
		case 32:
			return "show_movie_magic_lantern";
		case 33:
			return "show_movie_magic_lantern";
		case 34:
			return "show_movie_magic_lantern";
		case 35:
			return "show_movie_magic_lantern";
		case 0:
			return "generic_show_mc";
		default:
			break;
	}
	return "";
}

char* func_302(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_OUTRO";
		case 1:
			return "PL_OUTRO";
		case 2:
			return "PL_OUTRO";
		case 3:
			return "PL_OUTRO";
		case 4:
			return "PL_OUTRO";
	}
	return "";
}

