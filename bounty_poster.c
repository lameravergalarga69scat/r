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
	bool bLocal_15 = false;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	struct<113> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	struct<5> Local_136 = { -1, 0, 0, 0, 0 } ;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	var uLocal_160 = -1;
	var uLocal_161 = 0;
	var uLocal_162 = -1;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = -1;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 1073741824;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 1;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	struct<17> Local_180[2];
	bool bLocal_215 = false;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	bool bLocal_222 = false;
	int iLocal_223 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_148 = 1;
	iLocal_149 = 1;
	uLocal_19 = ScriptParam_0;
	Global_1392235.f_3 = 0;
	if (__LIB_0__::func_2() == -1)
	{
	}
	else
	{
		func_2(&Local_20, -1);
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BOUNTY_POSTER")) > 1)
	{
		func_2(&Local_20, -1);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		Local_136.f_4 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, true) };
	}
	else
	{
		func_2(&Local_20, -1);
	}
	Local_136.f_1 = func_3(Local_136.f_4);
	Local_136.f_2 = __LIB_10__::func_638(Local_136.f_1);
	Local_136.f_3 = __LIB_1__::func_293(0, Local_136.f_2, 2, 0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&Local_20, -1);
	}
	func_6(&Local_136, &Local_20);
}

void func_2(var uParam0, int iParam1)
{
	func_7(uParam0, iParam1, 1);
	__LIB_0__::func_172(Local_20.f_112);
	SCRIPTS::_0xE7282390542F570D(uLocal_19);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_3(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_1__::func_447(vParam0, 0);
	switch (iVar1)
	{
		case 76:
			iVar0 = 1;
			break;
		case 26:
			iVar0 = 2;
			break;
		case 105:
			iVar0 = 3;
			break;
		case 5:
			iVar0 = 4;
			break;
		case 38:
			iVar0 = 5;
			break;
		case 115:
			iVar0 = 6;
			break;
	}
	return iVar0;
}

void func_6(var uParam0, var uParam1)
{
	while (func_14(uParam1, uParam0))
	{
		if (func_15(uParam0))
		{
			func_2(uParam1, uParam0->f_2);
		}
		if (!Global_1879534)
		{
			func_16(uParam1, uParam0);
			if (func_17())
			{
				if (__LIB_5__::func_236(1))
				{
					__LIB_0__::func_82(1, 0, 0);
				}
				__LIB_2__::func_451(&iLocal_159, 0);
				__LIB_2__::func_603(&(uParam1->f_6), &iLocal_159, &Local_180, 1, 1);
				if (iLocal_14 < 4)
				{
					func_22(uParam0);
				}
				func_23(5);
			}
			switch (iLocal_14)
			{
				case 0:
					if (!VOLUME::_DOES_VOLUME_EXIST(uParam1->f_112))
					{
						func_24(uParam0->f_1, &(uParam1->f_112));
					}
					if (func_25(uParam0, 1, uParam1->f_6))
					{
						if (iLocal_223 >= 3)
						{
							if (func_26(uParam0, uParam1))
							{
								if (!CAM::IS_SCREEN_FADED_OUT())
								{
									func_27(uParam0);
									func_24(uParam0->f_1, &(uParam1->f_112));
									if (!VOLUME::_DOES_VOLUME_EXIST(uParam1->f_115))
									{
										uParam1->f_115 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(__LIB_10__::func_639(uParam0->f_1), 0f, 0f, 0f, 4f, 4f, 4f, "BHPOSTER_CLEAR_AREA");
									}
									if (!PED::_0x91A5F9CBEBB9D936(uParam1->f_114))
									{
										uParam1->f_114 = PED::_0x4C39C95AE5DB1329(uParam1->f_115, 0, 15);
									}
									if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam1->f_4) && !__LIB_10__::func_665())
									{
										TASK::_SET_SCENARIO_POINT_ACTIVE(uParam1->f_4, true);
									}
									func_30(uParam0);
									func_31(0);
									func_23(1);
								}
							}
							else
							{
								Global_1392235.f_3 = 1;
							}
						}
					}
					break;
				case 1:
					func_30(uParam0);
					if (bLocal_222 || func_25(uParam0, 0, uParam1->f_6))
					{
						if (func_32(uParam0))
						{
							func_33(uParam0, uParam1);
							func_34(uParam1, uParam0);
							func_35(uParam1, uParam0);
							if (func_36(uParam1))
							{
								func_37(uParam0);
								func_38(uParam0);
								Global_1392235.f_3 = 1;
								func_23(2);
							}
						}
					}
					else
					{
						func_23(0);
						func_7(uParam1, uParam0->f_2, 0);
					}
					break;
				case 2:
					if (!TASK::_0xEC7E480FF8BD0BED(Global_35) || func_39())
					{
						__LIB_4__::func_471(*uParam0, 1);
						__LIB_7__::func_602(*uParam0);
						__LIB_10__::func_822(*uParam0);
						func_43(uParam0);
						func_44(*uParam0);
						__LIB_13__::func_66(*uParam0);
						__LIB_0__::func_703(0, -1);
						func_23(3);
					}
					break;
				case 3:
					if (iLocal_144 >= 3)
					{
						func_22(uParam0);
						if (__LIB_0__::func_272(uParam1->f_6, 0))
						{
							func_23(4);
						}
						else
						{
							func_2(uParam1, uParam0->f_2);
						}
					}
					break;
				case 4:
					if (!__LIB_1__::func_205(Global_35, uParam1->f_112, 1, 0))
					{
						if (!__LIB_10__::func_53(uParam0->f_2, 0, 0) && __LIB_0__::func_665(Global_35, uParam1->f_6, 1, 1) > 15f)
						{
							func_23(5);
						}
					}
					break;
				case 5:
					if ((!TASK::_DOES_SCENARIO_POINT_EXIST(uParam1->f_9) || !PED::_IS_PED_USING_SCENARIO_POINT(uParam1->f_6, uParam1->f_9)) || __LIB_0__::func_665(Global_35, uParam1->f_6, 1, 1) > 50f)
					{
						func_2(uParam1, uParam0->f_2);
					}
					break;
			}
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_112) && (__LIB_1__::func_205(Global_35, uParam1->f_112, 1, 0) || __LIB_10__::func_53(uParam0->f_2, 0, 1)))
		{
			BUILTIN::WAIT(0);
		}
		else if (iLocal_14 >= 2)
		{
			BUILTIN::WAIT(0);
		}
		else if (BUILTIN::VDIST2(Global_36, __LIB_10__::func_639(uParam0->f_1)) < 1225f)
		{
			BUILTIN::WAIT(100);
		}
		else
		{
			BUILTIN::WAIT(500);
		}
	}
}

void func_7(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (iLocal_144 < 4)
	{
		func_31(4);
	}
	func_51(0);
	__LIB_5__::func_237(0);
	iLocal_147 = 0;
	if (__LIB_5__::func_236(1))
	{
		__LIB_0__::func_82(1, 0, 0);
	}
	__LIB_2__::func_451(&iLocal_159, 0);
	__LIB_2__::func_603(&(uParam0->f_6), &iLocal_159, &Local_180, 1, 1);
	if (bParam2)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_4))
		{
			TASK::_DELETE_SCENARIO_POINT(uParam0->f_4);
		}
	}
	else if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_4))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(uParam0->f_4, false);
	}
	Global_1392235.f_3 = 1;
	if (bParam2)
	{
		func_53(uParam0, bParam2);
		STREAMING::_0x4EDDD9E9CA5AF985(joaat("SC_BOUNTY_HUNTER_SHERIFF"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_JOURNAL_OPEN01X"));
		func_54(iParam1);
	}
	if (uParam0->f_10 != 0)
	{
		ENTITY::_0xD2B9C78537ED5759(uParam0->f_10);
		uParam0->f_10 = 0;
	}
	if (uParam0->f_2)
	{
		INTERIOR::UNPIN_INTERIOR(uParam0->f_1);
		uParam0->f_2 = 0;
	}
	iVar0 = PED::_0x62DE46F061CAA468();
	if (iVar0 > 0)
	{
		PED::_0x7D4E70A67A651C71(iVar0);
	}
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_114))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_114, false);
	}
	__LIB_0__::func_172(uParam0->f_115);
}

bool func_14(var uParam0, var uParam1)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_2(uParam0, uParam1->f_2);
		return false;
	}
	return true;
}

bool func_15(var uParam0)
{
	if (Global_1879534)
	{
		return false;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return true;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_4, true) > 250f)
	{
		return true;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SADIE4")) >= 1)
	{
		return true;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SADIE4_OUTRO")) >= 1)
	{
		return true;
	}
	return false;
}

void func_16(var uParam0, var uParam1)
{
	if (__LIB_0__::func_272(uParam0->f_6, 0) && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_112, Global_36))
	{
		if (__LIB_5__::func_236(1))
		{
			__LIB_1__::func_148(&uLocal_219);
		}
		else if (__LIB_0__::func_75(&uLocal_219) && __LIB_0__::func_265(&uLocal_219) > 10f)
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_6, 116, true);
		}
	}
	if (iLocal_14 >= 1 && iLocal_144 < 4)
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_112, Global_36))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 328, true);
		}
		if (__LIB_0__::func_272(uParam0->f_6, 0))
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_6, 49, true);
		}
		func_68(uParam0, uParam1);
		func_69(uParam0, uParam1);
		if (iLocal_14 >= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
			{
				if ((((PED::IS_PED_DEAD_OR_DYING(uParam0->f_6, true) || __LIB_2__::func_65(uParam0->f_6, Global_35)) || PED::_IS_PED_LASSOED(uParam0->f_6)) || __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 0, 1)) || PED::_0x331550B212014B92(uParam0->f_6, Global_35))
				{
					func_31(4);
				}
				if ((uParam1->f_2 == 105 && iLocal_144 == 3) && iLocal_147 != 9)
				{
					if (__LIB_0__::func_94(Global_35, 1225.51f, -1294.05f, 75.91f, 0) < 2f || __LIB_0__::func_94(Global_35, 1231.15f, -1299.86f, 75.9f, 0) < 2f)
					{
						func_73(uParam0);
						__LIB_2__::func_788(&(uParam0->f_6), 1, 0, 1);
						func_31(5);
					}
				}
			}
		}
	}
	switch (iLocal_144)
	{
		case 0:
			if (iLocal_14 >= 1)
			{
				if (__LIB_0__::func_20(Local_136.f_2) && __LIB_1__::func_220(Local_136.f_2))
				{
					if (func_76(uParam0, uParam1))
					{
						__LIB_1__::func_148(&(uParam0->f_109));
						func_31(1);
					}
				}
			}
			break;
		case 1:
			if (iLocal_14 >= 2)
			{
				func_31(2);
			}
			else if (func_77(Local_136.f_2))
			{
				func_78(uParam0, uParam1);
			}
			break;
		case 2:
			func_79(uParam0, uParam1);
			if (iLocal_146 == 5)
			{
				__LIB_1__::func_148(&(uParam0->f_109));
				func_31(3);
			}
			break;
		case 3:
			break;
		case 4:
			if ((PED::IS_PED_DEAD_OR_DYING(uParam0->f_6, true) || !PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_6, uParam0->f_9)) || TASK::_0x0C3CB2E600C8977D(uParam0->f_6, 0))
			{
				func_73(uParam0);
				__LIB_2__::func_788(&(uParam0->f_6), 1, 0, 1);
				func_31(5);
			}
			break;
		case 5:
			if (__LIB_0__::func_272(uParam0->f_6, 0))
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_9) && !PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_6, uParam0->f_9))
				{
					TASK::_DELETE_SCENARIO_POINT(uParam0->f_9);
				}
			}
			break;
	}
}

bool func_17()
{
	if (iLocal_14 >= 3 && iLocal_14 < 5)
	{
		if (iLocal_144 >= 4)
		{
			return true;
		}
	}
	return false;
}

void func_22(var uParam0)
{
	char cVar0[16];
	cVar0 = func_84(*uParam0);
	StringCopy(&cVar1, "PSTR_O_", 16);
	StringConCat(&cVar1, &cVar0, 16);
	func_85(&cVar1, 7500, 0, 0, 0, 1);
	if (*uParam0 == 155)
	{
		if (!__LIB_2__::func_117(128))
		{
			__LIB_0__::func_45("PSTR_NGHT", 10000, 0, 0, 0, 1);
		}
	}
}

void func_23(int iParam0)
{
	if (iLocal_14 != iParam0)
	{
		iLocal_14 = iParam0;
	}
}

void func_24(int iParam0, var uParam1)
{
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			__LIB_13__::func_65(76, uParam1);
			break;
		case 5:
			__LIB_13__::func_65(38, uParam1);
			break;
		case 3:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1230.39f, -1295.224f, 77.42734f, 0f, 0f, -44.02999f, 20.63289f, 8.455379f, 3.559948f, "Rhodes Station");
			break;
		case 4:
			__LIB_13__::func_65(5, uParam1);
			break;
		case 2:
			__LIB_13__::func_65(26, uParam1);
			break;
		case 6:
			__LIB_13__::func_65(115, uParam1);
			break;
		default:
			break;
	}
}

bool func_25(var uParam0, bool bParam1, int iParam2)
{
	if (__LIB_0__::func_1(Global_1935630, 2097152))
	{
		return false;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		return false;
	}
	if (__LIB_0__::func_272(iParam2, 0) && PED::_0x331550B212014B92(iParam2, Global_35))
	{
		return false;
	}
	if (iLocal_223 >= 3)
	{
		iLocal_223 = 0;
	}
	if (__LIB_19__::func_453(uParam0->f_2, iLocal_223, 1))
	{
		iLocal_223++;
	}
	else
	{
		iLocal_223 = 0;
	}
	if (bParam1)
	{
		if (iLocal_223 >= 3)
		{
			return true;
		}
	}
	else if (iLocal_223 > 0)
	{
		return true;
	}
	return false;
}

bool func_26(var uParam0, var uParam1)
{
	if (__LIB_10__::func_665() && Global_1392235.f_1 == 1)
	{
		return true;
	}
	if (__LIB_1__::func_205(Global_35, uParam1->f_112, 1, 0))
	{
		return false;
	}
	if (__LIB_0__::func_94(Global_35, uParam0->f_4, 1) < 25f)
	{
		return false;
	}
	return true;
}

void func_27(var uParam0)
{
	*uParam0 = __LIB_17__::func_636(uParam0->f_2);
	func_92(*uParam0);
	if (!__LIB_10__::func_665())
	{
		Global_1392235.f_3 = 0;
	}
	PED::_0xED9582B3DA8F02B4(1);
}

void func_30(var uParam0)
{
	STREAMING::REQUEST_MODEL(joaat("P_JOURNAL_OPEN01X"), false);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("SC_BOUNTY_HUNTER_SHERIFF"), 15, 0, 0);
	func_93(uParam0->f_2);
}

void func_31(int iParam0)
{
	iLocal_144 = iParam0;
}

bool func_32(var uParam0)
{
	if (func_94(uParam0->f_2) && STREAMING::HAS_MODEL_LOADED(joaat("P_JOURNAL_OPEN01X")))
	{
		return true;
	}
	return false;
}

void func_33(var uParam0, var uParam1)
{
	if (uParam0->f_2 != 105)
	{
		if (__LIB_1__::func_205(Global_35, uParam1->f_112, 1, 0) || __LIB_10__::func_53(uParam0->f_2, 0, 1))
		{
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 31, 1);
		}
	}
}

void func_34(var uParam0, var uParam1)
{
	if (!uParam0->f_2)
	{
		if (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1))
		{
			uParam0->f_1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_95(uParam1), func_96(uParam1->f_2));
		}
		else
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_1);
			uParam0->f_2 = 1;
		}
	}
}

void func_35(var uParam0, var uParam1)
{
	if (uParam0->f_2)
	{
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_4))
		{
			uParam0->f_4 = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_INSPECT_POSTER_144CM_W32_2_H48_2_FOLD_VH_P_CS_WANTEDALIVE01X"), __LIB_10__::func_639(uParam1->f_1), func_97(uParam1->f_1), 1f, 0, 1);
			if (__LIB_10__::func_665())
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(uParam0->f_4, false);
			}
		}
		else
		{
			func_98(uParam0, *uParam1);
		}
	}
	else if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_4))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_3));
		}
		TASK::_DELETE_SCENARIO_POINT(uParam0->f_4);
		if (PED::_0x91A5F9CBEBB9D936(uParam0->f_114))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_114, false);
		}
		__LIB_0__::func_172(uParam0->f_115);
	}
}

bool func_36(var uParam0)
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_4))
	{
		return false;
	}
	if (!bLocal_222)
	{
		if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, uParam0->f_4))
		{
			bLocal_222 = true;
		}
	}
	else if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return true;
	}
	else if (!PED::_IS_PED_USING_SCENARIO_POINT(Global_35, uParam0->f_4))
	{
		bLocal_222 = false;
	}
	return false;
}

void func_37(var uParam0)
{
	switch (*uParam0)
	{
		case 11:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOSHUA_BROWN"));
			break;
		case 12:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LINDSEY_WOFFORD"));
			break;
		case 13:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MARK_JOHNSON"));
			break;
		case 153:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BART_CAVANAUGH"));
			break;
		case 14:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ELLIE_SWAN"));
			break;
		case 154:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CAMILLE_MILLEMONT"));
			break;
		case 15:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ROBBIE_LAIDLAW"));
			break;
		case 16:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANTONY_FOREMAN"));
			break;
		case 17:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_OTIS_SKINNER"));
			break;
		case 18:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ELIAS_GREEN"));
			break;
		case 155:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_HERMAN_ZIZENDORF"));
			break;
		case 19:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOAQUIN_ARROYO"));
			break;
		case 20:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ESTABAN_CORTEZ"));
			break;
	}
}

void func_38(var uParam0)
{
	switch (*uParam0)
	{
		case 11:
		case 153:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_VERNON_FARLEY"));
			break;
		case 12:
		case 16:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BENJAMIN_LAMBERT"));
			break;
		case 14:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CURTIS_MALLOY"));
			break;
		case 13:
		case 15:
		case 154:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_HARMON_THOMAS"));
			break;
		case 17:
		case 18:
		case 155:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_OSWALD_DUNBAR"));
			break;
		case 19:
		case 20:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_SHERIFF_FREEMAN"));
			break;
	}
}

bool func_39()
{
	if ((((((((((__LIB_3__::func_347(joaat("DOCUMENT_POSTER_SB_DUEL"), 0, 0) > 0 || __LIB_3__::func_347(-120239629 /* GXTEntry: "Bounty Poster - Mark Johnson" */, 0, 0) > 0) || __LIB_3__::func_347(-1129500286 /* GXTEntry: "Bounty Poster - Lindsey Wofford" */, 0, 0) > 0) || __LIB_3__::func_347(-1490222567 /* GXTEntry: "Bounty Poster - Ellie Anne Swan" */, 0, 0) > 0) || __LIB_3__::func_347(joaat("DOCUMENT_POSTER_SKINNER_BROS"), 0, 0) > 0) || __LIB_3__::func_347(joaat("DOCUMENT_POSTER_SKINNER_SEARCH"), 0, 0) > 0) || __LIB_3__::func_347(joaat("DOCUMENT_POSTER_SHACK_ESCAPE"), 0, 0) > 0) || __LIB_3__::func_347(joaat("DOCUMENT_POSTER_SD_SALOON"), 0, 0) > 0) || __LIB_3__::func_347(joaat("DOCUMENT_POSTER_BANDITO_SHACK"), 0, 0) > 0) || __LIB_3__::func_347(joaat("DOCUMENT_POSTER_BANDITO_MINE"), 0, 0) > 0) || __LIB_3__::func_347(joaat("DOCUMENT_TEST_BOUNTY_POSTER"), 0, 0) > 0)
	{
		return true;
	}
	return false;
}

void func_43(var uParam0)
{
	switch (*uParam0)
	{
		case 17:
		case 18:
			__LIB_2__::func_304(0, 3, 0, 0, 1);
			break;
	}
}

void func_44(int iParam0)
{
	func_110();
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0 /*49*/];
}

void func_51(int iParam0)
{
	iLocal_145 = iParam0;
}

void func_53(var uParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		func_73(uParam0);
		__LIB_2__::func_788(&(uParam0->f_6), 1, 0, 1);
	}
	if (bParam1 && TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_9))
	{
		TASK::_DELETE_SCENARIO_POINT(uParam0->f_9);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_7));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_8));
	}
}

void func_54(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 76:
			sVar0 = "BHPVAAU";
			break;
		case 5:
			sVar0 = "BHPNBAU";
			break;
		case 105:
			sVar0 = "BHPROAU";
			break;
		case 38:
			sVar0 = "BHPBWAU";
			break;
		case 26:
			sVar0 = "BHPSTAU";
			break;
		case 115:
			sVar0 = "BHPTWAU";
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		HUD::_TEXT_DATABASE_DELETE(sVar0);
	}
}

void func_68(var uParam0, var uParam1)
{
	if (bLocal_215)
	{
		if (func_124(uParam1))
		{
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uParam0->f_6, 0, 1);
		}
		if (__LIB_5__::func_236(1))
		{
			__LIB_1__::func_148(&uLocal_216);
		}
		if (__LIB_0__::func_265(&uLocal_216) > 3f)
		{
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_6, 0) && TASK::_0x916B8E075ABC8B4E(uParam0->f_6, 1))
			{
				if (!PED::_0x2DC0E8DCBD3546E9(uParam0->f_6))
				{
					TASK::_0x541E5B41DCA45828(uParam0->f_6, 1, 0);
				}
			}
			TASK::TASK_CLEAR_LOOK_AT(uParam0->f_6);
			bLocal_215 = false;
		}
		else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_6, 0))
		{
			if (!PED::_0x2DC0E8DCBD3546E9(uParam0->f_6))
			{
				if (!TASK::_0x916B8E075ABC8B4E(uParam0->f_6, 1))
				{
					TASK::_0xE7FA07624574B79A(uParam0->f_6, Global_35, 1, 1, -1f, 1, 0, 0, 0);
				}
			}
		}
	}
}

void func_69(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_147;
	iVar1 = -1;
	if ((iLocal_147 > 0 && iLocal_147 < 6) && iLocal_146 >= 2)
	{
		__LIB_2__::func_411(&(Local_180[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_180[1 /*17*/]), 0, 0);
		iLocal_147 = 6;
	}
	if (__LIB_1__::func_205(Global_35, uParam0->f_112, 1, 0))
	{
		__LIB_1__::func_148(&uLocal_153);
	}
	if (iLocal_147 >= 8)
	{
		func_126(uParam0, uParam1);
	}
	func_127(uParam0, uParam1);
	switch (iLocal_147)
	{
		case 0:
			if (__LIB_0__::func_272(uParam0->f_6, 0))
			{
				if (Local_136.f_2 == 105)
				{
					iLocal_147 = 6;
				}
				else if (!bLocal_15)
				{
					__LIB_2__::func_602(&(Local_180[0 /*17*/]), "INTERACT_GREET", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(&(Local_180[1 /*17*/]), "INTERACT_INSULT", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					__LIB_2__::func_411(&(Local_180[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_180[1 /*17*/]), 0, 0);
					iLocal_147 = 1;
				}
				else if (iLocal_145 >= 3)
				{
					__LIB_2__::func_602(&(Local_180[0 /*17*/]), "INTERACT_QUESTION", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(&(Local_180[1 /*17*/]), "INTERACT_INSULT", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					__LIB_2__::func_411(&(Local_180[0 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_180[1 /*17*/]), 0, 0);
					__LIB_2__::func_451(&iLocal_159, 0);
					iLocal_147 = 4;
				}
			}
			break;
		case 1:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (iLocal_145 >= 3)
			{
				__LIB_2__::func_411(&(Local_180[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_180[1 /*17*/]), 1, 0);
				__LIB_2__::func_451(&iLocal_159, 0);
				__LIB_1__::func_148(&uLocal_150);
				iLocal_147 = 2;
			}
			break;
		case 2:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (iVar1 != -1)
			{
				func_130(uParam0, uParam1, iVar1);
				iLocal_147 = 6;
			}
			else if (__LIB_0__::func_265(&uLocal_150) > 20f || (__LIB_0__::func_265(&uLocal_150) > 10f && !__LIB_1__::func_205(Global_35, uParam0->f_112, 1, 0)))
			{
				__LIB_2__::func_411(&(Local_180[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_180[1 /*17*/]), 0, 0);
				__LIB_2__::func_451(&iLocal_159, 0);
				__LIB_1__::func_148(&uLocal_150);
				iLocal_147 = 3;
			}
			break;
		case 3:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (__LIB_0__::func_265(&uLocal_150) > 10f)
			{
				__LIB_2__::func_602(&(Local_180[0 /*17*/]), "INTERACT_QUESTION", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_180[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_180[1 /*17*/]), 0, 0);
				__LIB_2__::func_451(&iLocal_159, 0);
				iLocal_147 = 4;
			}
			break;
		case 4:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (iVar1 != -1)
			{
				func_131(uParam0, uParam1);
				iLocal_147 = 5;
			}
			break;
		case 5:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (!__LIB_5__::func_236(1))
			{
				func_132(uParam0, uParam1);
				func_133();
				iLocal_147 = 6;
			}
			break;
		case 6:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (iLocal_146 == 4)
			{
				__LIB_2__::func_602(&(Local_180[0 /*17*/]), "INTERACT_QUESTION", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_180[1 /*17*/]), "INTERACT_INSULT", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_180[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_180[1 /*17*/]), 0, 0);
				__LIB_2__::func_451(&iLocal_159, 0);
				iLocal_147 = 7;
			}
			break;
		case 7:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (iLocal_146 == 5)
			{
				__LIB_2__::func_411(&(Local_180[0 /*17*/]), 1, 0);
				__LIB_2__::func_451(&iLocal_159, 0);
				iLocal_147 = 8;
			}
			break;
		case 8:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 2, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (iVar1 == 0)
			{
				func_134(uParam0, uParam1);
				iLocal_149++;
				func_133();
				__LIB_2__::func_411(&(Local_180[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_180[1 /*17*/]), 0, 0);
				__LIB_2__::func_451(&iLocal_159, 0);
				iLocal_147 = 9;
			}
			break;
		case 9:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 3, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (!__LIB_5__::func_236(1))
			{
				if (iLocal_149 > func_135(*uParam1, iLocal_148))
				{
					iLocal_148++;
					iLocal_149 = 1;
					__LIB_2__::func_411(&(Local_180[0 /*17*/]), 1, 0);
					__LIB_2__::func_451(&iLocal_159, 0);
					if (iLocal_148 > 2)
					{
						__LIB_1__::func_148(&uLocal_150);
						iLocal_147 = 10;
					}
					else
					{
						iLocal_147 = 8;
					}
				}
				else
				{
					func_134(uParam0, uParam1);
					iLocal_149++;
				}
			}
			break;
		case 10:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 2, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (iVar1 == 0)
			{
				__LIB_2__::func_344(&(uParam0->f_6));
				func_136(uParam0, uParam1);
				iLocal_147 = 11;
			}
			else if (__LIB_0__::func_265(&uLocal_150) > 60f)
			{
				__LIB_2__::func_411(&(Local_180[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_180[1 /*17*/]), 0, 0);
				__LIB_2__::func_451(&iLocal_159, 0);
				__LIB_0__::func_37(&uLocal_150);
				iLocal_147 = 12;
			}
			break;
		case 11:
			iVar1 = func_129(&(uParam0->f_6), &iLocal_159, 8f, &Local_180, 0f, 3, 1, 0, 2, uParam0->f_112, 2, -1082130432 /* Float: -1f */);
			if (!__LIB_5__::func_236(1))
			{
				if (*uParam1 != 11)
				{
					func_133();
					func_137(uParam0, uParam1);
				}
				__LIB_2__::func_344(&(uParam0->f_6));
				iLocal_147 = 12;
			}
			break;
		case 12:
			break;
	}
	if (iVar0 != iLocal_147)
	{
	}
}

void func_73(var uParam0)
{
	int iVar0;
	__LIB_2__::func_451(&iLocal_159, 0);
	__LIB_2__::func_603(&(uParam0->f_6), &iLocal_159, &Local_180, 1, 1);
	if (__LIB_0__::func_272(uParam0->f_6, 0))
	{
		TASK::TASK_CLEAR_LOOK_AT(uParam0->f_6);
		if (__LIB_5__::func_236(1))
		{
			__LIB_0__::func_82(1, 0, 0);
		}
		iVar0 = __LIB_5__::func_249(uParam0->f_6, 0);
		if (iVar0 != -1 && __LIB_2__::func_763(iVar0, 0))
		{
			__LIB_2__::func_753(iVar0, 0, 0, 0, 0);
		}
	}
}

bool func_76(var uParam0, var uParam1)
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_9) || uParam1->f_2 == 105)
	{
		return true;
	}
	if (func_143(uParam0))
	{
		if (func_144(uParam0, uParam1))
		{
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_9))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_7, func_95(uParam1), func_145(uParam1), true, false, true);
				if (*uParam1 == 12)
				{
					uParam0->f_9 = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_SHOPKEEPER"), 2510.472f, -1308.54f, 47.954f, 275.9725f, 0, 0, 1);
				}
				else if (__LIB_0__::func_0(uParam1))
				{
					uParam0->f_9 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(uParam0->f_7, joaat("SC_BOUNTY_HUNTER_SHERIFF"), 0.0086562f, 0.0409636f, 0.5f, 179.9999f, 0, 0, 1);
				}
				else
				{
					uParam0->f_9 = TASK::CREATE_SCENARIO_POINT(joaat("SC_BOUNTY_HUNTER_SHERIFF"), func_147(), func_148(), 0, 0, 0);
				}
				TASK::_0xE69FDA40AAC3EFC0(uParam0->f_9, 0);
				TASK::_0xA7479FB665361EDB(uParam0->f_9, 0);
				if (func_124(uParam1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
					{
						if (uParam1->f_2 == 115)
						{
							uParam0->f_8 = OBJECT::CREATE_OBJECT(joaat("P_JOURNAL_OPEN01X"), -5530.3f, -2930.37f, -1.575f, true, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(uParam0->f_8, -59.08f);
						}
						else if (uParam1->f_2 == 76)
						{
							uParam0->f_8 = OBJECT::CREATE_OBJECT(joaat("P_JOURNAL_OPEN01X"), -276.93f, 804.75f, 119.18f, true, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(uParam0->f_8, -55f);
						}
					}
				}
				return true;
			}
		}
	}
	return false;
}

bool func_77(int iParam0)
{
	if (iParam0 == 105)
	{
		return false;
	}
	return true;
}

void func_78(var uParam0, var uParam1)
{
	vector3 vVar0;
	var uVar3;
	func_149(uParam0, uParam1);
	vVar0 = { func_150(uParam1) };
	switch (iLocal_145)
	{
		case 0:
			if (*uParam1 == 19 && __LIB_10__::func_665())
			{
				if (func_151(uParam0, uParam1))
				{
					TASK::TASK_POLICE(uParam0->f_6, true);
					TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_6, joaat("WORLD_HUMAN_STERNGUY_IDLES"), -5531.23f, -2930.05f, -2.36f, -30.53f, -1, true, false, 0, -1f, false);
					func_152(uParam0, uParam1);
					func_51(1);
				}
			}
			else if (func_153(*uParam1))
			{
				if (func_154(uParam1))
				{
					if (func_151(uParam0, uParam1))
					{
						if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_6, -1))
						{
							func_152(uParam0, uParam1);
							func_155(uParam0);
							func_51(1);
						}
					}
				}
			}
			else if (func_156(uParam0, uParam1))
			{
				if (func_151(uParam0, uParam1))
				{
					func_152(uParam0, uParam1);
					__LIB_1__::func_148(&(uParam0->f_109));
					func_51(1);
				}
			}
			break;
		case 1:
			if (func_157(uParam0, uParam1))
			{
				if (__LIB_0__::func_265(&(uParam0->f_109)) > 1f || !__LIB_10__::func_53(uParam1->f_2, 0, 0))
				{
					if (!__LIB_3__::func_425(&uVar3) && !bLocal_15)
					{
						func_159(uParam0, uParam1);
						__LIB_1__::func_104(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
						__LIB_1__::func_148(&(uParam0->f_109));
						PED::_0x15F4732C357B1D6D(uParam0->f_6, PLAYER::PLAYER_ID(), 6);
						bLocal_15 = true;
						func_51(2);
					}
					else
					{
						func_51(2);
					}
				}
			}
			else
			{
				__LIB_1__::func_148(&(uParam0->f_109));
			}
			break;
		case 2:
			if (!__LIB_5__::func_236(1))
			{
				__LIB_1__::func_148(&(uParam0->f_109));
				func_51(3);
			}
			else if (!__LIB_1__::func_205(Global_35, uParam0->f_112, 1, 0) && !__LIB_10__::func_53(uParam1->f_2, 0, 0))
			{
				__LIB_5__::func_239(&vVar0, 1, 0);
				__LIB_1__::func_148(&(uParam0->f_109));
				func_51(3);
			}
			else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(&vVar0) >= 2)
			{
				func_162(uParam0);
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&(uParam0->f_109)) > 1f)
			{
				func_162(uParam0);
				if (__LIB_0__::func_163(uParam0->f_6, -875674219))
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_6, true, false);
				}
				func_51(4);
			}
			break;
		case 4:
			break;
	}
}

void func_79(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	vector3 vVar7;
	func_149(uParam0, uParam1);
	if (iLocal_146 == 2 || iLocal_146 == 4)
	{
		if (bLocal_215 == 0)
		{
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uParam0->f_6, 0, 1);
		}
	}
	switch (iLocal_146)
	{
		case 0:
			if (__LIB_0__::func_20(uParam1->f_2) && __LIB_1__::func_220(uParam1->f_2))
			{
				if (func_151(uParam0, uParam1))
				{
					if (func_153(*uParam1) && Local_136.f_2 != 105)
					{
						__LIB_1__::func_148(&(uParam0->f_109));
						__LIB_5__::func_237(1);
					}
					else if (!func_164(uParam1->f_2))
					{
						if (Local_136.f_2 == 105)
						{
							if (func_165(uParam0, uParam1))
							{
								func_152(uParam0, uParam1);
								__LIB_1__::func_148(&(uParam0->f_109));
								__LIB_5__::func_237(1);
							}
						}
						else
						{
							func_166(uParam0, uParam1);
							func_152(uParam0, uParam1);
							__LIB_1__::func_148(&(uParam0->f_109));
							__LIB_5__::func_237(1);
						}
					}
				}
				if (iLocal_14 >= 3 && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					__LIB_5__::func_237(5);
				}
			}
			break;
		case 1:
			vVar0 = { func_167(uParam1) };
			if (func_168() || MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
			{
				__LIB_5__::func_237(2);
			}
			else if (!__LIB_5__::func_236(1))
			{
				if (__LIB_0__::func_265(&(uParam0->f_109)) > 1f)
				{
					__LIB_1__::func_104(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
					__LIB_5__::func_237(2);
				}
			}
			break;
		case 2:
			func_169(uParam0, uParam1);
			if (func_168())
			{
				if (!__LIB_1__::func_205(uParam0->f_6, uParam0->f_112, 1, 0))
				{
					func_170(uParam0, uParam1);
				}
				else if (!PED::_0x2DC0E8DCBD3546E9(uParam0->f_6))
				{
					func_171(uParam0);
					__LIB_1__::func_148(&(uParam0->f_109));
					uParam1->f_7 = 0;
					__LIB_5__::func_237(4);
				}
				else if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_112, Global_36))
				{
					__LIB_5__::func_237(5);
				}
			}
			break;
		case 4:
			if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_112, Global_36))
			{
				if (__LIB_5__::func_236(1))
				{
					iVar6 = (uParam1->f_7 - 1);
					if (iVar6 >= 0)
					{
						vVar3 = { func_172(uParam1, iVar6) };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar3))
						{
							__LIB_5__::func_239(&vVar3, 1, 0);
						}
					}
					__LIB_5__::func_237(5);
				}
			}
			else if (!__LIB_5__::func_236(1))
			{
				vVar7 = { func_172(uParam1, uParam1->f_7) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar7))
				{
					if (__LIB_1__::func_104(&(uParam0->f_11), vVar7, 0, -1, 0, 0))
					{
						uParam1->f_7++;
					}
				}
				else
				{
					__LIB_5__::func_237(5);
				}
			}
			break;
		case 5:
			break;
	}
}

char[] func_84(int iParam0)
{
	char[] cVar0[8];
	switch (iParam0)
	{
		case 11:
			StringCopy(&cVar0, "DUL", 8);
			break;
		case 13:
			StringCopy(&cVar0, "RCH", 8);
			break;
		case 12:
			StringCopy(&cVar0, "ECF", 8);
			break;
		case 153:
			StringCopy(&cVar0, "ODS", 8);
			break;
		case 14:
			StringCopy(&cVar0, "WIL", 8);
			break;
		case 154:
			StringCopy(&cVar0, "CPR", 8);
			break;
		case 15:
			StringCopy(&cVar0, "SHE", 8);
			break;
		case 16:
			StringCopy(&cVar0, "NBS", 8);
			break;
		case 17:
			StringCopy(&cVar0, "SKN", 8);
			break;
		case 18:
			StringCopy(&cVar0, "RDE", 8);
			break;
		case 155:
			StringCopy(&cVar0, "BWH", 8);
			break;
		case 19:
			StringCopy(&cVar0, "BDS", 8);
			break;
		case 20:
			StringCopy(&cVar0, "BDM", 8);
			break;
		default:
			StringCopy(&cVar0, "BM1", 8);
			break;
	}
	return cVar0;
}

var func_85(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = cParam0;
	uVar15 = UIFEED::_SHOW_OBJECTIVE(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_92(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = func_191(iParam0);
	iVar1 = func_192(iParam0);
	func_193(iParam0);
	func_194(iVar0);
	func_195(iVar1);
}

void func_93(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 76:
			sVar0 = "BHPVAAU";
			break;
		case 5:
			sVar0 = "BHPNBAU";
			break;
		case 105:
			sVar0 = "BHPROAU";
			break;
		case 38:
			sVar0 = "BHPBWAU";
			break;
		case 26:
			sVar0 = "BHPSTAU";
			break;
		case 115:
			sVar0 = "BHPTWAU";
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !HUD::_TEXT_DATABASE_HAS_LOADED(sVar0))
	{
		HUD::_TEXT_DATABASE_REQUEST(sVar0);
	}
}

bool func_94(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 76:
			sVar0 = "BHPVAAU";
			break;
		case 5:
			sVar0 = "BHPNBAU";
			break;
		case 105:
			sVar0 = "BHPROAU";
			break;
		case 38:
			sVar0 = "BHPBWAU";
			break;
		case 26:
			sVar0 = "BHPSTAU";
			break;
		case 115:
			sVar0 = "BHPTWAU";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return true;
	}
	else if (HUD::_TEXT_DATABASE_HAS_LOADED(sVar0))
	{
		return true;
	}
	return false;
}

Vector3 func_95(var uParam0)
{
	switch (uParam0->f_2)
	{
		case 76:
			return -277.57f, 804.27f, 118.39f;
		case 26:
			return -1806.93f, -347.69f, 163.68f;
		case 5:
			return 2508.8f, -1308.84f, 47.98f;
		case 38:
			return -761.88f, -1266.28f, 43.07f;
		case 115:
			return -5531.12f, -2930.71f, -2.36f;
		case 105:
			return 1230.29f, -1298.66f, 75.9f;
		case 78:
			return 2907.484f, 1314.698f, 44.38533f;
	}
	return 0f, 0f, 0f;
}

char* func_96(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return "val_jail_int";
		case 105:
			return "rho_train_int";
		case 5:
			return "new_police_int";
		case 38:
			return "bla_jail_int";
		case 26:
			return "str_jailpost_int";
		case 115:
			return "tum_jail_int";
		default:
			break;
	}
	return "";
}

float func_97(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -79.834f;
		case 3:
			return -42f;
		case 4:
			return 0f;
		case 2:
			return 154.4f;
		case 5:
			return 0f;
		case 6:
			return 115.25f;
		default:
			break;
	}
	return 0f;
}

void func_98(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_ENTITY(uParam0->f_4, "PrimaryItem");
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) != func_196(iParam1))
		{
			STREAMING::REQUEST_MODEL(func_196(iParam1), false);
			if (STREAMING::HAS_MODEL_LOADED(func_196(iParam1)))
			{
				uParam0->f_3 = OBJECT::CREATE_OBJECT(func_196(iParam1), ENTITY::GET_ENTITY_COORDS(iVar0, true, false), true, true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_3, ENTITY::GET_ENTITY_ROTATION(iVar0, 2), 2, true);
				TASK::_0x6EF4E31B4D5D2DA0(uParam0->f_4, "PrimaryItem");
				ENTITY::DELETE_ENTITY(&iVar0);
				TASK::_0x8360C47380B6F351(uParam0->f_4, uParam0->f_3, "PrimaryItem", 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_196(iParam1));
			}
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_3, "letter_item"))
	{
		DECORATOR::DECOR_SET_INT(uParam0->f_3, "letter_item", __LIB_10__::func_49(iParam1));
	}
}

void func_110()
{
	int iVar0;
	int iVar1;
	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (__LIB_5__::func_240(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < Global_1347702)
		{
			if (__LIB_0__::func_5(iVar1) && Global_1347702[iVar1 /*49*/] == iVar0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[iVar1 /*49*/].f_37))
				{
					__LIB_11__::func_811(iVar1, 0);
					__LIB_7__::func_655(iVar1, __LIB_1__::func_440(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

bool func_124(var uParam0)
{
	if (MISC::ARE_STRINGS_EQUAL(func_226(uParam0, 10), "SCRIPT_COMMON_SHERIFF_SIT_WRITING"))
	{
		return true;
	}
	return false;
}

int func_126(var uParam0, var uParam1)
{
	vector3 vVar0;
	if (iLocal_16 || iLocal_18)
	{
		return 1;
	}
	else if (!__LIB_1__::func_205(Global_35, uParam0->f_112, 1, 0))
	{
		if (!__LIB_0__::func_75(&uLocal_156))
		{
			__LIB_1__::func_283(&uLocal_156, 0);
		}
		else if (__LIB_0__::func_265(&uLocal_156) > 10f)
		{
			iLocal_18 = 1;
		}
	}
	if (__LIB_0__::func_265(&uLocal_153) < 5f)
	{
		if (!__LIB_5__::func_236(1))
		{
			if (__LIB_10__::func_53(uParam1->f_2, 0, 0))
			{
				if (!PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, VOLUME::_GET_VOLUME_COORDS(uParam0->f_112), 135f) && !TASK::IS_PED_STILL(Global_35))
				{
					vVar0 = { func_233(uParam1) };
					if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
					{
						iLocal_16 = 1;
					}
					else if (__LIB_1__::func_104(&(uParam0->f_11), vVar0, 0, -1, 0, 0))
					{
						iLocal_16 = 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_127(var uParam0, var uParam1)
{
	vector3 vVar0[24];
	if ((uParam1->f_2 == 115 && iLocal_17 == 0) && !func_39())
	{
		if (iLocal_145 >= 2 && !__LIB_5__::func_236(1))
		{
			if (!__LIB_1__::func_205(Global_35, uParam0->f_112, 1, 0))
			{
				if (!__LIB_10__::func_53(uParam1->f_2, 0, 0) || !PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, VOLUME::_GET_VOLUME_COORDS(uParam0->f_112), 135f))
				{
					StringCopy(&cVar0, "TWD_LVE_ERLY", 24);
					if (__LIB_1__::func_104(&(uParam0->f_11), cVar0, 0, -1, 0, 0))
					{
						iLocal_17 = 1;
					}
				}
			}
		}
	}
}

int func_129(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, float fParam11)
{
	return func_239(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, __LIB_2__::func_340(iParam8, 0, 0), iParam9, 0, iParam10, fParam11);
}

void func_130(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vVar0 = { func_240(uParam1->f_2) };
	if (iParam2 == 0)
	{
		StringConCat(&vVar0, "GREETPOS_", 24);
	}
	else
	{
		StringConCat(&vVar0, "GREETNEG_", 24);
	}
	vVar0 = { __LIB_10__::func_56(vVar0) };
	__LIB_1__::func_104(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
}

void func_131(var uParam0, var uParam1)
{
	vector3 vVar0;
	vVar0 = { func_240(uParam1->f_2) };
	if ((uParam1->f_2 == 38 || uParam1->f_2 == 26) || uParam1->f_2 == 115)
	{
		StringConCat(&vVar0, "ASKP_", 24);
	}
	else if (uParam1->f_2 == 5)
	{
		StringConCat(&vVar0, "ASK", 24);
	}
	else if (uParam1->f_2 == 76)
	{
		StringConCat(&vVar0, "POSTER_", 24);
	}
	if (uParam1->f_2 == 26 && __LIB_0__::func_181())
	{
		StringConCat(&vVar0, "B", 24);
	}
	else
	{
		vVar0 = { __LIB_10__::func_56(vVar0) };
	}
	__LIB_1__::func_104(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
}

void func_132(var uParam0, var uParam1)
{
	vector3 vVar0;
	vVar0 = { func_240(uParam1->f_2) };
	if (((uParam1->f_2 == 38 || uParam1->f_2 == 26) || uParam1->f_2 == 5) || uParam1->f_2 == 115)
	{
		StringConCat(&vVar0, "ASK_RPL", 24);
	}
	else if (uParam1->f_2 == 76)
	{
		StringConCat(&vVar0, "POSTER_SH", 24);
	}
	__LIB_1__::func_104(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
}

void func_133()
{
	__LIB_1__::func_148(&uLocal_216);
	bLocal_215 = true;
}

void func_134(var uParam0, var uParam1)
{
	vector3 vVar0;
	if (Local_136.f_2 == 105)
	{
		vVar0 = { func_242(uParam1, iLocal_148) };
	}
	else
	{
		vVar0 = { func_243(uParam1, iLocal_148, iLocal_149) };
	}
	__LIB_1__::func_104(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
}

int func_135(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
			switch (iParam1)
			{
				case 1:
					return 1;
				case 2:
					return 1;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 1:
					return 2;
				case 2:
					return 2;
			}
			break;
		case 153:
			switch (iParam1)
			{
				case 1:
					return 1;
				case 2:
					return 1;
			}
			break;
		case 13:
		case 15:
		case 154:
			switch (iParam1)
			{
				case 1:
					return 1;
				case 2:
					return 1;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 1:
					return 2;
				case 2:
					return 1;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 1:
					return 2;
				case 2:
					return 2;
			}
			break;
		case 17:
		case 18:
		case 155:
			switch (iParam1)
			{
				case 1:
					return 1;
				case 2:
					return 1;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 1:
					return 3;
				case 2:
					return 2;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 1:
					return 3;
				case 2:
					return 2;
			}
			break;
	}
	return 2;
}

void func_136(var uParam0, var uParam1)
{
	vector3 vVar0;
	vVar0 = { func_244(uParam1) };
	__LIB_1__::func_104(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
}

void func_137(var uParam0, var uParam1)
{
	vector3 vVar0;
	vVar0 = { func_245(uParam1, Global_40.f_9074.f_4 == 0) };
	__LIB_1__::func_104(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
}

bool func_143(var uParam0)
{
	if (uParam0->f_2)
	{
		if (INTERIOR::IS_VALID_INTERIOR(uParam0->f_1) && INTERIOR::IS_INTERIOR_READY(uParam0->f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_144(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		return true;
	}
	if (uParam0->f_10 == 0)
	{
		uParam0->f_10 = ENTITY::_0x6F3068258A499E52(__LIB_10__::func_51(uParam1->f_2), func_95(uParam1), 7);
	}
	else if (ENTITY::_0x1FF441D7954F8709(uParam0->f_10))
	{
		uParam0->f_7 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_10));
	}
	return false;
}

float func_145(var uParam0)
{
	switch (uParam0->f_2)
	{
		case 76:
			return 125f;
		case 26:
			return -28f;
		case 5:
			return -65f;
		case 38:
			return -10.33f;
		case 115:
			return 115.51f;
	}
	return 0f;
}

Vector3 func_147()
{
	return -277.96f, 804.6f, 118.38f;
}

float func_148()
{
	return -30f;
}

void func_149(var uParam0, var uParam1)
{
	if (__LIB_10__::func_665())
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_9) && __LIB_0__::func_272(uParam0->f_6, 0))
		{
			if (!PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_6, uParam0->f_9))
			{
				if (!__LIB_1__::func_205(Global_35, uParam0->f_112, 1, 0) && !__LIB_10__::func_53(uParam1->f_2, 0, 0))
				{
					func_155(uParam0);
				}
				else if (__LIB_0__::func_103() && !ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
				{
					func_155(uParam0);
				}
			}
		}
	}
}

Vector3 func_150(var uParam0)
{
	vector3 vVar0[24];
	bool bVar3;
	StringCopy(&cVar0, "", 24);
	bVar3 = func_259(uParam0);
	switch (*uParam0)
	{
		case 14:
			if (__LIB_0__::func_181())
			{
				StringCopy(&cVar0, "VAL_INTR_A", 24);
			}
			else
			{
				StringCopy(&cVar0, "VAL_INTR_B", 24);
			}
			break;
		case 12:
		case 16:
			if (!__LIB_0__::func_181() && __LIB_1__::func_187(130))
			{
				if (__LIB_1__::func_187(133))
				{
					StringCopy(&cVar0, "NBX_RTL_DONE7", 24);
				}
				else
				{
					StringCopy(&cVar0, "NBX_RTL_DONE4", 24);
				}
			}
			else if (bVar3)
			{
				StringCopy(&cVar0, "STD_INTR_B", 24);
			}
			else
			{
				StringCopy(&cVar0, "STD_INTR_A", 24);
			}
			break;
		case 18:
			StringCopy(&cVar0, "BLW_RB20_IG2_P1", 24);
			break;
		case 155:
			if (!bVar3)
			{
				StringCopy(&cVar0, "BLW_RB21_IG3_P", 24);
			}
			else
			{
				StringCopy(&cVar0, "BLW_INTR_B", 24);
			}
			break;
		case 17:
			if (!bVar3)
			{
				StringCopy(&cVar0, "BLW_RB18_IG1_P", 24);
			}
			else
			{
				StringCopy(&cVar0, "BLW_INTR_B", 24);
			}
			break;
		case 11:
		case 153:
			if (!bVar3)
			{
				StringCopy(&cVar0, "STR_INTR_A", 24);
			}
			else
			{
				StringCopy(&cVar0, "STR_INTR_B", 24);
			}
			break;
		case 13:
		case 15:
		case 154:
			break;
		case 19:
			if (__LIB_10__::func_665())
			{
				StringCopy(&cVar0, "TWD_TG22_G_BEX", 24);
			}
			else
			{
				StringCopy(&cVar0, "TWD_TG22_G_LTR", 24);
			}
			break;
		case 20:
			StringCopy(&cVar0, "TWD_POST_LOC", 24);
			break;
	}
	return cVar0;
}

bool func_151(var uParam0, var uParam1)
{
	int iVar0;
	if (uParam1->f_2 == 105 && __LIB_0__::func_627(87, 1))
	{
		return false;
	}
	iVar0 = __LIB_10__::func_669(uParam1->f_2);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) || !__LIB_2__::func_763(iVar0, 1))
	{
		uParam0->f_6 = __LIB_2__::func_965(iVar0, 1, 0, 1, 1, 1);
		if (__LIB_0__::func_272(uParam0->f_6, 0))
		{
			PED::_0xBD75500141E4725C(uParam0->f_6, joaat("LAW_SHERIFF"));
		}
	}
	else if (uParam1->f_1 == 3)
	{
		return true;
	}
	else if (func_76(uParam0, uParam1))
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_6, true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_6, 168, true);
		WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_6, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	return false;
}

void func_152(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_181())
	{
		__LIB_0__::func_928(&(uParam0->f_11), Global_35, "ARTHUR", 1);
	}
	else
	{
		__LIB_0__::func_928(&(uParam0->f_11), Global_35, "JOHN", 1);
	}
	__LIB_0__::func_928(&(uParam0->f_11), uParam0->f_6, func_263(uParam1->f_1), 1);
}

bool func_153(int iParam0)
{
	if (iParam0 == 20)
	{
		return false;
	}
	return true;
}

bool func_154(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_10__::func_665() && Global_1392235.f_1 == 1)
	{
		return true;
	}
	iVar1 = __LIB_10__::func_669(uParam0->f_2);
	iVar0 = __LIB_1__::func_334(iVar1);
	if (__LIB_0__::func_272(iVar0, 0))
	{
		if (__LIB_0__::func_665(Global_35, iVar0, 1, 1) > 20f)
		{
			if (__LIB_9__::func_313(ENTITY::GET_ENTITY_COORDS(iVar0, true, false)) && !__LIB_9__::func_313(Global_36))
			{
				return true;
			}
		}
		if (__LIB_0__::func_665(Global_35, iVar0, 1, 1) < 80f)
		{
			if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 3f) && !ENTITY::IS_ENTITY_OCCLUDED(iVar0))
			{
				return false;
			}
		}
	}
	return true;
}

void func_155(var uParam0)
{
	if (!PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_6, uParam0->f_9))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_6, false, true);
		TASK::TASK_POLICE(uParam0->f_6, true);
		TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_6, uParam0->f_9, func_226(&Local_136, 10), -1, false, true, 0, false, -1f, false);
		PED::_0x2208438012482A1A(uParam0->f_6, false, false);
	}
}

bool func_156(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	if (!__LIB_1__::func_205(Global_35, uParam0->f_112, 1, 0))
	{
		return false;
	}
	iVar0 = __LIB_10__::func_669(uParam1->f_2);
	vVar1 = { __LIB_4__::func_902(iVar0) };
	if (__LIB_2__::func_157(uParam0->f_112, vVar1) && __LIB_0__::func_94(Global_35, vVar1, 1) < 12f)
	{
		return true;
	}
	return false;
}

bool func_157(var uParam0, var uParam1)
{
	if (__LIB_1__::func_205(Global_35, uParam0->f_112, 1, 0))
	{
		if (uParam1->f_2 == 5)
		{
			if (__LIB_0__::func_665(Global_35, uParam0->f_6, 1, 1) < 8f)
			{
				return true;
			}
			else if (*uParam1 == 16 && __LIB_0__::func_94(Global_35, 2498.72f, -1308.83f, 47.95f, 1) < 2.5f)
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_159(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_9) && PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_6, uParam0->f_9))
	{
		func_271(uParam0, &iVar0, &iVar1);
		sVar2 = func_226(uParam1, iVar0);
		sVar3 = func_226(uParam1, iVar1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
		{
			TASK::_0x79197F7D2BB5E73A(uParam0->f_6, uParam0->f_9, func_226(uParam1, iVar0), func_226(uParam1, iVar1), func_226(uParam1, 10), 0);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_6, Global_35, -1, 0, 51, 0);
		}
		else
		{
			func_133();
		}
	}
	else if (*uParam1 == 19 && __LIB_10__::func_665())
	{
		func_133();
	}
	else
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_6, true, false);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_6, Global_35, -1, -1f, -1f, -1f);
		func_133();
	}
}

void func_162(var uParam0)
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_4) && !TASK::_IS_SCENARIO_POINT_ACTIVE(uParam0->f_4))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(uParam0->f_4, true);
		Global_1392235.f_3 = 0;
	}
}

bool func_164(int iParam0)
{
	vector3 vVar0;
	vVar0 = { func_273(iParam0) };
	if (CAM::IS_SPHERE_VISIBLE(vVar0 + Vector(1f, 0f, 0f), 1f))
	{
		return true;
	}
	return false;
}

bool func_165(var uParam0, var uParam1)
{
	int iVar0;
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_9))
	{
		iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(func_95(uParam1), joaat("WORLD_HUMAN_SHOPKEEPER"), 1f, 0, true);
		uParam0->f_9 = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_SHOPKEEPER"), TASK::_GET_SCENARIO_POINT_COORDS(iVar0, true), TASK::_GET_SCENARIO_POINT_HEADING(iVar0, true), 0, -1f, 0);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_6, false, true);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_9))
	{
		if (!PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_6, uParam0->f_9))
		{
			TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_6, uParam0->f_9, func_226(uParam1, 10), -1, false, true, 0, false, -1f, false);
			return true;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_166(var uParam0, var uParam1)
{
	struct<4> Var0;
	int iVar4;
	Var0 = { func_273(uParam1->f_2) };
	if (!__LIB_1__::func_205(uParam0->f_6, uParam0->f_112, 1, 0))
	{
		func_274(uParam0->f_6, Var0, 2, 1073741824 /* Float: 2f */);
	}
	TASK::CLEAR_PED_TASKS(uParam0->f_6, true, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar4);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -5531.35f, -2929.76f, -2.36f, 1f, -1, 0.25f, 0, 40000f);
	TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_STERNGUY_IDLES"), -5531.35f, -2929.76f, -2.36f, -12.96f, -1, true, false, 0, -1f, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar4);
	TASK::TASK_PERFORM_SEQUENCE(uParam0->f_6, iVar4);
	TASK::CLEAR_SEQUENCE_TASK(&iVar4);
	TASK::TASK_LOOK_AT_ENTITY(uParam0->f_6, Global_35, -1, 0, 51, 0);
	PED::FORCE_PED_MOTION_STATE(uParam0->f_6, joaat("MOTIONSTATE_WALK"), false, 0, false);
}

Vector3 func_167(var uParam0)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, "", 24);
	switch (uParam0->f_1)
	{
		case 1:
			StringCopy(&cVar0, "VAL_INSPECT_", 24);
			cVar0 = { __LIB_10__::func_56(cVar0) };
			break;
		case 4:
			break;
		case 5:
			break;
		case 2:
			StringCopy(&cVar0, "STR_INSP_", 24);
			cVar0 = { __LIB_10__::func_56(cVar0) };
			break;
		case 3:
			StringCopy(&cVar0, "RHO_ALD_INSPECT", 24);
			break;
		case 6:
			break;
	}
	return cVar0;
}

bool func_168()
{
	if (iLocal_14 == 3)
	{
		return true;
	}
	return false;
}

int func_169(var uParam0, var uParam1)
{
	vector3 vVar0;
	if (iLocal_145 >= 2)
	{
		return 1;
	}
	if (__LIB_1__::func_205(uParam0->f_6, uParam0->f_112, 1, 0) && !__LIB_5__::func_236(1))
	{
		vVar0 = { func_275(uParam1) };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
		{
			__LIB_1__::func_104(&(uParam0->f_11), vVar0, 0, -1, 0, 0);
		}
		iLocal_145 = 2;
		return 1;
	}
	return 0;
}

void func_170(var uParam0, var uParam1)
{
	float fVar0;
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_6, false, true);
	if (uParam1->f_2 == 105)
	{
		TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_6, uParam0->f_9, func_226(uParam1, 10), -1, false, true, 0, false, -1f, false);
	}
	else
	{
		fVar0 = __LIB_0__::func_152(func_276(uParam1->f_2), Global_36, 1);
		TASK::TASK_POLICE(uParam0->f_6, true);
		TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_6, joaat("WORLD_HUMAN_STERNGUY_IDLES"), func_276(uParam1->f_2), fVar0, -1, false, true, 0, -1f, false);
	}
}

void func_171(var uParam0)
{
	char* sVar0;
	char* sVar1;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_9) && PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_6, uParam0->f_9))
	{
		sVar0 = func_226(&Local_136, 8);
		sVar1 = func_226(&Local_136, 9);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			TASK::_0x79197F7D2BB5E73A(uParam0->f_6, uParam0->f_9, sVar0, sVar1, func_226(&Local_136, 10), 0);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_6, Global_35, -1, 0, 51, 0);
		}
		else
		{
			func_133();
		}
	}
	else
	{
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_6, Global_35, -1, 0, 51, 0);
		func_133();
	}
}

Vector3 func_172(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, "", 24);
	switch (*uParam0)
	{
		case 14:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BHPVA_WIFE_MI", 24);
				cVar0 = { __LIB_10__::func_56(cVar0) };
			}
			break;
		case 12:
			if (iParam1 == 0)
			{
				if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "NBX_CON_DEPTIPJ", 24);
				}
				else
				{
					StringCopy(&cVar0, "NBX_CON_DEPTIPA", 24);
				}
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "NBX_CON_DEPWLK", 24);
			}
			break;
		case 16:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "NBX_NBS_IG2_TIP", 24);
			}
			break;
		case 17:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BLW_RB18_IG1_T", 24);
			}
			break;
		case 18:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BLW_RB20_IG2_T", 24);
			}
			break;
		case 155:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BLW_RB21_IG3_T", 24);
			}
			break;
		case 11:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "STR_BHDL_TIPK", 24);
			}
			else if (iParam1 == 1)
			{
				if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "STR_BHDL_TIPB", 24);
				}
				else
				{
					StringCopy(&cVar0, "STR_BHDL_TIPA", 24);
				}
			}
			break;
		case 153:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "STR_BHSL_TIPJ", 24);
			}
			break;
		case 13:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RHO_RNCH", 24);
			}
			break;
		case 154:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT12_OUTRO", 24);
			}
			break;
		case 15:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BHPRO_14_IG2", 24);
			}
			break;
		case 19:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "TWD_TG22_TIP", 24);
			}
			break;
		case 20:
			if (iParam1 == 0)
			{
				if (__LIB_1__::func_185(70))
				{
					StringCopy(&cVar0, "TWD_BDM_POST_A", 24);
				}
				else
				{
					StringCopy(&cVar0, "TWD_BDM_POST_B", 24);
				}
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "TWD_TG23_TIP", 24);
			}
			else if (iParam1 == 2)
			{
				if (__LIB_1__::func_185(70))
				{
					StringCopy(&cVar0, "TWD_BDM_YSADJ", 24);
				}
				else
				{
					StringCopy(&cVar0, "TWD_BDM_NSADJ", 24);
				}
			}
			break;
	}
	return cVar0;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 10000;
		case 19:
			return 6000;
		case 20:
			return 6500;
		case 17:
			return 7500;
		case 18:
			return 9000;
		case 154:
			return 5500;
		case 153:
			return 6000;
		case 11:
			return 4000;
		case 13:
			return 2500;
		case 14:
			return 2500;
		case 15:
			return 3500;
		case 16:
			return 8500;
		case 155:
			return 3000;
	}
	return __LIB_3__::func_540(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, -1);
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case 11:
		case 13:
		case 14:
		case 15:
		case 16:
		case 19:
		case 155:
			return 0;
		case 12:
		case 17:
		case 18:
		case 20:
		case 153:
		case 154:
			return func_191(iParam0);
	}
	return 0;
}

void func_193(int iParam0)
{
	Global_40.f_9074.f_2 = iParam0;
}

void func_194(int iParam0)
{
	Global_40.f_9074.f_3 = iParam0;
}

void func_195(int iParam0)
{
	Global_40.f_9074.f_4 = iParam0;
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return joaat("P_CS_STRAWBERRY_DUEL01X");
		case 12:
			return joaat("P_CS_LEMOYNE_RAIDERS01X");
		case 13:
			return joaat("P_CS_RHODES_RANCHER01X");
		case 153:
			return joaat("P_CS_LARAMIE_SLEEPING01X");
		case 14:
			return joaat("P_CS_WIFE_AND_LOVER01X");
		case 154:
			return joaat("P_CS_CAMP_RETURN01X");
		case 15:
			return joaat("P_CS_SHACK_ESCAPE01X");
		case 16:
			return joaat("P_CS_SAINTDENIS_SALOON01X");
		case 17:
			return joaat("P_CS_SKINNER_BROTHER01X");
		case 18:
			return joaat("P_CS_SKINNER_SEARCH01X");
		case 155:
			return joaat("P_CS_BLACKWATER_HUNT01X");
		case 19:
			return joaat("P_CS_BANDITO_SHACK01X");
		case 20:
			return joaat("P_CS_BANDITO_MINE01X");
		case 31:
			return joaat("P_CS_CHAIN_GANG01X");
		default:
			break;
	}
	return joaat("P_CS_WANTEDALIVE01X");
	return joaat("P_CS_WANTEDALIVE01X");
}

char* func_226(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 6:
			switch (*uParam0)
			{
				case 19:
					switch (iParam1)
					{
						case 0:
							if (__LIB_10__::func_665())
							{
								return "SCRIPT_RE@BANDITO_SHACK@SHERIFF@WAS_HOPING_SHERIFF";
							}
							else
							{
								return "SCRIPT_RE@BANDITO_SHACK@SHERIFF@HERE_TO_HELP_B_SHERIFF";
							}
							break;
						case 1:
							if (__LIB_10__::func_665())
							{
								return "WAS_HOPING_SHERIFF";
							}
							else
							{
								return "HERE_TO_HELP_B_SHERIFF";
							}
							break;
						case 2:
							return "";
						case 3:
							return "";
						case 4:
							return "";
						case 5:
							return "";
						case 6:
							return "";
						case 7:
							return "";
						case 8:
							return "SCRIPT_RE@BANDITO_SHACK@SHERIFF@LOCATION_SHERIFF";
						case 9:
							return "LOCATION_SHERIFF";
						case 10:
							return "SCRIPT_COMMON_SHERIFF_SIT_WRITING";
					}
					break;
				case 20:
					switch (iParam1)
					{
						case 0:
							return "";
						case 1:
							return "";
						case 2:
							return "";
						case 3:
							return "";
						case 4:
							return "";
						case 5:
							return "";
						case 6:
							return "";
						case 7:
							return "";
						case 8:
							return "";
						case 9:
							return "";
						case 10:
							return "SCRIPT_COMMON_SHERIFF_SIT_RELAX";
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "";
				case 1:
					return "";
				case 2:
					return "";
				case 3:
					return "";
				case 4:
					return "";
				case 5:
					return "";
				case 6:
					return "";
				case 7:
					return "";
				case 8:
					return "";
				case 9:
					return "";
				case 10:
					return "SCRIPT_COMMON_SHERIFF_SIT_RELAX";
				default:
					break;
			}
			break;
		case 1:
			switch (*uParam0)
			{
				case 14:
					switch (iParam1)
					{
						case 4:
							return "";
						case 5:
							return "";
						case 6:
							return "";
						case 7:
							return "";
						case 8:
							return "SCRIPT_PROC@BOUNTY@WIFE_AND_LOVER@TIP_SHERIFF@GRAB_POSTER_sheriff";
						case 9:
							return "GRAB_POSTER_sheriff";
						case 10:
							return "SCRIPT_COMMON_SHERIFF_SIT_WRITING";
						default:
							break;
					}
					break;
			}
			if (iParam1 == 10)
			{
				return "SCRIPT_COMMON_SHERIFF_SIT_RELAX";
			}
			break;
		case 5:
			switch (*uParam0)
			{
				case 155:
					switch (iParam1)
					{
						case 4:
							return "SCRIPT_PROC@BOUNTY@BLACKWATER_HUNT@SHERIFF_IG3_ACTION_LEFT";
						case 5:
							return "SHERIFF_IG3_ACTION_LEFT";
						case 6:
							return "SCRIPT_PROC@BOUNTY@BLACKWATER_HUNT@SHERIFF_IG3_ACTION_RIGHT";
						case 7:
							return "SHERIFF_IG3_ACTION_RIGHT";
						case 8:
							return "SCRIPT_PROC@BOUNTY@BLACKWATER_HUNT@SHERIFF_IG3_MAIN_ACTION";
						case 9:
							return "SHERIFF_IG3_MAIN_ACTION";
						case 10:
							return "SCRIPT_COMMON_SHERIFF_SIT_RELAX";
						default:
							break;
					}
					break;
			}
			if (iParam1 == 10)
			{
				return "SCRIPT_COMMON_SHERIFF_SIT_RELAX";
			}
			break;
		case 3:
			switch (*uParam0)
			{
				case 15:
					switch (iParam1)
					{
						case 8:
							return "SCRIPT_PROC@BOUNTY@SHACK_ESCAPE@IG@S1_IG2@Alden_talks_to_player_alden";
						case 9:
							return "Alden_talks_to_player_alden";
						case 10:
							return "WORLD_HUMAN_SHOPKEEPER_MALE_A";
						default:
							break;
					}
					break;
			}
			if (iParam1 == 10)
			{
				return "WORLD_HUMAN_SHOPKEEPER_MALE_A";
			}
			break;
		case 4:
			if (*uParam0 == 12)
			{
				switch (iParam1)
				{
					case 8:
						return "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_BOUNTY@DIALOGUE_DEPUTY";
					case 9:
						return "DIALOGUE_DEPUTY";
					case 10:
						return "WORLD_HUMAN_SHOPKEEPER_MALE_A";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "SCRIPT_PROC@BOUNTY@ST_DENIS_SALOON@JAIL@GSM0_GREET_FRONT";
					case 1:
						return "GSM0_GREET_FORWARD";
					case 2:
						return "SCRIPT_PROC@BOUNTY@ST_DENIS_SALOON@JAIL@GSM0_GREET_BACK";
					case 3:
						return "GSM0_GREET_BACK";
					case 4:
						return "SCRIPT_PROC@BOUNTY@ST_DENIS_SALOON@GSM0_GREET_LEFT";
					case 5:
						return "GSM0_GREET_LEFT";
					case 6:
						return "SCRIPT_PROC@BOUNTY@ST_DENIS_SALOON@GSM0_GREET_RIGHT";
					case 7:
						return "GSM0_GREET_RIGHT";
					case 8:
						return "SCRIPT_PROC@BOUNTY@ST_DENIS_SALOON@JAIL@GSM0_ACTION_TIP";
					case 9:
						return "GSM0_ACTION_TIP";
					case 10:
						return "SCRIPT_COMMON_SHERIFF_SIT_RELAX";
					default:
						break;
				}
			}
			break;
	}
	return "";
}

Vector3 func_233(var uParam0)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, "", 24);
	switch (uParam0->f_2)
	{
		case 76:
			StringCopy(&cVar0, "VAL_TAKEDOWN_SH", 24);
			break;
		case 5:
			StringCopy(&cVar0, "NBX_TAKE_LVE", 24);
			break;
		case 105:
			StringCopy(&cVar0, "", 24);
			break;
		case 38:
			StringCopy(&cVar0, "BLW_TAKE_LVE", 24);
			break;
		case 26:
			StringCopy(&cVar0, "STR_TAKE_LVE", 24);
			break;
		case 115:
			StringCopy(&cVar0, "TWD_TAKE_LVE", 24);
			break;
	}
	return cVar0;
}

int func_239(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		__LIB_11__::func_839(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			__LIB_1__::func_148(&(iParam1->f_13));
		}
		if (__LIB_13__::func_384(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_3__::func_374(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_239(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_2__::func_344(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							__LIB_1__::func_488(*uParam0, 1, 1);
						}
					}
					else if (__LIB_1__::func_489(iParam1, 22))
					{
						__LIB_1__::func_488(*uParam0, 0, 1);
					}
				}
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_375(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									__LIB_1__::func_490(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					__LIB_2__::func_361(iParam1, uParam3, fVar8);
					if (__LIB_2__::func_589(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (__LIB_11__::func_844(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_377(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_375(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
					}
					__LIB_1__::func_491(iParam1, 1);
				}
				__LIB_2__::func_361(iParam1, uParam3, fVar8);
				if (__LIB_11__::func_844(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			__LIB_2__::func_593(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

Vector3 func_240(int iParam0)
{
	vector3 vVar0[24];
	switch (iParam0)
	{
		case 26:
			StringCopy(&cVar0, "STR_", 24);
			break;
		case 76:
			StringCopy(&cVar0, "VAL_", 24);
			break;
		case 105:
			StringCopy(&cVar0, "RHO_", 24);
			break;
		case 5:
			StringCopy(&cVar0, "NBX_", 24);
			break;
		case 38:
			StringCopy(&cVar0, "BLW_", 24);
			break;
		case 115:
			StringCopy(&cVar0, "TWD_", 24);
			break;
		case 78:
			StringCopy(&cVar0, "ANS_", 24);
			break;
		default:
			StringCopy(&cVar0, "STR_", 24);
			break;
	}
	return cVar0;
}

Vector3 func_242(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	switch (*uParam0)
	{
		case 13:
			StringCopy(&cVar0, "RHO_RNCH_ILO_", 24);
			StringIntConCat(&cVar0, iParam1, 24);
			if (__LIB_0__::func_181())
			{
				StringConCat(&cVar0, "J", 24);
			}
			else
			{
				StringConCat(&cVar0, "A", 24);
			}
			break;
		case 154:
			StringCopy(&cVar0, "RBT12_CR_ILO_", 24);
			StringIntConCat(&cVar0, iParam1, 24);
			if (__LIB_0__::func_181())
			{
				StringConCat(&cVar0, "J", 24);
			}
			else
			{
				StringConCat(&cVar0, "A", 24);
			}
			break;
		case 15:
			if (iParam1 == 1)
			{
				if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "RHO_TG14_OUT_BJ", 24);
				}
				else
				{
					StringCopy(&cVar0, "RHO_TG14_OUT_B", 24);
				}
			}
			else if (__LIB_0__::func_181())
			{
				StringCopy(&cVar0, "RHO_TG14_OT_B2J", 24);
			}
			else
			{
				StringCopy(&cVar0, "RHO_TG14_OT_B2A", 24);
			}
			break;
	}
	return cVar0;
}

Vector3 func_243(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3[24];
	vVar0 = { func_240(uParam0->f_2) };
	cVar3.x = func_84(*uParam0);
	StringConCat(&vVar0, &cVar3, 24);
	StringConCat(&vVar0, "_Q", 24);
	StringIntConCat(&vVar0, iParam1, 24);
	if (func_364(*uParam0, iParam1, iParam2))
	{
		if (__LIB_0__::func_181())
		{
			StringConCat(&vVar0, "J", 24);
		}
		else
		{
			StringConCat(&vVar0, "A", 24);
		}
	}
	else
	{
		StringConCat(&vVar0, "S", 24);
	}
	StringIntConCat(&vVar0, iParam2, 24);
	return vVar0;
}

Vector3 func_244(var uParam0)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, "", 24);
	switch (uParam0->f_2)
	{
		case 76:
			StringCopy(&cVar0, "VAL_TAKEDOWN_", 24);
			break;
		case 5:
			StringCopy(&cVar0, "NBX_TAKEP_", 24);
			break;
		case 105:
			StringCopy(&cVar0, "RHO_TAKEP_", 24);
			break;
		case 38:
			StringCopy(&cVar0, "BLW_TAKEP_", 24);
			break;
		case 26:
			StringCopy(&cVar0, "STR_THANK_", 24);
			break;
		case 115:
			if (*uParam0 == 20)
			{
				if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "TWD_BDM_Q2J2", 24);
					return cVar0;
				}
				else
				{
					StringCopy(&cVar0, "TWD_BDM_Q2A2", 24);
					return cVar0;
				}
			}
			else
			{
				StringCopy(&cVar0, "TWD_TAKEP_", 24);
			}
			break;
	}
	if (__LIB_0__::func_181())
	{
		StringConCat(&cVar0, "J", 24);
	}
	else
	{
		StringConCat(&cVar0, "A", 24);
	}
	return cVar0;
}

Vector3 func_245(var uParam0, bool bParam1)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, "", 24);
	switch (uParam0->f_2)
	{
		case 76:
			StringCopy(&cVar0, "VAL_EXT_", 24);
			break;
		case 5:
			StringCopy(&cVar0, "NBX_EXT_", 24);
			break;
		case 105:
			StringCopy(&cVar0, "RHO_ALD_", 24);
			break;
		case 38:
			StringCopy(&cVar0, "BLW_TAKE_", 24);
			break;
		case 26:
			StringCopy(&cVar0, "STR_TAKE_", 24);
			break;
		case 115:
			if (*uParam0 == 20)
			{
				StringCopy(&cVar0, "TWD_BDM_SGL", 24);
				return cVar0;
			}
			else
			{
				StringCopy(&cVar0, "TWD_TAKE_", 24);
			}
			break;
	}
	switch (uParam0->f_2)
	{
		case 5:
		case 76:
			if (bParam1)
			{
				StringConCat(&cVar0, "A", 24);
			}
			else
			{
				StringConCat(&cVar0, "D", 24);
			}
			break;
		case 26:
		case 38:
		case 115:
			if (bParam1)
			{
				StringConCat(&cVar0, "ALVE", 24);
			}
			else
			{
				StringConCat(&cVar0, "DORA", 24);
			}
			break;
		case 105:
			if (bParam1)
			{
				StringConCat(&cVar0, "ALIVE", 24);
			}
			else
			{
				StringConCat(&cVar0, "DORA", 24);
			}
			break;
	}
	return cVar0;
}

int func_259(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_293(0, uParam0->f_2, 2, 0);
	if (__LIB_0__::func_181())
	{
		iVar1 = __LIB_5__::func_297(iVar0);
	}
	else
	{
		iVar1 = __LIB_0__::func_895(iVar0);
		if (uParam0->f_2 == 76)
		{
			iVar1++;
		}
	}
	if (iVar1 >= 1)
	{
		return 1;
	}
	return 0;
}

char* func_263(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 1:
			sVar0 = "VAL_Sheriff";
			break;
		case 3:
			sVar0 = "RHO_STATWRK";
			break;
		case 4:
			sVar0 = "SD_PoliceChief";
			break;
		case 2:
			sVar0 = "STR_Sheriff";
			break;
		case 5:
			sVar0 = "BLW_Police_Chief";
			break;
		case 6:
			sVar0 = "TWD_Sheriff";
			break;
	}
	return sVar0;
}

void func_271(var uParam0, var uParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	fVar0 = 0.7f;
	if (Local_136.f_2 == 38 || Local_136.f_2 == 76)
	{
		fVar0 = 1f;
	}
	iVar1 = __LIB_3__::func_547(uParam0->f_6, Global_35, fVar0);
	if (iVar1 == 0)
	{
		*uParam1 = 0;
		*uParam2 = 1;
	}
	else if (iVar1 == 3)
	{
		*uParam1 = 4;
		*uParam2 = 5;
	}
	else if (iVar1 == 1)
	{
		*uParam1 = 2;
		*uParam2 = 3;
	}
	else
	{
		*uParam1 = 6;
		*uParam2 = 7;
	}
}

struct<4> func_273(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 76:
			Var0 = { -275.23f, 801.13f, 118.39f };
			Var0.f_3 = 22.69f;
			break;
		case 26:
			Var0 = { -1805.57f, -351.47f, 163.13f };
			Var0.f_3 = 55.93f;
			break;
		case 5:
			Var0 = { 2507.44f, -1315.83f, 47.95f };
			Var0.f_3 = -13.52f;
			break;
		case 38:
			Var0 = { -756.04f, -1269.03f, 43.03f };
			Var0.f_3 = 89.32f;
			break;
		case 115:
			Var0 = { -5527.88f, -2931.45f, -2.37f };
			Var0.f_3 = 21.53f;
			break;
	}
	return Var0;
}

void func_274(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_377(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

Vector3 func_275(var uParam0)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, "", 24);
	switch (*uParam0)
	{
		case 20:
			StringCopy(&cVar0, "TWD_TG23_GREET", 24);
			break;
	}
	return cVar0;
}

Vector3 func_276(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return -276.86f, 805.53f, 118.38f;
		case 26:
			return -1809.47f, -349.04f, 163.65f;
		case 5:
			return 2510.14f, -1308.79f, 47.95f;
		case 38:
			return -759.9f, -1268.74f, 43.04f;
		case 115:
			return -5531.46f, -2925.73f, -2.36f;
	}
	return 0f, 0f, 0f;
}

bool func_364(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 14:
			if (iParam2 == 1)
			{
				return true;
			}
			break;
		case 11:
		case 153:
			if (iParam2 == 1 || iParam2 == 3)
			{
				return true;
			}
			break;
		case 13:
		case 15:
		case 154:
			switch (iParam1)
			{
				case 1:
					if (iParam2 == 1)
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				case 2:
					if (iParam2 == 1 || iParam2 == 3)
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
			}
			break;
		case 12:
		case 16:
			switch (iParam1)
			{
				case 1:
					if (iParam2 == 1)
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				case 2:
					return true;
			}
			break;
		case 17:
		case 18:
		case 155:
			return true;
		case 19:
			if (iParam2 == 1 || iParam2 == 3)
			{
				return true;
			}
			break;
		case 20:
			if (iParam2 == 1 || iParam2 == 3)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_377(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == __LIB_0__::func_57(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (__LIB_0__::func_125(iParam0))
	{
		if (__LIB_0__::func_126(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (__LIB_0__::func_27(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_377(iVar0, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_377(iVar2, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
	}
	if (!__LIB_0__::func_27(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (__LIB_0__::func_27(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (__LIB_0__::func_27(iParam5, 129))
	{
		if (__LIB_0__::func_27(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, __LIB_0__::func_27(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (__LIB_0__::func_125(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!__LIB_0__::func_27(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !__LIB_0__::func_27(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

