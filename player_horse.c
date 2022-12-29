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
#endregion
void __EntryFunction__()
{
	bool bVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(512))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 2)
		{
		}
		func_1();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (__LIB_0__::func_2() == -1)
	{
		while (!__LIB_0__::func_382(64))
		{
			BUILTIN::WAIT(0);
		}
	}
	func_4();
	bVar0 = false;
	while (!bVar0)
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			bVar0 = true;
		}
		else
		{
			if (func_5())
			{
				func_6();
				func_7();
				func_8();
				func_9();
				func_10();
			}
			BUILTIN::WAIT(0);
		}
	}
	func_1();
}

void func_1()
{
	func_11();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_4()
{
	func_12();
	func_13();
	func_14(1);
	__LIB_17__::func_529(0);
	func_16();
}

bool func_5()
{
	if (!__LIB_0__::func_382(256))
	{
		return false;
	}
	if (Global_1879534)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		if (__LIB_0__::func_2() == -1)
		{
			return false;
		}
	}
	if (Global_1572887.f_8)
	{
		return false;
	}
	if (__LIB_0__::func_13(68))
	{
		return false;
	}
	return true;
}

void func_6()
{
	struct<7> Var0;
	struct<12> Var7;
	struct<12> Var19;
	__LIB_12__::func_230();
	func_19();
	func_20(&Var0);
	func_21(0, &Var7);
	func_21(1, &Var19);
	func_22(Var7);
	func_22(Var19);
	func_23(Var7);
	func_23(Var19);
	func_24(Var0, Var7, Var19);
	func_25(0, &Var7);
	func_25(1, &Var19);
	func_26(0, &Var7);
	func_26(1, &Var19);
	func_27();
	func_28(Var0);
	func_29(Var0);
	func_30(Var0);
	func_31();
	func_32();
	func_33();
}

void func_7()
{
	int iVar0;
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (Global_16)
	{
		return;
	}
	if (__LIB_6__::func_667())
	{
		return;
	}
	switch (Global_1900383.f_317)
	{
		case 0:
			func_35(0);
			break;
		case 1:
			func_35(1);
			break;
		case 2:
			func_35(6);
			break;
	}
	iVar0 = Global_1900383.f_317;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1900383.f_317 = iVar0;
}

void func_8()
{
	int iVar0;
	int iVar1;
	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_36(iVar0);
		iVar0++;
	}
}

void func_9()
{
	struct<7> Var0;
	struct<12> Var7;
	struct<12> Var19;
	struct<12> Var31;
	struct<12> Var43;
	int iVar55;
	switch (Global_1900383.f_422)
	{
		case 0:
		case 6:
			func_20(&Var0);
			func_21(0, &Var7);
			func_21(1, &Var19);
			func_21(6, &Var31);
			func_21(5, &Var43);
			func_37(Var0, Var7, 0);
			func_37(Var0, Var19, 1);
			func_37(Var0, Var31, 6);
			func_37(Var0, Var43, 5);
			func_38(Var0);
			func_39(Var0, Var7);
			func_40(Var0, Var7, 0);
			func_40(Var0, Var19, 1);
			func_40(Var0, Var31, 6);
			func_41(0);
			func_41(1);
			func_41(6);
			func_42(Var0, Var7, 0);
			func_42(Var0, Var19, 1);
			func_43(Var7, Var0, 0);
			func_43(Var19, Var0, 1);
			func_44(0);
			func_44(1);
			func_45(Var0, Var7, 0);
			func_45(Var0, Var19, 1);
			func_46(Var0, Var7, 0);
			func_46(Var0, Var19, 1);
			func_47(Var0);
			func_48(Var0);
			func_49();
			func_50();
			func_51(Var0);
			func_52();
			func_53();
			func_54();
			func_55();
			func_56();
			func_57(Var0, Var7, 0);
			func_57(Var0, Var19, 1);
			func_58(Var0, Var7, 0);
			func_58(Var0, Var19, 1);
			func_58(Var0, Var31, 6);
			func_59(Var0, Var7, Var19);
			break;
		case 1:
			func_60();
			break;
		case 2:
			func_61(0);
			func_62(0);
			break;
		case 3:
			func_61(1);
			func_62(1);
			break;
		case 9:
			func_63();
			break;
		case 10:
			func_64(0);
			func_64(1);
			break;
		case 11:
			func_65();
			break;
		case 4:
			__LIB_1__::func_552(0);
			break;
		case 5:
			__LIB_1__::func_552(1);
			break;
		case 7:
			__LIB_1__::func_552(5);
			break;
		case 8:
			func_67();
			break;
	}
	iVar55 = Global_1900383.f_422;
	iVar55++;
	if (iVar55 >= 12)
	{
		iVar55 = 0;
	}
	Global_1900383.f_422 = iVar55;
}

void func_10()
{
	int iVar0;
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	switch (Global_1900383.f_423)
	{
		case 0:
			func_68();
			break;
		case 1:
			func_69();
			break;
		case 2:
			func_70();
			break;
	}
	iVar0 = Global_1900383.f_423;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1900383.f_423 = iVar0;
}

void func_11()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (__LIB_0__::func_797(iVar0))
		{
			if (!__LIB_0__::func_823(iVar0))
			{
				__LIB_1__::func_162(iVar0);
			}
		}
		iVar0++;
	}
	func_74();
}

void func_12()
{
	PED::_0xED9582B3DA8F02B4(1);
	__LIB_12__::func_230();
}

int func_13()
{
	int iVar0;
	iVar0 = __LIB_5__::func_925();
	STREAMING::REQUEST_MODEL(iVar0, false);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_14(bool bParam0)
{
	if (__LIB_4__::func_377(128) || __LIB_16__::func_9(6))
	{
		return 1;
	}
	if (bParam0)
	{
		if (!DATAFILE::_0x603AC35FD4602C76(Global_1913814.f_202) && !func_78(1625871738, &(Global_1913814.f_202), 600, -1, 0, 0))
		{
			__LIB_0__::func_635(128);
			__LIB_16__::func_6(6);
			return 0;
		}
	}
	else
	{
		if (!DATAFILE::_0x7907969497EA92F5(Global_1913814.f_202))
		{
			Global_1913814.f_202 = DATAFILE::_0xD97D8D905F1562F2(1625871738);
		}
		if (!DATAFILE::_0x603AC35FD4602C76(Global_1913814.f_202))
		{
			return 0;
		}
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 893391757, "MOUNT_TYPES/MOUNT(type=%x)/WHISTLE:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 1616037958, "MOUNT_TYPES/MOUNT(type=%x)/LOADOUT_SLOT:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 1555915504, "MOUNT_TYPES/MOUNT(type=%x)/REPOSITORY:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, -298851427, "MOUNT_TYPES/MOUNT(type=%x)/ITEM_CATEGORY:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 834733495, "MOUNT_TYPES/MOUNT(type=%x)/BONDING:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 808825305, "MOUNT_TYPES/MOUNT(type=%x)/UI_FILTERS:start");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, -748933974, "MOUNT_TYPES/MOUNT(type=%x)/UI_FILTERS:end");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, -1543589730, "MOUNT_TYPES/MOUNT(type=%x)/ARCHETYPES:start");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, -143743697, "MOUNT_TYPES/MOUNT(type=%x)/ARCHETYPES:end");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 116835447, "MOUNT_TYPES/MOUNT(type=%x)/BLIP_STYLE:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, -1255580663, "MOUNT_TYPES/MOUNT(type=%x)/BLIP_SPRITE:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 1292413058, "MOUNT_TYPES/MOUNT(type=%x)/BLIP_NAME:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 2112095068, "MOUNT_TYPES/MOUNT(type=%x)/COMPATIBLE_TYPES/MOUNT_TYPE(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, -1379316512, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, -223927384, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i):slot_id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 267140771, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i):metaped_tag");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, -675686015, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i):none_item");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, -1507362072, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(slot=%x):metaped_tag");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 1979684523, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(slot=%x):none_item");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 42812586, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(slot=%x):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 1318388873, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, -571823039, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 1894757327, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, -385264207, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/INVENTORY_ITEM:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 38531101, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/DEFAULT_EQUIPMENT:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, -509881626, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/STABLING_COST:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, -1239479495, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/INSURANCE_COST:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, -1224542537, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/REVIVE_COST:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 1192923488, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/MOUNT_CLASS:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 737763634, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/MOUNT_QUALITY:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 735225176, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_HEALTH:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, -1306132799, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_STRENGTH:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 1611478627, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_SPEED:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, -221622390, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_AGILITY:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 1695792563, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_FITNESS:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 1454482041, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_GRIT:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, -1699214685, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL1:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, -926718279, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL2:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 1186063008, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL3:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814.f_202, 1105713420, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL4:id");
	__LIB_0__::func_635(128);
	__LIB_16__::func_6(6);
	return 1;
}

int func_16()
{
	if (!func_82(-1898635967, __LIB_1__::func_124(), 1))
	{
		return 0;
	}
	if (__LIB_0__::func_26())
	{
		if (!func_82(146323340, __LIB_1__::func_124(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_19()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_86(iVar0);
		iVar0++;
	}
}

void func_20(var uParam0)
{
	*uParam0 = PLAYER::PLAYER_ID();
	if (!PLAYER::IS_PLAYER_DEAD(*uParam0))
	{
		uParam0->f_1 = 1;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		uParam0->f_2 = 1;
		if (PED::IS_PED_INJURED(Global_35))
		{
			uParam0->f_4 = 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			uParam0->f_3 = 1;
		}
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = PED::GET_MOUNT(Global_35);
		}
	}
}

void func_21(int iParam0, int iParam1)
{
	float fVar0;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	*iParam1 = 0;
	iParam1->f_1 = 0;
	iParam1->f_2 = 0;
	iParam1->f_3 = 0;
	iParam1->f_4 = 0;
	iParam1->f_5 = { 0f, 0f, 0f };
	iParam1->f_8 = 0f;
	iParam1->f_10 = 0;
	iParam1->f_9 = 0;
	iParam1->f_10 = 0;
	iParam1->f_11 = 0;
	if (__LIB_0__::func_797(iParam0))
	{
		iParam1->f_1 = 1;
		*iParam1 = __LIB_0__::func_398(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_2 = 1;
		}
		if (PED::IS_PED_INJURED(*iParam1))
		{
			iParam1->f_3 = 1;
		}
		if (TASK::IS_PED_IN_WRITHE(*iParam1))
		{
			iParam1->f_4 = 1;
		}
		iParam1->f_5 = { ENTITY::GET_ENTITY_COORDS(*iParam1, true, false) };
		iParam1->f_8 = ENTITY::GET_ENTITY_HEADING(*iParam1);
		iParam1->f_9 = PED::_GET_RIDER_OF_MOUNT(*iParam1, false);
		if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_9))
		{
			if (iParam1->f_9 == Global_35)
			{
				iParam1->f_10 = 1;
			}
		}
		fVar0 = __LIB_1__::func_136(iParam0);
		if (__LIB_0__::func_636(iParam1->f_5, Global_36) <= fVar0)
		{
			iParam1->f_11 = 1;
		}
	}
}

void func_22(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (Param0.f_1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(Param0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Param0, true, true);
		}
	}
}

void func_23(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (vParam0.z)
	{
		if (__LIB_4__::func_377(64))
		{
			PED::SET_PED_RESET_FLAG(vParam0.x, 6, true);
		}
	}
}

void func_24(struct<7> Param0, struct<12> Param7, struct<12> Param19)
{
	if (func_91())
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE_HORSEBACK"), true);
		func_92(Param0, Param7, Param19);
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE_HORSEBACK"), false);
		__LIB_17__::func_529(1);
	}
	func_93();
}

void func_25(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	if (!uParam1->f_1)
	{
		return;
	}
	if (!uParam1->f_2)
	{
		return;
	}
	bVar0 = false;
	if (__LIB_0__::func_28() && !__LIB_1__::func_185(4))
	{
		bVar0 = true;
	}
	iVar1 = 388;
	bVar2 = PED::GET_PED_CONFIG_FLAG(*uParam1, iVar1, false);
	if (bVar0 != bVar2)
	{
		PED::SET_PED_CONFIG_FLAG(*uParam1, iVar1, bVar0);
	}
	if (__LIB_1__::func_927())
	{
		return;
	}
	bVar3 = __LIB_0__::func_795(iParam0);
	if (uParam1->f_4 != bVar3)
	{
		func_98(iParam0, uParam1->f_4);
		__LIB_14__::func_229(iParam0);
	}
	if (!uParam1->f_4)
	{
		return;
	}
	if (__LIB_14__::func_226(iParam0) == 0)
	{
		__LIB_14__::func_228(iParam0, MISC::GET_GAME_TIMER());
	}
	fVar4 = PED::_GET_PED_REMAINING_REVIVAL_TIME(*uParam1, false);
	__LIB_14__::func_227(iParam0, fVar4);
	if (Global_1914319.f_18969)
	{
		if (!PED::_0x12EB4E31F092C9B3(*uParam1))
		{
			PED::_0x925A160133003AC6(*uParam1, 1);
		}
	}
	else if (PED::_0x12EB4E31F092C9B3(*uParam1))
	{
		PED::_0x925A160133003AC6(*uParam1, 0);
	}
	if (__LIB_2__::func_7())
	{
		ENTITY::_SET_ENTITY_HEALTH(*uParam1, 0, 0);
	}
}

void func_26(int iParam0, var uParam1)
{
	if (!uParam1->f_1)
	{
		return;
	}
	if (__LIB_1__::func_927())
	{
		return;
	}
	if (!uParam1->f_2)
	{
		func_104(iParam0);
		return;
	}
}

void func_27()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_105(iVar0);
		iVar0++;
	}
}

void func_28(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		__LIB_12__::func_544();
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	if (!__LIB_15__::func_84(iVar0))
	{
		return;
	}
	if (!func_108())
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, func_109(), false);
		__LIB_12__::func_550(vVar1);
		if (fVar4 > 0.01f)
		{
			fVar5 = func_111();
			fVar5 = (fVar5 + fVar4);
			func_112(fVar5);
		}
		if (func_111() >= 40f)
		{
			func_113(1);
		}
	}
	if (!func_108())
	{
		return;
	}
	func_114(iVar0);
}

void func_29(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!__LIB_0__::func_797(6))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	iVar1 = __LIB_0__::func_398(6);
	if (iVar0 != iVar1)
	{
		return;
	}
	if (__LIB_0__::func_819(6) == 0)
	{
		return;
	}
	func_116(6, 1);
}

void func_30(struct<7> Param0)
{
	int iVar0;
	int iVar1;
	if (!func_117(Param0, &iVar0, 1))
	{
		func_118();
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1900383.f_414))
	{
		Global_1900383.f_414 = iVar0;
		Global_1900383.f_414.f_1 = iVar1;
	}
	if (Global_1900383.f_414.f_1 + 5000 < iVar1)
	{
		func_119(iVar0);
		func_118();
	}
}

void func_31()
{
	int iVar0;
	if (__LIB_16__::func_305() > 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
		__LIB_3__::func_807();
	}
	iVar0 = __LIB_16__::func_305();
	switch (iVar0)
	{
		case 0:
			func_122();
			break;
		case 1:
			func_123();
			break;
		case 2:
			func_124();
			break;
		case 3:
			func_125();
			break;
		case 4:
			func_126();
			break;
		case 5:
			func_127();
			break;
		case 6:
			func_128();
			break;
		case 7:
			func_129();
			break;
	}
	func_130();
}

void func_32()
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_1__::func_105(0) || __LIB_1__::func_105(1))
	{
		iVar0 = 1;
	}
	func_132(iVar0);
}

void func_33()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	var uVar5;
	int iVar6;
	struct<11> Var7;
	if (!__LIB_17__::func_407())
	{
		return;
	}
	bVar0 = false;
	if (!__LIB_1__::func_105(1))
	{
		bVar0 = true;
	}
	bVar1 = __LIB_0__::func_28();
	if (bVar1 && __LIB_1__::func_898() == 8)
	{
		bVar0 = true;
	}
	if ((bVar1 && __LIB_1__::func_25(Global_1835011[37 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1))
	{
		bVar0 = true;
	}
	if ((bVar1 && __LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
	{
		bVar0 = true;
	}
	__LIB_14__::func_219(1, &vVar2, &uVar5);
	if (__LIB_0__::func_86(vVar2))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_138();
		return;
	}
	Var7.f_10 = 7;
	Var7.f_10 = 1;
	Var7 = 1;
	Var7.f_6 = { vVar2 };
	Var7.f_9 = uVar5;
	func_139(&iVar6, &Var7);
	switch (iVar6)
	{
		case 0:
			break;
		case 1:
			func_138();
			break;
		case 2:
			func_138();
			break;
	}
}

void func_35(int iParam0)
{
	int iVar0;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 <= -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!__LIB_0__::func_293(43))
		{
			return;
		}
	}
	iVar0 = Global_1900383[iParam0 /*45*/];
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (Global_16)
	{
		return;
	}
	if (__LIB_6__::func_667())
	{
		return;
	}
	switch (Global_1900383.f_424[iParam0])
	{
		case 0:
		case 1:
			func_141(iParam0);
			Global_1900383.f_424[iParam0] = 2;
			break;
		case 2:
			func_142(iParam0);
			Global_1900383.f_424[iParam0] = 3;
			break;
		case 3:
			func_143(iParam0);
			Global_1900383.f_424[iParam0] = 0;
			break;
	}
}

void func_36(int iParam0)
{
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case joaat("EVENT_RAN_OVER_PED"):
			func_144(iParam0);
			break;
		case joaat("EVENT_SHOT_FIRED_WHIZZED_BY"):
			func_145(iParam0);
			break;
		case joaat("EVENT_ENTITY_DAMAGED"):
			func_146(iParam0);
			break;
		case 2145012826:
			func_147(iParam0);
			break;
		case 1417095237:
			__LIB_1__::func_579(134217728);
			func_149(iParam0);
			break;
		case 1638298852:
			func_150(iParam0);
			break;
		case -1246119244:
			func_151(iParam0);
			break;
		case -1651585854:
			func_152(iParam0);
			break;
		case -462231716:
			func_153(iParam0);
			break;
		case -1985279805:
			func_154(iParam0);
			break;
		case joaat("EVENT_ANIMAL_TAMING_CALLOUT"):
			__LIB_0__::func_11(iParam0);
			break;
		case 218595333:
			func_156(iParam0);
			break;
		case 1327216456:
			func_157(iParam0);
			break;
		case joaat("EVENT_PLAYER_PROMPT_TRIGGERED"):
			func_158(iParam0);
			break;
		case 1553659161:
			func_159(iParam0);
			break;
		case 1784289253:
			func_160(iParam0);
			break;
		case 1655597605:
			func_161(iParam0);
			break;
		case 1208357138:
			break;
		case 1082572570:
			func_162(iParam0);
			break;
		case -687266558:
			func_163(iParam0);
			func_164(iParam0);
			break;
	}
}

void func_37(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<9> Param7, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (__LIB_1__::func_927())
	{
		return;
	}
	if (__LIB_1__::func_107(iParam19))
	{
		return;
	}
	__LIB_16__::func_263(iParam19, Param7.f_5, Param7.f_8);
}

void func_38(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	if (__LIB_4__::func_377(4096))
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = __LIB_0__::func_64(0);
	switch (iVar1)
	{
		case 1:
		case 2:
		case 6:
		case 8:
		case 11:
			bVar0 = true;
			break;
	}
	bVar2 = false;
	if (!__LIB_0__::func_293(42))
	{
		bVar2 = true;
	}
	bVar3 = false;
	if (bVar0 || bVar2)
	{
		bVar3 = true;
	}
	iVar4 = 367;
	if (PED::GET_PED_CONFIG_FLAG(Global_35, iVar4, true) != bVar3)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, iVar4, bVar3);
	}
	bVar5 = false;
	if (bVar0 && !bVar2)
	{
		bVar5 = true;
	}
	iVar4 = 487;
	if (PED::GET_PED_CONFIG_FLAG(Global_35, iVar4, true) != bVar5)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, iVar4, bVar5);
	}
}

void func_39(struct<5> Param0, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18)
{
	int iVar0;
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	if (__LIB_0__::func_491(Param7, 2043986356))
	{
		if (func_169(Param7))
		{
			iVar0 = __LIB_0__::func_61();
			if (!func_171(iVar0))
			{
				TASK::TASK_STAND_STILL(Param7, -1);
			}
		}
	}
}

void func_40(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	bool bVar0;
	int iVar1;
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (__LIB_0__::func_823(iParam19))
	{
		return;
	}
	bVar0 = func_172(iParam19);
	iVar1 = 48;
	if (bVar0)
	{
		if (!FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(Param7, iVar1))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Param7, iVar1, true);
		}
	}
	else if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(Param7, iVar1))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Param7, iVar1, false);
	}
}

void func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	vector3 vVar7;
	if (__LIB_0__::func_818(iParam0, 256))
	{
		return;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!PED::_IS_MOUNT_SEAT_FREE(iVar0, -1))
	{
		return;
	}
	if (__LIB_0__::func_163(iVar0, 713668775))
	{
		return;
	}
	if ((__LIB_0__::func_163(iVar0, -76381094) || __LIB_0__::func_163(iVar0, -1098463898)) || __LIB_0__::func_163(iVar0, 993674639))
	{
		return;
	}
	iVar1 = func_175(0);
	iVar2 = func_175(2);
	if (!VOLUME::_DOES_VOLUME_EXIST(iVar1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iVar0, iVar1, false, 0))
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iVar2))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iVar0, iVar2, false, 0))
	{
		return;
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	iVar6 = func_176(vVar3, iVar2, iVar1);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar6))
	{
		vVar7 = { TASK::_GET_SCENARIO_POINT_COORDS(iVar6, true) };
		PED::SET_PED_CONFIG_FLAG(iVar0, 355, true);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vVar7, 1f, 20000, 0.25f, 0, 40000f);
	}
}

void func_42(struct<2> Param0, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<11> Param7, var uParam18, int iParam19)
{
	if (!Param0.f_1)
	{
		return;
	}
	if (!Param7.f_10)
	{
		return;
	}
	if (func_177(iParam19) == -1)
	{
		return;
	}
	func_178(iParam19, -1);
}

void func_43(struct<12> Param0, struct<2> Param12, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (func_179())
	{
		return;
	}
	iParam19 = __LIB_0__::func_97(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (!Param12.f_1)
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_11)
	{
		return;
	}
	if (func_177(iParam19) == 1)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_RIDING_TRAIN(Param12) && !Global_1430231.f_4)
	{
		return;
	}
	if (__LIB_0__::func_163(Param0, 2043986356))
	{
		return;
	}
	func_180(Param0, Global_35);
}

void func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!__LIB_0__::func_823(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_825(iParam0);
	if (SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
		{
			return;
		}
	}
	if (__LIB_0__::func_797(iParam0))
	{
		iVar1 = __LIB_0__::func_398(iParam0);
		__LIB_2__::func_145(iVar1, 1);
	}
	__LIB_0__::func_836(iParam0);
}

void func_45(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	iParam19 = __LIB_0__::func_97(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	iVar0 = PED::_GET_RIDER_OF_MOUNT(Param7, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_184(iParam19);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		func_184(iParam19);
		return;
	}
	if (__LIB_4__::func_377(512))
	{
		return;
	}
	if (iVar0 == Global_35)
	{
		return;
	}
	iVar1 = __LIB_0__::func_820(iParam19);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if ((iVar2 != joaat("REL_PLAYER_ALLY") && iVar2 != joaat("REL_PLAYER_LIKE")) && iVar2 != joaat("REL_GANG_DUTCHS"))
		{
			func_186(iParam19, iVar0);
		}
	}
	iVar1 = __LIB_0__::func_820(iParam19);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (__LIB_0__::func_665(Param7, Global_35, 1, 1) > __LIB_1__::func_136(iParam19))
	{
		func_184(iParam19);
		func_188(iParam19, 2);
	}
}

void func_46(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (!func_189(iParam19))
	{
		return;
	}
	fVar0 = __LIB_5__::func_985(Param7);
	bVar1 = false;
	if (fVar0 > 0f)
	{
		bVar1 = true;
	}
	iVar2 = MISC::GET_GAME_TIMER();
	if (!bVar1 || func_191(iParam19) + 30000 < iVar2)
	{
		func_192(iParam19, 0);
		func_193(iParam19, -1);
		if (__LIB_3__::func_829(16))
		{
			__LIB_4__::func_861(16);
		}
		if (__LIB_1__::func_262(16))
		{
			__LIB_5__::func_781(16);
		}
	}
}

void func_47(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;
	vector3 vVar1;
	int iVar13;
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	iVar0 = __LIB_0__::func_832(5);
	if (iVar0 == 0)
	{
		return;
	}
	func_21(5, &vVar1);
	if (iVar0 == 2)
	{
		if (vVar1.y && !vVar1.z)
		{
			func_184(5);
			__LIB_11__::func_455(5, 1);
		}
		if (vVar1.z)
		{
			if (__LIB_0__::func_665(vVar1.x, Global_35, 1, 1) > __LIB_1__::func_136(5) && !ENTITY::IS_ENTITY_ON_SCREEN(vVar1.x))
			{
				iVar13 = PED::_GET_RIDER_OF_MOUNT(vVar1.x, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar13))
				{
					if (ENTITY::IS_ENTITY_DEAD(iVar13) || PED::IS_PED_INJURED(iVar13))
					{
					}
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar13))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar13, true, true);
						PED::DELETE_PED(&iVar13);
					}
				}
				__LIB_1__::func_162(5);
				__LIB_0__::func_837(5, 0);
			}
		}
		if (!vVar1.y && __LIB_0__::func_815(5) == 1)
		{
			__LIB_0__::func_837(5, 0);
		}
	}
	if (iVar0 == 0)
	{
		return;
	}
	if (!__LIB_0__::func_293(42))
	{
		return;
	}
	if (__LIB_0__::func_815(0) == 1 && __LIB_0__::func_479() == 0)
	{
		func_202(5, 0);
		func_203(5);
	}
}

void func_48(struct<5> Param0, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (__LIB_0__::func_293(42))
	{
		return;
	}
	bVar0 = false;
	if ((__LIB_0__::func_815(0) == 0 && __LIB_0__::func_815(5) == 1) && __LIB_0__::func_832(5) == 1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	iVar1 = __LIB_0__::func_64(0);
	bVar2 = false;
	if (iVar1 == 1 || iVar1 == 8)
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		if (__LIB_0__::func_28() && __LIB_1__::func_185(4))
		{
			if (!__LIB_0__::func_293(42))
			{
				func_204(42);
				func_204(30);
			}
		}
		if (!__LIB_0__::func_474(55))
		{
			func_206(1);
		}
	}
}

void func_49()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_821(0);
	iVar1 = __LIB_0__::func_821(1);
	if (Global_1900383.f_416 != 0)
	{
		if (Global_1900383.f_416 != iVar0)
		{
			if (!__LIB_1__::func_1(Global_1900383.f_416))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(Global_1900383.f_416, false);
			}
			Global_1900383.f_416 = 0;
		}
	}
	if (Global_1900383.f_416.f_1 != 0)
	{
		if (Global_1900383.f_416.f_1 != iVar1)
		{
			if (!__LIB_1__::func_1(Global_1900383.f_416.f_1))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(Global_1900383.f_416.f_1, false);
			}
			Global_1900383.f_416.f_1 = 0;
		}
	}
	if (iVar0 != 0)
	{
		if (!PED::_0xAA9F048DCF69B6DC(iVar0))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar0, true);
			Global_1900383.f_416 = iVar0;
		}
	}
	if (iVar1 != 0)
	{
		if (!PED::_0xAA9F048DCF69B6DC(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, true);
			Global_1900383.f_416.f_1 = iVar1;
		}
	}
}

void func_50()
{
	int iVar0;
	func_209(Global_1900383.f_436);
	iVar0 = Global_1900383.f_436;
	iVar0++;
	if (iVar0 >= 5)
	{
		iVar0 = 0;
	}
	Global_1900383.f_436 = iVar0;
}

void func_51(struct<5> Param0, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	vector3 vVar15;
	bool bVar18;
	vector3 vVar19;
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (__LIB_1__::func_927())
	{
		return;
	}
	bVar0 = __LIB_0__::func_988();
	if (bVar0)
	{
		iVar1 = __LIB_0__::func_147();
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
		}
	}
	bVar2 = false;
	if (bVar0)
	{
		if (PED::_GET_CARRIER_AS_PED(iVar1) == Global_35)
		{
			iVar3 = ENTITY::_0x61914209C36EFDDB(iVar1);
			switch (iVar3)
			{
				case 4:
				case 5:
				case 6:
				case 8:
				case 9:
					bVar2 = true;
					break;
			}
		}
	}
	bVar4 = __LIB_0__::func_293(42);
	bVar5 = __LIB_4__::func_807(0);
	bVar6 = false;
	if (bVar0)
	{
		if (bVar2)
		{
			if (__LIB_5__::func_917() != 1 && !bVar5)
			{
				__LIB_0__::func_148(1);
				bVar6 = true;
			}
		}
		else
		{
			if (__LIB_5__::func_917() == 1 && !bVar5)
			{
				__LIB_0__::func_148(2);
				bVar6 = true;
			}
			if (ENTITY::IS_ENTITY_STATIC(iVar1))
			{
				ENTITY::SET_ENTITY_DYNAMIC(iVar1, true);
			}
		}
		vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
		__LIB_0__::func_150(vVar7);
	}
	else
	{
		if (__LIB_5__::func_917() == 0)
		{
			iVar10 = __LIB_0__::func_479();
			if (__LIB_0__::func_797(iVar10))
			{
				iVar11 = __LIB_0__::func_398(iVar10);
				vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar11, false, false) };
				__LIB_0__::func_150(vVar12);
			}
			if (iVar10 == 5)
			{
				if (!__LIB_0__::func_797(5))
				{
					if (bVar4)
					{
						vVar15 = { __LIB_5__::func_981() };
						__LIB_0__::func_149(-1);
						__LIB_0__::func_148(2);
						bVar6 = true;
					}
				}
			}
		}
		bVar18 = false;
		if (__LIB_5__::func_917() == 2)
		{
			bVar18 = true;
		}
		if (__LIB_5__::func_917() == 1)
		{
			bVar18 = true;
		}
		if (bVar18)
		{
			vVar19 = { __LIB_5__::func_981() };
			if (__LIB_0__::func_86(vVar19))
			{
				__LIB_0__::func_148(3);
				__LIB_0__::func_149(-1);
				__LIB_0__::func_150(0f, 0f, 0f);
				__LIB_9__::func_23(-15);
			}
			else
			{
				func_219(vVar19, 0f, 1);
				__LIB_0__::func_148(2);
				__LIB_0__::func_149(-1);
				if (func_220() == -15)
				{
					__LIB_9__::func_23(__LIB_0__::func_23());
				}
			}
			bVar6 = true;
		}
	}
	if (bVar6)
	{
		func_67();
	}
}

void func_52()
{
	vector3 vVar0;
	struct<4> Var12;
	bool bVar19;
	if (!__LIB_0__::func_797(6))
	{
		return;
	}
	func_21(6, &vVar0);
	if (!vVar0.z)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&vVar0);
		func_203(6);
		return;
	}
	func_20(&Var12);
	bVar19 = false;
	if (!Var12.f_3)
	{
		bVar19 = true;
	}
	if (__LIB_0__::func_665(vVar0.x, Global_35, 1, 1) > 100f)
	{
		bVar19 = true;
	}
	if (bVar19)
	{
		func_202(6, 0);
		func_203(6);
	}
}

void func_53()
{
	struct<11> Var0;
	int iVar12;
	int iVar13;
	int iVar14;
	if (!__LIB_0__::func_797(1))
	{
		func_222();
		return;
	}
	func_21(1, &Var0);
	if (!Var0.f_2)
	{
		func_222();
		return;
	}
	if (__LIB_11__::func_556(1))
	{
		func_222();
		return;
	}
	if (__LIB_0__::func_819(1) >= 1)
	{
		func_222();
		return;
	}
	if (!func_224(1))
	{
		func_222();
		return;
	}
	if (Var0.f_10)
	{
		func_222();
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Var0.f_9))
	{
		func_222();
		return;
	}
	iVar12 = MISC::GET_GAME_TIMER();
	if (!func_225())
	{
		iVar13 = func_226();
		if (iVar13 == 0)
		{
			func_227(iVar12);
		}
		else if (iVar13 + 5000 < iVar12)
		{
			func_228(1);
		}
	}
	if (!func_225())
	{
		return;
	}
	if (!__LIB_0__::func_491(Var0, 518218985))
	{
		TASK::TASK_SMART_FLEE_PED(Var0, Global_35, 500f, -1, 0, 1f, 0);
		PED::SET_PED_KEEP_TASK(Var0, true);
	}
	if (__LIB_16__::func_250(Var0, -1))
	{
		return;
	}
	iVar14 = func_230();
	if (iVar14 == 0)
	{
		func_231(iVar12);
	}
	else if (iVar14 + 15000 < iVar12)
	{
		func_202(1, 1);
		func_222();
	}
}

void func_54()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	bVar1 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		bVar1 = true;
		iVar0 = PED::GET_MOUNT(Global_35);
	}
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if (Global_40.f_1095.f_1[iVar5 /*436*/].f_9 == 0)
		{
			if (Global_40.f_1095.f_1[iVar5 /*436*/].f_431 > -1)
			{
				Global_40.f_1095.f_1[iVar5 /*436*/].f_431 = -1;
			}
		}
		else
		{
			bVar3 = false;
			bVar4 = false;
			iVar2 = Global_1900383[iVar5 /*45*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				bVar3 = true;
				if (bVar1)
				{
					if (iVar0 == iVar2)
					{
						bVar4 = true;
					}
				}
			}
			if (bVar4)
			{
				if (Global_40.f_1095.f_1[iVar5 /*436*/].f_431 > -1)
				{
					Global_40.f_1095.f_1[iVar5 /*436*/].f_431 = -1;
				}
			}
			else
			{
				iVar6 = CLOCK::_GET_SECONDS_SINCE_BASE_YEAR();
				if (bVar3)
				{
					iVar7 = PED::_0xE8D1CCB9375C101B(iVar2, PLAYER::PLAYER_ID());
					if (iVar7 == -1 || iVar7 == 0)
					{
						iVar7 = iVar6;
						PED::_0xA691C10054275290(iVar2, PLAYER::PLAYER_ID(), iVar7);
					}
					if (Global_40.f_1095.f_1[iVar5 /*436*/].f_431 != iVar7)
					{
						Global_40.f_1095.f_1[iVar5 /*436*/].f_431 = iVar7;
					}
				}
				else if (Global_40.f_1095.f_1[iVar5 /*436*/].f_431 == -1)
				{
					Global_40.f_1095.f_1[iVar5 /*436*/].f_431 = iVar6;
				}
			}
		}
		iVar5++;
	}
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	if (__LIB_1__::func_652())
	{
		iVar1 = 1;
	}
	if (__LIB_0__::func_797(0))
	{
		iVar2 = __LIB_0__::func_398(0);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar2, 31, 2, iVar1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar2, 32, 2, iVar1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar2, 33, 2, iVar1);
	}
	if (__LIB_0__::func_797(1))
	{
		iVar3 = __LIB_0__::func_398(1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar3, 31, 2, iVar1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar3, 32, 2, iVar1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar3, 33, 2, iVar1);
	}
}

void func_56()
{
	if (__LIB_0__::func_293(33))
	{
		if (!func_233())
		{
			__LIB_0__::func_539(1);
		}
	}
	else if (func_233())
	{
		__LIB_0__::func_539(0);
	}
	if (__LIB_0__::func_293(34))
	{
		if (!func_235())
		{
			__LIB_0__::func_540(1);
		}
	}
	else if (func_235())
	{
		__LIB_0__::func_540(0);
	}
	if (__LIB_0__::func_293(35))
	{
		if (!func_237())
		{
			__LIB_0__::func_541(1);
		}
	}
	else if (func_237())
	{
		__LIB_0__::func_541(0);
	}
}

void func_57(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	float fVar0;
	int iVar1;
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (!Param7.f_4)
	{
		return;
	}
	iParam19 = __LIB_0__::func_97(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (func_239(iParam19) >= 40)
	{
		return;
	}
	fVar0 = __LIB_0__::func_665(Param7, Global_35, 1, 1);
	if (fVar0 > 40f)
	{
		__LIB_14__::func_229(iParam19);
		return;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(Param7))
	{
		__LIB_14__::func_229(iParam19);
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (!func_240(iParam19))
	{
		func_241(iParam19, iVar1);
		return;
	}
	if (func_242(iParam19) + 15000 < iVar1)
	{
		__LIB_14__::func_288(0, joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
		func_244(iParam19);
		func_241(iParam19, iVar1);
	}
}

void func_58(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<6> Param7, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	iParam19 = __LIB_0__::func_97(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	vVar0 = { func_245(iParam19) };
	if (__LIB_0__::func_86(vVar0))
	{
		return;
	}
	vVar3 = { func_246(iParam19) };
	fVar6 = func_247(iParam19);
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param7.f_5, vVar3, true);
	if (fVar7 > 0.01f)
	{
		fVar6 = (fVar6 + fVar7);
		func_248(iParam19, Param7.f_5);
		func_249(iParam19, fVar6);
	}
}

void func_59(struct<7> Param0, struct<12> Param7, struct<12> Param19)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	func_250(Param0);
	func_251(Param0);
	func_252(Param0, Param7);
	func_253();
	func_254(Param0, Param7, Param19);
	func_255(Param0);
	func_256(Param0, Param7, Param19);
	func_257(Param0, Param7, Param19);
	func_258();
	func_259(Param0);
	func_260();
	func_261(Param0);
	func_262(Param0);
	func_263(Param0, Param7);
	func_264(Param0, Param7, Param19);
	func_265(Param0);
	func_266();
}

void func_60()
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (__LIB_3__::func_183())
	{
		return;
	}
	iVar0 = __LIB_0__::func_298(0);
	if (__LIB_0__::func_6(iVar0))
	{
		if (__LIB_0__::func_700(iVar0) == 1)
		{
			return;
		}
	}
	iVar1 = func_271();
	if (WEAPON::_0x5A695BD328586B44(Global_35, 0) != iVar1)
	{
		WEAPON::_0xB832F1A686B9B810(Global_35, iVar1, 0);
	}
}

void func_61(int iParam0)
{
	int iVar0;
	struct<94> Var1;
	struct<11> Var95;
	int iVar189;
	struct<4> Var190;
	int iVar194;
	int iVar195;
	int iVar196;
	int iVar197;
	int iVar198;
	bool bVar199;
	bool bVar200;
	int iVar201;
	int iVar202;
	bool bVar203;
	int iVar204;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (__LIB_1__::func_927())
	{
		return;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (__LIB_1__::func_107(iParam0))
	{
		return;
	}
	Var1.f_10 = 10;
	Var95.f_10 = 10;
	__LIB_0__::func_576(&Var1);
	iVar198 = 0;
	while (iVar198 < 3)
	{
		iVar189 = __LIB_0__::func_574(iVar198);
		iVar196 = iVar198;
		__LIB_0__::func_576(&Var1);
		bVar199 = false;
		if (!PED::_0x608BC6A6AACD5036(&Var190, iVar0, iVar189, 0))
		{
			bVar199 = true;
		}
		if (!bVar199)
		{
			iVar194 = Var190.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar194))
			{
				bVar199 = true;
			}
		}
		if (!bVar199)
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar194) && !ENTITY::_0x88AD6CC10D8D35B2(iVar194))
			{
				bVar199 = true;
			}
		}
		if (!bVar199)
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar194))
			{
				iVar195 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar194);
				if (PED::IS_PED_HUMAN(iVar195))
				{
					bVar199 = true;
				}
			}
		}
		if (bVar199)
		{
			func_274(&Var95, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_15[iVar196 /*94*/]));
		}
		else
		{
			Var1 = ENTITY::GET_ENTITY_MODEL(iVar194);
			Var1.f_1 = ENTITY::_0x31FEF6A20F00B963(iVar194);
			Var1.f_2 = ENTITY::_0xD21C7418C590BB40(iVar194);
			Var1.f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(iVar194);
			Var1.f_93 = ENTITY::_0xB16C780C51E51E2B(iVar194);
			if (STREAMING::IS_MODEL_A_PED(Var1))
			{
				func_275(iParam0, iVar194);
				iVar195 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar194);
				__LIB_7__::func_642(iVar195, &(Var1.f_5), &(Var1.f_6), &(Var1.f_7), &(Var1.f_4));
				bVar200 = __LIB_2__::func_999(&(Var1.f_1), iVar195, Var1.f_7, Var1.f_5);
				if (!bVar200)
				{
				}
				iVar201 = PED::_GET_PED_META_OUTFIT_HASH(iVar195);
				Var1.f_8 = iVar201;
				Var1.f_9 = PED::_GET_NUM_COMPONENTS_IN_PED(iVar195);
				if (Var1.f_9 > 10)
				{
					Var1.f_9 = 10;
				}
				iVar197 = 0;
				while (iVar197 < Var1.f_9)
				{
					if (iVar197 >= 10)
					{
					}
					else
					{
						if (!PED::_0xA9C28516A6DC9D56(iVar195, iVar197, &(Var1.f_10[iVar197 /*8*/]), &(Var1.f_10[iVar197 /*8*/].f_1), &(Var1.f_10[iVar197 /*8*/].f_2), &(Var1.f_10[iVar197 /*8*/].f_3)))
						{
						}
						if (!PED::_0xE7998FEC53A33BBE(iVar195, iVar197, &(Var1.f_10[iVar197 /*8*/].f_4), &(Var1.f_10[iVar197 /*8*/].f_5), &(Var1.f_10[iVar197 /*8*/].f_6), &(Var1.f_10[iVar197 /*8*/].f_7)))
						{
						}
					}
					iVar197++;
				}
				Var1.f_91 = PERSISTENCE::_0x2E545965DF98D476(iVar194);
				Var1.f_92 = 0;
				if (PED::_IS_METAPED_USING_COMPONENT(iVar195, 43391475) || ENTITY::_0x8DE41E9902E85756(iVar194))
				{
					Var1.f_92 = 1;
				}
				if (MISC::_0x5170DDA6D63ACAAA(iVar195))
				{
					iVar202 = 1;
					func_278(Var1.f_1, iVar202);
					bVar203 = true;
					if (!__LIB_0__::func_394(Global_35, iVar0, 0))
					{
						bVar203 = false;
					}
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
					{
						bVar203 = false;
					}
					if (bVar203)
					{
						TASK::_0x36D188AECB26094B(iVar194);
					}
					else
					{
						TASK::_0x36D188AECB26094B(iVar194);
					}
					if (__LIB_2__::func_623())
					{
						if (__LIB_12__::func_234(__LIB_7__::func_666(iVar195), 72))
						{
							__LIB_1__::func_240(98, 1);
						}
					}
					func_274(&Var95, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_15[iVar196 /*94*/]));
				}
				else
				{
					if (Var1.f_91 >= 12)
					{
						if (__LIB_2__::func_623())
						{
							if (__LIB_12__::func_234(__LIB_7__::func_666(iVar195), 72))
							{
								__LIB_1__::func_240(97, 0);
							}
						}
					}
					else if (Var1.f_91 >= 2)
					{
						if (__LIB_2__::func_623())
						{
							if (__LIB_12__::func_234(__LIB_7__::func_666(iVar195), 72))
							{
								__LIB_1__::func_240(96, 0);
							}
						}
					}
					iVar204 = Global_40.f_1095.f_1[iParam0 /*436*/].f_15[iVar196 /*94*/].f_1;
					if (__LIB_0__::func_144(Var1.f_1, 0) && __LIB_0__::func_144(iVar204, 0))
					{
						if (Var1.f_1 != iVar204)
						{
							if (func_285(iVar0, iVar204, 1, 1, -142743235))
							{
								func_286(iVar0, iVar195);
							}
						}
					}
					func_274(&Var1, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_15[iVar196 /*94*/]));
				}
				iVar198++;
			}
		}
	}
}

void func_62(int iParam0)
{
	int iVar0;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
	}
	PED::_0x6F43C351A5D51E2F(iVar0, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
}

void func_63()
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	iVar6 = 0;
	while (iVar6 < 7)
	{
		if (!__LIB_0__::func_797(iVar6))
		{
		}
		else
		{
			iVar7 = __LIB_0__::func_398(iVar6);
			if (func_287(iVar6))
			{
				if (!__LIB_14__::func_458(iVar7))
				{
					iVar8 = func_289(iVar6);
					__LIB_14__::func_459(iVar7, iVar8);
				}
				else
				{
					iVar9 = func_291(iVar6);
					__LIB_7__::func_486(iVar9, &uVar0, &uVar1, &uVar2, &iVar3, &uVar4, &uVar5);
					if (iVar3 >= 1)
					{
						func_293(iVar7);
						func_294(iVar6);
					}
					else if (!__LIB_14__::func_458(iVar7))
					{
					}
					else if (!func_287(iVar6))
					{
						iVar10 = func_295(iVar7);
						func_296(iVar6, 1);
						func_297(iVar6, iVar10);
						func_298(iVar6, __LIB_0__::func_23());
					}
				}
				iVar6++;
			}
		}
	}
}

void func_64(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = func_299(iParam0);
	bVar1 = __LIB_16__::func_253(iParam0);
	if (bVar0)
	{
		if (func_301(iParam0))
		{
			if (bVar1)
			{
				return;
			}
			iVar3 = func_302(iParam0);
			iVar4 = __LIB_0__::func_23();
			iVar2 = func_303(iVar3, iVar4);
			if (iVar2 < 2)
			{
				return;
			}
			__LIB_16__::func_254(iParam0, 1);
		}
		else
		{
			iVar4 = __LIB_0__::func_23();
			func_305(iParam0, iVar4);
			__LIB_16__::func_254(iParam0, 0);
			__LIB_16__::func_252(iParam0);
		}
	}
	else
	{
		if (!func_301(iParam0))
		{
			return;
		}
		func_305(iParam0, -15);
		func_307(iParam0);
	}
	if (!__LIB_16__::func_383(iParam0))
	{
		return;
	}
	if (!func_309(iParam0, 3.5f))
	{
		return;
	}
	__LIB_16__::func_254(iParam0, 0);
	__LIB_16__::func_252(iParam0);
}

void func_65()
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	char cVar10[64];
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!__LIB_0__::func_797(iVar0))
		{
		}
		else
		{
			iVar1 = __LIB_0__::func_821(iVar0);
			if (!__LIB_16__::func_27(iVar1))
			{
			}
			else
			{
				Var2 = { __LIB_5__::func_978(iVar0) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
				{
				}
				else
				{
					StringCopy(&cVar10, func_312(iVar1), 64);
					StringCopy(&Var2, HUD::_GET_LABEL_TEXT_2(&cVar10), 64);
					if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
					{
					}
					else
					{
						__LIB_12__::func_490(iVar0, Var2);
						__LIB_12__::func_560(iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_67()
{
	int iVar0;
	bool bVar1;
	iVar0 = Global_1900383.f_393;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383.f_393.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1900383.f_393.f_1));
		}
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	bVar1 = func_321(Global_35, iVar0);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383.f_393.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1900383.f_393.f_1));
		}
	}
	else if (__LIB_5__::func_917() == 3)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383.f_393.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1900383.f_393.f_1));
		}
	}
	else if (!MAP::DOES_BLIP_EXIST(Global_1900383.f_393.f_1))
	{
		Global_1900383.f_393.f_1 = MAP::_BLIP_ADD_FOR_ENTITY(-515518185, iVar0);
		__LIB_1__::func_457(&(Global_1900383.f_393.f_1));
	}
}

void func_68()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	func_322(Global_1900383.f_432, Global_1900383.f_433);
	bVar0 = false;
	iVar1 = Global_1900383.f_433;
	iVar1++;
	if (iVar1 >= 2)
	{
		iVar1 = 0;
		bVar0 = true;
	}
	Global_1900383.f_433 = iVar1;
	if (bVar0)
	{
		iVar2 = Global_1900383.f_432;
		iVar2++;
		if (iVar2 > 5)
		{
			iVar2 = 0;
		}
		Global_1900383.f_432 = iVar2;
	}
}

void func_69()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	func_323(Global_1900383.f_434, Global_1900383.f_435);
	bVar0 = false;
	iVar1 = Global_1900383.f_435;
	iVar1++;
	if (iVar1 >= 3)
	{
		iVar1 = 0;
		bVar0 = true;
	}
	Global_1900383.f_435 = iVar1;
	if (bVar0)
	{
		iVar2 = Global_1900383.f_434;
		iVar2++;
		if (iVar2 > 5)
		{
			iVar2 = 0;
		}
		Global_1900383.f_434 = iVar2;
	}
}

void func_70()
{
	int iVar0;
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (Global_16)
	{
		return;
	}
	if (__LIB_6__::func_667())
	{
		return;
	}
	switch (Global_1900383.f_317.f_1)
	{
		case 0:
			func_324(0);
			break;
		case 1:
			func_324(1);
			break;
		case 2:
			func_324(6);
			break;
	}
	iVar0 = Global_1900383.f_317.f_1;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1900383.f_317.f_1 = iVar0;
}

void func_74()
{
	if (DATAFILE::_0x603AC35FD4602C76(Global_1913814.f_202))
	{
		DATAFILE::_DATAFILE_UNLOAD(Global_1913814.f_202);
	}
	__LIB_1__::func_724(128);
	func_328(6);
}

bool func_78(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = DATAFILE::_0xD97D8D905F1562F2(iParam0);
	while ((!DATAFILE::_0x603AC35FD4602C76(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (bVar1)
	{
		__LIB_2__::func_822();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

bool func_82(int iParam0, struct<4> Param1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<4> Var7;
	int iVar11;
	struct<5> Var12;
	if (iParam0 == 0)
	{
		return false;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (__LIB_0__::func_144(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (__LIB_0__::func_800(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					__LIB_0__::func_610(&Var7);
					if (func_334(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							func_335(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar67;
	float fVar68;
	bool bVar69;
	int iVar70;
	bool bVar71;
	int iVar72;
	int iVar73;
	struct<2> Var74;
	struct<6> Var76;
	int iVar82;
	int iVar83;
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!__LIB_0__::func_818(iParam0, 1))
	{
		return;
	}
	if (__LIB_10__::func_818(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	iVar1 = __LIB_0__::func_398(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		bVar2 = true;
	}
	else
	{
		bVar2 = false;
	}
	if (bVar2)
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
		{
			return;
		}
	}
	vVar3 = { func_337(iParam0) };
	fVar6 = func_338(iParam0);
	if (__LIB_0__::func_86(vVar3))
	{
		return;
	}
	iVar7 = __LIB_0__::func_821(iParam0);
	STREAMING::REQUEST_COLLISION_FOR_MODEL(iVar7);
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar3);
	iVar8 = MISC::GET_GAME_TIMER();
	if (!bVar2)
	{
		func_339(iParam0);
		if (!__LIB_11__::func_981())
		{
			return;
		}
		if (!func_341(iParam0))
		{
			return;
		}
		iVar1 = __LIB_17__::func_713(iVar7, vVar3, fVar6, 0, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return;
		}
		__LIB_0__::func_835(iParam0, iVar1);
		__LIB_1__::func_177(iVar1);
		func_344(iVar1, iParam0);
		__LIB_12__::func_560(iParam0);
		PED::_SET_PED_OUTFIT_PRESET(iVar1, 0, false);
		uVar9 = 57;
		__LIB_12__::func_199(iParam0, &uVar9);
		__LIB_12__::func_585(iParam0, &uVar9);
		func_347(iParam0);
		__LIB_18__::func_777(iParam0);
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar67 = PLAYER::_0x227B06324234FB09(iVar0, iVar1);
		}
		if (__LIB_0__::func_795(iParam0))
		{
			fVar68 = func_349(iParam0);
			PED::_0x4DB9D03AC4E1FA84(iVar1, fVar68, fVar68, 0);
			TASK::TASK_ANIMAL_WRITHE(iVar1, 0, 1);
		}
		__LIB_0__::func_837(iParam0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar7);
		func_350(iParam0, iVar8);
	}
	bVar69 = false;
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar1))
	{
		bVar69 = true;
	}
	if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(iVar1))
	{
		iVar70 = func_351(iParam0) + 5000;
		if (iVar70 < iVar8)
		{
		}
		else
		{
			bVar69 = true;
		}
	}
	if (bVar69)
	{
		return;
	}
	bVar71 = false;
	iVar72 = __LIB_0__::func_479();
	if (iParam0 == iVar72)
	{
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar0, iVar1);
		bVar71 = true;
	}
	if (bVar71)
	{
		PED::SET_PED_CONFIG_FLAG(iVar1, 186, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iVar1, 186, true);
	}
	iVar73 = __LIB_12__::func_200(iParam0);
	__LIB_0__::func_663(iVar1, iVar73);
	Var74 = { __LIB_1__::func_622(iParam0) };
	if (bVar71)
	{
		Var76 = { __LIB_2__::func_229() };
	}
	else
	{
		__LIB_12__::func_223(&Var76);
	}
	iVar82 = __LIB_12__::func_533(iVar1, 2);
	iVar83 = func_358(iVar82);
	func_359(iParam0, iVar83);
	if (!bVar71 && func_360(iParam0))
	{
		__LIB_0__::func_170(iVar1, 0);
	}
	__LIB_2__::func_299(iVar1, &Var74, &Var76, iVar83);
	func_363(iParam0);
	__LIB_0__::func_798(iParam0);
	__LIB_1__::func_552(iParam0);
	func_364(iParam0);
	func_365(iParam0);
	__LIB_12__::func_31(iParam0);
}

bool func_91()
{
	if (!__LIB_0__::func_382(256))
	{
		return false;
	}
	if (Global_1879534)
	{
		return false;
	}
	if (__LIB_0__::func_91())
	{
		return false;
	}
	if (__LIB_0__::func_28() && !__LIB_0__::func_293(32))
	{
		return false;
	}
	if (__LIB_4__::func_377(2) || __LIB_4__::func_377(4))
	{
		return false;
	}
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
	{
		return false;
	}
	if (PED::_IS_PED_HOGTIED(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return false;
	}
	return true;
}

void func_92(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, vector3 vParam19, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	bVar0 = false;
	if (vParam7.z)
	{
		if (__LIB_0__::func_819(0) >= 1)
		{
			bVar0 = true;
		}
	}
	bVar1 = false;
	if (vParam19.z)
	{
		if (__LIB_0__::func_819(1) >= 1)
		{
			bVar1 = true;
		}
	}
	iVar2 = MISC::GET_GAME_TIMER();
	switch (__LIB_12__::func_201())
	{
		case 0:
			__LIB_17__::func_529(1);
		case 1:
			func_371(0);
			func_372(-72209530);
			func_373(0, 0);
			func_373(1, 0);
			__LIB_1__::func_724(1);
			__LIB_17__::func_529(2);
		case 2:
			if (!__LIB_4__::func_377(1))
			{
				return;
			}
			__LIB_17__::func_529(3);
		case 3:
			func_374(iVar2);
			__LIB_1__::func_724(1);
			__LIB_17__::func_529(4);
		case 4:
			bVar3 = false;
			bVar4 = true;
			bVar5 = true;
			if (__LIB_1__::func_898() == 8)
			{
				if (!bVar3)
				{
					if (!__LIB_0__::func_104())
					{
						__LIB_1__::func_240(12, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (__LIB_1__::func_185(37) && !__LIB_1__::func_185(43))
			{
				if (!bVar3)
				{
					if (!__LIB_0__::func_104())
					{
						__LIB_1__::func_240(10, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (__LIB_1__::func_185(43) && !__LIB_1__::func_185(44))
			{
				if (__LIB_0__::func_815(0) == 1)
				{
					if (!bVar3)
					{
						if (!__LIB_0__::func_104())
						{
							__LIB_1__::func_240(10, 1);
						}
						bVar3 = true;
					}
					bVar4 = false;
				}
				if (vParam19.z)
				{
					if (bVar1)
					{
					}
				}
			}
			if (__LIB_1__::func_128(5))
			{
				if (__LIB_0__::func_815(0) == 0 && (__LIB_0__::func_815(1) == 0 || !bVar1))
				{
					if (!bVar3)
					{
						if (!__LIB_0__::func_104())
						{
							func_377();
						}
						bVar3 = true;
					}
					bVar4 = false;
					bVar5 = false;
				}
			}
			if ((__LIB_0__::func_815(0) == 0 && (__LIB_0__::func_815(1) == 0 || !bVar1)) && __LIB_0__::func_815(5) == 0)
			{
				if (!bVar3)
				{
					if (!__LIB_0__::func_104())
					{
						__LIB_1__::func_240(11, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (__LIB_0__::func_815(0) == 1 || (__LIB_0__::func_815(1) == 1 && bVar1))
			{
				iVar6 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
				if (INTERIOR::IS_VALID_INTERIOR(iVar6))
				{
					if (!bVar3)
					{
						if (func_378(iVar6))
						{
							if (!__LIB_0__::func_104())
							{
								__LIB_1__::func_240(14, 1);
							}
						}
						else if (func_379(iVar6))
						{
							if (!__LIB_0__::func_104())
							{
								__LIB_1__::func_240(15, 1);
							}
						}
						else if (!__LIB_0__::func_104())
						{
							__LIB_1__::func_240(13, 1);
						}
						if (__LIB_0__::func_797(0))
						{
							fVar7 = __LIB_1__::func_136(0);
							iVar8 = __LIB_0__::func_398(0);
							if (!__LIB_1__::func_52(0) && !__LIB_11__::func_556(0))
							{
								if (__LIB_0__::func_665(Global_35, iVar8, 1, 1) <= fVar7)
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar8, Global_35, 0, -1f, -1f, -1f);
								}
							}
						}
						if (__LIB_0__::func_797(1))
						{
							fVar7 = __LIB_1__::func_136(1);
							iVar8 = __LIB_0__::func_398(1);
							if (!__LIB_1__::func_52(1) && !__LIB_11__::func_556(1))
							{
								if (__LIB_0__::func_665(Global_35, iVar8, 1, 1) <= fVar7)
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar8, Global_35, 0, -1f, -1f, -1f);
								}
							}
						}
						bVar3 = true;
					}
					bVar4 = false;
					bVar5 = false;
				}
			}
			if (__LIB_4__::func_377(16) || !__LIB_0__::func_293(32))
			{
				if (!bVar3)
				{
					if (!__LIB_0__::func_104())
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1900383.f_378.f_12)))
						{
							__LIB_0__::func_45(&(Global_1900383.f_378.f_12), 10000, 0, 0, 0, 1);
						}
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (vParam7.z)
			{
				if (!bVar0)
				{
					if (!bVar3)
					{
						if (!__LIB_0__::func_104())
						{
							__LIB_1__::func_240(7, 1);
						}
						bVar3 = true;
					}
					bVar4 = false;
				}
			}
			if (vParam19.z)
			{
				if (!bVar1)
				{
					if (!vParam7.z)
					{
						if (!bVar3)
						{
							if (!__LIB_0__::func_104())
							{
								__LIB_1__::func_240(7, 1);
							}
							bVar3 = true;
						}
					}
					bVar5 = false;
				}
			}
			if (vParam7.z)
			{
				if (func_189(0))
				{
					if (!bVar3)
					{
						if (!__LIB_0__::func_104())
						{
							__LIB_1__::func_240(16, 1);
						}
						bVar3 = true;
					}
				}
			}
			if (vParam19.z && bVar1)
			{
				if (func_189(1))
				{
					if (!vParam7.z)
					{
						if (!bVar3)
						{
							if (!__LIB_0__::func_104())
							{
								__LIB_1__::func_240(16, 1);
							}
							bVar3 = true;
						}
					}
				}
			}
			PLAYER::_0x9044835BE9D9DBFE(uParam0, (bVar4 || bVar5));
			if (!bVar4)
			{
				if (vParam7.z)
				{
					__LIB_1__::func_552(0);
					func_382(0);
				}
			}
			if (!bVar5)
			{
				if (vParam19.z)
				{
					__LIB_1__::func_552(1);
					func_382(1);
				}
			}
			if (!bVar4 && !bVar5)
			{
				__LIB_17__::func_529(1);
				return;
			}
			__LIB_17__::func_529(5);
		case 5:
			if (__LIB_1__::func_185(43) && !__LIB_1__::func_185(44))
			{
				func_373(0, 6);
			}
			else
			{
				func_383(0);
			}
			func_383(1);
			if (func_384(0) == 6 && func_384(1) == 6)
			{
				__LIB_17__::func_529(1);
			}
			break;
	}
}

int func_93()
{
	if (__LIB_4__::func_377(2) || __LIB_4__::func_377(4))
	{
		__LIB_1__::func_724(2);
		__LIB_1__::func_724(4);
		return 1;
	}
	return 0;
}

void func_98(int iParam0, var uParam1)
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
	Global_40.f_1095.f_1[iParam0 /*436*/].f_420 = uParam1;
}

void func_104(int iParam0)
{
	int iVar0;
	bool bVar1;
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	__LIB_0__::func_798(iParam0);
	if (__LIB_3__::func_829(56))
	{
		__LIB_4__::func_861(56);
	}
	if (__LIB_1__::func_262(56))
	{
		__LIB_5__::func_781(56);
	}
	if (__LIB_3__::func_829(57))
	{
		__LIB_4__::func_861(57);
	}
	if (__LIB_1__::func_262(57))
	{
		__LIB_5__::func_781(57);
	}
	bVar1 = false;
	if (iParam0 == 0)
	{
		bVar1 = true;
	}
	else if ((iParam0 == 1 && __LIB_0__::func_815(0) == 0) && __LIB_0__::func_815(5) == 0)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_188(iParam0, 1);
	}
	else
	{
		func_202(iParam0, 0);
	}
}

void func_105(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_10__::func_818(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (__LIB_0__::func_797(iParam0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = __LIB_0__::func_398(iParam0);
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
		}
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		if (PED::_0xAA9F048DCF69B6DC(iVar2))
		{
			if (!__LIB_1__::func_1(iVar2))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar2, false);
			}
		}
		if (__LIB_0__::func_818(iParam0, 4))
		{
			__LIB_1__::func_162(iParam0);
		}
		else if (__LIB_0__::func_818(iParam0, 8))
		{
			__LIB_0__::func_798(iParam0);
			__LIB_4__::func_965(iParam0);
			PED::SET_PED_KEEP_TASK(iVar1, true);
			TASK::TASK_SMART_FLEE_PED(iVar1, Global_35, 500f, -1, 0, 1f, 0);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		}
		else if (__LIB_0__::func_818(iParam0, 2))
		{
			__LIB_0__::func_798(iParam0);
			__LIB_4__::func_965(iParam0);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		}
	}
	if (__LIB_0__::func_818(iParam0, 16))
	{
		func_203(iParam0);
	}
	__LIB_0__::func_835(iParam0, 0);
	__LIB_0__::func_836(iParam0);
	__LIB_12__::func_31(iParam0);
	__LIB_0__::func_783(iParam0, 2);
	__LIB_0__::func_783(iParam0, 4);
	__LIB_0__::func_783(iParam0, 8);
	__LIB_0__::func_783(iParam0, 16);
}

bool func_108()
{
	return Global_1900383.f_404.f_5;
}

Vector3 func_109()
{
	return Global_1900383.f_404.f_1;
}

float func_111()
{
	return Global_1900383.f_404.f_4;
}

void func_112(float fParam0)
{
	Global_1900383.f_404.f_4 = fParam0;
}

void func_113(int iParam0)
{
	Global_1900383.f_404.f_5 = iParam0;
}

int func_114(int iParam0)
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
			func_116(6, 1);
		}
		else
		{
			func_403(iParam0);
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
		func_405(iParam0, 0);
		__LIB_12__::func_544();
		__LIB_1__::func_643();
		return 1;
	}
	return 0;
}

void func_116(int iParam0, int iParam1)
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
	func_408(iParam0, iParam1);
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

bool func_117(struct<5> Param0, var uParam5, var uParam6, int iParam7, bool bParam8)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (!Param0.f_2)
	{
		return false;
	}
	if (!Param0.f_3)
	{
		return false;
	}
	if (Param0.f_4)
	{
		return false;
	}
	if (bParam8)
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			return false;
		}
		*iParam7 = PED::GET_MOUNT(Global_35);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam7))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*iParam7))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(*iParam7))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(*iParam7))
	{
		return false;
	}
	if (__LIB_1__::func_16(*iParam7))
	{
		return false;
	}
	if (__LIB_1__::func_15(*iParam7))
	{
		return false;
	}
	if (func_409(*iParam7))
	{
		return false;
	}
	if (func_410(*iParam7))
	{
		return false;
	}
	if (__LIB_12__::func_202(*iParam7))
	{
		return false;
	}
	if (__LIB_11__::func_451(*iParam7))
	{
		return false;
	}
	if (func_411(*iParam7))
	{
		return false;
	}
	bVar0 = __LIB_1__::func_923();
	bVar1 = false;
	iVar2 = PED::_0xF103823FFE72BB49(*iParam7);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar1 = true;
		}
	}
	if (bVar0 || bVar1)
	{
	}
	else
	{
		return false;
	}
	return true;
}

void func_118()
{
	Global_1900383.f_414 = 0;
	Global_1900383.f_414.f_1 = 0;
}

void func_119(int iParam0)
{
	char* sVar0;
	bool bVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (__LIB_12__::func_202(iParam0))
	{
		return;
	}
	sVar0 = "bHorseHasBeenStolen";
	bVar1 = false;
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, sVar0, true);
		bVar1 = true;
	}
	else if (!DECORATOR::DECOR_GET_BOOL(iParam0, sVar0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, sVar0, true);
		bVar1 = true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 6, true))
	{
		bVar1 = false;
	}
	if (bVar1)
	{
		func_413(iParam0);
	}
}

void func_122()
{
	func_415(0);
	func_416(1);
}

void func_123()
{
	int iVar0;
	int iVar1;
	if (!__LIB_12__::func_203())
	{
		return;
	}
	iVar0 = func_418();
	iVar1 = __LIB_12__::func_204();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_416(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_416(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_416(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_416(7);
		return;
	}
	if (!__LIB_15__::func_65(iVar1))
	{
		func_416(7);
		return;
	}
	func_416(2);
}

void func_124()
{
	int iVar0;
	int iVar1;
	iVar0 = func_418();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_416(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_416(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_416(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_416(7);
		return;
	}
	iVar1 = PED::_GET_RIDER_OF_MOUNT(iVar0, false);
	if (iVar1 != 0)
	{
		if (iVar1 != Global_35)
		{
			func_416(7);
			return;
		}
	}
	if (PED::_0xE4770DA1B8FF4FD1(iVar0) != 0)
	{
		func_416(7);
		return;
	}
	if (!func_421())
	{
		func_416(7);
		return;
	}
	func_416(3);
}

void func_125()
{
	int iVar0;
	int iVar1;
	iVar0 = func_418();
	iVar1 = __LIB_12__::func_204();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_416(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_416(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_416(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_416(7);
		return;
	}
	if (func_422(iVar0, iVar1))
	{
		func_423(MISC::GET_GAME_TIMER());
		func_416(4);
	}
}

void func_126()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	iVar0 = func_418();
	iVar1 = __LIB_12__::func_204();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_416(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_416(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_416(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_416(7);
		return;
	}
	bVar2 = false;
	if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		bVar2 = true;
	}
	else if (func_424() + 500 < MISC::GET_GAME_TIMER())
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		iVar3 = MISC::GET_GAME_TIMER();
		func_423(iVar3);
		func_425(iVar3);
		func_416(5);
		if (iVar1 == joaat("KIT_HORSE_BRUSH"))
		{
			func_426(iVar0);
			iVar4 = __LIB_12__::func_533(iVar0, 0);
			func_427(iVar4);
			func_428(0);
		}
		else
		{
			func_426(0);
			func_427(0);
			func_428(0);
		}
	}
}

void func_127()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = func_418();
	iVar1 = __LIB_12__::func_204();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_416(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_416(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_416(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_416(7);
		return;
	}
	bVar2 = false;
	if (!PED::_0x7FC84E85D98F063D(Global_35))
	{
		if (func_424() + 500 < MISC::GET_GAME_TIMER())
		{
			bVar2 = true;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("INTERACT")))
	{
		func_429(1);
		bVar2 = true;
	}
	if (bVar2)
	{
		if (func_430())
		{
			if (__LIB_0__::func_192(iVar1, 1147021565))
			{
				func_432(iVar1, 1, 0, 562618531, 0);
			}
			func_433(iVar0, iVar1);
		}
		else
		{
			func_416(7);
			return;
		}
		func_423(MISC::GET_GAME_TIMER());
		func_416(6);
	}
}

void func_128()
{
	bool bVar0;
	bVar0 = false;
	if (!PED::_0x7FC84E85D98F063D(Global_35))
	{
		if (func_424() + 500 < MISC::GET_GAME_TIMER())
		{
			bVar0 = true;
		}
	}
	if (func_434())
	{
		bVar0 = true;
	}
	if (func_430())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_416(7);
	}
}

void func_129()
{
	func_415(0);
	func_416(0);
	ATTRIBUTE::_0xD962F8579D702DB5();
}

void func_130()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = func_435();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
	}
	bVar1 = ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1120483657);
	if (bVar1)
	{
		if (!func_436())
		{
			func_428(1);
		}
	}
	if (!func_436())
	{
		return;
	}
	bVar2 = false;
	if (__LIB_1__::func_16(iVar0))
	{
		iVar3 = __LIB_0__::func_402(iVar0);
		iVar4 = __LIB_12__::func_205(iVar3, 0);
		if (iVar4 > 0)
		{
			__LIB_12__::func_573(iVar3, 0, -1);
			bVar2 = true;
		}
	}
	else
	{
		iVar5 = __LIB_12__::func_533(iVar0, 0);
		if (iVar5 > 0)
		{
			__LIB_15__::func_21(iVar0, 0, -1);
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		PED::_0xE29D8CD66553DBAA(iVar0);
	}
	if (__LIB_12__::func_533(iVar0, 0) == 0)
	{
		func_426(0);
		func_428(0);
	}
}

void func_132(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_23, iParam0);
}

void func_138()
{
	Global_1900383.f_443 = 0;
}

int func_139(var uParam0, var uParam1)
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
				func_203(5);
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
				func_116(1, 0);
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
				func_446(uParam1->f_10);
			}
			__LIB_1__::func_106(uParam1->f_10);
			func_448(uParam1->f_10, uParam1->f_6, uParam1->f_9);
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

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	iVar0 = __LIB_0__::func_821(iParam0);
	if (__LIB_0__::func_819(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7))
	{
		return;
	}
	iVar1 = __LIB_0__::func_398(iParam0);
	fVar2 = ENTITY::GET_ENTITY_SPEED(iVar1);
	bVar3 = false;
	if (PED::_GET_RIDER_OF_MOUNT(iVar1, false) != Global_35)
	{
		bVar3 = true;
	}
	bVar4 = false;
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		bVar4 = true;
	}
	if ((fVar2 < 0.5f || bVar3) || !bVar4)
	{
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_1 = -1;
		Global_1900383.f_317.f_2[iParam0 /*5*/] = -1;
		return;
	}
	if (Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 >= 100f)
	{
		__LIB_12__::func_231(1, 100f);
		fVar5 = (Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 - 100f);
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 = fVar5;
	}
	fVar6 = PED::_GET_PED_STAMINA(iVar1);
	if (fVar6 < 1f)
	{
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_1 = -1;
		Global_1900383.f_317.f_2[iParam0 /*5*/] = -1;
		return;
	}
	if (fVar2 > 0.5f && fVar2 <= 4f)
	{
		if (Global_1900383.f_317.f_2[iParam0 /*5*/] == -1)
		{
			Global_1900383.f_317.f_2[iParam0 /*5*/] = 0;
		}
	}
	if (fVar2 > 4f && fVar2 <= 6f)
	{
		if (Global_1900383.f_317.f_2[iParam0 /*5*/] == -1 || Global_1900383.f_317.f_2[iParam0 /*5*/] == 0)
		{
			Global_1900383.f_317.f_2[iParam0 /*5*/] = 1;
		}
	}
	if (fVar2 > 6f)
	{
		if ((Global_1900383.f_317.f_2[iParam0 /*5*/] == -1 || Global_1900383.f_317.f_2[iParam0 /*5*/] == 0) || Global_1900383.f_317.f_2[iParam0 /*5*/] == 1)
		{
			Global_1900383.f_317.f_2[iParam0 /*5*/] = 2;
		}
	}
	if (fVar2 > 10f)
	{
		if (((Global_1900383.f_317.f_2[iParam0 /*5*/] == -1 || Global_1900383.f_317.f_2[iParam0 /*5*/] == 0) || Global_1900383.f_317.f_2[iParam0 /*5*/] == 1) || Global_1900383.f_317.f_2[iParam0 /*5*/] == 2)
		{
			Global_1900383.f_317.f_2[iParam0 /*5*/] = 3;
		}
	}
	if (Global_1900383.f_317.f_2[iParam0 /*5*/] == -1)
	{
		return;
	}
	iVar7 = MISC::GET_GAME_TIMER();
	if (Global_1900383.f_317.f_2[iParam0 /*5*/].f_1 == -1)
	{
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_1 = iVar7;
		return;
	}
	if (Global_1900383.f_317.f_2[iParam0 /*5*/].f_1 + 5000 < iVar7)
	{
		if (Global_1900383.f_317.f_2[iParam0 /*5*/] == 0 || Global_1900383.f_317.f_2[iParam0 /*5*/] == 1)
		{
			func_454(iParam0, 1);
		}
		else if (Global_1900383.f_317.f_2[iParam0 /*5*/] == 2)
		{
			func_454(iParam0, 2);
		}
		else if (Global_1900383.f_317.f_2[iParam0 /*5*/] == 3)
		{
			func_454(iParam0, 3);
		}
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_1 = -1;
		Global_1900383.f_317.f_2[iParam0 /*5*/] = -1;
	}
}

void func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	iVar0 = __LIB_0__::func_821(iParam0);
	if (__LIB_0__::func_819(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7))
	{
		return;
	}
	iVar1 = __LIB_0__::func_398(iParam0);
	fVar2 = ENTITY::GET_ENTITY_SPEED(iVar1);
	bVar3 = false;
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		bVar3 = true;
	}
	if (((!TASK::_0xEFC4303DDC6E60D3(Global_35) || TASK::_0xED1F514AF4732258(Global_35) != iVar1) || fVar2 < 0.5f) || !bVar3)
	{
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_3 = -1;
		return;
	}
	if (Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 >= 20f)
	{
		__LIB_12__::func_231(4, 20f);
		fVar4 = (Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 - 20f);
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 = fVar4;
	}
	iVar5 = MISC::GET_GAME_TIMER();
	if (Global_1900383.f_317.f_2[iParam0 /*5*/].f_3 == -1)
	{
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_3 = iVar5;
		return;
	}
	if (Global_1900383.f_317.f_2[iParam0 /*5*/].f_3 + 5000 < iVar5)
	{
		func_454(iParam0, 4);
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_3 = -1;
	}
}

void func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	iVar0 = __LIB_0__::func_821(iParam0);
	if (__LIB_0__::func_819(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7))
	{
		return;
	}
	iVar1 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
	{
		return;
	}
	bVar2 = PED::_GET_RIDER_OF_MOUNT(iVar1, false) == Global_35;
	if (!bVar2)
	{
		return;
	}
	iVar3 = PED::_GET_LASSO_TARGET(Global_35);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	if (DECORATOR::DECOR_EXIST_ON(iVar3, "bHasBeenLassoedFromHorse"))
	{
		return;
	}
	bVar4 = __LIB_13__::func_621(iVar3, Global_35);
	if (bVar4)
	{
	}
	DECORATOR::DECOR_SET_BOOL(iVar3, "bHasBeenLassoedFromHorse", true);
}

void func_144(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (__LIB_0__::func_407(Var0.f_1))
	{
		return;
	}
	if (Var0.f_1 == Global_35)
	{
		return;
	}
	iVar2 = Global_1935630.f_40;
	if (PED::IS_PED_INJURED(iVar2))
	{
		return;
	}
	if (__LIB_1__::func_16(iVar2))
	{
	}
	if (ENTITY::IS_ENTITY_A_PED(Var0))
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
		if (!iVar3 == iVar2)
		{
			return;
		}
	}
	else
	{
		return;
	}
	iVar4 = Var0.f_1;
	if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar4, iVar2, 1, 1))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(iVar4))
	{
		return;
	}
	if (DECORATOR::DECOR_EXIST_ON(iVar4, "bHasBeenTrampledByHorse"))
	{
		return;
	}
	bVar5 = __LIB_13__::func_621(iVar4, Global_35);
	if (bVar5)
	{
		if (__LIB_16__::func_416(iVar4, joaat("HONOR_EVENT_TRAMPLED_INNOCENT")))
		{
			__LIB_14__::func_288(0, joaat("HONOR_EVENT_TRAMPLED_INNOCENT"), 0, 0, iVar4, 0, 1065353216 /* Float: 1f */, 0);
		}
	}
	else if (__LIB_0__::func_407(iVar4))
	{
	}
	else if (!__LIB_10__::func_975(iVar4, joaat("HONOR_EVENT_TRAMPLED_INNOCENT")))
	{
		__LIB_14__::func_288(0, joaat("HONOR_EVENT_TRAMPLED_INNOCENT"), 0, 0, iVar4, 0, 1065353216 /* Float: 1f */, 0);
	}
	DECORATOR::DECOR_SET_BOOL(iVar4, "bHasBeenTrampledByHorse", true);
}

void func_145(int iParam0)
{
	int iVar0;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &iVar0, 1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return;
	}
	if (!__LIB_1__::func_16(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
	{
		return;
	}
	func_459();
}

void func_146(int iParam0)
{
	struct<5> Var0;
	int iVar9;
	int iVar10;
	int iVar11;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 9))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0))
	{
		return;
	}
	iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	iVar10 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (!__LIB_1__::func_16(iVar10))
	{
		return;
	}
	if (iVar9 == Global_35)
	{
		iVar11 = __LIB_0__::func_402(iVar10);
		if ((iVar11 != -1 && Var0.f_2 != 0) && Var0.f_4 > 5f)
		{
		}
	}
}

void func_147(int iParam0)
{
	struct<4> Var0;
	int iVar9;
	int iVar10;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 9))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0))
	{
		return;
	}
	iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	iVar10 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar9))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar10))
	{
		return;
	}
	if (__LIB_1__::func_16(iVar10))
	{
		return;
	}
	if (iVar9 != Global_35)
	{
		return;
	}
	func_459(iVar10, Var0.f_2, Var0.f_3);
}

void func_149(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 3))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.x);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
	{
		return;
	}
	if (iVar4 != Global_35)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(vVar0.z))
	{
		iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.z);
		if (ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
			if (ENTITY::_0x9A100F1CF4546629(iVar5) && ENTITY::_0x5594AFE9DE0C01B7(iVar5))
			{
				if (__LIB_1__::func_16(iVar3))
				{
					iVar6 = __LIB_0__::func_402(iVar3);
					iVar7 = __LIB_0__::func_821(iVar6);
					iVar8 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar7, 7);
					if (__LIB_0__::func_819(iVar6) < iVar8)
					{
						__LIB_1__::func_240(37, 0);
					}
					func_192(iVar6, 1);
					func_193(iVar6, MISC::GET_GAME_TIMER());
				}
			}
		}
	}
}

void func_150(int iParam0)
{
	struct<2> Var0;
	int iVar6;
	int iVar7;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 6))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		return;
	}
	iVar7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		return;
	}
	if (iVar7 != Global_35)
	{
		return;
	}
}

void func_151(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 3))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(vVar0.x))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.x))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(vVar0.y))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.y))
	{
		return;
	}
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.x);
	iVar4 = vVar0.z;
	if (iVar3 != Global_35)
	{
		return;
	}
	switch (iVar4)
	{
		case joaat("INTERACTION_POSITIVELONG"):
		case joaat("INTERACTION_POSITIVESHORT"):
			break;
		case joaat("INTERACTION_CANCEL"):
			break;
		case joaat("INTERACTION_COMPLETE"):
			if (iVar4 == joaat("INTERACTION_BRUSH"))
			{
			}
			func_461(1);
			break;
	}
}

void func_152(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	iVar4 = Var0;
	iVar5 = Var0.f_1;
	if (iVar4 != Global_35)
	{
		return;
	}
	if (!__LIB_1__::func_16(iVar5))
	{
		return;
	}
	iVar6 = __LIB_0__::func_402(iVar5);
	vVar7 = { func_245(iVar6) };
	vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar5, true, false) };
	if (!Var0.f_2)
	{
		func_462(iVar6, vVar10);
		func_248(iVar6, vVar10);
		func_249(iVar6, 0f);
		return;
	}
	if (Var0.f_3 == 0)
	{
		return;
	}
	if (!__LIB_0__::func_86(vVar7))
	{
		fVar13 = func_247(iVar6);
		if (fVar13 < 200f)
		{
			func_462(iVar6, vVar10);
			func_454(iVar6, 12);
			return;
		}
	}
	func_454(iVar6, 11);
	func_462(iVar6, vVar10);
	func_248(iVar6, vVar10);
	func_249(iVar6, 0f);
	func_114(iVar5);
	if (__LIB_0__::func_474(44))
	{
		return;
	}
	if (!__LIB_0__::func_293(40))
	{
		return;
	}
	if (!__LIB_2__::func_623())
	{
		return;
	}
	__LIB_1__::func_240(44, 0);
}

void func_153(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<2> Var12;
	var uVar14;
	struct<7> Var20;
	bool bVar27;
	int iVar28;
	int iVar29;
	var uVar30;
	int iVar31;
	struct<2> Var32;
	struct<6> Var34;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 5))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (iVar5 != Global_35)
	{
		return;
	}
	iVar6 = PLAYER::GET_PLAYER_INDEX();
	iVar7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	switch (Var0.f_2)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (!Var0.f_4)
			{
				func_463();
			}
			break;
		case 4:
			break;
		case 5:
			if (ENTITY::IS_ENTITY_DEAD(iVar7))
			{
				return;
			}
			if (Global_1900383.f_442)
			{
				iVar8 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
				MAP::_BLIP_SET_MODIFIER(iVar8, 673950256);
				func_464(41, iVar8, 1);
			}
			func_454(0, 5);
			break;
	}
	if (Var0.f_4 && func_465(Var0.f_2))
	{
		if (Var0.f_3 == 0)
		{
			return;
		}
		PED::SET_PED_CONFIG_FLAG(iVar7, 186, true);
		bVar9 = ENTITY::IS_ENTITY_DEAD(iVar7);
		if (bVar9)
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar6) == iVar7)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar6, 0);
			}
			PERSISTENCE::_0xE225CEF1901F6108(iVar7, 0);
			PERSISTENCE::_0xDC0A1F0ECEC9F0C0(iVar7, 1f);
		}
		__LIB_0__::func_509(Var0.f_3);
		iVar10 = __LIB_0__::func_147();
		if (ENTITY::DOES_ENTITY_EXIST(iVar10))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(iVar10))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar10, true, false);
			}
		}
		iVar11 = __LIB_0__::func_402(iVar7);
		func_467(iVar11);
		Var12 = { __LIB_1__::func_622(iVar11) };
		__LIB_12__::func_223(&uVar14);
		__LIB_2__::func_170(iVar7);
		__LIB_2__::func_299(iVar7, &Var12, &uVar14, 0);
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
		__LIB_0__::func_149(-1);
		__LIB_0__::func_148(1);
		__LIB_11__::func_452(iVar11, 0);
		if (!__LIB_6__::func_299(iVar11, 5))
		{
			__LIB_5__::func_924(iVar11, 5, __LIB_5__::func_984(5));
		}
		__LIB_0__::func_798(iVar11);
		__LIB_1__::func_643();
		__LIB_12__::func_224(iVar7);
	}
	if (Var0.f_4 && func_474(Var0.f_2))
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar7))
		{
			return;
		}
		__LIB_0__::func_798(0);
		__LIB_0__::func_798(1);
		__LIB_0__::func_798(5);
		if (__LIB_0__::func_815(0) == 1)
		{
			if (!__LIB_0__::func_797(0))
			{
				func_203(0);
			}
		}
		Var20.f_1 = 1;
		Var20.f_5 = 0;
		Var20.f_3 = 1;
		Var20.f_2 = 1;
		Var20.f_4 = 0;
		Var20.f_6 = 0;
		Var20 = PLAYER::PLAYER_ID();
		if (func_117(Var20, &iVar7, 0))
		{
			func_119(iVar7);
			func_118();
		}
		Global_1900383.f_442 = 0;
		if (__LIB_1__::func_16(iVar7))
		{
			if (iVar7 == __LIB_0__::func_398(0))
			{
			}
			else if (iVar7 == __LIB_0__::func_398(1))
			{
				func_116(1, 0);
				Global_1900383.f_442 = 1;
			}
			else if (iVar7 == __LIB_0__::func_398(6))
			{
				bVar27 = false;
				if (!bVar27)
				{
					if (__LIB_1__::func_105(0) && __LIB_1__::func_105(1))
					{
						func_116(0, 1);
						func_116(0, 6);
						bVar27 = true;
					}
				}
				if (!bVar27)
				{
					if (__LIB_1__::func_105(0) && !__LIB_1__::func_105(1))
					{
						func_116(0, 1);
						func_116(0, 6);
						bVar27 = true;
					}
				}
				if (!bVar27)
				{
					if (!__LIB_1__::func_105(0))
					{
						func_116(0, 6);
						bVar27 = true;
					}
				}
				Global_1900383.f_442 = 1;
			}
		}
		else
		{
			if (__LIB_1__::func_105(0))
			{
				if (__LIB_1__::func_105(1))
				{
					if (__LIB_1__::func_105(6))
					{
						func_202(6, 0);
						func_203(6);
					}
					func_116(1, 6);
				}
				func_116(0, 1);
			}
			func_475(iVar7);
			Global_1900383.f_442 = 1;
		}
		__LIB_1__::func_177(iVar7);
		if (__LIB_0__::func_797(0))
		{
			iVar28 = __LIB_0__::func_398(0);
			PLAYER::_0x8FBF9EDB378CCB8C(iVar6, iVar28);
		}
		if (__LIB_0__::func_797(1))
		{
			iVar29 = __LIB_0__::func_398(1);
			uVar30 = PLAYER::_0x227B06324234FB09(iVar6, iVar29);
		}
		else
		{
			PLAYER::_0x227B06324234FB09(iVar6, 0);
		}
		iVar31 = __LIB_0__::func_147();
		if (ENTITY::DOES_ENTITY_EXIST(iVar31))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(iVar31))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar31, false, true);
			}
			OBJECT::DELETE_OBJECT(&iVar31);
		}
		__LIB_0__::func_509(0);
		__LIB_16__::func_25(iVar7);
		__LIB_9__::func_810(iVar7);
		if (!ENTITY::_0x808077647856DE62(iVar7, 9))
		{
			ENTITY::_0x18FF3110CF47115D(iVar7, 9, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iVar7, 186, false);
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar7);
		__LIB_0__::func_149(0);
		__LIB_0__::func_148(0);
		__LIB_11__::func_452(0, 0);
		Var32 = { __LIB_1__::func_622(0) };
		Var34 = { __LIB_2__::func_229() };
		__LIB_2__::func_299(iVar7, &Var32, &Var34, 0);
		func_478(0);
		__LIB_1__::func_643();
		func_479();
	}
}

void func_154(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	int iVar25;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	iVar6 = Var0.f_2;
	bVar7 = Var0.f_3;
	if (iVar4 != Global_35)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar4) || PED::IS_PED_INJURED(iVar4))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	fVar8 = __LIB_5__::func_985(iVar5);
	bVar9 = false;
	if (fVar8 == 0f)
	{
		bVar9 = true;
	}
	if (__LIB_1__::func_15(iVar5))
	{
		return;
	}
	if (__LIB_12__::func_202(iVar5))
	{
		return;
	}
	if (__LIB_11__::func_451(iVar5))
	{
		return;
	}
	iVar10 = ENTITY::GET_ENTITY_MODEL(iVar5);
	if (__LIB_12__::func_545(iVar10) || __LIB_12__::func_546(iVar10))
	{
		return;
	}
	iVar11 = PED::_0xE4770DA1B8FF4FD1(iVar5);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		return;
	}
	if (func_480() != iVar5)
	{
		func_481(iVar5);
		__LIB_12__::func_554(0);
		func_483(0);
	}
	bVar12 = false;
	iVar13 = MISC::GET_GAME_TIMER();
	iVar14 = func_484();
	if ((iVar14 + 45000) > iVar13)
	{
		bVar12 = true;
	}
	bVar15 = false;
	if (bVar12 && iVar14 + 15000 > iVar13)
	{
		bVar15 = true;
	}
	bVar16 = __LIB_1__::func_16(iVar5);
	bVar17 = true;
	if (iVar6 == 1 || iVar6 == 3)
	{
		bVar17 = false;
	}
	bVar18 = __LIB_0__::func_394(Global_35, iVar5, 0);
	bVar19 = func_485(iVar5);
	bVar20 = PED::_0xD4D403EA031F351C(iVar5);
	bVar21 = __LIB_0__::func_28();
	bVar22 = __LIB_1__::func_25(Global_1835011[0 /*74*/].f_1, 1);
	bVar23 = false;
	if (bVar21 && !bVar22)
	{
		bVar23 = true;
	}
	func_114(iVar5);
	if (!bVar16)
	{
		return;
	}
	iVar24 = __LIB_0__::func_402(iVar5);
	if ((((bVar17 && !bVar18) && !bVar19) && !bVar20) && !bVar23)
	{
		func_486(iVar5);
	}
	iVar25 = -1;
	switch (iVar6)
	{
		case 0:
			if (bVar7)
			{
				if (bVar12)
				{
					if (!bVar15)
					{
						iVar25 = 10;
					}
				}
				else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar5) > 1.5f)
				{
					iVar25 = 10;
				}
				else
				{
					iVar25 = 9;
				}
			}
			break;
		case 1:
		case 3:
			if (bVar12)
			{
				if (!bVar15)
				{
					iVar25 = 8;
				}
			}
			else if (bVar7)
			{
				iVar25 = 9;
			}
			else if (bVar9)
			{
				iVar25 = 7;
			}
			break;
	}
	if (iVar25 != -1)
	{
		func_454(iVar24, iVar25);
		if ((bVar7 || !bVar12) || !bVar15)
		{
			func_481(iVar5);
			__LIB_12__::func_554(iVar13);
		}
	}
	func_487(iVar24);
}

void func_156(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 3))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.x))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.x))
	{
		return;
	}
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.x);
	if (ENTITY::IS_ENTITY_DEAD(iVar3) || PED::IS_PED_INJURED(iVar3))
	{
		return;
	}
	if (iVar3 != Global_35)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.y))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.y))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y);
	if (ENTITY::IS_ENTITY_DEAD(iVar4) || PED::IS_PED_INJURED(iVar4))
	{
		return;
	}
	if (__LIB_1__::func_15(iVar4))
	{
		return;
	}
	if (__LIB_11__::func_451(iVar4))
	{
		return;
	}
	if (vVar0.z == 0)
	{
		if (!func_488())
		{
			__LIB_1__::func_240(52, 1);
		}
	}
	iVar5 = MISC::GET_GAME_TIMER();
	if (vVar0.z == 1)
	{
		iVar6 = func_489();
		if (__LIB_14__::func_220(54) == 0)
		{
			func_491(MISC::GET_GAME_TIMER());
			__LIB_1__::func_240(54, 0);
		}
		else if (__LIB_14__::func_220(54) < 3)
		{
			if ((iVar6 + 1800000) <= iVar5)
			{
				__LIB_1__::func_240(54, 1);
				func_491(MISC::GET_GAME_TIMER());
			}
		}
		func_492(0);
	}
	if (vVar0.z == 2)
	{
		if (__LIB_1__::func_262(52))
		{
			__LIB_5__::func_781(52);
		}
		if (__LIB_3__::func_829(52))
		{
			__LIB_4__::func_861(52);
		}
		__LIB_1__::func_240(53, 1);
		func_492(1);
	}
	if (vVar0.z != 2)
	{
		return;
	}
	__LIB_0__::func_15(__LIB_0__::func_38(joaat("HORSES_BROKEN"), joaat("WILD")), 1);
	COMPENDIUM::COMPENDIUM_HORSE_WILD_BROKEN(iVar4);
	if (__LIB_1__::func_16(iVar4))
	{
		return;
	}
	if (__LIB_5__::func_987(iVar4) > 0)
	{
		if (__LIB_0__::func_797(1))
		{
			func_202(1, 0);
			func_203(1);
		}
		func_403(iVar4);
	}
	else
	{
		if (__LIB_0__::func_797(6))
		{
			func_202(6, 0);
			func_203(6);
		}
		func_405(iVar4, 1);
	}
	if (!__LIB_1__::func_16(iVar4))
	{
		return;
	}
	iVar7 = __LIB_0__::func_402(iVar4);
	if (iVar7 == -1)
	{
		return;
	}
	if (!func_224(iVar7))
	{
		func_454(iVar7, 6);
		func_495(iVar7, 1);
		func_481(iVar4);
		__LIB_12__::func_554(iVar5);
	}
}

void func_157(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) != Global_35)
	{
		return;
	}
	if (Global_1900383.f_378 != 2)
	{
		return;
	}
	switch (Var0.f_1)
	{
		case -72209530:
			iVar2 = 0;
			break;
		case 1704957293:
			iVar2 = 0;
			break;
		case 869278708:
			iVar2 = 4;
			break;
		case 640210656:
			iVar2 = 0;
			break;
		case 1051485804:
			iVar2 = 2;
			break;
		default:
			iVar2 = 0;
			break;
	}
	func_371(iVar2);
	func_372(Var0.f_1);
	__LIB_0__::func_635(1);
	DECORATOR::DECOR_SET_BOOL(Global_35, "Whistling", true);
}

void func_158(int iParam0)
{
	vector3 vVar0;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	uVar10 = vVar0.x;
	iVar11 = uVar10;
	switch (iVar11)
	{
		case 28:
			__LIB_3__::func_739(1);
			__LIB_12__::func_206(-283002878);
			break;
	}
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar12 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar12))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar12))
	{
		return;
	}
	iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar12);
	if (ENTITY::IS_ENTITY_DEAD(iVar13) || PED::IS_PED_INJURED(iVar13))
	{
		return;
	}
	switch (iVar11)
	{
		case 28:
			__LIB_3__::func_739(1);
			__LIB_12__::func_206(-283002878);
			break;
		case 31:
		case 32:
		case 33:
			func_497(iParam0);
			break;
		case 49:
			func_498(iParam0);
			break;
		case 50:
			func_499(iParam0);
			break;
		default:
			return;
	}
}

void func_159(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 3))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.y))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.y))
	{
		return;
	}
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y);
	if (iVar3 != Global_35)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.x))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.x))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.x);
	if (!__LIB_1__::func_16(iVar4))
	{
		return;
	}
	iVar5 = __LIB_0__::func_402(iVar4);
	func_500();
	func_501(iVar5);
	__LIB_11__::func_455(iVar5, 0);
	__LIB_11__::func_456(iVar5, 0);
	__LIB_11__::func_457(iVar5, -15);
	if (__LIB_3__::func_829(56))
	{
		__LIB_4__::func_861(56);
	}
	if (__LIB_1__::func_262(56))
	{
		__LIB_5__::func_781(56);
	}
	if (__LIB_3__::func_829(57))
	{
		__LIB_4__::func_861(57);
	}
	if (__LIB_1__::func_262(57))
	{
		__LIB_5__::func_781(57);
	}
	iVar6 = vVar0.z;
	__LIB_15__::func_911(iVar4, iVar6);
	PED::_0xEB8886E1065654CD(iVar4, 10, "ALL", 10f);
}

void func_160(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	iVar2 = Var0;
	if (!__LIB_1__::func_16(iVar2))
	{
		return;
	}
	if (func_505())
	{
		if (__LIB_3__::func_829(57))
		{
			__LIB_4__::func_861(57);
		}
		if (__LIB_1__::func_262(57))
		{
			__LIB_5__::func_781(57);
		}
		if (!__LIB_3__::func_829(56) && !__LIB_1__::func_262(56))
		{
			if (func_506() < 3)
			{
				__LIB_1__::func_240(56, 1);
			}
		}
	}
}

void func_161(int iParam0)
{
	struct<2> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Var0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0))
	{
		return;
	}
	if (Global_16 || __LIB_0__::func_91())
	{
		return;
	}
	iVar4 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
	if (INTERIOR::IS_VALID_INTERIOR(iVar4))
	{
		return;
	}
	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar5))
	{
		return;
	}
	if (!__LIB_1__::func_16(iVar5))
	{
		return;
	}
	if (iVar6 == Global_1900383.f_440)
	{
		return;
	}
	if (((__LIB_3__::func_829(61) || __LIB_1__::func_262(61)) || __LIB_3__::func_829(62)) || __LIB_1__::func_262(62))
	{
		return;
	}
	bVar7 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar5, false) == Global_35)
		{
			bVar7 = true;
		}
	}
	bVar8 = false;
	if (!bVar7)
	{
		if (__LIB_0__::func_665(Global_35, iVar5, 1, 1) <= 5f)
		{
			bVar8 = true;
		}
	}
	iVar9 = -1;
	if (bVar7)
	{
		iVar9 = 62;
	}
	else if (bVar8)
	{
		iVar9 = 61;
	}
	if (iVar9 == -1)
	{
		return;
	}
	if (!__LIB_2__::func_623())
	{
		return;
	}
	iVar10 = (__LIB_14__::func_220(61) + __LIB_14__::func_220(62));
	if (iVar10 >= 3)
	{
		return;
	}
	iVar11 = MISC::GET_GAME_TIMER();
	iVar12 = func_507();
	if (iVar10 > 0)
	{
		if (iVar12 == 0)
		{
			func_508(MISC::GET_GAME_TIMER());
			return;
		}
		if ((iVar12 + 600000) > iVar11)
		{
			return;
		}
	}
	__LIB_1__::func_240(iVar9, 1);
	func_509();
	Global_1900383.f_440 = iVar6;
}

void func_162(int iParam0)
{
	vector3 vVar0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 6))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.y))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.x))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.z))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.z))
	{
		return;
	}
	iVar6 = vVar0.y;
	iVar7 = vVar0.x;
	iVar8 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.z);
	if (iVar7 != Global_35)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iVar6))
	{
		iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar6);
		if (PED::IS_PED_HUMAN(iVar9))
		{
			return;
		}
	}
	if (__LIB_1__::func_16(iVar8))
	{
		iVar10 = __LIB_0__::func_402(iVar8);
		iVar11 = 0;
		iVar11 = __LIB_8__::func_694(iVar6);
		if (__LIB_0__::func_144(iVar11, 0))
		{
			if (__LIB_7__::func_599(iVar11))
			{
				if (ENTITY::_0xF59FDE7B4D31A630(iVar6))
				{
					__LIB_16__::func_414(iVar10, iVar11, 1);
				}
			}
		}
	}
	else
	{
		iVar12 = __LIB_8__::func_694(iVar6);
		if (__LIB_0__::func_144(iVar12, 0))
		{
			if ((__LIB_7__::func_599(iVar12) && __LIB_16__::func_251(iVar12) != 0) && __LIB_16__::func_210(__LIB_16__::func_251(iVar12), &iVar13))
			{
				Global_1425228.f_2[iVar13] = iVar8;
			}
		}
	}
	iVar14 = func_286(iVar8, iVar6);
}

void func_163(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_3))
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_3))
	{
		return;
	}
	iVar4 = Var0.f_1;
	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_3);
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		__LIB_18__::func_925(__LIB_7__::func_665(iVar4));
	}
	else
	{
		iVar6 = Var0;
		if (iVar6 != Global_35)
		{
			return;
		}
	}
	bVar7 = false;
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
	{
		bVar7 = true;
	}
	if (!bVar7)
	{
		PERSISTENCE::_0xDC0A1F0ECEC9F0C0(iVar4, 1f);
	}
	iVar8 = func_517(iVar5, iVar4);
}

void func_164(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (Var0 != Global_35)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_3))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_3);
	iVar5 = __LIB_0__::func_402(iVar4);
	switch (iVar5)
	{
		case 0:
		case 1:
			break;
		default:
			return;
	}
	if (!__LIB_16__::func_383(iVar5))
	{
		return;
	}
	if (__LIB_6__::func_84(iVar4, 0))
	{
		return;
	}
	iVar6 = Var0.f_1;
	if (!ENTITY::IS_ENTITY_A_PED(iVar6) && !ENTITY::_0x255B6DB4E3AD3C3E(iVar6))
	{
		return;
	}
	__LIB_16__::func_252(iVar5);
	if (!__LIB_16__::func_253(iVar5))
	{
		func_454(iVar5, 22);
		return;
	}
	__LIB_16__::func_254(iVar5, 0);
	func_454(iVar5, 21);
}

bool func_169(int iParam0)
{
	return __LIB_5__::func_895(iParam0, 0);
}

bool func_171(int iParam0)
{
	if ((iParam0 == 43 || iParam0 == 37) || iParam0 == 22)
	{
		return true;
	}
	return false;
}

bool func_172(int iParam0)
{
	return func_520(iParam0, 2);
}

int func_175(int iParam0)
{
	if (iParam0 == 7)
	{
		return 0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1357549.f_3[iParam0]))
	{
		return Global_1357549.f_3[iParam0];
	}
	return 0;
}

int func_176(vector3 vParam0, int iParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	float fVar10;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam3))
	{
		return 0;
	}
	bVar0 = false;
	if (VOLUME::_DOES_VOLUME_EXIST(iParam4))
	{
		bVar0 = true;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	TASK::_0xB8E213D02F37947D(iParam3, iVar1, joaat("PROP_HITCHINGPOST"), 1, 1, 0, 0);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	fVar4 = 1E+07f;
	iVar5 = 0;
	while (iVar5 < iVar2)
	{
		iVar6 = ITEMSET::GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET(iVar5, iVar1);
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar6))
		{
		}
		else
		{
			vVar7 = { TASK::_GET_SCENARIO_POINT_COORDS(iVar6, true) };
			if (bVar0)
			{
				if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam4, vVar7))
				{
				}
				else
				{
					fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar7, true);
					if (fVar10 < fVar4)
					{
						iVar3 = iVar6;
						fVar4 = fVar10;
					}
				}
				iVar5++;
				ITEMSET::DESTROY_ITEMSET(iVar1);
				return iVar3;
			}
		}
	}
}

int func_177(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_1900383[iParam0 /*45*/].f_44;
}

void func_178(int iParam0, int iParam1)
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
	Global_1900383[iParam0 /*45*/].f_44 = iParam1;
}

bool func_179()
{
	if (__LIB_4__::func_377(16384))
	{
		__LIB_1__::func_724(16384);
		return true;
	}
	return false;
}

bool func_180(int iParam0, int iParam1)
{
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
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1) || PED::IS_PED_INJURED(iParam1))
	{
		return false;
	}
	TASK::TASK_GO_TO_WHISTLE(iParam0, iParam1, 0);
	FLOCK::_0xFF1E339CE40EAAAF(iParam0, -1);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 48, false);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	return true;
}

void func_184(int iParam0)
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
	Global_1900383[iParam0 /*45*/].f_37 = 0;
}

void func_186(int iParam0, int iParam1)
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
	Global_1900383[iParam0 /*45*/].f_37 = iParam1;
}

void func_188(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		return;
	}
	iVar1 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = false;
	if (iVar1 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar0))
	{
		bVar3 = true;
	}
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
	__LIB_0__::func_798(iParam0);
	__LIB_0__::func_798(5);
	if (__LIB_1__::func_105(5))
	{
		func_202(5, 0);
	}
	func_203(5);
	func_116(5, iParam0);
	__LIB_0__::func_837(5, 1);
	__LIB_11__::func_455(5, iParam1);
	if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
	{
		PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
	}
	if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar1)
	{
		PLAYER::_0x227B06324234FB09(iVar0, 0);
	}
	if (bVar2)
	{
		if (bVar3)
		{
			PED::_0x6569F31A01B4C097(iVar1, 0, 1);
			PED::_0x6569F31A01B4C097(iVar1, 1, 1);
			DECORATOR::_DECOR_SET_STRING(iVar1, "loot_long_custom_anim_data_set", "DEAD_HORSE_SADDLE_SWAP_LONG_LOOT_ANIM_DATA");
		}
	}
	if (iParam1 == 2)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
	}
	if (bVar3)
	{
		if (__LIB_0__::func_86(vVar4))
		{
			__LIB_0__::func_149(-1);
			__LIB_0__::func_148(3);
			__LIB_0__::func_150(0f, 0f, 0f);
			__LIB_9__::func_23(-15);
		}
		else
		{
			__LIB_0__::func_149(5);
			__LIB_0__::func_148(0);
			__LIB_0__::func_150(vVar4);
			__LIB_9__::func_23(__LIB_0__::func_23());
		}
	}
	__LIB_18__::func_777(iParam0);
	__LIB_6__::func_412(iParam0);
	func_203(iParam0);
	__LIB_1__::func_643();
}

bool func_189(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1900383[iParam0 /*45*/].f_35;
}

int func_191(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_1900383[iParam0 /*45*/].f_36;
}

void func_192(int iParam0, int iParam1)
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
	Global_1900383[iParam0 /*45*/].f_35 = iParam1;
}

void func_193(int iParam0, int iParam1)
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
	Global_1900383[iParam0 /*45*/].f_36 = iParam1;
}

void func_202(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	__LIB_1__::func_108(iParam0);
	if (__LIB_0__::func_823(iParam0))
	{
		iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (__LIB_0__::func_825(iParam0) != iVar0)
		{
			return;
		}
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return;
	}
	iVar1 = __LIB_0__::func_398(iParam0);
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		bVar2 = true;
	}
	__LIB_0__::func_798(iParam0);
	__LIB_4__::func_965(iParam0);
	__LIB_12__::func_224(iVar1);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
	}
	if (__LIB_0__::func_126(iVar1))
	{
		PHYSICS::_0x0348469DAA17576C(iVar1);
	}
	if (bVar2)
	{
		TASK::TASK_SMART_FLEE_PED(iVar1, Global_35, 500f, -1, 0, 1f, 0);
		PED::SET_PED_KEEP_TASK(iVar1, true);
	}
	iVar3 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar3))
	{
	}
	if (iParam0 == 0)
	{
		PLAYER::_0x8FBF9EDB378CCB8C(iVar3, 0);
	}
	else if (iParam0 == 1)
	{
		PLAYER::_0x227B06324234FB09(iVar3, 0);
	}
	PED::_0xBCC76708E5677E1D(iVar1, 1);
	if (bVar2)
	{
		if (bParam1)
		{
			FLOCK::_0xAEB97D84CDF3C00B(iVar1, 1);
		}
		PED::_0x329772C47DBB2FBC(iVar1);
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
	iVar4 = ENTITY::GET_ENTITY_MODEL(iVar1);
	if (STREAMING::IS_MODEL_VALID(iVar4))
	{
		if (PED::_0xAA9F048DCF69B6DC(iVar4))
		{
			if (!__LIB_1__::func_1(iVar4))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar4, false);
			}
		}
	}
	func_203(iParam0);
}

void func_203(int iParam0)
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
	func_526(iParam0, Var0);
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

void func_204(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_537(iParam0);
}

void func_206(int iParam0)
{
	Global_40.f_1095.f_3135.f_4 = iParam0;
}

void func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	if (__LIB_0__::func_815(iParam0) == 0)
	{
		if (__LIB_1__::func_127(iParam0))
		{
			__LIB_1__::func_608(iParam0);
		}
		return;
	}
	if (!__LIB_1__::func_127(iParam0))
	{
		iVar0 = __LIB_0__::func_821(iParam0);
		iVar1 = func_542(iVar0);
		func_543(iParam0, iVar1);
	}
	Var2.f_9 = -1591664384;
	Var2.f_14 = __LIB_0__::func_821(iParam0);
	Var2.f_15 = __LIB_0__::func_809(iParam0);
	Var2.f_16 = { __LIB_5__::func_978(iParam0) };
	Var2.f_24 = Var2.f_24;
	Var2.f_26 = BUILTIN::FLOOR(__LIB_12__::func_225(iParam0));
	Var2.f_25 = BUILTIN::FLOOR(__LIB_0__::func_833(iParam0));
	Var2.f_27 = __LIB_12__::func_205(iParam0, 0);
	Var2.f_28 = __LIB_12__::func_205(iParam0, 1);
	func_545(iParam0, &Var2);
}

int func_219(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	if (__LIB_0__::func_988())
	{
		__LIB_6__::func_445();
		__LIB_0__::func_989();
	}
	iVar0 = __LIB_5__::func_925();
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		STREAMING::REQUEST_MODEL(iVar0, false);
		return 0;
	}
	iVar1 = OBJECT::CREATE_OBJECT(iVar0, vParam0, true, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	__LIB_0__::func_509(iVar1);
	bVar2 = false;
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
	{
		bVar2 = true;
	}
	bVar3 = false;
	if (ENTITY::_0x88AD6CC10D8D35B2(iVar1))
	{
		bVar3 = true;
	}
	if (!bVar2 || !bVar3)
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
	}
	ENTITY::SET_ENTITY_HEADING(iVar1, fParam3);
	if (bParam4)
	{
		ENTITY::_0x9587913B9E772D29(iVar1, 0);
	}
	TASK::TASK_CARRIABLE(iVar1, joaat("CARRIABLE_SADDLE_BUNDLE"), 0, 0, 0);
	return 1;
}

int func_220()
{
	return Global_40.f_1095.f_3054.f_2;
}

void func_222()
{
	Global_1900383.f_437 = 0;
	Global_1900383.f_437.f_1 = 0;
	Global_1900383.f_437.f_2 = 0;
}

bool func_224(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_435;
}

bool func_225()
{
	return Global_1900383.f_437.f_1;
}

var func_226()
{
	return Global_1900383.f_437;
}

void func_227(int iParam0)
{
	Global_1900383.f_437 = iParam0;
}

void func_228(int iParam0)
{
	Global_1900383.f_437.f_1 = iParam0;
}

var func_230()
{
	return Global_1900383.f_437.f_2;
}

void func_231(int iParam0)
{
	Global_1900383.f_437.f_2 = iParam0;
}

bool func_233()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 440, true))
	{
		return false;
	}
	return true;
}

bool func_235()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 439, true))
	{
		return false;
	}
	return true;
}

bool func_237()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 438, true))
	{
		return false;
	}
	return true;
}

int func_239(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_43;
}

bool func_240(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (Global_1900383[iParam0 /*45*/].f_42 == 0)
	{
		return false;
	}
	return true;
}

void func_241(int iParam0, int iParam1)
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
	Global_1900383[iParam0 /*45*/].f_42 = iParam1;
}

int func_242(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_42;
}

void func_244(int iParam0)
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
	Global_1900383[iParam0 /*45*/].f_43++;
}

Vector3 func_245(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return Global_1900383[iParam0 /*45*/].f_28;
}

Vector3 func_246(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return Global_1900383[iParam0 /*45*/].f_31;
}

float func_247(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_1900383[iParam0 /*45*/].f_34;
}

void func_248(int iParam0, vector3 vParam1)
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
	Global_1900383[iParam0 /*45*/].f_31 = { vParam1 };
}

void func_249(int iParam0, float fParam1)
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
	Global_1900383[iParam0 /*45*/].f_34 = fParam1;
}

void func_250(struct<7> Param0)
{
	int iVar0;
	if (!Param0.f_5)
	{
		return;
	}
	if (__LIB_0__::func_474(34))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(Param0.f_6);
	if (__LIB_12__::func_545(iVar0) || __LIB_12__::func_546(iVar0))
	{
		return;
	}
	if (!TASK::IS_PED_SPRINTING(Param0.f_6))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Param0.f_6))
	{
		return;
	}
	if (__LIB_2__::func_623())
	{
		__LIB_1__::func_240(34, 0);
	}
}

void func_251(struct<7> Param0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	if (!Param0.f_5)
	{
		return;
	}
	if (func_551() >= 3)
	{
		return;
	}
	if (__LIB_1__::func_262(36) || __LIB_3__::func_829(36))
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = func_552();
	if (iVar1 > 0)
	{
		if (iVar1 + 5000 < iVar0)
		{
			func_553();
		}
		else
		{
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Param0.f_6))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Param0.f_6))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Param0.f_6))
	{
		return;
	}
	bVar2 = false;
	if (TASK::IS_PED_SPRINTING(Param0.f_6))
	{
		bVar2 = true;
	}
	if (TASK::IS_PED_RUNNING(Param0.f_6))
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Param0.f_6))
	{
		return;
	}
	fVar3 = PED::_0x22F2A386D43048A9(Param0.f_6);
	if (fVar3 > 0.15f)
	{
		return;
	}
	if (__LIB_1__::func_262(34))
	{
		__LIB_5__::func_781(34);
	}
	if (__LIB_3__::func_829(34))
	{
		__LIB_4__::func_861(34);
	}
	if (__LIB_1__::func_262(35))
	{
		__LIB_5__::func_781(35);
	}
	if (__LIB_3__::func_829(35))
	{
		__LIB_4__::func_861(35);
	}
	if (__LIB_2__::func_623())
	{
		__LIB_1__::func_240(36, 1);
		func_554();
		func_555(MISC::GET_GAME_TIMER());
	}
}

void func_252(struct<7> Param0, struct<11> Param7, var uParam18)
{
	bool bVar0;
	if (!Param7.f_2)
	{
		return;
	}
	if (!Param0.f_5)
	{
		return;
	}
	if (__LIB_0__::func_474(45))
	{
		return;
	}
	if (__LIB_0__::func_28() && !__LIB_1__::func_185(4))
	{
		return;
	}
	bVar0 = false;
	if ((__LIB_0__::func_293(33) && __LIB_0__::func_293(34)) && __LIB_0__::func_293(35))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	if (!__LIB_1__::func_16(Param0.f_6))
	{
		return;
	}
	if (!Param7.f_10)
	{
		return;
	}
	if (__LIB_0__::func_819(7) == 0)
	{
		return;
	}
	if (__LIB_2__::func_623())
	{
		__LIB_1__::func_240(45, 0);
	}
}

void func_253()
{
	int iVar0;
	if (!func_556())
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (func_557() < iVar0)
	{
		__LIB_1__::func_240(59, 0);
		__LIB_12__::func_207(0);
		func_559();
	}
}

void func_254(struct<4> Param0, var uParam4, var uParam5, var uParam6, vector3 vParam7, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, vector3 vParam19, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	struct<5> Var0;
	int iVar12;
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	iVar12 = -1;
	if (vParam7.z)
	{
		iVar12 = 0;
		MISC::_COPY_MEMORY(&Var0, &vParam7, 12);
	}
	else if (vParam19.z)
	{
		iVar12 = 1;
		MISC::_COPY_MEMORY(&Var0, &vParam19, 12);
	}
	if (!__LIB_0__::func_797(iVar12))
	{
		return;
	}
	if (!Var0.f_1)
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!Var0.f_4)
	{
		if (__LIB_3__::func_829(56))
		{
			__LIB_4__::func_861(56);
		}
		if (__LIB_1__::func_262(56))
		{
			__LIB_5__::func_781(56);
		}
		if (__LIB_3__::func_829(57))
		{
			__LIB_4__::func_861(57);
		}
		if (__LIB_1__::func_262(57))
		{
			__LIB_5__::func_781(57);
		}
		return;
	}
	if (TASK::_0x3F8387DB1B9F31B7(Var0, 0) && !func_505())
	{
		if (!__LIB_0__::func_474(57) && !__LIB_0__::func_474(58))
		{
			if (__LIB_3__::func_829(56))
			{
				__LIB_4__::func_861(56);
			}
			if (__LIB_1__::func_262(56))
			{
				__LIB_5__::func_781(56);
			}
			if (__LIB_2__::func_623())
			{
				if (__LIB_18__::func_825(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED")))
				{
					__LIB_1__::func_240(57, 0);
				}
				else
				{
					__LIB_1__::func_240(58, 0);
				}
			}
		}
	}
}

void func_255(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	iVar0 = func_561();
	bVar1 = false;
	iVar2 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		bVar1 = true;
		iVar2 = PED::_0x454AD4DA6C41B5BD(iVar0);
	}
	iVar3 = func_562();
	switch (iVar3)
	{
		case 0:
			func_563(1);
		case 1:
			if (bVar1)
			{
				func_564(iVar0);
				func_563(2);
			}
			break;
		case 2:
			switch (iVar2)
			{
				case 1:
					func_563(3);
					break;
				case 2:
				case 3:
					func_563(5);
					break;
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
				case 4:
				case 5:
					func_563(9);
					break;
				case 6:
					func_563(11);
					break;
				default:
					if (!bVar1)
					{
						func_563(11);
					}
					break;
			}
			break;
		case 3:
			func_565();
			if (func_566(iVar0))
			{
				if (__LIB_2__::func_623())
				{
					__LIB_1__::func_240(48, 1);
				}
			}
			else if (__LIB_2__::func_623())
			{
				__LIB_1__::func_240(47, 1);
			}
			func_563(4);
			break;
		case 4:
			switch (iVar2)
			{
				case 1:
					if (__LIB_3__::func_829(47))
					{
						if (func_566(iVar0))
						{
							__LIB_4__::func_861(47);
							func_563(3);
						}
					}
					if (!bVar1)
					{
						func_563(11);
					}
					break;
				case 2:
				case 3:
					func_563(5);
					break;
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
				case 4:
				case 5:
					func_563(9);
					break;
				case 6:
					func_563(11);
					break;
				default:
					if (!bVar1)
					{
						func_563(11);
					}
					break;
			}
			break;
		case 5:
			func_565();
			if (__LIB_2__::func_623())
			{
				__LIB_1__::func_240(49, 1);
			}
			func_563(6);
			break;
		case 6:
			switch (iVar2)
			{
				case 2:
				case 3:
					break;
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
				case 4:
				case 5:
					func_563(9);
					break;
				case 6:
					func_563(11);
					break;
				default:
					if (!bVar1)
					{
						func_563(11);
					}
					break;
			}
			break;
		case 7:
			func_565();
			if (__LIB_2__::func_623())
			{
				__LIB_1__::func_240(50, 1);
			}
			func_567(MISC::GET_GAME_TIMER());
			func_563(8);
			break;
		case 8:
			if (func_568() + 5000 < MISC::GET_GAME_TIMER())
			{
				func_563(6);
			}
			break;
		case 9:
			func_565();
			if (__LIB_2__::func_623())
			{
				__LIB_1__::func_240(51, 1);
			}
			func_563(10);
			break;
		case 10:
			switch (iVar2)
			{
				case 2:
				case 3:
					func_563(5);
					break;
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
				case 4:
				case 5:
					break;
				case 6:
					func_563(11);
					break;
				default:
					if (!bVar1)
					{
						func_563(11);
					}
					break;
			}
			break;
		case 11:
			func_569();
			func_565();
			func_563(0);
			break;
	}
}

void func_256(struct<6> Param0, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	struct<5> Var0;
	int iVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;
	if (!func_570())
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!Param0.f_5)
	{
		return;
	}
	if (Param7.f_10)
	{
		iVar12 = 0;
		MISC::_COPY_MEMORY(&Var0, &Param7, 12);
	}
	else if (Param19.f_10)
	{
		iVar12 = 1;
		MISC::_COPY_MEMORY(&Var0, &Param19, 12);
	}
	else
	{
		return;
	}
	if (!Var0.f_1)
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (Var0.f_3)
	{
		return;
	}
	if (Var0.f_4)
	{
		return;
	}
	iVar13 = __LIB_12__::func_205(iVar12, 0);
	bVar14 = false;
	iVar15 = -1;
	if (!bVar14)
	{
		if (iVar13 > 50)
		{
			if (func_571() < 3)
			{
				iVar15 = 26;
				bVar14 = true;
			}
		}
	}
	bVar16 = false;
	if (func_572() + 2500 < MISC::GET_GAME_TIMER())
	{
		bVar16 = true;
	}
	if (bVar16)
	{
		if (!bVar14)
		{
			func_573(0);
			func_574();
			return;
		}
	}
	if (!bVar16)
	{
		return;
	}
	if (!__LIB_2__::func_623())
	{
		return;
	}
	__LIB_1__::func_240(iVar15, 1);
	__LIB_12__::func_534(MISC::GET_GAME_TIMER());
	switch (iVar15)
	{
		case 26:
			func_576();
			break;
		default:
			break;
	}
	func_573(0);
	func_574();
}

void func_257(struct<6> Param0, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	struct<5> Var0;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	if (!func_577())
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!Param0.f_5)
	{
		return;
	}
	if (Param7.f_10)
	{
		iVar12 = 0;
		MISC::_COPY_MEMORY(&Var0, &Param7, 12);
	}
	else if (Param19.f_10)
	{
		iVar12 = 1;
		MISC::_COPY_MEMORY(&Var0, &Param19, 12);
	}
	else
	{
		return;
	}
	if (!Var0.f_1)
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (Var0.f_3)
	{
		return;
	}
	if (Var0.f_4)
	{
		return;
	}
	iVar13 = __LIB_11__::func_884(iVar12, 0);
	iVar14 = __LIB_11__::func_884(iVar12, 1);
	bVar15 = false;
	iVar16 = -1;
	if (!bVar15)
	{
		if (__LIB_14__::func_220(32) < 3)
		{
			if (iVar13 == 0 && iVar14 == 0)
			{
				iVar16 = 32;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar13 == 0)
		{
			if (__LIB_14__::func_220(30) < 3)
			{
				iVar16 = 30;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar14 == 0)
		{
			if (__LIB_14__::func_220(31) < 3)
			{
				if (!PED::IS_PED_SWIMMING(Var0))
				{
					iVar16 = 31;
					bVar15 = true;
				}
			}
		}
	}
	if (!bVar15)
	{
		if (iVar13 < 50)
		{
			if (__LIB_14__::func_220(28) < 1)
			{
				iVar16 = 28;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar14 < 50)
		{
			if (__LIB_14__::func_220(29) < 1)
			{
				iVar16 = 29;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar14 == 0)
		{
			if (__LIB_14__::func_220(33) < 3)
			{
				if (PED::IS_PED_SWIMMING(Var0))
				{
					iVar16 = 33;
					bVar15 = true;
				}
			}
		}
	}
	bVar17 = false;
	if (func_579() + 2500 < MISC::GET_GAME_TIMER())
	{
		bVar17 = true;
	}
	if (bVar17)
	{
		if (!bVar15)
		{
			func_580(0);
			func_581();
			return;
		}
	}
	if (!bVar17)
	{
		return;
	}
	if (!__LIB_2__::func_623())
	{
		return;
	}
	__LIB_1__::func_240(iVar16, 1);
	__LIB_12__::func_534(MISC::GET_GAME_TIMER());
	func_580(0);
	func_581();
}

void func_258()
{
	int iVar0[6];
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	if (func_582() == 0)
	{
		return;
	}
	iVar7 = 0;
	iVar0[iVar7] = 32;
	iVar7++;
	iVar0[iVar7] = 30;
	iVar7++;
	iVar0[iVar7] = 31;
	iVar7++;
	iVar0[iVar7] = 28;
	iVar7++;
	iVar0[iVar7] = 29;
	iVar7++;
	iVar0[iVar7] = 43;
	iVar7++;
	bVar8 = false;
	iVar9 = 0;
	while (iVar9 < iVar7)
	{
		if (bVar8)
		{
		}
		else if (__LIB_3__::func_829(iVar0[iVar9]))
		{
			bVar8 = true;
		}
		iVar9++;
	}
	if (bVar8)
	{
		if (!func_583())
		{
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			if (__LIB_3__::func_829(32))
			{
				bVar12 = true;
				bVar13 = true;
			}
			if (__LIB_3__::func_829(30))
			{
				bVar12 = true;
			}
			if (__LIB_3__::func_829(31))
			{
				bVar13 = true;
			}
			if (__LIB_3__::func_829(28))
			{
				bVar12 = true;
			}
			if (__LIB_3__::func_829(29))
			{
				bVar13 = true;
			}
			if (__LIB_3__::func_829(43))
			{
				bVar12 = true;
				bVar13 = true;
			}
			if (bVar10)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 3);
			}
			if (bVar11)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 3);
			}
			if (bVar12)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 3);
			}
			if (bVar13)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 3);
			}
			func_584(1);
		}
	}
	else if (func_583())
	{
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
		func_584(0);
		func_585();
	}
}

void func_259(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	if (!func_586())
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (__LIB_0__::func_474(55))
	{
		return;
	}
	if (!__LIB_2__::func_623())
	{
		return;
	}
	if (__LIB_0__::func_28() && !__LIB_1__::func_185(4))
	{
		return;
	}
	func_206(0);
	if (__LIB_0__::func_815(0) == 1)
	{
		return;
	}
	__LIB_1__::func_240(55, 0);
	iVar0 = __LIB_9__::func_866(9, 1, 1, 0);
	if (iVar0 != 76)
	{
		iVar0 = __LIB_9__::func_866(9, 1, 1, 1);
	}
	if (!__LIB_1__::func_917(iVar0))
	{
		return;
	}
	vVar1 = { __LIB_4__::func_846(iVar0) };
	if (__LIB_0__::func_86(vVar1))
	{
		return;
	}
	iVar4 = MAP::_BLIP_ADD_FOR_COORD(joaat("BLIP_STYLE_SHOP"), vVar1);
	MAP::SET_BLIP_SPRITE(iVar4, joaat("BLIP_SHOP_HORSE"), true);
	MAP::_BLIP_SET_MODIFIER(iVar4, 580546400);
	MAP::_BLIP_SET_MODIFIER(iVar4, 847579139);
	func_590(&iVar4);
}

void func_260()
{
	int iVar0;
	iVar0 = func_591();
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		return;
	}
	if (__LIB_1__::func_262(55))
	{
		return;
	}
	if (__LIB_3__::func_829(55))
	{
		return;
	}
	MAP::REMOVE_BLIP(&iVar0);
}

void func_261(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (__LIB_0__::func_28() && !__LIB_0__::func_293(42))
	{
		return;
	}
	if (!func_592())
	{
		return;
	}
	if (__LIB_0__::func_474(65))
	{
		return;
	}
	if (__LIB_11__::func_394(Global_35))
	{
		return;
	}
	if (func_594())
	{
		return;
	}
	if (!__LIB_2__::func_623())
	{
		return;
	}
	__LIB_1__::func_240(65, 0);
}

void func_262(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	if (!Param0.f_1)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (__LIB_0__::func_28() && !__LIB_0__::func_293(42))
	{
		return;
	}
	if (__LIB_0__::func_28() && __LIB_1__::func_898() == 8)
	{
		return;
	}
	if (!__LIB_0__::func_988())
	{
		return;
	}
	if (__LIB_7__::func_830(7))
	{
		func_596();
		return;
	}
	if (__LIB_5__::func_917() == 3)
	{
		return;
	}
	if (__LIB_11__::func_394(Global_35))
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = func_597();
	if (iVar1 == 0)
	{
		func_598(MISC::GET_GAME_TIMER());
		return;
	}
	if (iVar1 + 10000 > iVar0)
	{
		return;
	}
	if (__LIB_0__::func_665(Global_35, __LIB_0__::func_147(), 1, 1) < 100f)
	{
		return;
	}
	if (__LIB_0__::func_474(64))
	{
		if ((iVar1 + 600000) > iVar0)
		{
			return;
		}
	}
	__LIB_1__::func_240(64, 1);
	func_598(MISC::GET_GAME_TIMER());
}

void func_263(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18)
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!Param0.f_5)
	{
		return;
	}
	iVar0 = __LIB_14__::func_220(66);
	if (iVar0 >= 3)
	{
		return;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(Param0.f_6);
	if (__LIB_12__::func_545(iVar1) || __LIB_12__::func_546(iVar1))
	{
		return;
	}
	if (!TASK::IS_PED_SPRINTING(Param0.f_6))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Param0.f_6))
	{
		return;
	}
	if (!PED::_IS_PED_CARRYING(iParam7))
	{
		return;
	}
	if (!PED::_0x608BC6A6AACD5036(&uVar2, iParam7, 4, 0))
	{
		return;
	}
	if (func_599() == iParam7)
	{
		return;
	}
	if (__LIB_2__::func_623())
	{
		func_600(iParam7);
		__LIB_1__::func_240(66, 0);
	}
}

void func_264(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	int iVar0;
	int iVar1;
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_10 && !Param19.f_10)
	{
		if (func_601())
		{
			func_602(0);
		}
		return;
	}
	if (__LIB_0__::func_641() < 2)
	{
		return;
	}
	if (Param7.f_10)
	{
		iVar0 = 0;
	}
	else if (Param19.f_10)
	{
		iVar0 = 1;
	}
	if (__LIB_0__::func_819(iVar0) >= 2)
	{
		return;
	}
	iVar1 = __LIB_14__::func_220(46);
	if (iVar1 >= 1)
	{
		return;
	}
	if (func_601())
	{
		return;
	}
	func_602(1);
	func_604();
	if (func_605() <= 1)
	{
		return;
	}
	if (!__LIB_2__::func_623())
	{
		return;
	}
	__LIB_1__::func_240(46, 1);
}

void func_265(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	if (!Param0.f_1)
	{
		return;
	}
	if (!__LIB_11__::func_394(Global_35))
	{
		return;
	}
	if (!PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, 1, 0))
	{
		return;
	}
	if (!__LIB_0__::func_125(iVar0))
	{
		return;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_607(iVar1))
	{
		return;
	}
	if (__LIB_2__::func_623())
	{
		__LIB_1__::func_240(67, 1);
	}
}

void func_266()
{
	int iVar0;
	if (__LIB_0__::func_296(0, 0, 1))
	{
		return;
	}
	iVar0 = __LIB_1__::func_194();
	if (iVar0 == 2)
	{
		if (!__LIB_2__::func_514())
		{
			if (!__LIB_0__::func_474(621))
			{
				__LIB_1__::func_240(621, 0);
			}
		}
	}
	if (iVar0 == 3)
	{
		if (!__LIB_2__::func_514())
		{
			if (!__LIB_0__::func_474(622))
			{
				__LIB_1__::func_240(622, 0);
			}
		}
	}
	if (iVar0 == 5)
	{
		if (!__LIB_2__::func_514())
		{
			if (!__LIB_0__::func_474(623))
			{
				__LIB_1__::func_240(623, 0);
			}
		}
	}
	if (iVar0 == 7)
	{
		if (!__LIB_2__::func_514())
		{
			if (!__LIB_0__::func_474(624))
			{
				__LIB_1__::func_240(624, 0);
			}
		}
	}
}

int func_271()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	iVar0 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	iVar1 = 0;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::GET_MOUNT(Global_35) == iVar0)
		{
			iVar1 = 1;
		}
	}
	iVar2 = 0;
	iVar3 = WEAPON::_0xAFFD0CCF31F469B8(iVar0);
	if (__LIB_0__::func_144(iVar3, 0))
	{
		iVar2 = 1;
	}
	bVar4 = false;
	if (__LIB_1__::func_652() || __LIB_1__::func_923())
	{
		bVar4 = true;
	}
	bVar5 = false;
	if (Global_1935630.f_24 || __LIB_0__::func_483(1, 0, 1))
	{
		bVar5 = true;
	}
	if (iVar1 || iVar2)
	{
		if (bVar4 && !bVar5)
		{
			return 1;
		}
	}
	return 0;
}

void func_274(var uParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, uParam0, 94);
}

void func_275(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam1))
		{
			return;
		}
	}
	if (func_614())
	{
		if (PERSISTENCE::_0x5A79220F6D38D7C3(iParam1) != 1E+08f)
		{
			PERSISTENCE::_0xDC0A1F0ECEC9F0C0(iParam1, 1E+08f);
		}
		return;
	}
	bVar1 = false;
	if (__LIB_0__::func_64(0) == 1 || __LIB_0__::func_64(0) == 8)
	{
		bVar1 = true;
	}
	if (bVar1 && __LIB_2__::func_118(iVar0, 0, 1) < 5f)
	{
		if (PERSISTENCE::_0x5A79220F6D38D7C3(iParam1) != 1E+08f)
		{
			PERSISTENCE::_0xDC0A1F0ECEC9F0C0(iParam1, 1E+08f);
		}
		return;
	}
	if (func_616())
	{
		if (PERSISTENCE::_0x5A79220F6D38D7C3(iParam1) != 1.2f)
		{
			PERSISTENCE::_0xDC0A1F0ECEC9F0C0(iParam1, 1.2f);
		}
		return;
	}
	if (PERSISTENCE::_0x5A79220F6D38D7C3(iParam1) != 1f)
	{
		PERSISTENCE::_0xDC0A1F0ECEC9F0C0(iParam1, 1f);
	}
}

void func_278(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			func_617(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_618(iParam0, iParam1, 1, 0);
		}
	}
}

int func_285(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0);
	if (__LIB_1__::func_16(iParam0))
	{
		iVar1 = __LIB_0__::func_402(iParam0);
		if (__LIB_0__::func_144(iParam1, 0))
		{
			if (__LIB_7__::func_599(iParam1))
			{
				__LIB_7__::func_681(iVar1, iParam1, iParam2);
			}
		}
	}
	return func_626(iVar0, iParam1, iParam2, bParam3, iParam4);
}

int func_286(int iParam0, int iParam1)
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
		iVar1 = __LIB_7__::func_665(iParam1);
		if (!__LIB_0__::func_144(iVar1, 0))
		{
			iVar1 = __LIB_8__::func_694(iParam1);
		}
	}
	else
	{
		iVar1 = __LIB_8__::func_694(iParam1);
	}
	iVar2 = __LIB_12__::func_236(iVar0, iVar1, 1);
	return iVar2;
}

bool func_287(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_422;
}

int func_289(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_422.f_1;
}

int func_291(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return -15;
	}
	if (iParam0 >= 7)
	{
		return -15;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_422.f_2;
}

void func_293(int iParam0)
{
	char* sVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	sVar0 = "StableOwnedHorse";
	if (DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		DECORATOR::DECOR_REMOVE(iParam0, sVar0);
	}
}

void func_294(int iParam0)
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
	__LIB_0__::func_504(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
}

int func_295(int iParam0)
{
	int iVar0;
	if (!__LIB_14__::func_458(iParam0))
	{
		return -1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "StableOwnedHorse");
	return iVar0;
}

void func_296(int iParam0, int iParam1)
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
	Global_40.f_1095.f_1[iParam0 /*436*/].f_422 = iParam1;
}

void func_297(int iParam0, int iParam1)
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
	Global_40.f_1095.f_1[iParam0 /*436*/].f_422.f_1 = iParam1;
}

void func_298(int iParam0, int iParam1)
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
	Global_40.f_1095.f_1[iParam0 /*436*/].f_422.f_2 = iParam1;
}

int func_299(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	if (!__LIB_0__::func_797(iParam0))
	{
		bVar0 = true;
	}
	iVar1 = __LIB_0__::func_398(iParam0);
	if (!bVar0)
	{
		if (!__LIB_6__::func_84(iVar1, 0))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		iVar2 = func_629(iVar1, 0);
		if (!ENTITY::IS_ENTITY_A_PED(iVar2) && !ENTITY::_0x255B6DB4E3AD3C3E(iVar2))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

bool func_301(int iParam0)
{
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_425.f_1 != -15;
}

var func_302(int iParam0)
{
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_425.f_1;
}

int func_303(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_1__::func_110(iParam0, iParam1, 1))
	{
		iVar0 = (__LIB_0__::func_41(iParam0) - __LIB_0__::func_41(iParam1));
	}
	else
	{
		iVar0 = (__LIB_0__::func_41(iParam1) - __LIB_0__::func_41(iParam0));
	}
	while (iVar0 < 0)
	{
		iVar0 += 24;
	}
	while (iVar0 > 23)
	{
		iVar0 = (iVar0 - 24);
	}
	return iVar0;
}

void func_305(int iParam0, int iParam1)
{
	Global_40.f_1095.f_1[iParam0 /*436*/].f_425.f_1 = iParam1;
}

void func_307(int iParam0)
{
	__LIB_1__::func_148(&(Global_1900383.f_317.f_38[iParam0 /*3*/]));
}

bool func_309(int iParam0, float fParam1)
{
	return __LIB_12__::func_232(&(Global_1900383.f_317.f_38[iParam0 /*3*/]), fParam1);
}

char* func_312(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_BUELL_WARVETS"):
			return "HORSE_NAME_BUELL_WARVETS";
		case joaat("A_C_HORSE_JOHN_ENDLESSSUMMER"):
			return "HORSE_NAME_JOHN_ENDLESSSUMMER";
	}
	return "";
}

int func_321(int iParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (PED::_GET_CARRIER_AS_PED(iParam1) != iParam0)
	{
		return 0;
	}
	iVar0 = ENTITY::_0x61914209C36EFDDB(iParam1);
	if (iVar0 == 5)
	{
		return 1;
	}
	if (iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

void func_322(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return;
	}
	if (!__LIB_0__::func_293(40))
	{
		if (__LIB_0__::func_818(iParam0, 128))
		{
			return;
		}
		if (__LIB_8__::func_622(iParam1, &uVar1))
		{
			iVar2 = __LIB_11__::func_665(iParam1);
			if (__LIB_12__::func_529(iVar0, iParam1) != iVar2)
			{
				__LIB_9__::func_820(iVar0, iParam1, iVar2);
			}
		}
		return;
	}
	if (__LIB_11__::func_451(iVar0))
	{
		return;
	}
	iVar3 = MISC::GET_GAME_TIMER();
	fVar4 = func_645(iParam0, iParam1);
	if (fVar4 >= 30f)
	{
		__LIB_17__::func_739(iParam0, iParam1, iVar3);
		return;
	}
	iVar5 = __LIB_11__::func_884(iParam0, iParam1);
	func_647(iVar0, iParam0, iParam1);
	if (func_648(iParam0, iParam1) > 0f)
	{
		func_649(iParam0, iParam1);
	}
	else
	{
		func_650(iVar0, iParam0, iParam1);
		iVar6 = __LIB_11__::func_884(iParam0, iParam1);
		func_651(iParam0, iParam1, iVar5, iVar6);
	}
	__LIB_17__::func_739(iParam0, iParam1, iVar3);
}

void func_323(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return;
	}
	if (!__LIB_0__::func_293(41))
	{
		if (__LIB_9__::func_368(iParam1, &iVar1))
		{
			iVar2 = __LIB_12__::func_208(iParam1);
			ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iVar0, iVar1, iVar2);
		}
		return;
	}
	if (__LIB_11__::func_451(iVar0))
	{
		return;
	}
	iVar3 = MISC::GET_GAME_TIMER();
	fVar4 = func_645(iParam0, iParam1);
	if (fVar4 >= 30f)
	{
		func_655(iParam0, iParam1, iVar3);
		return;
	}
	iVar5 = __LIB_12__::func_205(iParam0, iParam1);
	func_656(iVar0, iParam0, iParam1);
	if (func_657(iParam0, iParam1) > 0f)
	{
		func_658(iParam0, iParam1);
	}
	else
	{
		func_659(iVar0, iParam0, iParam1);
		iVar6 = __LIB_12__::func_205(iParam0, iParam1);
		func_660(iParam0, iParam1, iVar5, iVar6);
	}
	func_655(iParam0, iParam1, iVar3);
}

void func_324(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	struct<6> Var9;
	int iVar15;
	struct<2> Var16;
	struct<6> Var38;
	int iVar45;
	struct<2> Var46;
	struct<6> Var68;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	float fVar80;
	float fVar81;
	float fVar82;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 <= -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	fVar1 = 1f;
	fVar2 = 1f;
	fVar3 = 0f;
	fVar4 = 1f;
	fVar5 = 1f;
	fVar6 = 0f;
	iVar7 = 0;
	iVar8 = 0;
	if (iParam0 == __LIB_0__::func_479())
	{
		Var9 = { __LIB_2__::func_229() };
		iVar15 = Var9.f_1;
		if (__LIB_0__::func_144(iVar15, 0))
		{
			Var16.f_1 = 20;
			ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar15, &Var16);
			iVar45 = 0;
			while (iVar45 < Var16)
			{
				ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var16.f_1[iVar45], &Var38);
				switch (Var38.f_1)
				{
					case 2086291460:
						iVar8 = (iVar8 + BUILTIN::FLOOR((IntToFloat(Var38.f_2) * 0.01f)));
						break;
					case -1620444701:
						iVar7 = (iVar7 + BUILTIN::FLOOR((IntToFloat(Var38.f_2) * 0.01f)));
						break;
					case -225223329:
						fVar3 = (fVar3 + (Var38.f_5 * 0.01f));
						break;
					case 1167068375:
						fVar6 = (fVar6 + (Var38.f_5 * 0.01f));
						break;
					case -845587290:
						fVar5 = (fVar5 - (Var38.f_5 * 0.01f));
						break;
					case 1605773431:
						fVar4 = (fVar4 + (Var38.f_5 * 0.01f));
						break;
				}
				iVar45++;
			}
		}
		iVar15 = Var9.f_3;
		if (__LIB_0__::func_144(iVar15, 0))
		{
			Var46.f_1 = 20;
			ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar15, &Var46);
			iVar75 = 0;
			while (iVar75 < Var46)
			{
				ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var46.f_1[iVar75], &Var68);
				switch (Var68.f_1)
				{
					case 2086291460:
						iVar8 = (iVar8 + BUILTIN::FLOOR((IntToFloat(Var68.f_2) * 0.01f)));
						break;
					case -1620444701:
						iVar7 = (iVar7 + BUILTIN::FLOOR((IntToFloat(Var68.f_2) * 0.01f)));
						break;
					case -225223329:
						fVar3 = (fVar3 + (Var68.f_5 * 0.01f));
						break;
					case 1167068375:
						fVar6 = (fVar6 + (Var68.f_5 * 0.01f));
						break;
					case -845587290:
						fVar5 = (fVar5 - (Var68.f_5 * 0.01f));
						break;
					case 1605773431:
						fVar4 = (fVar4 + (Var68.f_5 * 0.01f));
						break;
				}
				iVar75++;
			}
		}
	}
	if (__LIB_11__::func_879())
	{
		iVar7++;
	}
	func_662(0, fVar3);
	func_662(1, fVar6);
	iVar76 = __LIB_11__::func_454();
	iVar77 = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(iVar0, iVar76);
	if (iVar77 != iVar7)
	{
		ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iVar0, iVar76, iVar7);
	}
	iVar78 = __LIB_9__::func_816();
	iVar79 = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(iVar0, iVar78);
	if (iVar79 != iVar8)
	{
		ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iVar0, iVar78, iVar8);
	}
	fVar80 = PED::_0x95B8E397B8F4360F(iVar0);
	if (fVar80 != fVar1)
	{
		PED::_0xDE1B1907A83A1550(iVar0, fVar1);
	}
	fVar2 = fVar2;
	fVar81 = PED::_0xE7687EB2F634ABF0(iVar0);
	if (fVar81 != fVar4)
	{
		PED::_0x345C9F993A8AB4A4(iVar0, fVar4);
	}
	fVar82 = PED::_0x825F6DD559A0895B(iVar0);
	if (fVar82 != fVar5)
	{
		PED::_0xEF5A3D2285D8924B(iVar0, fVar5);
	}
}

void func_328(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 108)
	{
		return;
	}
	Global_1913814.f_209[iParam0] = 0;
}

bool func_334(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return false;
	}
	if (func_667(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_708(0))
	{
		return false;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(__LIB_0__::func_162(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_335(struct<4> Param0, int iParam4)
{
	struct<11> Var0;
	if (!__LIB_0__::func_708(0))
	{
		return func_669(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!__LIB_0__::func_464(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(__LIB_0__::func_162(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

Vector3 func_337(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return Global_1900383[iParam0 /*45*/].f_19;
}

float func_338(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_1900383[iParam0 /*45*/].f_22;
}

void func_339(int iParam0)
{
	func_671(iParam0);
	func_672(iParam0);
}

bool func_341(int iParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!func_673(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_674(iParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_344(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = __LIB_12__::func_200(iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "HorseGender", iVar0);
	iVar1 = __LIB_0__::func_819(iParam1);
	__LIB_12__::func_209(iParam0, iVar1);
	PED::_0xA69899995997A63B(iParam0, iVar1);
	iVar2 = BUILTIN::FLOOR(__LIB_0__::func_833(iParam1));
	__LIB_5__::func_986(iParam0, iVar2);
	iVar4 = 0;
	while (iVar4 < 2)
	{
		if (__LIB_8__::func_622(iVar4, &uVar3))
		{
			iVar5 = __LIB_11__::func_884(iParam1, iVar4);
			__LIB_9__::func_820(iParam0, iVar4, iVar5);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (__LIB_9__::func_368(iVar7, &uVar6))
		{
			iVar5 = __LIB_12__::func_205(iParam1, iVar7);
			__LIB_9__::func_814(iParam0, iVar7, iVar5);
		}
		iVar7++;
	}
	iVar8 = PLAYER::PLAYER_ID();
	PED::_0xA691C10054275290(iParam0, iVar8, func_679(iParam1));
	if (iParam1 == 0)
	{
		PED::_0x6734F0A6A52C371C(iVar8, func_680(iParam1));
		PED::_0x024EC9B649111915(iParam0, 1);
	}
}

void func_347(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = Global_40.f_1095.f_1[iParam0 /*436*/].f_356[iVar1 /*5*/];
		if (__LIB_0__::func_144(iVar2, 0))
		{
			iVar3 = iVar2;
			uVar4 = Global_40.f_1095.f_1[iParam0 /*436*/].f_356[iVar1 /*5*/].f_1;
			uVar5 = Global_40.f_1095.f_1[iParam0 /*436*/].f_356[iVar1 /*5*/].f_2;
			PED::_0xC412AA1C73111FE0(iVar0, iVar3, uVar4, uVar5, 0);
		}
		iVar1++;
	}
}

float func_349(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_420.f_1;
}

void func_350(int iParam0, int iParam1)
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
	Global_1900383[iParam0 /*45*/].f_23 = iParam1;
}

int func_351(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_23;
}

int func_358(int iParam0)
{
	int iVar0;
	iVar0 = 1745919061;
	if (iParam0 <= 0)
	{
		iVar0 = -2045421226;
	}
	else if (iParam0 < 5)
	{
		iVar0 = -1745814259;
	}
	else if (iParam0 < 10)
	{
		iVar0 = -325933489;
	}
	else if (iParam0 < 15)
	{
		iVar0 = -1065791927;
	}
	else if (iParam0 < 20)
	{
		iVar0 = -844699484;
	}
	else if (iParam0 < 25)
	{
		iVar0 = -1273449080;
	}
	else if (iParam0 < 30)
	{
		iVar0 = 927185840;
	}
	else if (iParam0 < 35)
	{
		iVar0 = 149872391;
	}
	else if (iParam0 < 40)
	{
		iVar0 = 399015098;
	}
	else if (iParam0 < 45)
	{
		iVar0 = -644349862;
	}
	else if (iParam0 < 50)
	{
		iVar0 = 1745919061;
	}
	else if (iParam0 < 55)
	{
		iVar0 = 1004225511;
	}
	else if (iParam0 < 60)
	{
		iVar0 = 1278600348;
	}
	else if (iParam0 < 65)
	{
		iVar0 = 502499352;
	}
	else if (iParam0 < 70)
	{
		iVar0 = -2093198664;
	}
	else if (iParam0 < 75)
	{
		iVar0 = -1837436619;
	}
	else if (iParam0 < 80)
	{
		iVar0 = 1736416063;
	}
	else if (iParam0 < 85)
	{
		iVar0 = 2040610690;
	}
	else if (iParam0 < 90)
	{
		iVar0 = -1173634986;
	}
	else if (iParam0 < 95)
	{
		iVar0 = -867801909;
	}
	else if (iParam0 >= 95)
	{
		iVar0 = 1960266524;
	}
	return iVar0;
}

void func_359(int iParam0, int iParam1)
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
	Global_1900383[iParam0 /*45*/].f_1 = iParam1;
}

bool func_360(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_433;
}

void func_363(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	struct<94> Var10;
	var uVar104;
	var uVar105;
	var uVar106;
	var uVar107;
	var uVar108;
	var uVar109;
	var uVar110;
	var uVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	Var10.f_10 = 10;
	iVar114 = 0;
	while (iVar114 < 3)
	{
		iVar112 = iVar114;
		__LIB_0__::func_576(&Var10);
		func_274(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15[iVar112 /*94*/]), &Var10);
		if (!STREAMING::IS_MODEL_VALID(Var10))
		{
		}
		else if (!STREAMING::HAS_MODEL_LOADED(Var10))
		{
		}
		else
		{
			switch (iVar114)
			{
				case 0:
					vVar6 = { 0f, -1f, 0f };
					break;
				case 1:
					vVar6 = { -1f, 0f, 0f };
					break;
				case 2:
					vVar6 = { 1f, 0f, 0f };
					break;
			}
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, vVar6) };
			if (STREAMING::_0x274EE1B90CFA669E(Var10))
			{
				iVar1 = OBJECT::CREATE_OBJECT(Var10, vVar3, true, true, false, false, true);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
				}
				else
				{
					iVar9 = func_698(iVar114);
					TASK::TASK_CARRIABLE(iVar1, Var10.f_3, iVar0, iVar9, 0);
					ENTITY::_0x399657ED871B3A6C(iVar1, Var10.f_1);
					ENTITY::_0xEF259AA1E097E0AD(iVar1, Var10.f_93);
					iVar115 = func_286(iVar0, iVar1);
					Jump @798; //curOff = 318
					if (STREAMING::IS_MODEL_A_PED(Var10))
					{
						iVar2 = __LIB_1__::func_545(Var10, vVar3, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
						}
						else
						{
							if (ENTITY::_0x9A100F1CF4546629(iVar2))
							{
								if (Var10.f_6 == 2)
								{
									PERSISTENCE::_0x8DE104BEC243A73B(Var10);
								}
								PED::_SET_PED_QUALITY(iVar2, Var10.f_4);
								FLOCK::_0x8B6F0F59B1B99801(iVar2, Var10.f_6);
								PED::_SET_PED_DAMAGE(iVar2, Var10.f_7);
							}
							if (Var10.f_8 != 0)
							{
								PED::_SET_PED_BODY_COMPONENT(iVar2, Var10.f_8);
								if (Var10.f_92)
								{
									iVar116 = joaat("META_OUTFIT_FIELD_DRESSING_001");
									if (PED::_0x4FF3C2B4E6A196C1(Var10.f_8, iVar116, Var10))
									{
										PED::_0x66FF395445A88A6E(iVar2, iVar116, 0);
									}
								}
							}
							iVar113 = 0;
							while (iVar113 < Var10.f_9)
							{
								uVar104 = Var10.f_10[iVar113 /*8*/];
								uVar105 = Var10.f_10[iVar113 /*8*/].f_1;
								uVar106 = Var10.f_10[iVar113 /*8*/].f_2;
								uVar107 = Var10.f_10[iVar113 /*8*/].f_3;
								uVar108 = Var10.f_10[iVar113 /*8*/].f_4;
								uVar109 = Var10.f_10[iVar113 /*8*/].f_5;
								uVar110 = Var10.f_10[iVar113 /*8*/].f_6;
								uVar111 = Var10.f_10[iVar113 /*8*/].f_7;
								PED::_0xBC6DF00D7A4A6819(iVar2, uVar104, uVar105, uVar106, uVar107, uVar108, uVar109, uVar110, uVar111);
								iVar113++;
							}
							PED::_UPDATE_PED_VARIATION(iVar2, false, true, true, true, false);
							if (Var10.f_2 == 2)
							{
								ENTITY::_SET_ENTITY_HEALTH(iVar2, 0, 0);
								PED::SET_PED_CONFIG_FLAG(iVar2, 517, true);
								PERSISTENCE::_0xF5622FA6ACFCA7DB(iVar2, 0);
							}
							if (Var10.f_92)
							{
								PED::_0x6569F31A01B4C097(iVar2, 0, 0);
								ENTITY::_0x6BCF5F3D8FFE988D(iVar2, 1);
							}
							iVar9 = func_698(iVar114);
							TASK::TASK_CARRIABLE(iVar2, Var10.f_3, iVar0, iVar9, 0);
							ENTITY::_0x399657ED871B3A6C(iVar2, Var10.f_1);
							ENTITY::_0xEF259AA1E097E0AD(iVar2, Var10.f_93);
							iVar117 = __LIB_7__::func_665(iVar2);
							if (__LIB_0__::func_144(iVar117, 0))
							{
								if (iVar117 != Var10.f_1)
								{
									Global_40.f_1095.f_1[iParam0 /*436*/].f_15[iVar112 /*94*/].f_1 = iVar117;
									Var10.f_1 = iVar117;
								}
							}
							iVar118 = func_286(iVar0, iVar2);
							func_618(Var10.f_1, 0, 0, 1);
						}
					}
				}
				iVar114++;
			}
		}
	}
}

void func_364(int iParam0)
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
	Global_1900383[iParam0 /*45*/].f_19 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_22 = 0f;
}

void func_365(int iParam0)
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
	Global_1900383[iParam0 /*45*/].f_23 = 0;
}

void func_371(int iParam0)
{
	Global_1900383.f_378.f_9 = iParam0;
}

void func_372(int iParam0)
{
	Global_1900383.f_378.f_10 = iParam0;
}

void func_373(int iParam0, int iParam1)
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
	if (Global_1900383.f_378.f_1[iParam0] != iParam1)
	{
	}
	Global_1900383.f_378.f_1[iParam0] = iParam1;
}

void func_374(int iParam0)
{
	Global_1900383.f_378.f_11 = iParam0;
}

void func_377()
{
	int iVar0;
	iVar0 = Global_40.f_1095.f_1[5 /*436*/].f_11;
	switch (iVar0)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(6)) && __LIB_0__::func_665(Global_35, __LIB_0__::func_398(6), 1, 1) <= 80f)
			{
				__LIB_0__::func_45("WHISTLE_NEAR_UNBONDED", 10000, 0, 0, 0, 1);
			}
			else
			{
				__LIB_0__::func_45("WHISTLE_HORSE_DEAD", 10000, 0, 0, 0, 1);
			}
			break;
		case 2:
			__LIB_0__::func_45("WHISTLE_HORSE_STOLEN", 10000, 0, 0, 0, 1);
			break;
	}
}

bool func_378(int iParam0)
{
	var uVar0;
	int iVar3;
	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("L_14_CAVE_INT"):
			case joaat("GAP_MINE_INT"):
			case joaat("MIL_MINE_CAVE_INT"):
			case joaat("M05_BEARCAVE_MAIN"):
			case joaat("ELH_SEACAVES_INT"):
			case joaat("BEA_01_INT"):
			case joaat("AGU_FUS_CAVE_INT"):
			case 1633500362:
				return true;
		}
	}
	return false;
}

bool func_379(int iParam0)
{
	var uVar0;
	int iVar3;
	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("Q0304_TUNNEL_ENT"):
			case joaat("J_10P_TUNNEL_1A_INT"):
			case joaat("BAC_TUNNELCURVE_INT"):
			case joaat("Q0304_TUNNEL_INT"):
			case joaat("L_08_TRAIN_TUNNEL2_INT"):
			case joaat("BAC_TUNNELEXIT_INT"):
			case joaat("BAC_TUNNELENT_INT"):
			case joaat("J_14_TUNNEL01_INT"):
			case 653987431:
			case joaat("BAC_TUNNEL_INT"):
			case joaat("HEA_TUNNEL_01"):
			case joaat("HEA_TUNNEL_02"):
			case joaat("Q0304_TUNNEL_EXIT"):
			case joaat("J_16_TUNNEL_INT"):
				return true;
		}
	}
	return false;
}

void func_382(int iParam0)
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
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		if (Global_1900383[iParam0 /*45*/].f_25 == 2)
		{
			MAP::_BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, -1814032670);
			MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, -1814032670);
		}
		else if (Global_1900383[iParam0 /*45*/].f_25 == 1)
		{
			MAP::_BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, -272772079);
			MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, -272772079);
		}
	}
}

void func_383(int iParam0)
{
	struct<12> Var0;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<12> Var15;
	struct<12> Var27;
	int iVar39;
	bool bVar40;
	bool bVar41;
	int iVar42;
	int iVar43;
	struct<12> Var44;
	int iVar56;
	int iVar57;
	vector3 vVar58;
	float fVar61;
	vector3 vVar62;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	int iVar71;
	vector3 vVar72;
	var uVar75;
	bool bVar76;
	int iVar77;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_21(iParam0, &Var0);
	iVar12 = __LIB_0__::func_821(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar12))
	{
		func_373(iParam0, 6);
		return;
	}
	iVar13 = __LIB_0__::func_819(iParam0);
	iVar14 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar12, 7);
	func_21(0, &Var15);
	func_21(1, &Var27);
	if (iParam0 == 1 && !Var27.f_2)
	{
		func_373(iParam0, 6);
		return;
	}
	iVar39 = MISC::GET_GAME_TIMER();
	bVar40 = false;
	if (iParam0 == 0)
	{
		bVar40 = true;
		if (!Var15.f_11)
		{
			if (Var27.f_11 && !Var27.f_10)
			{
				bVar40 = false;
			}
		}
	}
	if (iParam0 == 1)
	{
		if (!Var15.f_2)
		{
			bVar40 = true;
		}
	}
	if (bVar40)
	{
	}
	switch (func_384(iParam0))
	{
		case 0:
			func_373(iParam0, 1);
		case 1:
			if (iParam0 == 0)
			{
				if (__LIB_0__::func_815(0) == 1 && !__LIB_0__::func_797(0))
				{
					func_373(iParam0, 2);
					return;
				}
			}
			if (!__LIB_0__::func_797(iParam0))
			{
				func_373(iParam0, 6);
				return;
			}
			if (__LIB_0__::func_819(iParam0) < 1)
			{
				func_373(iParam0, 6);
				return;
			}
			if (!Var0.f_11)
			{
				if (func_700())
				{
					func_373(iParam0, 2);
					return;
				}
				bVar41 = false;
				if (iParam0 == 0)
				{
					if (Var27.f_10)
					{
						bVar41 = true;
					}
				}
				if (iParam0 == 1)
				{
					if (Var15.f_10)
					{
						bVar41 = true;
					}
				}
				if (!bVar40 && bVar41)
				{
					bVar40 = true;
				}
				if (!__LIB_2__::func_623())
				{
					bVar40 = false;
				}
				if (bVar40)
				{
					iVar42 = -1;
					iVar43 = -1;
					if (__LIB_14__::func_220(1) < 3)
					{
						iVar42 = 1;
						if (iVar13 < iVar14)
						{
							iVar43 = 6;
						}
					}
					else
					{
						iVar42 = 2;
					}
					if (bVar41)
					{
						if (iParam0 == 0)
						{
							iVar42 = 3;
						}
						else if (iParam0 == 1)
						{
							iVar42 = 4;
						}
					}
					else
					{
						if (iParam0 == 0)
						{
							MISC::_COPY_MEMORY(&Var44, &Var27, 12);
						}
						else if (iParam0 == 1)
						{
							MISC::_COPY_MEMORY(&Var44, &Var15, 12);
						}
						if (Var44.f_1)
						{
							if (!Var44.f_11)
							{
								iVar42 = 5;
							}
						}
					}
					if (iVar43 != -1)
					{
						__LIB_1__::func_240(iVar43, 1);
					}
					if ((iVar42 == 1 || iVar42 == 3) || iVar42 == 4)
					{
						iVar56 = 0;
						if (iParam0 == 0)
						{
							iVar56 = joaat("BLIP_STYLE_PLAYER_HORSE");
						}
						else if (iParam0 == 1)
						{
							iVar56 = -1230993421;
						}
						if (iVar56 != 0)
						{
							if (iParam0 == 0)
							{
								iVar57 = func_701();
							}
							else if (iParam0 == 1)
							{
								iVar57 = func_702();
							}
							if (!MAP::DOES_BLIP_EXIST(iVar57))
							{
								iVar57 = MAP::_0x3E593DF9C2962EC6(iVar56);
								MAP::_BLIP_SET_MODIFIER(iVar57, 1313031610);
								if (iParam0 == 0)
								{
									func_703(&iVar57);
								}
								else if (iParam0 == 1)
								{
									func_704(&iVar57);
								}
							}
							func_464(iVar42, iVar57, 1);
						}
					}
					else if (iVar42 != -1)
					{
						__LIB_1__::func_240(iVar42, 1);
					}
				}
			}
			func_373(iParam0, 5);
			break;
		case 2:
			__LIB_18__::func_913(&(Global_1900383[iParam0 /*45*/].f_4));
			func_373(iParam0, 3);
		case 3:
			vVar62 = { __LIB_13__::func_548(iParam0) };
			if (!func_707(&(Global_1900383[iParam0 /*45*/].f_4), Global_36, vVar62, Var0, 1065353216 /* Float: 1f */))
			{
				if (Global_1900383[iParam0 /*45*/].f_4.f_1)
				{
					if (!__LIB_0__::func_104())
					{
						__LIB_0__::func_45("WHISTLE_NOSPAWN_AREA", 10000, 0, 0, 0, 1);
					}
					__LIB_0__::func_798(iParam0);
					__LIB_1__::func_265(Global_35, "HORSE_NO_SHOW", joaat("SPEECH_PARAMS_STANDARD"), 0, 1, 0, 0, 1);
					func_373(iParam0, 6);
				}
				return;
			}
			vVar58 = { __LIB_12__::func_210(&(Global_1900383[iParam0 /*45*/].f_4)) };
			fVar61 = __LIB_0__::func_152(vVar58, Global_36, 1);
			if (!__LIB_0__::func_797(iParam0))
			{
				func_448(iParam0, vVar58, fVar61);
				__LIB_1__::func_106(iParam0);
			}
			func_373(iParam0, 4);
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(Var0))
			{
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(Var0) || PED::IS_PED_INJURED(Var0))
			{
				return;
			}
			vVar58 = { __LIB_12__::func_210(&(Global_1900383[iParam0 /*45*/].f_4)) };
			fVar61 = __LIB_0__::func_152(vVar58, Global_36, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Var0, false);
			ENTITY::SET_ENTITY_COORDS(Var0, vVar58, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(Var0, fVar61);
			ENTITY::_0x9587913B9E772D29(Var0, 0);
			func_373(iParam0, 5);
		case 5:
			if (!Var0.f_2)
			{
				func_373(iParam0, 6);
				return;
			}
			if (Var0.f_10)
			{
				func_373(iParam0, 6);
				return;
			}
			bVar65 = false;
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_9))
			{
				if (__LIB_0__::func_407(Var0.f_9))
				{
					if (__LIB_4__::func_377(256))
					{
					}
					else
					{
						bVar65 = true;
					}
				}
				if (func_711(iParam0))
				{
					bVar65 = true;
				}
			}
			if (bVar65)
			{
				func_712(iParam0, 1);
			}
			bVar66 = false;
			if (Var0.f_11 || func_700())
			{
				bVar66 = true;
			}
			if (!bVar66)
			{
				__LIB_1__::func_552(iParam0);
				func_382(iParam0);
				func_373(iParam0, 6);
				return;
			}
			bVar67 = false;
			if (__LIB_4__::func_377(32))
			{
				bVar67 = true;
			}
			bVar68 = true;
			bVar69 = __LIB_6__::func_62();
			bVar70 = func_172(iParam0);
			if (!bVar67)
			{
				if (bVar69)
				{
					if (bVar70)
					{
						iVar71 = __LIB_0__::func_61();
						if (!func_171(iVar71))
						{
							__LIB_1__::func_822(&vVar72, &uVar75);
							bVar76 = false;
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0.f_5, vVar72, true) < 3f)
							{
								bVar76 = true;
							}
							if (__LIB_11__::func_556(iParam0) || bVar76)
							{
								if (bVar40)
								{
									if (__LIB_2__::func_623())
									{
										__LIB_1__::func_240(9, 1);
									}
								}
							}
							else if (bVar40)
							{
								if (__LIB_2__::func_623())
								{
									__LIB_1__::func_240(8, 1);
								}
							}
							bVar68 = false;
						}
					}
				}
			}
			if (bVar68)
			{
				PHYSICS::_0x0348469DAA17576C(Var0);
				ENTITY::FREEZE_ENTITY_POSITION(Var0, false);
				if (func_715() == 0)
				{
					if (__LIB_0__::func_491(Var0, 2043986356))
					{
						func_371(1);
					}
				}
				iVar77 = func_715();
				TASK::TASK_GO_TO_WHISTLE(Var0, Global_35, iVar77);
				FLOCK::_0xFF1E339CE40EAAAF(Var0, -1);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Var0, 48, false);
				func_374(iVar39);
			}
			__LIB_1__::func_552(iParam0);
			func_382(iParam0);
			func_373(iParam0, 6);
			break;
		case 6:
			break;
	}
}

int func_384(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_1900383.f_378.f_1[iParam0];
}

void func_403(int iParam0)
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
		func_202(1, 0);
	}
	func_203(1);
	func_717(iParam0, 1, 0);
	__LIB_0__::func_837(1, 1);
	if (__LIB_0__::func_819(1) == 0)
	{
		__LIB_2__::func_226(1, 1);
	}
	uVar1 = PLAYER::_0x227B06324234FB09(PLAYER::PLAYER_ID(), iParam0);
	__LIB_1__::func_643();
}

void func_405(int iParam0, bool bParam1)
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
		func_202(6, 0);
	}
	func_203(6);
	func_717(iParam0, 6, 0);
	__LIB_0__::func_837(6, 1);
	if (!bParam1)
	{
		func_454(6, 0);
		__LIB_12__::func_554(MISC::GET_GAME_TIMER());
	}
	__LIB_1__::func_643();
}

int func_408(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!__LIB_1__::func_416(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!__LIB_1__::func_416(iParam1, &Var29))
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
		if (!func_721(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_722(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_409(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "CaravanCommonHorse"))
	{
		return true;
	}
	return false;
}

bool func_410(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "CaravanLivestock"))
	{
		return true;
	}
	return false;
}

bool func_411(int iParam0)
{
	char* sVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	sVar0 = "bHorseHasBeenStolen";
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		return false;
	}
	else if (DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		return true;
	}
	return false;
}

void func_413(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	bVar1 = false;
	if (__LIB_12__::func_545(iVar0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	if (__LIB_12__::func_546(iVar0))
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!__LIB_4__::func_377(2048))
	{
		if (bVar1)
		{
			if (!__LIB_10__::func_975(iParam0, joaat("HONOR_EVENT_STEAL_DONKEY")))
			{
				iVar3 = joaat("HONOR_EVENT_STEAL_DONKEY");
			}
		}
		else if (bVar2)
		{
			if (!__LIB_10__::func_975(iParam0, joaat("HONOR_EVENT_STEAL_MULE")))
			{
				iVar3 = joaat("HONOR_EVENT_STEAL_MULE");
			}
		}
		else if (!__LIB_10__::func_975(iParam0, joaat("HONOR_EVENT_STEAL_HORSE")))
		{
			iVar3 = joaat("HONOR_EVENT_STEAL_HORSE");
		}
		if (iVar3 != 0)
		{
			__LIB_14__::func_288(0, iVar3, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
		}
	}
}

void func_415(bool bParam0)
{
	Global_1900372.f_2 = 0;
	Global_1900372.f_1 = 0;
	Global_1900372.f_3 = 0;
	Global_1900372.f_4 = 0;
	Global_1900372.f_5 = 0;
	Global_1900372.f_6 = 0;
	Global_1900372.f_7 = 0;
	if (bParam0)
	{
		Global_1900372.f_8 = 0;
		Global_1900372.f_9 = 0;
		Global_1900372.f_10 = 0;
	}
}

void func_416(int iParam0)
{
	Global_1900372 = iParam0;
}

int func_418()
{
	return Global_1900372.f_2;
}

bool func_421()
{
	int iVar0;
	int iVar1;
	iVar0 = func_418();
	iVar1 = __LIB_12__::func_204();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	if (!PED::_0xD543D3A8FDE4F185(Global_35, iVar0))
	{
		return false;
	}
	if (!__LIB_15__::func_65(iVar1))
	{
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_SWIMMING(iVar0))
	{
		return false;
	}
	return true;
}

bool func_422(int iParam0, int iParam1)
{
	struct<18> Var0;
	bool bVar25;
	int iVar26;
	int iVar27;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return false;
	}
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
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return false;
	}
	Var0.f_3 = -1;
	Var0.f_12 = 4;
	Var0.f_17 = 4;
	if (INVENTORY::_0x0C093C1787F18519(iParam1, &Var0))
	{
	}
	bVar25 = false;
	iVar26 = Var0;
	if (__LIB_12__::func_515(iParam1))
	{
		iVar26 = 0;
		iVar27 = joaat("INTERACTION_FOOD");
		bVar25 = true;
	}
	if ((__LIB_12__::func_517(iParam1) || __LIB_12__::func_518(iParam1)) || __LIB_12__::func_516(iParam1))
	{
		iVar26 = joaat("P_CS_SYRINGE01X");
		iVar27 = joaat("INTERACTION_INJECTION_QUICK");
		bVar25 = true;
	}
	if (__LIB_12__::func_519(iParam1))
	{
		iVar27 = joaat("INTERACTION_OINTMENT");
		bVar25 = true;
	}
	if (__LIB_12__::func_521(iParam1))
	{
		iVar27 = joaat("INTERACTION_BRUSH");
		bVar25 = true;
	}
	if (!bVar25)
	{
		return false;
	}
	TASK::TASK_ANIMAL_INTERACTION(Global_35, iParam0, iVar27, iVar26, 0);
	return true;
}

void func_423(int iParam0)
{
	Global_1900372.f_3 = iParam0;
}

int func_424()
{
	return Global_1900372.f_3;
}

void func_425(int iParam0)
{
	Global_1900372.f_4 = iParam0;
}

void func_426(int iParam0)
{
	Global_1900372.f_8 = iParam0;
}

void func_427(int iParam0)
{
	Global_1900372.f_9 = iParam0;
}

void func_428(int iParam0)
{
	Global_1900372.f_10 = iParam0;
}

void func_429(int iParam0)
{
	Global_1900372.f_7 = iParam0;
}

bool func_430()
{
	return Global_1900372.f_7;
}

int func_432(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
	iVar3 = __LIB_2__::func_465(iParam0, 1);
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
			__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!__LIB_6__::func_462(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_6__::func_395(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_6__::func_395(iParam0, 0, 0) - iParam1) < 0)
		{
			func_432(iParam0, __LIB_6__::func_395(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
		__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_278(iParam0, iParam1);
	return 1;
}

void func_433(int iParam0, int iParam1)
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
		func_739(iParam0, iParam1);
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
		func_742(iParam0, iParam1);
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
		func_745(iParam0, iParam1, iVar0);
		return;
	}
}

bool func_434()
{
	return Global_1900372.f_6;
}

int func_435()
{
	return Global_1900372.f_8;
}

bool func_436()
{
	return Global_1900372.f_10;
}

void func_446(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	__LIB_2__::func_141(&iVar0, &iVar1, &iVar2);
	__LIB_0__::func_810(iParam0, iVar0);
	__LIB_0__::func_811(iParam0, iVar1);
	__LIB_0__::func_812(iParam0, iVar2);
	__LIB_0__::func_837(iParam0, 1);
	__LIB_2__::func_226(iParam0, 1);
}

void func_448(int iParam0, vector3 vParam1, float fParam4)
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
	Global_1900383[iParam0 /*45*/].f_19 = { vParam1 };
	Global_1900383[iParam0 /*45*/].f_22 = fParam4;
}

void func_454(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!__LIB_0__::func_293(43))
		{
			return;
		}
	}
	iVar0 = __LIB_0__::func_821(iParam0);
	if (__LIB_12__::func_545(iVar0) || __LIB_12__::func_546(iVar0))
	{
		return;
	}
	iVar1 = __LIB_0__::func_819(iParam0);
	if (iVar1 >= __LIB_5__::func_921(iVar0))
	{
		return;
	}
	if (__LIB_6__::func_299(iParam0, iParam1))
	{
		return;
	}
	if (__LIB_6__::func_300(iParam0, iParam1))
	{
		return;
	}
	fVar2 = __LIB_5__::func_922(iParam0, iParam1);
	fVar3 = __LIB_5__::func_923(iParam1);
	fVar3 = (fVar3 * (1f + Global_40.f_11095.f_68));
	switch (iParam1)
	{
		case 1:
			iVar4 = __LIB_0__::func_398(iParam0);
			if (__LIB_6__::func_84(iVar4, 0))
			{
				fVar3 = (fVar3 * 0.5f);
			}
			Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 = (Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 + fVar3);
			break;
		case 2:
		case 3:
			if (__LIB_5__::func_778())
			{
				fVar3 = (fVar3 * 2f);
			}
			Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 = (Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 + fVar3);
			break;
		case 4:
			Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 = (Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 + fVar3);
			break;
		case 5:
			if (iVar1 < 1)
			{
				fVar5 = __LIB_0__::func_833(iParam0);
				fVar6 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
				fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1 + 1));
				fVar3 = (fVar7 - (fVar6 + fVar5));
			}
			else
			{
				fVar3 = 0f;
			}
			break;
		default:
			__LIB_12__::func_231(iParam1, fVar3);
			break;
	}
	__LIB_9__::func_826(iParam0, fVar3);
	__LIB_5__::func_924(iParam0, iParam1, (fVar2 + fVar3));
}

void func_459()
{
	int iVar0;
	iVar0 = __LIB_0__::func_402(__LIB_2__::func_825(Global_35));
	if (iVar0 == -1)
	{
		return;
	}
}

void func_461(int iParam0)
{
	Global_1900372.f_6 = iParam0;
}

void func_462(int iParam0, vector3 vParam1)
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
	Global_1900383[iParam0 /*45*/].f_28 = { vParam1 };
}

void func_463()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<6> Var13;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	Var0 = { __LIB_2__::func_229() };
	iVar6 = Var0;
	iVar7 = Var0.f_1;
	iVar8 = Var0.f_2;
	iVar9 = Var0.f_3;
	iVar10 = Var0.f_4;
	iVar11 = Var0.f_5;
	iVar12 = 3;
	iVar19 = joaat("BASE");
	if (func_762(iVar6))
	{
		iVar20 = iVar6;
		Var13 = PED::_0xF6D9E1F3560CBF8E(iVar12, iVar20, iVar19, 0, 0);
	}
	if (func_762(iVar7))
	{
		iVar21 = iVar7;
		Var13.f_1 = PED::_0xF6D9E1F3560CBF8E(iVar12, iVar21, iVar19, 0, 0);
	}
	if (func_762(iVar8))
	{
		iVar22 = iVar8;
		Var13.f_2 = PED::_0xF6D9E1F3560CBF8E(iVar12, iVar22, iVar19, 0, 0);
	}
	if (func_762(iVar9))
	{
		iVar23 = iVar9;
		Var13.f_3 = PED::_0xF6D9E1F3560CBF8E(iVar12, iVar23, iVar19, 0, 0);
	}
	if (func_762(iVar10))
	{
		iVar24 = iVar10;
		Var13.f_4 = PED::_0xF6D9E1F3560CBF8E(iVar12, iVar24, iVar19, 0, 0);
	}
	if (func_762(iVar11))
	{
		iVar25 = iVar11;
		Var13.f_5 = PED::_0xF6D9E1F3560CBF8E(iVar12, iVar25, iVar19, 0, 0);
	}
	func_763(Var13);
}

void func_464(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_378(iParam0, &iVar0, &iVar1);
	if (!__LIB_1__::func_102(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!__LIB_0__::func_447(iParam0, 1024))
	{
		return;
	}
	__LIB_0__::func_379(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_467(int iParam0)
{
	var uVar0;
	var uVar58;
	var uVar116;
	var uVar174;
	var uVar232;
	var uVar248;
	var uVar264;
	int iVar280;
	int iVar281;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	uVar0 = 57;
	uVar58 = 57;
	uVar116 = 57;
	uVar174 = 57;
	__LIB_12__::func_199(iParam0, &uVar0);
	__LIB_12__::func_211(&uVar58);
	func_766(iParam0, &uVar0, 1);
	__LIB_12__::func_226(&uVar0, &uVar58, &uVar116);
	__LIB_12__::func_212(&uVar116);
	__LIB_12__::func_213(iParam0, &uVar174);
	uVar232 = 3;
	uVar248 = 3;
	uVar264 = 3;
	__LIB_12__::func_214(iParam0, &uVar232);
	__LIB_12__::func_215(&uVar248);
	iVar280 = __LIB_12__::func_216(&uVar232);
	iVar281 = __LIB_12__::func_216(&uVar248);
	if (iVar281 > iVar280)
	{
		__LIB_12__::func_217(&uVar248);
	}
	else
	{
		__LIB_12__::func_217(&uVar232);
	}
	__LIB_18__::func_519(iParam0);
	__LIB_12__::func_218(iParam0, &uVar264);
}

int func_474(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 4:
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_475(int iParam0)
{
	int iVar0;
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
	__LIB_0__::func_798(0);
	func_717(iParam0, 0, 0);
	__LIB_0__::func_837(0, 1);
	__LIB_11__::func_941(0);
	PLAYER::_0x8FBF9EDB378CCB8C(PLAYER::PLAYER_ID(), iParam0);
	if (__LIB_0__::func_479() == 0)
	{
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID(), iParam0);
		__LIB_0__::func_149(0);
		__LIB_0__::func_148(0);
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, false);
	__LIB_1__::func_643();
}

void func_478(int iParam0)
{
	var uVar0;
	var uVar58;
	var uVar116;
	var uVar174;
	var uVar232;
	var uVar248;
	var uVar264;
	int iVar280;
	int iVar281;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	uVar0 = 57;
	uVar58 = 57;
	uVar116 = 57;
	uVar174 = 57;
	__LIB_12__::func_211(&uVar0);
	__LIB_12__::func_199(iParam0, &uVar58);
	__LIB_12__::func_585(iParam0, &uVar0);
	__LIB_12__::func_226(&uVar0, &uVar58, &uVar116);
	__LIB_12__::func_213(iParam0, &uVar116);
	__LIB_12__::func_212(&uVar174);
	uVar232 = 3;
	uVar248 = 3;
	uVar264 = 3;
	__LIB_12__::func_215(&uVar232);
	__LIB_12__::func_214(iParam0, &uVar248);
	iVar280 = __LIB_12__::func_216(&uVar232);
	iVar281 = __LIB_12__::func_216(&uVar248);
	if (iVar281 > iVar280)
	{
		__LIB_12__::func_218(iParam0, &uVar248);
	}
	else
	{
		__LIB_12__::func_218(iParam0, &uVar232);
	}
	__LIB_12__::func_217(&uVar264);
	__LIB_18__::func_519(iParam0);
	__LIB_12__::func_227(iParam0);
}

void func_479()
{
	struct<6> Var0;
	Var0 = { func_778() };
	PED::_0x13E7320C762F0477(Var0);
	PED::_0x13E7320C762F0477(Var0.f_1);
	PED::_0x13E7320C762F0477(Var0.f_2);
	PED::_0x13E7320C762F0477(Var0.f_3);
	PED::_0x13E7320C762F0477(Var0.f_4);
	PED::_0x13E7320C762F0477(Var0.f_5);
	func_779();
}

int func_480()
{
	return Global_1900383.f_418;
}

void func_481(int iParam0)
{
	Global_1900383.f_418 = iParam0;
}

void func_483(int iParam0)
{
	Global_1900383.f_418.f_2 = iParam0;
}

int func_484()
{
	return Global_1900383.f_418.f_1;
}

int func_485(int iParam0)
{
	if ((((func_780(iParam0) || __LIB_0__::func_126(iParam0)) || func_781(iParam0)) || func_782(iParam0)) || func_783(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_486(int iParam0)
{
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
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_491(iParam0, -982327190))
	{
		TASK::TASK_STAND_STILL(iParam0, -1);
	}
	FLOCK::_0xFF1E339CE40EAAAF(iParam0, 0);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 48, true);
	POPULATION::_0xF74E134F40192884(iParam0, 2);
	return true;
}

void func_487(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = __LIB_0__::func_819(iParam0);
	if (iVar0 < 2)
	{
		return;
	}
	bVar1 = false;
	iVar2 = MISC::GET_GAME_TIMER();
	iVar3 = func_784();
	if (iVar3 + 15000 > iVar2)
	{
		bVar1 = true;
	}
	if (!bVar1)
	{
		iVar4 = __LIB_0__::func_398(iParam0);
		if (PED::_GET_PED_STAMINA(iVar4) == PED::_GET_PED_MAX_STAMINA(iVar4))
		{
			return;
		}
		switch (iVar0)
		{
			case 2:
				fVar5 = 2.5f;
				break;
			case 3:
				fVar5 = 5f;
				break;
			case 4:
				fVar5 = 10f;
				break;
		}
		__LIB_12__::func_543(iVar4, fVar5);
		func_483(iVar2);
	}
}

bool func_488()
{
	return Global_40.f_1095.f_3134;
}

int func_489()
{
	return Global_1900383.f_444.f_18;
}

void func_491(int iParam0)
{
	Global_1900383.f_444.f_18 = iParam0;
}

void func_492(int iParam0)
{
	Global_40.f_1095.f_3134 = iParam0;
}

void func_495(int iParam0, int iParam1)
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
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = iParam1;
}

void func_497(int iParam0)
{
	vector3 vVar0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar10 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar10))
	{
		return;
	}
	iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar10);
	if (ENTITY::IS_ENTITY_DEAD(iVar11) || PED::IS_PED_INJURED(iVar11))
	{
		return;
	}
	iVar12 = vVar0.x;
	iVar13 = iVar12;
	switch (iVar13)
	{
		case 31:
			iVar14 = 0;
			break;
		case 32:
			iVar14 = 1;
			break;
		case 33:
			iVar14 = 2;
			break;
		default:
			return;
	}
	iVar15 = -1;
	bVar16 = false;
	if (__LIB_1__::func_16(iVar11))
	{
		bVar16 = true;
		iVar15 = __LIB_0__::func_402(iVar11);
	}
	bVar17 = false;
	if (!bVar16)
	{
		if (iVar14 != 2)
		{
			return;
		}
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar11, -1))
		{
			return;
		}
		if (__LIB_1__::func_15(iVar11))
		{
			bVar17 = true;
		}
		if (__LIB_11__::func_451(iVar11))
		{
			bVar17 = true;
		}
		if (__LIB_0__::func_126(iVar11))
		{
			bVar17 = true;
		}
		iVar18 = ENTITY::GET_ENTITY_POPULATION_TYPE(iVar11);
		if (iVar18 != 6 && iVar18 != 2)
		{
			bVar17 = true;
		}
	}
	if (bVar16)
	{
		if (__LIB_1__::func_652())
		{
			iVar19 = __LIB_0__::func_61();
			if (iVar19 == 22 || iVar19 == 37)
			{
				__LIB_1__::func_240(18, 1);
			}
			else
			{
				__LIB_1__::func_240(17, 1);
			}
			return;
		}
	}
	if (bVar16)
	{
		if (func_189(iVar15))
		{
			if (!__LIB_3__::func_829(16) && !__LIB_1__::func_262(16))
			{
				__LIB_1__::func_240(16, 1);
			}
			return;
		}
	}
	func_787(iVar11, iVar14, bVar17);
}

void func_498(int iParam0)
{
	vector3 vVar0;
	int iVar10;
	int iVar11;
	bool bVar12;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar10 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar10))
	{
		return;
	}
	iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar10);
	if (ENTITY::IS_ENTITY_DEAD(iVar11) || PED::IS_PED_INJURED(iVar11))
	{
		return;
	}
	bVar12 = false;
	if (__LIB_1__::func_16(iVar11))
	{
		bVar12 = true;
	}
	if (!bVar12)
	{
		if (__LIB_1__::func_15(iVar11))
		{
			return;
		}
		if (__LIB_11__::func_451(iVar11))
		{
			return;
		}
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar11))
		{
			return;
		}
	}
	func_788(joaat("KIT_HORSE_BRUSH"), iVar11);
}

void func_499(int iParam0)
{
	vector3 vVar0;
	int iVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar10 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar10))
	{
		return;
	}
	iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar10);
	if (ENTITY::IS_ENTITY_DEAD(iVar11) || PED::IS_PED_INJURED(iVar11))
	{
		return;
	}
	bVar12 = false;
	if (__LIB_1__::func_16(iVar11))
	{
		bVar12 = true;
	}
	if (!bVar12)
	{
		if (__LIB_1__::func_15(iVar11))
		{
			return;
		}
		if (__LIB_11__::func_451(iVar11))
		{
			return;
		}
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar11))
		{
			return;
		}
	}
	iVar13 = func_789();
	if (iVar13 != 0)
	{
		func_788(iVar13, iVar11);
	}
}

void func_500()
{
	Global_40.f_1095.f_3135.f_2++;
}

void func_501(int iParam0)
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
	Global_1900383[iParam0 /*45*/].f_43 = 0;
}

bool func_505()
{
	if (__LIB_6__::func_462(joaat("CONSUMABLE_HORSE_REVIVER"), 1, 0) || __LIB_6__::func_462(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 1, 0))
	{
		return true;
	}
	return false;
}

int func_506()
{
	return Global_40.f_1095.f_3135.f_2;
}

var func_507()
{
	return Global_1900383.f_444.f_17;
}

void func_508(int iParam0)
{
	Global_1900383.f_444.f_17 = iParam0;
}

void func_509()
{
	Global_1900383.f_444.f_17 = 0;
}

int func_517(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam1) || ENTITY::_0xC346A546612C49A9(iParam1))
	{
		iVar0 = __LIB_7__::func_665(iParam1);
		if (!__LIB_0__::func_144(iVar0, 0))
		{
			iVar0 = __LIB_8__::func_694(iParam1);
		}
	}
	else
	{
		iVar0 = __LIB_8__::func_694(iParam1);
	}
	iVar1 = func_285(iParam0, iVar0, 1, 1, -142743235);
	return iVar1;
}

bool func_520(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return __LIB_5__::func_895(__LIB_0__::func_398(iParam0), iParam1);
}

void func_526(int iParam0, struct<2> Param1)
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
	if (!func_805(iParam0, Param1))
	{
	}
	if (!func_806(iParam0, Param1.f_1))
	{
	}
}

void func_537(int iParam0)
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
					if (!__LIB_6__::func_462(iVar0, 1, 0))
					{
						func_815(iVar0, 1, 752097756);
					}
					__LIB_1__::func_775(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_6__::func_462(1013902307, 1, 0))
				{
					func_815(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_6__::func_462(1013902307, 1, 0))
				{
					func_815(1013902307, 1, 752097756);
				}
				if (!__LIB_6__::func_462(142640135, 1, 0))
				{
					func_815(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_6__::func_462(786809402, 1, 0))
				{
					func_815(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_6__::func_462(786809402, 1, 0))
				{
					func_815(786809402, 1, 752097756);
				}
				if (!__LIB_6__::func_462(-518019409, 1, 0))
				{
					func_815(-518019409, 1, 752097756);
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
			func_817();
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

int func_542(int iParam0)
{
	if (iParam0 == joaat("A_C_HORSE_MP_MANGY_BACKUP"))
	{
		return joaat("HORSE_BREED_MANGY_BACKUP");
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return joaat("HORSE_BREED_AMERICANPAINT_OVERO");
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return joaat("HORSE_BREED_AMERICANPAINT_TOBIANO");
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("HORSE_BREED_AMERICANPAINT_SPLASHEDWHITE");
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return joaat("HORSE_BREED_AMERICANPAINT_GREYOVERO");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_BLACK");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_BUCKSKIN");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return joaat("HORSE_BREED_ANDALUSIAN_DARKBAY");
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return joaat("HORSE_BREED_ANDALUSIAN_ROSEGRAY");
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return joaat("HORSE_BREED_ANDALUSIAN_PERLINO");
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return joaat("HORSE_BREED_APPALOOSA_BLANKET");
			return joaat("HORSE_BREED_APPALOOSA_LEOPARDBLANKET");
			return joaat("HORSE_BREED_APPALOOSA_FEWSPOTTED");
			return joaat("HORSE_BREED_APPALOOSA_BROWNLEOPARD");
			return joaat("HORSE_BREED_APPALOOSA_LEOPARD");
			return joaat("HORSE_BREED_ARABIAN_BLACK");
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT");
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT_PC");
			return joaat("HORSE_BREED_ARABIAN_ROSEGREYBAY");
			return joaat("HORSE_BREED_ARABIAN_WARPEDBRINDLE");
			return joaat("HORSE_BREED_ARABIAN_WHITE");
			return joaat("HORSE_BREED_ARDENNES_BAYROAN");
			return joaat("HORSE_BREED_ARDENNES_STRAWBERRYROAN");
			return joaat("HORSE_BREED_ARDENNES_IRONGREYROAN");
			return joaat("HORSE_BREED_BELGIAN_BLONDCHESTNUT");
			return joaat("HORSE_BREED_BELGIAN_MEALYCHESTNUT");
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SEALBROWN");
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
			return joaat("HORSE_BREED_KENTUCKYSADDLE_BLACK");
			return joaat("HORSE_BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN");
			return joaat("HORSE_BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
			return joaat("HORSE_BREED_KENTUCKYSADDLE_GREY");
			return joaat("HORSE_BREED_KENTUCKYSADDLE_SILVERBAY");
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
			return joaat("HORSE_BREED_MORGAN_BAY");
			return joaat("HORSE_BREED_MORGAN_BAYROAN");
			return joaat("HORSE_BREED_MORGAN_FLAXENCHESTNUT");
			return joaat("HORSE_BREED_MORGAN_LIVERCHESTNUT");
			return joaat("HORSE_BREED_MORGAN_PALOMINO");
			return joaat("HORSE_BREED_MUSTANG_GRULLODUN");
			return joaat("HORSE_BREED_MUSTANG_WILDBAY");
			return joaat("HORSE_BREED_MUSTANG_TIGERSTRIPEDBAY");
			return joaat("HORSE_BREED_NOKOTA_BLUEROAN");
			return joaat("HORSE_BREED_NOKOTA_WHITEROAN");
			return joaat("HORSE_BREED_NOKOTA_REVERSEDAPPLEROAN");
			return joaat("HORSE_BREED_SHIRE_DARKBAY");
			return joaat("HORSE_BREED_SHIRE_LIGHTGREY");
			return joaat("HORSE_BREED_SUFFOLKPUNCH_SORREL");
			return joaat("HORSE_BREED_SUFFOLKPUNCH_REDCHESTNUT");
			return joaat("HORSE_BREED_TENNESSEEWALKER_BLACKRABICANO");
			return joaat("HORSE_BREED_TENNESSEEWALKER_CHESTNUT");
			return joaat("HORSE_BREED_TENNESSEEWALKER_DAPPLEBAY");
			return joaat("HORSE_BREED_TENNESSEEWALKER_GOLDPALOMINO");
			return joaat("HORSE_BREED_TENNESSEEWALKER_REDROAN");
			return joaat("HORSE_BREED_TENNESSEEWALKER_FLAXENROAN");
			return joaat("HORSE_BREED_THOROUGHBRED_BLOODBAY");
			return joaat("HORSE_BREED_THOROUGHBRED_DAPPLEGREY");
			return joaat("HORSE_BREED_THOROUGHBRED_BRINDLE");
			return joaat("HORSE_BREED_THOROUGHBRED_REVERSEDAPPLEBLACK");
			return joaat("HORSE_BREED_TURKOMAN_DARKBAY");
			return joaat("HORSE_BREED_TURKOMAN_GOLD");
			return joaat("HORSE_BREED_TURKOMAN_SILVER");
			return joaat("HORSE_DONKEY");
			return joaat("HORSE_BREED_APPALOOSA_BLACKSNOWFLAKE");
			return joaat("HORSE_BREED_ARABIAN_GREY");
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_LIVERCHESTNUT");
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
			return joaat("HORSE_BREED_MUSTANG_GOLDENDUN");
			return joaat("HORSE_BREED_TENNESSEEWALKER_MAHOGANYBAY");
			return joaat("HORSE_BREED_SHIRE_RAVENBLACK");
			return -41062704;
			return 887669186;
			return 2102774612;
			return -2011111190;
			return -535752499;
			return 0;
		}
int func_543(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_831(iParam1))
	{
		return 0;
	}
	if (__LIB_1__::func_127(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_577(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { __LIB_0__::func_949(0) };
	Var1.f_4 = iVar0;
	if (!func_334(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

int func_545(int iParam0, var uParam1)
{
	struct<29> Var0;
	Var0.f_9 = -1591664384;
	if (!__LIB_1__::func_416(iParam0, &Var0))
	{
		return 0;
	}
	Var0.f_14 = uParam1->f_14;
	Var0.f_15 = uParam1->f_15;
	Var0.f_16 = { uParam1->f_16 };
	Var0.f_24 = uParam1->f_24;
	Var0.f_25 = uParam1->f_25;
	Var0.f_26 = uParam1->f_26;
	Var0.f_27 = uParam1->f_27;
	Var0.f_28 = uParam1->f_28;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var0.f_16)))
	{
		StringCopy(&(Var0.f_16), func_821(), 64);
	}
	if (!INVENTORY::_0xD80A8854DB5CFBA5(__LIB_0__::func_162(0), &Var0, &Var0, 29))
	{
		return 0;
	}
	return 1;
}

int func_551()
{
	return Global_40.f_1095.f_3135.f_1;
}

var func_552()
{
	return Global_1900383.f_444.f_2;
}

void func_553()
{
	Global_1900383.f_444.f_2 = 0;
}

void func_554()
{
	Global_40.f_1095.f_3135.f_1++;
}

void func_555(int iParam0)
{
	Global_1900383.f_444.f_2 = iParam0;
}

bool func_556()
{
	return Global_1900383.f_444.f_3;
}

int func_557()
{
	return Global_1900383.f_444.f_4;
}

void func_559()
{
	Global_1900383.f_444.f_4 = 0;
}

int func_561()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		return 0;
	}
	if (!PLAYER::_0x3EE1F7A8C32F24E1(iVar0, &iVar1, 0, 0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	if (PED::IS_PED_INJURED(iVar2))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar2))
	{
		return 0;
	}
	if (!__LIB_12__::func_202(iVar2))
	{
		return 0;
	}
	return iVar2;
}

int func_562()
{
	return Global_1900383.f_411.f_1;
}

void func_563(int iParam0)
{
	Global_1900383.f_411.f_1 = iParam0;
}

void func_564(int iParam0)
{
	Global_1900383.f_411 = iParam0;
}

void func_565()
{
	if (__LIB_3__::func_829(47))
	{
		__LIB_4__::func_861(47);
	}
	if (__LIB_1__::func_262(47))
	{
		__LIB_5__::func_781(47);
	}
	if (__LIB_3__::func_829(48))
	{
		__LIB_4__::func_861(48);
	}
	if (__LIB_1__::func_262(47))
	{
		__LIB_5__::func_781(47);
	}
	if (__LIB_3__::func_829(49))
	{
		__LIB_4__::func_861(49);
	}
	if (__LIB_1__::func_262(49))
	{
		__LIB_5__::func_781(49);
	}
	if (__LIB_3__::func_829(50))
	{
		__LIB_4__::func_861(50);
	}
	if (__LIB_1__::func_262(50))
	{
		__LIB_5__::func_781(50);
	}
	if (__LIB_3__::func_829(51))
	{
		__LIB_4__::func_861(51);
	}
	if (__LIB_1__::func_262(51))
	{
		__LIB_5__::func_781(51);
	}
}

bool func_566(int iParam0)
{
	var uVar0;
	var uVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	uVar1 = PLAYER::_0x0139637A3BFF8B6D(iParam0, &uVar0);
	if (PLAYER::_0x0772F87D7B07719A(PLAYER::PLAYER_ID(), uVar0, uVar1))
	{
		return true;
	}
	return false;
}

void func_567(int iParam0)
{
	Global_1900383.f_411.f_2 = iParam0;
}

int func_568()
{
	return Global_1900383.f_411.f_2;
}

void func_569()
{
	func_564(0);
	func_563(0);
	func_567(0);
}

bool func_570()
{
	return Global_1900383.f_444.f_5;
}

int func_571()
{
	return Global_40.f_1095.f_3135.f_3;
}

int func_572()
{
	return Global_1900383.f_444.f_6;
}

void func_573(int iParam0)
{
	Global_1900383.f_444.f_5 = iParam0;
}

void func_574()
{
	Global_1900383.f_444.f_6 = 0;
}

void func_576()
{
	Global_40.f_1095.f_3135.f_3++;
}

bool func_577()
{
	return Global_1900383.f_444.f_7;
}

int func_579()
{
	return Global_1900383.f_444.f_8;
}

void func_580(int iParam0)
{
	Global_1900383.f_444.f_7 = iParam0;
}

void func_581()
{
	Global_1900383.f_444.f_8 = 0;
}

int func_582()
{
	return Global_1900383.f_444.f_9;
}

bool func_583()
{
	return Global_1900383.f_444.f_10;
}

void func_584(int iParam0)
{
	Global_1900383.f_444.f_10 = iParam0;
}

void func_585()
{
	Global_1900383.f_444.f_9 = 0;
}

bool func_586()
{
	return Global_40.f_1095.f_3135.f_4;
}

void func_590(int iParam0)
{
	Global_1900383.f_444.f_11 = *iParam0;
}

var func_591()
{
	return Global_1900383.f_444.f_11;
}

bool func_592()
{
	if (__LIB_1__::func_52(7))
	{
		return true;
	}
	if (__LIB_0__::func_988())
	{
		return true;
	}
	return false;
}

bool func_594()
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!__LIB_1__::func_52(7))
	{
		if (__LIB_7__::func_830(7))
		{
			func_842();
			return true;
		}
	}
	if (__LIB_1__::func_52(7))
	{
		if (__LIB_5__::func_917() == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(7)))
			{
				if (!ENTITY::IS_ENTITY_IN_WATER(__LIB_0__::func_398(7)))
				{
					return true;
				}
			}
		}
	}
	if (__LIB_11__::func_394(Global_35))
	{
		return true;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = func_843();
	if (iVar1 == 0)
	{
		func_844(MISC::GET_GAME_TIMER());
		return true;
	}
	if (iVar1 + 10000 > iVar0)
	{
		return true;
	}
	if (ENTITY::_0x383F64263F946E45(&uVar2, __LIB_0__::func_147(), 4, Global_35, 0, 1))
	{
		func_842();
		return true;
	}
	return false;
}

void func_596()
{
	Global_1900383.f_444.f_12 = 0;
}

var func_597()
{
	return Global_1900383.f_444.f_12;
}

void func_598(int iParam0)
{
	Global_1900383.f_444.f_12 = iParam0;
}

int func_599()
{
	return Global_1900383.f_441;
}

void func_600(int iParam0)
{
	Global_1900383.f_441 = iParam0;
}

bool func_601()
{
	return Global_1900383.f_444.f_15;
}

void func_602(int iParam0)
{
	Global_1900383.f_444.f_15 = iParam0;
}

void func_604()
{
	Global_1900383.f_444.f_16++;
}

int func_605()
{
	return Global_1900383.f_444.f_16;
}

bool func_607(int iParam0)
{
	var uVar0;
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	if (!__LIB_12__::func_574(iParam0))
	{
		return false;
	}
	if (__LIB_12__::func_553(iParam0, &uVar0, -1082130432 /* Float: -1f */))
	{
		if (PED::_0x7F9B9791D4CB71F6(iParam0, uVar0, 0, 0) == 1)
		{
			return false;
		}
		if (LAW::_0x69E181772886F48B(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	return true;
}

bool func_614()
{
	if (__LIB_6__::func_462(joaat("PROVISION_TRINKET_PRONGHORN_ANTLER"), 1, 0))
	{
		return true;
	}
	return false;
}

bool func_616()
{
	if (__LIB_6__::func_462(joaat("PROVISION_TRINKET_BEAVER_TOOTH"), 1, 0))
	{
		return true;
	}
	return false;
}

void func_617(int iParam0, int iParam1)
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
					iVar0 = func_854(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_855(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_857(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
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
					iVar0 = func_854(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_855(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_857(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
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
					iVar0 = func_854(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_855(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_857(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
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
					iVar0 = func_854(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_855(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_857(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
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
					iVar0 = func_854(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_855(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_857(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
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
		if (__LIB_6__::func_462(__LIB_1__::func_35(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_859(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_860(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

int func_626(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!__LIB_7__::func_654(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { __LIB_0__::func_777(iParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((__LIB_7__::func_601(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((__LIB_7__::func_601(iParam0, iParam1) - iParam2) < 0)
		{
			func_626(iParam0, iParam1, __LIB_6__::func_395(iParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!__LIB_7__::func_653(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && iParam1 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_2__::func_471(iParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

int func_629(int iParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_574(iParam1);
	if (!PED::_0x608BC6A6AACD5036(&Var1, iParam0, iVar0, 0))
	{
		return 0;
	}
	iVar5 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return 0;
	}
	return iVar5;
}

float func_645(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_3);
	iVar1 = __LIB_0__::func_309(iVar1, 0, 30000);
	fVar2 = (BUILTIN::TO_FLOAT(iVar1) * 0.001f);
	return fVar2;
}

void func_647(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (__LIB_8__::func_622(iParam2, &iVar1))
	{
		iVar0 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar1);
	}
	iVar2 = __LIB_11__::func_884(iParam1, iParam2);
	if (iVar2 != iVar0)
	{
		__LIB_12__::func_575(iParam1, iParam2, iVar0);
	}
}

float func_648(int iParam0, int iParam1)
{
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/].f_2;
}

void func_649(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	fVar0 = func_648(iParam0, iParam1);
	fVar1 = func_645(iParam0, iParam1);
	fVar0 = (fVar0 - fVar1);
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	__LIB_17__::func_738(iParam0, iParam1, fVar0);
}

void func_650(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (__LIB_0__::func_815(iParam1) == 2)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (__LIB_0__::func_126(iParam0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::GET_MOUNT(Global_35) == iParam0)
		{
			bVar2 = true;
		}
	}
	bVar3 = false;
	if (TASK::_0xEFC4303DDC6E60D3(Global_35))
	{
		if (TASK::_0xED1F514AF4732258(Global_35) == iParam0)
		{
			bVar3 = true;
		}
	}
	bVar6 = false;
	bVar7 = false;
	switch (iParam2)
	{
		case 0:
		case 1:
			iVar5 = __LIB_11__::func_884(iParam1, iParam2);
			if (bVar0)
			{
				if (iVar5 < 100)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (bVar1)
			{
				if (iVar5 < 55)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (bVar3)
			{
				if (iVar5 < 45)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (!bVar2)
			{
				if (iVar5 < 30)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (func_890(iParam0, iParam2))
			{
				bVar7 = true;
			}
			else
			{
				fVar4 = -48f;
				fVar8 = func_891(iParam1, iParam2);
				fVar4 = (fVar4 - (fVar4 * fVar8));
			}
			break;
	}
	if (fVar4 < 0f)
	{
		if (__LIB_4__::func_377(8192))
		{
			bVar7 = true;
		}
	}
	if (bVar6)
	{
		if (__LIB_0__::func_818(iParam1, 128))
		{
			bVar7 = true;
		}
		else
		{
			fVar4 = 1f;
		}
	}
	fVar9 = (fVar4 * 60f);
	fVar10 = func_645(iParam1, iParam2);
	fVar11 = ((fVar10 / fVar9) * 100f);
	fVar12 = func_892(iParam1, iParam2);
	iVar13 = __LIB_11__::func_884(iParam1, iParam2);
	iVar14 = 0;
	if (!bVar7)
	{
		if ((fVar12 < 0f && fVar11 > 0f) || (fVar12 > 0f && fVar11 < 0f))
		{
			fVar12 = 0f;
		}
		fVar12 = (fVar12 + fVar11);
		if (fVar12 >= 1f)
		{
			fVar12 = (fVar12 - 1f);
			iVar14++;
		}
		else if (fVar12 <= -1f)
		{
			fVar12 = (fVar12 + 1f);
			iVar14 = (iVar14 - 1);
		}
		func_893(iParam1, iParam2, fVar12);
	}
	if (iVar14 == 0)
	{
		return;
	}
	__LIB_12__::func_575(iParam1, iParam2, (iVar13 + iVar14));
}

void func_651(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	var uVar12;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	func_21(0, &uVar0);
	func_21(1, &uVar12);
	bVar24 = false;
	if (__LIB_0__::func_293(40))
	{
		bVar24 = true;
	}
	bVar25 = false;
	bVar26 = false;
	switch (iParam1)
	{
		case 0:
			if (iParam2 >= 50 && iParam3 < 50)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
			}
			if (iParam2 > 0 && iParam3 == 0)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
				bVar26 = true;
			}
			break;
		case 1:
			if (iParam2 >= 50 && iParam3 < 50)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
			}
			if (iParam2 > 0 && iParam3 == 0)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
				bVar26 = true;
			}
			break;
	}
	if (bVar25)
	{
		func_580(1);
		func_894(MISC::GET_GAME_TIMER());
	}
	if (bVar26)
	{
		__LIB_0__::func_15(__LIB_0__::func_358(joaat("HORSE_CORE_DRAINED")), 1);
	}
}

void func_655(int iParam0, int iParam1, int iParam2)
{
	Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_3 = iParam2;
}

void func_656(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (__LIB_9__::func_368(iParam2, &iVar0))
	{
		iVar1 = ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, iVar0);
	}
	iVar2 = __LIB_12__::func_205(iParam1, iParam2);
	if (iVar2 != iVar1)
	{
		__LIB_11__::func_459(iParam1, iParam2, iVar1);
	}
}

float func_657(int iParam0, int iParam1)
{
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_2;
}

void func_658(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	fVar0 = func_657(iParam0, iParam1);
	fVar1 = func_645(iParam0, iParam1);
	fVar0 = (fVar0 - fVar1);
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	__LIB_12__::func_536(iParam0, iParam1, fVar0);
}

void func_659(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (__LIB_7__::func_443(iParam0))
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_815(iParam1) == 2)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (__LIB_0__::func_126(iParam0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	switch (iParam2)
	{
		case 1:
			if (bVar0)
			{
				fVar3 = -48f;
			}
			else if (bVar1)
			{
				fVar3 = 192f;
			}
			else if (func_897(iParam0))
			{
				bVar2 = true;
			}
			else
			{
				fVar3 = 96f;
			}
			break;
		case 0:
			if (bVar0)
			{
				fVar3 = -48f;
			}
			else
			{
				bVar2 = true;
			}
			break;
		case 2:
			iVar4 = __LIB_12__::func_205(iParam1, 2);
			iVar5 = (100 - __LIB_12__::func_205(iParam1, 1));
			if (iVar5 < 50)
			{
				fVar3 = -96f;
			}
			else if (iVar4 > 50)
			{
				fVar3 = -48f;
			}
			else if (iVar4 < 50)
			{
				fVar3 = 48f;
			}
			else
			{
				bVar2 = true;
			}
			break;
	}
	fVar6 = (fVar3 * 60f);
	fVar7 = func_645(iParam1, iParam2);
	fVar8 = ((fVar7 / fVar6) * 100f);
	fVar9 = func_898(iParam1, iParam2);
	iVar10 = __LIB_12__::func_205(iParam1, iParam2);
	iVar11 = 0;
	if (!bVar2)
	{
		fVar9 = (fVar9 + fVar8);
		if (fVar9 >= 1f)
		{
			fVar9 = (fVar9 - 1f);
			iVar11++;
		}
		else if (fVar9 <= -1f)
		{
			fVar9 = (fVar9 + 1f);
			iVar11 = (iVar11 - 1);
		}
		func_899(iParam1, iParam2, fVar9);
	}
	if (iParam2 == 2)
	{
		if (iVar4 > 50)
		{
			if (iVar10 <= 50)
			{
				iVar10 = 50;
				func_900(iParam1, iParam2);
			}
		}
		else if (iVar4 < 50)
		{
			if (iVar10 >= 50)
			{
				iVar10 = 50;
				func_900(iParam1, iParam2);
			}
		}
	}
	if (iVar11 == 0)
	{
		return;
	}
	__LIB_11__::func_459(iParam1, iParam2, (iVar10 + iVar11));
}

void func_660(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	struct<11> Var12;
	int iVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	func_21(0, &Var0);
	func_21(1, &Var12);
	iVar24 = __LIB_0__::func_398(iParam0);
	bVar25 = false;
	if (iParam0 == 0 || (iParam0 == 1 && !Var0.f_2))
	{
		if ((iParam0 == 0 && Var0.f_10) || (iParam0 == 1 && Var12.f_10))
		{
			if (__LIB_0__::func_293(41))
			{
				bVar25 = true;
			}
		}
	}
	bVar26 = false;
	iVar27 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam2 <= 50 && iParam3 > 50)
			{
				if (bVar25)
				{
					bVar26 = true;
					iVar27 = 4;
				}
			}
			if (iParam2 < 100 && iParam3 == 100)
			{
				if (bVar25)
				{
				}
			}
			break;
		case 1:
			if (iParam2 <= 50 && iParam3 > 50)
			{
				if (bVar25)
				{
				}
			}
			if (iParam2 < 100 && iParam3 == 100)
			{
				if (bVar25)
				{
				}
			}
			break;
		case 2:
			iVar28 = __LIB_12__::func_533(iVar24, 2);
			iVar29 = func_901(iParam0);
			iVar30 = func_358(iVar28);
			if (iVar29 != iVar30)
			{
				bVar31 = __LIB_0__::func_512(iVar24, iVar30, 1);
				if (bVar31)
				{
					func_359(iParam0, iVar30);
				}
			}
			if (iParam3 > 70)
			{
				ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar24, 14, 100);
			}
			else
			{
				ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar24, 14, 50);
			}
			break;
	}
	if (bVar26)
	{
		func_573(1);
		func_902(MISC::GET_GAME_TIMER());
	}
	if (iVar27 != 0)
	{
		ATTRIBUTE::_SET_CORE_ICON(iVar27);
	}
}

void func_662(int iParam0, float fParam1)
{
	Global_1900383.f_393.f_8[iParam0] = fParam1;
}

bool func_667(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;
	__LIB_0__::func_799(&iParam0);
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam3 = true;
	}
	if (__LIB_0__::func_787(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { __LIB_1__::func_117(0) };
			Var4.f_9 = -1591664384;
			if (!__LIB_1__::func_112(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (__LIB_1__::func_429(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (__LIB_0__::func_950(iParam0, 1))
			{
				if (!__LIB_1__::func_112(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (__LIB_1__::func_429(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_909(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = __LIB_0__::func_936(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = __LIB_0__::func_800(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_669(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<17> Var44;
	struct<16> Var61;
	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!__LIB_0__::func_464(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = __LIB_0__::func_356(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { __LIB_1__::func_11(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_912(joaat("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var44 = { __LIB_1__::func_12(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_914(joaat("UPDATE"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { __LIB_0__::func_662(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_916(joaat("UPDATE"), &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

void func_671(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_821(iParam0);
	STREAMING::REQUEST_MODEL(iVar0, false);
}

void func_672(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = Global_40.f_1095.f_1[iParam0 /*436*/].f_15[iVar1 /*94*/];
		if (STREAMING::IS_MODEL_VALID(iVar0))
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
		}
		iVar1++;
	}
}

bool func_673(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_821(iParam0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return false;
	}
	return true;
}

bool func_674(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = Global_40.f_1095.f_1[iParam0 /*436*/].f_15[iVar1 /*94*/];
		if (STREAMING::IS_MODEL_VALID(iVar0))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				return false;
			}
		}
		iVar1++;
	}
	return true;
}

int func_679(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_431;
}

int func_680(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_432;
}

int func_698(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
	}
	return 0;
}

bool func_700()
{
	if (!__LIB_4__::func_377(8))
	{
		return false;
	}
	return true;
}

int func_701()
{
	return Global_1900383.f_444;
}

int func_702()
{
	return Global_1900383.f_444.f_1;
}

void func_703(int iParam0)
{
	Global_1900383.f_444 = *iParam0;
}

void func_704(int iParam0)
{
	Global_1900383.f_444.f_1 = *iParam0;
}

bool func_707(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	float fVar7;
	vector3 vVar8;
	bool bVar11;
	var uVar12;
	iVar6 = 12;
	if (__LIB_0__::func_86(vParam4))
	{
		vVar8 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		fVar7 = vVar8.z;
	}
	else
	{
		fVar7 = __LIB_0__::func_152(vParam4, vParam1, 1);
	}
	fVar7 = (fVar7 + ((BUILTIN::TO_FLOAT(uParam0->f_2) * 10f) * __LIB_0__::func_514((uParam0->f_2 % 2) == 0, 1f, -1f)));
	vVar0 = { vParam1 + Vector(0f, -BUILTIN::COS(fVar7), BUILTIN::SIN(fVar7)) * FtoV(((80f + 40f) * 0.5f)) * Vector(fParam8, fParam8, fParam8) };
	if (uParam0->f_2 > 3)
	{
		iVar6 = 13;
	}
	switch (__LIB_0__::func_81(uParam0))
	{
		case 0:
			__LIB_12__::func_220(uParam0, 0f, 0f, 0f);
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			__LIB_0__::func_19(uParam0, 1);
			break;
		case 1:
			if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar0, &vVar3, 1, 3f, 0f))
			{
				if (__LIB_12__::func_228(vVar3, vParam1, 0, 0))
				{
					__LIB_12__::func_220(uParam0, vVar3);
					if (uParam0->f_12)
					{
						__LIB_0__::func_19(uParam0, 3);
					}
					else
					{
						__LIB_0__::func_19(uParam0, 4);
					}
				}
				else
				{
					__LIB_0__::func_19(uParam0, 2);
				}
			}
			else
			{
				__LIB_0__::func_19(uParam0, 2);
			}
			break;
		case 2:
			bVar11 = false;
			if (__LIB_12__::func_233(vVar0, &(uParam0->f_3), &bVar11, iVar6, 0, 1127481344 /* Float: 180f */, 1101004800 /* Float: 20f */, -1138501878 /* Float: -0.01f */, -1138501878 /* Float: -0.01f */, 0))
			{
				if (__LIB_12__::func_228(__LIB_12__::func_210(uParam0), vParam1, 1, 1))
				{
					if (uParam0->f_12)
					{
						__LIB_0__::func_19(uParam0, 3);
					}
					else
					{
						__LIB_0__::func_19(uParam0, 4);
					}
				}
				else
				{
					__LIB_0__::func_19(uParam0, 5);
				}
			}
			else if (bVar11)
			{
				__LIB_0__::func_19(uParam0, 5);
			}
			break;
		case 3:
			if (uParam0->f_13 == 0)
			{
				uParam0->f_13 = PATHFIND::_0x348F211CA2404039(uParam7, __LIB_12__::func_210(uParam0), vParam1, 23);
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14++;
					uParam0->f_13 = 0;
					if (uParam0->f_14 >= 50)
					{
						__LIB_0__::func_19(uParam0, 5);
					}
				}
			}
			else
			{
				switch (PATHFIND::_0x3A0F82F6EE2291C8(uParam0->f_13))
				{
					case 2:
						break;
					case 0:
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						__LIB_0__::func_19(uParam0, 5);
						break;
					case 1:
						uVar12 = PATHFIND::_0xF61CFEDEAB627BFA(uParam0->f_13);
						if (__LIB_0__::func_1(uVar12, 2) && iVar6 != 13)
						{
							__LIB_0__::func_19(uParam0, 5);
						}
						else
						{
							__LIB_0__::func_19(uParam0, 4);
						}
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						break;
				}
			}
			break;
		case 4:
			uParam0->f_2 = 0;
			__LIB_0__::func_634(&(uParam0->f_3.f_3), 1, 1, 0);
			__LIB_0__::func_19(uParam0, 0);
			return true;
		case 5:
			uParam0->f_2++;
			if (uParam0->f_2 > 12)
			{
				uParam0->f_2 = 0;
				uParam0->f_1 = 1;
			}
			else
			{
				uParam0->f_1 = 0;
			}
			__LIB_0__::func_19(uParam0, 0);
			break;
	}
	return false;
}

bool func_711(int iParam0)
{
	int iVar0;
	int iVar1;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	iVar1 = __LIB_0__::func_820(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (PED::GET_MOUNT(iVar1) == iVar0)
	{
		return true;
	}
	return false;
}

void func_712(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
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
	iVar0 = Global_1900383[iParam0 /*45*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = PED::_GET_RIDER_OF_MOUNT(iVar0, false);
	iVar2 = PED::_GET_RIDER_OF_MOUNT(iVar0, true);
	if (iVar1 != iVar2)
	{
		return;
	}
	if (bParam1)
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = 1;
	}
	TASK::TASK_HORSE_ACTION(iVar0, iVar3, 0, 0);
}

int func_715()
{
	return Global_1900383.f_378.f_9;
}

void func_717(int iParam0, int iParam1, int iParam2)
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
	if (__LIB_1__::func_127(iParam1))
	{
		__LIB_1__::func_608(iParam1);
	}
	iVar3 = __LIB_0__::func_821(iParam1);
	iVar4 = func_542(iVar3);
	func_543(iParam1, iVar4);
}

bool func_721(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;
	if (!__LIB_0__::func_708(bParam10))
	{
		return func_938(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!__LIB_0__::func_464(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (__LIB_0__::func_639(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(__LIB_0__::func_162(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_335(Var14, 1))
		{
		}
	}
	return true;
}

bool func_722(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;
	if (!__LIB_0__::func_708(bParam9))
	{
		return func_940(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return false;
	}
	if (__LIB_0__::func_639(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!__LIB_0__::func_464(Param0, &Var0, bParam9, 1) || !__LIB_0__::func_464(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (__LIB_0__::func_639(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = __LIB_0__::func_162(0);
	if (!INVENTORY::_0xF2753D691BCDA314(iVar28, &Param0, &Param4))
	{
		return false;
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return true;
}

void func_739(int iParam0, int iParam1)
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
	func_114(iParam0);
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
		func_454(iVar0, 16);
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
		func_454(iVar0, iVar9);
	}
	if (!__LIB_0__::func_474(43))
	{
		__LIB_1__::func_240(43, 0);
		__LIB_12__::func_534(MISC::GET_GAME_TIMER());
	}
}

void func_742(int iParam0, int iParam1)
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
	func_114(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (!func_890(iParam0, 1))
	{
		func_454(iVar0, 20);
	}
	iVar2 = __LIB_6__::func_95(iParam0);
	fVar3 = (BUILTIN::TO_FLOAT(__LIB_12__::func_535(iVar2)) + (48f * 60f));
	__LIB_12__::func_536(iVar0, 0, fVar3);
}

void func_745(int iParam0, int iParam1, int iParam2)
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
	func_114(iParam0);
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
		func_454(iVar0, iVar8);
		__LIB_12__::func_538(iVar5);
	}
}

bool func_762(int iParam0)
{
	if (PED::_GET_PED_COMPONENT_CATEGORY(iParam0, 3, false) == 0)
	{
		return false;
	}
	return true;
}

void func_763(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	MISC::_COPY_MEMORY(&(Global_1900383.f_393.f_2), &uParam0, 6);
}

void func_766(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 57)
	{
		iVar2 = __LIB_6__::func_678(iVar1, 1);
		iVar3 = iVar2;
		if (!__LIB_0__::func_144(iVar3, 0))
		{
		}
		else
		{
			iVar4 = (*uParam1)[iVar1];
			if (iVar4 <= 0)
			{
			}
			else
			{
				iVar5 = func_285(iVar0, iVar3, iVar4, bParam2, -142743235);
			}
		}
		iVar1++;
	}
}

struct<6> func_778()
{
	return Global_1900383.f_393.f_2;
}

void func_779()
{
	struct<6> Var0;
	func_763(Var0);
}

bool func_780(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("PROP_HITCHINGGROUND")))
	{
		return true;
	}
	return false;
}

bool func_781(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("PROP_HITCHINGTREE")))
	{
		return true;
	}
	return false;
}

bool func_782(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("PROP_ROUNDEDHITCHINGPOST")))
	{
		return true;
	}
	return false;
}

bool func_783(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("PROP_ROUNDEDHITCHINGPOSTTHATREQUIRESBEINGFACED")))
	{
		return true;
	}
	return false;
}

int func_784()
{
	return Global_1900383.f_418.f_2;
}

void func_787(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	struct<14> Var2;
	int iVar19;
	int iVar20;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			if (func_180(iParam0, Global_35))
			{
				if (__LIB_5__::func_773(iParam0) == 2)
				{
					sVar0 = "HORSE_FOLLOW_ME_FEMALE";
				}
				else
				{
					sVar0 = "HORSE_FOLLOW_ME_MALE";
				}
				__LIB_1__::func_265(Global_35, sVar0, joaat("SPEECH_PARAMS_STANDARD"), iParam0, 1, 0, 0, 1);
				if (__LIB_1__::func_16(iParam0))
				{
					iVar1 = __LIB_0__::func_402(iParam0);
					func_178(iVar1, 0);
				}
			}
			break;
		case 2:
			if (func_991(iParam0, Global_35, bParam2))
			{
				__LIB_1__::func_265(Global_35, "HORSE_RUN_AWAY", joaat("SPEECH_PARAMS_ALLOW_REPEAT"), iParam0, 1, 0, 0, 1);
				Var2.f_6 = -1082130432;
				Var2.f_7 = -1082130432;
				Var2.f_8 = -1082130432;
				Var2.f_9 = -1082130432;
				Var2.f_10 = -1082130432;
				Var2.f_11 = -1082130432;
				Var2.f_12 = -1;
				Var2.f_13 = -1;
				Var2 = joaat("EVENT_SHOCKING_HORSE_FLEE_FROM_PLAYER_PROMPT");
				Var2.f_1 = iParam0;
				Var2.f_2 = Global_35;
				EVENT::_CREATE_SHOCKING_EVENT(&Var2);
				Global_1935630.f_42 = iParam0;
				Global_1935630.f_43 = __LIB_0__::func_485();
				if (__LIB_1__::func_16(iParam0))
				{
					iVar19 = __LIB_0__::func_402(iParam0);
					func_178(iVar19, 2);
				}
			}
			break;
		case 1:
			if (func_486(iParam0))
			{
				__LIB_1__::func_265(Global_35, "HORSE_STAY_HERE", joaat("SPEECH_PARAMS_STANDARD"), iParam0, 1, 0, 0, 1);
				if (__LIB_1__::func_16(iParam0))
				{
					iVar20 = __LIB_0__::func_402(iParam0);
					func_178(iVar20, 1);
				}
			}
			break;
	}
}

int func_788(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (__LIB_12__::func_518(iParam0))
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (__LIB_12__::func_518(iParam0) && TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (func_993(iVar0, iParam0))
		{
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	if (__LIB_16__::func_305() == 1)
	{
		__LIB_16__::func_306(iVar0);
		__LIB_16__::func_307(iParam0);
		__LIB_16__::func_308(1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_789()
{
	int iVar0[11];
	int iVar12;
	int iVar13[26];
	int iVar40;
	iVar0[0] = joaat("CONSUMABLE_HAYCUBE");
	iVar0[1] = joaat("CONSUMABLE_OAT_CAKES");
	iVar0[2] = joaat("CONSUMABLE_APPLE");
	iVar0[3] = joaat("CONSUMABLE_BEETS");
	iVar0[4] = joaat("CONSUMABLE_PEAR");
	iVar0[5] = joaat("CONSUMABLE_PEACH");
	iVar0[6] = joaat("CONSUMABLE_CELERY");
	iVar0[7] = joaat("CONSUMABLE_CARROT");
	iVar0[8] = joaat("CONSUMABLE_CORN");
	iVar0[9] = joaat("CONSUMABLE_PEPPERMINT");
	iVar0[10] = joaat("CONSUMABLE_SUGARCUBE");
	iVar12 = 0;
	while (iVar12 < iVar0)
	{
		if (__LIB_6__::func_395(iVar0[iVar12], 0, 0) > 0)
		{
			return iVar0[iVar12];
		}
		iVar12++;
	}
	iVar13[0] = joaat("CONSUMABLE_HERB_ALASKAN_GINSENG");
	iVar13[1] = joaat("CONSUMABLE_HERB_AMERICAN_GINSENG");
	iVar13[2] = joaat("CONSUMABLE_HERB_BAY_BOLETE");
	iVar13[3] = joaat("CONSUMABLE_HERB_BLACK_BERRY");
	iVar13[4] = joaat("CONSUMABLE_HERB_BLACK_CURRANT");
	iVar13[5] = joaat("CONSUMABLE_HERB_BURDOCK_ROOT");
	iVar13[6] = joaat("CONSUMABLE_HERB_CHANTERELLES");
	iVar13[7] = joaat("CONSUMABLE_HERB_CREEPING_THYME");
	iVar13[8] = joaat("CONSUMABLE_HERB_DESERT_SAGE");
	iVar13[9] = joaat("CONSUMABLE_HERB_HUMMINGBIRD_SAGE");
	iVar13[10] = joaat("CONSUMABLE_HERB_GOLDEN_CURRANT");
	iVar13[11] = joaat("CONSUMABLE_HERB_OLEANDER_SAGE");
	iVar13[12] = joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM");
	iVar13[13] = joaat("CONSUMABLE_HERB_RAMS_HEAD");
	iVar13[14] = joaat("CONSUMABLE_HERB_RED_RASPBERRY");
	iVar13[15] = joaat("CONSUMABLE_HERB_RED_SAGE");
	iVar13[16] = joaat("CONSUMABLE_HERB_WILD_FEVERFEW");
	iVar13[17] = joaat("CONSUMABLE_HERB_WILD_MINT");
	iVar13[18] = joaat("CONSUMABLE_HERB_GINSENG");
	iVar13[19] = joaat("CONSUMABLE_HERB_SAGE");
	iVar13[20] = joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY");
	iVar13[21] = joaat("CONSUMABLE_HERB_CURRANT");
	iVar13[22] = joaat("CONSUMABLE_HERB_OREGANO");
	iVar13[23] = joaat("CONSUMABLE_HERB_WILD_CARROTS");
	iVar13[24] = joaat("CONSUMABLE_HERB_COMMON_BULRUSH");
	iVar13[25] = joaat("CONSUMABLE_HERB_ENGLISH_MACE");
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 < iVar13)
	{
		iVar40 = iVar13[iVar12];
		if (__LIB_12__::func_515(iVar40) && __LIB_6__::func_395(iVar40, 0, 0) > 0)
		{
			return iVar40;
		}
		iVar12++;
	}
	return 0;
}

bool func_805(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	Var0.f_9 = -1591664384;
	if (!__LIB_1__::func_416(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { __LIB_0__::func_429(iParam1, Var0, joaat("SLOTID_HORSE_MANE"), 0) };
	return func_335(Var29, 1);
}

bool func_806(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	Var0.f_9 = -1591664384;
	if (!__LIB_1__::func_416(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { __LIB_0__::func_429(iParam1, Var0, joaat("SLOTID_HORSE_TAIL"), 0) };
	return func_335(Var29, 1);
}

bool func_815(int iParam0, int iParam1, int iParam2)
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
	Var0 = { __LIB_1__::func_615(iParam0, 0, 1) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	return func_334(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_817()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1016();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_815(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_815(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

char* func_821()
{
	return "UNNAMED_HORSE";
}

void func_842()
{
	Global_1900383.f_444.f_13 = 0;
}

int func_843()
{
	return Global_1900383.f_444.f_13;
}

void func_844(int iParam0)
{
	Global_1900383.f_444.f_13 = iParam0;
}

int func_854(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_855(iVar9);
	iVar2 = func_855(iVar10);
	iVar3 = func_855(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_855(iVar12);
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

int func_855(int iParam0)
{
	int iVar0;
	if (__LIB_6__::func_462(iParam0, 1, 0))
	{
		iVar0 = __LIB_6__::func_395(iParam0, 0, 0);
	}
	return iVar0;
}

void func_857(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
	sVar2 = func_1040(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
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
	if (func_1044(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (__LIB_1__::func_165(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (__LIB_0__::func_938(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_859(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		func_1047(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_857(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_860(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (func_1047(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_857(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_857(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_890(int iParam0, int iParam1)
{
	var uVar0;
	if (__LIB_8__::func_622(iParam1, &uVar0))
	{
		if (ATTRIBUTE::_0x200373A8DF081F22(iParam0, uVar0))
		{
			return true;
		}
	}
	return false;
}

float func_891(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	fVar0 = 0f;
	if (iParam1 == 0)
	{
		if (__LIB_12__::func_205(iParam0, 0) > 50)
		{
			fVar0 = (fVar0 + 0.25f);
		}
	}
	if (__LIB_6__::func_462(joaat("PROVISION_TALISMAN_BOAR_TUSK"), 1, 0))
	{
		fVar0 = (fVar0 + -0.1f);
	}
	if (__LIB_5__::func_917() == 0 && __LIB_0__::func_479() == iParam0)
	{
		fVar1 = __LIB_12__::func_222(iParam1);
		fVar0 = (fVar0 - fVar1);
	}
	return fVar0;
}

float func_892(int iParam0, int iParam1)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/].f_1;
}

void func_893(int iParam0, int iParam1, float fParam2)
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
	fParam2 = __LIB_0__::func_251(fParam2, -1f, 1f);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/].f_1 = fParam2;
}

void func_894(int iParam0)
{
	Global_1900383.f_444.f_8 = iParam0;
}

bool func_897(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("WORLD_ANIMAL_HORSE_GRAZING")) || PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("WORLD_ANIMAL_HORSE_GRAZING_DOMESTIC")))
	{
		return true;
	}
	return false;
}

float func_898(int iParam0, int iParam1)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_1;
}

void func_899(int iParam0, int iParam1, float fParam2)
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
	fParam2 = __LIB_0__::func_251(fParam2, -1f, 1f);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_1 = fParam2;
}

void func_900(int iParam0, int iParam1)
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
	Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_1 = 0f;
}

int func_901(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_1;
}

void func_902(int iParam0)
{
	Global_1900383.f_444.f_6 = iParam0;
}

bool func_909(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	Var0 = { __LIB_1__::func_615(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1071((386 + iVar29), 1);
		if (__LIB_1__::func_112(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = __LIB_1__::func_429(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_912(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (UNK_0x3745C002F5A21C45(iVar0, uParam1, 28))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1072(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1072(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28))
	{
		func_1072(iVar0, 1);
		return iVar0;
	}
	return -1;
}

int func_914(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (UNK_0x3745C002F5A21C45(iVar0, uParam1, 17))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1072(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1072(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1072(iVar0, 1);
		return iVar0;
	}
	return -1;
}

int func_916(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (UNK_0x3745C002F5A21C45(iVar0, uParam1, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1072(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1072(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16))
	{
		func_1072(iVar0, 1);
		return iVar0;
	}
	return -1;
}

int func_938(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<12> Var0;
	int iVar14;
	int iVar15;
	struct<16> Var16;
	int iVar32;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!__LIB_0__::func_464(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (__LIB_0__::func_639(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = __LIB_0__::func_800(Var0.f_4, Param4, iParam8, 0);
	iVar15 = INVENTORY::_0xE80E50BEE276A54A(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { __LIB_0__::func_662(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_916(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

int func_940(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	struct<16> Var28;
	struct<16> Var44;
	int iVar60;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	if (__LIB_0__::func_639(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!__LIB_0__::func_464(Param0, &Var0, 1, 0) || !__LIB_0__::func_464(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (__LIB_0__::func_639(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { __LIB_0__::func_662(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { __LIB_0__::func_662(&Var14) };
	Var44.f_4 = { Var0.f_5 };
	Var44.f_11 = Var0.f_9;
	Var44.f_10 = (Var0.f_10 || iParam8);
	iVar60 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar60, joaat("BASKET"), 1168099063))
		{
			if (UNK_0x3745C002F5A21C45(iVar60, &Var28, 16) && UNK_0x3745C002F5A21C45(iVar60, &Var44, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar60))
				{
					func_1072(iVar60, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar60);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar60);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar60 = func_916(1168099063, &Var28, 0);
		iVar60 = func_916(1168099063, &Var44, 0);
	}
	return iVar60;
}

bool func_991(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1) || PED::IS_PED_INJURED(iParam1))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	fVar3 = __LIB_0__::func_665(iParam1, iParam0, 1, 1);
	if (bParam2)
	{
		fVar4 = __LIB_5__::func_985(iParam0);
		if (fVar4 >= 0.25f)
		{
			return false;
		}
		__LIB_4__::func_382(iParam0, 0.25f, iParam1);
		return true;
	}
	else if (!PED::IS_PED_FLEEING(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar5);
		TASK::_TASK_SMART_FLEE_STYLE_COORD(0, vVar0, 3, 1048576, (100f - fVar3), -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar5);
		TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar5, 1.5f, 1.5f);
		TASK::CLEAR_SEQUENCE_TASK(&iVar5);
	}
	FLOCK::_0xFF1E339CE40EAAAF(iParam0, 0);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 48, false);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	return true;
}

bool func_993(int iParam0, int iParam1)
{
	ATTRIBUTE::_0xD962F8579D702DB5();
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return false;
	}
	if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		return false;
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 176, true);
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	TASK::TASK_REVIVE_TARGET(Global_35, iParam0, iParam1);
	func_432(iParam1, 1, 0, -142743235, 0);
	return true;
}

void func_1016()
{
	var uVar0;
	struct<4> Var30;
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	__LIB_0__::func_840(Global_35, &uVar0);
	Var30 = { __LIB_0__::func_949(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	__LIB_4__::func_144(0);
	func_1114(7);
	func_1115(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		func_1115(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_1115(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

char* func_1040(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_1120() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", __LIB_0__::func_964(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1122(), 12);
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

bool func_1044(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
				bVar1 = (__LIB_6__::func_462(iVar2, 1, 0) || __LIB_0__::func_530(__LIB_0__::func_529(iVar2)));
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
					bVar1 = (func_855(iVar2) - iParam7) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
				}
				else
				{
					bVar1 = func_855(iVar2) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_855(iVar2) + iParam7) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
			}
			else
			{
				bVar1 = func_855(iVar2) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
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
					bVar1 = (func_855(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1138(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1138(iVar2);
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

bool func_1047(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1138(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1138(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1138(iVar0))
		{
			*iParam2++;
		}
		if (func_1138(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_1138(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1138(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1138(iVar0))
		{
			*iParam2++;
		}
		if (func_1138(iVar1))
		{
			*iParam2++;
		}
		if (func_1138(iVar0) && func_1138(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_1138(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1138(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1138(iVar0))
		{
			*iParam2++;
		}
		if (func_1138(iVar1))
		{
			*iParam2++;
		}
		if (func_1138(iVar2))
		{
			*iParam2++;
		}
		if ((func_1138(iVar0) && func_1138(iVar1)) && func_1138(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1138(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1138(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1138(iVar0))
		{
			*iParam2++;
		}
		if (func_1138(iVar1))
		{
			*iParam2++;
		}
		if (func_1138(iVar2))
		{
			*iParam2++;
		}
		if (func_1138(iVar3))
		{
			*iParam2++;
		}
		if (((func_1138(iVar0) && func_1138(iVar1)) && func_1138(iVar2)) && func_1138(iVar3))
		{
			return true;
		}
	}
	return false;
}

int func_1071(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return joaat("SLOTID_HORSE_BEDROLL");
		case 237:
			return joaat("SLOTID_HORSE_BLANKET");
		case 238:
			return joaat("SLOTID_HORSE_CANTLE");
		case 239:
			return joaat("SLOTID_HORSE_FENDER");
		case 240:
			return joaat("SLOTID_HORSE_HORN");
		case 241:
			return joaat("SLOTID_HORSE_INSURANCE");
		case 242:
			return 802754820;
		case 243:
			return joaat("SLOTID_HORSE_MANE");
		case 244:
			return -1886147520;
		case 245:
			return joaat("SLOTID_HORSE_REINS");
		case 246:
			return joaat("SLOTID_HORSE_SADDLE");
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return joaat("SLOTID_HORSE_SADDLEBAG");
		case 258:
			return 724026534;
		case 259:
			return joaat("SLOTID_HORSE_SEAT");
		case 260:
			return joaat("SLOTID_HORSE_SEX");
		case 261:
			return joaat("SLOTID_HORSE_SKIRT");
		case 262:
			return -1824203570;
		case 263:
			return -1654197998;
		case 264:
			return 798987653;
		case 265:
			return 976923323;
		case 266:
			return 1167442289;
		case 267:
			return joaat("SLOTID_HORSE_STIRRUP");
		case 268:
			return joaat("SLOTID_HORSE_TAIL");
		case 269:
			return -2015960939;
		case 270:
			return 1132377945;
		case 271:
			return 739936401;
		case 272:
			return 1201880974;
		case 273:
			return 819728896;
		case 274:
			return 1746010219;
		case 275:
			return 1433393959;
		case 276:
			return -1287636759;
		case 277:
			return -706917073;
		case 278:
			return -2166805;
		case 279:
			return -1391602433;
		case 280:
			return 1782075221;
		case 281:
			return 1282544585;
		case 282:
			return 1732594027;
		case 283:
			return -1058817012;
		case 284:
			return 1090546265;
		case 285:
			return -1783120823;
		case 286:
			return -1535745896;
		case 287:
			return -2086922122;
		case 288:
			return -1675198649;
		case 289:
			return 1189497682;
		case 290:
			return -1565675519;
		case 291:
			return -268973591;
		case 292:
			return 1039159916;
		case 293:
			return 1111816631;
		case 294:
			return 405591388;
		case 295:
			return 897456793;
		case 296:
			return 104187473;
		case 297:
			return 773808542;
		case 298:
			return -1120669954;
		case 299:
			return -1389278274;
		case 300:
			return 552979403;
		case 301:
			return -1571578784;
		case 302:
			return -708312114;
		case 303:
			return 688823508;
		case 304:
			return -1622147240;
		case 305:
			return 830292162;
		case 306:
			return 226276782;
		case 307:
			return -678416628;
		case 308:
			return -1098528034;
		case 309:
			return 316207340;
		case 310:
			return -1909200748;
		case 311:
			return -939652363;
		case 312:
			return joaat("SLOTID_PROGRESSION");
		case 313:
			return -375447933;
		case 314:
			return 537014919;
		case 315:
			return 1784584921;
		case 316:
			return -140655024;
		case 317:
			return 1084182731;
		case 318:
			return -1045471300;
		case 319:
			return 1617414719;
		case 320:
			return -787761753;
		case 321:
			return -490616606;
		case 322:
			return 1491346514;
		case 323:
			return -1360128126;
		case 324:
			return -1311702610;
		case 325:
			return -904250715;
		case 326:
			return 1034665895;
		case 327:
			return -101524555;
		case 328:
			return 1419152594;
		case 329:
			return -451359317;
			return -1915385310;
			return 1315162488;
			return -361152079;
			return -2041626192;
			return -2077812539;
			return -1371514637;
			return 1730017037;
			return 892816668;
			return -1994943603;
			return 603133554;
			return -30160144;
			return -1248299493;
			return 727393558;
			return 755611221;
			return -170255458;
			return 1011151573;
			return 1122339631;
			return 454815308;
			return 990701735;
			return -246340825;
			return -1410671073;
			return 1547608292;
			return -714132970;
			return 732290690;
			return 971340545;
			return -234132662;
			return -2143057988;
			return -993947465;
			return -486552269;
			return -1156317860;
			return 1229625803;
			return -388596167;
			return -1204639465;
			return -1384685096;
			return -2026728113;
			return -1228057307;
			return 1835126290;
			return 1890833594;
			return -751549960;
			return -1682270750;
			return -1839865333;
			return -1990383629;
			return 1712094016;
			return 1532953697;
			return 1620318083;
			return -307230331;
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return -1162387149;
			return 1728382685 /* GXTEntry: "Right" */;
			return -649335959 /* GXTEntry: "Left" */;
			return -1876502240;
			return -2107032155;
			return 1570861011;
			return 1075981185;
			return 960195961;
			return 1150460649;
			return 1689424794;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return 1232060796;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
			return 2051264661;
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 244353594;
			return 302954672;
			return -1870144662;
			return 257892944;
			return -607182722;
			return -13254502;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}
void func_1072(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1224227)
	{
		if (Global_1224227.f_1[iVar0 /*9*/] == iParam0)
		{
			if (Global_1224227.f_1[iVar0 /*9*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1224227.f_1[iVar0 /*9*/].f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	__LIB_0__::func_690(iParam0, iParam1);
}

void func_1114(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Global_1946804.f_2657.f_26.f_2 = 3;
	Global_1946804.f_2657.f_26.f_1 = 3;
	Global_1946804.f_2657.f_26 = 3;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_1__::func_94(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_26796.f_20;
		Global_1946804.f_2657.f_21 = Global_26796.f_21;
		Global_1946804.f_2657.f_22 = Global_26796.f_22;
		Global_1946804.f_2657.f_23 = Global_26796.f_23;
		Global_1946804.f_2657.f_24 = Global_26796.f_24;
		Global_1946804.f_2657.f_25 = Global_26796.f_25;
		Global_1946804.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar2 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_357(iVar2) != -999503751)
		{
			func_1172(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (__LIB_1__::func_701(iVar2, 0))
		{
			__LIB_1__::func_704(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1115(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	if (!__LIB_0__::func_673(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_357(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1176(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1176(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1176(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1176(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1176(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1176(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == __LIB_0__::func_856(0))
	{
		__LIB_1__::func_705(iParam0, 1);
		if (__LIB_0__::func_241() == 1160113249)
		{
			__LIB_1__::func_705(__LIB_0__::func_856(-2125499975), 0);
		}
		else
		{
			__LIB_1__::func_705(__LIB_0__::func_856(1160113249), 0);
		}
	}
	__LIB_0__::func_460();
	if (__LIB_1__::func_18(iVar0))
	{
		INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), iParam0, 0);
	}
	__LIB_1__::func_704(iParam0, bParam3);
	if (bParam2)
	{
		__LIB_0__::func_719(0, 0);
	}
}

int func_1120()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (__LIB_6__::func_462(__LIB_0__::func_421(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1122()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = __LIB_0__::func_421(iVar1);
		if (__LIB_6__::func_462(iVar2, 1, 0) || __LIB_0__::func_530(__LIB_0__::func_529(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_1138(int iParam0)
{
	if (__LIB_0__::func_599(iParam0) && __LIB_6__::func_462(iParam0, 1, 0))
	{
		return true;
	}
	else if (__LIB_0__::func_600(iParam0) && __LIB_9__::func_301(iParam0))
	{
		return true;
	}
	return false;
}

void func_1172(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	__LIB_0__::func_691(iParam2, *uParam0);
	func_1201(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

int func_1176(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	iVar1 = iParam0;
	if (Global_1946804.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (__LIB_3__::func_412(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !__LIB_1__::func_701(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		func_1172(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

void func_1201(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		__LIB_1__::func_13(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = __LIB_0__::func_161(__LIB_1__::func_710(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1210(uParam0);
	}
}

void func_1210(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1217(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_1217(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_0__::func_697(__LIB_0__::func_241());
	if (*uParam0)
	{
		__LIB_0__::func_689(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, iParam1, 0, __LIB_0__::func_2() != -1, iParam2);
	*uParam0 = 1;
}

