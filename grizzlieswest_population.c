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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = false;
	bool bLocal_30 = false;
	bool bLocal_31 = false;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	__LIB_18__::func_781();
	func_2();
	__LIB_9__::func_430(&uLocal_14, 5);
	bVar0 = true;
	while (bVar0)
	{
		__LIB_14__::func_282(&uLocal_14);
		if (__LIB_0__::func_898(-1414537028))
		{
			POPULATION::_0xF45E46DEECF7DF6E(2016, 0, 0, -1, -1);
		}
		else if (__LIB_0__::func_898(38162571))
		{
			POPULATION::_0xF45E46DEECF7DF6E(224, 0, 0, -1, -1);
			POPULATION::_0xDBBF12EA7C1029B2(0, 1);
		}
		else if (__LIB_0__::func_898(1350391819))
		{
			POPULATION::_0xDBBF12EA7C1029B2(1, 1);
		}
		func_6();
		BUILTIN::WAIT(0);
	}
	__LIB_14__::func_281();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	iLocal_24 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-600f, 2695f, 330f, 0f, 0f, 0f, 250f, 200f, 200f, "m_volAdlerRanch_Restriction");
	__LIB_3__::func_457(iLocal_24, 1);
	iLocal_25 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volColter_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_25, -1320f, 2425f, 305f, 0f, 0f, 0f, 115f, 115f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_25, -1410f, 2435f, 327.5f, 0f, 0f, 0f, 25f, 25f, 25f);
	__LIB_3__::func_457(iLocal_25, 1);
	iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-411.5007f, 1732.159f, 220.7082f, 0f, 0f, 17.18846f, 71.74252f, 70.79237f, 31.05772f, "m_volChezPorter_Restriction");
	__LIB_4__::func_858(iLocal_26, 0, 0, 1);
	iLocal_27 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volWinterMiningTown_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_27, -1947.5f, 1332.25f, 216f, 0f, 0f, 0f, 8f, 8f, 30f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_27, -1898.5f, 1346.5f, 216f, 0f, 0f, 0f, 48f, 48f, 30f);
	__LIB_4__::func_858(iLocal_27, 0, 0, 1);
	iLocal_28 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLakeIsabella_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_28, -1888.756f, 1801.481f, 235.7563f, 0f, 0f, 25.73841f, 74.84248f, 98.28612f, 31.18848f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_28, -1954.793f, 1783.318f, 243.2873f, 0f, 0f, 0f, 46.64574f, 29.92818f, 11.7102f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_28, -1762.221f, 1695.654f, 241.4712f, 0f, 0f, 41.08257f, 79.25368f, 154.9331f, 19.56473f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_28, -1701.788f, 1569.332f, 236.8674f, 0f, 0f, 0f, 35.55024f, 41.68321f, 26.91513f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_28, -1778.828f, 1559.399f, 224.9684f, 0f, 0f, 52.77263f, 63.78292f, 40.76912f, 36.18432f);
	__LIB_4__::func_859(iLocal_28, 0, 0, 1);
}

void func_6()
{
	int iVar0;
	int iVar5;
	int iVar6;
	int iVar7;
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		bLocal_29 = __LIB_9__::func_429(Global_35, -945.34f, 2170.26f, 341.83f, 25f, 0, 1);
	}
	if (bLocal_29)
	{
		if (!Global_40.f_12018)
		{
			iVar5 = 0;
			while (iVar5 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
			{
				if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar5) == 1081092949)
				{
					if (SCRIPTS::GET_EVENT_DATA(0, iVar5, &iVar0, 5))
					{
						iVar6 = iVar0;
						if (iVar6 == joaat("CONSUMABLE_CIGARETTE_BOX"))
						{
							Global_40.f_12018 = 1;
							bLocal_30 = true;
						}
					}
				}
				iVar5++;
			}
		}
		else if (!bLocal_30 && !bLocal_31)
		{
			iVar7 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-945.34f, 2170.26f, 341.83f, 2f, joaat("P_CIGARETTEBOX01X"), true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, false);
				ENTITY::SET_ENTITY_VISIBLE(iVar7, false);
				ENTITY::FREEZE_ENTITY_POSITION(iVar7, true);
				bLocal_31 = true;
			}
		}
	}
}

