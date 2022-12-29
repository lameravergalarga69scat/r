bool func_0(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (__LIB_1__::func_373(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_1(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return __LIB_0__::func_272(iParam0, iParam1);
}

int func_2(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (__LIB_1__::func_357(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (__LIB_1__::func_358(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<5> func_3(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	Var0 = { __LIB_0__::func_949(bParam1) };
	Var0.f_4 = 1084182731;
	switch (__LIB_0__::func_356(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { __LIB_0__::func_429(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { __LIB_1__::func_117(bParam1) };
			if (bParam2 && __LIB_0__::func_950(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!__LIB_1__::func_542(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!__LIB_1__::func_542(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (__LIB_1__::func_429(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -813824107;
			Var0 = { __LIB_1__::func_118(bParam1) };
			switch (__LIB_0__::func_357(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
			if (__LIB_0__::func_793(iParam0, -1823706425))
			{
				Var0 = { __LIB_0__::func_429(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (__LIB_0__::func_793(iParam0, -1483207246))
			{
				Var0 = { __LIB_0__::func_429(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!__LIB_0__::func_464(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

bool func_4(int iParam0, int iParam1)
{
	return (iParam0->f_96 && iParam1) != 0;
}

bool func_5()
{
	return Global_1415398.f_1;
}

void func_6(int iParam0)
{
	Global_1415398.f_1 = iParam0;
}

bool func_7()
{
	return Global_1392040.f_6;
}

bool func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 11:
			return true;
		default:
			break;
	}
	return false;
}

char* func_9(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GAORP";
		case 1:
		case 2:
		case 36:
			return "GALOA";
		case 3:
		case 4:
		case 38:
			return "GAOWA";
		case 5:
		case 35:
			return "GAOBT";
		case 6:
			return "GAOBB";
		case 42:
			return "GAOBB";
		case 7:
		case 41:
			return "GAOBA";
		case 8:
		case 40:
			return "GAORR";
		case 9:
		case 10:
		case 37:
			return "GAROA";
		case 11:
			return "GALPC";
		case 12:
			return "GALOA";
		case 13:
			return "GAEWB";
		case 14:
			return "GAEWT";
		case 15:
			return "GALBT";
		case 16:
			return "GAHCA";
		case 17:
		case 39:
			return "GAROR";
		case 18:
			return "GAIFA";
		case 19:
			return "GAIFA";
		case 21:
			return "GAMFA";
		case 20:
			return "GAMHA";
		case 23:
			return "GAMBA";
		case 22:
			return "GAMRA";
		case 24:
			return "GASBF";
		case 25:
			return "GATLA";
		case 28:
			return "GASLA";
		case 26:
			return "GASRA";
		case 27:
			return "GASFA";
		case 29:
			return "GALHA";
		case 30:
			return "GALHA";
		case 31:
			return "GABCA";
		case 32:
			return "GABSA";
		case 33:
			return "GABRA";
		case 34:
			return "GAGNR";
		case 43:
			return "GAPTO";
		default:
			break;
	}
	return "";
}

void func_10(var uParam0)
{
	Global_1393447.f_49 = -1;
}

void func_11()
{
	if (Local_15.f_95 <= 8)
	{
		Local_15.f_20 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_15.f_209, true);
		if (Local_15.f_21 == 0f || Local_15.f_21 > Local_15.f_20)
		{
			Local_15.f_21 = Local_15.f_20;
		}
		return;
	}
	if (Local_15.f_18 < 0)
	{
		Local_15.f_20 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_15.f_209, true);
		if (Local_15.f_21 == 0f || Local_15.f_21 > Local_15.f_20)
		{
			Local_15.f_21 = Local_15.f_20;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_15[Local_15.f_18]))
	{
		Local_15.f_9[Local_15.f_18] = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(Local_15[Local_15.f_18], false, true));
	}
	Local_15.f_18++;
	if (Local_15.f_18 >= Local_15.f_215)
	{
		Local_15.f_18 = -1;
	}
}

var func_12(int iParam0)
{
	return Global_40.f_9632[iParam0 /*4*/];
}

bool func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 36:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 38:
			return true;
		case 5:
			return true;
		case 35:
			return true;
		case 6:
			return true;
		case 42:
			return true;
		case 7:
			return true;
		case 41:
			return true;
		case 9:
			return true;
		case 10:
			return true;
		case 37:
			return true;
		case 8:
			return true;
		case 40:
			return true;
		case 11:
			return true;
		case 12:
			return true;
		case 13:
			return true;
		case 14:
			return true;
		case 16:
			return true;
		case 15:
			return true;
		case 17:
			return true;
		case 39:
			return true;
		case 18:
			return true;
		case 19:
			return true;
		case 20:
			return true;
		case 23:
			return true;
		case 22:
			return true;
		case 21:
			return true;
		case 24:
			return true;
		case 25:
			return true;
		case 28:
			return true;
		case 26:
			return true;
		case 27:
			return true;
		case 29:
			return true;
		case 30:
			return true;
		case 31:
			return true;
		case 32:
			return true;
		case 33:
			return true;
		case 34:
			return true;
		case 43:
			return true;
		default:
			break;
	}
	return false;
}

bool func_14(int iParam0)
{
	int iVar0;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 20)
	{
		return true;
	}
	if (iVar0 < 5)
	{
		return true;
	}
	return false;
}

bool func_15(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return false;
	}
	return true;
}

int func_16()
{
	return joaat("META_OUTFIT_DEFAULT");
}

int func_17(int iParam0)
{
	return joaat("G_M_M_UNIBANDITOS_01");
}

float func_18(int iParam0)
{
	return 0f;
}

void func_19(int iParam0)
{
	char* sVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
	{
		sVar0 = "wagon_block_honor";
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, sVar0, true);
		}
	}
}

void func_20(var uParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
	DECORATOR::DECOR_SET_INT(iParam1, "HorseScriptCreator", SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("GANG_ODRISCOLLS");
		case 2:
			return joaat("GANG_LEMOYNE_RAIDERS");
		case 1:
			return joaat("GANG_MURFREE_BROOD");
		case 4:
			return joaat("GANG_LARAMIE");
		case 3:
			return joaat("GANG_SKINNER_BROS");
		case 5:
			return joaat("GANG_DEL_LOBOS");
		case 10:
			return joaat("LAW_PROFESSIONAL");
		default:
			break;
	}
	return joaat("AGGRESSIVE_TOWNSFOLK");
}

void func_22(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_0xBB1E41DD3D3C6250(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

void func_23(var uParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

void func_24(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "bValidRobber", true);
	}
	else if (DECORATOR::DECOR_EXIST_ON(iParam0, "bValidRobber"))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "bValidRobber", false);
	}
}

bool func_25(int iParam0, int iParam1, int iParam2)
{
	return (iParam0->f_97[iParam1] && iParam2) != 0;
}

bool func_26(int iParam0, int iParam1, int iParam2)
{
	return (iParam0->f_106[iParam1] && iParam2) != 0;
}

bool func_27(int iParam0, int iParam1)
{
	return (iParam0->f_2 && iParam1) != 0;
}

void func_28(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_106[iParam1] = (iParam0->f_106[iParam1] || iParam2);
}

void func_29(int iParam0)
{
	Global_1310750.f_16035 = (Global_1310750.f_16035 || iParam0);
}

void func_30(float fParam0)
{
	int iVar0;
	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237.f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237.f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return joaat("GANG_BANDITOS");
		case 2:
			return joaat("GANG_EXCONFED");
		case 1:
			return joaat("GANG_INBRED");
		case 0:
			return joaat("GANG_ODRISCOLL");
		case 4:
			return joaat("GANG_RANCHERS");
		case 3:
			return joaat("GANG_SAVAGES");
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_32(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

bool func_33(int iParam0)
{
	switch (Local_15.f_151)
	{
		case 24:
		case 26:
		case 27:
			return true;
	}
	return false;
}

float func_34(int iParam0)
{
	float fVar0;
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 16:
		case 36:
		case 38:
			fVar0 = 45f;
			break;
		case 11:
			fVar0 = 15f;
			break;
		case 0:
			fVar0 = 70f;
			break;
		case 12:
			fVar0 = 2f;
			break;
		case 13:
			fVar0 = 55f;
			break;
		case 14:
		case 26:
			fVar0 = 50f;
			break;
		case 33:
			fVar0 = 85f;
			break;
		case 31:
		case 32:
			fVar0 = 50f;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 15:
		case 17:
		case 22:
		case 27:
		case 29:
		case 30:
		case 34:
		case 35:
		case 39:
		case 40:
		case 41:
		case 42:
			fVar0 = 10f;
			break;
		case 9:
		case 10:
		case 37:
			fVar0 = 92.5f;
			break;
		case 18:
		case 19:
		case 20:
			fVar0 = 50f;
			break;
		case 23:
			fVar0 = 3f;
			break;
		case 21:
			fVar0 = 80f;
			break;
		case 24:
			fVar0 = 86f;
			break;
		case 25:
			fVar0 = 100f;
			break;
		case 28:
			fVar0 = 65f;
			break;
		default:
			fVar0 = 180f;
			break;
	}
	return fVar0;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 2:
			return 2;
		case 36:
			return 2;
		case 9:
			return 2;
		case 10:
			return 2;
		case 37:
			return 2;
		case 0:
			return 1;
		case 16:
			return 3;
		case 11:
			return 1;
		case 20:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 24:
			return 1;
		case 34:
			return 3;
		case 43:
			return 6;
		default:
			break;
	}
	return 2;
}

bool func_36(int iParam0)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	Var2 = { __LIB_0__::func_14(joaat("TOTAL_PLAYING_TIME")) };
	if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
	{
		iVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
		if (iVar1 >= Global_40.f_9632[iParam0 /*4*/].f_3)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_37()
{
	if (Local_15.f_151 != 11)
	{
		return true;
	}
	if (Local_15.f_221 == 2)
	{
		return false;
	}
	return true;
}

bool func_38(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 16:
		case 36:
		case 79:
		case 114:
		case 118:
		case 125:
		case 127:
		case 129:
			return true;
		default:
			break;
	}
	return false;
}

bool func_39(int iParam0, int iParam1, int iParam2)
{
	return (iParam0->f_115[iParam1] && iParam2) != 0;
}

float func_40(int iParam0)
{
	return iParam0->f_24;
}

void func_41(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6)
{
	uParam0->f_5 = iParam1;
	uParam0->f_21 = fParam2;
	uParam0->f_22 = fParam3;
	uParam0->f_23 = fParam4;
	uParam0->f_24 = fParam5;
	uParam0->f_17 = iParam6;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 75;
		case 2:
			return 50;
		case 1:
			return 50;
		case 3:
			return 35;
		case 4:
			return 35;
		case 5:
			return 50;
		default:
			break;
	}
	return 0;
}

void func_43(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		__LIB_0__::func_516(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_44(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("HORSE_CLASS_RIDING"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_RIDING"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_DRAFT"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_DRAFT"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_RACE"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_RACE"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_WAR"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_WAR"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_WORK"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_WORK"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		default:
			break;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_RIDING"), 0, joaat("SPECIES_HORSE"), true, false, 0f, 0f, 0f);
}

int func_45(int iParam0, int iParam1, int iParam2)
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam1, iParam2, 3f, 0.25f, -1f);
	return 1;
}

int func_46(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return 720;
				case 2:
					return 720;
				case 36:
					return 720;
				case 5:
				case 35:
					return 720;
				case 6:
				case 42:
					return 720;
				case 9:
					return 720;
				case 10:
					return 720;
				case 37:
					return 720;
				case 12:
					return 720;
				case 13:
					return 720;
				case 14:
					return 720;
				case 15:
					return 720;
				case 16:
					return 720;
				case 18:
					return 720;
				case 31:
					return 720;
				case 34:
					return 720;
				case 43:
					return 20;
				default:
					break;
			}
			return 3600;
		case 1:
			switch (iParam0)
			{
				case 43:
					return 20;
				default:
					break;
			}
			return 180;
	}
	return 180;
}

bool func_47(var uParam0, int iParam1)
{
	return (uParam0->f_17 && iParam1) != 0;
}

void func_48(var uParam0, int iParam1)
{
	uParam0->f_17 = (uParam0->f_17 || iParam1);
}

bool func_49(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam0, Global_36))
	{
		return true;
	}
	return false;
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(uParam0->f_1), 2);
	}
	else
	{
		__LIB_1__::func_336(&(uParam0->f_1), 2);
	}
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(uParam0->f_1), 8);
	}
	else
	{
		__LIB_1__::func_336(&(uParam0->f_1), 8);
	}
}

void func_52(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(uParam0->f_1), 1);
	}
	else
	{
		__LIB_1__::func_336(&(uParam0->f_1), 1);
	}
}

bool func_53(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return (Global_1393237.f_11[iParam0 /*30*/].f_10 && iParam1) != 0;
}

void func_54(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 = (Global_1393237.f_11[iParam0 /*30*/].f_10 || iParam1);
}

int func_55(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return ENTITY::_0xBA2A089E60ED1163(iParam1, iParam0, joaat("CURRENCY_CASH"), 0, 0);
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money"))
	{
		return 0;
	}
	*iParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_money");
	return 1;
}

void func_56(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

int func_57(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 2;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
		case 36:
			iVar0 = 2;
			break;
		case 3:
			iVar0 = 1;
			break;
		case 4:
			iVar0 = 2;
			break;
		case 38:
			iVar0 = 2;
			break;
		case 5:
			iVar0 = 2;
			break;
		case 35:
			iVar0 = 2;
			break;
		case 6:
			iVar0 = 2;
			break;
		case 42:
			iVar0 = 2;
			break;
		case 7:
			iVar0 = 2;
			break;
		case 41:
			iVar0 = 2;
			break;
		case 8:
			iVar0 = 2;
			break;
		case 40:
			iVar0 = 2;
			break;
		case 9:
			iVar0 = 1;
			break;
		case 10:
			iVar0 = 2;
			break;
		case 37:
			iVar0 = 2;
			break;
		case 11:
			iVar0 = 2;
			break;
		case 12:
			iVar0 = 1;
			break;
		case 13:
			iVar0 = 1;
			break;
		case 14:
			iVar0 = 1;
			break;
		case 15:
			iVar0 = 1;
			break;
		case 16:
			iVar0 = 1;
			break;
		case 17:
			iVar0 = 2;
			break;
		case 39:
			iVar0 = 2;
			break;
		case 18:
			iVar0 = 2;
			break;
		case 19:
			iVar0 = 1;
			break;
		case 20:
			iVar0 = 1;
			break;
		case 21:
			iVar0 = 1;
			break;
		case 22:
			iVar0 = 1;
			break;
		case 23:
			iVar0 = 2;
			break;
		case 24:
			iVar0 = 2;
			break;
		case 25:
			iVar0 = 1;
			break;
		case 26:
			iVar0 = 1;
			break;
		case 27:
			iVar0 = 1;
			break;
		case 28:
			iVar0 = 1;
			break;
		case 29:
			iVar0 = 2;
			break;
		case 30:
			iVar0 = 2;
			break;
		case 31:
			iVar0 = 1;
			break;
		case 32:
			iVar0 = 1;
			break;
		case 33:
			iVar0 = 2;
			break;
		case 34:
			iVar0 = 2;
			break;
		case 43:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_58(int iParam0)
{
	int iVar0;
	iVar0 = -1;
	if (iParam0 >= 0)
	{
		if (iParam0 <= 10)
		{
			iVar0 = 0;
		}
		else if (iParam0 <= 17)
		{
			iVar0 = 2;
		}
		else if (iParam0 <= 23)
		{
			iVar0 = 1;
		}
		else if (iParam0 <= 28)
		{
			iVar0 = 3;
		}
		else if (iParam0 <= 30)
		{
			iVar0 = 4;
		}
		else if (iParam0 <= 33)
		{
			iVar0 = 5;
		}
	}
	return iVar0;
}

int func_59()
{
	return Global_1393447.f_51;
}

void func_60(int iParam0, int iParam1)
{
	Global_40.f_9632.f_184[iParam1] = iParam0;
}

void func_61(int iParam0)
{
	Global_40.f_9632.f_196 = iParam0;
}

bool func_62(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return true;
		default:
			break;
	}
	return false;
}

void func_63(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 - (Global_1310750[iParam0 /*111*/].f_1 && iParam1));
}

bool func_64(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	if (PED::_IS_PED_HOGTIED(iParam1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam1, Global_35))
	{
		if (__LIB_1__::func_472(iParam1, 200f, (30f * 3f), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
		{
			return false;
		}
	}
	else if (__LIB_1__::func_472(iParam1, 200f, 30f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(iParam1, true)))
		{
			return false;
		}
	}
	return true;
}

bool func_65(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_66(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;
	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_67(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;
	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

void func_68(var uParam0, vector3 vParam1, float fParam4)
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam4;
}

bool func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 9:
		case 10:
		case 11:
		case 16:
		case 37:
			return false;
	}
	return true;
}

void func_70(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 4;
		case 5:
			return 4;
		case 1:
			return 4;
		case 10:
			return 5;
		default:
			break;
	}
	return 1;
}

char* func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_re@test";
		default:
			break;
	}
	return "";
}

void func_73(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			MAP::REMOVE_BLIP(iParam1);
		}
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
		*iParam1 = MAP::_BLIP_ADD_FOR_ENTITY(iParam2, iParam0);
		if (iParam3 != 0)
		{
			MAP::_BLIP_SET_MODIFIER(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			MAP::SET_BLIP_SPRITE(*iParam1, iParam4, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, sParam5);
		}
	}
}

var func_74(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

int func_75(int iParam0)
{
	return Global_40.f_9632.f_184[iParam0];
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 35;
		case 1:
		case 2:
			return 36;
		case 9:
		case 10:
			return 37;
		case 3:
		case 4:
			return 38;
		case 17:
			return 39;
		case 6:
			return 42;
		case 8:
			return 40;
		case 35:
			return 5;
		case 36:
			return 1;
		case 37:
			return 9;
		case 38:
			return 3;
		case 39:
			return 17;
		case 42:
			return 6;
		case 40:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 36:
		case 37:
		case 40:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_78(int iParam0)
{
	switch (iParam0)
	{
		case 36:
			return 2;
		case 37:
			return 10;
		case 38:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_79(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 9:
			return 10;
		case 3:
			return 4;
		case 2:
			return 1;
		case 10:
			return 9;
		case 4:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_80(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("GROUP_SHOTGUN"):
			bVar1 = __LIB_0__::func_214(joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
			bVar2 = __LIB_0__::func_214(joaat("WEAPON_SHOTGUN_SAWEDOFF"));
			if (!bVar1 && bVar2)
			{
				iParam0 = joaat("WEAPON_SHOTGUN_SAWEDOFF");
			}
			else if (bVar1 && !bVar2)
			{
				iParam0 = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
			}
			else
			{
				iParam0 = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
			}
			break;
		case joaat("GROUP_REVOLVER"):
			iParam0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
			break;
	}
	switch (iParam0)
	{
		case joaat("WEAPON_SHOTGUN_DOUBLEBARREL"):
			if (bParam1)
			{
				iVar0 = joaat("LO_GANG_INB_SHOTGUN_DOUBLEBARREL_EQUIPPED");
			}
			else
			{
				iVar0 = joaat("LO_GANG_INB_SHOTGUN_DOUBLEBARREL");
			}
			break;
		case joaat("WEAPON_SHOTGUN_SAWEDOFF"):
			if (bParam1)
			{
				iVar0 = joaat("LO_GANG_INB_SHOTGUN_SAWEDOFF_EQUIPPED");
			}
			else
			{
				iVar0 = joaat("LO_GANG_INB_SHOTGUN_SAWEDOFF");
			}
			break;
		case joaat("WEAPON_REVOLVER_CATTLEMAN"):
			if (bParam1)
			{
				iVar0 = joaat("LO_GANG_INB_REVOLVER_CATTLEMAN_EQUIPPED");
			}
			else
			{
				iVar0 = joaat("LO_GANG_INB_REVOLVER_CATTLEMAN");
			}
			break;
	}
	if (bParam1)
	{
		switch (iVar0)
		{
			case joaat("LO_GANG_INB_REVOLVER_CATTLEMAN"):
				iVar0 = joaat("LO_GANG_INB_REVOLVER_CATTLEMAN_EQUIPPED");
				break;
		}
	}
	return iVar0;
}

bool func_81(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = __LIB_0__::func_485();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_82(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = __LIB_0__::func_485();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_84()
{
	return Global_1310750.f_16077 != 0;
}

void func_85(int iParam0)
{
	Global_1393447.f_1 = iParam0;
}

bool func_86(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25f)
	{
		return false;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

int func_87(int iParam0)
{
	int iVar0;
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return 1;
	}
	return 0;
}

float func_88(int iParam0)
{
	return iParam0->f_26;
}

void func_89(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 134217728);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 134217728);
	}
}

float func_90(int iParam0)
{
	return iParam0->f_17;
}

bool func_91(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!__LIB_0__::func_27(*iParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*iParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_92(int iParam0)
{
	return iParam0->f_18;
}

float func_93(int iParam0)
{
	return iParam0->f_23;
}

int func_94(int iParam0)
{
	return iParam0->f_21;
}

int func_95(int iParam0)
{
	int iVar0;
	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (iParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*iParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_96(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

int func_97(int iParam0)
{
	return iParam0->f_20;
}

int func_98(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

void func_99(int iParam0, var uParam1)
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
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = uParam1;
}

void func_100(int iParam0, var uParam1)
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
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = uParam1;
}

void func_101(int iParam0, var uParam1)
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
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = uParam1;
}

int func_102(int iParam0)
{
	int iVar0;
	int iVar1;
	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (iParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630.f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_103(int iParam0)
{
	int iVar0;
	if (Global_1935630.f_38 == 0)
	{
		__LIB_0__::func_516(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					__LIB_1__::func_336(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_104(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(uParam0->f_1), 256);
	}
	else
	{
		__LIB_1__::func_336(&(uParam0->f_1), 256);
	}
}

void func_105(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(uParam0->f_1), 4);
	}
	else
	{
		__LIB_1__::func_336(&(uParam0->f_1), 4);
	}
}

bool func_106(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	if (__LIB_0__::func_138(*uParam0, 0f, 0f, 0f))
	{
		return true;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

void func_107(int iParam0, bool bParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_40.f_9632.f_177[iParam0]++;
	}
	Global_40.f_9632.f_195++;
	Global_40.f_9632.f_193 = iParam0;
	Global_17504.f_7 = 1;
	if (bParam1)
	{
		Global_40.f_9632.f_192 = __LIB_0__::func_23();
	}
}

bool func_108(int iParam0)
{
	if (((__LIB_0__::func_27(iParam0, 1) && __LIB_0__::func_27(iParam0, 2)) && __LIB_0__::func_27(iParam0, 8)) && __LIB_0__::func_27(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_109(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	fVar0 = __LIB_0__::func_665(iParam0, Global_35, 1, 1);
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (ENTITY::_0xC8CCDB712FBCBA92(iParam0))
		{
			return true;
		}
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_110(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(uParam0->f_1), 16384);
	}
	else
	{
		__LIB_1__::func_336(&(uParam0->f_1), 16384);
	}
}

void func_111(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(uParam0->f_1), 2048);
	}
	else
	{
		__LIB_1__::func_336(&(uParam0->f_1), 2048);
	}
}

void func_112(var uParam0)
{
	if (!__LIB_0__::func_75(uParam0))
	{
	}
	if (__LIB_0__::func_33(uParam0))
	{
		uParam0->f_1 = (__LIB_0__::func_36() - uParam0->f_2);
		uParam0->f_2 = 0f;
		__LIB_0__::func_8(uParam0, 2);
	}
}

void func_113(var uParam0)
{
	if (!__LIB_0__::func_75(uParam0))
	{
	}
	if (!__LIB_0__::func_33(uParam0))
	{
		uParam0->f_2 = (__LIB_0__::func_36() - uParam0->f_1);
		__LIB_0__::func_7(uParam0, 2);
	}
}

Vector3 func_114(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return vVar0;
	}
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	__LIB_0__::func_173(vVar6);
	vVar6 = { FtoV((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

void func_115(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (__LIB_1__::func_987(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if (Global_17504.f_42[iParam0 /*8*/].f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || __LIB_0__::func_2() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 = (Global_17504.f_42[iParam0 /*8*/].f_4 + iVar0);
}

Vector3 func_116(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	vVar0 = { 0f, 0f, 0f };
	if (!__LIB_0__::func_20(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
	{
		vVar0 = { VOLUME::_GET_VOLUME_COORDS(Global_1888801[iParam0 /*35*/].f_3) };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

bool func_117(int iParam0)
{
	int iVar0;
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = __LIB_0__::func_41(__LIB_0__::func_23());
	if (__LIB_0__::func_27(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

float func_118(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return __LIB_0__::func_665(Global_35, iParam0, bParam1, bParam2);
}

int func_119(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (__LIB_0__::func_86(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (__LIB_1__::func_209(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, bParam7);
	}
	if (bParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, bParam9);
	}
	__LIB_1__::func_210(iVar0, bParam8);
	return iVar0;
}

bool func_120(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (__LIB_1__::func_360(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = __LIB_0__::func_485();
			return true;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (__LIB_0__::func_94(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = __LIB_0__::func_485();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_121(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return __LIB_1__::func_990(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_122(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return __LIB_1__::func_208(iParam0, &Var0);
}

bool func_123(int iParam0, int iParam1, float fParam2)
{
	return __LIB_1__::func_374(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_124(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = __LIB_1__::func_363(iParam2);
	}
	else
	{
		iVar1 = __LIB_1__::func_362(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = __LIB_1__::func_363(iParam0);
	}
	else
	{
		iVar0 = __LIB_1__::func_362(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(*iParam1, 8388608))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

bool func_125(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (__LIB_1__::func_376(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_126(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (__LIB_1__::func_376(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_127(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;
	fVar0 = 40f;
	if (__LIB_1__::func_376(iParam1))
	{
		return false;
	}
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_1935630.f_34[iParam3], 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, Global_1935630.f_34[iParam3], -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_128(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	__LIB_1__::func_370(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !__LIB_1__::func_364(iParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !__LIB_1__::func_364(iParam1, iVar1))
				{
					if (__LIB_0__::func_94(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_129(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar5 > iParam2)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (__LIB_0__::func_125(iVar2))
				{
					if (!__LIB_1__::func_248(iVar2, iParam1))
					{
						if (iVar3 < *uParam0 && iVar3 < iParam2)
						{
							(*uParam0)[iVar3] = iVar2;
							iVar3++;
						}
					}
				}
			}
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

int func_130(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam2, iVar0, 2);
	if (iVar6 >= iParam3)
	{
	}
	iVar5 = 0;
	while (iVar5 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_A_VEHICLE(iVar2))
		{
			iVar3 = iVar1;
			if (!__LIB_1__::func_248(iVar3, iParam1))
			{
				(*iParam0)[iVar4] = iVar3;
				iVar4++;
			}
		}
		if (iVar4 >= iParam3)
		{
		}
		else
		{
			iVar5++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

bool func_131()
{
	if (__LIB_0__::func_296(0, 1, 1))
	{
		return true;
	}
	return false;
}

void func_132(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	if (!__LIB_2__::func_1(iParam1, 0, 0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_ACCURACY(iParam1, 20);
			fVar0 = PED::GET_COMBAT_FLOAT(iParam1, 1);
			fVar0 = (fVar0 * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1.2f));
			PED::SET_COMBAT_FLOAT(iParam1, 1, fVar0);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(80, 110);
			PED::SET_PED_SHOOT_RATE(iParam1, iVar1);
			fVar0 = PED::GET_COMBAT_FLOAT(iParam1, 3);
			fVar0 = (fVar0 * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1.25f));
			PED::SET_COMBAT_FLOAT(iParam1, 1, fVar0);
			break;
		case 1:
			PED::SET_PED_ACCURACY(iParam1, 15);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, false);
			break;
	}
}

void func_133(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || __LIB_2__::func_1(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

int func_134(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = PED::GET_MOUNT(iParam0);
		bVar1 = !ENTITY::IS_ENTITY_DEAD(iVar0);
		bVar2 = PED::IS_PED_ON_MOUNT(iParam0);
		bVar3 = false;
		if (!bVar2 || !bVar1)
		{
			if (!bVar2 || !PED::GET_PED_RESET_FLAG(Global_35, 149))
			{
				if (!bVar2 || !PED::GET_PED_RESET_FLAG(Global_35, 148))
				{
					if (!PED::IS_PED_RAGDOLL(iParam0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						if (*uParam1 > 0)
						{
							*uParam1 = 0;
						}
						return 1;
					}
				}
			}
		}
		switch (*uParam1)
		{
			case 0:
				if (bVar1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, iParam4, false);
					*uParam1 = 1;
				}
				break;
			case 1:
				bVar3 = (bParam3 && (TASK::IS_PED_RUNNING(iVar0) || TASK::IS_PED_SPRINTING(iVar0)));
				if (bVar3 || (!bParam2 || __LIB_1__::func_865(iVar0)))
				{
					if (bVar3)
					{
						TASK::TASK_HORSE_ACTION(iVar0, 9, 0, 0);
					}
					else
					{
						TASK::TASK_HORSE_ACTION(iVar0, 2, 0, 0);
					}
					*uParam1 = 2;
				}
				break;
			case 2:
				if (PED::GET_PED_RESET_FLAG(iParam0, 148))
				{
					*uParam1 = 3;
				}
				else if (!__LIB_0__::func_163(iVar0, 1041577989))
				{
					*uParam1 = 1;
				}
				break;
			case 3:
				if (bVar2 || !PED::GET_PED_RESET_FLAG(iParam0, 148))
				{
					if (!PED::IS_PED_RAGDOLL(iParam0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						return 1;
					}
				}
				break;
		}
	}
	if (bParam5)
	{
		HUD::_DISPLAY_HUD_COMPONENT(724769646);
	}
	return 0;
}

int func_135(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
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
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (__LIB_0__::func_27(*uParam1, 128))
	{
		if (!__LIB_0__::func_163(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			*uParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_0__::func_27(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!__LIB_1__::func_865(iVar2))
			{
				return 0;
			}
			if (!__LIB_0__::func_163(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (__LIB_1__::func_870(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!__LIB_0__::func_27(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((__LIB_0__::func_27(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0)));
			__LIB_1__::func_581(uParam1, 128);
			return 0;
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	if (__LIB_0__::func_27(*uParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return 0;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
			*uParam1 = 0;
			return 1;
		}
	}
	if (__LIB_0__::func_27(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!__LIB_1__::func_865(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*uParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!__LIB_0__::func_27(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!__LIB_0__::func_27(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, false);
				if (__LIB_0__::func_27(iParam2, 8192))
				{
					HUD::_DISPLAY_HUD_COMPONENT(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return 0;
		}
		if (__LIB_0__::func_27(*uParam1, 2336))
		{
			if (!__LIB_1__::func_865(iVar2))
			{
			}
			if (__LIB_1__::func_866(iVar2, *uParam1))
			{
				__LIB_1__::func_993(uParam1, 32);
				__LIB_1__::func_993(uParam1, 256);
				__LIB_1__::func_993(uParam1, 2048);
				__LIB_1__::func_581(uParam1, 512);
				__LIB_1__::func_581(uParam1, 1024);
				__LIB_1__::func_581(uParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (__LIB_0__::func_27(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!__LIB_1__::func_865(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return 0;
			}
			else
			{
				__LIB_1__::func_993(uParam1, 64);
			}
		}
		if (__LIB_0__::func_27(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return 1;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && __LIB_0__::func_27(iParam2, 1024))) || __LIB_0__::func_27(iParam2, 8)) && !__LIB_0__::func_27(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			__LIB_1__::func_581(uParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && __LIB_0__::func_27(iParam2, 4096)) && !__LIB_0__::func_27(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			__LIB_1__::func_581(uParam1, 2048);
			__LIB_1__::func_581(uParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && __LIB_0__::func_27(iParam2, 32)) && !__LIB_0__::func_27(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			__LIB_1__::func_581(uParam1, 256);
			__LIB_1__::func_581(uParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			__LIB_1__::func_581(uParam1, 64);
		}
		else if (!__LIB_0__::func_27(iParam2, 1))
		{
			if (!__LIB_0__::func_27(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (__LIB_1__::func_870(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!__LIB_0__::func_27(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			__LIB_1__::func_581(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			__LIB_1__::func_581(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			__LIB_1__::func_581(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	else if (!__LIB_0__::func_27(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		__LIB_1__::func_581(uParam1, 8);
	}
	return 0;
}

bool func_136(int iParam0, bool bParam1)
{
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

void func_137(int iParam0)
{
	int iVar0;
	var uVar1;
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = __LIB_1__::func_999();
	if (Global_1935630.f_27)
	{
		Global_1935630.f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630.f_44;
			}
			Global_1935630.f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			__LIB_1__::func_369(&(Global_1935630.f_34), &(Global_1935630.f_39));
			Global_1935630.f_38 = iParam0;
			break;
		case 1:
			Global_1935630.f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630.f_30)
			{
				if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
				{
					Global_1935630.f_30 = PED::_GET_LASSO_TARGET(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630.f_46)
			{
				case joaat("WEAPON_LASSO"):
					Global_1935630.f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46))
					{
						Global_1935630.f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630.f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630.f_25)
					{
						Global_1935630.f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630.f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

bool func_138(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (Global_1935630.f_44 == joaat("WEAPON_LASSO") && Global_1935630.f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && __LIB_0__::func_665(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(__LIB_1__::func_372(iVar0, 0)))
		{
			if (__LIB_2__::func_0(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_139(float fParam0)
{
	if (__LIB_0__::func_481(1))
	{
		return true;
	}
	if (__LIB_0__::func_75(&uLocal_0) && !__LIB_1__::func_313(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_140(int iParam0)
{
	if (__LIB_0__::func_181())
	{
		return false;
	}
	return __LIB_1__::func_25(Global_1347702[58 /*49*/].f_15, 1);
}

int func_141(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (__LIB_0__::func_28())
	{
		if (__LIB_0__::func_113())
		{
			bVar0 = false;
			if (!__LIB_1__::func_25(Global_1835011[15 /*74*/].f_1, 1) && !__LIB_0__::func_293(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = __LIB_0__::func_579();
				*iParam1 = __LIB_0__::func_580();
				*uParam2 = __LIB_0__::func_16();
				return 1;
			}
			else
			{
				*uParam0 = __LIB_0__::func_581();
				*iParam1 = __LIB_0__::func_582();
				*uParam2 = __LIB_0__::func_16();
				return 1;
			}
		}
		else if (__LIB_0__::func_181())
		{
			if (!__LIB_1__::func_25(Global_1835011[60 /*74*/].f_1, 1))
			{
				*uParam0 = __LIB_0__::func_583();
				*iParam1 = __LIB_0__::func_584();
				*uParam2 = __LIB_0__::func_585();
				return 1;
			}
			else
			{
				*uParam0 = __LIB_0__::func_581();
				*iParam1 = __LIB_0__::func_582();
				*uParam2 = __LIB_0__::func_16();
				return 1;
			}
		}
	}
	else if (__LIB_0__::func_113())
	{
		*uParam0 = __LIB_0__::func_586();
		*iParam1 = __LIB_0__::func_587();
		*uParam2 = __LIB_0__::func_16();
		return 1;
	}
	else if (__LIB_0__::func_181())
	{
		*uParam0 = __LIB_0__::func_588();
		*iParam1 = __LIB_0__::func_589();
		*uParam2 = __LIB_0__::func_16();
		return 1;
	}
	return 0;
}

bool func_142(int iParam0, var uParam1)
{
	struct<4> Var0;
	if (!__LIB_1__::func_131(856287005, iParam0))
	{
		return false;
	}
	Var0 = { __LIB_1__::func_124() };
	*uParam1 = __LIB_1__::func_81(Var0, iParam0, 0);
	if (!__LIB_0__::func_144(*uParam1, 0))
	{
		return false;
	}
	return true;
}

int func_143(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!__LIB_1__::func_680(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return __LIB_1__::func_690(iParam0, iVar0, iVar1, bParam2);
}

int func_144(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { __LIB_2__::func_3(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = __LIB_0__::func_235((386 + iVar28), 1);
			if (__LIB_1__::func_542(iParam0, &Var0, iVar5, 0))
			{
				if (__LIB_1__::func_429(iParam0, &Var6, iVar5))
				{
					Var29 = { __LIB_0__::func_429(iParam0, Var0, iVar5, 0) };
					__LIB_0__::func_939(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (__LIB_0__::func_708(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					__LIB_1__::func_543(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					__LIB_0__::func_718(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

void func_145(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_16(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_402(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	__LIB_1__::func_721(iVar0);
	__LIB_1__::func_108(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = __LIB_0__::func_825(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!__LIB_0__::func_823(iVar0))
		{
			return;
		}
	}
	__LIB_0__::func_836(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && __LIB_0__::func_2() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

void func_146(int iParam0, int iParam1)
{
	iParam0->f_95 = iParam1;
}

void func_147(int iParam0, int iParam1)
{
	iParam0->f_96 = (iParam0->f_96 || iParam1);
}

void func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	while (iVar0 < iParam0->f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_40[iVar0]))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0->f_40[iVar0], 273, false);
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0->f_40[iVar0]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_40[iVar0]));
			}
		}
		iVar0++;
	}
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < iParam0->f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_49[iVar0]))
		{
			if (VEHICLE::_0xA19447D83294E29F(iParam0->f_49[iVar0], &iVar1, &iVar2))
			{
				if (iVar1 <= 0)
				{
					Jump @218; //curOff = 142
				}
				else
				{
					iVar4 = 0;
					while (iVar4 < 6)
					{
						iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0->f_49[iVar0], iVar4);
						if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar3);
						}
						iVar4++;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_149(int iParam0, int iParam1)
{
	if (__LIB_2__::func_4(iParam0, iParam1))
	{
	}
	iParam0->f_96 = (iParam0->f_96 - (iParam0->f_96 && iParam1));
}

void func_150(int iParam0, int iParam1, int iParam2, int iParam3)
{
	PED::SET_PED_FIRING_PATTERN((*iParam0)[iParam1], joaat("FIRING_PATTERN_BURST_FIRE"));
	PED::_0x20E54854DEF6A54A((*iParam0)[iParam1], joaat("FIRING_PATTERN_BURST_FIRE_IN_COVER"));
	switch (iParam0->f_181)
	{
		case 2:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE((*iParam0)[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE((*iParam0)[iParam1], 80);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY((*iParam0)[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY((*iParam0)[iParam1], 65);
			}
			break;
		case 0:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE((*iParam0)[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE((*iParam0)[iParam1], 100);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY((*iParam0)[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY((*iParam0)[iParam1], 50);
			}
			break;
		case 1:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE((*iParam0)[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE((*iParam0)[iParam1], 110);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY((*iParam0)[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY((*iParam0)[iParam1], 40);
			}
			break;
		case 5:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE((*iParam0)[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE((*iParam0)[iParam1], 100);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY((*iParam0)[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY((*iParam0)[iParam1], 45);
			}
			break;
	}
}

void func_151(int iParam0, int iParam1)
{
	iParam0->f_4 = iParam1;
}

void func_152(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_97[iParam1] = (iParam0->f_97[iParam1] || iParam2);
}

void func_153(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_115[iParam1] = (iParam0->f_115[iParam1] || iParam2);
}

void func_154(int iParam0, float fParam1)
{
	iParam0->f_25 = fParam1;
}

bool func_155(int iParam0, bool bParam1)
{
	if (!__LIB_2__::func_15(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/].f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0 /*10*/].f_1 == 4));
}

void func_156(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_97[iParam1] = (iParam0->f_97[iParam1] - (iParam0->f_97[iParam1] && iParam2));
}

bool func_157(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam0, vParam1);
}

void func_158(int iParam0, int iParam1)
{
	iParam0->f_5 = iParam1;
}

bool func_159(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT((*iParam0)[iParam1]) || ENTITY::IS_ENTITY_VISIBLE((*iParam0)[iParam1]))
	{
		return true;
	}
	if (!__LIB_2__::func_25(iParam0, iParam1, 4))
	{
		return true;
	}
	return false;
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("REL_GANG_ODRISCOLL");
		case 2:
			return joaat("REL_GANG_LEMOYNE_RAIDERS");
		case 1:
			return joaat("REL_GANG_MURFREE_BROOD");
		case 4:
			return joaat("REL_GANG_LARAMIE_GANG");
		case 3:
			return joaat("REL_GANG_SKINNER_BROTHERS");
		case 5:
			return joaat("REL_GANG_SMUGGLERS");
		default:
			break;
	}
	return joaat("REL_CRIMINALS");
}

void func_161(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { __LIB_2__::func_66(vVar0, vVar3, 0f) };
	vVar9 = { __LIB_2__::func_67(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

void func_162(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_238))
	{
		POPULATION::_0xA1CFB35069D23C23(iParam0->f_238);
		POPULATION::_0x74C2B3DC0B294102(iParam0->f_238);
	}
}

void func_163(var uParam0, vector3 vParam1, int iParam4)
{
	float fVar0;
	if (__LIB_2__::func_8(iParam4))
	{
		fVar0 = 120f;
	}
	else
	{
		fVar0 = 180f;
	}
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, fVar0, fVar0, 40f, "volAmbush");
}

int func_164(int iParam0)
{
	switch (iParam0->f_151)
	{
		case 3:
		case 4:
		case 6:
			return 6;
		case 0:
		case 1:
		case 2:
		case 5:
		case 7:
		case 8:
		case 9:
		case 10:
			return 6;
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			return 6;
		case 18:
		case 19:
		case 20:
			return 4;
		case 21:
		case 22:
		case 23:
			return 6;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
			return 6;
		case 29:
		case 30:
			return 6;
		case 31:
		case 32:
		case 33:
			return 6;
		case 38:
			return 6;
		case 34:
		case 35:
		case 36:
		case 37:
		case 39:
		case 40:
		case 41:
			return 6;
		case 43:
			return 6;
		default:
			break;
	}
	return 4;
}

void func_165(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { __LIB_2__::func_66(vVar0, vVar3, 0f) };
	vVar9 = { __LIB_2__::func_67(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		PATHFIND::_0xAFE2AE66F6251C66(vVar6, vVar9, iParam6, 1);
	}
}

bool func_166(int iParam0)
{
	if (!__LIB_2__::func_4(iParam0, 131072))
	{
		if (Global_1935630.f_40 == 0)
		{
			if (!__LIB_2__::func_4(iParam0, 16777216) || iParam0->f_20 < 60f)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_167(int iParam0, bool bParam1)
{
	if (((((__LIB_0__::func_163(iParam0, 780511057) || __LIB_0__::func_163(iParam0, -219932022)) || __LIB_0__::func_163(iParam0, 1120685857)) || __LIB_0__::func_163(iParam0, -2117564886)) || __LIB_0__::func_163(iParam0, 655999185)) || __LIB_0__::func_163(iParam0, 1345172471))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return true;
	}
	if (bParam1)
	{
		if (__LIB_0__::func_163(iParam0, -653332088) || __LIB_0__::func_163(iParam0, 167901368))
		{
			return true;
		}
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_168(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;
	Var2 = { __LIB_0__::func_14(joaat("TOTAL_PLAYING_TIME")) };
	if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
	{
		iVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
		Global_40.f_9632[iParam0 /*4*/].f_3 = iVar1;
		if (bParam1)
		{
			iVar4 = __LIB_2__::func_46(iParam0, 0);
			iVar4 = BUILTIN::FLOOR((0.666f * IntToFloat(iVar4)));
			Global_40.f_9632[iParam0 /*4*/].f_3 = (Global_40.f_9632[iParam0 /*4*/].f_3 + iVar4);
		}
		else
		{
			Global_40.f_9632[iParam0 /*4*/].f_3 = (Global_40.f_9632[iParam0 /*4*/].f_3 + __LIB_2__::func_46(iParam0, 0));
		}
	}
}

void func_169(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_MANES"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_TAILS"), 0, 0);
}

void func_170(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_BLANKETS"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_SADDLES"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("SADDLE_HORNS"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("SADDLE_STIRRUPS"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_BEDROLLS"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_SADDLEBAGS"), 0, 0);
}

void func_171(int iParam0)
{
	if (!__LIB_2__::func_4(iParam0, 128))
	{
		return;
	}
	switch (iParam0->f_181)
	{
		case 0:
			__LIB_0__::func_11(joaat("G_M_M_UNIDUSTER_01"));
			__LIB_0__::func_11(joaat("G_M_M_UNIDUSTER_03"));
			break;
		case 2:
			__LIB_0__::func_11(joaat("G_M_O_UNIEXCONFEDS_01"));
			__LIB_0__::func_11(joaat("G_M_Y_UNIEXCONFEDS_01"));
			break;
		case 1:
			__LIB_0__::func_11(joaat("G_M_M_UNIINBRED_01"));
			break;
		case 3:
			__LIB_0__::func_11(joaat("G_M_M_UNIMOUNTAINMEN_01"));
			break;
		case 4:
			__LIB_0__::func_11(joaat("G_M_M_UNIRANCHERS_01"));
			break;
		case 5:
			__LIB_0__::func_11(joaat("G_M_M_UNIBANDITOS_01"));
			break;
	}
}

bool func_172(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	if (bParam1)
	{
		if (Global_40.f_9632[iParam0 /*4*/] > 0)
		{
			if (Global_40.f_9632[iParam0 /*4*/] >= __LIB_2__::func_35(iParam0))
			{
				return true;
			}
			Var2 = { __LIB_0__::func_14(joaat("TOTAL_PLAYING_TIME")) };
			if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
			{
				iVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
				if (iVar1 >= Global_40.f_9632[iParam0 /*4*/].f_3)
				{
					return false;
				}
			}
		}
	}
	return Global_40.f_9632[iParam0 /*4*/] > 0;
}

bool func_173(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return __LIB_0__::func_483(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1225639.f_10)
		{
			if (!Global_1225639.f_11)
			{
				return false;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return false;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return false;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return true;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return true;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_174(int iParam0, int iParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_238))
	{
		iParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(iParam0->f_209, 0f, 0f, 0f, 80f, 80f, 40f, "volAvoidance");
	}
	__LIB_2__::func_43(iParam0->f_238, iParam1, 262144, 1, 0);
}

void func_175()
{
	int iVar0;
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!__LIB_2__::func_53(iVar0, 128))
		{
			__LIB_2__::func_54(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_176()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!__LIB_2__::func_53(iVar0, 128) && __LIB_2__::func_53(iVar0, 1))
		{
			__LIB_2__::func_54(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_177()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (__LIB_1__::func_85(iVar0, 16777216))
		{
			if (!__LIB_2__::func_62(iVar0))
			{
				__LIB_2__::func_63(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

bool func_178(int iParam0)
{
	if (__LIB_2__::func_65(iParam0, 0))
	{
		return false;
	}
	return true;
}

void func_179(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 1);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 1);
	}
}

void func_180(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 16);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 67108864);
		__LIB_0__::func_516(iParam0, 16);
	}
}

void func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(iParam0->f_1), 128);
	}
	else
	{
		__LIB_1__::func_336(&(iParam0->f_1), 128);
	}
}

void func_182(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 256);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 256);
	}
}

void func_183(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		__LIB_1__::func_336(iParam0, 268435456);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 268435456);
	}
	if (!bParam2)
	{
		__LIB_1__::func_336(iParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		__LIB_1__::func_336(iParam0, 536870912);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 536870912);
	}
}

void func_184(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	struct<4> Var0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 180.6557f, 75.5711f, 98.7111f, 307.9777f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -124.9678f, 182.499f, 92.7486f, 323.5033f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, -143.1968f, 392.7447f, 95.6412f, 26.7895f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, -175.487f, -208.2044f, 87.9832f, 155.3853f);
							break;
						case 4:
							__LIB_2__::func_68(&Var0, 810.023f, 376.8716f, 115.1321f, 278.0894f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -78.546f, 574.7642f, 117.1554f, 285.065f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 52.8403f, 228.5046f, 108.3697f, 1.1595f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -98.0465f, 227.8637f, 99.6174f, 342f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1114.856f, 73.738f, 53.0233f, 354.9799f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -566.0319f, 466.1427f, 98.0826f, 133.627f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 731.3024f, -567.4277f, 75.8176f, 96.4522f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 83.4469f, 582.1075f, 135.0757f, 264.5214f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 831.6912f, -584.7949f, 78.2731f, 202.9779f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 202.3087f, 137.861f, 98.3938f, 326.3648f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -372.0885f, -36.569f, 41.6905f, 348.5297f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, -927.3195f, -351.4889f, 48.6764f, 122.086f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, -1089.385f, 29.2608f, 55.1327f, 104.0236f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1561.633f, -654.6262f, 46.2574f, 321.6371f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 954.459f, -1251.211f, 54.8197f, 43.8895f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 1528.073f, -1412.362f, 65.0164f, 100.1078f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, 1485.599f, -988.1472f, 49.9976f, 203.8493f);
							break;
						case 4:
							__LIB_2__::func_68(&Var0, 2060.011f, -1359.194f, 41.5979f, 309.696f);
							break;
						case 5:
							__LIB_2__::func_68(&Var0, 1347.459f, -1779.138f, 68.0518f, 13.8827f);
							break;
					}
					break;
				case 12:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1486.386f, -863.9506f, 49.1165f, 40.9143f);
							break;
					}
					break;
				case 15:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1751.006f, -792.3771f, 40.7652f, 45.2804f);
							break;
					}
					break;
				case 13:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 918.9561f, -1061.409f, 54.6744f, 191.2117f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 1486.383f, -942.4707f, 47.8906f, 181.1513f);
							break;
					}
					break;
				case 14:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1561.589f, -2121.429f, 44.3306f, 273.483f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 1391.634f, -2269.641f, 44.9803f, 294.7664f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 2067.27f, -1250.361f, 42.8864f, 257.827f);
							break;
					}
					break;
				case 16:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1173.9f, -909.8f, 66.9f, -57.4f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 878.2368f, -914.2035f, 54.1948f, 270.879f);
							break;
					}
					break;
				case 17:
				case 39:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2069.093f, -1241.536f, 41.2556f, 176.86f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 2081.443f, -899.7972f, 41.1731f, 260.946f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 1212.386f, -1591.315f, 56.0669f, 23.4687f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, 1506.064f, -905.8009f, 47.8961f, 165.3073f);
							break;
						case 4:
							__LIB_2__::func_68(&Var0, 1606.995f, -1545.489f, 59.2865f, 177.0083f);
							break;
					}
					break;
				case 18:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					break;
				case 19:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					break;
				case 21:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2449.325f, 1573.939f, 85.8194f, 39.9471f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 2584.913f, 1633.828f, 97.7316f, 8.1257f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 2730.857f, 1311.648f, 92.9221f, 149.1053f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, 2794.002f, 1031.168f, 59.517f, 188.3449f);
							break;
					}
					break;
				case 20:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2430.674f, 1253.279f, 108.2854f, 292.6725f);
							break;
					}
					break;
				case 22:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2659.633f, 897.6414f, 88.4611f, 203.4193f);
							break;
					}
					break;
				case 23:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2709.737f, 473.069f, 65.8412f, 252.6725f);
							break;
					}
					break;
				case 24:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -2313.103f, -1513.598f, 140.2823f, 15.1824f);
							break;
					}
					break;
				case 25:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1434.349f, -1281.048f, 79.4382f, 38.4403f);
							break;
					}
					break;
				case 26:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1304.657f, -1086.787f, 72.7056f, 19.326f);
							break;
					}
					break;
				case 28:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1451.386f, -1256.971f, 77.9939f, 246.5365f);
							break;
					}
					break;
				case 27:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1938.231f, -1737.649f, 121.0378f, 54.6957f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -2237.81f, -1236.479f, 135.9782f, 291.2003f);
							break;
					}
					break;
				case 29:
				case 30:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -2215.869f, -408.5112f, 163.5815f, 101.2651f);
							break;
					}
					break;
				case 31:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -3476.859f, -2618.098f, -13.6175f, -100.63f);
							break;
					}
					break;
				case 32:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -5102.887f, -2937.184f, 2.3186f, 58.5231f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -3772.229f, -2818.31f, -16.4697f, 123.7911f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -3998.259f, -2362.783f, -9.1375f, 73.6187f);
							break;
					}
					break;
				case 34:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1972.732f, 1695.837f, 162.568f, 114.1732f);
							break;
					}
					break;
				case 43:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2242.927f, 732.5889f, 91.0723f, 263.9706f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 2698.555f, 183.9842f, 52.7268f, 12.5536f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 2012.363f, 450.9774f, 114.9433f, 51.6697f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, 2870.96f, 831.843f, 48.2579f, 28.2762f);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 334.8338f, 220.554f, 101.8269f, 119.7537f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -113.9271f, 443.0494f, 111.7579f, 219.7514f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, -298.4487f, 637.9625f, 111.069f, 190.7615f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, -379.536f, -313.1479f, 87.3478f, 269.676f);
							break;
						case 4:
							__LIB_2__::func_68(&Var0, 1058.255f, 395.0368f, 100.4976f, 78.4296f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 153.7973f, 524.9196f, 136.8577f, 48.6442f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 206.1301f, 463.9098f, 121.7605f, 105.0337f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -169.289f, 450.9006f, 96.4484f, 199.7628f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1093.884f, 187.3798f, 59.2496f, 162.9302f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -650.8867f, 350.328f, 87.9592f, 308.87f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 581.8732f, -498.1398f, 77.1145f, 214.5317f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 195.9423f, 643.7529f, 133.8094f, 123.0221f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 816.4929f, -791.5338f, 57.0665f, 358.0346f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 488.6012f, 346.341f, 104.38f, 132.2152f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -491.0948f, 240.2662f, 42.8778f, 245.3544f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, -1063.855f, -573.8351f, 81.1675f, 22.0417f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, -1383.4f, -131.3f, 94.2f, 2.2213f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1721.41f, -764.9014f, 41.3985f, 48.7414f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 917.1657f, -1057.089f, 55.351f, 197.7367f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 1367.119f, -1379.669f, 79.039f, 234.1533f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, 1492.79f, -1122.532f, 56.3596f, 8.428f);
							break;
						case 4:
							__LIB_2__::func_68(&Var0, 2246.185f, -1359.823f, 44.2797f, 67.8845f);
							break;
						case 5:
							__LIB_2__::func_68(&Var0, 1289.32f, -1632.029f, 65.404f, 182.4022f);
							break;
					}
					break;
				case 12:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1583.548f, -629.852f, 46.1712f, 146.2081f);
							break;
					}
					break;
				case 15:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1582.927f, -623.4384f, 46.2721f, 218.2033f);
							break;
					}
					break;
				case 13:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 947.2817f, -1236.62f, 53.763f, 23.4717f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 1508.104f, -1149.061f, 53.7777f, 48.8161f);
							break;
					}
					break;
				case 14:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1861.568f, -1978.116f, 43.699f, 111.3814f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 1506.446f, -2206.457f, 42.6941f, 158.0186f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 2273.229f, -1369.996f, 45.7006f, 80.9983f);
							break;
					}
					break;
				case 16:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1346.7f, -858.3f, 72.7f, 88.6f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 1107.901f, -916.9768f, 66.9322f, 90.5837f);
							break;
					}
					break;
				case 17:
				case 39:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2264.292f, -1366.995f, 44.3097f, 79.8327f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 2264.248f, -1037.55f, 42.1479f, 54.3753f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 1091.079f, -1431.687f, 54.6637f, 223.0478f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, 1493.179f, -1116.514f, 55.4248f, 352.523f);
							break;
						case 4:
							__LIB_2__::func_68(&Var0, 1753.022f, -1638.871f, 48.5096f, 34.1859f);
							break;
					}
					break;
				case 18:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					break;
				case 19:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					break;
				case 21:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2299.518f, 1759.59f, 107.9513f, 195.5682f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 2705.534f, 1911.673f, 113.9124f, 141.4947f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 2530.082f, 1242.029f, 148.8438f, 338.4772f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, 2848.581f, 689.1435f, 64.6365f, 0.9953f);
							break;
					}
					break;
				case 20:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2508.16f, 1404.184f, 95.79f, 124.3386f);
							break;
					}
					break;
				case 22:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2799.991f, 890.5291f, 63.6047f, 152.4149f);
							break;
					}
					break;
				case 23:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2921.223f, 414.4291f, 48.478f, 74.3386f);
							break;
					}
					break;
				case 24:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -2409.259f, -1475.456f, 147.1943f, 267.4513f);
							break;
					}
					break;
				case 25:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1682.643f, -1246.672f, 84.8961f, 286.9227f);
							break;
					}
					break;
				case 28:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1154.178f, -1214.848f, 68.3049f, 89.9786f);
							break;
					}
					break;
				case 27:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -2231.266f, -1599.062f, 145.9509f, 251.4796f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -2091.402f, -1125.535f, 119.3745f, 117.3666f);
							break;
					}
					break;
				case 26:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -1563.969f, -868.5887f, 86.2286f, 229.2799f);
							break;
					}
					break;
				case 29:
				case 30:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -2295.963f, -328.9082f, 154.6866f, 183.9384f);
							break;
					}
					break;
				case 31:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -3161.003f, -2610.719f, 9.9647f, 66.5f);
							break;
					}
					break;
				case 32:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -5379.7f, -2940.985f, 1.6323f, 255.6953f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -3982.679f, -3068.613f, -13.872f, 331.3266f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
							break;
					}
					break;
				case 34:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 1819.118f, 1593.633f, 168.2121f, 313.8806f);
							break;
					}
					break;
				case 43:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 2482.688f, 729.5152f, 72.2941f, 117.0933f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 2585.403f, 338.2195f, 69.6483f, 220.6653f);
							break;
						case 2:
							__LIB_2__::func_68(&Var0, 1805.624f, 550.4319f, 105.9446f, 233.3962f);
							break;
						case 3:
							__LIB_2__::func_68(&Var0, 2793.57f, 1038.077f, 58.5925f, 188.5771f);
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 13:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, 997.1635f, -1186.04f, 64.0811f, 75.3782f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, 1391.092f, -1081.252f, 70.8405f, 284.1285f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_68(&Var0, -3729.811f, -3131.73f, -5.6609f, 79.6603f);
							break;
						case 1:
							__LIB_2__::func_68(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
							break;
					}
					break;
				case 0:
					switch (iParam4)
					{
						case 1:
							__LIB_2__::func_68(&Var0, 54.6531f, 217.5979f, 107.1034f, 40.7729f);
							break;
					}
					break;
			}
			break;
		case 3:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			break;
		default:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			break;
	}
	*uParam2 = { Var0 };
	*uParam3 = Var0.f_3;
	if (__LIB_0__::func_86(*uParam2))
	{
		*uParam2 = { 0f, 0f, 0f };
		*uParam3 = 0f;
	}
}

int func_185(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	iVar1 = __LIB_2__::func_71(iParam0);
	if ((__LIB_0__::func_27(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY");
					break;
				case 4:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
					break;
				case 5:
					iVar2 = joaat("A_C_HORSE_AMERICANPAINT_TOBIANO");
					break;
				default:
					if (__LIB_1__::func_985())
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY");
					}
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_NOKOTA_WHITEROAN");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET");
					break;
				default:
					if (__LIB_1__::func_985())
					{
						iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
					}
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL");
					break;
				case 4:
					iVar2 = joaat("A_C_HORSE_AMERICANPAINT_OVERO");
					break;
				default:
					if (__LIB_1__::func_985())
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO");
					}
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_MORGAN_BAYROAN");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MORGAN_PALOMINO");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_SHIRE_LIGHTGREY");
					break;
				default:
					if (__LIB_1__::func_985())
					{
						iVar2 = joaat("A_C_HORSE_MORGAN_BAYROAN");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_MORGAN_PALOMINO");
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MUSTANG_WILDBAY");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_MUSTANG_GRULLODUN");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
					break;
				default:
					if (__LIB_1__::func_985())
					{
						iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_MUSTANG_WILDBAY");
					}
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_01");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_02");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_03");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_03");
					break;
				default:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_01");
					break;
			}
			break;
		case 10:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_APPALOOSA_BLANKET");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY");
					break;
				case 4:
					iVar2 = joaat("A_C_HORSE_MUSTANG_GRULLODUN");
					break;
				default:
					iVar2 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
					break;
			}
			break;
		default:
			iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
			break;
	}
	return iVar2;
}

int func_186(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = joaat("META_HORSE_SADDLE_ONLY");
	iVar1 = __LIB_2__::func_71(iParam0);
	if ((__LIB_0__::func_27(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					iVar2 = -1279161173;
					break;
				case 1:
					iVar2 = -520362209;
					break;
				case 2:
					iVar2 = -803977904;
					break;
				case 3:
					iVar2 = -1279161173;
					break;
				case 4:
					iVar2 = -520362209;
					break;
				case 5:
					iVar2 = -803977904;
					break;
				default:
					if (__LIB_1__::func_985())
					{
						iVar2 = -1279161173;
					}
					else
					{
						iVar2 = -520362209;
					}
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar2 = 42113864;
					break;
				case 1:
					iVar2 = 694577423;
					break;
				case 2:
					iVar2 = 42113864;
					break;
				case 3:
					iVar2 = 694577423;
					break;
				default:
					if (__LIB_1__::func_985())
					{
						iVar2 = 42113864;
					}
					else
					{
						iVar2 = 694577423;
					}
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1078773108;
					break;
				case 1:
					iVar2 = 1314808215;
					break;
				case 2:
					iVar2 = -801577650;
					break;
				case 3:
					iVar2 = -1635384855;
					break;
				case 4:
					iVar2 = -1150469193;
					break;
				default:
					if (__LIB_1__::func_985())
					{
						iVar2 = 1078773108;
					}
					else
					{
						iVar2 = 1314808215;
					}
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1371076591;
					break;
				case 1:
					iVar2 = 998558599;
					break;
				case 2:
					iVar2 = -1175500706;
					break;
				case 3:
					iVar2 = 1814441161;
					break;
				default:
					if (__LIB_1__::func_985())
					{
						iVar2 = 1371076591;
					}
					else
					{
						iVar2 = 998558599;
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					iVar2 = -314847033;
					break;
				case 1:
					iVar2 = -2125596339;
					break;
				case 2:
					iVar2 = 1938775504;
					break;
				case 3:
					iVar2 = -477512349;
					break;
				default:
					if (__LIB_1__::func_985())
					{
						iVar2 = -2125596339;
					}
					else
					{
						iVar2 = 1938775504;
					}
					break;
			}
			break;
		default:
			break;
	}
	return iVar2;
}

void func_187()
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 < 0)
	{
		sVar1 = __LIB_2__::func_72(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar1);
		}
		iVar0++;
	}
}

bool func_188()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < 0)
	{
		sVar1 = __LIB_2__::func_72(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
			{
				iVar2 = 0;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_189(int iParam0, int iParam1, int iParam2, int iParam3)
{
	__LIB_2__::func_73((*iParam0)[iParam1], &(iParam0->f_22[iParam1]), iParam2, iParam3, 0, 0);
}

bool func_190(int iParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = __LIB_1__::func_986(iParam0);
		return __LIB_2__::func_74(iParam0, joaat("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_191(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return;
	}
	__LIB_2__::func_60(__LIB_2__::func_75(iParam0) + 1, iParam0);
}

void func_192()
{
	__LIB_2__::func_61(Global_40.f_9632.f_196 + 1);
}

bool func_193(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return true;
	}
	if (__LIB_2__::func_109(iParam1, 120f, 30f))
	{
		return false;
	}
	return true;
}

bool func_194(int iParam0)
{
	if (__LIB_1__::func_988(50))
	{
		if (__LIB_1__::func_989(iParam0->f_209, 1, 8, 0))
		{
			return true;
		}
	}
	if (__LIB_2__::func_84())
	{
		return true;
	}
	if (Global_1430231.f_4)
	{
		__LIB_2__::func_85(21);
		return true;
	}
	if (__LIB_0__::func_27(Global_1392581.f_3, 4) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		__LIB_2__::func_85(22);
		return true;
	}
	return false;
}

int func_195(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	iVar1 = 0;
	switch (iParam0)
	{
		case joaat("GROUP_REPEATER"):
			if (!__LIB_0__::func_214(joaat("WEAPON_REPEATER_HENRY")))
			{
				iParam0 = joaat("WEAPON_REPEATER_CARBINE");
			}
			else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
			{
				iParam0 = joaat("WEAPON_REPEATER_HENRY");
			}
			else
			{
				iParam0 = joaat("WEAPON_REPEATER_CARBINE");
			}
			break;
		case joaat("GROUP_REVOLVER"):
			bVar2 = __LIB_2__::func_87(joaat("WEAPON_REVOLVER_DOUBLEACTION"));
			bVar3 = __LIB_2__::func_87(joaat("WEAPON_REVOLVER_SCHOFIELD"));
			if (!bVar2 && !bVar3)
			{
				iParam0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
			}
			else if (!bVar2)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
				{
					iParam0 = joaat("WEAPON_REVOLVER_SCHOFIELD");
				}
				else
				{
					iParam0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
			}
			else if (!bVar3)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
				{
					iParam0 = joaat("WEAPON_REVOLVER_DOUBLEACTION");
				}
				else
				{
					iParam0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
			}
			else
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar0 < 33)
				{
					iParam0 = joaat("WEAPON_REVOLVER_SCHOFIELD");
				}
				else if (iVar0 < 67)
				{
					iParam0 = joaat("WEAPON_REVOLVER_DOUBLEACTION");
				}
				else
				{
					iParam0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("WEAPON_REPEATER_CARBINE"):
			if (!bParam1)
			{
				iVar1 = joaat("LO_GANG_BND_REPEATER_CARBINE");
			}
			else
			{
				iVar1 = joaat("LO_GANG_BND_REPEATER_CARBINE_EQUIPPED");
			}
			break;
		case joaat("WEAPON_REPEATER_HENRY"):
			if (!bParam1)
			{
				iVar1 = joaat("LO_GANG_BND_REPEATER_HENRY");
			}
			else
			{
				iVar1 = joaat("LO_GANG_BND_REPEATER_HENRY_EQUIPPED");
			}
			break;
		case joaat("WEAPON_REVOLVER_SCHOFIELD"):
			if (!bParam1)
			{
				iVar1 = joaat("LO_GANG_BND_REVOLVER_SCHOFIELD");
			}
			else
			{
				iVar1 = joaat("LO_GANG_BND_REVOLVER_SCHOFIELD_EQUIPPED");
			}
			break;
		case joaat("WEAPON_REVOLVER_DOUBLEACTION"):
			if (!bParam1)
			{
				iVar1 = joaat("LO_GANG_BND_REVOLVER_DOUBLEACTION");
			}
			else
			{
				iVar1 = joaat("LO_GANG_BND_REVOLVER_DOUBLEACTION_EQUIPPED");
			}
			break;
		case joaat("WEAPON_REVOLVER_CATTLEMAN"):
			if (!bParam1)
			{
				iVar1 = joaat("LO_GANG_BND_REVOLVER_CATTLEMAN");
			}
			else
			{
				iVar1 = joaat("LO_GANG_BND_REVOLVER_CATTLEMAN_EQUIPPED");
			}
			break;
	}
	return iVar1;
}

void func_196(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (__LIB_1__::func_339(iParam2, 1, 1, 1, 0))
	{
		__LIB_1__::func_336(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	__LIB_2__::func_89(iParam1, 1);
	__LIB_1__::func_345();
}

bool func_197(int iParam0, int iParam1)
{
	if (__LIB_2__::func_96(iParam0))
	{
		return true;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	return false;
}

bool func_198(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = __LIB_2__::func_88(iParam0);
	if (iParam0->f_12 > __LIB_2__::func_40(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = __LIB_1__::func_362(iParam1);
	iVar1 = __LIB_1__::func_363(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, true, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_199(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = __LIB_0__::func_485();
	}
	else if (__LIB_0__::func_485() - iParam1->f_4) > __LIB_2__::func_97(iParam1)
	{
		return __LIB_2__::func_98(iParam0, iParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_200(int iParam0)
{
	int iVar0;
	iVar0 = Global_1935630.f_40;
	if (__LIB_0__::func_2() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = __LIB_2__::func_102(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = __LIB_2__::func_102(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (__LIB_1__::func_363(iVar0) == -1)
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return false;
	}
	iParam0->f_14 = iVar0;
	return true;
}

void func_201(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		__LIB_2__::func_103(iParam0);
	}
}

int func_202(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;
	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = __LIB_2__::func_129(uParam0, iParam1, iParam2, iVar0);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

int func_203(int iParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6)
{
	int iVar0;
	int iVar1;
	iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	iVar1 = __LIB_2__::func_130(iParam0, iParam1, iVar0, iParam2);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

bool func_204(bool bParam0)
{
	int iVar0;
	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (__LIB_2__::func_108(iVar0))
	{
		return false;
	}
	if (__LIB_0__::func_27(iVar0, 1) || __LIB_0__::func_27(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_205(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
		{
			if (__LIB_2__::func_25(iParam0, iVar0, 8))
			{
				if (__LIB_1__::func_992((*iParam0)[iVar0], Global_36, 1) < (70f * 70f) || __LIB_1__::func_472((*iParam0)[iVar0], 70f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_206(int iParam0, float fParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (__LIB_2__::func_1((*iParam0)[iVar0], 0, 0))
		{
			PED::_SET_PED_DAMAGE_MODIFIER((*iParam0)[iVar0], fParam1);
		}
		iVar0++;
	}
}

int func_207(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (__LIB_2__::func_1((*iParam0)[iVar0], 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_208(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	if (!__LIB_2__::func_1((*iParam0)[iParam1], 0, 1))
	{
		return;
	}
	if (!PED::_0xCC2B20596E29E4E3((*iParam0)[iParam1], 98))
	{
		if (__LIB_2__::func_1(Global_1935630.f_40, 0, 0))
		{
			if (Global_1935630.f_40 == iParam2)
			{
				bVar0 = true;
			}
		}
		if (!__LIB_2__::func_1(iParam2, 0, 1) || PED::IS_PED_FLEEING(iParam2))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (!PED::IS_PED_ON_MOUNT((*iParam0)[iParam1]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES((*iParam0)[iParam1], 98, true);
			}
		}
	}
	else if (__LIB_2__::func_1(iParam2, 0, 0))
	{
		if (Global_1935630.f_40 != iParam2)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES((*iParam0)[iParam1], 98, false);
		}
	}
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			__LIB_2__::func_115(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			__LIB_2__::func_115(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			__LIB_2__::func_115(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			__LIB_2__::func_115(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			__LIB_2__::func_115(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			__LIB_2__::func_115(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			__LIB_2__::func_115(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

bool func_210(int iParam0)
{
	if (!__LIB_0__::func_75(&(iParam0->f_182.f_13)))
	{
		return true;
	}
	if (!__LIB_1__::func_285(&(iParam0->f_182.f_13), iParam0->f_182.f_16))
	{
		return true;
	}
	return false;
}

bool func_211(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	fVar0 = __LIB_0__::func_94((*iParam0)[iParam1], Global_36, 1);
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_2__::func_114((*iParam0)[iParam1], 1065353216 /* Float: 1f */), __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */), true);
	if (fVar0 < 10f)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_OCCLUDED((*iParam0)[iParam1]))
	{
		return true;
	}
	if (PED::IS_PED_IN_COVER((*iParam0)[iParam1], true, false))
	{
		return true;
	}
	if (fVar1 < (fVar0 - 2f))
	{
		return false;
	}
	return true;
}

void func_212(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	__LIB_2__::func_115(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

int func_213(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	vVar3 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	iVar6 = __LIB_2__::func_119(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_214(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;
	iParam5 = iParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (__LIB_1__::func_923())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (__LIB_2__::func_118(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = __LIB_0__::func_665(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			__LIB_1__::func_148(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (__LIB_2__::func_86(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = __LIB_0__::func_55(__LIB_2__::func_122(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_215(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!__LIB_2__::func_123(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!__LIB_0__::func_48(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

bool func_216(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_32)
			{
				return false;
			}
			if (!__LIB_2__::func_124(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (__LIB_1__::func_348(iParam0, iVar2) <= __LIB_2__::func_88(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_217(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (__LIB_1__::func_996(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = __LIB_2__::func_90(iParam2);
		if (__LIB_2__::func_91(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > __LIB_2__::func_92(iParam2)
				{
					__LIB_2__::func_89(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_218(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (__LIB_2__::func_124(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > __LIB_2__::func_92(iParam1)
		{
			fVar3 = __LIB_2__::func_90(iParam1);
			if (iParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_219(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = __LIB_2__::func_95(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					__LIB_2__::func_89(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					__LIB_2__::func_89(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, 0, 0);
					if (__LIB_1__::func_997(iParam1, vVar0, vVar4))
					{
						__LIB_2__::func_89(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					__LIB_2__::func_89(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, 0, 0);
					if (__LIB_1__::func_997(iParam1, vVar0, vVar7))
					{
						__LIB_2__::func_89(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_220(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!__LIB_2__::func_124(iParam0, iParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = __LIB_1__::func_998(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (__LIB_1__::func_356(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						iParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (__LIB_2__::func_125(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (__LIB_2__::func_126(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (__LIB_2__::func_127(iParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_221(int iParam0, int iParam1)
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
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, true, 0) == 1)
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
			break;
	}
	return false;
}

void func_222(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (__LIB_2__::func_1((*iParam0)[iVar0], 0, 1))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES((*iParam0)[iVar0], 57, false);
			PED::SET_PED_COMBAT_ATTRIBUTES((*iParam0)[iVar0], 127, true);
		}
		iVar0++;
	}
}

int func_223(int iParam0)
{
	int iVar0;
	int iVar1;
	__LIB_1__::func_283(&(iParam0->f_241), 0);
	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (__LIB_2__::func_1((*iParam0)[iVar0], 0, 1))
		{
			if (MAP::DOES_BLIP_EXIST(iParam0->f_22[iVar0]))
			{
				if (__LIB_0__::func_94((*iParam0)[iVar0], Global_36, 1) > 40f || __LIB_1__::func_285(&(iParam0->f_241), 15f))
				{
					__LIB_0__::func_325(&(iParam0->f_22[iVar0]));
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0[iVar0]);
					return 1;
				}
			}
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iParam0->f_215)
	{
		return 1;
	}
	return 0;
}

void func_224(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	__LIB_1__::func_309(-1, 0, 0, 0, 0);
	if (bParam1)
	{
		__LIB_1__::func_980(240f, 1, 0);
		__LIB_0__::func_77(120, 0, 1);
	}
	Global_40.f_9632[iParam0 /*4*/].f_1++;
	Var2 = { __LIB_0__::func_14(joaat("TOTAL_PLAYING_TIME")) };
	if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
	{
		iVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
		Global_40.f_9632[iParam0 /*4*/].f_3 = (iVar1 + __LIB_2__::func_46(iParam0, 1));
	}
	__LIB_0__::func_703(0, 13);
}

bool func_225(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (__LIB_2__::func_138(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = __LIB_2__::func_90(iParam1);
			if (__LIB_2__::func_91(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = __LIB_2__::func_92(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						__LIB_2__::func_89(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							__LIB_2__::func_89(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

void func_226(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = __LIB_0__::func_821(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		__LIB_2__::func_141(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fVar4;
	__LIB_1__::func_17(iParam1);
	iVar5 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar7;
	PED::_0xA69899995997A63B(iVar5, iVar7);
}

bool func_227(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!__LIB_2__::func_136(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_2__::func_139(fParam0))
	{
		return false;
	}
	return true;
}

bool func_228(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_140(0))
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

struct<6> func_229()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	if (__LIB_2__::func_142(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (__LIB_2__::func_142(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		Var0 = uVar7;
	}
	if (__LIB_2__::func_142(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (__LIB_2__::func_142(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (__LIB_2__::func_142(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (__LIB_2__::func_142(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

bool func_230()
{
	if (Global_1894899.f_187)
	{
		return true;
	}
	if (__LIB_1__::func_185(16) && !__LIB_1__::func_185(21))
	{
		return true;
	}
	return false;
}

int func_231(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(iVar0) || WEAPON::_IS_WEAPON_MELEE(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (__LIB_0__::func_154(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (__LIB_0__::func_154(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (__LIB_0__::func_2() == -1 && !__LIB_0__::func_214(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (__LIB_0__::func_214(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && __LIB_0__::func_154(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_IS_WEAPON_MELEE(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		__LIB_2__::func_144(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		__LIB_0__::func_215(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (__LIB_0__::func_216(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

bool func_232(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;
	float fVar7;
	vVar2 = { __LIB_1__::func_546(__LIB_0__::func_317()) };
	fVar5 = 120f;
	fVar5 = (fVar5 * fVar5);
	if (__LIB_0__::func_62(Global_36, vVar2) < 40000f)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_903(iVar0))
		{
			fVar6 = __LIB_0__::func_210(iVar0);
			if (fVar6 <= 10000f && fVar6 > 0f)
			{
				iVar1 = __LIB_0__::func_167(iVar0);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					return false;
				}
				if (__LIB_0__::func_62(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), vVar2) > fVar5)
				{
					fVar7 = __LIB_1__::func_992(iVar1, Global_36, 1);
					if (fVar7 <= 40000f && fVar7 > 0f)
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_233(var uParam0, int iParam1)
{
	uParam0->f_95 = iParam1;
}

void func_234(var uParam0, int iParam1)
{
	uParam0->f_96 = (uParam0->f_96 || iParam1);
}

void func_235(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	while (iVar0 < uParam0->f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_40[iVar0]))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_40[iVar0], 273, false);
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_40[iVar0]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_40[iVar0]));
			}
		}
		iVar0++;
	}
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[iVar0]))
		{
			if (VEHICLE::_0xA19447D83294E29F(uParam0->f_49[iVar0], &iVar1, &iVar2))
			{
				if (iVar1 <= 0)
				{
					Jump @218; //curOff = 142
				}
				else
				{
					iVar4 = 0;
					while (iVar4 < 6)
					{
						iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_49[iVar0], iVar4);
						if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar3);
						}
						iVar4++;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_236(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case 0:
			if ((iParam0 % 2) == 0)
			{
				iParam1 = 1;
			}
			else
			{
				iParam1 = 2;
			}
			break;
	}
	switch (iParam1)
	{
		case 1:
			*uParam2 = { -0.31f, 0.03f, -0.22f };
			*uParam3 = { 0f, 50f, 90f };
			break;
		case 2:
			*uParam2 = { 0.31f, 0.03f, -0.22f };
			*uParam3 = { 0f, -50f, 90f };
			break;
	}
	*uParam4 = PED::GET_PED_BONE_INDEX(Local_15.f_40[iParam0], 62111);
}

void func_237(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_97[iParam1] = (uParam0->f_97[iParam1] || iParam2);
}

void func_238(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_115[iParam1] = (uParam0->f_115[iParam1] || iParam2);
}

void func_239(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_97[iParam1] = (uParam0->f_97[iParam1] - (uParam0->f_97[iParam1] && iParam2));
}

void func_240(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_238))
	{
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_238);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_238);
	}
}

int func_241(var uParam0)
{
	switch (uParam0->f_151)
	{
		case 3:
		case 4:
		case 6:
			return 6;
		case 0:
		case 1:
		case 2:
		case 5:
		case 7:
		case 8:
		case 9:
		case 10:
			return 6;
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			return 6;
		case 18:
		case 19:
		case 20:
			return 4;
		case 21:
		case 22:
		case 23:
			return 6;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
			return 6;
		case 29:
		case 30:
			return 6;
		case 31:
		case 32:
		case 33:
			return 6;
		case 38:
			return 6;
		case 34:
		case 35:
		case 36:
		case 37:
		case 39:
		case 40:
		case 41:
			return 6;
		case 43:
			return 6;
		default:
			break;
	}
	return 4;
}

void func_242(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_106[iParam1] = (uParam0->f_106[iParam1] - (uParam0->f_106[iParam1] && iParam2));
}

var func_243(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = uParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

void func_244()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
		{
			ENTITY::_0xA91E6CF94404E8C9(Local_15[iVar0]);
			if (!__LIB_2__::func_25(&Local_15, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_15[iVar0], true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[iVar0]))
		{
			ENTITY::_0xA91E6CF94404E8C9(Local_15.f_40[iVar0]);
			if (!__LIB_2__::func_26(&Local_15, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_15.f_40[iVar0], true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[iVar0]))
		{
			ENTITY::_0xA91E6CF94404E8C9(Local_15.f_49[iVar0]);
			ENTITY::SET_ENTITY_VISIBLE(Local_15.f_49[iVar0], true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_52[iVar0]))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_15.f_52[iVar0], true);
		}
		iVar0++;
	}
}

bool func_245(int iParam0, bool bParam1)
{
	if (__LIB_2__::func_172(iParam0, bParam1))
	{
		return true;
	}
	if (Global_40.f_9632[iParam0 /*4*/].f_1 == 0)
	{
		return false;
	}
	if (!bParam1)
	{
		return Global_40.f_9632[iParam0 /*4*/].f_1 > 0;
	}
	if (__LIB_2__::func_36(iParam0))
	{
		return true;
	}
	return false;
}

void func_246(var uParam0)
{
	__LIB_0__::func_37(uParam0);
	__LIB_0__::func_8(&(uParam0->f_3), 1);
	uParam0->f_4 = 0;
}

bool func_247(int iParam0)
{
	if (__LIB_2__::func_25(&Local_15, iParam0, 2))
	{
		return false;
	}
	if (__LIB_2__::func_25(&Local_15, iParam0, 128))
	{
		return false;
	}
	if (__LIB_2__::func_25(&Local_15, iParam0, 4))
	{
		return true;
	}
	if (__LIB_2__::func_64(&Local_15, Local_15[iParam0]))
	{
		return true;
	}
	if (!__LIB_2__::func_25(&Local_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_248(int iParam0, int iParam1)
{
	if (__LIB_2__::func_26(&Local_15, iParam0, 2))
	{
		return false;
	}
	if (__LIB_2__::func_26(&Local_15, iParam0, 4))
	{
		return true;
	}
	if (__LIB_1__::func_248(Local_15.f_40[iParam0], iParam1))
	{
		return true;
	}
	if (__LIB_2__::func_64(&Local_15, Local_15.f_40[iParam0]))
	{
		return true;
	}
	if (!__LIB_2__::func_26(&Local_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

void func_249(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(uParam0, 1);
	}
	else
	{
		__LIB_0__::func_516(uParam0, 1);
	}
}

void func_250(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(uParam0, 16);
	}
	else
	{
		__LIB_0__::func_516(uParam0, 67108864);
		__LIB_0__::func_516(uParam0, 16);
	}
}

void func_251(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(uParam0->f_1), 128);
	}
	else
	{
		__LIB_1__::func_336(&(uParam0->f_1), 128);
	}
}

void func_252(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(uParam0, 256);
	}
	else
	{
		__LIB_0__::func_516(uParam0, 256);
	}
}

void func_253(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		__LIB_1__::func_336(uParam0, 268435456);
	}
	else
	{
		__LIB_0__::func_516(uParam0, 268435456);
	}
	if (!bParam2)
	{
		__LIB_1__::func_336(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		__LIB_0__::func_516(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		__LIB_1__::func_336(uParam0, 536870912);
	}
	else
	{
		__LIB_0__::func_516(uParam0, 536870912);
	}
}

void func_254(var uParam0)
{
	if (!__LIB_0__::func_899(uParam0))
	{
	}
	if (__LIB_0__::func_901(uParam0))
	{
		uParam0->f_1 = (__LIB_0__::func_36() - uParam0->f_2);
		uParam0->f_2 = 0f;
		__LIB_0__::func_785(uParam0, 2);
	}
}

void func_255(var uParam0)
{
	if (!__LIB_0__::func_899(uParam0))
	{
	}
	if (!__LIB_0__::func_901(uParam0))
	{
		uParam0->f_2 = (__LIB_0__::func_36() - uParam0->f_1);
		__LIB_0__::func_784(uParam0, 2);
	}
}

bool func_256(var uParam0)
{
	if ((Global_1935630.f_26 || PED::_0x5407B7288D0478B7(Global_35, 16384) > 0) || __LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return true;
	}
	return false;
}

bool func_257()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	if (Local_15.f_217 <= 0)
	{
		return true;
	}
	iVar0 = Local_15.f_220;
	iVar1 = __LIB_1__::func_976(iVar0);
	vVar2 = { __LIB_1__::func_977(iVar0) };
	fVar5 = __LIB_2__::func_18(iVar0);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_0(iVar0))
		{
			if (!__LIB_2__::func_106(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		Local_15.f_49[iVar0] = VEHICLE::CREATE_VEHICLE(iVar1, vVar2, fVar5, true, true, false, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_15.f_49[iVar0], 0f);
		ENTITY::SET_ENTITY_VISIBLE(Local_15.f_49[iVar0], true);
		ENTITY::_0x3F08C6163A4AB1D6(Local_15.f_49[iVar0]);
		__LIB_2__::func_19(Local_15.f_49[iVar0]);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_15.f_49[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_15.f_49[iVar0], true, false);
		}
	}
	Local_15.f_220++;
	if (Local_15.f_220 >= Local_15.f_217)
	{
		Local_15.f_220 = 0;
		return true;
	}
	return false;
}

bool func_258()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	if (Local_15.f_218 <= 0)
	{
		return true;
	}
	iVar0 = Local_15.f_220;
	iVar1 = __LIB_1__::func_976(iVar0);
	vVar2 = { __LIB_1__::func_977(iVar0) };
	fVar5 = __LIB_2__::func_18(iVar0);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_0(iVar0))
		{
			if (!__LIB_2__::func_106(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		Local_15.f_52[iVar0] = OBJECT::CREATE_OBJECT(iVar1, vVar2, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_15.f_52[iVar0], 0f, 0f, fVar5, 2, true);
		ENTITY::SET_ENTITY_VISIBLE(Local_15.f_52[iVar0], false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_15.f_52[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_15.f_52[iVar0], true, false);
		}
		if (__LIB_0__::func_0(iVar0))
		{
			OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(Local_15.f_52[iVar0], 0);
		}
	}
	Local_15.f_220++;
	if (Local_15.f_220 >= Local_15.f_218)
	{
		Local_15.f_220 = 0;
		return true;
	}
	return false;
}

void func_259(float fParam0)
{
	__LIB_1__::func_585(fParam0, 0f);
}

void func_260(var uParam0, float fParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar0], 0, 0))
		{
			PED::_SET_PED_DAMAGE_MODIFIER((*uParam0)[iVar0], fParam1);
		}
		iVar0++;
	}
}

int func_261(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	vVar3 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	iVar6 = __LIB_1__::func_994(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_262(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = __LIB_2__::func_93(iParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (__LIB_2__::func_197(iParam2, iParam1))
			{
				__LIB_2__::func_89(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_263(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	if (iParam2->f_12 < IntToFloat(__LIB_2__::func_94(iParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (__LIB_2__::func_197(iParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					__LIB_2__::func_89(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

int func_264(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)
{
	int iVar0[5];
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	if (VOLUME::_DOES_VOLUME_EXIST(iParam9))
	{
		iVar12 = __LIB_2__::func_130(&iVar0, iParam0, iParam9, iVar0);
	}
	else
	{
		iVar12 = __LIB_2__::func_203(&iVar0, iParam0, iVar0, vParam1, iParam4);
	}
	iVar13 = 0;
	while (iVar13 < iVar12)
	{
		iVar14 = 0;
		if (VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0[iVar13])))
		{
		}
		else if ((!bParam6 || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0[iVar13], -1) != 0) && (!bParam5 || ENTITY::GET_ENTITY_SPEED(iVar0[iVar13]) >= 1f))
		{
			vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar0[iVar13], true, false) };
			if (!__LIB_0__::func_86(vVar6))
			{
				vVar9 = { 0f, 0f, 0f };
				if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar6, &vVar9, 1, 3f, 0f))
				{
					if (__LIB_0__::func_175(vVar6, vVar9, iParam7, 0))
					{
						iVar14 = 1;
						iVar15 = 1;
					}
				}
			}
		}
		iVar13++;
	}
	return iVar15;
}

void func_265(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!__LIB_2__::func_204(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

void func_266()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < Local_15.f_216)
	{
		if (__LIB_2__::func_1(Local_15.f_40[iVar1], 0, 0))
		{
			iVar0 = PED::_GET_RIDER_OF_MOUNT(Local_15.f_40[iVar1], false);
			if (__LIB_2__::func_1(iVar0, 0, 0))
			{
				PED::_0x931B241409216C1F(iVar0, Local_15.f_40[iVar1], 0);
				__LIB_2__::func_28(&Local_15, iVar1, 32);
			}
		}
		iVar1++;
	}
}

void func_267(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar0], 0, 1))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0], 57, false);
			PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0], 127, true);
		}
		iVar0++;
	}
}

void func_268(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (__LIB_0__::func_1(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!__LIB_1__::func_982(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (__LIB_1__::func_983(iVar0) < __LIB_1__::func_984(iParam1))
				{
					iVar1 = 1;
				}
			}
			__LIB_2__::func_212(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_269(int iParam0, float fParam1)
{
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && __LIB_2__::func_215(Global_35, iParam0, 0, fParam1, 0))
	{
		return true;
	}
	return false;
}

void func_270(int iParam0, bool bParam1, int iParam2)
{
	__LIB_2__::func_137(iParam2);
	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630.f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639.f_11)
		{
			return;
		}
		if (Global_1225639.f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		iParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		iParam0->f_13 = __LIB_1__::func_347(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							__LIB_1__::func_336(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (__LIB_1__::func_995(1))
						{
							__LIB_1__::func_336(iParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!__LIB_1__::func_995(1) || *iParam0 & 8192 != 0))
				{
					__LIB_0__::func_516(iParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!iParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			if (__LIB_2__::func_200(iParam0))
			{
				iParam0->f_15 = __LIB_0__::func_485();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((__LIB_0__::func_485() - iParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	__LIB_2__::func_201(iParam0);
}

int func_271(int iParam0, bool bParam1)
{
	switch (__LIB_0__::func_746(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_272(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bVar0 = __LIB_0__::func_27(iParam3, 1);
	bVar1 = __LIB_0__::func_27(iParam3, 2);
	bVar2 = !__LIB_0__::func_27(iParam3, 4);
	bVar3 = __LIB_0__::func_27(iParam3, 8);
	bVar4 = !__LIB_0__::func_27(iParam3, 16);
	bVar5 = __LIB_0__::func_27(iParam3, 32);
	bVar6 = __LIB_0__::func_27(iParam3, 64);
	return __LIB_2__::func_231(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_273(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
		__LIB_2__::func_147(iParam0, 65536);
	}
	else
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 0);
		__LIB_2__::func_149(iParam0, 65536);
	}
}

void func_274(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0:
			if ((iParam0 % 2) == 0)
			{
				iParam1 = 1;
			}
			else
			{
				iParam1 = 2;
			}
			break;
	}
	switch (iParam1)
	{
		case 1:
			*uParam2 = { -0.31f, 0.03f, -0.22f };
			*uParam3 = { 0f, 50f, 90f };
			break;
		case 2:
			*uParam2 = { 0.31f, 0.03f, -0.22f };
			*uParam3 = { 0f, -50f, 90f };
			break;
	}
	*iParam4 = PED::GET_PED_BONE_INDEX(Local_15.f_40[iParam0], 62111);
}

bool func_275(int iParam0, int iParam1)
{
	return (iParam0->f_1 && iParam1) != 0;
}

void func_276(int iParam0, int iParam1)
{
	iParam0->f_2 = (iParam0->f_2 || iParam1);
}

void func_277(int iParam0, int iParam1)
{
	iParam0->f_1 = (iParam0->f_1 || iParam1);
}

void func_278(int iParam0, int iParam1)
{
	iParam0->f_6 = iParam1;
}

void func_279(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 263, !bParam1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 488, bParam1);
	}
}

void func_280(int iParam0, int iParam1)
{
	iParam0->f_7 = iParam1;
}

void func_281(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iParam4)
	{
		case 0:
			iVar2 = 1;
			iVar0 = 1;
			iVar3 = 1;
			iVar1 = 1;
			break;
		case 1:
			iVar2 = 2;
			iVar0 = 2;
			iVar3 = 2;
			iVar1 = 2;
			break;
		case 2:
			iVar2 = 3;
			iVar0 = 3;
			iVar3 = 3;
			iVar1 = 3;
			break;
		case 3:
			iVar2 = 4;
			iVar0 = 4;
			iVar3 = 3;
			iVar1 = 3;
			break;
	}
	if (bParam8)
	{
		iVar3 = 0;
	}
	if (bParam9)
	{
		iVar1 = 0;
	}
	uParam0->f_3 = iParam1;
	uParam0->f_7 = iParam3;
	uParam0->f_5 = iParam10;
	uParam0->f_6 = iParam11;
	uParam0->f_8 = iVar0;
	uParam0->f_13 = iParam5;
	uParam0->f_14 = iParam6;
	uParam0->f_15 = iParam6;
	uParam0->f_23 = iVar3;
	uParam0->f_24 = iVar3;
	uParam0->f_16 = iVar1;
	uParam0->f_9 = iParam7;
	uParam0->f_10 = iParam7;
	uParam0->f_11 = iParam7;
	switch (iParam2)
	{
		case 0:
			uParam0->f_4 = 21030;
			uParam0->f_17 = iVar2;
			uParam0->f_18 = iVar2;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			break;
		case 1:
			uParam0->f_4 = 21030;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			uParam0->f_17 = 0;
			uParam0->f_18 = 0;
			break;
	}
}

void func_282(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!__LIB_2__::func_4(iParam0, 33554432))
		{
			__LIB_1__::func_978(0);
			__LIB_2__::func_147(iParam0, 33554432);
		}
	}
	else if (__LIB_2__::func_4(iParam0, 33554432))
	{
		__LIB_1__::func_978(1);
		__LIB_2__::func_149(iParam0, 33554432);
	}
}

void func_283(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_979(1);
		__LIB_2__::func_149(iParam0, 8192);
	}
	else
	{
		__LIB_2__::func_29(1);
		__LIB_2__::func_147(iParam0, 8192);
	}
}

bool func_284(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	if (!__LIB_2__::func_155(iParam0, 1))
	{
		return false;
	}
	if (iParam1 >= 0 && iParam1 <= 100)
	{
		iVar0 = iParam1;
	}
	else if (iParam1 > 100)
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = __LIB_2__::func_42(iParam0);
	}
	bVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < iVar0;
	return bVar1;
}

void func_285(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vVar0 = { iParam0->f_209 + Vector(-40f, -fParam1, -fParam1) };
	vVar3 = { iParam0->f_209 + Vector(40f, fParam1, fParam1) };
	vVar6 = { __LIB_2__::func_66(vVar0, vVar3, 0) };
	vVar9 = { __LIB_2__::func_67(vVar0, vVar3, 0) };
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar6, vVar9, 0);
	__LIB_2__::func_161(iParam0->f_209, fParam1, 5);
	__LIB_2__::func_162(iParam0);
}

void func_286(int iParam0)
{
	__LIB_2__::func_168(iParam0, 0);
	Global_40.f_9632[iParam0 /*4*/]++;
	if (Global_40.f_9632[iParam0 /*4*/] > Global_40.f_9632[iParam0 /*4*/].f_1)
	{
		Global_40.f_9632[iParam0 /*4*/].f_1++;
	}
	__LIB_0__::func_703(0, 13);
}

void func_287(int iParam0)
{
	bool bVar0;
	int iVar1;
	iVar1 = __LIB_2__::func_76(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = __LIB_2__::func_77(iVar1);
		__LIB_2__::func_168(iVar1, bVar0);
	}
	iVar1 = __LIB_2__::func_78(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = __LIB_2__::func_77(iVar1);
		__LIB_2__::func_168(iVar1, bVar0);
	}
	iVar1 = __LIB_2__::func_79(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = __LIB_2__::func_77(iVar1);
		__LIB_2__::func_168(iVar1, bVar0);
	}
}

bool func_288(int iParam0)
{
	if ((Global_1935630.f_26 || PED::_0x5407B7288D0478B7(Global_35, 16384) > 0) || __LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return true;
	}
	return false;
}

void func_289(int iParam0)
{
	__LIB_2__::func_154(iParam0, (__LIB_2__::func_40(iParam0) - 6f));
	__LIB_2__::func_179(iParam0, 1);
}

void func_290(int iParam0)
{
	__LIB_2__::func_110(iParam0, 0);
	__LIB_2__::func_111(iParam0, 0);
	__LIB_2__::func_104(iParam0, 1);
	__LIB_2__::func_180(iParam0, 1);
	__LIB_2__::func_181(iParam0, 0);
	__LIB_2__::func_182(iParam0, 1);
	__LIB_2__::func_183(iParam0, 1, 1, 1);
}

Vector3 func_291(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;
	__LIB_2__::func_184(iParam0, iParam1, &vVar0, &uVar3, iParam2);
	return vVar0;
}

int func_292(int iParam0)
{
	if (Local_15.f_57[iParam0] == 0)
	{
		if (!__LIB_2__::func_15(Local_15.f_181, 1))
		{
			Local_15.f_57[iParam0] = __LIB_2__::func_44(joaat("HORSE_CLASS_RIDING"), 1);
		}
		else
		{
			Local_15.f_57[iParam0] = __LIB_2__::func_185(Local_15.f_181, 0, 1);
		}
	}
	return Local_15.f_57[iParam0];
}

int func_293(int iParam0)
{
	if (Local_15.f_75[iParam0] == 0)
	{
		if (Local_15.f_181 != -1 && Local_15.f_181 != 1)
		{
			Local_15.f_75[iParam0] = __LIB_2__::func_186(Local_15.f_181, iParam0, 0);
		}
		else
		{
			Local_15.f_75[iParam0] = __LIB_2__::func_16();
		}
		if (Local_15.f_75[iParam0] == joaat("META_HORSE_SADDLE_ONLY"))
		{
			Local_15.f_75[iParam0] = __LIB_2__::func_16();
		}
	}
	return Local_15.f_75[iParam0];
}

void func_294(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < iParam0->f_215)
	{
		if (__LIB_2__::func_1((*iParam0)[iVar2], 0, 0))
		{
			iVar0 = 0;
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(200, 500);
			__LIB_2__::func_55((*iParam0)[iVar2], &iVar0);
			__LIB_2__::func_190((*iParam0)[iVar2], (iVar0 + iVar1));
		}
		iVar2++;
	}
	switch (iParam0->f_181)
	{
		case 0:
			__LIB_0__::func_11(joaat("G_M_M_UNIDUSTER_01"));
			__LIB_0__::func_11(joaat("G_M_M_UNIDUSTER_03"));
			break;
		case 2:
			__LIB_0__::func_11(joaat("G_M_O_UNIEXCONFEDS_01"));
			__LIB_0__::func_11(joaat("G_M_Y_UNIEXCONFEDS_01"));
			break;
		case 1:
			__LIB_0__::func_11(joaat("G_M_M_UNIINBRED_01"));
			break;
		case 3:
			__LIB_0__::func_11(joaat("G_M_M_UNIMOUNTAINMEN_01"));
			break;
		case 4:
			__LIB_0__::func_11(joaat("G_M_M_UNIRANCHERS_01"));
			break;
		case 5:
			__LIB_0__::func_11(joaat("G_M_M_UNIBANDITOS_01"));
			break;
	}
	__LIB_2__::func_147(iParam0, 128);
}

void func_295(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (__LIB_2__::func_1((*iParam0)[iVar0], 0, 0))
		{
			if (!__LIB_2__::func_25(iParam0, iVar0, 512))
			{
				if (PED::_IS_PED_HOGTIED((*iParam0)[iVar0]))
				{
					TASK::TASK_COMBAT_PED((*iParam0)[iVar0], Global_35, 0, 0);
					PED::SET_PED_KEEP_TASK((*iParam0)[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam0)[iVar0], false);
					__LIB_1__::func_733((*iParam0)[iVar0]);
					__LIB_2__::func_152(iParam0, iVar0, 512);
				}
			}
			else if (!PED::_IS_PED_HOGTIED((*iParam0)[iVar0]))
			{
				__LIB_2__::func_156(iParam0, iVar0, 512);
			}
		}
		iVar0++;
	}
}

bool func_296(int iParam0)
{
	float fVar0;
	if (__LIB_2__::func_26(&Local_15, iParam0, 32))
	{
		if (!__LIB_2__::func_1(PED::_GET_RIDER_OF_MOUNT(Local_15.f_40[iParam0], false), 0, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_2__::func_1(PED::_GET_RIDER_OF_MOUNT(Local_15.f_40[iParam0], true), 0, 1))
	{
		return false;
	}
	if (Local_15.f_216 == Local_15.f_215)
	{
		if (!__LIB_2__::func_1(Local_15[iParam0], 0, 1))
		{
			return true;
		}
	}
	if (!__LIB_2__::func_26(&Local_15, iParam0, 64))
	{
		fVar0 = __LIB_0__::func_265(&(Local_15.f_247));
		if (fVar0 - 9f) > IntToFloat(iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_297(int iParam0)
{
	if (__LIB_2__::func_39(&Local_15, iParam0, 2))
	{
		return false;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, Local_15.f_49[iParam0], true))
	{
		return false;
	}
	if (__LIB_2__::func_39(&Local_15, iParam0, 4))
	{
		return true;
	}
	if (__LIB_2__::func_193(&Local_15, Local_15.f_49[iParam0]))
	{
		return true;
	}
	if (!__LIB_2__::func_39(&Local_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

void func_298()
{
	__LIB_1__::func_539();
}

void func_299(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return;
	}
	__LIB_2__::func_169(iParam0);
	__LIB_1__::func_3(iParam0, uParam1);
	__LIB_2__::func_170(iParam0);
	__LIB_1__::func_4(iParam0, uParam2);
	if (iParam3 != 0)
	{
		__LIB_0__::func_512(iParam0, iParam3, 0);
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, true);
}

bool func_300(int iParam0, float fParam1, int iParam2)
{
	var uVar0[5];
	var uVar6[9];
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	vector3 vVar21;
	vector3 vVar24;
	int iVar27;
	iVar16 = 0;
	while (iVar16 < iParam0->f_216)
	{
		uVar6[iVar17] = iParam0->f_40[iVar16];
		iVar17++;
		iVar16++;
	}
	uVar6[iVar17] = iParam0->f_56;
	iVar17++;
	if (VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		iVar18 = __LIB_2__::func_129(&uVar0, &uVar6, 5, iParam2);
	}
	else
	{
		iVar18 = __LIB_2__::func_202(&uVar0, &uVar6, 5, iParam0->f_209, fParam1);
	}
	iVar16 = 0;
	while (iVar16 < iVar18)
	{
		iVar19 = 0;
		iVar27 = PED::_GET_RIDER_OF_MOUNT(uVar0[iVar16], false);
		if (iVar27 != 0 && iVar27 != Global_35)
		{
			vVar21 = { ENTITY::GET_ENTITY_COORDS(uVar0[iVar16], true, false) };
			if (!__LIB_0__::func_86(vVar21))
			{
				if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar21, &vVar24, 1, 3f, 0f))
				{
					if (__LIB_0__::func_175(vVar21, vVar24, 5f, 0) && PED::IS_PED_HEADING_TOWARDS_POSITION(iVar27, iParam0->f_209, 40f))
					{
						iVar19 = 1;
						iVar20 = 1;
					}
				}
			}
		}
		iVar16++;
	}
	return iVar20;
}

void func_301(int iParam0)
{
	if (__LIB_2__::func_4(iParam0, 16384))
	{
		if (__LIB_2__::func_1(Global_35, 0, 1))
		{
			if (!__LIB_2__::func_4(iParam0, 1024))
			{
				if (iParam0->f_181 != -1 && !__LIB_2__::func_8(iParam0->f_151))
				{
					COMPENDIUM::COMPENDIUM_GANG_AMBUSH_SURVIVED(__LIB_2__::func_31(iParam0->f_181));
					__LIB_2__::func_147(iParam0, 1024);
				}
			}
		}
	}
}

void func_302(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_237))
	{
		__LIB_2__::func_163(&(iParam0->f_237), iParam0->f_209, iParam0->f_151);
	}
	__LIB_2__::func_213(iParam0->f_237, "ambush_restriction", 1, 0, 512, 0, -1082130432 /* Float: -1f */);
	vVar0 = { iParam0->f_209 + Vector(-40f, -fParam1, -fParam1) };
	vVar3 = { iParam0->f_209 + Vector(40f, fParam1, fParam1) };
	vVar6 = { __LIB_2__::func_66(vVar0, vVar3, 0) };
	vVar9 = { __LIB_2__::func_67(vVar0, vVar3, 0) };
	if (__LIB_2__::func_69(iParam0->f_151))
	{
		iVar12 = __LIB_2__::func_164(iParam0);
		__LIB_2__::func_165(iParam0->f_209, fParam1, 0, 0, iVar12);
	}
	PED::SET_PED_NON_CREATION_AREA(vVar6, vVar9);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar6, vVar9, false, 1);
	FIRE::STOP_FIRE_IN_RANGE(iParam0->f_209, fParam1);
	__LIB_2__::func_70(iParam0->f_209, fParam1, 0);
}

bool func_303(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return __LIB_2__::func_214(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_304(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	__LIB_0__::func_47(&Global_1393447, 1);
	__LIB_2__::func_175();
	__LIB_2__::func_176();
	__LIB_2__::func_30((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (__LIB_0__::func_485() / 1000);
		if (Global_1392135.f_1 & 4 != 0)
		{
			Global_1392135.f_1 = (Global_1392135.f_1 - Global_1392135.f_1 & 4);
		}
		__LIB_2__::func_177();
		if (iParam1 == -1)
		{
			if (__LIB_0__::func_27(iParam0, 1))
			{
				__LIB_2__::func_268(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (__LIB_0__::func_27(iParam0, 2))
			{
				__LIB_2__::func_268(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (__LIB_0__::func_27(iParam0, 4))
			{
				__LIB_2__::func_268(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			__LIB_2__::func_209(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		__LIB_1__::func_980(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		__LIB_1__::func_980((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

int func_305(int iParam0)
{
	return __LIB_2__::func_223(iParam0);
	return 0;
}

bool func_306(int iParam0)
{
	float fVar0;
	if (__LIB_2__::func_117(32768))
	{
		fVar0 = 120f;
	}
	else
	{
		fVar0 = 80f;
	}
	if (__LIB_2__::func_269(Local_15.f_84[iParam0], fVar0))
	{
		return false;
	}
	if (__LIB_0__::func_94(Local_15.f_84[iParam0], Global_36, 1) < 10f)
	{
		return false;
	}
	return true;
}

bool func_307(int iParam0, int iParam1)
{
	if (__LIB_2__::func_269(iParam1, 1114636288 /* Float: 60f */) || __LIB_2__::func_118(iParam1, 1, 1) <= 30f)
	{
		return false;
	}
	return true;
}

void func_308(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	__LIB_2__::func_141(&uVar0, &uVar1, &uVar2);
	__LIB_2__::func_99(iParam0, uVar0);
	__LIB_2__::func_100(iParam0, uVar1);
	__LIB_2__::func_101(iParam0, uVar2);
	__LIB_0__::func_837(iParam0, 1);
	__LIB_2__::func_226(iParam0, 1);
}

bool func_309(int iParam0)
{
	if (!__LIB_2__::func_8(iParam0->f_151))
	{
		if (iParam0->f_20 < 60f)
		{
			if (__LIB_2__::func_232(iParam0->f_151, iParam0->f_221))
			{
				return true;
			}
		}
	}
	return false;
}

void func_310(int iParam0, bool bParam1)
{
	if (!__LIB_2__::func_4(iParam0, 256))
	{
		if (__LIB_2__::func_4(iParam0, 32) || bParam1)
		{
			if (__LIB_2__::func_1(iParam0->f_56, 0, 1))
			{
				__LIB_2__::func_145(iParam0->f_56, 0);
				__LIB_2__::func_147(iParam0, 256);
			}
		}
	}
}

void func_311(var uParam0, int iParam1)
{
	if (__LIB_2__::func_4(uParam0, iParam1))
	{
	}
	uParam0->f_96 = (uParam0->f_96 - (uParam0->f_96 && iParam1));
}

int func_312(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return STREAMING::_REQUEST_SCENARIO_TYPE(iParam0, iParam1, iParam2, iParam3);
}

bool func_313(int iParam0)
{
	return STREAMING::_HAS_SCENARIO_TYPE_LOADED(iParam0, false);
}

void func_314(var uParam0, int iParam1, int iParam2, int iParam3)
{
	PED::SET_PED_FIRING_PATTERN((*uParam0)[iParam1], joaat("FIRING_PATTERN_BURST_FIRE"));
	PED::_0x20E54854DEF6A54A((*uParam0)[iParam1], joaat("FIRING_PATTERN_BURST_FIRE_IN_COVER"));
	switch (uParam0->f_181)
	{
		case 2:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE((*uParam0)[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE((*uParam0)[iParam1], 80);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY((*uParam0)[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY((*uParam0)[iParam1], 65);
			}
			break;
		case 0:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE((*uParam0)[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE((*uParam0)[iParam1], 100);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY((*uParam0)[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY((*uParam0)[iParam1], 50);
			}
			break;
		case 1:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE((*uParam0)[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE((*uParam0)[iParam1], 110);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY((*uParam0)[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY((*uParam0)[iParam1], 40);
			}
			break;
		case 5:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE((*uParam0)[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE((*uParam0)[iParam1], 100);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY((*uParam0)[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY((*uParam0)[iParam1], 45);
			}
			break;
	}
}

void func_315(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

void func_316(int iParam0, bool bParam1)
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	int iVar4;
	Var2 = { __LIB_0__::func_14(joaat("TOTAL_PLAYING_TIME")) };
	if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
	{
		uVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
		Global_40.f_9632[iParam0 /*4*/].f_3 = uVar1;
		if (bParam1)
		{
			iVar4 = __LIB_2__::func_46(iParam0, 0);
			iVar4 = BUILTIN::FLOOR((0.666f * IntToFloat(iVar4)));
			Global_40.f_9632[iParam0 /*4*/].f_3 = (Global_40.f_9632[iParam0 /*4*/].f_3 + iVar4);
		}
		else
		{
			Global_40.f_9632[iParam0 /*4*/].f_3 = (Global_40.f_9632[iParam0 /*4*/].f_3 + __LIB_2__::func_46(iParam0, 0));
		}
	}
}

void func_317(var uParam0)
{
	if (!__LIB_2__::func_4(uParam0, 128))
	{
		return;
	}
	switch (uParam0->f_181)
	{
		case 0:
			__LIB_0__::func_11(joaat("G_M_M_UNIDUSTER_01"));
			__LIB_0__::func_11(joaat("G_M_M_UNIDUSTER_03"));
			break;
		case 2:
			__LIB_0__::func_11(joaat("G_M_O_UNIEXCONFEDS_01"));
			__LIB_0__::func_11(joaat("G_M_Y_UNIEXCONFEDS_01"));
			break;
		case 1:
			__LIB_0__::func_11(joaat("G_M_M_UNIINBRED_01"));
			break;
		case 3:
			__LIB_0__::func_11(joaat("G_M_M_UNIMOUNTAINMEN_01"));
			break;
		case 4:
			__LIB_0__::func_11(joaat("G_M_M_UNIRANCHERS_01"));
			break;
		case 5:
			__LIB_0__::func_11(joaat("G_M_M_UNIBANDITOS_01"));
			break;
	}
}

void func_318(var uParam0, int iParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_238))
	{
		uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_209, 0f, 0f, 0f, 80f, 80f, 40f, "volAvoidance");
	}
	__LIB_2__::func_43(uParam0->f_238, iParam1, 262144, 1, 0);
}

void func_319(var uParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vVar0 = { uParam0->f_209 + Vector(-40f, -fParam1, -fParam1) };
	vVar3 = { uParam0->f_209 + Vector(40f, fParam1, fParam1) };
	vVar6 = { __LIB_2__::func_66(vVar0, vVar3, 0) };
	vVar9 = { __LIB_2__::func_67(vVar0, vVar3, 0) };
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar6, vVar9, 0);
	__LIB_2__::func_161(uParam0->f_209, fParam1, 5);
	__LIB_2__::func_240(uParam0);
}

bool func_320(int iParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = __LIB_1__::func_986(iParam0);
		return __LIB_2__::func_243(iParam0, joaat("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

bool func_321(var uParam0)
{
	if (__LIB_1__::func_988(50))
	{
		if (__LIB_1__::func_989(uParam0->f_209, 1, 8, 0))
		{
			return true;
		}
	}
	if (__LIB_2__::func_84())
	{
		return true;
	}
	if (Global_1430231.f_4)
	{
		__LIB_2__::func_85(21);
		return true;
	}
	if (__LIB_0__::func_27(Global_1392581.f_3, 4) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		__LIB_2__::func_85(22);
		return true;
	}
	return false;
}

bool func_322(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			if (__LIB_2__::func_25(uParam0, iVar0, 8))
			{
				if (__LIB_1__::func_992((*uParam0)[iVar0], Global_36, 1) < (70f * 70f) || __LIB_1__::func_472((*uParam0)[iVar0], 70f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

float func_323()
{
	if (!__LIB_1__::func_285(&(Local_274.f_7[0 /*3*/]), 25f))
	{
		return 250f;
	}
	return 120f;
}

void func_324(var uParam0)
{
	__LIB_1__::func_981(uParam0, (__LIB_2__::func_40(uParam0) - 6f));
	__LIB_2__::func_249(uParam0, 1);
}

void func_325(var uParam0)
{
	__LIB_2__::func_110(uParam0, 0);
	__LIB_2__::func_111(uParam0, 0);
	__LIB_2__::func_104(uParam0, 1);
	__LIB_2__::func_250(uParam0, 1);
	__LIB_2__::func_251(uParam0, 0);
	__LIB_2__::func_252(uParam0, 1);
	__LIB_2__::func_253(uParam0, 1, 1, 1);
}

void func_326(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar0], 0, 0))
		{
			if (!__LIB_2__::func_25(uParam0, iVar0, 512))
			{
				if (PED::_IS_PED_HOGTIED((*uParam0)[iVar0]))
				{
					TASK::TASK_COMBAT_PED((*uParam0)[iVar0], Global_35, 0, 0);
					PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0], false);
					__LIB_1__::func_733((*uParam0)[iVar0]);
					__LIB_2__::func_237(uParam0, iVar0, 512);
				}
			}
			else if (!PED::_IS_PED_HOGTIED((*uParam0)[iVar0]))
			{
				__LIB_2__::func_239(uParam0, iVar0, 512);
			}
		}
		iVar0++;
	}
}

int func_327(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar1], 0, 1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_328()
{
	if (__LIB_2__::func_1(Local_15.f_56, 0, 0))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_15.f_56, true, joaat("REL_GANG_LEMOYNE_RAIDERS"));
	}
}

bool func_329(var uParam0)
{
	if (!__LIB_0__::func_75(&(uParam0->f_182.f_13)))
	{
		return true;
	}
	if (!__LIB_1__::func_285(&(uParam0->f_182.f_13), uParam0->f_182.f_16))
	{
		return true;
	}
	return false;
}

bool func_330(var uParam0, float fParam1, int iParam2)
{
	var uVar0[5];
	var uVar6[9];
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	vector3 vVar21;
	vector3 vVar24;
	int iVar27;
	iVar16 = 0;
	while (iVar16 < uParam0->f_216)
	{
		uVar6[iVar17] = uParam0->f_40[iVar16];
		iVar17++;
		iVar16++;
	}
	uVar6[iVar17] = uParam0->f_56;
	iVar17++;
	if (VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		iVar18 = __LIB_2__::func_129(&uVar0, &uVar6, 5, iParam2);
	}
	else
	{
		iVar18 = __LIB_2__::func_202(&uVar0, &uVar6, 5, uParam0->f_209, fParam1);
	}
	iVar16 = 0;
	while (iVar16 < iVar18)
	{
		iVar19 = 0;
		iVar27 = PED::_GET_RIDER_OF_MOUNT(uVar0[iVar16], false);
		if (iVar27 != 0 && iVar27 != Global_35)
		{
			vVar21 = { ENTITY::GET_ENTITY_COORDS(uVar0[iVar16], true, false) };
			if (!__LIB_0__::func_86(vVar21))
			{
				if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar21, &vVar24, 1, 3f, 0f))
				{
					if (__LIB_0__::func_175(vVar21, vVar24, 5f, 0) && PED::IS_PED_HEADING_TOWARDS_POSITION(iVar27, uParam0->f_209, 40f))
					{
						iVar19 = 1;
						iVar20 = 1;
					}
				}
			}
		}
		iVar16++;
	}
	return iVar20;
}

void func_331(var uParam0)
{
	if (__LIB_2__::func_4(uParam0, 16384))
	{
		if (__LIB_2__::func_1(Global_35, 0, 1))
		{
			if (!__LIB_2__::func_4(uParam0, 1024))
			{
				if (uParam0->f_181 != -1 && !__LIB_2__::func_8(uParam0->f_151))
				{
					COMPENDIUM::COMPENDIUM_GANG_AMBUSH_SURVIVED(__LIB_2__::func_31(uParam0->f_181));
					__LIB_2__::func_234(uParam0, 1024);
				}
			}
		}
	}
}

void func_332()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_15.f_216)
	{
		if (!__LIB_2__::func_26(&Local_15, iVar0, 16))
		{
			if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 0))
			{
				if (__LIB_2__::func_296(iVar0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_15.f_40[iVar0], Local_15.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK(Local_15.f_40[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_40[iVar0], false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_15.f_40[iVar0]));
					__LIB_2__::func_28(&Local_15, iVar0, 16);
				}
			}
		}
		iVar0++;
	}
}

int func_333(var uParam0)
{
	int iVar0;
	int iVar1;
	__LIB_1__::func_283(&(uParam0->f_241), 0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar0], 0, 1))
		{
			if (MAP::DOES_BLIP_EXIST(uParam0->f_22[iVar0]))
			{
				if (__LIB_0__::func_94((*uParam0)[iVar0], Global_36, 1) > 40f || __LIB_1__::func_285(&(uParam0->f_241), 15f))
				{
					__LIB_0__::func_325(&(uParam0->f_22[iVar0]));
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0[iVar0]);
					return 1;
				}
			}
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= uParam0->f_215)
	{
		return 1;
	}
	return 0;
}

void func_334(var uParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_237))
	{
		__LIB_2__::func_163(&(uParam0->f_237), uParam0->f_209, uParam0->f_151);
	}
	__LIB_2__::func_261(uParam0->f_237, "ambush_restriction", 1, 0, 512, 0, -1082130432 /* Float: -1f */);
	vVar0 = { uParam0->f_209 + Vector(-40f, -fParam1, -fParam1) };
	vVar3 = { uParam0->f_209 + Vector(40f, fParam1, fParam1) };
	vVar6 = { __LIB_2__::func_66(vVar0, vVar3, 0) };
	vVar9 = { __LIB_2__::func_67(vVar0, vVar3, 0) };
	if (__LIB_2__::func_69(uParam0->f_151))
	{
		iVar12 = __LIB_2__::func_241(uParam0);
		__LIB_2__::func_165(uParam0->f_209, fParam1, 0, 0, iVar12);
	}
	PED::SET_PED_NON_CREATION_AREA(vVar6, vVar9);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar6, vVar9, false, 1);
	FIRE::STOP_FIRE_IN_RANGE(uParam0->f_209, fParam1);
	__LIB_2__::func_70(uParam0->f_209, fParam1, 0);
}

int func_335(var uParam0, float fParam1, int iParam2)
{
	int iVar0[3];
	int iVar4;
	int iVar5;
	bool bVar6;
	iVar4 = 0;
	while (iVar4 < uParam0->f_217)
	{
		iVar0[iVar5] = uParam0->f_49[iVar4];
		iVar5++;
		iVar4++;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0[iVar5] = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
		iVar5++;
	}
	return __LIB_2__::func_264(&iVar0, uParam0->f_209, fParam1, 0, 0, 1084227584 /* Float: 5f */, bVar6, iParam2);
}

bool func_336(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4, int iParam5, int iParam6)
{
	return __LIB_2__::func_303(iParam0, iParam1, sParam2, "", fParam3, iParam6, 0, 1, 1, fParam3 >= 0f, bParam4, iParam5, 1, 0, 0);
}

void func_337(var uParam0, bool bParam1)
{
	if (!__LIB_2__::func_4(uParam0, 256))
	{
		if (__LIB_2__::func_4(uParam0, 32) || bParam1)
		{
			if (__LIB_2__::func_1(uParam0->f_56, 0, 1))
			{
				__LIB_2__::func_145(uParam0->f_56, 0);
				__LIB_2__::func_234(uParam0, 256);
			}
		}
	}
}

int func_338(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;
	uParam1->f_10 = __LIB_0__::func_97(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (__LIB_0__::func_86(uParam1->f_6))
		{
		}
	}
	bVar0 = __LIB_0__::func_28();
	if (*uParam1)
	{
		if (bVar0 && !__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (__LIB_1__::func_105(5))
			{
				__LIB_1__::func_162(5);
				__LIB_1__::func_778(5);
				__LIB_0__::func_149(0);
				__LIB_0__::func_148(0);
			}
		}
	}
	if (__LIB_0__::func_979(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[37 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				__LIB_1__::func_54(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!__LIB_1__::func_105(0) && __LIB_1__::func_105(1))
			{
				__LIB_1__::func_779(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (__LIB_0__::func_988())
			{
				__LIB_0__::func_989();
			}
			__LIB_0__::func_149(0);
			__LIB_0__::func_148(0);
			__LIB_0__::func_150(uParam1->f_6);
		}
	}
	if (!__LIB_0__::func_797(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((__LIB_0__::func_821(uParam1->f_10) == 0 || __LIB_0__::func_809(uParam1->f_10) == 0) || __LIB_0__::func_815(uParam1->f_10) == 0)
			{
				__LIB_2__::func_308(uParam1->f_10);
			}
			__LIB_1__::func_106(uParam1->f_10);
			__LIB_0__::func_822(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!__LIB_0__::func_86(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (__LIB_1__::func_107(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			Var8 = { __LIB_1__::func_622(uParam1->f_10) };
			Var10 = { __LIB_2__::func_229() };
			__LIB_2__::func_299(iVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!__LIB_0__::func_823(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		__LIB_0__::func_824(uParam1->f_10);
		if (uParam1->f_2 && !__LIB_0__::func_86(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	__LIB_1__::func_108(uParam1->f_10);
	if (__LIB_0__::func_823(uParam1->f_10))
	{
		iVar16 = __LIB_0__::func_825(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

bool func_339(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_115[iParam1] && iParam2) != 0;
}

int func_340(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

bool func_341(var uParam0)
{
	return uParam0->f_2 == 2;
}

bool func_342(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return UIFEED::_0x59FA676177DBE4C9(iParam0) == 4;
}

bool func_343(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false, false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				return PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2);
			}
		}
	}
	return false;
}

void func_344(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_345(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(uParam0, 8);
	}
	else
	{
		__LIB_0__::func_516(uParam0, 8);
	}
}

bool func_346(var uParam0)
{
	if (!__LIB_2__::func_4(uParam0, 131072))
	{
		if (Global_1935630.f_40 == 0)
		{
			if (!__LIB_2__::func_4(uParam0, 16777216) || uParam0->f_20 < 60f)
			{
				return true;
			}
		}
	}
	return false;
}

void func_347(int iParam0)
{
	__LIB_0__::func_105(1);
}

void func_348()
{
	UIFEED::_0xDD1232B332CBB9E7(4, 1, 0);
}

bool func_349(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case joaat("EVENT_PLAYER_PROMPT_TRIGGERED"):
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

void func_350(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

void func_351(int* iParam0, int iParam1)
{
	if (!__LIB_1__::func_489(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			__LIB_1__::func_471(iParam0, 14);
		}
	}
}

Vector3 func_352(int iParam0)
{
	if (Global_1945938[iParam0 /*18*/].f_5 == 1)
	{
		return VOLUME::_GET_VOLUME_COORDS(Global_1945938[iParam0 /*18*/].f_10);
	}
	else if (Global_1945938[iParam0 /*18*/].f_5 == 2)
	{
		return Global_1945938[iParam0 /*18*/].f_6;
	}
	else if (Global_1945938[iParam0 /*18*/].f_5 == 3)
	{
		return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_1945938[iParam0 /*18*/].f_11, Global_1945938[iParam0 /*18*/].f_12);
	}
	return 0f, 0f, 0f;
}

void func_353(var uParam0, int iParam1)
{
	if (__LIB_1__::func_565(uParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(uParam0, iParam1);
	}
}

void func_354(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!__LIB_1__::func_565(uParam0))
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, iParam4, iParam5, iParam6, iParam7);
		if (__LIB_1__::func_565(uParam0))
		{
		}
	}
}

void func_355(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (__LIB_0__::func_2() != -1)
	{
		uVar3 = Global_36638.f_1444[iVar1];
		MISC::CLEAR_BIT(&uVar3, iVar2);
		Global_36638.f_1444[iVar1] = uVar3;
		return;
	}
	uVar4 = Global_40.f_7832[iVar1];
	MISC::CLEAR_BIT(&uVar4, iVar2);
	Global_40.f_7832[iVar1] = uVar4;
}

void func_356(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<23> Var0;
	float fVar25;
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	fVar25 = BUILTIN::TO_FLOAT((iParam4 / 1000));
	if (bParam5)
	{
		TASK::_0xE7FA07624574B79A(iParam0, iParam1, iParam2, iParam3, fVar25, 1, 0, 0, 0);
	}
	TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, iParam4, 0, 51, 0);
	__LIB_2__::func_281(&Var0, iParam1, 0, -1, 3, 3, 2, 1, 0, 0, 0, 0);
	_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Var0);
}

void func_357(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return;
	}
	if (iParam5 && PED::_0xF9331B3A314EB49D(iParam0))
	{
		PED::_0xF1C03A5352243A30(iParam0);
		return;
	}
	if (__LIB_0__::func_86(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			PED::_0x802092B07E3B1EEA(iParam0, vParam1, iParam6);
			break;
		case 5:
			PED::_0x463803429297117C(iParam0, vParam1, iParam6, 0);
			break;
		case 6:
			PED::_0x62FDAD5E01D2DD47(iParam0, vParam1, iParam6, 0);
			break;
		case 4:
			PED::_0xEC6935EBE0847B90(iParam0, vParam1);
			break;
		case 2:
			PED::_0xEEED8FAFEC331A70(iParam0, vParam1, iParam6);
			break;
		case 1:
			PED::_0xF1C03A5352243A30(iParam0);
			break;
		case 7:
			PED::_0xA3A9299C4F2ADB98(iParam0);
			break;
		default:
			PED::_0xA3A9299C4F2ADB98(iParam0);
			break;
	}
}

void func_358(int iParam0)
{
	__LIB_2__::func_316(iParam0, 0);
	Global_40.f_9632[iParam0 /*4*/]++;
	if (Global_40.f_9632[iParam0 /*4*/] > Global_40.f_9632[iParam0 /*4*/].f_1)
	{
		Global_40.f_9632[iParam0 /*4*/].f_1++;
	}
	__LIB_0__::func_703(0, 13);
}

void func_359(int iParam0)
{
	bool bVar0;
	int iVar1;
	iVar1 = __LIB_2__::func_76(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = __LIB_2__::func_77(iVar1);
		__LIB_2__::func_316(iVar1, bVar0);
	}
	iVar1 = __LIB_2__::func_78(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = __LIB_2__::func_77(iVar1);
		__LIB_2__::func_316(iVar1, bVar0);
	}
	iVar1 = __LIB_2__::func_79(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = __LIB_2__::func_77(iVar1);
		__LIB_2__::func_316(iVar1, bVar0);
	}
}

void func_360(int* iParam0, char* sParam1)
{
	if (__LIB_0__::func_139(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		__LIB_1__::func_484(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	__LIB_1__::func_491(iParam0, 1);
}

void func_361(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (__LIB_1__::func_502(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				__LIB_1__::func_501(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_362(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;
	if (iParam1->f_11 & 1 != 0)
	{
		if (PED::_IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, __LIB_1__::func_508((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_363(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_1__::func_502(uParam0[iVar0 /*17*/]))
		{
			__LIB_1__::func_471(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

bool func_364(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_1__::func_510(16))
	{
		return Global_1935630.f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					__LIB_1__::func_511(16);
					Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630.f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_365(int iParam0)
{
	return (__LIB_1__::func_512(iParam0, 4) || __LIB_1__::func_512(iParam0, 5));
}

int func_366(int iParam0)
{
	return __LIB_1__::func_512(iParam0, 6);
}

bool func_367(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (__LIB_0__::func_567(iParam1, 1))
		{
			return true;
		}
	}
	else if (__LIB_1__::func_514(iParam1, 1))
	{
		__LIB_1__::func_515(iParam1, 1);
		return true;
	}
	return false;
}

var func_368(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;
	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	__LIB_0__::func_56(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_369(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	if (bParam3 && !__LIB_0__::func_139(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	__LIB_1__::func_522(iParam0, 18, 0, 1);
	__LIB_1__::func_522(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_370(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (!__LIB_0__::func_75(&uParam0))
	{
		return false;
	}
	if (__LIB_1__::func_871(&uParam0) <= iParam3 + 500)
	{
		return false;
	}
	return true;
}

void func_371(var uParam0)
{
	float fVar0;
	fVar0 = __LIB_2__::func_34(uParam0->f_151);
	__LIB_2__::func_319(uParam0, fVar0);
}

void func_372(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_1((*iParam0)[iParam1], 0, 0))
	{
		return;
	}
	PED::SET_PED_COMBAT_RANGE((*iParam0)[iParam1], 0);
	PED::SET_PED_COMBAT_MOVEMENT((*iParam0)[iParam1], 2);
}

void func_373()
{
	__LIB_2__::func_104(&(Local_15.f_152), 1);
	__LIB_2__::func_105(&(Local_15.f_152), 1);
	__LIB_2__::func_50(&(Local_15.f_152), 1);
	__LIB_2__::func_51(&(Local_15.f_152), 1);
	__LIB_2__::func_111(&(Local_15.f_152), 1);
	__LIB_2__::func_52(&(Local_15.f_152), 1);
	__LIB_2__::func_250(&(Local_15.f_152), 1);
}

int func_374(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar0], 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_375(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (uParam0->f_182.f_17 & 4 != 0)
	{
		return;
	}
	if (uParam0->f_182.f_17 & 128 != 0)
	{
		if (!__LIB_2__::func_47(&(uParam0->f_182), 256))
		{
			if (__LIB_2__::func_47(&(uParam0->f_182), 64))
			{
				if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_STOP")))
				{
					__LIB_1__::func_283(&(uParam0->f_182.f_10), 0);
					if (__LIB_0__::func_33(&(uParam0->f_182.f_10)))
					{
						__LIB_2__::func_112(&(uParam0->f_182.f_10));
					}
					if (__LIB_1__::func_285(&(uParam0->f_182.f_10), 0.2f))
					{
						if (Global_1935630.f_40 != 0 && bParam1)
						{
							TASK::TASK_HORSE_ACTION(Global_1935630.f_40, 8, 0, 0);
							__LIB_2__::func_48(&(uParam0->f_182), 256);
						}
					}
				}
				else if (__LIB_0__::func_75(&(uParam0->f_182.f_10)))
				{
					__LIB_2__::func_113(&(uParam0->f_182.f_10));
				}
			}
		}
	}
	if (uParam0->f_182.f_17 & 8 != 0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		__LIB_2__::func_48(&(uParam0->f_182), 4);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
		if (__LIB_2__::func_1(PED::GET_MOUNT(Global_35), 0, 1))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PED::GET_MOUNT(Global_35), false);
		}
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	if (uParam0->f_182.f_17 & 32768 != 0 && uParam0->f_182.f_17 & 64 == 0)
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (uParam0->f_182.f_17 & 1 == 0)
	{
		if (bVar1 && (__LIB_2__::func_49(uParam0->f_182[3]) || __LIB_2__::func_47(&(uParam0->f_182), 16)))
		{
			if (__LIB_2__::func_47(&(uParam0->f_182), 32))
			{
				if (__LIB_2__::func_329(uParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, uParam0->f_182.f_22);
					}
				}
				return;
			}
			if (!__LIB_2__::func_47(&(uParam0->f_182), 1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				__LIB_2__::func_48(&(uParam0->f_182), 1);
			}
		}
		else if (bVar1 && __LIB_2__::func_49(uParam0->f_182[2]))
		{
			if (__LIB_2__::func_329(uParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, uParam0->f_182.f_22);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, 6f);
					}
				}
			}
		}
		else if (bVar1 && __LIB_2__::func_49(uParam0->f_182[1]))
		{
			if (__LIB_2__::func_329(uParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, uParam0->f_182.f_23);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, 9f);
					}
				}
			}
		}
		else if (__LIB_2__::func_49(uParam0->f_182[0]))
		{
			if (!__LIB_2__::func_47(&(uParam0->f_182), 64))
			{
				__LIB_2__::func_48(&(uParam0->f_182), 64);
			}
			if (__LIB_2__::func_329(uParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, uParam0->f_182.f_24);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, 12f);
					}
				}
			}
		}
	}
	if (bVar1 && uParam0->f_182.f_17 & 1 != 0)
	{
		if (!__LIB_2__::func_47(&(uParam0->f_182), 2))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iVar3, 5f, 5000, false);
					__LIB_1__::func_283(&(uParam0->f_182.f_7), 0);
					__LIB_2__::func_48(&(uParam0->f_182), 2);
				}
			}
			else
			{
				if (__LIB_0__::func_27(uParam0->f_182.f_5, 16))
				{
					bVar4 = __LIB_2__::func_134(Global_35, &(uParam0->f_182.f_26), 1, 0, 256, 0);
				}
				else
				{
					bVar4 = __LIB_2__::func_135(Global_35, &(uParam0->f_182.f_6), uParam0->f_182.f_5, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
				}
				if (bVar4)
				{
					if (__LIB_0__::func_27(uParam0->f_182.f_5, 8))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
						if (__LIB_2__::func_1(iVar0, 0, 1))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
						}
					}
					uParam0->f_182.f_18 = { Global_36 };
					if (__LIB_2__::func_1(iVar0, 0, 1))
					{
						TASK::TASK_STAND_STILL(iVar0, BUILTIN::FLOOR((uParam0->f_182.f_21 * 1000f)));
					}
					__LIB_1__::func_283(&(uParam0->f_182.f_7), 0);
					__LIB_2__::func_48(&(uParam0->f_182), 2);
				}
			}
		}
		else if (!__LIB_2__::func_47(&(uParam0->f_182), 4))
		{
			if (__LIB_1__::func_285(&(uParam0->f_182.f_7), uParam0->f_182.f_21))
			{
				if (__LIB_0__::func_27(uParam0->f_182.f_5, 8))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
					if (__LIB_2__::func_1(iVar0, 0, 1))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
					}
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_2__::func_48(&(uParam0->f_182), 4);
			}
			else
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
				if (__LIB_2__::func_1(iVar0, 0, 1))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
				}
			}
		}
	}
}

bool func_376(var uParam0)
{
	return __LIB_2__::func_333(uParam0);
	return false;
}

void func_377(var uParam0)
{
	float fVar0;
	fVar0 = __LIB_2__::func_34(uParam0->f_151);
	__LIB_2__::func_334(uParam0, fVar0);
}

int func_378()
{
	if (Global_1894899.f_187)
	{
		return 1;
	}
	if (__LIB_1__::func_185(16) && !__LIB_1__::func_185(21))
	{
		return 1;
	}
	return 0;
}

int func_379(var uParam0, int iParam1)
{
	var uVar0;
	struct<11> Var1;
	Var1.f_10 = 7;
	Var1 = 0;
	Var1.f_1 = iParam1;
	Var1.f_2 = 0;
	return __LIB_2__::func_338(&uVar0, &Var1);
}

void func_380(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
		__LIB_2__::func_234(uParam0, 65536);
	}
	else
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 0);
		__LIB_2__::func_311(uParam0, 65536);
	}
}

float func_381()
{
	return 120f;
}

void func_382(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (__LIB_0__::func_27(iParam1, 1))
		{
			__LIB_2__::func_234(uParam0, 262144);
		}
		if (__LIB_0__::func_27(iParam1, 2))
		{
			__LIB_2__::func_234(uParam0, 524288);
		}
	}
	else
	{
		if (__LIB_0__::func_27(iParam1, 1))
		{
			__LIB_2__::func_311(uParam0, 262144);
		}
		if (__LIB_0__::func_27(iParam1, 2))
		{
			__LIB_2__::func_311(uParam0, 524288);
		}
	}
}

bool func_383(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_384(var uParam0, int iParam1)
{
	uParam0->f_6 = iParam1;
}

bool func_385(int iParam0)
{
	return PED::GET_PED_CONFIG_FLAG(iParam0, 161, false);
}

int func_386(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_387(int iParam0)
{
	int iVar0;
	int iVar1;
	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (iParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630.f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

int func_388(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_509(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

float func_389(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1 && !__LIB_0__::func_139(iParam0))
	{
		return -1f;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	return Global_1945938[iVar0 /*18*/].f_9;
}

int func_390(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1 && !__LIB_0__::func_139(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	return Global_1945938[iVar0 /*18*/].f_10;
}

void func_391(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!__LIB_2__::func_4(uParam0, 33554432))
		{
			__LIB_1__::func_978(0);
			__LIB_2__::func_234(uParam0, 33554432);
		}
	}
	else if (__LIB_2__::func_4(uParam0, 33554432))
	{
		__LIB_1__::func_978(1);
		__LIB_2__::func_311(uParam0, 33554432);
	}
}

void func_392(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_979(1);
		__LIB_2__::func_311(uParam0, 8192);
	}
	else
	{
		__LIB_2__::func_29(1);
		__LIB_2__::func_234(uParam0, 8192);
	}
}

bool func_393(var uParam0)
{
	if (__LIB_0__::func_27(*uParam0, 4))
	{
		return true;
	}
	return false;
}

void func_394(int* iParam0, int* iParam1)
{
	if (!__LIB_1__::func_489(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			__LIB_1__::func_471(iParam1, 19);
			__LIB_1__::func_471(iParam0, 23);
			__LIB_2__::func_351(iParam1, 2);
		}
	}
}

Vector3 func_395(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_17(iParam0);
	return __LIB_2__::func_352(iVar0);
}

void func_396()
{
	int iVar0;
	if (Local_15.f_19 < Local_15.f_215)
	{
		iVar0 = Local_15.f_19;
		if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
		{
			if (!__LIB_2__::func_25(&Local_15, iVar0, 8))
			{
				if (__LIB_1__::func_472(Local_15[iVar0], 200f, -1082130432 /* Float: -1f */, Local_15.f_9[iVar0], -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_237(&Local_15, iVar0, 8);
				}
			}
		}
	}
	else if (Local_15.f_19 < (Local_15.f_215 + Local_15.f_216))
	{
		iVar0 = (Local_15.f_19 - Local_15.f_215);
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[iVar0]))
		{
			if (!__LIB_2__::func_26(&Local_15, iVar0, 8))
			{
				if (__LIB_1__::func_472(Local_15.f_40[iVar0], 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_28(&Local_15, iVar0, 8);
				}
			}
		}
	}
	else if (Local_15.f_19 < ((Local_15.f_215 + Local_15.f_216) + Local_15.f_217))
	{
		iVar0 = ((Local_15.f_19 - Local_15.f_215) - Local_15.f_216);
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[iVar0]))
		{
			if (!__LIB_2__::func_39(&Local_15, iVar0, 8))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(Local_15.f_49[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_15.f_49[iVar0]))
				{
					if (__LIB_2__::func_109(Local_15.f_49[iVar0], 200f, -1082130432 /* Float: -1f */))
					{
						__LIB_2__::func_238(&Local_15, iVar0, 8);
					}
				}
			}
		}
	}
	Local_15.f_19++;
	if (Local_15.f_19 >= ((Local_15.f_215 + Local_15.f_216) + Local_15.f_217))
	{
		Local_15.f_19 = 0;
	}
}

void func_397(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < uParam0->f_215)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar2], 0, 0))
		{
			iVar0 = 0;
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(200, 500);
			__LIB_2__::func_55((*uParam0)[iVar2], &iVar0);
			__LIB_2__::func_320((*uParam0)[iVar2], (iVar0 + iVar1));
		}
		iVar2++;
	}
	switch (uParam0->f_181)
	{
		case 0:
			__LIB_0__::func_11(joaat("G_M_M_UNIDUSTER_01"));
			__LIB_0__::func_11(joaat("G_M_M_UNIDUSTER_03"));
			break;
		case 2:
			__LIB_0__::func_11(joaat("G_M_O_UNIEXCONFEDS_01"));
			__LIB_0__::func_11(joaat("G_M_Y_UNIEXCONFEDS_01"));
			break;
		case 1:
			__LIB_0__::func_11(joaat("G_M_M_UNIINBRED_01"));
			break;
		case 3:
			__LIB_0__::func_11(joaat("G_M_M_UNIMOUNTAINMEN_01"));
			break;
		case 4:
			__LIB_0__::func_11(joaat("G_M_M_UNIRANCHERS_01"));
			break;
		case 5:
			__LIB_0__::func_11(joaat("G_M_M_UNIBANDITOS_01"));
			break;
	}
	__LIB_2__::func_234(uParam0, 128);
}

bool func_398(int iParam0)
{
	if (!__LIB_0__::func_272(iParam0, 3))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return true;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) == iParam0)
	{
		return true;
	}
	if (PED::_0xD0B7AEB56229D317(iParam0) == Global_35)
	{
		return true;
	}
	if (PED::_0xD0B7AEB56229D317(Global_35) == iParam0)
	{
		return true;
	}
	return false;
}

void func_399(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	if (!__LIB_2__::func_1((*uParam0)[iParam1], 0, 1))
	{
		return;
	}
	if (!PED::_0xCC2B20596E29E4E3((*uParam0)[iParam1], 98))
	{
		if (__LIB_2__::func_1(Global_1935630.f_40, 0, 0))
		{
			if (Global_1935630.f_40 == iParam2)
			{
				bVar0 = true;
			}
		}
		if (!__LIB_2__::func_1(iParam2, 0, 1) || PED::IS_PED_FLEEING(iParam2))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (!PED::IS_PED_ON_MOUNT((*uParam0)[iParam1]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iParam1], 98, true);
			}
		}
	}
	else if (__LIB_2__::func_1(iParam2, 0, 0))
	{
		if (Global_1935630.f_40 != iParam2)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iParam1], 98, false);
		}
	}
}

bool func_400(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (__LIB_2__::func_124(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > __LIB_2__::func_92(iParam1)
		{
			fVar3 = __LIB_2__::func_90(iParam1);
			if (iParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_401(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (Global_1935630.f_44 == joaat("WEAPON_LASSO") && Global_1935630.f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && __LIB_0__::func_665(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(__LIB_1__::func_372(iVar0, 0)))
		{
			if (__LIB_2__::func_0(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_402(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bVar0 = (!VOLUME::_DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (__LIB_2__::func_364(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

int func_403(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945938[iVar0 /*18*/].f_11 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				__LIB_1__::func_578(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_404(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (*uParam0 == 0)
	{
		if (__LIB_1__::func_871(&uParam1) < 500)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, joaat("INPUT_FOCUS_CAM")))
			{
				*uParam0 = 2;
			}
		}
		else if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_FOCUS_CAM")))
		{
			*uParam0 = 1;
		}
	}
}

bool func_405()
{
	if (__LIB_1__::func_285(&(Local_15.f_244), 45f) && __LIB_0__::func_0())
	{
		__LIB_2__::func_371(&Local_15);
		__LIB_0__::func_37(&(Local_15.f_244));
	}
	return false;
}

bool func_406(var uParam0)
{
	if (!__LIB_2__::func_4(uParam0, 524288))
	{
		if (uParam0->f_20 < 60f)
		{
			if (__LIB_2__::func_330(uParam0, 60f, uParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

int func_407(int iParam0)
{
	if (__LIB_0__::func_181())
	{
		return 0;
	}
	return __LIB_2__::func_271(Global_1347702[58 /*49*/].f_15, 1);
}

void func_408(var uParam0, bool bParam1)
{
	__LIB_1__::func_748(&(uParam0->f_5), 1, 1);
	if (bParam1)
	{
		__LIB_2__::func_298();
	}
}

void func_409(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_65(&Global_1393447, 65536))
	{
		__LIB_0__::func_380(&Global_1393447, 65536);
		__LIB_1__::func_309(-1, 0, 0, 0, 0);
		__LIB_2__::func_304(1, -1, 0, 0, 0);
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
		if (bParam1)
		{
			__LIB_0__::func_747(120, 0, 1);
		}
		else
		{
			__LIB_0__::func_747(60, 0, 1);
		}
		iVar0 = __LIB_2__::func_57(iParam0);
		iVar1 = __LIB_2__::func_58(iParam0);
		if (__LIB_2__::func_15(iVar1, 0))
		{
			switch (iVar1)
			{
				case 0:
				case 2:
					__LIB_2__::func_191(iVar1);
					break;
			}
		}
		else
		{
			iVar2 = __LIB_2__::func_59();
			switch (iVar2)
			{
				case 0:
				case 2:
					__LIB_2__::func_60(0, iVar2);
					break;
			}
		}
		if (__LIB_0__::func_27(iVar0, 1))
		{
			__LIB_2__::func_192();
		}
		else if (__LIB_0__::func_27(iVar0, 2))
		{
			__LIB_2__::func_61(0);
		}
		__LIB_2__::func_358(iParam0);
		__LIB_2__::func_359(iParam0);
	}
}

bool func_410(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return __LIB_2__::func_271(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

void func_411(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !__LIB_1__::func_489(iParam0, 13))
	{
		__LIB_1__::func_471(iParam0, 0);
	}
	else
	{
		__LIB_1__::func_491(iParam0, 0);
	}
	if (__LIB_0__::func_139(iParam0->f_6))
	{
		if (bParam2)
		{
			__LIB_1__::func_748(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_412(var uParam0)
{
	if (!__LIB_2__::func_4(uParam0, 262144))
	{
		if (uParam0->f_20 < 60f)
		{
			if (__LIB_2__::func_335(uParam0, 60f, uParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

void func_413()
{
	int iVar0;
	__LIB_1__::func_283(&(Local_15.f_247), 0);
	if (__LIB_1__::func_285(&(Local_15.f_247), 5f))
	{
		__LIB_2__::func_337(&Local_15, 0);
	}
	if (__LIB_1__::func_285(&(Local_15.f_247), 3f))
	{
		__LIB_2__::func_326(&Local_15);
	}
	__LIB_2__::func_332();
	if (!__LIB_2__::func_4(&Local_15, 8388608))
	{
		if (!__LIB_2__::func_4(&Local_15, 4194304))
		{
			if (Local_15.f_181 == 2)
			{
				__LIB_2__::func_260(&Local_15, 1.1f);
			}
			else
			{
				__LIB_2__::func_260(&Local_15, 1.2f);
			}
			__LIB_2__::func_234(&Local_15, 4194304);
		}
		if (__LIB_2__::func_4(&Local_15, 4194304))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			if ((iVar0 < (Local_15.f_225 - 60) || IntToFloat(iVar0) < (IntToFloat(Local_15.f_225) * 0.7f)) || iVar0 < 80)
			{
				__LIB_2__::func_260(&Local_15, 1f);
				__LIB_2__::func_234(&Local_15, 8388608);
			}
		}
	}
}

void func_414(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (__LIB_0__::func_27(iParam1, 1))
		{
			__LIB_2__::func_147(iParam0, 262144);
		}
		if (__LIB_0__::func_27(iParam1, 2))
		{
			__LIB_2__::func_147(iParam0, 524288);
		}
	}
	else
	{
		if (__LIB_0__::func_27(iParam1, 1))
		{
			__LIB_2__::func_149(iParam0, 262144);
		}
		if (__LIB_0__::func_27(iParam1, 2))
		{
			__LIB_2__::func_149(iParam0, 524288);
		}
	}
}

bool func_415(var uParam0)
{
	if (Local_15.f_21 == 0f)
	{
		*uParam0 = 210f;
	}
	else if (Local_15.f_21 < (__LIB_2__::func_381() - 10f))
	{
		*uParam0 = __LIB_2__::func_381();
	}
	else
	{
		*uParam0 = 210f;
	}
	if (Local_15.f_20 > *uParam0)
	{
		return true;
	}
	switch (Local_15.f_151)
	{
		case 29:
		case 30:
			if (Local_15.f_95 < 10)
			{
				return true;
			}
			break;
		case 0:
		case 11:
			if (!__LIB_2__::func_4(&Local_15, 512) && !__LIB_2__::func_4(&Local_15, 16384))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_416()
{
	int iVar0;
	if (Local_15.f_19 < Local_15.f_215)
	{
		iVar0 = Local_15.f_19;
		if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
		{
			if (!__LIB_2__::func_25(&Local_15, iVar0, 8))
			{
				if (__LIB_1__::func_472(Local_15[iVar0], 200f, -1082130432 /* Float: -1f */, Local_15.f_9[iVar0], -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_152(&Local_15, iVar0, 8);
				}
			}
		}
	}
	else if (Local_15.f_19 < (Local_15.f_215 + Local_15.f_216))
	{
		iVar0 = (Local_15.f_19 - Local_15.f_215);
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[iVar0]))
		{
			if (!__LIB_2__::func_26(&Local_15, iVar0, 8))
			{
				if (__LIB_1__::func_472(Local_15.f_40[iVar0], 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_28(&Local_15, iVar0, 8);
				}
			}
		}
	}
	else if (Local_15.f_19 < ((Local_15.f_215 + Local_15.f_216) + Local_15.f_217))
	{
		iVar0 = ((Local_15.f_19 - Local_15.f_215) - Local_15.f_216);
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[iVar0]))
		{
			if (!__LIB_2__::func_39(&Local_15, iVar0, 8))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(Local_15.f_49[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_15.f_49[iVar0]))
				{
					if (__LIB_2__::func_109(Local_15.f_49[iVar0], 200f, -1082130432 /* Float: -1f */))
					{
						__LIB_2__::func_153(&Local_15, iVar0, 8);
					}
				}
			}
		}
	}
	Local_15.f_19++;
	if (Local_15.f_19 >= ((Local_15.f_215 + Local_15.f_216) + Local_15.f_217))
	{
		Local_15.f_19 = 0;
	}
}

void func_417(int iParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6, float fParam7, bool bParam8)
{
	int iVar0;
	if (!__LIB_2__::func_4(iParam0, 32))
	{
		if (!__LIB_0__::func_71(Global_35))
		{
			iParam0->f_56 = Global_1935630.f_41;
			if (__LIB_2__::func_1(iParam0->f_56, 0, 1))
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0->f_56, -1))
				{
					TASK::CLEAR_PED_TASKS(iParam0->f_56, true, false);
				}
				POPULATION::_0xB56D41A694E42E86(iParam1, 2048, 0, 0, -1, -1, 0);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_56, 355, true);
				if (__LIB_0__::func_86(vParam2))
				{
					TASK::TASK_SMART_FLEE_PED(iParam0->f_56, (*iParam0)[0], fParam6, 6000, 0, 2f, 0);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam2, fParam5, 20000, fParam7, 0, 40000f);
					if (bParam8)
					{
						TASK::TASK_SMART_FLEE_PED(0, (*iParam0)[0], fParam6, 6000, 0, 2f, 0);
					}
					__LIB_1__::func_474(iParam0->f_56, &iVar0, 0, 0, 1, 1);
				}
				__LIB_2__::func_147(iParam0, 32);
			}
		}
	}
}

void func_418(var uParam0)
{
	if (__LIB_2__::func_4(uParam0, 16384))
	{
		if (__LIB_2__::func_1(Global_35, 0, 1))
		{
			if (!__LIB_2__::func_4(uParam0, 1024))
			{
				if (uParam0->f_181 != -1 && !__LIB_2__::func_8(uParam0->f_151))
				{
					COMPENDIUM::COMPENDIUM_GANG_AMBUSH_SURVIVED(__LIB_2__::func_31(uParam0->f_181));
					__LIB_2__::func_147(uParam0, 1024);
				}
			}
		}
	}
}

int func_419(int iParam0, bool bParam1)
{
	return __LIB_2__::func_143(iParam0, Global_1894899.f_2, bParam1);
}

void func_420()
{
	int iVar0;
	int iVar1;
	int iVar2[8];
	int iVar11;
	int iVar12;
	int iVar13;
	iVar1 = 4748164;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
		{
			if (__LIB_2__::func_247(iVar0))
			{
				iVar2[iVar0] = PED::GET_MOUNT(Local_15[iVar0]);
				PED::DELETE_PED(&(Local_15[iVar0]));
			}
			else
			{
				if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
				{
					if (!__LIB_2__::func_4(&Local_15, 16384))
					{
						__LIB_2__::func_32(&(Local_15[iVar0]));
					}
					__LIB_2__::func_24(Local_15[iVar0], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 5, true);
					PED::_0x24C82EF607105FAA(Local_15[iVar0], joaat("AGGRESSIVE"));
					PED::_0xB8B6430EAD2D2437(Local_15[iVar0], 993130593);
					if (__LIB_2__::func_178(Local_15[iVar0]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_15[iVar0], joaat("REL_PLAYER_DISLIKE"));
					}
					PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
					if ((PED::IS_PED_IN_COMBAT(Local_15[iVar0], Global_35) || PED::IS_PED_FLEEING(Local_15[iVar0])) || __LIB_2__::func_25(&Local_15, iVar0, 256))
					{
						if (PED::IS_PED_IN_COMBAT(Local_15[iVar0], 0))
						{
							TASK::CLEAR_PED_TASKS(Local_15[iVar0], false, false);
							TASK::_TASK_SMART_FLEE_STYLE_PED(Local_15[iVar0], Global_35, 4, iVar1, -1082130432 /* Float: -1f */, -1, 0);
						}
						PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
					}
					else if ((Local_15.f_215 == Local_15.f_216 && __LIB_2__::func_1(Local_15.f_40[iVar0], 0, 1)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_15[iVar0], true))
					{
						iVar11 = Local_15.f_40[iVar0];
						PED::_0x931B241409216C1F(Local_15.f_40[iVar0], iVar11, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar12);
						TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_40[iVar0], 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
						if (!__LIB_0__::func_86(Local_15.f_118[iVar0 /*4*/].f_1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_15.f_118[iVar0 /*4*/].f_1, 2f, 20000, 0.25f, 0, 40000f);
						}
						TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
						__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
						PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
					}
					else
					{
						iVar11 = 0;
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_15[iVar0], true) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(Local_15[iVar0], true)))
						{
							if (PED::_GET_SEAT_PED_IS_USING(Local_15[iVar0]) == -1)
							{
								iVar13 = PED::GET_VEHICLE_PED_IS_IN(Local_15[iVar0], true);
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								if (!__LIB_0__::func_86(Local_15.f_118[iVar0 /*4*/].f_1))
								{
									TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iVar13, Local_15.f_118[iVar0 /*4*/].f_1, 7f, 524419, 6, 5f, 7f, 0);
								}
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, -1f, 0, 0);
								__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
							}
						}
						else if (PED::IS_PED_ON_MOUNT(Local_15[iVar0]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar12);
							if (!__LIB_0__::func_86(Local_15.f_118[iVar0 /*4*/].f_1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_15.f_118[iVar0 /*4*/].f_1, 2f, 20000, 0.25f, 0, 40000f);
							}
							TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
							__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
							PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
						}
						else
						{
							if (__LIB_2__::func_33(iVar0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, iVar1, -1082130432 /* Float: -1f */, -1, 0);
								__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
								PED::_0x39A2FC5AF55A52B1(Local_15[iVar0], 2000);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1f, 128, 0);
								__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
							}
							PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_15[iVar0], false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(Local_15[iVar0]), -1) == Local_15[iVar0])
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_15[iVar0]));
				}
				else if ((!PED::IS_PED_FLEEING(Local_15[iVar0]) && !PED::IS_PED_IN_COMBAT(Local_15[iVar0], Global_35)) && !__LIB_2__::func_25(&Local_15, iVar0, 128))
				{
					PED::_0x39A2FC5AF55A52B1(Local_15[iVar0], -1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_15[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[iVar0]))
		{
			if (__LIB_2__::func_248(iVar0, &iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_84[iVar0]))
				{
					OBJECT::DELETE_OBJECT(&(Local_15.f_84[iVar0]));
				}
				PED::DELETE_PED(&(Local_15.f_40[iVar0]));
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_84[iVar0]))
				{
					if (__LIB_2__::func_306(iVar0))
					{
						OBJECT::DELETE_OBJECT(&(Local_15.f_84[iVar0]));
					}
					else
					{
						ENTITY::DETACH_ENTITY(Local_15.f_84[iVar0], true, true);
						PHYSICS::ACTIVATE_PHYSICS(Local_15.f_84[iVar0]);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_15.f_84[iVar0]));
					}
				}
				if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 1))
				{
					if (__LIB_0__::func_75(&(Local_15.f_247)))
					{
						if (!__LIB_2__::func_1(PED::_GET_RIDER_OF_MOUNT(Local_15.f_40[iVar0], false), 0, 0))
						{
							TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_15.f_40[iVar0], Local_15.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
							PED::SET_PED_KEEP_TASK(Local_15.f_40[iVar0], true);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(PED::_0xF103823FFE72BB49(Local_15.f_40[iVar0])) && !ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(Local_15.f_40[iVar0], true)))
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_15.f_40[iVar0], Local_15.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(Local_15.f_40[iVar0], true);
					}
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_15.f_40[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[iVar0]))
		{
			if (__LIB_2__::func_297(iVar0))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_15.f_49[iVar0]));
			}
			else if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == Local_15.f_49[iVar0] && PED::GET_VEHICLE_PED_IS_IN(Global_35, true) == Local_15.f_49[iVar0])
			{
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_15.f_49[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_52[iVar0]))
		{
			if (__LIB_2__::func_307(&Local_15, Local_15.f_52[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(Local_15.f_52[iVar0]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_15.f_52[iVar0]));
			}
		}
		iVar0++;
	}
}

bool func_421()
{
	int iVar0;
	if (!__LIB_2__::func_4(&Local_15, 16384))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_12();
	switch (iVar0)
	{
		case 105:
			if (__LIB_2__::func_230() && __LIB_2__::func_37())
			{
				return true;
			}
			break;
		case 95:
			if (__LIB_2__::func_230() && __LIB_2__::func_37())
			{
				return true;
			}
			break;
	}
	if (__LIB_2__::func_37())
	{
		if (Local_15.f_151 != 43)
		{
			if (__LIB_1__::func_923())
			{
				if (__LIB_2__::func_38(iVar0))
				{
					return false;
				}
				switch (iVar0)
				{
					case 82:
						return false;
					case 5:
					case 22:
					case 26:
					case 35:
					case 38:
					case 56:
					case 69:
					case 76:
					case 78:
					case 92:
					case 105:
					case 115:
					case 120:
						__LIB_1__::func_283(&(Local_15.f_253), 0);
						if (__LIB_1__::func_285(&(Local_15.f_253), 0.5f))
						{
							return true;
						}
						break;
				}
			}
		}
	}
	return false;
}

bool func_422(var uParam0)
{
	if (!__LIB_2__::func_8(uParam0->f_151))
	{
		if (uParam0->f_20 < 60f)
		{
			if (__LIB_2__::func_232(uParam0->f_151, uParam0->f_221))
			{
				return true;
			}
		}
	}
	return false;
}

void func_423(var uParam0, bool bParam1)
{
	if (!__LIB_2__::func_4(uParam0, 256))
	{
		if (__LIB_2__::func_4(uParam0, 32) || bParam1)
		{
			if (__LIB_2__::func_1(uParam0->f_56, 0, 1))
			{
				__LIB_2__::func_145(uParam0->f_56, 0);
				__LIB_2__::func_147(uParam0, 256);
			}
		}
	}
}

int func_424(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int func_425(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
	{
		return -1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2))
	{
		return 2;
	}
	return -2;
}

void func_426(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_427(var uParam0)
{
	if (!__LIB_2__::func_47(&(uParam0->f_182), 8))
	{
		__LIB_2__::func_48(&(uParam0->f_182), 8);
	}
}

void func_428(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!__LIB_2__::func_4(uParam0, 33554432))
		{
			__LIB_1__::func_978(0);
			__LIB_2__::func_147(uParam0, 33554432);
		}
	}
	else if (__LIB_2__::func_4(uParam0, 33554432))
	{
		__LIB_1__::func_978(1);
		__LIB_2__::func_149(uParam0, 33554432);
	}
}

void func_429(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!ENTITY::IS_ENTITY_VISIBLE((*iParam0)[iParam1]))
		{
			ENTITY::_0xA91E6CF94404E8C9((*iParam0)[iParam1]);
			ENTITY::SET_ENTITY_VISIBLE((*iParam0)[iParam1], true);
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE((*iParam0)[iParam1], true);
		}
		ENTITY::SET_ENTITY_COLLISION((*iParam0)[iParam1], true, false);
		ENTITY::SET_ENTITY_PROOFS((*iParam0)[iParam1], 0, false);
		ENTITY::FREEZE_ENTITY_POSITION((*iParam0)[iParam1], false);
		__LIB_2__::func_156(iParam0, iParam1, 4);
	}
	else
	{
		ENTITY::SET_ENTITY_VISIBLE((*iParam0)[iParam1], false);
		ENTITY::SET_ENTITY_COLLISION((*iParam0)[iParam1], false, false);
		ENTITY::SET_ENTITY_PROOFS((*iParam0)[iParam1], 127, false);
		ENTITY::FREEZE_ENTITY_POSITION((*iParam0)[iParam1], true);
		__LIB_2__::func_152(iParam0, iParam1, 4);
	}
}

void func_430(bool bParam0, int iParam1)
{
	int iVar0;
	iParam1 = __LIB_0__::func_97(iParam1);
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iVar0, bParam0);
}

int func_431(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = __LIB_1__::func_507(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (__LIB_0__::func_195(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

void func_432(var uParam0)
{
	__LIB_1__::func_981(uParam0, (__LIB_2__::func_40(uParam0) - 6f));
	__LIB_2__::func_179(uParam0, 1);
}

void func_433(var uParam0)
{
	__LIB_2__::func_110(uParam0, 0);
	__LIB_2__::func_111(uParam0, 0);
	__LIB_2__::func_104(uParam0, 1);
	__LIB_2__::func_180(uParam0, 1);
	__LIB_2__::func_251(uParam0, 0);
	__LIB_2__::func_182(uParam0, 1);
	__LIB_2__::func_183(uParam0, 1, 1, 1);
}

bool func_434(int iParam0)
{
	if (!__LIB_2__::func_4(iParam0, 524288))
	{
		if (iParam0->f_20 < 60f)
		{
			if (__LIB_2__::func_300(iParam0, 60f, iParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

void func_435()
{
	__LIB_2__::func_11();
	__LIB_2__::func_416();
}

void func_436(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (iParam0->f_182.f_17 & 4 != 0)
	{
		return;
	}
	if (iParam0->f_182.f_17 & 128 != 0)
	{
		if (!__LIB_2__::func_47(&(iParam0->f_182), 256))
		{
			if (__LIB_2__::func_47(&(iParam0->f_182), 64))
			{
				if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_STOP")))
				{
					__LIB_1__::func_283(&(iParam0->f_182.f_10), 0);
					if (__LIB_0__::func_33(&(iParam0->f_182.f_10)))
					{
						__LIB_2__::func_112(&(iParam0->f_182.f_10));
					}
					if (__LIB_1__::func_285(&(iParam0->f_182.f_10), 0.2f))
					{
						if (Global_1935630.f_40 != 0 && bParam1)
						{
							TASK::TASK_HORSE_ACTION(Global_1935630.f_40, 8, 0, 0);
							__LIB_2__::func_48(&(iParam0->f_182), 256);
						}
					}
				}
				else if (__LIB_0__::func_75(&(iParam0->f_182.f_10)))
				{
					__LIB_2__::func_113(&(iParam0->f_182.f_10));
				}
			}
		}
	}
	if (iParam0->f_182.f_17 & 8 != 0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		__LIB_2__::func_48(&(iParam0->f_182), 4);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
		if (__LIB_2__::func_1(PED::GET_MOUNT(Global_35), 0, 1))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PED::GET_MOUNT(Global_35), false);
		}
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	if (iParam0->f_182.f_17 & 32768 != 0 && iParam0->f_182.f_17 & 64 == 0)
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (iParam0->f_182.f_17 & 1 == 0)
	{
		if (bVar1 && (__LIB_2__::func_49(iParam0->f_182[3]) || __LIB_2__::func_47(&(iParam0->f_182), 16)))
		{
			if (__LIB_2__::func_47(&(iParam0->f_182), 32))
			{
				if (__LIB_2__::func_210(iParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, iParam0->f_182.f_22);
					}
				}
				return;
			}
			if (!__LIB_2__::func_47(&(iParam0->f_182), 1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				__LIB_2__::func_48(&(iParam0->f_182), 1);
			}
		}
		else if (bVar1 && __LIB_2__::func_49(iParam0->f_182[2]))
		{
			if (__LIB_2__::func_210(iParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, iParam0->f_182.f_22);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, 6f);
					}
				}
			}
		}
		else if (bVar1 && __LIB_2__::func_49(iParam0->f_182[1]))
		{
			if (__LIB_2__::func_210(iParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, iParam0->f_182.f_23);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, 9f);
					}
				}
			}
		}
		else if (__LIB_2__::func_49(iParam0->f_182[0]))
		{
			if (!__LIB_2__::func_47(&(iParam0->f_182), 64))
			{
				__LIB_2__::func_48(&(iParam0->f_182), 64);
			}
			if (__LIB_2__::func_210(iParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, iParam0->f_182.f_24);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, 12f);
					}
				}
			}
		}
	}
	if (bVar1 && iParam0->f_182.f_17 & 1 != 0)
	{
		if (!__LIB_2__::func_47(&(iParam0->f_182), 2))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iVar3, 5f, 5000, false);
					__LIB_1__::func_283(&(iParam0->f_182.f_7), 0);
					__LIB_2__::func_48(&(iParam0->f_182), 2);
				}
			}
			else
			{
				if (__LIB_0__::func_27(iParam0->f_182.f_5, 16))
				{
					bVar4 = __LIB_2__::func_134(Global_35, &(iParam0->f_182.f_26), 1, 0, 256, 0);
				}
				else
				{
					bVar4 = __LIB_2__::func_135(Global_35, &(iParam0->f_182.f_6), iParam0->f_182.f_5, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
				}
				if (bVar4)
				{
					if (__LIB_0__::func_27(iParam0->f_182.f_5, 8))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
						if (__LIB_2__::func_1(iVar0, 0, 1))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
						}
					}
					iParam0->f_182.f_18 = { Global_36 };
					if (__LIB_2__::func_1(iVar0, 0, 1))
					{
						TASK::TASK_STAND_STILL(iVar0, BUILTIN::FLOOR((iParam0->f_182.f_21 * 1000f)));
					}
					__LIB_1__::func_283(&(iParam0->f_182.f_7), 0);
					__LIB_2__::func_48(&(iParam0->f_182), 2);
				}
			}
		}
		else if (!__LIB_2__::func_47(&(iParam0->f_182), 4))
		{
			if (__LIB_1__::func_285(&(iParam0->f_182.f_7), iParam0->f_182.f_21))
			{
				if (__LIB_0__::func_27(iParam0->f_182.f_5, 8))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
					if (__LIB_2__::func_1(iVar0, 0, 1))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
					}
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_2__::func_48(&(iParam0->f_182), 4);
			}
			else
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
				if (__LIB_2__::func_1(iVar0, 0, 1))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
				}
			}
		}
	}
}

bool func_437(int iParam0, float fParam1, int iParam2)
{
	int iVar0[3];
	int iVar4;
	int iVar5;
	bool bVar6;
	iVar4 = 0;
	while (iVar4 < iParam0->f_217)
	{
		iVar0[iVar5] = iParam0->f_49[iVar4];
		iVar5++;
		iVar4++;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0[iVar5] = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
		iVar5++;
	}
	return __LIB_2__::func_264(&iVar0, iParam0->f_209, fParam1, 0, 0, 1084227584 /* Float: 5f */, bVar6, iParam2);
}

void func_438(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_65(&Global_1393447, 65536))
	{
		__LIB_0__::func_380(&Global_1393447, 65536);
		__LIB_1__::func_309(-1, 0, 0, 0, 0);
		__LIB_2__::func_304(1, -1, 0, 0, 0);
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
		if (bParam1)
		{
			__LIB_0__::func_747(120, 0, 1);
		}
		else
		{
			__LIB_0__::func_747(60, 0, 1);
		}
		iVar0 = __LIB_2__::func_57(iParam0);
		iVar1 = __LIB_2__::func_58(iParam0);
		if (__LIB_2__::func_15(iVar1, 0))
		{
			switch (iVar1)
			{
				case 0:
				case 2:
					__LIB_2__::func_191(iVar1);
					break;
			}
		}
		else
		{
			iVar2 = __LIB_2__::func_59();
			switch (iVar2)
			{
				case 0:
				case 2:
					__LIB_2__::func_60(0, iVar2);
					break;
			}
		}
		if (__LIB_0__::func_27(iVar0, 1))
		{
			__LIB_2__::func_192();
		}
		else if (__LIB_0__::func_27(iVar0, 2))
		{
			__LIB_2__::func_61(0);
		}
		__LIB_2__::func_286(iParam0);
		__LIB_2__::func_287(iParam0);
	}
}

int func_439(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 999999.9f;
	iVar3 = -1;
	iVar2 = iParam1;
	while (iVar2 <= iParam2)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar2], 0, 0))
		{
			fVar1 = uParam0->f_9[iVar2];
			if (fVar1 < fVar0 && (!bParam3 || __LIB_2__::func_227(0f, 1, (*uParam0)[iVar2], 1)))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar3;
}

bool func_440(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_407(0))
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

Vector3 func_441()
{
	if (__LIB_2__::func_410(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (__LIB_2__::func_410(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

void func_442(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar17;
	if (!__LIB_0__::func_65(&Global_1393447, 65536))
	{
		__LIB_0__::func_47(&Global_1393447, 16);
		__LIB_0__::func_47(&Global_1393447, 65536);
		__LIB_2__::func_147(iParam0, 2097152);
		Global_40.f_9632.f_194 = iParam0->f_151;
		__LIB_2__::func_273(iParam0, 1);
		__LIB_1__::func_309(-1, 0, 0, 0, 0);
		__LIB_1__::func_924();
		Var0.f_6 = -1082130432;
		Var0.f_7 = -1082130432;
		Var0.f_8 = -1082130432;
		Var0.f_9 = -1082130432;
		Var0.f_10 = -1082130432;
		Var0.f_11 = -1082130432;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		Var0 = joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW");
		Var0.f_6 = 100f;
		if (!__LIB_0__::func_86(iParam0->f_212))
		{
			Var0.f_3 = { iParam0->f_212 };
		}
		else
		{
			Var0.f_3 = { iParam0->f_209 };
		}
		if (__LIB_2__::func_8(iParam0->f_151))
		{
			Var0.f_8 = 40f;
			Var0.f_9 = 40f;
			Var0.f_7 = 40f;
		}
		else
		{
			Var0.f_8 = 120f;
			Var0.f_9 = 120f;
			Var0.f_7 = 120f;
		}
		iParam0->f_93 = EVENT::_CREATE_SHOCKING_EVENT(&Var0);
		if (!__LIB_2__::func_5())
		{
			__LIB_2__::func_6(1);
			__LIB_2__::func_147(iParam0, 4);
		}
		if (bParam1)
		{
			__LIB_2__::func_304(1, -1, 0, 0, 0);
		}
		else
		{
			__LIB_2__::func_175();
			__LIB_2__::func_176();
		}
		if (__LIB_2__::func_8(iParam0->f_151))
		{
			__LIB_0__::func_747(30, 0, 1);
		}
		else
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("GANG_AMBUSH_ENCOUNTERED")), 1);
			__LIB_2__::func_283(iParam0, 0);
		}
		MISC::_0x1096603B519C905F(__LIB_2__::func_9(iParam0->f_151));
		__LIB_2__::func_294(iParam0);
		__LIB_0__::func_703(0, 13);
		iVar17 = 0;
		while (iVar17 < iParam0->f_215)
		{
			if (__LIB_2__::func_1((*iParam0)[iVar17], 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY((*iParam0)[iVar17], Global_35, -1, 0, 51, 0);
			}
			iVar17++;
		}
	}
}

bool func_443()
{
	if (Global_1894899.f_187)
	{
		return true;
	}
	if (__LIB_2__::func_410(16) && !__LIB_2__::func_410(21))
	{
		return true;
	}
	return false;
}

bool func_444(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return false;
		}
	}
	if (bParam3 && __LIB_1__::func_679(iParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (__LIB_2__::func_419(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

void func_445(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
		__LIB_2__::func_147(uParam0, 65536);
	}
	else
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 0);
		__LIB_2__::func_149(uParam0, 65536);
	}
}

bool func_446(int iParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "bValidRobber") && DECORATOR::DECOR_GET_BOOL(iParam0, "bValidRobber"))
	{
		return true;
	}
	return false;
}

void func_447(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	if (__LIB_0__::func_2() != -1)
	{
		uVar0 = Global_36638.f_1444[*uParam0];
		MISC::SET_BIT(&uVar0, *uParam1);
		Global_36638.f_1444[*uParam0] = uVar0;
		return;
	}
	uVar1 = Global_40.f_7832[*uParam0];
	MISC::SET_BIT(&uVar1, *uParam1);
	Global_40.f_7832[*uParam0] = uVar1;
}

bool func_448(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, iParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_449(int iParam0)
{
	if (iParam0 < 200)
	{
		AUDIO::_PLAY_SOUND_FROM_ENTITY("LOOT_MONEY", Global_35, "LOOT_BODY_SOUNDSET", false, 0, 0);
	}
	else
	{
		AUDIO::_PLAY_SOUND_FROM_ENTITY("LOOT_MONEY_BILLS", Global_35, "LOOT_BODY_SOUNDSET", false, 0, 0);
	}
}

void func_450(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	if (bParam2 && !__LIB_0__::func_139(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	Global_1945938[iVar0 /*18*/].f_9 = fParam1;
	HUD::_UIPROMPT_CONTEXT_SET_SIZE(Global_1945938[iVar0 /*18*/].f_3, fParam1);
}

void func_451(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	__LIB_0__::func_37(&(iParam0->f_18));
}

bool func_452()
{
	return Global_1905944.f_5693 != -1;
}

bool func_453()
{
	int iVar0;
	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) <= 4);
}

bool func_454()
{
	var uVar0;
	uVar0 = Global_1905944.f_5695;
	Global_1905944.f_5695 = 0;
	return uVar0;
}

bool func_455()
{
	if (((__LIB_0__::func_163(Global_35, 501393341) || __LIB_0__::func_163(Global_35, 1553520516)) || __LIB_0__::func_163(Global_35, 1920417248)) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_EXIT")))
	{
		return true;
	}
	return false;
}

bool func_456(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

void func_457(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_979(1);
		__LIB_2__::func_149(uParam0, 8192);
	}
	else
	{
		__LIB_2__::func_29(1);
		__LIB_2__::func_147(uParam0, 8192);
	}
}

bool func_458(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if ((__LIB_0__::func_163(Global_35, 501393341) || __LIB_0__::func_163(Global_35, 1553520516)) || __LIB_0__::func_163(Global_35, 1920417248))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
		{
			return false;
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		return true;
	}
	return false;
}

void func_459()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			__LIB_1__::func_207(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

char* func_460(int iParam0)
{
	if (__LIB_2__::func_383(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_461(int iParam0)
{
	__LIB_0__::func_37(&uLocal_0);
	__LIB_0__::func_82(1, iParam0, 0);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_2__::func_348();
}

void func_462(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !__LIB_0__::func_75(uParam0))
	{
		__LIB_0__::func_268(uParam0, fParam1);
	}
}

void func_463(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = __LIB_1__::func_986(iParam0);
		__LIB_2__::func_74(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

bool func_464(int iParam0)
{
	int iVar0;
	iVar0 = Global_1935630.f_40;
	if (__LIB_0__::func_2() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = __LIB_2__::func_387(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = __LIB_2__::func_387(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (__LIB_1__::func_363(iVar0) == -1)
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return false;
	}
	iParam0->f_14 = iVar0;
	return true;
}

int func_465(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_356(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (__LIB_0__::func_192(iParam0, 1399091007))
	{
		__LIB_2__::func_350(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_466(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || __LIB_0__::func_139(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (__LIB_0__::func_572(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_467(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (__LIB_0__::func_472())
	{
		__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

void func_468(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < uParam0->f_215)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar2], 0, 0))
		{
			iVar0 = 0;
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(200, 500);
			__LIB_2__::func_55((*uParam0)[iVar2], &iVar0);
			__LIB_2__::func_190((*uParam0)[iVar2], (iVar0 + iVar1));
		}
		iVar2++;
	}
	switch (uParam0->f_181)
	{
		case 0:
			__LIB_0__::func_11(joaat("G_M_M_UNIDUSTER_01"));
			__LIB_0__::func_11(joaat("G_M_M_UNIDUSTER_03"));
			break;
		case 2:
			__LIB_0__::func_11(joaat("G_M_O_UNIEXCONFEDS_01"));
			__LIB_0__::func_11(joaat("G_M_Y_UNIEXCONFEDS_01"));
			break;
		case 1:
			__LIB_0__::func_11(joaat("G_M_M_UNIINBRED_01"));
			break;
		case 3:
			__LIB_0__::func_11(joaat("G_M_M_UNIMOUNTAINMEN_01"));
			break;
		case 4:
			__LIB_0__::func_11(joaat("G_M_M_UNIRANCHERS_01"));
			break;
		case 5:
			__LIB_0__::func_11(joaat("G_M_M_UNIBANDITOS_01"));
			break;
	}
	__LIB_2__::func_147(uParam0, 128);
}

void func_469()
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false);
	iVar1 = ENTITY::GET_ENTITY_HEALTH(Global_35);
	fVar2 = (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar0));
	if (fVar2 > 0.15f)
	{
		__LIB_0__::func_854(Global_35, 0.15f, 0);
	}
	else if (iVar1 > 1)
	{
		PED::APPLY_DAMAGE_TO_PED(Global_35, 1, 1, -1, 0);
	}
}

bool func_470()
{
	if (__LIB_1__::func_510(4))
	{
		return Global_1935630.f_27;
	}
	return __LIB_1__::func_999();
}

void func_471(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;
	if (iParam0 == joaat("AMMO_MOONSHINEJUG"))
	{
		return;
	}
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return;
	}
	if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!__LIB_0__::func_455())
	{
		__LIB_0__::func_456(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, __LIB_0__::func_196(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, __LIB_0__::func_196(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && __LIB_0__::func_774(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = __LIB_0__::func_356(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	if (iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION"))
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!__LIB_0__::func_457(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = joaat("COLOR_GREYMID");
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar12 = joaat("COLOR_YELLOWDARK");
		}
	}
	sVar15 = __LIB_0__::func_54(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, __LIB_0__::func_776(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || __LIB_0__::func_192(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, __LIB_0__::func_776(iParam0));
	}
	__LIB_2__::func_368(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_472(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

bool func_473(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			__LIB_1__::func_148(&(iParam1->f_18));
			return false;
		}
		else if (__LIB_0__::func_75(&(iParam1->f_18)))
		{
			__LIB_0__::func_37(&(iParam1->f_18));
			return false;
		}
	}
	if (!__LIB_0__::func_75(&(iParam1->f_18)))
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
	return __LIB_1__::func_313(&(iParam1->f_18), fParam2);
	return true;
}

void func_474(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

bool func_475(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (__LIB_1__::func_513(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (__LIB_0__::func_572(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				__LIB_1__::func_221(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			__LIB_1__::func_221(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			__LIB_2__::func_369(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

void func_476()
{
	__LIB_2__::func_11();
	__LIB_2__::func_396();
}

bool func_477(var uParam0)
{
	if (TASK::_0x038B1F1674F0E242(Global_35))
	{
		__LIB_1__::func_283(&(uParam0->f_256), 0);
		if (__LIB_1__::func_285(&(uParam0->f_256), 1.5f))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			return true;
		}
	}
	return false;
}

bool func_478(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return __LIB_2__::func_214(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_479(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (__LIB_2__::func_401(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = __LIB_2__::func_90(iParam1);
			if (__LIB_2__::func_91(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = __LIB_2__::func_92(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						__LIB_2__::func_89(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							__LIB_2__::func_89(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

void func_480(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (__LIB_0__::func_139((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					__LIB_1__::func_748(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						(uParam0[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						(uParam0[iVar0 /*17*/])->f_5 = "";
						(uParam0[iVar0 /*17*/])->f_14 = 0;
						(uParam0[iVar0 /*17*/])->f_13 = "";
						(uParam0[iVar0 /*17*/])->f_15 = 0;
						(uParam0[iVar0 /*17*/])->f_11 = "";
						(uParam0[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

bool func_481(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { __LIB_2__::func_3(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return __LIB_0__::func_975(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, bParam4) };
	return __LIB_0__::func_939(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_482(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!__LIB_1__::func_489(iParam0, 13))
		{
			if (bParam2)
			{
				__LIB_2__::func_411(iParam0, 0, 0);
			}
			__LIB_1__::func_471(iParam0, 13);
		}
	}
	else if (__LIB_1__::func_489(iParam0, 13))
	{
		__LIB_1__::func_491(iParam0, 13);
	}
}

void func_483(var uParam0, bool bParam1)
{
	if (__LIB_0__::func_65(&Global_1393447, 65536))
	{
		if (__LIB_2__::func_15(uParam0->f_181, 0))
		{
			__LIB_2__::func_107(uParam0->f_181, bParam1);
		}
		__LIB_2__::func_409(uParam0->f_151, bParam1);
	}
}

void func_484()
{
	int iVar0;
	int iVar1;
	int iVar2[8];
	int iVar11;
	int iVar12;
	int iVar13;
	iVar1 = 4748164;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
		{
			if (__LIB_2__::func_247(iVar0))
			{
				iVar2[iVar0] = PED::GET_MOUNT(Local_15[iVar0]);
				PED::DELETE_PED(&(Local_15[iVar0]));
			}
			else
			{
				if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
				{
					if (!__LIB_2__::func_4(&Local_15, 16384))
					{
						__LIB_2__::func_32(&(Local_15[iVar0]));
					}
					__LIB_2__::func_24(Local_15[iVar0], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 5, true);
					PED::_0x24C82EF607105FAA(Local_15[iVar0], joaat("AGGRESSIVE"));
					PED::_0xB8B6430EAD2D2437(Local_15[iVar0], 993130593);
					if (__LIB_2__::func_178(Local_15[iVar0]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_15[iVar0], joaat("REL_PLAYER_DISLIKE"));
					}
					PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
					if ((PED::IS_PED_IN_COMBAT(Local_15[iVar0], Global_35) || PED::IS_PED_FLEEING(Local_15[iVar0])) || __LIB_2__::func_25(&Local_15, iVar0, 256))
					{
						if (PED::IS_PED_IN_COMBAT(Local_15[iVar0], 0))
						{
							TASK::CLEAR_PED_TASKS(Local_15[iVar0], false, false);
							TASK::_TASK_SMART_FLEE_STYLE_PED(Local_15[iVar0], Global_35, 4, iVar1, -1082130432 /* Float: -1f */, -1, 0);
						}
						PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
					}
					else if ((Local_15.f_215 == Local_15.f_216 && __LIB_2__::func_1(Local_15.f_40[iVar0], 0, 1)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_15[iVar0], true))
					{
						iVar11 = Local_15.f_40[iVar0];
						PED::_0x931B241409216C1F(Local_15.f_40[iVar0], iVar11, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar12);
						TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_40[iVar0], 20000, -1, 2f, 1, 0, 0);
						if (!__LIB_0__::func_86(Local_15.f_118[iVar0 /*4*/].f_1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_15.f_118[iVar0 /*4*/].f_1, 2f, 20000, 0.25f, 0, 40000f);
						}
						TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
						__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
						PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
					}
					else
					{
						iVar11 = 0;
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_15[iVar0], true) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(Local_15[iVar0], true)))
						{
							if (PED::_GET_SEAT_PED_IS_USING(Local_15[iVar0]) == -1)
							{
								iVar13 = PED::GET_VEHICLE_PED_IS_IN(Local_15[iVar0], true);
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								if (!__LIB_0__::func_86(Local_15.f_118[iVar0 /*4*/].f_1))
								{
									TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iVar13, Local_15.f_118[iVar0 /*4*/].f_1, 7f, 524419, 6, 5f, 7f, 0);
								}
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, -1f, 0, 0);
								__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
							}
						}
						else if (PED::IS_PED_ON_MOUNT(Local_15[iVar0]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar12);
							if (!__LIB_0__::func_86(Local_15.f_118[iVar0 /*4*/].f_1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_15.f_118[iVar0 /*4*/].f_1, 2f, 20000, 0.25f, 0, 40000f);
							}
							TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
							__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
							PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
						}
						else
						{
							if (__LIB_2__::func_33(iVar0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, iVar1, -1082130432 /* Float: -1f */, -1, 0);
								__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
								PED::_0x39A2FC5AF55A52B1(Local_15[iVar0], 2000);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1f, 128, 0);
								__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
							}
							PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_15[iVar0], false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(Local_15[iVar0]), -1) == Local_15[iVar0])
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_15[iVar0]));
				}
				else if ((!PED::IS_PED_FLEEING(Local_15[iVar0]) && !PED::IS_PED_IN_COMBAT(Local_15[iVar0], Global_35)) && !__LIB_2__::func_25(&Local_15, iVar0, 128))
				{
					PED::_0x39A2FC5AF55A52B1(Local_15[iVar0], -1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_15[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[iVar0]))
		{
			if (__LIB_2__::func_248(iVar0, &iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_84[iVar0]))
				{
					OBJECT::DELETE_OBJECT(&(Local_15.f_84[iVar0]));
				}
				PED::DELETE_PED(&(Local_15.f_40[iVar0]));
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_84[iVar0]))
				{
					if (__LIB_2__::func_306(iVar0))
					{
						OBJECT::DELETE_OBJECT(&(Local_15.f_84[iVar0]));
					}
					else
					{
						ENTITY::DETACH_ENTITY(Local_15.f_84[iVar0], true, true);
						PHYSICS::ACTIVATE_PHYSICS(Local_15.f_84[iVar0]);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_15.f_84[iVar0]));
					}
				}
				if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 1))
				{
					if (__LIB_0__::func_75(&(Local_15.f_247)))
					{
						if (!__LIB_2__::func_1(PED::_GET_RIDER_OF_MOUNT(Local_15.f_40[iVar0], false), 0, 0))
						{
							TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_15.f_40[iVar0], Local_15.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
							PED::SET_PED_KEEP_TASK(Local_15.f_40[iVar0], true);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(PED::_0xF103823FFE72BB49(Local_15.f_40[iVar0])) && !ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(Local_15.f_40[iVar0], true)))
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_15.f_40[iVar0], Local_15.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(Local_15.f_40[iVar0], true);
					}
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_15.f_40[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[iVar0]))
		{
			if (__LIB_2__::func_297(iVar0))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_15.f_49[iVar0]));
			}
			else if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == Local_15.f_49[iVar0] && PED::GET_VEHICLE_PED_IS_IN(Global_35, true) == Local_15.f_49[iVar0])
			{
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_15.f_49[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_52[iVar0]))
		{
			if (__LIB_2__::func_307(&Local_15, Local_15.f_52[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(Local_15.f_52[iVar0]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_15.f_52[iVar0]));
			}
		}
		iVar0++;
	}
}

Vector3 func_485(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		case 8:
			return __LIB_2__::func_441();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_486(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

int func_487(int iParam0, int iParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PATHFIND::_0xDE0EA444735C1368(iParam1))
	{
		PATHFIND::_0x19C7567D2F2287D6(iParam1, 15);
	}
	if (PED::_0xE9B168527B337BF0(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

var func_488(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, fParam4, iParam5, fParam6, iParam7);
}

void func_489(int iParam0, int iParam1)
{
	iParam0->f_3 = iParam1;
}

int func_490(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 0;
		case 3:
			return 1;
		case 4:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_491()
{
	__LIB_2__::func_104(&(Local_15.f_152), 0);
	__LIB_2__::func_105(&(Local_15.f_152), 1);
	__LIB_2__::func_50(&(Local_15.f_152), 1);
	__LIB_2__::func_51(&(Local_15.f_152), 1);
	__LIB_2__::func_111(&(Local_15.f_152), 0);
	__LIB_2__::func_110(&(Local_15.f_152), 0);
	__LIB_2__::func_52(&(Local_15.f_152), 1);
	__LIB_2__::func_180(&(Local_15.f_152), 1);
}

void func_492(int iParam0)
{
	float fVar0;
	fVar0 = __LIB_2__::func_34(iParam0->f_151);
	__LIB_2__::func_285(iParam0, fVar0);
}

float func_493()
{
	if (!__LIB_1__::func_285(&(Local_274.f_8[0 /*3*/]), 25f))
	{
		return 250f;
	}
	return 120f;
}

void func_494()
{
	__LIB_2__::func_104(&(Local_15.f_152), 1);
	__LIB_2__::func_105(&(Local_15.f_152), 1);
	__LIB_2__::func_50(&(Local_15.f_152), 1);
	__LIB_2__::func_51(&(Local_15.f_152), 1);
	__LIB_2__::func_111(&(Local_15.f_152), 1);
	__LIB_2__::func_52(&(Local_15.f_152), 1);
	__LIB_2__::func_180(&(Local_15.f_152), 1);
}

int func_495(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			break;
		case 2:
			break;
		case 1:
			iVar0 = __LIB_2__::func_80(iParam1, bParam2);
			break;
		case 4:
			break;
		case 3:
			break;
		case 5:
			iVar0 = __LIB_2__::func_195(iParam1, bParam2);
			break;
	}
	return iVar0;
}

void func_496(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		return;
	}
	CAM::SET_GAMEPLAY_HINT_FOV(fParam4);
	fVar0 = __LIB_1__::func_874(vParam1, 1);
	if (!__LIB_0__::func_51(&(uParam0->f_3), 32))
	{
		if (fVar0 > 60f)
		{
			iVar1 = 4000;
			iVar2 = 3500;
		}
		else if (fVar0 > 40f)
		{
			iVar1 = 3750;
			iVar2 = 3250;
		}
		else if (fVar0 > 20f)
		{
			iVar1 = 3500;
			iVar2 = 3000;
		}
		else if (fVar0 > 10f)
		{
			iVar1 = 3250;
			iVar2 = 2750;
		}
		else
		{
			iVar1 = 3000;
			iVar2 = 2500;
		}
		if (iParam5 > iVar1)
		{
			uParam0->f_4 = iVar1;
		}
		else if (iParam5 < iVar2)
		{
			uParam0->f_4 = iVar2;
		}
		else
		{
			uParam0->f_4 = iParam5;
		}
		CAM::_0x1F6EBD94680252CE(iVar1, -1082130432 /* Float: -1f */);
		CAM::_0xF48664E9C83825E3(iVar2, -1082130432 /* Float: -1f */);
	}
	else
	{
		uParam0->f_4 = iParam5;
	}
	__LIB_1__::func_148(uParam0);
	__LIB_0__::func_7(&(uParam0->f_3), 1);
}

bool func_497(vector3 vParam0, var uParam3)
{
	float fVar0;
	fVar0 = __LIB_1__::func_874(vParam0, 1);
	return fVar0 < uParam3->f_6;
}

void func_498(int iParam0)
{
	float fVar0;
	fVar0 = __LIB_2__::func_34(iParam0->f_151);
	__LIB_2__::func_302(iParam0, fVar0);
}

bool func_499(int iParam0)
{
	if (!__LIB_2__::func_4(iParam0, 262144))
	{
		if (iParam0->f_20 < 60f)
		{
			if (__LIB_2__::func_437(iParam0, 60f, iParam0->f_239))
			{
				return true;
			}
		}
	}
	return false;
}

void func_500(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_65(&Global_1393447, 65536))
	{
		if (__LIB_2__::func_15(iParam0->f_181, 0))
		{
			__LIB_2__::func_107(iParam0->f_181, bParam1);
		}
		__LIB_2__::func_438(iParam0->f_151, bParam1);
	}
}

bool func_501(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_270(iParam2, 1, iVar0);
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
				if (__LIB_2__::func_225(iParam0, iParam2))
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
				if (__LIB_2__::func_218(iParam0, iParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
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
			if (__LIB_2__::func_198(iParam2, iParam0))
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
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, iParam2))
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

int func_502(int iParam0)
{
	return joaat("G_M_M_UNIINBRED_01");
}

void func_503(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!PLAYER::_0x6614F9039BD31931(PLAYER::PLAYER_ID(), 14, 0))
		{
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 14, 0, 1);
		}
	}
	else if (PLAYER::_0x6614F9039BD31931(PLAYER::PLAYER_ID(), 14, 0))
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 14, 0, 0);
	}
}

void func_504(var uParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(uParam0, iParam1);
}

void func_505(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_COLLECT"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_HORSE_COLLECT"), false);
}

void func_506(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
}

void func_507(var uParam0, int iParam1)
{
	uParam0->f_18 = iParam1;
}

bool func_508(var uParam0, bool bParam1)
{
	if (uParam0->f_10)
	{
		return false;
	}
	if ((TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35)) || TASK::IS_PED_SPRINTING(Global_35))
	{
		if (bParam1 || MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_25, false) > 2f)
		{
			return true;
		}
	}
	return false;
}

bool func_509(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, bool bParam6)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0) && bParam5)
	{
		return true;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam1, false))
	{
		return true;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iParam1, false))
	{
		return true;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (bParam6)
		{
			if (ANIMSCENE::_0x73616E64696C616E(iParam1, sParam2, 1, 0))
			{
				return true;
			}
		}
		if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam1, sParam2) || ANIMSCENE::_0xB89FCFF19DAFFF28(iParam1, sParam2))
		{
			return true;
		}
	}
	if (iParam3 != 0 && ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, iParam3))
	{
		return true;
	}
	if (fParam4 > 0f && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1) >= fParam4)
	{
		return true;
	}
	return false;
}

void func_510(var uParam0)
{
	if (__LIB_0__::func_71(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HITCH_ANIMAL"), false);
	}
}

int func_511(int* iParam0)
{
	if (__LIB_1__::func_489(iParam0, 0))
	{
		if (__LIB_2__::func_456(iParam0))
		{
			__LIB_1__::func_491(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

int func_512(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945938[iVar0 /*18*/].f_11 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				__LIB_1__::func_223(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

int func_513(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
			if (iParam2 == Global_1945938[iVar0 /*18*/].f_10 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		__LIB_1__::func_223(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216 /* Float: 1f */, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

bool func_514()
{
	int iVar0;
	if (__LIB_2__::func_452())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_1905944[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_515(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	if (!bParam3)
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			return true;
		}
	}
	if (__LIB_1__::func_378(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, iParam2, 1, fParam5))
	{
		return true;
	}
	return false;
}

bool func_516(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = __LIB_2__::func_465(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				__LIB_0__::func_238(iVar1);
				return true;
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	return false;
}

void func_517(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	if (!__LIB_2__::func_4(iParam0, 32))
	{
		if (!__LIB_0__::func_71(Global_35))
		{
			iParam0->f_56 = Global_1935630.f_41;
			if (__LIB_2__::func_1(iParam0->f_56, 0, 1))
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0->f_56, -1))
				{
					TASK::CLEAR_PED_TASKS(iParam0->f_56, true, false);
				}
				POPULATION::_0xB56D41A694E42E86(iParam1, 2048, 0, 0, -1, -1, 0);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_56, 355, true);
				if (__LIB_0__::func_86(vParam2))
				{
					TASK::TASK_SMART_FLEE_PED(iParam0->f_56, (*iParam0)[0], iParam6, 6000, 0, 2f, 0);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam2, fParam5, 20000, fParam7, 0, 40000f);
					if (bParam8)
					{
						TASK::TASK_SMART_FLEE_PED(0, (*iParam0)[0], iParam6, 6000, 0, 2f, 0);
					}
					__LIB_1__::func_474(iParam0->f_56, &iVar0, 0, 0, 1, 1);
				}
				__LIB_2__::func_147(iParam0, 32);
			}
		}
	}
}

bool func_518(var uParam0)
{
	if (uParam0->f_4)
	{
		return false;
	}
	if (uParam0->f_9)
	{
		return false;
	}
	if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		return false;
	}
	if (!WEAPON::_0x705BE297EEBDB95D(Global_1935630.f_44))
	{
		return false;
	}
	if (__LIB_1__::func_285(&(uParam0->f_32), 1f))
	{
		if (!__LIB_0__::func_163(Global_35, 716706914))
		{
			return true;
		}
	}
	return false;
}

bool func_519(var uParam0)
{
	if (!__LIB_2__::func_370(*uParam0, uParam0->f_4))
	{
		return false;
	}
	return true;
}

void func_520(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (__LIB_0__::func_472())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			__LIB_0__::func_967(iVar0);
			__LIB_2__::func_467(iVar0, 0, 0);
		}
		__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		__LIB_0__::func_15(__LIB_0__::func_14(joaat("CAREER_CASH")), iVar1);
	}
}

void func_521(int iParam0, bool bParam1, int iParam2)
{
	__LIB_2__::func_137(iParam2);
	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630.f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639.f_11)
		{
			return;
		}
		if (Global_1225639.f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		iParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		iParam0->f_13 = __LIB_1__::func_347(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							__LIB_1__::func_336(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (__LIB_1__::func_995(1))
						{
							__LIB_1__::func_336(iParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!__LIB_1__::func_995(1) || *iParam0 & 8192 != 0))
				{
					__LIB_0__::func_516(iParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!iParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			if (__LIB_2__::func_464(iParam0))
			{
				iParam0->f_15 = __LIB_0__::func_485();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((__LIB_0__::func_485() - iParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	__LIB_2__::func_201(iParam0);
}

void func_522(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	__LIB_0__::func_974(iParam0);
	if (bParam3)
	{
		__LIB_2__::func_472(iParam0, sParam1, iParam2);
	}
}

void func_523(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		__LIB_1__::func_748(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			__LIB_2__::func_451(iParam0, 0);
		}
	}
}

bool func_524(vector3 vParam0, var uParam3, float fParam4)
{
	float fVar0;
	if (!__LIB_1__::func_379(uParam3->f_7, uParam3->f_8))
	{
		return false;
	}
	if (__LIB_0__::func_51(&(uParam3->f_3), 1))
	{
		return false;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return false;
	}
	fVar0 = __LIB_0__::func_94(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return false;
	}
	if (!__LIB_1__::func_873(vParam0, uParam3))
	{
		return false;
	}
	if (!__LIB_0__::func_51(&(uParam3->f_3), 2))
	{
		if (!CAM::IS_SPHERE_VISIBLE(vParam0, 0.5f))
		{
			return false;
		}
		if (!__LIB_2__::func_497(vParam0, uParam3))
		{
			return false;
		}
	}
	return true;
}

bool func_525(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (__LIB_2__::func_362(iParam0, iParam1))
		{
			if (!__LIB_0__::func_27(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
				__LIB_1__::func_336(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (__LIB_0__::func_27(iParam1->f_10, 1))
		{
			__LIB_2__::func_363(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			__LIB_0__::func_516(&(iParam1->f_10), 1);
		}
	}
	return false;
}

void func_526(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_2__::func_411(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

void func_527(var uParam0)
{
	if (uParam0->f_35)
	{
		return;
	}
	if (!uParam0->f_8)
	{
		return;
	}
	if (uParam0->f_14 && !uParam0->f_13)
	{
		if (__LIB_0__::func_154(Global_1935630.f_44) || uParam0->f_6)
		{
			if (__LIB_0__::func_139(uParam0->f_36))
			{
				__LIB_1__::func_748(&(uParam0->f_36), 1, 1);
				uParam0->f_13 = 1;
			}
		}
	}
	if (!__LIB_0__::func_75(&(uParam0->f_29)))
	{
		if (__LIB_2__::func_342(uParam0->f_28))
		{
			__LIB_1__::func_283(&(uParam0->f_29), 0);
		}
	}
	else if (uParam0->f_6 && !uParam0->f_1)
	{
		if (__LIB_1__::func_285(&(uParam0->f_29), 3f) && __LIB_2__::func_342(uParam0->f_28))
		{
			__LIB_0__::func_105(1);
			uParam0->f_35 = 1;
			if (!__LIB_1__::func_285(&(uParam0->f_29), 6f) && !uParam0->f_4)
			{
				__LIB_2__::func_355(609);
			}
		}
	}
}

int func_528(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_356(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = __LIB_2__::func_465(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return __LIB_1__::func_428(iParam0, 0);
	}
	uVar2 = INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(bParam2), iParam0, 0);
	return uVar2;
}

void func_529(var uParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar17;
	if (!__LIB_0__::func_65(&Global_1393447, 65536))
	{
		__LIB_0__::func_47(&Global_1393447, 16);
		__LIB_0__::func_47(&Global_1393447, 65536);
		__LIB_2__::func_147(uParam0, 2097152);
		Global_40.f_9632.f_194 = uParam0->f_151;
		__LIB_2__::func_445(uParam0, 1);
		__LIB_1__::func_309(-1, 0, 0, 0, 0);
		__LIB_1__::func_924();
		Var0.f_6 = -1082130432;
		Var0.f_7 = -1082130432;
		Var0.f_8 = -1082130432;
		Var0.f_9 = -1082130432;
		Var0.f_10 = -1082130432;
		Var0.f_11 = -1082130432;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		Var0 = joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW");
		Var0.f_6 = 100f;
		if (!__LIB_0__::func_86(uParam0->f_212))
		{
			Var0.f_3 = { uParam0->f_212 };
		}
		else
		{
			Var0.f_3 = { uParam0->f_209 };
		}
		if (__LIB_2__::func_8(uParam0->f_151))
		{
			Var0.f_8 = 40f;
			Var0.f_9 = 40f;
			Var0.f_7 = 40f;
		}
		else
		{
			Var0.f_8 = 120f;
			Var0.f_9 = 120f;
			Var0.f_7 = 120f;
		}
		uParam0->f_93 = EVENT::_CREATE_SHOCKING_EVENT(&Var0);
		if (!__LIB_2__::func_5())
		{
			__LIB_2__::func_6(1);
			__LIB_2__::func_147(uParam0, 4);
		}
		if (bParam1)
		{
			__LIB_2__::func_304(1, -1, 0, 0, 0);
		}
		else
		{
			__LIB_2__::func_175();
			__LIB_2__::func_176();
		}
		if (__LIB_2__::func_8(uParam0->f_151))
		{
			__LIB_0__::func_747(30, 0, 1);
		}
		else
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("GANG_AMBUSH_ENCOUNTERED")), 1);
			__LIB_2__::func_457(uParam0, 0);
		}
		MISC::_0x1096603B519C905F(__LIB_2__::func_9(uParam0->f_151));
		__LIB_2__::func_468(uParam0);
		__LIB_0__::func_703(0, 13);
		iVar17 = 0;
		while (iVar17 < uParam0->f_215)
		{
			if (__LIB_2__::func_1((*uParam0)[iVar17], 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY((*uParam0)[iVar17], Global_35, -1, 0, 51, 0);
			}
			iVar17++;
		}
	}
}

void func_530(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = __LIB_2__::func_495(iParam0->f_181, iParam2, bParam3);
	if (iVar0 != 0)
	{
		WEAPON::_0x899A04AFCC725D04(iParam1, iVar0);
	}
	else if (bParam3)
	{
		__LIB_2__::func_272(iParam1, iParam2, -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	}
	else
	{
		__LIB_2__::func_272(iParam1, iParam2, -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	}
}

bool func_531()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_23[1]))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_23[1], Global_36))
		{
			return true;
		}
	}
	return false;
}

void func_532(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_215)
	{
		iVar0 = __LIB_2__::func_502(iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

bool func_533(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_215)
	{
		iVar0 = __LIB_2__::func_502(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_2__::func_502(iVar1)))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

void func_534(int iParam0, int iParam1)
{
	iParam0->f_1 = (iParam0->f_1 - (iParam0->f_1 && iParam1));
}

void func_535()
{
	if (__LIB_2__::func_1(Local_15.f_56, 0, 0))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_15.f_56, true, __LIB_2__::func_160(Local_15.f_181));
	}
}

bool func_536()
{
	if (__LIB_1__::func_285(&(Local_15.f_244), 45f) && __LIB_0__::func_0())
	{
		__LIB_2__::func_492(&Local_15);
		__LIB_0__::func_37(&(Local_15.f_244));
	}
	return false;
}

bool func_537(var uParam0)
{
	if (Local_15.f_21 == 0f)
	{
		*uParam0 = 210f;
	}
	else if (Local_15.f_21 < (__LIB_2__::func_323() - 10f))
	{
		*uParam0 = __LIB_2__::func_323();
	}
	else
	{
		*uParam0 = 210f;
	}
	if (Local_15.f_20 > *uParam0)
	{
		return true;
	}
	switch (Local_15.f_151)
	{
		case 29:
		case 30:
			if (Local_15.f_95 < 10)
			{
				return true;
			}
			break;
		case 0:
		case 11:
			if (!__LIB_2__::func_4(&Local_15, 512) && !__LIB_2__::func_4(&Local_15, 16384))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_538(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_2__::func_501((*iParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

bool func_539(int iParam0)
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
			if (__LIB_2__::func_309(iParam0))
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

void func_540()
{
	int iVar0;
	__LIB_1__::func_283(&(Local_15.f_247), 0);
	if (__LIB_1__::func_285(&(Local_15.f_247), 5f))
	{
		__LIB_2__::func_310(&Local_15, 0);
	}
	if (__LIB_1__::func_285(&(Local_15.f_247), 3f))
	{
		__LIB_2__::func_295(&Local_15);
	}
	__LIB_2__::func_332();
	if (!__LIB_2__::func_4(&Local_15, 8388608))
	{
		if (!__LIB_2__::func_4(&Local_15, 4194304))
		{
			if (Local_15.f_181 == 2)
			{
				__LIB_2__::func_206(&Local_15, 1.1f);
			}
			else
			{
				__LIB_2__::func_206(&Local_15, 1.2f);
			}
			__LIB_2__::func_147(&Local_15, 4194304);
		}
		if (__LIB_2__::func_4(&Local_15, 4194304))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			if ((iVar0 < (Local_15.f_225 - 60) || IntToFloat(iVar0) < (IntToFloat(Local_15.f_225) * 0.7f)) || iVar0 < 80)
			{
				__LIB_2__::func_206(&Local_15, 1f);
				__LIB_2__::func_147(&Local_15, 8388608);
			}
		}
	}
}

int func_541(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			return joaat("WAGON05X");
		default:
			break;
	}
	return 0;
}

void func_542(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, bParam6);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, vParam1, fParam4, iParam5, bParam6, 0);
	}
}

void func_543(int iParam0, char* sParam1, bool bParam2, char* sParam3)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, bParam2);
}

void func_544(int iParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	if (ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1) || ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		return;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
}

bool func_545(int iParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1);
}

int func_546(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	switch (iParam1)
	{
		case 0:
			iVar0 = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
			break;
		case 1:
			iVar0 = joaat("WEAPON_MELEE_TORCH");
			break;
	}
	iVar2 = 0;
	WEAPON::GET_MAX_AMMO(iParam0, &iVar2, iVar0);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	bVar3 = __LIB_0__::func_27(iParam2, 2);
	bVar4 = __LIB_0__::func_27(iParam2, 4);
	bVar5 = __LIB_0__::func_27(iParam2, 8);
	bVar6 = __LIB_0__::func_27(iParam2, 1);
	bVar7 = __LIB_0__::func_27(iParam2, 16);
	__LIB_0__::func_215(iParam0, &iVar0, &fVar8);
	iVar1 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iVar2, bVar3, bVar4, iParam3, bVar5, 0.5f, 1f, 752097756, bVar6, fVar8, false);
	if (__LIB_0__::func_216(iVar1))
	{
		WEAPON::SET_PED_INFINITE_AMMO(iParam0, bVar7, iVar1);
	}
	return iVar1;
}

bool func_547()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	vector3 vVar12;
	if (Local_15.f_216 <= 0)
	{
		return true;
	}
	iVar0 = Local_15.f_220;
	iVar1 = __LIB_2__::func_292(iVar0);
	vVar2 = { __LIB_1__::func_977(iVar0) };
	fVar5 = __LIB_2__::func_18(iVar0);
	uVar6 = __LIB_2__::func_293(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[iVar0]))
	{
		if (iVar1 != 0)
		{
			if (__LIB_0__::func_0(iVar0))
			{
				if (!__LIB_2__::func_106(&vVar2, 1, 5, 0))
				{
					return false;
				}
			}
			if (__LIB_2__::func_293(iVar0) == __LIB_2__::func_16())
			{
				Local_15.f_40[iVar0] = __LIB_1__::func_545(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				Local_15.f_40[iVar0] = __LIB_1__::func_545(iVar1, vVar2, fVar5, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				PED::_SET_PED_BODY_COMPONENT(Local_15.f_40[iVar0], __LIB_2__::func_293(iVar0));
				PED::_UPDATE_PED_VARIATION(Local_15.f_40[iVar0], false, true, true, true, false);
			}
		}
	}
	if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 1))
	{
		__LIB_1__::func_991(Local_15.f_40[iVar0], 0);
		if (__LIB_2__::func_4(&Local_15, 1))
		{
			iVar7 = __LIB_1__::func_976(iVar0);
			if (iVar7 != 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_84[iVar0]))
				{
					Local_15.f_84[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_LANTERN09X"), vVar2, true, true, false, false, true);
					__LIB_2__::func_236(iVar0, iVar7, &vVar9, &vVar12, &iVar8);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_15.f_84[iVar0], Local_15.f_40[iVar0], iVar8, vVar9, vVar12, false, false, false, false, 1, true, false, false);
					return false;
				}
			}
		}
		__LIB_2__::func_20(&(Local_15.f_152), Local_15.f_40[iVar0], 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_40[iVar0], true);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_40[iVar0], 277, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(Local_15.f_40[iVar0]);
		ENTITY::SET_ENTITY_VISIBLE(Local_15.f_40[iVar0], false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_15.f_40[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_15.f_40[iVar0], true, false);
		}
		Local_15.f_220++;
		if (Local_15.f_220 >= Local_15.f_216)
		{
			Local_15.f_220 = 0;
			return true;
		}
	}
	return false;
}

void func_548(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_65(&Global_1393447, 65536))
	{
		if (__LIB_2__::func_15(iParam0->f_181, 0))
		{
			__LIB_2__::func_107(iParam0->f_181, bParam1);
		}
		__LIB_2__::func_409(iParam0->f_151, bParam1);
	}
}

int func_549()
{
	if (Global_1894899.f_187)
	{
		return 1;
	}
	if (__LIB_2__::func_410(16) && !__LIB_2__::func_410(21))
	{
		return 1;
	}
	return 0;
}

bool func_550(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;
	float fVar7;
	vVar2 = { __LIB_2__::func_485(__LIB_0__::func_317()) };
	fVar5 = 120f;
	fVar5 = (fVar5 * fVar5);
	if (__LIB_0__::func_62(Global_36, vVar2) < 40000f)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_903(iVar0))
		{
			fVar6 = __LIB_0__::func_210(iVar0);
			if (fVar6 <= 10000f && fVar6 > 0f)
			{
				iVar1 = __LIB_0__::func_167(iVar0);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					return false;
				}
				if (__LIB_0__::func_62(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), vVar2) > fVar5)
				{
					fVar7 = __LIB_1__::func_992(iVar1, Global_36, 1);
					if (fVar7 <= 40000f && fVar7 > 0f)
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_551()
{
	int iVar0;
	__LIB_1__::func_283(&(Local_15.f_247), 0);
	if (__LIB_1__::func_285(&(Local_15.f_247), 5f))
	{
		__LIB_2__::func_423(&Local_15, 0);
	}
	if (__LIB_1__::func_285(&(Local_15.f_247), 3f))
	{
		__LIB_2__::func_326(&Local_15);
	}
	__LIB_2__::func_332();
	if (!__LIB_2__::func_4(&Local_15, 8388608))
	{
		if (!__LIB_2__::func_4(&Local_15, 4194304))
		{
			if (Local_15.f_181 == 2)
			{
				__LIB_2__::func_260(&Local_15, 1.1f);
			}
			else
			{
				__LIB_2__::func_260(&Local_15, 1.2f);
			}
			__LIB_2__::func_147(&Local_15, 4194304);
		}
		if (__LIB_2__::func_4(&Local_15, 4194304))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			if ((iVar0 < (Local_15.f_225 - 60) || IntToFloat(iVar0) < (IntToFloat(Local_15.f_225) * 0.7f)) || iVar0 < 80)
			{
				__LIB_2__::func_260(&Local_15, 1f);
				__LIB_2__::func_147(&Local_15, 8388608);
			}
		}
	}
}

bool func_552()
{
	int iVar0;
	switch (Local_274.f_2)
	{
		case 0:
			__LIB_2__::func_187();
			__LIB_2__::func_532(&Local_15);
			Local_274.f_2 = 1;
			break;
		case 1:
			iVar0 = 1;
			if (!__LIB_2__::func_188())
			{
				iVar0 = 0;
			}
			if (!__LIB_2__::func_533(&Local_15))
			{
				iVar0 = 0;
			}
			return iVar0;
	}
	return false;
}

void func_553(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_1((*iParam0)[iParam1], 0, 0))
	{
		return;
	}
	if (iParam1 <= 2)
	{
		PED::SET_PED_COMBAT_RANGE((*iParam0)[iParam1], 0);
		PED::SET_PED_COMBAT_MOVEMENT((*iParam0)[iParam1], 2);
	}
	else
	{
		PED::SET_PED_COMBAT_RANGE((*iParam0)[iParam1], 1);
		PED::SET_PED_COMBAT_MOVEMENT((*iParam0)[iParam1], 1);
	}
}

void func_554(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (iParam3 == -1)
	{
		iParam3 = (iParam0->f_215 - 1);
	}
	if (bParam1)
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (__LIB_2__::func_1((*iParam0)[iVar0], 0, 0))
			{
				if (!__LIB_2__::func_159(iParam0, iVar0))
				{
					__LIB_2__::func_429(iParam0, iVar0, 1);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (__LIB_2__::func_1((*iParam0)[iVar0], 0, 0))
			{
				if (__LIB_2__::func_159(iParam0, iVar0))
				{
					__LIB_2__::func_429(iParam0, iVar0, 0);
				}
			}
			iVar0++;
		}
	}
}

void func_555()
{
	__LIB_2__::func_535();
}

bool func_556(int iParam0, var uParam1, var uParam2, char* sParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (*uParam1 < 0)
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_215)
		{
			if (__LIB_2__::func_1((*iParam0)[iVar0], 0, 1))
			{
				iVar1++;
				iVar2 = iVar0;
			}
			iVar0++;
		}
		if (iVar1 <= 1)
		{
			if (iVar2 >= 0)
			{
				if (!__LIB_2__::func_25(iParam0, iVar2, 1))
				{
					__LIB_1__::func_148(uParam2);
					*uParam1 = iVar2;
				}
			}
			else if (iVar1 == 0)
			{
				return true;
			}
		}
	}
	else
	{
		if (!__LIB_0__::func_75(uParam2))
		{
			if (__LIB_2__::func_1((*iParam0)[*uParam1], 0, 0))
			{
				TASK::_0x2E1D6D87346BB7D2((*iParam0)[*uParam1], Global_35, 1, 0);
			}
		}
		__LIB_1__::func_283(uParam2, 0);
		if (__LIB_1__::func_285(uParam2, fParam4))
		{
			if (__LIB_2__::func_1((*iParam0)[*uParam1], 0, 1))
			{
				if (__LIB_2__::func_211(iParam0, *uParam1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED((*iParam0)[*uParam1], Global_35, 4, 524292, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK((*iParam0)[*uParam1], true);
					__LIB_1__::func_733((*iParam0)[*uParam1]);
					__LIB_2__::func_56((*iParam0)[*uParam1], 0, 1);
					__LIB_2__::func_303((*iParam0)[*uParam1], Global_35, sParam3, 0, 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

int func_557(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 999999.9f;
	iVar3 = -1;
	iVar2 = iParam1;
	while (iVar2 <= iParam2)
	{
		if (__LIB_2__::func_1((*iParam0)[iVar2], 0, 0))
		{
			fVar1 = iParam0->f_9[iVar2];
			if (fVar1 < fVar0 && (!bParam3 || __LIB_2__::func_227(0f, 1, (*iParam0)[iVar2], 1)))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar3;
}

bool func_558(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	var uVar5;
	if (__LIB_0__::func_58())
	{
		return true;
	}
	if (Global_16)
	{
		return true;
	}
	if (__LIB_0__::func_296(0, 1, 1))
	{
		return true;
	}
	if (Local_15.f_95 <= 9 && Local_15.f_96 & 2097152 == 0)
	{
		if (__LIB_0__::func_65(&Global_1393447, 2))
		{
			if (__LIB_2__::func_205(&Local_15))
			{
				__LIB_0__::func_380(&Global_1393447, 2);
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	else if (Global_1393447.f_2 & 2 != 0)
	{
		__LIB_0__::func_380(&Global_1393447, 2);
		return false;
	}
	if (Local_15.f_96 & 16 != 0)
	{
		return true;
	}
	if (Local_15.f_95 < 10 && Local_15.f_96 & 1048576 == 0)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (__LIB_2__::func_131())
			{
				if (!uParam0->f_8)
				{
					return true;
				}
			}
			if (!__LIB_0__::func_86(Local_15.f_209))
			{
				if (Local_15.f_20 > 207f)
				{
					if (Local_15.f_223 == 0)
					{
						Local_15.f_223 = MISC::GET_GAME_TIMER() + 1000;
						return false;
					}
					else if (Local_15.f_223 < MISC::GET_GAME_TIMER())
					{
						vVar0 = { __LIB_1__::func_974(PLAYER::PLAYER_ID()) };
						return true;
					}
				}
				else
				{
					Local_15.f_223 = 0;
				}
			}
		}
	}
	else
	{
		if (__LIB_2__::func_421())
		{
			return true;
		}
		if (__LIB_2__::func_537(&uVar5))
		{
			fVar4 = __LIB_2__::func_323();
			iVar3 = 0;
			while (iVar3 < Local_15.f_215)
			{
				if (Local_15.f_9[iVar3] < fVar4)
				{
					if (__LIB_2__::func_1(Local_15[iVar3], 0, 1))
					{
						return false;
					}
				}
				iVar3++;
			}
			return true;
		}
	}
	return false;
}

bool func_559()
{
	if (!__LIB_1__::func_205(Global_35, Local_274.f_23[1], 1, 0))
	{
		if (__LIB_1__::func_205(Global_35, Local_274.f_23[0], 1, 0))
		{
			__LIB_0__::func_11(&Local_15, 7);
			return true;
		}
	}
	if (__LIB_2__::func_539(&Local_15))
	{
		return true;
	}
	return false;
}

void func_560()
{
	if (!__LIB_2__::func_1(Local_15.f_56, 0, 0))
	{
		Local_15.f_56 = __LIB_2__::func_379(&Local_15, 0);
		if (__LIB_2__::func_1(Local_15.f_56, 0, 0))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_15.f_56, false, joaat("REL_GANG_ODRISCOLL"));
		}
	}
}

void func_561()
{
	if (iLocal_15.f_95 <= 8)
	{
		iLocal_15.f_20 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, iLocal_15.f_209, true);
		if (iLocal_15.f_21 == 0f || iLocal_15.f_21 > iLocal_15.f_20)
		{
			iLocal_15.f_21 = iLocal_15.f_20;
		}
		return;
	}
	if (iLocal_15.f_18 < 0)
	{
		iLocal_15.f_20 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, iLocal_15.f_209, true);
		if (iLocal_15.f_21 == 0f || iLocal_15.f_21 > iLocal_15.f_20)
		{
			iLocal_15.f_21 = iLocal_15.f_20;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_15[iLocal_15.f_18]))
	{
		iLocal_15.f_9[iLocal_15.f_18] = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_15[iLocal_15.f_18], false, true));
	}
	iLocal_15.f_18++;
	if (iLocal_15.f_18 >= iLocal_15.f_215)
	{
		iLocal_15.f_18 = -1;
	}
}

int func_562(int iParam0)
{
	if (iParam0 < 2)
	{
		return 3;
	}
	return 0;
}

void func_563(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0:
			if ((iParam0 % 2) == 0)
			{
				iParam1 = 1;
			}
			else
			{
				iParam1 = 2;
			}
			break;
	}
	switch (iParam1)
	{
		case 1:
			*uParam2 = { -0.31f, 0.03f, -0.22f };
			*uParam3 = { 0f, 50f, 90f };
			break;
		case 2:
			*uParam2 = { 0.31f, 0.03f, -0.22f };
			*uParam3 = { 0f, -50f, 90f };
			break;
	}
	*iParam4 = PED::GET_PED_BONE_INDEX(iLocal_15.f_40[iParam0], 62111);
}

bool func_564(int iParam0)
{
	switch (iLocal_15.f_151)
	{
		case 24:
		case 26:
		case 27:
			return true;
	}
	return false;
}

bool func_565()
{
	if (iLocal_15.f_151 != 11)
	{
		return true;
	}
	if (iLocal_15.f_221 == 2)
	{
		return false;
	}
	return true;
}

bool func_566(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iParam0->f_40[iParam1]) || ENTITY::IS_ENTITY_VISIBLE(iParam0->f_40[iParam1]))
	{
		return true;
	}
	if (!__LIB_2__::func_26(iParam0, iParam1, 4))
	{
		return true;
	}
	return false;
}

void func_567()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15[iVar0]))
		{
			ENTITY::_0xA91E6CF94404E8C9(iLocal_15[iVar0]);
			if (!__LIB_2__::func_25(&iLocal_15, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_15[iVar0], true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_40[iVar0]))
		{
			ENTITY::_0xA91E6CF94404E8C9(iLocal_15.f_40[iVar0]);
			if (!__LIB_2__::func_26(&iLocal_15, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_15.f_40[iVar0], true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_49[iVar0]))
		{
			ENTITY::_0xA91E6CF94404E8C9(iLocal_15.f_49[iVar0]);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_15.f_49[iVar0], true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_52[iVar0]))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_15.f_52[iVar0], true);
		}
		iVar0++;
	}
}

bool func_568(int iParam0)
{
	if (__LIB_2__::func_25(&iLocal_15, iParam0, 2))
	{
		return false;
	}
	if (__LIB_2__::func_25(&iLocal_15, iParam0, 128))
	{
		return false;
	}
	if (__LIB_2__::func_25(&iLocal_15, iParam0, 4))
	{
		return true;
	}
	if (__LIB_2__::func_64(&iLocal_15, iLocal_15[iParam0]))
	{
		return true;
	}
	if (!__LIB_2__::func_25(&iLocal_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_569(int iParam0, int iParam1)
{
	if (__LIB_2__::func_26(&iLocal_15, iParam0, 2))
	{
		return false;
	}
	if (__LIB_2__::func_26(&iLocal_15, iParam0, 4))
	{
		return true;
	}
	if (__LIB_1__::func_248(iLocal_15.f_40[iParam0], iParam1))
	{
		return true;
	}
	if (__LIB_2__::func_64(&iLocal_15, iLocal_15.f_40[iParam0]))
	{
		return true;
	}
	if (!__LIB_2__::func_26(&iLocal_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

void func_570()
{
	__LIB_2__::func_104(&(iLocal_15.f_152), 0);
	__LIB_2__::func_105(&(iLocal_15.f_152), 1);
	__LIB_2__::func_50(&(iLocal_15.f_152), 1);
	__LIB_2__::func_51(&(iLocal_15.f_152), 1);
	__LIB_2__::func_111(&(iLocal_15.f_152), 0);
	__LIB_2__::func_110(&(iLocal_15.f_152), 0);
	__LIB_2__::func_52(&(iLocal_15.f_152), 1);
	__LIB_2__::func_180(&(iLocal_15.f_152), 1);
}

void func_571(int iParam0, var uParam1)
{
	if (iParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630.f_30 = 0;
		Global_1935630.f_31 = 0;
		Global_1935630.f_25 = 0;
		Global_1935630.f_39 = 0;
		iParam0->f_8 = __LIB_0__::func_485();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	__LIB_2__::func_89(iParam0, 0);
	*uParam1 = 0;
	iParam0->f_16 = 0;
}

bool func_572(int* iParam0, bool bParam1)
{
	if (!bParam1 || __LIB_0__::func_139(iParam0->f_6))
	{
		return __LIB_1__::func_489(iParam0, 13);
	}
	return false;
}

bool func_573(bool bParam0)
{
	if (__LIB_2__::func_453())
	{
		return false;
	}
	if (HUD::_0x7EC0D68233E391AC(5) == 2)
	{
		return false;
	}
	if ((!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return false;
	}
	if (!bParam0)
	{
		if (!__LIB_2__::func_514())
		{
			return false;
		}
	}
	if (Global_16)
	{
		return false;
	}
	if (!__LIB_0__::func_463())
	{
		return false;
	}
	if (MISC::_0xF236C84C6ADFCB2F())
	{
		return false;
	}
	if (__LIB_2__::func_454())
	{
		return false;
	}
	return true;
}

bool func_574(int iParam0)
{
	if (iParam0->f_94 <= 0)
	{
		if (__LIB_2__::func_455())
		{
			iParam0->f_94 = __LIB_0__::func_485();
			return true;
		}
	}
	else if ((iParam0->f_94 - __LIB_0__::func_485()) < 5000)
	{
		return true;
	}
	return false;
}

void func_575(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, float fParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	int iVar0;
	Global_1945938[iParam0 /*18*/].f_4 = iParam1;
	Global_1945938[iParam0 /*18*/] = iParam4;
	Global_1945938[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945938[iParam0 /*18*/].f_2 = fParam5;
	Global_1945938[iParam0 /*18*/].f_6 = { vParam6 };
	Global_1945938[iParam0 /*18*/].f_9 = fParam9;
	Global_1945938[iParam0 /*18*/].f_10 = iParam10;
	Global_1945938[iParam0 /*18*/].f_11 = iParam11;
	Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_5 = iParam12;
	Global_1945938[iParam0 /*18*/].f_1 = 2;
	Global_1945938[iParam0 /*18*/].f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, fParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1945938[iParam0 /*18*/].f_3 = iVar0;
	__LIB_0__::func_629(iParam0, 1);
	__LIB_0__::func_185(iParam0, 1);
	__LIB_0__::func_186(iParam0, 128);
}

bool func_576()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	if (iLocal_15.f_217 <= 0)
	{
		return true;
	}
	iVar0 = iLocal_15.f_220;
	iVar1 = __LIB_1__::func_976(iVar0);
	vVar2 = { __LIB_1__::func_977(iVar0) };
	fVar5 = __LIB_2__::func_18(iVar0);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_0(iVar0))
		{
			if (!__LIB_2__::func_106(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		iLocal_15.f_49[iVar0] = VEHICLE::CREATE_VEHICLE(iVar1, vVar2, fVar5, true, true, false, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_15.f_49[iVar0], 0f);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_15.f_49[iVar0], true);
		ENTITY::_0x3F08C6163A4AB1D6(iLocal_15.f_49[iVar0]);
		__LIB_2__::func_19(iLocal_15.f_49[iVar0]);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_15.f_49[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_15.f_49[iVar0], true, false);
		}
	}
	iLocal_15.f_220++;
	if (iLocal_15.f_220 >= iLocal_15.f_217)
	{
		iLocal_15.f_220 = 0;
		return true;
	}
	return false;
}

bool func_577()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	if (iLocal_15.f_218 <= 0)
	{
		return true;
	}
	iVar0 = iLocal_15.f_220;
	iVar1 = __LIB_1__::func_976(iVar0);
	vVar2 = { __LIB_1__::func_977(iVar0) };
	fVar5 = __LIB_2__::func_18(iVar0);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_0(iVar0))
		{
			if (!__LIB_2__::func_106(&vVar2, 1, 5, 0))
			{
				return false;
			}
		}
		iLocal_15.f_52[iVar0] = OBJECT::CREATE_OBJECT(iVar1, vVar2, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_15.f_52[iVar0], 0f, 0f, fVar5, 2, true);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_15.f_52[iVar0], false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_15.f_52[iVar0], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_15.f_52[iVar0], true, false);
		}
		if (__LIB_0__::func_0(iVar0))
		{
			OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iLocal_15.f_52[iVar0], 0);
		}
	}
	iLocal_15.f_220++;
	if (iLocal_15.f_220 >= iLocal_15.f_218)
	{
		iLocal_15.f_220 = 0;
		return true;
	}
	return false;
}

float func_578()
{
	if (!__LIB_1__::func_285(&(Local_274.f_9[0 /*3*/]), 25f))
	{
		return 250f;
	}
	return 120f;
}

void func_579()
{
	int iVar0;
	if (iLocal_15.f_19 < iLocal_15.f_215)
	{
		iVar0 = iLocal_15.f_19;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15[iVar0]))
		{
			if (!__LIB_2__::func_25(&iLocal_15, iVar0, 8))
			{
				if (__LIB_1__::func_472(iLocal_15[iVar0], 200f, -1082130432 /* Float: -1f */, iLocal_15.f_9[iVar0], -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_152(&iLocal_15, iVar0, 8);
				}
			}
		}
	}
	else if (iLocal_15.f_19 < (iLocal_15.f_215 + iLocal_15.f_216))
	{
		iVar0 = (iLocal_15.f_19 - iLocal_15.f_215);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_40[iVar0]))
		{
			if (!__LIB_2__::func_26(&iLocal_15, iVar0, 8))
			{
				if (__LIB_1__::func_472(iLocal_15.f_40[iVar0], 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_28(&iLocal_15, iVar0, 8);
				}
			}
		}
	}
	else if (iLocal_15.f_19 < ((iLocal_15.f_215 + iLocal_15.f_216) + iLocal_15.f_217))
	{
		iVar0 = ((iLocal_15.f_19 - iLocal_15.f_215) - iLocal_15.f_216);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_49[iVar0]))
		{
			if (!__LIB_2__::func_39(&iLocal_15, iVar0, 8))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(iLocal_15.f_49[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_15.f_49[iVar0]))
				{
					if (__LIB_2__::func_109(iLocal_15.f_49[iVar0], 200f, -1082130432 /* Float: -1f */))
					{
						__LIB_2__::func_153(&iLocal_15, iVar0, 8);
					}
				}
			}
		}
	}
	iLocal_15.f_19++;
	if (iLocal_15.f_19 >= ((iLocal_15.f_215 + iLocal_15.f_216) + iLocal_15.f_217))
	{
		iLocal_15.f_19 = 0;
	}
}

int func_580(int iParam0)
{
	if (iLocal_15.f_57[iParam0] == 0)
	{
		if (!__LIB_2__::func_15(iLocal_15.f_181, 1))
		{
			iLocal_15.f_57[iParam0] = __LIB_2__::func_44(joaat("HORSE_CLASS_RIDING"), 1);
		}
		else
		{
			iLocal_15.f_57[iParam0] = __LIB_2__::func_185(iLocal_15.f_181, 0, 1);
		}
	}
	return iLocal_15.f_57[iParam0];
}

int func_581(int iParam0)
{
	if (iLocal_15.f_75[iParam0] == 0)
	{
		if (iLocal_15.f_181 != -1 && iLocal_15.f_181 != 1)
		{
			iLocal_15.f_75[iParam0] = __LIB_2__::func_186(iLocal_15.f_181, iParam0, 0);
		}
		else
		{
			iLocal_15.f_75[iParam0] = __LIB_2__::func_16();
		}
		if (iLocal_15.f_75[iParam0] == joaat("META_HORSE_SADDLE_ONLY"))
		{
			iLocal_15.f_75[iParam0] = __LIB_2__::func_16();
		}
	}
	return iLocal_15.f_75[iParam0];
}

bool func_582(int iParam0)
{
	float fVar0;
	if (__LIB_2__::func_26(&iLocal_15, iParam0, 32))
	{
		if (!__LIB_2__::func_1(PED::_GET_RIDER_OF_MOUNT(iLocal_15.f_40[iParam0], false), 0, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_2__::func_1(PED::_GET_RIDER_OF_MOUNT(iLocal_15.f_40[iParam0], true), 0, 1))
	{
		return false;
	}
	if (iLocal_15.f_216 == iLocal_15.f_215)
	{
		if (!__LIB_2__::func_1(iLocal_15[iParam0], 0, 1))
		{
			return true;
		}
	}
	if (!__LIB_2__::func_26(&iLocal_15, iParam0, 64))
	{
		fVar0 = __LIB_0__::func_265(&(iLocal_15.f_247));
		if (fVar0 - 9f) > IntToFloat(iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_583(int iParam0)
{
	if (__LIB_2__::func_39(&iLocal_15, iParam0, 2))
	{
		return false;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_15.f_49[iParam0], true))
	{
		return false;
	}
	if (__LIB_2__::func_39(&iLocal_15, iParam0, 4))
	{
		return true;
	}
	if (__LIB_2__::func_193(&iLocal_15, iLocal_15.f_49[iParam0]))
	{
		return true;
	}
	if (!__LIB_2__::func_39(&iLocal_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

float func_584(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar1 = 999999.9f;
	iVar2 = iParam1;
	while (iVar2 <= iParam2)
	{
		if (__LIB_2__::func_1((*iParam0)[iVar2], 0, 1))
		{
			fVar0 = __LIB_1__::func_992((*iParam0)[iVar2], Global_36, 1);
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
			}
		}
		iVar2++;
	}
	return fVar1;
}

void func_585()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iLocal_15.f_216)
	{
		if (__LIB_2__::func_1(iLocal_15.f_40[iVar1], 0, 0))
		{
			iVar0 = PED::_GET_RIDER_OF_MOUNT(iLocal_15.f_40[iVar1], false);
			if (__LIB_2__::func_1(iVar0, 0, 0))
			{
				PED::_0x931B241409216C1F(iVar0, iLocal_15.f_40[iVar1], 0);
				__LIB_2__::func_28(&iLocal_15, iVar1, 32);
			}
		}
		iVar1++;
	}
}

void func_586(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = uParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (__LIB_0__::func_139(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				__LIB_1__::func_483(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				__LIB_1__::func_484(iParam0->f_6, iParam0->f_5, 0);
			}
			__LIB_1__::func_221(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		__LIB_2__::func_360(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

bool func_587(int iParam0)
{
	if (TASK::_0x038B1F1674F0E242(Global_35))
	{
		__LIB_1__::func_283(&(iParam0->f_256), 0);
		if (__LIB_1__::func_285(&(iParam0->f_256), 1.5f))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			return true;
		}
	}
	return false;
}

void func_588(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar0 = __LIB_2__::func_511(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			__LIB_2__::func_303(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_589(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (__LIB_2__::func_349(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				__LIB_1__::func_471(iParam1, 0);
				__LIB_2__::func_523(iParam1, uParam2, __LIB_1__::func_489(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_590(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		__LIB_2__::func_474(iParam0, sParam4, iParam5);
	}
	__LIB_2__::func_520(iParam0, bParam1, fParam2, iParam3, iParam7);
}

bool func_591(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_356(iParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("AMMO"))
	{
		if (!__LIB_2__::func_516(iParam0, 1))
		{
			return false;
		}
	}
	return __LIB_2__::func_528(iParam0, 0, bParam2) >= iParam1;
}

void func_592(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_2__::func_482(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

void func_593(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	__LIB_2__::func_523(iParam0, uParam1, 1);
	__LIB_2__::func_480(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_594(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	ANIMSCENE::START_ANIM_SCENE(iParam0);
}

void func_595(var uParam0, float fParam1)
{
	uParam0->f_17 = fParam1;
}

void func_596(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false, false))
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam1, iParam2) && !PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
			{
				TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, iParam4, iParam2, fParam3, iParam5, 0);
			}
		}
	}
}

int func_597(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false, false))
	{
		return 0;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iParam2) != *uParam0)
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam1, iParam2))
		{
			if (iParam3 && __LIB_2__::func_424(*uParam1))
			{
				iParam2 = __LIB_2__::func_425(*uParam1);
			}
			else
			{
				return 0;
			}
		}
		if (PED::IS_PED_ON_MOUNT(*uParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(*uParam0, true, false);
		}
		PED::SET_PED_INTO_VEHICLE(*uParam0, *uParam1, iParam2);
	}
	return 1;
}

bool func_598(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	if (__LIB_2__::func_509(iParam0, iParam1, sParam2, iParam3, fParam4, bParam5, iParam6 == 0))
	{
		return true;
	}
	return false;
}

void func_599(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < uParam0->f_215)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar2], 0, 0))
		{
			iVar0 = 0;
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(200, 500);
			__LIB_2__::func_55((*uParam0)[iVar2], &iVar0);
			__LIB_2__::func_320((*uParam0)[iVar2], (iVar0 + iVar1));
		}
		iVar2++;
	}
	switch (uParam0->f_181)
	{
		case 0:
			__LIB_0__::func_11(joaat("G_M_M_UNIDUSTER_01"));
			__LIB_0__::func_11(joaat("G_M_M_UNIDUSTER_03"));
			break;
		case 2:
			__LIB_0__::func_11(joaat("G_M_O_UNIEXCONFEDS_01"));
			__LIB_0__::func_11(joaat("G_M_Y_UNIEXCONFEDS_01"));
			break;
		case 1:
			__LIB_0__::func_11(joaat("G_M_M_UNIINBRED_01"));
			break;
		case 3:
			__LIB_0__::func_11(joaat("G_M_M_UNIMOUNTAINMEN_01"));
			break;
		case 4:
			__LIB_0__::func_11(joaat("G_M_M_UNIRANCHERS_01"));
			break;
		case 5:
			__LIB_0__::func_11(joaat("G_M_M_UNIBANDITOS_01"));
			break;
	}
	__LIB_2__::func_147(uParam0, 128);
}

void func_600(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar0], 0, 0))
		{
			if (!__LIB_2__::func_25(uParam0, iVar0, 512))
			{
				if (PED::_IS_PED_HOGTIED((*uParam0)[iVar0]))
				{
					TASK::TASK_COMBAT_PED((*uParam0)[iVar0], Global_35, 0, 0);
					PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0], false);
					__LIB_1__::func_733((*uParam0)[iVar0]);
					__LIB_2__::func_152(uParam0, iVar0, 512);
				}
			}
			else if (!PED::_IS_PED_HOGTIED((*uParam0)[iVar0]))
			{
				__LIB_2__::func_239(uParam0, iVar0, 512);
			}
		}
		iVar0++;
	}
}

void func_601(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	if (uParam0->f_1 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(uParam0->f_1);
		uParam0->f_1 = 0;
	}
	__LIB_0__::func_172(uParam0->f_2);
	__LIB_0__::func_172(uParam0->f_3);
	uParam0->f_5 = -1f;
	uParam0->f_6 = -1f;
	uParam0->f_8 = -1f;
	uParam0->f_12 = "";
	__LIB_1__::func_148(&(uParam0->f_9));
	__LIB_0__::func_37(&(uParam0->f_9));
	*uParam0 = 0;
}

void func_602(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (__LIB_0__::func_139(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				__LIB_1__::func_483(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				__LIB_1__::func_484(iParam0->f_6, iParam0->f_5, 0);
			}
			__LIB_1__::func_221(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		__LIB_2__::func_360(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_603(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		__LIB_2__::func_344(uParam0);
		__LIB_2__::func_593(iParam1, uParam2);
	}
	__LIB_2__::func_56(*uParam0, 1, bParam4);
}

bool func_604()
{
	int iVar0;
	if (!__LIB_2__::func_4(&Local_15, 16384))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_12();
	switch (iVar0)
	{
		case 105:
			if (__LIB_2__::func_443() && __LIB_2__::func_37())
			{
				return true;
			}
			break;
		case 95:
			if (__LIB_2__::func_443() && __LIB_2__::func_37())
			{
				return true;
			}
			break;
	}
	if (__LIB_2__::func_37())
	{
		if (Local_15.f_151 != 43)
		{
			if (__LIB_1__::func_923())
			{
				if (__LIB_2__::func_38(iVar0))
				{
					return false;
				}
				switch (iVar0)
				{
					case 82:
						return false;
					case 5:
					case 22:
					case 26:
					case 35:
					case 38:
					case 56:
					case 69:
					case 76:
					case 78:
					case 92:
					case 105:
					case 115:
					case 120:
						__LIB_1__::func_283(&(Local_15.f_253), 0);
						if (__LIB_1__::func_285(&(Local_15.f_253), 0.5f))
						{
							return true;
						}
						break;
				}
			}
		}
	}
	return false;
}

bool func_605(var uParam0)
{
	if (!__LIB_2__::func_8(uParam0->f_151))
	{
		if (uParam0->f_20 < 60f)
		{
			if (__LIB_2__::func_550(uParam0->f_151, uParam0->f_221))
			{
				return true;
			}
		}
	}
	return false;
}

char* func_606()
{
	return "SCRIPT_PROC@ROBBERIES@BRIDGE@ODRISCOLL@AMBUSH_TRAP";
}

char* func_607(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDLE_PEDA";
		case 9:
			return "BREAKOUT_PEDA";
		case 4:
			return "DIA_01_PEDA";
		case 5:
			return "DIA_02_PEDA";
		case 7:
			return "DIA_03A_PEDA";
		case 8:
			return "DIA_03C_PEDC";
		case 6:
			return "DIA_03A_PLAYER";
		case 1:
			return "DUAL_IDLE_PEDA";
		case 2:
			return "DUAL_IDLE_PEDB";
		case 3:
			return "DUAL_IDLE_PEDC";
		default:
			break;
	}
	return "invalid";
}

void func_608(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_609()
{
	PED::SET_PED_RESET_FLAG(Global_35, 179, true);
}

char* func_610()
{
	return "script@proc@bridgerobberies@bridgetraphiding";
}

bool func_611(int iParam0)
{
	return __LIB_0__::func_1(*iParam0, 2);
}

bool func_612(int iParam0, bool bParam1)
{
	if (iParam0->f_10)
	{
		return false;
	}
	if ((TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35)) || TASK::IS_PED_SPRINTING(Global_35))
	{
		if (bParam1 || MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, iParam0->f_25, false) > 2f)
		{
			return true;
		}
	}
	return false;
}

void func_613(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 4);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 4);
	}
}

void func_614(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	if (!Global_1935630.f_12)
	{
		vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, vParam0) };
		fVar1 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar2.x, vVar2.y);
		fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
		ENTITY::SET_ENTITY_HEADING(Global_35, (fVar0 + fVar1));
	}
}

void func_615(vector3 vParam0)
{
	float fVar0;
	vector3 vVar1;
	if (!Global_1935630.f_12)
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, vParam0) };
		fVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar0, 1f);
		CAM::_0x05BD5E4088B30A66(-180f, 180f);
	}
}

void func_616(vector3 vParam0)
{
	vector3 vVar0;
	float fVar3;
	if (!Global_1935630.f_12)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, vParam0) };
		fVar3 = MISC::ATAN((vVar0.z / BUILTIN::SQRT(((vVar0.y * vVar0.y) + (vVar0.x * vVar0.x)))));
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar3, 1f);
	}
}

var func_617(int iParam0)
{
	return iParam0->f_25;
}

bool func_618(int iParam0)
{
	return __LIB_0__::func_1(*iParam0, 1);
}

void func_619(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 2);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 2);
	}
}

void func_620(int iParam0, float fParam1)
{
	iParam0->f_1 = (__LIB_0__::func_36() - fParam1);
	__LIB_1__::func_336(iParam0, 1);
	__LIB_0__::func_516(iParam0, 2);
	iParam0->f_2 = 0f;
}

Vector3 func_621()
{
	vector3 vVar0;
	vVar0 = { __LIB_1__::func_384(0) };
	vVar0.x = (vVar0.x * 10f);
	vVar0.f_1 = (vVar0.y * 10f);
	vVar0.f_2 = (vVar0.z * 10f);
	return Global_36 + vVar0;
}

bool func_622(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_376(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::_GET_PED_CROUCH_MOVEMENT(Global_35) || PED::IS_PED_IN_COVER(Global_35, false, false)) || PED::IS_PED_GOING_INTO_COVER(Global_35)) || *iParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_35, iParam0, iVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*iParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_35, false, false) || PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				return false;
			}
			if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35) || ((PED::_GET_PED_BLACKBOARD_FLOAT(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *iParam1 & 2097152 != 0))
			{
				return false;
			}
		}
		if (PED::_GET_PED_BLACKBOARD_FLOAT(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

bool func_623()
{
	if (!__LIB_2__::func_514() && __LIB_2__::func_573(1))
	{
		return true;
	}
	return false;
}

void func_624(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (__LIB_0__::func_139((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					__LIB_1__::func_281(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						(uParam0[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						(uParam0[iVar0 /*17*/])->f_5 = "";
						(uParam0[iVar0 /*17*/])->f_14 = 0;
						(uParam0[iVar0 /*17*/])->f_13 = "";
						(uParam0[iVar0 /*17*/])->f_15 = 0;
						(uParam0[iVar0 /*17*/])->f_11 = "";
						(uParam0[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

float func_625(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	fVar0 = __LIB_2__::func_584(iParam0, iParam1, iParam2);
	fVar0 = BUILTIN::SQRT(fVar0);
	return fVar0;
}

int func_626(int iParam0)
{
	int iVar0;
	if (__LIB_2__::func_591(iParam0, 1, 0))
	{
		iVar0 = __LIB_2__::func_528(iParam0, 0, 0);
	}
	return iVar0;
}

int func_627()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (__LIB_2__::func_591(__LIB_0__::func_421(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_628()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = __LIB_0__::func_421(iVar1);
		if (__LIB_2__::func_591(iVar2, 1, 0) || __LIB_0__::func_530(__LIB_0__::func_529(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_629(int iParam0)
{
	if (__LIB_0__::func_599(iParam0) && __LIB_2__::func_591(iParam0, 1, 0))
	{
		return true;
	}
	else if (__LIB_0__::func_600(iParam0) && __LIB_1__::func_609(iParam0))
	{
		return true;
	}
	return false;
}

bool func_630(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
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
			if (__LIB_2__::func_198(iParam2, iParam0))
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
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, iParam2))
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

bool func_631(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = -1;
	iVar1 = -1;
	if (VEHICLE::_0xA19447D83294E29F(iParam1, &iVar0, &iVar1))
	{
		if (iVar0 <= 0)
		{
			return true;
		}
		else if (iVar1 == iVar0)
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam1, iVar2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					__LIB_2__::func_20(uParam0, iVar3, iParam2);
				}
				iVar2++;
			}
			return true;
		}
	}
	return false;
}

void func_632(int iParam0, int iParam1)
{
	if (__LIB_2__::func_4(iParam0, 32))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(iParam1);
		}
		__LIB_2__::func_149(iParam0, 32);
	}
}

bool func_633(int iParam0)
{
	if (!__LIB_2__::func_15(iParam0, 0))
	{
		return false;
	}
	return Global_40.f_9571[iParam0 /*10*/].f_1 == 5;
}

void func_634(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(uParam0->f_1), 16);
	}
	else
	{
		__LIB_1__::func_336(&(uParam0->f_1), 16);
	}
}

int func_635(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("WAGON02X");
		default:
			break;
	}
	return 0;
}

void func_636(int iParam0, int iParam1, int iParam2)
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false)) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		VEHICLE::_0xFFFE15B433300B8C(iParam0, iParam1, iParam2);
	}
}

int func_637(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
	fVar1 = BUILTIN::TO_FLOAT((iVar0 / iParam1));
	if (fVar1 > 0.8f || (__LIB_0__::func_36() - fParam2) < 4f)
	{
		return 2;
	}
	else if (fVar1 < 0.3f)
	{
		return 4;
	}
	return 1;
}

char* func_638(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		if (__LIB_0__::func_27(iParam3, 1))
		{
			switch (iParam1)
			{
				case 0:
					return "WON_FIGHT_ODRISCOLL";
				case 2:
					return "WON_FIGHT_EXCONFED";
				case 1:
					return "WON_FIGHT_INBRED";
				case 3:
					return "WON_FIGHT_SAVAGES";
				case 5:
					return "WON_FIGHT_BANDITOS";
				case 4:
					return "WON_FIGHT_RANCHERS";
				case 10:
					return "WON_FIGHT_PINKERTONS";
				default:
					break;
			}
		}
		else if (__LIB_0__::func_27(iParam3, 2))
		{
			switch (iParam1)
			{
				case 0:
					return "WON_FIGHT_ODRISCOLL_DOM";
				case 2:
					return "WON_FIGHT_EXCONFED_DOM";
				case 1:
					return "WON_FIGHT_INBRED_DOM";
				case 3:
					return "WON_FIGHT_SAVAGES_DOM";
				case 5:
					return "WON_FIGHT_BANDITOS_DOM";
				case 4:
					return "WON_FIGHT_RANCHERS_DOM";
				case 10:
					return "WON_FIGHT_PINKERTONS_DOM";
				default:
					break;
			}
		}
		else if (__LIB_0__::func_27(iParam3, 4))
		{
			switch (iParam1)
			{
				case 0:
					return "WON_FIGHT_ODRISCOLL_LOWH";
				case 2:
					return "WON_FIGHT_EXCONFED_LOWH";
				case 1:
					return "WON_FIGHT_INBRED_LOWH";
				case 3:
					return "WON_FIGHT_SAVAGES_LOWH";
				case 5:
					return "WON_FIGHT_BANDITOS_LOWH";
				case 4:
					return "WON_FIGHT_RANCHERS_LOWH";
				case 10:
					return "WON_FIGHT_PINKERTONS_LOWH";
				default:
					break;
			}
		}
	}
	return "WON_FIGHT";
}

bool func_639(int iParam0)
{
	if (iParam0->f_4)
	{
		return false;
	}
	if (iParam0->f_9)
	{
		return false;
	}
	if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		return false;
	}
	if (!WEAPON::_0x705BE297EEBDB95D(Global_1935630.f_44))
	{
		return false;
	}
	if (__LIB_1__::func_285(&(iParam0->f_32), 1f))
	{
		if (!__LIB_0__::func_163(Global_35, 716706914))
		{
			return true;
		}
	}
	return false;
}

bool func_640(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return true;
	}
	if (__LIB_2__::func_515(iParam0, fParam1, iParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

int func_641(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945938[iVar0 /*18*/].f_11 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				__LIB_2__::func_575(iVar1, iParam1, sParam0, 5, iParam3, fParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

int func_642(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
			if (iParam2 == Global_1945938[iVar0 /*18*/].f_10 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		__LIB_2__::func_575(iVar1, iParam1, sParam0, 2, iParam3, fParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216 /* Float: 1f */, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_643(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (__LIB_0__::func_86(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
			if (__LIB_0__::func_175(vParam2, Global_1945938[iVar0 /*18*/].f_6, 0.01f, 1) && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		__LIB_2__::func_575(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

bool func_644(var uParam0)
{
	if (!__LIB_2__::func_519(uParam0))
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

void func_645(int iParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (bParam1)
	{
		if (!__LIB_0__::func_792(610))
		{
			if (!__LIB_2__::func_623())
			{
				__LIB_2__::func_347(1);
				__LIB_2__::func_459();
			}
		}
		__LIB_1__::func_240(610, 1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, true);
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			MISC::_0x870708A6E147A9AD(iParam0, "", fParam2, fParam2, 0, 0, 0, 0, 0, -1);
		}
		PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), iParam0, 1, 0);
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			MISC::_0x870708A6E147A9AD(iParam0, "", fParam2, fParam2, 8, 0, 0, 0, 0, -1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, false);
		if (!bParam3)
		{
			PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
		}
	}
}

bool func_646(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	return __LIB_2__::func_271(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_647(int iParam0)
{
	if (iParam0->f_35)
	{
		return;
	}
	if (!iParam0->f_8)
	{
		return;
	}
	if (iParam0->f_14 && !iParam0->f_13)
	{
		if (__LIB_0__::func_154(Global_1935630.f_44) || iParam0->f_6)
		{
			if (__LIB_0__::func_139(iParam0->f_36))
			{
				__LIB_1__::func_748(&(iParam0->f_36), 1, 1);
				iParam0->f_13 = 1;
			}
		}
	}
	if (!__LIB_0__::func_75(&(iParam0->f_29)))
	{
		if (__LIB_2__::func_342(iParam0->f_28))
		{
			__LIB_1__::func_283(&(iParam0->f_29), 0);
		}
	}
	else if (iParam0->f_6 && !iParam0->f_1)
	{
		if (__LIB_1__::func_285(&(iParam0->f_29), 3f) && __LIB_2__::func_342(iParam0->f_28))
		{
			__LIB_0__::func_105(1);
			iParam0->f_35 = 1;
			if (!__LIB_1__::func_285(&(iParam0->f_29), 6f) && !iParam0->f_4)
			{
				__LIB_2__::func_355(609);
			}
		}
	}
}

bool func_648(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4, int iParam5)
{
	int iVar0;
	if (!__LIB_0__::func_27(*iParam0, 4))
	{
		if (__LIB_0__::func_27(iParam5, 1))
		{
			if (__LIB_0__::func_181())
			{
				__LIB_1__::func_683(iParam0, 4);
				return false;
			}
		}
		else if (__LIB_0__::func_27(iParam5, 2))
		{
			if (__LIB_0__::func_113())
			{
				__LIB_1__::func_683(iParam0, 4);
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (!__LIB_0__::func_27(*iParam0, 1))
	{
		if (!__LIB_0__::func_27(*iParam0, 4))
		{
			if (iParam3 < 0)
			{
				iParam3 = *uParam1;
			}
			iVar0 = iParam2;
			while (iVar0 <= ((iParam2 + iParam3) - 1))
			{
				if (__LIB_2__::func_1((*uParam1)[iVar0], 8, 1) && !PED::IS_PED_FLEEING((*uParam1)[iVar0]))
				{
					return false;
				}
				iVar0++;
			}
		}
		__LIB_1__::func_283(&(iParam0->f_1), 0);
		__LIB_1__::func_683(iParam0, 1);
	}
	if (__LIB_0__::func_27(*iParam0, 1))
	{
		if (__LIB_1__::func_285(&(iParam0->f_1), (fParam4 + 4f)))
		{
			__LIB_1__::func_683(iParam0, 4);
			return false;
		}
		if (!__LIB_1__::func_285(&(iParam0->f_1), fParam4))
		{
			return false;
		}
		if (!__LIB_2__::func_227(0f, 1, Global_35, 1))
		{
			return false;
		}
		if (__LIB_2__::func_385(Global_35))
		{
			return false;
		}
		if (Global_1935630.f_24)
		{
			return false;
		}
		__LIB_1__::func_683(iParam0, 4);
		return true;
	}
	return false;
}

int func_649(int iParam0, int iParam1, int iParam2)
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
	int iVar10;
	int iVar11;
	int iVar12;
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = __LIB_2__::func_626(iVar9);
	iVar2 = __LIB_2__::func_626(iVar10);
	iVar3 = __LIB_2__::func_626(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = __LIB_2__::func_626(iVar12);
	}
	iVar5 = __LIB_0__::func_439(iVar9);
	iVar6 = __LIB_0__::func_439(iVar10);
	iVar7 = __LIB_0__::func_439(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = __LIB_0__::func_439(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

char* func_650(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (__LIB_2__::func_627() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", __LIB_0__::func_964(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", __LIB_2__::func_628(), 12);
			}
			break;
		case joaat("DINO_BONES"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (__LIB_0__::func_942() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", __LIB_0__::func_965(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", __LIB_0__::func_942(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", __LIB_0__::func_966(), 13);
			}
			break;
		case joaat("ROCK_CARVINGS"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (__LIB_0__::func_438() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", __LIB_0__::func_528(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", __LIB_0__::func_438(), 10);
			}
			break;
		case joaat("TAXIDERMY"):
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, __LIB_1__::func_34(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_651(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
				bVar1 = (__LIB_2__::func_591(iVar2, 1, 0) || __LIB_0__::func_530(__LIB_0__::func_529(iVar2)));
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
					bVar1 = (__LIB_2__::func_626(iVar2) - iParam7) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
				}
				else
				{
					bVar1 = __LIB_2__::func_626(iVar2) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (__LIB_2__::func_626(iVar2) + iParam7) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
			}
			else
			{
				bVar1 = __LIB_2__::func_626(iVar2) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
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
					bVar1 = (__LIB_2__::func_626(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = __LIB_2__::func_629(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = __LIB_2__::func_629(iVar2);
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

bool func_652(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (__LIB_2__::func_629(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_2__::func_629(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (__LIB_2__::func_629(iVar0))
		{
			*iParam2++;
		}
		if (__LIB_2__::func_629(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (__LIB_2__::func_629(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_2__::func_629(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (__LIB_2__::func_629(iVar0))
		{
			*iParam2++;
		}
		if (__LIB_2__::func_629(iVar1))
		{
			*iParam2++;
		}
		if (__LIB_2__::func_629(iVar0) && __LIB_2__::func_629(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (__LIB_2__::func_629(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_2__::func_629(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (__LIB_2__::func_629(iVar0))
		{
			*iParam2++;
		}
		if (__LIB_2__::func_629(iVar1))
		{
			*iParam2++;
		}
		if (__LIB_2__::func_629(iVar2))
		{
			*iParam2++;
		}
		if ((__LIB_2__::func_629(iVar0) && __LIB_2__::func_629(iVar1)) && __LIB_2__::func_629(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (__LIB_2__::func_629(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_2__::func_629(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (__LIB_2__::func_629(iVar0))
		{
			*iParam2++;
		}
		if (__LIB_2__::func_629(iVar1))
		{
			*iParam2++;
		}
		if (__LIB_2__::func_629(iVar2))
		{
			*iParam2++;
		}
		if (__LIB_2__::func_629(iVar3))
		{
			*iParam2++;
		}
		if (((__LIB_2__::func_629(iVar0) && __LIB_2__::func_629(iVar1)) && __LIB_2__::func_629(iVar2)) && __LIB_2__::func_629(iVar3))
		{
			return true;
		}
	}
	return false;
}

bool func_653(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
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
			if (__LIB_2__::func_198(iParam2, iParam0))
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
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, iParam2))
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

bool func_654(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 4);
}

void func_655()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (PED::IS_PED_IN_COVER(Local_15[iVar0], false, false))
			{
				__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				TASK::TASK_COMBAT_PED(Local_15[iVar0], Global_35, 0, 0);
			}
		}
		iVar0++;
	}
}

int func_656(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar1 = -1;
	fVar2 = 1E+09f;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
		{
			fVar3 = __LIB_1__::func_992(Local_15[iVar0], Global_36, 0);
			if (fVar3 < fVar2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_657(var uParam0)
{
	if (Local_15.f_21 == 0f)
	{
		*uParam0 = 210f;
	}
	else if (Local_15.f_21 < (__LIB_2__::func_493() - 10f))
	{
		*uParam0 = __LIB_2__::func_493();
	}
	else
	{
		*uParam0 = 210f;
	}
	if (Local_15.f_20 > *uParam0)
	{
		return true;
	}
	switch (Local_15.f_151)
	{
		case 29:
		case 30:
			if (Local_15.f_95 < 10)
			{
				return true;
			}
			break;
		case 0:
		case 11:
			if (!__LIB_2__::func_4(&Local_15, 512) && !__LIB_2__::func_4(&Local_15, 16384))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_658(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (__LIB_2__::func_1((*iParam0)[iVar1], 0, 1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_659(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	__LIB_2__::func_354(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

bool func_660(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (__LIB_0__::func_27(*uParam1, 128))
	{
		if (!__LIB_0__::func_163(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_0__::func_27(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!__LIB_1__::func_865(iVar2))
			{
				return false;
			}
			if (!__LIB_0__::func_163(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (__LIB_1__::func_870(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!__LIB_0__::func_27(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((__LIB_0__::func_27(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0)));
			__LIB_1__::func_581(uParam1, 128);
			return false;
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	if (__LIB_0__::func_27(*uParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return false;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
			*uParam1 = 0;
			return true;
		}
	}
	if (__LIB_0__::func_27(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!__LIB_1__::func_865(iVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!__LIB_0__::func_27(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!__LIB_0__::func_27(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, false);
				if (__LIB_0__::func_27(iParam2, 8192))
				{
					HUD::_DISPLAY_HUD_COMPONENT(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return false;
		}
		if (__LIB_0__::func_27(*uParam1, 2336))
		{
			if (!__LIB_1__::func_865(iVar2))
			{
			}
			if (__LIB_1__::func_866(iVar2, *uParam1))
			{
				__LIB_1__::func_993(uParam1, 32);
				__LIB_1__::func_993(uParam1, 256);
				__LIB_1__::func_993(uParam1, 2048);
				__LIB_1__::func_581(uParam1, 512);
				__LIB_1__::func_581(uParam1, 1024);
				__LIB_1__::func_581(uParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (__LIB_0__::func_27(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!__LIB_1__::func_865(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return false;
			}
			else
			{
				__LIB_1__::func_993(uParam1, 64);
			}
		}
		if (__LIB_0__::func_27(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return true;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && __LIB_0__::func_27(iParam2, 1024))) || __LIB_0__::func_27(iParam2, 8)) && !__LIB_0__::func_27(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			__LIB_1__::func_581(uParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && __LIB_0__::func_27(iParam2, 4096)) && !__LIB_0__::func_27(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			__LIB_1__::func_581(uParam1, 2048);
			__LIB_1__::func_581(uParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && __LIB_0__::func_27(iParam2, 32)) && !__LIB_0__::func_27(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			__LIB_1__::func_581(uParam1, 256);
			__LIB_1__::func_581(uParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			__LIB_1__::func_581(uParam1, 64);
		}
		else if (!__LIB_0__::func_27(iParam2, 1))
		{
			if (!__LIB_0__::func_27(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (__LIB_1__::func_870(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!__LIB_0__::func_27(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			__LIB_1__::func_581(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			__LIB_1__::func_581(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			__LIB_1__::func_581(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	else if (!__LIB_0__::func_27(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		__LIB_1__::func_581(uParam1, 8);
	}
	return false;
}

var func_661()
{
	var uVar0;
	__LIB_1__::func_336(&uVar0, 5);
	__LIB_1__::func_336(&uVar0, 48);
	__LIB_1__::func_336(&uVar0, 1664);
	__LIB_1__::func_336(&uVar0, 131072);
	return uVar0;
}

void func_662(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(uParam0->f_1), 1024);
	}
	else
	{
		__LIB_1__::func_336(&(uParam0->f_1), 1024);
	}
}

void func_663(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_15 = 0;
	uParam0->f_14 = 0;
	uParam0->f_8 = -1f;
	uParam0->f_13 = -1;
	uParam0->f_6 = -1f;
	uParam0->f_11 = -1f;
	uParam0->f_12 = -1;
	uParam0->f_9 = -1f;
	uParam0->f_10 = -1f;
	uParam0->f_7 = -1f;
	uParam0->f_1 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
}

void func_664(var uParam0, int iParam1)
{
	uParam0->f_7 = iParam1;
}

void func_665(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	if (!PED::DOES_GROUP_EXIST(*uParam1) || PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(*uParam0, 279, bParam3);
	if (bParam2)
	{
		PED::SET_PED_AS_GROUP_LEADER(*uParam0, *uParam1, false);
	}
	else
	{
		PED::SET_PED_AS_GROUP_MEMBER(*uParam0, *uParam1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 280, bParam4);
		PED::_0xBAD2A311667A50D7(*uParam0, iParam5);
	}
	PED::_0x97C475212B327666(*uParam1, iParam6);
}

bool func_666()
{
	__LIB_0__::func_7(&Local_274, 4);
	return true;
}

void func_667(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;
	Global_1945938[iParam0 /*18*/].f_4 = iParam1;
	Global_1945938[iParam0 /*18*/] = iParam4;
	Global_1945938[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945938[iParam0 /*18*/].f_2 = iParam5;
	Global_1945938[iParam0 /*18*/].f_6 = { vParam6 };
	Global_1945938[iParam0 /*18*/].f_9 = fParam9;
	Global_1945938[iParam0 /*18*/].f_10 = iParam10;
	Global_1945938[iParam0 /*18*/].f_11 = iParam11;
	Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_5 = iParam12;
	Global_1945938[iParam0 /*18*/].f_1 = 2;
	Global_1945938[iParam0 /*18*/].f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, uParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1945938[iParam0 /*18*/].f_3 = iVar0;
	__LIB_0__::func_629(iParam0, 1);
	__LIB_0__::func_185(iParam0, 1);
	__LIB_0__::func_186(iParam0, 128);
}

void func_668(var uParam0, var uParam1, char* sParam2)
{
	struct<4> Var0;
	char cVar4[32];
	__LIB_2__::func_601(uParam0, 1);
	uParam0->f_12 = sParam2;
	uParam0->f_5 = uParam1->f_7;
	uParam0->f_6 = uParam1->f_8;
	uParam0->f_7 = uParam1->f_9;
	*uParam0 = *uParam1;
	uParam0->f_8 = uParam1->f_6;
	StringCopy(&cVar4, sParam2, 32);
	Var0 = { cVar4 };
	if (uParam0->f_5 > 0f)
	{
		StringConCat(&Var0, "Vis", 32);
		uParam0->f_2 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam1->f_3, 0f, 0f, 0f, uParam0->f_5, uParam0->f_5, uParam0->f_5, &Var0);
	}
	else
	{
		uParam0->f_2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam1->f_3, 0f, 0f, 0f, 1f, 1f, 3f, &cVar4);
	}
	if (uParam0->f_5 > 0f && uParam0->f_6 != uParam0->f_5)
	{
		Var0 = { cVar4 };
		StringConCat(&Var0, "Aud", 32);
		uParam0->f_3 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam1->f_3, 0f, 0f, 0f, uParam0->f_6, uParam0->f_6, uParam0->f_6, &Var0);
	}
	if (uParam0->f_7 > 0f)
	{
		Var0 = { cVar4 };
		StringConCat(&Var0, "Near", 32);
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam1->f_3, 0f, 0f, 0f, uParam1->f_9, uParam1->f_9, uParam1->f_9, &Var0);
	}
	if (!__LIB_0__::func_86(uParam1->f_3))
	{
	}
	else
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2))
		{
			PED::_0x7C00CFC48A782DC0(uParam0->f_2, uParam1->f_1, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_3))
		{
			PED::_0x7C00CFC48A782DC0(uParam0->f_3, uParam1->f_1, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4))
		{
			PED::_0x7C00CFC48A782DC0(uParam0->f_4, uParam1->f_1, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
	}
	uParam0->f_1 = EVENT::_CREATE_SHOCKING_EVENT(uParam1);
}

int func_669(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, float fParam7, bool bParam8, int iParam9)
{
	int iVar0[5];
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	if (VOLUME::_DOES_VOLUME_EXIST(iParam9))
	{
		iVar12 = __LIB_2__::func_130(&iVar0, iParam0, iParam9, iVar0);
	}
	else
	{
		iVar12 = __LIB_2__::func_203(&iVar0, iParam0, iVar0, vParam1, iParam4);
	}
	iVar13 = 0;
	while (iVar13 < iVar12)
	{
		iVar14 = 0;
		if (VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0[iVar13])))
		{
		}
		else if ((!bParam6 || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0[iVar13], -1) != 0) && (!bParam5 || ENTITY::GET_ENTITY_SPEED(iVar0[iVar13]) >= 1f))
		{
			vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar0[iVar13], true, false) };
			if (!__LIB_0__::func_86(vVar6))
			{
				vVar9 = { 0f, 0f, 0f };
				if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar6, &vVar9, 1, 3f, 0f))
				{
					if (__LIB_0__::func_175(vVar6, vVar9, fParam7, 0))
					{
						iVar14 = 1;
						iVar15 = 1;
					}
				}
			}
		}
		iVar13++;
	}
	return iVar15;
}

void func_670(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = __LIB_0__::func_710(*uParam0);
	iVar1 = __LIB_0__::func_39(*uParam0);
	iVar2 = __LIB_0__::func_40(*uParam0);
	iVar3 = __LIB_0__::func_41(*uParam0);
	iVar4 = __LIB_0__::func_42(*uParam0);
	iVar5 = __LIB_0__::func_43(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = __LIB_0__::func_44(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = __LIB_0__::func_44(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	__LIB_1__::func_311(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_671(var uParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar17;
	if (!__LIB_0__::func_65(&Global_1393447, 65536))
	{
		__LIB_0__::func_47(&Global_1393447, 16);
		__LIB_0__::func_47(&Global_1393447, 65536);
		__LIB_2__::func_147(uParam0, 2097152);
		Global_40.f_9632.f_194 = uParam0->f_151;
		__LIB_2__::func_445(uParam0, 1);
		__LIB_1__::func_309(-1, 0, 0, 0, 0);
		__LIB_1__::func_924();
		Var0.f_6 = -1082130432;
		Var0.f_7 = -1082130432;
		Var0.f_8 = -1082130432;
		Var0.f_9 = -1082130432;
		Var0.f_10 = -1082130432;
		Var0.f_11 = -1082130432;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		Var0 = joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW");
		Var0.f_6 = 100f;
		if (!__LIB_0__::func_86(uParam0->f_212))
		{
			Var0.f_3 = { uParam0->f_212 };
		}
		else
		{
			Var0.f_3 = { uParam0->f_209 };
		}
		if (__LIB_2__::func_8(uParam0->f_151))
		{
			Var0.f_8 = 40f;
			Var0.f_9 = 40f;
			Var0.f_7 = 40f;
		}
		else
		{
			Var0.f_8 = 120f;
			Var0.f_9 = 120f;
			Var0.f_7 = 120f;
		}
		uParam0->f_93 = EVENT::_CREATE_SHOCKING_EVENT(&Var0);
		if (!__LIB_2__::func_5())
		{
			__LIB_2__::func_6(1);
			__LIB_2__::func_147(uParam0, 4);
		}
		if (bParam1)
		{
			__LIB_2__::func_304(1, -1, 0, 0, 0);
		}
		else
		{
			__LIB_2__::func_175();
			__LIB_2__::func_176();
		}
		if (__LIB_2__::func_8(uParam0->f_151))
		{
			__LIB_0__::func_747(30, 0, 1);
		}
		else
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("GANG_AMBUSH_ENCOUNTERED")), 1);
			__LIB_2__::func_457(uParam0, 0);
		}
		MISC::_0x1096603B519C905F(__LIB_2__::func_9(uParam0->f_151));
		__LIB_2__::func_599(uParam0);
		__LIB_0__::func_703(0, 13);
		iVar17 = 0;
		while (iVar17 < uParam0->f_215)
		{
			if (__LIB_2__::func_1((*uParam0)[iVar17], 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY((*uParam0)[iVar17], Global_35, -1, 0, 51, 0);
			}
			iVar17++;
		}
	}
}

bool func_672()
{
	int iVar0;
	if (!__LIB_2__::func_4(&Local_15, 16384))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_12();
	switch (iVar0)
	{
		case 105:
			if (__LIB_2__::func_549() && __LIB_2__::func_37())
			{
				return true;
			}
			break;
		case 95:
			if (__LIB_2__::func_549() && __LIB_2__::func_37())
			{
				return true;
			}
			break;
	}
	if (__LIB_2__::func_37())
	{
		if (Local_15.f_151 != 43)
		{
			if (__LIB_1__::func_923())
			{
				if (__LIB_2__::func_38(iVar0))
				{
					return false;
				}
				switch (iVar0)
				{
					case 82:
						return false;
					case 5:
					case 22:
					case 26:
					case 35:
					case 38:
					case 56:
					case 69:
					case 76:
					case 78:
					case 92:
					case 105:
					case 115:
					case 120:
						__LIB_1__::func_283(&(Local_15.f_253), 0);
						if (__LIB_1__::func_285(&(Local_15.f_253), 0.5f))
						{
							return true;
						}
						break;
				}
			}
		}
	}
	return false;
}

int func_673(int iParam0)
{
	return __LIB_2__::func_16();
}

int func_674(int iParam0, int iParam1)
{
	switch (iParam0->f_181)
	{
		case 0:
			return joaat("G_M_M_UNIDUSTER_01");
		case 4:
			return joaat("G_M_M_UNIRANCHERS_01");
		default:
			break;
	}
	return joaat("G_M_M_UNICRIMINALS_01");
}

void func_675(int iParam0)
{
	Local_274.f_8 = iParam0;
}

float func_676()
{
	if (iLocal_15.f_9[0] < iLocal_15.f_9[1])
	{
		return iLocal_15.f_9[0];
	}
	return iLocal_15.f_9[1];
}

void func_677(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	__LIB_0__::func_11(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (iParam0->f_181)
	{
		case 0:
			*iParam2 = 1;
			StringCopy(sParam3, "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL", 64);
			*iParam4 = 1;
			break;
		case 4:
			*iParam2 = 1;
			StringCopy(sParam3, "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL", 64);
			*iParam4 = 1;
			break;
		default:
			*iParam2 = 1;
			StringCopy(sParam3, "CALLOUT_FOLLOW_ROB_ATTACK_NEUTRAL", 64);
			*iParam4 = 1;
			break;
	}
}

void func_678(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	__LIB_0__::func_11(iParam0, iParam1, *iParam2, sParam3, *iParam4);
	switch (iParam0->f_181)
	{
		case 0:
			*iParam2 = 0;
			StringCopy(sParam3, "CALLOUT_FOLLOW_ROB_FLEE_MALE", 64);
			*iParam4 = 1;
			break;
		case 4:
			*iParam2 = 0;
			StringCopy(sParam3, "CALLOUT_LETS_GET_OUTTA_HERE_MALE", 64);
			*iParam4 = 2;
			break;
		default:
			*iParam2 = 0;
			StringCopy(sParam3, "CALLOUT_LETS_GET_OUTTA_HERE_MALE", 64);
			*iParam4 = 1;
			break;
	}
}

void func_679()
{
	__LIB_2__::func_104(&(iLocal_15.f_152), 0);
	__LIB_2__::func_105(&(iLocal_15.f_152), 0);
	__LIB_2__::func_50(&(iLocal_15.f_152), 1);
	__LIB_2__::func_51(&(iLocal_15.f_152), 1);
	__LIB_2__::func_111(&(iLocal_15.f_152), 1);
	__LIB_2__::func_52(&(iLocal_15.f_152), 1);
	__LIB_2__::func_180(&(iLocal_15.f_152), 1);
}

void func_680()
{
	if (__LIB_2__::func_1(iLocal_15.f_56, 0, 0))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_15.f_56, true, joaat("REL_GANG_ODRISCOLL"));
	}
}

void func_681()
{
	int iVar0;
	iVar0 = 2;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(iLocal_15[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_15.f_22[iVar0]))
			{
				if (__LIB_1__::func_472(iLocal_15[iVar0], 80f, 30f, iLocal_15.f_9[iVar0], -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_189(&iLocal_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
				}
			}
		}
		iVar0++;
	}
}

void func_682()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(iLocal_15[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_15.f_22[iVar0]))
			{
				if (__LIB_2__::func_167(iLocal_15[iVar0], 1))
				{
					__LIB_2__::func_189(&iLocal_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_683(int iParam0)
{
	if (__LIB_2__::func_1(iLocal_15[iParam0], 0, 0))
	{
		if (__LIB_1__::func_472(iLocal_15[iParam0], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 50f))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_15[iParam0], Global_35, 17))
			{
				return true;
			}
		}
	}
	return false;
}

void func_684()
{
	__LIB_2__::func_561();
	__LIB_2__::func_579();
}

void func_685()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_216)
	{
		if (!__LIB_2__::func_26(&iLocal_15, iVar0, 16))
		{
			if (__LIB_2__::func_1(iLocal_15.f_40[iVar0], 0, 0))
			{
				if (__LIB_2__::func_582(iVar0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(iLocal_15.f_40[iVar0], iLocal_15.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK(iLocal_15.f_40[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_15.f_40[iVar0], false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_15.f_40[iVar0]));
					__LIB_2__::func_28(&iLocal_15, iVar0, 16);
				}
			}
		}
		iVar0++;
	}
}

bool func_686()
{
	if (__LIB_1__::func_285(&(iLocal_15.f_244), 45f) && __LIB_0__::func_0())
	{
		__LIB_2__::func_492(&iLocal_15);
		__LIB_0__::func_37(&(iLocal_15.f_244));
	}
	return false;
}

bool func_687(var uParam0)
{
	if (iLocal_15.f_21 == 0f)
	{
		*uParam0 = 210f;
	}
	else if (iLocal_15.f_21 < (__LIB_2__::func_578() - 10f))
	{
		*uParam0 = __LIB_2__::func_578();
	}
	else
	{
		*uParam0 = 210f;
	}
	if (iLocal_15.f_20 > *uParam0)
	{
		return true;
	}
	switch (iLocal_15.f_151)
	{
		case 29:
		case 30:
			if (iLocal_15.f_95 < 10)
			{
				return true;
			}
			break;
		case 0:
		case 11:
			if (!__LIB_2__::func_4(&iLocal_15, 512) && !__LIB_2__::func_4(&iLocal_15, 16384))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_688(var uParam0, int iParam1)
{
	if ((__LIB_2__::func_466(&(uParam0->f_43[iParam1 /*17*/]), 1, 0) && !__LIB_1__::func_489(&(uParam0->f_43[iParam1 /*17*/]), 4)) && !__LIB_1__::func_489(&(uParam0->f_43[iParam1 /*17*/]), 13))
	{
		return true;
	}
	return false;
}

int func_689(int iParam0, var uParam1, float fParam2, var uParam3, float fParam4)
{
	if (__LIB_2__::func_574(iParam0))
	{
		fParam4 = (fParam4 + 5f);
	}
	if (!__LIB_2__::func_227(0f, 1, Global_35, 1))
	{
		return 0;
	}
	if (__LIB_1__::func_285(&uParam1, fParam4))
	{
		return 1;
	}
	return 0;
}

void func_690(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;
	if (__LIB_0__::func_139(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		__LIB_1__::func_748(&(iParam1->f_6), 0, 1);
	}
	if (!__LIB_0__::func_139(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (__LIB_1__::func_502(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = __LIB_2__::func_641(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (__LIB_0__::func_139(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					__LIB_2__::func_369(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					__LIB_1__::func_522(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						__LIB_1__::func_523(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						__LIB_1__::func_483(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					__LIB_1__::func_522(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					__LIB_1__::func_221(iParam1->f_6, 0, 1);
				}
				else
				{
					__LIB_1__::func_221(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_691(var uParam0, int iParam1, bool bParam2, float fParam3)
{
	if (bParam2)
	{
		if ((((!uParam0->f_1 && *uParam0 == 0) && Global_1935630.f_58 != iParam1) && __LIB_2__::func_1(Global_1935630.f_58, 0, 1)) && __LIB_2__::func_446(Global_1935630.f_58))
		{
			*uParam0 = Global_1935630.f_58;
		}
		else
		{
			*uParam0 = iParam1;
		}
		uParam0->f_1 = 1;
		__LIB_2__::func_645(*uParam0, 1, fParam3, 0);
	}
	else
	{
		__LIB_2__::func_645(iParam1, 0, fParam3, 0);
		__LIB_2__::func_645(*uParam0, 0, fParam3, 0);
		*uParam0 = 0;
		uParam0->f_1 = 0;
	}
}

bool func_692(int iParam0)
{
	float fVar0;
	if (__LIB_2__::func_117(32768))
	{
		fVar0 = 120f;
	}
	else
	{
		fVar0 = 80f;
	}
	if (__LIB_2__::func_269(iLocal_15.f_84[iParam0], fVar0))
	{
		return false;
	}
	if (__LIB_0__::func_94(iLocal_15.f_84[iParam0], Global_36, 1) < 10f)
	{
		return false;
	}
	return true;
}

void func_693(var uParam0, int iParam1, bool bParam2)
{
	__LIB_2__::func_411(&(uParam0->f_43[iParam1 /*17*/]), bParam2, 0);
}

bool func_694(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	int iVar0;
	if (!__LIB_0__::func_139(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = __LIB_2__::func_641(sParam1, iParam6, iParam5, iParam10, fParam9, 0, iParam15, iVar0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0, 0);
			__LIB_2__::func_450(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = __LIB_2__::func_642(sParam1, iParam6, iParam13, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0);
		}
		else
		{
			if (__LIB_0__::func_86(vParam2))
			{
				return false;
			}
			*uParam0 = __LIB_2__::func_643(sParam1, iParam6, vParam2, fParam7, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			__LIB_1__::func_483(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > __LIB_0__::func_492(1))
			{
				__LIB_1__::func_221(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			__LIB_1__::func_382(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (__LIB_0__::func_572(*uParam0, 0))
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				__LIB_1__::func_221(*uParam0, 0, 1);
			}
		}
		else if (!PED::_IS_PED_CARRYING(Global_35))
		{
			__LIB_1__::func_221(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > __LIB_0__::func_492(1))
		{
			__LIB_1__::func_221(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (__LIB_0__::func_139(*uParam0))
			{
				__LIB_1__::func_748(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && __LIB_1__::func_732(*uParam0, 1)) || (bParam17 && __LIB_0__::func_567(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				__LIB_2__::func_522(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				__LIB_2__::func_590(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
		}
		__LIB_1__::func_748(uParam0, 1, 1);
		return true;
	}
	return false;
}

bool func_695(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
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
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
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
			if (__LIB_2__::func_198(iParam2, iParam0))
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
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, iParam2))
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

bool func_696()
{
	int iVar0;
	if (!__LIB_2__::func_4(&iLocal_15, 16384))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_12();
	switch (iVar0)
	{
		case 105:
			if (__LIB_2__::func_230() && __LIB_2__::func_565())
			{
				return true;
			}
			break;
		case 95:
			if (__LIB_2__::func_230() && __LIB_2__::func_565())
			{
				return true;
			}
			break;
	}
	if (__LIB_2__::func_565())
	{
		if (iLocal_15.f_151 != 43)
		{
			if (__LIB_1__::func_923())
			{
				if (__LIB_2__::func_38(iVar0))
				{
					return false;
				}
				switch (iVar0)
				{
					case 82:
						return false;
					case 5:
					case 22:
					case 26:
					case 35:
					case 38:
					case 56:
					case 69:
					case 76:
					case 78:
					case 92:
					case 105:
					case 115:
					case 120:
						__LIB_1__::func_283(&(iLocal_15.f_253), 0);
						if (__LIB_1__::func_285(&(iLocal_15.f_253), 0.5f))
						{
							return true;
						}
						break;
				}
			}
		}
	}
	return false;
}

void func_697()
{
	if (!__LIB_2__::func_1(iLocal_15.f_56, 0, 0))
	{
		iLocal_15.f_56 = __LIB_2__::func_379(&iLocal_15, 0);
		if (__LIB_2__::func_1(iLocal_15.f_56, 0, 0))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_15.f_56, false, joaat("REL_GANG_ODRISCOLL"));
		}
	}
}

void func_698(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
	}
}

bool func_699(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 5);
}

int func_700(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!PED::DOES_GROUP_EXIST(*uParam0))
	{
		*uParam0 = PED::CREATE_GROUP(iParam1);
		if (PED::DOES_GROUP_EXIST(*uParam0))
		{
			PED::SET_GROUP_FORMATION(*uParam0, iParam2);
			PED::_0xD5BD1B5318A81994(*uParam0, iParam3);
			return 1;
		}
	}
	return 0;
}

void func_701(int iParam0)
{
	Global_1934266.f_78.f_62 = iParam0;
}

int func_702()
{
	return Global_1934266.f_4;
}

bool func_703(var uParam0, bool bParam1)
{
	if (!bParam1 || __LIB_0__::func_139(uParam0->f_6))
	{
		return __LIB_1__::func_489(uParam0, 13);
	}
	return false;
}

float func_704(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return __LIB_2__::func_40(iParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return __LIB_2__::func_617(iParam0);
	}
	return __LIB_2__::func_40(iParam0);
}

int func_705(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945938[iVar0 /*18*/].f_11 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				__LIB_2__::func_667(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_706(var uParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar17;
	if (!__LIB_0__::func_65(&Global_1393447, 65536))
	{
		__LIB_0__::func_47(&Global_1393447, 16);
		__LIB_0__::func_47(&Global_1393447, 65536);
		__LIB_2__::func_234(uParam0, 2097152);
		Global_40.f_9632.f_194 = uParam0->f_151;
		__LIB_2__::func_380(uParam0, 1);
		__LIB_1__::func_309(-1, 0, 0, 0, 0);
		__LIB_1__::func_924();
		Var0.f_6 = -1082130432;
		Var0.f_7 = -1082130432;
		Var0.f_8 = -1082130432;
		Var0.f_9 = -1082130432;
		Var0.f_10 = -1082130432;
		Var0.f_11 = -1082130432;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		Var0 = joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW");
		Var0.f_6 = 100f;
		if (!__LIB_0__::func_86(uParam0->f_212))
		{
			Var0.f_3 = { uParam0->f_212 };
		}
		else
		{
			Var0.f_3 = { uParam0->f_209 };
		}
		if (__LIB_2__::func_8(uParam0->f_151))
		{
			Var0.f_8 = 40f;
			Var0.f_9 = 40f;
			Var0.f_7 = 40f;
		}
		else
		{
			Var0.f_8 = 120f;
			Var0.f_9 = 120f;
			Var0.f_7 = 120f;
		}
		uParam0->f_93 = EVENT::_CREATE_SHOCKING_EVENT(&Var0);
		if (!__LIB_2__::func_5())
		{
			__LIB_2__::func_6(1);
			__LIB_2__::func_234(uParam0, 4);
		}
		if (bParam1)
		{
			__LIB_2__::func_304(1, -1, 0, 0, 0);
		}
		else
		{
			__LIB_2__::func_175();
			__LIB_2__::func_176();
		}
		if (__LIB_2__::func_8(uParam0->f_151))
		{
			__LIB_0__::func_747(30, 0, 1);
		}
		else
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("GANG_AMBUSH_ENCOUNTERED")), 1);
			__LIB_2__::func_392(uParam0, 0);
		}
		MISC::_0x1096603B519C905F(__LIB_2__::func_9(uParam0->f_151));
		__LIB_2__::func_397(uParam0);
		__LIB_0__::func_703(0, 13);
		iVar17 = 0;
		while (iVar17 < uParam0->f_215)
		{
			if (__LIB_2__::func_1((*uParam0)[iVar17], 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY((*uParam0)[iVar17], Global_35, -1, 0, 51, 0);
			}
			iVar17++;
		}
	}
}

bool func_707()
{
	int iVar0;
	if (!__LIB_2__::func_4(&Local_15, 16384))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_12();
	switch (iVar0)
	{
		case 105:
			if (__LIB_2__::func_378() && __LIB_2__::func_37())
			{
				return true;
			}
			break;
		case 95:
			if (__LIB_2__::func_378() && __LIB_2__::func_37())
			{
				return true;
			}
			break;
	}
	if (__LIB_2__::func_37())
	{
		if (Local_15.f_151 != 43)
		{
			if (__LIB_1__::func_923())
			{
				if (__LIB_2__::func_38(iVar0))
				{
					return false;
				}
				switch (iVar0)
				{
					case 82:
						return false;
					case 5:
					case 22:
					case 26:
					case 35:
					case 38:
					case 56:
					case 69:
					case 76:
					case 78:
					case 92:
					case 105:
					case 115:
					case 120:
						__LIB_1__::func_283(&(Local_15.f_253), 0);
						if (__LIB_1__::func_285(&(Local_15.f_253), 0.5f))
						{
							return true;
						}
						break;
				}
			}
		}
	}
	return false;
}

bool func_708(var uParam0)
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
			if (__LIB_2__::func_412(uParam0))
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
			if (__LIB_2__::func_422(uParam0))
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

float func_709(float fParam0)
{
	float fVar0;
	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

bool func_710(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = PED::GET_MOUNT(iParam0);
		bVar1 = !ENTITY::IS_ENTITY_DEAD(iVar0);
		bVar2 = PED::IS_PED_ON_MOUNT(iParam0);
		bVar3 = false;
		if (!bVar2 || !bVar1)
		{
			if (!bVar2 || !PED::GET_PED_RESET_FLAG(Global_35, 149))
			{
				if (!bVar2 || !PED::GET_PED_RESET_FLAG(Global_35, 148))
				{
					if (!PED::IS_PED_RAGDOLL(iParam0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						if (*uParam1 > 0)
						{
							*uParam1 = 0;
						}
						return true;
					}
				}
			}
		}
		switch (*uParam1)
		{
			case 0:
				if (bVar1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, iParam4, false);
					*uParam1 = 1;
				}
				break;
			case 1:
				bVar3 = (bParam3 && (TASK::IS_PED_RUNNING(iVar0) || TASK::IS_PED_SPRINTING(iVar0)));
				if (bVar3 || (!bParam2 || __LIB_1__::func_865(iVar0)))
				{
					if (bVar3)
					{
						TASK::TASK_HORSE_ACTION(iVar0, 9, 0, 0);
					}
					else
					{
						TASK::TASK_HORSE_ACTION(iVar0, 2, 0, 0);
					}
					*uParam1 = 2;
				}
				break;
			case 2:
				if (PED::GET_PED_RESET_FLAG(iParam0, 148))
				{
					*uParam1 = 3;
				}
				else if (!__LIB_0__::func_163(iVar0, 1041577989))
				{
					*uParam1 = 1;
				}
				break;
			case 3:
				if (bVar2 || !PED::GET_PED_RESET_FLAG(iParam0, 148))
				{
					if (!PED::IS_PED_RAGDOLL(iParam0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						return true;
					}
				}
				break;
		}
	}
	if (bParam5)
	{
		HUD::_DISPLAY_HUD_COMPONENT(724769646);
	}
	return false;
}

void func_711(int iParam0)
{
	if (!__LIB_2__::func_47(&(iParam0->f_182), 8))
	{
		__LIB_2__::func_48(&(iParam0->f_182), 8);
	}
}

bool func_712(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	fVar0 = __LIB_0__::func_94((*uParam0)[iParam1], Global_36, 1);
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_2__::func_114((*uParam0)[iParam1], 1065353216 /* Float: 1f */), __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */), true);
	if (fVar0 < 10f)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_OCCLUDED((*uParam0)[iParam1]))
	{
		return true;
	}
	if (PED::IS_PED_IN_COVER((*uParam0)[iParam1], true, false))
	{
		return true;
	}
	if (fVar1 < (fVar0 - 2f))
	{
		return false;
	}
	return true;
}

void func_713(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;
	if (__LIB_0__::func_139(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		__LIB_1__::func_748(&(iParam1->f_6), 0, 1);
	}
	if (!__LIB_0__::func_139(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (__LIB_1__::func_502(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = __LIB_2__::func_705(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (__LIB_0__::func_139(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					__LIB_2__::func_369(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					__LIB_1__::func_522(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						__LIB_1__::func_523(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						__LIB_1__::func_483(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					__LIB_1__::func_522(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					__LIB_1__::func_221(iParam1->f_6, 0, 1);
				}
				else
				{
					__LIB_1__::func_221(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_714(var uParam0, float fParam1)
{
	if (uParam0->f_1)
	{
		if (Global_1935630.f_58 != *uParam0)
		{
			if (__LIB_2__::func_1(Global_1935630.f_58, 0, 1) && __LIB_2__::func_446(Global_1935630.f_58))
			{
				__LIB_2__::func_691(uParam0, *uParam0, 0, fParam1);
				__LIB_2__::func_691(uParam0, Global_1935630.f_58, 1, fParam1);
			}
		}
	}
}

void func_715(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 8);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 8);
	}
}

bool func_716(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_2[iParam1] && iParam2) != 0;
}

void func_717(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2[iParam1] = (uParam0->f_2[iParam1] || iParam2);
}

bool func_718(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_270(iParam2, 1, iVar0);
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
				if (__LIB_2__::func_225(iParam0, iParam2))
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
				if (__LIB_2__::func_218(iParam0, iParam2))
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
			if (__LIB_2__::func_198(iParam2, iParam0))
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
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, iParam2))
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

int func_719(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (__LIB_2__::func_444(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!__LIB_1__::func_248(iVar2, iParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

bool func_720(var uParam0)
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
			if (__LIB_2__::func_412(uParam0))
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

void func_721()
{
	int iVar0;
	__LIB_1__::func_283(&(Local_15.f_247), 0);
	if (__LIB_1__::func_285(&(Local_15.f_247), 5f))
	{
		__LIB_2__::func_423(&Local_15, 0);
	}
	if (__LIB_1__::func_285(&(Local_15.f_247), 3f))
	{
		__LIB_2__::func_600(&Local_15);
	}
	__LIB_2__::func_332();
	if (!__LIB_2__::func_4(&Local_15, 8388608))
	{
		if (!__LIB_2__::func_4(&Local_15, 4194304))
		{
			if (Local_15.f_181 == 2)
			{
				__LIB_2__::func_260(&Local_15, 1.1f);
			}
			else
			{
				__LIB_2__::func_260(&Local_15, 1.2f);
			}
			__LIB_2__::func_147(&Local_15, 4194304);
		}
		if (__LIB_2__::func_4(&Local_15, 4194304))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			if ((iVar0 < (Local_15.f_225 - 60) || IntToFloat(iVar0) < (IntToFloat(Local_15.f_225) * 0.7f)) || iVar0 < 80)
			{
				__LIB_2__::func_260(&Local_15, 1f);
				__LIB_2__::func_147(&Local_15, 8388608);
			}
		}
	}
}

int func_722(int iParam0)
{
	return joaat("G_M_M_UNIMOUNTAINMEN_01");
}

void func_723(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_84[iParam1]))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0->f_84[iParam1], true);
		}
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_40[iParam1], true);
		__LIB_2__::func_242(iParam0, iParam1, 4);
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_84[iParam1]))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0->f_84[iParam1], false);
		}
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_40[iParam1], false);
		__LIB_2__::func_28(iParam0, iParam1, 4);
	}
}

int func_724(int iParam0, int iParam1, float fParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	iVar0 = 0;
	while (iVar0 <= (iParam0->f_215 - 1))
	{
		if (!__LIB_2__::func_1((*iParam0)[iVar0], 0, 0))
		{
		}
		else
		{
			iVar5 = 0;
			if (PED::IS_PED_IN_ANY_VEHICLE((*iParam0)[iVar0], false))
			{
				iVar5 = PED::GET_VEHICLE_PED_IS_IN((*iParam0)[iVar0], false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					iVar6 = ENTITY::GET_ENTITY_MODEL(iVar5);
				}
			}
			bVar1 = false;
			if (__LIB_2__::func_64(iParam0, (*iParam0)[iVar0]) || !__LIB_2__::func_25(iParam0, iVar0, 8))
			{
				if ((__LIB_2__::func_159(iParam0, iVar0) && !__LIB_2__::func_64(iParam0, iParam0->f_40[iVar0])) && !__LIB_2__::func_193(iParam0, iVar5))
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (!bVar1)
			{
			}
			else
			{
				__LIB_2__::func_152(iParam0, iVar0, 2);
				__LIB_2__::func_28(iParam0, iVar0, 2);
				if (__LIB_2__::func_1(iParam0->f_40[iVar0], 0, 0))
				{
					PED::_0x931B241409216C1F((*iParam0)[iVar0], iParam0->f_40[iVar0], 0);
				}
				PED::_SET_PED_CROUCH_MOVEMENT((*iParam0)[iVar0], false, 0, false);
				PED::SET_PED_COMBAT_ATTRIBUTES((*iParam0)[iVar0], 27, false);
				if (__LIB_0__::func_154(__LIB_1__::func_372((*iParam0)[iVar0], 0)))
				{
					WEAPON::SET_CURRENT_PED_WEAPON((*iParam0)[iVar0], joaat("WEAPON_UNARMED"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON((*iParam0)[iVar0], 1, 1, 0, 0);
				}
				vVar7 = { iParam0->f_118[iVar0 /*4*/].f_1 };
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				if (__LIB_2__::func_1(iParam0->f_40[iVar0], 0, 0))
				{
					if (!PED::IS_PED_ON_MOUNT((*iParam0)[iVar0]))
					{
						TASK::TASK_MOUNT_ANIMAL(0, iParam0->f_40[iVar0], -1, -1, 1f, 1, 0, 0);
					}
					if (!__LIB_0__::func_86(vVar7))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar7, fParam2, -1, 6f, 1, 40000f);
					}
					TASK::_TASK_MOVE_IN_TRAFFIC_2(0, __LIB_2__::func_116(iParam1, 1), 40f, fParam2, 0, 0);
				}
				else if (iVar5 == 0)
				{
					if (!__LIB_0__::func_86(vVar7))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar7, fParam2, -1, 6f, 1, 40000f);
					}
					TASK::_TASK_MOVE_IN_TRAFFIC_2(0, __LIB_2__::func_116(iParam1, 1), 40f, fParam2, 128, 0);
				}
				else if (PED::_GET_SEAT_PED_IS_USING((*iParam0)[iVar0]) == -1)
				{
					if (!__LIB_0__::func_86(vVar7))
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iVar5, vVar7, 5f, 0, iVar6, 524419, 4f, 3f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar7, 1f, -1, 6f, 1, 40000f);
					}
					TASK::_TASK_MOVE_IN_TRAFFIC_2(0, __LIB_2__::func_116(iParam1, 1), 40f, -1f, 0, 0);
				}
				__LIB_1__::func_474((*iParam0)[iVar0], &iVar3, 0f, 1.2f, 1, 1);
				if (!bVar2)
				{
					__LIB_2__::func_700(&uVar4, 0, 0, 1);
					__LIB_2__::func_665(iParam0[iVar0], &uVar4, 1, 1, 1, 1, 0);
					bVar2 = true;
				}
				else
				{
					__LIB_2__::func_665(iParam0[iVar0], &uVar4, 0, 1, 1, 1, 0);
				}
				PED::SET_PED_KEEP_TASK((*iParam0)[iVar0], true);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_725(int iParam0, int iParam1)
{
	if (__LIB_2__::func_122(Local_15[iParam0], "BATTLE_CRY", 1744022339, Global_35, 0, "0260_G_M_M_UniMountainMen_03_NATIVE_02", iParam1, 1))
	{
	}
}

bool func_726(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = __LIB_2__::func_704(iParam1);
	if (iParam1->f_12 > (fVar0 + 5f))
	{
		return false;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (iParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = __LIB_0__::func_646(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, true, 0) == 1)
		{
			return true;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
		{
			if (WEAPON::_IS_WEAPON_LANTERN(Global_1935630.f_44) || WEAPON::_IS_WEAPON_TORCH(Global_1935630.f_44))
			{
				if (iParam1->f_12 <= 5f)
				{
					if (__LIB_1__::func_380())
					{
						if (PED::IS_PED_FACING_PED(Global_35, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_727(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	var uVar5;
	if (__LIB_0__::func_58())
	{
		return true;
	}
	if (Global_16)
	{
		return true;
	}
	if (__LIB_0__::func_296(0, 1, 1))
	{
		return true;
	}
	if (Local_15.f_95 <= 9 && Local_15.f_96 & 2097152 == 0)
	{
		if (__LIB_0__::func_65(&Global_1393447, 2))
		{
			if (__LIB_2__::func_205(&Local_15))
			{
				__LIB_0__::func_380(&Global_1393447, 2);
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	else if (Global_1393447.f_2 & 2 != 0)
	{
		__LIB_0__::func_380(&Global_1393447, 2);
		return false;
	}
	if (Local_15.f_96 & 16 != 0)
	{
		return true;
	}
	if (Local_15.f_95 < 10 && Local_15.f_96 & 1048576 == 0)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (__LIB_2__::func_131())
			{
				if (!uParam0->f_8)
				{
					return true;
				}
			}
			if (!__LIB_0__::func_86(Local_15.f_209))
			{
				if (Local_15.f_20 > 207f)
				{
					if (Local_15.f_223 == 0)
					{
						Local_15.f_223 = MISC::GET_GAME_TIMER() + 1000;
						return false;
					}
					else if (Local_15.f_223 < MISC::GET_GAME_TIMER())
					{
						vVar0 = { __LIB_1__::func_974(PLAYER::PLAYER_ID()) };
						return true;
					}
				}
				else
				{
					Local_15.f_223 = 0;
				}
			}
		}
	}
	else
	{
		if (__LIB_2__::func_421())
		{
			return true;
		}
		if (__LIB_2__::func_657(&uVar5))
		{
			fVar4 = __LIB_2__::func_493();
			iVar3 = 0;
			while (iVar3 < Local_15.f_215)
			{
				if (Local_15.f_9[iVar3] < fVar4)
				{
					if (__LIB_2__::func_1(Local_15[iVar3], 0, 1))
					{
						return false;
					}
				}
				iVar3++;
			}
			return true;
		}
	}
	return false;
}

int func_728(var uParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, iParam6, iParam6, fParam13);
	}
	iVar1 = __LIB_2__::func_719(uParam0, iParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

bool func_729()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_27[2]))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_27[2], Global_36))
		{
			return true;
		}
	}
	return false;
}

void func_730(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_215)
	{
		iVar0 = __LIB_2__::func_722(iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

bool func_731(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_215)
	{
		iVar0 = __LIB_2__::func_722(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_2__::func_722(iVar1)))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

void func_732()
{
	__LIB_2__::func_104(&(Local_15.f_152), 0);
	__LIB_2__::func_105(&(Local_15.f_152), 1);
	__LIB_2__::func_50(&(Local_15.f_152), 1);
	__LIB_2__::func_51(&(Local_15.f_152), 1);
	__LIB_2__::func_111(&(Local_15.f_152), 0);
	__LIB_2__::func_110(&(Local_15.f_152), 0);
	__LIB_2__::func_52(&(Local_15.f_152), 1);
	__LIB_2__::func_250(&(Local_15.f_152), 1);
}

int func_733(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar0], 0, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_734(int iParam0)
{
	if (__LIB_2__::func_339(&Local_15, iParam0, 2))
	{
		return false;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, Local_15.f_49[iParam0], true))
	{
		return false;
	}
	if (__LIB_2__::func_339(&Local_15, iParam0, 4))
	{
		return true;
	}
	if (__LIB_2__::func_193(&Local_15, Local_15.f_49[iParam0]))
	{
		return true;
	}
	if (!__LIB_2__::func_339(&Local_15, iParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_735(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_270(iParam2, 1, iVar0);
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
				if (__LIB_2__::func_225(iParam0, iParam2))
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
				if (__LIB_2__::func_218(iParam0, iParam2))
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
			if (__LIB_2__::func_198(iParam2, iParam0))
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
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, iParam2))
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

void func_736()
{
	int iVar0;
	__LIB_1__::func_283(&(Local_15.f_247), 0);
	if (__LIB_1__::func_285(&(Local_15.f_247), 5f))
	{
		__LIB_2__::func_337(&Local_15, 0);
	}
	if (__LIB_1__::func_285(&(Local_15.f_247), 3f))
	{
		__LIB_2__::func_600(&Local_15);
	}
	__LIB_2__::func_332();
	if (!__LIB_2__::func_4(&Local_15, 8388608))
	{
		if (!__LIB_2__::func_4(&Local_15, 4194304))
		{
			if (Local_15.f_181 == 2)
			{
				__LIB_2__::func_260(&Local_15, 1.1f);
			}
			else
			{
				__LIB_2__::func_260(&Local_15, 1.2f);
			}
			__LIB_2__::func_234(&Local_15, 4194304);
		}
		if (__LIB_2__::func_4(&Local_15, 4194304))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			if ((iVar0 < (Local_15.f_225 - 60) || IntToFloat(iVar0) < (IntToFloat(Local_15.f_225) * 0.7f)) || iVar0 < 80)
			{
				__LIB_2__::func_260(&Local_15, 1f);
				__LIB_2__::func_234(&Local_15, 8388608);
			}
		}
	}
}

bool func_737(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

int func_738(int iParam0, vector3 vParam1, float fParam4, bool bParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar1 = -1;
	if (iParam7 == -1 || iParam7 >= *iParam0)
	{
		iParam7 = (*iParam0 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (iParam8 == iVar0)
		{
		}
		else if (!bParam5 || !__LIB_0__::func_86(*(iParam0[iVar0 /*3*/])))
		{
			fVar3 = BUILTIN::VDIST2(*(iParam0[iVar0 /*3*/]), vParam1);
			if (fVar3 >= fParam4 && (iVar0 == 0 || fVar3 < fVar2))
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
	}
	return iVar1;
}

float func_739(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			return 2.5f;
		case 2:
		case 3:
		case 4:
			return 3f;
		default:
			break;
	}
	return -1f;
}

bool func_740(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			return true;
		case 2:
		case 3:
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

bool func_741(int iParam0, int iParam1, var uParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam1->f_5)
	{
		__LIB_2__::func_270(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && __LIB_2__::func_83(iParam1, iParam0)) && __LIB_2__::func_197(iParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (__LIB_2__::func_82(iParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && __LIB_2__::func_83(iParam1, iParam0)) && __LIB_2__::func_197(iParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam2 = 2;
								__LIB_2__::func_196(iParam0, iParam1, *uParam2);
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
					if (*iParam1 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_196(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_196(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam1, 1065353216 /* Float: 1f */))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 4;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 256;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (__LIB_2__::func_726(iParam0, iParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 131072;
				__LIB_2__::func_196(iParam0, iParam1, *uParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (__LIB_2__::func_622(iParam0, iParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 262144;
				__LIB_2__::func_196(iParam0, iParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

void func_742()
{
	int iVar0;
	if (Local_15.f_19 < Local_15.f_215)
	{
		iVar0 = Local_15.f_19;
		if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
		{
			if (!__LIB_2__::func_25(&Local_15, iVar0, 8))
			{
				if (__LIB_1__::func_472(Local_15[iVar0], 200f, -1082130432 /* Float: -1f */, Local_15.f_9[iVar0], -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_152(&Local_15, iVar0, 8);
				}
			}
		}
	}
	else if (Local_15.f_19 < (Local_15.f_215 + Local_15.f_216))
	{
		iVar0 = (Local_15.f_19 - Local_15.f_215);
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[iVar0]))
		{
			if (!__LIB_2__::func_26(&Local_15, iVar0, 8))
			{
				if (__LIB_1__::func_472(Local_15.f_40[iVar0], 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_28(&Local_15, iVar0, 8);
				}
			}
		}
	}
	else if (Local_15.f_19 < ((Local_15.f_215 + Local_15.f_216) + Local_15.f_217))
	{
		iVar0 = ((Local_15.f_19 - Local_15.f_215) - Local_15.f_216);
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[iVar0]))
		{
			if (!__LIB_2__::func_339(&Local_15, iVar0, 8))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(Local_15.f_49[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_15.f_49[iVar0]))
				{
					if (__LIB_2__::func_109(Local_15.f_49[iVar0], 200f, -1082130432 /* Float: -1f */))
					{
						__LIB_2__::func_238(&Local_15, iVar0, 8);
					}
				}
			}
		}
	}
	Local_15.f_19++;
	if (Local_15.f_19 >= ((Local_15.f_215 + Local_15.f_216) + Local_15.f_217))
	{
		Local_15.f_19 = 0;
	}
}

void func_743(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_1((*iParam0)[iParam1], 0, 0))
	{
		return;
	}
	PED::SET_PED_COMBAT_RANGE((*iParam0)[iParam1], 0);
	PED::SET_PED_COMBAT_MOVEMENT((*iParam0)[iParam1], 2);
	__LIB_2__::func_150(iParam0, iParam1, 60, 100);
	PED::SET_PED_FIRING_PATTERN((*iParam0)[iParam1], joaat("FIRING_PATTERN_BURST_FIRE"));
	PED::_0x20E54854DEF6A54A((*iParam0)[iParam1], joaat("FIRING_PATTERN_BURST_FIRE_IN_COVER"));
}

void func_744()
{
	int iVar0;
	if (__LIB_2__::func_1(Local_15.f_56, 0, 0))
	{
		iVar0 = __LIB_2__::func_160(Local_15.f_181);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_15.f_56, true, iVar0);
	}
}

bool func_745(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_2__::func_735((*iParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

void func_746()
{
	int iVar0;
	if (!__LIB_2__::func_1(Local_15.f_56, 0, 0))
	{
		Local_15.f_56 = __LIB_2__::func_379(&Local_15, 0);
		if (__LIB_2__::func_1(Local_15.f_56, 0, 0))
		{
			iVar0 = __LIB_2__::func_160(Local_15.f_181);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_15.f_56, false, iVar0);
		}
	}
}

void func_747(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	uParam1->f_61 = uParam1->f_61;
}

bool func_748(var uParam0)
{
	return (Global_1935630 && uParam0) != 0;
}

void func_749(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	__LIB_1__::func_939();
}

int func_750(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return 1;
	}
	if (!__LIB_0__::func_20(iParam0))
	{
		return 1;
	}
	if (__LIB_0__::func_21(iParam0, 16))
	{
		return 1;
	}
	if (__LIB_0__::func_730(iParam0) && !__LIB_1__::func_928(iParam0))
	{
	}
	if (__LIB_1__::func_902(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (__LIB_0__::func_29(iParam1))
		{
			iVar0 = iParam1;
		}
		if (__LIB_0__::func_29(iParam2))
		{
			iVar1 = iParam2;
		}
		if (Global_1897950 < iVar0 || Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!__LIB_0__::func_730(iParam0) || __LIB_1__::func_928(iParam0)) || __LIB_1__::func_903(Global_1897950))
			{
				__LIB_1__::func_940(Global_1897950, 0);
			}
			Global_1897950++;
			iVar2++;
			if (Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_751(int iParam0)
{
	__LIB_1__::func_913(Global_1935369.f_5[iParam0 /*11*/].f_6, 1);
	__LIB_1__::func_914(Global_1935369.f_5[iParam0 /*11*/].f_6, 0);
	if (VOLUME::_0xF6A8A652A6B186CD(Global_1935369.f_5[iParam0 /*11*/].f_8))
	{
		VOLUME::_0xFDFECC6EE4491E11(Global_1935369.f_5[iParam0 /*11*/].f_8);
		Global_1935369.f_5[iParam0 /*11*/].f_8 = 0;
	}
	__LIB_1__::func_942(iParam0, 8192);
	__LIB_1__::func_942(iParam0, 16384);
	__LIB_1__::func_942(iParam0, 32768);
	__LIB_1__::func_942(iParam0, 131072);
	__LIB_1__::func_942(iParam0, 16777216);
	__LIB_1__::func_942(iParam0, 524288);
	__LIB_1__::func_942(iParam0, 1048576);
	Global_1935369.f_5[iParam0 /*11*/].f_10 = 0;
	Global_1935369.f_5[Global_1935369 /*11*/].f_9 = 0;
	Global_1935369.f_5[iParam0 /*11*/] = 0;
	Global_1935369.f_5[iParam0 /*11*/].f_1 = { 0f, 0f, 0f };
	Global_1935369.f_5[iParam0 /*11*/].f_4 = 0;
	Global_1935369.f_5[iParam0 /*11*/].f_5 = -1;
	Global_1935369.f_5[iParam0 /*11*/].f_6 = -1;
	Global_1935369.f_5[iParam0 /*11*/].f_7 = 0;
}

int func_752(vector3 vParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (__LIB_1__::func_945(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_753(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_29(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_117(iParam0, 1))
	{
		return;
	}
	if (!__LIB_0__::func_117(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !__LIB_0__::func_122(iParam0)) && __LIB_0__::func_171(iParam0))
	{
		return;
	}
	__LIB_0__::func_121(iParam0, 1);
	__LIB_1__::func_926(iParam0);
	if (__LIB_0__::func_30(__LIB_0__::func_118(iParam0)))
	{
		iVar0 = __LIB_0__::func_120(iParam0);
		if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_0xEB98B38CA60742D7(iVar0))
		{
			PERSCHAR::_0x631CD2D77FDC0316(iVar0);
		}
		iVar1 = PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
		}
		__LIB_0__::func_121(iParam0, 16);
	}
	if (__LIB_0__::func_117(iParam0, 128) && !bParam3)
	{
		__LIB_1__::func_949(iParam0, 0);
	}
}

void func_754(int iParam0, bool bParam1)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!__LIB_1__::func_935(iParam0, 1024))
		{
			__LIB_1__::func_936(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (__LIB_1__::func_935(iParam0, 1024))
	{
		__LIB_1__::func_937(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	__LIB_1__::func_946(iParam0);
}

void func_755(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_910(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		__LIB_1__::func_941(Global_1392240.f_1[iVar0 /*18*/].f_6[iVar1]);
		Global_1392240.f_1[iVar0 /*18*/].f_6[iVar1] = 0;
		iVar1++;
	}
}

bool func_756(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return true;
	}
	if (!__LIB_0__::func_20(iParam0))
	{
		return true;
	}
	if (__LIB_1__::func_902(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1897950.f_1 < iVar0 || Global_1897950.f_1 > iVar1)
		{
			Global_1897950.f_1 = iVar0;
		}
		while (true)
		{
			if (!__LIB_0__::func_117(Global_1897950.f_1, 16))
			{
				__LIB_1__::func_949(Global_1897950.f_1, 0);
			}
			Global_1897950.f_1++;
			iVar2++;
			if (Global_1897950.f_1 > iVar1)
			{
				Global_1897950.f_1 = -1;
				return true;
			}
			if (iVar2 >= 20 && !bParam1)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_757()
{
	if (Global_16)
	{
		return false;
	}
	if (!__LIB_1__::func_933())
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266.f_78.f_55))
	{
		return false;
	}
	if (__LIB_0__::func_296(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

void func_758(int iParam0, bool bParam1)
{
	if (Global_1572887.f_10 && __LIB_0__::func_2() == 0)
	{
		return;
	}
	if (__LIB_0__::func_13(128))
	{
		return;
	}
	if (!__LIB_1__::func_950(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_21(iParam0, 32))
	{
		return;
	}
	__LIB_0__::func_24(iParam0, 32);
	__LIB_0__::func_7(&Global_1935630, 8192);
	__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("AREAS")), 1);
	switch (__LIB_1__::func_882(iParam0))
	{
		case 0:
		case 2:
		case 11:
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("LOWLANDS_AREAS")), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("MOUNTAIN_AREAS")), 1);
			break;
		case 3:
		case 10:
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("FOOTHILLS_AREAS")), 1);
			break;
		case 4:
		case 9:
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("PLAINS_AREAS")), 1);
			break;
		case 8:
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("GUAMA_AREAS")), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("NEW_AUSTIN_AREAS")), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_0xD8C7162AB2E2AF45(1822876181);
			break;
		case 1:
			MAP::_0xD8C7162AB2E2AF45(1092217275);
			break;
		case 2:
			MAP::_0xD8C7162AB2E2AF45(1855549007);
			MAP::_0xD8C7162AB2E2AF45(1542246539);
			break;
		case 6:
			MAP::_0xD8C7162AB2E2AF45(-237206861);
			break;
		case 7:
			MAP::_0xD8C7162AB2E2AF45(276890716);
			break;
		case 9:
			MAP::_0xD8C7162AB2E2AF45(-353968602);
			break;
		case 10:
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			break;
		case 11:
			MAP::_0xD8C7162AB2E2AF45(-496244122);
			break;
		case 12:
			MAP::_0xD8C7162AB2E2AF45(-678676588);
			break;
		case 15:
			MAP::_0xD8C7162AB2E2AF45(-732274047);
			break;
		case 16:
			MAP::_0xD8C7162AB2E2AF45(-12216052);
			break;
		case 17:
			MAP::_0xD8C7162AB2E2AF45(-1456731677);
			break;
		case 21:
			MAP::_0xD8C7162AB2E2AF45(-2086563810);
			break;
		case 22:
			MAP::_0xD8C7162AB2E2AF45(221661572);
			break;
		case 24:
			MAP::_0xD8C7162AB2E2AF45(222265732);
			break;
		case 25:
			MAP::_0xD8C7162AB2E2AF45(-1484929764);
			break;
		case 26:
			MAP::_0xD8C7162AB2E2AF45(1104975149);
			break;
		case 27:
			MAP::_0xD8C7162AB2E2AF45(235472255);
			break;
		case 28:
			MAP::_0xD8C7162AB2E2AF45(-1337880478);
			break;
		case 29:
			MAP::_0xD8C7162AB2E2AF45(-1813267128);
			break;
		case 30:
			MAP::_0xD8C7162AB2E2AF45(-1941572412);
			break;
		case 31:
			MAP::_0xD8C7162AB2E2AF45(1006072805);
			break;
		case 121:
			MAP::_0xD8C7162AB2E2AF45(929640770);
			break;
		case 122:
			MAP::_0xD8C7162AB2E2AF45(1603579970);
			break;
		case 124:
			MAP::_0xD8C7162AB2E2AF45(-1332669948);
			break;
		case 123:
			MAP::_0xD8C7162AB2E2AF45(-1807212021);
			break;
		case 34:
			MAP::_0xD8C7162AB2E2AF45(-1347759053);
			break;
		case 36:
			MAP::_0xD8C7162AB2E2AF45(-918096609);
			break;
		case 114:
			MAP::_0xD8C7162AB2E2AF45(1728445882);
			break;
		case 37:
			MAP::_0xD8C7162AB2E2AF45(-507075109);
			break;
		case 40:
			MAP::_0xD8C7162AB2E2AF45(462373845);
			break;
		case 42:
			MAP::_0xD8C7162AB2E2AF45(-1727895786);
			break;
		case 43:
			MAP::_0xD8C7162AB2E2AF45(1826504111);
			break;
		case 44:
			MAP::_0xD8C7162AB2E2AF45(1714554710);
			break;
		case 45:
			MAP::_0xD8C7162AB2E2AF45(-91026072);
			break;
		case 54:
			MAP::_0xD8C7162AB2E2AF45(893855320);
			break;
		case 55:
			MAP::_0xD8C7162AB2E2AF45(326709244);
			break;
		case 49:
			MAP::_0xD8C7162AB2E2AF45(653799702);
			break;
		case 62:
			MAP::_0xD8C7162AB2E2AF45(415864829);
			break;
		case 64:
			MAP::_0xD8C7162AB2E2AF45(-1836330842);
			break;
		case 65:
			MAP::_0xD8C7162AB2E2AF45(648073069);
			break;
		case 66:
			MAP::_0xD8C7162AB2E2AF45(770074951);
			break;
		case 68:
			MAP::_0xD8C7162AB2E2AF45(-1276637644);
			break;
		case 71:
			MAP::_0xD8C7162AB2E2AF45(-431488293);
			break;
		case 72:
			MAP::_0xD8C7162AB2E2AF45(-1101810198);
			break;
		case 74:
			MAP::_0xD8C7162AB2E2AF45(-1344767066);
			break;
		case 77:
			MAP::_0xD8C7162AB2E2AF45(1472232821);
			break;
		case 79:
			MAP::_0xD8C7162AB2E2AF45(-1368676121);
			break;
		case 63:
			MAP::_0xD8C7162AB2E2AF45(-33677540);
			break;
		case 80:
			MAP::_0xD8C7162AB2E2AF45(1602161184);
			MAP::_0xD8C7162AB2E2AF45(-443207523);
			MAP::_0xD8C7162AB2E2AF45(-683043834);
			break;
		case 82:
			MAP::_0xD8C7162AB2E2AF45(147256338);
			MAP::_0xD8C7162AB2E2AF45(-134804027);
			MAP::_0xD8C7162AB2E2AF45(2027689141);
			break;
		case 83:
			MAP::_0xD8C7162AB2E2AF45(-161135375);
			break;
		case 85:
			MAP::_0xD8C7162AB2E2AF45(1625008147);
			break;
		case 86:
			MAP::_0xD8C7162AB2E2AF45(121074776);
			break;
		case 87:
			MAP::_0xD8C7162AB2E2AF45(1876184276);
			break;
		case 89:
			MAP::_0xD8C7162AB2E2AF45(458479023);
			break;
		case 91:
			MAP::_0xD8C7162AB2E2AF45(85299473);
			break;
		case 96:
			MAP::_0xD8C7162AB2E2AF45(-1150244084);
			break;
		case 98:
			MAP::_0xD8C7162AB2E2AF45(759314201);
			break;
		case 99:
			MAP::_0xD8C7162AB2E2AF45(2063457042);
			break;
		case 100:
			MAP::_0xD8C7162AB2E2AF45(1877776161);
			break;
		case 102:
			MAP::_0xD8C7162AB2E2AF45(2143316225);
			break;
		case 104:
			MAP::_0xD8C7162AB2E2AF45(-1623232489);
			MAP::_0xD8C7162AB2E2AF45(-1393093729);
			break;
		case 106:
			MAP::_0xD8C7162AB2E2AF45(1354284392);
			break;
		case 107:
			MAP::_0xD8C7162AB2E2AF45(-1430883057);
			break;
		case 109:
			MAP::_0xD8C7162AB2E2AF45(820139809);
			break;
		case 112:
			MAP::_0xD8C7162AB2E2AF45(1561007383);
			MAP::_0xD8C7162AB2E2AF45(-960425936);
			break;
	}
	if (bParam1)
	{
		__LIB_0__::func_24(iParam0, 64);
	}
}

void func_759(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1894899.f_182 = fParam0;
	Global_1894899.f_183 = fParam1;
	Global_1894899.f_184 = fParam2;
	Global_1894899.f_185 = fParam3;
}

bool func_760(int iParam0)
{
	if (!__LIB_0__::func_29(iParam0))
	{
		return false;
	}
	if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		PERSCHAR::_0x49A8C2CD97815215(__LIB_0__::func_120(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_0x0CADC3A977997472(__LIB_0__::func_120(iParam0), 0)))
		{
			return false;
		}
	}
	return true;
}

void func_761(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

bool func_762()
{
	if ((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_DEAD_OR_DYING(Global_35, true)) || _NAMESPACE77::_0xC5C395C60B542A3C(1))
	{
		return true;
	}
	return false;
}

bool func_763(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (!__LIB_0__::func_29(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_122(iParam0) && bParam1)
	{
		return false;
	}
	return __LIB_0__::func_117(iParam0, 1);
}

void func_764(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, (*uParam3)[iVar0 /*4*/], &((uParam3[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

bool func_765(int iParam0, bool bParam1)
{
	if (__LIB_1__::func_894(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (__LIB_1__::func_895(5000))
		{
			return true;
		}
	}
	switch (__LIB_0__::func_64(0))
	{
		case 0:
			return false;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return true;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return true;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return true;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return true;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return true;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return true;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return true;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return true;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return true;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_766(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_1__::func_930(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	(uParam0[uParam0->f_61 /*3*/])->f_1 = iParam2;
	(uParam0[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

bool func_767(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (!__LIB_0__::func_29(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_334(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_0xEB98B38CA60742D7(__LIB_0__::func_120(iParam0));
}

void func_768(int iParam0)
{
	if (__LIB_0__::func_27(iParam0, 1))
	{
		__LIB_1__::func_934(1);
	}
}

bool func_769(int iParam0)
{
	__LIB_0__::func_68(iParam0, 0, 0);
	if (__LIB_0__::func_724(iParam0))
	{
		return (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1);
	}
	return false;
}

void func_770(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1935369.f_5[iVar0 /*11*/].f_5 == iParam0)
		{
			__LIB_2__::func_751(iVar0);
		}
		iVar0++;
	}
}

int func_771(int iParam0)
{
	return __LIB_2__::func_750(iParam0, -1, -1, 0);
}

void func_772(int iParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_29(Global_1914319.f_3[iParam0 /*446*/].f_21) && __LIB_0__::func_122(Global_1914319.f_3[iParam0 /*446*/].f_21))
	{
		__LIB_2__::func_753(Global_1914319.f_3[iParam0 /*446*/].f_21, 0, 1, 0, 0);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_11 = { 0f, 0f, 0f };
	Global_1914319.f_3[iParam0 /*446*/].f_21 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_22 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_17 = 0;
	Global_1914319.f_3[iParam0 /*446*/].f_1 = 0;
	if (PED::_0x91A5F9CBEBB9D936(Global_1914319.f_3[iParam0 /*446*/].f_34))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1914319.f_3[iParam0 /*446*/].f_34, false);
	}
	__LIB_2__::func_754(Global_1914319.f_3[iParam0 /*446*/].f_10, 0);
	__LIB_1__::func_943(iParam0, 536870912);
	iVar1 = __LIB_1__::func_915(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319.f_3[iParam0 /*446*/].f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			__LIB_1__::func_941(Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/]);
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/] = 0;
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_1 = { 0f, 0f, 0f };
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_4 = 0f;
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_5 = 0;
			iVar0++;
		}
		Global_1914319.f_3[iParam0 /*446*/].f_408 = 0;
	}
	if (Global_1914319.f_3[iParam0 /*446*/].f_440 != 0)
	{
		UIFEED::_0x2F901291EF177B02(Global_1914319.f_3[iParam0 /*446*/].f_440, 0);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_23 = 0;
	__LIB_1__::func_916(iParam0);
	Global_1914319.f_3[iParam0 /*446*/].f_10 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_9 = -1;
	__LIB_1__::func_944(iParam0, 0);
}

char* func_773(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	char* sVar0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899.f_162)))
	{
		sVar0 = __LIB_0__::func_67(Global_1894899.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = __LIB_1__::func_911(__LIB_2__::func_752(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!__LIB_1__::func_912(iParam0) || __LIB_0__::func_293(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("WATER_ARROYO_DE_LA_VIBORA"):
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			case joaat("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			case joaat("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			case joaat("WATER_KAMASSA_RIVER"):
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*uParam6 = 1;
				break;
			case joaat("WATER_SAN_LUIS_RIVER"):
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*uParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_774(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return __LIB_1__::func_44(Global_1835011[iParam0 /*74*/].f_1);
}

void func_775(int iParam0, vector3 vParam1, float fParam4)
{
	Global_1393529.f_114[iParam0 /*3*/] = { vParam1 };
	Global_1393529.f_220[iParam0] = fParam4;
}

bool func_776()
{
	return Global_1898164.f_163;
}

void func_777(int iParam0)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		uVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(uVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(uVar1) };
			if (VOLUME::_0x769BB7626B8CDB06(vVar2, 1f, 0, iParam0, 16384))
			{
				VOLUME::_0xFDFECC6EE4491E11(uVar1);
				Global_1911670[iVar0] = 0;
			}
		}
		iVar0++;
	}
}

void func_778(vector3 vParam0, float fParam3)
{
	int iVar0;
	var uVar1;
	iVar0 = 0;
	while (iVar0 < Global_1310750.f_16078)
	{
		uVar1 = Global_1310750.f_16078[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(uVar1))
		{
			if (BUILTIN::VDIST(VOLUME::_0xC4019CF9AE8E931A(uVar1), vParam0) < fParam3)
			{
				VOLUME::_0xFDFECC6EE4491E11(uVar1);
				Global_1310750.f_16078[iVar0] = 0;
				Global_17504.f_2084[iVar0 /*5*/] = { 0f, 0f, 0f };
				Global_17504.f_2084[iVar0 /*5*/].f_3 = -1;
				Global_17504.f_2084[iVar0 /*5*/].f_4 = 0;
			}
		}
		iVar0++;
	}
}

int func_779(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 43:
		case 61:
		case 73:
			return 1;
	}
	return 0;
}

int func_780(int iParam0, int iParam1)
{
	if (iParam1 > 25)
	{
		return 0;
	}
	switch (iParam1)
	{
		case -1:
		case 1:
		case 2:
		case 5:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return 0;
		case 4:
			if (iParam0 == 41)
			{
				return 1;
			}
			return 0;
		default:
			break;
	}
	return 1;
}

float func_781(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 75f;
		case 9:
			return 25f;
		case 10:
			return 25f;
		case 22:
			return 55f;
	}
	return 12.5f;
}

void func_782(int iParam0)
{
	if (iParam0 == 76)
	{
		StringCopy(&(Global_1393529.f_288[10 /*8*/]), "1025_U_M_M_ValButcher_01", 64);
	}
	else if (iParam0 == 115)
	{
		StringCopy(&(Global_1393529.f_288[10 /*8*/]), "1086_U_M_M_TumButcher_01", 64);
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
		{
			case 0:
			case 3:
				StringCopy(&(Global_1393529.f_288[10 /*8*/]), "0842_S_M_M_UniButchers_01_WHITE_01", 64);
				break;
			case 1:
			case 4:
				StringCopy(&(Global_1393529.f_288[10 /*8*/]), "0843_S_M_M_UniButchers_01_WHITE_02", 64);
				break;
			case 2:
			case 5:
				StringCopy(&(Global_1393529.f_288[10 /*8*/]), "0844_S_M_M_UniButchers_01_WHITE_03", 64);
				break;
		}
	}
}

void func_783()
{
	StringCopy(&(Global_1393529.f_288[18 /*8*/]), "1035_U_M_M_SDCUSTOMVENDOR_01", 64);
}

void func_784()
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(&(Global_1393529.f_288[9 /*8*/]), "0825_S_M_M_LiveryWorker_01_WHITE_01", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(&(Global_1393529.f_288[9 /*8*/]), "0826_S_M_M_LiveryWorker_01_WHITE_02", 64);
	}
	else
	{
		StringCopy(&(Global_1393529.f_288[9 /*8*/]), "0827_S_M_M_LiveryWorker_01_WHITE_03", 64);
	}
}

void func_785()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
	{
		case 0:
		case 3:
			StringCopy(&(Global_1393529.f_288[22 /*8*/]), "0829_S_M_Y_NewspaperBoy_01_WHITE_01", 64);
			break;
		case 1:
		case 4:
			StringCopy(&(Global_1393529.f_288[22 /*8*/]), "0830_S_M_Y_NewspaperBoy_01_WHITE_02", 64);
			break;
		case 2:
		case 5:
			StringCopy(&(Global_1393529.f_288[22 /*8*/]), "0831_S_M_Y_NewspaperBoy_01_WHITE_03", 64);
			break;
	}
}

int func_786(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

bool func_787(int iParam0, int iParam1)
{
	return __LIB_0__::func_1(Global_1914319.f_3[iParam0 /*446*/].f_6, iParam1);
}

void func_788(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

int func_789(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

void func_790(var uParam0)
{
	uParam0->f_19 = 1;
}

bool func_791(int iParam0)
{
	if (((__LIB_0__::func_481(1) || AUDIO::_0x2B101AD9F651243A()) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0)) || AUDIO::IS_ANY_SPEECH_PLAYING(iParam0))
	{
		return true;
	}
	return false;
}

bool func_792(var uParam0, int iParam1)
{
	return __LIB_0__::func_1(uParam0->f_19, iParam1);
}

bool func_793(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return __LIB_1__::func_935(iParam0, 1073741824 /* Float: 2f */);
}

void func_794(int iParam0)
{
	__LIB_1__::func_937(iParam0, 1073741824 /* Float: 2f */);
}

void func_795(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_28)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			uParam0->f_28 = 0;
		}
	}
	if (uParam0->f_2)
	{
		if (__LIB_0__::func_29(*uParam0))
		{
			iVar0 = __LIB_1__::func_334(*uParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar0, false);
				uParam0->f_2 = 0;
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (__LIB_0__::func_29(uParam0->f_3[iVar1 /*3*/]) && uParam0->f_3[iVar1 /*3*/].f_2)
			{
				iVar2 = __LIB_1__::func_334(uParam0->f_3[iVar1 /*3*/]);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar2, false);
					uParam0->f_3[iVar1 /*3*/].f_2 = 0;
				}
			}
			iVar1++;
		}
	}
}

void func_796(int iParam0)
{
	__LIB_1__::func_936(iParam0, 1073741824 /* Float: 2f */);
}

int func_797(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 0;
		case 105:
			return 1;
		case 5:
			return 2;
		case 120:
			return 3;
		case 26:
			return 4;
		case 38:
			return 5;
		case 69:
			return 6;
		case 28:
			return 7;
		case 115:
			return 8;
		case 92:
			return 9;
		case 78:
			return 10;
		default:
			break;
	}
	return -1;
}

bool func_798(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return false;
	}
	return __LIB_0__::func_1(Global_1914319.f_18594[iParam0], 2);
}

bool func_799(int iParam0)
{
	return __LIB_1__::func_935(iParam0, 67108864);
}

bool func_800()
{
	return (Global_1914319.f_17369 || Global_1914319.f_18996.f_1);
}

void func_801(int iParam0)
{
	__LIB_0__::func_7(&uLocal_14, iParam0);
}

void func_802(var uParam0, int iParam1)
{
	__LIB_0__::func_8(&(uParam0->f_19), iParam1);
}

bool func_803(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_2() != -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051260.f_48[iParam0 /*78*/].f_19))
		{
			*iParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1051260.f_48[iParam0 /*78*/].f_19);
		}
		else
		{
			return false;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_23))
	{
		*iParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[iParam0 /*446*/].f_23);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_804(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_3[iParam0 /*446*/].f_7 && iParam1) != 0;
}

bool func_805(int iParam0)
{
	bool bVar0;
	bVar0 = __LIB_1__::func_935(iParam0, 256);
	return bVar0;
}

bool func_806(int iParam0, bool bParam1)
{
	if (__LIB_2__::func_748(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (__LIB_1__::func_895(5000))
		{
			return true;
		}
	}
	switch (__LIB_0__::func_64(0))
	{
		case 0:
			return false;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return true;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return true;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return true;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return true;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return true;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return true;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return true;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return true;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return true;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_807(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = __LIB_1__::func_915(iParam0);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/] = iParam1;
	Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_4 = iParam2;
	Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_5 = iParam3;
	Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_1 = { 0f, 0f, 0f };
	Global_1914319.f_3[iParam0 /*446*/].f_408++;
}

bool func_808(int iParam0, int iParam1)
{
	return __LIB_0__::func_1(Global_1914319.f_3[iParam0 /*446*/].f_5, iParam1);
}

void func_809(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
		case 5:
		case 18:
		case 22:
		case 27:
		case 34:
		case 38:
		case 55:
		case 60:
		case 67:
		case 72:
		case 92:
			if (!__LIB_1__::func_935(iParam0, 2))
			{
				__LIB_1__::func_936(iParam0, 2);
			}
			break;
	}
}

void func_810(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 = (Global_1914319.f_3[iParam0 /*446*/].f_7 || iParam1);
}

void func_811(var uParam0, int iParam1)
{
	__LIB_0__::func_7(&(uParam0->f_19), iParam1);
}

int func_812(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (!__LIB_2__::func_767(iParam0, 0))
	{
		return 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_120(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	VOLUME::_0xE2BE6FFA4A13CBB0(iParam1, iVar0, iParam2);
	return 1;
}

bool func_813(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	if (!AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_2__::func_764(vParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

int func_814(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((iParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (iParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(__LIB_1__::func_372(iVar0, 0)))
		{
			if (__LIB_1__::func_373(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_815(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (__LIB_0__::func_232(Global_35, iVar0, 1) < 9f)
		{
			return true;
		}
	}
	return false;
}

bool func_816(int iParam0, var uParam1)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_38))
	{
		if (__LIB_1__::func_205(iParam0, uParam1->f_38, 1, 0))
		{
			return true;
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_39))
	{
		if (__LIB_1__::func_205(iParam0, uParam1->f_39, 1, 0))
		{
			return true;
		}
	}
	return false;
}

int func_817()
{
	if (PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35))
	{
		return 1;
	}
	return 0;
}

void func_818(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];
	if (!__LIB_2__::func_757())
	{
		return;
	}
	sVar1 = __LIB_2__::func_773(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!__LIB_0__::func_630(iParam4))
	{
		if (__LIB_0__::func_20(iParam0))
		{
			iParam4 = __LIB_1__::func_905(__LIB_1__::func_882(iParam0));
		}
		else
		{
			iParam4 = __LIB_1__::func_905(iParam1);
		}
	}
	if (__LIB_0__::func_630(iParam4))
	{
		iVar3 = __LIB_1__::func_931(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = __LIB_1__::func_907(__LIB_1__::func_906(iParam2));
	}
	else if ((__LIB_0__::func_622(iParam1, 2) || __LIB_1__::func_932(iParam4, 2)) && !Global_1894899.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899.f_9 = 1;
	}
	else if ((__LIB_0__::func_20(iParam0) && __LIB_0__::func_21(iParam0, 16777216)) && !Global_1894899.f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899.f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899.f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899.f_9 = 1;
	}
	else
	{
		iVar4 = __LIB_0__::func_41(__LIB_0__::func_23());
		iVar5 = __LIB_0__::func_42(__LIB_0__::func_23());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = __LIB_1__::func_908(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, __LIB_1__::func_925(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, __LIB_1__::func_925(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = __LIB_1__::func_908(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, __LIB_1__::func_925(&cVar6, joaat("COLOR_PURE_WHITE")), __LIB_1__::func_925(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1894899.f_9 = 0;
	}
	Global_1934266.f_148 = __LIB_1__::func_909(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_819(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (Global_1914319.f_3[iVar0 /*446*/].f_9 == iParam0)
		{
			__LIB_2__::func_772(iVar0);
		}
		iVar0++;
	}
}

void func_820(int iParam0)
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case 92:
			StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0507_U_M_M_VhtStationClerk_01", 64);
			StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0507_U_M_M_VhtStationClerk_01", 64);
			return;
		case 38:
			StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0078_U_M_M_BlWTrainStationWorker_01", 64);
			StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0078_U_M_M_BlWTrainStationWorker_01", 64);
			return;
		case 26:
			StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0442_U_M_M_StrFreightStationOwner_01", 64);
			StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0442_U_M_M_StrFreightStationOwner_01", 64);
			return;
		case 105:
			StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0406_U_M_M_RhdTrainStationWorker_01", 64);
			StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0406_U_M_M_RhdTrainStationWorker_01", 64);
			return;
		case 76:
			if (!__LIB_2__::func_774(29))
			{
				if (__LIB_1__::func_185(29) && __LIB_1__::func_194() <= __LIB_0__::func_334(29))
				{
					StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!__LIB_2__::func_774(3))
			{
				if (__LIB_1__::func_185(3) && __LIB_1__::func_194() <= __LIB_0__::func_334(3))
				{
					StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!__LIB_2__::func_774(25))
			{
				if (__LIB_1__::func_185(25) && __LIB_1__::func_194() <= __LIB_0__::func_334(25))
				{
					StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
					StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
					return;
				}
			}
			break;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
		StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
		StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
	}
	else
	{
		StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
		StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
	}
}

bool func_821()
{
	if (iLocal_1 != 0)
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iLocal_1) == 0)
		{
			return iLocal_0;
		}
		else
		{
			return true;
		}
	}
	return iLocal_0;
}

void func_822()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_823(int iParam0)
{
	int iVar0;
	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		__LIB_0__::func_11(&iVar0);
	}
}

bool func_824(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

int func_825(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

bool func_826(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!__LIB_0__::func_1(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_827(var uParam0)
{
	int iVar0;
	int iVar1;
	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630.f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_828(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_8(&(uParam0->f_1), 2);
	}
	else
	{
		__LIB_0__::func_7(&(uParam0->f_1), 2);
	}
}

void func_829(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_8(&(uParam0->f_1), 1);
	}
	else
	{
		__LIB_0__::func_7(&(uParam0->f_1), 1);
	}
}

void func_830(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_8(&(uParam0->f_1), 16);
	}
	else
	{
		__LIB_0__::func_7(&(uParam0->f_1), 16);
	}
}

void func_831(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (__LIB_1__::func_339(iParam2, 1, 1, 1, 0))
	{
		__LIB_0__::func_7(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	__LIB_1__::func_350(uParam1, 1);
	__LIB_1__::func_345();
}

bool func_832(var uParam0, int iParam1)
{
	if (__LIB_1__::func_359(uParam0))
	{
		return true;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	return false;
}

bool func_833(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = __LIB_1__::func_349(uParam0);
	if (uParam0->f_12 > __LIB_1__::func_361(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = __LIB_1__::func_362(iParam1);
	iVar1 = __LIB_1__::func_363(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_834(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = __LIB_0__::func_485();
	}
	else if (__LIB_0__::func_485() - uParam1->f_4) > __LIB_1__::func_365(uParam1)
	{
		return __LIB_1__::func_366(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

void func_835(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		__LIB_1__::func_371(uParam0);
	}
}

bool func_836(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (__LIB_1__::func_376(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_837(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (__LIB_1__::func_376(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_838(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;
	fVar0 = 40f;
	if (__LIB_1__::func_376(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_1935630.f_34[iParam3], 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, Global_1935630.f_34[iParam3], -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_839(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	__LIB_1__::func_370(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !__LIB_1__::func_364(uParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !__LIB_1__::func_364(uParam1, iVar1))
				{
					if (__LIB_0__::func_94(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_840(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (__LIB_1__::func_360(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = __LIB_0__::func_485();
			return true;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (__LIB_0__::func_94(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = __LIB_0__::func_485();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_841(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1385367302;
		case 0:
			return joaat("HASH_AMB_VIG_BARBER_SHAVING");
		case 1:
			return joaat("HASH_AMB_VIG_BODY_TOSS");
		case 2:
			return joaat("HASH_AMB_VIG_BUTCHER_BLEED_DEER");
		case 3:
			return joaat("HASH_AMB_VIG_BUTCHER_HANG_CARCASS");
		case 4:
			return joaat("HASH_AMB_VIG_CHAMBERPOT_TOSS");
		case 5:
			return joaat("HASH_AMB_VIG_COW_GRAZING");
		case 6:
			return joaat("HASH_AMB_VIG_DROP_RABBIT_TABLE");
		case 7:
			return joaat("HASH_AMB_VIG_GET_DIRECTIONS");
		case 8:
			return joaat("HASH_AMB_VIG_GOAT_GRAZING");
		case 9:
			return joaat("HASH_AMB_VIG_LIGHT_SMOKE");
		case 10:
			return joaat("HASH_AMB_VIG_LUMBER_PASS_DOWN_BALCONY");
		case 11:
			return joaat("HASH_AMB_VIG_LUMBER_PASS_UP_BALCONY");
		case 12:
			return joaat("HASH_AMB_VIG_MAN_JUMP_FENCE");
		case 13:
			return joaat("HASH_AMB_VIG_MAN_STAND_AT_WAGON");
		case 14:
			return joaat("HASH_AMB_VIG_PUMP_CART");
		case 16:
			return joaat("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_1_HIGH");
		case 17:
			return joaat("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_1_MED");
		case 18:
			return joaat("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_2_HIGH");
		case 19:
			return joaat("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_2_MED");
		case 20:
			return joaat("HASH_AMB_VIG_STAGE_COACH");
		case 21:
			return joaat("HASH_AMB_VIG_STARTING_TO_RAIN_FEMALE");
		case 22:
			return joaat("HASH_AMB_VIG_STARTING_TO_RAIN_MALE");
		case 23:
			return joaat("HASH_AMB_VIG_VOMIT_SIT_FEMALE");
		case 24:
			return joaat("HASH_AMB_VIG_VOMIT_SIT_MALE");
		case 25:
			return joaat("HASH_AMB_VIG_VOMIT_WALL_FEMALE");
		case 26:
			return joaat("HASH_AMB_VIG_VOMIT_WALL_MALE");
		case 27:
			return joaat("HASH_AMB_VIG_WAGON_LOAD_BARREL");
		case 28:
			return joaat("HASH_AMB_VIG_WAGON_SWEEPER");
		case 29:
			return joaat("HASH_AMB_VIG_WAGON_UNLOAD_BARREL");
		case 30:
			return joaat("HASH_AMB_VIG_WALK_WITH_HORSE_A");
		case 31:
			return joaat("HASH_AMB_VIG_WHISPER_SIT");
		case 32:
			return joaat("HASH_AMB_VIG_WHISPER_STAND");
		case 33:
			return joaat("HASH_AMB_VIG_WHORE_GIVE_MONEY_MADAM");
		case 34:
			return joaat("HASH_AMB_VIG_AMB_CAMP_ROBBERY");
		case 35:
			return joaat("HASH_AMB_VIG_BOAT_PLACEMENT");
		case 36:
			return joaat("HASH_AMB_VIG_COUGAR_GRAPPLE_PED");
		case 37:
			return joaat("HASH_AMB_VIG_CROSS_TERRAIN_WALKER");
		case 38:
			return joaat("HASH_AMB_VIG_DEER_CARRY_DROPOFF");
		case 39:
			return joaat("HASH_AMB_VIG_DEER_CARRY_RIDE");
		case 40:
			return joaat("HASH_AMB_VIG_DOG_IN_WAGON");
		case 41:
			return joaat("HASH_AMB_VIG_DUCK_CARRY");
		case 42:
			return joaat("HASH_AMB_VIG_FEMALE_RIDER_MALE_WALKER");
		case 43:
			return joaat("HASH_AMB_VIG_FISHING_RIVER");
		case 44:
			return joaat("HASH_AMB_VIG_FISHING_RIVER_DOG");
		case 45:
			return joaat("HASH_AMB_VIG_GATOR_GRAPPLE_PED");
		case 46:
			return joaat("HASH_AMB_VIG_GOAT_CARRY_RIDE");
		case 47:
			return joaat("HASH_AMB_VIG_HOBO_TRAIN_HOP_NO_SACK");
		case 48:
			return joaat("HASH_AMB_VIG_MACFARLANE_FARMER");
		case 49:
			return joaat("HASH_AMB_VIG_MAN_RIDING_DONKEY");
		case 50:
			return joaat("HASH_AMB_VIG_MAN_SIT_READ");
		case 51:
			return joaat("HASH_AMB_VIG_MAN_RIDE_WITH_LANTERN");
		case 52:
			return joaat("HASH_AMB_VIG_OUTDOORSMAN");
		case 61:
			return joaat("HASH_AMB_VIG_TRAFFIC_CART");
		case 62:
			return joaat("HASH_AMB_VIG_TRAFFIC_CONVO_TWO_RIDERS");
		case 63:
			return joaat("HASH_AMB_VIG_TRAFFIC_CONVO_TWO_WALKERS");
		case 64:
			return joaat("HASH_AMB_VIG_TRAVELLER_GALLOP_PAST");
		case 53:
			return joaat("HASH_AMB_VIG_RAM_CARRY_RIDE");
		case 54:
			return joaat("HASH_AMB_VIG_RESTING_HAT");
		case 55:
			return joaat("HASH_AMB_VIG_RIDER_GALLOP");
		case 56:
			return joaat("HASH_AMB_VIG_RIDER_WITH_DOG");
		case 57:
			return joaat("HASH_AMB_VIG_RIDGELINE_NATIVE");
		case 58:
			return joaat("HASH_AMB_VIG_RIDGELINE_RIDER");
		case 60:
			return joaat("HASH_AMB_VIG_SLOW_RIDER");
		case 66:
			return joaat("HASH_AMB_VIG_WAGON_BACK_PASSENGER");
		case 65:
			return joaat("HASH_AMB_VIG_WAGON_HARMONICA");
		case 72:
			return joaat("HASH_AMB_VIG_WALK_WITH_DOG");
		case 67:
			return joaat("HASH_AMB_VIG_WALK_HORSE_CARRY_DEER");
		case 68:
			return joaat("HASH_AMB_VIG_WALK_HORSE_CARRY_GOAT");
		case 69:
			return joaat("HASH_AMB_VIG_WALK_HORSE_CARRY_PRONGHORN");
		case 70:
			return joaat("HASH_AMB_VIG_WALK_HORSE_CARRY_RAM");
		case 71:
			return joaat("HASH_AMB_VIG_WALK_PACK_HORSE");
		case 73:
			return joaat("HASH_AMB_VIG_WALK_WITH_OX");
		case 74:
			return joaat("HASH_AMB_VIG_WATER_HORSE");
		case 75:
			return joaat("HASH_AMB_VIG_ALLIGATOR_BOAR_LEG");
		case 76:
			return joaat("HASH_AMB_VIG_ALLIGATOR_BOAR_NECK");
		case 77:
			return joaat("HASH_AMB_VIG_ALLIGATOR_EAT_DEAD_BIRD");
		case 78:
			return joaat("HASH_AMB_VIG_ARMADILLO_RUN");
		case 79:
			return joaat("HASH_AMB_VIG_BAT_FLEE_SWARM_LRG");
		case 80:
			return joaat("HASH_AMB_VIG_BAT_HANG_SWARM");
		case 81:
			return joaat("HASH_AMB_VIG_BEARBLACK_BACKDOWN");
		case 82:
			return joaat("HASH_AMB_VIG_BEAR_INTIMIDATE_WOLF");
		case 83:
			return joaat("HASH_AMB_VIG_BEAR_RUN_CATCH_FISH");
		case 84:
			return joaat("HASH_AMB_VIG_BEAR_SCRATCH_BACK");
		case 85:
			return joaat("HASH_AMB_VIG_BEAR_VS_WOLVES");
		case 86:
			return joaat("HASH_AMB_VIG_BEAVER_SWIM_WITH_BRANCH");
		case 87:
			return joaat("HASH_AMB_VIG_BIG_CAT_AMBUSH_DEER");
		case 88:
			return joaat("HASH_AMB_VIG_BIG_CAT_KILL_RACCOON");
		case 89:
			return joaat("HASH_AMB_VIG_BIRD_FENCE_SWARM_CROW");
		case 90:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_CROW");
		case 91:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_DUCK");
		case 92:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_DUCK_LRG");
		case 93:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_DUCK_LRG_W");
		case 94:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_GOOSE");
		case 95:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_PIGEON");
		case 96:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_RAVEN");
		case 97:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_RAVEN_DARK");
		case 98:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_RAVEN_LRG");
		case 99:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_SEAGULL");
		case 100:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_SONGBIRD");
		case 101:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_SPARROW");
		case 102:
			return joaat("HASH_AMB_VIG_BIRDS_IN_TREE");
		case 103:
			return joaat("HASH_AMB_VIG_BIRD_LAND_BLUEJAY");
		case 104:
			return joaat("HASH_AMB_VIG_BIRD_LAND_CARDINAL");
		case 105:
			return joaat("HASH_AMB_VIG_BIRD_LAND_DUCK");
		case 106:
			return joaat("HASH_AMB_VIG_BIRD_LAND_EAGLE");
		case 107:
			return joaat("HASH_AMB_VIG_BIRD_LAND_HAWK");
		case 108:
			return joaat("HASH_AMB_VIG_BIRD_LAND_HERON");
		case 109:
			return joaat("HASH_AMB_VIG_BIRD_LAND_LOON");
		case 110:
			return joaat("HASH_AMB_VIG_BIRD_LAND_OWL");
		case 111:
			return joaat("HASH_AMB_VIG_BIRD_LAND_SEAGULL");
		case 112:
			return joaat("HASH_AMB_VIG_BIRD_LAND_SONGBIRD");
		case 113:
			return joaat("HASH_AMB_VIG_BIRD_LAND_SPARROW");
		case 114:
			return joaat("HASH_AMB_VIG_BIRD_LAND_SWARM_CROW");
		case 115:
			return joaat("HASH_AMB_VIG_BIRD_LAND_SWARM_PIGEON");
		case 116:
			return joaat("HASH_AMB_VIG_BIRD_ON_ALLIGATOR");
		case 117:
			return joaat("HASH_AMB_VIG_BIRD_ON_BUCK");
		case 118:
			return joaat("HASH_AMB_VIG_BIRD_ON_BUFFALO");
		case 119:
			return joaat("HASH_AMB_VIG_BIRD_ON_COW");
		case 120:
			return joaat("HASH_AMB_VIG_BIRD_ON_ELK");
		case 121:
			return joaat("HASH_AMB_VIG_BIRD_ON_MOOSE");
		case 122:
			return joaat("HASH_AMB_VIG_BIRD_SWARM");
		case 123:
			return joaat("HASH_AMB_VIG_BIRD_WIRE_SWARM_SPARROW");
		case 124:
			return joaat("HASH_AMB_VIG_BLUEJAY_ON_PERCH");
		case 125:
			return joaat("HASH_AMB_VIG_BOAR_RUN");
		case 126:
			return joaat("HASH_AMB_VIG_BUCK_AND_DOE");
		case 127:
			return joaat("HASH_AMB_VIG_BUCKS_FIGHTING");
		case 128:
			return joaat("HASH_AMB_VIG_BUFFALO_VS_BUFFALO");
		case 129:
			return joaat("HASH_AMB_VIG_BUFFALO_WALLOW_SHAKE");
		case 130:
			return joaat("HASH_AMB_VIG_CALIFORNIACONDOR_ON_PERCH");
		case 131:
			return joaat("HASH_AMB_VIG_CAMP_BIRD_ON_PERCH");
		case 132:
			return joaat("HASH_AMB_VIG_CARDINAL_ON_PERCH");
		case 133:
			return joaat("HASH_AMB_VIG_CAT_CARRY_RAT");
		case 134:
			return joaat("HASH_AMB_VIG_CAT_CATCH_BIRD");
		case 135:
			return joaat("HASH_AMB_VIG_CAT_RUN");
		case 136:
			return joaat("HASH_AMB_VIG_COYOTE_CATCH_SQUIRREL");
		case 137:
			return joaat("HASH_AMB_VIG_COYOTE_EAT_SHEEP");
		case 138:
			return joaat("HASH_AMB_VIG_COYOTE_TAKEDOWN_MISS_DEER");
		case 139:
			return joaat("HASH_AMB_VIG_CROWS_AND_EAGLES_EAT_DEER");
		case 140:
			return joaat("HASH_AMB_VIG_CROWS_AND_VULTURES_EAT_DEER");
		case 141:
			return joaat("HASH_AMB_VIG_CROWS_AND_VULTURES_EAT_HUMAN");
		case 142:
			return joaat("HASH_AMB_VIG_CROWS_EATING_DEER");
		case 143:
			return joaat("HASH_AMB_VIG_CROWS_EATING_HUMAN");
		case 144:
			return joaat("HASH_AMB_VIG_CROW_ON_PERCH");
		case 145:
			return joaat("HASH_AMB_VIG_DEAD_BOAR");
		case 146:
			return joaat("HASH_AMB_VIG_DEAD_BUCK");
		case 147:
			return joaat("HASH_AMB_VIG_DEAD_BUFFALO");
		case 148:
			return joaat("HASH_AMB_VIG_DEAD_COYOTE");
		case 149:
			return joaat("HASH_AMB_VIG_DEAD_HORSE_A");
		case 150:
			return joaat("HASH_AMB_VIG_DEAD_HORSE_B");
		case 151:
			return joaat("HASH_AMB_VIG_DEAD_PIG");
		case 152:
			return joaat("HASH_AMB_VIG_DEAD_POSSUM");
		case 153:
			return joaat("HASH_AMB_VIG_DEAD_PRONGHORN");
		case 154:
			return joaat("HASH_AMB_VIG_DEAD_RACCOON");
		case 155:
			return joaat("HASH_AMB_VIG_DEAD_SHEEP");
		case 156:
			return joaat("HASH_AMB_VIG_DEER_ANTLERS_STUCK");
		case 157:
			return joaat("HASH_AMB_VIG_DEER_RUN");
		case 158:
			return joaat("HASH_AMB_VIG_DEER_TREE_RUB");
		case 159:
			return joaat("HASH_AMB_VIG_DISCOVERABLE_PARAKEET");
		case 160:
			return joaat("HASH_AMB_VIG_DOG_CHASE_CAT");
		case 161:
			return joaat("HASH_AMB_VIG_DOG_CHASE_TAIL");
		case 162:
			return joaat("HASH_AMB_VIG_DOGS_PLAYING");
		case 163:
			return joaat("HASH_AMB_VIG_DUCK_WATER_SWARM");
		case 164:
			return joaat("HASH_AMB_VIG_EAGLE_CATCH_FISH");
		case 165:
			return joaat("HASH_AMB_VIG_EAGLE_CATCH_RABBIT");
		case 166:
			return joaat("HASH_AMB_VIG_EAGLE_CATCH_SEASNAKE");
		case 167:
			return joaat("HASH_AMB_VIG_EAGLE_DIVE_CATCH_FISH");
		case 168:
			return joaat("HASH_AMB_VIG_EAGLE_ON_PERCH");
		case 169:
			return joaat("HASH_AMB_VIG_FOX_CATCH_RODENT");
		case 170:
			return joaat("HASH_AMB_VIG_FOX_HUNT_IN_SNOW");
		case 171:
			return joaat("HASH_AMB_VIG_FOX_RUN");
		case 172:
			return joaat("HASH_AMB_VIG_FOX_SIT");
		case 173:
			return joaat("HASH_AMB_VIG_GOAT_RUN");
		case 174:
			return joaat("HASH_AMB_VIG_HAWK_CATCH_SNAKE");
		case 175:
			return joaat("HASH_AMB_VIG_HAWK_CATCH_SQUIRREL");
		case 176:
			return joaat("HASH_AMB_VIG_HAWK_ON_PERCH");
		case 177:
			return joaat("HASH_AMB_VIG_HAWK_VS_SNAKE");
		case 178:
			return joaat("HASH_AMB_VIG_HORSE_WALLOW");
		case 179:
			return joaat("HASH_AMB_VIG_IGUANA_RUN");
		case 180:
			return joaat("HASH_AMB_VIG_IGUANA_DESERT_RUN");
		case 181:
			return joaat("HASH_AMB_VIG_JAVELINA_RUN");
		case 186:
			return joaat("HASH_AMB_VIG_OWL_CATCH_RAT");
		case 187:
			return joaat("HASH_AMB_VIG_OWL_ON_PERCH");
		case 188:
			return joaat("HASH_AMB_VIG_PELICAN_DIVE");
		case 189:
			return joaat("HASH_AMB_VIG_PELICAN_ON_PERCH");
		case 190:
			return joaat("HASH_AMB_VIG_PIG_ROLL_MUD");
		case 191:
			return joaat("HASH_AMB_VIG_PIG_RUN");
		case 192:
			return joaat("HASH_AMB_VIG_RABBIT_CHASE_RABBIT");
		case 193:
			return joaat("HASH_AMB_VIG_RABBIT_RUN");
		case 182:
			return joaat("HASH_AMB_VIG_MANGY_DOG_AND_VULTURES");
		case 183:
			return joaat("HASH_AMB_VIG_MOOSE_GRAZING");
		case 184:
			return joaat("HASH_AMB_VIG_MOOSE_SLIPPING");
		case 185:
			return joaat("HASH_AMB_VIG_MUSKRAT_RUN");
		case 194:
			return joaat("HASH_AMB_VIG_RACCOON_EATING");
		case 195:
			return joaat("HASH_AMB_VIG_RACCOON_RUN");
		case 196:
			return joaat("HASH_AMB_VIG_RAMS_HEADBUTT");
		case 197:
			return joaat("HASH_AMB_VIG_RAM_RUN");
		case 198:
			return joaat("HASH_AMB_VIG_RATS_EAT_HUMAN");
		case 199:
			return joaat("HASH_AMB_VIG_RATS_EATING_GROUP");
		case 200:
			return joaat("HASH_AMB_VIG_RAVEN_ON_PERCH");
		case 201:
			return joaat("HASH_AMB_VIG_REDFOOTED_BOOBY_ON_PERCH");
		case 202:
			return joaat("HASH_AMB_VIG_RIDGELINE_BUCK");
		case 203:
			return joaat("HASH_AMB_VIG_RIDGELINE_ELK");
		case 204:
			return joaat("HASH_AMB_VIG_RIDGELINE_MOOSE");
		case 205:
			return joaat("HASH_AMB_VIG_RIDGELINE_PRONGHORN");
		case 206:
			return joaat("HASH_AMB_VIG_RIDGELINE_RAM");
		case 207:
			return joaat("HASH_AMB_VIG_RIDGELINE_WOLF");
		case 59:
			return joaat("HASH_AMB_VIG_ROVING_SHEEP_P1");
		case 15:
			return joaat("HASH_AMB_VIG_SHEEP_GRAZING");
		case 210:
			return joaat("HASH_AMB_VIG_SHEEP_RUN");
		case 211:
			return joaat("HASH_AMB_VIG_SKUNK_RUN");
		case 208:
			return joaat("HASH_AMB_VIG_SCAVENGER_ON_DEER");
		case 209:
			return joaat("HASH_AMB_VIG_SEAGULL_CATCH_FISH");
		case 212:
			return joaat("HASH_AMB_VIG_SNAKE_RUN");
		case 213:
			return joaat("HASH_AMB_VIG_SQUIRREL_CHASE_SQUIRREL");
		case 214:
			return joaat("HASH_AMB_VIG_SQUIRREL_RUN");
		case 215:
			return joaat("HASH_AMB_VIG_SWIMMING_BEARBLACK");
		case 216:
			return joaat("HASH_AMB_VIG_SWIMMING_BEAVER");
		case 217:
			return joaat("HASH_AMB_VIG_SWIMMING_BOAR");
		case 218:
			return joaat("HASH_AMB_VIG_SWIMMING_DEER");
		case 219:
			return joaat("HASH_AMB_VIG_SWIMMING_DOG");
		case 220:
			return joaat("HASH_AMB_VIG_SWIMMING_ELK");
		case 221:
			return joaat("HASH_AMB_VIG_SWIMMING_FOX");
		case 222:
			return joaat("HASH_AMB_VIG_SWIMMING_MOOSE");
		case 223:
			return joaat("HASH_AMB_VIG_SWIMMING_MUSKRAT");
		case 224:
			return joaat("HASH_AMB_VIG_SWIMMING_POSSUM");
		case 225:
			return joaat("HASH_AMB_VIG_SWIMMING_RACCOON");
		case 226:
			return joaat("HASH_AMB_VIG_SWIMMING_RAT");
		case 227:
			return joaat("HASH_AMB_VIG_SWIMMING_WOLF");
		case 228:
			return joaat("HASH_AMB_VIG_SWIM_WOLF_CHASE_MOOSE");
		case 229:
			return joaat("HASH_AMB_VIG_TURKEY_RUN");
		case 230:
			return joaat("HASH_AMB_VIG_VULTURES_EATING_CARCASS_A");
		case 231:
			return joaat("HASH_AMB_VIG_VULTURES_EATING_HUMAN");
		case 232:
			return joaat("HASH_AMB_VIG_VULTURE_ON_PERCH");
		case 233:
			return joaat("HASH_AMB_VIG_WILD_BULL");
		case 234:
			return joaat("HASH_AMB_VIG_WILD_GOAT");
		case 235:
			return joaat("HASH_AMB_VIG_WILD_OX");
		case 236:
			return joaat("HASH_AMB_VIG_WILD_SHARK");
		case 237:
			return joaat("HASH_AMB_VIG_WOLF_AMBUSH_DEER");
		case 238:
			return joaat("HASH_AMB_VIG_WOLF_FLEE_WOLVES");
		case 239:
			return joaat("HASH_AMB_VIG_WOLF_HOWL_CORPSE");
		case 240:
			return joaat("HASH_AMB_VIG_WOLF_HOWLING");
		case 241:
			return joaat("HASH_AMB_VIG_WOLVES_HOWLING");
		case 242:
			return joaat("HASH_AMB_VIG_WOLVES_EAT_DEER");
		case 243:
			return joaat("HASH_AMB_VIG_WOLVES_PLAYING");
		case 244:
			return joaat("HASH_AMB_VIG_WOLVES_PLAYING_B");
		case 245:
			return joaat("HASH_AMB_VIG_WOLVES_PLAYING_C");
		case 246:
			return joaat("HASH_AMB_VIG_WOLVES_RESTING");
		case 247:
			return joaat("HASH_AMB_VIG_WOLF_TAKEDOWN_MISS_DEER");
		default:
			break;
	}
	return -1385367302;
}

Vector3 func_842(var uParam0)
{
	switch (*uParam0)
	{
		case 16:
		case 17:
		case 18:
		case 19:
		case 23:
		case 24:
		case 25:
		case 26:
			return 0.5f, 0.5f, 2f;
		case 7:
		case 9:
			return 1f, 0.6f, 1.9f;
		case 11:
			return 1.2f, 3f, 4.5f;
		case 30:
			return 2f, 1.5f, 3f;
		case 33:
			return 3f, 3f, 1.5f;
		default:
			break;
	}
	return 3f, 3f, 3f;
}

bool func_843(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_3.f_1))
		{
			iVar0 = 0;
			if (uParam0->f_16)
			{
				iVar0 |= 64;
			}
			if (uParam0->f_17)
			{
				iVar0 |= 48;
			}
			uParam0->f_3.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_3, iVar0, uParam0->f_3.f_9[0], false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_3.f_1, uParam0->f_3.f_2, uParam0->f_3.f_5, 2);
		}
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_3.f_1))
		{
			return false;
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_3.f_1);
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_19)
	{
		if (uParam0->f_20[iVar1 /*14*/].f_2 != 0)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_20[iVar1 /*14*/].f_2, false);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_371)
	{
		if (uParam0->f_372[iVar1 /*8*/].f_2 != 0)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_372[iVar1 /*8*/].f_2, false);
		}
		iVar1++;
	}
	if (uParam0->f_453.f_1 != 0)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_453.f_1, false);
	}
	PED::_0xED9582B3DA8F02B4(uParam0->f_19);
	return true;
}

int func_844(var uParam0)
{
	int iVar0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_3.f_1))
		{
			return 0;
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_3.f_1, true, false))
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 < uParam0->f_3.f_8)
		{
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_3.f_1, uParam0->f_3.f_9[iVar0]))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_3.f_1, uParam0->f_3.f_9[iVar0]))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_3.f_1, uParam0->f_3.f_9[iVar0]);
				}
				return 0;
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_19)
	{
		if (uParam0->f_20[iVar0 /*14*/].f_2 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_20[iVar0 /*14*/].f_2))
			{
				return 0;
			}
			if (uParam0->f_20[iVar0 /*14*/].f_3 != joaat("META_OUTFIT_DEFAULT"))
			{
				if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_20[iVar0 /*14*/].f_4))
				{
					uParam0->f_20[iVar0 /*14*/].f_4 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_20[iVar0 /*14*/].f_2, uParam0->f_20[iVar0 /*14*/].f_3);
					if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_20[iVar0 /*14*/].f_4))
					{
						uParam0->f_20[iVar0 /*14*/].f_3 = joaat("META_OUTFIT_DEFAULT");
						uParam0->f_20[iVar0 /*14*/].f_9 = 1;
					}
					return 0;
				}
				else if (!PED::_0x610438375E5D1801(uParam0->f_20[iVar0 /*14*/].f_4))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_371)
	{
		if (uParam0->f_372[iVar0 /*8*/].f_2 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_372[iVar0 /*8*/].f_2))
			{
				return 0;
			}
		}
		iVar0++;
	}
	if (uParam0->f_453.f_1 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_453.f_1))
		{
			return 0;
		}
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		return 0;
	}
	return 1;
}

bool func_845(int iParam0)
{
	int iVar0;
	iVar0 = Global_1415419.f_19[iParam0 /*12*/].f_5;
	if ((((iVar0 == 66 || iVar0 == 64) || iVar0 == 68) || iVar0 == 67) || iVar0 == 74)
	{
		return true;
	}
	return false;
}

int func_846(var uParam0)
{
	struct<4> Var0;
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = { 0f, 0f, 0f };
	Var0.f_6 = { 0f, 0f, 0f };
	Var0.f_9 = { 0f, 0f, 0f };
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_453) && uParam0->f_453.f_1 != 0)
	{
		if (uParam0->f_453.f_7)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
			{
				ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_3.f_1, uParam0->f_453.f_2, &Var0, false, 0, 2);
				uParam0->f_453.f_3 = { Var0 };
				uParam0->f_453.f_6 = Var0.f_3.f_2;
			}
		}
		if (uParam0->f_453.f_10 != 0)
		{
			uParam0->f_453 = VEHICLE::_CREATE_DRAFT_VEHICLE(uParam0->f_453.f_1, uParam0->f_453.f_3, uParam0->f_453.f_6, true, true, uParam0->f_453.f_9, uParam0->f_453.f_10, false);
		}
		else
		{
			uParam0->f_453 = VEHICLE::CREATE_VEHICLE(uParam0->f_453.f_1, uParam0->f_453.f_3, uParam0->f_453.f_6, true, true, uParam0->f_453.f_9, false);
		}
		if (uParam0->f_453.f_9)
		{
			VEHICLE::_0x3053064F909B5F42(uParam0->f_453, 1);
		}
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_453))
	{
		if (uParam0->f_453.f_8)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_3.f_1, ENTITY::GET_ENTITY_COORDS(uParam0->f_453, true, false), ENTITY::GET_ENTITY_ROTATION(uParam0->f_453, 2), 2);
			}
		}
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_453, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_453, true, true);
		}
	}
	return 1;
}

int func_847(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_371)
	{
		Var1 = { 0f, 0f, 0f };
		Var1.f_3 = { 0f, 0f, 0f };
		Var1.f_6 = { 0f, 0f, 0f };
		Var1.f_9 = { 0f, 0f, 0f };
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_372[iVar0 /*8*/]))
		{
			if ((uParam0->f_372[iVar0 /*8*/].f_7 && __LIB_0__::func_86(uParam0->f_372[iVar0 /*8*/].f_3)) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
			{
				ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_3.f_1, uParam0->f_372[iVar0 /*8*/].f_1, &Var1, false, 0, 2);
				uParam0->f_372[iVar0 /*8*/].f_3 = { Var1 };
				uParam0->f_372[iVar0 /*8*/].f_6 = Var1.f_3.f_2;
			}
			uParam0->f_372[iVar0 /*8*/] = OBJECT::CREATE_OBJECT(uParam0->f_372[iVar0 /*8*/].f_2, uParam0->f_372[iVar0 /*8*/].f_3, true, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam0->f_372[iVar0 /*8*/], uParam0->f_372[iVar0 /*8*/].f_6);
			if (uParam0->f_372[iVar0 /*8*/].f_7 && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
			{
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_372[iVar0 /*8*/], Var1.f_3, 2, true);
			}
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_848(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_19)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
		{
			if (uParam0->f_20[iVar0 /*14*/].f_10 && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
			{
				if (uParam0->f_20[iVar0 /*14*/].f_13)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_20[iVar0 /*14*/], false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar0 /*14*/], 168, true);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_3.f_1, uParam0->f_20[iVar0 /*14*/].f_1, uParam0->f_20[iVar0 /*14*/], 0);
			}
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_20[iVar0 /*14*/], false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_371)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_372[iVar0 /*8*/]) && uParam0->f_372[iVar0 /*8*/].f_7)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_3.f_1, uParam0->f_372[iVar0 /*8*/].f_1, uParam0->f_372[iVar0 /*8*/], 0);
			}
		}
		iVar0++;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		if (uParam0->f_453.f_7)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_3.f_1, uParam0->f_453.f_2, uParam0->f_453, 0);
		}
	}
}

void func_849(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_19)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_20[iVar0 /*14*/], 29, true);
		}
		iVar0++;
	}
}

void func_850(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_3.f_1, uParam0->f_3.f_9[0], true);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_3.f_1);
	}
}

void func_851(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_465 = iParam1;
	uParam0->f_466 = iParam2;
	uParam0->f_467 = iParam3;
}

bool func_852(bool bParam0, vector3 vParam1)
{
	switch (bParam0)
	{
		case 58:
		case 124:
		case 132:
		case 168:
		case 176:
		case 187:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
			return true;
		default:
			break;
	}
	if (MISC::ABSF((Global_36.f_2 - vParam1.z)) > 30f)
	{
		return false;
	}
	return true;
}

void func_853(var uParam0, char* sParam1, char* sParam2, vector3 vParam3, vector3 vParam6)
{
	uParam0->f_2 = sParam1;
	uParam0->f_3 = sParam2;
	uParam0->f_3.f_2 = { vParam3 };
	uParam0->f_3.f_5 = { vParam6 };
}

void func_854(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	uParam0->f_3.f_8 = iParam1;
	uParam0->f_3.f_9[0] = sParam2;
	uParam0->f_3.f_9[1] = sParam3;
	uParam0->f_3.f_9[2] = iParam4;
}

void func_855(var uParam0, int iParam1, char* sParam2, int iParam3, vector3 vParam4, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	uParam0->f_20[iParam1 /*14*/].f_1 = sParam2;
	uParam0->f_20[iParam1 /*14*/].f_2 = iParam3;
	uParam0->f_20[iParam1 /*14*/].f_5 = { vParam4 };
	uParam0->f_20[iParam1 /*14*/].f_8 = fParam7;
	uParam0->f_20[iParam1 /*14*/].f_9 = iParam8;
	uParam0->f_20[iParam1 /*14*/].f_10 = iParam9;
	uParam0->f_20[iParam1 /*14*/].f_11 = iParam10;
	uParam0->f_20[iParam1 /*14*/].f_12 = iParam11;
	uParam0->f_20[iParam1 /*14*/].f_3 = iParam12;
	uParam0->f_20[iParam1 /*14*/].f_13 = iParam13;
	uParam0->f_19++;
}

bool func_856(var uParam0, var uParam1)
{
	var uVar0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1))
	{
		uParam1->f_2 = 1;
		if (DATAFILE::_DATAFILE_GET_FLOAT(&uVar0, uParam1))
		{
			uParam0->f_494 = uVar0;
		}
		uParam1->f_2 = 2;
		if (DATAFILE::_DATAFILE_GET_FLOAT(&uVar0, uParam1))
		{
			uParam0->f_493 = uVar0;
		}
		uParam1->f_2 = 3;
		if (DATAFILE::_DATAFILE_GET_FLOAT(&uVar0, uParam1))
		{
			uParam0->f_495 = uVar0;
		}
		return true;
	}
	return false;
}

void func_857(var uParam0, bool bParam1, bool bParam2)
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bParam1);
	if (!bParam1 && bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(*uParam0, 168, true);
	}
}

void func_858(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	if (bParam1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_3.f_1))
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_3.f_8)
			{
				if (ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_3.f_1, uParam0->f_3.f_9[iVar0]))
				{
				}
				iVar0++;
			}
			ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_3.f_1, 0);
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_3.f_1);
		}
	}
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_371)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_372[iVar0 /*8*/]))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_372[iVar0 /*8*/]));
			}
			iVar0++;
		}
	}
	if (bParam3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_453))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam0->f_453));
		}
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_19)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20[iVar0 /*14*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
			{
			}
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_20[iVar0 /*14*/], true))
			{
				if (!PED::IS_PED_HUMAN(uParam0->f_20[iVar0 /*14*/]))
				{
					if (PED::GET_PED_CONFIG_FLAG(uParam0->f_20[iVar0 /*14*/], 297, true))
					{
						PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar0 /*14*/], 297, false);
					}
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_20[iVar0 /*14*/]));
				if (STREAMING::IS_MODEL_VALID(uParam0->f_20[iVar0 /*14*/].f_2))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_20[iVar0 /*14*/].f_2);
				}
			}
		}
		iVar0++;
	}
}

float func_859(float fParam0)
{
	int iVar0;
	if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
		iVar0 = Global_1935630.f_44;
		if (WEAPON::_IS_WEAPON_SNIPER(iVar0) || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
		{
			if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				fParam0 = (fParam0 + (CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR() * fParam0));
			}
		}
	}
	return fParam0;
}

void func_860(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_19)
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_20[iVar0 /*14*/].f_4))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam0->f_20[iVar0 /*14*/].f_4);
		}
		iVar0++;
	}
	if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_496))
	{
		VOLUME::_0xFDFECC6EE4491E11(uParam0->f_496);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_497))
	{
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_497);
		__LIB_0__::func_172(uParam0->f_497);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_498))
	{
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_498);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_498);
		__LIB_0__::func_172(uParam0->f_498);
	}
}

float func_861(int iParam0)
{
	if (__LIB_2__::func_824(iParam0))
	{
		switch (Global_1415419.f_19[iParam0 /*12*/].f_6)
		{
			case 0:
				return 12f;
			case 1:
				return 1f;
			case 2:
				return 50f;
			case 3:
				return 100f;
			case 4:
				return 0f;
			default:
				break;
		}
	}
	return 12f;
}

int func_862(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (__LIB_0__::func_86(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (__LIB_1__::func_209(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (iParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, iParam7);
	}
	if (fParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, fParam9);
	}
	__LIB_1__::func_210(iVar0, bParam8);
	return iVar0;
}

bool func_863(vector3 vParam0, float fParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1415419.f_9721[iVar0 /*8*/].f_2)
		{
			if (__LIB_0__::func_175(vParam0, Global_1415419.f_9721[iVar0 /*8*/].f_4, fParam3, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_864(vector3 vParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_32074.f_2697.f_1495[iVar0 /*4*/] != -1)
		{
			if (__LIB_0__::func_175(vParam0, Global_32074.f_2697.f_1495[iVar0 /*4*/].f_1, 1f, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_865(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 1048576);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 1048576);
	}
}

void func_866(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_32074.f_2697.f_1495[iVar0 /*4*/] == -1)
		{
			iVar1 = iVar0;
			Jump @109; //curOff = 39
		}
		else if (Global_32074.f_2697.f_1495[iVar0 /*4*/] == iParam0)
		{
			if (__LIB_0__::func_175(Global_32074.f_2697.f_1495[iVar0 /*4*/].f_1, vParam1, 1056964608 /* Float: 0.5f */, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_32074.f_2697.f_1495[iVar0 /*4*/] = Global_32074.f_2697.f_1495[iVar0 + 1 /*4*/];
			Global_32074.f_2697.f_1495[iVar0 /*4*/].f_1 = { Global_32074.f_2697.f_1495[iVar0 + 1 /*4*/].f_1 };
			iVar0++;
		}
		iVar1 = 9;
	}
	Global_32074.f_2697.f_1495[iVar1 /*4*/] = iParam0;
	Global_32074.f_2697.f_1495[iVar1 /*4*/].f_1 = { vParam1 };
}

int func_867(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return __LIB_1__::func_990(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_868(var uParam0)
{
	int iVar0;
	iVar0 = Global_1935630.f_40;
	if (__LIB_0__::func_2() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = __LIB_2__::func_827(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = __LIB_2__::func_827(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (__LIB_1__::func_363(iVar0) == -1)
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

bool func_869(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = __LIB_1__::func_363(iParam2);
	}
	else
	{
		iVar1 = __LIB_1__::func_362(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = __LIB_1__::func_363(iParam0);
	}
	else
	{
		iVar0 = __LIB_1__::func_362(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (__LIB_0__::func_1(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_870(int iParam0)
{
	float fVar0;
	switch (iParam0)
	{
		case 199:
			return 75f;
		case 72:
			return 200f;
		case 52:
			return 250f;
		case 43:
		case 44:
			return 200f;
		case 47:
			if (Global_1415419.f_9757 == -310375866)
			{
				return 700f;
			}
			else
			{
				return 200f;
			}
			break;
		case 7:
		case 15:
		case 28:
		case 40:
			if (Global_1415419.f_9757 == -310375866)
			{
				return 650f;
			}
			else
			{
				return 175f;
			}
			break;
		default:
			if (__LIB_1__::func_923())
			{
				switch (__LIB_0__::func_12())
				{
					case 92:
						fVar0 = 200f;
						break;
					case 26:
						fVar0 = 175f;
						break;
					case 76:
						fVar0 = 175f;
						break;
					case 120:
						fVar0 = 175f;
						break;
					case 82:
						fVar0 = 175f;
						break;
					default:
						fVar0 = 105f;
						break;
				}
			}
			else
			{
				fVar0 = 200f;
			}
			break;
	}
	return fVar0;
}

float func_871(bool bParam0)
{
	float fVar0;
	switch (bParam0)
	{
		case 64:
			fVar0 = 175f;
			break;
		case 37:
			fVar0 = 175f;
			break;
		case 199:
			fVar0 = 50f;
			break;
		case 52:
			return 200f;
		case 47:
			if (Global_1415419.f_9757 == -310375866)
			{
				return 600f;
			}
			else
			{
				return 300f;
			}
			break;
		case 7:
		case 15:
		case 28:
		case 40:
		case 44:
			if (Global_1415419.f_9757 == -310375866)
			{
				return 600f;
			}
			else
			{
				return 150f;
			}
			break;
		default:
			if (__LIB_1__::func_923())
			{
				switch (__LIB_0__::func_12())
				{
					case 92:
						fVar0 = 175f;
						break;
					case 26:
						fVar0 = 150f;
						break;
					case 76:
						fVar0 = 150f;
						break;
					case 120:
						fVar0 = 150f;
						break;
					case 82:
						fVar0 = 150f;
						break;
					default:
						fVar0 = 80f;
						break;
				}
			}
			else
			{
				fVar0 = 175f;
			}
			break;
	}
	return fVar0;
}

float func_872(bool bParam0)
{
	float fVar0;
	switch (bParam0)
	{
		case 64:
			fVar0 = 100f;
			break;
		case 37:
			fVar0 = 100f;
			break;
		case 199:
			fVar0 = 20f;
			break;
		default:
			if (__LIB_1__::func_923())
			{
				switch (__LIB_0__::func_12())
				{
					case 92:
						fVar0 = 16f;
						break;
					case 76:
						fVar0 = 16f;
						break;
					case 26:
						fVar0 = 16f;
						break;
					case 82:
						fVar0 = 16f;
						break;
					default:
						fVar0 = 25f;
						break;
				}
			}
			else
			{
				fVar0 = 50f;
			}
			break;
	}
	return fVar0;
}

void func_873(int iParam0)
{
	if (__LIB_2__::func_824(iParam0))
	{
		switch (Global_1415419.f_19[iParam0 /*12*/].f_5)
		{
			case 1:
				__LIB_2__::func_115(0, 1, 0, 0, (Global_1415419.f_19[iParam0 /*12*/].f_7 / 4), 0, 0, 1);
				__LIB_2__::func_115(1, 1, 0, 0, (Global_1415419.f_19[iParam0 /*12*/].f_7 / 4), 0, 0, 1);
				break;
			case 37:
				__LIB_2__::func_115(60, 1, 0, 0, (Global_1415419.f_19[iParam0 /*12*/].f_7 / 4), 0, 0, 1);
				break;
		}
	}
}

bool func_874(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (__LIB_1__::func_996(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = __LIB_1__::func_351(uParam2);
		if (__LIB_2__::func_826(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > __LIB_1__::func_352(uParam2)
				{
					__LIB_1__::func_350(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_875(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = __LIB_1__::func_353(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (__LIB_2__::func_832(uParam2, iParam1))
			{
				__LIB_1__::func_350(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_876(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	if (uParam2->f_12 < IntToFloat(__LIB_1__::func_354(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (__LIB_2__::func_832(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					__LIB_1__::func_350(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_877(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = __LIB_1__::func_355(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					__LIB_1__::func_350(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					__LIB_1__::func_350(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (__LIB_1__::func_997(iParam1, vVar0, vVar4))
					{
						__LIB_1__::func_350(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					__LIB_1__::func_350(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (__LIB_1__::func_997(iParam1, vVar0, vVar7))
					{
						__LIB_1__::func_350(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_878(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (__LIB_2__::func_839(iParam0, uParam1, 1))
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
					if (!__LIB_1__::func_364(uParam1, iParam0))
					{
						if (__LIB_0__::func_94(iVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_879(var uParam0)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<4> Var4;
	if (Global_1935630.f_12)
	{
		return false;
	}
	if (__LIB_0__::func_296(0, 0, 1))
	{
		if (__LIB_0__::func_64(0) == 4)
		{
			return true;
		}
	}
	if (uParam0->f_500)
	{
		return true;
	}
	if (Global_1415419.f_9757 == -310375866)
	{
		return true;
	}
	if (__LIB_0__::func_1(uParam0->f_503, 2))
	{
		return true;
	}
	if (__LIB_1__::func_923())
	{
		fVar2 = (150f * 150f);
		fVar3 = (40f * 40f);
	}
	else
	{
		fVar2 = (150f * 150f);
		if (*uParam0 == 34)
		{
			fVar3 = 900f;
		}
		else
		{
			fVar3 = (75f * 75f);
		}
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_19)
	{
		if (uParam0->f_20[iVar1 /*14*/].f_2 != 0)
		{
			if (__LIB_0__::func_86(uParam0->f_20[iVar1 /*14*/].f_5))
			{
				if (uParam0->f_20[iVar1 /*14*/].f_10 && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
				{
					Var4 = { 0f, 0f, 0f };
					Var4.f_3 = { 0f, 0f, 0f };
					Var4.f_6 = { 0f, 0f, 0f };
					Var4.f_9 = { 0f, 0f, 0f };
					ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_3.f_1, uParam0->f_20[iVar1 /*14*/].f_1, &Var4, true, uParam0->f_3.f_9[0], 2);
					uParam0->f_20[iVar1 /*14*/].f_5 = { Var4 };
					uParam0->f_20[iVar1 /*14*/].f_8 = Var4.f_3.f_2;
				}
			}
			fVar0 = BUILTIN::VDIST2(Global_36, uParam0->f_20[iVar1 /*14*/].f_5);
			if (fVar0 < fVar2)
			{
				if (fVar0 < fVar3)
				{
					return false;
				}
				if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(uParam0->f_20[iVar1 /*14*/].f_2, uParam0->f_20[iVar1 /*14*/].f_5, true))
				{
					return false;
				}
			}
		}
		iVar1++;
	}
	return true;
}

void func_880(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (iParam3 == 0)
	{
		iParam3 = Global_1415419.f_19[iParam0 /*12*/].f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if (Global_1415419.f_19[iVar0 /*12*/].f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (__LIB_0__::func_23() > Global_32074.f_2697.f_6[iVar0 /*6*/].f_5)
					{
						Global_32074.f_2697.f_6[iVar0 /*6*/].f_5 = __LIB_0__::func_23();
					}
					__LIB_2__::func_670(&(Global_32074.f_2697.f_6[iVar0 /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					__LIB_0__::func_8(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_881(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_23() > Global_32074.f_2697.f_6[iParam0 /*6*/].f_5)
	{
		Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = __LIB_0__::func_23();
	}
	__LIB_2__::func_670(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 0, 1, 0, 0, 0, 0);
	if (bParam1)
	{
		if (iParam0 <= 74)
		{
			if (Global_1415419.f_7 < MISC::GET_GAME_TIMER())
			{
				Global_1415419.f_7 = MISC::GET_GAME_TIMER();
			}
			Global_1415419.f_7 = (Global_1415419.f_7 + 50000);
		}
		else
		{
			if (Global_1415419.f_8 < MISC::GET_GAME_TIMER())
			{
				Global_1415419.f_8 = MISC::GET_GAME_TIMER();
			}
			Global_1415419.f_8 = (Global_1415419.f_8 + 50000);
		}
	}
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_3++;
	Global_32074.f_2697.f_3++;
}

bool func_882(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (__LIB_2__::func_138(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = __LIB_1__::func_351(uParam1);
			if (__LIB_2__::func_826(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = __LIB_1__::func_352(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						__LIB_1__::func_350(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							__LIB_1__::func_350(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

int func_883(var uParam0)
{
	struct<4> Var0;
	int iVar12;
	int iVar13;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_3.f_1))
		{
			return 0;
		}
	}
	iVar12 = 0;
	while (iVar12 < uParam0->f_19)
	{
		if (uParam0->f_20[iVar12 /*14*/].f_2 != 0)
		{
			Var0 = { 0f, 0f, 0f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 0f, 0f, 0f };
			Var0.f_9 = { 0f, 0f, 0f };
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar12 /*14*/]))
			{
				if (uParam0->f_20[iVar12 /*14*/].f_10 && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
				{
					ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_3.f_1, uParam0->f_20[iVar12 /*14*/].f_1, &Var0, false, 0, 2);
					uParam0->f_20[iVar12 /*14*/].f_5 = { Var0 };
					uParam0->f_20[iVar12 /*14*/].f_8 = Var0.f_3.f_2;
				}
				if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_20[iVar12 /*14*/].f_4))
				{
					uParam0->f_20[iVar12 /*14*/] = PED::_0xEAF682A14F8E5F53(uParam0->f_20[iVar12 /*14*/].f_4, uParam0->f_20[iVar12 /*14*/].f_5, uParam0->f_20[iVar12 /*14*/].f_8, 1, 1, 0, 0);
				}
				else
				{
					uParam0->f_20[iVar12 /*14*/] = __LIB_1__::func_545(uParam0->f_20[iVar12 /*14*/].f_2, uParam0->f_20[iVar12 /*14*/].f_5, uParam0->f_20[iVar12 /*14*/].f_8, 1, 1, 0, 1, uParam0->f_20[iVar12 /*14*/].f_11, uParam0->f_20[iVar12 /*14*/].f_9, 0, 0, 0, 0);
				}
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 259, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 297, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 458, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 130, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 453, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 230, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 186, true);
				if (PED::IS_PED_HUMAN(uParam0->f_20[iVar12 /*14*/]))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 146, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 307, true);
				}
				if (!PED::IS_PED_HUMAN(uParam0->f_20[iVar12 /*14*/]))
				{
					if (!__LIB_1__::func_356(uParam0->f_20[iVar12 /*14*/]))
					{
						iVar13 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
						if (iVar12 < 3)
						{
							if (iVar13 <= 6)
							{
								PED::_SET_PED_QUALITY(uParam0->f_20[iVar12 /*14*/], 1);
							}
							else
							{
								PED::_SET_PED_QUALITY(uParam0->f_20[iVar12 /*14*/], 2);
							}
						}
						else if (iVar13 <= 8)
						{
							PED::_SET_PED_QUALITY(uParam0->f_20[iVar12 /*14*/], 1);
						}
						else
						{
							PED::_SET_PED_QUALITY(uParam0->f_20[iVar12 /*14*/], 2);
						}
					}
				}
				if (uParam0->f_20[iVar12 /*14*/].f_12)
				{
					PED::_SET_PED_SCALE(uParam0->f_20[iVar12 /*14*/], 1f);
				}
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_20[iVar12 /*14*/], true);
				return 0;
			}
		}
		iVar12++;
	}
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 < uParam0->f_19)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar12 /*14*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_20[iVar12 /*14*/], true);
			if (uParam0->f_500)
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 171, true);
			}
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_20[iVar12 /*14*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_20[iVar12 /*14*/], true, false);
			}
			else if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_20[iVar12 /*14*/], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_20[iVar12 /*14*/], true, true);
			}
		}
		iVar12++;
	}
	return 1;
}

int func_884(var uParam0)
{
	struct<5> Var0;
	Var0 = Global_1415419.f_1;
	Var0.f_2 = 0;
	Var0.f_3 = __LIB_2__::func_841(*uParam0);
	if (Global_1415419.f_9757 != -1)
	{
		Var0.f_4 = Global_1415419.f_9757;
		if (__LIB_2__::func_856(uParam0, &Var0))
		{
			return 1;
		}
		else
		{
			Var0.f_4 = joaat("DEFAULT");
			__LIB_2__::func_856(uParam0, &Var0);
			return 1;
		}
	}
	else
	{
		Var0.f_4 = joaat("DEFAULT");
	}
	__LIB_2__::func_856(uParam0, &Var0);
	return 1;
}

int func_885(var uParam0, var uParam1)
{
	__LIB_2__::func_858(uParam0, 1, 0, 0);
	return 1;
}

bool func_886(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	bool bVar0;
	int iVar1[3];
	var uVar5;
	float fVar7;
	if (fParam3 == -1f)
	{
		bVar0 = BUILTIN::VDIST2(Global_36, vParam0);
	}
	else
	{
		bVar0 = fParam3;
	}
	if (bVar0 > bParam6)
	{
		return false;
	}
	if (bVar0 < bParam7)
	{
		return false;
	}
	if (!bParam5)
	{
		if (bParam8 != 34)
		{
			uVar5 = 1;
			if (!bParam4)
			{
				iVar1[0] = 4;
				iVar1[1] = 16384;
			}
			else
			{
				iVar1[0] = 4;
				iVar1[1] = 16384;
				iVar1[2] = 8;
			}
			if (VOLUME::_0x870E9981ED27C815(vParam0, &uVar5, &iVar1, 0))
			{
				return false;
			}
		}
		if (__LIB_1__::func_923())
		{
			if (bParam4)
			{
				fVar7 = 3f;
			}
			else
			{
				fVar7 = 60f;
			}
		}
		else if (((bParam8 == 15 || bParam8 == 7) || bParam8 == 28) || bParam8 == 34)
		{
			fVar7 = 3f;
		}
		else
		{
			fVar7 = 100f;
		}
		if (VOLUME::_0x769BB7626B8CDB06(vParam0, fVar7, 0, 8, 0))
		{
			return false;
		}
		if (__LIB_2__::func_863(vParam0, fVar7))
		{
			return false;
		}
		if (__LIB_2__::func_864(vParam0))
		{
			return false;
		}
	}
	return true;
}

void func_887(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_1 = 0;
		__LIB_1__::func_397(uParam0, 1);
		__LIB_1__::func_404(uParam0, 1);
		__LIB_1__::func_406(uParam0, 1);
		__LIB_1__::func_405(uParam0, 1);
		__LIB_1__::func_407(uParam0, 1);
		__LIB_1__::func_392(uParam0, 1);
		__LIB_2__::func_865(uParam0, 1);
	}
	else
	{
		uParam0->f_1 = -1;
		__LIB_1__::func_397(uParam0, 0);
		__LIB_1__::func_404(uParam0, 0);
		__LIB_1__::func_406(uParam0, 0);
		__LIB_1__::func_405(uParam0, 0);
		__LIB_1__::func_407(uParam0, 0);
		__LIB_1__::func_392(uParam0, 0);
		__LIB_2__::func_865(uParam0, 0);
	}
}

bool func_888(var uParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	if (Global_1935630.f_12)
	{
		return true;
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam0->f_18)
		{
			fVar0 = 500f;
		}
		else
		{
			fVar0 = __LIB_2__::func_870(*uParam0);
		}
		fVar0 = (fVar0 * fVar0);
		if (uParam0->f_464 != 7)
		{
			fVar1 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), uParam0->f_483);
			if (fVar1 < fVar0)
			{
				return false;
			}
		}
		iVar2 = 0;
		while (iVar2 < uParam0->f_19)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20[iVar2 /*14*/]))
			{
				fVar3 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_20[iVar2 /*14*/], false, false));
				if (fVar3 < fVar0)
				{
					return false;
				}
			}
			iVar2++;
		}
		return true;
	}
	return false;
}

bool func_889(var uParam0, float fParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	if ((MISC::GET_FRAME_COUNT() % 8) == 0)
	{
		fParam2 = __LIB_2__::func_859(fParam2);
		fParam2 = (fParam2 * fParam2);
		iVar0 = 0;
		while (iVar0 < uParam0->f_19)
		{
			if (iVar0 >= iParam3)
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
				{
					if (!PED::_0x5102307CE88798EB(uParam0->f_20[iVar0 /*14*/]))
					{
						PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_20[iVar0 /*14*/]);
					}
					if (!bParam5 || ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_20[iVar0 /*14*/], iParam4))
					{
						if ((__LIB_0__::func_232(Global_35, uParam0->f_20[iVar0 /*14*/], 1) < fParam2 && PED::_0x5102307CE88798EB(uParam0->f_20[iVar0 /*14*/])) && PED::IS_TRACKED_PED_VISIBLE(uParam0->f_20[iVar0 /*14*/]))
						{
							if (!__LIB_0__::func_75(&(uParam0->f_490)))
							{
								__LIB_1__::func_283(&(uParam0->f_490), 0);
							}
							if (__LIB_0__::func_33(&(uParam0->f_490)))
							{
								__LIB_2__::func_112(&(uParam0->f_490));
							}
							if (__LIB_1__::func_285(&(uParam0->f_490), fParam1))
							{
								return true;
							}
							else
							{
								return false;
							}
						}
					}
				}
				iVar0++;
			}
		}
		if (__LIB_0__::func_75(&(uParam0->f_490)) && !__LIB_0__::func_33(&(uParam0->f_490)))
		{
			__LIB_2__::func_113(&(uParam0->f_490));
		}
	}
	return false;
}

void func_890(int iParam0, vector3 vParam1, bool bParam4)
{
	if (__LIB_0__::func_23() > Global_32074.f_2697.f_6[iParam0 /*6*/].f_5)
	{
		Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = __LIB_0__::func_23();
	}
	__LIB_2__::func_670(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 0, Global_1415419.f_19[iParam0 /*12*/].f_7, 0, 0, 0, 0);
	if (bParam4)
	{
		if (iParam0 <= 74)
		{
			if (Global_1415419.f_7 < MISC::GET_GAME_TIMER())
			{
				Global_1415419.f_7 = MISC::GET_GAME_TIMER();
			}
			Global_1415419.f_7 = (Global_1415419.f_7 + 120000);
		}
		else
		{
			if (Global_1415419.f_8 < MISC::GET_GAME_TIMER())
			{
				Global_1415419.f_8 = MISC::GET_GAME_TIMER();
			}
			Global_1415419.f_8 = (Global_1415419.f_8 + 120000);
		}
	}
	__LIB_2__::func_880(iParam0, (Global_1415419.f_19[iParam0 /*12*/].f_7 / 2), 0, 0);
	__LIB_2__::func_873(iParam0);
	__LIB_2__::func_866(iParam0, vParam1);
	Global_32074.f_2697.f_6[iParam0 /*6*/]++;
	Global_32074.f_2697.f_2++;
}

void func_891(int iParam0, vector3 vParam1, int iParam4)
{
	if (__LIB_0__::func_23() > Global_32074.f_2697.f_6[iParam0 /*6*/].f_5)
	{
		Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = __LIB_0__::func_23();
	}
	__LIB_2__::func_670(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 0, 1, 0, 0, 0, 0);
	__LIB_2__::func_880(iParam0, 1, 0, 0);
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_2++;
	Global_32074.f_2697.f_1++;
	if (iParam4 != -1 && iParam4 < 4)
	{
		Global_1415419.f_9721[iParam4 /*8*/].f_4 = { vParam1 };
	}
}

bool func_892(var uParam0, float fParam1, float fParam2, int iParam3, float fParam4, float fParam5)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	if (__LIB_0__::func_1(uParam0->f_503, 1))
	{
		if (Global_1415419.f_9721[uParam0->f_1 /*8*/].f_7)
		{
			Global_1415419.f_9721[uParam0->f_1 /*8*/].f_7 = 0;
			return true;
		}
		return false;
	}
	if ((MISC::GET_FRAME_COUNT() % 8) == 0)
	{
		if (fParam4 > fParam2)
		{
			fVar1 = fParam2;
		}
		else
		{
			fVar1 = fParam4;
		}
		if (__LIB_0__::func_71(Global_35))
		{
			iVar2 = __LIB_2__::func_825(Global_35);
			if (PED::_0xF60165E1D2C5370B(iVar2, &fVar3, &fVar4))
			{
				if (fVar3 >= 1.501f || fVar4 >= 1.501f)
				{
					fVar1 = (fVar1 * 1.3f);
					fParam2 = (fParam2 * 1.3f);
				}
			}
		}
		else
		{
			fVar5 = 1f;
			fVar6 = 1f;
			PED::_0xF60165E1D2C5370B(Global_35, &fVar5, &fVar6);
			if (fVar5 <= 2f && fVar6 <= 2f)
			{
				fVar1 = (fVar1 * 0.7f);
				fParam2 = (fParam2 * 0.7f);
			}
		}
		fVar1 = (fVar1 * fVar1);
		fParam2 = __LIB_2__::func_859(fParam2);
		fVar7 = __LIB_0__::func_636(Global_36, uParam0->f_483);
		if (fVar7 < uParam0->f_502)
		{
			uParam0->f_502 = fVar7;
		}
		else if ((fVar7 - uParam0->f_502) > fParam5)
		{
			return true;
		}
		iVar0 = 0;
		while (iVar0 < uParam0->f_19)
		{
			if (iVar0 >= iParam3)
			{
				return false;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
			{
				if (!PED::_0x5102307CE88798EB(uParam0->f_20[iVar0 /*14*/]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_20[iVar0 /*14*/]);
				}
				fVar8 = __LIB_0__::func_232(Global_35, uParam0->f_20[iVar0 /*14*/], 1);
				if (fVar8 < fVar1)
				{
					return true;
				}
				if (fVar8 < (fParam2 * fParam2))
				{
					if (PED::_0x5102307CE88798EB(uParam0->f_20[iVar0 /*14*/]) && PED::IS_TRACKED_PED_VISIBLE(uParam0->f_20[iVar0 /*14*/]))
					{
						if (!__LIB_0__::func_75(&(uParam0->f_490)))
						{
							__LIB_1__::func_148(&(uParam0->f_490));
						}
						if (__LIB_1__::func_313(&(uParam0->f_490), fParam1))
						{
							__LIB_0__::func_37(&(uParam0->f_490));
							return true;
						}
						return false;
					}
				}
			}
			iVar0++;
		}
		if (__LIB_0__::func_75(&(uParam0->f_490)))
		{
			__LIB_0__::func_37(&(uParam0->f_490));
		}
	}
	return false;
}

void func_893(var uParam0)
{
	if (!uParam0->f_469[4])
	{
		__LIB_2__::func_881(*uParam0, 1);
		uParam0->f_469[4] = 1;
	}
}

bool func_894(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(__LIB_0__::func_162(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_895(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_32)
			{
				return false;
			}
			if (!__LIB_2__::func_869(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (__LIB_1__::func_348(iParam0, iVar2) <= __LIB_1__::func_349(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_896(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (__LIB_2__::func_869(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > __LIB_1__::func_352(uParam1)
		{
			fVar3 = __LIB_1__::func_351(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_897(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!__LIB_2__::func_869(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = __LIB_1__::func_998(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (__LIB_1__::func_356(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						uParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (__LIB_2__::func_836(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (__LIB_2__::func_837(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (__LIB_2__::func_838(uParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_898(bool bParam0, int iParam1, bool bParam2, bool bParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	float fVar6;
	iVar1 = -1;
	fVar2 = 1E+09f;
	if ((Global_1415419.f_19[bParam0 /*12*/].f_8 != -1 && Global_1415419.f_19[bParam0 /*12*/].f_9 < 960) && Global_1415419.f_19[bParam0 /*12*/].f_9 >= Global_1415419.f_19[bParam0 /*12*/].f_8)
	{
		bVar3 = __LIB_2__::func_871(bParam0);
		bVar3 = (bVar3 * bVar3);
		bVar4 = __LIB_2__::func_872(bParam0);
		bVar4 = (bVar4 * bVar4);
		iVar0 = Global_1415419.f_19[bParam0 /*12*/].f_8;
		while (iVar0 <= Global_1415419.f_19[bParam0 /*12*/].f_9)
		{
			*iParam1++;
			if (!__LIB_2__::func_852(bParam0, Global_1415419.f_2996[iVar0 /*7*/]))
			{
			}
			else
			{
				fVar6 = BUILTIN::VDIST2(Global_36, Global_1415419.f_2996[iVar0 /*7*/]);
				if (bParam2 && bParam0 != 34)
				{
					iVar5 = __LIB_2__::func_431(Global_35, Global_1415419.f_2996[iVar0 /*7*/], 1060437492 /* Float: 0.707f */);
					if (iVar5 == 1)
					{
					}
					else if (fVar6 < fVar2)
					{
						if (__LIB_2__::func_886(Global_1415419.f_2996[iVar0 /*7*/], fVar6, (bParam0 <= 33 || bParam0 == 72), fParam4, bVar3, bVar4, bParam0))
						{
							iVar1 = iVar0;
							fVar2 = fVar6;
							if (bParam3)
							{
							}
							else
							{
								iVar0++;
							}
							return iVar1;
						}
					}
				}
			}
		}
	}
}

void func_899(var uParam0, bool bParam1, int iParam2)
{
	__LIB_2__::func_137(iParam2);
	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630.f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639.f_11)
		{
			return;
		}
		if (Global_1225639.f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		uParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		uParam0->f_13 = __LIB_1__::func_347(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							__LIB_0__::func_7(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (__LIB_1__::func_995(1))
						{
							__LIB_0__::func_7(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!__LIB_1__::func_995(1) || *uParam0 & 8192 != 0))
				{
					__LIB_0__::func_8(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (__LIB_2__::func_868(uParam0))
			{
				uParam0->f_15 = __LIB_0__::func_485();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((__LIB_0__::func_485() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	__LIB_2__::func_835(uParam0);
}

int func_900(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1[6];
	int iVar8;
	iVar0 = joaat("A_M_M_HTLROUGHTRAVELLERS_01");
	if (bParam6)
	{
		switch (iParam0)
		{
			case 0:
			case 2:
				iVar1[iVar8] = joaat("A_M_M_BYNROUGHTRAVELLERS_01");
				iVar8++;
				break;
			case 1:
				iVar1[iVar8] = joaat("A_M_M_BIVROUGHTRAVELLERS_01");
				iVar8++;
				break;
			case 3:
			case 4:
			case 9:
			case 12:
				iVar1[iVar8] = joaat("A_M_M_HTLROUGHTRAVELLERS_01");
				iVar8++;
				break;
			case 6:
			case 7:
				iVar1[iVar8] = joaat("A_M_M_GRIROUGHTRAVELLERS_01");
				iVar8++;
				break;
			case 10:
				iVar1[iVar8] = joaat("A_M_M_RKRROUGHTRAVELLERS_01");
				iVar8++;
				break;
			case 11:
				iVar1[iVar8] = joaat("A_M_M_SCLROUGHTRAVELLERS_01");
				iVar8++;
				break;
		}
	}
	switch (iParam0)
	{
		case 1:
		case 6:
		case 7:
		case 12:
			if (bParam1)
			{
				iVar1[iVar8] = joaat("A_M_M_FARMTRAVELERS_COOL_01");
				iVar8++;
			}
			if (bParam2)
			{
				iVar1[iVar8] = joaat("A_M_M_HUNTERTRAVELERS_COOL_01");
				iVar8++;
			}
			if (bParam3)
			{
				iVar1[iVar8] = joaat("A_M_M_FAMILYTRAVELERS_COOL_01");
				iVar8++;
			}
			if (bParam4)
			{
				iVar1[iVar8] = joaat("A_M_M_RANCHERTRAVELERS_COOL_01");
				iVar8++;
			}
			if (bParam5)
			{
				iVar1[iVar8] = joaat("A_M_M_DELIVERYTRAVELERS_COOL_01");
				iVar8++;
			}
			break;
		default:
			if (bParam1)
			{
				iVar1[iVar8] = joaat("A_M_M_FARMTRAVELERS_WARM_01");
				iVar8++;
			}
			if (bParam2)
			{
				iVar1[iVar8] = joaat("A_M_M_HUNTERTRAVELERS_WARM_01");
				iVar8++;
			}
			if (bParam3)
			{
				iVar1[iVar8] = joaat("A_M_M_FAMILYTRAVELERS_WARM_01");
				iVar8++;
			}
			if (bParam4)
			{
				iVar1[iVar8] = joaat("A_M_M_RANCHERTRAVELERS_WARM_01");
				iVar8++;
			}
			if (bParam5)
			{
				iVar1[iVar8] = joaat("A_M_M_DELIVERYTRAVELERS_WARM_01");
				iVar8++;
			}
			break;
	}
	if (iVar8 > 0)
	{
		iVar0 = iVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8)];
	}
	return iVar0;
}

bool func_901(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)) == iParam1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_902(var uParam0, int iParam1, char* sParam2, int iParam3, vector3 vParam4, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, var uParam12, var uParam13)
{
	uParam0->f_20[iParam1 /*14*/].f_1 = sParam2;
	uParam0->f_20[iParam1 /*14*/].f_2 = iParam3;
	uParam0->f_20[iParam1 /*14*/].f_5 = { vParam4 };
	uParam0->f_20[iParam1 /*14*/].f_8 = iParam7;
	uParam0->f_20[iParam1 /*14*/].f_9 = iParam8;
	uParam0->f_20[iParam1 /*14*/].f_10 = iParam9;
	uParam0->f_20[iParam1 /*14*/].f_11 = iParam10;
	uParam0->f_20[iParam1 /*14*/].f_12 = iParam11;
	uParam0->f_20[iParam1 /*14*/].f_3 = uParam12;
	uParam0->f_20[iParam1 /*14*/].f_13 = uParam13;
	uParam0->f_19++;
}

void func_903(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_8(&(uParam0->f_1), 1024);
	}
	else
	{
		__LIB_0__::func_7(&(uParam0->f_1), 1024);
	}
}

bool func_904(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_2__::func_899(uParam2, 1, iVar0);
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
			if (__LIB_2__::func_895(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_882(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_874(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_896(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_897(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_905(var uParam0, int iParam1, char* sParam2, int iParam3, vector3 vParam4, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	uParam0->f_20[iParam1 /*14*/].f_1 = sParam2;
	uParam0->f_20[iParam1 /*14*/].f_2 = iParam3;
	uParam0->f_20[iParam1 /*14*/].f_5 = { vParam4 };
	uParam0->f_20[iParam1 /*14*/].f_8 = iParam7;
	uParam0->f_20[iParam1 /*14*/].f_9 = iParam8;
	uParam0->f_20[iParam1 /*14*/].f_10 = iParam9;
	uParam0->f_20[iParam1 /*14*/].f_11 = iParam10;
	uParam0->f_20[iParam1 /*14*/].f_12 = iParam11;
	uParam0->f_20[iParam1 /*14*/].f_3 = iParam12;
	uParam0->f_20[iParam1 /*14*/].f_13 = iParam13;
	uParam0->f_19++;
}

void func_906(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

int func_907(var uParam0, vector3 vParam1)
{
	int iVar0;
	iVar0 = PERSISTENCE::_0xBA2C49EA6A8D24FF(vParam1, 3f, 0, 1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (__LIB_1__::func_992(iVar0, vParam1, 1) <= 1f)
		{
			__LIB_2__::func_866(*uParam0, uParam0->f_483);
			uParam0->f_499 = 1;
			return 0;
		}
	}
	PED::_0x9851DE7AEC10B4E1(vParam1, 2.5f, 1, 0);
	return 1;
}

bool func_908(var uParam0, var uParam1, bool bParam2)
{
	if ((MISC::GET_FRAME_COUNT() % 3) == 0 || bParam2)
	{
		if (__LIB_2__::func_904(uParam0->f_20[uParam0->f_501 /*14*/], 0, uParam1, &(uParam0->f_468), 0, 0))
		{
			return true;
		}
		uParam0->f_501++;
		if (uParam0->f_501 >= uParam0->f_19)
		{
			uParam0->f_501 = 0;
		}
	}
	return false;
}

void func_909(var uParam0)
{
	if (!uParam0->f_469[9])
	{
		__LIB_2__::func_881(*uParam0, 0);
		uParam0->f_469[9] = 1;
	}
}

bool func_910(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
	{
		__LIB_2__::func_857(&(uParam0->f_20[0 /*14*/]), 1, 1);
	}
	return true;
}

int func_911(var uParam0)
{
	if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_ANIMAL_BIG_CAT_EATING"), false))
	{
		return 0;
	}
	return 1;
}

bool func_912(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
	{
		__LIB_2__::func_857(&(uParam0->f_20[0 /*14*/]), 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
	{
		__LIB_2__::func_857(&(uParam0->f_20[1 /*14*/]), 1, 1);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_20[1 /*14*/], 243, true);
	}
	return true;
}

void func_913(var uParam0)
{
	if (!uParam0->f_469[5])
	{
		__LIB_2__::func_881(*uParam0, 1);
		uParam0->f_469[5] = 1;
	}
}

int func_914(var uParam0, var uParam1)
{
	__LIB_2__::func_858(uParam0, 0, 0, 0);
	return 1;
}

void func_915(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, bool bParam8, char* sParam9, float fParam10)
{
	TASK::TASK_START_SCENARIO_AT_POSITION(iParam0, iParam1, vParam2, fParam5, iParam6, bParam7, bParam8, sParam9, fParam10, false);
}

float func_916(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

int func_917(var uParam0)
{
	__LIB_2__::func_887(&uLocal_11, 0);
	__LIB_1__::func_398(&uLocal_11, 1);
	__LIB_1__::func_401(&uLocal_11, 1);
	__LIB_2__::func_828(&uLocal_11, 1);
	__LIB_2__::func_829(&uLocal_11, 1);
	__LIB_1__::func_397(&uLocal_11, 1);
	__LIB_2__::func_830(&uLocal_11, 1);
	return 1;
}

int func_918()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

void func_919(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

int func_920(var uParam0, float fParam1, float fParam2, int iParam3, float fParam4, float fParam5)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	if (__LIB_0__::func_1(uParam0->f_503, 1))
	{
		if (Global_1415419.f_9721[uParam0->f_1 /*8*/].f_7)
		{
			Global_1415419.f_9721[uParam0->f_1 /*8*/].f_7 = 0;
			return 1;
		}
		return 0;
	}
	if ((MISC::GET_FRAME_COUNT() % 8) == 0)
	{
		if (fParam4 > fParam2)
		{
			fVar1 = fParam2;
		}
		else
		{
			fVar1 = fParam4;
		}
		if (__LIB_0__::func_71(Global_35))
		{
			iVar2 = __LIB_2__::func_825(Global_35);
			if (PED::_0xF60165E1D2C5370B(iVar2, &fVar3, &fVar4))
			{
				if (fVar3 >= 1.501f || fVar4 >= 1.501f)
				{
					fVar1 = (fVar1 * 1.3f);
					fParam2 = (fParam2 * 1.3f);
				}
			}
		}
		else
		{
			fVar5 = 1f;
			fVar6 = 1f;
			PED::_0xF60165E1D2C5370B(Global_35, &fVar5, &fVar6);
			if (fVar5 <= 2f && fVar6 <= 2f)
			{
				fVar1 = (fVar1 * 0.7f);
				fParam2 = (fParam2 * 0.7f);
			}
		}
		fVar1 = (fVar1 * fVar1);
		fParam2 = __LIB_2__::func_859(fParam2);
		fVar7 = __LIB_0__::func_636(Global_36, uParam0->f_483);
		if (fVar7 < uParam0->f_502)
		{
			uParam0->f_502 = fVar7;
		}
		else if ((fVar7 - uParam0->f_502) > fParam5)
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < uParam0->f_19)
		{
			if (iVar0 >= iParam3)
			{
				return 0;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
			{
				if (!PED::_0x5102307CE88798EB(uParam0->f_20[iVar0 /*14*/]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_20[iVar0 /*14*/]);
				}
				fVar8 = __LIB_0__::func_232(Global_35, uParam0->f_20[iVar0 /*14*/], 1);
				if (fVar8 < fVar1)
				{
					return 1;
				}
				if (fVar8 < (fParam2 * fParam2))
				{
					if (PED::_0x5102307CE88798EB(uParam0->f_20[iVar0 /*14*/]) && PED::IS_TRACKED_PED_VISIBLE(uParam0->f_20[iVar0 /*14*/]))
					{
						if (!__LIB_0__::func_75(&(uParam0->f_490)))
						{
							__LIB_1__::func_148(&(uParam0->f_490));
						}
						if (__LIB_1__::func_313(&(uParam0->f_490), fParam1))
						{
							__LIB_0__::func_37(&(uParam0->f_490));
							return 1;
						}
						return 0;
					}
				}
			}
			iVar0++;
		}
		if (__LIB_0__::func_75(&(uParam0->f_490)))
		{
			__LIB_0__::func_37(&(uParam0->f_490));
		}
	}
	return 0;
}

int func_921(int iParam0)
{
	int iVar0;
	iVar0 = joaat("A_M_M_VALLABORER_01");
	switch (iParam0)
	{
		case 9:
			iVar0 = joaat("A_M_M_VALLABORER_01");
			break;
		case 11:
			iVar0 = joaat("A_M_M_RHDUPPERCLASS_01");
			break;
		case 1:
			iVar0 = joaat("A_M_M_STRTOWNFOLK_01");
			break;
		case 0:
			iVar0 = joaat("A_M_M_MIDDLESDTOWNFOLK_01");
			break;
		case 15:
			iVar0 = joaat("A_M_M_ARMTOWNFOLK_01");
			break;
		case 10:
			switch (__LIB_0__::func_12())
			{
				case 92:
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
					{
						case 0:
							iVar0 = joaat("A_M_M_VHTTOWNFOLK_01");
							break;
						case 1:
							iVar0 = joaat("A_M_M_VHTTOWNFOLK_01");
							break;
					}
					break;
				case 78:
					iVar0 = joaat("A_M_M_ASBTOWNFOLK_01");
					break;
				case 82:
					iVar0 = joaat("A_M_M_BTCHILLBILLY_01");
					break;
			}
			break;
		case 13:
			iVar0 = joaat("A_M_M_TUMTOWNFOLK_01");
			break;
		case 6:
			iVar0 = joaat("A_M_O_WAPTOWNFOLK_01");
			break;
	}
	return iVar0;
}

int func_922(var uParam0, var uParam1)
{
	int iVar0;
	__LIB_2__::func_858(uParam0, 1, 0, 0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_19)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20[iVar0 /*14*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
			{
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), uParam0->f_20[iVar0 /*14*/], 26, 0, 0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_923(var uParam0)
{
	__LIB_2__::func_887(&uLocal_10, 0);
	__LIB_1__::func_398(&uLocal_10, 1);
	__LIB_1__::func_401(&uLocal_10, 1);
	__LIB_2__::func_828(&uLocal_10, 1);
	__LIB_2__::func_829(&uLocal_10, 1);
	__LIB_2__::func_830(&uLocal_10, 1);
	__LIB_2__::func_906(&uLocal_10, 85);
	return 1;
}

void func_924(var uParam0)
{
	if (!uParam0->f_469[7])
	{
		__LIB_2__::func_881(*uParam0, 1);
		uParam0->f_469[7] = 1;
	}
}

void func_925(var uParam0)
{
	if (!uParam0->f_469[3])
	{
		__LIB_2__::func_881(*uParam0, 0);
		uParam0->f_469[3] = 1;
	}
	if (!uParam0->f_469[2])
	{
		__LIB_2__::func_890(*uParam0, uParam0->f_483, 0);
		uParam0->f_469[2] = 1;
	}
}

bool func_926(var uParam0)
{
	PED::_0xF7EA250B9A919E03(-1918659017, uParam0->f_20[0 /*14*/]);
	PED::_0xF7EA250B9A919E03(-1918659017, uParam0->f_20[1 /*14*/]);
	if (!PED::_0x854BC9B1A1CCD034(-1918659017, uParam0->f_20[0 /*14*/]) || !PED::_0x854BC9B1A1CCD034(-1918659017, uParam0->f_20[1 /*14*/]))
	{
		return false;
	}
	return true;
}

void func_927(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
	{
		if (!__LIB_0__::func_163(uParam0->f_20[0 /*14*/], 518218985))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_20[0 /*14*/], Global_35, 3, 256, -1082130432 /* Float: -1f */, -1, 0);
			__LIB_2__::func_857(&(uParam0->f_20[0 /*14*/]), 0, 1);
			PED::SET_PED_KEEP_TASK(uParam0->f_20[0 /*14*/], true);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
	{
		if (!__LIB_0__::func_163(uParam0->f_20[1 /*14*/], 518218985))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_20[1 /*14*/], Global_35, 3, 256, -1082130432 /* Float: -1f */, -1, 0);
			__LIB_2__::func_857(&(uParam0->f_20[1 /*14*/]), 0, 1);
			PED::SET_PED_KEEP_TASK(uParam0->f_20[1 /*14*/], true);
		}
	}
}

void func_928(var uParam0, int iParam1, char* sParam2, int iParam3, vector3 vParam4, float fParam7, int iParam8)
{
	uParam0->f_372[iParam1 /*8*/].f_1 = sParam2;
	uParam0->f_372[iParam1 /*8*/].f_2 = iParam3;
	uParam0->f_372[iParam1 /*8*/].f_3 = { vParam4 };
	uParam0->f_372[iParam1 /*8*/].f_6 = fParam7;
	uParam0->f_372[iParam1 /*8*/].f_7 = iParam8;
	uParam0->f_371++;
}

int func_929(int iParam0)
{
	if (!__LIB_0__::func_29(iParam0))
	{
		return 0;
	}
	return PERSCHAR::_0xA00DF706C60173D1(Global_1895087[iParam0 /*3*/]);
}

void func_930(int iParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 0, iParam1);
	PED::_0x6569F31A01B4C097(iVar0, 1, iParam1);
}

bool func_931(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	return __LIB_0__::func_1(Global_1914319.f_3[iParam0 /*446*/].f_8, iParam1);
}

void func_932(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return;
	}
	__LIB_0__::func_7(&(Global_1914319.f_3[iParam0 /*446*/].f_8), iParam1);
}

void func_933(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return;
	}
	__LIB_0__::func_8(&(Global_1914319.f_3[iParam0 /*446*/].f_8), iParam1);
}

bool func_934(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_29(iParam0))
	{
		return false;
	}
	if ((__LIB_0__::func_117(iParam0, 1) && !__LIB_0__::func_122(iParam0)) && __LIB_0__::func_171(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_117(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!__LIB_2__::func_767(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_935(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;
	if (!__LIB_0__::func_29(iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_30(__LIB_0__::func_118(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		__LIB_1__::func_940(iParam0, 0);
		return 0;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!__LIB_2__::func_767(iParam0, 0))
	{
		if (bParam1)
		{
			if (!__LIB_2__::func_760(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!__LIB_0__::func_86(vVar0))
	{
		PERSCHAR::_0x59C7AD6FEA2AC449(__LIB_0__::func_120(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = PERSCHAR::_0x08FC896D2CB31FCC(__LIB_0__::func_120(iParam0), 0);
	}
	else
	{
		iVar3 = PERSCHAR::_0x0CADC3A977997472(__LIB_0__::func_120(iParam0), 0);
	}
	if (!__LIB_0__::func_86(vVar0))
	{
		PERSCHAR::_0xBB68908CD11AEBDC(__LIB_0__::func_120(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return 1;
	}
	return 0;
}

bool func_936(var uParam0)
{
	PED::_0xF7EA250B9A919E03(-1918659017, uParam0->f_20[0 /*14*/]);
	if (!PED::_0x854BC9B1A1CCD034(-1918659017, uParam0->f_20[0 /*14*/]))
	{
		return false;
	}
	return true;
}

void func_937(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
	{
		if (((uParam0->f_468 == 256 || uParam0->f_468 == 4) || uParam0->f_468 == 2) || uParam0->f_468 == 16)
		{
			if (!__LIB_0__::func_163(uParam0->f_20[0 /*14*/], 518218985))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_20[0 /*14*/], Global_35, 3, 256, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_2__::func_857(&(uParam0->f_20[0 /*14*/]), 0, 1);
			}
		}
		else if (!__LIB_0__::func_163(uParam0->f_20[0 /*14*/], 1139527981))
		{
			PED::_0xA3A9299C4F2ADB98(uParam0->f_20[0 /*14*/]);
			TASK::TASK_ANIMAL_UNALERTED(uParam0->f_20[0 /*14*/], -1, 0, 0, 0);
			__LIB_2__::func_857(&(uParam0->f_20[0 /*14*/]), 0, 1);
		}
	}
}

void func_938(var uParam0)
{
	if (!uParam0->f_469[7])
	{
		__LIB_2__::func_881(*uParam0, 0);
		uParam0->f_469[7] = 1;
	}
}

void func_939(var uParam0)
{
	if (!uParam0->f_469[5])
	{
		__LIB_2__::func_881(*uParam0, 0);
		uParam0->f_469[5] = 1;
	}
}

int func_940(var uParam0, var uParam1, bool bParam2)
{
	if ((MISC::GET_FRAME_COUNT() % 3) == 0 || bParam2)
	{
		if (__LIB_2__::func_904(uParam0->f_20[uParam0->f_501 /*14*/], 0, uParam1, &(uParam0->f_468), 0, 0))
		{
			return 1;
		}
		uParam0->f_501++;
		if (uParam0->f_501 >= uParam0->f_19)
		{
			uParam0->f_501 = 0;
		}
	}
	return 0;
}

void func_941(var uParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iParam1 /*14*/]))
	{
		STREAMING::_0x5288B7F0690F7C1F(uParam0->f_20[iParam1 /*14*/]);
	}
}

void func_942(var uParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iParam1 /*14*/]))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_3.f_1, uParam0->f_20[iParam1 /*14*/].f_1))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_3.f_1, uParam0->f_20[iParam1 /*14*/].f_1, uParam0->f_20[iParam1 /*14*/]);
			PED::FORCE_PED_MOTION_STATE(uParam0->f_20[iParam1 /*14*/], -1299979036, false, 0, false);
			TASK::_TASK_SMART_FLEE_STYLE_COORD(uParam0->f_20[iParam1 /*14*/], uParam0->f_20[iParam1 /*14*/].f_5, 3, 256, -1082130432 /* Float: -1f */, -1, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_20[iParam1 /*14*/], 1f);
			__LIB_2__::func_857(&(uParam0->f_20[iParam1 /*14*/]), 1, 1);
			PED::SET_PED_KEEP_TASK(uParam0->f_20[iParam1 /*14*/], true);
		}
	}
}

void func_943(var uParam0)
{
	if (!uParam0->f_469[6])
	{
		__LIB_2__::func_881(*uParam0, 1);
		uParam0->f_469[6] = 1;
	}
}

var func_944(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, iParam4, iParam5, iParam6, iParam7);
}

void func_945(var uParam0)
{
	if (!uParam0->f_469[6])
	{
		__LIB_2__::func_881(*uParam0, 0);
		uParam0->f_469[6] = 1;
	}
}

void func_946(var uParam0, char* sParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	uParam0->f_453.f_2 = sParam1;
	uParam0->f_453.f_1 = iParam2;
	uParam0->f_453.f_3 = { vParam3 };
	uParam0->f_453.f_6 = iParam6;
	uParam0->f_453.f_7 = iParam7;
	uParam0->f_453.f_8 = iParam8;
	uParam0->f_453.f_9 = iParam9;
	uParam0->f_453.f_10 = iParam10;
}

int func_947(int iParam0)
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 76:
			iVar0 = 6;
			break;
		case 26:
			iVar0 = 478;
			break;
		case 105:
			iVar0 = 77;
			break;
		case 78:
			iVar0 = -1;
			break;
		case 82:
			iVar0 = 666;
			break;
		default:
			break;
	}
	return iVar0;
}

void func_948(var uParam0)
{
	if (!uParam0->f_469[1])
	{
		__LIB_2__::func_881(*uParam0, 1);
		uParam0->f_469[1] = 1;
	}
}

void func_949(var uParam0)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FORCE_MOTION_STATE(0, -1299979036, false);
		TASK::TASK_FLY_AWAY(0, Global_35);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(uParam0->f_20[0 /*14*/], iVar0);
		PED::SET_PED_KEEP_TASK(uParam0->f_20[0 /*14*/], true);
		PED::_0x2208438012482A1A(uParam0->f_20[0 /*14*/], false, false);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

int func_950(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = !ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]);
	bVar1 = !ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]);
	if (uParam0->f_469[4] && !uParam0->f_469[5])
	{
		if (!bVar0 || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0->f_20[1 /*14*/], false, false), 0.5f, true, true))
		{
			ENTITY::DETACH_ENTITY(uParam0->f_20[1 /*14*/], true, true);
			if (bVar1)
			{
				__LIB_1__::func_864(uParam0->f_20[1 /*14*/], 0, 0);
			}
			uParam0->f_469[5] = 1;
		}
	}
	if (!bVar0 && !bVar1)
	{
		return 1;
	}
	if (!bParam1)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_19)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar2 /*14*/]))
			{
				if ((uParam0->f_469[4] && !uParam0->f_469[5]) && __LIB_0__::func_232(uParam0->f_20[iVar2 /*14*/], Global_35, 1) < 22500f)
				{
					return 0;
				}
			}
			iVar2++;
		}
	}
	__LIB_2__::func_858(uParam0, 1, 0, 0);
	return 1;
}

int func_951(var uParam0)
{
	__LIB_2__::func_887(&uLocal_11, 0);
	__LIB_2__::func_828(&uLocal_11, 1);
	__LIB_2__::func_829(&uLocal_11, 1);
	__LIB_2__::func_830(&uLocal_11, 1);
	return 1;
}

void func_952(var uParam0)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FORCE_MOTION_STATE(0, -1299979036, false);
		TASK::TASK_FLY_AWAY(0, Global_35);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(uParam0->f_20[0 /*14*/], iVar0);
		PED::SET_PED_KEEP_TASK(uParam0->f_20[0 /*14*/], true);
		__LIB_2__::func_857(&(uParam0->f_20[0 /*14*/]), 0, 1);
		PED::_0x2208438012482A1A(uParam0->f_20[0 /*14*/], false, false);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

void func_953(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_20[1 /*14*/], 914255117))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_20[1 /*14*/]))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_20[1 /*14*/], true, false);
				ENTITY::DETACH_ENTITY(uParam0->f_20[1 /*14*/], true, true);
			}
			__LIB_1__::func_864(uParam0->f_20[1 /*14*/], 0, 0);
		}
		else
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_20[1 /*14*/], Global_35, 3, 256, -1082130432 /* Float: -1f */, -1, 0);
		}
	}
}

int func_954()
{
	var uVar0;
	var uVar1;
	float fVar2;
	var uVar3;
	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_955(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (fVar0 > fVar1)
		{
			if (ENTITY::GET_ENTITY_HEADING(iParam0) < fVar0 && ENTITY::GET_ENTITY_HEADING(iParam0) > fVar1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (ENTITY::GET_ENTITY_HEADING(iParam0) < fVar0 || ENTITY::GET_ENTITY_HEADING(iParam0) > fVar1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

void func_956(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 128);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 128);
	}
}

bool func_957(var uParam0)
{
	PED::_0xF7EA250B9A919E03(-1918659017, uParam0->f_20[0 /*14*/]);
	if (!PED::_0x854BC9B1A1CCD034(-1918659017, uParam0->f_20[0 /*14*/]))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
	{
		__LIB_2__::func_857(&(uParam0->f_20[0 /*14*/]), 0, 1);
	}
	return true;
}

bool func_958(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!__LIB_0__::func_27(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_959(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = __LIB_1__::func_363(iParam2);
	}
	else
	{
		iVar1 = __LIB_1__::func_362(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = __LIB_1__::func_363(iParam0);
	}
	else
	{
		iVar0 = __LIB_1__::func_362(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

bool func_960(int iParam0)
{
	if (Global_1415419.f_19[iParam0 /*12*/] != 0)
	{
		return true;
	}
	return false;
}

void func_961(var uParam0, var uParam1)
{
	var uVar0[1];
	if (CAM::_0xDD0B7C5AE58F721D(uParam0) && !CAM::_0x927B810E43E99932(uParam0))
	{
		CAM::_0xB8B207C34285E978(uParam0);
		uVar0[0] = uParam1;
		CAM::_0xFEB8646818294C75(uParam0, &uVar0);
	}
}

void func_962(var uParam0)
{
	if (CAM::_0x927B810E43E99932(uParam0))
	{
		CAM::_0x0A5A4F1979ABB40E(uParam0);
	}
	CAM::_0x798BE43C9393632B(uParam0);
}

int func_963(int iParam0)
{
	if (!__LIB_0__::func_29(iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_117(iParam0, 2))
	{
		return 0;
	}
	if (__LIB_0__::func_30(__LIB_0__::func_118(iParam0)))
	{
		return __LIB_1__::func_334(iParam0);
	}
	return PED::_0xE76687023D8C8505(__LIB_2__::func_929(iParam0), 0);
}

int func_964(var uParam0)
{
	__LIB_2__::func_887(&uLocal_9, 0);
	__LIB_1__::func_402(&uLocal_9, 1);
	__LIB_1__::func_398(&uLocal_9, 1);
	__LIB_1__::func_401(&uLocal_9, 1);
	__LIB_2__::func_828(&uLocal_9, 1);
	__LIB_2__::func_829(&uLocal_9, 1);
	__LIB_2__::func_830(&uLocal_9, 1);
	return 1;
}

int func_965(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	if (!__LIB_2__::func_934(iParam0, 1))
	{
		return 0;
	}
	if (__LIB_0__::func_30(__LIB_0__::func_118(iParam0)))
	{
		iVar1 = __LIB_0__::func_120(iParam0);
		if (!PERSCHAR::_0x800DF3FC913355F3(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PERSCHAR::_0xEB98B38CA60742D7(iVar1))
			{
				PERSCHAR::_0x49A8C2CD97815215(iVar1);
			}
		}
		PERSCHAR::_0x6759BEE6762E140B(iVar1);
		iVar0 = PERSCHAR::_0x0CADC3A977997472(iVar1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !__LIB_0__::func_122(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	__LIB_0__::func_123(iParam0, 1);
	__LIB_0__::func_124(iParam0);
	if (bParam3)
	{
		__LIB_0__::func_123(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_966(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (bParam8)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 229, true);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (bParam3 && PED::_GET_PED_CROUCH_MOVEMENT(iParam0))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
		}
		__LIB_1__::func_738(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188, true);
		}
	}
}

void func_967(var uParam0, int iParam1, int iParam2, int iParam3)
{
	__LIB_2__::func_23(uParam0, iParam1, iParam3);
	__LIB_2__::func_20(uParam0, iParam2, iParam3);
}

bool func_968(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_32)
			{
				return false;
			}
			if (!__LIB_2__::func_959(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (__LIB_1__::func_348(iParam0, iVar2) <= __LIB_1__::func_349(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_969(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (__LIB_1__::func_996(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = __LIB_1__::func_351(uParam2);
		if (__LIB_2__::func_958(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > __LIB_1__::func_352(uParam2)
				{
					__LIB_1__::func_350(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_970(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (__LIB_2__::func_959(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > __LIB_1__::func_352(uParam1)
		{
			fVar3 = __LIB_1__::func_351(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_971(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!__LIB_2__::func_959(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = __LIB_1__::func_998(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (__LIB_1__::func_356(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						uParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (__LIB_2__::func_836(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (__LIB_2__::func_837(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (__LIB_2__::func_838(uParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_972(var uParam0)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<4> Var4;
	if (Global_1935630.f_12)
	{
		return false;
	}
	if (__LIB_0__::func_296(0, 0, 1))
	{
		if (__LIB_0__::func_64(0) == 4)
		{
			return true;
		}
	}
	if (uParam0->f_500)
	{
		return true;
	}
	if (Global_1415419.f_9757 == -310375866)
	{
		return true;
	}
	if (__LIB_0__::func_27(uParam0->f_503, 2))
	{
		return true;
	}
	if (__LIB_1__::func_923())
	{
		fVar2 = (150f * 150f);
		fVar3 = (40f * 40f);
	}
	else
	{
		fVar2 = (150f * 150f);
		if (*uParam0 == 34)
		{
			fVar3 = 900f;
		}
		else
		{
			fVar3 = (75f * 75f);
		}
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_19)
	{
		if (uParam0->f_20[iVar1 /*14*/].f_2 != 0)
		{
			if (__LIB_0__::func_86(uParam0->f_20[iVar1 /*14*/].f_5))
			{
				if (uParam0->f_20[iVar1 /*14*/].f_10 && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
				{
					Var4 = { 0f, 0f, 0f };
					Var4.f_3 = { 0f, 0f, 0f };
					Var4.f_6 = { 0f, 0f, 0f };
					Var4.f_9 = { 0f, 0f, 0f };
					ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_3.f_1, uParam0->f_20[iVar1 /*14*/].f_1, &Var4, true, uParam0->f_3.f_9[0], 2);
					uParam0->f_20[iVar1 /*14*/].f_5 = { Var4 };
					uParam0->f_20[iVar1 /*14*/].f_8 = Var4.f_3.f_2;
				}
			}
			fVar0 = BUILTIN::VDIST2(Global_36, uParam0->f_20[iVar1 /*14*/].f_5);
			if (fVar0 < fVar2)
			{
				if (fVar0 < fVar3)
				{
					return false;
				}
				if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(uParam0->f_20[iVar1 /*14*/].f_2, uParam0->f_20[iVar1 /*14*/].f_5, true))
				{
					return false;
				}
			}
		}
		iVar1++;
	}
	return true;
}

bool func_973(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (__LIB_2__::func_138(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = __LIB_1__::func_351(uParam1);
			if (__LIB_2__::func_958(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = __LIB_1__::func_352(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						__LIB_1__::func_350(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							__LIB_1__::func_350(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

void func_974(var uParam0)
{
	if (!uParam0->f_469[2])
	{
		__LIB_2__::func_881(*uParam0, 0);
		uParam0->f_469[2] = 1;
	}
	if (!uParam0->f_469[1])
	{
		__LIB_2__::func_890(*uParam0, uParam0->f_483, 0);
		uParam0->f_469[1] = 1;
	}
}

bool func_975(var uParam0, float fParam1, float fParam2, int iParam3, float fParam4, float fParam5)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	if (__LIB_0__::func_27(uParam0->f_503, 1))
	{
		if (Global_1415419.f_9721[uParam0->f_1 /*8*/].f_7)
		{
			Global_1415419.f_9721[uParam0->f_1 /*8*/].f_7 = 0;
			return true;
		}
		return false;
	}
	if ((MISC::GET_FRAME_COUNT() % 8) == 0)
	{
		if (fParam4 > fParam2)
		{
			fVar1 = fParam2;
		}
		else
		{
			fVar1 = fParam4;
		}
		if (__LIB_0__::func_71(Global_35))
		{
			iVar2 = __LIB_2__::func_825(Global_35);
			if (PED::_0xF60165E1D2C5370B(iVar2, &fVar3, &fVar4))
			{
				if (fVar3 >= 1.501f || fVar4 >= 1.501f)
				{
					fVar1 = (fVar1 * 1.3f);
					fParam2 = (fParam2 * 1.3f);
				}
			}
		}
		else
		{
			fVar5 = 1f;
			fVar6 = 1f;
			PED::_0xF60165E1D2C5370B(Global_35, &fVar5, &fVar6);
			if (fVar5 <= 2f && fVar6 <= 2f)
			{
				fVar1 = (fVar1 * 0.7f);
				fParam2 = (fParam2 * 0.7f);
			}
		}
		fVar1 = (fVar1 * fVar1);
		fParam2 = __LIB_2__::func_859(fParam2);
		fVar7 = __LIB_0__::func_636(Global_36, uParam0->f_483);
		if (fVar7 < uParam0->f_502)
		{
			uParam0->f_502 = fVar7;
		}
		else if ((fVar7 - uParam0->f_502) > fParam5)
		{
			return true;
		}
		iVar0 = 0;
		while (iVar0 < uParam0->f_19)
		{
			if (iVar0 >= iParam3)
			{
				return false;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
			{
				if (!PED::_0x5102307CE88798EB(uParam0->f_20[iVar0 /*14*/]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_20[iVar0 /*14*/]);
				}
				fVar8 = __LIB_0__::func_232(Global_35, uParam0->f_20[iVar0 /*14*/], 1);
				if (fVar8 < fVar1)
				{
					return true;
				}
				if (fVar8 < (fParam2 * fParam2))
				{
					if (PED::_0x5102307CE88798EB(uParam0->f_20[iVar0 /*14*/]) && PED::IS_TRACKED_PED_VISIBLE(uParam0->f_20[iVar0 /*14*/]))
					{
						if (!__LIB_0__::func_75(&(uParam0->f_490)))
						{
							__LIB_1__::func_148(&(uParam0->f_490));
						}
						if (__LIB_1__::func_313(&(uParam0->f_490), fParam1))
						{
							__LIB_0__::func_37(&(uParam0->f_490));
							return true;
						}
						return false;
					}
				}
			}
			iVar0++;
		}
		if (__LIB_0__::func_75(&(uParam0->f_490)))
		{
			__LIB_0__::func_37(&(uParam0->f_490));
		}
	}
	return false;
}

int func_976(var uParam0, var uParam1)
{
	__LIB_2__::func_858(uParam0, 0, 0, 1);
	return 1;
}

float func_977(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0 * Param3) + (Param0.f_1 * Param3.f_1));
}

int func_978(var uParam0)
{
	__LIB_2__::func_887(&uLocal_10, 0);
	__LIB_1__::func_398(&uLocal_10, 1);
	__LIB_1__::func_401(&uLocal_10, 1);
	__LIB_2__::func_828(&uLocal_10, 1);
	__LIB_1__::func_402(&uLocal_10, 1);
	__LIB_2__::func_829(&uLocal_10, 1);
	__LIB_2__::func_830(&uLocal_10, 1);
	return 1;
}

int func_979(var uParam0)
{
	__LIB_2__::func_887(&uLocal_10, 0);
	__LIB_1__::func_398(&uLocal_10, 1);
	__LIB_1__::func_401(&uLocal_10, 1);
	__LIB_2__::func_828(&uLocal_10, 1);
	__LIB_2__::func_829(&uLocal_10, 1);
	__LIB_2__::func_830(&uLocal_10, 1);
	return 1;
}

int func_980(var uParam0)
{
	__LIB_2__::func_887(&uLocal_11, 0);
	__LIB_1__::func_398(&uLocal_11, 1);
	__LIB_1__::func_401(&uLocal_11, 1);
	__LIB_2__::func_828(&uLocal_11, 1);
	__LIB_2__::func_830(&uLocal_11, 1);
	return 1;
}

int func_981(var uParam0)
{
	__LIB_2__::func_887(&uLocal_11, 0);
	__LIB_1__::func_398(&uLocal_11, 1);
	__LIB_1__::func_401(&uLocal_11, 1);
	__LIB_2__::func_828(&uLocal_11, 1);
	__LIB_2__::func_829(&uLocal_11, 1);
	__LIB_2__::func_830(&uLocal_11, 1);
	return 1;
}

void func_982(var uParam0)
{
	if (!uParam0->f_469[1])
	{
		__LIB_2__::func_881(*uParam0, 0);
		uParam0->f_469[1] = 1;
	}
}

bool func_983(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_2__::func_899(uParam2, 1, iVar0);
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
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_973(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_970(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

int func_984(var uParam0)
{
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_13))
	{
		return 0;
	}
	return __LIB_2__::func_907(uParam0, uParam0->f_20[0 /*14*/].f_5);
}

int func_985(var uParam0)
{
	__LIB_2__::func_887(&uLocal_10, 0);
	__LIB_2__::func_828(&uLocal_10, 1);
	__LIB_2__::func_829(&uLocal_10, 1);
	__LIB_2__::func_830(&uLocal_10, 1);
	return 1;
}

bool func_986(int iParam0)
{
	__LIB_0__::func_68(iParam0, 0, 0);
	if (__LIB_0__::func_724(iParam0))
	{
		return !OBJECT::IS_DOOR_CLOSED(iParam0);
	}
	return false;
}

bool func_987(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;
	if (!__LIB_0__::func_29(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_30(__LIB_0__::func_118(iParam0)))
	{
		return true;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		__LIB_1__::func_940(iParam0, 0);
		return false;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!__LIB_2__::func_767(iParam0, 0))
	{
		if (bParam1)
		{
			if (!__LIB_2__::func_760(iParam0))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (!__LIB_0__::func_86(vVar0))
	{
		PERSCHAR::_0x59C7AD6FEA2AC449(__LIB_0__::func_120(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = PERSCHAR::_0x08FC896D2CB31FCC(__LIB_0__::func_120(iParam0), 0);
	}
	else
	{
		iVar3 = PERSCHAR::_0x0CADC3A977997472(__LIB_0__::func_120(iParam0), 0);
	}
	if (!__LIB_0__::func_86(vVar0))
	{
		PERSCHAR::_0xBB68908CD11AEBDC(__LIB_0__::func_120(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return true;
	}
	return false;
}

int func_988(int iParam0)
{
	int iVar0;
	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_41(__LIB_0__::func_23());
	if (__LIB_0__::func_27(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_27(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_27(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_27(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_27(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_27(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_27(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_27(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_27(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_27(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_27(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_27(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_27(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_27(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_27(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_27(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_27(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_989(var uParam0, var uParam1, bool bParam2)
{
	if ((MISC::GET_FRAME_COUNT() % 3) == 0 || bParam2)
	{
		if (__LIB_2__::func_983(uParam0->f_20[uParam0->f_501 /*14*/], 0, uParam1, &(uParam0->f_468), 0, 0))
		{
			return true;
		}
		uParam0->f_501++;
		if (uParam0->f_501 >= uParam0->f_19)
		{
			uParam0->f_501 = 0;
		}
	}
	return false;
}

float func_990(vector3 vParam0)
{
	float fVar0;
	var uVar1;
	vector3 vVar4;
	vector3 vVar7;
	PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam0, &uVar1, &fVar0, 1, 3f, 0);
	vVar4 = { Global_36 - vParam0 };
	vVar4.f_2 = 0f;
	vVar4 = { __LIB_0__::func_173(vVar4) };
	vVar7 = { -BUILTIN::SIN(fVar0), BUILTIN::COS(fVar0), 0f };
	if (__LIB_2__::func_977(vVar4, vVar7) < 0f)
	{
		fVar0 = (fVar0 + 180f);
	}
	return fVar0;
}

int func_991(var uParam0, var uParam1)
{
	int iVar0;
	__LIB_2__::func_858(uParam0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_19)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_13[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT(uLocal_13[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

int func_992(int iParam0)
{
	int iVar0;
	iVar0 = joaat("A_F_M_VALTOWNFOLK_01");
	switch (iParam0)
	{
		case 4:
			iVar0 = joaat("A_F_M_BLWTOWNFOLK_01");
			break;
		case 9:
			iVar0 = joaat("A_F_M_VALTOWNFOLK_01");
			break;
		case 1:
			iVar0 = joaat("A_F_M_STRTOWNFOLK_01");
			break;
		case 11:
			iVar0 = joaat("A_F_M_RHDUPPERCLASS_01");
			break;
		case 0:
			iVar0 = joaat("A_F_M_MIDDLESDTOWNFOLK_01");
			break;
		case 15:
			iVar0 = joaat("A_F_M_ARMTOWNFOLK_01");
			break;
		case 10:
			switch (__LIB_0__::func_12())
			{
				case 92:
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
					{
						case 0:
							iVar0 = joaat("A_F_M_VHTTOWNFOLK_01");
							break;
						case 1:
							iVar0 = joaat("A_F_M_VHTTOWNFOLK_01");
							break;
					}
					break;
				case 78:
					iVar0 = joaat("A_F_M_ASBTOWNFOLK_01");
					break;
				case 82:
					iVar0 = joaat("A_F_M_BTCHILLBILLY_01");
					break;
			}
			break;
		case 13:
			iVar0 = joaat("A_F_M_TUMTOWNFOLK_01");
			break;
	}
	return iVar0;
}

void func_993(var uParam0)
{
	if (!uParam0->f_469[2])
	{
		__LIB_2__::func_881(*uParam0, 0);
		uParam0->f_469[2] = 1;
	}
	if (!uParam0->f_469[3])
	{
		__LIB_2__::func_890(*uParam0, uParam0->f_483, 0);
		uParam0->f_469[3] = 1;
	}
}

bool func_994(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_15)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
		{
			if (!__LIB_0__::func_163(uParam0->f_20[iVar0 /*14*/], 518218985))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_995(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[3];
	int iVar5;
	iVar0 = joaat("A_F_M_ROUGHTRAVELLERS_01");
	if (bParam3)
	{
		switch (iParam0)
		{
			case 0:
			case 2:
				iVar1[iVar5] = joaat("A_F_M_ROUGHTRAVELLERS_01");
				iVar5++;
				break;
			case 1:
				iVar1[iVar5] = joaat("A_F_M_ROUGHTRAVELLERS_01");
				iVar5++;
				break;
			case 3:
			case 4:
			case 9:
			case 12:
				iVar1[iVar5] = joaat("A_F_M_ROUGHTRAVELLERS_01");
				iVar5++;
				break;
			case 6:
			case 7:
				iVar1[iVar5] = joaat("A_F_M_ROUGHTRAVELLERS_01");
				iVar5++;
				break;
			case 10:
				iVar1[iVar5] = joaat("A_F_M_ROUGHTRAVELLERS_01");
				iVar5++;
				break;
			case 11:
				iVar1[iVar5] = joaat("A_F_M_ROUGHTRAVELLERS_01");
				iVar5++;
				break;
		}
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 0:
			case 2:
				iVar1[iVar5] = joaat("A_F_M_BYNFANCYTRAVELLERS_01");
				iVar5++;
				break;
			case 1:
				iVar1[iVar5] = joaat("A_F_M_BIVFANCYTRAVELLERS_01");
				iVar5++;
				break;
			case 3:
			case 4:
			case 9:
			case 12:
				iVar1[iVar5] = joaat("A_F_M_HTLFANCYTRAVELLERS_01");
				iVar5++;
				break;
			case 6:
			case 7:
				iVar1[iVar5] = joaat("A_F_M_GRIFANCYTRAVELLERS_01");
				iVar5++;
				break;
			case 10:
				iVar1[iVar5] = joaat("A_F_M_RKRFANCYTRAVELLERS_01");
				iVar5++;
				break;
			case 11:
				iVar1[iVar5] = joaat("A_F_M_SCLFANCYTRAVELLERS_01");
				iVar5++;
				break;
		}
	}
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
			case 6:
			case 7:
			case 12:
				iVar1[iVar5] = joaat("A_F_M_FAMILYTRAVELERS_COOL_01");
				iVar5++;
				break;
			default:
				iVar1[iVar5] = joaat("A_F_M_FAMILYTRAVELERS_WARM_01");
				iVar5++;
				break;
		}
	}
	if (iVar5 > 0)
	{
		iVar0 = iVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5)];
	}
	return iVar0;
}

bool func_996(var uParam0)
{
	int iVar0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_3.f_1))
		{
			return false;
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_3.f_1, true, false))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 < uParam0->f_3.f_8)
		{
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_3.f_1, uParam0->f_3.f_9[iVar0]))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_3.f_1, uParam0->f_3.f_9[iVar0]))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_3.f_1, uParam0->f_3.f_9[iVar0]);
				}
				return false;
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_19)
	{
		if (uParam0->f_20[iVar0 /*14*/].f_2 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_20[iVar0 /*14*/].f_2))
			{
				return false;
			}
			if (uParam0->f_20[iVar0 /*14*/].f_3 != joaat("META_OUTFIT_DEFAULT"))
			{
				if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_20[iVar0 /*14*/].f_4))
				{
					uParam0->f_20[iVar0 /*14*/].f_4 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_20[iVar0 /*14*/].f_2, uParam0->f_20[iVar0 /*14*/].f_3);
					if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_20[iVar0 /*14*/].f_4))
					{
						uParam0->f_20[iVar0 /*14*/].f_3 = joaat("META_OUTFIT_DEFAULT");
						uParam0->f_20[iVar0 /*14*/].f_9 = 1;
					}
					return false;
				}
				else if (!PED::_0x610438375E5D1801(uParam0->f_20[iVar0 /*14*/].f_4))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_371)
	{
		if (uParam0->f_372[iVar0 /*8*/].f_2 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_372[iVar0 /*8*/].f_2))
			{
				return false;
			}
		}
		iVar0++;
	}
	if (uParam0->f_453.f_1 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_453.f_1))
		{
			return false;
		}
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	return true;
}

int func_997(int iParam0)
{
	int iVar0;
	iVar0 = joaat("A_M_M_VALLABORER_01");
	switch (iParam0)
	{
		case 26:
			iVar0 = joaat("A_M_M_STRLABORER_01");
			break;
		case 76:
			iVar0 = joaat("A_M_M_VALLABORER_01");
			break;
		case 105:
			iVar0 = joaat("A_M_M_RHDTOWNFOLK_01");
			break;
		case 5:
			iVar0 = joaat("A_M_M_SDLABORERS_02");
			break;
		case 82:
			iVar0 = joaat("A_M_M_BTCHILLBILLY_01");
			break;
		case 38:
			iVar0 = joaat("A_M_M_BLWLABORER_01");
			break;
	}
	return iVar0;
}

void func_998(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	*iParam3 = PED::_GET_PED_DAMAGE(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_999(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::_0x9E7738B291706746(iParam0, iParam1, iParam2);
	return uVar2;
}
