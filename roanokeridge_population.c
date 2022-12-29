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
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	vector3 vLocal_42 = { 0f, 0f, 0f };
	int iLocal_45 = 0;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_25 = 7f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	fLocal_28 = 100f;
	fLocal_29 = 100f;
	fLocal_30 = 0f;
	fLocal_31 = 200f;
	vLocal_42 = { 2590.4f, 151.7f, 56.8f };
	func_1();
	func_2();
	func_3();
	__LIB_9__::func_430(&uLocal_14, 1);
	PERSCHAR::_0x187D65F3AEC5D679(joaat("GLO_WILDERNESS_TRAPPER"), "Roanoke/ROA_Trapper_1");
	if (PERSCHAR::_0x800DF3FC913355F3(PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_WILDERNESS_TRAPPER"))))
	{
		PERSCHAR::_0xD4B614179BCD0654(PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_WILDERNESS_TRAPPER")));
	}
	bVar0 = true;
	while (bVar0)
	{
		__LIB_14__::func_282(&uLocal_14);
		func_6();
		func_7();
		BUILTIN::WAIT(0);
	}
	func_8();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		func_8();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { fLocal_25, fLocal_26, fLocal_27 };
	vVar3 = { fLocal_28, fLocal_29, fLocal_30 };
	FLOCK::_0xF2CCA7B68CFAB2B9(joaat("SPECIES_BIRD_CROW"), 2638.8f, 1972.1f, 185.1f, vVar0, vVar3, 9.5f, 50f, 1f, 6f);
}

void func_3()
{
	iLocal_32 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1800f, -65f, 58.316f, 0f, 0f, 0f, 50f, 50f, 10f, "m_volAberdeenPigFarm_Restriction");
	__LIB_3__::func_457(iLocal_32, 1);
	iLocal_33 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2930f, 1360f, 75f, 0f, 0f, 0f, 170f, 170f, 75f, "m_volAnnesburg_Restriction");
	__LIB_3__::func_941(iLocal_33, 1);
	if (__LIB_0__::func_317() == 6)
	{
		iLocal_34 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBeaverHollow_Restriction");
		VOLUME::_0xBCE668AAF83608BE(iLocal_34, 2361.296f, 1344.457f, 123.1171f, 0f, 0f, 22f, 38f, 52f, 35f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_34, 2326.496f, 1326.393f, 125.5935f, 0f, 0f, 0f, 9f, 7f, 35f);
		__LIB_4__::func_859(iLocal_34, 0, 0, 1);
	}
	else
	{
		iLocal_34 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2350f, 1370f, 105f, 0f, 0f, 0f, 35f, 35f, 15f, "m_volBeaverHollow_Restriction");
		__LIB_3__::func_941(iLocal_34, 1);
	}
	iLocal_35 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2590f, 827.5f, 85f, 0f, 0f, 0f, 80f, 80f, 20f, "m_volButchersCreek_Restriction");
	__LIB_3__::func_941(iLocal_35, 1);
	iLocal_36 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2270f, -95f, 45f, 0f, 0f, 0f, 65f, 65f, 15f, "m_volMacleansHouse_Restriction");
	__LIB_3__::func_457(iLocal_36, 1);
	iLocal_37 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(3085f, 2232.5f, 210f, 0f, 0f, 7f, 130f, 150f, 75f, "m_volRockySeven_Restriction");
	__LIB_4__::func_858(iLocal_37, 0, 0, 1);
	iLocal_38 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2965f, 475f, 45f, 0f, 0f, 0f, 75f, 75f, 15f, "m_volTallulahJetty_Restriction");
	__LIB_4__::func_858(iLocal_38, 0, 0, 1);
	iLocal_39 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2518.25f, 2293f, 185.25f, 0f, 0f, 0f, 40f, 40f, 25f, "m_volTeslaLab_Restriction");
	__LIB_4__::func_858(iLocal_39, 0, 0, 1);
	iLocal_40 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2964f, 780f, 52f, 0f, 0f, 0f, 45f, 35f, 25f, "m_volVanHornHorseShop_Restriction");
	__LIB_4__::func_858(iLocal_40, 0, 0, 1);
}

void func_6()
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	int iVar14;
	int iVar15;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if ((!__LIB_2__::func_410(56) || __LIB_2__::func_410(57)) || __LIB_2__::func_774(57))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_45))
		{
			func_29();
		}
		return;
	}
	switch (iLocal_24)
	{
		case 0:
			if (__LIB_0__::func_266(Global_35, vLocal_42, fLocal_31, 0, 1))
			{
				STREAMING::REQUEST_MODEL(joaat("WAGON02X"), false);
				iLocal_24 = 1;
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(joaat("WAGON02X")))
			{
				iLocal_45 = VEHICLE::CREATE_VEHICLE(joaat("WAGON02X"), vLocal_42, 22.22f, true, true, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_45, true);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_45, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_45, 2);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_45, 0f);
				ENTITY::SET_ENTITY_PROOFS(iLocal_45, 6, true);
				iLocal_24 = 2;
			}
			break;
		case 2:
			VEHICLE::_0xA19447D83294E29F(iLocal_45, &uVar0, &iVar1);
			if (iVar1 >= VEHICLE::_0x5B1A26BB18E7D451(joaat("WAGON02X")))
			{
				MISC::GET_MODEL_DIMENSIONS(joaat("WAGON02X"), &vVar2, &vVar5);
				vVar8 = { vVar5 - vVar2 };
				vVar8 = { vVar8 * Vector(0.9f, 0.9f, 0.9f) };
				iVar14 = 0;
				while (iVar14 < 6)
				{
					iVar15 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_45, iVar14);
					if (!ENTITY::IS_ENTITY_DEAD(iVar15))
					{
						PED::SET_PED_CONFIG_FLAG(iVar15, 301, true);
						PED::SET_PED_CONFIG_FLAG(iVar15, 253, true);
						ENTITY::SET_ENTITY_PROOFS(iVar15, 6, true);
						PED::SET_PED_CAN_BE_TARGETTED(iVar15, false);
						MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar15), &vVar2, &vVar5);
						vVar11 = { vVar5 - vVar2 };
						vVar11 = { vVar11 * Vector(0.9f, 0.9f, 0.9f) };
					}
					iVar14++;
				}
				vVar8.f_1 = (vVar8.y + (vVar11.y / 2f));
				iLocal_41 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iLocal_45, true, false), ENTITY::GET_ENTITY_ROTATION(iLocal_45, 2), vVar8);
				PED::_0x7C00CFC48A782DC0(iLocal_41, iLocal_45, 0f, (vVar11.y / 2f), 0f, 0f, 0f, 0f, 2, 1);
				PATHFIND::_0x19C7567D2F2287D6(iLocal_41, 7);
				iLocal_24 = 3;
			}
			break;
		case 3:
			if (!__LIB_0__::func_266(Global_35, vLocal_42, (fLocal_31 * 1.5f), 0, 1))
			{
				func_29();
				iLocal_24 = 0;
			}
			break;
	}
}

void func_7()
{
	var uVar0;
	var uVar1;
	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return;
	}
	uVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("ROA_MLH_RANCHHAND"));
	uVar1 = PERSCHAR::_0x112DDF56300BC6E5(joaat("ROA_MLH_RANCHHAND_2"));
	if (!PERSCHAR::_0x800DF3FC913355F3(uVar0) || !PERSCHAR::_0x800DF3FC913355F3(uVar1))
	{
		return;
	}
	if (PERSCHAR::_0xEB98B38CA60742D7(uVar0) && PERSCHAR::_0xEB98B38CA60742D7(uVar1))
	{
		if (!__LIB_0__::func_898(2024769126))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(516817794, Global_36))
			{
				__LIB_0__::func_803(2024769126);
			}
		}
	}
	else if (__LIB_0__::func_898(2024769126))
	{
		if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(516817794, Global_36))
		{
			__LIB_0__::func_804(2024769126);
		}
	}
}

void func_8()
{
	__LIB_9__::func_427(&uLocal_14);
	func_29();
	FLOCK::_0xFB16F08F47B83B4C(joaat("SPECIES_BIRD_CROW"));
}

void func_29()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_45))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_45);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_41))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_41);
		VOLUME::_DELETE_VOLUME(iLocal_41);
	}
}

