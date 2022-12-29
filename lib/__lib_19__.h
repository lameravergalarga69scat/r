int func_0(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	if (__LIB_17__::func_291(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!__LIB_17__::func_177(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false))
	{
		__LIB_16__::func_822(uParam0[iVar1 /*36*/]);
		return 3;
	}
	return 4;
}

bool func_1(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	if (__LIB_17__::func_291(uParam0, uParam1, 0))
	{
		return true;
	}
	uVar0 = *uParam1;
	if (!__LIB_17__::func_177(uVar0, &iVar1))
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar1 /*36*/], true))
	{
		__LIB_16__::func_823(uParam0[iVar1 /*36*/]);
		return true;
	}
	return false;
}

bool func_2(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	uVar0 = *uParam1;
	if (__LIB_17__::func_291(uParam0, uParam1, 0))
	{
		return true;
	}
	if (!__LIB_17__::func_177(uVar0, &iVar1))
	{
		return true;
	}
	if (uParam1->f_20 >= 5)
	{
		if (__LIB_17__::func_56(uParam0, 2) && iParam2 != 4)
		{
			__LIB_18__::func_980(uParam0, uParam1);
			return true;
		}
		else if ((uParam0->f_353 && __LIB_17__::func_56(uParam0, 1)) && iParam2 != 2)
		{
			__LIB_18__::func_980(uParam0, uParam1);
			return true;
		}
		if (iParam2 != 5)
		{
			if ((!uParam0->f_353 && __LIB_17__::func_56(uParam0, 1)) && iParam2 != 2)
			{
				__LIB_18__::func_980(uParam0, uParam1);
				return true;
			}
			if (__LIB_17__::func_56(uParam0, 4) && iParam2 != 3)
			{
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING((uParam0[iVar1 /*36*/])->f_3))
				{
					__LIB_18__::func_980(uParam0, uParam1);
					return true;
				}
			}
		}
	}
	switch (uParam1->f_20)
	{
		case 0:
			if ((uParam0[iVar1 /*36*/])->f_32)
			{
				uParam1->f_20 = 1;
			}
			else
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED((*uParam0)[iVar1 /*36*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE((*uParam0)[iVar1 /*36*/]);
				}
				uParam1->f_20 = 2;
			}
			return false;
		case 1:
			if (__LIB_4__::func_273(Global_35, (*uParam0)[iVar1 /*36*/], (uParam0[iVar1 /*36*/])->f_33, uParam1->f_12, &((uParam0[iVar1 /*36*/])->f_34), 1065353216 /* Float: 1f */, 1, 0, 1))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED((*uParam0)[iVar1 /*36*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE((*uParam0)[iVar1 /*36*/]);
				}
				else
				{
					uParam1->f_20 = 2;
				}
			}
			return false;
		case 2:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547((*uParam0)[iVar1 /*36*/], uParam1->f_12) && !ANIMSCENE::_0x0DF57F86FE71DBE5((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE((*uParam0)[iVar1 /*36*/], uParam1->f_12);
			}
			uParam1->f_20 = 3;
			return false;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				uParam1->f_20 = 4;
			}
			return false;
		case 4:
			if (!ANIMSCENE::_0x1F0E401031E20146((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL((*uParam0)[iVar1 /*36*/], uParam1->f_12, true);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_14))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL((*uParam0)[iVar1 /*36*/], uParam1->f_14, uParam1->f_13, false);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL((*uParam0)[iVar1 /*36*/], uParam1->f_16, uParam1->f_15, false);
				}
			}
			uParam1->f_20 = 5;
			return false;
		case 5:
			__LIB_18__::func_980(uParam0, uParam1);
			uParam1->f_20 = 6;
			return false;
		case 6:
			if (iParam2 != 5)
			{
				switch (uParam1->f_21)
				{
					case 0:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_18, 1))
						{
							return true;
						}
						break;
					case 1:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_18, 1) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
					case 2:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_19, 1))
						{
							return true;
						}
						break;
					case 3:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_19, 1) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
					case 4:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_19, 1) || ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_18, 1))
						{
							return true;
						}
						break;
					case 5:
						if ((ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_19, 1) || ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_18, 1)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED((*uParam0)[iVar1 /*36*/], false) || ANIMSCENE::_0x34A0671BE613D3D0((*uParam0)[iVar1 /*36*/]))
				{
					return true;
				}
			}
			else if (!__LIB_17__::func_56(uParam0, 8))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_3(float fParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	if (bParam5)
	{
		bVar1 = __LIB_17__::func_273(&uLocal_213, &iLocal_241, &iLocal_253, &uLocal_387, 1101004800 /* Float: 20f */);
	}
	else
	{
		bVar1 = __LIB_13__::func_262(iLocal_253, 0, &uLocal_213, &iLocal_241, 0, 0);
	}
	if (bVar1)
	{
		switch (iLocal_241)
		{
			case 4:
			case 8:
			case 32:
			case 64:
			case 256:
			case 1024:
			case 4096:
			case 8192:
			case 16384:
			case 524288:
				if (fParam0 < fParam3)
				{
					*bParam1 = 0;
					bVar0 = true;
				}
				break;
			case 2:
			case 512:
			case 2048:
				if (fParam0 < fParam4)
				{
					*bParam1 = 1;
					bVar0 = true;
				}
				break;
			case 16:
			case 128:
				if (fParam0 < fParam4)
				{
					*bParam1 = 0;
					bVar0 = true;
				}
				break;
			default:
				if (fParam0 < fParam4)
				{
					*bParam1 = 0;
					bVar0 = true;
				}
				break;
		}
	}
	if (bVar0)
	{
		if ((((((((((PED::IS_PED_INJURED(iLocal_253) || PED::IS_PED_RAGDOLL(iLocal_253)) || TASK::IS_PED_GETTING_UP(iLocal_253)) || PED::_IS_PED_LASSOED(iLocal_253)) || PED::IS_PED_BEING_STEALTH_KILLED(iLocal_253)) || PED::_0xEF3A8772F085B4AA(iLocal_253)) || PED::IS_PED_BEING_STUNNED(iLocal_253, 0)) || PED::_IS_PED_FALLING_2(iLocal_253)) || PED::_IS_PED_HOGTIED(iLocal_253)) || TASK::_0xF330A5C062B29BED(iLocal_253)) || PED::IS_PED_PRONE(iLocal_253))
		{
			*bParam2 = 0;
		}
		else
		{
			*bParam2 = 1;
		}
		AUDIO::STOP_PED_SPEAKING(iLocal_253, false);
		__LIB_16__::func_789(16);
		return true;
	}
	return false;
}

void func_4(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (__LIB_3__::func_274(Global_35, iParam0, &uVar0))
		{
			__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			__LIB_0__::func_362();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			__LIB_0__::func_360();
			break;
	}
}

void func_5(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			__LIB_0__::func_537(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			__LIB_0__::func_538(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			__LIB_0__::func_538(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			__LIB_0__::func_538(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			__LIB_0__::func_539(1);
			break;
		case 34:
			__LIB_0__::func_540(1);
			break;
		case 35:
			__LIB_0__::func_541(1);
			break;
		case 36:
			break;
		case 37:
			__LIB_0__::func_542(0);
			break;
		case 38:
			__LIB_0__::func_543(0);
			break;
		case 39:
			__LIB_0__::func_544(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			__LIB_1__::func_240(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			__LIB_1__::func_240(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			__LIB_1__::func_240(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			__LIB_1__::func_240(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || __LIB_0__::func_802(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (__LIB_0__::func_181())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!__LIB_1__::func_707(iVar0, 1, 0))
					{
						__LIB_3__::func_427(iVar0, 1, 752097756);
					}
					__LIB_1__::func_775(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_3__::func_427(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_3__::func_427(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					__LIB_3__::func_427(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_3__::func_427(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_3__::func_427(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					__LIB_3__::func_427(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			__LIB_17__::func_830();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

void func_6(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		__LIB_17__::func_311(iParam0, iParam1);
	}
	iParam0->f_41[iParam1 /*59*/].f_56 = iParam2;
}

void func_7(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_314 = iParam1;
	if (bParam2)
	{
		__LIB_17__::func_313(uParam0);
	}
}

bool func_8(int iParam0, int iParam1)
{
	if (__LIB_17__::func_307(iParam0))
	{
		*iParam1 = iParam0;
		return true;
	}
	return false;
}

bool func_9(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_75(uParam0))
	{
		return false;
	}
	if (__LIB_18__::func_952(uParam0) > iParam1)
	{
		return true;
	}
	return false;
}

void func_10(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	__LIB_13__::func_316(__LIB_0__::func_23(), iParam0, uParam1, uParam2, uParam3, iParam4, iParam5, iParam6);
}

struct<4> func_11()
{
	struct<4> Var0;
	Var0 = { __LIB_17__::func_325(0) };
	return __LIB_0__::func_429(856287005, Var0, -218846335, 0);
}

bool func_12(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_0__::func_577(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { __LIB_17__::func_325(0) };
	if (__LIB_0__::func_830(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_13(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_1__::func_615(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	__LIB_0__::func_922(iParam3);
	return __LIB_17__::func_327(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_14(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	if (!__LIB_1__::func_138(uParam0, iParam3, iParam2) && !__LIB_17__::func_326(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
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

void func_15(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_206 = iParam1;
	if (bParam2)
	{
		__LIB_17__::func_373(uParam0);
	}
}

bool func_16(int iParam0, int iParam1)
{
	if (__LIB_17__::func_369(iParam0))
	{
		*iParam1 = iParam0;
		return true;
	}
	return false;
}

void func_17(var uParam0)
{
	__LIB_16__::func_236(uParam0);
}

int func_18(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_1(uParam0->f_318, 64))
	{
		return 0;
	}
	if (__LIB_0__::func_1(uParam0->f_318, 4) || STREAMING::_0x99F92061EFE908BA())
	{
		return 1;
	}
	if (uParam0->f_319 <= 0)
	{
		return 2;
	}
	if (Global_1935630.f_22)
	{
		return 3;
	}
	if (!__LIB_0__::func_1(uParam0->f_318, 2048) && !__LIB_0__::func_1(uParam0->f_318, 1024))
	{
		return 4;
	}
	if (uParam0->f_299 >= 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= uParam0->f_299)
		{
			STREAMING::_0xF11D7CB962FCD747(uParam0->f_288[iVar0]);
			iVar0++;
		}
	}
	else
	{
		if (__LIB_0__::func_1(uParam0->f_318, 2))
		{
			STREAMING::_0x6A6E79FBE8678C98();
		}
		STREAMING::_0xB9B9E47EDB9D63DB();
	}
	if (__LIB_0__::func_1(uParam0->f_318, 256) && uParam0->f_321 != 0)
	{
	}
	AUDIO::_0x36559148B78853B3(0, 0, 0);
	__LIB_0__::func_92(0);
	MAP::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	__LIB_16__::func_239();
	__LIB_2__::func_29(1);
	__LIB_1__::func_309(-1, 0, 0, 0, 0);
	__LIB_1__::func_924();
	POPULATION::_0xC6DCC2A3A8825C85(1);
	STREAMING::_0xCC61D8D6C19D9F14(3);
	TELEMETRY::_TELEMETRY_FAST_TRAVEL(__LIB_9__::func_28(__LIB_0__::func_12()), __LIB_9__::func_28(uParam0->f_317), uParam0->f_314);
	uParam0->f_323 = 1;
	return 6;
}

void func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_16__::func_284(iParam0))
	{
		iVar3 = __LIB_11__::func_819(iParam0);
		iVar1 = __LIB_11__::func_820(iVar3);
		iVar2 = 0;
		while (iVar2 <= (iVar1 - 1))
		{
			iVar4 = __LIB_17__::func_378(iVar3, iVar2);
			iVar0 = iVar4;
			if (__LIB_1__::func_958(&(Global_1425247.f_3), iVar0, 2))
			{
			}
			iVar2++;
		}
	}
	else
	{
		iVar0 = iParam0;
		if (__LIB_1__::func_958(&(Global_1425247.f_3), iVar0, 2))
		{
		}
	}
}

void func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	if (__LIB_16__::func_284(iParam0))
	{
		iVar3 = __LIB_11__::func_819(iParam0);
		iVar1 = __LIB_11__::func_820(iVar3);
		iVar2 = 0;
		while (iVar2 <= (iVar1 - 1))
		{
			iVar4 = __LIB_17__::func_378(iVar3, iVar2);
			iVar0 = iVar4;
			if (__LIB_1__::func_959(&(Global_1425247.f_3), iVar0, 2))
			{
				if (!bVar5 && (__LIB_11__::func_821(iVar4) == 3 || __LIB_11__::func_821(iVar4) == 4))
				{
					__LIB_13__::func_480(14);
					bVar5 = true;
				}
			}
			iVar2++;
		}
	}
	else
	{
		iVar0 = iParam0;
		if (__LIB_1__::func_959(&(Global_1425247.f_3), iVar0, 2))
		{
			if (__LIB_11__::func_821(iParam0) == 3 || __LIB_11__::func_821(iParam0) == 4)
			{
				__LIB_13__::func_480(14);
			}
		}
	}
}

bool func_21(var uParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;
	float fVar6;
	float fVar7;
	if (*uParam0 == -1)
	{
		return false;
	}
	if (uParam0->f_1 == 0)
	{
		return false;
	}
	if (uParam0->f_2 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_2)
	{
		if (__LIB_16__::func_237(uParam0, iVar0, &Var1))
		{
			if (iVar0 == 0)
			{
				*uParam1 = { Var1 };
				uParam1->f_3 = Var1.f_3;
				uParam1->f_4 = Var1.f_4;
			}
			else if (!__LIB_0__::func_86(Var1))
			{
				fVar6 = BUILTIN::VDIST2(Global_36, Var1);
				fVar7 = BUILTIN::VDIST2(Global_36, *uParam1);
				if (fVar6 * fVar6) < (fVar7 * fVar7)
				{
					*uParam1 = { Var1 };
					uParam1->f_3 = Var1.f_3;
					uParam1->f_4 = Var1.f_4;
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_22()
{
	if (Global_1572887.f_12 == 0)
	{
		if (__LIB_17__::func_393())
		{
			return true;
		}
	}
	return false;
}

bool func_23(var uParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 16);
	if (bParam2)
	{
		iVar1 = 0;
		iVar2 = -1;
		fVar3 = 0f;
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			fVar4 = BUILTIN::VDIST(Global_1225639.f_16, Global_1058888.f_43923.f_283[iVar1 /*306*/].f_2);
			if (fVar4 < fVar3 || iVar2 == -1)
			{
				iVar2 = iVar1;
				fVar3 = fVar4;
			}
			iVar1++;
		}
		iVar0 = iVar2;
	}
	iVar0 = Global_1058888.f_43923.f_283[iVar0 /*306*/];
	iVar5 = __LIB_17__::func_395(iVar0);
	if (iVar5 <= 0)
	{
		return false;
	}
	else
	{
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
		if (__LIB_17__::func_396(iVar0, iVar6, uParam0, fParam1))
		{
			return true;
		}
	}
	return false;
}

void func_24()
{
	__LIB_0__::func_319(4);
	__LIB_17__::func_384(2);
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(__LIB_10__::func_733(joaat("BENCHMARK"))))
	{
		Global_43893 = 1;
	}
	__LIB_17__::func_428(joaat("SINGLE_PLAYER"), 0);
}

void func_25()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	vVar0.f_1 = -15;
	iVar3 = 0;
	while (iVar3 < 15)
	{
		vVar0 = { Global_40.f_4237[iVar3 /*3*/] };
		if (__LIB_0__::func_30(vVar0.x))
		{
			iVar4 = vVar0.y;
			if (iVar4 != -15 && __LIB_3__::func_77(iVar4))
			{
				__LIB_6__::func_799(vVar0.x);
			}
			else if (vVar0.z)
			{
			}
			else if (__LIB_17__::func_444(vVar0.x))
			{
			}
		}
		iVar3++;
	}
}

void func_26()
{
	int iVar0;
	if (__LIB_1__::func_945(Global_36, Global_1894899.f_6))
	{
		iVar0 = __LIB_17__::func_417(Global_1894899.f_6);
		if (iVar0 != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar0))
			{
				if (__LIB_0__::func_293(45) || !__LIB_10__::func_745(Global_1894899.f_6))
				{
					MAP::_0xD8C7162AB2E2AF45(iVar0);
				}
			}
		}
		Global_1894899.f_3 = Global_1894899.f_6;
	}
	else if (Global_1894899.f_3 != -1 && !__LIB_1__::func_945(Global_36, Global_1894899.f_3))
	{
		Global_1894899.f_3 = -1;
	}
	Global_1894899.f_6++;
	if (Global_1894899.f_6 >= 51)
	{
		Global_1894899.f_6 = 0;
	}
}

void func_27(int iParam0)
{
	bool bVar0;
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iParam0 /*16*/].f_10)))
	{
		return;
	}
	bVar0 = false;
	if (Global_1934603[iParam0 /*16*/].f_15 == 1)
	{
		bVar0 = __LIB_17__::func_418(&(Global_1934603[iParam0 /*16*/].f_10), Global_1934603[iParam0 /*16*/], Global_1934603[iParam0 /*16*/].f_14);
	}
	else
	{
		bVar0 = __LIB_17__::func_419(&(Global_1934603[iParam0 /*16*/].f_10), Global_1934603[iParam0 /*16*/].f_14);
	}
	if (bVar0)
	{
		__LIB_0__::func_187(iParam0);
	}
}

void func_28(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || iParam0 == 1)
	{
		__LIB_6__::func_450(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 2)
	{
		__LIB_6__::func_451(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 3)
	{
		__LIB_17__::func_458(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 6)
	{
		__LIB_6__::func_452(iParam0, 0);
	}
	if (bParam2)
	{
		Global_1357549.f_575++;
		if (Global_1357549.f_575 >= 18)
		{
			Global_1357549.f_575 = 0;
		}
	}
}

void func_29()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (!__LIB_0__::func_293(45))
	{
		if (Global_1934765.f_290)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_BEECHERS_A"));
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_BEECHERS_B"));
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_BEECHERS_C"));
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_BLACKWATER_ENDSUM"));
			Global_1934765.f_290 = 0;
		}
		if (Global_1934765.f_292)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_BLACKWATER_ENDSUM"));
			Global_1934765.f_292 = 0;
		}
		if (!Global_1934765.f_291 && __LIB_3__::func_222(38))
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_BLACKWATER_REGULAR"), -811f, -1212.5f, 0, 0);
			Global_1934765.f_291 = 1;
		}
		__LIB_0__::func_400(-37875204);
		__LIB_0__::func_400(258104717);
		__LIB_0__::func_400(-76700394);
		__LIB_0__::func_400(1614255891);
		__LIB_0__::func_400(1861460906);
		__LIB_0__::func_400(1044079550);
		__LIB_5__::func_440("nav_shack_BA");
		__LIB_0__::func_401(-1079295176);
		__LIB_0__::func_401(894787561);
		__LIB_0__::func_400(-1276109918);
		__LIB_0__::func_400(-1386423483);
		__LIB_0__::func_400(-1405375965);
		__LIB_0__::func_400(1277540472);
		__LIB_0__::func_400(-1331593143);
		__LIB_0__::func_400(1133172356);
		__LIB_0__::func_400(-559257162);
		__LIB_5__::func_440("nav_shack_BB");
		__LIB_0__::func_401(979670262);
		__LIB_0__::func_401(418666411);
		__LIB_0__::func_401(651621232);
		__LIB_0__::func_400(-574996782);
		__LIB_0__::func_400(1169511062);
		__LIB_0__::func_400(-1266106154);
		__LIB_0__::func_400(-1377975054);
		__LIB_0__::func_400(897624424);
		__LIB_0__::func_400(-2111718052);
		__LIB_5__::func_440("nav_shack_BC");
		__LIB_0__::func_401(-165202905);
		__LIB_0__::func_401(-1327148782);
		__LIB_0__::func_401(-1965378386);
		__LIB_0__::func_400(175578406);
		__LIB_0__::func_400(-686953321);
		__LIB_0__::func_400(-1737485501);
		__LIB_0__::func_400(-739754595);
		__LIB_0__::func_400(942470447);
		__LIB_0__::func_400(-1859413313);
		__LIB_0__::func_400(489834626);
		__LIB_0__::func_401(-1667265438);
		__LIB_0__::func_401(54029413);
		__LIB_0__::func_401(-1070234238);
		__LIB_0__::func_401(-931280709);
		__LIB_0__::func_401(-1170563128);
		__LIB_0__::func_401(1394163483);
		__LIB_5__::func_440("nav_std_train_station_es");
		__LIB_0__::func_400(-5339556);
		__LIB_0__::func_400(1258244391);
		__LIB_0__::func_400(1343343014);
		__LIB_0__::func_400(-2082201137);
		__LIB_0__::func_400(1641449717);
		__LIB_0__::func_400(739412171);
		__LIB_0__::func_400(-501793326);
		__LIB_0__::func_400(466168676);
		__LIB_0__::func_400(1479152994);
		__LIB_5__::func_440("nav_blackwater_endless_summer");
		__LIB_0__::func_401(1173561253);
		__LIB_0__::func_401(1470738186);
		__LIB_0__::func_401(-1632348233);
		__LIB_0__::func_400(903666582);
		__LIB_0__::func_401(1081087978);
		__LIB_5__::func_440("nav_val_es");
		__LIB_5__::func_440("nav_val_es_saloon_lockdown");
		__LIB_5__::func_440("nav_val_es_full_lockdown");
		__LIB_0__::func_400(joaat("ANN_05_HOUSE_ES"));
		__LIB_0__::func_401(joaat("ANN_05_HOUSE"));
		__LIB_0__::func_401(-693132475);
		__LIB_5__::func_440("nav_annesburg_es");
		__LIB_0__::func_400(158063004);
		__LIB_5__::func_440("nav_coots_graves");
		__LIB_0__::func_400(-1112373128);
		__LIB_0__::func_400(-891994084);
		__LIB_0__::func_400(-84516711);
		__LIB_0__::func_400(-657241692);
		__LIB_0__::func_401(1596089211);
		__LIB_0__::func_401(-2133417899);
		__LIB_0__::func_401(1274804496);
		__LIB_0__::func_401(1597665303);
		__LIB_0__::func_401(116162819);
		__LIB_5__::func_440("nav_cornwall_es");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Endless_Summer", false, true);
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Normal", true, true);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_Cornwall_Kerosene_And_Tar_Ambient_Emitter", true);
		uVar0 = __LIB_0__::func_17(2087609309);
		if (!GRAPHICS::_0x113857D66A9CABE6(uVar0))
		{
			GRAPHICS::_0xBFCB17895BB99E4E(uVar0, 1);
		}
		__LIB_0__::func_400(-1380983970);
		__LIB_0__::func_400(-1912028958);
		__LIB_0__::func_401(563944718);
		__LIB_5__::func_440("nav_bridge_to_old_world");
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(1883691509))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1883691509, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-1647292773))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1647292773, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-824533183))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-824533183, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-619084588))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-619084588, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(672230639))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(672230639, true);
		}
		if (__LIB_0__::func_2() == -1)
		{
			if (__LIB_1__::func_902(56, &iVar2, &iVar3, 0, 0))
			{
				iVar1 = 0;
				while (iVar1 < (iVar3 - iVar2) + 1)
				{
					__LIB_0__::func_121((iVar2 + iVar1), 32);
					iVar1++;
				}
			}
			if (__LIB_1__::func_902(65, &iVar2, &iVar3, 0, 0))
			{
				iVar1 = 0;
				while (iVar1 < (iVar3 - iVar2) + 1)
				{
					__LIB_0__::func_121((iVar2 + iVar1), 32);
					iVar1++;
				}
			}
			if (!__LIB_0__::func_296(0, 0, 1))
			{
				__LIB_0__::func_121(944, 32);
				__LIB_0__::func_121(940, 32);
			}
			__LIB_10__::func_751(joaat("META_OUTFIT_DEFAULT"));
			iVar4 = 0;
			while (iVar4 < 13)
			{
				__LIB_10__::func_807(iVar4, __LIB_10__::func_806(iVar4));
				iVar4++;
			}
		}
	}
	else
	{
		if (!Global_1934765.f_290)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_BEECHERS_A"), -1550f, 250f, 0, 0);
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_BEECHERS_B"), 1440f, -1580f, 0, 0);
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_BEECHERS_C"), 1770f, 480f, 0, 0);
			Global_1934765.f_290 = 1;
		}
		if (!Global_1934765.f_292)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_BLACKWATER_ENDSUM"), -811f, -1212.5f, 0, 0);
			Global_1934765.f_292 = 1;
		}
		if (Global_1934765.f_291)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_BLACKWATER_REGULAR"));
			Global_1934765.f_291 = 0;
		}
		__LIB_0__::func_401(-37875204);
		__LIB_0__::func_401(258104717);
		__LIB_0__::func_401(-76700394);
		__LIB_0__::func_401(1614255891);
		__LIB_0__::func_401(1861460906);
		__LIB_0__::func_401(1044079550);
		__LIB_5__::func_441("nav_shack_BA");
		__LIB_0__::func_400(-1079295176);
		__LIB_0__::func_400(894787561);
		__LIB_0__::func_401(-1276109918);
		__LIB_0__::func_401(-1386423483);
		__LIB_0__::func_401(-1405375965);
		__LIB_0__::func_401(1277540472);
		__LIB_0__::func_401(-1331593143);
		__LIB_0__::func_401(1133172356);
		__LIB_0__::func_401(-559257162);
		__LIB_5__::func_441("nav_shack_BB");
		__LIB_0__::func_400(979670262);
		__LIB_0__::func_400(418666411);
		__LIB_0__::func_400(651621232);
		__LIB_0__::func_401(-574996782);
		__LIB_0__::func_401(1169511062);
		__LIB_0__::func_401(-1266106154);
		__LIB_0__::func_401(-1377975054);
		__LIB_0__::func_401(-2111718052);
		__LIB_0__::func_401(897624424);
		__LIB_5__::func_441("nav_shack_BC");
		__LIB_0__::func_400(-165202905);
		__LIB_0__::func_400(-1327148782);
		__LIB_0__::func_400(-1965378386);
		__LIB_0__::func_400(-1667265438);
		__LIB_0__::func_400(54029413);
		__LIB_0__::func_400(-1070234238);
		__LIB_0__::func_400(-931280709);
		__LIB_0__::func_400(-1170563128);
		__LIB_0__::func_400(1394163483);
		__LIB_0__::func_401(175578406);
		__LIB_0__::func_401(489834626);
		__LIB_0__::func_401(-686953321);
		__LIB_0__::func_401(-1737485501);
		__LIB_0__::func_401(-739754595);
		__LIB_0__::func_401(942470447);
		__LIB_0__::func_401(-1859413313);
		__LIB_5__::func_441("nav_std_train_station_es");
		__LIB_0__::func_400(1173561253);
		__LIB_0__::func_400(1470738186);
		__LIB_0__::func_400(-1632348233);
		__LIB_0__::func_401(-5339556);
		__LIB_0__::func_401(1258244391);
		__LIB_0__::func_401(1343343014);
		__LIB_0__::func_401(-2082201137);
		__LIB_0__::func_401(1641449717);
		__LIB_0__::func_401(739412171);
		__LIB_0__::func_401(-501793326);
		__LIB_0__::func_401(466168676);
		__LIB_0__::func_401(1479152994);
		__LIB_5__::func_441("nav_blackwater_endless_summer");
		__LIB_0__::func_400(1081087978);
		__LIB_0__::func_401(903666582);
		if (__LIB_0__::func_898(-1215445344))
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_full_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es");
			__LIB_5__::func_441("nav_val_es_full_lockdown");
		}
		else if (__LIB_0__::func_898(-1763509974))
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_full_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_440("nav_val_es");
			__LIB_5__::func_441("nav_val_es_saloon_lockdown");
		}
		else
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_full_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_441("nav_val_es");
		}
		__LIB_0__::func_400(joaat("ANN_05_HOUSE"));
		__LIB_0__::func_400(-693132475);
		__LIB_0__::func_401(joaat("ANN_05_HOUSE_ES"));
		__LIB_5__::func_441("nav_annesburg_es");
		__LIB_0__::func_401(158063004);
		__LIB_5__::func_441("nav_coots_graves");
		__LIB_0__::func_400(1596089211);
		__LIB_0__::func_400(-2133417899);
		__LIB_0__::func_400(1274804496);
		__LIB_0__::func_400(1597665303);
		__LIB_0__::func_400(116162819);
		__LIB_0__::func_401(-1112373128);
		__LIB_0__::func_401(-891994084);
		__LIB_0__::func_401(-84516711);
		__LIB_0__::func_401(-657241692);
		__LIB_5__::func_441("nav_cornwall_es");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Endless_Summer", true, true);
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Normal", false, true);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_Cornwall_Kerosene_And_Tar_Ambient_Emitter", false);
		uVar5 = __LIB_0__::func_17(2087609309);
		if (GRAPHICS::_0x113857D66A9CABE6(uVar5))
		{
			GRAPHICS::_0xBFCB17895BB99E4E(uVar5, 0);
		}
		__LIB_0__::func_401(-1380983970);
		__LIB_0__::func_400(563944718);
		__LIB_0__::func_401(-1912028958);
		__LIB_5__::func_441("nav_bridge_to_old_world");
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(1883691509))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1883691509, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-1647292773))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1647292773, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-824533183))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-824533183, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-619084588))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-619084588, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(672230639))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(672230639, false);
		}
		if (__LIB_0__::func_2() == -1)
		{
			if (__LIB_1__::func_902(56, &iVar7, &iVar8, 0, 0))
			{
				iVar6 = 0;
				while (iVar6 < (iVar8 - iVar7) + 1)
				{
					__LIB_0__::func_123((iVar7 + iVar6), 32);
					iVar6++;
				}
			}
			if (__LIB_1__::func_902(65, &iVar7, &iVar8, 0, 0))
			{
				iVar6 = 0;
				while (iVar6 < (iVar8 - iVar7) + 1)
				{
					__LIB_0__::func_123((iVar7 + iVar6), 32);
					iVar6++;
				}
			}
			__LIB_0__::func_123(944, 32);
			__LIB_0__::func_123(940, 32);
			__LIB_10__::func_751(1689938120);
			iVar9 = 0;
			while (iVar9 < 13)
			{
				__LIB_10__::func_807(iVar9, __LIB_17__::func_441(iVar9));
				iVar9++;
			}
		}
	}
}

void func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_16__::func_196(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			__LIB_10__::func_823((iVar1 + iVar0), 1);
			iVar0++;
		}
	}
}

void func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_16__::func_195(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			__LIB_10__::func_823((iVar1 + iVar0), 1);
			iVar0++;
		}
	}
}

int func_32(int iParam0)
{
	int iVar0;
	int iVar1[15];
	int iVar17;
	int iVar18;
	int iVar19;
	__LIB_17__::func_443(iParam0);
	iVar0 = -1;
	switch (iParam0)
	{
		case 6:
		case 24:
		case 25:
			iVar1[0] = -1;
			iVar1[1] = -1;
			iVar1[2] = -1;
			iVar1[3] = -1;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			iVar1[9] = -1;
			iVar1[10] = -1;
			iVar1[11] = -1;
			iVar1[12] = -1;
			iVar1[13] = -1;
			iVar1[14] = -1;
			break;
		case 10:
			iVar1[0] = 7;
			iVar1[1] = 1;
			iVar1[2] = 8;
			iVar1[3] = 9;
			iVar1[4] = 20;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			iVar1[9] = -1;
			iVar1[10] = -1;
			iVar1[11] = -1;
			iVar1[12] = -1;
			iVar1[13] = -1;
			iVar1[14] = -1;
			break;
		case 15:
		case 16:
		case 20:
		case 22:
			iVar1[0] = 3;
			iVar1[1] = 2;
			iVar1[2] = 8;
			iVar1[3] = 9;
			iVar1[4] = 7;
			iVar1[5] = 20;
			iVar1[6] = 15;
			iVar1[7] = 5;
			iVar1[8] = 13;
			iVar1[9] = 19;
			iVar1[10] = 18;
			iVar1[11] = 20;
			iVar1[12] = 22;
			iVar1[13] = 4;
			iVar1[14] = 11;
			break;
		case 14:
			iVar1[0] = 1;
			iVar1[1] = 7;
			iVar1[2] = 3;
			iVar1[3] = 21;
			iVar1[4] = 16;
			iVar1[5] = 20;
			iVar1[6] = 15;
			iVar1[7] = 5;
			iVar1[8] = 0;
			iVar1[9] = 19;
			iVar1[10] = 18;
			iVar1[11] = 20;
			iVar1[12] = 22;
			iVar1[13] = 4;
			iVar1[14] = 11;
			break;
		default:
			iVar1[0] = 7;
			iVar1[1] = 3;
			iVar1[2] = 1;
			iVar1[3] = 9;
			iVar1[4] = 2;
			iVar1[5] = 8;
			iVar1[6] = 0;
			iVar1[7] = 15;
			iVar1[8] = 13;
			iVar1[9] = 19;
			iVar1[10] = 18;
			iVar1[11] = 20;
			iVar1[12] = 22;
			iVar1[13] = 4;
			iVar1[14] = 5;
			break;
	}
	iVar19 = 0;
	while (iVar19 < 15)
	{
		if (iVar1[iVar19] != -1)
		{
			if (__LIB_1__::func_307(iVar1[iVar19], 1, 1) && __LIB_0__::func_959(iVar1[iVar19], 0) == 0)
			{
				iVar18 = INTERIOR::GET_INTERIOR_FROM_ENTITY(__LIB_0__::func_271(iVar1[iVar19]));
				iVar17 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
				if (iVar17 == iVar18)
				{
					if (iParam0 != iVar1[iVar19])
					{
						if (iVar0 == -1)
						{
							if (__LIB_0__::func_665(Global_35, __LIB_0__::func_271(iVar1[iVar19]), 1, 1) < 35f)
							{
								iVar0 = iVar1[iVar19];
							}
						}
						else if (iVar1[iVar19] != -1)
						{
							if (__LIB_0__::func_665(Global_35, __LIB_0__::func_271(iVar0), 1, 1) > __LIB_0__::func_665(Global_35, __LIB_0__::func_271(iVar1[iVar19]), 1, 1))
							{
								iVar0 = iVar1[iVar19];
							}
						}
					}
				}
			}
		}
		iVar19++;
	}
	if (iVar0 == -1)
	{
		if ((MISC::GET_FRAME_COUNT() % 300) == 0)
		{
		}
	}
	return iVar0;
}

void func_33(float fParam0)
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_PLAYER_SLEEP_GROUND"), 750, false, 0, -1f, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, BUILTIN::FLOOR(fParam0) * 1000, 0f, true, false);
	if (__LIB_0__::func_272(Global_35, 0))
	{
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
	}
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	__LIB_17__::func_413();
}

bool func_34()
{
	if ((((__LIB_14__::func_224() == 10 || __LIB_14__::func_224() == 11) || __LIB_14__::func_224() == 12) || __LIB_14__::func_224() == 13) || __LIB_14__::func_224() == 14)
	{
		return true;
	}
	return false;
}

struct<8> func_35(int iParam0)
{
	char cVar0[64];
	MemCopy(&cVar0, {Global_1888801[iParam0 /*35*/].f_23}, 8);
	if (__LIB_0__::func_2() == -1)
	{
		if (iParam0 == __LIB_0__::func_61())
		{
			StringCopy(&cVar0, __LIB_17__::func_422(__LIB_0__::func_317()), 64);
			return cVar0;
		}
	}
	switch (Global_1888801[iParam0 /*35*/].f_20)
	{
		case 3:
			if (__LIB_0__::func_2() == -1)
			{
				StringCopy(&cVar0, "hideout_", 64);
				StringConCat(&cVar0, &(Global_1888801[iParam0 /*35*/].f_23), 64);
				if (__LIB_0__::func_293(45))
				{
					if (iParam0 == 16)
					{
						StringConCat(&cVar0, "_es", 64);
					}
					if (__LIB_17__::func_459(iParam0))
					{
						MemCopy(&cVar0, {Global_1888801[iParam0 /*35*/].f_23}, 8);
					}
				}
			}
			else
			{
				StringCopy(&cVar0, "", 64);
			}
			break;
		case 8:
			if (NETWORK::NETWORK_IS_IN_SESSION())
			{
				StringCopy(&cVar0, "", 64);
			}
			else
			{
				StringCopy(&cVar0, "event_area_", 64);
				StringConCat(&cVar0, &(Global_1888801[iParam0 /*35*/].f_23), 64);
			}
			break;
		case 5:
		case 9:
			MemCopy(&cVar0, {Global_1888801[iParam0 /*35*/].f_23}, 8);
			break;
		case 4:
			if (__LIB_0__::func_2() != -1)
			{
				StringCopy(&cVar0, "generic_ghosttown", 64);
			}
			else if (__LIB_17__::func_459(iParam0) && __LIB_0__::func_293(45))
			{
				MemCopy(&cVar0, {Global_1888801[iParam0 /*35*/].f_23}, 8);
			}
			else
			{
				StringCopy(&cVar0, "generic_ghosttown", 64);
			}
			break;
		case 6:
			StringCopy(&cVar0, "generic_ghosttown", 64);
			break;
		case 7:
			MemCopy(&cVar0, {Global_1888801[iParam0 /*35*/].f_23}, 8);
			break;
	}
	return cVar0;
}

bool func_36(int iParam0)
{
	struct<5> Var0;
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_4 = -15;
	__LIB_17__::func_423(iParam0, &Var0);
	return __LIB_17__::func_424(&Var0);
}

void func_37(int iParam0, bool bParam1)
{
	struct<5> Var0;
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	Var0 = -1;
	Var0.f_4 = -15;
	__LIB_17__::func_423(iParam0, &Var0);
	__LIB_10__::func_791(&Var0, bParam1);
	__LIB_17__::func_425(iParam0, &Var0);
}

void func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1396116.f_139)
	{
		Global_1396116.f_140 = 1;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam0)
		{
			iVar2 = __LIB_3__::func_655(iParam0, iVar1);
			iVar3 = __LIB_1__::func_334(iVar2);
			if (!PED::IS_PED_INJURED(iVar3))
			{
				if (!__LIB_12__::func_445(iVar0, 2))
				{
					PED::SET_PED_CONFIG_FLAG(iVar3, 146, true);
					__LIB_14__::func_348(iVar0, 2);
					__LIB_14__::func_271(iVar0, iVar1, iParam0);
				}
			}
			else
			{
				__LIB_4__::func_923(iVar0, 2);
				if (BUILTIN::VDIST(__LIB_4__::func_902(iVar2), Global_36) < 45f)
				{
					if (!Global_1396116.f_140)
					{
						if (__LIB_2__::func_987(iVar2, 0, 0, 0, 0, 0))
						{
							return;
						}
					}
				}
				else
				{
					Global_1396116.f_140 = 0;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_39(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	bool bVar7;
	Stack.Push(uParam0);
	Call_Loc(uParam0->f_43);
	vVar0 = { StackVal, StackVal, StackVal };
	if (MISC::IS_STRING_NULL_OR_EMPTY(__LIB_0__::func_57(&vVar0)))
	{
		return;
	}
	iVar3 = __LIB_1__::func_334(*uParam0);
	if (!__LIB_0__::func_272(iVar3, 0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_37))
	{
		Stack.Push(*uParam0);
		Call_Loc(uParam0->f_44);
		uParam0->f_37 = StackVal;
	}
	__LIB_0__::func_928(&uLocal_18, iVar3, uParam0->f_37, 0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar3, true);
	uParam0->f_2 = 1;
	uParam0->f_37 = 0;
	if (!__LIB_6__::func_621(uParam0, 65536))
	{
		if (uParam0->f_21 < 0)
		{
			if (__LIB_0__::func_113())
			{
				__LIB_0__::func_928(&uLocal_18, Global_35, "ARTHUR", 0);
			}
			else
			{
				__LIB_0__::func_928(&uLocal_18, Global_35, "JOHN", 0);
			}
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
			uParam0->f_28 = 1;
		}
		else if (__LIB_6__::func_621(uParam0, 128))
		{
			iVar4 = uParam0->f_21;
			iVar5 = __LIB_1__::func_334(uParam0->f_3[iVar4 /*3*/]);
			if (!__LIB_0__::func_272(iVar5, 0))
			{
				return;
			}
			Stack.Push(uParam0->f_3[iVar4 /*3*/]);
			Call_Loc(uParam0->f_44);
			sVar6 = StackVal;
			__LIB_0__::func_928(&uLocal_18, iVar5, sVar6, 0);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar5, true);
			uParam0->f_3[iVar4 /*3*/].f_2 = 1;
		}
	}
	bVar7 = __LIB_6__::func_621(uParam0, 16384);
	if (__LIB_4__::func_855(&uLocal_18, vVar0, uParam0->f_40, bVar7, 0))
	{
		__LIB_2__::func_796(__LIB_4__::func_850());
		uParam0->f_30 = 1;
	}
	__LIB_17__::func_474(uParam0);
}

void func_40(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = __LIB_0__::func_560(iParam3, iParam0);
	vVar1 = { __LIB_4__::func_846(iVar0) };
	vVar4 = { __LIB_4__::func_847(iVar0) };
	if (__LIB_0__::func_86(vVar1))
	{
		return;
	}
	if (!__LIB_4__::func_922(19, 16384))
	{
		if (!__LIB_0__::func_29(iParam1))
		{
			return;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	__LIB_2__::func_772(iParam0);
	Global_1914319.f_3[iParam0 /*446*/].f_22 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_11 = { vVar1 };
	if (__LIB_0__::func_86(vVar4))
	{
		Global_1914319.f_3[iParam0 /*446*/].f_11 = { vVar1 };
	}
	else
	{
		Global_1914319.f_15936[iVar0 /*6*/].f_2 = { vVar4 };
	}
	Global_1914319.f_3[iParam0 /*446*/].f_10 = iVar0;
	Global_1914319.f_3[iParam0 /*446*/].f_25 = iParam2;
	Global_1914319.f_3[iParam0 /*446*/].f_26 = iParam4;
	Global_1914319.f_3[iParam0 /*446*/].f_28 = iParam5;
	Global_1914319.f_3[iParam0 /*446*/].f_29 = iParam9;
	Global_1914319.f_3[iParam0 /*446*/].f_9 = iParam3;
	Global_1914319.f_3[iParam0 /*446*/].f_409 = iParam8;
	if (__LIB_2__::func_779(iVar0) || __LIB_2__::func_780(iVar0, iParam0))
	{
		switch (iVar0)
		{
			case 29:
				iVar7 = joaat("SHOP_RHO_GUNSMITH");
				break;
			case 61:
				iVar7 = joaat("SHOP_STR_GENERAL_STORE");
				break;
			case 73:
				iVar7 = joaat("SHOP_VAL_DOCTOR");
				break;
			case 43:
				iVar7 = joaat("SHOP_SDN_GUNSMITH");
				break;
			case 41:
				iVar7 = joaat("SHOP_SDN_FENCE");
				break;
		}
		Global_1914319.f_3[iParam0 /*446*/].f_20 = __LIB_1__::func_293(5, Global_1914319.f_3[iParam0 /*446*/].f_10, 2, iVar7);
	}
	Global_1393529.f_114[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1393529.f_220[iParam0] = 0f;
	Global_1393529.f_569[iParam0] = 0;
	StringCopy(&(Global_1393529.f_288[iParam0 /*8*/]), "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = __LIB_2__::func_781(iParam0);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_19 = fParam7;
	Global_1914319.f_3[iParam0 /*446*/].f_8 = iParam6;
	if (!__LIB_17__::func_629(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			__LIB_2__::func_820(iParam3);
			break;
		case 10:
			__LIB_2__::func_782(iParam3);
			break;
		case 18:
			__LIB_2__::func_783();
			break;
		case 9:
			__LIB_2__::func_784();
			break;
		case 22:
			__LIB_2__::func_785();
			break;
	}
	__LIB_2__::func_809(Global_1914319.f_3[iParam0 /*446*/].f_10);
	__LIB_1__::func_943(iParam0, 16);
	__LIB_2__::func_810(iParam0, 4);
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_41(var uParam0)
{
	if (!__LIB_4__::func_505(&(uParam0->f_8269)))
	{
		return;
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 268435456))
	{
		return;
	}
	__LIB_17__::func_482(uParam0);
}

bool func_42(bool bParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_8__::func_906(bParam0, vParam1, 0, fParam5, bParam6, bParam7, bParam8, bParam12, bParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(bParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(bParam0, false);
	}
	bVar4 = __LIB_8__::func_619(bParam0, vParam1, 1);
	if (!__LIB_0__::func_899(fParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_4__::func_89(fParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_1__::func_561(fParam4);
	}
	if (__LIB_0__::func_899(fParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::_IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (__LIB_1__::func_583(fParam4) >= fParam9)
		{
			if (bParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_8__::func_620(bParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(bParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(bParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !__LIB_8__::func_620(bParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(bParam0, 0, 0);
					return true;
				}
			}
		}
		if (bParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(bParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(bParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(bParam0, 175, true);
		}
	}
	return false;
}

bool func_43(var uParam0, char[4] cParam1)
{
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 256))
	{
		if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 65536))
		{
			if (__LIB_0__::func_116(cParam1))
			{
				__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 131072);
			}
			__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 65536);
		}
		if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 131072))
		{
			if (!__LIB_4__::func_562(&(uParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				__LIB_5__::func_585(&(uParam0->f_7375), &(uParam0->f_10792));
				__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 256);
			}
		}
		else
		{
			__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 256);
		}
	}
	return __LIB_17__::func_480(&(uParam0->f_7375), cParam1, (__LIB_4__::func_937(uParam0, 33554432) || (CAM::IS_SCREEN_FADED_OUT() && !__LIB_4__::func_937(uParam0, 1073741824 /* Float: 2f */))), 1);
}

bool func_44(char* sParam0)
{
	return __LIB_17__::func_476(sParam0);
}

bool func_45(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	if (__LIB_1__::func_269(iParam0, 1, 0))
	{
		if (__LIB_0__::func_903(iParam0))
		{
			iVar0 = __LIB_0__::func_748(iParam0, 0);
			if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar0))
				{
					return false;
				}
				if (bParam3 && !PED::_0xA0BC8FAED8CFEB3C(__LIB_0__::func_271(iParam0)))
				{
					return false;
				}
				if ((bParam1 || !__LIB_14__::func_362(__LIB_0__::func_271(iParam0), 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)) || CAM::IS_SCREEN_FADED_OUT())
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar0);
					__LIB_5__::func_114(iParam0, 0);
					if (bParam2 && __LIB_0__::func_228(Global_1360165[iParam0 /*1157*/].f_63))
					{
						__LIB_0__::func_288(iParam0, 65, 0);
					}
				}
				else
				{
					return false;
				}
			}
		}
	}
	return true;
}

void func_46(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (uParam0->f_2023[iVar2 /*15*/].f_11 && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2023[iVar2 /*15*/].f_12))
		{
			if (!bVar1)
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				bVar1 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2288) && !uParam0->f_2023[iVar2 /*15*/].f_13)
			{
				PED::_0xE9B168527B337BF0(uParam0->f_2288, uParam0->f_2023[iVar2 /*15*/].f_12);
				POPULATION::_0xF74E134F40192884(uParam0->f_2288, 1);
				uParam0->f_2023[iVar2 /*15*/].f_13 = 1;
			}
			if (!bParam1)
			{
				if (uParam0->f_2077 != 0 || __LIB_4__::func_562(uParam0, 33554432))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					if (HUD::IS_RADAR_HIDDEN())
					{
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
					}
					uParam0->f_2077 = 0;
					__LIB_4__::func_563(uParam0, 33554432);
				}
				bVar3 = __LIB_0__::func_1(uParam0->f_2023[iVar2 /*15*/].f_10, 131072);
				if (__LIB_0__::func_393(Global_35, uParam0->f_2023[iVar2 /*15*/].f_12, 0, 1))
				{
					if (uParam0->f_2078 >= 0)
					{
						__LIB_10__::func_878(uParam0, uParam0->f_2023[iVar2 /*15*/].f_10, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					}
					if (bVar3)
					{
						__LIB_4__::func_636();
					}
					__LIB_5__::func_596(uParam0, iVar2, iVar0, bVar3);
				}
				else if (__LIB_4__::func_637(&(uParam0->f_2023[iVar2 /*15*/])) != 0)
				{
					__LIB_5__::func_596(uParam0, iVar2, iVar0, bVar3);
				}
			}
			else if (__LIB_0__::func_1(uParam0->f_2023[iVar2 /*15*/].f_10, 4))
			{
				if (uParam0->f_2078 >= 0)
				{
					if (((__LIB_8__::func_619(Global_35, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, 1) > uParam0->f_1406[uParam0->f_2078 /*41*/].f_17 && __LIB_0__::func_393(uParam0->f_2288, uParam0->f_2023[iVar2 /*15*/].f_12, 0, 1)) || uParam0->f_2077 != 0) || __LIB_4__::func_562(uParam0, 33554432))
					{
						iVar4 = 5152;
						if (__LIB_5__::func_79(Global_35, &(uParam0->f_2077), iVar4, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
							uParam0->f_2077 = 0;
							__LIB_4__::func_563(uParam0, 33554432);
						}
						else
						{
							__LIB_4__::func_532(uParam0, 33554432);
						}
					}
				}
			}
		}
		iVar2++;
	}
}

void func_47(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!__LIB_4__::func_725(uParam0, 65536))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231.f_4)
	{
		return;
	}
	if (!__LIB_4__::func_725(uParam0, 4096) && uParam0->f_1896)
	{
		return;
	}
	if (!__LIB_4__::func_725(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	__LIB_7__::func_445(uParam0);
	__LIB_5__::func_415(uParam0, uParam0->f_1897, uParam0->f_1899);
	__LIB_5__::func_195(uParam0);
	if (uParam0->f_1900 && !uParam0->f_1899)
	{
		if (((((uParam0->f_1895 >= 0 && uParam0->f_1016[uParam0->f_1895 /*41*/].f_17 > 0f) && uParam0->f_1688 >= 0) && !__LIB_0__::func_266(Global_35, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, (uParam0->f_1016[uParam0->f_1895 /*41*/].f_17 + 5f), 1, 1)) && !__LIB_4__::func_725(uParam0, 33554432)) && !__LIB_4__::func_725(uParam0, 4))
		{
			__LIB_5__::func_614(uParam0, uParam0->f_1897);
			return;
		}
	}
	if (!__LIB_4__::func_725(uParam0, 4))
	{
		if (__LIB_5__::func_196(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1684 = uParam0->f_1688;
				__LIB_4__::func_757(uParam0, 8);
				return;
			}
		}
		else
		{
			__LIB_5__::func_614(uParam0, uParam0->f_1897);
		}
		if (uParam0->f_1016[uParam0->f_1690 /*41*/].f_29)
		{
			fVar0 = __LIB_17__::func_486(uParam0, uParam0->f_1690);
			if (fVar0 < 0f || (uParam0->f_1897 && fVar0 < 1f))
			{
				uParam0->f_1688 = uParam0->f_1690;
				if (!bParam2)
				{
					uParam0->f_1684 = uParam0->f_1690;
					__LIB_4__::func_757(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1689 == -1f || fVar0 <= uParam0->f_1689) || uParam0->f_1690 == uParam0->f_1688)
				{
					if (uParam0->f_1690 != uParam0->f_1688)
					{
					}
					uParam0->f_1688 = uParam0->f_1690;
					uParam0->f_1689 = fVar0;
					__LIB_4__::func_757(uParam0, 16);
					if (((!__LIB_4__::func_725(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, true) < (uParam0->f_1016[uParam0->f_1688 /*41*/].f_11 + 5f))
					{
						__LIB_5__::func_424(uParam0);
						__LIB_4__::func_757(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1688 == uParam0->f_1690)
			{
				__LIB_4__::func_755(uParam0, 16);
			}
		}
		if (uParam0->f_1690 + 1 >= 8)
		{
			uParam0->f_1690 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1690 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_1016[iVar2 /*41*/].f_29)
				{
					uParam0->f_1690 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1690 = 0;
			}
		}
		if (uParam0->f_1688 < 0)
		{
			return;
		}
		if (__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 2) && uParam0->f_1897)
		{
			return;
		}
	}
	if (__LIB_4__::func_725(uParam0, 16))
	{
		fVar4 = __LIB_0__::func_94(Global_35, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
		if (uParam0->f_1897 && fVar4 <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		fVar5 = __LIB_0__::func_152(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1875, uParam0->f_1879))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 + uParam0->f_1016[uParam0->f_1688 /*41*/].f_10))
			{
				__LIB_5__::func_420(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, fVar6);
			}
			if ((uParam0->f_1899 && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1875, uParam0->f_1879)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1901) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1901))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1901, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1901))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1901);
			}
		}
		else if ((uParam0->f_1897 && fVar4 <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1898))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1898, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		}
	}
	if (((uParam0->f_1897 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1898) > 1.25f) || __LIB_4__::func_725(uParam0, 4))
	{
		if (((VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1875, uParam0->f_1879) && __LIB_17__::func_486(uParam0, uParam0->f_1688) < 10000f) && __LIB_4__::func_725(uParam0, 16)) || __LIB_4__::func_725(uParam0, 4))
		{
			if (!__LIB_4__::func_725(uParam0, 4))
			{
				__LIB_4__::func_757(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!__LIB_5__::func_139(uParam0, uParam0->f_1688))
			{
				iVar7 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1686), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_1016[uParam0->f_1688 /*41*/].f_7, uParam0->f_1016[uParam0->f_1688 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1686 = 0;
				__LIB_4__::func_755(uParam0, 4);
			}
		}
	}
	else if (__LIB_4__::func_725(uParam0, 4))
	{
		__LIB_4__::func_755(uParam0, 4);
	}
}

void func_48()
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
		while (!__LIB_17__::func_499(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

float func_49(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	vector3 vVar1;
	fVar0 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iParam0, "props_misc@annesburg_coal", "annchute01_full");
	if (bParam1)
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		ENTITY::_SET_ENTITY_ANIM_SPEED(iParam0, "props_misc@annesburg_coal", "annchute01_full", 1.5f);
		if (fVar0 >= 0.125f && fVar0 < 0.21f)
		{
			GRAPHICS::_0x4FB67D172C4476F3(iParam0, "AMB_ANN_COAL_CHUTE_DIVE", "EMIT", 1f);
			__LIB_17__::func_509(iParam2, vVar1);
		}
		else if (fVar0 >= 0.485f && fVar0 < 0.52f)
		{
			GRAPHICS::_0x4FB67D172C4476F3(iParam0, "AMB_ANN_COAL_CHUTE", "EMIT", 1f);
			__LIB_17__::func_509(iParam2, vVar1);
		}
		else if (fVar0 >= 0.64f && fVar0 < 0.73f)
		{
			GRAPHICS::_0x4FB67D172C4476F3(iParam0, "AMB_ANN_COAL_CHUTE_DIVE", "EMIT", 1f);
			__LIB_17__::func_509(iParam2, vVar1);
		}
		else
		{
			GRAPHICS::_0x4FB67D172C4476F3(iParam0, "AMB_ANN_COAL_CHUTE", "EMIT", 0f);
			GRAPHICS::_0x4FB67D172C4476F3(iParam0, "AMB_ANN_COAL_CHUTE_DIVE", "EMIT", 0f);
			__LIB_17__::func_510(iParam2);
		}
	}
	else
	{
		if (fVar0 != 0f)
		{
			ENTITY::_SET_ENTITY_ANIM_CURRENT_TIME(iParam0, "props_misc@annesburg_coal", "annchute01_full", 0f);
			ENTITY::_SET_ENTITY_ANIM_SPEED(iParam0, "props_misc@annesburg_coal", "annchute01_full", 0f);
		}
		GRAPHICS::_0x4FB67D172C4476F3(iParam0, "AMB_ANN_COAL_CHUTE", "EMIT", 0f);
		GRAPHICS::_0x4FB67D172C4476F3(iParam0, "AMB_ANN_COAL_CHUTE_DIVE", "EMIT", 0f);
		__LIB_17__::func_510(iParam2);
		fVar0 = 0f;
	}
	return fVar0;
}

int func_50(bool bParam0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	float fVar1;
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 1;
	}
	__LIB_5__::func_782(1);
	if (!VEHICLE::IS_VEHICLE_STOPPED(iVar0) && !VEHICLE::_0x404527BC03DA0E6C(iVar0))
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iVar0, fParam1, iParam2, false);
	}
	else
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
		if (MISC::ABSF(fVar1) <= fParam3)
		{
			__LIB_5__::func_798(&iVar0);
			if (!bParam0)
			{
				return 1;
			}
			else if (!__LIB_0__::func_163(Global_35, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
			}
		}
	}
	return 0;
}

bool func_51(var uParam0, int iParam1, char[4] cParam2, int iParam3, int iParam4, float fParam5, float fParam6, int iParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	Var0 = { __LIB_6__::func_907(iParam1) };
	Var8 = { __LIB_0__::func_865(iParam1) };
	return __LIB_17__::func_533(uParam0, __LIB_0__::func_271(iParam1), &Var0, &Var8, cParam2, iParam3, iParam4, fParam5, fParam6, iParam7, 1);
}

bool func_52(char[4] cParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return __LIB_17__::func_547(cParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

bool func_53(int iParam0, int iParam1, vector3 vParam2, var uParam5, int iParam6, vector3 vParam7, var uParam10, var uParam11, var uParam12, float fParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	if (*uParam11)
	{
		*uParam14 = { vParam2 };
		*uParam15 = uParam5;
		iVar0 = iParam1;
	}
	else
	{
		*uParam14 = { vParam7 };
		*uParam15 = uParam10;
		iVar0 = iParam6;
	}
	if (!PED::IS_PED_IN_COVER(iParam0, false, false))
	{
		if (!*uParam12)
		{
			if (__LIB_17__::func_543(iParam0, iVar0, *uParam14, fParam13, 0))
			{
				if (*uParam11)
				{
					*uParam14 = { vParam7 };
					*uParam15 = uParam10;
					iVar0 = iParam6;
					*uParam11 = 0;
				}
				else
				{
					*uParam14 = { vParam2 };
					*uParam15 = uParam5;
					iVar0 = iParam1;
					*uParam11 = 1;
				}
				*uParam12 = 1;
			}
		}
		if (!*uParam12)
		{
		}
		if (*uParam11)
		{
		}
		if (ENTITY::IS_ENTITY_AT_COORD(iParam0, *uParam14, 1.5f, 1.5f, 2f, false, true, 0) && !*uParam12)
		{
			if (!__LIB_17__::func_544(*uParam15))
			{
				if ((((!PED::IS_PED_IN_COVER(iParam0, false, false) && !PED::IS_PED_GOING_INTO_COVER(iParam0)) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1959848946, true) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1716541277, true) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1812035420, true) != 1)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iParam0, *uParam14, -1, 0, 0.5f, 0, 0, *uParam15, 1, 0, 0);
				}
			}
		}
		else if (((((__LIB_11__::func_796(iParam0, 242628503, -2, 1) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775, true) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 658540077, true) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 432954108, true) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1758697641, true) != 1) || *uParam12)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, *uParam14, 2f, -1, 0.2f, 0, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			*uParam12 = 0;
		}
	}
	else if (ENTITY::IS_ENTITY_AT_COORD(iParam0, *uParam14, 1f, 1f, 2f, false, true, 0))
	{
		if (*iParam16 == 0)
		{
			*iParam16 = MISC::GET_GAME_TIMER();
		}
		if (__LIB_11__::func_794(iParam16, 1000))
		{
			if (bParam17)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, *uParam14, 2f, 0, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 200f, 0, 0);
			}
			return true;
		}
	}
	return false;
}

int func_54(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_2__::func_3(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!__LIB_17__::func_564(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	__LIB_1__::func_467(1, (__LIB_0__::func_2() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_1__::func_452(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (__LIB_0__::func_156(32768) && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_0__::func_945();
				__LIB_1__::func_452(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			__LIB_1__::func_452(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = __LIB_0__::func_445(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		__LIB_1__::func_452(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			__LIB_1__::func_36(0);
			__LIB_1__::func_37(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		__LIB_1__::func_452(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_55(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1396116.f_139)
	{
		Global_1396116.f_140 = 1;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam0)
		{
			iVar2 = __LIB_3__::func_655(iParam0, iVar1);
			iVar3 = __LIB_1__::func_334(iVar2);
			if (!PED::IS_PED_INJURED(iVar3))
			{
				if (!__LIB_17__::func_566(iVar0, 2))
				{
					PED::SET_PED_CONFIG_FLAG(iVar3, 146, true);
					__LIB_4__::func_901(iVar0, 2);
					__LIB_14__::func_271(iVar0, iVar1, iParam0);
				}
			}
			else
			{
				__LIB_4__::func_923(iVar0, 2);
				if (BUILTIN::VDIST(__LIB_4__::func_902(iVar2), Global_36) < 45f)
				{
					if (!Global_1396116.f_140)
					{
						if (__LIB_2__::func_987(iVar2, 0, 0, 0, 0, 0))
						{
							return;
						}
					}
				}
				else
				{
					Global_1396116.f_140 = 0;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_56(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if ((Global_36616 && __LIB_0__::func_347(iParam1)) != 0)
	{
		return;
	}
	iVar0 = __LIB_0__::func_348(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		__LIB_17__::func_749(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			__LIB_0__::func_349(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			__LIB_17__::func_749(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

float func_57(char[4] cParam0)
{
	return __LIB_17__::func_590(&(cParam0->f_7375));
}

int func_58(char[4] cParam0, int iParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[32] cParam10, int iParam18, float fParam19, bool bParam20, bool bParam21)
{
	bool bVar0;
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!__LIB_0__::func_266(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iParam1, true, false), fParam19, 1, 1))
	{
		__LIB_17__::func_596(cParam0, cParam10, 1, 0);
		return 1;
	}
	else
	{
		bVar0 = true;
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_0__::func_17(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) != iParam1)
				{
					bVar0 = false;
				}
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
		{
			if (__LIB_0__::func_17(Global_1935630.f_40) != iParam1)
			{
				bVar0 = false;
			}
		}
		else
		{
			bVar0 = false;
		}
		if (!bVar0)
		{
			if (!__LIB_8__::func_642(cParam0, iParam18))
			{
				__LIB_9__::func_57(cParam0, &cParam2, bParam20);
				__LIB_8__::func_698(cParam0, iParam18);
				cParam0->f_5304 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
			}
			return 1;
		}
		else if (__LIB_8__::func_642(cParam0, iParam18))
		{
			__LIB_8__::func_699(cParam0, iParam18);
			if (!__LIB_8__::func_652(cParam0))
			{
				if (bParam21)
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_8__::func_653(cParam0);
				}
			}
			else
			{
				__LIB_8__::func_654(cParam0);
			}
		}
	}
	return 0;
}

int func_59(char[4] cParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (__LIB_18__::func_788(cParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_0__::func_31(uParam1->f_10))
	{
		PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1), 53, true);
	}
	__LIB_5__::func_339(uParam1);
	__LIB_5__::func_311(uParam1);
	if (!bParam2)
	{
		__LIB_18__::func_789(cParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case joaat("EVENT_ENTITY_EXPLOSION"):
				__LIB_18__::func_790(cParam0, uParam1, iVar0);
				break;
			case joaat("EVENT_ENTITY_DAMAGED"):
			case 2145012826:
				__LIB_18__::func_791(cParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	__LIB_18__::func_792(cParam0, uParam1);
	__LIB_5__::func_75(uParam1);
	return 0;
}

void func_60()
{
	if (!Local_14.f_15)
	{
		return;
	}
	if (Local_14.f_26 > MISC::GET_GAME_TIMER())
	{
		return;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Local_14.f_17) && Local_14.f_14 > 1) && Local_14 != 0)
	{
		if (__LIB_11__::func_400() && __LIB_0__::func_636(Global_36, Local_14.f_11) < 100f)
		{
			if (Local_14.f_18 == 0)
			{
				Local_14.f_18 = ENTITY::_0x6F3068258A499E52(Local_14, Local_14.f_11, 11);
			}
			else if (ENTITY::_0x1FF441D7954F8709(Local_14.f_18))
			{
				Local_14.f_17 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(Local_14.f_18));
			}
		}
		Local_14.f_26 = MISC::GET_GAME_TIMER() + 1800;
	}
	switch (Local_14.f_14)
	{
		case 0:
			__LIB_17__::func_606();
			Local_14.f_14 = 1;
			break;
		case 1:
			if (__LIB_17__::func_607())
			{
				Local_14.f_14 = 2;
			}
			break;
		case 2:
			if (__LIB_17__::func_616())
			{
				Local_14.f_14 = 3;
				Local_14.f_24 = 0;
				Local_14.f_21 = 0;
				Local_14.f_22 = __LIB_0__::func_41(__LIB_0__::func_23());
				if (Local_14.f_22 > 12)
				{
					Local_14.f_22 = (Local_14.f_22 % 12);
				}
			}
			break;
		case 3:
			Local_14.f_25 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_17))
			{
				if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_14.f_17))
				{
					Local_14.f_25 = 0;
					ENTITY::PLAY_ENTITY_ANIM(Local_14.f_17, Local_14.f_7, Local_14.f_6, 1000f, false, true, false, 0f, 0);
					Local_14.f_14 = 4;
				}
			}
			if (Local_14.f_21 >= Local_14.f_22)
			{
				Local_14.f_14 = 2;
			}
			break;
		case 4:
			if (__LIB_11__::func_401(Local_14.f_17, Local_14.f_6, Local_14.f_7, 0))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_14.f_17, Local_14.f_8, Local_14.f_6, 1000f, true, true, false, 0f, 0);
				Local_14.f_23 = MISC::GET_GAME_TIMER() + 1800;
				Local_14.f_14 = 5;
			}
			break;
		case 5:
			if (Local_14.f_24 < MISC::GET_GAME_TIMER())
			{
				Local_14.f_21++;
				Local_14.f_24 = MISC::GET_GAME_TIMER() + 1800;
			}
			if (Local_14.f_21 >= Local_14.f_22 && __LIB_11__::func_401(Local_14.f_17, Local_14.f_6, Local_14.f_8, 0.02f))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_14.f_17, Local_14.f_9, Local_14.f_6, 8f, false, false, false, 0f, 0);
				Local_14.f_14 = 2;
			}
			break;
	}
	if (Local_14.f_25 && Local_14.f_14 > 2)
	{
		if (AUDIO::_0x714A0EA7DE1167BE(Local_14.f_10, "CHURCH_BELL_SOUNDS") && Local_14.f_24 < MISC::GET_GAME_TIMER())
		{
			Local_14.f_24 = MISC::GET_GAME_TIMER() + 1800;
			AUDIO::_PLAY_SOUND_FROM_POSITION(Local_14.f_10, Local_14.f_11, "CHURCH_BELL_SOUNDS", false, 0, true, 0);
			Local_14.f_21++;
		}
	}
}

void func_61(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1396116.f_139)
	{
		Global_1396116.f_140 = 1;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam0)
		{
			iVar2 = __LIB_3__::func_655(iParam0, iVar1);
			iVar3 = __LIB_1__::func_334(iVar2);
			if (!PED::IS_PED_INJURED(iVar3))
			{
				if (!__LIB_12__::func_445(iVar0, 2))
				{
					PED::SET_PED_CONFIG_FLAG(iVar3, 146, true);
					__LIB_14__::func_348(iVar0, 2);
					__LIB_14__::func_271(iVar0, iVar1, iParam0);
				}
			}
			else
			{
				__LIB_17__::func_617(iVar0, 2);
				if (BUILTIN::VDIST(__LIB_4__::func_902(iVar2), Global_36) < 45f)
				{
					if (!Global_1396116.f_140)
					{
						if (__LIB_2__::func_987(iVar2, 0, 0, 0, 0, 0))
						{
							return;
						}
					}
				}
				else
				{
					Global_1396116.f_140 = 0;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_62(var uParam0)
{
	int iVar0;
	int iVar1;
	switch (uParam0->f_8)
	{
		case 1:
			__LIB_4__::func_926(uParam0);
			uParam0->f_8 = 2;
			break;
		case 2:
			if ((__LIB_11__::func_134(2, 2) || __LIB_11__::func_134(1, 2)) || __LIB_11__::func_134(0, 2))
			{
				uParam0->f_4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, -1.25f, -1f, -1f) };
				uParam0->f_8 = 4;
			}
			break;
		case 4:
			if (__LIB_4__::func_927(uParam0))
			{
				Stack.Push(uParam0);
				Call_Loc(uParam0->f_31);
				if (StackVal)
				{
					uParam0->f_8 = 32;
				}
				Jump @1358; //curOff = 175
			}
			else if (uParam0->f_10)
			{
				uParam0->f_3 = __LIB_14__::func_360();
				Stack.Push(uParam0->f_3 != 0);
				Stack.Push(uParam0);
				Call_Loc(uParam0->f_31);
				if (StackVal && StackVal)
				{
					PED::_0xF008E0BA1FE1D644(1);
					STREAMING::REQUEST_MODEL(uParam0->f_3, false);
					uParam0->f_8 = 8;
				}
				else
				{
					uParam0->f_8 = 512;
				}
			}
			else
			{
				uParam0->f_8 = 512;
			}
			break;
		case 8:
			if (!PED::_0x5E420FF293EE5472())
			{
			}
			else if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_3))
			{
			}
			else
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
				{
					Stack.Push(uParam0);
					Stack.Push(uParam0->f_3);
					Call_Loc(uParam0->f_32);
					if (StackVal)
					{
						uParam0->f_1 = __LIB_1__::func_545(uParam0->f_3, uParam0->f_4, ENTITY::GET_ENTITY_HEADING(Global_35), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 130, false);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 315, false);
						PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
						PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 3, 2, 0);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 4, 2, 0);
						uParam0->f_8 = 16;
					}
					else
					{
						Jump @443; //curOff = 431
						uParam0->f_8 = 32;
						Jump @1358; //curOff = 440
						if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
						{
							uParam0->f_8 = 512;
						}
						Jump @1358; //curOff = 462
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(0, Global_35, -1.15f, -0.5f, 0f, 1f, -1, 0);
							TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, 4f, 0f), 2000);
							TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1, iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
							PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
							WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_1, true, true);
							uParam0->f_8 = 32;
						}
						else
						{
							uParam0->f_8 = 256;
							Jump @1358; //curOff = 605
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
							{
								PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
							}
							if (!__LIB_4__::func_928(uParam0->f_1))
							{
								if (__LIB_4__::func_916() && __LIB_17__::func_622(uParam0->f_1, 1))
								{
									if (__LIB_17__::func_623(uParam0, uParam0->f_15))
									{
										PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
										PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
										PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 130, false);
										PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 315, false);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 3, 2, 1);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 4, 2, 1);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 7, 1, 0);
										__LIB_0__::func_37(&(uParam0->f_12));
										uParam0->f_8 = 64;
									}
									else
									{
										uParam0->f_8 = 256;
									}
								}
								else if (!__LIB_0__::func_75(&(uParam0->f_12)))
								{
									__LIB_1__::func_283(&(uParam0->f_12), 1);
								}
								else if (__LIB_0__::func_265(&(uParam0->f_12)) > 15f)
								{
									__LIB_0__::func_37(&(uParam0->f_12));
									uParam0->f_8 = 256;
								}
							}
							else
							{
								uParam0->f_8 = 256;
							}
							Jump @1358; //curOff = 861
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
							{
								PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
								PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
							}
							if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_18)))
							{
								uParam0->f_8 = 512;
							}
							else
							{
								if (!__LIB_0__::func_75(&(uParam0->f_12)))
								{
									__LIB_1__::func_283(&(uParam0->f_12), 1);
								}
								else if (__LIB_0__::func_265(&(uParam0->f_12)) > 3f)
								{
									uParam0->f_8 = 128;
								}
								Jump @1358; //curOff = 961
								if (!__LIB_0__::func_481(1))
								{
									if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
									{
										TASK::TASK_LOOK_AT_ENTITY(Global_35, uParam0->f_1, 10000, 0, 51, 0);
										if (!PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_1))
										{
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_1, Global_35, -1, -1f, -1f, -1f);
										}
										if (__LIB_17__::func_623(uParam0, uParam0->f_18))
										{
										}
									}
									uParam0->f_8 = 256;
								}
								Jump @1358; //curOff = 1063
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
								{
									PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
									PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
									if (__LIB_4__::func_928(uParam0->f_1))
									{
										__LIB_0__::func_82(1, 1, 1);
									}
									if (!__LIB_0__::func_481(1))
									{
										iVar1 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_14__::func_272(), joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_BAR_CA"), 3f, 1, false);
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										TASK::TASK_CLEAR_LOOK_AT(0);
										TASK::TASK_STAND_STILL(0, 2000);
										if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
										{
											TASK::_TASK_USE_SCENARIO_POINT(0, iVar1, 0, 0, true, false, 0, false, -1f, false);
										}
										else
										{
											TASK::TASK_SMART_FLEE_PED(0, Global_35, 50f, -1, 16768, 1f, 0);
										}
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 3, 2, 0);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 4, 2, 0);
										__LIB_2__::func_788(&(uParam0->f_1), 1, 0, 1);
										if (uParam0->f_10)
										{
											PED::_0x7D4E70A67A651C71(1);
										}
										uParam0->f_8 = 512;
									}
								}
								else
								{
									uParam0->f_8 = 512;
								}
								Jump @1358; //curOff = 1305
								if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
								{
									__LIB_0__::func_37(&(uParam0->f_12));
									if (uParam0->f_10)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_3);
									}
									uParam0->f_1 = 0;
									uParam0->f_8 = 1024;
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_63(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_2__::func_270(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_968(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_196(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_17__::func_624(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (__LIB_10__::func_427(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_970(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_196(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_10__::func_428(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_196(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_10__::func_429(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_196(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_10__::func_430(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_10__::func_430(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_196(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_196(iParam0, uParam2, *uParam3);
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
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_833(uParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_196(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_2__::func_878(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_196(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_196(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_64()
{
	int iVar0;
	iVar0 = __LIB_17__::func_614();
	if (!__LIB_2__::func_15(iVar0, 0) || !__LIB_2__::func_155(iVar0, 1))
	{
		return false;
	}
	if (__LIB_2__::func_155(iVar0, 1))
	{
		return true;
	}
	return false;
}

int func_65(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0[4];
	int iVar5;
	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	iVar0[3] = 0;
	switch (iParam3)
	{
		case -1:
			switch (iParam0)
			{
				case 1:
					iVar0[0] = 7;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 5:
				case 6:
				case 7:
					iVar0[0] = 38;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 12:
					iVar0[0] = 19;
					iVar0[1] = 38;
					iVar0[2] = 20;
					iVar0[3] = 3;
					break;
				case 9:
					iVar0[0] = 43;
					iVar0[1] = 23;
					iVar0[2] = 20;
					iVar0[3] = 3;
					break;
				case 4:
					iVar0[0] = 18;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 11:
					iVar0[0] = 19;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 0:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 2:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 3:
					iVar0[0] = 7;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 10:
					iVar0[0] = 18;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
			}
			break;
		case 119:
			switch (iParam0)
			{
				case 1:
					iVar0[0] = 43;
					iVar0[1] = 19;
					break;
				case 5:
				case 6:
				case 7:
					iVar0[0] = 38;
					break;
				case 12:
					iVar0[0] = 19;
					iVar0[1] = 18;
					break;
				case 9:
					iVar0[0] = 43;
					break;
				case 4:
					iVar0[0] = 18;
					break;
				case 11:
					iVar0[0] = 19;
					break;
				case 10:
					iVar0[0] = 18;
					break;
			}
			break;
		case 40:
			switch (iParam0)
			{
				case 1:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 5:
				case 6:
				case 7:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 12:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 9:
					iVar0[0] = 43;
					iVar0[1] = 23;
					iVar0[2] = 20;
					iVar0[3] = 3;
					break;
				case 4:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 11:
					iVar0[0] = 20;
					iVar0[1] = 3;
					iVar0[2] = 26;
					break;
				case 0:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					iVar0[3] = 26;
					break;
				case 2:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					iVar0[3] = 26;
					break;
				case 3:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 10:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
			}
			break;
	}
	if (bParam1)
	{
		iVar5 = 0;
		while (iVar5 < iVar0)
		{
			if (iVar0[iVar5] != iParam2 && !__LIB_7__::func_829(iVar0[iVar5]))
			{
				return iVar0[iVar5];
			}
			iVar5++;
		}
	}
	else if (bParam4)
	{
		iVar5 = 0;
		while (iVar5 < iVar0)
		{
			if (iVar0[iVar5] != iParam2 && !__LIB_18__::func_825(__LIB_9__::func_570(iVar0[iVar5])))
			{
				return iVar0[iVar5];
			}
			iVar5++;
		}
	}
	else if (iVar0[0] != iParam2)
	{
		return iVar0[0];
	}
	else
	{
		return iVar0[1];
	}
	return 0;
}

bool func_66(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	iVar0 = __LIB_10__::func_631(iParam0);
	if (!__LIB_1__::func_426(iVar0, 1) && iVar0 != -15)
	{
		__LIB_7__::func_486(iVar0, &uVar1, &uVar2, &uVar3, &uVar4, &uVar5, &uVar6);
		return false;
	}
	return true;
}

void func_67(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (!bParam1)
	{
		__LIB_5__::func_685(iParam0);
	}
	__LIB_17__::func_698(iParam0);
	Global_1392240.f_146 = 0;
	__LIB_4__::func_58(iParam0, 512);
}

int func_68()
{
	switch (__LIB_0__::func_12())
	{
		case 76:
			return joaat("A_M_M_HTLROUGHTRAVELLERS_01");
		case 92:
			return joaat("A_M_M_HTLROUGHTRAVELLERS_01");
		case 5:
			if (__LIB_4__::func_930(2))
			{
				if (!__LIB_4__::func_848(5, 5, 2))
				{
					return joaat("A_M_M_SDFANCYTRAVELLERS_01");
				}
				if (!__LIB_4__::func_848(5, 5, 4))
				{
					return joaat("A_M_M_RANCHER_01");
				}
				return joaat("A_M_O_SDUPPERCLASS_01");
			}
			else
			{
				if (!__LIB_4__::func_848(5, 5, 16))
				{
					return joaat("A_M_M_LOWERSDTOWNFOLK_02");
				}
				if (!__LIB_4__::func_848(5, 5, 32))
				{
					return joaat("A_M_M_SDSLUMS_02");
				}
				return joaat("G_M_M_UNICRIMINALS_02");
			}
			break;
		case 120:
			return joaat("A_M_M_ARMTOWNFOLK_01");
		case 115:
			if (!__LIB_4__::func_848(115, 5, 2))
			{
				return joaat("A_M_M_TUMTOWNFOLK_02");
			}
			return joaat("A_M_M_TUMTOWNFOLK_01");
		case 38:
			if (!__LIB_4__::func_848(38, 5, 2) && __LIB_1__::func_187(9))
			{
				return joaat("A_M_M_BIVROUGHTRAVELLERS_01");
			}
			if (!__LIB_4__::func_848(38, 5, 16))
			{
				return joaat("A_M_M_BLWFOREMAN_01");
			}
			return joaat("A_M_M_BLWTOWNFOLK_01");
		case 105:
			if (!__LIB_4__::func_848(105, 5, 4))
			{
				return joaat("A_M_M_RANCHER_01");
			}
			return joaat("G_M_M_UNIGRAYS_01");
	}
	return 0;
}

bool func_69(var uParam0, vector3 vParam1)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&vParam1))
	{
		__LIB_0__::func_928(&uLocal_18, uParam0->f_1, uParam0->f_7, 0);
		if (__LIB_4__::func_931(&uLocal_18, vParam1, uParam0->f_1, Global_35, 1077936128 /* Float: 3f */))
		{
			return true;
		}
	}
	return false;
}

bool func_70(var uParam0)
{
	__LIB_0__::func_16(uParam0);
	if (!__LIB_17__::func_668(uParam0))
	{
		return false;
	}
	return true;
}

void func_71(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (MAP::DOES_BLIP_EXIST(uParam0->f_81))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_81));
	}
	iVar0 = __LIB_0__::func_61();
	if (__LIB_0__::func_20(iVar0))
	{
		iVar1 = __LIB_5__::func_824(iVar0);
		if (__LIB_0__::func_69(iVar1))
		{
			__LIB_17__::func_681(iVar1, 0);
		}
	}
	__LIB_17__::func_677(uParam0, 0);
	uParam0->f_36 = 0;
	uParam0->f_78 = 0;
	__LIB_4__::func_226(128);
	iVar2 = 0;
	while (iVar2 < 27)
	{
		__LIB_0__::func_290(iVar2, 51, 0);
		iVar2++;
	}
	if (__LIB_6__::func_206(14))
	{
		__LIB_6__::func_416(0, 0, 1103626240 /* Float: 25f */);
	}
}

void func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_61();
	if (__LIB_0__::func_20(iVar0))
	{
		uParam0->f_81 = MAP::_BLIP_ADD_FOR_COORD(1560611276, Global_1888801[iVar0 /*35*/].f_15);
		MAP::_BLIP_SET_MODIFIER(uParam0->f_81, -670300357);
		MAP::_BLIP_SET_MODIFIER(uParam0->f_81, 1784012766);
		MAP::_BLIP_SET_MODIFIER(uParam0->f_81, 847579139);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_81, "BLIP_CAMP_PARTY");
		iVar1 = __LIB_5__::func_824(iVar0);
		if (__LIB_0__::func_69(iVar1))
		{
			__LIB_17__::func_681(iVar1, 1);
		}
	}
	iVar2 = 0;
	while (iVar2 < uParam0->f_36)
	{
		__LIB_17__::func_689(&(uParam0->f_5[iVar2 /*3*/]));
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < uParam0->f_78)
	{
		__LIB_17__::func_686(&(uParam0->f_37[iVar2 /*4*/]));
		iVar2++;
	}
	__LIB_4__::func_229(128);
	if (__LIB_6__::func_206(14))
	{
		__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
	}
	uParam0->f_79 = 1;
}

void func_73(var uParam0)
{
	if (!uParam0->f_79)
	{
		return;
	}
	if (uParam0->f_80)
	{
		return;
	}
	if (BUILTIN::VDIST2(uParam0->f_1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) > 1600f)
	{
		return;
	}
	__LIB_17__::func_677(uParam0, 1);
}

void func_74(var uParam0, int iParam1)
{
	var uVar0;
	if (!__LIB_17__::func_679(iParam1))
	{
		return;
	}
	if (uParam0->f_1549[iParam1 /*11*/].f_1)
	{
		return;
	}
	if (uParam0->f_1549[iParam1 /*11*/].f_6)
	{
		if (((__LIB_17__::func_683(uParam0->f_1549[iParam1 /*11*/].f_7) || __LIB_17__::func_683(uParam0->f_1549[iParam1 /*11*/].f_8)) || __LIB_17__::func_683(uParam0->f_1549[iParam1 /*11*/].f_9)) || __LIB_17__::func_683(uParam0->f_1549[iParam1 /*11*/].f_10))
		{
			uParam0->f_1549[iParam1 /*11*/].f_1 = 1;
			return;
		}
	}
	uVar0 = 24;
	if (uParam0->f_1549[iParam1 /*11*/].f_5)
	{
		__LIB_0__::func_928(&uVar0, Global_35, "ARTHUR", 0);
	}
	__LIB_17__::func_684(&uVar0, uParam0->f_1549[iParam1 /*11*/].f_7);
	__LIB_17__::func_684(&uVar0, uParam0->f_1549[iParam1 /*11*/].f_8);
	__LIB_17__::func_684(&uVar0, uParam0->f_1549[iParam1 /*11*/].f_9);
	__LIB_17__::func_684(&uVar0, uParam0->f_1549[iParam1 /*11*/].f_10);
	__LIB_2__::func_813(&uVar0, uParam0->f_1549[iParam1 /*11*/].f_2, 0, -1, 0, 0);
	uParam0->f_1549[iParam1 /*11*/].f_1 = 1;
}

bool func_75(var uParam0, int iParam1)
{
	if (!__LIB_17__::func_679(iParam1))
	{
		return false;
	}
	if (!uParam0->f_1549[iParam1 /*11*/].f_1)
	{
		return false;
	}
	return !__LIB_16__::func_276(&(uParam0->f_1549[iParam1 /*11*/].f_2));
}

bool func_76(var uParam0, int iParam1)
{
	if (!__LIB_17__::func_678(iParam1))
	{
		return false;
	}
	return uParam0->f_127[iParam1 /*20*/].f_17;
}

int func_77(var uParam0, int iParam1)
{
	if (!__LIB_17__::func_678(iParam1))
	{
		return -1;
	}
	return uParam0->f_127[iParam1 /*20*/];
}

struct<8> func_78(var uParam0, int iParam1)
{
	if (!__LIB_17__::func_678(iParam1))
	{
		return __LIB_0__::func_482("");
	}
	return uParam0->f_127[iParam1 /*20*/].f_1;
}

void func_79(int iParam0)
{
	Local_5.f_25 = iParam0;
	__LIB_17__::func_695();
}

bool func_80(int iParam0)
{
	int iVar0;
	struct<37> Var1;
	int iVar48;
	iVar0 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar48, &Var1))
		{
			if (Var1.f_2 == joaat("COST_TYPE_CRAFT") && !__LIB_17__::func_706(iParam0, Var1, 1))
			{
				return true;
			}
		}
		iVar48++;
	}
	return false;
}

void func_81(bool bParam0)
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		__LIB_17__::func_717(&Global_35, 1, bParam0);
		PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), false);
		PLAYER::_0xD1A70C1E8D1031FE(PLAYER::PLAYER_ID(), 0);
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 0);
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 1);
	}
}

void func_82(var uParam0)
{
	*uParam0++;
	if (__LIB_0__::func_86(Global_1934765.f_340[1 /*4*/].f_1))
	{
		Global_1934765.f_340[1 /*4*/].f_1 = { -1321.927f, 2438.953f, 309.6122f };
		Global_1934765.f_340[2 /*4*/].f_1 = { -1351.798f, 2440.891f, 309.3728f };
		Global_1934765.f_340[3 /*4*/].f_1 = { -1336.995f, 2399.444f, 308.1392f };
		Global_1934765.f_340[4 /*4*/].f_1 = { -1360.135f, 2425.155f, 308.6656f };
		Global_1934765.f_340[5 /*4*/].f_1 = { -1319.982f, 2440.926f, 308.9205f };
	}
	if (!__LIB_17__::func_712(uParam0))
	{
		return;
	}
	switch (*uParam0)
	{
		case 1:
			__LIB_10__::func_36(-1321.927f, 2438.953f, 309.6122f, "col_school_int_before", 148, 0, 1, 0, Global_1934765.f_340[*uParam0 /*4*/]);
			__LIB_10__::func_36(-1321.927f, 2438.953f, 309.6122f, "col_school_int_after", 147, 0, 1, 0, Global_1934765.f_340[*uParam0 /*4*/]);
			break;
		case 2:
			__LIB_10__::func_36(-1351.798f, 2440.891f, 309.3728f, "col_cabin_lights_on", 149, 0, 1, 0, Global_1934765.f_340[*uParam0 /*4*/]);
			break;
		case 3:
			__LIB_10__::func_36(-1336.995f, 2399.444f, 308.1392f, "col_barn_lights_on", 150, 0, 1, 0, Global_1934765.f_340[*uParam0 /*4*/]);
			break;
		case 4:
			__LIB_10__::func_36(-1360.135f, 2425.155f, 308.6656f, "col_bunkhouse_lights_on", 151, 0, 1, 0, Global_1934765.f_340[*uParam0 /*4*/]);
			break;
		case 5:
			__LIB_10__::func_36(-1319.982f, 2440.926f, 308.9205f, "col_school_int_fireplace", 152, 0, 1, 0, Global_1934765.f_340[*uParam0 /*4*/]);
			break;
	}
}

void func_83(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		if (iParam2 == 0)
		{
			return;
		}
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	if (__LIB_1__::func_15(iParam0))
	{
		return;
	}
	if (__LIB_11__::func_451(iParam0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
	}
	__LIB_0__::func_835(iParam1, iParam0);
	__LIB_17__::func_720(iParam1, iParam2);
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (iParam0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar0))
	{
		__LIB_11__::func_452(iParam1, 0);
	}
	else
	{
		iVar1 = __LIB_11__::func_453(iParam0);
		__LIB_11__::func_452(iParam1, iVar1);
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		__LIB_1__::func_177(iParam0);
	}
	if (iParam1 == 0)
	{
		PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iParam0);
	}
	else if (iParam1 == 1)
	{
		uVar2 = PLAYER::_0x227B06324234FB09(iVar0, iParam0);
	}
	if (iParam1 == 6)
	{
		return;
	}
	if (__LIB_1__::func_127(iParam1))
	{
		__LIB_1__::func_608(iParam1);
	}
	iVar3 = __LIB_0__::func_821(iParam1);
	iVar4 = __LIB_0__::func_553(iVar3);
	__LIB_1__::func_820(iParam1, iVar4);
}

void func_84(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (__LIB_11__::func_574(Global_35, iParam0, &uVar0))
		{
			__LIB_14__::func_161(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			__LIB_0__::func_362();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			__LIB_0__::func_360();
			break;
	}
}

bool func_85(char[4] cParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_9__::func_40(cParam0);
	if (__LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) <= 3)
	{
		iVar0 = __LIB_6__::func_864(cParam0);
	}
	Var1 = { __LIB_8__::func_688(cParam0, iVar0) };
	if (__LIB_17__::func_733(&(cParam0->f_10792), Var1, __LIB_0__::func_81(&(cParam0->f_10792)), 0))
	{
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 262144);
		if (__LIB_4__::func_562(&(cParam0->f_10792), 524288))
		{
			__LIB_8__::func_665(cParam0, 67108864);
			__LIB_4__::func_563(&(cParam0->f_10792), 524288);
		}
		__LIB_5__::func_344(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

void func_86(int iParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	__LIB_0__::func_732(2000);
	Global_16 = 0;
	__LIB_0__::func_109();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, __LIB_0__::func_1(*iParam0, 8));
	if (!__LIB_0__::func_1(*iParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (__LIB_0__::func_1(*iParam0, 2) || __LIB_0__::func_1(*iParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*iParam0, 16))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_0__::func_1(*iParam0, 32))
	{
		__LIB_14__::func_161(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		__LIB_1__::func_704(joaat("KIT_BANDANA"), 0);
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*iParam0 = 0;
}

bool func_87(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			__LIB_2__::func_259(&(iParam1->f_18));
			return false;
		}
		else if (__LIB_0__::func_899(&(iParam1->f_18)))
		{
			__LIB_1__::func_561(&(iParam1->f_18));
			return false;
		}
	}
	if (!__LIB_0__::func_899(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	return __LIB_9__::func_913(&(iParam1->f_18), fParam2);
	return true;
}

void func_88()
{
	__LIB_2__::func_11();
	__LIB_17__::func_768();
}

bool func_89(var uParam0)
{
	if (!__LIB_2__::func_4(uParam0, 262144))
	{
		if (uParam0->f_20 < 60f)
		{
			if (__LIB_17__::func_789(uParam0, 60f, uParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_90(int iParam0)
{
	switch (iParam0->f_224)
	{
		case 0:
			if (__LIB_2__::func_288(iParam0))
			{
				__LIB_0__::func_11(iParam0, 1);
				return true;
			}
			break;
		case 1:
			if (__LIB_2__::func_166(iParam0))
			{
				__LIB_0__::func_11(iParam0, 2);
				return true;
			}
			break;
		case 2:
			if (__LIB_2__::func_194(iParam0))
			{
				__LIB_0__::func_11(iParam0, 3);
				return true;
			}
			break;
		case 3:
			if (__LIB_2__::func_499(iParam0))
			{
				__LIB_0__::func_11(iParam0, 4);
				return true;
			}
			break;
		case 4:
			if (__LIB_2__::func_434(iParam0))
			{
				__LIB_0__::func_11(iParam0, 5);
				return true;
			}
			break;
		case 5:
			if (__LIB_17__::func_802(iParam0))
			{
				__LIB_0__::func_11(iParam0, 6);
				return true;
			}
			break;
		case 6:
			break;
	}
	iParam0->f_224++;
	iParam0->f_224 = (iParam0->f_224 % 7);
	return false;
}

int func_91(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0);
	if (ENTITY::_0x9A100F1CF4546629(iParam1) || ENTITY::_0xC346A546612C49A9(iParam1))
	{
		iVar1 = __LIB_5__::func_76(iParam1);
		if (!__LIB_0__::func_144(iVar1, 0))
		{
			iVar1 = __LIB_5__::func_797(iParam1);
		}
	}
	else
	{
		iVar1 = __LIB_5__::func_797(iParam1);
	}
	iVar2 = __LIB_17__::func_811(iVar0, iVar1, 1);
	return iVar2;
}

void func_92(var uParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_17__::func_819(uParam0) };
	__LIB_3__::func_43(uParam0, &Var0);
}

void func_93(var uParam0)
{
	if ((!__LIB_0__::func_84(uParam0, 32768) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_264)) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_264, false))
	{
		__LIB_3__::func_99(uParam0);
		__LIB_17__::func_821(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_264, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_264);
		}
		__LIB_0__::func_88(uParam0, 32768);
	}
}

struct<4> func_94(int iParam0, int iParam1)
{
	return __LIB_17__::func_822(iParam0, iParam1);
}

void func_95(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_282[iVar0 /*9*/])))
		{
			__LIB_17__::func_828(uParam0, &(uParam0->f_282[iVar0 /*9*/]));
		}
		iVar0++;
	}
	Var1 = { __LIB_0__::func_137() };
	__LIB_17__::func_828(uParam0, &Var1);
	Var1 = { __LIB_17__::func_819(uParam0) };
	__LIB_17__::func_828(uParam0, &Var1);
}

bool func_96(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;
	Var0 = { __LIB_3__::func_25(uParam0) };
	Var8 = { __LIB_17__::func_819(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

int func_97(var uParam0, var uParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	__LIB_17__::func_840(uParam0, uParam1);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	if (__LIB_3__::func_761(uParam0, 2))
	{
		return 1;
	}
	fVar0 = __LIB_0__::func_152(uParam0->f_42, uParam0->f_45, 1);
	iVar1 = 1;
	iVar2 = 1;
	if (!__LIB_0__::func_175(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), uParam0->f_42, 0.1f, 0))
	{
		iVar1 = 0;
		if (!__LIB_0__::func_163(Global_35, 242628503))
		{
			__LIB_3__::func_728(uParam1, 16384);
		}
	}
	if (!__LIB_3__::func_761(uParam0, 8388608) && !__LIB_0__::func_175(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), uParam0->f_45, 0.1f, 0))
	{
		iVar1 = 0;
		if (!__LIB_0__::func_163(uParam0->f_1, 242628503))
		{
			__LIB_3__::func_728(uParam1, 32768);
		}
	}
	if (!__LIB_2__::func_123(*uParam0, uParam0->f_1, 0.99f))
	{
		if (!__LIB_0__::func_163(Global_35, 242628503))
		{
			__LIB_3__::func_728(uParam1, 16384);
		}
		iVar2 = 0;
	}
	if (!__LIB_2__::func_123(uParam0->f_1, *uParam0, 0.99f))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, 242628503, true) != 1)
		{
			__LIB_3__::func_728(uParam1, 32768);
		}
		iVar2 = 0;
	}
	if (iVar1 && iVar2)
	{
		if (__LIB_3__::func_764(uParam1))
		{
			iVar2 = __LIB_3__::func_817(uParam1, uParam0);
		}
	}
	if (iVar1 && iVar2)
	{
		TASK::CLEAR_PED_TASKS(*uParam0, true, false);
		if (!__LIB_3__::func_761(uParam0, 8388608))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
		}
		return 1;
	}
	if (!__LIB_0__::func_239(uParam1, 16384))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 4480, false);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		if (PED::_IS_PED_CARRYING(*uParam0))
		{
			iVar4 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(*uParam0);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar4, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 1f, 0);
		}
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_42, 1f, -1, 0f, 512, fVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_1, 0, -1f, -1f, -1f);
		__LIB_1__::func_474(*uParam0, &iVar3, 0, 0, 1, 1);
		__LIB_0__::func_240(uParam1, 16384);
	}
	if (!__LIB_0__::func_239(uParam1, 32768))
	{
		TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, 1, 0, 0);
		if (!__LIB_3__::func_761(uParam0, 8388608))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			if (!__LIB_0__::func_175(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), uParam0->f_45, 0.1f, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_45, 1f, -1, 0f, 512, (fVar0 + 180f));
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, *uParam0, 0, -1f, -1f, -1f);
			__LIB_1__::func_474(uParam0->f_1, &iVar3, 0, 0, 1, 1);
		}
		__LIB_0__::func_7(&(uParam1->f_44.f_3), 2);
		__LIB_3__::func_865(uParam0->f_1, &(uParam1->f_44), 0f, 0f, 0f, 0, 1106247680 /* Float: 30f */, 30f, 99999, 4000, 1000, 0f, 1, 1, 1084227584 /* Float: 5f */);
		__LIB_0__::func_240(uParam1, 32768);
	}
	return 0;
}

bool func_98(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_3__::func_877(iParam1, uParam2, 0);
		iVar5 = __LIB_17__::func_846(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		__LIB_3__::func_876(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!__LIB_0__::func_27(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (__LIB_0__::func_27(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (__LIB_0__::func_27(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (__LIB_0__::func_27(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (__LIB_0__::func_27(iParam4, 8388608) || __LIB_0__::func_27(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (__LIB_0__::func_27(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (__LIB_0__::func_27(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (__LIB_1__::func_489(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!__LIB_1__::func_489(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (__LIB_0__::func_27(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_2__::func_388(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (__LIB_0__::func_27(iParam4, 268435456))
			{
				iVar8 = __LIB_1__::func_498(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (__LIB_1__::func_489(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*uParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_99(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			__LIB_17__::func_847(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_100(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	__LIB_18__::func_973(iParam0);
}

bool func_101(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	if (Param4.f_6 > -1)
	{
		*uParam1 = { __LIB_3__::func_153(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		__LIB_3__::func_955(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return true;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_340(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return false;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { __LIB_3__::func_401(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return false;
				}
				if (__LIB_0__::func_86(*uParam1))
				{
					return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = __LIB_3__::func_240(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (__LIB_0__::func_27(Param4.f_2, 8))
				{
					__LIB_3__::func_955(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return true;
				}
				__LIB_3__::func_170(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (__LIB_17__::func_853(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && __LIB_3__::func_367(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_171(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return false;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!__LIB_3__::func_170(uParam1))
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (__LIB_3__::func_423(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				__LIB_3__::func_955(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return true;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		__LIB_1__::func_422("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return false;
}

void func_102(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_1__::func_697(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_1__::func_452(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_62(-525676072, &iVar1))
				{
					__LIB_1__::func_452(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			__LIB_1__::func_775(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		__LIB_19__::func_100(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_103(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_19__::func_100(50);
			}
			else
			{
				__LIB_19__::func_100(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_19__::func_100(51);
			}
			else
			{
				__LIB_19__::func_100(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
			}
			break;
		case 3:
			__LIB_19__::func_100(24);
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

bool func_104(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (bParam6 || __LIB_17__::func_870(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || __LIB_3__::func_304(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (__LIB_1__::func_85(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				__LIB_3__::func_305(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = __LIB_3__::func_162(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_105(var uParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (__LIB_3__::func_902(uParam0, iVar0, 1))
			{
				if (!__LIB_17__::func_878(uParam0, iVar0))
				{
					__LIB_4__::func_306(uParam0, uParam0->f_15[iVar0]);
					if (!__LIB_4__::func_311(uParam0, iVar0))
					{
					}
				}
			}
			iVar0++;
		}
	}
	if (__LIB_3__::func_902(uParam0, 1, 1))
	{
		if (__LIB_3__::func_642(uParam0->f_1, uParam0->f_9))
		{
			if (!bParam1 || __LIB_17__::func_878(uParam0, 1))
			{
				__LIB_3__::func_903(uParam0, 1);
			}
		}
	}
	if (__LIB_3__::func_902(uParam0, 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_13, uParam0->f_7))
		{
			if (!bParam1 || __LIB_17__::func_878(uParam0, 0))
			{
				__LIB_3__::func_903(uParam0, 0);
			}
		}
	}
	if (__LIB_3__::func_902(uParam0, 2, 1))
	{
		if (__LIB_3__::func_636(uParam0->f_1, uParam0->f_10, 1f))
		{
			if (!bParam1 || __LIB_17__::func_878(uParam0, 2))
			{
				__LIB_3__::func_903(uParam0, 2);
			}
		}
	}
	if (__LIB_3__::func_902(uParam0, 3, 1))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_14, uParam0->f_11, uParam0->f_12, 1))
		{
			if (!bParam1 || __LIB_17__::func_878(uParam0, 3))
			{
				__LIB_3__::func_903(uParam0, 3);
			}
		}
	}
	if (__LIB_3__::func_902(uParam0, 4, 1))
	{
		if (__LIB_17__::func_878(uParam0, 4))
		{
			__LIB_3__::func_903(uParam0, 4);
		}
	}
	if (uParam0->f_3)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_1, false))
		{
			__LIB_3__::func_437(uParam0);
		}
	}
}

bool func_106(vector3 vParam0, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	if (*iParam4 != *iParam5)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (__LIB_3__::func_354() || !__LIB_17__::func_879(iParam4[iVar0 /*32*/], iParam5[iVar0], vParam0, bParam3, iParam6, bParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_107(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	if (bParam3 && !__LIB_4__::func_309(uParam0, iParam1))
	{
		return __LIB_17__::func_880(uParam0, iParam1, bParam2);
	}
	else
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_1, sVar0, true);
		uParam0->f_2 = iParam1;
		if (bParam2)
		{
			__LIB_3__::func_947(uParam0, 5, 1);
		}
		Stack.Push(iParam1);
		Call_Loc(uParam0->f_5);
	}
	return 1;
}

bool func_108(var uParam0)
{
	if (__LIB_3__::func_211(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		__LIB_17__::func_883(uParam0->f_3);
		__LIB_3__::func_309(uParam0, 0, 1);
		__LIB_3__::func_404(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		__LIB_0__::func_703(0, 0);
		return true;
	}
	return false;
}

int func_109(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<11> Var3;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	Var3.f_10 = 7;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar16 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar16 > iParam2)
	{
	}
	if (__LIB_4__::func_355() != -1)
	{
		if (__LIB_0__::func_272(__LIB_17__::func_886(), 0))
		{
			if (PED::IS_PED_ON_MOUNT(__LIB_17__::func_886()))
			{
				iVar17 = PED::GET_MOUNT(__LIB_17__::func_886());
			}
		}
	}
	iVar15 = 0;
	while (iVar15 < iVar16)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar15, iVar0);
		iVar2 = iVar1;
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if ((!PED::IS_PED_HUMAN(iVar2) && iVar2 != __LIB_2__::func_338(uParam1, &Var3)) && iVar17 != iVar2)
				{
					if (bParam4)
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
					}
					if (iVar14 >= *uParam0)
					{
						Jump @209; //curOff = 180
					}
					else
					{
						(*uParam0)[iVar14] = iVar2;
						iVar14++;
					}
				}
			}
		}
		iVar15++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar14;
}

void func_110(var uParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (__LIB_3__::func_902(uParam0, iVar0, 1))
			{
				if (!__LIB_4__::func_326(uParam0, iVar0))
				{
					__LIB_3__::func_935(uParam0, uParam0->f_15[iVar0]);
					if (!__LIB_17__::func_898(uParam0, iVar0))
					{
					}
				}
			}
			iVar0++;
		}
	}
	if (__LIB_3__::func_902(uParam0, 1, 1))
	{
		if (__LIB_3__::func_642(uParam0->f_1, uParam0->f_9))
		{
			if (!bParam1 || __LIB_4__::func_326(uParam0, 1))
			{
				__LIB_3__::func_903(uParam0, 1);
			}
		}
	}
	if (__LIB_3__::func_902(uParam0, 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_13, uParam0->f_7))
		{
			if (!bParam1 || __LIB_4__::func_326(uParam0, 0))
			{
				__LIB_3__::func_903(uParam0, 0);
			}
		}
	}
	if (__LIB_3__::func_902(uParam0, 2, 1))
	{
		if (__LIB_3__::func_636(uParam0->f_1, uParam0->f_10, 1f))
		{
			if (!bParam1 || __LIB_4__::func_326(uParam0, 2))
			{
				__LIB_3__::func_903(uParam0, 2);
			}
		}
	}
	if (__LIB_3__::func_902(uParam0, 3, 1))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_14, uParam0->f_11, uParam0->f_12, 1))
		{
			if (!bParam1 || __LIB_4__::func_326(uParam0, 3))
			{
				__LIB_3__::func_903(uParam0, 3);
			}
		}
	}
	if (__LIB_3__::func_902(uParam0, 4, 1))
	{
		if (__LIB_4__::func_326(uParam0, 4))
		{
			__LIB_3__::func_903(uParam0, 4);
		}
	}
	if (uParam0->f_3)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_1, false))
		{
			__LIB_3__::func_437(uParam0);
		}
	}
}

bool func_111(vector3 vParam0, var uParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10)
{
	float fVar0;
	if (fParam8 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam8)
		{
			return false;
		}
	}
	fVar0 = __LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), vParam0, 1);
	if (fVar0 < fParam7)
	{
		if (__LIB_17__::func_904(vParam0, 0, uParam3, iParam4, iParam5, fParam6, fParam7, fParam9, 0))
		{
			return true;
		}
		if (fVar0 < fParam10)
		{
			*iParam4 = 0f;
			return true;
		}
	}
	return false;
}

void func_112(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		__LIB_2__::func_344(uParam0);
		__LIB_17__::func_921(iParam1, uParam2);
	}
	__LIB_2__::func_56(*uParam0, 1, bParam4);
}

void func_113(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = __LIB_0__::func_259(iParam0, __LIB_1__::func_149(1));
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = __LIB_1__::func_237(iVar0);
		if (__LIB_1__::func_22(iVar2))
		{
			if (bParam1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(__LIB_0__::func_271(iVar2), false);
				__LIB_1__::func_774(iVar2, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				__LIB_17__::func_932(iVar2, 0);
			}
		}
		iVar0++;
	}
}

void func_114(var uParam0, var uParam1, var uParam2)
{
	__LIB_6__::func_496(uParam0[0 /*118*/]);
	__LIB_6__::func_496(uParam0[1 /*118*/]);
	__LIB_17__::func_954(*uParam1, uParam0[0 /*118*/]);
	__LIB_6__::func_499(uParam1->f_1, &((uParam0[0 /*118*/])->f_55), uParam2);
	__LIB_6__::func_500(uParam1->f_2, &((uParam0[0 /*118*/])->f_102), uParam2);
	__LIB_6__::func_500(uParam1->f_3, &((uParam0[0 /*118*/])->f_110), uParam2);
	__LIB_17__::func_954(uParam1->f_4, uParam0[1 /*118*/]);
	__LIB_6__::func_499(uParam1->f_5, &((uParam0[1 /*118*/])->f_55), uParam2);
	__LIB_6__::func_500(uParam1->f_6, &((uParam0[1 /*118*/])->f_102), uParam2);
	__LIB_6__::func_500(uParam1->f_7, &((uParam0[1 /*118*/])->f_110), uParam2);
}

bool func_115(struct<8> Param0, int iParam8, var uParam9, var uParam10)
{
	if (__LIB_17__::func_955(&(uParam9->f_1[iParam8 /*237*/][0 /*118*/]), uParam10))
	{
		switch (uParam10->f_4)
		{
			case 0:
				uParam10->f_1 = Param0.f_1;
				break;
			case 1:
				uParam10->f_1 = Param0.f_2;
				break;
			case 2:
				uParam10->f_1 = Param0.f_3;
				break;
		}
		uParam10->f_2 = iParam8;
		uParam10->f_3 = 0;
		*uParam10 = 1;
		return true;
	}
	if (__LIB_17__::func_955(&(uParam9->f_1[iParam8 /*237*/][1 /*118*/]), uParam10))
	{
		switch (uParam10->f_4)
		{
			case 0:
				uParam10->f_1 = Param0.f_5;
				break;
			case 1:
				uParam10->f_1 = Param0.f_6;
				break;
			case 2:
				uParam10->f_1 = Param0.f_7;
				break;
		}
		uParam10->f_2 = iParam8;
		uParam10->f_3 = 1;
		*uParam10 = 1;
		return true;
	}
	*uParam10 = 0;
	return false;
}

void func_116(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	__LIB_6__::func_135(iParam0);
	iVar1 = __LIB_1__::func_953(iParam0);
	vVar2 = { __LIB_2__::func_116(iVar1, 1) };
	if (__LIB_0__::func_317() == iParam0)
	{
		vVar5 = { __LIB_6__::func_70(iParam0) };
		fVar8 = __LIB_5__::func_930(iParam0);
		__LIB_17__::func_966(iParam0, bParam1);
		if (!__LIB_1__::func_209(vVar5))
		{
			__LIB_2__::func_862(vVar5, fVar8, "CaravanCamp", 0, 0, 4, 0, -1082130432 /* Float: -1f */);
		}
		__LIB_6__::func_165(iParam0);
		if (__LIB_5__::func_869(iParam0))
		{
			iVar0 = __LIB_6__::func_90(iParam0);
			if (__LIB_0__::func_592() != 2)
			{
				if (__LIB_0__::func_30(iVar0))
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(iVar0))
					{
						STREAMING::_REQUEST_IMAP(iVar0);
					}
				}
			}
			else if (__LIB_0__::func_30(iVar0))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar0))
				{
					STREAMING::_REMOVE_IMAP(iVar0);
				}
			}
			__LIB_6__::func_646(iParam0);
		}
		__LIB_5__::func_931(iParam0, 1);
		if (!bParam2)
		{
			__LIB_6__::func_424(iParam0, iVar1, 1, 1);
		}
	}
	else
	{
		__LIB_6__::func_653(iParam0, &iVar0);
		if (__LIB_1__::func_209(vVar2))
		{
			__LIB_1__::func_222(vVar2, 0);
		}
		__LIB_5__::func_931(iParam0, 0);
		if (!bParam2)
		{
			__LIB_6__::func_424(iParam0, iVar1, 0, 0);
		}
	}
}

void func_117(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	__LIB_6__::func_135(iParam0);
	iVar1 = __LIB_1__::func_953(iParam0);
	vVar2 = { __LIB_2__::func_116(iVar1, 1) };
	if (__LIB_0__::func_317() == iParam0)
	{
		vVar5 = { __LIB_6__::func_70(iParam0) };
		fVar8 = __LIB_5__::func_930(iParam0);
		__LIB_17__::func_966(iParam0, bParam1);
		if (!__LIB_1__::func_209(vVar5))
		{
			__LIB_2__::func_862(vVar5, fVar8, "CaravanCamp", 0, 0, 4, 0, -1082130432 /* Float: -1f */);
		}
		__LIB_6__::func_165(iParam0);
		if (__LIB_5__::func_869(iParam0))
		{
			iVar0 = __LIB_6__::func_90(iParam0);
			if (__LIB_0__::func_592() != 2)
			{
				if (__LIB_0__::func_30(iVar0))
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(iVar0))
					{
						STREAMING::_REQUEST_IMAP(iVar0);
					}
				}
			}
			else if (__LIB_0__::func_30(iVar0))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar0))
				{
					STREAMING::_REMOVE_IMAP(iVar0);
				}
			}
			__LIB_6__::func_603(iParam0);
		}
		__LIB_5__::func_931(iParam0, 1);
		if (!bParam2)
		{
			__LIB_6__::func_424(iParam0, iVar1, 1, 1);
		}
	}
	else
	{
		__LIB_6__::func_611(iParam0, &iVar0);
		if (__LIB_1__::func_209(vVar2))
		{
			__LIB_1__::func_222(vVar2, 0);
		}
		__LIB_5__::func_931(iParam0, 0);
		if (!bParam2)
		{
			__LIB_6__::func_424(iParam0, iVar1, 0, 0);
		}
	}
}

void func_118(var uParam0, var uParam1)
{
	if (__LIB_0__::func_317() == 8)
	{
		if (__LIB_1__::func_533(134217728))
		{
			if (Global_40.f_4283.f_408.f_5 < 2)
			{
				__LIB_0__::func_45("FINISH_CAMP_UNLOCKED_COW_MILKING", 10000, 0, 0, 0, 1);
			}
			__LIB_5__::func_547(134217728);
			__LIB_1__::func_683(&(uParam0->f_1598), 16384);
			Global_40.f_4283.f_408.f_6 = 1;
		}
		if (Global_40.f_4283.f_408.f_6)
		{
			__LIB_9__::func_420(3, 1);
			__LIB_1__::func_683(&(uParam0->f_1598), 16384);
			__LIB_1__::func_683(&(uParam0->f_1598), 128);
		}
		if (uParam0->f_1630.f_4 >= 1 && !__LIB_0__::func_27(uParam0->f_1598, 512))
		{
			if (uParam0->f_1630.f_1 < 1)
			{
				__LIB_0__::func_45("FINISH_CAMP_UNLOCKED_FEED_CHICKENS", 10000, 0, 0, 0, 1);
			}
			__LIB_1__::func_683(&(uParam0->f_1598), 8192);
			__LIB_1__::func_683(&(uParam0->f_1598), 512);
		}
		if (__LIB_1__::func_533(268435456))
		{
			Global_40.f_4283.f_408.f_5++;
		}
		if (Global_40.f_4283.f_408.f_5 >= 2)
		{
			if (!__LIB_0__::func_27(uParam0->f_1598, 256))
			{
				if (!__LIB_0__::func_27(uParam0->f_1598, 1048576))
				{
					__LIB_0__::func_45("FINISH_CAMP_UNLOCKED_MILK", 10000, 0, 0, 0, 1);
					__LIB_1__::func_683(&(uParam0->f_1598), 1048576);
				}
				__LIB_1__::func_683(&(uParam0->f_1598), 256);
				__LIB_1__::func_683(&(uParam0->f_1598), 65536);
			}
			__LIB_5__::func_547(268435456);
		}
		else
		{
			__LIB_5__::func_547(268435456);
		}
		if (uParam0->f_1630.f_1 >= 1 && !__LIB_0__::func_27(uParam0->f_1598, 64))
		{
			if (!__LIB_0__::func_27(uParam0->f_1598, 2097152))
			{
				__LIB_0__::func_45("FINISH_CAMP_UNLOCKED_EGGS", 10000, 0, 0, 0, 1);
				__LIB_1__::func_683(&(uParam0->f_1598), 2097152);
			}
			__LIB_1__::func_683(&(uParam0->f_1598), 64);
			__LIB_1__::func_683(&(uParam0->f_1598), 32768);
		}
		if ((uParam0->f_1630.f_2 >= 2 && uParam0->f_1630.f_3 >= 2) && !__LIB_5__::func_904(262144))
		{
			__LIB_1__::func_683(&(uParam0->f_1598), 2048);
		}
	}
	__LIB_17__::func_973(uParam0, uParam1);
	uParam0->f_1581 = 2;
}

void func_119(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<4> Var4;
	if (Global_1391438.f_3 != iParam9)
	{
		__LIB_0__::func_304(0);
	}
	uParam0->f_7 = iParam9;
	Global_1391438.f_3 = iParam9;
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	__LIB_17__::func_981(uParam0->f_5, Var0, Var4, iParam9, iParam10);
}

void func_120(int iParam0, float fParam1, int iParam2, float fParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	__LIB_17__::func_982(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, iParam2, fParam3);
}

void func_121(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			__LIB_0__::func_537(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			__LIB_0__::func_538(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			__LIB_0__::func_538(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			__LIB_0__::func_538(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			__LIB_0__::func_539(1);
			break;
		case 34:
			__LIB_0__::func_540(1);
			break;
		case 35:
			__LIB_0__::func_541(1);
			break;
		case 36:
			break;
		case 37:
			__LIB_0__::func_542(0);
			break;
		case 38:
			__LIB_0__::func_543(0);
			break;
		case 39:
			__LIB_0__::func_544(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			__LIB_1__::func_240(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			__LIB_1__::func_240(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			__LIB_1__::func_240(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			__LIB_1__::func_240(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || __LIB_0__::func_802(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (__LIB_0__::func_181())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!__LIB_1__::func_707(iVar0, 1, 0))
					{
						__LIB_3__::func_427(iVar0, 1, 752097756);
					}
					__LIB_1__::func_775(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_3__::func_427(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_3__::func_427(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					__LIB_3__::func_427(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_3__::func_427(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_3__::func_427(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					__LIB_3__::func_427(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			__LIB_17__::func_983();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

bool func_122(var uParam0)
{
	if (!__LIB_17__::func_992(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_92(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_123(var uParam0)
{
	if (!__LIB_17__::func_990(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_105(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_124(var uParam0)
{
	if (!__LIB_17__::func_997(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_92(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_125(var uParam0)
{
	if (!__LIB_17__::func_995(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_105(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

void func_126(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	if (iLocal_93 > 1)
	{
		__LIB_18__::func_0(uParam0);
		return;
	}
	if (!ANIMSCENE::_0x8D81E7824B7753F7(__LIB_7__::func_185(uParam0, iLocal_21), "S_CALLOVER_LOOPS", 1))
	{
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_95))
	{
		__LIB_0__::func_268(&uLocal_95, 0f);
	}
	if (__LIB_1__::func_732(iLocal_52, 1) || __LIB_0__::func_264(&uLocal_95) >= 15f)
	{
		if (__LIB_1__::func_732(iLocal_52, 1))
		{
			if (iLocal_93 > 0)
			{
				__LIB_7__::func_196(&uLocal_98);
			}
			else
			{
				__LIB_7__::func_197(&uLocal_98);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(__LIB_6__::func_952(uParam0, iLocal_18)) && bLocal_57)
		{
			MISC::_0xE98D55C5983F2509(__LIB_6__::func_952(uParam0, iLocal_18));
			bLocal_57 = false;
		}
		__LIB_18__::func_0(uParam0);
		return;
	}
	bVar0 = true;
	if (PED::IS_PED_ON_MOUNT(Global_35) || PED::_IS_PED_CARRYING(Global_35))
	{
		bVar0 = false;
	}
	if (!__LIB_7__::func_163(uParam0, Local_39, 1, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(__LIB_6__::func_952(uParam0, iLocal_18)) && bLocal_57)
		{
			MISC::_0xE98D55C5983F2509(__LIB_6__::func_952(uParam0, iLocal_18));
			bLocal_57 = false;
		}
		__LIB_1__::func_221(iLocal_51, 0, 1);
		__LIB_1__::func_221(iLocal_52, 0, 1);
		return;
	}
	__LIB_1__::func_221(iLocal_51, bVar0, 1);
	__LIB_1__::func_221(iLocal_52, bVar0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_6__::func_952(uParam0, iLocal_18)) && !bLocal_57)
	{
		MISC::_0x870708A6E147A9AD(__LIB_6__::func_952(uParam0, iLocal_18), "", 6f, 0, 0, 0, 0, 0, 0, -1);
		bLocal_57 = true;
	}
	if (__LIB_1__::func_732(iLocal_51, 1))
	{
		bLocal_60 = true;
	}
	if (bLocal_60)
	{
		if (__LIB_0__::func_153(Global_35, 0, 1, 0) != joaat("WEAPON_UNARMED") || __LIB_0__::func_153(Global_35, 1, 1, 0) != joaat("WEAPON_UNARMED"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		}
		else
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_30(uParam0, iLocal_38), true, false) };
			fLocal_24 = vVar1.z;
			if (bLocal_54)
			{
				bLocal_55 = true;
				__LIB_7__::func_198();
			}
			__LIB_1__::func_281(&iLocal_51, 1, 1);
			__LIB_1__::func_281(&iLocal_52, 1, 1);
			__LIB_7__::func_222();
			__LIB_7__::func_187(uParam0);
			__LIB_7__::func_199(&uLocal_98);
			if (!bLocal_55)
			{
				__LIB_7__::func_173(uParam0, iLocal_20, 0);
				__LIB_7__::func_33(uParam0, iLocal_36, 1);
			}
			else
			{
				__LIB_7__::func_33(uParam0, iLocal_34, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_6__::func_952(uParam0, iLocal_18)) && bLocal_57)
			{
				MISC::_0xE98D55C5983F2509(__LIB_6__::func_952(uParam0, iLocal_18));
				bLocal_57 = false;
			}
			bLocal_59 = true;
			bLocal_60 = false;
			__LIB_7__::func_221(3);
		}
	}
}

bool func_127(var uParam0)
{
	if (!__LIB_18__::func_3(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_126(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_128(var uParam0)
{
	if (!__LIB_18__::func_6(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_92(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_129(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_18__::func_11(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_130(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_18__::func_12(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_131(var uParam0)
{
	if (!__LIB_18__::func_17(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_126(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

int func_132(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			__LIB_18__::func_31(&(Global_40.f_4283.f_6[iVar0 /*5*/]), bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_133(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		__LIB_18__::func_50(uParam0, uParam1, iVar0, iParam2);
		iVar0++;
	}
}

int func_134(var uParam0, var uParam1, bool bParam2)
{
	if (!uParam0->f_146)
	{
		if (!Global_36634 && bParam2)
		{
			if (!__LIB_0__::func_144((*uParam1)[2 /*9*/], 0))
			{
				Global_36627[1] = 0;
				if (__LIB_0__::func_139(Global_36622[1]))
				{
					__LIB_1__::func_221(Global_36622[1], 0, 1);
				}
			}
			else
			{
				Global_36627[1] = 1;
				if (__LIB_0__::func_139(Global_36622[1]))
				{
					__LIB_1__::func_221(Global_36622[1], 1, 1);
				}
			}
			if (!__LIB_0__::func_144((*uParam1)[1 /*9*/], 0))
			{
				Global_36627[0] = 0;
				if (__LIB_0__::func_139(Global_36622[0]))
				{
					__LIB_1__::func_221(Global_36622[0], 0, 1);
				}
			}
			else
			{
				Global_36627[0] = 1;
				if (__LIB_0__::func_139(Global_36622[0]))
				{
					__LIB_1__::func_221(Global_36622[0], 1, 1);
				}
			}
		}
		Global_36627[3] = __LIB_18__::func_51(uParam0, uParam1[0 /*9*/]);
		if (__LIB_0__::func_139(Global_36622[3]))
		{
			__LIB_1__::func_221(Global_36622[3], Global_36627[3], 1);
		}
		if (*uParam1)[0 /*9*/] == joaat("DOCUMENT_BANKROB_NEWSCLIP")
		{
			Global_36636 = 1;
		}
		Global_36621 = 1;
	}
	if (uParam0->f_142)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_ZOOM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DOCUMENT_PAGE_NEXT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DOCUMENT_PAGE_PREV"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_A"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_OPEN_SATCHEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_OPEN_SATCHEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_TAB_RIGHT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_TAB_LEFT"), false);
	}
	return 1;
}

void func_135(var uParam0, var uParam1)
{
	__LIB_7__::func_652(&(Global_36622[3]), __LIB_18__::func_51(uParam0, uParam1));
}

void func_136(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1[24];
	char[] cVar4[8];
	switch ((*uParam1)[0 /*9*/])
	{
		case joaat("DOCUMENT_GUNSLINGER_1_NOTE"):
		case joaat("DOCUMENT_GUNSLINGER_2_NOTE"):
		case joaat("DOCUMENT_GUNSLINGER_3_NOTE"):
		case joaat("DOCUMENT_GUNSLINGER_5_NOTE"):
			if (*uParam1)[0 /*9*/] == joaat("DOCUMENT_GUNSLINGER_1_NOTE")
			{
				iVar0 = 84;
			}
			else if (*uParam1)[0 /*9*/] == joaat("DOCUMENT_GUNSLINGER_2_NOTE")
			{
				iVar0 = 86;
			}
			else if (*uParam1)[0 /*9*/] == joaat("DOCUMENT_GUNSLINGER_3_NOTE")
			{
				iVar0 = 87;
			}
			else if (*uParam1)[0 /*9*/] == joaat("DOCUMENT_GUNSLINGER_5_NOTE")
			{
				iVar0 = 88;
			}
			if (__LIB_0__::func_5(iVar0) && !__LIB_1__::func_187(iVar0))
			{
				__LIB_4__::func_471(iVar0, 1);
				if (__LIB_0__::func_296(0, 0, 1))
				{
					__LIB_3__::func_727(iVar0, 2);
				}
				else
				{
					__LIB_18__::func_185(iVar0);
				}
				if (!__LIB_3__::func_736(26, 32))
				{
					if ((((__LIB_0__::func_627(84, 0) || __LIB_1__::func_187(84)) && (__LIB_0__::func_627(86, 0) || __LIB_1__::func_187(86))) && (__LIB_0__::func_627(87, 0) || __LIB_1__::func_187(87))) && (__LIB_0__::func_627(88, 0) || __LIB_1__::func_187(88)))
					{
						MemCopy(&cVar1, {Global_1347702[26 /*49*/].f_1}, 3);
						StringConCat(&cVar1, "_obj2", 24);
						if (HUD::DOES_TEXT_LABEL_EXIST(&cVar1) && UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(26), __LIB_3__::func_733(26)))
						{
							cVar4 = __LIB_0__::func_958(0, &cVar1, 0, 0, -1, -1);
							__LIB_5__::func_238(26, &cVar1, cVar4, -1082130432 /* Float: -1f */);
							__LIB_3__::func_727(26, 32);
						}
					}
				}
			}
			break;
	}
}

void func_137(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	float fVar20;
	float fVar21;
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, uParam0->f_1) };
	vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, uParam0->f_4) };
	vVar10 = { __LIB_0__::func_173(vVar7 - vVar4) };
	vVar13 = { __LIB_4__::func_83(vVar10, 2) };
	vVar16 = { vVar4 + vVar10 * FtoV((BUILTIN::VDIST(vVar4, vVar7) * uParam0->f_7)) + Vector(uParam0->f_8, uParam0->f_8, uParam0->f_8) * vVar13 };
	iVar19 = 0;
	if (__LIB_0__::func_27(*uParam0, 1))
	{
		GRAPHICS::_0x41F88A85A579A61D(uParam0->f_9);
		while (__LIB_18__::func_75(&fVar0, &vVar1, uParam0->f_10, vVar4, vVar7, vVar16))
		{
			GRAPHICS::_0xDD9DC1AB63D513CE(vVar1);
			iVar19++;
			if (iVar19 > iParam5)
			{
			}
		else
		{
			}
		}
		GRAPHICS::_0x812C1563185C6FB2();
		iVar19 = 0;
		fVar0 = 0f;
		vVar1 = { 0f, 0f, 0f };
	}
	if (__LIB_0__::func_27(*uParam0, 2))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_11))
		{
			GRAPHICS::_0x4BD66B4E3427689B(uParam0->f_11);
			while (__LIB_18__::func_75(&fVar0, &vVar1, uParam0->f_13, vVar4, vVar7, vVar16))
			{
				MISC::SET_RANDOM_SEED(BUILTIN::TIMERA());
				if ((uParam0->f_12 < 0f || uParam0->f_12 >= 1f) || MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= uParam0->f_12)
				{
					GRAPHICS::_0xF5E45CB1CF965D2D(vVar1);
					iVar19++;
					if (iVar19 > iParam5)
					{
					}
				else
				{
					}
					GRAPHICS::_0xF2F543D48F319A3A();
					iVar19 = 0;
					fVar0 = 0f;
					vVar1 = { 0f, 0f, 0f };
					if (__LIB_0__::func_27(*uParam0, 4))
					{
						while (__LIB_18__::func_75(&fVar0, &vVar1, uParam0->f_21, vVar4, vVar7, vVar16))
						{
							MISC::SET_RANDOM_SEED(BUILTIN::TIMERA());
							if ((uParam0->f_14 < 0f || uParam0->f_14 >= 1f) || MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= uParam0->f_14)
							{
								fVar20 = MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_15, uParam0->f_16);
								fVar21 = MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_17, uParam0->f_18);
								GRAPHICS::_ADD_BLOOD_POOL_2(vVar1, fVar20, fVar21, uParam0->f_20, false, NaNf, false);
								iVar19++;
								if (iVar19 > iParam5)
								{
								}
							else
							{
								}
								iVar19 = 0;
								fVar0 = 0f;
								vVar1 = { 0f, 0f, 0f };
							}
						}
					}
				}
			}
		}
	}
}

int func_138(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		__LIB_18__::func_80(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (__LIB_0__::func_139((uParam2[iVar0 /*17*/])->f_6))
		{
			__LIB_1__::func_471(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

void func_139(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		__LIB_18__::func_80(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_140(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (__LIB_1__::func_502(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			__LIB_18__::func_80(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

void func_141()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_18__::func_88(iVar0);
		iVar0++;
	}
}

void func_142()
{
	int iVar0;
	if (__LIB_7__::func_923(8192))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			__LIB_8__::func_188(&(Local_412[(9 + iVar0) /*7*/]), "script@proc@eventareas@appleseed@Tree_Saw", __LIB_18__::func_89(9), 0);
			iVar0++;
		}
	}
	if (__LIB_7__::func_923(16384))
	{
		__LIB_8__::func_188(&(Local_412[6 /*7*/]), "script@proc@eventareas@appleseed@Log_Drag", __LIB_18__::func_89(6), 0);
	}
	if (__LIB_7__::func_923(256))
	{
		__LIB_8__::func_188(&(Local_412[7 /*7*/]), "script@proc@eventareas@appleseed@Boom_Operator", __LIB_18__::func_89(7), 0);
		__LIB_8__::func_188(&(Local_412[8 /*7*/]), "script@proc@eventareas@appleseed@Boom_Spotter", __LIB_18__::func_89(8), 0);
	}
	if (__LIB_7__::func_923(64))
	{
		__LIB_8__::func_188(&(Local_412[2 /*7*/]), "script@proc@eventareas@appleseed@Tree_Fall", __LIB_18__::func_89(2), 0);
		__LIB_8__::func_188(&(Local_412[3 /*7*/]), "script@proc@eventareas@appleseed@Player_Help_A", __LIB_18__::func_89(3), 0);
		__LIB_8__::func_188(&(Local_412[4 /*7*/]), "script@proc@eventareas@appleseed@Player_Help_B", __LIB_18__::func_89(4), 0);
	}
	if (__LIB_7__::func_923(262144))
	{
		if (__LIB_7__::func_923(16))
		{
			__LIB_8__::func_290();
		}
		else if (__LIB_7__::func_908(1, 2) && !__LIB_7__::func_908(Local_1529.f_136, 16384))
		{
			__LIB_8__::func_188(&(Local_412[0 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Stage2_talk", __LIB_18__::func_89(0), 0);
			__LIB_8__::func_188(&(Local_412[5 /*7*/]), "script@proc@eventareas@appleseed@Player_Give_Money", __LIB_18__::func_89(5), 0);
		}
		else
		{
			__LIB_8__::func_290();
		}
	}
	else
	{
		switch (iLocal_98)
		{
			case 1:
				if (__LIB_7__::func_923(16))
				{
					__LIB_8__::func_290();
				}
				else
				{
					__LIB_8__::func_188(&(Local_412[5 /*7*/]), "script@proc@eventareas@appleseed@Leadin@INT@Leadin_ILO", __LIB_18__::func_89(5), 0);
					__LIB_8__::func_188(&(Local_412[0 /*7*/]), "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", __LIB_18__::func_89(0), 0);
					__LIB_8__::func_188(&(Local_412[1 /*7*/]), "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", __LIB_18__::func_89(1), 0);
				}
				break;
			case 2:
				if (__LIB_7__::func_923(16))
				{
					__LIB_8__::func_290();
				}
				else if (__LIB_7__::func_908(1, 2) && !__LIB_7__::func_908(Local_1529.f_136, 16384))
				{
					__LIB_8__::func_188(&(Local_412[0 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Stage2_talk", __LIB_18__::func_89(0), 0);
					__LIB_8__::func_188(&(Local_412[5 /*7*/]), "script@proc@eventareas@appleseed@Player_Give_Money", __LIB_18__::func_89(5), 0);
				}
				else
				{
					__LIB_8__::func_290();
				}
				break;
			case 3:
				__LIB_8__::func_188(&(Local_412[0 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Orders", __LIB_18__::func_89(0), 0);
				__LIB_8__::func_188(&(Local_412[1 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Stage3_Pay", __LIB_18__::func_89(1), 0);
				__LIB_8__::func_188(&(Local_412[2 /*7*/]), "script@proc@eventareas@appleseed@Player_Grab_Money", __LIB_18__::func_89(2), 0);
				__LIB_8__::func_188(&(Local_412[3 /*7*/]), "script@proc@eventareas@appleseed@Worker_Convo", __LIB_18__::func_89(3), 0);
				break;
		}
	}
}

void func_143(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	__LIB_2__::func_451(&(Local_208[iParam0 /*21*/]), 0);
	__LIB_18__::func_92(iParam0, 0);
	if (!bParam2)
	{
		__LIB_7__::func_928(268435456);
	}
	if (bParam1)
	{
		iLocal_356 = -1;
	}
}

void func_144(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2[24];
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		return;
	}
	if (__LIB_7__::func_963(&(Local_412[(9 + iParam2) /*7*/])))
	{
		__LIB_8__::func_271(iParam0, iParam1, iParam2);
		if (PED::_0xA454D234E45BB6E5(*iParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *iParam0;
			bVar1 = true;
			PED::SET_PED_CONFIG_FLAG(*iParam0, 330, true);
		}
		else if (PED::_0x9337183FDA2E9035(*iParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *iParam0;
		}
		else if (PED::_0xA454D234E45BB6E5(*iParam1, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *iParam1;
			bVar1 = true;
			PED::SET_PED_CONFIG_FLAG(*iParam1, 330, true);
		}
		else if (PED::_0x9337183FDA2E9035(*iParam1, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *iParam1;
		}
		if (Local_357 == *iParam0 || Local_357 == *iParam1)
		{
			__LIB_18__::func_86(iParam2);
			iLocal_519[iParam2] = 8;
			return;
		}
		if (__LIB_7__::func_933(__LIB_8__::func_62(iParam2)))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_412[(9 + iParam2) /*7*/].f_1)) && __LIB_8__::func_34(&(Local_412[(9 + iParam2) /*7*/])))
			{
				__LIB_8__::func_240(&(Local_412[(9 + iParam2) /*7*/]), 1, 1);
				StringCopy(&(Local_412[(9 + iParam2) /*7*/].f_1), "", 24);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				__LIB_7__::func_965(__LIB_8__::func_62(iParam2));
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				__LIB_7__::func_934(__LIB_8__::func_62(iParam2));
			}
			if (__LIB_7__::func_933(__LIB_8__::func_62(iParam2)))
			{
				cVar2 = { __LIB_8__::func_121(iParam0, iLocal_409[iParam2], bVar1) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
				{
					__LIB_8__::func_151(&(Local_412[(9 + iParam2) /*7*/]), &cVar2);
				}
			}
		}
	}
}

void func_145()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = __LIB_8__::func_293(iVar0);
		if (__LIB_8__::func_139(iVar1) && (!__LIB_7__::func_923(64) || iVar1 != 0))
		{
			__LIB_18__::func_97(iVar0);
		}
		iVar0++;
	}
}

void func_146(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = (810 + iParam0);
	iVar1 = __LIB_2__::func_963(iVar0);
	iVar2 = __LIB_8__::func_293(iParam0);
	if (__LIB_8__::func_241(iVar2, &iVar1))
	{
		if (__LIB_8__::func_270(iVar2))
		{
			bVar3 = true;
		}
		else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_390[iVar2]) == 4)
		{
		}
		else
		{
			__LIB_18__::func_88(iVar2);
			return;
		}
	}
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_390[iVar2]))
	{
		__LIB_18__::func_88(iVar2);
		return;
	}
	if (__LIB_8__::func_295(iParam0, bVar3))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_390[iVar2], 6);
		if (!__LIB_8__::func_139(iVar2))
		{
			__LIB_8__::func_156(iVar2);
		}
		if (!(__LIB_7__::func_923(64) && iVar2 == 0))
		{
			__LIB_2__::func_478(iVar1, Global_35, "LOG_TIMBER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_8__::func_19(__LIB_8__::func_17(iParam0));
		}
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::TRIGGER_SONAR_BLIP(348490638, __LIB_8__::func_144(iVar2));
		if (!((iLocal_98 == 1 && __LIB_7__::func_923(64)) && iParam0 == 0))
		{
			__LIB_8__::func_289(iVar2);
		}
		return;
	}
	bVar3 = false;
}

void func_147(int iParam0, var uParam1, int iParam2, bool bParam3, char* sParam4, vector3 vParam5, struct<2> Param8, int iParam10, vector3 vParam11, int iParam14, int iParam15, int iParam16, float fParam17, int iParam18, int iParam19)
{
	struct<24> Var0;
	if (Global_1359489.f_63.f_241 >= 10)
	{
		return;
	}
	if (bParam3)
	{
		Var0.f_10 = __LIB_3__::func_745(MISC::GET_HEADING_FROM_VECTOR_2D(Param8, Param8.f_1));
		Var0 = 1;
	}
	else
	{
		Var0.f_23 = 0;
		Var0.f_10 = 0f;
		Var0 = 2;
	}
	Var0.f_3 = uParam1;
	Var0.f_4 = { vParam5 };
	Var0.f_7 = { vParam11 };
	Var0.f_11 = iParam15;
	Var0.f_12 = iParam16;
	Var0.f_13 = (fParam17 * fParam17);
	Var0.f_1 = iParam0;
	Var0.f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Var0.f_14 = iParam18;
	Var0.f_15 = bParam3;
	Var0.f_16 = iParam2;
	StringCopy(&(Var0.f_19), sParam4, 32);
	Var0.f_17 = iParam19;
	Global_1359489.f_63[iParam14 /*24*/] = { Var0 };
	if (Global_1359489.f_63[iParam14 /*24*/].f_15)
	{
		__LIB_18__::func_101(&(Global_1359489.f_63[iParam14 /*24*/]));
	}
}

void func_148(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	__LIB_18__::func_102(48);
	__LIB_0__::func_703(0, -1);
}

void func_149(int iParam0)
{
	int iVar0;
	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			__LIB_18__::func_102(48);
		}
	}
}

int func_150(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		__LIB_18__::func_103(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (__LIB_0__::func_139((uParam2[iVar0 /*17*/])->f_6))
		{
			__LIB_1__::func_471(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

void func_151(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		__LIB_18__::func_103(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_152(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (__LIB_1__::func_502(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			__LIB_18__::func_103(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

void func_153(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!__LIB_8__::func_470(uParam0, 65536))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231.f_4)
	{
		return;
	}
	if (!__LIB_8__::func_470(uParam0, 4096) && uParam0->f_1584)
	{
		return;
	}
	if (!__LIB_8__::func_470(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	__LIB_18__::func_112(uParam0);
	__LIB_18__::func_121(uParam0, uParam0->f_1585, uParam0->f_1587);
	__LIB_10__::func_503(uParam0);
	if (uParam0->f_1588 && !uParam0->f_1587)
	{
		if (((((uParam0->f_1583 >= 0 && uParam0->f_704[uParam0->f_1583 /*41*/].f_17 > 0f) && uParam0->f_1376 >= 0) && !__LIB_0__::func_266(Global_35, uParam0->f_704[uParam0->f_1376 /*41*/].f_1, (uParam0->f_704[uParam0->f_1583 /*41*/].f_17 + 5f), 1, 1)) && !__LIB_8__::func_470(uParam0, 33554432)) && !__LIB_8__::func_470(uParam0, 4))
		{
			__LIB_18__::func_113(uParam0, uParam0->f_1585);
			return;
		}
	}
	if (!__LIB_8__::func_470(uParam0, 4))
	{
		if (__LIB_10__::func_504(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1372 = uParam0->f_1376;
				__LIB_8__::func_462(uParam0, 8);
				return;
			}
		}
		else
		{
			__LIB_18__::func_113(uParam0, uParam0->f_1585);
		}
		if (uParam0->f_704[uParam0->f_1378 /*41*/].f_29)
		{
			fVar0 = __LIB_18__::func_122(uParam0, uParam0->f_1378);
			if (fVar0 < 0f || (uParam0->f_1585 && fVar0 < 1f))
			{
				uParam0->f_1376 = uParam0->f_1378;
				if (!bParam2)
				{
					uParam0->f_1372 = uParam0->f_1378;
					__LIB_8__::func_462(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1377 == -1f || fVar0 <= uParam0->f_1377) || uParam0->f_1378 == uParam0->f_1376)
				{
					if (uParam0->f_1378 != uParam0->f_1376)
					{
					}
					uParam0->f_1376 = uParam0->f_1378;
					uParam0->f_1377 = fVar0;
					__LIB_8__::func_462(uParam0, 16);
					if (((!__LIB_8__::func_470(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_704[uParam0->f_1376 /*41*/].f_1, true) < (uParam0->f_704[uParam0->f_1376 /*41*/].f_11 + 5f))
					{
						__LIB_10__::func_516(uParam0);
						__LIB_8__::func_462(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1376 == uParam0->f_1378)
			{
				__LIB_8__::func_480(uParam0, 16);
			}
		}
		if (uParam0->f_1378 + 1 >= 8)
		{
			uParam0->f_1378 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1378 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_704[iVar2 /*41*/].f_29)
				{
					uParam0->f_1378 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1378 = 0;
			}
		}
		if (uParam0->f_1376 < 0)
		{
			return;
		}
		if (__LIB_0__::func_274(&(uParam0->f_704[uParam0->f_1376 /*41*/]), 2) && uParam0->f_1585)
		{
			return;
		}
	}
	if (__LIB_8__::func_470(uParam0, 16))
	{
		fVar4 = __LIB_0__::func_94(Global_35, uParam0->f_704[uParam0->f_1376 /*41*/].f_1, 1);
		if (uParam0->f_1585 && fVar4 <= (uParam0->f_704[uParam0->f_1376 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		fVar5 = __LIB_0__::func_152(Global_36, uParam0->f_704[uParam0->f_1376 /*41*/].f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_704[uParam0->f_1376 /*41*/].f_17 || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1563, uParam0->f_1567))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_704[uParam0->f_1376 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_704[uParam0->f_1376 /*41*/].f_1.f_2 + uParam0->f_704[uParam0->f_1376 /*41*/].f_10))
			{
				__LIB_10__::func_522(uParam0, uParam0->f_704[uParam0->f_1376 /*41*/].f_27, uParam0->f_1033[uParam0->f_1376 /*22*/].f_1, fVar6);
			}
			if ((uParam0->f_1587 && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1563, uParam0->f_1567)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1589) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1589) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1589))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1589, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1589) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1589))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1589);
			}
		}
		else if ((uParam0->f_1585 && fVar4 <= (uParam0->f_704[uParam0->f_1376 /*41*/].f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1586))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1586, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		}
	}
	if (((uParam0->f_1585 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1586) > 1.25f) || __LIB_8__::func_470(uParam0, 4))
	{
		if (((VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1563, uParam0->f_1567) && __LIB_18__::func_122(uParam0, uParam0->f_1376) < 10000f) && __LIB_8__::func_470(uParam0, 16)) || __LIB_8__::func_470(uParam0, 4))
		{
			if (!__LIB_8__::func_470(uParam0, 4))
			{
				__LIB_8__::func_462(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!__LIB_8__::func_471(uParam0, uParam0->f_1376))
			{
				iVar7 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1374), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_704[uParam0->f_1376 /*41*/].f_7, uParam0->f_704[uParam0->f_1376 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1374 = 0;
				__LIB_8__::func_480(uParam0, 4);
			}
		}
	}
	else if (__LIB_8__::func_470(uParam0, 4))
	{
		__LIB_8__::func_480(uParam0, 4);
	}
}

void func_154(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		__LIB_18__::func_124(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		__LIB_18__::func_124(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		__LIB_18__::func_124(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		__LIB_18__::func_124(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		__LIB_18__::func_124(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		__LIB_18__::func_124(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		__LIB_18__::func_124(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		__LIB_18__::func_124(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		__LIB_18__::func_124(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		__LIB_18__::func_124(-1, iParam0);
	}
}

int func_155(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	iVar2 = uParam0->f_1376;
	if (iParam1 >= 0)
	{
		iVar2 = uParam0->f_163[iParam1 /*18*/];
		fVar3 = uParam0->f_704[uParam0->f_1376 /*41*/].f_7;
		fVar4 = uParam0->f_704[uParam0->f_1376 /*41*/].f_7.f_1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	switch (__LIB_4__::func_576(uParam0))
	{
		case 0:
			if (!bParam3)
			{
				if (!__LIB_8__::func_495(uParam0, iVar2))
				{
					uParam0->f_1373 = iParam1;
				}
				uParam0->f_163[iParam1 /*18*/].f_7 = 1;
			}
			if (((!__LIB_0__::func_274(&(uParam0->f_704[iVar2 /*41*/]), 32) && __LIB_4__::func_641()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_147))) || (!__LIB_0__::func_274(&(uParam0->f_704[iVar2 /*41*/]), 128) && uParam0->f_1587))
			{
				if (uParam0->f_1587)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1589, 0.1f, -1, false);
					if (!__LIB_8__::func_470(uParam0, 8192))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1589, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1589, 24, 1000);
					__LIB_8__::func_530(uParam0, 8);
				}
				else
				{
					__LIB_8__::func_462(uParam0, 131072);
					__LIB_8__::func_530(uParam0, 11);
				}
			}
			else if (uParam0->f_1585)
			{
				__LIB_8__::func_530(uParam0, 5);
			}
			else
			{
				__LIB_10__::func_520(uParam0);
			}
			break;
		case 1:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1557)) >= 3f;
			if ((((!__LIB_0__::func_163(Global_35, 716706914) && !__LIB_0__::func_163(Global_35, 242628503)) && __LIB_0__::func_264(&(uParam0->f_1557)) >= 2.5f) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))) || bVar0)
			{
				__LIB_10__::func_520(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1557)) >= 3.5f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_704[uParam0->f_1376 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_8__::func_471(uParam0, uParam0->f_1376))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1374), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4))
			{
				__LIB_10__::func_520(uParam0);
			}
			if ((!uParam0->f_1585 && !uParam0->f_1587) || bVar0)
			{
				uParam0->f_1374 = 0;
				if (__LIB_4__::func_576(uParam0) == 5 || iParam1 < 0)
				{
					__LIB_10__::func_520(uParam0);
				}
				else
				{
					__LIB_18__::func_240(uParam0, iParam1, bParam2);
					__LIB_1__::func_148(&(uParam0->f_1557));
					__LIB_8__::func_530(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1557)) >= 1f;
			if (__LIB_0__::func_491(Global_35, 242628503) || bVar0)
			{
				__LIB_8__::func_530(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_274(&(uParam0->f_704[iVar2 /*41*/]), 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_1591)))
				{
					__LIB_5__::func_386(uParam0->f_1591, 0);
				}
			}
			__LIB_1__::func_148(&(uParam0->f_1557));
			__LIB_8__::func_530(uParam0, 4);
			break;
		case 4:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1557)) >= 2f;
			if ((__LIB_0__::func_274(&(uParam0->f_704[iVar2 /*41*/]), 256) || !__LIB_1__::func_750(&uVar5)) || bVar0)
			{
				if (__LIB_1__::func_499())
				{
					__LIB_0__::func_573();
					__LIB_8__::func_530(uParam0, 10);
				}
				else
				{
					__LIB_8__::func_530(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1557)) >= 2f;
			if (__LIB_1__::func_499() || bVar0)
			{
				__LIB_8__::func_530(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1557)) >= 2f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_704[uParam0->f_1376 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_8__::func_471(uParam0, uParam0->f_1376))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1374), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1374 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1589, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				__LIB_8__::func_530(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (__LIB_0__::func_264(&(uParam0->f_1557)) >= 0.75f)
			{
				if (!__LIB_8__::func_470(uParam0, 8192))
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1589, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1589);
				__LIB_8__::func_462(uParam0, 131072);
				__LIB_8__::func_530(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

int func_156(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = __LIB_18__::func_127(iParam0, iParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

void func_157(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		__LIB_18__::func_128(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		__LIB_18__::func_128(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		__LIB_18__::func_128(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		__LIB_18__::func_128(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		__LIB_18__::func_128(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		__LIB_18__::func_128(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		__LIB_18__::func_128(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		__LIB_18__::func_128(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		__LIB_18__::func_128(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		__LIB_18__::func_128(-1, iParam0);
	}
}

void func_158(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = uParam0->f_1;
	iVar1 = uParam0->f_4;
	if (iParam1 == 1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
	}
	__LIB_4__::func_517(0);
	HUD::_DISPLAY_HUD_COMPONENT(372886907);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	if (bParam2)
	{
		__LIB_0__::func_105(1);
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	}
	HUD::_TEXT_DATABASE_DELETE(__LIB_7__::func_856(iVar0));
	iVar2 = __LIB_0__::func_298(0);
	if (__LIB_0__::func_6(iVar2))
	{
		iVar3 = __LIB_0__::func_700(iVar2);
		if (iVar3 == 4)
		{
			MISC::_0x1096603B519C905F("");
		}
	}
	if (__LIB_7__::func_730())
	{
		__LIB_1__::func_559(iVar1, 0, 0);
	}
	else
	{
		__LIB_1__::func_559(iVar1, 0, 2);
	}
	__LIB_1__::func_298(iVar1, 1);
	AUDIO::STOP_AUDIO_SCENE(__LIB_7__::func_724(iVar0));
	ENTITY::_0x18FF3110CF47115D(PLAYER::PLAYER_PED_ID(), 9, 1);
	__LIB_4__::func_896(1);
	__LIB_0__::func_267(1);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_652())
		{
			CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(4000);
		}
		else
		{
			CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		}
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	if (__LIB_1__::func_652())
	{
		__LIB_18__::func_134(iVar0, uParam0->f_6, uParam0->f_2);
	}
	__LIB_1__::func_78(iVar0);
	__LIB_7__::func_723();
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	__LIB_0__::func_867(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_159(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (__LIB_5__::func_31(&(uParam0->f_5423[iVar0 /*65*/])))
		{
			bVar1 = uParam0->f_5423[iVar0 /*65*/];
			if (!ENTITY::IS_ENTITY_DEAD(bVar1) && bParam2 != bVar1)
			{
				if (bParam1)
				{
					__LIB_18__::func_141(uParam0, bVar1, 4096);
					if (__LIB_18__::func_146(uParam0, bVar1, 1024))
					{
						iVar2 = MAP::GET_BLIP_FROM_ENTITY(bVar1);
						if (MAP::DOES_BLIP_EXIST(iVar2))
						{
							MAP::_BLIP_SET_MODIFIER(iVar2, -546708623);
							MAP::_BLIP_SET_MODIFIER(iVar2, 231194138);
						}
					}
				}
				else
				{
					__LIB_18__::func_142(uParam0, bVar1, 4096);
					if (__LIB_18__::func_146(uParam0, bVar1, 1024))
					{
						iVar3 = MAP::GET_BLIP_FROM_ENTITY(bVar1);
						if (MAP::DOES_BLIP_EXIST(iVar3))
						{
							MAP::_BLIP_REMOVE_MODIFIER(iVar3, -546708623);
							MAP::_BLIP_REMOVE_MODIFIER(iVar3, 231194138);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_160(int iParam0, int iParam1, int iParam2)
{
	if (__LIB_1__::func_707(iParam1, 1, 0))
	{
		if (iParam1 == iParam0 || iParam2 == 1)
		{
			__LIB_18__::func_163(iParam1, 1);
		}
		else
		{
			__LIB_18__::func_163(iParam1, 0);
		}
	}
}

int func_161(char[4] cParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (__LIB_18__::func_172(cParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_0__::func_31(uParam1->f_10))
	{
		PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1), 53, true);
	}
	__LIB_5__::func_339(uParam1);
	__LIB_5__::func_311(uParam1);
	if (!bParam2)
	{
		__LIB_18__::func_173(cParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case joaat("EVENT_ENTITY_EXPLOSION"):
				__LIB_18__::func_174(cParam0, uParam1, iVar0);
				break;
			case joaat("EVENT_ENTITY_DAMAGED"):
			case 2145012826:
				__LIB_18__::func_175(cParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	__LIB_18__::func_176(cParam0, uParam1);
	__LIB_5__::func_75(uParam1);
	return 0;
}

void func_162(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_525())
	{
		__LIB_18__::func_178(cParam0, iVar0);
		iVar0++;
	}
}

void func_163(var uParam0, var uParam1)
{
	if (uParam0->f_141)
	{
		__LIB_19__::func_136(uParam0, uParam1);
	}
	if (uParam0->f_136)
	{
		__LIB_7__::func_610(uParam1);
	}
	else
	{
		__LIB_7__::func_611(uParam1);
	}
	if (uParam0->f_145)
	{
		__LIB_0__::func_238(uParam0->f_1.f_1);
	}
	__LIB_7__::func_612(uParam1);
	(uParam1[0 /*9*/])->f_2 = 0;
	Global_1911772 = (*uParam1)[0 /*9*/];
	__LIB_7__::func_648((*uParam1)[0 /*9*/], 0, 1, 0, 0f);
	GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
	Global_36632 = MISC::GET_GAME_TIMER() + 3000;
}

int func_164(var uParam0, var uParam1, bool bParam2)
{
	if (!uParam0->f_146)
	{
		if (!Global_36634 && bParam2)
		{
			if (!__LIB_0__::func_144((*uParam1)[2 /*9*/], 0))
			{
				Global_36627[1] = 0;
				if (__LIB_0__::func_139(Global_36622[1]))
				{
					__LIB_1__::func_221(Global_36622[1], 0, 1);
				}
			}
			else
			{
				Global_36627[1] = 1;
				if (__LIB_0__::func_139(Global_36622[1]))
				{
					__LIB_1__::func_221(Global_36622[1], 1, 1);
				}
			}
			if (!__LIB_0__::func_144((*uParam1)[1 /*9*/], 0))
			{
				Global_36627[0] = 0;
				if (__LIB_0__::func_139(Global_36622[0]))
				{
					__LIB_1__::func_221(Global_36622[0], 0, 1);
				}
			}
			else
			{
				Global_36627[0] = 1;
				if (__LIB_0__::func_139(Global_36622[0]))
				{
					__LIB_1__::func_221(Global_36622[0], 1, 1);
				}
			}
		}
		Global_36627[3] = __LIB_18__::func_182(uParam0, uParam1[0 /*9*/]);
		if (__LIB_0__::func_139(Global_36622[3]))
		{
			__LIB_1__::func_221(Global_36622[3], Global_36627[3], 1);
		}
		if (*uParam1)[0 /*9*/] == joaat("DOCUMENT_BANKROB_NEWSCLIP")
		{
			Global_36636 = 1;
		}
		Global_36621 = 1;
	}
	if (uParam0->f_142)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_ZOOM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DOCUMENT_PAGE_NEXT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DOCUMENT_PAGE_PREV"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_A"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_OPEN_SATCHEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_OPEN_SATCHEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_TAB_RIGHT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_TAB_LEFT"), false);
	}
	return 1;
}

void func_165(var uParam0, var uParam1)
{
	__LIB_7__::func_652(&(Global_36622[3]), __LIB_18__::func_182(uParam0, uParam1));
}

bool func_166(char[4] cParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_9__::func_40(cParam0);
	if (__LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) <= 3)
	{
		iVar0 = __LIB_6__::func_864(cParam0);
	}
	Var1 = { __LIB_8__::func_688(cParam0, iVar0) };
	if (__LIB_18__::func_187(&(cParam0->f_10792), Var1, __LIB_0__::func_81(&(cParam0->f_10792)), 0))
	{
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 262144);
		if (__LIB_4__::func_562(&(cParam0->f_10792), 524288))
		{
			__LIB_8__::func_665(cParam0, 67108864);
			__LIB_4__::func_563(&(cParam0->f_10792), 524288);
		}
		__LIB_5__::func_344(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

int func_167(char[4] cParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (__LIB_18__::func_191(cParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_0__::func_31(uParam1->f_10))
	{
		PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1), 53, true);
	}
	__LIB_5__::func_339(uParam1);
	__LIB_5__::func_311(uParam1);
	if (!bParam2)
	{
		__LIB_18__::func_192(cParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case joaat("EVENT_ENTITY_EXPLOSION"):
				__LIB_18__::func_193(cParam0, uParam1, iVar0);
				break;
			case joaat("EVENT_ENTITY_DAMAGED"):
			case 2145012826:
				__LIB_18__::func_194(cParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	__LIB_18__::func_195(cParam0, uParam1);
	__LIB_5__::func_75(uParam1);
	return 0;
}

bool func_168(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4, float fParam5, float fParam6, bool bParam7, float fParam8, float fParam9)
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (__LIB_0__::func_232(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam8 * fParam8))
	{
		*iParam2 = 0f;
		return true;
	}
	if (fParam6 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > fParam6)
		{
			return false;
		}
	}
	if (__LIB_3__::func_893(iParam0, fParam5))
	{
		if (__LIB_18__::func_202(vVar0, iParam0, uParam1, iParam2, iParam3, fParam4, fParam5, bParam7, fParam9))
		{
			return true;
		}
	}
	else if (!bParam7)
	{
		*iParam2 = 0f;
	}
	return false;
}

void func_169(int iParam0, int iParam1)
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
					__LIB_18__::func_206(iParam1->f_205);
					return;
				}
			}
			iVar0++;
		}
	}
}

bool func_170(char[4] cParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_9__::func_40(cParam0);
	if (__LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) <= 3)
	{
		iVar0 = __LIB_6__::func_864(cParam0);
	}
	Var1 = { __LIB_8__::func_688(cParam0, iVar0) };
	if (__LIB_18__::func_216(&(cParam0->f_10792), Var1, __LIB_0__::func_81(&(cParam0->f_10792)), 0))
	{
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 262144);
		if (__LIB_4__::func_562(&(cParam0->f_10792), 524288))
		{
			__LIB_8__::func_665(cParam0, 67108864);
			__LIB_4__::func_563(&(cParam0->f_10792), 524288);
		}
		__LIB_5__::func_344(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

bool func_171(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	return __LIB_18__::func_226(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5);
}

void func_172(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	switch (uParam0->f_163[iParam1 /*18*/].f_2)
	{
		case 9:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1210[uParam0->f_163[iParam1 /*18*/].f_4 /*10*/].f_8) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1210[uParam0->f_163[iParam1 /*18*/].f_4 /*10*/].f_8, false))
			{
				fVar1 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_1210[uParam0->f_163[iParam1 /*18*/].f_4 /*10*/].f_8);
				iVar0 = 0;
				while (iVar0 < 11)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2)) && uParam0->f_3[iVar0 /*13*/].f_8 > 0f) && fVar1 >= uParam0->f_3[iVar0 /*13*/].f_8) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2, true);
					}
					iVar0++;
				}
				if (((__LIB_0__::func_84(&(uParam0->f_163[iParam1 /*18*/]), 4) && uParam0->f_163[iParam1 /*18*/].f_12 < 1f) && fVar1 >= uParam0->f_163[iParam1 /*18*/].f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
				if (__LIB_0__::func_84(&(uParam0->f_163[iParam1 /*18*/]), 64) && __LIB_8__::func_494(uParam0, iParam1, 0))
				{
					__LIB_5__::func_123(uParam0, uParam0->f_1210[uParam0->f_163[iParam1 /*18*/].f_4 /*10*/].f_8, uParam0->f_163[iParam1 /*18*/].f_13, uParam0->f_163[iParam1 /*18*/].f_14);
				}
			}
			break;
		case 10:
			if ((uParam0->f_163[iParam1 /*18*/].f_3 >= 0 && uParam0->f_163[iParam1 /*18*/].f_5 >= 0) && uParam0->f_163[iParam1 /*18*/].f_3 != uParam0->f_163[iParam1 /*18*/].f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_163[iParam1 /*18*/].f_3 /*13*/].f_2) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_163[iParam1 /*18*/].f_5 /*13*/].f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_163[iParam1 /*18*/].f_3 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_163[iParam1 /*18*/].f_3 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_163[iParam1 /*18*/].f_3 /*13*/].f_2), uParam0->f_3[uParam0->f_163[iParam1 /*18*/].f_5 /*13*/].f_2, uParam0->f_163[iParam1 /*18*/].f_13, uParam0->f_163[iParam1 /*18*/].f_14);
					}
					if ((__LIB_0__::func_84(&(uParam0->f_163[iParam1 /*18*/]), 128) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_163[iParam1 /*18*/].f_5 /*13*/].f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_163[iParam1 /*18*/].f_5 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_163[iParam1 /*18*/].f_5 /*13*/].f_2), uParam0->f_3[uParam0->f_163[iParam1 /*18*/].f_3 /*13*/].f_2, uParam0->f_163[iParam1 /*18*/].f_13, uParam0->f_163[iParam1 /*18*/].f_14);
					}
				}
			}
			break;
		case 4:
			__LIB_19__::func_155(uParam0, iParam1, 0, 0);
			break;
	}
}

void func_173(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_163[iParam1 /*18*/].f_2)
	{
		case 9:
			__LIB_18__::func_238(uParam0, iParam2, iParam1);
			break;
		case 4:
			__LIB_19__::func_155(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_163[iParam1 /*18*/].f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_704[uParam0->f_163[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_704[uParam0->f_163[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (__LIB_0__::func_265(&(uParam0->f_1560)) >= IntToFloat((uParam0->f_704[uParam0->f_163[iParam1 /*18*/] /*41*/].f_25 / 1000)))
				{
					__LIB_8__::func_521(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&(uParam0->f_704[uParam0->f_163[iParam1 /*18*/] /*41*/].f_22)))
					{
						__LIB_1__::func_104(&(uParam0->f_1459), uParam0->f_704[uParam0->f_163[iParam1 /*18*/] /*41*/].f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_704[uParam0->f_163[iParam1 /*18*/] /*41*/].f_22));
					}
					uParam0->f_163[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_163[iParam1 /*18*/].f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_163[iParam1 /*18*/].f_7 = 1;
			break;
		case 11:
			uParam0->f_163[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1373 = iParam1;
			break;
	}
}

int func_174(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return __LIB_18__::func_243(uParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

void func_175(char[4] cParam0)
{
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 16))
	{
		return;
	}
	if (__LIB_0__::func_86(cParam0->f_32.f_5))
	{
		cParam0->f_32.f_5 = { __LIB_10__::func_343(*cParam0) };
	}
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		if (cParam0->f_32.f_218 == 15f)
		{
			cParam0->f_32.f_218 = 50f;
		}
		if (cParam0->f_32.f_219 == 20f)
		{
			cParam0->f_32.f_219 = 75f;
		}
	}
	else
	{
		if (cParam0->f_32.f_218 > 15f)
		{
			cParam0->f_32.f_218 = 15f;
		}
		if (cParam0->f_32.f_219 > 20f)
		{
			cParam0->f_32.f_219 = 20f;
		}
	}
	if (cParam0->f_32.f_218 <= 0f)
	{
	}
	else if (cParam0->f_32.f_219 <= 0f)
	{
	}
	else if (cParam0->f_32.f_219 <= cParam0->f_32.f_218)
	{
	}
	if (__LIB_10__::func_261(cParam0->f_346))
	{
		if (__LIB_18__::func_248(&(cParam0->f_32), cParam0->f_346, 0, 1))
		{
			if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 32))
			{
				__LIB_0__::func_11(cParam0);
				__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
			}
		}
		else
		{
			if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 64))
			{
				__LIB_10__::func_400(cParam0);
			}
			if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 32))
			{
				__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
			}
		}
	}
	else if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 32))
	{
		if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 64))
		{
			__LIB_10__::func_400(cParam0);
		}
		__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
	}
}

bool func_176(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_1__::func_293(0, iParam0, 2, 0);
	iVar2 = __LIB_0__::func_933(iVar0);
	if (iVar2 == -15)
	{
		iVar2 = __LIB_0__::func_23();
		__LIB_4__::func_710(&iVar2, 0, 10, 0, 0, 0, 0);
	}
	else
	{
		__LIB_1__::func_446(&iVar2, 0, 0, 20, 0, 0, 0, 0);
	}
	if (__LIB_18__::func_257(iParam0, &iVar1))
	{
		if (__LIB_1__::func_110(iVar1, iVar2, 1))
		{
			iVar2 = iVar1;
		}
	}
	if (__LIB_10__::func_708(&iVar1))
	{
		if (__LIB_1__::func_110(iVar1, iVar2, 1))
		{
			iVar2 = iVar1;
		}
	}
	if (__LIB_1__::func_426(iVar2, 1))
	{
		return true;
	}
	return false;
}

void func_177(int iParam0, int iParam1, int iParam2)
{
	__LIB_18__::func_418(iParam0, iParam2);
	if (__LIB_5__::func_353(iParam0))
	{
		__LIB_1__::func_722(Global_1347702[iParam0 /*49*/].f_15);
	}
	if (iParam1 == 1)
	{
		if (__LIB_1__::func_44(Global_1347702[iParam0 /*49*/].f_15))
		{
			__LIB_1__::func_559(Global_1347702[iParam0 /*49*/].f_15, 0, 2);
		}
	}
}

void func_178(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	if (bParam1 && STREAMING::_0xCF45DF50C7775F2A())
	{
		return;
	}
	Var2 = 9;
	Var2.f_1 = 12;
	Var2.f_1.f_13 = 12;
	Var2.f_1.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2[5 /*13*/][0] = __LIB_1__::func_976();
	Var2[5 /*13*/][1] = __LIB_1__::func_976();
	Var2[5 /*13*/][2] = __LIB_1__::func_976();
	Var2[5 /*13*/][3] = __LIB_1__::func_976();
	Var2[5 /*13*/][4] = __LIB_1__::func_976();
	Var2[5 /*13*/][5] = __LIB_1__::func_976();
	Var2[5 /*13*/][6] = __LIB_1__::func_976();
	Var2[5 /*13*/][7] = __LIB_1__::func_976();
	Var2[5 /*13*/][8] = __LIB_1__::func_976();
	Var2[5 /*13*/][9] = __LIB_1__::func_976();
	Var2[5 /*13*/][10] = __LIB_1__::func_976();
	Var2[5 /*13*/][11] = __LIB_1__::func_976();
	if (__LIB_1__::func_44(Global_1835011[59 /*74*/].f_1))
	{
		Var2[6 /*13*/][0] = __LIB_1__::func_976();
	}
	else
	{
		Var2[6 /*13*/][0] = -828094297;
	}
	Var2[6 /*13*/][1] = 1561231200;
	Var2[6 /*13*/][2] = -407402757;
	Var2[6 /*13*/][3] = -1849681615;
	Var2[6 /*13*/][4] = -981684452;
	Var2[6 /*13*/][5] = 1547347496;
	Var2[6 /*13*/][6] = -1966238128;
	if ((__LIB_0__::func_702(Global_1835011[58 /*74*/].f_1) || __LIB_1__::func_44(Global_1835011[58 /*74*/].f_1)) || __LIB_1__::func_25(Global_1835011[58 /*74*/].f_1, 1))
	{
		Var2[6 /*13*/][7] = __LIB_1__::func_976();
		if (STREAMING::_IS_IMAP_ACTIVE(-1437554707))
		{
			STREAMING::_REMOVE_IMAP(-1437554707);
		}
	}
	else
	{
		Var2[6 /*13*/][7] = -1437554707;
	}
	if (__LIB_1__::func_44(Global_1835011[58 /*74*/].f_1) || __LIB_0__::func_702(Global_1835011[58 /*74*/].f_1))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-1310355638))
		{
			STREAMING::_REMOVE_IMAP(-1310355638);
		}
		Var2[6 /*13*/][8] = 1387226336;
	}
	else
	{
		if (STREAMING::_IS_IMAP_ACTIVE(1387226336))
		{
			STREAMING::_REMOVE_IMAP(1387226336);
		}
		Var2[6 /*13*/][8] = -1310355638;
	}
	Var2[6 /*13*/][9] = -149795084;
	Var2[6 /*13*/][10] = -419935200;
	Var2[6 /*13*/][11] = -1496155572;
	Var2[0 /*13*/][0] = joaat("COL_01_CHIMNEY_SMOKE_EFFECT");
	Var2[0 /*13*/][1] = joaat("COL_02_CHIMNEY_SMOKE_EFFECT");
	Var2[0 /*13*/][2] = __LIB_1__::func_976();
	Var2[0 /*13*/][3] = __LIB_1__::func_976();
	Var2[0 /*13*/][4] = __LIB_1__::func_976();
	Var2[0 /*13*/][5] = __LIB_1__::func_976();
	Var2[0 /*13*/][6] = __LIB_1__::func_976();
	Var2[0 /*13*/][7] = __LIB_1__::func_976();
	Var2[0 /*13*/][8] = __LIB_1__::func_976();
	Var2[0 /*13*/][9] = __LIB_1__::func_976();
	Var2[0 /*13*/][10] = __LIB_1__::func_976();
	Var2[0 /*13*/][11] = __LIB_1__::func_976();
	Var2[2 /*13*/][0] = 1706275010;
	Var2[2 /*13*/][1] = joaat("DEWCLM_NORMAL_SEATS");
	Var2[2 /*13*/][2] = 1734859244;
	Var2[2 /*13*/][3] = 1309652195;
	Var2[2 /*13*/][4] = -1291679096;
	Var2[2 /*13*/][5] = 1676971154;
	Var2[2 /*13*/][6] = __LIB_6__::func_369();
	Var2[2 /*13*/][7] = -1841279810;
	Var2[2 /*13*/][8] = __LIB_6__::func_145();
	Var2[2 /*13*/][9] = __LIB_6__::func_146();
	Var2[2 /*13*/][10] = __LIB_6__::func_513();
	Var2[2 /*13*/][11] = __LIB_6__::func_514();
	Var2[4 /*13*/][0] = __LIB_1__::func_976();
	Var2[4 /*13*/][1] = __LIB_1__::func_976();
	Var2[4 /*13*/][2] = __LIB_1__::func_976();
	Var2[4 /*13*/][3] = __LIB_1__::func_976();
	Var2[4 /*13*/][4] = __LIB_1__::func_976();
	Var2[4 /*13*/][5] = __LIB_1__::func_976();
	Var2[4 /*13*/][6] = __LIB_1__::func_976();
	Var2[4 /*13*/][7] = __LIB_1__::func_976();
	Var2[4 /*13*/][8] = __LIB_1__::func_976();
	Var2[4 /*13*/][9] = __LIB_1__::func_976();
	Var2[4 /*13*/][10] = __LIB_1__::func_976();
	Var2[4 /*13*/][11] = __LIB_1__::func_976();
	Var2[1 /*13*/][0] = 288413571;
	Var2[1 /*13*/][1] = -441619793;
	Var2[1 /*13*/][2] = joaat("HSO_NORMAL_SEATS");
	Var2[1 /*13*/][3] = __LIB_6__::func_147();
	Var2[1 /*13*/][4] = -80564929;
	Var2[1 /*13*/][5] = -676881895;
	Var2[1 /*13*/][6] = -1445186253;
	Var2[1 /*13*/][7] = -1893724593;
	Var2[1 /*13*/][8] = __LIB_6__::func_515();
	Var2[1 /*13*/][9] = __LIB_6__::func_516();
	Var2[1 /*13*/][10] = __LIB_1__::func_976();
	Var2[1 /*13*/][11] = __LIB_1__::func_976();
	Var2[3 /*13*/][0] = 923572416;
	Var2[3 /*13*/][1] = joaat("SHB_NORMAL_SEATS");
	Var2[3 /*13*/][2] = -1828030290;
	Var2[3 /*13*/][3] = -960337247;
	Var2[3 /*13*/][4] = -299265919;
	Var2[3 /*13*/][5] = __LIB_1__::func_976();
	Var2[3 /*13*/][6] = __LIB_1__::func_976();
	Var2[3 /*13*/][7] = __LIB_1__::func_976();
	Var2[3 /*13*/][8] = __LIB_1__::func_976();
	Var2[3 /*13*/][9] = __LIB_1__::func_976();
	Var2[3 /*13*/][10] = __LIB_1__::func_976();
	Var2[3 /*13*/][11] = __LIB_1__::func_976();
	Var2[7 /*13*/][0] = __LIB_6__::func_97();
	Var2[7 /*13*/][1] = 764025611;
	Var2[7 /*13*/][2] = __LIB_1__::func_976();
	Var2[7 /*13*/][3] = __LIB_1__::func_976();
	Var2[7 /*13*/][4] = __LIB_1__::func_976();
	Var2[7 /*13*/][5] = __LIB_1__::func_976();
	Var2[7 /*13*/][6] = __LIB_1__::func_976();
	Var2[7 /*13*/][7] = __LIB_1__::func_976();
	Var2[7 /*13*/][8] = __LIB_1__::func_976();
	Var2[7 /*13*/][9] = __LIB_1__::func_976();
	Var2[7 /*13*/][10] = __LIB_1__::func_976();
	Var2[7 /*13*/][11] = __LIB_1__::func_976();
	Var2[8 /*13*/][0] = __LIB_1__::func_976();
	Var2[8 /*13*/][1] = __LIB_1__::func_976();
	Var2[8 /*13*/][2] = __LIB_1__::func_976();
	Var2[8 /*13*/][3] = __LIB_1__::func_976();
	Var2[8 /*13*/][4] = __LIB_1__::func_976();
	Var2[8 /*13*/][5] = __LIB_1__::func_976();
	Var2[8 /*13*/][6] = __LIB_1__::func_976();
	Var2[8 /*13*/][7] = __LIB_1__::func_976();
	Var2[8 /*13*/][8] = __LIB_1__::func_976();
	Var2[8 /*13*/][9] = __LIB_1__::func_976();
	Var2[8 /*13*/][10] = __LIB_1__::func_976();
	Var2[8 /*13*/][11] = __LIB_1__::func_976();
	if (iParam0 != 0)
	{
		__LIB_1__::func_408(-1170496998, 0, 0);
	}
	if (iParam0 == 7)
	{
		if (!__LIB_5__::func_886(2))
		{
			if (__LIB_0__::func_273(13, 4, 1))
			{
				__LIB_4__::func_524(128);
				__LIB_4__::func_495(126);
			}
			else
			{
				__LIB_4__::func_524(126);
				__LIB_4__::func_495(128);
			}
		}
		__LIB_4__::func_495(129);
	}
	else
	{
		__LIB_4__::func_524(127);
		__LIB_4__::func_524(126);
		__LIB_4__::func_524(128);
		__LIB_4__::func_524(129);
	}
	if (__LIB_1__::func_185(44))
	{
		__LIB_4__::func_495(28);
		__LIB_4__::func_524(27);
	}
	else
	{
		__LIB_4__::func_495(27);
		__LIB_4__::func_524(28);
	}
	__LIB_18__::func_614(1, bParam1);
	if (iParam0 == 3)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(809554858))
		{
			STREAMING::_REMOVE_IMAP(809554858);
		}
		__LIB_4__::func_495(2);
		__LIB_4__::func_495(7);
		__LIB_4__::func_495(8);
		__LIB_4__::func_524(1);
	}
	else
	{
		__LIB_4__::func_524(2);
		__LIB_4__::func_524(7);
		__LIB_4__::func_524(8);
	}
	if (iParam0 == 3 && __LIB_1__::func_707(joaat("DOCUMENT_BOOK_HUNTING"), 1, 0) == 0)
	{
		__LIB_4__::func_495(10);
	}
	else
	{
		__LIB_4__::func_524(10);
	}
	if (iParam0 == 3 && __LIB_1__::func_707(joaat("DOCUMENT_BOOK_FORAGING"), 1, 0) == 0)
	{
		__LIB_4__::func_495(9);
	}
	else
	{
		__LIB_4__::func_524(9);
	}
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 4) || iParam0 == 7) || iParam0 == 8)
	{
		if (__LIB_1__::func_25(Global_1347702[83 /*49*/].f_15, 1))
		{
			__LIB_4__::func_495(4);
		}
	}
	else
	{
		__LIB_4__::func_524(4);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Var2[iVar0 /*13*/][iVar1] != __LIB_1__::func_976())
			{
				if (iParam0 == iVar0 && __LIB_0__::func_592() == 1)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var2[iVar0 /*13*/][iVar1]))
					{
						STREAMING::_REQUEST_IMAP(Var2[iVar0 /*13*/][iVar1]);
					}
				}
				else if (STREAMING::_IS_IMAP_ACTIVE(Var2[iVar0 /*13*/][iVar1]))
				{
					STREAMING::_REMOVE_IMAP(Var2[iVar0 /*13*/][iVar1]);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_179()
{
	var uVar0;
	var uVar6;
	__LIB_0__::func_696(&(Global_1946804.f_1378), -1);
	__LIB_0__::func_693();
	__LIB_1__::func_835(7);
	uVar0 = 5;
	__LIB_0__::func_921(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	if (!__LIB_18__::func_269(&uVar0))
	{
		__LIB_18__::func_270(&uVar0);
		__LIB_0__::func_719(0, 1);
	}
	if (!__LIB_12__::func_64(&uVar6, &(Global_26796.f_627.f_1.f_1)))
	{
		__LIB_12__::func_89(&(Global_26796.f_627.f_1.f_1), 1);
	}
}

void func_180()
{
	int iVar0;
	struct<2> Var1;
	vector3 vVar3;
	struct<2> Var6;
	__LIB_18__::func_503();
	Global_1946804 = 0;
	__LIB_10__::func_758();
	Global_1946804.f_2535.f_2 = 0;
	Global_1946804.f_2535.f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1946804.f_2535.f_43[iVar0 /*2*/] = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946804.f_2535.f_3[iVar0] = 0;
		vVar3.x = Global_1946804.f_57[iVar0 /*11*/];
		Global_1946804.f_1497.f_1[iVar0 /*3*/] = { vVar3 };
		Global_1946804.f_1378.f_1[iVar0 /*3*/] = { vVar3 };
		Global_1946804.f_2456[iVar0 /*2*/] = { Var6 };
		Global_1946804.f_2377[iVar0 /*2*/] = 0;
		Global_1946804.f_2377[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
	Global_1946804.f_2589.f_1 = 0;
	Global_1946804.f_2589 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_1946804.f_2589.f_2[iVar0 /*2*/] = 39;
		iVar0++;
	}
	Global_1946804.f_2792 = 1;
	Global_1946804.f_2793 = 0;
}

void func_181(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if ((Global_36616 && __LIB_0__::func_347(iParam1)) != 0)
	{
		return;
	}
	iVar0 = __LIB_0__::func_348(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		__LIB_18__::func_273(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			__LIB_0__::func_349(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			__LIB_18__::func_273(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_182(char[4] cParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_9__::func_40(cParam0);
	if (__LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) <= 3)
	{
		iVar0 = __LIB_6__::func_864(cParam0);
	}
	Var1 = { __LIB_8__::func_688(cParam0, iVar0) };
	if (__LIB_18__::func_297(&(cParam0->f_10792), Var1, __LIB_0__::func_81(&(cParam0->f_10792)), 0))
	{
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 262144);
		if (__LIB_4__::func_562(&(cParam0->f_10792), 524288))
		{
			__LIB_8__::func_665(cParam0, 67108864);
			__LIB_4__::func_563(&(cParam0->f_10792), 524288);
		}
		__LIB_5__::func_344(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

void func_183(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_18__::func_388(&(uParam0->f_861), uParam0->f_872);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_5__::func_85(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_5__::func_67(uParam0);
	__LIB_4__::func_622(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_4__::func_977(uParam0, 4);
	__LIB_5__::func_69(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_4__::func_570(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_804))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_804);
	}
	__LIB_4__::func_716(!__LIB_0__::func_1(uParam0->f_861, 128));
	if (!__LIB_0__::func_1(uParam0->f_861, 128))
	{
		__LIB_1__::func_625();
	}
}

void func_184(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	if (__LIB_0__::func_78(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2284)
		{
			if (uParam0->f_865[iVar0 /*18*/].f_7)
			{
				__LIB_18__::func_412(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_865[iVar0 /*18*/].f_6)
			{
				bVar1 = __LIB_5__::func_80(uParam0, iVar0);
				if (bVar1)
				{
					__LIB_18__::func_413(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!__LIB_4__::func_575(uParam0, uParam0->f_2074))
		{
			__LIB_18__::func_331(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_2081;
	while (iVar0 <= (uParam0->f_2284 - 1))
	{
		if (uParam0->f_865[iVar0 /*18*/].f_7)
		{
			__LIB_18__::func_412(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_865[iVar0 /*18*/].f_6)
		{
			bVar1 = __LIB_5__::func_80(uParam0, iVar0);
			if (bVar1)
			{
				__LIB_18__::func_413(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_2081 = iVar0 + 1;
					}
					else
					{
						uParam0->f_2081 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_185(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_525())
	{
		__LIB_18__::func_334(uParam0, iVar0);
		iVar0++;
	}
}

void func_186(char[4] cParam0)
{
	if (!__LIB_4__::func_505(&(cParam0->f_8269)))
	{
		return;
	}
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 268435456))
	{
		return;
	}
	__LIB_18__::func_343(cParam0);
}

bool func_187(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	if (__LIB_18__::func_355(uParam0, uParam1))
	{
		return true;
	}
	if (!__LIB_3__::func_761(uParam0, 1048576))
	{
		if (uParam0->f_82)
		{
			iVar0 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
			iVar1 = (iVar0 - uParam1->f_5);
			fVar2 = __LIB_3__::func_837(uParam0, 0);
			if (IntToFloat(iVar1) >= (fVar2 * 1000f))
			{
				return true;
			}
			if (__LIB_0__::func_239(uParam1, 1048576))
			{
				iVar3 = (iVar0 - uParam1->f_6);
				fVar4 = __LIB_3__::func_837(uParam0, 1);
				if (IntToFloat(iVar3) >= (fVar4 * 1000f))
				{
					return true;
				}
			}
			if (__LIB_0__::func_239(uParam1, 16))
			{
				iVar5 = (iVar0 - uParam1->f_7);
				fVar6 = __LIB_3__::func_837(uParam0, 2);
				if (IntToFloat(iVar5) >= (fVar6 * 1000f))
				{
					return true;
				}
			}
		}
		else
		{
			if (__LIB_3__::func_514(&(uParam1->f_35), __LIB_3__::func_837(uParam0, 0)))
			{
				return true;
			}
			if (__LIB_3__::func_514(&(uParam1->f_38), __LIB_3__::func_837(uParam0, 1)))
			{
				return true;
			}
			if (__LIB_3__::func_514(&(uParam1->f_41), __LIB_3__::func_837(uParam0, 2)))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_188(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	fVar0 = __LIB_18__::func_740(uParam0, uParam1, iParam2);
	fVar1 = BUILTIN::VMAG(uParam0->f_613 - uParam0->f_616);
	if ((fVar0 >= uParam0->f_656 && !__LIB_13__::func_969(uParam0)) && fVar1 != 0f)
	{
		return true;
	}
	return false;
}

bool func_189(var uParam0, vector3 vParam1, int iParam4, vector3 vParam5, vector3 vParam8, vector3 vParam11, int iParam14, int iParam15, int iParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	float fVar13;
	int iVar14;
	char* sVar15;
	if (!STREAMING::HAS_MODEL_LOADED(iParam14))
	{
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_652))
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_652))
		{
			return false;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_447) && VOLUME::_DOES_VOLUME_EXIST(iParam16))
	{
		uParam0->f_447 = iParam16;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_663 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			iVar1++;
		}
		if (iVar1 >= uParam0->f_663)
		{
			return true;
		}
		iVar0++;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_444))
	{
		uParam0->f_444 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(iParam15, vParam5, vParam8, vParam11, "HERDING GOAL");
	}
	uParam0->f_663 = iParam4;
	uParam0->f_613 = { 0f, 0f, 0f };
	if (!FLOCK::_0x8D913E493BAFE0A3(*uParam0))
	{
		*uParam0 = FLOCK::_CREATE_HERD();
	}
	uParam0->f_189 = 0;
	if (uParam0->f_188 != iParam14)
	{
		uParam0->f_188 = iParam14;
	}
	__LIB_18__::func_733(uParam0, uParam0->f_188);
	vVar2 = { vParam1 };
	switch (iParam14)
	{
		case joaat("A_C_COW"):
			fVar5 = 2f;
			fVar6 = 3f;
			break;
		case joaat("A_C_GOAT_01"):
		case joaat("A_C_SHEEP_01"):
			fVar5 = (2f / 3.5f);
			fVar6 = (3f / 3.5f);
			break;
		default:
			fVar5 = 2f;
			fVar6 = 3f;
			break;
	}
	fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar5, fVar6);
	iVar8 = BUILTIN::CEIL(BUILTIN::SQRT(BUILTIN::TO_FLOAT(iParam4)));
	vVar2.x = (vVar2.x - ((IntToFloat(iVar8) * fVar7) / 2f));
	vVar2.f_1 = (vVar2.y - ((IntToFloat((uParam0->f_663 / iVar8)) * fVar7) / 2f));
	vVar10 = { vVar2 };
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_663 - 1))
	{
		if (iVar9 >= iVar8)
		{
			iVar9 = 0;
			vVar10.x = vVar2.x;
			fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar5, fVar6);
			vVar10.f_1 = (vVar10.y + fVar7);
		}
		fVar13 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		if (STREAMING::IS_MODEL_VALID(iParam14) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			if (iParam14 == joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"))
			{
				if (iVar0 == 0)
				{
					iParam14 = joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
					STREAMING::REQUEST_MODEL(iParam14, false);
					if (STREAMING::HAS_MODEL_LOADED(iParam14))
					{
						uParam0->f_2[iVar0] = __LIB_1__::func_545(iParam14, vVar10, fVar13, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0]))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam14);
						}
					}
				}
				else if (iVar0 == 1)
				{
					iParam14 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN");
					STREAMING::REQUEST_MODEL(iParam14, false);
					if (STREAMING::HAS_MODEL_LOADED(iParam14))
					{
						uParam0->f_2[iVar0] = __LIB_1__::func_545(iParam14, vVar10, fVar13, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0]))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam14);
						}
					}
				}
				else if (iVar0 == 2)
				{
					iParam14 = joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY");
					STREAMING::REQUEST_MODEL(iParam14, false);
					if (STREAMING::HAS_MODEL_LOADED(iParam14))
					{
						uParam0->f_2[iVar0] = __LIB_1__::func_545(iParam14, vVar10, fVar13, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0]))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam14);
						}
					}
				}
				else if (iVar0 == 3)
				{
					iParam14 = joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
					STREAMING::REQUEST_MODEL(iParam14, false);
					if (STREAMING::HAS_MODEL_LOADED(iParam14))
					{
						uParam0->f_2[iVar0] = __LIB_1__::func_545(iParam14, vVar10, fVar13, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0]))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam14);
						}
					}
				}
				else
				{
					uParam0->f_2[iVar0] = __LIB_1__::func_545(iParam14, vVar10, fVar13, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				}
			}
			else
			{
				uParam0->f_2[iVar0] = __LIB_1__::func_545(iParam14, vVar10, fVar13, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0]))
			{
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_2[iVar0], false);
				POPULATION::_0xF74E134F40192884(uParam0->f_2[iVar0], 2);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_2[iVar0], 1);
				TASK::SET_PED_PATH_MAY_ENTER_WATER(uParam0->f_2[iVar0], true);
				TASK::_0x9DE63896B176EA94(uParam0->f_2[iVar0], 0);
				EVENT::_0xBB1E41DD3D3C6250(uParam0->f_2[iVar0], "SpGatheringAnimal", 0);
				if (iParam17 == 0)
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_2[iVar0], 6, true);
				}
				if (bParam20)
				{
					if (iParam14 == joaat("A_C_SHEEP_01"))
					{
						PED::APPLY_PED_DAMAGE_PACK(uParam0->f_2[iVar0], "PD_Sheep_Brand_1", 1f, 1f);
					}
					else if (iParam14 == joaat("A_C_COW"))
					{
						iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
						switch (iVar14)
						{
							case 0:
								sVar15 = "PD_Cow_Brand_1";
								break;
							case 1:
								sVar15 = "PD_Cow_Brand_2";
								break;
							case 2:
								sVar15 = "PD_Cow_Brand_3";
								break;
							case 3:
								sVar15 = "PD_Cow_Brand_4";
								break;
							default:
								sVar15 = "PD_Cow_Brand_1";
								break;
						}
						PED::APPLY_PED_DAMAGE_PACK(uParam0->f_2[iVar0], sVar15, 0f, 1f);
					}
				}
				if (__LIB_0__::func_125(uParam0->f_2[iVar0]))
				{
					FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_2[iVar0], 39, 80f);
				}
				__LIB_1__::func_338(uParam0->f_2[iVar0], ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar0], true, false));
				if (!bParam19)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_447))
					{
						TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iVar0], -1, uParam0->f_447, 1, 1);
					}
					else
					{
						TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iVar0], -1, 0, 1, 1);
					}
				}
				else
				{
					__LIB_1__::func_473(uParam0->f_2[iVar0], __LIB_11__::func_507(uParam0), 0, 0, 0, -1082130432 /* Float: -1f */);
				}
				PED::SET_PED_CONFIG_FLAG(uParam0->f_2[iVar0], 412, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_2[iVar0], 388, true);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_2[iVar0], 34, 0, 1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_2[iVar0], 35, 0, 1);
				if (!bParam21)
				{
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_2[iVar0], 30, 0, 1);
				}
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_2[iVar0], 27, 0, 1);
				uParam0->f_23[iVar0] = 3;
			}
			if (!bParam18)
			{
			}
			else
			{
				fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar5, fVar6);
				vVar10.x = (vVar10.x + fVar7);
				iVar9++;
				iVar0++;
			}
			if (FLOCK::_0x8D913E493BAFE0A3(*uParam0))
			{
				iVar0 = 0;
				while (iVar0 <= (uParam0->f_663 - 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
					{
						return false;
					}
					else
					{
						uParam0->f_23[iVar0] = 3;
					}
					iVar0++;
				}
				if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_444))
				{
					POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_444, 4320, 0, 0, -1, -1, 0);
					POPULATION::_0xB56D41A694E42E86(uParam0->f_444, 4320, 0, 0, -1, -1, 0);
				}
				uParam0->f_648 = { vVar2 };
				uParam0->f_651 = 15f;
				return true;
			}
			return false;
		}
	}
}

void func_190(int iParam0, int* iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	__LIB_3__::func_95(iParam1, *iParam0, iParam1->f_56, 0);
	fVar0 = __LIB_0__::func_514(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	__LIB_3__::func_27(iParam1, fParam3);
	__LIB_18__::func_379(iParam0, iParam1, uParam2, fVar0);
	__LIB_11__::func_614(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		__LIB_11__::func_414(iParam1, uParam2, iParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = __LIB_6__::func_789(iParam1, iParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				__LIB_11__::func_611(iParam1);
			}
		}
	}
}

bool func_191(var uParam0, int iParam1, char[4] cParam2, int iParam3, int iParam4, float fParam5, float fParam6, int iParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	Var0 = { __LIB_6__::func_907(iParam1) };
	Var8 = { __LIB_0__::func_865(iParam1) };
	return __LIB_18__::func_384(uParam0, __LIB_0__::func_271(iParam1), &Var0, &Var8, cParam2, iParam3, iParam4, fParam5, fParam6, iParam7, 1);
}

void func_192(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 33, 2, 0);
	bVar0 = __LIB_6__::func_880(cParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bVar0) || PED::IS_PED_INJURED(bVar0))
	{
	}
	iVar1 = __LIB_11__::func_245(bVar0);
	iVar2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	bVar3 = false;
	if (SCRIPTS::IS_THREAD_ACTIVE(iVar2, false) && __LIB_0__::func_825(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			__LIB_18__::func_153(7);
		}
		else
		{
			__LIB_18__::func_323(bVar0, 0);
		}
		__LIB_6__::func_881(cParam0, 16);
		PED::SET_PED_CONFIG_FLAG(bVar0, 219, false);
	}
}

bool func_193(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = __LIB_0__::func_421(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (__LIB_1__::func_707(iVar2, 1, 0) || __LIB_0__::func_530(__LIB_0__::func_529(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_426(__LIB_0__::func_421(iVar0))), __LIB_0__::func_426(__LIB_0__::func_421(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = __LIB_0__::func_942() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_531(iVar0)), __LIB_0__::func_531(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = __LIB_0__::func_965() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_531(iVar0)), __LIB_0__::func_531(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_531(iVar0)), __LIB_0__::func_531(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = __LIB_1__::func_35(iParam3, __LIB_0__::func_532(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (__LIB_1__::func_764(iVar2) - iParam7) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
				}
				else
				{
					bVar1 = __LIB_1__::func_764(iVar2) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (__LIB_1__::func_764(iVar2) + iParam7) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
			}
			else
			{
				bVar1 = __LIB_1__::func_764(iVar2) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_534(iVar2)), __LIB_0__::func_534(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (__LIB_0__::func_314(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_535(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), __LIB_0__::func_535(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = __LIB_0__::func_438() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_536(iVar0)), __LIB_0__::func_536(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = __LIB_0__::func_528() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_536(iVar0)), __LIB_0__::func_536(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_536(iVar0)), __LIB_0__::func_536(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = __LIB_1__::func_35(iParam3, __LIB_0__::func_532(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (__LIB_1__::func_764(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = __LIB_18__::func_390(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = __LIB_18__::func_390(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_1__::func_72(iVar2)), __LIB_1__::func_72(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_194(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (__LIB_18__::func_390(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_18__::func_390(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (__LIB_18__::func_390(iVar0))
		{
			*sParam2++;
		}
		if (__LIB_18__::func_390(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (__LIB_18__::func_390(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_18__::func_390(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (__LIB_18__::func_390(iVar0))
		{
			*sParam2++;
		}
		if (__LIB_18__::func_390(iVar1))
		{
			*sParam2++;
		}
		if (__LIB_18__::func_390(iVar0) && __LIB_18__::func_390(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (__LIB_18__::func_390(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_18__::func_390(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (__LIB_18__::func_390(iVar0))
		{
			*sParam2++;
		}
		if (__LIB_18__::func_390(iVar1))
		{
			*sParam2++;
		}
		if (__LIB_18__::func_390(iVar2))
		{
			*sParam2++;
		}
		if ((__LIB_18__::func_390(iVar0) && __LIB_18__::func_390(iVar1)) && __LIB_18__::func_390(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (__LIB_18__::func_390(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_18__::func_390(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (__LIB_18__::func_390(iVar0))
		{
			*sParam2++;
		}
		if (__LIB_18__::func_390(iVar1))
		{
			*sParam2++;
		}
		if (__LIB_18__::func_390(iVar2))
		{
			*sParam2++;
		}
		if (__LIB_18__::func_390(iVar3))
		{
			*sParam2++;
		}
		if (((__LIB_18__::func_390(iVar0) && __LIB_18__::func_390(iVar1)) && __LIB_18__::func_390(iVar2)) && __LIB_18__::func_390(iVar3))
		{
			return true;
		}
	}
	return false;
}

bool func_195(char[4] cParam0, char[4] cParam1)
{
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 256))
	{
		if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 65536))
		{
			if (__LIB_0__::func_116(cParam1))
			{
				__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 131072);
			}
			__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 65536);
		}
		if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 131072))
		{
			if (!__LIB_4__::func_562(&(cParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				__LIB_5__::func_585(&(cParam0->f_7375), &(cParam0->f_10792));
				__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 256);
			}
		}
		else
		{
			__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 256);
		}
	}
	return __LIB_18__::func_392(&(cParam0->f_7375), cParam1, (__LIB_6__::func_862(cParam0, 33554432) || (CAM::IS_SCREEN_FADED_OUT() && !__LIB_6__::func_862(cParam0, 1073741824 /* Float: 2f */))), 1);
}

int func_196(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
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
		__LIB_18__::func_393(iVar0, iParam0, __LIB_0__::func_846(iParam1), 1, 0, 1);
	}
	__LIB_0__::func_660(iParam0);
	return 1;
}

int func_197(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (__LIB_18__::func_399(uParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_0__::func_31(uParam1->f_10))
	{
		PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1), 53, true);
	}
	__LIB_5__::func_339(uParam1);
	__LIB_5__::func_311(uParam1);
	if (!bParam2)
	{
		__LIB_18__::func_400(uParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case joaat("EVENT_ENTITY_EXPLOSION"):
				__LIB_18__::func_335(uParam0, uParam1, iVar0);
				break;
			case joaat("EVENT_ENTITY_DAMAGED"):
			case 2145012826:
				__LIB_18__::func_336(uParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	__LIB_18__::func_401(uParam0, uParam1);
	__LIB_5__::func_75(uParam1);
	return 0;
}

bool func_198(var uParam0, int iParam1, var uParam2, var uParam3, char* sParam4, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, bool bParam10)
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam1) && iParam9 == joaat("BLIP_STYLE_COMPANION"))
	{
		iParam9 = 408396114;
	}
	bVar0 = __LIB_18__::func_402(uParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), uParam2, uParam3, 1, sParam4, iParam5, fParam7, fParam8);
	if (__LIB_4__::func_938(uParam0) != 1 && __LIB_4__::func_937(uParam0, 64))
	{
		if (bParam10)
		{
			__LIB_10__::func_936(uParam0, iParam1, iParam9, bVar0, iParam6);
		}
		__LIB_4__::func_969(uParam0, 64);
	}
	return bVar0;
}

void func_199(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (Global_40.f_450[iVar0] == iParam0)
		{
			__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 2);
			VOLUME::_0x748C5F51A18CB8F0(0);
			__LIB_18__::func_406(iParam0, 1, 1, iParam1, 32);
			VOLUME::_0x748C5F51A18CB8F0(1);
			iVar1 = (Global_40.f_1094 - 1);
			if (iVar0 < iVar1)
			{
				if (__LIB_0__::func_5(Global_40.f_450[iVar1]))
				{
					Global_40.f_450[iVar0] = Global_40.f_450[iVar1];
					Global_40.f_450[iVar1] = -1;
				}
			}
			else
			{
				Global_40.f_450[iVar0] = -1;
			}
			Global_40.f_1094 = (Global_40.f_1094 - 1);
			return;
		}
		iVar0++;
	}
}

void func_200(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!__LIB_4__::func_562(uParam0, 65536))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231.f_4)
	{
		return;
	}
	if (!__LIB_4__::func_562(uParam0, 4096) && uParam0->f_2286)
	{
		return;
	}
	if (!__LIB_4__::func_562(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	__LIB_9__::func_54(uParam0);
	__LIB_5__::func_354(uParam0, uParam0->f_2287, uParam0->f_2289);
	__LIB_5__::func_77(uParam0);
	if (uParam0->f_2290 && !uParam0->f_2289)
	{
		if (((((uParam0->f_2285 >= 0 && uParam0->f_1406[uParam0->f_2285 /*41*/].f_17 > 0f) && uParam0->f_2078 >= 0) && !__LIB_0__::func_266(Global_35, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, (uParam0->f_1406[uParam0->f_2285 /*41*/].f_17 + 5f), 1, 1)) && !__LIB_4__::func_562(uParam0, 33554432)) && !__LIB_4__::func_562(uParam0, 4))
		{
			__LIB_18__::func_411(uParam0, uParam0->f_2287);
			return;
		}
	}
	if (!__LIB_4__::func_562(uParam0, 4))
	{
		if (__LIB_5__::func_78(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_2074 = uParam0->f_2078;
				__LIB_4__::func_532(uParam0, 8);
				return;
			}
		}
		else
		{
			__LIB_18__::func_411(uParam0, uParam0->f_2287);
		}
		if (uParam0->f_1406[uParam0->f_2080 /*41*/].f_29)
		{
			fVar0 = __LIB_5__::func_594(uParam0, uParam0->f_2080);
			if (fVar0 < 0f || (uParam0->f_2287 && fVar0 < 1f))
			{
				uParam0->f_2078 = uParam0->f_2080;
				if (!bParam2)
				{
					uParam0->f_2074 = uParam0->f_2080;
					__LIB_4__::func_532(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_2079 == -1f || fVar0 <= uParam0->f_2079) || uParam0->f_2080 == uParam0->f_2078)
				{
					if (uParam0->f_2080 != uParam0->f_2078)
					{
					}
					uParam0->f_2078 = uParam0->f_2080;
					uParam0->f_2079 = fVar0;
					__LIB_4__::func_532(uParam0, 16);
					if (((!__LIB_4__::func_562(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, true) < (uParam0->f_1406[uParam0->f_2078 /*41*/].f_11 + 5f))
					{
						__LIB_5__::func_355(uParam0);
						__LIB_4__::func_532(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_2078 == uParam0->f_2080)
			{
				__LIB_4__::func_563(uParam0, 16);
			}
		}
		if (uParam0->f_2080 + 1 >= 8)
		{
			uParam0->f_2080 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_2080 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_1406[iVar2 /*41*/].f_29)
				{
					uParam0->f_2080 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_2080 = 0;
			}
		}
		if (uParam0->f_2078 < 0)
		{
			return;
		}
		if (__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 2) && uParam0->f_2287)
		{
			return;
		}
	}
	if (__LIB_4__::func_562(uParam0, 16))
	{
		fVar4 = __LIB_0__::func_94(Global_35, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, 1);
		if (uParam0->f_2287 && fVar4 <= (uParam0->f_1406[uParam0->f_2078 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		fVar5 = __LIB_0__::func_152(Global_36, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_1406[uParam0->f_2078 /*41*/].f_17 || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_2265, uParam0->f_2269))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_1406[uParam0->f_2078 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_1406[uParam0->f_2078 /*41*/].f_1.f_2 + uParam0->f_1406[uParam0->f_2078 /*41*/].f_10))
			{
				__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, fVar6);
			}
			if ((uParam0->f_2289 && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_2265, uParam0->f_2269)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_2291) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2291) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_2291))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_2291, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2291) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_2291))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_2291);
			}
		}
		else if ((uParam0->f_2287 && fVar4 <= (uParam0->f_1406[uParam0->f_2078 /*41*/].f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_2288))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_2288, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		}
	}
	if (((uParam0->f_2287 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_2288) > 1.25f) || __LIB_4__::func_562(uParam0, 4))
	{
		if (((VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_2265, uParam0->f_2269) && __LIB_5__::func_594(uParam0, uParam0->f_2078) < 10000f) && __LIB_4__::func_562(uParam0, 16)) || __LIB_4__::func_562(uParam0, 4))
		{
			if (!__LIB_4__::func_562(uParam0, 4))
			{
				__LIB_4__::func_532(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!__LIB_4__::func_575(uParam0, uParam0->f_2078))
			{
				iVar7 |= 2048;
			}
			if (__LIB_5__::func_79(Global_35, &(uParam0->f_2076), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_1406[uParam0->f_2078 /*41*/].f_7, uParam0->f_1406[uParam0->f_2078 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_2076 = 0;
				__LIB_4__::func_563(uParam0, 4);
			}
		}
	}
	else if (__LIB_4__::func_562(uParam0, 4))
	{
		__LIB_4__::func_563(uParam0, 4);
	}
}

void func_201(var uParam0)
{
	__LIB_18__::func_414(uParam0);
}

int func_202(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar4 = __LIB_0__::func_2() == -1;
	if (bVar4)
	{
		bVar3 = bParam1;
	}
	else
	{
		bVar3 = __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1);
	}
	if (!__LIB_0__::func_27(Global_1898439, 1024))
	{
		__LIB_10__::func_846();
		__LIB_1__::func_581(&Global_1898439, 1024);
		if (bParam3)
		{
			return 0;
		}
	}
	iVar2 = (Global_1898329 - 1);
	while (iVar2 >= 0)
	{
		if (__LIB_0__::func_6(Global_1898330[iVar2]) && __LIB_0__::func_702(Global_1898330[iVar2]))
		{
			if (Global_1898330[iVar2] == Global_1392581.f_1)
			{
				Jump @578; //curOff = 140
			}
			else if (!__LIB_3__::func_919(iVar2, 1024))
			{
				__LIB_1__::func_130(iVar2, 0);
				switch (Global_1898346[iVar2 /*6*/].f_3)
				{
					case 1:
						if (!Global_1835011[iVar0 /*74*/].f_71)
						{
							iVar0 = Global_1898346[iVar2 /*6*/].f_4;
							if (__LIB_0__::func_83(iVar0))
							{
								if (!bParam1)
								{
									__LIB_9__::func_983(iVar0, 0);
								}
								__LIB_12__::func_95(iVar0, -1, bVar3, 1, 1, 0, 0);
								__LIB_10__::func_621(iVar0);
								if (bVar3 && !__LIB_3__::func_740(&(Global_1835011[iVar0 /*74*/]), 32768))
								{
									__LIB_5__::func_450(&(Global_1835011[iVar0 /*74*/]), 32768);
									if ((iVar0 == 7 || iVar0 == 17) && Global_1894899.f_2 == Global_1835011[iVar0 /*74*/].f_21)
									{
										Global_1835011[iVar0 /*74*/].f_64 = __LIB_0__::func_23();
									}
								}
								if (bParam3)
								{
									return 0;
								}
							}
						}
						break;
					case 6:
						iVar5 = Global_1898346[iVar2 /*6*/].f_4;
						if (iVar5 == 0 && __LIB_0__::func_2() == -1)
						{
							iVar6 = Global_1898346[iVar2 /*6*/].f_5;
							if (Global_1392626[iVar6 /*32*/].f_3 != __LIB_0__::func_298(0))
							{
								if (bVar3)
								{
									__LIB_10__::func_835(iVar6, 0, 0);
								}
								else
								{
									__LIB_10__::func_835(iVar6, 1, 0);
								}
								if (__LIB_0__::func_702(Global_1392626[iVar6 /*32*/].f_3))
								{
									__LIB_1__::func_722(Global_1392626[iVar6 /*32*/].f_3);
								}
								if (bParam3)
								{
									return 0;
								}
							}
						}
						break;
					case 2:
						if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
						{
							MAP::REMOVE_BLIP(&(Global_1898346[iVar2 /*6*/]));
						}
						break;
					default:
						if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
						{
							MAP::REMOVE_BLIP(&(Global_1898346[iVar2 /*6*/]));
						}
						break;
				}
			}
		}
		iVar2 = (iVar2 + -1);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(Global_1898439, 8192))
		{
			if (bVar3 && !Global_43891)
			{
				__LIB_13__::func_910(16384);
			}
			else
			{
				__LIB_10__::func_825();
			}
			__LIB_1__::func_581(&Global_1898439, 8192);
		}
		iVar7 = 0;
		while (iVar7 < Global_40.f_450)
		{
			iVar1 = Global_40.f_450[iVar7];
			if (__LIB_0__::func_5(iVar1) && Global_1347702[iVar1 /*49*/] != 45)
			{
				if (__LIB_0__::func_1(Global_1347702[iVar1 /*49*/].f_13, 256))
				{
				}
				else if (Global_1347702[iVar1 /*49*/].f_15 != __LIB_0__::func_298(0))
				{
					if (__LIB_0__::func_64(0) == 1 || __LIB_0__::func_64(0) == 8)
					{
						__LIB_18__::func_261(iVar1, 1, 0, 1, 32);
					}
					else
					{
						__LIB_12__::func_81(iVar1, 0);
					}
					if (__LIB_0__::func_702(Global_1347702[iVar1 /*49*/].f_15))
					{
						__LIB_1__::func_722(Global_1347702[iVar1 /*49*/].f_15);
					}
				}
				__LIB_0__::func_8(&(Global_1347702[iVar1 /*49*/].f_13), 2);
			}
			iVar7++;
		}
	}
	__LIB_10__::func_803();
	if (bParam2)
	{
		__LIB_18__::func_416();
	}
	__LIB_10__::func_714();
	__LIB_8__::func_996();
	return 1;
}

void func_203(int iParam0)
{
	PLAYER::_0x77E83C315A3B31CA(PLAYER::GET_PLAYER_INDEX());
	if (iParam0 == -1)
	{
		__LIB_18__::func_431();
		__LIB_12__::func_69();
		__LIB_18__::func_265();
		__LIB_10__::func_748();
		__LIB_18__::func_266();
		__LIB_11__::func_909();
		__LIB_18__::func_499();
		__LIB_12__::func_6();
		__LIB_11__::func_910();
		__LIB_0__::func_11();
		__LIB_11__::func_911();
		__LIB_11__::func_912(1);
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -944777689 /* GXTEntry: "Mr Linton" */);
	}
	__LIB_2__::func_459();
	__LIB_11__::func_913();
}

void func_204()
{
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	else
	{
		__LIB_18__::func_433();
		__LIB_18__::func_434();
	}
}

int func_205(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam1;
	if (!__LIB_1__::func_185(iVar0))
	{
		if ((!Global_1935630 & 2048 != 0 && !__LIB_0__::func_6(Global_1572864.f_8)) && !__LIB_0__::func_296(0, 1, 1))
		{
			if (__LIB_18__::func_435(iVar0, 0, 1, __LIB_0__::func_61()))
			{
			}
		}
	}
	else
	{
		if (__LIB_0__::func_2() == 0)
		{
		}
		return -2;
	}
	return -1;
}

int func_206(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam1;
	if (__LIB_0__::func_13(32768))
	{
		return -1;
	}
	if (!__LIB_1__::func_185(iVar0))
	{
		if (__LIB_0__::func_1(Global_1935630, 1048576))
		{
			return -1;
		}
		if (!__LIB_0__::func_1(Global_1935630, 2048) && !__LIB_0__::func_296(0, 1, 1))
		{
			if ((__LIB_0__::func_2() == -1 && __LIB_0__::func_28()) && __LIB_0__::func_65(&Global_0, 3))
			{
				return -1;
			}
			if (__LIB_18__::func_435(iVar0, __LIB_0__::func_28(), 0, -1))
			{
			}
		}
	}
	else
	{
		return -2;
	}
	return -1;
}

void func_207(int iParam0)
{
	int iVar0;
	float fVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = __LIB_0__::func_525(iParam0);
	fVar1 = __LIB_1__::func_181(iParam0);
	if ((Global_1347477.f_117 || !__LIB_0__::func_293(31)) || !__LIB_0__::func_962(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (__LIB_0__::func_963(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477.f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	__LIB_18__::func_474(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(6, __LIB_0__::func_526(iParam0), fVar1), "itemtype_textures", __LIB_0__::func_527(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_208()
{
	int iVar0;
	__LIB_18__::func_475();
	__LIB_11__::func_942();
	iVar0 = 0;
	while (iVar0 < Global_1879534.f_7300)
	{
		Global_1879534.f_46[iVar0] = 0;
		Global_1879534.f_79[iVar0] = 0;
		Global_1879534.f_112[iVar0] = -15;
		Global_1879534.f_145[iVar0] = 0;
		Global_1879534.f_178[iVar0] = 0;
		iVar0++;
	}
}

void func_209()
{
	__LIB_18__::func_476();
}

void func_210()
{
	__LIB_0__::func_267(1);
	__LIB_10__::func_768(0);
	__LIB_15__::func_103();
	__LIB_15__::func_108();
	__LIB_18__::func_500();
}

int func_211(int iParam0)
{
	if (!__LIB_11__::func_956(iParam0))
	{
		return -2;
	}
	__LIB_18__::func_480(iParam0);
	return -2;
}

int func_212(int iParam0)
{
	int iVar0;
	var uVar1;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	if (!__LIB_11__::func_956(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	__LIB_18__::func_481(iVar0, uVar1);
	return -2;
}

int func_213(int iParam0)
{
	int iVar0;
	var uVar1;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	if (!__LIB_11__::func_956(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	__LIB_18__::func_482(iVar0, uVar1);
	return -2;
}

int func_214(int iParam0)
{
	__LIB_18__::func_484(iParam0, 1);
	return -2;
}

int func_215(int iParam0)
{
	__LIB_18__::func_484(iParam0, 0);
	return -2;
}

int func_216(int iParam0)
{
	if (iParam0 != 0)
	{
		__LIB_12__::func_27(iParam0, 0);
	}
	else
	{
		__LIB_18__::func_486(0);
	}
	__LIB_18__::func_487(iParam0);
	return -2;
}

int func_217(int iParam0)
{
	bool bVar0;
	if (iParam0 > 0)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_18__::func_488(&(Global_40.f_7443), 1);
	}
	else
	{
		__LIB_12__::func_28(&(Global_40.f_7443), 0);
		__LIB_1__::func_775(Global_35, -1515874150 /* GXTEntry: "John\'s Off-Hand Holster" */, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
	}
	return -2;
}

int func_218(int iParam0)
{
	int iVar0;
	bool bVar1;
	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	bVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1 == true;
	if (!__LIB_0__::func_630(iVar0))
	{
		return -2;
	}
	__LIB_18__::func_501(iVar0, bVar1);
	return -2;
}

int func_219(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	bVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1 == true;
	bVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2 == true;
	if (!__LIB_0__::func_69(iVar0))
	{
		return -2;
	}
	__LIB_18__::func_489(iVar0, bVar1, bVar2);
	return -2;
}

int func_220()
{
	if (__LIB_18__::func_490(255))
	{
		return -1;
	}
	return -2;
}

int func_221(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_2() == 0)
	{
		if (!__LIB_16__::func_363())
		{
			return -1;
		}
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	iVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	iVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	iVar3 = Global_1879534.f_211[iParam0 /*4*/].f_3;
	if (iVar0 == -1)
	{
		MISC::SET_BIT(&iVar3, 0);
		MISC::SET_BIT(&iVar3, 1);
	}
	else
	{
		if (!MISC::IS_BIT_SET(iVar3, 0))
		{
			if (!Global_1935630 & 2048 != 0 && !__LIB_0__::func_296(0, 1, 1))
			{
				if (__LIB_18__::func_435(iVar0, 0, 0, -1))
				{
					MISC::SET_BIT(&iVar3, 0);
				}
			}
		}
		if (!MISC::IS_BIT_SET(iVar3, 1) && MISC::IS_BIT_SET(iVar3, 0))
		{
			if (__LIB_1__::func_185(iVar0))
			{
				MISC::SET_BIT(&iVar3, 1);
			}
		}
	}
	if (iVar1 == -1)
	{
		MISC::SET_BIT(&iVar3, 2);
		MISC::SET_BIT(&iVar3, 3);
	}
	else
	{
		if (!MISC::IS_BIT_SET(iVar3, 2))
		{
			if (!Global_1935630 & 2048 != 0 && !__LIB_0__::func_296(0, 1, 1))
			{
				if (__LIB_18__::func_435(iVar1, 0, 0, -1))
				{
					MISC::SET_BIT(&iVar3, 2);
				}
			}
		}
		if (!MISC::IS_BIT_SET(iVar3, 3) && MISC::IS_BIT_SET(iVar3, 2))
		{
			if (__LIB_1__::func_185(iVar1))
			{
				MISC::SET_BIT(&iVar3, 3);
			}
		}
	}
	if (iVar2 == -1)
	{
		MISC::SET_BIT(&iVar3, 4);
		MISC::SET_BIT(&iVar3, 5);
	}
	else
	{
		if (!MISC::IS_BIT_SET(iVar3, 4))
		{
			if (!Global_1935630 & 2048 != 0 && !__LIB_0__::func_296(0, 1, 1))
			{
				if (__LIB_18__::func_435(iVar2, 0, 0, -1))
				{
					__LIB_4__::func_378(__LIB_5__::func_538(iVar2), __LIB_3__::func_918(iVar2), 0, Global_1835011[iVar2 /*74*/].f_21, __LIB_0__::func_61());
					MISC::SET_BIT(&iVar3, 4);
				}
			}
		}
		if (!MISC::IS_BIT_SET(iVar3, 5) && MISC::IS_BIT_SET(iVar3, 4))
		{
			if (__LIB_1__::func_185(iVar2))
			{
				MISC::SET_BIT(&iVar3, 5);
			}
		}
	}
	Global_1879534.f_211[iParam0 /*4*/].f_3 = iVar3;
	if ((MISC::IS_BIT_SET(iVar3, 1) && MISC::IS_BIT_SET(iVar3, 3)) && MISC::IS_BIT_SET(iVar3, 5))
	{
		return -2;
	}
	return -1;
}

void func_222()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_0__::func_797(iVar0))
		{
		}
		__LIB_5__::func_593(iVar0, 1);
		iVar0++;
	}
	__LIB_12__::func_230();
	iVar1 = MISC::GET_GAME_TIMER();
	while (!__LIB_11__::func_981())
	{
		__LIB_12__::func_230();
		if (iVar1 + 1000 > MISC::GET_GAME_TIMER())
		{
		}
	else
	{
		}
		else
		{
			BUILTIN::WAIT(0);
		}
	}
	while (__LIB_11__::func_458())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			__LIB_18__::func_493(iVar0);
			iVar0++;
		}
		BUILTIN::WAIT(0);
	}
	__LIB_12__::func_230();
}

void func_223()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GUARMA_APPEARANCE_ACTIVE")))
	{
		return;
	}
	__LIB_18__::func_494(1, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GUARMA_APPEARANCE_ACTIVE"), true);
}

void func_224(bool bParam0)
{
	bool bVar0;
	if (Global_40.f_7748.f_1 < 9)
	{
		if (__LIB_1__::func_426(Global_40.f_7748.f_5, 1))
		{
			if (Global_40.f_7748.f_1 <= 9)
			{
				if (Global_40.f_7748.f_1 < 9)
				{
					bVar0 = true;
				}
				else if (__LIB_4__::func_631())
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (bParam0)
				{
					__LIB_18__::func_504();
				}
				else
				{
					__LIB_13__::func_541();
				}
			}
		}
	}
	if (bVar0)
	{
		__LIB_1__::func_452(9, 0, 0, 0, 0);
	}
}

void func_225(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	iVar0 = 0;
	while (iVar0 < Global_40.f_7731)
	{
		if (Global_40.f_7731[iVar0 /*5*/] < 10)
		{
			if (__LIB_1__::func_426(Global_40.f_7731[iVar0 /*5*/].f_3, 1))
			{
				if (Global_40.f_7731[iVar0 /*5*/] <= 10)
				{
					if (Global_40.f_7731[iVar0 /*5*/] < 7)
					{
						bVar1 = true;
					}
					else if (__LIB_4__::func_630(iVar0))
					{
						bVar1 = true;
					}
					else
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					if (bParam0)
					{
						__LIB_18__::func_505(iVar0);
					}
					else
					{
						__LIB_13__::func_540(iVar0, 0);
					}
					bVar2 = true;
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		__LIB_1__::func_452(10, 0, 0, 0, 0);
		__LIB_1__::func_452(7, 0, 0, 0, 0);
	}
}

int func_226(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_18__::func_495(iParam0);
	if (bParam1)
	{
		switch (iVar0)
		{
			case joaat("MISSION_COOP_CHAR_CREATOR"):
			default:
				return 0;
				return -496459706;
			case -765810527:
				return -1052738286;
			case -736232052:
				return -2042919232;
			case 34802860:
				return 173210050;
				switch (iVar0)
				{
					case joaat("MISSION_COOP_CHAR_CREATOR"):
					default:
						return 0;
						return -496459706;
					case -765810527:
						return -1052738286;
					case -736232052:
						return -2042919232;
					case 34802860:
						return 173210050;
					case joaat("MISSION_COOP_GVO_INTRO_1"):
						return -1758386749;
					case joaat("MISSION_COOP_GVO_INTRO_2"):
						return -1333110667;
					case joaat("MISSION_COOP_GVO_INTRO_3"):
						return -1008926950;
					case joaat("MISSION_COOP_GVO_OUTLAW_1"):
						return 1844852257;
					case joaat("MISSION_COOP_GVO_OUTLAW_2"):
						return -1130540186;
					case joaat("MISSION_COOP_GVO_OUTLAW_3"):
						return -883953461;
					case joaat("MISSION_COOP_GVO_OUTLAW_4"):
						return -1728607205;
					case joaat("MISSION_COOP_GVO_GUNSLINGER_1"):
						return 716380931;
					case joaat("MISSION_COOP_GVO_GUNSLINGER_2"):
						return 1090144145;
					case joaat("MISSION_COOP_GVO_GUNSLINGER_3"):
						return -1237667308;
					case joaat("MISSION_COOP_GVO_GUNSLINGER_4"):
						return -1411080856;
					case joaat("MISSION_COOP_GVO_REVENGE_1"):
						return -1308143969;
				}
		}
	}
}

bool func_227(int iParam0, var uParam1, var uParam2)
{
	var uVar0;
	if (__LIB_18__::func_496(iParam0, uParam1, &uVar0))
	{
		__LIB_11__::func_994(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_228(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	fVar0 = 0.019f;
	__LIB_12__::func_105(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		fVar1 = MISC::GET_RAIN_LEVEL();
		if ((fVar1 > 0f && uParam0->f_9 >= 1f) && !uParam0->f_3)
		{
			__LIB_12__::func_106(uParam0, 4);
		}
		else if (uParam0->f_5)
		{
			__LIB_12__::func_106(uParam0, 0);
		}
		else if (uParam0->f_2)
		{
			__LIB_12__::func_106(uParam0, 2);
		}
		else if (uParam0->f_3)
		{
			__LIB_12__::func_106(uParam0, 5);
		}
		else if (uParam0->f_6)
		{
			__LIB_12__::func_106(uParam0, 6);
		}
		else if (uParam0->f_7)
		{
			__LIB_12__::func_106(uParam0, 7);
		}
		else if (uParam0->f_8)
		{
			__LIB_12__::func_106(uParam0, 8);
		}
		else if (__LIB_1__::func_285(&(uParam0->f_31), __LIB_12__::func_161()))
		{
			__LIB_18__::func_508(uParam0);
		}
	}
	switch (uParam0->f_30)
	{
		case 0:
			if (uParam0->f_1)
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", 0f);
			}
			if (uParam0->f_1 && uParam0->f_9 <= 2f)
			{
				uParam0->f_20 = 0.25f;
				uParam0->f_21 = 0.015f;
				uParam0->f_22 = 0.25f;
				uParam0->f_23 = 0.015f;
				uParam0->f_24 = 0.5f;
				uParam0->f_25 = 0.01f;
				uParam0->f_26 = 0.5f;
				uParam0->f_27 = 0.01f;
				uParam0->f_28 = 0.1f;
			}
			else
			{
				uParam0->f_24 = 1f;
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0) == 0)
			{
				*uParam0 = *uParam1;
			}
			else
			{
				uParam0->f_30 = 2;
			}
			break;
		case 2:
			if (uParam0->f_1)
			{
				__LIB_12__::func_106(uParam0, 0);
				STREAMING::REQUEST_ANIM_DICT(sLocal_14);
				STREAMING::_REQUEST_MOVE_NETWORK_DEF(sLocal_15);
			}
			else
			{
				if (uParam0->f_5)
				{
					__LIB_12__::func_106(uParam0, 0);
				}
				else if (uParam0->f_2)
				{
					__LIB_12__::func_106(uParam0, 2);
				}
				else if (uParam0->f_3)
				{
					__LIB_12__::func_106(uParam0, 5);
				}
				else if (uParam0->f_6)
				{
					__LIB_12__::func_106(uParam0, 6);
				}
				else if (uParam0->f_7)
				{
					__LIB_12__::func_106(uParam0, 7);
				}
				else if (uParam0->f_8)
				{
					__LIB_12__::func_106(uParam0, 8);
				}
				else
				{
					__LIB_12__::func_106(uParam0, 0);
				}
				uParam0->f_35 = 1;
			}
			GRAPHICS::_SET_LIGHTS_TYPE_FOR_ENTITY(*uParam0, 20);
			GRAPHICS::_SET_LIGHTS_COLOR_FOR_ENTITY(*uParam0, 255, 50, 9);
			uParam0->f_29 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_amb_campfire_dynamic", *uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_29))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_27, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Embers", uParam0->f_25, false);
			}
			uParam0->f_30 = 3;
			break;
		case 3:
			if (!uParam0->f_1)
			{
				uParam0->f_30 = 4;
			}
			else if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_14) && STREAMING::_HAS_MOVE_NETWORK_DEF_LOADED(sLocal_15))
			{
				TASK::TASK_MOVE_NETWORK_BY_NAME(*uParam0, sLocal_15, 0f, false, sLocal_14, 128);
				uParam0->f_30 = 5;
			}
			__LIB_1__::func_148(&(uParam0->f_31));
			break;
		case 4:
			uParam0->f_34 = 1;
			break;
		case 5:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogCount", uParam0->f_9);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogSet", uParam0->f_10);
				uParam0->f_30 = 6;
			}
			break;
		case 6:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogCount", uParam0->f_9);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogSet", uParam0->f_10);
			if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam0))
			{
				uParam0->f_34 = 1;
				if (uParam0->f_1 && MISC::GET_RAIN_LEVEL() <= 0f)
				{
					if (uParam0->f_9 <= 2f)
					{
						uParam0->f_30 = 0;
					}
					else if (TASK::_0x844CEEE428EA35B0(*uParam0, "BurnPhase") <= 0f || TASK::_0x844CEEE428EA35B0(*uParam0, "BurnPhase") >= 1f)
					{
						uParam0->f_30 = 8;
					}
					else
					{
						TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", fVar0);
					}
				}
				else
				{
					uParam0->f_30 = 0;
				}
			}
			break;
		case 7:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, "AddLogFinished"))
				{
					uParam0->f_30 = 8;
				}
			}
			break;
		case 8:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam0))
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam0, "CollapseLog");
					uParam0->f_24 = (uParam0->f_24 + (1f / 5f));
					uParam0->f_30 = 9;
				}
			}
			break;
		case 9:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", fVar0);
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, "CollapseLogFinished"))
				{
					uParam0->f_21 = (uParam0->f_21 - (1f / 5f));
					uParam0->f_22 = (uParam0->f_22 - (0.5f / 5f));
					uParam0->f_25 = (uParam0->f_25 - (1f / 5f));
					uParam0->f_26 = (uParam0->f_26 - (1f / 5f));
					uParam0->f_27 = (uParam0->f_27 - (1.55f / 5f));
					uParam0->f_9 = (uParam0->f_9 - 1f);
					if (uParam0->f_9 == 4f)
					{
						uParam0->f_20 = 0.8f;
						uParam0->f_23 = 0.4f;
					}
					else if (uParam0->f_9 == 3f)
					{
						uParam0->f_20 = 0.7f;
						uParam0->f_23 = 0.3f;
					}
					else if (uParam0->f_9 == 2f)
					{
						uParam0->f_20 = 0.6f;
						uParam0->f_23 = 0.2f;
					}
					else if (uParam0->f_9 == 1f)
					{
						uParam0->f_20 = 0.5f;
						uParam0->f_23 = 0.1f;
					}
					uParam0->f_30 = 6;
				}
			}
			break;
		case 10:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", 0f);
			break;
	}
}

bool func_229(var uParam0)
{
	if (uParam0->f_54 == 0)
	{
		Global_1911914.f_1576 = 0;
		uParam0->f_55 = 0;
		__LIB_18__::func_967(uParam0, 600942249);
		uParam0->f_54++;
		return false;
	}
	else if (uParam0->f_54 == 1)
	{
		__LIB_18__::func_967(uParam0, -257768755);
		uParam0->f_54++;
		return false;
	}
	else
	{
		__LIB_18__::func_967(uParam0, -214678071);
		uParam0->f_54 = 0;
	}
	uParam0->f_55 = 0;
	return true;
}

void func_230(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = __LIB_18__::func_524(iParam1);
	__LIB_12__::func_244(iParam0, __LIB_0__::func_259(iParam1, iParam2), 0);
	__LIB_12__::func_245(iParam0, iVar0);
}

void func_231(var uParam0, int iParam1)
{
	uParam0->f_56 = iParam1;
	if (uParam0->f_56 && !__LIB_1__::func_77(uParam0->f_38, 2))
	{
		if (uParam0->f_54 == 0)
		{
			__LIB_18__::func_528(uParam0, 1);
		}
	}
	else if (uParam0->f_54 != 0)
	{
		__LIB_18__::func_528(uParam0, 0);
	}
}

void func_232(var uParam0)
{
	int iVar0;
	bool bVar1;
	if (!uParam0->f_48)
	{
		uParam0->f_48 = 1;
		if (uParam0->f_47)
		{
			__LIB_18__::func_529(uParam0);
		}
		iVar0 = __LIB_0__::func_298(0);
		if (__LIB_0__::func_6(iVar0))
		{
			if (__LIB_0__::func_700(iVar0) == 4)
			{
				MISC::_0x1096603B519C905F("");
			}
		}
		__LIB_0__::func_867(0);
		__LIB_1__::func_78(uParam0->f_38);
		__LIB_12__::func_303(uParam0);
		bVar1 = false;
		if (!bVar1)
		{
			if (__LIB_7__::func_730())
			{
				__LIB_1__::func_559(uParam0->f_3.f_4, 0, 0);
			}
			else
			{
				__LIB_1__::func_559(uParam0->f_3.f_4, 0, 2);
			}
			__LIB_1__::func_298(uParam0->f_3.f_4, 1);
		}
		if (__LIB_0__::func_2() == -1)
		{
			if (uParam0->f_3 == 0)
			{
				__LIB_1__::func_213(23, 0);
			}
		}
	}
}

void func_233(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	uParam0->f_38 = 1;
	STREAMING::_REQUEST_MOVE_NETWORK_DEF("TaskMovePoker");
	iVar0 = 0;
	while (iVar0 < 4)
	{
		STREAMING::REQUEST_ANIM_DICT(&(uParam0->f_1175[iVar0 /*8*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		STREAMING::REQUEST_CLIP_SET(__LIB_12__::func_310(uParam0, iVar0));
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			STREAMING::REQUEST_ANIM_DICT(__LIB_9__::func_926(uParam0, iVar1, iVar2));
			iVar2++;
		}
		iVar1++;
	}
	STREAMING::REQUEST_ANIM_DICT("mini_games@poker_mg@deal");
	STREAMING::REQUEST_MODEL(uParam0->f_692, false);
	STREAMING::REQUEST_MODEL(uParam0->f_693, false);
	STREAMING::REQUEST_MODEL(uParam0->f_694, false);
	STREAMING::REQUEST_MODEL(joaat("PROP_CHIP_GREEN_X1"), false);
	STREAMING::REQUEST_MODEL(joaat("PROP_CHIP_GREEN_X2"), false);
	STREAMING::REQUEST_MODEL(joaat("PROP_CHIP_GREEN_X3"), false);
	STREAMING::REQUEST_MODEL(joaat("PROP_CHIP_GREEN_X4"), false);
	STREAMING::REQUEST_MODEL(joaat("PROP_CHIP_GREEN_X5"), false);
	STREAMING::REQUEST_MODEL(joaat("PROP_CHIP_GREEN_X6"), false);
	STREAMING::REQUEST_MODEL(joaat("PROP_CHIP_GREEN_X7"), false);
	STREAMING::REQUEST_MODEL(joaat("PROP_CHIP_GREEN_X8"), false);
	STREAMING::REQUEST_MODEL(joaat("PROP_CHIP_GREEN_X9"), false);
	STREAMING::REQUEST_MODEL(joaat("PROP_CHIP_GREEN_X10"), false);
	__LIB_12__::func_311(uParam0, iParam2, bParam3);
	__LIB_18__::func_531(uParam0);
	if (uParam0->f_778)
	{
		__LIB_18__::func_532(uParam0, iParam1);
	}
}

bool func_234(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_778)
	{
		if (!__LIB_18__::func_533(uParam0))
		{
			return false;
		}
		else if (uParam0->f_777 == -1)
		{
			__LIB_18__::func_534(uParam0);
		}
	}
	if (!STREAMING::_HAS_MOVE_NETWORK_DEF_LOADED("TaskMovePoker"))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&(uParam0->f_1175[iVar0 /*8*/])))
		{
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!STREAMING::HAS_CLIP_SET_LOADED(__LIB_12__::func_310(uParam0, iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_9__::func_926(uParam0, iVar1, iVar2)))
			{
				return false;
			}
			iVar2++;
		}
		iVar1++;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("mini_games@poker_mg@deal"))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_692))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_693))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_694))
	{
		return false;
	}
	if (!__LIB_12__::func_313(uParam0))
	{
		return false;
	}
	if (((((((((!STREAMING::HAS_MODEL_LOADED(joaat("PROP_CHIP_GREEN_X1")) || !STREAMING::HAS_MODEL_LOADED(joaat("PROP_CHIP_GREEN_X2"))) || !STREAMING::HAS_MODEL_LOADED(joaat("PROP_CHIP_GREEN_X3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("PROP_CHIP_GREEN_X4"))) || !STREAMING::HAS_MODEL_LOADED(joaat("PROP_CHIP_GREEN_X5"))) || !STREAMING::HAS_MODEL_LOADED(joaat("PROP_CHIP_GREEN_X6"))) || !STREAMING::HAS_MODEL_LOADED(joaat("PROP_CHIP_GREEN_X7"))) || !STREAMING::HAS_MODEL_LOADED(joaat("PROP_CHIP_GREEN_X8"))) || !STREAMING::HAS_MODEL_LOADED(joaat("PROP_CHIP_GREEN_X9"))) || !STREAMING::HAS_MODEL_LOADED(joaat("PROP_CHIP_GREEN_X10")))
	{
		return false;
	}
	return true;
}

void func_235(var uParam0)
{
	if (uParam0->f_56 && !__LIB_1__::func_77(uParam0->f_38, 2))
	{
		if (uParam0->f_54 == 0)
		{
			__LIB_18__::func_528(uParam0, 1);
		}
	}
	else if (uParam0->f_54 != 0)
	{
		__LIB_18__::func_528(uParam0, 0);
	}
	switch (uParam0->f_54)
	{
		case 0:
			break;
		case 1:
			if (__LIB_1__::func_530(uParam0->f_55, 1))
			{
				__LIB_18__::func_528(uParam0, 2);
			}
			break;
		case 2:
			if (!__LIB_1__::func_530(uParam0->f_55, 1))
			{
				__LIB_18__::func_528(uParam0, 1);
			}
			else if (__LIB_0__::func_567(uParam0->f_55, 1))
			{
				__LIB_18__::func_528(uParam0, 3);
			}
			break;
		case 3:
			break;
	}
}

void func_236(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_38)
	{
		uParam0->f_38 = 0;
		STREAMING::_REMOVE_MOVE_NETWORK_DEF("TaskMovePoker");
		iVar0 = 0;
		while (iVar0 < 4)
		{
			STREAMING::REMOVE_ANIM_DICT(&(uParam0->f_1175[iVar0 /*8*/]));
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			STREAMING::REMOVE_CLIP_SET(__LIB_12__::func_310(uParam0, iVar0));
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar2 = 0;
			while (iVar2 < 2)
			{
				STREAMING::REMOVE_ANIM_DICT(__LIB_9__::func_926(uParam0, iVar1, iVar2));
				iVar2++;
			}
			iVar1++;
		}
		STREAMING::REMOVE_ANIM_DICT("mini_games@poker_mg@deal");
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_692);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_693);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_694);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_CHIP_GREEN_X1"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_CHIP_GREEN_X2"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_CHIP_GREEN_X3"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_CHIP_GREEN_X4"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_CHIP_GREEN_X5"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_CHIP_GREEN_X6"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_CHIP_GREEN_X7"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_CHIP_GREEN_X8"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_CHIP_GREEN_X9"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_CHIP_GREEN_X10"));
		__LIB_18__::func_543(uParam0, 1);
		__LIB_18__::func_544(uParam0, 1);
	}
}

bool func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	char* sVar1;
	if (uParam0->f_785[iParam1 /*52*/] != 0)
	{
	}
	else if (PED::IS_PED_INJURED(iParam2))
	{
	}
	else if (__LIB_0__::func_407(iParam2) && !__LIB_1__::func_22(__LIB_4__::func_656(iParam2)))
	{
	}
	else if (uParam0->f_41 == 2)
	{
	}
	else
	{
		if (!PED::IS_PED_A_PLAYER(iParam2))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam2, true))
			{
				PED::SET_PED_CONFIG_FLAG(iParam2, 171, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam2, false, true);
				PED::SET_PED_CONFIG_FLAG(iParam2, 171, false);
			}
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam2, true))
			{
				return false;
			}
		}
		uParam0->f_785[iParam1 /*52*/] = iParam2;
		uParam0->f_785[iParam1 /*52*/].f_1 = 0;
		uParam0->f_785[iParam1 /*52*/].f_2 = 0;
		uParam0->f_785[iParam1 /*52*/].f_3 = 0;
		uParam0->f_785[iParam1 /*52*/].f_4 = iParam3;
		uParam0->f_785[iParam1 /*52*/].f_5 = iParam4;
		uParam0->f_785[iParam1 /*52*/].f_6 = iParam5;
		uParam0->f_785[iParam1 /*52*/].f_7 = iParam6;
		uParam0->f_785[iParam1 /*52*/].f_44 = iParam8;
		uParam0->f_785[iParam1 /*52*/].f_51 = iParam7;
		uParam0->f_785[iParam1 /*52*/].f_8 = 1;
		uParam0->f_785[iParam1 /*52*/].f_9 = 0;
		__LIB_0__::func_268(&(uParam0->f_785[iParam1 /*52*/].f_16), -MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 35f));
		uParam0->f_1098++;
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam2, true);
		PED::SET_PED_CAN_RAGDOLL(iParam2, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam2, WEAPON::_0x08FF1099ED2E6E21(iParam2), false, 0, false, false);
		if (!PED::IS_PED_A_PLAYER(iParam2))
		{
			PED::SET_PED_CONFIG_FLAG(iParam2, 453, true);
		}
		iVar0 = 0;
		while (iVar0 < 29)
		{
			if ((((iVar0 == 1 || iVar0 == 7) || iVar0 == 8) || iVar0 == 9) || iVar0 == 10)
			{
				WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam2, iVar0, false);
			}
			iVar0++;
		}
		__LIB_18__::func_549(uParam0, iParam1, 0);
		if (iParam7 != 255 && iParam7 != PLAYER::PLAYER_ID())
		{
			if (!__LIB_9__::func_933())
			{
				__LIB_18__::func_220(iParam7, iParam2);
				__LIB_18__::func_221(iParam7, joaat("MINIGAMES"));
			}
		}
		if (uParam0->f_777 != -1)
		{
			ANIMSCENE::_0xB1A196BAFE650402(uParam0->f_777, iParam2);
			sVar1 = __LIB_9__::func_937(__LIB_9__::func_936(iParam6));
			if ((iParam6 == 92 || MISC::IS_STRING_NULL_OR_EMPTY(sVar1)) || MISC::ARE_STRINGS_EQUAL(sVar1, "unknown"))
			{
				ANIMSCENE::_0x3641FCD53E59B335(uParam0->f_777, iParam2, "");
			}
			else
			{
				ANIMSCENE::_0x3641FCD53E59B335(uParam0->f_777, iParam2, sVar1);
			}
		}
		if (uParam0->f_41 != 0)
		{
			__LIB_12__::func_357(uParam0, iParam1);
		}
		return true;
	}
	return false;
}

void func_238(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 0)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 4);
		if (!uParam0->f_40)
		{
			iVar0 = uParam0->f_785[iParam1 /*52*/];
			iVar3 = WEAPON::_0x08FF1099ED2E6E21(iVar0);
			WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, true, 0, false);
			WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar2, true, 1, false);
			if (iVar1 != iVar3)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iVar3, false, 0, false, false);
			}
			if (iVar2 != iVar3)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iVar3, false, 1, false, false);
			}
			if (iVar1 != iVar3 || iVar2 != iVar3)
			{
				TASK::TASK_SWAP_WEAPON(iVar0, 0, 0, 0, 0);
			}
		}
		__LIB_18__::func_550(uParam0, iParam1, 1);
		__LIB_18__::func_551(uParam0, iParam1, 0);
		__LIB_18__::func_549(uParam0, iParam1, 0);
		__LIB_12__::func_438(uParam0, iParam1, 2);
	}
}

void func_239(var uParam0, int iParam1, int iParam2, float fParam3)
{
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (iParam2 != 1 && iParam2 != 2)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 2);
		if (!uParam0->f_40)
		{
			if (fParam3 == 0f)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_785[iParam1 /*52*/], false, true);
				WEAPON::_HIDE_PED_WEAPONS(uParam0->f_785[iParam1 /*52*/], 2, true);
				PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(uParam0->f_785[iParam1 /*52*/], 1);
			}
			if (iParam2 == 1)
			{
				__LIB_18__::func_552(uParam0, iParam1, "NoCardsIdleRequest", fParam3);
			}
			else
			{
				__LIB_18__::func_552(uParam0, iParam1, "HoldCardsIdleRequest", fParam3);
				__LIB_12__::func_427(uParam0, iParam1, "hold_cards_idle_a_card1", __LIB_12__::func_358(uParam0, iParam1, 0), 4, 2);
				__LIB_12__::func_427(uParam0, iParam1, "hold_cards_idle_a_card2", __LIB_12__::func_358(uParam0, iParam1, 1), 4, 2);
			}
		}
		__LIB_18__::func_550(uParam0, iParam1, iParam2);
		if (iParam2 == 2)
		{
			__LIB_18__::func_549(uParam0, iParam1, 1);
		}
		else
		{
			__LIB_18__::func_549(uParam0, iParam1, 0);
		}
	}
}

void func_240(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 3);
		if (!uParam0->f_40)
		{
			fVar0 = 0f;
			if (bParam2)
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 0.75f);
			}
			__LIB_12__::func_428(uParam0, iParam1, "sit_enter_left", 2, 0f, 1040187392 /* Float: 0.125f */, fVar0, !bParam2);
		}
		__LIB_18__::func_550(uParam0, iParam1, 1);
		__LIB_18__::func_551(uParam0, iParam1, 0);
		__LIB_18__::func_549(uParam0, iParam1, 0);
		__LIB_12__::func_359(uParam0, iParam1, 0);
		__LIB_12__::func_438(uParam0, iParam1, 6);
	}
}

void func_241(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 6:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			__LIB_18__::func_554(uParam0, iParam2, joaat("INTERRUPTIBLE"));
			if ((!__LIB_12__::func_364(uParam0, iParam2, "sit_enter_left", 1065353216 /* Float: 1f */) && !__LIB_12__::func_364(uParam0, iParam2, "sit_enter_right", 1065353216 /* Float: 1f */)) || __LIB_12__::func_365(uParam0, iParam2, 1))
			{
				__LIB_18__::func_552(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_242(var uParam0, var uParam1, int iParam2)
{
	__LIB_18__::func_555(uParam0, iParam2);
}

void func_243(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar18;
	if (uParam0->f_40)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(*uParam1, uParam0->f_1137[iParam2 /*3*/], uParam0->f_1156[iParam2 /*3*/].f_2, false, true);
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 2:
			if (!__LIB_0__::func_163(*uParam1, 716706914))
			{
				iVar0 = __LIB_7__::func_714(2, *uParam0, uParam0->f_3, iParam2, 1051931443 /* Float: 0.35f */);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
					fVar4 = ENTITY::GET_ENTITY_HEADING(iVar0);
					__LIB_9__::func_938(vVar1, fVar4, uParam0->f_1137[iParam2 /*3*/], uParam0->f_1156[iParam2 /*3*/], &vVar5, &vVar8);
					switch (__LIB_12__::func_301(uParam0, iParam2))
					{
						case 1:
						case 3:
							iVar12 = joaat("MINIGAME_POKER_CAMP_PLAYER");
							iVar13 = joaat("MINIGAME_POKER_CAMP_PLAYER");
							break;
						case 0:
						case 2:
						default:
							iVar12 = joaat("MINIGAME_POKER_PLAYER");
							iVar13 = joaat("MINIGAME_POKER_PLAYER");
							break;
					}
					iVar11 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(uParam0->f_1137[iParam2 /*3*/], iVar13, 0.25f, 1, false);
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar11))
					{
						TASK::_SET_SCENARIO_POINT_COORDS(iVar11, vVar5, false);
						TASK::_SET_SCENARIO_POINT_HEADING(iVar11, vVar8.z, false);
					}
					else
					{
						iVar11 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iVar0, iVar12, vVar5, vVar8.z, 0, 0, 0);
					}
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar11))
					{
						TASK::_TASK_USE_SCENARIO_POINT(*uParam1, iVar11, 0, 0, true, false, 0, false, -1f, false);
						__LIB_12__::func_438(uParam0, iParam2, 3);
						return;
					}
				}
				iVar14 = __LIB_12__::func_301(uParam0, iParam2);
				if (iVar14 == 2)
				{
					iVar14 = 0;
				}
				vVar15 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&(uParam0->f_1175[iVar14 /*8*/]), "sit_enter_left", uParam0->f_1137[iParam2 /*3*/], uParam0->f_1156[iParam2 /*3*/], 0f, 2) };
				vVar18 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&(uParam0->f_1175[iVar14 /*8*/]), "sit_enter_left", uParam0->f_1137[iParam2 /*3*/], uParam0->f_1156[iParam2 /*3*/], 0f, 2) };
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam1, vVar15, 1f, -1, 0.25f, 5120, vVar18.z);
				__LIB_12__::func_438(uParam0, iParam2, 5);
			}
			break;
		case 3:
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(*uParam1, 1))
			{
				__LIB_12__::func_359(uParam0, iParam2, 0);
				__LIB_12__::func_438(uParam0, iParam2, 4);
			}
			else if (!__LIB_0__::func_163(*uParam1, -76381094) || (__LIB_1__::func_285(&(uParam1->f_13), 20f) && (uParam1->f_40 || uParam1->f_41)))
			{
				if (!__LIB_0__::func_163(*uParam1, -76381094))
				{
				}
				__LIB_12__::func_359(uParam0, iParam2, 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam1, false, true);
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(*uParam1) != INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1137[iParam2 /*3*/]))
				{
					ENTITY::SET_ENTITY_COORDS(*uParam1, uParam0->f_1137[iParam2 /*3*/] - Vector(0.5f, 0f, 0f), true, false, true, true);
				}
				__LIB_18__::func_552(uParam0, iParam2, "NoCardsIdleRequest", 0);
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 4:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			__LIB_18__::func_554(uParam0, iParam2, joaat("INTERRUPTIBLE"));
			if ((TASK::IS_PED_ACTIVE_IN_SCENARIO(*uParam1, 0) || __LIB_12__::func_366(uParam0, iParam2, 0)) || __LIB_1__::func_285(&(uParam1->f_13), 20f))
			{
				PED::_0xF1C03A5352243A30(*uParam1);
				TASK::_0x2D657B10F211C572(*uParam1, 0.5f);
				__LIB_18__::func_552(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 5:
			if (!__LIB_0__::func_163(*uParam1, 713668775) || (__LIB_1__::func_285(&(uParam1->f_13), 20f) && (uParam1->f_40 || uParam1->f_41)))
			{
				if (__LIB_0__::func_163(*uParam1, 713668775))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam1, false, true);
					if (INTERIOR::GET_INTERIOR_FROM_ENTITY(*uParam1) != INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1137[iParam2 /*3*/]))
					{
						ENTITY::SET_ENTITY_COORDS(*uParam1, uParam0->f_1137[iParam2 /*3*/] - Vector(0.5f, 0f, 0f), true, false, true, true);
					}
				}
				__LIB_12__::func_428(uParam0, iParam2, "sit_enter_left", 2, 1040187392 /* Float: 0.125f */, 1040187392 /* Float: 0.125f */, 0, 1);
				__LIB_12__::func_359(uParam0, iParam2, 0);
				__LIB_12__::func_438(uParam0, iParam2, 6);
			}
			break;
		case 6:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			__LIB_18__::func_554(uParam0, iParam2, joaat("INTERRUPTIBLE"));
			if ((!__LIB_12__::func_364(uParam0, iParam2, "sit_enter_left", 1065353216 /* Float: 1f */) && !__LIB_12__::func_364(uParam0, iParam2, "sit_enter_right", 1065353216 /* Float: 1f */)) || __LIB_12__::func_366(uParam0, iParam2, 0))
			{
				__LIB_18__::func_552(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_244(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "HoldCardsEnterAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				__LIB_18__::func_549(uParam0, iParam2, 1);
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "HoldCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1087743179))
	{
		__LIB_12__::func_427(uParam0, iParam2, "hold_cards_enter_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "hold_cards_enter_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
}

void func_245(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		__LIB_18__::func_549(uParam0, iParam2, 1);
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 30:
			if (__LIB_12__::func_363(uParam1, "PeekEnterAnimFinished"))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Peek");
				__LIB_12__::func_438(uParam0, iParam2, 31);
			}
			break;
		case 31:
			if (uParam1->f_40 || uParam1->f_41)
			{
				if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam1))
				{
					__LIB_18__::func_549(uParam0, iParam2, 1);
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "PeekExit");
					__LIB_12__::func_438(uParam0, iParam2, 32);
				}
			}
			break;
		case 32:
			if (__LIB_12__::func_363(uParam1, "PeekExitAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "HoldCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1601457590))
	{
		__LIB_12__::func_427(uParam0, iParam2, "peek_enter_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "peek_enter_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 611442489))
	{
		__LIB_12__::func_427(uParam0, iParam2, "peek_idle_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "peek_idle_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1497341761))
	{
		__LIB_12__::func_427(uParam0, iParam2, "peek_exit_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "peek_exit_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
}

void func_246(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = uParam1->f_19;
	if (uParam0->f_40)
	{
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_785[iParam2 /*52*/], "CheckType", BUILTIN::TO_FLOAT(iVar0));
			if (__LIB_12__::func_363(uParam1, "CheckAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "HoldCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1798862211))
	{
		__LIB_12__::func_427(uParam0, iParam2, "check_a_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "check_a_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1444041649))
	{
		__LIB_12__::func_427(uParam0, iParam2, "check_b_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "check_b_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1739656056))
	{
		__LIB_12__::func_427(uParam0, iParam2, "check_c_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "check_c_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
}

void func_247(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = uParam1->f_19;
	if (uParam0->f_40)
	{
		__LIB_18__::func_549(uParam0, iParam2, 0);
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 45:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "WinLossType", BUILTIN::TO_FLOAT(uParam1->f_34));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "ReturnCardType", BUILTIN::TO_FLOAT(iVar0));
			if (((__LIB_12__::func_363(uParam1, "ReturnRevealEnterAnimFinished") || __LIB_12__::func_363(uParam1, "ReturnEnterHoldCardsAnimFinished")) || __LIB_12__::func_378(uParam0, iParam2, joaat("BLENDOUT"), 1)) || __LIB_12__::func_378(uParam0, iParam2, joaat("INTERRUPTIBLE"), 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "ReturnCards");
				__LIB_12__::func_438(uParam0, iParam2, 46);
			}
			break;
		case 46:
			if (__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE")))
			{
				__LIB_18__::func_555(uParam0, iParam2);
			}
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "WinLossType", BUILTIN::TO_FLOAT(uParam1->f_34));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "ReturnCardType", BUILTIN::TO_FLOAT(iVar0));
			if (__LIB_12__::func_363(uParam1, "ReturnCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				__LIB_18__::func_549(uParam0, iParam2, 0);
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1317959855))
	{
		__LIB_12__::func_427(uParam0, iParam2, "return_enter_hold_cards_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "return_enter_hold_cards_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1257930565))
	{
		__LIB_12__::func_427(uParam0, iParam2, "return_reveal_enter_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "return_reveal_enter_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1911579200))
	{
		__LIB_12__::func_427(uParam0, iParam2, "return_fold_enter_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "return_fold_enter_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -173534072))
	{
		__LIB_12__::func_427(uParam0, iParam2, "return_1_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "return_1_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1540636))
	{
		__LIB_12__::func_427(uParam0, iParam2, "return_2_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "return_2_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 693530283))
	{
		__LIB_12__::func_427(uParam0, iParam2, "return_3_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "return_3_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 2123629490))
	{
		__LIB_12__::func_427(uParam0, iParam2, "return_4_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "return_4_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 595740131))
	{
		__LIB_12__::func_427(uParam0, iParam2, "return_5_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "return_5_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -252921886))
	{
		__LIB_12__::func_427(uParam0, iParam2, "return_6_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "return_6_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
}

void func_248(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = MISC::IS_BIT_SET(uParam0->f_785[iParam2 /*52*/].f_19, 0);
	bVar1 = MISC::IS_BIT_SET(uParam0->f_785[iParam2 /*52*/].f_19, 1);
	iVar2 = uParam0->f_785[iParam2 /*52*/].f_20;
	if (uParam0->f_40)
	{
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 47:
			if (!bVar0)
			{
				__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			}
			if (__LIB_12__::func_363(uParam1, "BoardReturnRevealAnimFinished"))
			{
				iVar3 = 0;
				while (iVar3 < 6)
				{
					__LIB_12__::func_346(uParam0, iVar3);
					iVar3++;
				}
				__LIB_12__::func_356(uParam0, 0);
				__LIB_12__::func_356(uParam0, 1);
				__LIB_12__::func_356(uParam0, 2);
				__LIB_12__::func_356(uParam0, 3);
				__LIB_12__::func_356(uParam0, 4);
				if (bVar0)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "BoardReturnToPass");
					TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "PassDeckType", BUILTIN::TO_FLOAT(iVar2));
					__LIB_12__::func_438(uParam0, iParam2, 49);
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "BoardReturnExit");
					__LIB_12__::func_438(uParam0, iParam2, 51);
				}
			}
			break;
		case 49:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "PassDeckType", BUILTIN::TO_FLOAT(iVar2));
			if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam1, "PassDeck"))
			{
				__LIB_12__::func_359(uParam0, iParam2, 0);
				__LIB_12__::func_438(uParam0, iParam2, 50);
			}
			break;
		case 50:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "PassDeckType", BUILTIN::TO_FLOAT(iVar2));
			if (__LIB_12__::func_363(uParam1, "PassDeckAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 51:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "BoardReturnExitAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1121191546))
	{
		if (__LIB_12__::func_343(uParam0, iParam2))
		{
			if (!bVar1)
			{
				__LIB_12__::func_427(uParam0, iParam2, "board_return_reveal_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
				__LIB_12__::func_427(uParam0, iParam2, "board_return_reveal_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
			}
		}
		if (__LIB_12__::func_355(uParam0, 0))
		{
			__LIB_12__::func_427(uParam0, iParam2, "board_return_reveal_card3", __LIB_12__::func_372(uParam0, 0), 0, 2);
		}
		if (__LIB_12__::func_355(uParam0, 1))
		{
			__LIB_12__::func_427(uParam0, iParam2, "board_return_reveal_card4", __LIB_12__::func_372(uParam0, 1), 0, 2);
		}
		if (__LIB_12__::func_355(uParam0, 2))
		{
			__LIB_12__::func_427(uParam0, iParam2, "board_return_reveal_card5", __LIB_12__::func_372(uParam0, 2), 0, 2);
		}
		if (__LIB_12__::func_355(uParam0, 3))
		{
			__LIB_12__::func_427(uParam0, iParam2, "board_return_reveal_card6", __LIB_12__::func_372(uParam0, 3), 0, 2);
		}
		if (__LIB_12__::func_355(uParam0, 4))
		{
			__LIB_12__::func_427(uParam0, iParam2, "board_return_reveal_card7", __LIB_12__::func_372(uParam0, 4), 0, 2);
		}
		iVar4 = 0;
		while (iVar4 < 6)
		{
			if (iVar4 != iParam2 || bVar1)
			{
				if (__LIB_12__::func_343(uParam0, iVar4))
				{
					__LIB_12__::func_427(uParam0, iParam2, "board_return_reveal_card8", __LIB_12__::func_358(uParam0, iVar4, 0), 0, 2);
					__LIB_12__::func_427(uParam0, iParam2, "board_return_reveal_card9", __LIB_12__::func_358(uParam0, iVar4, 1), 0, 2);
				}
			}
			iVar4++;
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 637998928))
	{
		__LIB_12__::func_427(uParam0, iParam2, "pass_deck_1_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1482447871))
	{
		__LIB_12__::func_427(uParam0, iParam2, "pass_deck_2_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 66477882))
	{
		__LIB_12__::func_427(uParam0, iParam2, "pass_deck_3_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 2130775593))
	{
		__LIB_12__::func_427(uParam0, iParam2, "pass_deck_4_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -2138078509))
	{
		__LIB_12__::func_427(uParam0, iParam2, "pass_deck_5_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
}

void func_249(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = uParam1->f_19;
	if (uParam0->f_40)
	{
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 52:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "PassDeckType", BUILTIN::TO_FLOAT(iVar0));
			if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam1, "PassDeck"))
			{
				__LIB_12__::func_438(uParam0, iParam2, 53);
			}
			break;
		case 53:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "PassDeckType", BUILTIN::TO_FLOAT(iVar0));
			if (__LIB_12__::func_363(uParam1, "PassDeckAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1157265058))
	{
		__LIB_12__::func_427(uParam0, iParam2, "pass_deck_enter_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 637998928))
	{
		__LIB_12__::func_427(uParam0, iParam2, "pass_deck_1_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1482447871))
	{
		__LIB_12__::func_427(uParam0, iParam2, "pass_deck_2_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 66477882))
	{
		__LIB_12__::func_427(uParam0, iParam2, "pass_deck_3_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 2130775593))
	{
		__LIB_12__::func_427(uParam0, iParam2, "pass_deck_4_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -2138078509))
	{
		__LIB_12__::func_427(uParam0, iParam2, "pass_deck_5_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
}

void func_250(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 54:
			if (__LIB_12__::func_363(uParam1, "ReceiveDeckEnterNoCardsAnimFinished"))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "ReceiveDeck");
				__LIB_12__::func_438(uParam0, iParam2, 55);
			}
			break;
		case 55:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam1, "ReceiveDeckExitNoCards"))
			{
				__LIB_12__::func_438(uParam0, iParam2, 56);
			}
			break;
		case 56:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "ReceiveDeckExitNoCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1258893207))
	{
		__LIB_12__::func_427(uParam0, iParam2, "receive_deck_enter_no_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -854598449))
	{
		__LIB_12__::func_427(uParam0, iParam2, "receive_deck_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -698177614))
	{
		__LIB_12__::func_427(uParam0, iParam2, "receive_deck_exit_no_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
}

void func_251(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		if (uParam1->f_9 == 58)
		{
			__LIB_12__::func_367(uParam0, iParam2, 0);
		}
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 57:
			if (__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE")))
			{
				__LIB_18__::func_555(uParam0, iParam2);
			}
			if (__LIB_12__::func_363(uParam1, "MoodEnterHoldCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 58:
			if (__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE")))
			{
				__LIB_18__::func_555(uParam0, iParam2);
			}
			if (__LIB_12__::func_363(uParam1, "MoodExitHoldCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				__LIB_12__::func_367(uParam0, iParam2, 0);
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "HoldCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 827336758))
	{
		__LIB_12__::func_427(uParam0, iParam2, "mood_enter_hold_cards_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "mood_enter_hold_cards_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -13143479))
	{
		__LIB_12__::func_427(uParam0, iParam2, "mood_exit_hold_cards_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "mood_exit_hold_cards_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
}

void func_252(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "WinLossType", BUILTIN::TO_FLOAT(uParam1->f_34));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "IntensityType", BUILTIN::TO_FLOAT(uParam1->f_35));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "VariationType", BUILTIN::TO_FLOAT(uParam1->f_36));
			if (__LIB_12__::func_363(uParam1, "ExpressAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_253(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	bVar0 = uParam0->f_785[iParam2 /*52*/].f_35 == false;
	iVar1 = uParam0->f_785[iParam2 /*52*/].f_36;
	if (uParam0->f_40)
	{
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_785[iParam2 /*52*/], "CheckType", BUILTIN::TO_FLOAT(iVar1));
			if (uParam1->f_1 == 2)
			{
				if (__LIB_12__::func_363(uParam1, "FidgetHoldCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
					__LIB_12__::func_438(uParam0, iParam2, 1);
				}
			}
			else if (__LIB_12__::func_363(uParam1, "FidgetNoCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "HoldCardsIdle") || __LIB_12__::func_363(uParam1, "NoCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 953493909))
		{
			__LIB_12__::func_427(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_A_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
			__LIB_12__::func_427(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_A_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 813983831))
		{
			__LIB_12__::func_427(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_B_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
			__LIB_12__::func_427(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_B_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1823711918))
		{
			__LIB_12__::func_427(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_C_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
			__LIB_12__::func_427(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_C_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1179453188))
		{
			__LIB_12__::func_427(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_D_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
			__LIB_12__::func_427(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_D_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -31018127))
		{
			__LIB_12__::func_427(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_E_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
			__LIB_12__::func_427(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_E_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -308856369))
	{
		__LIB_12__::func_427(uParam0, iParam2, "HOLD_CARDS_IDLE_B_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "HOLD_CARDS_IDLE_B_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -89351506))
	{
		__LIB_12__::func_427(uParam0, iParam2, "HOLD_CARDS_IDLE_C_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "HOLD_CARDS_IDLE_C_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -288032489))
	{
		__LIB_12__::func_427(uParam0, iParam2, "HOLD_CARDS_IDLE_D_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "HOLD_CARDS_IDLE_D_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -496151764))
	{
		__LIB_12__::func_427(uParam0, iParam2, "HOLD_CARDS_IDLE_E_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "HOLD_CARDS_IDLE_E_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
}

void func_254(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 41:
			if (__LIB_12__::func_384(uParam0))
			{
				__LIB_18__::func_560(uParam0, uParam1, iParam2);
				__LIB_12__::func_438(uParam0, iParam2, 42);
			}
			break;
		case 42:
			if (__LIB_12__::func_385(uParam0))
			{
				__LIB_12__::func_371(uParam0, iParam2);
				__LIB_12__::func_438(uParam0, iParam2, 1);
				__LIB_12__::func_321(uParam0);
			}
			break;
		case 1:
			break;
	}
}

void func_255(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			__LIB_18__::func_561(uParam0, iVar0, iVar1, bParam1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_256(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			__LIB_18__::func_556(uParam0, iVar0, iVar1, bParam1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_257(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else
	{
		iVar0 = uParam0->f_785[iParam1 /*52*/];
		iVar1 = __LIB_12__::func_300(uParam0, iParam1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			__LIB_4__::func_880(iVar0);
			if (iVar1 == 2 || iVar1 == 1)
			{
				if (PED::IS_PED_A_PLAYER(iVar0) || __LIB_0__::func_407(iVar0))
				{
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
				}
				else if (!bParam2)
				{
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
				}
				else
				{
					__LIB_4__::func_881(iVar0);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
					__LIB_12__::func_367(uParam0, iParam1, 0);
					__LIB_12__::func_428(uParam0, iParam1, "no_cards_idle_a", 1, 0f, 1040187392 /* Float: 0.125f */, 0, 1);
					PED::_0x2208438012482A1A(iVar0, false, false);
					PED::SET_PED_KEEP_TASK(iVar0, true);
				}
			}
		}
		__LIB_18__::func_563(uParam0, iParam1, 1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				TASK::CLEAR_PED_TASKS(iVar0, true, false);
			}
			else if (__LIB_0__::func_407(iVar0))
			{
				__LIB_1__::func_774(__LIB_4__::func_656(iVar0), 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
			}
		}
	}
}

void func_258(var uParam0, int iParam1)
{
	int iVar0;
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else
	{
		iVar0 = __LIB_18__::func_563(uParam0, iParam1, 1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				TASK::CLEAR_PED_TASKS(iVar0, true, false);
			}
			else if (__LIB_0__::func_407(iVar0))
			{
				__LIB_1__::func_774(__LIB_4__::func_656(iVar0), 0, 1, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::DELETE_PED(&iVar0);
			}
		}
	}
}

void func_259(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else
	{
		iVar0 = __LIB_18__::func_563(uParam0, iParam1, 1);
		iVar1 = __LIB_12__::func_344(uParam0, iParam1);
		if (iVar1 == 2)
		{
			__LIB_12__::func_315(uParam0, iParam1, 1);
		}
		if (!PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_KEEP_TASK(iVar0, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
}

void func_260(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	__LIB_0__::func_734(iVar0);
	__LIB_0__::func_288(iParam0, 60, 1);
	if (bParam1)
	{
		__LIB_18__::func_567(iParam0);
	}
}

void func_261(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	__LIB_0__::func_735(iVar0);
	__LIB_0__::func_290(iParam0, 60, 1);
	if (bParam1)
	{
		__LIB_18__::func_568(iParam0);
	}
}

void func_262(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	__LIB_0__::func_736(iVar0);
	if (iParam0 == 14)
	{
		__LIB_0__::func_985(iVar0);
	}
	__LIB_0__::func_288(iParam0, 61, 1);
	if (bParam1)
	{
		__LIB_18__::func_569(iParam0);
	}
}

void func_263(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	__LIB_0__::func_737(iVar0);
	__LIB_0__::func_290(iParam0, 61, 1);
	if (bParam1)
	{
		__LIB_18__::func_570(iParam0);
	}
}

int func_264(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_177(iParam0);
	if (__LIB_0__::func_272(iVar0, 0))
	{
		if (__LIB_0__::func_272(PED::_GET_RIDER_OF_MOUNT(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !__LIB_0__::func_211(iParam0)) || __LIB_0__::func_212(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && __LIB_0__::func_232(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = __LIB_13__::func_838(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					__LIB_0__::func_515(iParam0);
					PERSCHAR::_0x7B204F88F6C3D287(__LIB_18__::func_704(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(__LIB_18__::func_704(iParam0, 0));
					__LIB_0__::func_233(iParam0);
				}
			}
			else
			{
				if (__LIB_0__::func_273(iParam0, 32768, 1))
				{
					iVar2 = __LIB_18__::func_704(iParam0, 0);
					PERSCHAR::_0xB65E7F733956CF25(iVar2);
					PERSCHAR::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (__LIB_0__::func_273(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				__LIB_0__::func_515(iParam0);
				PERSCHAR::_0x7B204F88F6C3D287(__LIB_18__::func_704(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(__LIB_18__::func_704(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				__LIB_0__::func_515(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	__LIB_0__::func_234(iParam0, 0);
	return 1;
}

bool func_265(var uParam0)
{
	float fVar0;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_10__::func_62(uParam0->f_300, uParam0->f_65), Global_36, true);
	if (__LIB_0__::func_272(uParam0->f_69, 0))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_69, 49, true);
	}
	if (__LIB_2__::func_157(uParam0->f_306, Global_36))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 328, true);
	}
	if (!__LIB_0__::func_27(uParam0->f_329, 8388608))
	{
		__LIB_18__::func_576(uParam0);
		__LIB_10__::func_196(uParam0);
		if (!__LIB_0__::func_27(uParam0->f_329, 256))
		{
			if (!__LIB_0__::func_163(Global_35, -76381094) && !__LIB_0__::func_266(Global_35, __LIB_10__::func_62(uParam0->f_300, uParam0->f_65), 2f, 1, 1))
			{
				__LIB_13__::func_144(uParam0);
			}
		}
		else if (__LIB_0__::func_27(uParam0->f_329, 512) && !__LIB_0__::func_27(uParam0->f_328, 32))
		{
			__LIB_10__::func_187(uParam0);
		}
		if (!__LIB_0__::func_27(uParam0->f_328, 2097152))
		{
			__LIB_10__::func_134(uParam0);
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
	{
		__LIB_3__::func_459(uParam0->f_67, 0);
	}
	if (fVar0 > 50f)
	{
		return true;
	}
	if (__LIB_10__::func_145(uParam0))
	{
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_308))
	{
		if (!__LIB_2__::func_157(uParam0->f_306, Global_36))
		{
			__LIB_1__::func_544(uParam0->f_308);
			__LIB_0__::func_172(uParam0->f_308);
		}
	}
	return false;
}

void func_266(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (__LIB_18__::func_579(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

bool func_267(var uParam0)
{
	float fVar0;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_10__::func_62(uParam0->f_300, uParam0->f_65), Global_36, true);
	if (__LIB_0__::func_272(uParam0->f_69, 0))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_69, 49, true);
	}
	if (__LIB_2__::func_157(uParam0->f_306, Global_36))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 328, true);
	}
	if (!__LIB_0__::func_27(uParam0->f_329, 8388608))
	{
		__LIB_18__::func_584(uParam0);
		__LIB_10__::func_196(uParam0);
		if (!__LIB_0__::func_27(uParam0->f_329, 256))
		{
			if (!__LIB_0__::func_163(Global_35, -76381094) && !__LIB_0__::func_266(Global_35, __LIB_10__::func_62(uParam0->f_300, uParam0->f_65), 2f, 1, 1))
			{
				__LIB_13__::func_128(uParam0);
			}
		}
		else if (__LIB_0__::func_27(uParam0->f_329, 512) && !__LIB_0__::func_27(uParam0->f_328, 32))
		{
			__LIB_10__::func_187(uParam0);
		}
		if (!__LIB_0__::func_27(uParam0->f_328, 2097152))
		{
			__LIB_10__::func_134(uParam0);
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
	{
		__LIB_3__::func_459(uParam0->f_67, 0);
	}
	if (fVar0 > 50f)
	{
		return true;
	}
	if (__LIB_10__::func_145(uParam0))
	{
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_308))
	{
		if (!__LIB_2__::func_157(uParam0->f_306, Global_36))
		{
			__LIB_1__::func_544(uParam0->f_308);
			__LIB_0__::func_172(uParam0->f_308);
		}
	}
	return false;
}

void func_268(int iParam0)
{
	switch (iParam0->f_26)
	{
		case 0:
			__LIB_18__::func_589(iParam0);
			__LIB_18__::func_588(iParam0);
			if (iParam0->f_6)
			{
				iParam0->f_26 = 1;
			}
			else
			{
				iParam0->f_26 = 2;
			}
			break;
		case 1:
			__LIB_18__::func_588(iParam0);
			if (!__LIB_0__::func_75(&(iParam0->f_32)))
			{
				__LIB_1__::func_283(&(iParam0->f_32), 0);
			}
			else if (!__LIB_1__::func_410(Global_36, __LIB_13__::func_236(), 1f, 1) && __LIB_0__::func_265(&(iParam0->f_32)) > 3f)
			{
				__LIB_0__::func_37(&(iParam0->f_32));
				iParam0->f_26 = 2;
				iParam0->f_6 = 0;
			}
			break;
		case 2:
			if (__LIB_18__::func_590() && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_15, __LIB_13__::func_244(iParam0->f_21)))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_15, __LIB_13__::func_244(iParam0->f_21), true);
				__LIB_18__::func_588(iParam0);
				__LIB_18__::func_591(iParam0);
				__LIB_1__::func_148(&(iParam0->f_22));
				iParam0->f_26 = 3;
			}
			else if (!ANIMSCENE::_0x1F0E401031E20146(iParam0->f_15, __LIB_13__::func_238(1)))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_15, __LIB_13__::func_238(1), true);
			}
			break;
		case 3:
			if (__LIB_0__::func_264(&(iParam0->f_22)) >= __LIB_13__::func_245(iParam0->f_21))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_15, __LIB_13__::func_238(1)))
				{
					iParam0->f_25 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 6f);
					__LIB_1__::func_148(&(iParam0->f_22));
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_15, __LIB_13__::func_244(iParam0->f_21));
					__LIB_18__::func_589(iParam0);
					__LIB_13__::func_246(iParam0);
					iParam0->f_26 = 4;
				}
				else
				{
					__LIB_18__::func_588(iParam0);
				}
			}
			else
			{
				__LIB_18__::func_592(iParam0);
			}
			break;
		case 4:
			if (__LIB_0__::func_264(&(iParam0->f_22)) >= iParam0->f_25)
			{
				if (__LIB_18__::func_590())
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_15, __LIB_13__::func_244(iParam0->f_21)))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_15, __LIB_13__::func_244(iParam0->f_21), true);
						__LIB_18__::func_591(iParam0);
						__LIB_1__::func_148(&(iParam0->f_22));
						iParam0->f_26 = 3;
					}
				}
				else
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_15, __LIB_13__::func_244(iParam0->f_21), true);
					iParam0->f_26 = 2;
				}
			}
			break;
	}
}

void func_269(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (__LIB_18__::func_594(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

void func_270(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (__LIB_18__::func_597(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

void func_271(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	vVar0 = { __LIB_1__::func_440(uParam0->f_174) };
	fVar3 = BUILTIN::VDIST2(Global_36, vVar0);
	if (!MAP::DOES_BLIP_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_37))
	{
		if (uParam0->f_177 == 4 || uParam0->f_177 == 3)
		{
			fVar4 = __LIB_11__::func_131(uParam0->f_174);
			if ((Global_1347702[uParam0->f_174 /*49*/].f_36 != joaat("BLIP_RC") || __LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 32)) || fVar3 < (fVar4 * fVar4))
			{
				__LIB_9__::func_240(uParam0->f_174, vVar0, 1, 0);
			}
		}
	}
	else
	{
		__LIB_12__::func_664(uParam0->f_174, fVar3);
		__LIB_18__::func_599(uParam0->f_174, vVar0, fVar3);
		__LIB_12__::func_621(uParam0->f_174);
		__LIB_12__::func_622(uParam0->f_174);
	}
}

void func_272(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		__LIB_18__::func_600(uParam0, 0);
	}
	else
	{
		if (!__LIB_0__::func_75(&(uParam0->f_2597)))
		{
			__LIB_1__::func_283(&(uParam0->f_2597), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_1__::func_871(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_177 == 10)
			{
				__LIB_0__::func_11(uParam0);
			}
			else
			{
				__LIB_13__::func_397(uParam0);
			}
			__LIB_13__::func_426(uParam0);
		}
	}
}

bool func_273(var uParam0)
{
	int iVar0;
	bool bVar1;
	switch (__LIB_5__::func_381(&iVar0))
	{
		case 1:
			StringCopy(&(uParam0->f_2578), "", 24);
			__LIB_18__::func_600(uParam0, 0);
			return true;
		case 3:
			if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3398))
			{
				uParam0->f_3398 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
			}
			if (((__LIB_0__::func_6(iVar0) && iVar0 == Global_1347702[uParam0->f_174 /*49*/].f_15) && __LIB_0__::func_1(uParam0->f_172, 8)) && (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 134217728) || __LIB_0__::func_13(32768)))
			{
				bVar1 = true;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3398, bVar1);
			break;
	}
	return false;
}

void func_274(int iParam0, int iParam1)
{
	switch (Local_14)
	{
		case 0:
			if (((__LIB_0__::func_2() != 0 && ENTITY::DOES_ENTITY_EXIST(iParam1)) && __LIB_13__::func_437()) && __LIB_13__::func_438(iParam1))
			{
				__LIB_13__::func_439(1);
			}
			break;
		case 1:
			break;
		case 2:
			if (__LIB_18__::func_602(iParam0))
			{
				__LIB_13__::func_439(3);
			}
			break;
		case 3:
			break;
		case 4:
			if (__LIB_13__::func_440())
			{
				__LIB_13__::func_439(1);
			}
			break;
		case 5:
			__LIB_18__::func_603();
			break;
	}
	if (((Local_14 == 1 || Local_14 == 2) || Local_14 == 3) || Local_14 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_5))
		{
			PHYSICS::ACTIVATE_PHYSICS(Local_14.f_5);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_6))
		{
			PHYSICS::ACTIVATE_PHYSICS(Local_14.f_6);
		}
	}
}

void func_275(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (__LIB_18__::func_607(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_276()
{
	return __LIB_18__::func_622(48, __LIB_5__::func_297(Global_1347702[74 /*49*/].f_15));
}

void func_277(int iParam0, int* iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	__LIB_3__::func_95(iParam1, *iParam0, iParam1->f_56, 0);
	fVar0 = __LIB_0__::func_514(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	__LIB_3__::func_27(iParam1, fParam3);
	__LIB_18__::func_623(iParam0, iParam1, uParam2, fVar0);
	__LIB_12__::func_959(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		__LIB_11__::func_414(iParam1, uParam2, iParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = __LIB_6__::func_789(iParam1, iParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				__LIB_13__::func_461(iParam1);
			}
		}
	}
}

void func_278(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		__LIB_18__::func_646(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		__LIB_18__::func_646(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		__LIB_18__::func_646(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		__LIB_18__::func_646(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		__LIB_18__::func_646(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		__LIB_18__::func_646(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		__LIB_18__::func_646(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		__LIB_18__::func_646(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		__LIB_18__::func_646(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		__LIB_18__::func_646(-1, iParam0);
	}
}

void func_279(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (__LIB_18__::func_628(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

bool func_280(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	if (__LIB_18__::func_637(uParam0, uParam1))
	{
		return true;
	}
	if (!__LIB_3__::func_761(uParam0, 1048576))
	{
		if (uParam0->f_82)
		{
			iVar0 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
			iVar1 = (iVar0 - uParam1->f_5);
			fVar2 = __LIB_3__::func_837(uParam0, 0);
			if (IntToFloat(iVar1) >= (fVar2 * 1000f))
			{
				return true;
			}
			if (__LIB_0__::func_239(uParam1, 1048576))
			{
				iVar3 = (iVar0 - uParam1->f_6);
				fVar4 = __LIB_3__::func_837(uParam0, 1);
				if (IntToFloat(iVar3) >= (fVar4 * 1000f))
				{
					return true;
				}
			}
			if (__LIB_0__::func_239(uParam1, 16))
			{
				iVar5 = (iVar0 - uParam1->f_7);
				fVar6 = __LIB_3__::func_837(uParam0, 2);
				if (IntToFloat(iVar5) >= (fVar6 * 1000f))
				{
					return true;
				}
			}
		}
		else
		{
			if (__LIB_3__::func_514(&(uParam1->f_35), __LIB_3__::func_837(uParam0, 0)))
			{
				return true;
			}
			if (__LIB_3__::func_514(&(uParam1->f_38), __LIB_3__::func_837(uParam0, 1)))
			{
				return true;
			}
			if (__LIB_3__::func_514(&(uParam1->f_41), __LIB_3__::func_837(uParam0, 2)))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_281(var uParam0)
{
	if (!__LIB_17__::func_784(*uParam0, uParam0->f_4))
	{
		return false;
	}
	return true;
}

bool func_282(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	if (__LIB_18__::func_645(uParam0, uParam1))
	{
		return true;
	}
	if (!__LIB_3__::func_761(uParam0, 1048576))
	{
		if (uParam0->f_82)
		{
			iVar0 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
			iVar1 = (iVar0 - uParam1->f_5);
			fVar2 = __LIB_3__::func_837(uParam0, 0);
			if (IntToFloat(iVar1) >= (fVar2 * 1000f))
			{
				return true;
			}
			if (__LIB_0__::func_239(uParam1, 1048576))
			{
				iVar3 = (iVar0 - uParam1->f_6);
				fVar4 = __LIB_3__::func_837(uParam0, 1);
				if (IntToFloat(iVar3) >= (fVar4 * 1000f))
				{
					return true;
				}
			}
			if (__LIB_0__::func_239(uParam1, 16))
			{
				iVar5 = (iVar0 - uParam1->f_7);
				fVar6 = __LIB_3__::func_837(uParam0, 2);
				if (IntToFloat(iVar5) >= (fVar6 * 1000f))
				{
					return true;
				}
			}
		}
		else
		{
			if (__LIB_1__::func_285(&(uParam1->f_35), __LIB_3__::func_837(uParam0, 0)))
			{
				return true;
			}
			if (__LIB_1__::func_285(&(uParam1->f_38), __LIB_3__::func_837(uParam0, 1)))
			{
				return true;
			}
			if (__LIB_1__::func_285(&(uParam1->f_41), __LIB_3__::func_837(uParam0, 2)))
			{
				return true;
			}
		}
	}
	return false;
}

void func_283()
{
	if (__LIB_13__::func_691())
	{
		iLocal_210 = 0;
		__LIB_18__::func_649();
		__LIB_13__::func_718(0);
		if (!bLocal_212)
		{
			bLocal_212 = true;
		}
	}
	else if (__LIB_8__::func_954() && Global_1935496.f_30 == joaat("WEAPON_KIT_CAMERA"))
	{
		iLocal_210 = Global_1935496.f_30;
		__LIB_13__::func_696("CAMERA_BCRUMB3", &uLocal_217);
		__LIB_13__::func_721(3);
		__LIB_13__::func_718(1);
	}
	else if (__LIB_8__::func_954() && Global_1935496.f_30 != joaat("WEAPON_KIT_CAMERA"))
	{
		iLocal_210 = Global_1935496.f_30;
		__LIB_13__::func_696("CAMERA_BCRUMB2", &uLocal_216);
		__LIB_13__::func_721(2);
		__LIB_13__::func_718(1);
	}
	else if (__LIB_4__::func_365())
	{
		iLocal_210 = Global_1935496.f_30;
		__LIB_13__::func_696("CAMERA_BCRUMB1", &uLocal_215);
		__LIB_13__::func_721(1);
		__LIB_13__::func_718(0);
	}
	else if (iLocal_210 != joaat("WEAPON_KIT_CAMERA"))
	{
		__LIB_13__::func_696("CAMERA_BCRUMB0", &uLocal_214);
		__LIB_13__::func_721(0);
		__LIB_13__::func_718(0);
	}
	else
	{
		__LIB_18__::func_649();
		__LIB_13__::func_718(0);
	}
}

void func_284()
{
	__LIB_18__::func_652(7);
}

void func_285()
{
	__LIB_18__::func_652(9);
}

void func_286()
{
	__LIB_18__::func_652(6);
}

void func_287()
{
	__LIB_18__::func_652(8);
}

bool func_288()
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_18__::func_664(43))
	{
		iVar0++;
	}
	if (__LIB_18__::func_664(18))
	{
		iVar0++;
	}
	if (__LIB_18__::func_664(40))
	{
		iVar0++;
	}
	if (__LIB_18__::func_664(19))
	{
		iVar0++;
	}
	return iVar0 >= 3;
}

void func_289()
{
	__LIB_18__::func_650(9);
}

void func_290()
{
	__LIB_18__::func_652(11);
}

void func_291(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!__LIB_18__::func_653(iVar0, iParam1))
		{
			if (!__LIB_13__::func_766(iParam2, __LIB_13__::func_735(iVar0, iParam1), uParam0[iVar0], __LIB_13__::func_765(iVar0), joaat("PG_HERBALISTCAMP01X_NOTABLE")))
			{
			}
		}
		iVar0++;
	}
}

void func_292(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			__LIB_18__::func_678(iParam0, Global_35, 2, 28, bParam2);
			__LIB_18__::func_678(iParam0, Global_35, 2, 29, bParam2);
		}
		else
		{
			__LIB_18__::func_678(iParam0, Global_35, 0, 9, bParam2);
			__LIB_18__::func_678(iParam0, Global_35, 0, 14, bParam2);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, -469521200) && !bParam2)
		{
			bVar0 = __LIB_0__::func_181();
			if (bParam3)
			{
				if (!bVar0)
				{
					__LIB_2__::func_478(iParam0, Global_35, "RE_HEC_UNI_V1_CALLOVER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(iParam0, Global_35, "RE_HEC_UNI_V1_CALLOVER_INTRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (!bParam4)
			{
				__LIB_2__::func_478(iParam0, Global_35, "RE_HEC_UNI_V1_CALLOVER_2ND", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(iParam0, Global_35, "RE_HEC_UNI_V1_CALLOVER_LEFT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
		__LIB_18__::func_678(iParam0, Global_35, 0, 3, 0);
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
		{
			__LIB_18__::func_678(iParam0, Global_35, 1, 20, 0);
		}
		else
		{
			__LIB_18__::func_678(iParam0, Global_35, 1, 21, 0);
		}
		__LIB_18__::func_678(iParam0, Global_35, 6, 53, 0);
		__LIB_18__::func_678(iParam0, Global_35, 6, 54, 0);
		__LIB_18__::func_678(iParam0, Global_35, 6, 51, 0);
		__LIB_18__::func_678(iParam0, Global_35, 6, 52, 0);
		__LIB_18__::func_678(iParam0, Global_35, 6, 55, 0);
		__LIB_18__::func_678(iParam0, Global_35, 6, 56, 0);
		__LIB_18__::func_678(iParam0, Global_35, 4, 41, 0);
		__LIB_18__::func_678(iParam0, Global_35, 4, 42, 0);
		__LIB_18__::func_678(iParam0, Global_35, 4, 39, 0);
		__LIB_18__::func_678(iParam0, Global_35, 4, 40, 0);
		__LIB_18__::func_678(iParam0, Global_35, 4, 43, 0);
		__LIB_18__::func_678(iParam0, Global_35, 4, 44, 0);
		__LIB_18__::func_678(iParam0, Global_35, 3, 35, 0);
		__LIB_18__::func_678(iParam0, Global_35, 3, 36, 0);
		__LIB_18__::func_678(iParam0, Global_35, 3, 33, 0);
		__LIB_18__::func_678(iParam0, Global_35, 3, 34, 0);
		__LIB_18__::func_678(iParam0, Global_35, 3, 37, 0);
		__LIB_18__::func_678(iParam0, Global_35, 3, 38, 0);
		__LIB_18__::func_678(iParam0, Global_35, 5, 47, 0);
		__LIB_18__::func_678(iParam0, Global_35, 5, 48, 0);
		__LIB_18__::func_678(iParam0, Global_35, 5, 45, 0);
		__LIB_18__::func_678(iParam0, Global_35, 5, 46, 0);
		__LIB_18__::func_678(iParam0, Global_35, 5, 49, 0);
		__LIB_18__::func_678(iParam0, Global_35, 5, 50, 0);
	}
}

bool func_293(int iParam0, bool bParam1)
{
	if (bParam1 && !__LIB_18__::func_679(iParam0))
	{
		return false;
	}
	return __LIB_13__::func_727(iParam0, 41);
}

int func_294(int iParam0, var uParam1, var uParam2)
{
	return __LIB_18__::func_681(iParam0, uParam1);
}

bool func_295(int iParam0, var uParam1, var uParam2)
{
	return __LIB_18__::func_682(iParam0, uParam1);
}

void func_296(int iParam0)
{
	if (__LIB_13__::func_727(iParam0, 63))
	{
		__LIB_18__::func_684(&(iParam0->f_284.f_97[0 /*17*/]), &(iParam0->f_284.f_21[0 /*17*/]), 1);
		__LIB_13__::func_730(iParam0, 63);
	}
}

void func_297(int iParam0)
{
	__LIB_13__::func_731(iParam0, 131072);
	__LIB_18__::func_686(iParam0, 0, 1);
}

void func_298(int iParam0)
{
	if (__LIB_18__::func_690(iParam0, 2))
	{
		if (iParam0->f_203 != 20)
		{
			__LIB_1__::func_148(&(iParam0->f_441));
		}
	}
}

void func_299(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam3 == -1)
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			__LIB_18__::func_695(&(iParam0->f_222[iParam1]), &(iParam0->f_234[iParam3]), 0);
			break;
		case 1:
			__LIB_18__::func_696(&(iParam0->f_222[iParam1]), &(iParam0->f_234[iParam3]), bParam4, 0);
			break;
		case 2:
			__LIB_18__::func_697(&(iParam0->f_222[iParam1]), &(iParam0->f_234[iParam3]), 0);
			break;
	}
}

void func_300(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_13__::func_774(iParam0);
	if (iVar0 != -1)
	{
		__LIB_18__::func_652(iVar0);
	}
	if (__LIB_0__::func_181())
	{
		__LIB_18__::func_652(5);
	}
}

bool func_301(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (__LIB_0__::func_27(iParam2, 2))
	{
		return false;
	}
	if (!__LIB_13__::func_781(iParam0, 0, 0))
	{
		return false;
	}
	if (__LIB_18__::func_701(iParam0, iParam2))
	{
		return true;
	}
	if (__LIB_13__::func_818(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_27(iParam2, 65536))
	{
		if (!__LIB_13__::func_780(iParam0, joaat("SCRIPT_COMMON_STAND_HERBALIST")) || !__LIB_0__::func_27(iParam2, 131072))
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (__LIB_0__::func_27(iParam2, 4))
		{
			if (__LIB_13__::func_830(iParam0, 0))
			{
				*bParam1 = 1;
				return true;
			}
		}
		else if (__LIB_0__::func_48(Global_35, iParam0->f_7, 20f, 1))
		{
			return true;
		}
	}
	return false;
}

int func_302(int iParam0, var uParam1, int iParam2)
{
	if (PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_7))
	{
		if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
		{
			TASK::_0xE7FA07624574B79A(iParam0->f_7, Global_35, 2, 2, -1f, 1000, 0, 0, 0);
		}
	}
	switch (iParam0->f_524)
	{
		case 0:
			if (__LIB_13__::func_819(iParam0, -1))
			{
				iParam0->f_524 = 2;
				__LIB_1__::func_148(&(iParam0->f_499));
				return 1;
			}
			break;
		case 2:
			if (__LIB_13__::func_819(iParam0, -1))
			{
				iParam0->f_524 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_75(&(iParam0->f_499)))
			{
				if (__LIB_1__::func_313(&(iParam0->f_499), 2f))
				{
					__LIB_18__::func_702(iParam0);
				}
			}
			else if (!__LIB_2__::func_136(iParam0->f_7, 1))
			{
				__LIB_13__::func_724(iParam0, 61);
				return 4;
			}
			break;
	}
	return 0;
}

int func_303(int iParam0, var uParam1, int iParam2)
{
	if (PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_7))
	{
		if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
		{
			TASK::_0xE7FA07624574B79A(iParam0->f_7, Global_35, 3, 2, -1f, 1000, 0, 0, 0);
		}
	}
	switch (iParam0->f_524)
	{
		case 0:
			if (__LIB_13__::func_819(iParam0, -1))
			{
				iParam0->f_524 = 2;
				if (PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_7))
				{
					TASK::_0xE7FA07624574B79A(iParam0->f_7, Global_35, 3, 2, -1f, 1000, 0, 0, 0);
				}
				if (iParam2 == 5)
				{
					if (iParam0->f_1 != 12)
					{
						__LIB_13__::func_724(iParam0, 51);
					}
				}
				__LIB_1__::func_148(&(iParam0->f_499));
				return 1;
			}
			break;
		case 2:
			if (__LIB_13__::func_819(iParam0, -1))
			{
				iParam0->f_524 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_75(&(iParam0->f_499)))
			{
				if (__LIB_1__::func_313(&(iParam0->f_499), 2f))
				{
					__LIB_18__::func_702(iParam0);
				}
			}
			else if (!__LIB_2__::func_136(iParam0->f_7, 1))
			{
				return 4;
			}
			break;
	}
	return 0;
}

int func_304(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	bVar1 = false;
	switch (iParam0->f_524)
	{
		case 0:
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0->f_7, iParam0->f_90[2], true);
			__LIB_13__::func_724(iParam0, 46);
			if (!PED::_0x62FDAD5E01D2DD47(iParam0->f_7, Global_36, 2, 0))
			{
				if (!PED::_0xEC6935EBE0847B90(iParam0->f_7, Global_36))
				{
					PED::_0xA3A9299C4F2ADB98(iParam0->f_7);
				}
			}
			iParam0->f_512 = -1;
			iParam0->f_513 = -1;
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (__LIB_18__::func_703(iParam0))
				{
					TASK::TASK_CONFRONT(0, Global_35, 2);
					iParam0->f_512++;
					bVar1 = true;
				}
			}
			if (!bVar1)
			{
				if (__LIB_13__::func_804(iParam0))
				{
					__LIB_2__::func_45(0, Global_35, 0);
					iParam0->f_512++;
					iParam0->f_513++;
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 1000, -1f, -1f, -1f);
					iParam0->f_512++;
				}
			}
			if (bParam3)
			{
				if (!bVar1)
				{
					TASK::TASK_CONFRONT(0, Global_35, 2);
				}
				TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 2f, 1f, 2f, 0);
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			}
			__LIB_1__::func_474(iParam0->f_7, &iVar0, 0, 0, 1, 1);
			iParam0->f_524 = 1;
			break;
		case 1:
			if (__LIB_13__::func_819(iParam0, iParam0->f_513))
			{
				__LIB_1__::func_148(&(iParam0->f_499));
				iParam0->f_524 = 2;
				if (bParam3)
				{
					if (!PED::IS_PED_USING_ACTION_MODE(iParam0->f_7))
					{
						PED::SET_PED_USING_ACTION_MODE(iParam0->f_7, true, -1, 0);
					}
				}
				return 1;
			}
			break;
		case 2:
			if (__LIB_2__::func_136(iParam0->f_7, 1) || __LIB_1__::func_285(&(iParam0->f_499), 2f))
			{
				iParam0->f_524 = 3;
			}
			break;
		case 3:
			if (!__LIB_2__::func_136(iParam0->f_7, 1))
			{
				if ((!__LIB_0__::func_163(iParam0->f_7, 242628503) || TASK::GET_SEQUENCE_PROGRESS(iParam0->f_7) > iParam0->f_512) || !__LIB_0__::func_266(Global_35, __LIB_3__::func_179(uParam1), 14f, 1, 1))
				{
					return 4;
				}
			}
			break;
	}
	return 0;
}

int func_305(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	switch (iParam0->f_524)
	{
		case 0:
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0->f_7, iParam0->f_90[2], true);
			__LIB_13__::func_724(iParam0, 46);
			if (!PED::_0x62FDAD5E01D2DD47(iParam0->f_7, Global_36, 3, 0))
			{
				if (!PED::_0xEC6935EBE0847B90(iParam0->f_7, Global_36))
				{
					PED::_0xA3A9299C4F2ADB98(iParam0->f_7);
				}
			}
			PED::SET_PED_USING_ACTION_MODE(iParam0->f_7, true, -1, 0);
			iParam0->f_512 = -1;
			iParam0->f_513 = -1;
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (__LIB_13__::func_804(iParam0))
			{
				__LIB_2__::func_45(0, Global_35, 0);
				iParam0->f_512++;
				iParam0->f_513++;
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 1000, -1f, -1f, -1f);
				iParam0->f_512++;
			}
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (__LIB_18__::func_703(iParam0))
				{
					TASK::TASK_CONFRONT(0, Global_35, 2);
					iParam0->f_512++;
				}
			}
			if (__LIB_0__::func_153(iParam0->f_7, 0, 1, 0) != joaat("WEAPON_MELEE_KNIFE"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_7, joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				iParam0->f_512++;
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			__LIB_1__::func_474(iParam0->f_7, &iVar0, 0, 0, 1, 1);
			iParam0->f_524 = 1;
			break;
		case 1:
			if (__LIB_13__::func_819(iParam0, iParam0->f_513))
			{
				__LIB_1__::func_148(&(iParam0->f_499));
				PED::SET_PED_USING_ACTION_MODE(iParam0->f_7, true, -1, 0);
				iParam0->f_524 = 2;
				return 1;
			}
			break;
		case 2:
			if (__LIB_2__::func_136(iParam0->f_7, 1) || __LIB_1__::func_285(&(iParam0->f_499), 2f))
			{
				iParam0->f_524 = 3;
			}
			break;
		case 3:
			if (!__LIB_2__::func_136(iParam0->f_7, 1))
			{
				if ((!__LIB_0__::func_163(iParam0->f_7, 242628503) || TASK::GET_SEQUENCE_PROGRESS(iParam0->f_7) > iParam0->f_512) || !__LIB_0__::func_266(Global_35, __LIB_3__::func_179(uParam1), 14f, 1, 1))
				{
					return 4;
				}
			}
			break;
	}
	return 0;
}

int func_306(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	switch (iParam0->f_524)
	{
		case 0:
			PED::SET_PED_USING_ACTION_MODE(iParam0->f_7, true, -1, 0);
			__LIB_13__::func_724(iParam0, 46);
			iParam0->f_512 = -1;
			iParam0->f_513 = -1;
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (__LIB_13__::func_804(iParam0))
			{
				__LIB_2__::func_45(0, Global_35, 0);
				iParam0->f_512++;
				iParam0->f_513++;
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 1000, -1f, -1f, -1f);
				iParam0->f_512++;
			}
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (__LIB_18__::func_703(iParam0))
				{
					TASK::TASK_CONFRONT(0, Global_35, 2);
					iParam0->f_512++;
				}
			}
			else
			{
				TASK::TASK_MOUNT_ANIMAL(0, PED::GET_MOUNT(Global_35), -1, -1, 1.5f, 524288, 0, 0);
				iParam0->f_512++;
			}
			if (__LIB_13__::func_727(iParam0, 57))
			{
				if (__LIB_0__::func_153(iParam0->f_7, 0, 1, 0) != joaat("WEAPON_MELEE_KNIFE"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_7, joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					iParam0->f_512++;
				}
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			}
			else
			{
				iParam0->f_512++;
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			}
			__LIB_1__::func_474(iParam0->f_7, &iVar0, 0, 0, 1, 1);
			iParam0->f_524 = 1;
			break;
		case 1:
			if (__LIB_13__::func_819(iParam0, iParam0->f_513))
			{
				__LIB_1__::func_148(&(iParam0->f_499));
				iParam0->f_524 = 2;
				return 1;
			}
			break;
		case 2:
			if (__LIB_2__::func_136(iParam0->f_7, 1) || __LIB_1__::func_285(&(iParam0->f_499), 2f))
			{
				iParam0->f_524 = 3;
			}
			break;
		case 3:
			if (!__LIB_2__::func_136(iParam0->f_7, 1))
			{
				if ((!__LIB_0__::func_163(iParam0->f_7, 242628503) || TASK::GET_SEQUENCE_PROGRESS(iParam0->f_7) > iParam0->f_512) || !__LIB_0__::func_266(Global_35, __LIB_3__::func_179(uParam1), 14f, 1, 1))
				{
					return 4;
				}
			}
			break;
	}
	return 0;
}

void func_307(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (*uParam0 == *uParam1)
	{
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			__LIB_18__::func_684(uParam0[iVar0 /*17*/], uParam1[iVar0 /*17*/], bParam2);
			iVar0++;
		}
	}
}

int func_308(int iParam0)
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_7))
	{
		return 1;
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_7, false);
	if (__LIB_13__::func_780(iParam0, joaat("SCRIPT_COMMON_STAND_HERBALIST")))
	{
		if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
		{
			if (TASK::_0x02EBBB3989B7E695(iParam0->f_7))
			{
				return 1;
			}
		}
		else
		{
			__LIB_18__::func_687(iParam0);
		}
	}
	else if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
	{
		if (TASK::_0x02EBBB3989B7E695(iParam0->f_7))
		{
			switch (PED::_0x569F1E1237508DEB(iParam0->f_7))
			{
				case joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST"):
					if (!PED::_0x68821369A2CEADD5(iParam0->f_7, joaat("REHOB_MIX_2_STAND")))
					{
						PED::_0xD65FDC686A031C83(iParam0->f_7, joaat("REHOB_MIX_2_STAND"), 0.5f);
					}
					break;
				case joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST"):
					if (!PED::_0x68821369A2CEADD5(iParam0->f_7, joaat("REHOB_LEAN_2_STAND")))
					{
						PED::_0xD65FDC686A031C83(iParam0->f_7, joaat("REHOB_LEAN_2_STAND"), 0.5f);
					}
					break;
			}
		}
	}
	else
	{
		__LIB_18__::func_687(iParam0);
	}
	return 0;
}

void func_309(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam1))
	{
		return;
	}
	iVar0 = __LIB_0__::func_177(iParam1);
	if (__LIB_0__::func_211(iParam1))
	{
		if (!__LIB_0__::func_212(iParam1))
		{
			return;
		}
	}
	__LIB_0__::func_290(iParam1, 39, 1);
	__LIB_0__::func_213(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	__LIB_0__::func_213(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			__LIB_0__::func_213(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			__LIB_0__::func_288(iParam1, 43, 1);
		}
		if (bParam4)
		{
			__LIB_19__::func_264(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_310(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (__LIB_18__::func_715(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

bool func_311(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return __LIB_18__::func_296(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam2);
	}
	return false;
}

bool func_312(int* iParam0)
{
	var uVar0;
	bool bVar1;
	if (MISC::IS_BIT_SET(iParam0->f_21, 8) || MISC::IS_BIT_SET(*iParam0, 11))
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		if (__LIB_1__::func_750(&uVar0))
		{
			__LIB_1__::func_283(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (__LIB_10__::func_250())
			{
			}
		}
		else
		{
			__LIB_1__::func_283(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = __LIB_0__::func_264(&(iParam0->f_37)) >= 1.5f;
		if ((!__LIB_1__::func_750(&uVar0) || __LIB_10__::func_250()) || bVar1)
		{
			if (bVar1)
			{
				__LIB_18__::func_716();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return true;
		}
	}
	return false;
}

void func_313(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			if (!EVENT::_0x1D1B448D719415AB(uParam0->f_2[iVar0]))
			{
			}
			else if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar0], false, false), 1.5f, true, true) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar0], false, false), 1f, true))
			{
				if (__LIB_18__::func_725(uParam0, 60f, iVar0, 0, 1, 1))
				{
					EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
				}
				else
				{
					iVar1 = -1;
					iVar1 = EVENT::_0xAD17A18215DD23D6(uParam0->f_2[iVar0], 0, 0);
					if (iVar1 > -1)
					{
						if (iVar1 > 2000)
						{
							EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
						}
						else
						{
							iVar2 = EVENT::_0x796EECFF0C6D39BE(uParam0->f_2[iVar0], 0, 0);
							if (iVar2 != 0)
							{
								iVar3 = EVENT::_0x822A001BCEA5BD81(uParam0->f_2[iVar0], iVar2, 0, 0);
							}
							else
							{
								EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
							}
							else if (__LIB_11__::func_474(uParam0, iVar0))
							{
								if (iVar2 == joaat("EVENT_ANIMAL_DETECTED_THREAT") && !__LIB_0__::func_163(uParam0->f_2[iVar0], 713668775))
								{
									if (((ENTITY::DOES_ENTITY_EXIST(iVar3) && !PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3))) && !__LIB_0__::func_125(iVar3)) && !__LIB_4__::func_156(uParam0, 131072))
									{
										if (__LIB_18__::func_725(uParam0, 60f, iVar0, iVar3, 1, 0))
										{
											EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
										}
										else
										{
											Jump @399; //curOff = 380
											EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
											Jump @939; //curOff = 396
											Jump @418; //curOff = 399
											EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
											Jump @939; //curOff = 415
											if (iVar2 == joaat("EVENT_ANIMAL_DETECTED_THREAT"))
											{
												if (ENTITY::DOES_ENTITY_EXIST(iVar3))
												{
													if (ENTITY::IS_ENTITY_A_PED(iVar3))
													{
														if ((PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3)) || __LIB_0__::func_125(iVar3)) || __LIB_4__::func_156(uParam0, 131072))
														{
															EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
														}
														else
														{
															if (iVar2 == joaat("EVENT_DAMAGE"))
															{
																if (ENTITY::DOES_ENTITY_EXIST(iVar3))
																{
																	if (ENTITY::IS_ENTITY_AN_OBJECT(iVar3))
																	{
																		EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
																		Jump @939; //curOff = 544
																	}
																	else if (__LIB_11__::func_475(uParam0, &iVar3))
																	{
																		EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
																	}
																	else
																	{
																		Jump @605; //curOff = 577
																		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
																		{
																		}
																		else
																		{
																			vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar3, false, false) };
																		}
																		if (FLOCK::_0x8D913E493BAFE0A3(*uParam0) && iVar2 != joaat("EVENT_ON_FIRE"))
																		{
																			if (__LIB_18__::func_725(uParam0, 60f, iVar0, iVar3, 1, 0))
																			{
																				EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
																				Jump @939; //curOff = 661
																			}
																		else
																		{
																			}
																			else
																			{
																				Jump @925; //curOff = 670
																				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
																				{
																					TASK::_TASK_SMART_FLEE_STYLE_COORD(uParam0->f_2[iVar0], ENTITY::GET_ENTITY_COORDS(iVar3, true, false), 2, 0, 60f, 10000, 0);
																					EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
																					Jump @939; //curOff = 726
																				}
																				else if (iVar2 == joaat("EVENT_ON_FIRE"))
																				{
																					uParam0->f_23[iVar0] = 10;
																					TASK::_TASK_SMART_FLEE_STYLE_COORD(uParam0->f_2[iVar0], ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar0], true, false), 4, 0, 600f, -1, 0);
																					TASK::_0x3923EC958249657D(uParam0->f_2[iVar0], PLAYER::PLAYER_PED_ID(), -1082130432 /* Float: -1f */);
																					TASK::_0xE8F1A5B4CED3725A(uParam0->f_2[iVar0], uParam0->f_613, -1082130432 /* Float: -1f */);
																					EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
																					Jump @939; //curOff = 845
																				}
																				else
																				{
																					TASK::_TASK_SMART_FLEE_STYLE_COORD(uParam0->f_2[iVar0], ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar0], true, false), 2, 0, 60f, 10000, 0);
																					TASK::_0x3923EC958249657D(uParam0->f_2[iVar0], PLAYER::PLAYER_PED_ID(), -1082130432 /* Float: -1f */);
																					EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
																				}
																				else
																				{
																					Jump @939; //curOff = 925
																					__LIB_13__::func_964(uParam0, iVar0, iParam1);
																				}
																			}
																			iVar0++;
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_314(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	if (fParam4 != -1f)
	{
		if (!__LIB_0__::func_899(&(uParam0->f_608)))
		{
			__LIB_2__::func_259(&(uParam0->f_608));
		}
		else if (__LIB_9__::func_178(&(uParam0->f_608)) < fParam4)
		{
			return false;
		}
	}
	if (!FLOCK::_0x8D913E493BAFE0A3(*uParam0))
	{
		return true;
	}
	vVar1 = { __LIB_11__::func_467(uParam0, 0) };
	if (!__LIB_0__::func_86(vVar1))
	{
	}
	else
	{
		return false;
	}
	iVar0 = __LIB_13__::func_977(uParam0);
	iVar4 = __LIB_11__::func_489(uParam0, &iVar0);
	if (iVar4 == -1)
	{
		return false;
	}
	else if (__LIB_18__::func_725(uParam0, fParam1, iVar4, iParam3, bParam5, 0))
	{
		__LIB_2__::func_259(&(uParam0->f_608));
		return true;
	}
	return false;
}

bool func_315(var uParam0, var uParam1)
{
	float fVar0;
	fVar0 = __LIB_18__::func_740(uParam0, uParam1, 1);
	if (fVar0 < (uParam0->f_656 - 5f) || __LIB_13__::func_969(uParam0))
	{
		__LIB_1__::func_561(&(uParam0->f_210.f_43));
		return true;
	}
	return false;
}

bool func_316(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	fVar0 = __LIB_18__::func_740(uParam0, uParam1, iParam2);
	fVar1 = BUILTIN::VMAG(uParam0->f_613 - uParam0->f_616);
	vVar2 = { __LIB_13__::func_941(uParam0) - __LIB_13__::func_950(uParam0) };
	vVar2 = { __LIB_0__::func_173(vVar2) };
	vVar5 = { uParam0->f_613 - uParam0->f_616 };
	vVar5 = { __LIB_0__::func_173(vVar5) };
	fVar8 = MISC::ACOS(__LIB_1__::func_95(vVar2, vVar5));
	if (fVar1 > 0.3f && fVar8 > 145f)
	{
		if (!__LIB_0__::func_899(&(uParam0->f_210.f_61)))
		{
			__LIB_2__::func_259(&(uParam0->f_210.f_61));
		}
	}
	else if (fVar1 > 0.3f && fVar8 < 70f)
	{
		if (__LIB_0__::func_899(&(uParam0->f_210.f_61)))
		{
			__LIB_1__::func_561(&(uParam0->f_210.f_61));
		}
	}
	if (((fVar0 >= uParam0->f_656 || __LIB_10__::func_919(&(uParam0->f_210.f_61)) > 3000) && !__LIB_13__::func_969(uParam0)) && fVar1 != 0f)
	{
		if (__LIB_0__::func_899(&(uParam0->f_210.f_61)))
		{
			__LIB_1__::func_561(&(uParam0->f_210.f_61));
		}
		if (fVar0 >= uParam0->f_656)
		{
		}
		if (__LIB_10__::func_919(&(uParam0->f_210.f_61)) > 3000)
		{
		}
		return true;
	}
	return false;
}

bool func_317(var uParam0, var uParam1)
{
	if (__LIB_11__::func_494(uParam0, 2))
	{
		return false;
	}
	if (__LIB_0__::func_86(uParam0->f_613) || __LIB_0__::func_86(uParam0->f_616))
	{
		return false;
	}
	if (__LIB_13__::func_969(uParam0))
	{
		return false;
	}
	if (__LIB_0__::func_175(uParam0->f_613, uParam0->f_616, 1056964608 /* Float: 0.5f */, 1))
	{
		return false;
	}
	if (__LIB_19__::func_188(uParam0, uParam1, 1))
	{
		return true;
	}
	return false;
}

bool func_318(var uParam0, var uParam1)
{
	if (__LIB_13__::func_969(uParam0))
	{
		return false;
	}
	if (uParam0->f_210.f_76 >= uParam0->f_210.f_75 && uParam0->f_210.f_75 != -1)
	{
		return false;
	}
	if (!__LIB_11__::func_494(uParam0, 16))
	{
		if (__LIB_0__::func_899(&(uParam0->f_210.f_66)))
		{
			__LIB_1__::func_561(&(uParam0->f_210.f_66));
		}
		if (__LIB_0__::func_899(&(uParam0->f_210.f_72)))
		{
			__LIB_1__::func_561(&(uParam0->f_210.f_72));
		}
		return false;
	}
	if (!__LIB_0__::func_899(&(uParam0->f_210.f_66)))
	{
		if (uParam0->f_210.f_76 == 0)
		{
			__LIB_1__::func_585(&(uParam0->f_210.f_66), ((90000f / 1.1f) / 1000f));
		}
		else
		{
			__LIB_2__::func_259(&(uParam0->f_210.f_66));
		}
	}
	if (!__LIB_0__::func_899(&(uParam0->f_210.f_69)))
	{
		__LIB_2__::func_259(&(uParam0->f_210.f_69));
	}
	else
	{
		if (__LIB_19__::func_188(uParam0, uParam1, 1))
		{
			if (!__LIB_0__::func_899(&(uParam0->f_210.f_72)))
			{
				__LIB_2__::func_259(&(uParam0->f_210.f_72));
			}
			else if (__LIB_1__::func_592(&(uParam0->f_210.f_72)) > 5000)
			{
				__LIB_2__::func_259(&(uParam0->f_210.f_69));
			}
		}
		else if (__LIB_0__::func_899(&(uParam0->f_210.f_72)))
		{
			__LIB_1__::func_561(&(uParam0->f_210.f_72));
		}
		if (__LIB_11__::func_483(uParam0))
		{
			__LIB_2__::func_259(&(uParam0->f_210.f_69));
		}
		if (AUDIO::_0xA2CAC9DEF0195E6F(1))
		{
			if (__LIB_0__::func_899(&(uParam0->f_210.f_66)) && IntToFloat(__LIB_1__::func_592(&(uParam0->f_210.f_66))) > (90000f / 1.1f))
			{
				__LIB_1__::func_585(&(uParam0->f_210.f_66), ((90000f / 1.1f) / 1000f));
			}
		}
		if (__LIB_1__::func_592(&(uParam0->f_210.f_69)) > 10000 && __LIB_1__::func_592(&(uParam0->f_210.f_66)) > 90000)
		{
			return true;
		}
	}
	return false;
}

void func_319(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	__LIB_18__::func_743(iParam0);
}

void func_320(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	if (__LIB_0__::func_78(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1790)
		{
			if (uParam0->f_371[iVar0 /*18*/].f_7)
			{
				__LIB_18__::func_751(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_371[iVar0 /*18*/].f_6)
			{
				bVar1 = __LIB_12__::func_857(uParam0, iVar0);
				if (bVar1)
				{
					__LIB_18__::func_752(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!__LIB_12__::func_692(uParam0, uParam0->f_1580))
		{
			__LIB_14__::func_22(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1587;
	while (iVar0 <= (uParam0->f_1790 - 1))
	{
		if (uParam0->f_371[iVar0 /*18*/].f_7)
		{
			__LIB_18__::func_751(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_371[iVar0 /*18*/].f_6)
		{
			bVar1 = __LIB_12__::func_857(uParam0, iVar0);
			if (bVar1)
			{
				__LIB_18__::func_752(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1587 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1587 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_321(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (__LIB_18__::func_756(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

void func_322(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (__LIB_18__::func_760(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

void func_323(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	vVar0 = { __LIB_1__::func_440(uParam0->f_174) };
	fVar3 = BUILTIN::VDIST2(Global_36, vVar0);
	if (!MAP::DOES_BLIP_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_37))
	{
		if (uParam0->f_177 == 4 || uParam0->f_177 == 3)
		{
			fVar4 = __LIB_11__::func_131(uParam0->f_174);
			if ((Global_1347702[uParam0->f_174 /*49*/].f_36 != joaat("BLIP_RC") || __LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 32)) || fVar3 < (fVar4 * fVar4))
			{
				__LIB_9__::func_240(uParam0->f_174, vVar0, 1, 0);
			}
		}
	}
	else
	{
		__LIB_12__::func_664(uParam0->f_174, fVar3);
		__LIB_18__::func_761(uParam0->f_174, vVar0, fVar3);
		__LIB_12__::func_621(uParam0->f_174);
		__LIB_12__::func_622(uParam0->f_174);
	}
}

int func_324(int iParam0)
{
	int iVar0;
	if (!__LIB_1__::func_918(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_18__::func_768(iParam0);
	return __LIB_10__::func_655(iVar0);
}

void func_325(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_18__::func_770(&(uParam0->f_405), uParam0->f_416);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_12__::func_854(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_12__::func_841(uParam0);
	__LIB_12__::func_707(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_12__::func_758(uParam0, 4);
	__LIB_12__::func_846(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_12__::func_679(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_348))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_405, 128));
	if (!__LIB_0__::func_1(uParam0->f_405, 128))
	{
		__LIB_3__::func_120();
	}
}

void func_326(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	__LIB_18__::func_772(iParam0);
}

void func_327(int iParam0)
{
	__LIB_18__::func_778(&(iParam0->f_958), iParam0->f_958);
}

void func_328(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_525())
	{
		__LIB_18__::func_787(uParam0, iVar0);
		iVar0++;
	}
}

bool func_329(char[4] cParam0, vector3 vParam1, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, float fParam10, float fParam11, bool bParam12)
{
	bool bVar0;
	bool bVar1;
	if (__LIB_0__::func_138(vParam1, 0f, 0f, 0f))
	{
		return false;
	}
	bVar0 = __LIB_8__::func_642(cParam0, 4);
	bVar1 = __LIB_18__::func_793(cParam0, vParam1, sParam4, sParam5, 4, sParam6, iParam7, fParam10, fParam11);
	if (__LIB_6__::func_863(cParam0) != 1 && bParam12)
	{
		if (bVar1)
		{
			if (!bVar0)
			{
				if (MAP::DOES_BLIP_EXIST(cParam0->f_5303))
				{
					MAP::REMOVE_BLIP(&(cParam0->f_5303));
				}
				cParam0->f_5303 = __LIB_5__::func_442(vParam1, 0);
				iParam9 = iParam9;
				if (ITEMSET::IS_ITEMSET_VALID(iParam8))
				{
					__LIB_5__::func_444(&iParam8, 0);
				}
				__LIB_9__::func_241(cParam0, 0, 0);
				__LIB_8__::func_698(cParam0, 4);
			}
		}
		else if (bVar0)
		{
			if (MAP::DOES_BLIP_EXIST(cParam0->f_5303))
			{
				MAP::REMOVE_BLIP(&(cParam0->f_5303));
			}
			if (ITEMSET::IS_ITEMSET_VALID(iParam8))
			{
				__LIB_5__::func_444(&iParam8, 1);
			}
			__LIB_9__::func_241(cParam0, 1, 0);
			__LIB_8__::func_699(cParam0, 4);
		}
		if (MAP::DOES_BLIP_EXIST(cParam0->f_5303))
		{
			if (!__LIB_0__::func_175(MAP::GET_BLIP_COORDS(cParam0->f_5303), vParam1, 1056964608 /* Float: 0.5f */, 1))
			{
				MAP::SET_BLIP_COORDS(cParam0->f_5303, vParam1);
			}
		}
	}
	return bVar1;
}

int func_330(char[4] cParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	if (((__LIB_0__::func_2() != -1 || __LIB_6__::func_864(cParam0) == 25) || __LIB_6__::func_864(cParam0) == 26) || Global_1935630.f_12)
	{
		return 0;
	}
	bVar0 = __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(cParam0->f_5423[iVar1 /*65*/])))
		{
			if (__LIB_5__::func_58(cParam0->f_5423[iVar1 /*65*/].f_7, iParam1))
			{
				__LIB_19__::func_59(cParam0, &(cParam0->f_5423[iVar1 /*65*/]), bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_331(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_525())
	{
		__LIB_18__::func_795(uParam0, iVar0);
		iVar0++;
	}
}

void func_332(var uParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	__LIB_0__::func_732(2000);
	Global_16 = 0;
	__LIB_0__::func_109();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, __LIB_0__::func_1(*uParam0, 8));
	if (!__LIB_0__::func_1(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (__LIB_0__::func_1(*uParam0, 2) || __LIB_0__::func_1(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*uParam0, 16))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_0__::func_1(*uParam0, 32))
	{
		__LIB_18__::func_796(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		__LIB_4__::func_799(joaat("KIT_BANDANA"), 0);
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_333(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_18__::func_797(iParam0, 1);
}

void func_334(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_750(&iVar0))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) == -525676072)
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("MASKS_LARGE"), 0);
				__LIB_18__::func_796(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("NECKWEAR"), 0);
			}
			if (!__LIB_0__::func_144(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_335(char[4] cParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!__LIB_0__::func_31(iParam1))
	{
		return;
	}
	if (!__LIB_1__::func_22(iParam1))
	{
		return;
	}
	if (bParam5 && !bParam6)
	{
		if (__LIB_6__::func_863(cParam0) != 0 && __LIB_6__::func_877(cParam0) >= 2)
		{
			bParam5 = false;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(bParam2))
	{
		__LIB_11__::func_687(cParam0, bParam2);
		__LIB_8__::func_591(bParam2);
	}
	__LIB_0__::func_745(iParam1);
	__LIB_0__::func_904(iParam1, 0);
	__LIB_18__::func_801(iParam1, 0, bParam4, bParam5, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

void func_336(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	__LIB_18__::func_805(iParam0);
}

void func_337(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				__LIB_0__::func_723(iParam0);
				__LIB_0__::func_230(iParam0, 0);
				break;
		}
		__LIB_0__::func_254(iParam0, iParam1);
		if (__LIB_5__::func_267(iParam1, &iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
			{
				if (__LIB_8__::func_588(Global_1360165[iParam0 /*1157*/], iVar0))
				{
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[iParam0 /*1157*/], iVar0);
				}
				PED::_SET_PED_BODY_COMPONENT(Global_1360165[iParam0 /*1157*/], PED::_GET_PED_META_OUTFIT_HASH(Global_1360165[iParam0 /*1157*/]));
				PED::_UPDATE_PED_VARIATION(Global_1360165[iParam0 /*1157*/], false, true, true, true, false);
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				__LIB_0__::func_723(iParam0);
				__LIB_0__::func_230(iParam0, 1);
				break;
		}
		__LIB_5__::func_268(iParam0, iParam1);
		__LIB_18__::func_808(iParam0, Global_1360165[iParam0 /*1157*/], 1);
	}
}

void func_338(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (__LIB_0__::func_52(iParam2))
		{
			iVar0 = __LIB_1__::func_468(iParam2, -1);
			if (__LIB_8__::func_588(iParam1, iVar0))
			{
				if (__LIB_8__::func_589(iParam1, iVar0))
				{
					if (__LIB_8__::func_842(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						__LIB_8__::func_590(iParam1);
					}
				}
				else
				{
					PED::_SET_PED_BODY_COMPONENT(iParam1, iVar0);
				}
			}
		}
		__LIB_18__::func_808(iParam0, iParam1, 0);
		PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
		PED::_0xE3144B932DFDFF65(iParam1, 0f, -1, true, true);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			__LIB_0__::func_288(iParam0, 66, 0);
		}
	}
}

bool func_339(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	bool bVar0;
	bVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	__LIB_18__::func_812(bVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return bVar0;
}

int func_340(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (!__LIB_18__::func_813(iVar1, bParam0, bParam1, bParam2))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_341(var uParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1912[iVar0 /*10*/].f_8))
		{
			if (!__LIB_0__::func_129(&(uParam0->f_1912[iVar0 /*10*/]), 64))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1912[iVar0 /*10*/].f_8, false))
				{
					__LIB_18__::func_819(uParam0, uParam0->f_1912[iVar0 /*10*/].f_8);
					ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1912[iVar0 /*10*/].f_8);
					bVar1 = false;
					__LIB_4__::func_647(&(uParam0->f_1912[iVar0 /*10*/]), 64);
				}
				else
				{
					bVar1 = false;
				}
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1912[iVar0 /*10*/].f_8, true, false))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1406)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1406[iVar0 /*41*/].f_19)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1406[iVar0 /*41*/].f_19), "empty"))
		{
			HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_1406[iVar0 /*41*/].f_19));
			if (!HUD::_TEXT_DATABASE_HAS_LOADED(&(uParam0->f_1406[iVar0 /*41*/].f_19)))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (__LIB_4__::func_577(uParam0, 8) && !CAM::_0xDD0B7C5AE58F721D(__LIB_0__::func_166()))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1735[iVar0 /*22*/].f_2)) && uParam0->f_1735[iVar0 /*22*/].f_21) && !CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1735[iVar0 /*22*/].f_2)))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (!__LIB_0__::func_86(uParam0->f_2275) || uParam0->f_2278 != 0f)
		{
			bVar8 = true;
		}
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1912[iVar0 /*10*/].f_8))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1912[iVar0 /*10*/].f_8, "pl_breakout"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1912[iVar0 /*10*/].f_8, "pl_breakout");
				}
				if (bVar8)
				{
					ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_1912[iVar0 /*10*/].f_8, &vVar2, &vVar5, 2);
					vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar2, uParam0->f_2278, uParam0->f_2275) };
					vVar5.f_2 = (vVar5.z - uParam0->f_2278);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1912[iVar0 /*10*/].f_8, vVar2, vVar5, 2);
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

bool func_342(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = -1;
	if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = iParam1;
	}
	if (iParam4 != 0)
	{
		iVar1 = iParam4;
	}
	else
	{
		iVar1 = __LIB_0__::func_223(iParam1);
	}
	if (iVar0 == -1 && !__LIB_1__::func_87(iVar1, __LIB_0__::func_241()))
	{
		return true;
	}
	if (uParam2->f_1 != 0 && __LIB_0__::func_51(uParam2, 1))
	{
		if (uParam2->f_1 == iVar1)
		{
			if (bParam3)
			{
				return __LIB_18__::func_820(iParam0, uParam2);
			}
			else
			{
				return true;
			}
		}
		else if (uParam2->f_1 != iVar1)
		{
			__LIB_4__::func_603(uParam2);
		}
	}
	if (!__LIB_0__::func_51(uParam2, 1))
	{
		__LIB_0__::func_608(&(uParam2->f_1));
		if (!bParam5)
		{
			if (!__LIB_1__::func_713(&(uParam2->f_1), &uVar2, iVar1, iVar0, 1, 0))
			{
				return true;
			}
		}
		uParam2->f_1 = iVar1;
		__LIB_0__::func_7(uParam2, 1);
	}
	if (!bParam3)
	{
		return true;
	}
	return __LIB_18__::func_820(iParam0, uParam2);
}

int func_343(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = false;
	bVar1 = true;
	if (uParam1->f_1 == 0)
	{
		return 0;
	}
	if (!__LIB_14__::func_371(bParam0, uParam1))
	{
		bVar1 = false;
	}
	iVar3 = uParam1->f_1;
	iVar2 = __LIB_0__::func_449(iVar3);
	if (iVar2 == -1)
	{
		iVar2 = 0;
	}
	if (iVar2 >= 0 && iVar2 <= 5)
	{
		bVar0 = true;
	}
	Global_1905941 = iVar2;
	__LIB_0__::func_828(Global_40.f_7729, 4096);
	__LIB_0__::func_806(Global_1905941, 4096);
	Global_40.f_7729 = Global_1905941;
	__LIB_3__::func_129(&(uParam1->f_1));
	iVar4 = -1;
	if (!bVar0)
	{
		iVar4 = __LIB_4__::func_604(uParam1->f_1);
	}
	__LIB_0__::func_947(&(Global_1946804.f_1497), iVar4, 0);
	__LIB_18__::func_816(iVar3, bParam0, bVar0, 1, bVar1, 0);
	__LIB_8__::func_845(bParam0);
	if (bParam2)
	{
		__LIB_4__::func_603(uParam1);
	}
	if (bParam3)
	{
		__LIB_1__::func_10();
	}
	if (bParam4)
	{
		if (bParam5)
		{
			__LIB_1__::func_36(0);
		}
		else
		{
			__LIB_1__::func_36(2048);
		}
	}
	return 1;
}

void func_344(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar19;
	int iVar20;
	vector3 vVar21;
	if (uParam0->f_865[iParam2 /*18*/].f_4 < 0)
	{
		return;
	}
	iVar0 = uParam0->f_865[iParam2 /*18*/].f_4;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1912[iVar0 /*10*/].f_8))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1912[iVar0 /*10*/].f_8, true, false))
		{
			__LIB_18__::func_819(uParam0, uParam0->f_1912[iVar0 /*10*/].f_8);
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_1912[iVar0 /*10*/].f_8, &vVar1, &vVar4, 2);
			if (__LIB_0__::func_129(&(uParam0->f_1912[iVar0 /*10*/]), 1))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_1912[iVar0 /*10*/].f_8, __LIB_8__::func_678(Global_35), &vVar7, false, 0, 2))
				{
					fVar19 = (__LIB_0__::func_152(vVar1, Global_36, 1) - __LIB_0__::func_152(vVar1, vVar7, 1));
					vVar4.f_2 = (vVar4.z + fVar19);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1912[iVar0 /*10*/].f_8, vVar1, vVar4, 2);
				}
			}
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1912[iVar0 /*10*/].f_8, __LIB_8__::func_678(Global_35)) && uParam0->f_865[iParam2 /*18*/].f_17 != 0)
			{
				if ((__LIB_0__::func_78(uParam0) > 3 && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_865[iParam2 /*18*/] /*41*/]), 16)) && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_865[iParam2 /*18*/] /*41*/]), 32768))
				{
					__LIB_5__::func_368(uParam0, 1);
				}
				if (uParam0->f_2289)
				{
					if (__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_865[iParam2 /*18*/] /*41*/]), 128))
					{
					}
					else
					{
						__LIB_4__::func_532(uParam0, 131072);
						return;
					}
				}
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1912[iVar0 /*10*/].f_8, false))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1912[iVar0 /*10*/].f_8, "b_PlayerArthur"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_1912[iVar0 /*10*/].f_8, "b_PlayerArthur", !__LIB_0__::func_181(), false);
				}
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_1912[iVar0 /*10*/].f_8);
				if (uParam0->f_865[iParam2 /*18*/].f_17 == 0)
				{
					__LIB_4__::func_647(&(uParam0->f_1912[iVar0 /*10*/]), 128);
					if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1912[iVar0 /*10*/].f_8, "pl_breakout"))
					{
						__LIB_4__::func_712(uParam0->f_1912[iVar0 /*10*/].f_8, 10000, 0, -1, 0);
					}
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam0->f_1912[iVar0 /*10*/].f_8))
			{
				ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam0->f_1912[iVar0 /*10*/].f_8, false);
			}
			if (__LIB_0__::func_84(&(uParam0->f_865[iParam2 /*18*/]), 4))
			{
				uParam0->f_2075 = iParam2;
				if (((((__LIB_0__::func_81(uParam0) == 0 && !CAM::_0x81DCFD13CF39920E()) && uParam0->f_865[iParam2 /*18*/].f_17 == 1) && uParam0->f_865[iParam2 /*18*/] < 8) && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_865[iParam2 /*18*/] /*41*/]), 32768)) && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_865[iParam2 /*18*/] /*41*/]), 524288))
				{
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					__LIB_4__::func_612(uParam0, 64);
				}
			}
			iVar20 = 0;
			while (iVar20 < 65)
			{
				if ((uParam0->f_3[iVar20 /*13*/] && uParam0->f_3[iVar20 /*13*/].f_8 > 0f) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar20 /*13*/].f_2))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar20 /*13*/].f_2, false);
				}
				iVar20++;
			}
			if ((ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1912[iVar0 /*10*/].f_8, __LIB_8__::func_678(Global_35)) && uParam0->f_865[iParam2 /*18*/].f_17 != 0) && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_865[iParam2 /*18*/] /*41*/]), 32768))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_1912[iVar0 /*10*/].f_8, __LIB_8__::func_678(Global_35), &vVar21, false, 0, 2) && !__LIB_0__::func_86(vVar21))
				{
					__LIB_5__::func_115(uParam0, 0);
				}
			}
			uParam0->f_865[iParam2 /*18*/].f_7 = 1;
		}
	}
}

void func_345(int iParam0)
{
	if (__LIB_1__::func_510(32))
	{
		return;
	}
	__LIB_1__::func_511(32);
	if (__LIB_2__::func_365(Global_35))
	{
		Global_1935496.f_7 |= 1;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 1);
	}
	if (__LIB_3__::func_996(Global_35))
	{
		Global_1935496.f_7 |= 2;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 2);
	}
	if (__LIB_0__::func_491(Global_35, 713668775))
	{
		Global_1935496.f_7 |= 4;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 4);
	}
	if (__LIB_1__::func_376(Global_35))
	{
		Global_1935496.f_7 |= 8;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 8);
	}
	if (__LIB_18__::func_827(0, 1))
	{
		Global_1935496.f_7 |= 16;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 16);
	}
	if (!__LIB_7__::func_814(0))
	{
		Global_1935496.f_7 |= 32;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 32);
	}
	if (!__LIB_7__::func_815(0))
	{
		Global_1935496.f_7 |= 512;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 512);
	}
	if (!__LIB_7__::func_816(0))
	{
		Global_1935496.f_7 |= 8192;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 8192);
	}
	if (PED::IS_PED_IN_COVER(Global_35, false, true))
	{
		Global_1935496.f_7 |= 16384;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 16384);
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		Global_1935496.f_7 |= 32768;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 32768);
	}
	if (__LIB_0__::func_2() == 0 && PED::_0xB655DB7582AEC805(Global_35))
	{
		Global_1935496.f_7 |= 131072;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 131072);
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		Global_1935496.f_7 |= 256;
	}
	else if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		Global_1935496.f_7 |= 256;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 256);
	}
	if (Global_1935630.f_24 || TASK::_IS_PED_DUELLING(Global_35))
	{
		Global_1935496.f_7 |= 1024;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 1024);
	}
	if (TASK::IS_PED_RUNNING(Global_35))
	{
		Global_1935496.f_7 |= 4096;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 4096);
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || __LIB_0__::func_491(Global_35, 1369124074))
	{
		Global_1935496.f_7 |= 128;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 128);
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		Global_1935496.f_7 |= 33554432;
		if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("WORLD_PLAYER_DYNAMIC_KNEEL"))
		{
			Global_1935496.f_7 |= 67108864;
		}
		else
		{
			Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 67108864);
		}
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 67108864);
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 33554432);
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		Global_1935496.f_7 |= 65536;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 65536);
	}
	if (CAM::_0x1204EB53A5FBC63D())
	{
		Global_1935496.f_7 |= 64;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 64);
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		Global_1935496.f_7 |= 1048576;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 1048576);
	}
	if (__LIB_7__::func_826(iParam0, 0))
	{
		Global_1935496.f_7 |= 524288;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 524288);
	}
	if (__LIB_7__::func_827(iParam0, 0))
	{
		Global_1935496.f_7 |= 262144;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 262144);
	}
	if (__LIB_1__::func_869(Global_35))
	{
		Global_1935496.f_7 |= 4194304;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 4194304);
	}
	if (__LIB_7__::func_593())
	{
		Global_1935496.f_7 |= 16777216;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 16777216);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (__LIB_0__::func_125(iParam0))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("A_C_HORSEMULE_01"):
				case joaat("A_C_HORSEMULEPAINTED_01"):
				case joaat("A_C_DONKEY_01"):
					Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
					break;
				default:
					Global_1935496.f_7 |= 134217728;
					break;
			}
		}
		if (PED::_IS_METAPED_USING_COMPONENT(iParam0, 149557334))
		{
			Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
		}
		if (PED::IS_PED_ON_VEHICLE(iParam0, false))
		{
			Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
		}
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
	}
	if (((((__LIB_0__::func_2() == -1 && __LIB_4__::func_635(32768)) || __LIB_7__::func_781()) || __LIB_9__::func_994()) || (__LIB_2__::func_776() && !__LIB_7__::func_770())) || ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f)
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 2097152);
	}
	else
	{
		Global_1935496.f_7 |= 2097152;
	}
	if (Global_1900073.f_17 && __LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_FISHINGROD"))
	{
		Global_1935496.f_7 |= 8388608;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 8388608);
	}
}

bool func_346(int iParam0)
{
	if (__LIB_0__::func_356(iParam0) == joaat("EMOTE"))
	{
		return false;
	}
	if (!INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), iParam0, __LIB_4__::func_807(0)))
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("KIT_CAMP"):
		case joaat("KIT_CAMP_SIMPLE"):
			if (!Global_1392040.f_2)
			{
				__LIB_18__::func_827(1, 1);
				TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("KIT_HANDHELD_CATALOG"):
			__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(0, 163043886 /* GXTEntry: "You are not allowed to use Handheld Catalogue at the moment." */, Global_36559), 10000, 0, 0, 0, 1);
			break;
	}
	return true;
}

void func_347(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_525())
	{
		__LIB_18__::func_829(cParam0, iVar0);
		iVar0++;
	}
}

void func_348(var uParam0, var uParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_14__::func_574(uParam0, iParam2, 0)))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				__LIB_18__::func_837(uParam0, iParam2);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_14__::func_574(uParam0, iParam2, 1)))
				{
					if (ANIMSCENE::_0xA9016536015DE29D(*uParam1, __LIB_14__::func_574(uParam0, iParam2, 1)))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, __LIB_14__::func_574(uParam0, iParam2, 1), true);
					}
				}
			}
		}
	}
}

void func_349(var uParam0)
{
	if (uParam0->f_4 > 0)
	{
		PED::_0xF008E0BA1FE1D644(uParam0->f_4);
	}
	__LIB_14__::func_495(uParam0);
	__LIB_14__::func_496(uParam0);
	__LIB_14__::func_539(uParam0, 0);
	__LIB_18__::func_840(uParam0);
}

bool func_350(var uParam0)
{
	if ((!__LIB_14__::func_526(uParam0) || !__LIB_14__::func_540(uParam0)) || !__LIB_18__::func_841(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 > 0)
	{
		if (!PED::_0x5C16855277819BBF() == uParam0->f_4)
		{
			return false;
		}
	}
	return true;
}

void func_351(int iParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	var uVar2[40];
	vector3 vVar43;
	vector3 vVar46[24];
	int iVar49;
	iVar0 = __LIB_18__::func_856(&uVar2, uParam1, iParam5, vParam2, iParam7, iParam8, bParam9, 0, -1, 1, iParam10, bParam11, 0, 0);
	__LIB_14__::func_637(&uVar2, iVar0, vParam2, 1, 1, 0);
	iVar1 = 0;
	iVar49 = 0;
	StringCopy(&cVar46, "GRABBED_PED ", 24);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_0__::func_272(uVar2[iVar1], 0))
		{
			vVar43 = { cVar46 };
			StringIntConCat(&vVar43, iVar1, 24);
			if (bParam9)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar2[iVar1], true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar2[iVar1], true, true);
			}
			PED::SET_PED_NAME_DEBUG(uVar2[iVar1], &vVar43);
			(*iParam0)[iVar49] = uVar2[iVar1];
			iVar49++;
			if (iVar49 >= iParam6)
			{
			}
			else
			{
				iVar1++;
			}
		}
	}
}

int func_352(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = -1;
	iVar0 = __LIB_18__::func_857(iParam1);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar0 = __LIB_18__::func_858(iParam1);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar0 = __LIB_18__::func_859(iParam1);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	return -1;
}

void func_353()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		__LIB_16__::func_23();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		__LIB_18__::func_883(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		__LIB_18__::func_883(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_354()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_18__::func_883(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(1);
	__LIB_1__::func_132(1, iVar0, 0);
}

void func_355()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_18__::func_883(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(2);
	__LIB_1__::func_132(2, iVar0, 0);
}

void func_356()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_18__::func_883(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(0);
	__LIB_1__::func_132(0, iVar0, 0);
}

bool func_357(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!__LIB_0__::func_258(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (__LIB_0__::func_154(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (__LIB_1__::func_707(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		__LIB_1__::func_424(__LIB_0__::func_941(iParam0), __LIB_0__::func_776(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			if (__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
			{
				__LIB_1__::func_240(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (__LIB_0__::func_708(0))
	{
		if (__LIB_0__::func_916(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return __LIB_18__::func_883(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_358(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		if (iParam2 == 0)
		{
			return;
		}
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	if (__LIB_1__::func_15(iParam0))
	{
		return;
	}
	if (__LIB_11__::func_451(iParam0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
	}
	__LIB_0__::func_835(iParam1, iParam0);
	__LIB_12__::func_237(iParam1, iParam2);
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (iParam0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar0))
	{
		__LIB_11__::func_452(iParam1, 0);
	}
	else
	{
		iVar1 = __LIB_11__::func_453(iParam0);
		__LIB_11__::func_452(iParam1, iVar1);
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		__LIB_1__::func_177(iParam0);
	}
	if (iParam1 == 0)
	{
		PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iParam0);
	}
	else if (iParam1 == 1)
	{
		uVar2 = PLAYER::_0x227B06324234FB09(iVar0, iParam0);
	}
	if (iParam1 == 6)
	{
		return;
	}
	if (__LIB_15__::func_429(iParam1))
	{
		__LIB_15__::func_751(iParam1);
	}
	iVar3 = __LIB_0__::func_821(iParam1);
	iVar4 = __LIB_0__::func_553(iVar3);
	__LIB_18__::func_878(iParam1, iVar4);
}

bool func_359(int iParam0, int iParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<4> Var10;
	if (*iParam1 == 0)
	{
		*iParam3 = 1;
		return false;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (iParam1->f_2 > 0)
	{
		iVar3 = __LIB_1__::func_921(iParam0);
		if (iVar3 == -1)
		{
			*iParam3 = 2;
			return false;
		}
		iVar4 = __LIB_6__::func_676(iVar3);
		iVar6 = 0;
		while (iVar6 < iParam1->f_2)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_GROUP_INFO(iVar4, *iParam1, iVar6, &Var8))
			{
				*iParam3 = 4;
				return false;
			}
			if (Var8.f_1 > 0)
			{
				iVar7 = 0;
				while (iVar7 < Var8.f_1)
				{
					Var10 = 0;
					if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_INFO(iVar4, *iParam1, iVar6, iVar7, &Var10))
					{
						*iParam3 = 3;
						return false;
					}
					if (!__LIB_15__::func_915(iParam0, *iParam1, &Var10, &uVar5))
					{
						if (Var10.f_3)
						{
							iVar1 = Var8;
							iVar2 = 1;
							bVar0 = true;
						}
						else
						{
							iVar2 = 0;
							bVar0 = false;
						}
						else
						{
							Jump @210; //curOff = 200
							iVar1 = Var8;
							bVar0 = true;
							iVar7++;
						}
						Jump @232; //curOff = 219
						iVar1 = Var8;
						iVar2 = 0;
						bVar0 = true;
						if (bVar0)
						{
						}
						else
						{
							iVar6++;
						}
						Jump @255; //curOff = 249
						bVar0 = true;
						if (bVar0)
						{
							*uParam2 = *iParam1;
							uParam2->f_2 = iVar1;
							uParam2->f_1 = iVar1;
							if (__LIB_0__::func_2() == -1)
							{
								if (__LIB_0__::func_787(*uParam2))
								{
									uParam2->f_4 = !__LIB_0__::func_428(*uParam2);
								}
								else
								{
									uParam2->f_4 = iVar2;
								}
							}
							else if (__LIB_14__::func_788(*uParam2))
							{
								uParam2->f_4 = 0;
							}
							else
							{
								uParam2->f_4 = !__LIB_1__::func_63(*uParam2);
							}
							if (__LIB_0__::func_2() == -1)
							{
								if (!uParam2->f_4)
								{
									if (!__LIB_12__::func_509(*iParam1) && !__LIB_12__::func_510(*iParam1))
									{
										if (__LIB_18__::func_866(*iParam1, 1, 0))
										{
											uParam2->f_5 = 1;
										}
									}
								}
							}
							return true;
						}
						else
						{
							return false;
						}
						*iParam3 = 6;
						return false;
					}
				}
			}
		}
	}
}

int func_360(var uParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	__LIB_14__::func_904(uParam0->f_2, &iVar0);
	if (__LIB_15__::func_372(uParam0) == -2144266389)
	{
		return -339889117;
	}
	else if (__LIB_14__::func_739(iParam1))
	{
		return -348190488;
	}
	else if (!__LIB_18__::func_874(iParam1, 0) && __LIB_15__::func_51(iParam1, iVar0))
	{
		return -349391286;
	}
	else if (__LIB_14__::func_942(iParam1) && uParam0->f_3 == 152)
	{
		return 2077448405;
	}
	else if (__LIB_14__::func_974(iParam1))
	{
		return -2056428614;
	}
	else if (__LIB_0__::func_357(iParam1) == -525676072 && uParam0->f_3 == 152)
	{
		return 1942587409;
	}
	else if (__LIB_0__::func_356(iParam1) == joaat("CLOTHING") && uParam0->f_3 == 152)
	{
		return 761079318;
	}
	else if (__LIB_0__::func_192(iParam1, 188214926))
	{
		return 1702073444;
	}
	else if (__LIB_0__::func_357(iParam1) == -1839668642 || __LIB_0__::func_357(iParam1) == -1415811768)
	{
		return -760956867;
	}
	else if (__LIB_0__::func_357(iParam1) == 231148558 || __LIB_0__::func_357(iParam1) == 356304563)
	{
		return 38807286;
	}
	else if (__LIB_0__::func_356(iParam1) == joaat("WEAPON_MOD"))
	{
		return 777890122;
	}
	else if (__LIB_0__::func_356(iParam1) == joaat("WEAPON_DECORATION"))
	{
		return -1502467280;
	}
	else if (__LIB_0__::func_356(iParam1) == joaat("AMMO"))
	{
		return -1048755899;
	}
	else if (__LIB_0__::func_356(iParam1) == joaat("CLOTHING"))
	{
		return -853534656;
	}
	else if (__LIB_0__::func_831(iParam1))
	{
		return -239176093;
	}
	else if (__LIB_14__::func_975(iParam1))
	{
		return 1394581936;
	}
	else if ((((((__LIB_0__::func_357(iParam1) == 1795979421 || __LIB_0__::func_357(iParam1) == 1193257440) || __LIB_0__::func_357(iParam1) == 1415299667) || __LIB_0__::func_357(iParam1) == -1015460895) || __LIB_0__::func_357(iParam1) == -768291983) || __LIB_0__::func_357(iParam1) == 1206030994) || __LIB_0__::func_357(iParam1) == 526314052)
	{
		return -584027224;
	}
	else if (__LIB_18__::func_874(iParam1, 0) && __LIB_15__::func_51(iParam1, iVar0))
	{
		return 2036169888;
	}
	else
	{
		return -384358143;
	}
	return 0;
}

void func_361(int iParam0)
{
	int iVar0;
	var uVar1;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (__LIB_1__::func_16(iParam0))
	{
		iVar0 = __LIB_0__::func_402(iParam0);
		__LIB_0__::func_798(iVar0);
	}
	__LIB_0__::func_798(1);
	if (__LIB_0__::func_797(1))
	{
		__LIB_15__::func_963(1, 0);
	}
	__LIB_15__::func_908(1);
	__LIB_19__::func_358(iParam0, 1, 0);
	__LIB_0__::func_837(1, 1);
	if (__LIB_0__::func_819(1) == 0)
	{
		__LIB_2__::func_226(1, 1);
	}
	uVar1 = PLAYER::_0x227B06324234FB09(PLAYER::PLAYER_ID(), iParam0);
	__LIB_1__::func_643();
}

void func_362(int iParam0, bool bParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (__LIB_1__::func_16(iParam0))
	{
		iVar0 = __LIB_0__::func_402(iParam0);
		__LIB_0__::func_798(iVar0);
	}
	if (__LIB_0__::func_797(6))
	{
		__LIB_15__::func_963(6, 0);
	}
	__LIB_15__::func_908(6);
	__LIB_19__::func_358(iParam0, 6, 0);
	__LIB_0__::func_837(6, 1);
	if (!bParam1)
	{
		__LIB_15__::func_99(6, 0);
		__LIB_12__::func_554(MISC::GET_GAME_TIMER());
	}
	__LIB_1__::func_643();
}

void func_363(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			__LIB_0__::func_537(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			__LIB_0__::func_538(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			__LIB_0__::func_538(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			__LIB_0__::func_538(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			__LIB_0__::func_539(1);
			break;
		case 34:
			__LIB_0__::func_540(1);
			break;
		case 35:
			__LIB_0__::func_541(1);
			break;
		case 36:
			break;
		case 37:
			__LIB_0__::func_542(0);
			break;
		case 38:
			__LIB_0__::func_543(0);
			break;
		case 39:
			__LIB_0__::func_544(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			__LIB_1__::func_240(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			__LIB_1__::func_240(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			__LIB_1__::func_240(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			__LIB_1__::func_240(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || __LIB_0__::func_802(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (__LIB_0__::func_181())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!__LIB_1__::func_707(iVar0, 1, 0))
					{
						__LIB_18__::func_883(iVar0, 1, 752097756);
					}
					__LIB_15__::func_866(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_18__::func_883(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_18__::func_883(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					__LIB_18__::func_883(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_18__::func_883(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_18__::func_883(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					__LIB_18__::func_883(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			__LIB_19__::func_353();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

void func_364(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (__LIB_1__::func_771(0))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(2))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(4))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(16))
			{
				if (iVar0 == 1)
				{
					__LIB_19__::func_354();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(16);
				}
			}
			if (!__LIB_0__::func_605(32))
			{
				if (iVar0 >= 3)
				{
					__LIB_19__::func_354();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (__LIB_1__::func_771(1))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(3))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(7))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(1))
			{
				if (iVar0 == 1)
				{
					__LIB_19__::func_355();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(1);
				}
			}
			if (!__LIB_0__::func_605(2))
			{
				if (iVar0 >= 3)
				{
					__LIB_19__::func_355();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (__LIB_1__::func_771(5))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(6))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(8))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(4))
			{
				if (iVar0 == 1)
				{
					__LIB_19__::func_356();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(4);
				}
			}
			if (!__LIB_0__::func_605(8))
			{
				if (iVar0 >= 3)
				{
					__LIB_19__::func_356();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(8);
				}
			}
			break;
	}
}

int func_365(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar1 = __LIB_18__::func_885(iParam0);
	__LIB_16__::func_7();
	Global_1913814.f_204.f_3 = __LIB_16__::func_8(iParam0);
	if (iParam1 == 0)
	{
		iParam1 = iVar1;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	Global_1913814.f_204.f_2 = iParam2;
	Global_1913814.f_204.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &(Global_1913814.f_204)))
	{
		return uVar0;
	}
	Global_1913814.f_204.f_4 = iVar1;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &(Global_1913814.f_204)) && bParam3)
	{
		return uVar0;
	}
	return 0;
}

void func_366(var uParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_148.f_1754.f_30))
	{
		return;
	}
	if (__LIB_0__::func_86(vLocal_14))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_148.f_1754.f_30);
		vLocal_14 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 1.5f, 0f, 0f) };
	}
	__LIB_18__::func_889(uParam0);
}

void func_367(var uParam0)
{
	if ((*uParam0 == 5 || *uParam0 == 7) || *uParam0 == 6)
	{
		__LIB_18__::func_892(uParam0);
		uParam0->f_2319.f_16 = 1;
	}
}

void func_368(var uParam0)
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (__LIB_0__::func_2() == -1)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[uParam0->f_2 /*446*/].f_23);
	}
	else
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1051260.f_48[uParam0->f_2 /*78*/].f_19);
	}
	__LIB_18__::func_896(&(Local_26.f_7));
	Local_26.f_2 = 0;
	Local_26.f_3 = 0;
	Local_26 = 0;
	Local_26.f_1 = 0;
	PED::SET_PED_CONFIG_FLAG(iVar1, 234, false);
	PED::SET_PED_CONFIG_FLAG(iVar1, 252, true);
	if (uParam0->f_2 == 18 && !__LIB_0__::func_474(513))
	{
		__LIB_1__::func_240(513, 0);
	}
}

void func_369(var uParam0)
{
	int iVar0;
	int iVar1;
	__LIB_18__::func_900(uParam0->f_2);
	__LIB_1__::func_725();
	if (uParam0->f_2 == 18)
	{
		iVar0 = __LIB_15__::func_31(uParam0);
		switch (Local_26.f_29)
		{
			case 0:
				if (iVar0 == -1370622068)
				{
					__LIB_16__::func_170(2);
				}
				else if (iVar0 == 724483759)
				{
					__LIB_16__::func_170(1);
				}
				else if (iVar0 == 24948591)
				{
					__LIB_16__::func_170(3);
				}
				else if (iVar0 == 2090838701)
				{
					__LIB_16__::func_170(4);
				}
				else if (iVar0 == 1106804237)
				{
					__LIB_16__::func_170(5);
				}
				break;
			default:
				if (iVar0 == -887337659)
				{
					__LIB_16__::func_170(0);
				}
				break;
		}
		if (__LIB_0__::func_2() == -1)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[uParam0->f_2 /*446*/].f_23);
		}
		else
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1051260.f_48[uParam0->f_2 /*78*/].f_19);
		}
		_NAMESPACE29::_0x0EABF182FBB63D72(iVar1, 1, 1);
	}
}

bool func_370(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_921(iParam0) == 4 && __LIB_8__::func_224(iParam0, -1162387149))
	{
		return true;
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		iVar2 = ITEMSET::CREATE_ITEMSET(false);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar2);
		if (ITEMSET::IS_ITEMSET_VALID(iVar2))
		{
			iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
				if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
				}
				else
				{
					iVar1 = __LIB_18__::func_901(iVar0);
					if (__LIB_8__::func_127(iVar1, iParam0))
					{
						ITEMSET::DESTROY_ITEMSET(iVar2);
						return true;
					}
				}
				iVar4++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar2);
		}
	}
	return __LIB_8__::func_224(iParam0, 1084182731);
}

int func_371(int iParam0, int iParam1)
{
	return __LIB_18__::func_902(Global_35, iParam0, iParam1);
}

int func_372(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() == -1)
	{
		iVar0 = __LIB_0__::func_398(7);
	}
	else
	{
		iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	}
	return __LIB_18__::func_902(iVar0, iParam0, iParam1);
}

void func_373(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7[10];
	int iVar18;
	if (!__LIB_9__::func_808(iParam1))
	{
		return;
	}
	if (__LIB_1__::func_356(iParam0))
	{
		iVar5 = 0;
		while (iVar5 < 3)
		{
			iVar4 = __LIB_0__::func_574(iVar5);
			if (!PED::_0x608BC6A6AACD5036(&Var0, iParam0, iVar4, 0))
			{
			}
			else
			{
				iVar6 = Var0.f_3;
				if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
				{
				}
				else if (iParam1 == __LIB_18__::func_901(iVar6))
				{
					if (ENTITY::_0x8DE41E9902E85756(iVar6))
					{
						if (iVar5 == 0 || iVar5 == 2)
						{
							*uParam4 = 1;
						}
						*iParam2++;
					}
					else
					{
						*iParam3++;
					}
				}
			}
			iVar5++;
		}
	}
	else if (PED::_IS_PED_CARRYING(iParam0))
	{
		__LIB_7__::func_754(Global_35, &uVar7, 1);
		iVar18 = 0;
		while (iVar18 < 10)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uVar7[iVar18]))
			{
			}
			else if (iParam1 == __LIB_18__::func_901(uVar7[iVar18]))
			{
				if (ENTITY::_0x8DE41E9902E85756(uVar7[iVar18]))
				{
					if (iVar18 == 0)
					{
						*uParam4 = 1;
					}
					*iParam2++;
				}
				else
				{
					*iParam3++;
				}
			}
			iVar18++;
		}
	}
}

bool func_374(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		(*uParam0)[iVar1 /*7*/] = -1;
		(uParam0[iVar1 /*7*/])->f_3 = 0;
		(uParam0[iVar1 /*7*/])->f_4 = 99999999;
		(uParam0[iVar1 /*7*/])->f_5 = 0f;
		(uParam0[iVar1 /*7*/])->f_6 = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (__LIB_12__::func_477(iVar0))
		{
			if (__LIB_12__::func_583(iVar0, bParam2))
			{
				if (bParam1)
				{
					__LIB_18__::func_918(uParam0, iVar0);
				}
				else
				{
					__LIB_18__::func_919(uParam0, iVar0);
				}
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*7*/])->f_3)
		{
			if (__LIB_0__::func_20((*uParam0)[iVar0 /*7*/]))
			{
				iVar2++;
				(uParam0[iVar0 /*7*/])->f_5 = __LIB_16__::func_375((uParam0[iVar0 /*7*/])->f_4);
			}
		}
		iVar0++;
	}
	return iVar2 > 0;
}

void func_375()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1327590.f_19574)
	{
		__LIB_18__::func_917(iVar0);
		iVar0++;
	}
}

void func_376(int iParam0)
{
	__LIB_18__::func_934(iParam0);
}

int func_377(int iParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	fVar5 = -1f;
	iVar7 = -1;
	iVar8 = __LIB_12__::func_420(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar8)
	{
		if (__LIB_1__::func_231(iParam0, vParam2, iParam5, iVar0, &vVar2, 0))
		{
			fVar6 = __LIB_0__::func_94(Global_35, vVar2, 0);
			if (fVar6 < fVar5 || fVar5 == -1f)
			{
				if (__LIB_18__::func_938(iParam0, vParam2, iParam5, iVar0))
				{
					if (!__LIB_16__::func_397(iParam0, vVar2, &uVar1, iParam6, iParam7))
					{
						fVar5 = fVar6;
						iVar7 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	Global_1899528.f_208 = iVar7;
	return iVar7;
}

bool func_378(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_18__::func_939(iParam0);
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (Global_1391438.f_7[iVar1 /*99*/].f_9 == iVar0)
		{
			*uParam1 = iVar1;
			return true;
		}
		iVar1++;
	}
	return false;
}

struct<4> func_379(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var14;
	struct<4> Var18;
	int iVar22;
	Var0.f_9 = -1591664384;
	Var14 = { __LIB_16__::func_297() };
	if (!__LIB_16__::func_298() || bParam2)
	{
		if (__LIB_0__::func_814(__LIB_0__::func_949(bParam0), 1782082944, &Var0, bParam0))
		{
			Var18 = { Var0 };
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = __LIB_18__::func_940();
	}
	iVar22 = __LIB_16__::func_299(iParam3, 0);
	if (iVar22 != 3)
	{
		Var18 = { Global_36638.f_45.f_62[iVar22 /*4*/] };
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var18))
	{
		if (!bParam1)
		{
			return __LIB_0__::func_217();
		}
		return __LIB_16__::func_300(bParam0);
	}
	return Var18;
}

void func_380(int iParam0, bool bParam1)
{
	var uVar0;
	uVar0 = NETWORK::_0x27B1AE4D8C652F08(iParam0);
	if (bParam1)
	{
		if (__LIB_16__::func_302())
		{
			return;
		}
		if (NETWORK::_0x981146E5C9CE9250(uVar0))
		{
			__LIB_18__::func_941(iParam0);
			__LIB_16__::func_303(0);
			__LIB_17__::func_397(0);
		}
	}
	else
	{
		NETWORK::_0x3AA0CDC63696166D(uVar0);
	}
}

int func_381(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	__LIB_7__::func_896(8);
	iVar0 = 0;
	while (iVar0 < __LIB_16__::func_329(iParam0))
	{
		if (!bParam1 || (iVar0 % iParam2) == Global_1898092.f_25)
		{
			iVar1 = __LIB_18__::func_944(iParam0, iVar0);
			if (__LIB_0__::func_30(iVar1))
			{
				__LIB_0__::func_400(iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_16__::func_330(iParam0))
	{
		if (!bParam1 || iVar0 == Global_1898092.f_25)
		{
			sVar2 = __LIB_18__::func_945(iParam0, iVar0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
			{
				__LIB_5__::func_440(sVar2);
			}
		}
		iVar0++;
	}
	if (!bParam1 || Global_1898092.f_25 >= iParam2)
	{
		Global_1898092.f_25 = 0;
		return 1;
	}
	return 0;
}

int func_382(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	__LIB_7__::func_896(8);
	iVar0 = 0;
	while (iVar0 < __LIB_16__::func_329(iParam0))
	{
		if (!bParam5 || (iVar0 % iParam7) == Global_1898092.f_25)
		{
			iVar1 = __LIB_18__::func_944(iParam0, iVar0);
			if (__LIB_0__::func_30(iVar1))
			{
				if (__LIB_18__::func_946(iParam0, iParam1, iVar1, bParam2, bParam6, bParam3, bParam4))
				{
					__LIB_0__::func_401(iVar1);
				}
			}
		}
		iVar0++;
	}
	if (!bParam5 || Global_1898092.f_25 >= iParam7)
	{
		sVar2 = __LIB_18__::func_947(iParam0, iParam1, bParam2, bParam3);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			__LIB_5__::func_441(sVar2);
		}
		return 1;
	}
	return 0;
}

void func_383(int iParam0)
{
	Global_1359489.f_361.f_3[iParam0] = -1;
	Global_1359489.f_361.f_15[iParam0] = 0;
	Global_1359489.f_361.f_59 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1359489.f_361.f_84[iParam0]))
	{
		OBJECT::DELETE_OBJECT(&(Global_1359489.f_361.f_84[iParam0]));
	}
	if (__LIB_16__::func_274() == 0)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1359489.f_361.f_72))
		{
			MAP::REMOVE_BLIP(&(Global_1359489.f_361.f_72));
		}
	}
	if (Global_40.f_6563[iParam0 /*27*/] == 9 || Global_40.f_6563[iParam0 /*27*/] == 11)
	{
		__LIB_18__::func_931();
	}
	__LIB_1__::func_281(&(Global_1359489.f_361.f_61[iParam0]), 1, 1);
}

void func_384(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return;
	}
	iVar0 = -1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 200)
	{
		if (uParam0->f_1[iVar1 /*5*/] == iParam1)
		{
			uParam0->f_1[iVar1 /*5*/].f_1 = (uParam0->f_1[iVar1 /*5*/].f_1 + iParam2);
			uParam0->f_1[iVar1 /*5*/].f_3 = __LIB_0__::func_23();
			uParam0->f_1[iVar1 /*5*/].f_4 = 0;
			uParam0->f_1003 = (uParam0->f_1003 + iParam2);
			uParam0->f_1004 = (uParam0->f_1004 + (BUILTIN::TO_FLOAT(iParam2) * IntToFloat(__LIB_9__::func_977(iParam1, 816454899, 0))));
			uParam0->f_1005 = (uParam0->f_1005 + (iParam2 * __LIB_18__::func_948(iParam1)));
			uParam0->f_1[iVar1 /*5*/].f_2 = iParam3;
			return;
		}
		else if (uParam0->f_1[iVar1 /*5*/] == 0 && iVar0 == -1)
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar2 = iParam2;
	if (uParam0->f_1002 == 0 || uParam0->f_1002 == 1)
	{
	}
	uParam0->f_1[iVar0 /*5*/] = iParam1;
	uParam0->f_1[iVar0 /*5*/].f_1 = iVar2;
	uParam0->f_1[iVar0 /*5*/].f_3 = __LIB_0__::func_23();
	uParam0->f_1[iVar0 /*5*/].f_4 = 0;
	uParam0->f_1[iVar0 /*5*/].f_2 = iParam3;
	*uParam0++;
	uParam0->f_1003 = (uParam0->f_1003 + iParam2);
	uParam0->f_1004 = (uParam0->f_1004 + (BUILTIN::TO_FLOAT(iParam2) * IntToFloat(__LIB_9__::func_977(iParam1, 816454899, 0))));
	uParam0->f_1005 = (uParam0->f_1005 + (iParam2 * __LIB_18__::func_948(iParam1)));
}

void func_385(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_271(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		PED::_0x2B4CE170DE09F346(iVar0, iParam1);
	}
	__LIB_18__::func_949(iParam0, iParam1, 0);
}

bool func_386(int iParam0)
{
	int iVar0;
	if (!iParam0->f_14 && !iParam0->f_1070)
	{
		if (!__LIB_16__::func_526(&(iParam0->f_57), iParam0->f_56, iParam0->f_45))
		{
			return false;
		}
		if (!__LIB_16__::func_494(&(iParam0->f_49), &(iParam0->f_16), __LIB_16__::func_447(), __LIB_16__::func_446(0), 1))
		{
			return false;
		}
		if (!__LIB_16__::func_524(iParam0->f_49, __LIB_16__::func_446(1), __LIB_16__::func_447()))
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (STREAMING::IS_MODEL_VALID(iParam0->f_74[iVar0]))
		{
			if (!__LIB_16__::func_717(&(iParam0->f_81[iVar0]), iParam0->f_74[iVar0], iParam0->f_42, 0f))
			{
				return false;
			}
		}
		iVar0++;
	}
	if (!__LIB_0__::func_0(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((STREAMING::IS_MODEL_VALID(iParam0->f_74[iVar0]) && ENTITY::DOES_ENTITY_EXIST(iParam0->f_81[iVar0])) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_81[iVar0]))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam0->f_81[iVar0], "Default_Show_Performers_Group", -1f);
		}
		iVar0++;
	}
	__LIB_18__::func_955(iParam0);
	if (!iParam0->f_14 && !iParam0->f_1070)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_49, "CURTAIN", iParam0->f_57, 0);
	}
	return true;
}

bool func_387(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	struct<2> Var0;
	*uParam2 = 0;
	*uParam3 = 0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if ((!Global_1911914.f_1579 && __LIB_1__::func_114(iParam0, iParam1, 1)) && !bParam5)
	{
		return false;
	}
	if (!__LIB_18__::func_963(iParam0, 1, iParam1, &Var0, iParam4, bParam6, iParam7, bParam8))
	{
		*uParam2 = Var0;
		*uParam3 = Var0.f_1;
		return false;
	}
	return true;
}

bool func_388()
{
	if ((Global_1935689.f_10195 != (Global_1935689.f_19.f_203 - 1) || __LIB_18__::func_965(__LIB_8__::func_716(0), Global_1935689.f_10190, 0) > 0) || Global_1935689.f_10195 == 15)
	{
		return true;
	}
	return false;
}

bool func_389(int iParam0)
{
	if (__LIB_0__::func_356(iParam0) == joaat("EMOTE"))
	{
		return false;
	}
	if (!INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), iParam0, __LIB_4__::func_807(0)))
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("KIT_CAMP"):
		case joaat("KIT_CAMP_SIMPLE"):
			if (!Global_1392040.f_2)
			{
				__LIB_18__::func_968(1, 1);
				TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("KIT_HANDHELD_CATALOG"):
			__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(0, 163043886 /* GXTEntry: "You are not allowed to use Handheld Catalogue at the moment." */, Global_36559), 10000, 0, 0, 0, 1);
			break;
	}
	return true;
}

void func_390(int iParam0)
{
	int iVar0;
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_IN_GROUP(iVar0))
	{
		return;
	}
	if (PED::GET_PED_GROUP_INDEX(iVar0) != PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (PED::_0x917760CFE7A0E0F1(iVar0))
	{
		COMPANION::_0xD747979C053EFA7A(__LIB_0__::func_110());
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, false);
	PED::REMOVE_PED_FROM_GROUP(iVar0);
	__LIB_18__::func_971(iParam0, 0, 0);
}

void func_391()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = __LIB_18__::func_969(iVar0);
		iVar2 = __LIB_18__::func_969(iVar0 + 1);
		if (!__LIB_0__::func_31(iVar1))
		{
			if (__LIB_0__::func_31(iVar2))
			{
				Global_1359489[iVar0] = iVar2;
				Global_1359489[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

void func_392(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	iVar0 = __LIB_16__::func_396(iParam1);
	iVar1 = __LIB_12__::func_484(iParam1);
	iVar2 = 0;
	StringCopy(&cVar3, HUD::_GET_LABEL_TEXT_BY_HASH((uParam0[iVar2 /*7*/])->f_6), 64);
	StringCopy(&cVar11, HUD::_GET_LABEL_TEXT_BY_HASH(iVar1), 64);
	while ((uParam0[iVar2 /*7*/])->f_3 && MISC::COMPARE_STRINGS(&cVar3, &cVar11, false, -1) <= 0)
	{
		iVar2++;
		StringCopy(&cVar3, HUD::_GET_LABEL_TEXT_BY_HASH((uParam0[iVar2 /*7*/])->f_6), 64);
	}
	iVar19 = iVar2;
	iVar20 = iParam1;
	iVar22 = iVar0;
	iVar23 = iVar1;
	while ((uParam0[iVar19 /*7*/])->f_3 && iVar19 < (*uParam0 - 1))
	{
		if (iVar20 == iParam1)
		{
		}
		iVar24 = (uParam0[iVar19 /*7*/])->f_4;
		iVar21 = (*uParam0)[iVar19 /*7*/];
		iVar25 = (uParam0[iVar19 /*7*/])->f_6;
		(uParam0[iVar19 /*7*/])->f_4 = iVar22;
		(*uParam0)[iVar19 /*7*/] = iVar20;
		(uParam0[iVar19 /*7*/])->f_3 = 1;
		(uParam0[iVar19 /*7*/])->f_6 = iVar23;
		__LIB_18__::func_970(uParam0[iVar19 /*7*/], (*uParam0)[iVar19 /*7*/]);
		iVar22 = iVar24;
		iVar20 = iVar21;
		iVar23 = iVar25;
		iVar19++;
	}
	if (!(uParam0[iVar19 /*7*/])->f_3)
	{
		(uParam0[iVar19 /*7*/])->f_4 = iVar22;
		(*uParam0)[iVar19 /*7*/] = iVar20;
		(uParam0[iVar19 /*7*/])->f_3 = 1;
		(uParam0[iVar19 /*7*/])->f_6 = iVar23;
	}
}

void func_393(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	iVar0 = __LIB_16__::func_396(iParam1);
	iVar1 = __LIB_12__::func_484(iParam1);
	if (iParam1 == __LIB_0__::func_61())
	{
		(uParam0[0 /*7*/])->f_4 = iVar0;
		(*uParam0)[0 /*7*/] = iParam1;
		(uParam0[0 /*7*/])->f_3 = 1;
		(uParam0[0 /*7*/])->f_6 = iVar1;
		return;
	}
	iVar2 = 1;
	while (((uParam0[iVar2 /*7*/])->f_4 < iVar0 && iVar2 < (*uParam0 - 1)) && (uParam0[iVar2 /*7*/])->f_3)
	{
		iVar2++;
	}
	iVar3 = iVar2;
	iVar4 = iParam1;
	iVar6 = iVar0;
	iVar7 = iVar1;
	while ((uParam0[iVar3 /*7*/])->f_3 && iVar3 < (*uParam0 - 1))
	{
		if (iVar4 == iParam1)
		{
		}
		iVar8 = (uParam0[iVar3 /*7*/])->f_4;
		iVar5 = (*uParam0)[iVar3 /*7*/];
		iVar9 = (uParam0[iVar3 /*7*/])->f_6;
		(uParam0[iVar3 /*7*/])->f_4 = iVar6;
		(*uParam0)[iVar3 /*7*/] = iVar4;
		(uParam0[iVar3 /*7*/])->f_3 = 1;
		(uParam0[iVar3 /*7*/])->f_6 = iVar7;
		__LIB_18__::func_970(uParam0[iVar3 /*7*/], (*uParam0)[iVar3 /*7*/]);
		iVar6 = iVar8;
		iVar4 = iVar5;
		iVar7 = iVar9;
		iVar3++;
	}
	if (!(uParam0[iVar3 /*7*/])->f_3)
	{
		(uParam0[iVar3 /*7*/])->f_4 = iVar6;
		(*uParam0)[iVar3 /*7*/] = iVar4;
		(uParam0[iVar3 /*7*/])->f_3 = 1;
		(uParam0[iVar3 /*7*/])->f_6 = iVar7;
	}
}

void func_394(int iParam0)
{
	if (__LIB_1__::func_510(32))
	{
		return;
	}
	__LIB_1__::func_511(32);
	if (__LIB_2__::func_365(Global_35))
	{
		Global_1935496.f_7 |= 1;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 1);
	}
	if (__LIB_3__::func_996(Global_35))
	{
		Global_1935496.f_7 |= 2;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 2);
	}
	if (__LIB_0__::func_491(Global_35, 713668775))
	{
		Global_1935496.f_7 |= 4;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 4);
	}
	if (__LIB_1__::func_376(Global_35))
	{
		Global_1935496.f_7 |= 8;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 8);
	}
	if (__LIB_18__::func_968(0, 1))
	{
		Global_1935496.f_7 |= 16;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 16);
	}
	if (!__LIB_7__::func_814(0))
	{
		Global_1935496.f_7 |= 32;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 32);
	}
	if (!__LIB_7__::func_815(0))
	{
		Global_1935496.f_7 |= 512;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 512);
	}
	if (!__LIB_7__::func_816(0))
	{
		Global_1935496.f_7 |= 8192;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 8192);
	}
	if (PED::IS_PED_IN_COVER(Global_35, false, true))
	{
		Global_1935496.f_7 |= 16384;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 16384);
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		Global_1935496.f_7 |= 32768;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 32768);
	}
	if (__LIB_0__::func_2() == 0 && PED::_0xB655DB7582AEC805(Global_35))
	{
		Global_1935496.f_7 |= 131072;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 131072);
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		Global_1935496.f_7 |= 256;
	}
	else if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		Global_1935496.f_7 |= 256;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 256);
	}
	if (Global_1935630.f_24 || TASK::_IS_PED_DUELLING(Global_35))
	{
		Global_1935496.f_7 |= 1024;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 1024);
	}
	if (TASK::IS_PED_RUNNING(Global_35))
	{
		Global_1935496.f_7 |= 4096;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 4096);
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || __LIB_0__::func_491(Global_35, 1369124074))
	{
		Global_1935496.f_7 |= 128;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 128);
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		Global_1935496.f_7 |= 33554432;
		if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("WORLD_PLAYER_DYNAMIC_KNEEL"))
		{
			Global_1935496.f_7 |= 67108864;
		}
		else
		{
			Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 67108864);
		}
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 67108864);
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 33554432);
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		Global_1935496.f_7 |= 65536;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 65536);
	}
	if (CAM::_0x1204EB53A5FBC63D())
	{
		Global_1935496.f_7 |= 64;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 64);
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		Global_1935496.f_7 |= 1048576;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 1048576);
	}
	if (__LIB_7__::func_826(iParam0, 0))
	{
		Global_1935496.f_7 |= 524288;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 524288);
	}
	if (__LIB_7__::func_827(iParam0, 0))
	{
		Global_1935496.f_7 |= 262144;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 262144);
	}
	if (__LIB_1__::func_869(Global_35))
	{
		Global_1935496.f_7 |= 4194304;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 4194304);
	}
	if (__LIB_7__::func_593())
	{
		Global_1935496.f_7 |= 16777216;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 16777216);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (__LIB_0__::func_125(iParam0))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("A_C_HORSEMULE_01"):
				case joaat("A_C_HORSEMULEPAINTED_01"):
				case joaat("A_C_DONKEY_01"):
					Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
					break;
				default:
					Global_1935496.f_7 |= 134217728;
					break;
			}
		}
		if (PED::_IS_METAPED_USING_COMPONENT(iParam0, 149557334))
		{
			Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
		}
		if (PED::IS_PED_ON_VEHICLE(iParam0, false))
		{
			Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
		}
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
	}
	if (((((__LIB_0__::func_2() == -1 && __LIB_4__::func_635(32768)) || __LIB_7__::func_781()) || __LIB_9__::func_994()) || (__LIB_2__::func_776() && !__LIB_7__::func_770())) || ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f)
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 2097152);
	}
	else
	{
		Global_1935496.f_7 |= 2097152;
	}
	if (Global_1900073.f_17 && __LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_FISHINGROD"))
	{
		Global_1935496.f_7 |= 8388608;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 8388608);
	}
}

void func_395(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		__LIB_19__::func_103(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		__LIB_19__::func_103(iParam1, 1);
		__LIB_3__::func_871(iParam0);
	}
}

void func_396(int iParam0, int iParam1)
{
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (__LIB_16__::func_961(19, iParam1, &(iParam0->f_195), iParam0->f_218[0]))
		{
			iParam0->f_372 = 1;
			if (__LIB_16__::func_809(&(iParam0->f_195)))
			{
				__LIB_16__::func_960(iParam0);
			}
		}
		if (*iParam0 == 21)
		{
			if (iParam0->f_372)
			{
				if (__LIB_16__::func_894(&(iParam0->f_195)))
				{
					if (!__LIB_16__::func_809(&(iParam0->f_195)))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_245) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_245, false))
						{
							__LIB_18__::func_976(iParam0, &(iParam0->f_245), __LIB_16__::func_920(), 0, 0, 0, 1, 0);
						}
						else
						{
							__LIB_1__::func_581(&(iParam0->f_253), 128);
							__LIB_16__::func_944(iParam0, 57);
						}
					}
				}
			}
		}
		if (!__LIB_0__::func_272(Global_35, 0))
		{
			__LIB_16__::func_960(iParam0);
		}
		else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, __LIB_0__::func_559(76), true, 0))
		{
			if (!__LIB_0__::func_75(&(iParam0->f_130)))
			{
				__LIB_1__::func_283(&(iParam0->f_130), 0);
			}
			else if (__LIB_0__::func_265(&(iParam0->f_130)) > 10f)
			{
				__LIB_0__::func_37(&(iParam0->f_130));
				__LIB_16__::func_960(iParam0);
			}
		}
	}
}

void func_397(var uParam0, var uParam1)
{
	bool bVar0;
	if (*uParam1 <= 2 || *uParam1 >= 34)
	{
		return;
	}
	if (!__LIB_0__::func_272(uParam0->f_144, 0))
	{
		__LIB_18__::func_981(uParam0, 0);
		__LIB_17__::func_86(uParam0, uParam1, 34);
		return;
	}
	PED::SET_PED_RESET_FLAG(uParam0->f_144, 49, true);
	bVar0 = PED::_0x336B3D200AB007CB(uParam0->f_144, ENTITY::GET_ENTITY_COORDS(uParam0->f_144, true, false), 10f, 256) > 0;
	if (__LIB_10__::func_373(uParam0->f_144, 0, &(uParam0->f_98), &(uParam0->f_126), 0, uParam0->f_214) || bVar0)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_144, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 153, false);
		if (!__LIB_0__::func_163(uParam0->f_144, 518218985))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_144, true, false);
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_144, 1024, true);
			TASK::TASK_SMART_FLEE_PED(uParam0->f_144, Global_35, 100f, -1, 4096, 1077936128 /* Float: 3f */, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 130, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 315, false);
			__LIB_16__::func_804(uParam0->f_144);
		}
		__LIB_16__::func_789(11);
		__LIB_16__::func_866(uParam0->f_144, "GENERIC_SHOCKED_HIGH", -417894478, Global_35, 1, "GAVINS_FRIEND", 0, 1);
		uParam0->f_211 = MISC::GET_GAME_TIMER() + 150;
		__LIB_17__::func_86(uParam0, uParam1, 35);
	}
}

void func_398(var uParam0, var uParam1)
{
	if ((*uParam1 <= 2 || *uParam1 == 32) || *uParam1 == 33)
	{
		return;
	}
	if (__LIB_17__::func_67(11, __LIB_11__::func_133(11), &(uParam0->f_275), uParam0->f_144))
	{
		__LIB_18__::func_981(uParam0, 1);
		__LIB_17__::func_86(uParam0, uParam1, 37);
		return;
	}
	if (__LIB_16__::func_923(Global_1396257[11 /*638*/][__LIB_11__::func_133(11) /*48*/].f_8[0], 0) || __LIB_16__::func_923(Global_1396257[11 /*638*/][__LIB_11__::func_133(11) /*48*/].f_8[1], 0))
	{
		__LIB_18__::func_981(uParam0, 1);
		__LIB_17__::func_86(uParam0, uParam1, 37);
		return;
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		__LIB_18__::func_981(uParam0, 1);
		__LIB_17__::func_86(uParam0, uParam1, 37);
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[11 /*638*/][__LIB_11__::func_133(11) /*48*/].f_47))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1396257[11 /*638*/][__LIB_11__::func_133(11) /*48*/].f_47, true, 0))
		{
			__LIB_18__::func_981(uParam0, 1);
			__LIB_17__::func_86(uParam0, uParam1, 37);
			return;
		}
	}
	if (uParam0->f_127 != -1)
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, __LIB_0__::func_559(uParam0->f_127), true, 0))
		{
			__LIB_18__::func_981(uParam0, 1);
			__LIB_17__::func_86(uParam0, uParam1, 37);
			return;
		}
	}
	if (__LIB_0__::func_27(uParam0->f_193, 64) && uParam0->f_214 > 125f)
	{
		__LIB_18__::func_981(uParam0, 1);
		__LIB_17__::func_86(uParam0, uParam1, 37);
	}
}

bool func_399(var uParam0)
{
	struct<4> Var0;
	Var0 = { __LIB_17__::func_96(uParam0, 0) };
	if (__LIB_16__::func_946(&(uParam0->f_144), uParam0->f_143, Var0, Var0.f_3, 1, 1, 1))
	{
		if (__LIB_0__::func_272(uParam0->f_144, 0))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_144, "special_ped_group", 0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_144, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_144, joaat("REL_CIVMALE"));
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 297, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 130, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 317, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 315, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 344, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 153, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_144, 17, true);
			PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_144, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_144, true, true);
			__LIB_0__::func_928(uParam0, uParam0->f_144, "GAVINS_FRIEND", 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_144, Var0, Var0.f_3, true, false, true);
			__LIB_18__::func_992(uParam0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_144, 7, 0, 1);
			uParam0->f_209 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INTERESTING_NEW"), uParam0->f_144, 0f, 7f, 7f, 6f, -1f, 180f, false, false, -1, -1);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_205, "cs_gavin", uParam0->f_144, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_206, "cs_gavin", uParam0->f_144, 0);
			if (__LIB_0__::func_181())
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_206, "player_three", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_206, "player_zero", Global_35, 0);
			}
			if (__LIB_0__::func_181())
			{
				__LIB_0__::func_862(uParam0->f_144, 1689938120);
			}
			else
			{
				__LIB_0__::func_862(uParam0->f_144, joaat("META_OUTFIT_DEFAULT"));
			}
			PED::_0x7C00CFC48A782DC0(uParam0->f_151, uParam0->f_144, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			PED::_0x7C00CFC48A782DC0(uParam0->f_150, uParam0->f_144, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			PED::_0x7C00CFC48A782DC0(uParam0->f_152, uParam0->f_144, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_152, 0);
			VOLUME::_0xBE551C2CC421185D(uParam0->f_152, 1);
			__LIB_13__::func_312(uParam0->f_144, joaat("DOCUMENT_LETTER_GAVIN_FRIEND"), 1);
			__LIB_17__::func_100(uParam0);
			__LIB_17__::func_101(uParam0, 0);
			__LIB_1__::func_581(&(uParam0->f_193), 1024);
			__LIB_16__::func_792(uParam0->f_144, 11);
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), uParam0->f_144, "SPECIAL_PED_LIGHTWEIGHT_1_0", 0f, 0f, 0f, 0, "GavinBubble");
			if (__LIB_0__::func_27(Global_40.f_11623[11 /*8*/].f_1, 4194304))
			{
				PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(uParam0->f_144, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_NIGEL"));
			}
			return true;
		}
	}
	return false;
}

bool func_400(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((__LIB_0__::func_64(0) == 1 || __LIB_0__::func_64(0) == 2) || __LIB_0__::func_64(0) == 8) || __LIB_0__::func_1(Global_1935630, 2048))
			{
				__LIB_1__::func_581(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (__LIB_0__::func_64(0) == 11)
			{
				__LIB_1__::func_581(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (__LIB_0__::func_64(0) == 6)
			{
				__LIB_1__::func_581(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				__LIB_1__::func_581(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(__LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && __LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = __LIB_0__::func_23();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (__LIB_0__::func_41(iVar2) > __LIB_0__::func_41(iVar1))
				{
					if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 || __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
					{
						__LIB_1__::func_581(uParam2, 32);
					}
				}
				else if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 && __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
				{
					__LIB_1__::func_581(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((__LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || __LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || __LIB_5__::func_219(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || __LIB_5__::func_219(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!__LIB_16__::func_784(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						__LIB_1__::func_581(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (__LIB_17__::func_155(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || __LIB_18__::func_997(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!__LIB_0__::func_75(&(uParam2->f_13)))
					{
						__LIB_0__::func_268(&(uParam2->f_13), 0f);
					}
					else if (__LIB_1__::func_871(&(uParam2->f_13)) >= uParam2->f_16)
					{
						__LIB_0__::func_37(&(uParam2->f_13));
						__LIB_1__::func_581(uParam2, 512);
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (__LIB_0__::func_75(&(uParam2->f_13)))
					{
						__LIB_0__::func_37(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (__LIB_2__::func_7())
			{
				__LIB_1__::func_581(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (__LIB_16__::func_785())
			{
				__LIB_1__::func_581(uParam2, 2048);
			}
		}
		if (__LIB_0__::func_1(Global_1935630, 16384) || Global_1430231.f_4)
		{
			__LIB_1__::func_581(uParam2, 128);
		}
		if (__LIB_8__::func_747(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			__LIB_1__::func_581(uParam2, 256);
		}
	}
	if ((((((((((__LIB_0__::func_27(*uParam2, 2) || __LIB_0__::func_27(*uParam2, 4)) || __LIB_0__::func_27(*uParam2, 8)) || __LIB_0__::func_27(*uParam2, 16)) || __LIB_0__::func_27(*uParam2, 32)) || __LIB_0__::func_27(*uParam2, 64)) || __LIB_0__::func_27(*uParam2, 128)) || __LIB_0__::func_27(*uParam2, 256)) || __LIB_0__::func_27(*uParam2, 512)) || __LIB_0__::func_27(*uParam2, 1024)) || __LIB_0__::func_27(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_401(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_350)
	{
		case 0:
			__LIB_17__::func_180(uParam0, __LIB_18__::func_998(uParam0, uParam1), 1);
			break;
		case 1:
			__LIB_17__::func_180(uParam0, __LIB_18__::func_999(uParam0, uParam1), 1);
			break;
		case 2:
			__LIB_17__::func_180(uParam0, __LIB_19__::func_0(uParam0, uParam1), 1);
			break;
		case 3:
			if (__LIB_19__::func_1(uParam0, uParam1))
			{
				__LIB_17__::func_180(uParam0, 4, 1);
			}
			break;
		case 4:
			if (!__LIB_17__::func_52(uParam0, 2))
			{
				Stack.Push(((iParam2 == 5 || (__LIB_17__::func_56(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_353 && __LIB_17__::func_56(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_23);
				if (StackVal || StackVal)
				{
					__LIB_17__::func_59(uParam0, 2);
				}
			}
			else
			{
				__LIB_17__::func_180(uParam0, 5, 1);
			}
			break;
		case 5:
			if (!__LIB_17__::func_52(uParam0, 4))
			{
				if (__LIB_19__::func_2(uParam0, uParam1, iParam2))
				{
					__LIB_17__::func_59(uParam0, 4);
				}
			}
			if (!__LIB_17__::func_52(uParam0, 8))
			{
				Stack.Push(((iParam2 == 5 || (__LIB_17__::func_56(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_353 && __LIB_17__::func_56(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_24);
				if (StackVal || StackVal)
				{
					__LIB_17__::func_59(uParam0, 8);
				}
			}
			if (__LIB_17__::func_52(uParam0, 4) && __LIB_17__::func_52(uParam0, 8))
			{
				__LIB_17__::func_180(uParam0, 6, 1);
			}
			break;
		case 6:
			if (!__LIB_17__::func_52(uParam0, 16))
			{
				if (__LIB_17__::func_60(uParam0, uParam1))
				{
					__LIB_17__::func_59(uParam0, 16);
				}
			}
			if (!__LIB_17__::func_52(uParam0, 32))
			{
				Stack.Push(((iParam2 == 5 || (__LIB_17__::func_56(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_353 && __LIB_17__::func_56(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_25);
				if (StackVal || StackVal)
				{
					__LIB_17__::func_59(uParam0, 32);
				}
			}
			if (__LIB_17__::func_52(uParam0, 16) && __LIB_17__::func_52(uParam0, 32))
			{
				__LIB_17__::func_180(uParam0, 0, 1);
				return true;
			}
			break;
	}
	return false;
}

void func_402(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	__LIB_19__::func_5(iParam0);
}

void func_403(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_313 = iParam1;
	__LIB_19__::func_7(uParam0, 0, 1);
	if (bParam2)
	{
		__LIB_17__::func_310(uParam0);
	}
}

void func_404(int iParam0, int iParam1, bool bParam2)
{
	if (!__LIB_16__::func_817(iParam1))
	{
		return;
	}
	if (__LIB_17__::func_306(iParam0) == iParam1)
	{
		if (bParam2)
		{
			if (__LIB_16__::func_819(iParam0, iParam1) != 1)
			{
				__LIB_19__::func_6(iParam0, iParam1, 1, 1);
			}
		}
		else if (__LIB_16__::func_819(&Local_14, iParam1) != __LIB_2__::func_340(3, 0, 0))
		{
			__LIB_19__::func_6(&Local_14, iParam1, __LIB_2__::func_340(3, 0, 0), 1);
		}
	}
}

bool func_405(var uParam0, var uParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	uVar0 = *uParam1;
	if (bParam2)
	{
		if (__LIB_17__::func_314(uParam0, 2))
		{
			return true;
		}
		if (__LIB_17__::func_314(uParam0, 1))
		{
			return true;
		}
	}
	if (!__LIB_19__::func_8(uVar0, &iVar1))
	{
		return true;
	}
	if ((uParam0[iVar1 /*36*/])->f_35)
	{
		return true;
	}
	if (uParam1->f_26 == 1)
	{
		return true;
	}
	else if (uParam1->f_26 == 2)
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
	{
		uParam1->f_26 = 1;
		return true;
	}
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar1 /*36*/], true)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false))
	{
		if (!ANIMSCENE::_0xA9016536015DE29D((*uParam0)[iVar1 /*36*/], uParam1->f_12))
		{
			uParam1->f_26 = 1;
			return true;
		}
		else
		{
			uParam1->f_26 = 2;
			return false;
		}
	}
	return false;
}

bool func_406(var uParam0, int iParam1)
{
	if (__LIB_19__::func_9(uParam0, iParam1))
	{
		__LIB_16__::func_5(uParam0);
		return true;
	}
	return false;
}

int func_407(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	if (*uParam2)
	{
		return 1;
	}
	if (!__LIB_19__::func_8(iParam1, &iVar0))
	{
		return 0;
	}
	if ((uParam0[iVar0 /*36*/])->f_35)
	{
		*uParam2 = 1;
		return 1;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]) && (ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar0 /*36*/], true) || ANIMSCENE::_IS_ANIM_SCENE_LOADED((*uParam0)[iVar0 /*36*/], true, false)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam0[iVar0 /*36*/])->f_2))
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar0 /*36*/], (uParam0[iVar0 /*36*/])->f_2);
			*uParam2 = 1;
		}
		else
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar0 /*36*/], 0);
			*uParam2 = 1;
		}
	}
	return 1;
}

int func_408(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0->f_173;
	if (uParam0->f_173.f_27)
	{
		return 1;
	}
	if (__LIB_19__::func_8(iVar0, &iVar1))
	{
		if (__LIB_16__::func_829(uParam0[iVar1 /*36*/], uParam0->f_173.f_12) || uParam0->f_173.f_26 == 1)
		{
			uParam0->f_173.f_27 = 1;
			return 1;
		}
	}
	return 0;
}

bool func_409(int iParam0, var uParam1)
{
	struct<4> Var0;
	if (!__LIB_1__::func_131(856287005, iParam0))
	{
		return false;
	}
	Var0 = { __LIB_19__::func_11() };
	*uParam1 = __LIB_1__::func_81(Var0, iParam0, 0);
	if (!__LIB_0__::func_144(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_410(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;
	if (!__LIB_19__::func_12(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_577(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { __LIB_17__::func_325(0) };
	if (!__LIB_0__::func_849(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_850(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

void func_411(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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
		if (!__LIB_19__::func_14(&(Global_1946804.f_1378), &bVar0, iVar2, iVar3, 1, 0))
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

void func_412(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_205 = iParam1;
	__LIB_19__::func_15(uParam0, 0, 1);
	if (bParam2)
	{
		__LIB_17__::func_371(uParam0);
	}
}

bool func_413(var uParam0, var uParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	uVar0 = *uParam1;
	if (bParam2)
	{
		if (__LIB_17__::func_374(uParam0, 2))
		{
			return true;
		}
		if (__LIB_17__::func_374(uParam0, 1))
		{
			return true;
		}
	}
	if (!__LIB_19__::func_16(uVar0, &iVar1))
	{
		return true;
	}
	if ((uParam0[iVar1 /*36*/])->f_35)
	{
		return true;
	}
	if (uParam1->f_26 == 1)
	{
		return true;
	}
	else if (uParam1->f_26 == 2)
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
	{
		uParam1->f_26 = 1;
		return true;
	}
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar1 /*36*/], true)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false))
	{
		if (!ANIMSCENE::_0xA9016536015DE29D((*uParam0)[iVar1 /*36*/], uParam1->f_12))
		{
			uParam1->f_26 = 1;
			return true;
		}
		else
		{
			uParam1->f_26 = 2;
			return false;
		}
	}
	return false;
}

int func_414(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	if (*uParam2)
	{
		return 1;
	}
	if (!__LIB_19__::func_16(iParam1, &iVar0))
	{
		return 0;
	}
	if ((uParam0[iVar0 /*36*/])->f_35)
	{
		*uParam2 = 1;
		return 1;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]) && (ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar0 /*36*/], true) || ANIMSCENE::_IS_ANIM_SCENE_LOADED((*uParam0)[iVar0 /*36*/], true, false)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam0[iVar0 /*36*/])->f_2))
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar0 /*36*/], (uParam0[iVar0 /*36*/])->f_2);
			*uParam2 = 1;
		}
		else
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar0 /*36*/], 0);
			*uParam2 = 1;
		}
	}
	return 1;
}

int func_415(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0->f_65;
	if (uParam0->f_65.f_27)
	{
		return 1;
	}
	if (__LIB_19__::func_16(iVar0, &iVar1))
	{
		if (__LIB_16__::func_829(uParam0[iVar1 /*36*/], uParam0->f_65.f_12) || uParam0->f_65.f_26 == 1)
		{
			uParam0->f_65.f_27 = 1;
			return 1;
		}
	}
	return 0;
}

int func_416(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var7;
	if (!__LIB_16__::func_377(&uVar0, iParam1))
	{
		return 0;
	}
	if (!__LIB_19__::func_21(&uVar0, &Var7))
	{
		return 0;
	}
	uParam0->f_317 = iParam1;
	uParam0->f_314 = { Var7 };
	uParam0->f_304 = Var7.f_3;
	if (Var7.f_4 == 0)
	{
		return __LIB_16__::func_238(uParam0, Var7, Var7.f_3);
	}
	else
	{
		STREAMING::_0x032A14D082A9B269(Var7.f_4);
		__LIB_0__::func_7(&(uParam0->f_318), 1024);
		__LIB_0__::func_8(&(uParam0->f_318), 2048);
		return 1;
	}
	return 1;
}

void func_417()
{
	int iVar0;
	if (Global_1934603.f_161 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iVar0 /*16*/].f_10)))
			{
				__LIB_19__::func_27(iVar0);
			}
			iVar0++;
		}
	}
}

void func_418(int iParam0)
{
	if (__LIB_1__::func_888(iParam0, 4))
	{
		__LIB_19__::func_30(iParam0);
		__LIB_16__::func_192(iParam0, 4);
	}
	if (__LIB_1__::func_888(iParam0, 8))
	{
		__LIB_17__::func_449(iParam0);
		__LIB_16__::func_192(iParam0, 8);
	}
}

void func_419()
{
	if (Global_1894899.f_9)
	{
		if (!__LIB_3__::func_127(Global_1934266.f_148))
		{
			__LIB_18__::func_776();
		}
	}
	switch (HUD::_0x7EC0D68233E391AC(6))
	{
		case 1:
			if (!__LIB_3__::func_127(Global_1934266.f_148))
			{
				__LIB_18__::func_776();
			}
			break;
		case 2:
			if (__LIB_3__::func_127(Global_1934266.f_148))
			{
				UIFEED::_0x2F901291EF177B02(Global_1934266.f_148, 0);
			}
			break;
	}
}

void func_420(int iParam0)
{
	int iVar0;
	if ((((Global_1934266.f_26 == iParam0 || iParam0 == 0) || (iParam0 == joaat("LAW_REGION_VALENTINE_LOCKDOWN") && Global_1934266.f_26 == joaat("LAW_REGION_VALENTINE"))) || (iParam0 == joaat("LAW_REGION_RHODES_LOCKDOWN") && Global_1934266.f_26 == joaat("LAW_REGION_RHODES"))) || Global_1934266.f_26 == 0)
	{
		iVar0 = __LIB_1__::func_898();
		__LIB_18__::func_951(__LIB_4__::func_929(iVar0, 1), -1);
	}
}

int func_421(var uParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_4__::func_937(uParam0, 16777216))
	{
		__LIB_5__::func_345(uParam0);
		__LIB_4__::func_969(uParam0, 65536);
		return 0;
	}
	if (!__LIB_5__::func_331(uParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { __LIB_5__::func_299(uParam0, iParam1) };
	if (__LIB_19__::func_43(uParam0, &Var0))
	{
		if (!__LIB_4__::func_937(uParam0, 65536))
		{
			__LIB_4__::func_944(uParam0, 65536);
		}
		return 1;
	}
	return 0;
}

int func_422(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (!__LIB_19__::func_45(iVar1, bParam0, bParam1, bParam2))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_423(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_4__::func_725(uParam0, 32768))
	{
		return 1;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1896 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1897 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1899 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1897)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1898 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1898 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1899)
		{
			uParam0->f_1901 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1902 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_5__::func_192(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_19__::func_47(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_4__::func_725(uParam0, 524288))
				{
					__LIB_5__::func_222(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_4__::func_751(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_5__::func_419(uParam0, iParam5);
					return 1;
				}
			}
			if (!__LIB_4__::func_725(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1684 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_5__::func_139(uParam0, uParam0->f_1684))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1688 >= 0)
					{
						__LIB_5__::func_420(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1688 >= 0)
				{
					__LIB_5__::func_420(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_7__::func_445(uParam0);
			}
		}
	}
	bVar0 = __LIB_5__::func_421(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_4__::func_725(uParam0, 268435456) && bVar1) && !__LIB_4__::func_725(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1902);
			if (uParam0->f_1684 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1016[uParam0->f_1684 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1902)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_4__::func_757(uParam0, 131072);
				__LIB_4__::func_757(uParam0, 268435456);
			}
		}
		if (__LIB_4__::func_756(uParam0, 64) || (uParam0->f_1684 >= 0 && !__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_4__::func_725(uParam0, 131072))
	{
		__LIB_5__::func_140(uParam0);
		if (!__LIB_4__::func_725(uParam0, 262144))
		{
			if ((bVar0 && __LIB_4__::func_725(uParam0, 65536)) || __LIB_4__::func_725(uParam0, 131072))
			{
				__LIB_4__::func_757(uParam0, 32768);
				__LIB_4__::func_751(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1769 = 1;
				__LIB_5__::func_419(uParam0, iParam5);
				return 1;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_9__::func_77(uParam0, iParam5);
		__LIB_5__::func_141(uParam0);
		if (!__LIB_5__::func_142(uParam0, 1))
		{
			__LIB_4__::func_786(uParam0);
		}
		__LIB_5__::func_143(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_5__::func_606(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_5__::func_529(uParam0);
			break;
		case 2:
			__LIB_5__::func_522(uParam0);
			break;
		case 3:
			if (__LIB_5__::func_144(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_5__::func_420(uParam0, uParam0->f_1016[uParam0->f_1684 /*41*/].f_27, uParam0->f_1345[uParam0->f_1684 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_1872));
				__LIB_4__::func_751(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_4__::func_725(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_5__::func_145(uParam0))
				{
					__LIB_4__::func_751(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_5__::func_146(uParam0))
				{
					__LIB_4__::func_751(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1685 >= 0 || __LIB_0__::func_264(&(uParam0->f_1872)) >= 15f)
			{
				if (__LIB_5__::func_399(uParam0, iParam5))
				{
					if (__LIB_5__::func_147(uParam0))
					{
						uParam0->f_1685 = __LIB_5__::func_193(uParam0);
						__LIB_1__::func_148(&(uParam0->f_1872));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_4__::func_751(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_4__::func_751(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_5__::func_419(uParam0, iParam5);
						return 1;
					}
				}
			}
			break;
		case 9:
			if (__LIB_5__::func_399(uParam0, iParam5))
			{
				__LIB_5__::func_419(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return 1;
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

void func_424(var uParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	__LIB_0__::func_732(2000);
	Global_16 = 0;
	__LIB_0__::func_109();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, __LIB_0__::func_1(*uParam0, 8));
	if (!__LIB_0__::func_1(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (__LIB_0__::func_1(*uParam0, 2) || __LIB_0__::func_1(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*uParam0, 16))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_0__::func_1(*uParam0, 32))
	{
		__LIB_19__::func_54(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		__LIB_4__::func_799(joaat("KIT_BANDANA"), 0);
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_425(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_750(&iVar0))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) == -525676072)
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("MASKS_LARGE"), 0);
				__LIB_19__::func_54(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("NECKWEAR"), 0);
			}
			if (!__LIB_0__::func_144(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

bool func_426(char[4] cParam0, int iParam1, char[4] cParam2, int iParam3, char[4] cParam4, char[4] cParam5, int iParam6, float fParam7, float fParam8)
{
	char cVar0[64];
	char cVar8[64];
	bool bVar16;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	StringCopy(&cVar0, "HORSE_RET", 64);
	if (__LIB_0__::func_48(Global_35, iParam1, fParam7, 1))
	{
		StringCopy(&cVar0, "HORSE_MOUNT", 64);
	}
	StringCopy(&cVar8, "HORSE_FAIL", 64);
	bVar16 = __LIB_19__::func_58(cParam0, iParam1, cVar0, cVar8, 512, cParam2, cParam4, cParam5);
	if (__LIB_6__::func_863(cParam0) != 1 && __LIB_6__::func_862(cParam0, 64))
	{
		__LIB_9__::func_411(cParam0, iParam1, iParam6, bVar16, iParam3);
		__LIB_6__::func_887(cParam0, 64);
		if (bVar16)
		{
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 33, 2, 1);
		}
		else
		{
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 33, 2, 0);
		}
	}
	if (bVar16)
	{
		if (!__LIB_0__::func_86(cParam0->f_5304) && __LIB_0__::func_94(iParam1, cParam0->f_5304, 1) >= fParam8)
		{
			if (__LIB_0__::func_163(iParam1, 2043986356))
			{
				TASK::CLEAR_PED_TASKS(iParam1, true, false);
			}
			__LIB_1__::func_538(1);
		}
		PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), iParam1);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LEAD_ANIMAL"), false);
		return true;
	}
	return false;
}

bool func_427(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
		case 6:
		case 12:
			iVar0 = 19;
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			iVar0 = 40;
			break;
		default:
			iVar0 = __LIB_19__::func_65(iParam0, 0, 0, 119, 0);
			break;
	}
	return iVar0 != 0;
}

float func_428(int iParam0)
{
	switch (iParam0)
	{
		case 58:
			if (__LIB_0__::func_181() && __LIB_3__::func_657(58) == 1)
			{
				return 0.5f;
			}
			break;
	}
	if (__LIB_5__::func_751() && __LIB_1__::func_85(iParam0, 16777216))
	{
		if (__LIB_19__::func_64())
		{
			return 1.25f;
		}
		else
		{
			return 1f;
		}
	}
	return 0f;
}

void func_429(var uParam0)
{
	int iVar0;
	int iVar1;
	switch (uParam0->f_8)
	{
		case 1:
			__LIB_4__::func_926(uParam0);
			uParam0->f_8 = 2;
			break;
		case 2:
			if ((__LIB_17__::func_638(2, 2) || __LIB_17__::func_638(1, 2)) || __LIB_17__::func_638(0, 2))
			{
				uParam0->f_4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, -1.25f, -1f, -1f) };
				uParam0->f_8 = 4;
			}
			break;
		case 4:
			if (__LIB_4__::func_927(uParam0))
			{
				Stack.Push(uParam0);
				Call_Loc(uParam0->f_31);
				if (StackVal)
				{
					uParam0->f_8 = 32;
				}
				Jump @1358; //curOff = 175
			}
			else if (uParam0->f_10)
			{
				uParam0->f_3 = __LIB_19__::func_68();
				Stack.Push(uParam0->f_3 != 0);
				Stack.Push(uParam0);
				Call_Loc(uParam0->f_31);
				if (StackVal && StackVal)
				{
					PED::_0xF008E0BA1FE1D644(1);
					STREAMING::REQUEST_MODEL(uParam0->f_3, false);
					uParam0->f_8 = 8;
				}
				else
				{
					uParam0->f_8 = 512;
				}
			}
			else
			{
				uParam0->f_8 = 512;
			}
			break;
		case 8:
			if (!PED::_0x5E420FF293EE5472())
			{
			}
			else if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_3))
			{
			}
			else
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
				{
					Stack.Push(uParam0);
					Stack.Push(uParam0->f_3);
					Call_Loc(uParam0->f_32);
					if (StackVal)
					{
						uParam0->f_1 = __LIB_1__::func_545(uParam0->f_3, uParam0->f_4, ENTITY::GET_ENTITY_HEADING(Global_35), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 130, false);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 315, false);
						PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
						PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 3, 2, 0);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 4, 2, 0);
						uParam0->f_8 = 16;
					}
					else
					{
						Jump @443; //curOff = 431
						uParam0->f_8 = 32;
						Jump @1358; //curOff = 440
						if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
						{
							uParam0->f_8 = 512;
						}
						Jump @1358; //curOff = 462
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(0, Global_35, -1.15f, -0.5f, 0f, 1f, -1, 0);
							TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, 4f, 0f), 2000);
							TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1, iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
							PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
							WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_1, true, true);
							uParam0->f_8 = 32;
						}
						else
						{
							uParam0->f_8 = 256;
							Jump @1358; //curOff = 605
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
							{
								PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
							}
							if (!__LIB_4__::func_928(uParam0->f_1))
							{
								if (__LIB_4__::func_916() && __LIB_4__::func_856(uParam0->f_1, 1))
								{
									if (__LIB_19__::func_69(uParam0, uParam0->f_15))
									{
										PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
										PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
										PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 130, false);
										PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 315, false);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 3, 2, 1);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 4, 2, 1);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 7, 1, 0);
										__LIB_0__::func_37(&(uParam0->f_12));
										uParam0->f_8 = 64;
									}
									else
									{
										uParam0->f_8 = 256;
									}
								}
								else if (!__LIB_0__::func_75(&(uParam0->f_12)))
								{
									__LIB_1__::func_283(&(uParam0->f_12), 1);
								}
								else if (__LIB_0__::func_265(&(uParam0->f_12)) > 15f)
								{
									__LIB_0__::func_37(&(uParam0->f_12));
									uParam0->f_8 = 256;
								}
							}
							else
							{
								uParam0->f_8 = 256;
							}
							Jump @1358; //curOff = 861
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
							{
								PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
								PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
							}
							if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_18)))
							{
								uParam0->f_8 = 512;
							}
							else
							{
								if (!__LIB_0__::func_75(&(uParam0->f_12)))
								{
									__LIB_1__::func_283(&(uParam0->f_12), 1);
								}
								else if (__LIB_0__::func_265(&(uParam0->f_12)) > 3f)
								{
									uParam0->f_8 = 128;
								}
								Jump @1358; //curOff = 961
								if (!__LIB_0__::func_481(1))
								{
									if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
									{
										TASK::TASK_LOOK_AT_ENTITY(Global_35, uParam0->f_1, 10000, 0, 51, 0);
										if (!PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_1))
										{
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_1, Global_35, -1, -1f, -1f, -1f);
										}
										if (__LIB_19__::func_69(uParam0, uParam0->f_18))
										{
										}
									}
									uParam0->f_8 = 256;
								}
								Jump @1358; //curOff = 1063
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
								{
									PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
									PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
									if (__LIB_4__::func_928(uParam0->f_1))
									{
										__LIB_0__::func_82(1, 1, 1);
									}
									if (!__LIB_0__::func_481(1))
									{
										iVar1 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_14__::func_272(), joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_BAR_CA"), 3f, 1, false);
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										TASK::TASK_CLEAR_LOOK_AT(0);
										TASK::TASK_STAND_STILL(0, 2000);
										if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
										{
											TASK::_TASK_USE_SCENARIO_POINT(0, iVar1, 0, 0, true, false, 0, false, -1f, false);
										}
										else
										{
											TASK::TASK_SMART_FLEE_PED(0, Global_35, 50f, -1, 16768, 1f, 0);
										}
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 3, 2, 0);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 4, 2, 0);
										__LIB_2__::func_788(&(uParam0->f_1), 1, 0, 1);
										if (uParam0->f_10)
										{
											PED::_0x7D4E70A67A651C71(1);
										}
										uParam0->f_8 = 512;
									}
								}
								else
								{
									uParam0->f_8 = 512;
								}
								Jump @1358; //curOff = 1305
								if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
								{
									__LIB_0__::func_37(&(uParam0->f_12));
									if (uParam0->f_10)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_3);
									}
									uParam0->f_1 = 0;
									uParam0->f_8 = 1024;
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_430(var uParam0)
{
	if (__LIB_17__::func_653(uParam0))
	{
		__LIB_0__::func_19(uParam0, 3);
	}
	switch (__LIB_0__::func_81(uParam0))
	{
		case 1:
			if (__LIB_17__::func_659(uParam0))
			{
				__LIB_0__::func_19(uParam0, 2);
			}
			break;
		case 2:
			if (__LIB_19__::func_70(uParam0))
			{
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_17__::func_662(uParam0))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_431(char[4] cParam0, bool bParam1)
{
	__LIB_19__::func_85(cParam0);
	if (((bParam1 && __LIB_4__::func_576(&(cParam0->f_10792)) != 11) && !__LIB_4__::func_562(&(cParam0->f_10792), 131072)) && !__LIB_4__::func_562(&(cParam0->f_10792), 32768))
	{
		return false;
	}
	return __LIB_4__::func_581(&(cParam0->f_10792));
}

bool func_432(var uParam0)
{
	switch (uParam0->f_224)
	{
		case 0:
			if (__LIB_2__::func_256(uParam0))
			{
				__LIB_0__::func_11(uParam0, 1);
				return true;
			}
			break;
		case 1:
			if (__LIB_2__::func_346(uParam0))
			{
				__LIB_0__::func_11(uParam0, 2);
				return true;
			}
			break;
		case 2:
			if (__LIB_2__::func_321(uParam0))
			{
				__LIB_0__::func_11(uParam0, 3);
				return true;
			}
			break;
		case 3:
			if (__LIB_19__::func_89(uParam0))
			{
				__LIB_0__::func_11(uParam0, 4);
				return true;
			}
			break;
		case 4:
			if (__LIB_2__::func_406(uParam0))
			{
				__LIB_0__::func_11(uParam0, 5);
				return true;
			}
			break;
		case 5:
			if (__LIB_2__::func_605(uParam0))
			{
				__LIB_0__::func_11(uParam0, 6);
				return true;
			}
			break;
		case 6:
			break;
	}
	uParam0->f_224++;
	uParam0->f_224 = (uParam0->f_224 % 7);
	return false;
}

void func_433(var uParam0, char* sParam1)
{
	if (((!__LIB_0__::func_84(uParam0, 32) || __LIB_19__::func_96(uParam0)) || __LIB_0__::func_84(uParam0, 268435456)) && !__LIB_0__::func_84(uParam0, 65536))
	{
		__LIB_0__::func_7(&(uParam0->f_320), 256);
	}
}

void func_434(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		__LIB_19__::func_395(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		__LIB_19__::func_395(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		__LIB_19__::func_395(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		__LIB_19__::func_395(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		__LIB_19__::func_395(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		__LIB_19__::func_395(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		__LIB_19__::func_395(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		__LIB_19__::func_395(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		__LIB_19__::func_395(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		__LIB_19__::func_395(-1, iParam0);
	}
}

bool func_435(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (bParam6 || __LIB_19__::func_101(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || __LIB_3__::func_304(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (__LIB_1__::func_85(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				__LIB_3__::func_305(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = __LIB_3__::func_162(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

int func_436()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Local_18.f_3479 == -1)
	{
		__LIB_19__::func_116(Local_18.f_45, 1, 1);
		Local_18.f_3479 = 0;
	}
	if (__LIB_5__::func_869(Local_18.f_45))
	{
		iVar0 = __LIB_1__::func_953(Local_18.f_45);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			__LIB_6__::func_284(iVar0, Local_18.f_3479, iVar1, 1, 1);
			iVar1++;
		}
		iVar2 = Local_18.f_3479;
		iVar2++;
		Local_18.f_3479 = iVar2;
		if (Local_18.f_3479 >= 26)
		{
			Local_18.f_3479 = -1;
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_437()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Local_18.f_3479 == -1)
	{
		__LIB_19__::func_117(Local_18.f_45, 1, 1);
		Local_18.f_3479 = 0;
	}
	if (__LIB_5__::func_869(Local_18.f_45))
	{
		iVar0 = __LIB_1__::func_953(Local_18.f_45);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			__LIB_6__::func_284(iVar0, Local_18.f_3479, iVar1, 1, 1);
			iVar1++;
		}
		iVar2 = Local_18.f_3479;
		iVar2++;
		Local_18.f_3479 = iVar2;
		if (Local_18.f_3479 >= 26)
		{
			Local_18.f_3479 = -1;
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_438(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_1__::func_533(134217728) || __LIB_1__::func_533(268435456))
	{
		__LIB_19__::func_118(uParam0, uParam1);
	}
	__LIB_6__::func_651(uParam0, uParam1[uParam0->f_1645 /*8*/]);
	bVar0 = PED::IS_PED_USING_ANY_SCENARIO(Global_35);
	if (!__LIB_6__::func_209(uParam0) && __LIB_0__::func_139(uParam0->f_1610))
	{
		__LIB_1__::func_748(&(uParam0->f_1610), 1, 1);
	}
	if (__LIB_1__::func_533(4))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		PED::SET_PED_RESET_FLAG(Global_35, 288, true);
		PAD::_SET_CONTROL_CONTEXT(6, joaat("PLAYERPERFOMINGCHORE"));
		PED::SET_PED_RESET_FLAG(Global_35, 202, true);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.35f);
		if (uParam0->f_1590.f_1 == 14)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 316, true);
		}
		if (!__LIB_0__::func_139(uParam0->f_1610) && !bVar0)
		{
			uParam0->f_1610 = __LIB_2__::func_512("EXIT_CHORE", joaat("INPUT_CONTEXT_B"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			__LIB_0__::func_629(__LIB_0__::func_17(uParam0->f_1610), 0);
		}
		if (bVar0 && __LIB_1__::func_264(uParam0->f_1610, 1))
		{
			__LIB_0__::func_629(__LIB_0__::func_17(uParam0->f_1610), 0);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
		}
		else if (!bVar0 && !__LIB_1__::func_264(uParam0->f_1610, 1))
		{
			__LIB_0__::func_629(__LIB_0__::func_17(uParam0->f_1610), 1);
		}
		else if (!__LIB_1__::func_264(uParam0->f_1610, 1))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
		}
	}
	if (__LIB_0__::func_317() == 8)
	{
		__LIB_6__::func_560(uParam0, uParam1);
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (uParam0->f_1643 == -1 && ((bVar0 || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_DYNAMIC_SCENARIO"))) || __LIB_0__::func_163(Global_35, -76381094)))
		{
			iVar1 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false);
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
			{
				return;
			}
			iVar3 = TASK::_GET_SCENARIO_POINT_TYPE(iVar1);
			uParam0->f_1646 = { TASK::_GET_SCENARIO_POINT_COORDS(iVar1, true) };
			iVar2 = 0;
			while (iVar2 < *uParam1)
			{
				if (__LIB_6__::func_222(uParam1[iVar2 /*8*/], 1))
				{
					if (iVar3 == (*uParam1)[iVar2 /*8*/] && __LIB_0__::func_62(uParam0->f_1646, __LIB_6__::func_590(uParam1[iVar2 /*8*/])) < __LIB_6__::func_227(uParam1[iVar2 /*8*/]))
					{
						if (iVar3 == joaat("WORLD_PLAYER_CHORES_PUMP_WATER"))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
						}
						__LIB_5__::func_548(4);
						uParam0->f_1643 = iVar2;
						return;
					}
				}
				iVar2++;
			}
		}
		else if ((__LIB_1__::func_533(4) && !__LIB_0__::func_27(uParam0->f_1598, 32)) && !PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			__LIB_5__::func_547(4);
			uParam0->f_1643 = -1;
		}
		if (uParam0->f_1643 != -1 && (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -898657814)))
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::_0x1C6306E5BC25C29C();
			}
			uParam0->f_1582 = { *(uParam1[uParam0->f_1643 /*8*/]) };
			__LIB_1__::func_683(&((uParam1[uParam0->f_1643 /*8*/])->f_3), 1);
			__LIB_6__::func_316(uParam1, &(uParam0->f_1582));
			__LIB_6__::func_561(1);
			if (uParam0->f_1582.f_1 == 2 || uParam0->f_1582.f_1 == 10)
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("Pour_Water_Onto_Water", Global_35, "Chore_Water_Pump_Sounds", false, 0, 0);
			}
			uParam0->f_1581 = 5;
			if (__LIB_6__::func_228(uParam1[uParam0->f_1643 /*8*/]))
			{
				__LIB_6__::func_207(uParam1);
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1649))
			{
				uParam0->f_1649 = VOLUME::_CREATE_VOLUME_AGGREGATE();
			}
			VOLUME::_0x39816F6F94F385AD(uParam0->f_1649, uParam0->f_1646, 0f, 0f, 0f, 2f, 2f, 3f);
			if (__LIB_0__::func_27(uParam0->f_1598, 32))
			{
				__LIB_4__::func_353();
				__LIB_0__::func_769();
			}
			if (!__LIB_0__::func_139(uParam0->f_1610) && uParam0->f_1582.f_1 == 7)
			{
				uParam0->f_1610 = __LIB_2__::func_512("EXIT_CHORE", joaat("INPUT_CONTEXT_B"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			}
			__LIB_4__::func_229(1073741824 /* Float: 2f */);
			__LIB_6__::func_59(__LIB_5__::func_824(__LIB_0__::func_12()), 2048);
			__LIB_6__::func_59(__LIB_5__::func_824(__LIB_0__::func_12()), 2097152);
			__LIB_6__::func_59(__LIB_5__::func_824(__LIB_0__::func_12()), 128);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 3, 2, 1);
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 4, 2, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			uParam0->f_1642 = 0;
			uParam0->f_1582.f_2 = 3;
		}
	}
}

void func_439(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	__LIB_19__::func_121(iParam0);
}

bool func_440(var uParam0)
{
	__LIB_7__::func_219(uParam0, &uLocal_98);
	if (iLocal_49 >= 3 && iLocal_49 < 6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
		PED::SET_PED_RESET_FLAG(Global_35, 129, true);
		if (__LIB_7__::func_192(&uLocal_98))
		{
			if (!__LIB_7__::func_169(uParam0, iLocal_23))
			{
				__LIB_7__::func_173(uParam0, iLocal_23, 0);
				__LIB_7__::func_33(uParam0, iLocal_32, 1);
				__LIB_7__::func_83(uParam0, iLocal_23, "b_WaitLoop", 1);
			}
			else
			{
				__LIB_7__::func_33(uParam0, iLocal_33, 1);
				__LIB_7__::func_127(uParam0, iLocal_18, 2, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_FEMALE_A", iLocal_37, 0, 110f, 1065353216 /* Float: 1f */, 1);
			}
			__LIB_7__::func_83(uParam0, iLocal_23, "b_WaitLoop", 1);
			__LIB_7__::func_221(9);
			return false;
		}
		if (!__LIB_0__::func_163(Global_35, -76381094) && bLocal_61)
		{
			__LIB_7__::func_222();
		}
	}
	if (bLocal_58)
	{
		CAM::_0x718C6ECF5E8CBDD4();
	}
	if (bLocal_59)
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	}
	__LIB_7__::func_220();
	switch (iLocal_49)
	{
		case 1:
			__LIB_19__::func_126(uParam0);
			break;
		case 2:
			if (bLocal_54)
			{
				if (__LIB_7__::func_148(uParam0, iLocal_23))
				{
					__LIB_7__::func_113(uParam0, iLocal_18, 1, 1);
					return true;
				}
			}
			else if (__LIB_7__::func_148(uParam0, iLocal_21))
			{
				__LIB_7__::func_113(uParam0, iLocal_18, 1, 1);
				return true;
			}
			break;
		case 3:
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				__LIB_7__::func_221(4);
			}
			break;
		case 4:
			__LIB_17__::func_998(uParam0);
			break;
		case 5:
			if (__LIB_7__::func_169(uParam0, iLocal_20))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, false);
				__LIB_7__::func_221(6);
			}
			break;
		case 6:
			__LIB_17__::func_999(uParam0);
			break;
		case 8:
			if (__LIB_7__::func_148(uParam0, iLocal_20))
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_94))
				{
					TASK::_DELETE_SCENARIO_POINT(iLocal_94);
				}
				bLocal_59 = false;
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1984[iLocal_22]);
				return true;
			}
			break;
		case 7:
			if (__LIB_7__::func_148(uParam0, iLocal_22) && __LIB_7__::func_169(uParam0, iLocal_23))
			{
				__LIB_0__::func_268(&uLocal_95, 0f);
				bLocal_59 = false;
				__LIB_7__::func_209(uParam0, &uLocal_98);
				__LIB_7__::func_210(uParam0, &uLocal_98);
				__LIB_6__::func_944();
				__LIB_7__::func_202(&iLocal_51, &iLocal_52, uParam0, &uLocal_98);
				bLocal_61 = true;
				__LIB_7__::func_221(1);
			}
			break;
		case 9:
			if (__LIB_7__::func_148(uParam0, iLocal_23))
			{
				__LIB_7__::func_127(uParam0, iLocal_18, 2, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_FEMALE_A", iLocal_37, 0, 110f, 1065353216 /* Float: 1f */, 1);
				__LIB_7__::func_113(uParam0, iLocal_18, 1, 1);
				return true;
			}
			break;
	}
	return false;
}

void func_441(var uParam0, var uParam1)
{
	if (!uParam0->f_148)
	{
		if (__LIB_7__::func_645((*uParam1)[0 /*9*/], uParam0->f_130))
		{
			__LIB_19__::func_134(uParam0, uParam1, 0);
			uParam0->f_148 = 1;
		}
	}
}

void func_442(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_7__::func_645(*uParam1, uParam0->f_130) && !__LIB_7__::func_616(*uParam1, uParam0->f_130))
	{
		if (!uParam0->f_138)
		{
			if (__LIB_0__::func_572(Global_36622[0], 1))
			{
				uParam0->f_139 = 0;
			}
			else
			{
				uParam0->f_139 = 1;
			}
			if (__LIB_0__::func_572(Global_36622[1], 1))
			{
				uParam0->f_140 = 0;
			}
			else
			{
				uParam0->f_140 = 1;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				__LIB_7__::func_652(&(Global_36622[iVar0]), 0);
				iVar0++;
			}
			uParam0->f_138 = 1;
		}
	}
	else if (uParam0->f_138)
	{
		__LIB_19__::func_135(uParam0, uParam1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (((iVar1 == 0 && !uParam0->f_139) || (iVar1 == 1 && !uParam0->f_140)) || (iVar1 != 1 && iVar1 != 0))
			{
				__LIB_7__::func_652(&(Global_36622[iVar1]), 1);
			}
			iVar0++;
		}
		uParam0->f_138 = 0;
	}
}

void func_443(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	__LIB_19__::func_140(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_444(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	__LIB_19__::func_152(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

bool func_445(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, float fParam7)
{
	int iVar0[9];
	var uVar10;
	int iVar41;
	int iVar42;
	uVar10 = 30;
	Stack.Push(&uVar10);
	Call_Loc(iParam1);
	iVar41 = __LIB_19__::func_156(&iVar0, &uVar10, 9, vParam2, fParam5, 0, 1, 0, -1, 1, 0, -1082130432 /* Float: -1f */, 0, 0);
	if (iVar41 <= 0)
	{
		return false;
	}
	iVar42 = __LIB_4__::func_194(&iVar0, vParam2, 0, 1, 0, -1);
	if (iVar42 < 0)
	{
		return false;
	}
	*iParam0 = iVar0[iVar42];
	if (bParam6)
	{
		while (!PED::IS_PED_FACING_PED(iVar0[iVar42], Global_35, fParam7))
		{
			iVar0[iVar42] = 0;
			iVar42 = __LIB_4__::func_194(&iVar0, vParam2, 0, 1, 0, -1);
			if (iVar42 < 0)
			{
			}
		else
		{
			}
		}
	}
	return true;
}

int func_446(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return 0;
	}
	if (bParam4)
	{
		if (!MAP::DOES_BLIP_EXIST(uParam0->f_5303) || (!MAP::_DOES_ENTITY_HAVE_BLIP(bParam1) && iParam2 == joaat("BLIP_STYLE_PLAYER_HORSE")))
		{
			if (ITEMSET::IS_ITEMSET_VALID(iParam3))
			{
				__LIB_5__::func_444(&iParam3, 0);
			}
			__LIB_19__::func_159(uParam0, 0, bParam1);
			__LIB_18__::func_144(uParam0);
			iVar0 = MAP::GET_BLIP_FROM_ENTITY(bParam1);
			if (!bParam5)
			{
				if (iParam2 == joaat("BLIP_STYLE_PLAYER_HORSE"))
				{
					if (ENTITY::IS_ENTITY_A_PED(bParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1) == PLAYER::_0x46FA0AE18F4C7FA9(PLAYER::GET_PLAYER_INDEX()))
					{
						__LIB_11__::func_300(7);
						iVar1 = MAP::GET_BLIP_FROM_ENTITY(bParam1);
						if (MAP::DOES_BLIP_EXIST(iVar1))
						{
							MAP::_BLIP_SET_MODIFIER(uParam0->f_5303, -546708623);
							MAP::_BLIP_SET_MODIFIER(uParam0->f_5303, 231194138);
						}
					}
					else
					{
						if (!MAP::DOES_BLIP_EXIST(iVar0))
						{
							uParam0->f_5303 = MAP::_BLIP_ADD_FOR_ENTITY(iParam2, bParam1);
						}
						else
						{
							MAP::_BLIP_SET_STYLE(iVar0, iParam2);
							uParam0->f_5303 = iVar0;
						}
						MAP::_BLIP_SET_MODIFIER(uParam0->f_5303, -546708623);
						MAP::_BLIP_SET_MODIFIER(uParam0->f_5303, 231194138);
					}
				}
				else
				{
					if (!MAP::DOES_BLIP_EXIST(iVar0))
					{
						uParam0->f_5303 = MAP::_BLIP_ADD_FOR_ENTITY(iParam2, bParam1);
					}
					else
					{
						MAP::_BLIP_SET_STYLE(iVar0, iParam2);
						uParam0->f_5303 = iVar0;
					}
					MAP::_BLIP_SET_MODIFIER(uParam0->f_5303, -546708623);
					MAP::_BLIP_SET_MODIFIER(uParam0->f_5303, 231194138);
				}
			}
			else
			{
				uParam0->f_5303 = iVar0;
			}
		}
	}
	else
	{
		bVar2 = (ENTITY::IS_ENTITY_A_PED(bParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1) == PLAYER::_0x46FA0AE18F4C7FA9(PLAYER::GET_PLAYER_INDEX()));
		if (MAP::DOES_BLIP_EXIST(uParam0->f_5303) || bVar2)
		{
			if (ITEMSET::IS_ITEMSET_VALID(iParam3))
			{
				__LIB_5__::func_444(&iParam3, 1);
			}
			if (bVar2)
			{
				__LIB_11__::func_301(7);
				iVar3 = MAP::GET_BLIP_FROM_ENTITY(bParam1);
				if (MAP::DOES_BLIP_EXIST(iVar3))
				{
					MAP::_BLIP_REMOVE_MODIFIER(iVar3, -546708623);
					MAP::_BLIP_REMOVE_MODIFIER(iVar3, 231194138);
				}
				__LIB_19__::func_159(uParam0, 1, bParam1);
				__LIB_18__::func_144(uParam0);
			}
			else if (MAP::DOES_BLIP_EXIST(uParam0->f_5303))
			{
				if (!__LIB_18__::func_146(uParam0, bParam1, 1024))
				{
					if (!__LIB_18__::func_146(uParam0, bParam1, 128))
					{
						MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_5303, -546708623);
						MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_5303, 231194138);
						MAP::REMOVE_BLIP(&(uParam0->f_5303));
					}
					else
					{
						MAP::_BLIP_SET_STYLE(uParam0->f_5303, iParam2);
						MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_5303, -546708623);
						MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_5303, 231194138);
					}
					__LIB_19__::func_159(uParam0, 1, bParam1);
					__LIB_18__::func_144(uParam0);
				}
				else
				{
					__LIB_19__::func_159(uParam0, 1, bParam1);
					__LIB_18__::func_144(uParam0);
					MAP::_BLIP_SET_STYLE(uParam0->f_5303, iParam2);
					MAP::_BLIP_SET_MODIFIER(uParam0->f_5303, -546708623);
					MAP::_BLIP_SET_MODIFIER(uParam0->f_5303, 231194138);
				}
			}
			else
			{
				__LIB_19__::func_159(uParam0, 1, bParam1);
				__LIB_18__::func_144(uParam0);
			}
			uParam0->f_5303 = 0;
		}
	}
	return 1;
}

void func_447(int iParam0)
{
	__LIB_19__::func_160(iParam0, joaat("UPGRADE_FSH_BAIT_WORM"), 0);
	__LIB_19__::func_160(iParam0, joaat("UPGRADE_FSH_BAIT_BREAD"), 0);
	__LIB_19__::func_160(iParam0, joaat("UPGRADE_FSH_BAIT_CORN"), 0);
	__LIB_19__::func_160(iParam0, joaat("UPGRADE_FSH_BAIT_CHEESE"), 0);
	__LIB_19__::func_160(iParam0, joaat("UPGRADE_FSH_BAIT_CRICKET"), 0);
	__LIB_19__::func_160(iParam0, joaat("UPGRADE_FSH_BAIT_CRAYFISH"), 0);
	__LIB_19__::func_160(iParam0, joaat("UPGRADE_FSH_BAIT_LURE_RIVER"), 0);
	__LIB_19__::func_160(iParam0, joaat("UPGRADE_FSH_BAIT_LURE_LAKE"), 0);
	__LIB_19__::func_160(iParam0, joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"), 0);
	__LIB_19__::func_160(iParam0, joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"), 0);
	__LIB_19__::func_160(iParam0, joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"), 0);
	__LIB_19__::func_160(iParam0, joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"), 0);
	__LIB_19__::func_160(iParam0, joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"), 0);
}

int func_448(char[4] cParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	if (((__LIB_0__::func_2() != -1 || __LIB_6__::func_864(cParam0) == 25) || __LIB_6__::func_864(cParam0) == 26) || Global_1935630.f_12)
	{
		return 0;
	}
	bVar0 = __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(cParam0->f_5423[iVar1 /*65*/])))
		{
			if (__LIB_5__::func_58(cParam0->f_5423[iVar1 /*65*/].f_7, iParam1))
			{
				__LIB_19__::func_161(cParam0, &(cParam0->f_5423[iVar1 /*65*/]), bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_449(var uParam0, var uParam1)
{
	if (!uParam0->f_148)
	{
		if (__LIB_9__::func_284((*uParam1)[0 /*9*/], uParam0->f_130))
		{
			__LIB_19__::func_164(uParam0, uParam1, 0);
			uParam0->f_148 = 1;
		}
	}
}

void func_450(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_9__::func_284(*uParam1, uParam0->f_130) && !__LIB_9__::func_283(*uParam1, uParam0->f_130))
	{
		if (!uParam0->f_138)
		{
			if (__LIB_0__::func_572(Global_36622[0], 1))
			{
				uParam0->f_139 = 0;
			}
			else
			{
				uParam0->f_139 = 1;
			}
			if (__LIB_0__::func_572(Global_36622[1], 1))
			{
				uParam0->f_140 = 0;
			}
			else
			{
				uParam0->f_140 = 1;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				__LIB_7__::func_652(&(Global_36622[iVar0]), 0);
				iVar0++;
			}
			uParam0->f_138 = 1;
		}
	}
	else if (uParam0->f_138)
	{
		__LIB_19__::func_165(uParam0, uParam1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (((iVar1 == 0 && !uParam0->f_139) || (iVar1 == 1 && !uParam0->f_140)) || (iVar1 != 1 && iVar1 != 0))
			{
				__LIB_7__::func_652(&(Global_36622[iVar1]), 1);
			}
			iVar0++;
		}
		uParam0->f_138 = 0;
	}
}

int func_451(char[4] cParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	if (((__LIB_0__::func_2() != -1 || __LIB_6__::func_864(cParam0) == 25) || __LIB_6__::func_864(cParam0) == 26) || Global_1935630.f_12)
	{
		return 0;
	}
	bVar0 = __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(cParam0->f_5423[iVar1 /*65*/])))
		{
			if (__LIB_5__::func_58(cParam0->f_5423[iVar1 /*65*/].f_7, iParam1))
			{
				__LIB_19__::func_167(cParam0, &(cParam0->f_5423[iVar1 /*65*/]), bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_452(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	if (__LIB_0__::func_78(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1582)
		{
			if (uParam0->f_163[iVar0 /*18*/].f_7)
			{
				__LIB_19__::func_172(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_163[iVar0 /*18*/].f_6)
			{
				bVar1 = __LIB_10__::func_505(uParam0, iVar0);
				if (bVar1)
				{
					__LIB_19__::func_173(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!__LIB_8__::func_471(uParam0, uParam0->f_1372))
		{
			__LIB_19__::func_155(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1379;
	while (iVar0 <= (uParam0->f_1582 - 1))
	{
		if (uParam0->f_163[iVar0 /*18*/].f_7)
		{
			__LIB_19__::func_172(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_163[iVar0 /*18*/].f_6)
		{
			bVar1 = __LIB_10__::func_505(uParam0, iVar0);
			if (bVar1)
			{
				__LIB_19__::func_173(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1379 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1379 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

bool func_453(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bVar0 = false;
	if (iParam1 == -1)
	{
		bVar0 = true;
	}
	if (bVar0 || iParam1 == 0)
	{
		if (__LIB_0__::func_2() != -1)
		{
			return false;
		}
		if (__LIB_0__::func_296(0, 1, 1))
		{
			return false;
		}
		if (!__LIB_1__::func_305(0))
		{
			return false;
		}
		if (!__LIB_11__::func_168())
		{
			return false;
		}
		if (__LIB_0__::func_21(iParam0, 2097152))
		{
			return false;
		}
	}
	if (bVar0 || iParam1 == 1)
	{
		if (iParam0 == 38)
		{
			if (!__LIB_0__::func_181())
			{
				return false;
			}
		}
		else if (iParam0 == 76)
		{
			if (__LIB_1__::func_185(14) && !__LIB_1__::func_185(17))
			{
				return false;
			}
			if (Global_1392235.f_2)
			{
				return false;
			}
		}
		else if (iParam0 == 26)
		{
			if (!__LIB_1__::func_185(11))
			{
				return false;
			}
		}
		else if (iParam0 == 105)
		{
			if (!__LIB_1__::func_185(27))
			{
				return false;
			}
			else if (__LIB_0__::func_627(31, 0))
			{
				return false;
			}
		}
		else if (iParam0 == 5)
		{
			if (__LIB_0__::func_627(130, 0))
			{
				return false;
			}
		}
		else if (iParam0 == 115 && bParam2)
		{
			if (!__LIB_11__::func_169())
			{
				return false;
			}
		}
		if (__LIB_0__::func_181() && !__LIB_1__::func_185(69))
		{
			return false;
		}
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (__LIB_0__::func_21(iParam0, 33554432))
		{
			return false;
		}
		if (__LIB_3__::func_151(iParam0))
		{
			return false;
		}
	}
	if (bVar0 || iParam1 == 2)
	{
		if ((((((((((((__LIB_0__::func_627(11, 0) || __LIB_0__::func_627(12, 0)) || __LIB_0__::func_627(13, 0)) || __LIB_0__::func_627(153, 0)) || __LIB_0__::func_627(14, 0)) || __LIB_0__::func_627(154, 0)) || __LIB_0__::func_627(15, 0)) || __LIB_0__::func_627(16, 0)) || __LIB_0__::func_627(17, 0)) || __LIB_0__::func_627(18, 0)) || __LIB_0__::func_627(155, 0)) || __LIB_0__::func_627(19, 0)) || __LIB_0__::func_627(20, 0))
		{
			return false;
		}
		if (__LIB_17__::func_636(iParam0) == -1)
		{
			return false;
		}
		if (!__LIB_19__::func_176(iParam0))
		{
			return false;
		}
		if (Global_1392235.f_4)
		{
			return false;
		}
	}
	return true;
}

void func_454(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_239(uParam1, 65536))
	{
		if (__LIB_19__::func_187(uParam0, uParam1))
		{
			if (__LIB_3__::func_761(uParam0, 524288))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_39))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_39, false))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_39.f_1))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_39, uParam0->f_39.f_1, true);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_39.f_2))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_39, uParam0->f_39.f_2, true, false);
						}
					}
					else
					{
						ANIMSCENE::START_ANIM_SCENE(uParam0->f_39);
					}
				}
			}
			else
			{
				TASK::_0x1F7A9A9C38C13A56(uParam0->f_1);
			}
			__LIB_0__::func_240(uParam1, 65536);
		}
	}
}

void func_455(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = joaat("COL_CC_INTRO");
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = joaat("COL_CC_INTRO_PRE");
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(39) || __LIB_1__::func_154(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_RC_DEBORAH");
				iVar13 = joaat("COL_DB_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = joaat("COL_DB_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = joaat("DINO_BONES");
			break;
		case 43:
			if (iParam3 == joaat("EXOTIC_STAGE_01"))
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_02"))
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_03"))
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_04"))
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_05"))
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = __LIB_1__::func_34(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(41) || __LIB_1__::func_154(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = joaat("BLIP_RC_JEREMY_GILL");
			iVar13 = joaat("COL_LF_INTRO");
			break;
		case 49:
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(49) || __LIB_1__::func_154(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_SCM_FRANCES");
				iVar13 = joaat("COL_RC_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = joaat("COL_RC_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = joaat("ROCK_CARVINGS");
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = __LIB_1__::func_34(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = __LIB_1__::func_801(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (__LIB_0__::func_422(iParam0, iVar13, iVar14))
	{
	}
	if (__LIB_0__::func_423(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (__LIB_0__::func_424(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (__LIB_19__::func_193(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (__LIB_1__::func_165(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (__LIB_0__::func_938(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

int func_456(char[4] cParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_6__::func_862(cParam0, 16777216))
	{
		__LIB_8__::func_712(cParam0);
		__LIB_6__::func_887(cParam0, 65536);
		return 0;
	}
	if (!__LIB_8__::func_705(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { __LIB_8__::func_688(cParam0, iParam1) };
	if (__LIB_19__::func_195(cParam0, &Var0))
	{
		if (!__LIB_6__::func_862(cParam0, 65536))
		{
			__LIB_6__::func_868(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

int func_457(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	if (((__LIB_0__::func_2() != -1 || __LIB_4__::func_939(uParam0) == 25) || __LIB_4__::func_939(uParam0) == 26) || Global_1935630.f_12)
	{
		return 0;
	}
	bVar0 = __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(uParam0->f_5423[iVar1 /*65*/])))
		{
			if (__LIB_5__::func_58(uParam0->f_5423[iVar1 /*65*/].f_7, iParam1))
			{
				__LIB_19__::func_197(uParam0, &(uParam0->f_5423[iVar1 /*65*/]), bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_458(int iParam0, int iParam1, bool bParam2)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	__LIB_18__::func_406(iParam0, 1, iParam1, 1, 32);
	if (bParam2 && __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 1024))
	{
		__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 1024);
	}
	if (__LIB_5__::func_353(iParam0))
	{
		__LIB_1__::func_722(Global_1347702[iParam0 /*49*/].f_15);
	}
	if (iParam1 == 1)
	{
		__LIB_19__::func_199(iParam0, 1);
	}
}

bool func_459(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_4__::func_562(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_2286 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_2287 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_2289 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_2287)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_2288 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_2288 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_2289)
		{
			uParam0->f_2291 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_2292 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_5__::func_62(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_19__::func_200(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_4__::func_562(uParam0, 524288))
				{
					__LIB_5__::func_376(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_4__::func_574(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_8__::func_812(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_4__::func_562(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_2074 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_4__::func_575(uParam0, uParam0->f_2074))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_9__::func_54(uParam0);
			}
		}
	}
	bVar0 = __LIB_5__::func_500(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_4__::func_562(uParam0, 268435456) && bVar1) && !__LIB_4__::func_562(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_2292);
			if (uParam0->f_2074 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1406[uParam0->f_2074 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_2292)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_4__::func_532(uParam0, 131072);
				__LIB_4__::func_532(uParam0, 268435456);
			}
		}
		if (__LIB_4__::func_577(uParam0, 64) || (uParam0->f_2074 >= 0 && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_4__::func_562(uParam0, 131072))
	{
		__LIB_4__::func_984(uParam0);
		if (!__LIB_4__::func_562(uParam0, 262144))
		{
			if ((bVar0 && __LIB_4__::func_562(uParam0, 65536)) || __LIB_4__::func_562(uParam0, 131072))
			{
				__LIB_4__::func_532(uParam0, 32768);
				__LIB_4__::func_574(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_2159 = 1;
				__LIB_8__::func_812(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_19__::func_184(uParam0, iParam5);
		__LIB_4__::func_578(uParam0);
		if (!__LIB_4__::func_579(uParam0, 1))
		{
			__LIB_5__::func_63(uParam0);
		}
		__LIB_4__::func_580(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_5__::func_501(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_6__::func_920(uParam0);
			break;
		case 2:
			__LIB_5__::func_502(uParam0);
			break;
		case 3:
			if (__LIB_4__::func_581(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2074 /*41*/].f_27, uParam0->f_1735[uParam0->f_2074 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_2262));
				__LIB_4__::func_574(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_4__::func_562(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_4__::func_985(uParam0))
				{
					__LIB_4__::func_574(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_4__::func_986(uParam0))
				{
					__LIB_4__::func_574(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || __LIB_0__::func_264(&(uParam0->f_2262)) >= 15f)
			{
				if (__LIB_5__::func_308(uParam0, iParam5))
				{
					if (__LIB_4__::func_583(uParam0))
					{
						uParam0->f_2075 = __LIB_5__::func_64(uParam0);
						__LIB_1__::func_148(&(uParam0->f_2262));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_4__::func_574(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_4__::func_574(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_8__::func_812(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_5__::func_308(uParam0, iParam5))
			{
				__LIB_8__::func_812(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_460(int iParam0)
{
	bool bVar0;
	if (__LIB_0__::func_2() == -1)
	{
		bVar0 = __LIB_2__::func_776();
		if (!bVar0)
		{
			__LIB_19__::func_201(&Local_117);
		}
	}
	return true;
}

void func_461(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	__LIB_19__::func_207(48);
	__LIB_0__::func_703(0, -1);
}

void func_462(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (!__LIB_1__::func_154(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				__LIB_1__::func_240(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				__LIB_1__::func_240(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				__LIB_1__::func_240(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				__LIB_1__::func_240(400, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 412399755))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_01"));
			if (__LIB_0__::func_944() == 0)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				__LIB_1__::func_240(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				__LIB_1__::func_240(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				__LIB_1__::func_240(401, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 709057512))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_02"));
			if (__LIB_0__::func_944() == 1)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				__LIB_1__::func_240(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				__LIB_1__::func_240(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				__LIB_1__::func_240(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				__LIB_1__::func_240(398, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1478961327))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_03"));
			if (__LIB_0__::func_944() == 2)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						__LIB_19__::func_207(48);
					}
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				__LIB_1__::func_240(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				__LIB_1__::func_240(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				__LIB_1__::func_240(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				__LIB_1__::func_240(406, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1238404098))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_04"));
			if (__LIB_0__::func_944() == 3)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				__LIB_1__::func_240(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				__LIB_1__::func_240(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				__LIB_1__::func_240(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				__LIB_1__::func_240(403, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1160548794))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_05"));
			if (__LIB_0__::func_944() == 4)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_463(int iParam0)
{
	int iVar0;
	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			__LIB_19__::func_207(48);
		}
	}
}

void func_464()
{
	__LIB_18__::func_432();
	__LIB_1__::func_312(0);
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_10__::func_749(!__LIB_0__::func_28());
	}
	__LIB_11__::func_914();
	__LIB_19__::func_210();
	Global_40.f_7854 = 0;
	Global_40.f_7855 = 0;
	Global_40.f_7856 = 0;
	__LIB_11__::func_915();
	if (Global_40)
	{
		__LIB_11__::func_916();
	}
	AUDIO::_0x3E93DDDCBB6111E4("RDR3.BattleSeqIndex", 0f);
}

void func_465()
{
	__LIB_19__::func_222();
	__LIB_12__::func_20();
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383.f_393))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1900383.f_393))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1900383.f_393, true, true);
		}
		if (MAP::DOES_BLIP_EXIST(Global_1900383.f_393.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1900383.f_393.f_1));
		}
		OBJECT::DELETE_OBJECT(&(Global_1900383.f_393));
	}
}

int func_466(int iParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_13(32768))
	{
		return -2;
	}
	iVar0 = iParam0;
	if (__LIB_0__::func_5(iVar0) && !__LIB_1__::func_187(iVar0))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		__LIB_18__::func_261(iVar0, 1, 1, 1, 32);
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		__LIB_19__::func_177(iVar0, 0, 1);
		iVar1 = 0;
		while (iVar1 < Global_1879534.f_7300)
		{
			if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar1 /*4*/], 2))
			{
				if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar1 /*4*/], 1))
				{
					switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar1 /*4*/].f_1 /*3*/])
					{
						case 987244216:
							if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar1 /*4*/].f_1 /*3*/].f_2 == iVar0)
							{
								Global_1879534.f_7301.f_2[iVar1 /*4*/].f_1++;
							}
							else
							{
								iVar1++;
							}
							return -2;
							default:
								break;
					}
				}
			}
		}
	}
}

void func_467(bool bParam0)
{
	if ((!__LIB_1__::func_25(__LIB_5__::func_436(4), 1) || __LIB_1__::func_44(__LIB_5__::func_436(33))) || __LIB_1__::func_44(__LIB_5__::func_436(34)))
	{
		return;
	}
	__LIB_19__::func_224(bParam0);
	__LIB_19__::func_225(bParam0);
	__LIB_9__::func_445(0);
}

void func_468(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_19__::func_226(iParam0, 0);
	if (!__LIB_0__::func_30(iVar0))
	{
		return;
	}
	else if (__LIB_11__::func_967(iVar0))
	{
		return;
	}
	if (!__LIB_12__::func_58(iVar0, 0, 255, 0))
	{
		return;
	}
	if (iVar0 == 173210050)
	{
	}
}

int func_469(int iParam0, var uParam1)
{
	vector3 vVar0;
	if (__LIB_19__::func_227(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

void func_470(int iParam0)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	__LIB_19__::func_177(iParam0, 1, 1);
	__LIB_18__::func_261(iParam0, 1, 1, 1, 32);
	__LIB_4__::func_683(iParam0, 1);
	__LIB_1__::func_242(Global_1347702[iParam0 /*49*/].f_15, 0);
	__LIB_8__::func_975(Global_1347702[iParam0 /*49*/].f_15, -15);
	__LIB_1__::func_532(Global_1347702[iParam0 /*49*/].f_15, 0);
	__LIB_7__::func_448(Global_1347702[iParam0 /*49*/].f_15, 0);
	__LIB_11__::func_992(iParam0, 0f);
	__LIB_11__::func_993(iParam0, 0f);
	Global_40.f_490.f_402[iParam0] = 0;
}

void func_471(var uParam0)
{
	int iVar0;
	if (uParam0->f_51)
	{
		__LIB_12__::func_291(uParam0);
	}
	if (!uParam0->f_48)
	{
		__LIB_19__::func_232(uParam0);
	}
	Call_Loc(uParam0->f_104);
	if (__LIB_4__::func_874() == uParam0->f_38 && __LIB_12__::func_302() == uParam0->f_37)
	{
		iVar0 = __LIB_4__::func_870();
		if (iVar0 == 6 || iVar0 == 7)
		{
			__LIB_7__::func_704();
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_472(var uParam0)
{
	Global_1899528.f_207 = MISC::GET_FRAME_COUNT();
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	if (Global_1935630.f_12)
	{
		return true;
	}
	if (__LIB_1__::func_77(uParam0->f_38, 8))
	{
		return true;
	}
	Call_Loc(uParam0->f_100);
	if (StackVal)
	{
		return true;
	}
	if (!*uParam0)
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 41, 1);
	}
	if (uParam0->f_47)
	{
		__LIB_1__::func_538(0);
		__LIB_7__::func_858();
		PED::SET_PED_RESET_FLAG(Global_35, 175, true);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		GRAPHICS::_0x1C6306E5BC25C29C();
	}
	__LIB_19__::func_235(uParam0);
	return false;
}

void func_473(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_12__::func_296(uParam0, iVar0))
		{
			__LIB_19__::func_257(uParam0, iVar0, bParam1);
		}
		iVar0++;
	}
}

void func_474(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		__LIB_19__::func_259(uParam0, iParam2);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(*uParam1) || TASK::_0x0C3CB2E600C8977D(*uParam1, 0))
			{
				__LIB_19__::func_259(uParam0, iParam2);
			}
			break;
	}
}

void func_475(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = MISC::IS_BIT_SET(uParam0->f_785[iParam2 /*52*/].f_19, 0);
	if (uParam0->f_40)
	{
		if (!PED::IS_PED_A_PLAYER(*uParam1))
		{
			__LIB_19__::func_258(uParam0, iParam2);
		}
		else
		{
			vVar1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mini_games@poker_mg@base", "sit_enter_left", uParam0->f_1137[iParam2 /*3*/], uParam0->f_1156[iParam2 /*3*/], 0f, 2) };
			vVar4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mini_games@poker_mg@base", "sit_enter_left", uParam0->f_1137[iParam2 /*3*/], uParam0->f_1156[iParam2 /*3*/], 0f, 2) };
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam1, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*uParam1, vVar1, vVar4.z, true, false, true);
			__LIB_19__::func_257(uParam0, iParam2, 0);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 59:
			if (__LIB_12__::func_363(uParam1, "FoldAnimFinished") || __LIB_12__::func_365(uParam0, iParam2, 1))
			{
				__LIB_12__::func_438(uParam0, iParam2, 60);
			}
			break;
		case 60:
			if (uParam1->f_34 == 2)
			{
				__LIB_12__::func_428(uParam0, iParam2, "sit_exit_left", 0, 0.125f, 0.25f, 0, 1);
			}
			else if (uParam1->f_34 == 1)
			{
				if (uParam1->f_36 == 0)
				{
					__LIB_12__::func_428(uParam0, iParam2, "sit_exit_left_loss_a", 0, 0.125f, 0.25f, 0, 1);
				}
				else
				{
					__LIB_12__::func_428(uParam0, iParam2, "sit_exit_left_loss_b", 0, 0.125f, 0.25f, 0, 1);
				}
			}
			__LIB_12__::func_438(uParam0, iParam2, 61);
			break;
		case 61:
			if ((((!__LIB_12__::func_364(uParam0, iParam2, "sit_exit_left", 1065353216 /* Float: 1f */) && !__LIB_12__::func_364(uParam0, iParam2, "sit_exit_right", 1065353216 /* Float: 1f */)) && !__LIB_12__::func_364(uParam0, iParam2, "sit_exit_left_loss_a", 1065353216 /* Float: 1f */)) && !__LIB_12__::func_364(uParam0, iParam2, "sit_exit_left_loss_b", 1065353216 /* Float: 1f */)) || (!bVar0 && __LIB_12__::func_365(uParam0, iParam2, 0)))
			{
				__LIB_19__::func_257(uParam0, iParam2, 0);
				return;
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 677502514))
	{
		__LIB_12__::func_427(uParam0, iParam2, "fold_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "fold_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
}

void func_476(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		if (PED::IS_PED_A_PLAYER(*uParam1))
		{
		}
		else
		{
			__LIB_19__::func_258(uParam0, iParam2);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 59:
			if (__LIB_12__::func_363(uParam1, "FoldAnimFinished") || __LIB_12__::func_365(uParam0, iParam2, 1))
			{
				__LIB_12__::func_438(uParam0, iParam2, 60);
			}
			break;
		case 60:
			if (uParam1->f_34 == 2)
			{
				__LIB_12__::func_428(uParam0, iParam2, "sit_exit_left", 0, 0.125f, 0.25f, 0, 1);
			}
			else if (uParam1->f_34 == 1)
			{
				if (uParam1->f_36 == 0)
				{
					__LIB_12__::func_428(uParam0, iParam2, "sit_exit_left_loss_a", 0, 0.125f, 0.25f, 0, 1);
				}
				else
				{
					__LIB_12__::func_428(uParam0, iParam2, "sit_exit_left_loss_b", 0, 0.125f, 0.25f, 0, 1);
				}
			}
			__LIB_12__::func_438(uParam0, iParam2, 61);
			break;
		case 61:
			if ((((!__LIB_12__::func_364(uParam0, iParam2, "sit_exit_left", 1065353216 /* Float: 1f */) && !__LIB_12__::func_364(uParam0, iParam2, "sit_exit_right", 1065353216 /* Float: 1f */)) && !__LIB_12__::func_364(uParam0, iParam2, "sit_exit_left_loss_a", 1065353216 /* Float: 1f */)) && !__LIB_12__::func_364(uParam0, iParam2, "sit_exit_left_loss_b", 1065353216 /* Float: 1f */)) || __LIB_12__::func_365(uParam0, iParam2, 0))
			{
				if (PED::IS_PED_A_PLAYER(*uParam1) || __LIB_0__::func_407(*uParam1))
				{
				}
				else
				{
					if (uParam1->f_44)
					{
						ENTITY::SET_ENTITY_COLLISION(*uParam1, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(*uParam1, false);
					}
					__LIB_12__::func_325(uParam0, iParam2, 0);
					if (uParam0->f_762)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam1, uParam0->f_759, 1f, -1, 0.25f, 4194304, 40000f);
						__LIB_12__::func_438(uParam0, iParam2, 62);
					}
					else
					{
						TASK::TASK_WANDER_STANDARD(*uParam1, 40000f, 0);
						__LIB_12__::func_438(uParam0, iParam2, 63);
					}
				}
			}
			break;
		case 62:
			if (!__LIB_0__::func_163(*uParam1, 713668775) || ENTITY::IS_ENTITY_AT_COORD(*uParam1, uParam0->f_759, 1f, 1f, 1f, false, true, 0))
			{
				TASK::TASK_WANDER_STANDARD(*uParam1, 40000f, 0);
				__LIB_12__::func_438(uParam0, iParam2, 63);
			}
			break;
		case 63:
			if (ENTITY::IS_ENTITY_OCCLUDED(*uParam1))
			{
				__LIB_19__::func_258(uParam0, iParam2);
				return;
			}
			else if (__LIB_0__::func_265(&(uParam1->f_13)) > 10f)
			{
				__LIB_19__::func_257(uParam0, iParam2, 0);
				return;
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 677502514))
	{
		__LIB_12__::func_427(uParam0, iParam2, "fold_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "fold_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
}

void func_477(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (uParam0->f_785[iVar0 /*52*/] != 0 && PED::IS_PED_INJURED(uParam0->f_785[iVar0 /*52*/]))
			{
				if (uParam0->f_41 == 1)
				{
					__LIB_12__::func_392(uParam0);
				}
				__LIB_19__::func_257(uParam0, iVar0, 0);
			}
			iVar0++;
		}
	}
	if (uParam0->f_41 == 1 || uParam0->f_41 == 2)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar1 = uParam0->f_785[iVar0 /*52*/];
			if ((iVar1 != 0 && uParam0->f_785[iVar0 /*52*/].f_45) && uParam0->f_785[iVar0 /*52*/].f_8 != 25)
			{
				if ((TASK::PED_HAS_USE_SCENARIO_TASK(iVar1) && TASK::_0x0C3CB2E600C8977D(iVar1, 0)) || PED::IS_PED_RAGDOLL(iVar1))
				{
					if (uParam0->f_41 == 1)
					{
						__LIB_12__::func_392(uParam0);
					}
					if (TASK::PED_HAS_USE_SCENARIO_TASK(iVar1))
					{
						__LIB_18__::func_562(uParam0, iVar0);
					}
					else
					{
						__LIB_19__::func_259(uParam0, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = uParam0->f_785[iVar0 /*52*/];
		if (iVar1 != 0)
		{
			Stack.Push(uParam0);
			Stack.Push(&(uParam0->f_785[iVar0 /*52*/]));
			Stack.Push(iVar0);
			Call_Loc(uParam0->f_1213[uParam0->f_785[iVar0 /*52*/].f_8]);
		}
		iVar1 = uParam0->f_785[iVar0 /*52*/];
		if (iVar1 != 0)
		{
			if (uParam0->f_785[iVar0 /*52*/].f_8 != 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar1, -1523471413))
				{
					__LIB_12__::func_427(uParam0, iVar0, "hold_cards_idle_a_card1", __LIB_12__::func_358(uParam0, iVar0, 0), 4, 2);
					__LIB_12__::func_427(uParam0, iVar0, "hold_cards_idle_a_card2", __LIB_12__::func_358(uParam0, iVar0, 1), 4, 2);
				}
			}
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar1))
			{
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar1, "LookQuick") || TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar1, "LookMedium"))
				{
					__LIB_12__::func_393(uParam0, iVar0, 2);
				}
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar1, "Motiontree"))
				{
					__LIB_12__::func_393(uParam0, iVar0, 0);
				}
			}
			else if (uParam0->f_785[iVar0 /*52*/].f_47 != 0)
			{
				__LIB_12__::func_393(uParam0, iVar0, 0);
			}
			if (uParam0->f_785[iVar0 /*52*/].f_46)
			{
				if (!PED::IS_PED_INJURED(iVar1))
				{
					PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iVar1, 0, 1);
					PED::SET_PED_CAN_LEG_IK(iVar1, false);
				}
			}
		}
		iVar0++;
	}
}

void func_478(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		__LIB_19__::func_260(iParam0, bParam3);
	}
	else
	{
		__LIB_19__::func_261(iParam0, bParam3);
	}
	if (bParam2)
	{
		__LIB_19__::func_262(iParam0, bParam3);
	}
	else
	{
		__LIB_19__::func_263(iParam0, bParam3);
	}
}

void func_479(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_699(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		__LIB_0__::func_288(iParam0, 56, 1);
		__LIB_1__::func_283(&(Global_1359489.f_40), 1);
	}
	__LIB_0__::func_904(iParam0, 0);
	__LIB_0__::func_289(iParam0, 4, 0);
	__LIB_0__::func_745(iParam0);
	__LIB_0__::func_706(iParam0);
	__LIB_0__::func_290(iParam0, 37, 1);
	bVar0 = __LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = __LIB_0__::func_748(iParam0, 0);
	bVar2 = PERSCHAR::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (__LIB_0__::func_287(iParam0, 64, 1))
	{
		__LIB_0__::func_290(iParam0, 64, 1);
	}
	if (bParam3)
	{
		__LIB_0__::func_290(iParam0, 33, 1);
		__LIB_0__::func_290(iParam0, 34, 1);
		__LIB_1__::func_27(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		__LIB_0__::func_707(iParam0, 1, 1, 0);
		if (bParam6)
		{
			__LIB_0__::func_288(iParam0, 30, 1);
		}
		if (bParam7)
		{
			__LIB_0__::func_288(iParam0, 35, 1);
			if (bParam8)
			{
				__LIB_0__::func_288(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			__LIB_0__::func_705(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
		}
		if (bVar2)
		{
			PERSCHAR::_0xBB68908CD11AEBDC(iVar1);
		}
		__LIB_0__::func_290(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		__LIB_0__::func_288(iParam0, 33, 1);
		__LIB_0__::func_707(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			__LIB_1__::func_283(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			__LIB_0__::func_37(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			__LIB_0__::func_288(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			__LIB_1__::func_197(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (__LIB_0__::func_287(iParam0, 45, 1))
	{
		__LIB_0__::func_290(iParam0, 45, 1);
	}
	__LIB_0__::func_176(iParam0, 16, 1);
	__LIB_0__::func_290(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_177(iParam0), 0))
		{
			__LIB_19__::func_309(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_480(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_239(uParam1, 65536))
	{
		if (__LIB_19__::func_280(uParam0, uParam1))
		{
			if (__LIB_3__::func_761(uParam0, 524288))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_39))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_39, false))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_39.f_1))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_39, uParam0->f_39.f_1, true);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_39.f_2))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_39, uParam0->f_39.f_2, true, false);
						}
					}
					else
					{
						ANIMSCENE::START_ANIM_SCENE(uParam0->f_39);
					}
				}
			}
			else
			{
				TASK::_0x1F7A9A9C38C13A56(uParam0->f_1);
			}
			__LIB_0__::func_240(uParam1, 65536);
		}
	}
}

bool func_481(var uParam0)
{
	if (!__LIB_19__::func_281(uParam0))
	{
		return false;
	}
	if (__LIB_1__::func_876(uParam0->f_7, uParam0->f_8, __LIB_0__::func_51(&(uParam0->f_3), 4)))
	{
		return true;
	}
	if (!__LIB_0__::func_51(&(uParam0->f_3), 4))
	{
		if (__LIB_1__::func_383())
		{
			return true;
		}
	}
	return false;
}

void func_482(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_239(uParam1, 65536))
	{
		if (__LIB_19__::func_282(uParam0, uParam1))
		{
			if (__LIB_3__::func_761(uParam0, 524288))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_39))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_39, false))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_39.f_1))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_39, uParam0->f_39.f_1, true);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_39.f_2))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_39, uParam0->f_39.f_2, true, false);
						}
					}
					else
					{
						ANIMSCENE::START_ANIM_SCENE(uParam0->f_39);
					}
				}
			}
			else
			{
				TASK::_0x1F7A9A9C38C13A56(uParam0->f_1);
			}
			__LIB_0__::func_240(uParam1, 65536);
		}
	}
}

void func_483()
{
	if ((!__LIB_1__::func_25(Global_1347702[85 /*49*/].f_15, 1) && !__LIB_1__::func_25(Global_1347702[86 /*49*/].f_15, 1)) && !__LIB_1__::func_25(Global_1347702[87 /*49*/].f_15, 1))
	{
		__LIB_19__::func_283();
	}
	else if (!bLocal_212)
	{
		__LIB_0__::func_45("CAMERA_HELP", 10000, 0, 0, 0, 1);
		bLocal_212 = true;
	}
}

void func_484(int iParam0, int iParam1)
{
	__LIB_13__::func_724(iParam0, 27);
	__LIB_13__::func_732(iParam0, 2, 1);
	__LIB_19__::func_297(iParam0);
	__LIB_0__::func_37(&(iParam0->f_462));
	iParam0->f_205 = iParam1;
}

void func_485(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		switch (iVar0)
		{
			case 0:
				__LIB_13__::func_767(iParam0, uParam1, iVar0, joaat("VOLBOX"), 1.55f, -3.1f, 0.96f, 0f, 0f, 28.075f, 6.256512f, 3.460136f, 3f);
				break;
			case 1:
				__LIB_13__::func_767(iParam0, uParam1, iVar0, joaat("VOLBOX"), -4.76f, -1.15f, 0.96f, 0f, 0f, 25.075f, 3.083873f, 3.275494f, 3f);
				break;
			case 2:
				__LIB_13__::func_767(iParam0, uParam1, iVar0, joaat("VOLBOX"), 1.56f, -2.29f, -0.11f, 0f, 0f, 25.075f, 2.312612f, 2.058657f, 2.086685f);
				break;
			case 3:
				__LIB_13__::func_767(iParam0, uParam1, iVar0, joaat("VOLBOX"), -2.88f, -0.27f, 0.96f, 0f, 0f, 25.075f, 1.708217f, 3.275494f, 3f);
				break;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 11)
	{
		switch (iVar1)
		{
			case 0:
				__LIB_13__::func_824(iParam0, uParam1, iVar1, 1, 0f, 0f, 0f, 7f, 0);
				break;
			case 7:
				__LIB_19__::func_299(iParam0, iVar1, 2, 0, 0);
				break;
			case 1:
				__LIB_13__::func_824(iParam0, uParam1, iVar1, 1, 0f, 0f, 0f, 1.5f, 1);
				break;
			case 8:
				__LIB_13__::func_824(iParam0, uParam1, iVar1, 2, 0f, 0f, 0f, 2.5f, 0);
				break;
			case 9:
				__LIB_19__::func_299(iParam0, iVar1, 2, 1, 0);
				break;
			case 2:
				__LIB_19__::func_299(iParam0, iVar1, 1, 2, 1);
				break;
			case 3:
				__LIB_19__::func_299(iParam0, iVar1, 1, 3, 1);
				break;
			case 4:
				__LIB_13__::func_824(iParam0, uParam1, iVar1, 1, 2.03f, 0.67f, 0f, 1f, 1);
				break;
			case 5:
				__LIB_13__::func_824(iParam0, uParam1, iVar1, 1, 2.48f, 0.21f, 0f, 1f, 1);
				break;
			case 6:
				__LIB_13__::func_824(iParam0, uParam1, iVar1, 1, 2.89f, 0.69f, 0f, 1.25f, 1);
				break;
			case 10:
				__LIB_13__::func_824(iParam0, uParam1, iVar1, 2, 0.4f, 3.33f, 0f, 1.25f, 0);
				break;
		}
		iVar1++;
	}
}

int func_486(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bVar0 = true;
	bVar1 = PED::_0x68821369A2CEADD5(iParam0->f_7, iParam0->f_468);
	bVar2 = (bParam5 || ((bParam3 && __LIB_13__::func_780(iParam0, joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST"))) && iParam0->f_469 != joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST")));
	iVar3 = TASK::_GET_SCENARIO_POINT_TYPE(iParam0->f_87);
	if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
	{
		return 19;
	}
	if (!bVar1)
	{
		if (bParam5)
		{
			if (iParam0->f_469 == joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST"))
			{
				if (__LIB_13__::func_781(iParam0, 0, 0))
				{
					return 0;
				}
			}
		}
		if (!bVar2)
		{
			if (__LIB_19__::func_301(iParam0, &bParam2, iParam1, 1))
			{
				return __LIB_18__::func_686(iParam0, bParam2, 1);
			}
		}
		else if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
		{
			__LIB_1__::func_148(&(iParam0->f_444));
			return 20;
		}
	}
	if (__LIB_13__::func_780(iParam0, iParam0->f_469))
	{
		if (__LIB_13__::func_781(iParam0, 0, 0))
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					__LIB_13__::func_782(iParam0, joaat("MOODTIRED"), 5);
					break;
				default:
					__LIB_13__::func_782(iParam0, joaat("MOODCURIOUS"), 5);
					break;
			}
			__LIB_1__::func_148(&(iParam0->f_441));
			iParam0->f_468 = 0;
			return 4;
		}
	}
	else
	{
		if (!STREAMING::_REQUEST_SCENARIO_TYPE(iVar3, 262144, ENTITY::GET_ENTITY_MODEL(iParam0->f_7), PED::_0x569F1E1237508DEB(iParam0->f_7)))
		{
			bVar0 = false;
		}
		if (!STREAMING::_REQUEST_SCENARIO_TYPE(iVar3, 262145, ENTITY::GET_ENTITY_MODEL(iParam0->f_7), iParam0->f_469))
		{
			bVar0 = false;
		}
		if (bVar0 && __LIB_13__::func_781(iParam0, 0, 1))
		{
			if (!bVar1)
			{
				PED::_0xD65FDC686A031C83(iParam0->f_7, iParam0->f_468, 0.5f);
			}
			__LIB_13__::func_825(iParam0);
		}
	}
	return 3;
}

int func_487(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if ((bParam5 || bParam4) || !PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_7))
	{
		return 0;
	}
	else if (__LIB_19__::func_301(iParam0, &bParam2, iParam1, 1))
	{
		return __LIB_18__::func_686(iParam0, bParam2, 1);
	}
	else if (__LIB_18__::func_692(iParam0) && __LIB_18__::func_691(iParam0, iParam1, 1))
	{
		if (!__LIB_0__::func_75(&(iParam0->f_441)) || __LIB_1__::func_285(&(iParam0->f_441), iParam0->f_470))
		{
			if (__LIB_13__::func_781(iParam0, 0, 1))
			{
				return 6;
			}
		}
	}
	else if (!bParam3)
	{
		if (!__LIB_0__::func_75(&(iParam0->f_441)) || __LIB_1__::func_285(&(iParam0->f_441), __LIB_0__::func_514(__LIB_13__::func_780(iParam0, joaat("SCRIPT_COMMON_STAND_HERBALIST")), 3f, iParam0->f_470)))
		{
			return 0;
		}
	}
	return 4;
}

int func_488(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0->f_7, 0) && PED::_IS_PED_USING_SCENARIO_POINT(iParam0->f_7, iParam0->f_89))
	{
		if (__LIB_13__::func_781(iParam0, 0, 1))
		{
			if (!__LIB_13__::func_742(iParam0, 64))
			{
				if (__LIB_19__::func_301(iParam0, &bParam2, iParam1, 1))
				{
					return __LIB_18__::func_686(iParam0, bParam2, 1);
				}
				else
				{
					return 10;
				}
			}
		}
	}
	return 7;
}

int func_489(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (__LIB_19__::func_301(iParam0, &bParam2, iParam1, 1))
	{
		return __LIB_18__::func_686(iParam0, bParam2, 1);
	}
	else
	{
		if (!__LIB_0__::func_75(&(iParam0->f_447)))
		{
			__LIB_1__::func_148(&(iParam0->f_447));
		}
		if ((!__LIB_0__::func_27(iParam1, 8) || !__LIB_0__::func_75(&(iParam0->f_447))) || __LIB_1__::func_285(&(iParam0->f_447), (7f * 60f)))
		{
			if (__LIB_13__::func_781(iParam0, 0, 1))
			{
				return 14;
			}
		}
	}
	return 12;
}

int func_490(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0->f_7, 0) && PED::_IS_PED_USING_SCENARIO_POINT(iParam0->f_7, iParam0->f_87))
	{
		if (__LIB_13__::func_781(iParam0, 0, 1))
		{
			if (!__LIB_13__::func_742(iParam0, 64))
			{
				if (__LIB_19__::func_301(iParam0, &bParam2, iParam1, 1))
				{
					return __LIB_18__::func_686(iParam0, bParam2, 1);
				}
				else
				{
					return 2;
				}
			}
		}
	}
	return 15;
}

int func_491(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bVar0 = __LIB_13__::func_781(iParam0, 0, 1);
	if (bParam4 || bParam5)
	{
		if (bVar0)
		{
			return 0;
		}
		else
		{
			__LIB_18__::func_687(iParam0);
		}
	}
	else if (__LIB_19__::func_301(iParam0, &bParam2, iParam1, 0))
	{
		return __LIB_18__::func_686(iParam0, 0, 1);
	}
	else if (__LIB_1__::func_285(&(iParam0->f_444), 2f))
	{
		if (bVar0 && !TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
		{
			if (!__LIB_13__::func_780(iParam0, joaat("WORLD_HUMAN_SIT_GROUND_MALE_A")))
			{
				__LIB_13__::func_823(iParam0, MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 14f), 0);
				if (!__LIB_13__::func_780(iParam0, joaat("SCRIPT_COMMON_STAND_HERBALIST")) && __LIB_0__::func_27(iParam1, 65536))
				{
					return 2;
				}
				else
				{
					return 4;
				}
			}
			else
			{
				__LIB_13__::func_823(iParam0, MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 14f), 0);
				return 12;
			}
		}
		else
		{
			__LIB_18__::func_687(iParam0);
		}
	}
	return 20;
}

int func_492(int iParam0, var uParam1, int iParam2, int iParam3)
{
	switch (iParam3)
	{
		case 0:
			return __LIB_19__::func_302(iParam0, uParam1, iParam2);
		case 1:
			return __LIB_19__::func_303(iParam0, uParam1, iParam2);
		case 3:
			return __LIB_19__::func_304(iParam0, uParam1, iParam2, __LIB_18__::func_699(iParam0, iParam2));
		case 4:
			return __LIB_19__::func_305(iParam0, uParam1, iParam2);
		case 5:
			return __LIB_19__::func_306(iParam0, uParam1, iParam2);
		case 2:
			return __LIB_18__::func_700(iParam0, uParam1, iParam2);
		default:
			break;
	}
	return 4;
}

void func_493(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_73, 16))
	{
		__LIB_13__::func_800(&(uParam0->f_76), uParam0, 0);
		__LIB_19__::func_307(&(uParam0->f_97), &(uParam0->f_21), 1);
		__LIB_1__::func_681(&(uParam0->f_73), 16);
	}
}

int func_494(int iParam0)
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_7))
	{
		return 1;
	}
	switch (PED::_0x569F1E1237508DEB(iParam0->f_7))
	{
		case joaat("SCRIPT_COMMON_STAND_HERBALIST"):
			if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
			{
				if (TASK::_0x02EBBB3989B7E695(iParam0->f_7))
				{
					return 1;
				}
			}
			else
			{
				__LIB_18__::func_687(iParam0);
			}
			break;
		case joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST"):
			if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
			{
				__LIB_13__::func_746(iParam0, -1f);
			}
			else if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
			{
				return 1;
			}
			break;
		case joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST"):
			return __LIB_19__::func_308(iParam0);
	}
	return 0;
}

bool func_495(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam1 - __LIB_13__::func_975(uParam0));
	if (iVar0 <= 0)
	{
		return true;
	}
	fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fParam2 - 10f), (fParam2 + 10f));
	iVar1 = 0;
	while (iVar1 < iParam1)
	{
		__LIB_19__::func_314(uParam0, fParam2, fParam3, iParam4, -1082130432 /* Float: -1f */, 0);
		iVar1++;
	}
	if (__LIB_13__::func_975(uParam0) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_496(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_189 == 1 && __LIB_11__::func_482(uParam0, 1))
	{
		if (__LIB_11__::func_511(uParam0) != 2)
		{
			__LIB_11__::func_512(uParam0, 2);
		}
	}
	else if (uParam0->f_189 == 1)
	{
		if (__LIB_11__::func_511(uParam0) != 0)
		{
			__LIB_11__::func_512(uParam0, 0);
		}
	}
	switch (uParam0->f_210)
	{
		case 4:
			if (uParam0->f_189 >= 5)
			{
				__LIB_11__::func_512(uParam0, 0);
			}
			break;
		case 5:
			if (__LIB_11__::func_494(uParam0, 64) && __LIB_13__::func_975(uParam0) > 1)
			{
				__LIB_11__::func_512(uParam0, 2);
			}
			else if (__LIB_18__::func_350(uParam0))
			{
				__LIB_11__::func_512(uParam0, 6);
			}
			break;
		case 0:
			if (!__LIB_11__::func_500(uParam0))
			{
				if ((((__LIB_19__::func_315(uParam0, uParam1) && !__LIB_11__::func_482(uParam0, 1)) && __LIB_18__::func_351(uParam0, uParam1)) && !__LIB_13__::func_944(uParam0)) && uParam0->f_189 >= 5)
				{
					__LIB_11__::func_512(uParam0, 0);
				}
			}
			else if (__LIB_13__::func_944(uParam0))
			{
				__LIB_11__::func_512(uParam0, 5);
			}
			else if (__LIB_18__::func_738(uParam0, uParam1, uParam2))
			{
				__LIB_11__::func_512(uParam0, 2);
			}
			else if (__LIB_18__::func_739(uParam0, uParam1))
			{
				__LIB_11__::func_512(uParam0, 3);
			}
			else if (__LIB_19__::func_317(uParam0, uParam1))
			{
				__LIB_11__::func_512(uParam0, 1);
			}
			break;
		case 1:
			if (!__LIB_11__::func_500(uParam0))
			{
				if (__LIB_19__::func_317(uParam0, uParam1))
				{
					__LIB_11__::func_512(uParam0, 1);
				}
			}
			else if (__LIB_13__::func_944(uParam0))
			{
				__LIB_11__::func_512(uParam0, 5);
			}
			else if (__LIB_19__::func_315(uParam0, uParam1))
			{
				if (__LIB_18__::func_738(uParam0, uParam1, uParam2))
				{
					__LIB_11__::func_512(uParam0, 2);
				}
				else
				{
					__LIB_11__::func_512(uParam0, 0);
				}
			}
			else if (__LIB_18__::func_739(uParam0, uParam1))
			{
				__LIB_11__::func_512(uParam0, 3);
			}
			break;
		case 2:
			if (!__LIB_11__::func_500(uParam0))
			{
				if (__LIB_18__::func_738(uParam0, uParam1, uParam2))
				{
					__LIB_11__::func_512(uParam0, 2);
				}
			}
			else if (uParam0->f_210.f_2 == 7)
			{
				if (__LIB_13__::func_944(uParam0))
				{
					__LIB_11__::func_512(uParam0, 5);
				}
				else if (__LIB_19__::func_317(uParam0, uParam1))
				{
					__LIB_11__::func_512(uParam0, 1);
				}
				else if (__LIB_18__::func_739(uParam0, uParam1))
				{
					__LIB_11__::func_512(uParam0, 3);
				}
				else
				{
					__LIB_11__::func_512(uParam0, 0);
				}
			}
			break;
		case 3:
			if (!__LIB_11__::func_500(uParam0))
			{
				if (__LIB_18__::func_739(uParam0, uParam1))
				{
					__LIB_11__::func_512(uParam0, 3);
				}
			}
			else if (__LIB_18__::func_351(uParam0, uParam1))
			{
				if (__LIB_13__::func_944(uParam0))
				{
					__LIB_11__::func_512(uParam0, 5);
				}
				else if (__LIB_18__::func_738(uParam0, uParam1, uParam2))
				{
					__LIB_11__::func_512(uParam0, 2);
				}
				else if (__LIB_19__::func_317(uParam0, uParam1))
				{
					__LIB_11__::func_512(uParam0, 1);
				}
				else
				{
					__LIB_11__::func_512(uParam0, 0);
				}
			}
			break;
	}
}

void func_497(var uParam0, var uParam1, var uParam2)
{
	if (__LIB_11__::func_494(uParam0, 32))
	{
		__LIB_1__::func_561(&(uParam0->f_210.f_58));
		__LIB_1__::func_561(&(uParam0->f_210.f_66));
		__LIB_1__::func_561(&(uParam0->f_210.f_69));
		__LIB_1__::func_561(&(uParam0->f_210.f_72));
		__LIB_1__::func_561(&(uParam0->f_210.f_77));
		__LIB_1__::func_561(&(uParam0->f_210.f_85));
		__LIB_1__::func_561(&(uParam0->f_210.f_88));
		if (AUDIO::IS_ANY_SPEECH_PLAYING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2)))
		{
			return;
		}
	}
	if ((__LIB_11__::func_471(uParam0, 1) && !__LIB_11__::func_494(uParam0, 32)) && (uParam0->f_210.f_57 < uParam0->f_210.f_56 || uParam0->f_210.f_56 == -1))
	{
		if (!__LIB_11__::func_482(uParam0, 1))
		{
			__LIB_13__::func_967(uParam0, 1);
			__LIB_1__::func_561(&(uParam0->f_210.f_37));
			return;
		}
		if (__LIB_11__::func_494(uParam0, 64))
		{
			__LIB_13__::func_967(uParam0, 1);
			__LIB_1__::func_561(&(uParam0->f_210.f_37));
			return;
		}
		if (__LIB_0__::func_899(&(uParam0->f_210.f_40)))
		{
			if (__LIB_10__::func_919(&(uParam0->f_210.f_40)) < 5000)
			{
				__LIB_13__::func_967(uParam0, 1);
				__LIB_1__::func_561(&(uParam0->f_210.f_37));
				return;
			}
		}
		if (!__LIB_0__::func_899(&(uParam0->f_210.f_37)))
		{
			__LIB_2__::func_259(&(uParam0->f_210.f_37));
		}
		else if (__LIB_1__::func_592(&(uParam0->f_210.f_37)) > 2000)
		{
			if (__LIB_13__::func_978(uParam0, uParam1, 3))
			{
				uParam0->f_210.f_57++;
				__LIB_13__::func_967(uParam0, 1);
				__LIB_13__::func_966(uParam0, 16);
				__LIB_2__::func_259(&(uParam0->f_210.f_40));
				__LIB_1__::func_561(&(uParam0->f_210.f_37));
			}
		}
	}
	else if (!__LIB_11__::func_471(uParam0, 1))
	{
		if (__LIB_0__::func_899(&(uParam0->f_210.f_37)))
		{
			__LIB_1__::func_561(&(uParam0->f_210.f_37));
		}
	}
	if (__LIB_11__::func_471(uParam0, 2) && (uParam0->f_210.f_53 < uParam0->f_210.f_52 || uParam0->f_210.f_52 == -1))
	{
		if (__LIB_0__::func_899(&(uParam0->f_488)) && __LIB_1__::func_592(&(uParam0->f_488)) > 3000)
		{
			__LIB_13__::func_967(uParam0, 2);
		}
		if (__LIB_13__::func_978(uParam0, uParam1, 4))
		{
			uParam0->f_210.f_53++;
			__LIB_13__::func_967(uParam0, 2);
			__LIB_13__::func_966(uParam0, 16);
		}
	}
	if (__LIB_11__::func_471(uParam0, 4))
	{
		if (__LIB_0__::func_899(&(uParam0->f_491)) && __LIB_1__::func_592(&(uParam0->f_491)) > 3000)
		{
			__LIB_13__::func_967(uParam0, 4);
		}
		if (__LIB_13__::func_978(uParam0, uParam1, 6))
		{
			__LIB_13__::func_967(uParam0, 4);
			__LIB_13__::func_967(uParam0, 2);
			__LIB_13__::func_966(uParam0, 16);
		}
	}
	if (__LIB_11__::func_471(uParam0, 8) && (uParam0->f_210.f_55 < uParam0->f_210.f_54 || uParam0->f_210.f_54 == -1))
	{
		if (__LIB_13__::func_978(uParam0, uParam1, 7))
		{
			uParam0->f_210.f_55++;
			__LIB_13__::func_967(uParam0, 8);
			__LIB_13__::func_967(uParam0, 2);
			__LIB_13__::func_966(uParam0, 16);
		}
	}
	if ((__LIB_11__::func_494(uParam0, 2) && !__LIB_11__::func_494(uParam0, 32)) && uParam0->f_210 == 0)
	{
		if (__LIB_19__::func_318(uParam0, uParam2))
		{
			if (__LIB_13__::func_978(uParam0, uParam1, 8))
			{
				uParam0->f_210.f_76++;
				__LIB_2__::func_259(&(uParam0->f_210.f_69));
				__LIB_2__::func_259(&(uParam0->f_210.f_66));
			}
		}
		if (__LIB_18__::func_731(uParam0))
		{
			if (__LIB_13__::func_978(uParam0, uParam1, 9))
			{
				__LIB_13__::func_958(uParam0, 16);
				uParam0->f_210.f_84++;
				__LIB_13__::func_966(uParam0, 16);
				__LIB_2__::func_259(&(uParam0->f_210.f_77));
				if (__LIB_0__::func_899(&(uParam0->f_210.f_58)))
				{
					__LIB_2__::func_259(&(uParam0->f_210.f_58));
				}
			}
		}
		if (__LIB_19__::func_316(uParam0, uParam2, 1) && (uParam0->f_210.f_65 < uParam0->f_210.f_64 || uParam0->f_210.f_64 == -1))
		{
			if (!__LIB_0__::func_899(&(uParam0->f_210.f_58)))
			{
				if (uParam0->f_210.f_65 == 0)
				{
					__LIB_1__::func_585(&(uParam0->f_210.f_58), (20000f / 1.2f));
				}
				else
				{
					__LIB_2__::func_259(&(uParam0->f_210.f_58));
				}
			}
			else if (__LIB_1__::func_592(&(uParam0->f_210.f_58)) > 20000)
			{
				if (__LIB_13__::func_978(uParam0, uParam1, 1))
				{
					uParam0->f_210.f_65++;
					__LIB_13__::func_966(uParam0, 16);
					__LIB_2__::func_259(&(uParam0->f_210.f_58));
				}
			}
		}
	}
	if (__LIB_11__::func_471(uParam0, 16))
	{
		if (__LIB_18__::func_352(uParam0, uParam1))
		{
			__LIB_13__::func_967(uParam0, 16);
		}
	}
	if (__LIB_13__::func_987(uParam0, uParam2) && !__LIB_11__::func_494(uParam0, 32))
	{
		if (__LIB_13__::func_978(uParam0, uParam1, 11))
		{
			uParam0->f_210.f_92++;
			__LIB_2__::func_259(&(uParam0->f_210.f_88));
			__LIB_2__::func_259(&(uParam0->f_210.f_85));
		}
	}
}

void func_498(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_19__::func_319(50);
			}
			else
			{
				__LIB_19__::func_319(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_19__::func_319(51);
			}
			else
			{
				__LIB_19__::func_319(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
			}
			break;
		case 3:
			__LIB_19__::func_319(24);
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

int func_499(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;
	if (!__LIB_6__::func_77(iParam1, 2))
	{
		__LIB_6__::func_78(iParam1, 2);
	}
	if (iParam0 == 11 && Global_1914319.f_17378.f_1009 == 0)
	{
		return -1;
	}
	if (iParam0 == 9)
	{
		return __LIB_14__::func_135(iParam2, __LIB_16__::func_388(iParam1, iParam0), __LIB_4__::func_847(iParam1), -1);
	}
	if (iParam0 == __LIB_1__::func_921(iParam1))
	{
		vVar0 = { __LIB_4__::func_847(iParam1) };
		iVar3 = __LIB_19__::func_324(iParam0);
		if (iVar3 != 0)
		{
			return __LIB_14__::func_135(iParam2, iVar3, vVar0, -1);
		}
	}
	return -1;
}

void func_500(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_1__::func_697(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_1__::func_452(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_335(-525676072, &iVar1))
				{
					__LIB_1__::func_452(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			__LIB_14__::func_161(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		__LIB_19__::func_326(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_501(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_19__::func_326(50);
			}
			else
			{
				__LIB_19__::func_326(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_19__::func_326(51);
			}
			else
			{
				__LIB_19__::func_326(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
			}
			break;
		case 3:
			__LIB_19__::func_326(24);
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

void func_502(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_19__::func_332(&(uParam0->f_501), uParam0->f_512);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_5__::func_190(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_5__::func_186(uParam0);
	__LIB_4__::func_750(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_4__::func_784(uParam0, 4);
	__LIB_5__::func_187(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_4__::func_744(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_444))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_501, 128));
	if (!__LIB_0__::func_1(uParam0->f_501, 128))
	{
		__LIB_3__::func_120();
	}
}

void func_503(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_8__::func_904(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_8__::func_904(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_10__::func_587(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_8__::func_904(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_8__::func_904(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_8__::func_904(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_335(-525676072, &iVar1))
				{
					__LIB_8__::func_904(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_8__::func_904(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			__LIB_14__::func_409(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		__LIB_19__::func_336(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

bool func_504(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	float fVar5;
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			uParam0->f_24 = __LIB_0__::func_23();
			iVar4 = __LIB_0__::func_23();
			__LIB_0__::func_467(&iVar4, uParam0->f_6);
			__LIB_0__::func_468(&iVar4, 0);
			__LIB_0__::func_469(&iVar4, 0);
			if (__LIB_1__::func_110(uParam0->f_24, iVar4, 1))
			{
				__LIB_1__::func_446(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			__LIB_4__::func_704(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			__LIB_0__::func_115(uParam0, 1);
			break;
		case 1:
			fVar5 = __LIB_5__::func_120(uParam0, -1082130432 /* Float: -1f */);
			if (fVar5 >= 0.5f)
			{
				__LIB_0__::func_115(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = __LIB_5__::func_120(uParam0, -1082130432 /* Float: -1f */);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				__LIB_1__::func_446(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar4), __LIB_0__::func_42(iVar4), __LIB_0__::func_43(iVar4));
				__LIB_4__::func_573(CLOCK::GET_CLOCK_HOURS());
				__LIB_19__::func_340(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_505(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_19__::func_336(50);
			}
			else
			{
				__LIB_19__::func_336(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_19__::func_336(51);
			}
			else
			{
				__LIB_19__::func_336(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
			}
			break;
		case 3:
			__LIB_19__::func_336(24);
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

void func_506(var uParam0)
{
	if (!__LIB_5__::func_315(uParam0))
	{
		return;
	}
	if (!__LIB_4__::func_562(uParam0, 4194304))
	{
		__LIB_5__::func_316(uParam0);
		__LIB_4__::func_532(uParam0, 4194304);
	}
	if (__LIB_19__::func_341(uParam0))
	{
		__LIB_8__::func_878(uParam0);
		__LIB_5__::func_82(uParam0);
		__LIB_0__::func_115(uParam0, 2);
	}
}

bool func_507(int iParam0, int iParam1)
{
	return __LIB_19__::func_342(iParam0, iParam1, &(Global_1946804.f_1949), 1, 0, 0);
}

int func_508(int iParam0, bool bParam1, bool bParam2)
{
	return __LIB_19__::func_343(iParam0, &(Global_1946804.f_1949), bParam1, 0, 1, bParam2);
}

bool func_509(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	__LIB_19__::func_345(iParam1);
	if (!uParam0->f_1)
	{
		*uParam0 = PED::IS_PED_DEAD_OR_DYING(Global_35, true);
		uParam0->f_1 = 1;
	}
	if (Global_1935630.f_12 || *uParam0)
	{
		return false;
	}
	if (__LIB_0__::func_2() == 0)
	{
		if (Global_1935496.f_7 & 131072 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 1 == 0)
	{
		if (Global_1935496.f_7 & 1024 != 0)
		{
			return false;
		}
	}
	if (Global_1935630.f_22)
	{
		return false;
	}
	if (iParam3 & 2 == 0)
	{
		if (Global_1935496.f_7 & 32 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4 == 0)
	{
		if (Global_1935496.f_7 & 4096 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 8 == 0)
	{
		if (Global_1935496.f_7 & 512 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 512 == 0)
	{
		if (!uParam0->f_3)
		{
			uParam0->f_2 = __LIB_9__::func_186(bParam2);
			uParam0->f_3 = 1;
		}
		if (!uParam0->f_2)
		{
			return false;
		}
	}
	if (iParam3 & 262144 == 0)
	{
		if (!uParam0->f_5)
		{
			uParam0->f_4 = __LIB_7__::func_807(bParam2);
			uParam0->f_5 = 1;
		}
		if (!uParam0->f_4)
		{
			return false;
		}
	}
	if (iParam3 & 64 == 0)
	{
		if (!uParam0->f_7)
		{
			uParam0->f_6 = __LIB_7__::func_808(bParam2, iParam3, 1);
			uParam0->f_7 = 1;
		}
		if (!uParam0->f_6)
		{
			return false;
		}
	}
	if (iParam3 & 128 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = __LIB_2__::func_386(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = __LIB_0__::func_396(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
		if ((uParam0->f_10 || uParam0->f_12) || uParam0->f_8)
		{
			if (bParam2)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 8388608 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = __LIB_2__::func_386(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = __LIB_0__::func_396(Global_35);
			uParam0->f_9 = 1;
		}
		if (uParam0->f_10 || uParam0->f_8)
		{
			if (!uParam0->f_15)
			{
				uParam0->f_14 = PED::IS_PED_SWIMMING(Global_1935630.f_40);
				uParam0->f_15 = 1;
			}
			if (uParam0->f_14)
			{
				return false;
			}
		}
	}
	if (iParam3 & 16 == 0)
	{
		if (!uParam0->f_9)
		{
			uParam0->f_8 = __LIB_0__::func_396(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
		if (uParam0->f_8)
		{
			if (uParam0->f_12)
			{
				if (!uParam0->f_17)
				{
					uParam0->f_16 = __LIB_7__::func_809(Global_1935630.f_40, 1);
					uParam0->f_17 = 1;
				}
				if (!uParam0->f_16)
				{
					if (bParam2)
					{
						__LIB_0__::func_45("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
					}
					return false;
				}
			}
		}
	}
	if (iParam3 & 256 == 0)
	{
		if (Global_1935496.f_7 & 8192 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 1024 == 0)
	{
		if (Global_1935496.f_7 & 65536 != 0)
		{
			if (bParam2)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 2048 == 0)
	{
		if (Global_1935496.f_7 & 32768 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4096 == 0)
	{
		if (Global_1935496.f_7 & 16384 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 8192 == 0)
	{
		if (Global_1935496.f_7 & 16 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 16384 == 0)
	{
		if (Global_1935496.f_7 & 256 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 32768 == 0)
	{
		if (!uParam0->f_19)
		{
			uParam0->f_18 = __LIB_3__::func_63();
			uParam0->f_19 = 1;
		}
		if (uParam0->f_18)
		{
			if (bParam2)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 131072 == 0)
	{
		if (Global_1935496.f_7 & 524288 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 65536 == 0)
	{
		if (Global_1935496.f_7 & 262144 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 524288 == 0)
	{
		if (Global_1935496.f_7 & 2097152 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 1048576 == 0)
	{
		if (Global_1935496.f_7 & 8388608 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 2097152 == 0)
	{
		if (Global_1935496.f_7 & 33554432 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4194304 == 0)
	{
		if (Global_1935496.f_7 & 67108864 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 16777216 == 0)
	{
		if (Global_1935496.f_7 & 134217728 == 0)
		{
			return false;
		}
	}
	if (Global_1935496.f_7 & 17825988 != 0)
	{
		return false;
	}
	return true;
}

void func_510(var uParam0, var uParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_14__::func_574(uParam0, iParam2, 0)))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				__LIB_19__::func_348(uParam0, uParam1, iParam2);
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
			}
		}
	}
}

void func_511(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1[2];
	var uVar4[2];
	int iVar7;
	vector3 vVar8;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 1, 0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_12();
	switch (iVar0)
	{
		case 92:
		case 120:
			return;
	}
	uVar4[0] = Global_35;
	uVar4[1] = *uParam0;
	if (iParam2 != 0)
	{
		__LIB_14__::func_682(&iVar1, &uVar4, iVar1, iParam2, 0, 0, 0, -1, 1, 0, 0, 0);
		POPULATION::_0xB56D41A694E42E86(iParam2, 8192, 0, 0, -1, -1, 4);
	}
	else
	{
		__LIB_19__::func_351(&iVar1, &uVar4, Global_36, 10, iVar1, iParam1, iParam5, 0, 0, -1082130432 /* Float: -1f */);
	}
	iVar11 = PLAYER::PLAYER_ID();
	iVar12 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
	LAW::_0xD7494DED50C6EF52(iVar11, joaat("CRIME_ROBBERY"), iParam3);
	__LIB_14__::func_685(uParam0, &uVar14);
	iVar7 = 0;
	while (iVar7 < iVar1)
	{
		if (iVar13 >= iParam3)
		{
		}
		else if (__LIB_14__::func_675(iVar1[iVar7], iVar12))
		{
			__LIB_2__::func_357(iVar1[iVar7], Global_36, 2, 0, 3);
			TASK::CLEAR_PED_TASKS(iVar1[iVar7], true, false);
			PED::SET_PED_CONFIG_FLAG(iVar1[iVar7], 146, false);
			PED::SET_PED_CONFIG_FLAG(iVar1[iVar7], 148, false);
			PED::SET_PED_CONFIG_FLAG(iVar1[iVar7], 190, bParam4);
			PED::SET_PED_CONFIG_FLAG(iVar1[iVar7], 113, true);
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar1[iVar7], true, false) };
			LAW::_0x018F30D762E62DF8(iVar1[iVar7], &uVar14);
			PED::SET_PED_KEEP_TASK(iVar1[iVar7], true);
			iVar13++;
		}
		iVar7++;
	}
	EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW"), Global_35, 10f, 10f, 10f, -1f, -1f, 180f, true, false, -1, -1);
}

void func_512(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	__LIB_19__::func_363(iParam0);
}

int func_513(int iParam0)
{
	bool bVar0;
	if (__LIB_4__::func_377(1024))
	{
		return 0;
	}
	if (!__LIB_0__::func_293(43))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0;
	}
	if (__LIB_1__::func_16(iParam0))
	{
		if (__LIB_0__::func_402(iParam0) != 6)
		{
			return 0;
		}
	}
	if (__LIB_5__::func_987(iParam0) > 0)
	{
		bVar0 = false;
		if (__LIB_1__::func_16(iParam0))
		{
			if (__LIB_0__::func_402(iParam0) == 6)
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			__LIB_15__::func_880(6, 1);
		}
		else
		{
			__LIB_19__::func_361(iParam0);
		}
		__LIB_12__::func_544();
		__LIB_1__::func_643();
		return 1;
	}
	else
	{
		if (!__LIB_15__::func_84(iParam0))
		{
			return 0;
		}
		__LIB_19__::func_362(iParam0, 0);
		__LIB_12__::func_544();
		__LIB_1__::func_643();
		return 1;
	}
	return 0;
}

bool func_514(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	struct<4> Var1;
	int iVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	iVar0 = __LIB_1__::func_921(iParam1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (iVar0 == 11)
	{
		Var1.f_2 = 1;
		Var1.f_3 = -15;
		if (!__LIB_12__::func_500(&(Global_1914319.f_17378), iParam0, &Var1))
		{
			return false;
		}
		if (Var1 != 0)
		{
			*uParam2 = Var1;
			uParam2->f_2 = 1;
			return true;
		}
	}
	else
	{
		if (ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_KEY_VALID(__LIB_6__::func_676(iVar0)))
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_BY_KEY(__LIB_6__::func_676(iVar0), iParam0, &iVar6))
			{
				return false;
			}
		}
		if (iVar6 == 0)
		{
			return false;
		}
		iVar9 = 0;
		if (!__LIB_19__::func_359(iParam1, &iVar6, uParam2, &iVar9))
		{
			return false;
		}
		if (__LIB_0__::func_831(iParam0))
		{
			iVar10 = __LIB_12__::func_564(iParam0, iParam1, 1);
			iVar11 = __LIB_12__::func_489(iParam0);
			iVar12 = __LIB_9__::func_812(iVar11);
			if (iVar12 == joaat("BREED_ARDENNES_IRONGREYROAN") || iVar12 == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				if (!__LIB_12__::func_501(iVar12))
				{
					iVar10 = (iVar10 - 1);
				}
			}
			if (iVar10 <= 0)
			{
				return false;
			}
		}
		uParam2->f_2 = 1;
		return true;
	}
	return false;
}

void func_515(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_1__::func_697(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_1__::func_452(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_335(-525676072, &iVar1))
				{
					__LIB_1__::func_452(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			__LIB_15__::func_866(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		__LIB_19__::func_512(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_15__::func_808(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

int func_516(var uParam0, struct<23> Param1)
{
	var uVar0;
	struct<9> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<23> Var15;
	var uVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	bool bVar44;
	uVar0 = Param1.f_14;
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = -1;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_7 = -1;
	Var1.f_8 = -1;
	Var1.f_8 = uVar0;
	iVar11 = 0;
	iVar12 = 0;
	iVar12 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var1, &iVar11, 1);
	if (iVar12 == -1)
	{
		return 0;
	}
	iVar14 = 0;
	Var15.f_14 = -1;
	Var15.f_15 = -1;
	iVar42 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2031.f_58);
	iVar14 = 0;
	while (iVar14 < iVar11)
	{
		iVar13 = __LIB_0__::func_374(iVar14, iVar12);
		if (__LIB_0__::func_144(iVar13, 0))
		{
			if (__LIB_15__::func_745(&(uParam0->f_2031), iVar13, &uVar38) || ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(iVar13, uVar0) == -2089472884)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(iVar13, uVar0) == -2089472884)
				{
					bVar44 = true;
					iVar43 = 0;
					while (iVar43 < iVar42)
					{
						iVar41 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2031.f_58, iVar43);
						if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar41))
						{
							iVar39 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iVar41, __LIB_12__::func_482());
							iVar40 = iVar39;
							if (__LIB_0__::func_192(iVar40, 1954943838) && __LIB_14__::func_973(iVar13, iVar40))
							{
								bVar44 = false;
							}
							else
							{
								iVar43++;
							}
							if (bVar44)
							{
							}
							else
							{
								Var15 = { Param1 };
								Var15.f_7 = iVar13;
								Var15 = __LIB_19__::func_360(uParam0, iVar13);
								Stack.Push(uParam0);
								Stack.Push(&Var15);
								Call_Loc(uParam0->f_2031.f_124);
								if (StackVal)
								{
								}
								if (uParam0->f_2031.f_115)
								{
									Stack.Push(uParam0);
									Stack.Push(&Var15);
									Call_Loc(uParam0->f_2031.f_116);
									if (!StackVal)
									{
									}
								}
							}
							iVar14++;
							ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar12);
							return 1;
						}
					}
				}
			}
		}
	}
}

void func_517(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_19__::func_512(50);
			}
			else
			{
				__LIB_19__::func_512(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_19__::func_512(51);
			}
			else
			{
				__LIB_19__::func_512(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
			}
			break;
		case 3:
			__LIB_19__::func_512(24);
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

bool func_518(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	struct<2> Var10;
	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2031.f_58);
	iVar1 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	vVar7.f_1 = -1;
	vVar7.f_2 = -1;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2031.f_58, iVar1);
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar2))
		{
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar2, __LIB_12__::func_481());
			iVar3 = iVar4;
			if (iVar3 == -1968468235)
			{
				iVar5 = __LIB_14__::func_921(iVar1, &(uParam0->f_2031));
				iVar6 = 0;
				iVar6 = 0;
				while (iVar6 < iVar5)
				{
					vVar7 = { __LIB_15__::func_605(iVar1, iVar6, &(uParam0->f_2031)) };
					if (__LIB_0__::func_144(vVar7.x, 0))
					{
						if (vVar7.x == iParam1)
						{
							DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar2, __LIB_12__::func_482(), vVar7.x);
							DATABINDING::_DATABINDING_ADD_DATA_INT(iVar2, __LIB_14__::func_979(), vVar7.x);
							DATABINDING::_DATABINDING_ADD_DATA_INT(iVar2, __LIB_14__::func_845(), __LIB_19__::func_360(uParam0, vVar7.x));
							if (!__LIB_15__::func_306(uParam0, iParam1, &Var10, 164843734))
							{
								DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "iconVisible", true);
								DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar2, "iconTextureDict", "generic_textures");
								DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar2, "texture", "SWATCH_BG_1A");
							}
							else
							{
								DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "iconVisible", true);
								DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar2, "iconTextureDict", Var10.f_1);
								DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar2, "iconTexture", Var10);
							}
						}
						else
						{
							iVar6++;
						}
						iVar1++;
						return false;
					}
				}
			}
		}
	}
}

int func_519(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = __LIB_19__::func_365(iParam0, iParam1, -385264207, bParam2);
	return iVar0;
}

bool func_520(int iParam0)
{
	return (__LIB_19__::func_370(iParam0) || __LIB_15__::func_496(iParam0));
}

bool func_521(int iParam0, int iParam1)
{
	return (__LIB_19__::func_371(iParam0, iParam1) || __LIB_19__::func_372(iParam0, iParam1));
}

bool func_522(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		iVar0 = iVar3;
		iVar1 = __LIB_14__::func_455(iVar0);
		__LIB_19__::func_373(iVar1, iParam0, &iVar4, &iVar5, &uVar2);
		iVar6 = (iVar4 + iVar5);
		switch (iVar0)
		{
			case 0:
				if (iVar4 > 0)
				{
					return true;
				}
				else if (iVar5 > 0)
				{
					return false;
				}
				break;
			default:
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					switch (iVar6)
					{
						case 2:
							if (iVar4 == 2)
							{
								return true;
							}
							else if (iVar4 == 1)
							{
								return uVar2;
							}
							else
							{
								return false;
							}
							break;
						case 1:
							if (iVar4 == 1)
							{
								return true;
							}
							else
							{
								return false;
							}
							break;
						case 0:
							break;
					}
				}
				break;
		}
		iVar3++;
	}
	return false;
}

int func_523(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	__LIB_19__::func_373(iParam0, iParam1, &uVar0, &uVar1, &uVar2);
	return uVar0;
}

void func_524()
{
	switch (__LIB_11__::func_821(5))
	{
		case 4:
			if (__LIB_16__::func_374(5))
			{
			}
			else
			{
				__LIB_19__::func_376(5);
				__LIB_10__::func_749(1);
				__LIB_10__::func_633(5, 3);
			}
			default:
				break;
	}
}

bool func_525(bool bParam0, int iParam1)
{
	return __LIB_19__::func_381(0, bParam0, iParam1);
}

int func_526(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	return __LIB_19__::func_382(0, iParam0, bParam1, bParam4, 0, bParam2, bParam3, iParam5);
}

bool func_527(bool bParam0, int iParam1)
{
	return __LIB_19__::func_381(1, bParam0, iParam1);
}

int func_528(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	return __LIB_19__::func_382(1, iParam0, bParam1, bParam2, bParam3, bParam4, bParam5, iParam6);
}

bool func_529(bool bParam0, int iParam1)
{
	return __LIB_19__::func_381(3, bParam0, iParam1);
}

bool func_530(int iParam0, bool bParam1, int iParam2)
{
	return __LIB_19__::func_382(3, iParam0, 0, 0, 0, bParam1, 0, iParam2);
}

bool func_531(bool bParam0, int iParam1)
{
	return __LIB_19__::func_381(2, bParam0, iParam1);
}

bool func_532(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	return __LIB_19__::func_382(2, iParam0, bParam1, bParam3, 0, bParam2, 0, iParam4);
}

void func_533(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_40.f_6563[iVar0 /*27*/] == iParam0)
		{
			__LIB_18__::func_942(&(Global_40.f_6563[iVar0 /*27*/]));
			__LIB_19__::func_383(iVar0);
			__LIB_16__::func_400(iVar0);
			__LIB_16__::func_317();
			return;
		}
		iVar0++;
	}
}

void func_534(int iParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_INJURED(__LIB_0__::func_271(iParam0)))
	{
		if (__LIB_0__::func_31(iParam0) && __LIB_0__::func_144(iParam1, 0))
		{
			__LIB_19__::func_384(&(Global_1360165[iParam0 /*1157*/].f_146), iParam1, iParam2, 1);
		}
	}
}

void func_535(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_271(iParam0);
	if ((__LIB_0__::func_272(iVar0, 0) && __LIB_6__::func_328(iParam0, *uParam1)) && PED::_0x7C8AA850617651D9(iVar0, *uParam1))
	{
		__LIB_19__::func_385(iParam0, *uParam1);
	}
	if ((!__LIB_0__::func_272(iVar0, 0) || !__LIB_6__::func_328(iParam0, *uParam1)) || !PED::_0x7C8AA850617651D9(iVar0, *uParam1))
	{
		__LIB_3__::func_32(uParam1);
	}
}

void func_536(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		if (__LIB_0__::func_139((*uParam0)[1]))
		{
			__LIB_1__::func_221((*uParam0)[1], 0, 1);
		}
		return;
	}
	bVar2 = __LIB_12__::func_171();
	bVar3 = true;
	bVar4 = false;
	if (!Global_1911914.f_1579 && __LIB_1__::func_114(iParam1, iParam2, 1))
	{
		bVar4 = true;
		bVar3 = false;
	}
	else if (!__LIB_19__::func_387(iParam1, iParam2, &uVar1, &uVar0, &iVar5, 0, bVar2, 0, 1))
	{
		bVar3 = false;
	}
	else if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_644(4096))
		{
			if (__LIB_0__::func_372(iParam1, 1697966752) != 337650881)
			{
				bVar3 = false;
			}
		}
		else if (__LIB_0__::func_644(8192))
		{
			if (iParam1 != joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"))
			{
				bVar3 = false;
			}
		}
	}
	if (bVar3)
	{
		if (((__LIB_11__::func_426(iParam1, 1, 0) || ((!uParam0->f_83 || uParam0->f_84 > 0) && __LIB_0__::func_372(iParam1, -1636519629) == -701492487)) || (!uParam0->f_31 && ((uParam0->f_80 || iParam2 == -214678071) || iParam2 == joaat("COST_CRAFTING_GRILL")))) || (!uParam0->f_32 && iParam2 == joaat("COST_CRAFTING_GRILL")))
		{
			bVar3 = false;
		}
		else if (uParam0->f_37 == -1)
		{
			iVar6 = __LIB_1__::func_614(iParam1, 0, 0);
			iVar7 = __LIB_8__::func_959(iParam1, 0);
			iVar8 = __LIB_18__::func_516(iParam1, iParam2, bVar2, 0);
			if (iVar7 == -1)
			{
				iVar7 = iVar8;
			}
			else
			{
				iVar7 = (iVar7 - iVar6);
			}
			uParam0->f_37 = __LIB_0__::func_259(iVar7, iVar8);
		}
	}
	if (__LIB_0__::func_139((*uParam0)[1]))
	{
		if (__LIB_12__::func_164(iParam1))
		{
			__LIB_1__::func_484((*uParam0)[1], "CAMP_REC_COOK", 1);
		}
		else if (__LIB_0__::func_372(iParam1, -1636519629) == -701492487)
		{
			__LIB_1__::func_484((*uParam0)[1], "CAMP_REC_BREW", 1);
		}
		else
		{
			__LIB_1__::func_484((*uParam0)[1], "CAMP_REC_MAKE", 1);
		}
		__LIB_1__::func_221((*uParam0)[1], bVar3, 1);
	}
	__LIB_18__::func_962(iParam1, iParam2, uParam0, iVar5, bVar4);
	if (__LIB_0__::func_139((*uParam0)[6]))
	{
		__LIB_1__::func_221((*uParam0)[6], !bVar4, 1);
	}
}

bool func_537(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	return __LIB_19__::func_387(iParam0, iParam1, &uVar0, &uVar1, &uVar2, bParam2, bParam3, iParam4, bParam5);
}

void func_538(bool bParam0, bool bParam1, int iParam2)
{
	Global_1935689.f_4 = bParam0;
	Global_1935689.f_15 = iParam2;
	if (bParam0)
	{
		Global_1935689.f_5 = 0;
	}
	if (bParam1 || (__LIB_19__::func_388() && iParam2 == 0))
	{
		__LIB_12__::func_158(1);
		__LIB_12__::func_159(1);
	}
}

void func_539(int iParam0)
{
	int iVar0;
	struct<15> Var1;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_866(iParam0, 0))
	{
	}
	__LIB_19__::func_390(iParam0);
	Global_1359489.f_15 = __LIB_16__::func_771(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			Global_1359489[iVar0] = -1;
		}
		iVar0++;
	}
	__LIB_19__::func_391();
	__LIB_0__::func_290(iParam0, 32, 1);
	if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0 /*1157*/];
		Var1.f_7 = __LIB_0__::func_12();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	}
}

bool func_540(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		(*uParam0)[iVar1 /*7*/] = -1;
		(uParam0[iVar1 /*7*/])->f_3 = 0;
		(uParam0[iVar1 /*7*/])->f_4 = 99999999;
		(uParam0[iVar1 /*7*/])->f_5 = 0f;
		(uParam0[iVar1 /*7*/])->f_6 = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (__LIB_12__::func_477(iVar0))
		{
			if (__LIB_12__::func_583(iVar0, bParam2))
			{
				if (bParam1)
				{
					__LIB_19__::func_392(uParam0, iVar0);
				}
				else
				{
					__LIB_19__::func_393(uParam0, iVar0);
				}
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*7*/])->f_3)
		{
			if (__LIB_0__::func_20((*uParam0)[iVar0 /*7*/]))
			{
				iVar2++;
				(uParam0[iVar0 /*7*/])->f_5 = __LIB_16__::func_375((uParam0[iVar0 /*7*/])->f_4);
			}
		}
		iVar0++;
	}
	return iVar2 > 0;
}

void func_541(var uParam0)
{
	switch (uParam0->f_349)
	{
		case 1:
			if (__LIB_19__::func_401(uParam0, &(uParam0->f_181), uParam0->f_349))
			{
				if (__LIB_17__::func_56(uParam0, 2))
				{
					Stack.Push(&(uParam0->f_293));
					Stack.Push(uParam0->f_181.f_6);
					Stack.Push(uParam0->f_181.f_6.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					__LIB_17__::func_294(uParam0, 4, 1);
				}
				else if (uParam0->f_353 && __LIB_17__::func_56(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_237));
					Stack.Push(uParam0->f_181.f_4);
					Stack.Push(uParam0->f_181.f_4.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					__LIB_17__::func_294(uParam0, 2, 1);
				}
				else if (__LIB_17__::func_56(uParam0, 8))
				{
					Stack.Push(&(uParam0->f_321));
					Stack.Push(uParam0->f_181.f_10);
					Stack.Push(uParam0->f_181.f_10.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					__LIB_17__::func_294(uParam0, 5, 0);
				}
				else if (__LIB_17__::func_56(uParam0, 4))
				{
					Stack.Push(&(uParam0->f_265));
					Stack.Push(uParam0->f_181.f_8);
					Stack.Push(uParam0->f_181.f_8.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					__LIB_17__::func_294(uParam0, 3, 1);
				}
				else if (__LIB_17__::func_56(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_237));
					Stack.Push(uParam0->f_181.f_4);
					Stack.Push(uParam0->f_181.f_4.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					__LIB_17__::func_294(uParam0, 2, 1);
				}
				else
				{
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					__LIB_17__::func_294(uParam0, 1, 1);
				}
			}
			break;
		case 2:
			if (__LIB_19__::func_401(uParam0, &(uParam0->f_237), uParam0->f_349))
			{
				if (!uParam0->f_353)
				{
					if (__LIB_17__::func_56(uParam0, 2))
					{
						Stack.Push(&(uParam0->f_293));
						Stack.Push(uParam0->f_237.f_6);
						Stack.Push(uParam0->f_237.f_6.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						if (__LIB_17__::func_48(uParam0->f_237.f_2))
						{
							Stack.Push(&(uParam0->f_181));
							Stack.Push(uParam0->f_237.f_2);
							Stack.Push(uParam0->f_237.f_2.f_1);
							Stack.Push(&(uParam0->f_209));
							Call_Loc(uParam0->f_357);
						}
						__LIB_17__::func_294(uParam0, 4, 1);
					}
					else if (__LIB_17__::func_56(uParam0, 8))
					{
						Stack.Push(&(uParam0->f_321));
						Stack.Push(uParam0->f_237.f_10);
						Stack.Push(uParam0->f_237.f_10.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						if (__LIB_17__::func_48(uParam0->f_237.f_2))
						{
							Stack.Push(&(uParam0->f_181));
							Stack.Push(uParam0->f_237.f_2);
							Stack.Push(uParam0->f_237.f_2.f_1);
							Stack.Push(&(uParam0->f_209));
							Call_Loc(uParam0->f_357);
						}
						__LIB_17__::func_294(uParam0, 5, 0);
					}
					else if (__LIB_17__::func_56(uParam0, 4))
					{
						Stack.Push(&(uParam0->f_265));
						Stack.Push(uParam0->f_237.f_8);
						Stack.Push(uParam0->f_237.f_8.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						if (__LIB_17__::func_48(uParam0->f_237.f_2))
						{
							Stack.Push(&(uParam0->f_181));
							Stack.Push(uParam0->f_237.f_2);
							Stack.Push(uParam0->f_237.f_2.f_1);
							Stack.Push(&(uParam0->f_209));
							Call_Loc(uParam0->f_357);
						}
						__LIB_17__::func_294(uParam0, 3, 1);
					}
					else
					{
						if (__LIB_17__::func_48(uParam0->f_237.f_2))
						{
							Stack.Push(&(uParam0->f_181));
							Stack.Push(uParam0->f_237.f_2);
							Stack.Push(uParam0->f_237.f_2.f_1);
							Stack.Push(&(uParam0->f_209));
							Call_Loc(uParam0->f_357);
						}
						__LIB_17__::func_294(uParam0, 1, 1);
					}
				}
				else if (uParam0->f_354)
				{
					if (uParam0->f_355)
					{
						__LIB_17__::func_294(uParam0, 6, 1);
					}
					else
					{
						__LIB_17__::func_294(uParam0, 0, 1);
					}
				}
				else
				{
					if (__LIB_17__::func_48(uParam0->f_237.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_237.f_2);
						Stack.Push(uParam0->f_237.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					__LIB_17__::func_294(uParam0, 1, 1);
				}
			}
			break;
		case 3:
			if (__LIB_19__::func_401(uParam0, &(uParam0->f_265), uParam0->f_349))
			{
				if (__LIB_17__::func_56(uParam0, 2))
				{
					Stack.Push(&(uParam0->f_293));
					Stack.Push(uParam0->f_265.f_6);
					Stack.Push(uParam0->f_265.f_6.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					if (__LIB_17__::func_48(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					__LIB_17__::func_294(uParam0, 4, 1);
				}
				else if (uParam0->f_353 && __LIB_17__::func_56(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_237));
					Stack.Push(uParam0->f_265.f_4);
					Stack.Push(uParam0->f_265.f_4.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					if (__LIB_17__::func_48(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					__LIB_17__::func_294(uParam0, 2, 1);
				}
				else if (__LIB_17__::func_56(uParam0, 8))
				{
					Stack.Push(&(uParam0->f_321));
					Stack.Push(uParam0->f_265.f_10);
					Stack.Push(uParam0->f_265.f_10.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					if (__LIB_17__::func_48(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					__LIB_17__::func_294(uParam0, 5, 0);
				}
				else if (__LIB_17__::func_56(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_237));
					Stack.Push(uParam0->f_265.f_4);
					Stack.Push(uParam0->f_265.f_4.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					if (__LIB_17__::func_48(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					__LIB_17__::func_294(uParam0, 2, 1);
				}
				else
				{
					if (__LIB_17__::func_48(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					__LIB_17__::func_294(uParam0, 1, 1);
				}
			}
			break;
		case 4:
			if (__LIB_19__::func_401(uParam0, &(uParam0->f_293), uParam0->f_349))
			{
				if (uParam0->f_355)
				{
					__LIB_17__::func_294(uParam0, 6, 1);
				}
				else
				{
					__LIB_17__::func_294(uParam0, 0, 1);
				}
			}
			break;
		case 5:
			if (!uParam0->f_356)
			{
				if (__LIB_19__::func_401(uParam0, &(uParam0->f_321), uParam0->f_349))
				{
					uParam0->f_356 = 1;
					if (__LIB_17__::func_56(uParam0, 2))
					{
						Stack.Push(&(uParam0->f_293));
						Stack.Push(uParam0->f_321.f_6);
						Stack.Push(uParam0->f_321.f_6.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						uParam0->f_356 = 0;
						__LIB_17__::func_294(uParam0, 4, 0);
					}
					else if (uParam0->f_353 && __LIB_17__::func_56(uParam0, 1))
					{
						Stack.Push(&(uParam0->f_237));
						Stack.Push(uParam0->f_321.f_4);
						Stack.Push(uParam0->f_321.f_4.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						uParam0->f_356 = 0;
						__LIB_17__::func_294(uParam0, 2, 0);
					}
					else if (__LIB_17__::func_56(uParam0, 8))
					{
					}
					else
					{
						uParam0->f_356 = 0;
						__LIB_17__::func_294(uParam0, 1, 0);
					}
				}
			}
			else if (__LIB_17__::func_56(uParam0, 2))
			{
				Stack.Push(&(uParam0->f_293));
				Stack.Push(uParam0->f_321.f_6);
				Stack.Push(uParam0->f_321.f_6.f_1);
				Stack.Push(&(uParam0->f_209));
				Call_Loc(uParam0->f_357);
				uParam0->f_356 = 0;
				__LIB_17__::func_294(uParam0, 4, 0);
			}
			else if (uParam0->f_353 && __LIB_17__::func_56(uParam0, 1))
			{
				Stack.Push(&(uParam0->f_237));
				Stack.Push(uParam0->f_321.f_4);
				Stack.Push(uParam0->f_321.f_4.f_1);
				Stack.Push(&(uParam0->f_209));
				Call_Loc(uParam0->f_357);
				uParam0->f_356 = 0;
				__LIB_17__::func_294(uParam0, 2, 0);
			}
			else if (__LIB_17__::func_56(uParam0, 8))
			{
			}
			else
			{
				uParam0->f_356 = 0;
				__LIB_17__::func_294(uParam0, 1, 0);
			}
			break;
		case 6:
			__LIB_17__::func_49(uParam0);
			__LIB_17__::func_294(uParam0, 0, 1);
			break;
		case 0:
			break;
	}
}

void func_542(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_1__::func_697(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_1__::func_452(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_62(-525676072, &iVar1))
				{
					__LIB_1__::func_452(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			__LIB_1__::func_775(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		__LIB_19__::func_402(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_543(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_19__::func_402(50);
			}
			else
			{
				__LIB_19__::func_402(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_19__::func_402(51);
			}
			else
			{
				__LIB_19__::func_402(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
			}
			break;
		case 3:
			__LIB_19__::func_402(24);
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

int func_544(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	uParam1->f_27 = 0;
	if (__LIB_19__::func_405(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!__LIB_19__::func_8(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
		{
			__LIB_16__::func_821(uParam0[iVar1 /*36*/], uParam1->f_12);
		}
		else
		{
			__LIB_16__::func_821(uParam0[iVar1 /*36*/], 0);
		}
		return 2;
	}
	return 1;
}

int func_545(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	if (__LIB_19__::func_405(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!__LIB_19__::func_8(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED((*uParam0)[iVar1 /*36*/], false) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED((*uParam0)[iVar1 /*36*/], false))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar1 /*36*/], uParam1->f_12);
		}
		else
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar1 /*36*/], (uParam0[iVar1 /*36*/])->f_2);
		}
	}
	return 2;
}

int func_546(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	if (__LIB_19__::func_405(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!__LIB_19__::func_8(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false))
	{
		__LIB_16__::func_822(uParam0[iVar1 /*36*/]);
		return 3;
	}
	return 4;
}

bool func_547(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	if (__LIB_19__::func_405(uParam0, uParam1, 0))
	{
		return true;
	}
	uVar0 = *uParam1;
	if (!__LIB_19__::func_8(uVar0, &iVar1))
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar1 /*36*/], true))
	{
		__LIB_16__::func_823(uParam0[iVar1 /*36*/]);
		return true;
	}
	return false;
}

int func_548(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = uParam0->f_173.f_1;
	iVar1 = uParam1->f_1;
	iVar2 = uParam0->f_173;
	iVar3 = *uParam1;
	if (iVar2 != iVar3)
	{
		return __LIB_19__::func_407(uParam0, iVar2, &(uParam1->f_27));
	}
	if (iVar0 != iVar1)
	{
		return __LIB_19__::func_408(uParam0);
	}
	return 1;
}

struct<6> func_549()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	if (__LIB_19__::func_409(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (__LIB_19__::func_409(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		Var0 = uVar7;
	}
	if (__LIB_19__::func_409(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (__LIB_19__::func_409(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (__LIB_19__::func_409(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (__LIB_19__::func_409(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

int func_550(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!__LIB_19__::func_410(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!__LIB_19__::func_410(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = __LIB_0__::func_577(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!__LIB_1__::func_638(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!__LIB_1__::func_555(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_551(int iParam0, var uParam1)
{
	struct<4> Var0;
	Var0.f_9 = -1591664384;
	if (!__LIB_19__::func_410(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = __LIB_1__::func_81(Var0, joaat("SLOTID_HORSE_MANE"), 0);
	if (!__LIB_0__::func_144(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_552(int iParam0, var uParam1)
{
	struct<4> Var0;
	Var0.f_9 = -1591664384;
	if (!__LIB_19__::func_410(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = __LIB_1__::func_81(Var0, joaat("SLOTID_HORSE_TAIL"), 0);
	if (!__LIB_0__::func_144(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_553(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	Var0.f_9 = -1591664384;
	if (!__LIB_19__::func_410(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { __LIB_0__::func_429(iParam1, Var0, joaat("SLOTID_HORSE_MANE"), 0) };
	return __LIB_1__::func_556(Var29, 1);
}

bool func_554(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	Var0.f_9 = -1591664384;
	if (!__LIB_19__::func_410(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { __LIB_0__::func_429(iParam1, Var0, joaat("SLOTID_HORSE_TAIL"), 0) };
	return __LIB_1__::func_556(Var29, 1);
}

int func_555(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
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
		__LIB_19__::func_411(iVar0, iParam0, __LIB_0__::func_846(iParam1), 1, 0, 1);
	}
	__LIB_0__::func_660(iParam0);
	return 1;
}

int func_556(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	uParam1->f_27 = 0;
	if (__LIB_19__::func_413(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!__LIB_19__::func_16(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
		{
			__LIB_16__::func_821(uParam0[iVar1 /*36*/], uParam1->f_12);
		}
		else
		{
			__LIB_16__::func_821(uParam0[iVar1 /*36*/], 0);
		}
		return 2;
	}
	return 1;
}

int func_557(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	if (__LIB_19__::func_413(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!__LIB_19__::func_16(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED((*uParam0)[iVar1 /*36*/], false) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED((*uParam0)[iVar1 /*36*/], false))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar1 /*36*/], uParam1->f_12);
		}
		else
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar1 /*36*/], (uParam0[iVar1 /*36*/])->f_2);
		}
	}
	return 2;
}

int func_558(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	if (__LIB_19__::func_413(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!__LIB_19__::func_16(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false))
	{
		__LIB_16__::func_822(uParam0[iVar1 /*36*/]);
		return 3;
	}
	return 4;
}

bool func_559(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	if (__LIB_19__::func_413(uParam0, uParam1, 0))
	{
		return true;
	}
	uVar0 = *uParam1;
	if (!__LIB_19__::func_16(uVar0, &iVar1))
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar1 /*36*/], true))
	{
		__LIB_16__::func_823(uParam0[iVar1 /*36*/]);
		return true;
	}
	return false;
}

int func_560(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = uParam0->f_65.f_1;
	iVar1 = uParam1->f_1;
	iVar2 = uParam0->f_65;
	iVar3 = *uParam1;
	if (iVar2 != iVar3)
	{
		return __LIB_19__::func_414(uParam0, iVar2, &(uParam1->f_27));
	}
	if (iVar0 != iVar1)
	{
		return __LIB_19__::func_415(uParam0);
	}
	return 1;
}

void func_561(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar0 = 0f;
	if (bParam1)
	{
		switch (__LIB_1__::func_987(iParam0))
		{
			case 1:
				fVar0 = 99999f;
				break;
			case 2:
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 1f);
				break;
				break;
			case 3:
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f);
				break;
			case 4:
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f);
				break;
			case 5:
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0f);
				break;
			case 6:
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 0f);
				break;
		}
	}
	if (__LIB_17__::func_613(iParam0))
	{
		fVar1 = 1f;
	}
	if (__LIB_10__::func_646(4))
	{
		if (__LIB_1__::func_85(iParam0, 16777216))
		{
			fVar0 = (fVar0 + 2000f);
		}
	}
	if (Global_1310750[iParam0 /*111*/].f_38 == 16 || Global_1310750[iParam0 /*111*/].f_38 == 8)
	{
		fVar2 = 1f;
	}
	fVar3 = __LIB_19__::func_428(iParam0);
	Global_1310750[iParam0 /*111*/].f_54 = ((((((((((Global_1310750[iParam0 /*111*/].f_56 + Global_1310750[iParam0 /*111*/].f_57) + Global_1310750[iParam0 /*111*/].f_58) + Global_1310750[iParam0 /*111*/].f_59) + Global_1310750[iParam0 /*111*/].f_55) + Global_1310750[iParam0 /*111*/].f_60) + Global_1310750[iParam0 /*111*/].f_61) + fVar0) + fVar1) + fVar2) + fVar3);
}

void func_562(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_1__::func_697(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_1__::func_452(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_335(-525676072, &iVar1))
				{
					__LIB_1__::func_452(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			__LIB_1__::func_775(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		__LIB_19__::func_439(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_563(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_19__::func_439(50);
			}
			else
			{
				__LIB_19__::func_439(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_19__::func_439(51);
			}
			else
			{
				__LIB_19__::func_439(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
			}
			break;
		case 3:
			__LIB_19__::func_439(24);
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

bool func_564(var uParam0)
{
	if (!__LIB_19__::func_440(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_126(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

void func_565(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	__LIB_7__::func_961(iParam0, 1);
	iVar0 = PED::_GET_LASSO_TARGET(Global_35);
	if (bParam5 || iParam0->f_1 < iParam0->f_3)
	{
		if (iParam0->f_1 >= 2)
		{
			__LIB_7__::func_961(iParam0, 16);
			iParam0->f_4 = 45;
		}
		if (iParam0->f_16 == -1)
		{
			switch (iParam2)
			{
				case 65536:
					iParam0->f_16 = 0;
					break;
				case 8:
					if (PED::_0x268B3AEBF032A88D(uParam1->f_10))
					{
						__LIB_7__::func_961(iParam0, 2);
						return;
					}
					if (__LIB_8__::func_1(iParam0, &(uParam1->f_10)))
					{
						__LIB_7__::func_961(iParam0, 2);
					}
					else
					{
						__LIB_8__::func_89(iParam0, 1);
					}
					return;
				case 64:
					if (__LIB_8__::func_1(iParam0, &(uParam1->f_10)))
					{
						__LIB_7__::func_961(iParam0, 2);
					}
					else
					{
						__LIB_8__::func_89(iParam0, 1);
					}
					return;
				case 2048:
					iParam0->f_16 = 4;
					break;
				case 8192:
					if (ENTITY::DOES_ENTITY_EXIST(__LIB_3__::func_624(Global_35)))
					{
						iParam0->f_16 = 1;
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (PED::IS_PED_MALE(iVar0))
						{
							iParam0->f_18 = 1;
						}
						else
						{
							iParam0->f_18 = 2;
						}
						iParam0->f_16 = 2;
					}
					else if (PED::IS_PED_PLANTING_BOMB(Global_35))
					{
						iParam0->f_16 = 3;
					}
					break;
				case 512:
				case 1024:
					iParam0->f_16 = 7;
					break;
			}
		}
		if (*iParam0 != 0)
		{
		}
		else if (iParam0->f_16 != 3 && uParam1->f_10 != 0)
		{
			*iParam0 = uParam1->f_10;
		}
		else if (!__LIB_19__::func_445(iParam0, iParam3, Global_36, 50f, __LIB_8__::func_2(iParam0), __LIB_8__::func_3(iParam0)))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0) || !PED::IS_PED_HUMAN(*iParam0))
		{
			return;
		}
		if (iParam0->f_1 < 3)
		{
			iParam0->f_9[iParam0->f_1] = __LIB_0__::func_23();
		}
		if (!bParam4)
		{
			iParam0->f_1++;
		}
	}
	else
	{
		__LIB_7__::func_961(iParam0, 2);
	}
}

bool func_566(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	if (__LIB_8__::func_88(iParam1, 1))
	{
		return false;
	}
	if (!__LIB_1__::func_205(Global_35, Global_1392194[uParam0->f_136 /*10*/].f_6, 1, 0))
	{
		return false;
	}
	if ((__LIB_8__::func_190(Global_35, &iVar0, 4) && !STREAMING::IS_MODEL_A_PED(iVar0)) || TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
	{
		if (__LIB_19__::func_445(&uVar1, iParam2, Global_36, 12.5f, 1, 120f))
		{
			*iParam1 = uVar1;
			iParam1->f_16 = 7;
			return true;
		}
	}
	return false;
}

void func_567(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_A_PED(bParam1) && __LIB_0__::func_407(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1)))
	{
		bVar0 = true;
		iVar1 = __LIB_4__::func_656(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1));
		if (bParam3)
		{
			if (__LIB_18__::func_146(uParam0, bParam1, 1024))
			{
				__LIB_18__::func_142(uParam0, bParam1, 8192);
			}
			else
			{
				__LIB_0__::func_900(iVar1);
			}
		}
		else if (!__LIB_18__::func_146(uParam0, bParam1, 8192))
		{
			if (__LIB_0__::func_51(&(Global_1360165[iVar1 /*1157*/].f_12), 8) && !__LIB_18__::func_146(uParam0, bParam1, 1024))
			{
				__LIB_0__::func_745(iVar1);
			}
		}
		else
		{
			__LIB_18__::func_141(uParam0, bParam1, 8192);
		}
	}
	if (bParam3)
	{
		__LIB_19__::func_446(uParam0, bParam1, iParam2, iParam4, 1, bVar0);
	}
	else if (MAP::DOES_BLIP_EXIST(uParam0->f_5303) || iParam2 == joaat("BLIP_STYLE_PLAYER_HORSE"))
	{
		__LIB_19__::func_446(uParam0, bParam1, iParam2, iParam4, 0, bVar0);
	}
}

void func_568(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			__LIB_19__::func_455(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			__LIB_19__::func_455(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			__LIB_19__::func_455(39, 0, 0, 0, 0, 0, 1, 0);
			__LIB_1__::func_450(39, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_434(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			__LIB_19__::func_455(41, 0, 0, 0, 0, 0, 1, 0);
			__LIB_1__::func_450(41, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_435(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			__LIB_19__::func_455(49, 0, 0, 0, 0, 0, 1, 0);
			__LIB_1__::func_450(49, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_436(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			__LIB_19__::func_455(43, 0, 0, joaat("EXOTIC_STAGE_01"), __LIB_1__::func_803(1), 0, -1, 0);
			__LIB_0__::func_437(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			__LIB_19__::func_455(43, 0, 0, joaat("EXOTIC_STAGE_02"), __LIB_1__::func_803(2), 0, -1, 0);
			__LIB_0__::func_437(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			__LIB_19__::func_455(43, 0, 0, joaat("EXOTIC_STAGE_03"), __LIB_1__::func_803(4), 0, -1, 0);
			__LIB_0__::func_437(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			__LIB_19__::func_455(43, 0, 0, joaat("EXOTIC_STAGE_04"), __LIB_1__::func_803(8), 0, -1, 0);
			__LIB_0__::func_437(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			__LIB_19__::func_455(43, 0, 0, joaat("EXOTIC_STAGE_05"), __LIB_1__::func_803(16), 0, -1, 0);
			__LIB_0__::func_437(16);
			break;
	}
}

void func_569(int iParam0)
{
	if (__LIB_0__::func_942() == 1)
	{
		if (__LIB_1__::func_154(39))
		{
			__LIB_1__::func_240(342, 0);
		}
		else
		{
			__LIB_1__::func_240(343, 0);
			__LIB_0__::func_434(1);
		}
	}
	if (__LIB_0__::func_942() >= 30)
	{
		__LIB_1__::func_240(344, 0);
	}
	__LIB_19__::func_455(39, 0, 0, 0, 0, 0, -1, 0);
	__LIB_1__::func_450(39, 0, 0, __LIB_0__::func_942(), 30, 1, 0);
}

void func_570(int iParam0)
{
	if (__LIB_0__::func_438() == 1)
	{
		if (__LIB_1__::func_154(49))
		{
			__LIB_1__::func_240(409, 0);
		}
		else
		{
			__LIB_1__::func_240(410, 0);
			__LIB_0__::func_436(1);
		}
	}
	if (__LIB_0__::func_438() >= 10)
	{
		__LIB_1__::func_240(411, 0);
	}
	__LIB_19__::func_455(49, 0, 0, 0, 0, 0, -1, 0);
	__LIB_1__::func_450(49, 0, 0, __LIB_0__::func_438(), 10, 1, 0);
}

void func_571(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			__LIB_19__::func_194(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_19__::func_455(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			__LIB_1__::func_408(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			__LIB_19__::func_194(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_19__::func_455(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			__LIB_19__::func_194(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_19__::func_455(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			__LIB_19__::func_194(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_19__::func_455(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			__LIB_19__::func_194(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_19__::func_455(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_572(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (!__LIB_1__::func_154(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				__LIB_1__::func_240(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				__LIB_1__::func_240(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				__LIB_1__::func_240(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				__LIB_1__::func_240(400, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 412399755))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_01"));
			if (__LIB_0__::func_944() == 0)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_19__::func_455(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				__LIB_1__::func_240(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				__LIB_1__::func_240(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				__LIB_1__::func_240(401, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 709057512))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_02"));
			if (__LIB_0__::func_944() == 1)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_19__::func_455(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				__LIB_1__::func_240(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				__LIB_1__::func_240(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				__LIB_1__::func_240(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				__LIB_1__::func_240(398, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1478961327))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_03"));
			if (__LIB_0__::func_944() == 2)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						__LIB_4__::func_124(48);
					}
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_19__::func_455(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_19__::func_455(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				__LIB_1__::func_240(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				__LIB_1__::func_240(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				__LIB_1__::func_240(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				__LIB_1__::func_240(406, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1238404098))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_04"));
			if (__LIB_0__::func_944() == 3)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_19__::func_455(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				__LIB_1__::func_240(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				__LIB_1__::func_240(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				__LIB_1__::func_240(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				__LIB_1__::func_240(403, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1160548794))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_05"));
			if (__LIB_0__::func_944() == 4)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_19__::func_455(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_573(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		__LIB_19__::func_194(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		__LIB_19__::func_455(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_574(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (__LIB_19__::func_194(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			__LIB_19__::func_455(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			__LIB_19__::func_455(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

void func_575(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_154(43))
		{
			if (__LIB_0__::func_192(iParam0, 412399755))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_01"));
				if (__LIB_0__::func_944() == 0)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_19__::func_455(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (__LIB_1__::func_154(44))
		{
			if (__LIB_0__::func_192(iParam0, 709057512))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_02"));
				if (__LIB_0__::func_944() == 1)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_19__::func_455(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (__LIB_0__::func_192(iParam0, -1478961327))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_03"));
				if (__LIB_0__::func_944() == 2)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_19__::func_455(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (__LIB_0__::func_192(iParam0, -1238404098))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_04"));
				if (__LIB_0__::func_944() == 3)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_19__::func_455(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (__LIB_0__::func_192(iParam0, 1160548794))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_05"));
				if (__LIB_0__::func_944() == 4)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_19__::func_455(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_576(char[4] cParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_9__::func_40(cParam0);
	if (__LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) <= 3)
	{
		iVar0 = __LIB_6__::func_864(cParam0);
	}
	Var1 = { __LIB_8__::func_688(cParam0, iVar0) };
	if (__LIB_19__::func_459(&(cParam0->f_10792), Var1, __LIB_0__::func_81(&(cParam0->f_10792)), 0))
	{
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 262144);
		if (__LIB_4__::func_562(&(cParam0->f_10792), 524288))
		{
			__LIB_8__::func_665(cParam0, 67108864);
			__LIB_4__::func_563(&(cParam0->f_10792), 524288);
		}
		__LIB_5__::func_344(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

void func_577(int iParam0)
{
	if (iParam0 == -1)
	{
		__LIB_19__::func_465();
	}
	else
	{
		__LIB_0__::func_11();
	}
}

int func_578(int iParam0)
{
	__LIB_19__::func_467(1);
	return -2;
}

int func_579(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return -2;
	}
	if (iParam0 == -1)
	{
		return -2;
	}
	__LIB_18__::func_485(Global_1879534.f_1172[iParam0 /*2*/]);
	__LIB_19__::func_467(1);
	return -2;
}

int func_580(int iParam0)
{
	__LIB_19__::func_468(iParam0);
	return -2;
}

void func_581(int iParam0, var uParam1)
{
	int iVar0;
	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = __LIB_19__::func_469(iParam0, uParam1);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_NEW(iVar0, true);
}

void func_582(int iParam0, var uParam1)
{
	int iVar0;
	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = __LIB_19__::func_469(iParam0, uParam1);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_NEW(iVar0, false);
}

void func_583(int iParam0, var uParam1)
{
	int iVar0;
	return;
	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = __LIB_19__::func_469(iParam0, uParam1);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

void func_584(int iParam0, var uParam1)
{
	int iVar0;
	return;
	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = __LIB_19__::func_469(iParam0, uParam1);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, false);
}

void func_585(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (__LIB_0__::func_5(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			__LIB_19__::func_470(iVar0);
			if (__LIB_0__::func_1(Global_1347702[iVar0 /*49*/].f_12, 4))
			{
				return;
			}
		}
		iVar0++;
	}
}

void func_586(var uParam0, bool bParam1, bool bParam2)
{
	__LIB_12__::func_318(uParam0);
	__LIB_12__::func_319(uParam0);
	__LIB_12__::func_320(uParam0);
	__LIB_12__::func_321(uParam0);
	__LIB_12__::func_322(uParam0);
	__LIB_19__::func_473(uParam0, 1);
	if (bParam2)
	{
		__LIB_18__::func_535(uParam0, 1);
	}
	else
	{
		__LIB_18__::func_527(uParam0);
	}
	__LIB_12__::func_323(uParam0);
	if (bParam1)
	{
		__LIB_19__::func_236(uParam0);
	}
}

void func_587(var uParam0, bool bParam1)
{
	__LIB_19__::func_477(uParam0, bParam1);
	__LIB_12__::func_349(uParam0);
}

void func_588(int iParam0)
{
	if (__LIB_0__::func_51(&(iParam0->f_3), 4))
	{
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if ((!__LIB_19__::func_281(iParam0) || __LIB_0__::func_51(&(iParam0->f_3), 4)) && !__LIB_0__::func_51(&(iParam0->f_3), 256))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_BEHIND"), false);
		}
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_NEXT_CAMERA"), false);
	}
	if (__LIB_19__::func_481(iParam0))
	{
		__LIB_1__::func_539();
	}
	if (!__LIB_0__::func_51(&(iParam0->f_3), 16))
	{
		if (__LIB_2__::func_618(iParam0))
		{
			if (__LIB_5__::func_28(iParam0) < iParam0->f_4)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
	}
}

bool func_589(int iParam0, var uParam1, int iParam2)
{
	bool bVar0;
	bVar0 = false;
	switch (__LIB_19__::func_492(iParam0, uParam1, iParam2, iParam0->f_529))
	{
		case 4:
			switch (iParam2)
			{
				case 5:
					__LIB_13__::func_724(iParam0, 51);
					break;
				case 6:
					__LIB_13__::func_724(iParam0, 53);
					break;
				case 7:
					__LIB_13__::func_724(iParam0, 55);
					break;
			}
			return true;
		case 1:
			if (iParam2 == 5)
			{
				bVar0 = __LIB_13__::func_727(iParam0, 67);
			}
			__LIB_2__::func_478(iParam0->f_7, Global_35, __LIB_18__::func_683(iParam2, __LIB_13__::func_738(iParam0, iParam2), bVar0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_13__::func_771(iParam0, iParam2);
			break;
		case 2:
			iParam0->f_524 = 0;
			break;
		case 5:
			__LIB_13__::func_724(iParam0, 44);
			break;
	}
	return false;
}

void func_590(int iParam0)
{
	if (__LIB_19__::func_293(iParam0, 1))
	{
		__LIB_13__::func_730(iParam0, 41);
		if (__LIB_0__::func_75(&(iParam0->f_212)))
		{
			__LIB_1__::func_148(&(iParam0->f_212));
		}
		if (__LIB_0__::func_75(&(iParam0->f_496)))
		{
			__LIB_0__::func_37(&(iParam0->f_496));
		}
		if (__LIB_0__::func_75(&(iParam0->f_499)))
		{
			__LIB_0__::func_37(&(iParam0->f_499));
		}
		if (__LIB_0__::func_75(&(iParam0->f_459)))
		{
			if (__LIB_0__::func_33(&(iParam0->f_459)))
			{
				__LIB_2__::func_112(&(iParam0->f_459));
			}
		}
		if (iParam0->f_515 && !__LIB_13__::func_727(iParam0, 46))
		{
			__LIB_13__::func_734(iParam0, 262144);
			__LIB_13__::func_823(iParam0, 5f, 0);
		}
		iParam0->f_514 = 0;
		iParam0->f_515 = 0;
		iParam0->f_518 = 0;
		iParam0->f_516 = 0;
		iParam0->f_517 = 0;
		iParam0->f_524 = 0;
		__LIB_13__::func_734(iParam0, 64);
		__LIB_19__::func_493(&(iParam0->f_284));
		iParam0->f_523 = 0;
	}
}

void func_591(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		__LIB_19__::func_498(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		__LIB_19__::func_498(iParam1, 1);
		__LIB_1__::func_856(iParam0);
	}
}

void func_592(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		__LIB_19__::func_501(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		__LIB_19__::func_501(iParam1, 1);
		__LIB_1__::func_856(iParam0);
	}
}

void func_593(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		__LIB_19__::func_505(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		__LIB_19__::func_505(iParam1, 1);
		__LIB_1__::func_856(iParam0);
	}
}

void func_594(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!__LIB_12__::func_515(iParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	__LIB_12__::func_572(iParam0);
	iVar0 = -1;
	bVar1 = false;
	if (__LIB_1__::func_16(iParam0))
	{
		iVar0 = __LIB_0__::func_402(iParam0);
		bVar1 = true;
	}
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10f);
	__LIB_0__::func_15(__LIB_0__::func_358(joaat("HORSE_FED")), 1);
	iVar2 = __LIB_12__::func_529(iParam0, 0);
	iVar3 = __LIB_12__::func_529(iParam0, 1);
	__LIB_15__::func_862(iParam0, iParam1);
	iVar4 = __LIB_12__::func_529(iParam0, 0);
	iVar5 = __LIB_12__::func_529(iParam0, 1);
	iVar6 = 0;
	iVar6 = (iVar6 + (iVar4 - iVar2));
	iVar6 = (iVar6 + (iVar5 - iVar3));
	__LIB_19__::func_513(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (__LIB_12__::func_530(iParam1))
	{
		__LIB_0__::func_15(__LIB_0__::func_358(joaat("HORSE_FED_MUSHROOM")), 1);
	}
	if (__LIB_12__::func_531(iParam1))
	{
		return;
	}
	if (__LIB_12__::func_532(iParam1))
	{
		__LIB_15__::func_99(iVar0, 16);
		return;
	}
	bVar7 = false;
	iVar8 = __LIB_12__::func_533(iParam0, 2);
	if (iVar8 < 30)
	{
		bVar7 = true;
	}
	iVar9 = -1;
	if (iVar6 >= 50 || bVar7)
	{
		iVar9 = 13;
	}
	else if (iVar6 >= 25)
	{
		iVar9 = 14;
	}
	else if (iVar6 >= 0)
	{
		iVar9 = 15;
	}
	if (iVar9 != -1)
	{
		__LIB_15__::func_99(iVar0, iVar9);
	}
	if (!__LIB_0__::func_474(43))
	{
		__LIB_1__::func_240(43, 0);
		__LIB_12__::func_534(MISC::GET_GAME_TIMER());
	}
}

void func_595(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!__LIB_12__::func_519(iParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	__LIB_12__::func_572(iParam0);
	__LIB_15__::func_862(iParam0, iParam1);
	bVar1 = __LIB_1__::func_16(iParam0);
	if (bVar1)
	{
		iVar0 = __LIB_0__::func_402(iParam0);
	}
	__LIB_19__::func_513(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (!__LIB_15__::func_54(iParam0, 1))
	{
		__LIB_15__::func_99(iVar0, 20);
	}
	iVar2 = __LIB_6__::func_95(iParam0);
	fVar3 = (BUILTIN::TO_FLOAT(__LIB_12__::func_535(iVar2)) + (48f * 60f));
	__LIB_12__::func_536(iVar0, 0, fVar3);
}

void func_596(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!__LIB_12__::func_521(iParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	__LIB_12__::func_572(iParam0);
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10f);
	__LIB_15__::func_862(iParam0, iParam1);
	__LIB_19__::func_513(iParam0);
	bVar1 = __LIB_1__::func_16(iParam0);
	if (bVar1)
	{
		iVar0 = __LIB_0__::func_402(iParam0);
	}
	if (!bVar1)
	{
		return;
	}
	iVar2 = __LIB_6__::func_95(iParam0);
	iVar3 = __LIB_12__::func_535(iVar2);
	__LIB_12__::func_536(iVar0, 0, BUILTIN::TO_FLOAT(iVar3));
	bVar4 = false;
	iVar5 = MISC::GET_GAME_TIMER();
	iVar6 = __LIB_12__::func_537();
	if ((iVar6 + 45000) > iVar5)
	{
		bVar4 = true;
	}
	bVar7 = false;
	if (bVar4 && iVar6 + 15000 > iVar5)
	{
		bVar7 = true;
	}
	if (iParam2 >= 10)
	{
		iVar8 = 17;
	}
	else if (bVar4)
	{
		if (bVar7)
		{
			return;
		}
		else
		{
			iVar8 = 19;
		}
	}
	else
	{
		iVar8 = 18;
	}
	if (iVar8 != -1)
	{
		__LIB_15__::func_99(iVar0, iVar8);
		__LIB_12__::func_538(iVar5);
	}
}

void func_597(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		__LIB_19__::func_517(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		__LIB_19__::func_517(iParam1, 1);
		__LIB_19__::func_364(iParam0);
	}
}

bool func_598(var uParam0, int iParam1)
{
	struct<5> Var0;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (__LIB_15__::func_281(iParam1))
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam1, -1588156645))
	{
		if (!__LIB_0__::func_428(__LIB_0__::func_914(iParam1, 0)) && !__LIB_0__::func_214(__LIB_0__::func_914(iParam1, 0)))
		{
			return true;
		}
	}
	if (__LIB_19__::func_514(iParam1, uParam0->f_220, &Var0))
	{
		return Var0.f_4;
	}
	return true;
}

bool func_599(var uParam0, int iParam1)
{
	struct<5> Var0;
	if (__LIB_0__::func_2() != -1)
	{
		return !__LIB_1__::func_63(iParam1);
	}
	if (__LIB_19__::func_514(iParam1, uParam0->f_220, &Var0))
	{
		return Var0.f_4;
	}
	return false;
}

bool func_600(var uParam0, vector3 vParam1)
{
	int iVar0;
	var uVar1;
	if (!__LIB_0__::func_144(vParam1.x, 0))
	{
		return false;
	}
	if (uParam0->f_3 == 152)
	{
		if (__LIB_14__::func_739(vParam1.x))
		{
			Stack.Push(uParam0);
			Stack.Push(vParam1.y);
			Stack.Push(vParam1.z);
			Call_Loc(uParam0->f_2031.f_125);
			if (!StackVal)
			{
				return true;
			}
		}
		else if (__LIB_12__::func_486(vParam1.x))
		{
			return true;
		}
		return __LIB_0__::func_788(vParam1.x, 0) > 0;
	}
	else
	{
		iVar0 = uParam0->f_3;
		if (__LIB_1__::func_917(__LIB_14__::func_902(uParam0)))
		{
			iVar0 = __LIB_14__::func_902(uParam0);
		}
		if (!__LIB_0__::func_313())
		{
			if (vParam1.x == joaat("WEAPON_PISTOL_M1899"))
			{
				return false;
			}
		}
		if (__LIB_19__::func_514(vParam1.x, iVar0, &uVar1))
		{
			return true;
		}
	}
	return false;
}

int func_601(int iParam0, int iParam1)
{
	struct<5> Var0;
	if (__LIB_19__::func_514(iParam0, iParam1, &Var0))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_602(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		__LIB_19__::func_597(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		__LIB_19__::func_597(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		__LIB_19__::func_597(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		__LIB_19__::func_597(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		__LIB_19__::func_597(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		__LIB_19__::func_597(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		__LIB_19__::func_597(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		__LIB_19__::func_597(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		__LIB_19__::func_597(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		__LIB_19__::func_597(-1, iParam0);
	}
}

int func_603(int iParam0)
{
	return __LIB_19__::func_519(0, __LIB_9__::func_813(iParam0), 1);
}

int func_604(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = __LIB_14__::func_455(iVar1);
		iVar0 = (iVar0 + __LIB_19__::func_523(iVar2, iParam0));
		iVar1++;
	}
	return iVar0;
}

void func_605(int iParam0, int iParam1)
{
	int iVar0;
	__LIB_19__::func_535(iParam0, &(Global_40.f_4942[iParam0 /*60*/].f_11[iParam1 /*3*/]));
	if (__LIB_0__::func_30(Global_40.f_4942[iParam0 /*60*/].f_11[iParam1 /*3*/]))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < iParam1)
		{
		}
		else if (iVar0 < 9 && __LIB_0__::func_30(Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/]))
		{
			Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 /*3*/] = Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/];
			Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 /*3*/].f_1 = Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/].f_1;
			Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 /*3*/].f_2 = Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/].f_2;
			__LIB_3__::func_34(iParam0, iVar0, __LIB_3__::func_33(iParam0, iVar0 + 1));
			__LIB_3__::func_32(&(Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/]));
			__LIB_3__::func_34(iParam0, iVar0 + 1, 0);
		}
		iVar0++;
	}
}

void func_606(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eOutputItem");
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eCost");
	iVar2 = iVar0;
	ATTRIBUTE::_0xD962F8579D702DB5();
	if (__LIB_0__::func_144(iVar2, 0) && __LIB_12__::func_566(iVar2, uParam0->f_52))
	{
		uParam0->f_37 = -1;
		uParam0->f_20 = 0;
		uParam0->f_77 = iVar2;
		uParam0->f_78 = iVar1;
		__LIB_1__::func_748(uParam0[1], 1, 1);
		iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iNumCostVariants");
		if (iVar3 > 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "variantVisible", 1);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_39, "variantText", MISC::_CREATE_VAR_STRING(0, uParam0->f_77));
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_39, "variantCount", iVar3);
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iCurCostVariant");
			iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iIndex");
			if (iVar5 >= 0 && iVar5 < Global_1911914)
			{
				iVar6 = Global_1911914[iVar5 /*9*/].f_8;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_39, "variantIndex", (iVar4 + 1 - iVar6));
			uParam0->f_79 = 1;
			__LIB_1__::func_221((*uParam0)[5], 1, 1);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "variantVisible", 0);
			uParam0->f_79 = 0;
			__LIB_1__::func_221((*uParam0)[5], 0, 1);
		}
		uParam0->f_53 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(__LIB_12__::func_146(uParam0->f_77), __LIB_12__::func_147(uParam0->f_77)) * 1000f));
		uParam0->f_80 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "bFireCrafting");
		uParam0->f_73 = *uParam1;
		(*uParam0)[1] = __LIB_4__::func_864("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		__LIB_19__::func_536(uParam0, uParam0->f_77, uParam0->f_78);
		__LIB_1__::func_522((*uParam0)[1], 11, 1, 1);
		if (Global_1911914.f_1579 || !__LIB_1__::func_114(uParam0->f_77, uParam0->f_78, 1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "RPGDescription", __LIB_12__::func_148(iVar2));
			__LIB_18__::func_966(uParam0, 0);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "RPGDescription", 0);
		}
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription"))
		{
			if (Global_1911914.f_1579 || !__LIB_1__::func_114(uParam0->f_77, uParam0->f_78, 1))
			{
				__LIB_18__::func_513(uParam0);
			}
		}
	}
}

void func_607(var uParam0)
{
	ATTRIBUTE::_0xD962F8579D702DB5();
	__LIB_16__::func_752(uParam0);
	__LIB_12__::func_138(uParam0);
	__LIB_12__::func_149(uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription", 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowIngredients", 0);
	uParam0->f_77 = 0;
	uParam0->f_78 = 0;
	__LIB_19__::func_536(uParam0, 0, 0);
	__LIB_16__::func_753(uParam0, 9);
}

int func_608(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<16> Var5;
	int iVar21;
	struct<7> Var22;
	struct<2> Var29;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return -1;
	}
	if (!__LIB_19__::func_537(iParam0, iParam1, 0, 0, 0, 1))
	{
		return -1;
	}
	Var0 = { __LIB_1__::func_615(iParam0, 1, 0) };
	if (__LIB_1__::func_761(iParam0, &Var0, 1, 0, 1))
	{
		return -1;
	}
	Var5 = { __LIB_12__::func_169(iParam0, Var0, Var0.f_4, 1) };
	Var5.f_13 = iParam1;
	Var5.f_12 = 1248274121;
	iVar21 = __LIB_1__::func_190(2113164098, &Var5, 1);
	if (iVar21 == -1)
	{
		return -1;
	}
	Var22.f_1 = 1;
	__LIB_12__::func_120(iVar21, Var22);
	Var29 = { __LIB_12__::func_168(iParam0) };
	STATS::_STAT_ID_INCREMENT_INT(&Var29, 1);
	return iVar21;
}

bool func_609(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	struct<37> Var18;
	int iVar65;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!Global_1911914.f_1579 && __LIB_1__::func_114(iParam0, iParam1, 1))
	{
		return false;
	}
	if (iParam1 == -214678071 || iParam1 == joaat("COST_CRAFTING_GRILL"))
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = __LIB_0__::func_372(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return false;
		}
		if (uParam2->f_32)
		{
			Var2 = { __LIB_0__::func_373(-1591664384, -1591664384, 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, iVar12, 0) };
			if (__LIB_0__::func_778(Var2, &iVar0, &iVar1, 0))
			{
				iVar13 = 0;
				while (iVar13 < iVar1)
				{
					iVar14 = __LIB_0__::func_374(iVar13, iVar0);
					if (iParam0 == iVar14)
					{
					}
					else if (!Global_1911914.f_1579 && __LIB_1__::func_114(iVar14, joaat("COST_CRAFTING_GRILL"), 1))
					{
					}
					else if (__LIB_19__::func_537(iVar14, joaat("COST_CRAFTING_GRILL"), 0, bParam3, 0, 0) && !__LIB_11__::func_426(iVar14, 1, 0))
					{
						__LIB_0__::func_375(iVar0);
						*iParam4 = iVar14;
						*iParam5 = joaat("COST_CRAFTING_GRILL");
						*iParam6 = iVar13;
						return true;
					}
					iVar13++;
				}
				__LIB_0__::func_375(iVar0);
			}
		}
		if (iParam1 == joaat("COST_CRAFTING_GRILL"))
		{
			Var2 = { __LIB_0__::func_373(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar12, 0) };
			if (__LIB_0__::func_778(Var2, &iVar0, &iVar1, 0))
			{
				iVar15 = 0;
				while (iVar15 < iVar1)
				{
					iVar16 = __LIB_0__::func_374(iVar15, iVar0);
					if (iParam0 == iVar16)
					{
					}
					else if (!Global_1911914.f_1579 && __LIB_1__::func_114(iVar16, -214678071, 1))
					{
					}
					else if (__LIB_19__::func_537(iVar16, -214678071, 0, bParam3, 0, 0) && !__LIB_11__::func_426(iVar16, 1, 0))
					{
						__LIB_0__::func_375(iVar0);
						*iParam4 = iVar16;
						*iParam5 = -214678071;
						*iParam6 = iVar15;
						return true;
					}
					iVar15++;
				}
				__LIB_0__::func_375(iVar0);
			}
		}
	}
	else
	{
		iVar17 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var18.f_4 = 15;
		Var18.f_36 = 10;
		iVar65 = 0;
		while (iVar65 < iVar17)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar65, &Var18))
			{
				if (Var18.f_2 == joaat("COST_TYPE_CRAFT"))
				{
					if (Var18 != -489628648 && (Global_1911914.f_1579 || !__LIB_1__::func_114(iParam0, Var18, 1)))
					{
						if (__LIB_19__::func_537(iParam0, Var18, 0, bParam3, 0, 0) && !__LIB_11__::func_426(iParam0, 1, 0))
						{
							*iParam4 = iParam0;
							*iParam5 = Var18;
							*iParam6 = iVar65;
							return true;
						}
					}
				}
			}
			iVar65++;
		}
	}
	return false;
}

bool func_610()
{
	var uVar0;
	if (((ENTITY::IS_ENTITY_DEAD(__LIB_0__::func_398(7)) || TASK::IS_PED_IN_WRITHE(__LIB_0__::func_398(7))) || __LIB_0__::func_636(Global_36, ENTITY::GET_ENTITY_COORDS(__LIB_0__::func_398(7), true, false)) > __LIB_1__::func_136(7)) && ((ENTITY::IS_ENTITY_DEAD(__LIB_0__::func_398(1)) || TASK::IS_PED_IN_WRITHE(__LIB_0__::func_398(1))) || __LIB_0__::func_636(Global_36, ENTITY::GET_ENTITY_COORDS(__LIB_0__::func_398(1), true, false)) > __LIB_1__::func_136(1)))
	{
		return false;
	}
	if (!__LIB_6__::func_272() && !__LIB_1__::func_187(68))
	{
		return false;
	}
	if (__LIB_0__::func_296(0, 0, 1))
	{
		if (!__LIB_2__::func_774(51))
		{
			return false;
		}
	}
	if (LAW::_0xAD401C63158ACBAA(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	uVar0 = 40;
	if (!__LIB_19__::func_540(&uVar0, 1, 1))
	{
		return false;
	}
	return true;
}

void func_611(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		__LIB_19__::func_543(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		__LIB_19__::func_543(iParam1, 1);
		__LIB_3__::func_871(iParam0);
	}
}

bool func_612(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	uVar0 = *uParam1;
	if (__LIB_19__::func_405(uParam0, uParam1, 0))
	{
		return true;
	}
	if (!__LIB_19__::func_8(uVar0, &iVar1))
	{
		return true;
	}
	if (uParam1->f_20 >= 5)
	{
		if (__LIB_17__::func_314(uParam0, 2) && iParam2 != 4)
		{
			__LIB_19__::func_548(uParam0, uParam1);
			return true;
		}
		else if ((uParam0->f_317 && __LIB_17__::func_314(uParam0, 1)) && iParam2 != 2)
		{
			__LIB_19__::func_548(uParam0, uParam1);
			return true;
		}
		if (iParam2 != 5)
		{
			if ((!uParam0->f_317 && __LIB_17__::func_314(uParam0, 1)) && iParam2 != 2)
			{
				__LIB_19__::func_548(uParam0, uParam1);
				return true;
			}
			if (__LIB_17__::func_314(uParam0, 4) && iParam2 != 3)
			{
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING((uParam0[iVar1 /*36*/])->f_3))
				{
					__LIB_19__::func_548(uParam0, uParam1);
					return true;
				}
			}
		}
	}
	switch (uParam1->f_20)
	{
		case 0:
			if ((uParam0[iVar1 /*36*/])->f_32)
			{
				uParam1->f_20 = 1;
			}
			else
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED((*uParam0)[iVar1 /*36*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE((*uParam0)[iVar1 /*36*/]);
				}
				uParam1->f_20 = 2;
			}
			return false;
		case 1:
			if (__LIB_4__::func_273(Global_35, (*uParam0)[iVar1 /*36*/], (uParam0[iVar1 /*36*/])->f_33, uParam1->f_12, &((uParam0[iVar1 /*36*/])->f_34), 1065353216 /* Float: 1f */, 1, 0, 1))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED((*uParam0)[iVar1 /*36*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE((*uParam0)[iVar1 /*36*/]);
				}
				else
				{
					uParam1->f_20 = 2;
				}
			}
			return false;
		case 2:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547((*uParam0)[iVar1 /*36*/], uParam1->f_12) && !ANIMSCENE::_0x0DF57F86FE71DBE5((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE((*uParam0)[iVar1 /*36*/], uParam1->f_12);
			}
			uParam1->f_20 = 3;
			return false;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				uParam1->f_20 = 4;
			}
			return false;
		case 4:
			if (!ANIMSCENE::_0x1F0E401031E20146((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL((*uParam0)[iVar1 /*36*/], uParam1->f_12, true);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_14))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL((*uParam0)[iVar1 /*36*/], uParam1->f_14, uParam1->f_13, false);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL((*uParam0)[iVar1 /*36*/], uParam1->f_16, uParam1->f_15, false);
				}
			}
			uParam1->f_20 = 5;
			return false;
		case 5:
			__LIB_19__::func_548(uParam0, uParam1);
			uParam1->f_20 = 6;
			return false;
		case 6:
			if (iParam2 != 5)
			{
				switch (uParam1->f_21)
				{
					case 0:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_18, 1))
						{
							return true;
						}
						break;
					case 1:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_18, 1) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
					case 2:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_19, 1))
						{
							return true;
						}
						break;
					case 3:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_19, 1) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
					case 4:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_19, 1) || ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_18, 1))
						{
							return true;
						}
						break;
					case 5:
						if ((ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_19, 1) || ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_18, 1)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED((*uParam0)[iVar1 /*36*/], false) || ANIMSCENE::_0x34A0671BE613D3D0((*uParam0)[iVar1 /*36*/]))
				{
					return true;
				}
			}
			else if (!__LIB_17__::func_314(uParam0, 8))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_613(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	__LIB_0__::func_798(iParam0);
	__LIB_0__::func_798(iParam0);
	__LIB_0__::func_507(iParam0, iParam1);
	__LIB_0__::func_508(iParam0, iParam1);
	__LIB_19__::func_550(iParam0, iParam1);
	iVar1 = __LIB_0__::func_398(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			__LIB_1__::func_177(iVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = PLAYER::_0x227B06324234FB09(iVar0, iVar1);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar1)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	iVar3 = __LIB_0__::func_398(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			__LIB_1__::func_177(iVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = PLAYER::_0x227B06324234FB09(iVar0, iVar3);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar3)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar3)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	__LIB_1__::func_643();
}

struct<2> func_614(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!__LIB_19__::func_551(iParam0, &uVar2))
	{
	}
	if (!__LIB_19__::func_552(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

void func_615(int iParam0, struct<2> Param1)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!__LIB_19__::func_553(iParam0, Param1))
	{
	}
	if (!__LIB_19__::func_554(iParam0, Param1.f_1))
	{
	}
}

bool func_616(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	uVar0 = *uParam1;
	if (__LIB_19__::func_413(uParam0, uParam1, 0))
	{
		return true;
	}
	if (!__LIB_19__::func_16(uVar0, &iVar1))
	{
		return true;
	}
	if (uParam1->f_20 >= 5)
	{
		if (__LIB_17__::func_374(uParam0, 2) && iParam2 != 4)
		{
			__LIB_19__::func_560(uParam0, uParam1);
			return true;
		}
		else if ((uParam0->f_209 && __LIB_17__::func_374(uParam0, 1)) && iParam2 != 2)
		{
			__LIB_19__::func_560(uParam0, uParam1);
			return true;
		}
		if (iParam2 != 5)
		{
			if ((!uParam0->f_209 && __LIB_17__::func_374(uParam0, 1)) && iParam2 != 2)
			{
				__LIB_19__::func_560(uParam0, uParam1);
				return true;
			}
			if (__LIB_17__::func_374(uParam0, 4) && iParam2 != 3)
			{
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING((uParam0[iVar1 /*36*/])->f_3))
				{
					__LIB_19__::func_560(uParam0, uParam1);
					return true;
				}
			}
		}
	}
	switch (uParam1->f_20)
	{
		case 0:
			if ((uParam0[iVar1 /*36*/])->f_32)
			{
				uParam1->f_20 = 1;
			}
			else
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED((*uParam0)[iVar1 /*36*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE((*uParam0)[iVar1 /*36*/]);
				}
				uParam1->f_20 = 2;
			}
			return false;
		case 1:
			if (__LIB_4__::func_273(Global_35, (*uParam0)[iVar1 /*36*/], (uParam0[iVar1 /*36*/])->f_33, uParam1->f_12, &((uParam0[iVar1 /*36*/])->f_34), 1065353216 /* Float: 1f */, 1, 0, 1))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED((*uParam0)[iVar1 /*36*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE((*uParam0)[iVar1 /*36*/]);
				}
				else
				{
					uParam1->f_20 = 2;
				}
			}
			return false;
		case 2:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547((*uParam0)[iVar1 /*36*/], uParam1->f_12) && !ANIMSCENE::_0x0DF57F86FE71DBE5((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE((*uParam0)[iVar1 /*36*/], uParam1->f_12);
			}
			uParam1->f_20 = 3;
			return false;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				uParam1->f_20 = 4;
			}
			return false;
		case 4:
			if (!ANIMSCENE::_0x1F0E401031E20146((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL((*uParam0)[iVar1 /*36*/], uParam1->f_12, true);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_14))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL((*uParam0)[iVar1 /*36*/], uParam1->f_14, uParam1->f_13, false);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL((*uParam0)[iVar1 /*36*/], uParam1->f_16, uParam1->f_15, false);
				}
			}
			uParam1->f_20 = 5;
			return false;
		case 5:
			__LIB_19__::func_560(uParam0, uParam1);
			uParam1->f_20 = 6;
			return false;
		case 6:
			if (iParam2 != 5)
			{
				switch (uParam1->f_21)
				{
					case 0:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_18, 1))
						{
							return true;
						}
						break;
					case 1:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_18, 1) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
					case 2:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_19, 1))
						{
							return true;
						}
						break;
					case 3:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_19, 1) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
					case 4:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_19, 1) || ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_18, 1))
						{
							return true;
						}
						break;
					case 5:
						if ((ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_19, 1) || ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_18, 1)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED((*uParam0)[iVar1 /*36*/], false) || ANIMSCENE::_0x34A0671BE613D3D0((*uParam0)[iVar1 /*36*/]))
				{
					return true;
				}
			}
			else if (!__LIB_17__::func_374(uParam0, 8))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_617(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		__LIB_19__::func_563(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		__LIB_19__::func_563(iParam1, 1);
		__LIB_3__::func_871(iParam0);
	}
}

void func_618(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (__LIB_1__::func_707(__LIB_1__::func_35(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				__LIB_19__::func_573(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				__LIB_19__::func_574(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

int func_619(int iParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	uVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	bVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2 != false;
	if (bVar2)
	{
		__LIB_19__::func_581(iVar0, uVar1);
	}
	else
	{
		__LIB_19__::func_582(iVar0, uVar1);
	}
	return -2;
}

int func_620(int iParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	uVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	bVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2 != false;
	if (bVar2)
	{
		__LIB_19__::func_583(iVar0, uVar1);
	}
	else
	{
		__LIB_19__::func_584(iVar0, uVar1);
	}
	return -2;
}

void func_621(int iParam0, var uParam1)
{
	if (__LIB_19__::func_293(iParam0, 1))
	{
		__LIB_13__::func_808(iParam0->f_7);
		if (!__LIB_13__::func_727(iParam0, 47))
		{
			__LIB_4__::func_340(&(iParam0->f_284.f_21[2 /*17*/]));
			if (!__LIB_13__::func_727(iParam0, 62))
			{
				__LIB_4__::func_340(&(iParam0->f_284.f_21[1 /*17*/]));
			}
			if (!__LIB_13__::func_727(iParam0, 63))
			{
				__LIB_4__::func_340(&(iParam0->f_284.f_21[0 /*17*/]));
			}
		}
		if (iParam0->f_433 == 0)
		{
			__LIB_13__::func_832(&(iParam0->f_284), 0);
			__LIB_13__::func_724(iParam0, 50);
			__LIB_13__::func_730(iParam0, 63);
			__LIB_2__::func_478(Global_35, iParam0->f_7, "RE_HEC_UNI_V1_DEFUSE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			if (__LIB_13__::func_727(iParam0, 62))
			{
				__LIB_13__::func_831(&(iParam0->f_284), 1, 1);
			}
			if (__LIB_0__::func_75(&(iParam0->f_496)))
			{
				__LIB_0__::func_37(&(iParam0->f_496));
			}
			__LIB_13__::func_724(iParam0, 64);
		}
		else if (__LIB_13__::func_727(iParam0, 64))
		{
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
			{
				return;
			}
		}
		switch (iParam0->f_522)
		{
			case 0:
				if (__LIB_19__::func_294(iParam0, uParam1, iParam0->f_523))
				{
					__LIB_18__::func_661(iParam0, iParam0->f_523);
					iParam0->f_522 = 1;
				}
				break;
			case 1:
				if (__LIB_19__::func_295(iParam0, uParam1, iParam0->f_523))
				{
					iParam0->f_529 = __LIB_13__::func_739(iParam0->f_523, __LIB_13__::func_738(iParam0, iParam0->f_523));
					iParam0->f_522 = 2;
				}
				break;
			case 2:
				if (__LIB_19__::func_589(iParam0, uParam1, iParam0->f_523))
				{
					__LIB_1__::func_148(&(iParam0->f_496));
					iParam0->f_522 = 3;
				}
				break;
			case 3:
				if (!__LIB_0__::func_75(&(iParam0->f_496)))
				{
					__LIB_1__::func_148(&(iParam0->f_496));
				}
				else if (__LIB_1__::func_285(&(iParam0->f_496), __LIB_13__::func_740(iParam0->f_523)) || __LIB_18__::func_662(iParam0))
				{
					if (__LIB_13__::func_741(iParam0, iParam0->f_523))
					{
						if (!__LIB_2__::func_136(iParam0->f_7, 1))
						{
							iParam0->f_529 = __LIB_13__::func_739(iParam0->f_523, __LIB_13__::func_738(iParam0, iParam0->f_523));
							if (__LIB_0__::func_75(&(iParam0->f_496)))
							{
								__LIB_0__::func_37(&(iParam0->f_496));
							}
							if (__LIB_0__::func_75(&(iParam0->f_499)))
							{
								__LIB_0__::func_37(&(iParam0->f_499));
							}
							iParam0->f_519 = 0;
							iParam0->f_524 = 0;
							iParam0->f_522 = 2;
						}
					}
					else
					{
						iParam0->f_522 = 4;
					}
				}
				break;
			case 4:
				if (__LIB_13__::func_741(iParam0, iParam0->f_523))
				{
					iParam0->f_529 = __LIB_13__::func_739(iParam0->f_523, __LIB_13__::func_738(iParam0, iParam0->f_523));
					if (__LIB_0__::func_75(&(iParam0->f_496)))
					{
						__LIB_0__::func_37(&(iParam0->f_496));
					}
					if (__LIB_0__::func_75(&(iParam0->f_499)))
					{
						__LIB_0__::func_37(&(iParam0->f_499));
					}
					if (!__LIB_13__::func_727(iParam0, 57))
					{
						if (__LIB_0__::func_153(iParam0->f_7, 0, 1, 0) == joaat("WEAPON_MELEE_KNIFE"))
						{
							__LIB_13__::func_724(iParam0, 57);
						}
					}
					iParam0->f_519 = 0;
					iParam0->f_524 = 0;
					iParam0->f_522 = 2;
				}
				else if (__LIB_18__::func_662(iParam0) || __LIB_18__::func_663(iParam0, uParam1, iParam0->f_523))
				{
					if (!__LIB_13__::func_727(iParam0, 57))
					{
						if (__LIB_0__::func_153(iParam0->f_7, 0, 1, 0) == joaat("WEAPON_MELEE_KNIFE"))
						{
							__LIB_13__::func_724(iParam0, 57);
						}
					}
					__LIB_19__::func_296(iParam0);
					__LIB_19__::func_590(iParam0);
					if (PED::IS_PED_USING_ACTION_MODE(iParam0->f_7))
					{
						PED::SET_PED_USING_ACTION_MODE(iParam0->f_7, false, -1, 0);
						PED::SET_PED_USING_ACTION_MODE(iParam0->f_7, true, 4000, 0);
					}
					iParam0->f_522 = 0;
				}
				break;
		}
	}
}

void func_622(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		__LIB_19__::func_591(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		__LIB_19__::func_591(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		__LIB_19__::func_591(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		__LIB_19__::func_591(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		__LIB_19__::func_591(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		__LIB_19__::func_591(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		__LIB_19__::func_591(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		__LIB_19__::func_591(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		__LIB_19__::func_591(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		__LIB_19__::func_591(-1, iParam0);
	}
}

void func_623(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		__LIB_19__::func_592(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		__LIB_19__::func_592(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		__LIB_19__::func_592(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		__LIB_19__::func_592(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		__LIB_19__::func_592(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		__LIB_19__::func_592(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		__LIB_19__::func_592(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		__LIB_19__::func_592(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		__LIB_19__::func_592(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		__LIB_19__::func_592(-1, iParam0);
	}
}

void func_624(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		__LIB_19__::func_593(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		__LIB_19__::func_593(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		__LIB_19__::func_593(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		__LIB_19__::func_593(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		__LIB_19__::func_593(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		__LIB_19__::func_593(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		__LIB_19__::func_593(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		__LIB_19__::func_593(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		__LIB_19__::func_593(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		__LIB_19__::func_593(-1, iParam0);
	}
}

void func_625(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_15__::func_65(iParam1))
	{
		return;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	if (__LIB_12__::func_515(iParam1))
	{
		__LIB_19__::func_594(iParam0, iParam1);
		return;
	}
	if (__LIB_12__::func_516(iParam1))
	{
		__LIB_15__::func_909(iParam0, iParam1);
		return;
	}
	if (__LIB_12__::func_517(iParam1))
	{
		__LIB_15__::func_910(iParam0, iParam1);
		return;
	}
	if (__LIB_12__::func_518(iParam1))
	{
		__LIB_15__::func_911(iParam0, iParam1);
		return;
	}
	if (__LIB_12__::func_519(iParam1))
	{
		__LIB_19__::func_595(iParam0, iParam1);
		return;
	}
	if (__LIB_12__::func_520(iParam1))
	{
		__LIB_15__::func_912(iParam0, iParam1);
		return;
	}
	if (__LIB_12__::func_521(iParam1))
	{
		iVar0 = __LIB_12__::func_522();
		__LIB_19__::func_596(iParam0, iParam1, iVar0);
		return;
	}
}

void func_626(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	struct<2> Var9;
	struct<16> Var21;
	int iVar57;
	int iVar58;
	bool bVar59;
	vector3 vVar60;
	if (*uParam0 < 6 || *uParam0 > 16)
	{
		return;
	}
	if (__LIB_15__::func_239(uParam0, "cata_mp_stamp_ct"))
	{
		HUD::_0x9D37EB5003E0F2CF(HUD::GET_NAMED_RENDERTARGET_RENDER_ID("cata_mp_stamp_ct"), 1);
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 2f, 2f, 0, 0, 0, 255, false, true);
	}
	if (__LIB_15__::func_239(uParam0, "cata_mp_stamp_ab"))
	{
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false, true);
	}
	if (__LIB_15__::func_239(uParam0, "cata_mp_stamp_ma"))
	{
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 102, 255, 255, false, true);
	}
	bVar0 = __LIB_0__::func_2() == -1;
	Var9.f_1 = 10;
	Var21.f_3 = 10;
	Var21.f_15 = 10;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!__LIB_15__::func_240(uParam0, uParam0->f_436[iVar1 /*185*/]))
		{
		}
		else
		{
			iVar57 = 0;
			while (iVar57 < uParam0->f_436[iVar1 /*185*/].f_149)
			{
				iVar58 = uParam0->f_436[iVar1 /*185*/].f_136[iVar57 /*3*/];
				bVar59 = false;
				if (!__LIB_15__::func_374(iVar58))
				{
				}
				else
				{
					if (__LIB_0__::func_774(iVar58, 1048576) && ((__LIB_19__::func_514(iVar58, uParam0->f_220, &vVar3) && vVar3.z == 0) || __LIB_18__::func_881(uParam0, iVar58, 1)))
					{
						__LIB_15__::func_838(uParam0, iVar1, iVar57, 9);
					}
					if (__LIB_14__::func_739(iVar58))
					{
						vVar60.f_1 = -1;
						vVar60.f_2 = -1;
						vVar60 = { uParam0->f_436[iVar1 /*185*/].f_136[iVar57 /*3*/] };
						if (__LIB_18__::func_882(vVar60.y, vVar60.z))
						{
							bVar59 = true;
							__LIB_15__::func_838(uParam0, iVar1, iVar57, 7);
						}
					}
					else if (__LIB_18__::func_863(iVar58))
					{
						bVar59 = true;
						__LIB_15__::func_838(uParam0, iVar1, iVar57, 7);
					}
					if (!bVar59 && __LIB_19__::func_598(uParam0, iVar58))
					{
						__LIB_15__::func_838(uParam0, iVar1, iVar57, 12);
					}
					if (!bVar0)
					{
						if (__LIB_15__::func_241(iVar58))
						{
							__LIB_15__::func_838(uParam0, iVar1, iVar57, 11);
						}
						if (ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iVar58, &Var9))
						{
							iVar2 = 0;
							while (iVar2 < Var9)
							{
								if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_PRICE_MODIFIER_BY_KEY(Var9.f_1[iVar2], &Var21))
								{
									__LIB_15__::func_838(uParam0, iVar1, iVar57, __LIB_15__::func_242(Var21.f_1));
								}
								iVar2++;
							}
						}
					}
				}
				iVar57++;
			}
		}
		iVar1++;
	}
}

bool func_627(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<4> Var4;
	vector3 vVar8;
	if (!__LIB_14__::func_693(iParam1))
	{
		return false;
	}
	vVar8.f_1 = -1;
	vVar8.f_2 = -1;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(iParam1, iParam2, &Var4))
	{
		iVar0 = 0;
		while (iVar0 < Var4.f_3)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(iParam1, Var4, iVar0, &uVar3, &uVar1, &uVar2))
			{
				vVar8.x = uVar3;
				vVar8.f_1 = uVar2;
				vVar8.f_2 = uVar1;
				if (__LIB_19__::func_600(uParam0, vVar8) && !__LIB_12__::func_486(vVar8.x))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

bool func_628(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	iVar0 = __LIB_14__::func_782(&(uParam0->f_2031));
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return false;
	}
	iVar1 = __LIB_15__::func_376(iParam1, &(uParam0->f_2031));
	if (__LIB_14__::func_891(__LIB_15__::func_33(uParam0), iVar1, 1))
	{
		return true;
	}
	if (__LIB_14__::func_795(iVar1))
	{
		iVar2 = 0;
		__LIB_15__::func_52(uParam0, iVar1, &iVar2);
		return iVar2 > 0;
	}
	iVar3 = __LIB_14__::func_921(iParam1, &(uParam0->f_2031));
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 < iVar3)
	{
		vVar4 = { __LIB_15__::func_605(iParam1, iVar7, &(uParam0->f_2031)) };
		if (__LIB_0__::func_144(vVar4.x, 0))
		{
			if (__LIB_19__::func_600(uParam0, vVar4))
			{
				return true;
			}
		}
		iVar7++;
	}
	return false;
}

bool func_629(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bVar0 = false;
	if (__LIB_0__::func_192(iParam1, 930141731))
	{
		bVar0 = !UNLOCK::_UNLOCK_IS_UNLOCKED(iParam1);
	}
	bVar1 = !__LIB_1__::func_63(iParam1);
	bVar2 = __LIB_19__::func_601(iParam1, uParam0->f_3);
	bVar3 = ((bVar1 || bVar2) || bVar0);
	return bVar3;
}

bool func_630(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	struct<4> Var4;
	vector3 vVar8;
	*iParam3 = 0;
	if (!__LIB_14__::func_693(iParam1))
	{
		return false;
	}
	vVar8.f_1 = -1;
	vVar8.f_2 = -1;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(iParam1, iParam2, &Var4))
	{
		iVar0 = 0;
		while (iVar0 < Var4.f_3)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(iParam1, Var4, iVar0, &iVar3, &uVar1, &uVar2))
			{
				if (__LIB_0__::func_144(iVar3, 0))
				{
					vVar8.x = iVar3;
					vVar8.f_1 = uVar2;
					vVar8.f_2 = uVar1;
					if (__LIB_19__::func_600(uParam0, vVar8))
					{
						*iParam3 = iVar3;
						*iParam4 = uVar2;
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_631(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = __LIB_14__::func_782(&(uParam0->f_2031));
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	iVar4 = 0;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < iVar0)
	{
		iVar5 = __LIB_14__::func_921(iVar6, &(uParam0->f_2031));
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			vVar1 = { __LIB_15__::func_605(iVar6, iVar4, &(uParam0->f_2031)) };
			if (__LIB_0__::func_144(vVar1.x, 0))
			{
				if (__LIB_19__::func_600(uParam0, vVar1))
				{
					*iParam1++;
				}
			}
			iVar4++;
		}
		iVar6++;
	}
	return true;
}

void func_632(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_30(iParam1))
	{
		return;
	}
	iVar0 = -1;
	bVar1 = false;
	if (__LIB_6__::func_311(iParam0, iParam1, &iVar0, &bVar1))
	{
		if (bVar1)
		{
			__LIB_19__::func_535(iParam0, &(Global_40.f_4942[iParam0 /*60*/].f_8));
		}
		if (iVar0 != -1)
		{
			__LIB_19__::func_605(iParam0, iVar0);
		}
	}
}

void func_633(var uParam0, bool bParam1)
{
	__LIB_9__::func_987(uParam0);
	__LIB_12__::func_165(uParam0, 0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_39);
	if (__LIB_12__::func_112())
	{
		__LIB_12__::func_113(0);
	}
	if (bParam1)
	{
		__LIB_12__::func_114(uParam0);
		return;
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_17)))
	{
		HUD::_TEXT_DATABASE_DELETE(&(uParam0->f_17));
	}
	if (uParam0->f_22)
	{
		if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_63))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_63);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_65))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_65);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_66))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_66);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_67))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_67);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_68))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_68);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_69))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_69);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_70))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_70);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_71))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_71);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_72))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_72);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_85));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_86));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_87));
	}
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("satchel_textures");
	Global_1911914.f_1576 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_16__::func_753(uParam0, 16);
	}
	else
	{
		if (uParam0->f_8 == 11)
		{
			if (uParam0->f_21 == -1)
			{
				__LIB_19__::func_608(uParam0->f_77, uParam0->f_78);
				__LIB_18__::func_518(uParam0->f_77, uParam0->f_20);
			}
		}
		uParam0->f_21 = -1;
		__LIB_16__::func_753(uParam0, 0);
	}
}

void func_634(var uParam0, int iParam1)
{
	__LIB_12__::func_138(uParam0);
	__LIB_12__::func_149(uParam0);
	__LIB_19__::func_606(uParam0, &(iParam1->f_3));
}

void func_635(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char[] cVar8[8];
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	struct<2> Var18;
	int iVar40;
	int iVar41;
	struct<7> Var42;
	int iVar49;
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam3))
	{
		iParam1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam3, "iIndex");
	}
	iVar0 = Global_1911914[iParam1 /*9*/].f_1;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar0))
	{
		return;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eOutputItem");
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eCost");
	iVar3 = iVar1;
	iVar4 = iVar2;
	iVar5 = __LIB_18__::func_516(iVar3, iVar4, bParam2, 0);
	iVar6 = __LIB_1__::func_614(iVar3, 0, 0);
	iVar7 = __LIB_8__::func_959(iVar3, 0);
	if (iVar7 != -1)
	{
		iVar7 = (iVar7 - iVar6);
	}
	else
	{
		iVar7 = iVar5;
	}
	StringIntConCat(&cVar8, __LIB_0__::func_259(iVar7, iVar5), 8);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "count", &cVar8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "visible", 0);
	if (__LIB_0__::func_644(4096))
	{
		iVar9 = __LIB_0__::func_55(((iVar7 > 0 && iVar5 > 0) && __LIB_0__::func_372(iVar3, 1697966752) == 337650881), 1, 0);
	}
	else if (__LIB_0__::func_644(8192))
	{
		iVar9 = __LIB_0__::func_55(((iVar7 > 0 && iVar5 > 0) && iVar3 == joaat("CONSUMABLE_POTENT_PREDATOR_BAIT")), 1, 0);
	}
	else
	{
		iVar9 = __LIB_0__::func_55((iVar7 > 0 && iVar5 > 0), 1, 0);
	}
	bVar10 = false;
	if (iVar9 == 0 && __LIB_12__::func_157(iVar3))
	{
		if (__LIB_19__::func_609(iVar3, iVar4, uParam0, bParam2, &iVar11, &iVar12, &iVar13))
		{
			iVar9 = 1;
			bVar10 = true;
			if (bParam6)
			{
				iVar3 = iVar11;
				iVar4 = iVar12;
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", iVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eOutputItem", iVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eCost", iVar12);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "iCurCostVariant", iVar13);
				bParam5 = true;
			}
		}
	}
	if (!uParam0->f_31)
	{
		if ((iVar4 == -214678071 || iVar4 == joaat("COST_CRAFTING_GRILL")) || DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	else if (!uParam0->f_32 && iVar4 == joaat("COST_CRAFTING_GRILL"))
	{
		iVar9 = 0;
	}
	if (!Global_1911914.f_1579 && __LIB_1__::func_114(iVar3, iVar4, 1))
	{
		iVar9 = 0;
		iVar14 = 1;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "lockVisible", iVar14);
	if (iVar9 == 1)
	{
		if ((!uParam0->f_83 || uParam0->f_84 > 0) && __LIB_0__::func_372(iVar3, -1636519629) == -701492487)
		{
			Global_1911914[iParam1 /*9*/].f_2 = 0;
			iVar9 = 0;
		}
		else
		{
			Global_1911914[iParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		if (((uParam0->f_57 && iVar9 == 0) && Global_1911914[iParam1 /*9*/].f_2) && bParam4)
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_40, iVar0);
		}
		Global_1911914[iParam1 /*9*/].f_2 = 0;
	}
	if (bParam5)
	{
		if (__LIB_0__::func_457(iVar3, &Var15, joaat("INVENTORY"), 0, 0, 0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "texture", Var15);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "textureDictionary", Var15.f_1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", iVar3);
		Var18.f_1 = 20;
		iVar40 = 0;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", 0);
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar3, &Var18))
		{
			iVar41 = 0;
			while (iVar41 < Var18)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var18.f_1[iVar41], &Var42))
				{
					iVar49 = Var42.f_2;
					switch (Var42.f_1)
					{
						case -1104847406:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", iVar49);
							break;
						case 1857353317:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", iVar49);
							break;
						case -826379728:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", Var42.f_6);
							break;
						case 1342237631:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", Var42.f_6);
							break;
						case -943921969:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", iVar49);
							break;
						case -416929031:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", iVar49);
							break;
						case 1869697234:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", Var42.f_6);
							break;
						case 2062242710:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", Var42.f_6);
							break;
						case 381158954:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", iVar49);
							break;
						case 1681823811:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", iVar49);
							break;
						case -1191740624:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", Var42.f_6);
							break;
						case -1240225157:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", Var42.f_6);
							break;
						case 978049229:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", iVar49);
							break;
						case -778289619:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", Var42.f_6);
							break;
						case -1918697215:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", iVar49);
							break;
						case 1136630075:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", Var42.f_6);
							break;
						case 855745648:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", iVar49);
							break;
						case 1365603835:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", Var42.f_6);
							break;
						case 1497139093:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", Var42.f_6);
							break;
					}
				}
				iVar41++;
			}
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "overpower", iVar40);
	}
	if (!uParam0->f_31)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	if (bVar10 && !bParam6)
	{
		iVar9 = 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "enabled", iVar9);
}

void func_636(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	char cVar1[32];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<2> Var10;
	bool bVar13;
	char[] cVar14[8];
	int iVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	bool bVar42;
	int iVar43;
	struct<7> Var44;
	int iVar51;
	iVar0 = Global_1911914[iParam1 /*9*/].f_6;
	StringCopy(&cVar1, "r_", 32);
	StringIntConCat(&cVar1, iVar0, 32);
	StringIntConCat(&cVar1, iParam1, 32);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1911914[iParam1 /*9*/].f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1911914[iParam1 /*9*/].f_1);
	}
	iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_40, &cVar1);
	Global_1911914[iParam1 /*9*/].f_1 = iVar5;
	iVar6 = Global_1911914[iParam1 /*9*/].f_5;
	iVar7 = __LIB_18__::func_516(iVar0, iVar6, bParam3, 0);
	iVar8 = __LIB_1__::func_614(iVar0, 0, 0);
	iVar9 = __LIB_8__::func_959(iVar0, 0);
	if (iVar9 != -1)
	{
		iVar9 = (iVar9 - iVar8);
	}
	else
	{
		iVar9 = iVar7;
	}
	if (__LIB_0__::func_457(iVar0, &Var10, joaat("INVENTORY"), 0, 0, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "texture", Var10);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "textureDictionary", Var10.f_1);
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "name", iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eOutputItem", iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eCost", iVar6);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iIndex", iParam1);
	if (!Global_1911914.f_1579 && __LIB_1__::func_114(iVar0, iVar6, 1))
	{
		bVar13 = true;
		Global_1911914[iParam1 /*9*/].f_7 = 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iCurCostVariant", Global_1911914[iParam1 /*9*/].f_8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iNumCostVariants", Global_1911914[iParam1 /*9*/].f_7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "bFireCrafting", iVar6 == -257768755);
	StringIntConCat(&cVar14, __LIB_0__::func_259(iVar9, iVar7), 8);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "count", &cVar14);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "visible", false);
	bVar16 = false;
	if (__LIB_0__::func_644(4096))
	{
		iVar15 = __LIB_0__::func_55(((iVar9 > 0 && iVar7 > 0) && __LIB_0__::func_372(iVar0, 1697966752) == 337650881), 1, 0);
	}
	else if (__LIB_0__::func_644(8192))
	{
		iVar15 = __LIB_0__::func_55(((iVar9 > 0 && iVar7 > 0) && iVar0 == joaat("CONSUMABLE_POTENT_PREDATOR_BAIT")), 1, 0);
	}
	else
	{
		iVar15 = __LIB_0__::func_55(((iVar9 > 0 && iVar7 > 0) && !bVar13), 1, 0);
	}
	if (iVar15 == 0 && __LIB_12__::func_157(iVar0))
	{
		if (__LIB_19__::func_609(iVar0, iVar6, uParam0, bParam3, &iVar17, &iVar18, &iVar19))
		{
			iVar15 = 1;
			bVar16 = true;
			iVar0 = iVar17;
			iVar6 = iVar18;
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "name", iVar17);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eOutputItem", iVar17);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eCost", iVar18);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "iCurCostVariant", iVar19);
		}
	}
	if (!uParam0->f_31)
	{
		if ((iVar6 == -214678071 || iVar6 == joaat("COST_CRAFTING_GRILL")) || iVar6 == -257768755)
		{
			iVar15 = 0;
		}
	}
	else if (!uParam0->f_32 && iVar6 == joaat("COST_CRAFTING_GRILL"))
	{
		iVar15 = 0;
	}
	if (iVar15 == 1)
	{
		if ((!uParam0->f_83 || uParam0->f_84 > 0) && __LIB_0__::func_372(iVar0, -1636519629) == -701492487)
		{
			iVar15 = 0;
			Global_1911914[iParam1 /*9*/].f_2 = 0;
		}
		else
		{
			uParam0->f_59++;
			if (__LIB_12__::func_566(iVar0, uParam0->f_52))
			{
				uParam0->f_60++;
			}
			Global_1911914[iParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		Global_1911914[iParam1 /*9*/].f_2 = 0;
	}
	if (bVar16)
	{
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "lockVisible", bVar13);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "enabled", iVar15);
	Var20.f_1 = 20;
	bVar42 = false;
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaHorseDurationCategory", 0);
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar0, &Var20))
	{
		iVar43 = 0;
		while (iVar43 < Var20)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var20.f_1[iVar43], &Var44))
			{
				iVar51 = Var44.f_2;
				switch (Var44.f_1)
				{
					case -1104847406:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", iVar51);
						break;
					case 1857353317:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", iVar51);
						break;
					case -826379728:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeCoreDurationCategory", Var44.f_6);
						break;
					case 1342237631:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeDurationCategory", Var44.f_6);
						break;
					case -943921969:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", iVar51);
						break;
					case -416929031:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", iVar51);
						break;
					case 1869697234:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthDurationCategory", Var44.f_6);
						break;
					case 2062242710:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreDurationCategory", Var44.f_6);
						break;
					case 381158954:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", iVar51);
						break;
					case 1681823811:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", iVar51);
						break;
					case -1191740624:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreDurationCategory", Var44.f_6);
						break;
					case -1240225157:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaDurationCategory", Var44.f_6);
						break;
					case 978049229:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", iVar51);
						break;
					case -778289619:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthHorseDurationCategory", Var44.f_6);
						break;
					case -1918697215:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", iVar51);
						break;
					case 1136630075:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreHorseDurationCategory", Var44.f_6);
						break;
					case 855745648:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", iVar51);
						break;
					case 1365603835:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreHorseDurationCategory", Var44.f_6);
						break;
					case 1497139093:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaHorseDurationCategory", Var44.f_6);
						break;
				}
			}
			iVar43++;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "overpower", bVar42);
	if (bParam2)
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_40, -1, -2047994727, iVar5);
	}
}

void func_637(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		__LIB_19__::func_611(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		__LIB_19__::func_611(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		__LIB_19__::func_611(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		__LIB_19__::func_611(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		__LIB_19__::func_611(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		__LIB_19__::func_611(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		__LIB_19__::func_611(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		__LIB_19__::func_611(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		__LIB_19__::func_611(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		__LIB_19__::func_611(-1, iParam0);
	}
}

void func_638(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(&(Global_40.f_1095.f_1[iParam0 /*436*/]), "", 64);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = -15;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = 0;
	__LIB_0__::func_497(&Var0);
	__LIB_19__::func_615(iParam0, Var0);
	__LIB_1__::func_2(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	__LIB_0__::func_498(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	__LIB_0__::func_499(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	__LIB_0__::func_500(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		__LIB_0__::func_501(iVar2, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iVar2 /*4*/]));
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		__LIB_0__::func_502(iVar3, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iVar3 /*4*/]));
		iVar3++;
	}
	__LIB_0__::func_503(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	__LIB_0__::func_504(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	__LIB_0__::func_505(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = 0f;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_431 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_432 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = 0;
	Global_1900383[iParam0 /*45*/] = 0;
	Global_1900383[iParam0 /*45*/].f_1 = 0;
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	Global_1900383[iParam0 /*45*/].f_19 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_22 = 0f;
	Global_1900383[iParam0 /*45*/].f_23 = 0;
	Global_1900383[iParam0 /*45*/].f_24 = 0;
	Global_1900383[iParam0 /*45*/].f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	Global_1900383[iParam0 /*45*/].f_27 = 0;
	Global_1900383[iParam0 /*45*/].f_28 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_31 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_34 = 0f;
	Global_1900383[iParam0 /*45*/].f_35 = 0;
	Global_1900383[iParam0 /*45*/].f_36 = 0;
	Global_1900383[iParam0 /*45*/].f_37 = 0;
	Global_1900383[iParam0 /*45*/].f_38 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_41 = 0;
	Global_1900383[iParam0 /*45*/].f_42 = 0;
	Global_1900383[iParam0 /*45*/].f_43 = 0;
	Global_1900383[iParam0 /*45*/].f_44 = -1;
}

void func_639(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		__LIB_19__::func_617(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		__LIB_19__::func_617(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		__LIB_19__::func_617(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		__LIB_19__::func_617(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		__LIB_19__::func_617(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		__LIB_19__::func_617(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		__LIB_19__::func_617(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		__LIB_19__::func_617(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		__LIB_19__::func_617(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		__LIB_19__::func_617(-1, iParam0);
	}
}

void func_640(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_19__::func_575(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_19__::func_618(iParam0, iParam1, 1, 0);
		}
	}
}

bool func_641(var uParam0, int iParam1, int iParam2)
{
	struct<6> Var0;
	bool bVar7;
	int iVar8;
	int iVar9;
	if (!__LIB_14__::func_693(iParam1))
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam1, iParam2, &Var0))
	{
		if (Var0.f_5 > 0)
		{
			bVar7 = false;
			iVar8 = -1;
			iVar9 = 0;
			while (iVar9 < Var0.f_5)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(iParam1, iParam2, iVar9, &iVar8))
				{
					if (!__LIB_19__::func_627(uParam0, iParam1, iVar8))
					{
						bVar7 = true;
					}
					else
					{
						iVar9++;
					}
					if (!bVar7)
					{
						return true;
					}
					return false;
				}
			}
		}
	}
}

bool func_642(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	iVar0 = 0;
	iVar0 = __LIB_14__::func_782(&(uParam0->f_2031));
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_14__::func_814(iVar1, &(uParam0->f_2031), &uVar3))
		{
			if (!__LIB_19__::func_628(uParam0, iVar1))
			{
			}
			else
			{
				if (iVar2 == iParam1)
				{
					*iParam2 = iVar1;
					return true;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
	return false;
}

bool func_643(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	int iVar7;
	int iVar8;
	var uVar9;
	*iParam3 = 0;
	if (!__LIB_14__::func_693(iParam1))
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam1, iParam2, &Var0))
	{
		if (Var0.f_5 > 0)
		{
			iVar7 = -1;
			iVar8 = 0;
			while (iVar8 < Var0.f_5)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(iParam1, iParam2, iVar8, &iVar7))
				{
					if (__LIB_19__::func_630(uParam0, iParam1, iVar7, iParam3, &uVar9))
					{
						return true;
					}
				}
				iVar8++;
			}
		}
	}
	return false;
}

int func_644(var uParam0, var uParam1)
{
	int iVar0;
	int iVar4;
	int iVar5;
	var uVar6;
	iVar4 = 0;
	iVar4 = __LIB_14__::func_782(&(uParam0->f_2031));
	if (iVar4 < 0)
	{
		return 0;
	}
	else if (!__LIB_14__::func_814(0, &(uParam0->f_2031), &iVar0))
	{
		return 0;
	}
	if (!__LIB_19__::func_630(uParam0, __LIB_15__::func_33(uParam0), iVar0, &iVar5, &uVar6))
	{
		return 0;
	}
	if (!__LIB_0__::func_144(iVar5, 0))
	{
		return 0;
	}
	*uParam1 = __LIB_19__::func_360(uParam0, iVar5);
	uParam1->f_7 = iVar5;
	return 1;
}

bool func_645(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bVar2 = __LIB_12__::func_171();
	iVar0 = uParam0->f_55;
	while (iVar0 <= (Global_1911914.f_1576 - 1))
	{
		__LIB_19__::func_635(uParam0, iVar0, bVar2, 0, 1, 0, 1);
		if (iVar1 >= 50)
		{
			uParam0->f_55 = iVar0 + 1;
			return false;
		}
		iVar1++;
		iVar0++;
	}
	uParam0->f_61 = 0;
	uParam0->f_55 = 0;
	return true;
}

void func_646(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	struct<37> Var19;
	int iVar66;
	int iVar67;
	int iVar68;
	ATTRIBUTE::_0xD962F8579D702DB5();
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_73))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iCurCostVariant");
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iNumCostVariants");
		bVar2 = false;
		if (uParam0->f_78 == -214678071 || uParam0->f_78 == joaat("COST_CRAFTING_GRILL"))
		{
			if (bParam1)
			{
				iVar0++;
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
			if (iVar0 < 0)
			{
				iVar0 = (iVar1 - 1);
			}
			else if (iVar0 >= iVar1)
			{
				iVar0 = 0;
			}
			Var5 = -1;
			Var5.f_1 = -1;
			Var5.f_2 = -1;
			Var5.f_3 = -1;
			Var5.f_4 = -1;
			Var5.f_5 = -1;
			Var5.f_6 = -1;
			Var5.f_7 = -1;
			Var5.f_8 = -1;
			if (iVar0 == 0)
			{
				Var5 = { __LIB_0__::func_373(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, __LIB_0__::func_372(uParam0->f_77, 1697966752), 0) };
				if (__LIB_0__::func_778(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						uParam0->f_78 = -214678071;
						uParam0->f_77 = __LIB_0__::func_374(0, iVar3);
						bVar2 = true;
					}
					__LIB_0__::func_375(iVar3);
				}
			}
			else
			{
				Var5 = { __LIB_0__::func_373(-1591664384, -1591664384, 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, __LIB_0__::func_372(uParam0->f_77, 1697966752), 0) };
				if (__LIB_0__::func_778(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						if (iVar0 == 1)
						{
							iVar15 = 2127114599;
						}
						else if (iVar0 == 2)
						{
							iVar15 = -1864584831;
						}
						else if (iVar0 == 3)
						{
							iVar15 = 1967571132;
						}
						iVar16 = 0;
						while (iVar16 < iVar4)
						{
							iVar17 = __LIB_0__::func_374(iVar16, iVar3);
							if (__LIB_0__::func_192(iVar17, iVar15))
							{
								uParam0->f_78 = joaat("COST_CRAFTING_GRILL");
								uParam0->f_77 = iVar17;
								bVar2 = true;
							}
							else
							{
								iVar16++;
							}
						}
					}
					__LIB_0__::func_375(iVar3);
				}
			}
		}
		else
		{
			iVar18 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(uParam0->f_77);
			Var19.f_4 = 15;
			Var19.f_36 = 10;
			while (((Var19.f_2 != joaat("COST_TYPE_CRAFT") || Var19 == -489628648) || (!Global_1911914.f_1579 && __LIB_1__::func_114(uParam0->f_77, Var19, 1))) && iVar66 < iVar18)
			{
				iVar66++;
				if (bParam1)
				{
					iVar0++;
				}
				else
				{
					iVar0 = (iVar0 - 1);
				}
				if (iVar0 < 0)
				{
					iVar0 = (iVar18 - 1);
				}
				else if (iVar0 >= iVar18)
				{
					iVar0 = 0;
				}
				if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(uParam0->f_77, iVar0, &Var19))
				{
				}
			}
			uParam0->f_78 = Var19;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_73, "eCost", uParam0->f_78);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_73, "eOutputItem", uParam0->f_77);
		iVar67 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iIndex");
		if (iVar67 >= 0 && iVar67 < Global_1911914)
		{
			iVar68 = Global_1911914[iVar67 /*9*/].f_8;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_73, "iCurCostVariant", iVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_39, "variantIndex", (iVar0 + 1 - iVar68));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_39, "variantText", MISC::_CREATE_VAR_STRING(0, uParam0->f_77));
		uParam0->f_37 = -1;
		uParam0->f_20 = 0;
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription"))
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_77, 1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "RPGDescription", __LIB_12__::func_148(uParam0->f_77));
		__LIB_19__::func_635(uParam0, -1, __LIB_12__::func_171(), uParam0->f_73, 0, bVar2, 0);
		__LIB_19__::func_536(uParam0, uParam0->f_77, uParam0->f_78);
	}
}

void func_647(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	iVar0 = Global_1911914[iParam2 /*9*/].f_6;
	if (bParam4 || __LIB_12__::func_566(iVar0, uParam0->f_52))
	{
		if (bParam1)
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1911914[iParam2 /*9*/].f_1))
			{
				if (bParam5)
				{
					__LIB_19__::func_635(uParam0, -1, bParam3, Global_1911914[iParam2 /*9*/].f_1, 1, 0, 1);
				}
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_40, uParam0->f_56, -2047994727, Global_1911914[iParam2 /*9*/].f_1);
			}
			else
			{
				__LIB_19__::func_636(uParam0, iParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1911914[iParam2 /*9*/].f_1))
			{
				DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1911914[iParam2 /*9*/].f_1);
			}
			__LIB_19__::func_636(uParam0, iParam2, 0, bParam3);
		}
		if (uParam0->f_56 == 0)
		{
			uParam0->f_75 = Global_1911914[iParam2 /*9*/].f_6;
			uParam0->f_76 = Global_1911914[iParam2 /*9*/].f_5;
			uParam0->f_74 = Global_1911914[iParam2 /*9*/].f_1;
		}
		uParam0->f_56++;
	}
}

int func_648(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	if (!__LIB_19__::func_642(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
		return -1;
	}
	return __LIB_15__::func_376(iVar0, &(uParam0->f_2031));
}

bool func_649(var uParam0)
{
	int iVar0;
	int iVar1;
	uParam0->f_2031.f_74 = __LIB_15__::func_385(uParam0);
	iVar0 = 0;
	if (!__LIB_19__::func_642(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
		return false;
	}
	if (__LIB_14__::func_814(iVar0, &(uParam0->f_2031), &iVar1))
	{
		__LIB_14__::func_796(uParam0, __LIB_15__::func_386(uParam0, iVar1));
		__LIB_15__::func_387(uParam0, 0, 1);
		__LIB_15__::func_898(uParam0, 0);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_650(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	uParam0->f_2031.f_75 = 0;
	iVar1 = 0;
	iVar1 = __LIB_14__::func_782(&(uParam0->f_2031));
	if (iVar1 > 0)
	{
		iVar0 = 1;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (__LIB_14__::func_814(iVar2, &(uParam0->f_2031), &iVar3))
			{
				if (!__LIB_19__::func_628(uParam0, iVar2))
				{
				}
				else
				{
					uParam0->f_2031.f_75++;
				}
			}
			iVar2++;
		}
		if (uParam0->f_2031.f_74 >= uParam0->f_2031.f_75)
		{
			uParam0->f_2031.f_74 = (uParam0->f_2031.f_75 - 1);
		}
		if (__LIB_19__::func_642(uParam0, uParam0->f_2031.f_74, &iVar2))
		{
			if (__LIB_14__::func_814(iVar2, &(uParam0->f_2031), &iVar3))
			{
				__LIB_14__::func_796(uParam0, __LIB_15__::func_386(uParam0, iVar3));
			}
		}
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_50, "CategoryCount", uParam0->f_2031.f_75);
	uParam0->f_2031.f_56 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_50, __LIB_14__::func_890(), 0);
	return iVar0;
}

bool func_651(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	int iVar7;
	*iParam2 = 0;
	iVar0 = 0;
	if (!__LIB_19__::func_642(uParam0, iParam1, &iVar0))
	{
		return false;
	}
	iVar1 = __LIB_14__::func_782(&(uParam0->f_2031));
	if (iVar1 <= 0)
	{
		return false;
	}
	if (iVar0 >= iVar1 || iVar0 < 0)
	{
		return false;
	}
	vVar2.f_1 = -1;
	vVar2.f_2 = -1;
	iVar5 = 0;
	iVar7 = __LIB_15__::func_376(iVar0, &(uParam0->f_2031));
	if (__LIB_14__::func_891(__LIB_15__::func_33(uParam0), iVar7, 1))
	{
		if (!__LIB_19__::func_631(uParam0, iParam2))
		{
			return false;
		}
	}
	else if (__LIB_14__::func_795(iVar7))
	{
		if (!__LIB_15__::func_52(uParam0, iVar7, iParam2))
		{
			return false;
		}
	}
	else
	{
		iVar6 = __LIB_14__::func_921(iVar0, &(uParam0->f_2031));
		if (iVar6 <= 0)
		{
		}
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			vVar2 = { __LIB_15__::func_605(iVar0, iVar5, &(uParam0->f_2031)) };
			if (__LIB_0__::func_144(vVar2.x, 0))
			{
				if (__LIB_19__::func_600(uParam0, vVar2))
				{
					*iParam2++;
				}
			}
			iVar5++;
		}
	}
	return true;
}

void func_652(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemWeather");
	iVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "OutfitWeather");
	if (bParam2)
	{
		iVar3 = iParam1;
		iVar4 = __LIB_15__::func_33(uParam0);
		if (!__LIB_19__::func_643(uParam0, iVar4, iVar3, &iVar0))
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "Visible", false);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "Visible", false);
			return;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (__LIB_0__::func_357(iVar0) == -999503751)
	{
		iVar5 = __LIB_15__::func_686(iVar0);
		if (iVar5 == -1 || (iVar0 == joaat("CLOTHING_CUSTOM_ONE_OUTFIT") && __LIB_0__::func_604() != joaat("CLOTHING_CUSTOM_ONE_OUTFIT")))
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "Visible", false);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "Visible", true);
			DATABINDING::_DATABINDING_ADD_DATA_INT(iVar2, "Effectiveness", iVar5);
		}
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "Visible", false);
	}
	else
	{
		iVar6 = __LIB_14__::func_858(iVar0);
		if (iVar6 == -1)
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "Visible", false);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "Visible", true);
			DATABINDING::_DATABINDING_ADD_DATA_INT(iVar1, "Warmth", iVar6);
		}
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "Visible", false);
	}
}

int func_653(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	if (!__LIB_19__::func_642(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
		return -1;
	}
	return iVar0;
}

bool func_654(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bVar2 = __LIB_12__::func_171();
	iVar0 = uParam0->f_55;
	while (iVar0 <= (Global_1911914.f_1576 - 1))
	{
		if (__LIB_0__::func_144(Global_1911914[iVar0 /*9*/].f_6, 0))
		{
			__LIB_19__::func_647(uParam0, 0, iVar0, bVar2, 1, 0);
			if (iVar1 >= 30)
			{
				uParam0->f_55 = iVar0 + 1;
				return false;
			}
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_55 = 0;
	if (uParam0->f_60 == 0)
	{
		uParam0->f_57 = 0;
	}
	uParam0->f_56 = 0;
	return true;
}

bool func_655(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bVar2 = __LIB_12__::func_171();
	iVar0 = uParam0->f_55;
	while (iVar0 <= (Global_1911914.f_1576 - 1))
	{
		if ((uParam0->f_57 && Global_1911914[iVar0 /*9*/].f_2) || !uParam0->f_57)
		{
			if (Global_1911914.f_1585 != 0)
			{
				bVar3 = __LIB_0__::func_192(Global_1911914[iVar0 /*9*/].f_6, Global_1911914.f_1585);
				if (uParam0->f_81 == bVar3)
				{
				}
				else
				{
					__LIB_19__::func_647(uParam0, 1, iVar0, bVar2, 0, bParam1);
					if (iVar1 >= 50)
					{
						uParam0->f_55 = iVar0 + 1;
						return false;
					}
					iVar1++;
				}
				iVar0++;
				uParam0->f_55 = 0;
				if (!uParam0->f_81 && Global_1911914.f_1585 != 0)
				{
					uParam0->f_81 = 1;
					return false;
				}
				uParam0->f_56 = 0;
				uParam0->f_81 = 0;
				return true;
			}
		}
	}
}

void func_656(var uParam0, int iParam1)
{
	struct<4> Var0;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	uParam0->f_148.f_1697 = iParam1;
	if (__LIB_0__::func_356(iParam1) == joaat("WEAPON_MOD"))
	{
		if (__LIB_0__::func_192(iParam1, 1844906744))
		{
			vVar4.f_1 = -1;
			vVar4.f_2 = -1;
			iVar8 = __LIB_19__::func_648(uParam0);
			if (__LIB_14__::func_874(__LIB_0__::func_81(&(uParam0->f_2031)), iVar8, &Var0))
			{
				iVar7 = 0;
				while (iVar7 < Var0.f_3)
				{
					vVar4 = { __LIB_14__::func_875(iVar7, Var0, &(uParam0->f_2031)) };
					if (vVar4.x != iParam1 && __LIB_0__::func_144(vVar4.x, 0))
					{
						if (__LIB_0__::func_356(vVar4.x) == joaat("WEAPON_MOD"))
						{
							if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(uParam0->f_148.f_1281, vVar4.x))
							{
								__LIB_15__::func_940(uParam0->f_148.f_1281, vVar4.x);
							}
						}
					}
					iVar7++;
				}
			}
		}
		else if (!WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(uParam0->f_148.f_1281, iParam1))
		{
			__LIB_15__::func_941(uParam0->f_148.f_1281, iParam1, -1);
		}
	}
}

void func_657(var uParam0, int iParam1)
{
	struct<4> Var0;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<9> Var10;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	uParam0->f_148.f_1697 = iParam1;
	if (__LIB_0__::func_356(iParam1) == joaat("WEAPON_DECORATION"))
	{
		if (__LIB_0__::func_192(iParam1, 1844906744))
		{
			vVar4.f_1 = -1;
			vVar4.f_2 = -1;
			Var10 = -1;
			Var10.f_1 = -1;
			Var10.f_2 = -1;
			Var10.f_3 = -1;
			Var10.f_4 = -1;
			Var10.f_5 = -1;
			Var10.f_6 = -1;
			Var10.f_7 = -1;
			Var10.f_8 = -1;
			iVar8 = __LIB_19__::func_648(uParam0);
			if (__LIB_14__::func_874(__LIB_0__::func_81(&(uParam0->f_2031)), iVar8, &Var0))
			{
				iVar7 = 0;
				while (iVar7 < Var0.f_3)
				{
					vVar4 = { __LIB_14__::func_875(iVar7, Var0, &(uParam0->f_2031)) };
					if (vVar4.x != iParam1 && __LIB_0__::func_144(vVar4.x, 0))
					{
						iVar9 = __LIB_19__::func_360(uParam0, vVar4.x);
						if (iVar9 == 1702073444 && iVar8 == 1154588893)
						{
							Var10.f_8 = vVar4.y;
							iVar20 = 0;
							iVar21 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var10, &iVar20, 1);
							if (iVar21 != -1)
							{
								iVar22 = 0;
								while (iVar22 < iVar20)
								{
									iVar23 = __LIB_0__::func_374(iVar22, iVar21);
									if ((__LIB_0__::func_144(iVar23, 0) && iVar23 != iParam1) && ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(iVar23, vVar4.y) == 820817022)
									{
										if (!__LIB_0__::func_192(iVar23, 1844906744) && WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(uParam0->f_148.f_1281, iVar23))
										{
											__LIB_15__::func_940(uParam0->f_148.f_1281, iVar23);
										}
									}
									iVar22++;
								}
								ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar21);
							}
						}
						else if (iVar9 == 777890122 || iVar9 == -1502467280)
						{
							if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(uParam0->f_148.f_1281, vVar4.x))
							{
								__LIB_15__::func_940(uParam0->f_148.f_1281, vVar4.x);
							}
						}
					}
					iVar7++;
				}
			}
		}
		else if (!WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(uParam0->f_148.f_1281, iParam1))
		{
			__LIB_15__::func_941(uParam0->f_148.f_1281, iParam1, -1);
		}
		if (__LIB_0__::func_357(iParam1) == -858682577)
		{
			iVar24 = 0;
			while (iVar24 < uParam0->f_148.f_1281.f_206)
			{
				if (uParam0->f_148.f_1281.f_3[iVar24] != 0)
				{
					if (__LIB_0__::func_192(uParam0->f_148.f_1281.f_3[iVar24], 832439839) && WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(uParam0->f_148.f_1281, uParam0->f_148.f_1281.f_3[iVar24]))
					{
						__LIB_15__::func_940(uParam0->f_148.f_1281, uParam0->f_148.f_1281.f_3[iVar24]);
					}
				}
				iVar24++;
			}
		}
	}
}

void func_658(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_15__::func_907(-999503751);
	if (iVar0 != 0)
	{
		if (__LIB_14__::func_795(__LIB_19__::func_648(uParam0)))
		{
			__LIB_15__::func_387(uParam0, -1, 1);
		}
		__LIB_15__::func_916(iVar0, 1, 1);
	}
}

int func_659(var uParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_19__::func_650(uParam0))
	{
	}
	iVar0 = 0;
	if (!__LIB_19__::func_651(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	return 1;
}

int func_660(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_19__::func_650(uParam0))
	{
	}
	iVar0 = 0;
	if (!__LIB_19__::func_651(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	if (__LIB_14__::func_870(uParam0))
	{
		iVar1 = __LIB_14__::func_871(uParam0);
		__LIB_19__::func_652(uParam0, iVar1, 0);
	}
	else
	{
		__LIB_14__::func_806(uParam0);
	}
	return 1;
}

int func_661(var uParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_19__::func_650(uParam0))
	{
	}
	iVar0 = 0;
	if (!__LIB_19__::func_651(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	__LIB_15__::func_406(uParam0, 0);
	return 1;
}

int func_662(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_19__::func_650(uParam0))
	{
	}
	iVar0 = 0;
	if (!__LIB_19__::func_651(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	iVar1 = __LIB_14__::func_824(uParam0);
	iVar2 = __LIB_14__::func_825(uParam0);
	__LIB_15__::func_414(uParam0, iVar2, iVar1, iVar1, 0, 1);
	if (uParam0->f_2 == 25)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_50, "ShavingSplitterVisible", false);
	}
	return 1;
}

int func_663(var uParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_19__::func_650(uParam0))
	{
	}
	iVar0 = 0;
	if (!__LIB_19__::func_651(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_68))
	{
		INVENTORY::_0x75CFAC49301E134F(uParam0->f_2031.f_68, 0, 0);
	}
	else
	{
		uParam0->f_2031.f_68 = INVENTORY::_0x9D21B185ABC2DBC4(uParam0->f_2031.f_50, "Effects", 0, 0);
	}
	__LIB_15__::func_406(uParam0, 0);
	return 1;
}

int func_664(var uParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_19__::func_650(uParam0))
	{
	}
	iVar0 = 0;
	if (!__LIB_19__::func_651(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_68))
	{
		INVENTORY::_0x75CFAC49301E134F(uParam0->f_2031.f_68, 0, 0);
	}
	else
	{
		uParam0->f_2031.f_68 = INVENTORY::_0x9D21B185ABC2DBC4(uParam0->f_2031.f_50, "Effects", 0, 0);
	}
	return 1;
}

int func_665(var uParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_19__::func_650(uParam0))
	{
	}
	iVar0 = 0;
	if (!__LIB_19__::func_651(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_64))
	{
		uParam0->f_2031.f_64 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2031.f_50, "ItemRecipeTextList");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_64);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_65))
	{
		uParam0->f_2031.f_65 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2031.f_50, "ItemRecipeImageList");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_65);
	}
	__LIB_14__::func_884(uParam0, 0);
	__LIB_14__::func_885(uParam0, 0);
	__LIB_14__::func_886(uParam0, 1);
	return 1;
}

int func_666(var uParam0, bool bParam1)
{
	int iVar0;
	if (!bParam1)
	{
		if (!__LIB_19__::func_650(uParam0))
		{
		}
	}
	iVar0 = 0;
	if (!__LIB_19__::func_651(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	return 1;
}

int func_667(var uParam0, var uParam1)
{
	var uVar0;
	struct<9> Var1;
	int iVar11;
	int iVar12;
	var uVar13;
	int iVar14;
	struct<17> Var15;
	int iVar32;
	int iVar33;
	int iVar34;
	uVar0 = uParam1->f_1;
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = -1;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_7 = -1;
	Var1.f_8 = -1;
	Var1.f_8 = uVar0;
	iVar11 = 0;
	iVar12 = 0;
	iVar12 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var1, &iVar11, 1);
	if (iVar12 == -1)
	{
		return 0;
	}
	iVar14 = __LIB_19__::func_653(uParam0);
	iVar33 = 0;
	iVar33 = 0;
	while (iVar33 < iVar11)
	{
		iVar32 = __LIB_0__::func_374(iVar33, iVar12);
		if (__LIB_0__::func_144(iVar32, 0))
		{
			iVar34 = __LIB_19__::func_360(uParam0, iVar32);
			if (iVar34 == 1702073444)
			{
			}
			else
			{
				Var15 = { *uParam1 };
				Var15.f_9 = iVar32;
				Var15 = iVar34;
				if (__LIB_15__::func_745(&(uParam0->f_2031), iVar32, &uVar13))
				{
					uParam0->f_2031.f_74 = uVar13;
				}
				else if (ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(iVar32, uVar0) == -2089472884)
				{
				}
			else
			{
				}
				else
				{
					Stack.Push(uParam0);
					Stack.Push(&Var15);
					Call_Loc(uParam0->f_2031.f_123);
					if (StackVal)
					{
					}
					if (uParam0->f_2031.f_113)
					{
						Stack.Push(uParam0);
						Stack.Push(&Var15);
						Call_Loc(uParam0->f_2031.f_114);
						if (!StackVal)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar33++;
	}
	uParam0->f_2031.f_74 = iVar14;
	ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar12);
	return 1;
}

void func_668(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = iParam2;
	if (__LIB_0__::func_144(iVar0, 0) && __LIB_0__::func_192(iVar0, -393037696))
	{
		__LIB_14__::func_760(uParam0, iParam2);
		__LIB_14__::func_796(uParam0, iParam2);
	}
	else
	{
		__LIB_14__::func_797(uParam0);
		__LIB_14__::func_796(uParam0, __LIB_19__::func_648(uParam0));
	}
}

int func_669(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = __LIB_14__::func_694(0);
	if (__LIB_0__::func_144(iVar0, 0))
	{
		if (!__LIB_0__::func_192(iVar0, 265372629))
		{
			__LIB_14__::func_794(uParam0, 1);
			__LIB_15__::func_406(uParam0, __LIB_14__::func_452(iVar0));
			bVar1 = __LIB_15__::func_391(0);
			if (__LIB_15__::func_40(0) == -2056428614)
			{
				bVar1 = true;
			}
			__LIB_14__::func_793(uParam0, bVar1);
		}
		else
		{
			__LIB_14__::func_794(uParam0, 0);
		}
		iVar2 = __LIB_15__::func_40(0);
		switch (iVar2)
		{
			case -348190488:
				__LIB_19__::func_652(uParam0, iVar0, 1);
				break;
			case -853534656:
			case 761079318:
			case 1942587409:
			case 2077448405:
				__LIB_19__::func_652(uParam0, iVar0, 0);
				break;
			default:
				__LIB_14__::func_806(uParam0);
				break;
		}
		if (iVar2 == 1942587409 && __LIB_7__::func_439())
		{
			__LIB_15__::func_405(uParam0, -476745902);
		}
		else
		{
			__LIB_14__::func_804(uParam0, 0);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_670(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	struct<2> Var4[15];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return false;
	}
	__LIB_14__::func_904(uParam0->f_2, &iVar0);
	if (!__LIB_15__::func_51(iParam1, iVar0))
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_64))
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_64);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_65))
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_65);
	}
	if (__LIB_0__::func_976(iParam1, iVar0, &Var4, &iVar35, 1, 0))
	{
		iVar39 = 0;
		iVar38 = 0;
		while (iVar38 < iVar35)
		{
			iVar40 = Var4[iVar38 /*2*/];
			if ((__LIB_0__::func_144(iVar40, 0) && iVar40 != joaat("CURRENCY_CASH")) && iVar40 != joaat("CURRENCY_GOLD_BAR"))
			{
				if (uParam0->f_2 == 18 || uParam0->f_2 == 19)
				{
					iVar41 = __LIB_14__::func_849(uParam0->f_2);
					iVar42 = __LIB_5__::func_998(iVar41);
					iVar39 = __LIB_0__::func_800(iVar40, __LIB_0__::func_949(1), iVar42, 0);
				}
				else
				{
					iVar39 = ((__LIB_12__::func_143(iVar40) + __LIB_12__::func_177(7, iVar40)) + __LIB_0__::func_800(iVar40, __LIB_0__::func_949(1), 1084182731, 0));
				}
				iVar36 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_64, __LIB_1__::func_72(iVar40));
				DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar36, "itemName", MISC::_CREATE_VAR_STRING(32, 1097941440 /* GXTEntry: "~1~ x ~2~" */, Var4[iVar38 /*2*/].f_1, MISC::_CREATE_VAR_STRING(0, __LIB_0__::func_776(iVar40))));
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar36, "enabled", iVar39 >= Var4[iVar38 /*2*/].f_1);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_2031.f_64, -1, "recipeListItem", iVar36);
				iVar37 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_65, __LIB_1__::func_72(iVar40));
				vVar1 = { __LIB_14__::func_999(iVar40) };
				DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar37, "textureDictionary", vVar1.y);
				DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar37, "texture", vVar1.x);
				DATABINDING::_DATABINDING_ADD_DATA_INT(iVar37, "count", iVar39);
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar37, "visible", true);
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar37, "enabled", iVar39 >= Var4[iVar38 /*2*/].f_1);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_2031.f_65, -1, "recipeImageItem", iVar37);
			}
			iVar38++;
		}
	}
	__LIB_15__::func_406(uParam0, __LIB_14__::func_452(iParam1));
	__LIB_14__::func_794(uParam0, 1);
	__LIB_19__::func_652(uParam0, iParam1, 0);
	return true;
}

void func_671(var uParam0, int iParam1, var uParam2)
{
	struct<9> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	uParam0->f_148.f_1697 = iParam1;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_8 = uParam2;
	iVar10 = 0;
	iVar11 = 0;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var0, &iVar10, 1);
	if (iVar11 == -1)
	{
		return;
	}
	iVar14 = 0;
	while (iVar14 < iVar10)
	{
		iVar13 = __LIB_0__::func_374(iVar14, iVar11);
		if ((__LIB_0__::func_144(iVar13, 0) && iVar13 != iParam1) && (__LIB_15__::func_745(&(uParam0->f_2031), iVar13, &uVar15) || ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(iVar13, uParam2) == -2089472884))
		{
			iVar12 = __LIB_19__::func_360(uParam0, iVar13);
			switch (iVar12)
			{
				case 777890122:
					__LIB_19__::func_656(uParam0, iVar13);
					break;
				case -1502467280:
					__LIB_19__::func_657(uParam0, iVar13);
					break;
			}
		}
		iVar14++;
	}
	ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar11);
}

int func_672(var uParam0, var uParam1)
{
	int iVar0;
	if (uParam1->f_10 == 1)
	{
		__LIB_19__::func_658(uParam0);
		if (__LIB_0__::func_357(uParam1->f_7) == -2061583405 || __LIB_0__::func_357(uParam1->f_7) == -525676072)
		{
			__LIB_0__::func_945();
		}
		iVar0 = __LIB_14__::func_738(uParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return 0;
		}
		__LIB_1__::func_467(1, 1, 0);
		__LIB_16__::func_22(joaat("CLOTHING_CUSTOM_ONE_OUTFIT"));
		__LIB_14__::func_711(iVar0, 1);
		__LIB_0__::func_660(iVar0);
	}
	return 1;
}

int func_673(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 1)
	{
		__LIB_19__::func_658(uParam0);
		__LIB_1__::func_467(1, 1, 0);
		__LIB_16__::func_22(joaat("CLOTHING_CUSTOM_ONE_OUTFIT"));
	}
	return 1;
}

int func_674(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	__LIB_19__::func_658(uParam0);
	if (__LIB_0__::func_2() == -1)
	{
		iVar0 = __LIB_0__::func_449(iParam1);
		if (iVar0 == -1)
		{
			iVar0 = 0;
		}
		__LIB_0__::func_828(Global_40.f_7729, 4096);
		Global_40.f_7729 = iVar0;
		Global_1905941 = Global_40.f_7729;
		__LIB_0__::func_806(Global_40.f_7729, 4096);
	}
	if (__LIB_0__::func_156(32768))
	{
		__LIB_0__::func_945();
	}
	__LIB_1__::func_443(-1, 0, 1, 1, 1, 0);
	iVar1 = __LIB_14__::func_738(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	__LIB_14__::func_711(iVar1, 1);
	__LIB_0__::func_660(iVar1);
	__LIB_16__::func_22(iParam1);
	return 1;
}

int func_675(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = uParam1->f_9;
	uParam0->f_148.f_1697 = iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_148.f_1281))
	{
		if (uParam1->f_11 == 310306577)
		{
			__LIB_18__::func_869(&(uParam0->f_148.f_1281), 0, 1);
		}
		else if (uParam1->f_11 != -2144266389)
		{
			__LIB_18__::func_869(&(uParam0->f_148.f_1281), 1, 1);
		}
	}
	switch (*uParam1)
	{
		case 777890122:
			__LIB_19__::func_656(uParam0, iVar0);
			break;
		case -1502467280:
			__LIB_19__::func_657(uParam0, iVar0);
			break;
		case 1702073444:
			__LIB_19__::func_671(uParam0, iVar0, uParam1->f_13);
			break;
		default:
			uParam0->f_148.f_1697 = 0;
			break;
	}
	return 1;
}

int func_676(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 1)
	{
		return __LIB_19__::func_674(uParam0, uParam1->f_7);
	}
	return 1;
}
