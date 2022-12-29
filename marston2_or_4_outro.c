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
	var uLocal_14[1] = { 0 };
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	struct<4> Local_19 = { 0, 0, 0, 0 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
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
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_19);
	}
	func_2(&Local_19, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_19))
	{
		__LIB_5__::func_233(&Local_19);
		switch (__LIB_0__::func_57(Local_19))
		{
			case 0:
				if (func_6(&Local_19))
				{
					__LIB_0__::func_19(&Local_19, 1);
				}
				break;
			case 1:
				if (func_8(&Local_19))
				{
					__LIB_0__::func_19(&Local_19, 2);
				}
				break;
			case 2:
				if (func_9(&Local_19))
				{
					__LIB_0__::func_19(&Local_19, 3);
				}
				break;
			case 3:
				func_1(&Local_19);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_19);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_1__::func_752();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_31(iVar1) && __LIB_0__::func_699(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (__LIB_1__::func_22(iVar1))
				{
					__LIB_1__::func_774(iVar1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	if (__LIB_4__::func_802(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
		__LIB_4__::func_803(uParam0, 4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		__LIB_4__::func_804(uParam0, 1);
	}
	if (uParam1->f_3)
	{
		__LIB_4__::func_804(uParam0, 2);
	}
	func_19(uParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	return 1;
}

bool func_6(var uParam0)
{
	if (iLocal_18 != -1 && !__LIB_8__::func_924(Global_35))
	{
		return false;
	}
	if (func_22(5))
	{
		if (!func_23(uParam0))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_SACKCORN01X")))
		{
			return false;
		}
	}
	return true;
}

bool func_8(var uParam0)
{
	if ((!__LIB_4__::func_802(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return false;
	}
	return func_24(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_4__::func_805())
	{
		iVar0 = 0;
	}
	if (!func_26(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_11(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_2);
	}
	if (func_22(5))
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	__LIB_1__::func_532(__LIB_5__::func_436(65), 0);
	__LIB_1__::func_532(__LIB_5__::func_436(66), 0);
	return 1;
}

void func_19(var uParam0)
{
	if (__LIB_2__::func_774(65))
	{
		func_49(0, 1);
	}
	else if (__LIB_2__::func_774(66))
	{
		func_49(1, 1);
	}
	else if (Global_1898437 == __LIB_5__::func_436(65))
	{
		func_49(0, 1);
	}
	else if (Global_1898437 == __LIB_5__::func_436(66))
	{
		func_49(1, 1);
	}
	if (func_22(0) && __LIB_1__::func_185(66))
	{
		func_49(4, 1);
	}
	else if (func_22(1) && __LIB_1__::func_185(65))
	{
		func_49(4, 1);
	}
	else if (func_22(0))
	{
		func_49(3, 1);
	}
	else if (func_22(1))
	{
		func_49(2, 1);
	}
	if (func_22(4))
	{
		__LIB_0__::func_7(&Global_1935630, 1048576);
	}
	if (func_22(2) || func_22(3))
	{
		func_49(5, 1);
	}
	if (func_22(3))
	{
		iLocal_18 = 81;
	}
	else if (func_22(2))
	{
		iLocal_18 = 81;
	}
	else if (func_22(4))
	{
		iLocal_18 = 85;
	}
	if (iLocal_18 != -1)
	{
		func_52(Global_35, iLocal_18);
	}
	if (func_22(5))
	{
		STREAMING::REQUEST_MODEL(joaat("P_CS_SACKCORN01X"), false);
	}
}

bool func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 - iVar0 * 32);
	iVar2 = BUILTIN::ROUND(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar1)));
	return (uLocal_14[iVar0] && iVar2) == iVar2;
}

bool func_23(var uParam0)
{
	if (!func_22(5))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
		uParam0->f_2 = ANIMSCENE::_CREATE_ANIM_SCENE("cutscene@mar24_ptl", 0, "MAR24_PTL", false, true);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_2, true) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_2, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_2);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_2, true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_2, "MAR24_PTL") && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_2, "MAR24_PTL"))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_2, "MAR24_PTL");
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_2, "MAR24_PTL"))
	{
		return false;
	}
	return true;
}

int func_24(var uParam0)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	__LIB_6__::func_891(Global_35);
	if (func_22(5))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, -2515.059f, 424.7469f, 146.8438f, 90f, false, false, true);
		STREAMING::_0x513F8AA5BF2F17CF(-2515.059f, 424.7469f, 146.8438f, 20f, 0);
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(Global_35, __LIB_1__::func_204(67), true, false, true, true);
	}
	__LIB_0__::func_142(Global_35);
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (iVar0 != 10)
		{
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_35, iVar0, "ALL");
		}
		iVar0++;
	}
	PED::CLEAR_PED_ENV_DIRT(Global_35);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	if (func_22(5))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_17))
		{
			iLocal_17 = OBJECT::CREATE_OBJECT(joaat("P_CS_SACKCORN01X"), -2517.9f, 424.8f, 147.9f, true, true, false, false, true);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_17))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_17, -2517.9f, 424.8f, 147.9f, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_17, 0f, 0f, 0f, 2, true);
			}
		}
	}
	if (func_22(2))
	{
		CLOCK::SET_CLOCK_TIME(13, 0, 0);
	}
	else if (func_22(3))
	{
		CLOCK::SET_CLOCK_TIME(18, 0, 0);
	}
	else if (func_22(4))
	{
		CLOCK::SET_CLOCK_TIME(11, 0, 0);
	}
	if (iLocal_18 != -1)
	{
		func_57(Global_35, 1, 0);
	}
	func_58(1, 7);
	func_59(1);
	__LIB_10__::func_904(joaat("PHR_RANCH_HAND1"));
	__LIB_10__::func_904(joaat("PHR_RANCH_HAND2"));
	__LIB_10__::func_904(joaat("PHR_RANCH_HAND3"));
	__LIB_10__::func_904(joaat("PHR_RANCH_HAND4"));
	__LIB_10__::func_904(joaat("PHR_RANCH_HAND5"));
	__LIB_1__::func_971(0);
	return 1;
}

bool func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	if (func_22(4))
	{
		__LIB_18__::func_283(67, 1, 1);
	}
	else if (func_22(2))
	{
		__LIB_18__::func_283(65, 1, 1);
	}
	else if (func_22(3))
	{
		__LIB_18__::func_283(66, 1, 1);
	}
	switch (iLocal_16)
	{
		case 0:
			if (func_22(5))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2, "JOHN", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2, "P_CS_SACKCORN01X", iLocal_17, 0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_2, "MAR24_PTL", true);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_2);
				__LIB_13__::func_75(1);
			}
			else
			{
				__LIB_13__::func_75(3);
			}
			break;
		case 1:
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			if (CAM::IS_SCREEN_FADED_IN())
			{
				__LIB_13__::func_75(2);
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_2, false))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				HUD::DISPLAY_HUD(true);
				__LIB_13__::func_75(3);
			}
			break;
		case 3:
			if (func_22(4))
			{
				iVar0 = __LIB_3__::func_918(67);
				iVar1 = __LIB_0__::func_80(iVar0);
				if (__LIB_0__::func_702(iVar0))
				{
					if (__LIB_3__::func_919(iVar1, 128))
					{
						if (__LIB_3__::func_919(iVar1, 512))
						{
							__LIB_4__::func_728(iVar1, 512);
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						if (__LIB_0__::func_91())
						{
							__LIB_13__::func_75(4);
						}
					}
				}
			}
			else if (func_22(2))
			{
				iVar0 = __LIB_3__::func_918(65);
				if (__LIB_0__::func_702(iVar0))
				{
					iVar1 = __LIB_0__::func_80(iVar0);
					__LIB_4__::func_728(iVar1, 512);
					__LIB_13__::func_75(4);
				}
			}
			else if (func_22(3))
			{
				iVar0 = __LIB_3__::func_918(66);
				if (__LIB_0__::func_702(iVar0))
				{
					iVar1 = __LIB_0__::func_80(iVar0);
					__LIB_4__::func_728(iVar1, 512);
					__LIB_13__::func_75(4);
				}
			}
			break;
		case 4:
			break;
	}
	return iLocal_16 == 4;
}

void func_49(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 - iVar0 * 32);
	iVar2 = BUILTIN::ROUND(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar1)));
	bVar3 = (uLocal_14[iVar0] && iVar2) == iVar2;
	if (!bVar3 && bParam1)
	{
		uLocal_14[iVar0] = (uLocal_14[iVar0] || iVar2);
	}
	else if (bVar3 && !bParam1)
	{
		iVar4 = (-1 - iVar2);
		uLocal_14[iVar0] = (uLocal_14[iVar0] && iVar4);
	}
}

bool func_52(int iParam0, int iParam1)
{
	return __LIB_10__::func_909(iParam0, iParam1, &(Global_1946804.f_1949), 1, 0, 0);
}

int func_57(int iParam0, bool bParam1, bool bParam2)
{
	return __LIB_18__::func_282(iParam0, &(Global_1946804.f_1949), bParam1, 0, 1, bParam2);
}

void func_58(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iParam0)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (__LIB_4__::func_605(iVar0) >= iParam1)
			{
			}
			else
			{
				func_95(iVar0, iParam1 > 7);
			}
			iVar0++;
		}
		iVar1++;
	}
	__LIB_5__::func_801(10, 0, 0, 0, 0);
}

void func_59(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		__LIB_11__::func_855();
		iVar0++;
	}
	__LIB_5__::func_801(9, 0, 0, 0, 0);
}

void func_95(int iParam0, bool bParam1)
{
	int iVar0;
	if (Global_40.f_7731[iParam0 /*5*/] >= 10)
	{
		func_138(iParam0);
		return;
	}
	if (!bParam1)
	{
		if (Global_40.f_7731[iParam0 /*5*/] >= 7 && !__LIB_4__::func_630(iParam0))
		{
			return;
		}
	}
	iVar0 = Global_40.f_7731[iParam0 /*5*/] + 1;
	func_140(iVar0);
	__LIB_10__::func_17(iParam0, iVar0, 0);
	if (__LIB_4__::func_630(iParam0))
	{
		if (Global_40.f_7731[iParam0 /*5*/] >= 7)
		{
			func_138(iParam0);
		}
		else
		{
			func_142(iParam0);
		}
	}
	__LIB_9__::func_0();
}

void func_138(int iParam0)
{
	bool bVar0;
	bVar0 = __LIB_4__::func_630(iParam0);
	Global_40.f_7731[iParam0 /*5*/].f_4 = 0;
	if (bVar0 && !__LIB_4__::func_630(iParam0))
	{
		__LIB_10__::func_905(490, 1);
		__LIB_4__::func_660(iParam0, 0);
	}
}

void func_140(int iParam0)
{
	if (iParam0 >= 7)
	{
		__LIB_10__::func_905(489, 0);
	}
	if ((iParam0 >= 4 && Global_1897952.f_41 != 8) && __LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		__LIB_10__::func_905(493, 0);
	}
}

void func_142(int iParam0)
{
	bool bVar0;
	bVar0 = __LIB_4__::func_630(iParam0);
	Global_40.f_7731[iParam0 /*5*/].f_4 = (Global_40.f_7731[iParam0 /*5*/].f_4 - 1);
	if (bVar0 && !__LIB_4__::func_630(iParam0))
	{
		__LIB_10__::func_905(490, 1);
		__LIB_4__::func_660(iParam0, 0);
	}
}

