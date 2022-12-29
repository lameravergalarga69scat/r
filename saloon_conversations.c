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
	var uLocal_21 = -1;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	int iLocal_24 = 0;
	struct<2> Local_25 = { 0, 0 } ;
	var uLocal_27 = -1082130432;
	var uLocal_28 = -1082130432;
	var uLocal_29 = 0;
	var uLocal_30 = -1082130432;
	var uLocal_31 = -1082130432;
	var uLocal_32 = 0;
	var uLocal_33 = -1082130432;
	var uLocal_34 = -1082130432;
	var uLocal_35 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_23 = "beat_gang_camp_reminder";
	iLocal_24 = 23;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_2__::func_822();
	}
	Local_25 = vScriptParam_0.x;
	Local_25.f_1 = vScriptParam_0.y;
	if (__LIB_4__::func_192(Local_25.f_1) && __LIB_4__::func_189(Local_25))
	{
		while (!__LIB_9__::func_510(1) && !__LIB_0__::func_13(32768))
		{
			if (func_6(vScriptParam_0.f_2))
			{
			}
			else
			{
				func_7();
				BUILTIN::WAIT(0);
			}
		}
	}
	__LIB_2__::func_822();
}

bool func_6(vector3 vParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (!Global_1935369.f_5[Local_25.f_1 /*11*/])
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vParam0, true) > 20f)
			{
				return true;
			}
		}
		if (__LIB_0__::func_1(Global_1935630, 2097152))
		{
			return true;
		}
	}
	return false;
}

void func_7()
{
	if (Global_1879534.f_1 || Global_1879534)
	{
		return;
	}
	switch (Local_25)
	{
		case 5:
			func_9(&uLocal_27, 84, 5, -316.4756f, 795.1207f, 116.6641f, 0, Local_25.f_1);
			break;
		case 3:
			func_9(&uLocal_30, 101, 3, 1342.767f, -1374.869f, 79.5128f, 1, Local_25.f_1);
			break;
		case 1:
			func_9(&uLocal_33, 110, 1, 2796.278f, -1168.035f, 46.924f, 1, Local_25.f_1);
			break;
	}
}

void func_9(var uParam0, int iParam1, int iParam2, vector3 vParam3, bool bParam6, int iParam7)
{
	bool bVar0;
	switch (uParam0->f_2)
	{
		case 0:
			*uParam0 = -1f;
			uParam0->f_1 = -1f;
			func_10(uParam0, iParam1, 1);
			break;
		case 1:
			if (!Global_1935369.f_5[iParam7 /*11*/] && iParam1 != 101)
			{
			}
			else
			{
				if (Local_25 != iParam2)
				{
					func_10(uParam0, iParam1, 5);
				}
				else if (__LIB_1__::func_988(iParam1))
				{
					func_10(uParam0, iParam1, 3);
				}
				else
				{
					switch (iParam1)
					{
						case 84:
							bVar0 = func_12();
							break;
						case 101:
							bVar0 = func_13();
							break;
						case 110:
							bVar0 = func_14();
							break;
					}
					if (bVar0)
					{
						__LIB_8__::func_958(iParam1, bParam6, vParam3, -1, 0, 0);
						*uParam0 = __LIB_0__::func_36();
						func_10(uParam0, iParam1, 2);
					}
				}
				Jump @396; //curOff = 228
				if ((__LIB_0__::func_36() - *uParam0) > 8f)
				{
					if (__LIB_1__::func_988(iParam1))
					{
						func_10(uParam0, iParam1, 3);
					}
					else if (__LIB_11__::func_149(iParam1) > 0)
					{
						func_10(uParam0, iParam1, 5);
					}
					else
					{
						uParam0->f_1 = __LIB_0__::func_36();
						func_10(uParam0, iParam1, 4);
					}
				}
				Jump @396; //curOff = 308
				if (!__LIB_1__::func_988(iParam1))
				{
					uParam0->f_1 = __LIB_0__::func_36();
					func_10(uParam0, iParam1, 4);
				}
				else if (__LIB_11__::func_149(iParam1) > 0)
				{
					func_10(uParam0, iParam1, 5);
				}
				Jump @396; //curOff = 360
				if ((__LIB_0__::func_36() - uParam0->f_1) > 10f)
				{
					func_10(uParam0, iParam1, 0);
				}
			}
			default:
				break;
	}
}

void func_10(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam2;
}

int func_12()
{
	if (!func_18(84, 5, 0, -1082130432 /* Float: -1f */))
	{
		return 0;
	}
	if (__LIB_3__::func_657(84) >= 2)
	{
		return 0;
	}
	if (!func_20(84))
	{
		return 0;
	}
	return 1;
}

int func_13()
{
	if (!func_18(101, 3, 0, -1082130432 /* Float: -1f */))
	{
		return 0;
	}
	if (__LIB_11__::func_149(101) >= 1)
	{
		return 0;
	}
	if (__LIB_3__::func_751(18))
	{
		return 0;
	}
	if (__LIB_3__::func_251(1342.767f, -1374.869f, 79.5128f))
	{
		return 0;
	}
	return 1;
}

int func_14()
{
	if (__LIB_0__::func_12() != 5)
	{
		return 0;
	}
	if (!func_18(110, 1, 1, 20f))
	{
		return 0;
	}
	if (__LIB_11__::func_149(110) >= 1)
	{
		return 0;
	}
	if (__LIB_1__::func_988(107))
	{
		return 0;
	}
	if (!func_20(110))
	{
		return 0;
	}
	if (__LIB_3__::func_251(2796.278f, -1168.035f, 46.924f))
	{
		return 0;
	}
	return 1;
}

bool func_18(int iParam0, int iParam1, int iParam2, float fParam3)
{
	float fVar0;
	if (fParam3 > 0f)
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1935369.f_5[iParam2 /*11*/].f_1, true);
		if (fVar0 > fParam3)
		{
			return false;
		}
	}
	else if (!__LIB_4__::func_930(iParam1))
	{
		return false;
	}
	if (__LIB_1__::func_988(iParam0))
	{
		return false;
	}
	if (iParam0 == 84)
	{
		if (__LIB_0__::func_296(64, 0, 1))
		{
			return false;
		}
	}
	else if (__LIB_2__::func_776())
	{
		return false;
	}
	if (__LIB_2__::func_84())
	{
		return false;
	}
	if (__LIB_0__::func_73(1))
	{
		return false;
	}
	if (!__LIB_11__::func_126(iParam0))
	{
		return false;
	}
	if (__LIB_1__::func_982(iParam0))
	{
		return false;
	}
	if (!Global_17504.f_42[iParam0 /*8*/].f_7)
	{
		return false;
	}
	return true;
}

bool func_20(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	iVar0 = __LIB_1__::func_898();
	switch (iParam0)
	{
		case 0:
			if (__LIB_4__::func_13(0, iVar0) > 0)
			{
				if (((iVar0 == 4 || iVar0 == 7) || iVar0 == 9) || iVar0 == 10)
				{
					return false;
				}
			}
			return true;
		case 2:
			if (__LIB_3__::func_751(11) && __LIB_1__::func_898() == 1)
			{
				return false;
			}
			if (__LIB_0__::func_113() && __LIB_1__::func_898() == 4)
			{
				return false;
			}
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 3:
			if (__LIB_2__::func_633(2) || __LIB_10__::func_695(2))
			{
				return false;
			}
			return true;
		case 76:
			if (__LIB_14__::func_435(19))
			{
				return false;
			}
			else if (!func_44(115, -1, 0))
			{
				return false;
			}
			if (__LIB_14__::func_435(68) && !__LIB_2__::func_410(59))
			{
				return false;
			}
			return true;
		case 6:
			if (iVar0 == -1)
			{
				return false;
			}
			if (iVar0 == 8)
			{
				if (__LIB_14__::func_432(39))
				{
					return false;
				}
			}
			else if (!__LIB_0__::func_214(joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
			{
				return false;
			}
			return true;
		case 7:
			if (__LIB_0__::func_113())
			{
				if (!__LIB_2__::func_410(7))
				{
					return false;
				}
			}
			else if (__LIB_0__::func_181())
			{
				if (!__LIB_2__::func_410(69))
				{
					return false;
				}
			}
			return true;
		case 31:
			if (__LIB_1__::func_923() || __LIB_3__::func_183())
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 10:
			if (!__LIB_0__::func_181() && (__LIB_3__::func_993(10, 0) == 2 || __LIB_3__::func_993(10, 0) == 1))
			{
				return false;
			}
			if (__LIB_0__::func_181() && ((__LIB_3__::func_993(10, 1) == 2 || __LIB_3__::func_993(10, 0) == 1) || __LIB_3__::func_993(10, 1) == 1))
			{
				return false;
			}
			return true;
		case 11:
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				return false;
			}
			if (__LIB_2__::func_633(2) || __LIB_10__::func_695(2))
			{
				return false;
			}
			return true;
		case 12:
			if (__LIB_3__::func_657(12) < 3)
			{
				switch (__LIB_1__::func_898())
				{
					case 4:
					case 12:
						if (((!__LIB_2__::func_633(3) && !__LIB_2__::func_410(75)) && __LIB_3__::func_564(12, 1) != 2) && __LIB_0__::func_181())
						{
							return true;
						}
						else
						{
							return false;
						}
						break;
					case 1:
					case 3:
					case 9:
						if (((!__LIB_2__::func_633(0) && __LIB_3__::func_564(12, 0) != 1) && !__LIB_14__::func_435(65)) && __LIB_0__::func_113())
						{
							return true;
						}
						else
						{
							return false;
						}
						break;
					case 13:
					case 14:
					case 15:
					case 16:
						if ((!__LIB_2__::func_633(5) && __LIB_3__::func_564(12, 2) != 3) && __LIB_0__::func_181())
						{
							return true;
						}
						else
						{
							return false;
						}
						break;
				}
			}
			break;
		case 79:
			if (__LIB_3__::func_657(4) == 0 && __LIB_3__::func_657(45) == 0)
			{
				return false;
			}
			switch (__LIB_0__::func_12())
			{
				case 76:
					if ((__LIB_3__::func_564(45, 0) == 5 || __LIB_3__::func_564(45, 0) == 6) && __LIB_3__::func_564(45, 5) == 1)
					{
						if ((!__LIB_0__::func_181() && __LIB_3__::func_564(45, 3) == 1) || (__LIB_0__::func_181() && __LIB_3__::func_564(45, 3) == 2))
						{
							if (__LIB_3__::func_674(45, 0) == 3)
							{
								return false;
							}
							else if (__LIB_17__::func_633(45, 0, 1, 6))
							{
								if (func_55())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
				case 26:
					if (__LIB_3__::func_564(4, 1) == 1)
					{
						if ((!__LIB_0__::func_181() && __LIB_3__::func_564(4, 4) == 1) || (__LIB_0__::func_181() && __LIB_3__::func_564(4, 4) == 2))
						{
							if (__LIB_3__::func_674(4, 1) == 3)
							{
								return false;
							}
							else if (__LIB_17__::func_633(4, 1, 1, 6))
							{
								if (func_55())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
				case 105:
					if ((__LIB_3__::func_564(45, 2) == 5 || __LIB_3__::func_564(45, 2) == 6) && __LIB_3__::func_564(45, 6) == 1)
					{
						if ((!__LIB_0__::func_181() && __LIB_3__::func_564(45, 4) == 1) || (__LIB_0__::func_181() && __LIB_3__::func_564(45, 4) == 2))
						{
							if (__LIB_3__::func_674(45, 2) == 3)
							{
								return false;
							}
							else if (__LIB_17__::func_633(45, 2, 1, 6))
							{
								if (func_55())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
				case 78:
					if (__LIB_3__::func_564(4, 0) == 1)
					{
						if ((!__LIB_0__::func_181() && __LIB_3__::func_564(4, 3) == 1) || (__LIB_0__::func_181() && __LIB_3__::func_564(4, 3) == 2))
						{
							if (__LIB_3__::func_674(4, 0) == 3)
							{
								return false;
							}
							else if (__LIB_17__::func_633(4, 0, 1, 6))
							{
								if (func_55())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
			}
			return false;
		case 82:
			if (__LIB_3__::func_628(0))
			{
				if (__LIB_0__::func_12() == 5 && __LIB_3__::func_564(82, 0) == 1)
				{
					return false;
				}
				if (__LIB_0__::func_12() == 38 && __LIB_3__::func_564(82, 1) == 1)
				{
					return false;
				}
			}
			return true;
		case 83:
			if (__LIB_11__::func_149(75) <= 0)
			{
				return false;
			}
			if (__LIB_11__::func_179())
			{
				return false;
			}
			return true;
		case 84:
			if (__LIB_11__::func_183(76, 1, 0))
			{
				return false;
			}
			if (__LIB_8__::func_714(__LIB_1__::func_885(76), joaat("TSTAG_LOCKDOWN_SALOON"), 1))
			{
				return false;
			}
			if (__LIB_0__::func_627(117, 0) || __LIB_0__::func_627(118, 0))
			{
				return false;
			}
			if (__LIB_3__::func_657(84) >= 2)
			{
				return false;
			}
			if (__LIB_3__::func_993(84, 0) == 2 || __LIB_3__::func_993(84, 1) == 2)
			{
				return false;
			}
			if (__LIB_3__::func_993(84, 0) == 3 || __LIB_3__::func_993(84, 1) == 3)
			{
				return false;
			}
			if (__LIB_3__::func_564(84, 2) == 1 && __LIB_0__::func_181())
			{
				return false;
			}
			if (__LIB_0__::func_113())
			{
				if (!__LIB_2__::func_410(7))
				{
					return false;
				}
			}
			if (__LIB_14__::func_432(69))
			{
				return false;
			}
			else if (__LIB_14__::func_432(9))
			{
				return false;
			}
			else if (__LIB_14__::func_432(5))
			{
				return false;
			}
			return true;
		case 15:
			if (__LIB_3__::func_564(15, 0) >= 1)
			{
				return false;
			}
			if (__LIB_3__::func_674(15, 1) >= 3)
			{
				return false;
			}
			if (__LIB_3__::func_564(15, 2) >= 1)
			{
				return false;
			}
			return true;
		case 86:
			if (__LIB_0__::func_12() != 78 && __LIB_2__::func_410(26))
			{
				return false;
			}
			return true;
		case 87:
			if (__LIB_0__::func_181())
			{
			}
			else if (__LIB_3__::func_657(87) >= 2)
			{
				return false;
			}
			return true;
		case 16:
			if (__LIB_3__::func_657(16) > 0)
			{
				return false;
			}
			if (!__LIB_3__::func_463(joaat("CONSUMABLE_WHISKEY"), 1, 0))
			{
				return false;
			}
			return true;
		case 90:
			iVar2 = __LIB_0__::func_12();
			iVar3 = __LIB_1__::func_447(__LIB_4__::func_902(904), 1);
			if (iVar2 == 92 && iVar3 == 92)
			{
				return false;
			}
			if (func_65() == 0)
			{
				return false;
			}
			return true;
		case 89:
			iVar4 = __LIB_0__::func_12();
			if (__LIB_11__::func_183(iVar4, 1, 0))
			{
				return false;
			}
			if (func_65() == 0)
			{
				return false;
			}
			if (__LIB_11__::func_149(101) >= 1)
			{
				return true;
			}
			return false;
		case 88:
			iVar5 = __LIB_0__::func_12();
			if (__LIB_11__::func_183(iVar5, 1, 0))
			{
				return false;
			}
			if (iVar5 == 76)
			{
				if (__LIB_14__::func_432(69))
				{
					return false;
				}
				else if (__LIB_14__::func_432(9))
				{
					return false;
				}
				else if (__LIB_14__::func_432(5))
				{
					return false;
				}
				else if (__LIB_0__::func_627(117, 0))
				{
					return false;
				}
				else if (__LIB_0__::func_627(118, 0))
				{
					return false;
				}
				if (__LIB_4__::func_930(5))
				{
					return false;
				}
			}
			iVar6 = __LIB_1__::func_447(__LIB_4__::func_902(904), 1);
			if (iVar5 == 92)
			{
				if (iVar6 == 92)
				{
					return false;
				}
				if (__LIB_4__::func_930(8))
				{
					return false;
				}
			}
			if (func_65() == 0)
			{
				return false;
			}
			return true;
		case 17:
			if (__LIB_3__::func_751(56))
			{
				return false;
			}
			if (__LIB_1__::func_898() == 11 || __LIB_1__::func_898() == 0)
			{
				if (__LIB_0__::func_730(3) || __LIB_3__::func_151(3))
				{
					return false;
				}
			}
			else if (__LIB_0__::func_730(69) || __LIB_3__::func_151(69))
			{
				return false;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (PED::_IS_PED_CARRYING(Global_1935630.f_40))
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			return true;
		case 18:
			if (__LIB_2__::func_633(2))
			{
				return false;
			}
			return true;
		case 91:
			if (__LIB_11__::func_149(75) <= 0)
			{
				return false;
			}
			return true;
		case 92:
			switch (__LIB_1__::func_898())
			{
				case 11:
					if (__LIB_2__::func_633(2) || __LIB_10__::func_695(2))
					{
						return false;
					}
					if (__LIB_1__::func_200(30))
					{
						return false;
					}
					return true;
				case 1:
				case 3:
				case 9:
					if (__LIB_2__::func_633(0))
					{
						return false;
					}
					return true;
			}
			return true;
		case 20:
			if (__LIB_14__::func_432(13))
			{
				return false;
			}
			return true;
		case 23:
			if (func_69() == 0)
			{
				return true;
			}
			return false;
		case 94:
			iVar7 = __LIB_0__::func_12();
			switch (iVar7)
			{
				case 26:
				case 76:
					if (__LIB_2__::func_633(0))
					{
						return false;
					}
					if (!__LIB_0__::func_21(76, 2048))
					{
						return false;
					}
					if (__LIB_1__::func_988(99))
					{
						return false;
					}
					break;
				case 5:
				case 105:
					if (__LIB_1__::func_988(96))
					{
						return false;
					}
					if (__LIB_1__::func_988(77))
					{
						return false;
					}
					break;
			}
			return true;
		case 119:
			if (!__LIB_14__::func_435(152))
			{
				return false;
			}
			if (__LIB_14__::func_436())
			{
				return false;
			}
			if (__LIB_19__::func_427(iVar0))
			{
				return true;
			}
			break;
		case 27:
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				return false;
			}
			else
			{
				if (__LIB_3__::func_674(27, 0) == 3)
				{
					return false;
				}
				if (__LIB_3__::func_674(27, 1) == 3)
				{
					return false;
				}
				if (__LIB_3__::func_674(27, 2) == 3)
				{
					return false;
				}
				if (__LIB_3__::func_564(27, 0) >= 3)
				{
					return false;
				}
				if (__LIB_3__::func_564(27, 1) >= 3)
				{
					return false;
				}
				if (__LIB_3__::func_564(27, 2) >= 3)
				{
					return false;
				}
				if (ATTRIBUTE::GET_ATTRIBUTE_RANK(PED::GET_MOUNT(Global_35), 4) < 2 && ATTRIBUTE::GET_ATTRIBUTE_RANK(PED::GET_MOUNT(Global_35), 5) < 2)
				{
					return false;
				}
				if (__LIB_0__::func_819(7) < 3)
				{
					return false;
				}
				if (__LIB_1__::func_898() == 3 || __LIB_1__::func_898() == 6)
				{
					if (__LIB_2__::func_410(56) && !__LIB_2__::func_410(60))
					{
						return false;
					}
				}
				if (__LIB_1__::func_898() == 11)
				{
					if (__LIB_2__::func_410(26) && !__LIB_2__::func_410(28))
					{
						return false;
					}
				}
				return true;
			}
			break;
		case 95:
			if (__LIB_2__::func_633(2))
			{
				return false;
			}
			return true;
		case 30:
			switch (__LIB_1__::func_898())
			{
				case 0:
				case 2:
					if (__LIB_3__::func_151(5) || __LIB_0__::func_730(5))
					{
						return false;
					}
					if (__LIB_2__::func_410(44))
					{
						if (!__LIB_2__::func_410(45) && !__LIB_14__::func_435(24))
						{
							if (__LIB_4__::func_13(30, 2) == 0 && __LIB_4__::func_13(30, 0) == 0)
							{
								return false;
							}
						}
					}
					if (__LIB_3__::func_563(0, 39))
					{
						return false;
					}
					if (__LIB_11__::func_159(0))
					{
						return false;
					}
					if (__LIB_10__::func_696(39))
					{
						return false;
					}
					if (func_77(0, 39, &uVar8))
					{
						return false;
					}
					return true;
			}
			return true;
		case 32:
			if (__LIB_3__::func_657(34) > 0 && __LIB_3__::func_657(33) > 0)
			{
				if (__LIB_3__::func_657(32) == 0)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			break;
		case 33:
			if (__LIB_3__::func_993(33, 0) == 16)
			{
				return false;
			}
			else if (__LIB_1__::func_898() == 1 && __LIB_0__::func_94(Global_35, -1374.053f, -741.9763f, 90.7132f, 1) < 200f)
			{
				if (__LIB_0__::func_627(49, 0))
				{
					return false;
				}
				if (__LIB_0__::func_627(101, 0))
				{
					return false;
				}
			}
			else
			{
				return true;
			}
			return true;
		case 34:
			if (__LIB_3__::func_657(33) > 0)
			{
				if (__LIB_3__::func_657(34) == 0)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			break;
		case 37:
			switch (__LIB_3__::func_168(__LIB_1__::func_898()))
			{
				case 1:
					if (__LIB_0__::func_181())
					{
						if (__LIB_3__::func_564(37, 5) == 1)
						{
							return false;
						}
					}
					if (__LIB_3__::func_993(37, 0) == 2)
					{
						return false;
					}
					break;
				case 3:
					if (__LIB_0__::func_181())
					{
						if (__LIB_3__::func_564(37, 6) == 1)
						{
							return false;
						}
					}
					if (__LIB_3__::func_993(37, 1) == 2)
					{
						return false;
					}
					break;
			}
			return true;
		case 97:
			if (__LIB_1__::func_898() == 1 && __LIB_14__::func_432(11))
			{
				return false;
			}
			if (__LIB_1__::func_898() == 9 && !__LIB_14__::func_437(0))
			{
				return false;
			}
			return true;
		case 98:
			if (__LIB_0__::func_12() == 76 && __LIB_3__::func_564(98, 1) == 1)
			{
				return false;
			}
			if (__LIB_0__::func_12() == 92)
			{
				if (__LIB_0__::func_627(82, 0) || __LIB_0__::func_627(83, 0))
				{
					return false;
				}
			}
			return true;
		case 39:
			if (__LIB_0__::func_730(26) || __LIB_3__::func_151(26))
			{
				return false;
			}
			return true;
		case 28:
			if (__LIB_2__::func_410(22) && !__LIB_2__::func_410(27))
			{
				if (__LIB_3__::func_332(-1063.709f, -520.2658f, 82.0255f, 1) < 110f || __LIB_3__::func_332(-815.6782f, -520.9415f, 45.4979f, 1) < 110f)
				{
					return false;
				}
			}
			if (__LIB_1__::func_898() == 0 || __LIB_1__::func_898() == 11)
			{
				if (Global_1888801[0 /*35*/].f_1 > 0)
				{
					if (Global_1888801[0 /*35*/].f_1 + 900000) > MISC::GET_GAME_TIMER()
					{
						return false;
					}
				}
			}
			if (__LIB_1__::func_898() == 1)
			{
				if (Global_1888801[17 /*35*/].f_1 > 0)
				{
					if (Global_1888801[17 /*35*/].f_1 + 900000) > MISC::GET_GAME_TIMER()
					{
						return false;
					}
				}
				if (!__LIB_0__::func_181())
				{
					return false;
				}
			}
			return true;
		case 40:
			if (__LIB_11__::func_189())
			{
				if (__LIB_11__::func_190(__LIB_1__::func_898(), 1, 0) != 0)
				{
					return true;
				}
			}
			break;
		case 42:
			if (__LIB_3__::func_993(42, 0) == 2 || __LIB_3__::func_993(42, 1) == 2)
			{
				return false;
			}
			if (__LIB_3__::func_657(42) >= 2)
			{
				return false;
			}
			return true;
		case 77:
			if (__LIB_1__::func_988(94))
			{
				return false;
			}
			return true;
		case 96:
			if (__LIB_1__::func_988(94))
			{
				return false;
			}
			return true;
		case 99:
			if (__LIB_11__::func_149(99) >= 2)
			{
				return false;
			}
			if (__LIB_1__::func_988(94))
			{
				return false;
			}
			return true;
		case 100:
			switch (__LIB_1__::func_898())
			{
				case 1:
					if (__LIB_3__::func_993(100, 1) != 1 && __LIB_0__::func_181())
					{
						return true;
					}
					break;
				case 0:
				case 11:
					return false;
			}
			return false;
		case 44:
			if (__LIB_1__::func_988(57))
			{
				return false;
			}
			switch (__LIB_1__::func_898())
			{
				case 1:
				case 3:
				case 9:
					if (__LIB_2__::func_633(0) || __LIB_0__::func_181())
					{
						return false;
					}
					break;
				case 11:
					if (__LIB_2__::func_633(2) || __LIB_10__::func_695(2))
					{
						return false;
					}
					else if (__LIB_3__::func_332(1624.51f, -1818.45f, 49.6045f, 1) < 225f)
					{
						if (SCRIPTS::HAS_SCRIPT_LOADED("gang_enc_lemoyne_church") || !__LIB_0__::func_563(65536, 2))
						{
							return false;
						}
					}
					break;
			}
			return true;
		case 101:
			if (__LIB_2__::func_633(2))
			{
				return false;
			}
			if (__LIB_14__::func_431(92, 65536) || __LIB_1__::func_982(92))
			{
				return true;
			}
			return false;
		case 102:
			switch (__LIB_0__::func_12())
			{
				case 76:
					if (__LIB_3__::func_993(102, 1) == 1 && __LIB_3__::func_993(102, 2) == 1)
					{
						return false;
					}
					break;
				case 26:
					if (__LIB_3__::func_993(102, 0) == 1)
					{
						return false;
					}
					break;
			}
			return true;
		case 103:
			if (__LIB_3__::func_657(103) >= 2)
			{
				return false;
			}
			if (__LIB_0__::func_12() == 5)
			{
				if (!__LIB_14__::func_433(6, -1))
				{
					return false;
				}
				if (__LIB_0__::func_94(Global_35, 2720.815f, -1283.54f, 48.638f, 1) < __LIB_0__::func_94(Global_35, 2551.768f, -1173.668f, 52.683f, 1))
				{
					if (__LIB_0__::func_627(77, 0))
					{
						return false;
					}
				}
			}
			else if (__LIB_0__::func_12() == 92)
			{
				if (__LIB_0__::func_627(143, 0))
				{
					return false;
				}
			}
			return true;
		case 45:
			if (__LIB_1__::func_898() == 9)
			{
				if (__LIB_3__::func_993(45, 0) == 2)
				{
					return false;
				}
			}
			else if (__LIB_1__::func_898() == 11)
			{
				if (__LIB_0__::func_181())
				{
					if (__LIB_3__::func_564(45, 4) == 1)
					{
						return false;
					}
				}
				if (__LIB_3__::func_993(45, 2) == 2)
				{
					return false;
				}
			}
			return true;
		case 46:
			if (__LIB_3__::func_657(46) >= 4 || __LIB_3__::func_564(46, 0) == 1)
			{
				return false;
			}
			else if (__LIB_11__::func_167() == 1 || (__LIB_11__::func_167() == 3 && __LIB_1__::func_652()))
			{
				return true;
			}
			break;
		case 48:
			return true;
		case 49:
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				return false;
			}
			if (!__LIB_1__::func_307(2, 0, 0))
			{
				return false;
			}
			if (!__LIB_1__::func_307(3, 0, 0))
			{
				return false;
			}
			iVar9 = MISC::GET_GAME_TIMER();
			if ((iVar9 - Global_1357549.f_1484) >= 300000)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 50:
			if (__LIB_2__::func_443())
			{
				return false;
			}
			if (__LIB_1__::func_931(__LIB_1__::func_905(__LIB_1__::func_898())) > 0)
			{
				return false;
			}
			switch (Global_1393447.f_49)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 35:
				case 38:
				case 42:
					return false;
			}
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BEAT_TRAIN_HOLDUP")) > 0)
			{
				return false;
			}
			return true;
		case 106:
			if (__LIB_0__::func_12() == 76)
			{
				if (__LIB_0__::func_627(26, 0) || __LIB_0__::func_627(27, 0))
				{
					if (__LIB_0__::func_627(117, 0) || __LIB_0__::func_627(118, 0))
					{
						return false;
					}
				}
				if (__LIB_1__::func_931(1) > 0)
				{
					return false;
				}
				if (__LIB_14__::func_432(7))
				{
					return false;
				}
				if (__LIB_3__::func_993(106, 1) != 7)
				{
					return true;
				}
				if (__LIB_3__::func_993(87, 0) == 3 && __LIB_3__::func_993(106, 3) != 7)
				{
					return true;
				}
				if (__LIB_3__::func_993(84, 0) == 3 || __LIB_3__::func_993(84, 1) == 3)
				{
					if (__LIB_3__::func_993(106, 4) != 7)
					{
						if (!__LIB_0__::func_181())
						{
							return true;
						}
					}
				}
			}
			else if (__LIB_0__::func_12() == 105)
			{
				if (__LIB_1__::func_931(2) > 0)
				{
					return false;
				}
				if (__LIB_3__::func_993(87, 0) == 3 && __LIB_3__::func_993(106, 3) != 7)
				{
					return true;
				}
				else if (__LIB_3__::func_993(87, 0) != 3)
				{
				}
				else if (__LIB_3__::func_993(106, 3) == 7)
				{
				}
				if ((__LIB_14__::func_435(13) && __LIB_3__::func_993(106, 5) == 3) && __LIB_3__::func_993(106, 5) != 7)
				{
					if (__LIB_10__::func_705(106, 5))
					{
						return true;
					}
				}
			}
			else if (__LIB_0__::func_12() == 5)
			{
				if (__LIB_1__::func_931(2) > 0)
				{
					return false;
				}
				if (__LIB_14__::func_435(12))
				{
					if (__LIB_3__::func_993(106, 6) == 3)
					{
						if (__LIB_3__::func_993(106, 6) != 7)
						{
							if (__LIB_10__::func_705(106, 6))
							{
								return true;
							}
						}
					}
				}
				if (__LIB_3__::func_993(30, 3) == 3 && __LIB_3__::func_993(106, 7) != 7)
				{
					if (__LIB_10__::func_705(106, 7))
					{
						return true;
					}
				}
			}
			else if (__LIB_0__::func_12() == 38)
			{
				if (__LIB_1__::func_931(3) > 0)
				{
					return false;
				}
				if ((__LIB_14__::func_435(18) && __LIB_3__::func_993(106, 0) == 3) && __LIB_3__::func_993(106, 0) != 7)
				{
					return true;
				}
				if ((__LIB_14__::func_435(17) && __LIB_3__::func_993(106, 8) == 3) && __LIB_3__::func_993(106, 8) != 7)
				{
					return true;
				}
			}
			return false;
		case 107:
			if (((__LIB_0__::func_627(77, 0) || __LIB_0__::func_627(106, 0)) || __LIB_3__::func_751(45)) || __LIB_3__::func_751(47))
			{
				return false;
			}
			return true;
		case 51:
			if (__LIB_2__::func_633(2) || __LIB_10__::func_695(2))
			{
				return false;
			}
			return true;
		case 108:
			if (__LIB_0__::func_12() == 76)
			{
				if (__LIB_4__::func_74(108, 2097152) > 0 && (__LIB_2__::func_633(0) || __LIB_10__::func_695(0)))
				{
					return false;
				}
				if (__LIB_11__::func_183(76, 1, 0))
				{
					return false;
				}
				if (__LIB_8__::func_714(__LIB_1__::func_885(76), joaat("TSTAG_LOCKDOWN_SALOON"), 1))
				{
					return false;
				}
			}
			return true;
		case 57:
			if (__LIB_1__::func_988(44))
			{
				return false;
			}
			if (iVar0 == -1)
			{
				return false;
			}
			if (__LIB_11__::func_180(iVar0))
			{
				return false;
			}
			if (!func_96(24))
			{
				return false;
			}
			return true;
		case 109:
			switch (__LIB_1__::func_898())
			{
				case 1:
					if (__LIB_3__::func_564(109, 0) == 1)
					{
						return false;
					}
					break;
				case 10:
					if (__LIB_3__::func_564(109, 0) == 1 && __LIB_3__::func_564(109, 1) == 1)
					{
						return false;
					}
					break;
				case 11:
					if (__LIB_3__::func_564(109, 1) == 1)
					{
						return false;
					}
					break;
			}
			return true;
		case 58:
			if ((__LIB_0__::func_627(119, 0) || __LIB_1__::func_200(119)) && __LIB_3__::func_332(-1006.029f, 458.253f, 55.49393f, 1) < 200f)
			{
				return false;
			}
			else if (!__LIB_0__::func_181() && __LIB_3__::func_657(58) >= 1)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 110:
			if (__LIB_0__::func_627(77, 0))
			{
				return false;
			}
			if (__LIB_3__::func_751(47))
			{
				return false;
			}
			if (__LIB_0__::func_730(5))
			{
				return false;
			}
			if (__LIB_11__::func_183(5, 1, 0))
			{
				return false;
			}
			if (!__LIB_0__::func_181())
			{
				if (__LIB_2__::func_410(31))
				{
					return true;
				}
			}
			else if (__LIB_2__::func_410(73))
			{
				return true;
			}
			return false;
		case 60:
			if (iParam0 == 60)
			{
				switch (__LIB_3__::func_168(__LIB_1__::func_898()))
				{
					case 1:
						if (__LIB_3__::func_564(60, 0) < 2)
						{
							return true;
						}
						break;
					case 0:
						if (__LIB_3__::func_564(60, 1) < 3)
						{
							return true;
						}
						break;
					case 4:
						if (__LIB_3__::func_564(60, 2) < 2)
						{
							return true;
						}
						break;
				}
			}
			break;
		case 61:
			if (__LIB_3__::func_657(46) >= 2 || __LIB_3__::func_564(46, 0) == 1)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 59:
			if (!__LIB_0__::func_394(Global_35, Global_1900383[__LIB_0__::func_97(7) /*45*/], 0))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 62:
			switch (__LIB_3__::func_283())
			{
				case 1:
					if (__LIB_3__::func_564(62, 0) == 1)
					{
						return false;
					}
					break;
				case 0:
				case 2:
					if (__LIB_3__::func_564(62, 1) == 1)
					{
						return false;
					}
					break;
			}
			return true;
		case 111:
			switch (__LIB_1__::func_898())
			{
				case 9:
					if (__LIB_11__::func_183(76, 1, 0))
					{
						return false;
					}
					else if (__LIB_2__::func_774(14))
					{
						return false;
					}
					else if (__LIB_2__::func_410(71) && __LIB_0__::func_627(10, 0))
					{
						return false;
					}
					return true;
				case 4:
					if (!__LIB_14__::func_435(9))
					{
						return false;
					}
					if (__LIB_14__::func_432(72))
					{
						return false;
					}
					if (__LIB_14__::func_432(70))
					{
						return false;
					}
					if (__LIB_14__::func_432(75))
					{
						return false;
					}
					if (!__LIB_1__::func_307(4, 0, 0))
					{
						return false;
					}
					iVar10 = MISC::GET_GAME_TIMER();
					if ((iVar10 - Global_1357549.f_1484) >= 300000)
					{
						return true;
					}
					else
					{
						return false;
					}
					return true;
				default:
					return true;
			}
			break;
		case 112:
			if (__LIB_0__::func_805(14, 4096))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 67:
			if (__LIB_3__::func_657(67) >= 2)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 113:
			if (!__LIB_1__::func_901(__LIB_2__::func_954()))
			{
				switch (__LIB_0__::func_12())
				{
					case 105:
						if (__LIB_3__::func_564(113, 3) != 2 && !Global_1326862.f_611)
						{
							Global_1326862.f_611 = 1;
							return true;
						}
						else
						{
							Global_1326862.f_611 = 0;
							return false;
						}
						break;
					case 38:
						if (__LIB_14__::func_435(17) && __LIB_3__::func_564(113, 4) != 3)
						{
							if (!Global_1326862.f_612)
							{
								__LIB_3__::func_539(113, 4, __LIB_0__::func_23());
								Global_1326862.f_612 = 1;
							}
							if (Global_1326862.f_612)
							{
								if (__LIB_17__::func_633(113, 4, 7, 0))
								{
									__LIB_3__::func_461(113, 4, 3);
									return false;
								}
								else if (!__LIB_1__::func_982(113))
								{
									if (__LIB_3__::func_993(106, 8) == 3)
									{
										if (__LIB_3__::func_993(106, 8) == 7)
										{
											Global_1326862.f_612 = 0;
											return true;
										}
										else
										{
											return false;
										}
									}
									else
									{
										Global_1326862.f_612 = 0;
										return true;
									}
								}
							}
						}
						else if (__LIB_14__::func_435(18) && __LIB_3__::func_564(113, 4) != 4)
						{
							if (!Global_1326862.f_613)
							{
								__LIB_3__::func_539(113, 4, __LIB_0__::func_23());
								Global_1326862.f_613 = 1;
							}
							if (Global_1326862.f_613)
							{
								if (__LIB_17__::func_633(113, 4, 7, 0))
								{
									__LIB_3__::func_461(113, 4, 4);
									return false;
								}
								else if (!__LIB_1__::func_982(113))
								{
									if (__LIB_3__::func_993(106, 0) == 3)
									{
										if (__LIB_3__::func_993(106, 0) == 7)
										{
											Global_1326862.f_613 = 0;
											return true;
										}
										else
										{
											return false;
										}
									}
									else
									{
										Global_1326862.f_613 = 0;
										return true;
									}
								}
							}
						}
						else
						{
							return false;
						}
						break;
				}
			}
			else
			{
				return false;
			}
			break;
		case 114:
			if (func_107())
			{
				return true;
			}
			return false;
		case 116:
			if (__LIB_3__::func_425(&uVar1))
			{
				return false;
			}
			if (__LIB_0__::func_12() == 76)
			{
				if (__LIB_11__::func_150(76) >= 10)
				{
					if (!Global_1326862.f_614)
					{
						__LIB_2__::func_115(116, 1, 0, 0, 0, 1, 0, 1);
						__LIB_3__::func_539(116, 1, __LIB_0__::func_23());
						Global_1326862.f_614 = 1;
					}
					else if (__LIB_17__::func_633(116, 1, 8, 0))
					{
						return false;
					}
					else if (!__LIB_1__::func_982(116))
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			if (__LIB_0__::func_12() == 105)
			{
				if (__LIB_11__::func_150(105) >= 10)
				{
					if (!Global_1326862.f_615)
					{
						__LIB_2__::func_115(116, 1, 0, 0, 0, 1, 0, 1);
						__LIB_3__::func_539(116, 2, __LIB_0__::func_23());
						Global_1326862.f_615 = 1;
					}
					else if (__LIB_17__::func_633(116, 2, 8, 0))
					{
						return false;
					}
					else if (!__LIB_1__::func_982(116))
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			if (__LIB_0__::func_12() == 78)
			{
				if (__LIB_11__::func_150(78) >= 10)
				{
					if (!Global_1326862.f_616)
					{
						__LIB_2__::func_115(116, 1, 0, 0, 0, 1, 0, 1);
						__LIB_3__::func_539(116, 3, __LIB_0__::func_23());
						Global_1326862.f_616 = 1;
					}
					else if (__LIB_17__::func_633(116, 3, 8, 0))
					{
						return false;
					}
					else if (!__LIB_1__::func_982(116))
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			break;
		case 117:
			if (__LIB_11__::func_149(75) <= 0)
			{
				return false;
			}
			return true;
		case 115:
			if (__LIB_3__::func_993(115, 0) == 3)
			{
				return false;
			}
			if (__LIB_0__::func_181())
			{
				if (__LIB_3__::func_564(115, 4) == 1)
				{
					return false;
				}
			}
			if (__LIB_4__::func_74(115, 2097152) >= 2)
			{
				return false;
			}
			if (__LIB_3__::func_993(115, 0) == 2)
			{
				return false;
			}
			return true;
		case 63:
			switch (__LIB_1__::func_898())
			{
				case 1:
					if (__LIB_0__::func_181())
					{
						if (__LIB_2__::func_633(4))
						{
							return false;
						}
					}
					else
					{
						return false;
					}
					break;
			}
			return true;
		case 64:
			if (Global_1430231.f_4)
			{
				return false;
			}
			if (__LIB_2__::func_410(56) && !__LIB_0__::func_181())
			{
				return false;
			}
			if ((__LIB_1__::func_898() == 11 || __LIB_1__::func_898() == 0) || __LIB_1__::func_898() == 2)
			{
				if (__LIB_2__::func_633(2) || __LIB_10__::func_695(2))
				{
					return false;
				}
			}
			else if (__LIB_1__::func_898() == 9)
			{
				if (__LIB_2__::func_633(0) || __LIB_10__::func_695(0))
				{
					return false;
				}
			}
			iVar11 = __LIB_7__::func_914(Global_36, 0);
			if (__LIB_0__::func_34(iVar11))
			{
				if (__LIB_7__::func_831(iVar11, Global_36) <= 400f)
				{
					return false;
				}
			}
			return true;
		case 65:
			if (__LIB_1__::func_898() == 11)
			{
				if (__LIB_2__::func_410(26))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			break;
		case 66:
			if (!__LIB_14__::func_435(146))
			{
				return false;
			}
			if (__LIB_3__::func_463(joaat("DOCUMENT_TREASURE_MAP_04"), 1, 0))
			{
				return false;
			}
			return true;
		case 105:
			if (__LIB_0__::func_12() == 38)
			{
				if (__LIB_1__::func_931(3) > 0)
				{
					return false;
				}
			}
			else if (__LIB_0__::func_12() == 5)
			{
				if (__LIB_1__::func_931(2) > 0)
				{
					return false;
				}
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				return false;
			}
			break;
		case 71:
			if (__LIB_1__::func_898() != 8)
			{
				if (__LIB_11__::func_185(71, 2) || __LIB_11__::func_185(71, 1))
				{
					return false;
				}
			}
			return true;
		case 118:
			if (__LIB_0__::func_12() == 38)
			{
				if (!__LIB_14__::func_435(8))
				{
					return false;
				}
			}
			return true;
		case 73:
			if (__LIB_3__::func_993(73, 0) == 2)
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

bool func_44(int iParam0, int iParam1, bool bParam2)
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
			if (__LIB_2__::func_410(14) && !__LIB_2__::func_410(17))
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
			if (!__LIB_2__::func_410(11))
			{
				return false;
			}
		}
		else if (iParam0 == 105)
		{
			if (!__LIB_2__::func_410(27))
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
		if (__LIB_0__::func_181() && !__LIB_2__::func_410(69))
		{
			return false;
		}
		if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
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
		if (func_140(iParam0) == -1)
		{
			return false;
		}
		if (!__LIB_17__::func_634(iParam0))
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

bool func_55()
{
	int iVar0;
	int iVar1;
	var uVar2;
	switch (__LIB_0__::func_12())
	{
		case 76:
			iVar0 = 75;
			iVar1 = 6;
			break;
		case 26:
			iVar0 = 61;
			iVar1 = 3;
			break;
		case 78:
			iVar0 = 0;
			iVar1 = 6;
			break;
		case 105:
			iVar0 = 28;
			iVar1 = 3;
			break;
	}
	if (!__LIB_14__::func_433(iVar1, -1))
	{
		return false;
	}
	if (__LIB_10__::func_696(iVar0))
	{
		return false;
	}
	if (!__LIB_3__::func_339(iVar0))
	{
		return false;
	}
	if (__LIB_3__::func_563(iVar1, iVar0))
	{
		return false;
	}
	if (__LIB_11__::func_159(iVar1))
	{
		return false;
	}
	if (__LIB_10__::func_696(iVar0))
	{
		return false;
	}
	if (func_77(iVar1, iVar0, &uVar2))
	{
		return false;
	}
	return true;
}

int func_65()
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (!__LIB_3__::func_772(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 3, false);
	}
	if (!__LIB_3__::func_772(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	}
	if (!__LIB_3__::func_772(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 1, false);
	}
	if (!__LIB_3__::func_772(&iVar0))
	{
		iVar0 = 0;
	}
	if (!__LIB_3__::func_772(&iVar0))
	{
		iVar0 = func_158(268435584, 0);
	}
	if (!__LIB_3__::func_772(&iVar0))
	{
		return 0;
	}
	return 1;
}

int func_69()
{
	int iVar0;
	float fVar1;
	if ((__LIB_2__::func_776() || PED::_IS_PED_CARRYING(Global_35)) || __LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 1;
	}
	iVar0 = 5400;
	if (__LIB_3__::func_751(26))
	{
		iVar0 = 600;
	}
	else if (__LIB_0__::func_627(68, 1))
	{
		iVar0 = 2400;
	}
	else if (__LIB_3__::func_751(57))
	{
		iVar0 = 1800;
	}
	if (Global_1359489.f_61 >= 3)
	{
		return 2;
	}
	else if (__LIB_0__::func_265(&(Global_1359489.f_55)) < IntToFloat(iVar0))
	{
		return 3;
	}
	else if (MISC::GET_GAME_TIMER() < Global_1359489.f_60)
	{
		return 4;
	}
	else if (!__LIB_11__::func_155())
	{
		return 5;
	}
	else if (!__LIB_2__::func_410(5))
	{
		return 6;
	}
	else
	{
		fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), __LIB_2__::func_485(__LIB_0__::func_317()));
		if (fVar1 <= 750f)
		{
			return 7;
		}
		return 0;
	}
	return -1;
}

bool func_77(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			*uParam2 = 1;
			return true;
		}
	}
	if (__LIB_1__::func_935(iParam1, 1048576))
	{
		*uParam2 = 4;
		return true;
	}
	if (__LIB_0__::func_1(Global_1935630, 2097152))
	{
		*uParam2 = 4;
		return true;
	}
	if (__LIB_3__::func_563(iParam0, iParam1))
	{
		*uParam2 = 3;
		return true;
	}
	if (__LIB_9__::func_843(iParam1) == 105 && __LIB_14__::func_432(21))
	{
		*uParam2 = 4;
		return true;
	}
	if (__LIB_2__::func_803(iParam0, &iVar0))
	{
		if (!__LIB_11__::func_164(iParam1))
		{
			if (Global_1393529.f_3 == iVar0 && func_173(Global_1393529.f_3, 0, &(Global_1393529.f_256), &(Global_1393529.f_284), 0, 0))
			{
				*uParam2 = 5;
				return true;
			}
			if (!__LIB_14__::func_134(iParam0))
			{
				*uParam2 = 6;
				return true;
			}
			if (PED::IS_PED_FLEEING(iVar0))
			{
				*uParam2 = 6;
				return true;
			}
			if (TASK::GET_IS_TASK_ACTIVE(iVar0, 0))
			{
				*uParam2 = 7;
				return true;
			}
		}
	}
	else if (__LIB_1__::func_918(iParam0))
	{
		if (__LIB_0__::func_29(Global_1914319.f_3[iParam0 /*446*/].f_21))
		{
			iVar1 = __LIB_0__::func_120(Global_1914319.f_3[iParam0 /*446*/].f_21);
			if (iVar1 != 0 && !PERSCHAR::_0x4AFC7288C77238B3(iVar1))
			{
				*uParam2 = 6;
				return true;
			}
		}
	}
	return false;
}

bool func_96(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	if (__LIB_2__::func_410(59))
	{
		if (!__LIB_2__::func_410(67))
		{
			return false;
		}
	}
	iVar0 = 0;
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	iVar1 = 0;
	while (iVar1 < 29)
	{
		iVar2 = 0;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar2, false, iVar1, false))
		{
			if (__LIB_0__::func_154(iVar2))
			{
				if (__LIB_3__::func_347(iVar2, 1, 0) >= iParam0)
				{
					if (!bVar3)
					{
						if (WEAPON::_IS_WEAPON_PISTOL(iVar2))
						{
							bVar3 = true;
							iVar0++;
						}
					}
					if (!bVar4)
					{
						if (WEAPON::_IS_WEAPON_REVOLVER(iVar2))
						{
							bVar4 = true;
							iVar0++;
						}
					}
					if (!bVar5)
					{
						if (WEAPON::_IS_WEAPON_REPEATER(iVar2))
						{
							bVar5 = true;
							iVar0++;
						}
					}
					if (!bVar6)
					{
						if (WEAPON::_IS_WEAPON_RIFLE(iVar2) && !WEAPON::_IS_WEAPON_SNIPER(iVar2))
						{
							bVar6 = true;
							iVar0++;
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar0 > 0)
	{
		return true;
	}
	return false;
}

bool func_107()
{
	var uVar0;
	if (__LIB_3__::func_425(&uVar0))
	{
		return false;
	}
	if (!__LIB_0__::func_181())
	{
		if (__LIB_3__::func_564(114, 1) != 1)
		{
			if (__LIB_0__::func_12() == 76)
			{
				if (__LIB_2__::func_410(5))
				{
					if (__LIB_3__::func_564(114, 2) != 1)
					{
						__LIB_3__::func_461(114, 2, 1);
						__LIB_3__::func_539(114, 0, __LIB_0__::func_23());
						return false;
					}
					else if (__LIB_17__::func_633(114, 0, 1, 0) && !__LIB_17__::func_633(114, 0, 8, 0))
					{
						return true;
					}
				}
			}
		}
		if (__LIB_3__::func_564(114, 2) != 1)
		{
			if (__LIB_0__::func_12() == 105)
			{
				if (__LIB_2__::func_410(21))
				{
					if (__LIB_3__::func_564(114, 2) != 2)
					{
						__LIB_3__::func_461(114, 2, 2);
						__LIB_3__::func_539(114, 1, __LIB_0__::func_23());
						return false;
					}
					if (__LIB_17__::func_633(114, 1, 1, 0) && !__LIB_17__::func_633(114, 1, 8, 0))
					{
						return true;
					}
				}
			}
		}
		if (__LIB_3__::func_564(114, 3) != 1)
		{
			if (__LIB_0__::func_12() == 5)
			{
				if (__LIB_2__::func_410(34))
				{
					if (__LIB_3__::func_564(114, 2) != 3)
					{
						__LIB_3__::func_461(114, 2, 3);
						__LIB_3__::func_539(114, 2, __LIB_0__::func_23());
						return false;
					}
					if (__LIB_17__::func_633(114, 2, 1, 0) && !__LIB_17__::func_633(114, 2, 8, 0))
					{
						return true;
					}
				}
			}
		}
		if (__LIB_3__::func_564(114, 4) != 1)
		{
			if (__LIB_0__::func_12() == 92)
			{
				if (__LIB_2__::func_410(55))
				{
					if (__LIB_3__::func_564(114, 2) != 4)
					{
						__LIB_3__::func_461(114, 2, 4);
						__LIB_3__::func_539(114, 3, __LIB_0__::func_23());
						return false;
					}
					if (__LIB_17__::func_633(114, 3, 1, 0) && !__LIB_17__::func_633(114, 3, 8, 0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = __LIB_10__::func_47(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = __LIB_10__::func_48(iParam0, iVar0);
		if (!__LIB_14__::func_435(iVar2))
		{
			if (func_213(iVar2))
			{
				return iVar2;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_158(int iParam0, int iParam1)
{
	var uVar0;
	return func_240(&uVar0, iParam0, iParam1);
}

bool func_173(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
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
				if (__LIB_3__::func_668(iParam0, uParam2))
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

bool func_213(int iParam0)
{
	if (__LIB_0__::func_181())
	{
		if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 2097152))
		{
			return false;
		}
	}
	else if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 256))
	{
		return false;
	}
	switch (iParam0)
	{
		case 15:
			if (!__LIB_2__::func_410(20))
			{
				return false;
			}
			else if (!__LIB_10__::func_723())
			{
				return false;
			}
			break;
		case 16:
			if (__LIB_0__::func_895(Global_1347702[16 /*49*/].f_15) == 1)
			{
				return false;
			}
			break;
		case 153:
			if (!__LIB_0__::func_313())
			{
				return false;
			}
			break;
		case 155:
			if (!__LIB_0__::func_313())
			{
				return false;
			}
			break;
		case 154:
			if (!__LIB_0__::func_313())
			{
				return false;
			}
			break;
		case -1:
			return false;
	}
	return true;
}

int func_240(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	var uVar19;
	struct<22> Var23;
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = __LIB_0__::func_27(iParam1, 128);
	Var23.f_9 = -1591664384;
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
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!__LIB_0__::func_27(iParam1, 512) && __LIB_1__::func_280(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_IS_WEAPON_ONE_HANDED(Var4.f_4) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || __LIB_0__::func_27(iParam1, 32))) && (!WEAPON::_IS_WEAPON_PISTOL(Var4.f_4) || !__LIB_0__::func_27(iParam1, 16777216))) && (!WEAPON::_IS_WEAPON_REVOLVER(Var4.f_4) || !__LIB_0__::func_27(iParam1, 33554432)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	if (__LIB_0__::func_154(iVar0))
	{
	}
	else if (!__LIB_0__::func_27(iParam1, 512))
	{
		iParam1 |= 512;
		return func_240(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

