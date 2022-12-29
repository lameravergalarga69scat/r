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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	bool bLocal_20 = false;
	int iLocal_21[3] = { 0, 0, 0 };
	char* sLocal_25 = NULL;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	func_1();
	func_2();
	func_3();
	bVar0 = true;
	while (bVar0)
	{
		func_4();
		func_5();
		BUILTIN::WAIT(0);
	}
	func_6();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		func_6();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3685.423f, -2597.155f, -10f, 0f, 0f, -24.7897f, 116.6365f, 76.68949f, 15f, "m_volArmadillo_Restriction");
	__LIB_6__::func_671(iLocal_14, 1);
	iLocal_15 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4800.448f, -2704.913f, 28.17212f, 0f, 0f, -47.25f, 134.75f, 95.75f, 50f, "m_VolRidgewoodFarm_Restriction");
	__LIB_3__::func_941(iLocal_15, 1);
	iLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3959.882f, -2132.151f, -5.324f, 0f, 0f, 0f, 35f, 35f, 20f, "m_volTwinRocks_Restriction");
	__LIB_3__::func_941(iLocal_16, 1);
}

void func_3()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!__LIB_0__::func_26())
		{
			iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volGuardThreat");
			VOLUME::_0x39816F6F94F385AD(iLocal_19, -3960.03f, -2122.22f, -4.99f, 0f, 0f, 51f, 4.85f, 7.96f, 13.94f);
			VOLUME::_0x39816F6F94F385AD(iLocal_19, -3955.38f, -2127.12f, -4.19f, 0f, 0f, 51f, 7.61f, 7.5f, 12.32f);
			iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volGuardRestricted");
			VOLUME::_0x6E0D3C3F828DA773(iLocal_18, iLocal_19);
			VOLUME::_0xBCE668AAF83608BE(iLocal_18, -3962.87f, -2135.84f, -5.32f, 0f, 0f, 0f, 27f, 27f, 20f);
			VOLUME::_0xBCE668AAF83608BE(iLocal_18, -3934.91f, -2138.85f, -5.32f, 0f, 0f, 0f, 10f, 10f, 20f);
			iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volGuardRegistration");
			VOLUME::_0x6E0D3C3F828DA773(iLocal_17, iLocal_18);
			VOLUME::_0xBCE668AAF83608BE(iLocal_17, -3959.88f, -2132.15f, -5.32f, 0f, 0f, 0f, 50f, 50f, 20f);
			sLocal_25 = "TWIN_ROCKS";
			LAW::_CREATE_GUARD_ZONE(sLocal_25);
			LAW::_0x8C598A930F471938(sLocal_25, iLocal_17);
			LAW::_0x35815F372D43E1E5(sLocal_25, iLocal_18);
			LAW::_0xAD3E07C37A7C1ADC(sLocal_25, iLocal_18);
			LAW::_0xA1B0E6301E2E02A6(sLocal_25, iLocal_19);
		}
	}
}

void func_4()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return;
	}
	uVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_OWNER"));
	uVar1 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_WIFE"));
	uVar2 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_RANCHHAND_1"));
	uVar3 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_RANCHHAND_2"));
	if (PERSCHAR::_0x800DF3FC913355F3(uVar3))
	{
		if (!PERSCHAR::_0xEB98B38CA60742D7(uVar3) && __LIB_0__::func_898(-154581735))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(-262371610, Global_36))
			{
				__LIB_0__::func_804(-154581735);
			}
		}
	}
	if (PERSCHAR::_0x800DF3FC913355F3(uVar2))
	{
		if (!PERSCHAR::_0xEB98B38CA60742D7(uVar2) && __LIB_0__::func_898(-154581735))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(-262371610, Global_36))
			{
				__LIB_0__::func_804(-154581735);
			}
		}
	}
	if (PERSCHAR::_0x800DF3FC913355F3(uVar1))
	{
		if (!PERSCHAR::_0xEB98B38CA60742D7(uVar1) && __LIB_0__::func_898(-154581735))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(-262371610, Global_36))
			{
				__LIB_0__::func_804(-154581735);
			}
		}
	}
	if (PERSCHAR::_0x800DF3FC913355F3(uVar0))
	{
		if (!PERSCHAR::_0xEB98B38CA60742D7(uVar0) && __LIB_0__::func_898(-154581735))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(-262371610, Global_36))
			{
				__LIB_0__::func_804(-154581735);
			}
		}
		else if (PERSCHAR::_0xEB98B38CA60742D7(uVar0) && !__LIB_0__::func_898(-154581735))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(-262371610, Global_36))
			{
				__LIB_0__::func_803(-154581735);
			}
		}
	}
}

void func_5()
{
	int iVar0[3];
	int iVar4[3];
	int iVar8[7];
	int iVar16[3];
	int iVar20;
	int iVar21;
	if (!bLocal_20)
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			return;
		}
		iVar21 = 0;
		while (iVar21 < 3)
		{
			switch (iVar21)
			{
				case 0:
					iVar0[0] = -1745210725;
					iVar0[1] = -1096712211;
					iVar0[2] = -1941005496;
					iVar4[0] = 1898267848;
					iVar4[1] = 974280355;
					iVar4[2] = 1756181464;
					iVar8[0] = -72482077;
					iVar8[1] = 1941336822;
					iVar8[2] = 1710282603;
					iVar8[3] = -1122265410;
					iVar8[4] = 1309948033;
					iVar8[5] = 712371053;
					iVar8[6] = -935952905;
					iVar16[0] = -752772715;
					iVar16[1] = 503623514;
					iVar16[2] = -752772715;
					iVar20 = 574303518;
					break;
				case 1:
					iVar0[0] = -1029093195;
					iVar0[1] = -1325390493;
					iVar0[2] = -1622834706;
					iVar4[0] = 257582350;
					iVar4[1] = -39730787;
					iVar4[2] = -1438901569;
					iVar8[0] = -772691681;
					iVar8[1] = 1011350990;
					iVar8[2] = 705321299;
					iVar8[3] = -2110850686;
					iVar8[4] = 32078073;
					iVar8[5] = 1007204499;
					iVar8[6] = -1142062162;
					iVar16[0] = 34346755;
					iVar16[1] = 482102371;
					iVar16[2] = -502343927;
					iVar20 = 112916013;
					break;
				case 2:
					iVar0[0] = -1443390498;
					iVar0[1] = 689576469;
					iVar0[2] = -1750010031;
					iVar4[0] = -1725439174;
					iVar4[1] = 1857654366;
					iVar4[2] = 2095655613;
					iVar8[0] = 1049317994;
					iVar8[1] = -279038963;
					iVar8[2] = 161441935;
					iVar8[3] = -820561187;
					iVar8[4] = -1268841107;
					iVar8[5] = 2087785010;
					iVar8[6] = -280121448;
					iVar16[0] = 1065585604;
					iVar16[1] = -175048740;
					iVar16[2] = -482127039;
					iVar20 = -1603458673;
					break;
			}
			func_13(iVar21, &iVar0, &iVar4, &iVar8, &iVar16, iVar20);
			iVar21++;
		}
		if (__LIB_0__::func_898(1583012985) && __LIB_0__::func_898(479419429))
		{
			__LIB_1__::func_408(1583012985, 0, 0);
			__LIB_1__::func_408(479419429, 0, 0);
			__LIB_1__::func_408(2077022393, 1, 0);
		}
		bLocal_20 = true;
	}
}

void func_6()
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_25);
	func_15();
}

void func_13(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	__LIB_0__::func_401(iParam5);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
	switch (iVar0)
	{
		case 0:
			__LIB_0__::func_401((*iParam1)[0]);
			__LIB_0__::func_401((*iParam1)[1]);
			__LIB_0__::func_401((*iParam1)[2]);
			__LIB_1__::func_581(&(iLocal_21[iParam0]), 1);
			__LIB_1__::func_581(&(iLocal_21[iParam0]), 2);
			__LIB_1__::func_581(&(iLocal_21[iParam0]), 4);
			break;
		case 1:
			__LIB_0__::func_401((*iParam1)[0]);
			__LIB_1__::func_581(&(iLocal_21[iParam0]), 1);
			break;
		case 2:
			__LIB_0__::func_401((*iParam1)[1]);
			__LIB_1__::func_581(&(iLocal_21[iParam0]), 2);
			break;
		case 3:
			__LIB_0__::func_401((*iParam1)[2]);
			__LIB_1__::func_581(&(iLocal_21[iParam0]), 4);
			break;
		case 4:
			__LIB_0__::func_401((*iParam1)[0]);
			__LIB_0__::func_401((*iParam1)[1]);
			__LIB_1__::func_581(&(iLocal_21[iParam0]), 1);
			__LIB_1__::func_581(&(iLocal_21[iParam0]), 2);
			break;
		case 5:
			__LIB_0__::func_401((*iParam1)[0]);
			__LIB_0__::func_401((*iParam1)[2]);
			__LIB_1__::func_581(&(iLocal_21[iParam0]), 1);
			__LIB_1__::func_581(&(iLocal_21[iParam0]), 4);
			break;
		case 6:
			__LIB_0__::func_401((*iParam1)[1]);
			__LIB_0__::func_401((*iParam1)[2]);
			__LIB_1__::func_581(&(iLocal_21[iParam0]), 2);
			__LIB_1__::func_581(&(iLocal_21[iParam0]), 4);
			break;
	}
	if (__LIB_0__::func_1(iLocal_21[iParam0], 1))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			__LIB_0__::func_401((*iParam2)[0]);
			__LIB_1__::func_581(&(iLocal_21[iParam0]), 8);
		}
	}
	if (__LIB_0__::func_1(iLocal_21[iParam0], 2))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			__LIB_0__::func_401((*iParam2)[1]);
			__LIB_1__::func_581(&(iLocal_21[iParam0]), 16);
		}
	}
	if (__LIB_0__::func_1(iLocal_21[iParam0], 4))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			__LIB_0__::func_401((*iParam2)[2]);
			__LIB_1__::func_581(&(iLocal_21[iParam0]), 32);
		}
	}
	if ((__LIB_0__::func_1(iLocal_21[iParam0], 8) && __LIB_0__::func_1(iLocal_21[iParam0], 16)) && __LIB_0__::func_1(iLocal_21[iParam0], 32))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
		switch (iVar0)
		{
			case 0:
				__LIB_0__::func_401((*iParam3)[6]);
				__LIB_1__::func_581(&(iLocal_21[iParam0]), 4096);
				break;
			case 2:
				__LIB_0__::func_401((*iParam3)[3]);
				__LIB_1__::func_581(&(iLocal_21[iParam0]), 512);
				break;
			case 3:
				__LIB_0__::func_401((*iParam3)[4]);
				__LIB_1__::func_581(&(iLocal_21[iParam0]), 1024);
				break;
			case 4:
				__LIB_0__::func_401((*iParam3)[5]);
				__LIB_1__::func_581(&(iLocal_21[iParam0]), 2048);
				break;
			case 5:
				__LIB_0__::func_401((*iParam3)[0]);
				__LIB_1__::func_581(&(iLocal_21[iParam0]), 64);
				break;
			case 6:
				__LIB_0__::func_401((*iParam3)[1]);
				__LIB_1__::func_581(&(iLocal_21[iParam0]), 128);
				break;
			case 7:
				__LIB_0__::func_401((*iParam3)[2]);
				__LIB_1__::func_581(&(iLocal_21[iParam0]), 256);
				break;
		}
	}
	else if (__LIB_0__::func_1(iLocal_21[iParam0], 8) && __LIB_0__::func_1(iLocal_21[iParam0], 16))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		switch (iVar0)
		{
			case 0:
				__LIB_0__::func_401((*iParam3)[3]);
				__LIB_1__::func_581(&(iLocal_21[iParam0]), 512);
				break;
			case 1:
				__LIB_0__::func_401((*iParam3)[0]);
				__LIB_1__::func_581(&(iLocal_21[iParam0]), 64);
				break;
			case 2:
				__LIB_0__::func_401((*iParam3)[1]);
				__LIB_1__::func_581(&(iLocal_21[iParam0]), 128);
				break;
		}
	}
	else if (__LIB_0__::func_1(iLocal_21[iParam0], 16) && __LIB_0__::func_1(iLocal_21[iParam0], 32))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		switch (iVar0)
		{
			case 0:
				__LIB_0__::func_401((*iParam3)[5]);
				__LIB_1__::func_581(&(iLocal_21[iParam0]), 2048);
				break;
			case 1:
				__LIB_0__::func_401((*iParam3)[1]);
				__LIB_1__::func_581(&(iLocal_21[iParam0]), 128);
				break;
			case 2:
				__LIB_0__::func_401((*iParam3)[2]);
				__LIB_1__::func_581(&(iLocal_21[iParam0]), 256);
				break;
		}
	}
	else if (__LIB_0__::func_1(iLocal_21[iParam0], 8) && __LIB_0__::func_1(iLocal_21[iParam0], 32))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		switch (iVar0)
		{
			case 0:
				__LIB_0__::func_401((*iParam3)[4]);
				__LIB_1__::func_581(&(iLocal_21[iParam0]), 1024);
				break;
			case 1:
				__LIB_0__::func_401((*iParam3)[0]);
				__LIB_1__::func_581(&(iLocal_21[iParam0]), 64);
				break;
			case 2:
				__LIB_0__::func_401((*iParam3)[2]);
				__LIB_1__::func_581(&(iLocal_21[iParam0]), 256);
				break;
		}
	}
	else if (__LIB_0__::func_1(iLocal_21[iParam0], 8))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			__LIB_0__::func_401((*iParam3)[0]);
			__LIB_1__::func_581(&(iLocal_21[iParam0]), 64);
		}
	}
	else if (__LIB_0__::func_1(iLocal_21[iParam0], 16))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			__LIB_0__::func_401((*iParam3)[1]);
			__LIB_1__::func_581(&(iLocal_21[iParam0]), 128);
		}
	}
	else if (__LIB_0__::func_1(iLocal_21[iParam0], 32))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			__LIB_0__::func_401((*iParam3)[2]);
			__LIB_1__::func_581(&(iLocal_21[iParam0]), 256);
		}
	}
	if (!__LIB_0__::func_1(iLocal_21[iParam0], 8128))
	{
		if (__LIB_0__::func_1(iLocal_21[iParam0], 8))
		{
			__LIB_0__::func_401((*iParam4)[0]);
		}
		if (__LIB_0__::func_1(iLocal_21[iParam0], 16))
		{
			__LIB_0__::func_401((*iParam4)[1]);
		}
		if (__LIB_0__::func_1(iLocal_21[iParam0], 32))
		{
			__LIB_0__::func_401((*iParam4)[2]);
		}
	}
}

void func_15()
{
	__LIB_0__::func_400(-1745210725);
	__LIB_0__::func_400(-1096712211);
	__LIB_0__::func_400(-1941005496);
	__LIB_0__::func_400(1898267848);
	__LIB_0__::func_400(974280355);
	__LIB_0__::func_400(1756181464);
	__LIB_0__::func_400(-72482077);
	__LIB_0__::func_400(1941336822);
	__LIB_0__::func_400(1710282603);
	__LIB_0__::func_400(-1122265410);
	__LIB_0__::func_400(1309948033);
	__LIB_0__::func_400(-935952905);
	__LIB_0__::func_400(712371053);
	__LIB_0__::func_400(-752772715);
	__LIB_0__::func_400(503623514);
	__LIB_0__::func_400(-407026996);
	__LIB_0__::func_400(574303518);
	__LIB_0__::func_400(-1029093195);
	__LIB_0__::func_400(-1325390493);
	__LIB_0__::func_400(-1622834706);
	__LIB_0__::func_400(257582350);
	__LIB_0__::func_400(-39730787);
	__LIB_0__::func_400(-1438901569);
	__LIB_0__::func_400(-772691681);
	__LIB_0__::func_400(1011350990);
	__LIB_0__::func_400(705321299);
	__LIB_0__::func_400(-2110850686);
	__LIB_0__::func_400(32078073);
	__LIB_0__::func_400(-1142062162);
	__LIB_0__::func_400(1007204499);
	__LIB_0__::func_400(34346755);
	__LIB_0__::func_400(482102371);
	__LIB_0__::func_400(-502343927);
	__LIB_0__::func_400(112916013);
	__LIB_0__::func_400(-1443390498);
	__LIB_0__::func_400(689576469);
	__LIB_0__::func_400(-1750010031);
	__LIB_0__::func_400(-1725439174);
	__LIB_0__::func_400(1857654366);
	__LIB_0__::func_400(2095655613);
	__LIB_0__::func_400(1049317994);
	__LIB_0__::func_400(-279038963);
	__LIB_0__::func_400(161441935);
	__LIB_0__::func_400(-820561187);
	__LIB_0__::func_400(-1268841107);
	__LIB_0__::func_400(-280121448);
	__LIB_0__::func_400(2087785010);
	__LIB_0__::func_400(1065585604);
	__LIB_0__::func_400(-175048740);
	__LIB_0__::func_400(-482127039);
	__LIB_0__::func_400(-1603458673);
	iLocal_21[0] = 0;
	iLocal_21[1] = 0;
	iLocal_21[2] = 0;
	bLocal_20 = false;
}

