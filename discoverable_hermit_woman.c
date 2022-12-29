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
	struct<177> Local_14 = { 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_191 = 0;
	int iLocal_192 = 0;
	var uLocal_193 = 0;
	struct<5> Local_194 = { 0, 0, 0, 0, -1 } ;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = -1;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 2;
	var uLocal_219 = 1;
	var uLocal_220 = 1;
	var uLocal_221 = 1;
	var uLocal_222 = 0;
	var uLocal_223 = 1;
	var uLocal_224 = 2;
	var uLocal_225 = 2;
	var uLocal_226 = 3;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 3;
	var uLocal_230 = 1;
	var uLocal_231 = 3;
	var uLocal_232 = 3;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_193 = ScriptParam_0;
	Local_194.f_1 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&Local_194);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_1(&Local_194);
	}
	while (__LIB_7__::func_453())
	{
		switch (iLocal_192)
		{
			case 0:
				if (func_3(&Local_194))
				{
					iLocal_192 = 1;
					if (Local_194.f_4 != -1)
					{
					}
					else
					{
						Local_194.f_4 = func_4(&Local_194);
					}
				}
				break;
			case 1:
				if (func_5(&Local_194))
				{
					func_6(&Local_194);
				}
				func_7(&Local_194);
				func_8(&Local_194);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_194);
}

void func_1(var uParam0)
{
	func_9(uParam0);
	SCRIPTS::_0xE7282390542F570D(uLocal_193);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3(var uParam0)
{
	int iVar0;
	if (Local_194 == 0)
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_1);
		Local_194 = __LIB_7__::func_454(iVar0);
		return false;
	}
	if (__LIB_7__::func_497(Local_194, 4) || Global_40.f_8863.f_156)
	{
		func_1(uParam0);
		return false;
	}
	__LIB_7__::func_488(uParam0);
	return true;
}

int func_4(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	iVar2 = -1;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (*uParam0 == -544327665)
	{
		iVar1 = 3;
	}
	else if (*uParam0 == 1120968795)
	{
		iVar1 = 2;
	}
	else if (*uParam0 == -834293086)
	{
		iVar1 = 10;
	}
	else if (*uParam0 == 1519472817)
	{
		iVar1 = 2;
	}
	else if (*uParam0 == -1859023693)
	{
		iVar1 = 11;
	}
	else if (*uParam0 == 2000209669)
	{
		iVar1 = 12;
	}
	else if (*uParam0 == -1761578407)
	{
		iVar1 = 11;
	}
	else if (*uParam0 == -1243267511)
	{
		iVar1 = 5;
	}
	else if (*uParam0 == -1272862985)
	{
		iVar1 = 4;
	}
	else if (*uParam0 == 1535254161)
	{
		iVar1 = 4;
	}
	else if (*uParam0 == 870958936)
	{
		iVar1 = 5;
	}
	else if (*uParam0 == 513110082)
	{
		iVar1 = 3;
	}
	else if (*uParam0 == -321841939)
	{
		iVar1 = 20;
	}
	else if (*uParam0 == -890175011)
	{
		iVar1 = 5;
	}
	else if (*uParam0 == 677950956)
	{
		iVar1 = 6;
	}
	else if (*uParam0 == 503180747)
	{
		iVar1 = 2;
	}
	else
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (iVar2 == -1)
		{
			iVar2 = iVar0;
			fVar3 = __LIB_0__::func_94(Global_35, func_13(uParam0, iVar0), 1);
		}
		else if (fVar3 > __LIB_0__::func_94(Global_35, func_13(uParam0, iVar0), 1))
		{
			iVar2 = iVar0;
			fVar3 = __LIB_0__::func_94(Global_35, func_13(uParam0, iVar0), 1);
		}
		iVar0++;
	}
	return iVar2;
}

bool func_5(var uParam0)
{
	switch (*uParam0)
	{
		case -2009137002:
		case -1960242214:
		case -1958832660:
		case -1891628345:
		case -1887999095:
		case -1787770845:
		case -1761578407:
		case -1761189332:
		case -1646022773:
		case -1636964661:
		case -1614148516:
		case -1609238411:
		case -1505275983:
		case -1300082860:
		case -1287911066:
		case -1272862985:
		case -1243267511:
		case -1109016944:
		case -1053108445:
		case -986176781:
		case -979575591:
		case -890175011:
		case -849582265:
		case -780455182:
		case -739986731:
		case -709811179:
		case -607940493:
		case -415839138:
		case -321841939:
		case -232974724:
		case -161804536:
		case -148407339:
		case 58958195:
		case 247563739:
		case 308500632:
		case 373034311:
		case 404434344:
		case 429544447:
		case 657666087:
		case 921081956:
		case 1034793488:
		case 1284679164:
		case 1519228573:
		case 1535254161:
		case 1673499939:
		case 1734766691:
		case 1982045664:
		case 1986618633:
		case 2000209669:
		case 2134589549:
			return true;
		case 677950956:
			if (func_15())
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 1861313914:
			if (__LIB_2__::func_410(59))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

void func_6(var uParam0)
{
	if (uParam0->f_5 > 0 && uParam0->f_5 < 7)
	{
		if (!__LIB_7__::func_580(uParam0))
		{
			__LIB_7__::func_590(uParam0);
			__LIB_0__::func_615(uParam0, 0);
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			if (!__LIB_7__::func_580(uParam0))
			{
				return;
			}
			if ((*uParam0 == -890175011 || *uParam0 == 677950956) || *uParam0 == -321841939)
			{
				if (__LIB_7__::func_581(uParam0))
				{
					__LIB_0__::func_615(uParam0, 7);
				}
			}
			func_21(uParam0);
			if (__LIB_0__::func_86(uParam0->f_6.f_2))
			{
				__LIB_0__::func_615(uParam0, 7);
				return;
			}
			__LIB_0__::func_615(uParam0, 1);
			break;
		case 1:
			if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) <= uParam0->f_6)
			{
				__LIB_0__::func_37(&(uParam0->f_6.f_5));
				if ((((__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16)) || *uParam0 == -890175011) || *uParam0 == 677950956) || (*uParam0 == -1761578407 && __LIB_7__::func_581(uParam0)))
				{
					__LIB_0__::func_615(uParam0, 3);
				}
				else
				{
					__LIB_0__::func_615(uParam0, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_75(&(uParam0->f_6.f_5)))
			{
				PAD::SET_PAD_SHAKE(0, 150, 100);
				__LIB_1__::func_148(&(uParam0->f_6.f_5));
			}
			else if (__LIB_1__::func_871(&(uParam0->f_6.f_5)) > 300)
			{
				PAD::SET_PAD_SHAKE(0, 150, 100);
				__LIB_0__::func_615(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				__LIB_7__::func_590(uParam0);
				__LIB_0__::func_615(uParam0, 1);
			}
			else if (__LIB_7__::func_559(uParam0, 0))
			{
				__LIB_7__::func_591(uParam0);
				if ((__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16)) || (*uParam0 == -1761578407 && __LIB_7__::func_581(uParam0)))
				{
					__LIB_0__::func_615(uParam0, 6);
				}
				else
				{
					__LIB_0__::func_615(uParam0, 4);
				}
			}
			break;
		case 4:
			__LIB_7__::func_571(uParam0, uParam0->f_6.f_8, __LIB_7__::func_592(uParam0), 0);
			if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				__LIB_7__::func_590(uParam0);
				__LIB_0__::func_615(uParam0, 1);
			}
			else if (__LIB_7__::func_559(uParam0, 1))
			{
				__LIB_7__::func_590(uParam0);
				__LIB_0__::func_615(uParam0, 3);
			}
			else if (__LIB_7__::func_475(uParam0))
			{
				if (!__LIB_7__::func_497(*uParam0, 16))
				{
					__LIB_7__::func_498(*uParam0, 16);
					if (__LIB_0__::func_139(uParam0->f_6.f_8))
					{
						__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
					}
					func_35(uParam0);
					func_36(uParam0, 1);
					if (!*uParam0 == -321841939)
					{
						func_37(1, -1);
					}
				}
				else if (__LIB_0__::func_139(uParam0->f_6.f_8))
				{
					__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
				}
				__LIB_1__::func_148(&(uParam0->f_6.f_5));
				__LIB_0__::func_615(uParam0, 5);
			}
			else if (__LIB_0__::func_486(uParam0->f_6.f_8, 1) > 0f)
			{
				if (!__LIB_7__::func_497(*uParam0, 16))
				{
					if (!__LIB_0__::func_27(uParam0->f_3, 2))
					{
						__LIB_1__::func_581(&(uParam0->f_3), 2);
						if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
						{
							func_41(uParam0);
						}
					}
					if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
					{
						CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
						__LIB_7__::func_455(uParam0);
					}
				}
			}
			else if (__LIB_0__::func_27(uParam0->f_3, 2))
			{
				__LIB_1__::func_993(&(uParam0->f_3), 2);
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
					}
				}
			}
			break;
		case 5:
			if (*uParam0 == -890175011 || *uParam0 == 677950956)
			{
				CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
			}
			__LIB_7__::func_571(uParam0, uParam0->f_6.f_8, __LIB_7__::func_592(uParam0), 0);
			if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
			{
				__LIB_7__::func_455(uParam0);
			}
			if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				__LIB_7__::func_590(uParam0);
				__LIB_0__::func_615(uParam0, 1);
			}
			else if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CONTEXT_Y")))
			{
			}
			else if (__LIB_1__::func_871(&(uParam0->f_6.f_5)) >= 2000)
			{
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
					}
				}
				if (__LIB_0__::func_27(uParam0->f_3, 2))
				{
					__LIB_1__::func_993(&(uParam0->f_3), 2);
				}
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					__LIB_7__::func_456(uParam0);
				}
				if ((*uParam0 == -890175011 || *uParam0 == 677950956) || *uParam0 == -321841939)
				{
					__LIB_7__::func_590(uParam0);
					__LIB_0__::func_615(uParam0, 7);
				}
				else
				{
					__LIB_0__::func_615(uParam0, 6);
				}
			}
			break;
		case 6:
			__LIB_7__::func_571(uParam0, uParam0->f_6.f_8, __LIB_7__::func_592(uParam0), 0);
			if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				__LIB_7__::func_590(uParam0);
				__LIB_0__::func_615(uParam0, 1);
			}
			else if (__LIB_7__::func_559(uParam0, 1))
			{
				__LIB_7__::func_590(uParam0);
				__LIB_0__::func_615(uParam0, 3);
			}
			break;
		case 7:
			break;
	}
}

void func_7(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_27(uParam0->f_3, 8))
	{
		if (__LIB_7__::func_457(*uParam0) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2))
		{
			if (__LIB_7__::func_489(&(uParam0->f_2)))
			{
				iVar0 = 3;
				if (*uParam0 == -849582265 && Global_40.f_11953)
				{
					iVar0 = 4;
				}
				func_47(iVar0, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				__LIB_1__::func_581(&(uParam0->f_3), 8);
				if (*uParam0 == -849582265)
				{
					Global_40.f_11953 = 1;
				}
			}
		}
	}
}

void func_8(var uParam0)
{
	vector3 vVar0;
	switch (Local_14)
	{
		case 0:
			if (__LIB_0__::func_27(uParam0->f_3, 1))
			{
				__LIB_1__::func_993(&(uParam0->f_3), 1);
			}
			if (__LIB_7__::func_530(func_48()))
			{
				__LIB_1__::func_649(&Local_14, 6);
				return;
			}
			if (!func_51(uParam0))
			{
				return;
			}
			Local_14.f_135 = "HRM1AUD";
			PED::_0xF008E0BA1FE1D644(4);
			if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
			{
				vVar0 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1, true) };
			}
			AUDIO::SET_AMBIENT_ZONE_STATE(__LIB_7__::func_577(uParam0), true, true);
			AUDIO::_0x3743CE6948194349(__LIB_7__::func_577(uParam0), vVar0, 0f);
			if (__LIB_0__::func_30(joaat("DOOR_BUT_SHACK_FRONT")))
			{
				__LIB_1__::func_948(joaat("DOOR_BUT_SHACK_FRONT"), 0, 0f, 0, 0, 0, 1, 0);
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_155, 256))
			{
				if (!__LIB_0__::func_27(uParam0->f_3, 1))
				{
					__LIB_1__::func_581(&(uParam0->f_3), 1);
				}
				__LIB_1__::func_649(&Local_14, 5);
			}
			else
			{
				__LIB_1__::func_649(&Local_14, 1);
			}
			break;
		case 1:
			if (PED::_0x5C16855277819BBF() != 4)
			{
				return;
			}
			if (!func_55(&Local_14))
			{
				return;
			}
			__LIB_1__::func_649(&Local_14, 2);
			break;
		case 2:
			if (!__LIB_7__::func_586(&(Local_14.f_28), &(Local_14.f_29), func_56(), func_57(0), 1, 64))
			{
				return;
			}
			if (!func_59(&Local_14))
			{
				return;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_14.f_135))
			{
				if (HUD::_DOES_TEXT_DATABASE_EXIST(Local_14.f_135))
				{
					HUD::_TEXT_DATABASE_REQUEST(Local_14.f_135);
				}
			}
			func_60(&Local_14);
			if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_10[0]))
			{
				AUDIO::STOP_PED_SPEAKING(Local_14.f_10[0], true);
				__LIB_0__::func_928(&(Local_14.f_37), Local_14.f_10[0], func_61(), 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_10[0], true);
			}
			WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 0);
			__LIB_1__::func_649(&Local_14, 3);
			break;
		case 3:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_28))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_28, func_63(), Local_14.f_10[0], 0);
				ANIMSCENE::START_ANIM_SCENE(Local_14.f_28);
			}
			func_64(&Local_14);
			__LIB_1__::func_649(&Local_14, 4);
			break;
		case 4:
			if (!func_51(uParam0))
			{
				__LIB_1__::func_649(&Local_14, 6);
			}
			if (!__LIB_0__::func_27(Local_14.f_176, 64))
			{
				if (func_65(&Local_14) || __LIB_1__::func_205(Global_35, Local_14.f_20[1], 1, 0))
				{
					__LIB_1__::func_581(&(Local_14.f_176), 64);
				}
			}
			if (!__LIB_0__::func_27(Local_14.f_176, 64) && !__LIB_0__::func_27(Local_14.f_176, 32))
			{
				func_68(Global_35, func_67(8), 0, 1112014848 /* Float: 50f */, 30f, 25f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			}
			func_69(&Local_14);
			func_70(&Local_14);
			if (func_71(&Local_14) <= 0)
			{
				__LIB_1__::func_581(&(uParam0->f_3), 1);
				__LIB_1__::func_649(&Local_14, 5);
			}
			break;
		case 5:
			if (__LIB_7__::func_497(*uParam0, 16))
			{
				func_72(uParam0);
				__LIB_1__::func_649(&Local_14, 6);
			}
			break;
		case 6:
			break;
	}
}

void func_9(var uParam0)
{
	int iVar0;
	AUDIO::SET_AMBIENT_ZONE_STATE(__LIB_7__::func_577(uParam0), false, true);
	EVENT::REMOVE_SHOCKING_EVENT(Local_14.f_173);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_73(&(Local_14.f_10[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		__LIB_7__::func_458(&(Local_14.f_20[iVar0]));
		iVar0++;
	}
}

Vector3 func_13(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -544327665:
			if (iParam1 == 0)
			{
				return 500.882f, 80.003f, 139.28f;
			}
			else if (iParam1 == 1)
			{
				return 759.079f, -1133.282f, 55.059f;
			}
			else if (iParam1 == 2)
			{
				return -3667.897f, -2805.515f, -7.129f;
			}
			break;
		case 1120968795:
			if (iParam1 == 0)
			{
				return -1521.811f, 519.1222f, 101.6756f;
			}
			else if (iParam1 == 1)
			{
				return 2417.936f, 853.4788f, 72.5143f;
			}
			break;
		case -834293086:
			if (iParam1 == 0)
			{
				return 1747.022f, -267.8047f, 73.0826f;
			}
			else if (iParam1 == 1)
			{
				return 1978.289f, -60.4567f, 59.4946f;
			}
			else if (iParam1 == 2)
			{
				return 640.8188f, -1062.613f, 48.0237f;
			}
			else if (iParam1 == 3)
			{
				return 839.6257f, -1174.002f, 54.9616f;
			}
			else if (iParam1 == 4)
			{
				return 1917.611f, 10.6206f, 77.6881f;
			}
			else if (iParam1 == 5)
			{
				return -85.5144f, 76.4358f, 93.2066f;
			}
			else if (iParam1 == 6)
			{
				return 76.4646f, 854.9302f, 207.8816f;
			}
			else if (iParam1 == 7)
			{
				return 1871.215f, 643.5952f, 119.9651f;
			}
			else if (iParam1 == 8)
			{
				return 2572.759f, 690.9401f, 83.9642f;
			}
			else if (iParam1 == 9)
			{
				return 2264.918f, 934.7651f, 81.1843f;
			}
			break;
		case -1859023693:
			if (iParam1 == 0)
			{
				return 525.7659f, 373.9645f, 107.9581f;
			}
			else if (iParam1 == 1)
			{
				return 610.1569f, -142.2089f, 146.4651f;
			}
			else if (iParam1 == 2)
			{
				return 1253.233f, 40.0713f, 94.2498f;
			}
			else if (iParam1 == 3)
			{
				return 886.287f, 470.977f, 103.937f;
			}
			else if (iParam1 == 4)
			{
				return 370.7786f, 1072.15f, 190.1675f;
			}
			else if (iParam1 == 5)
			{
				return -3575.866f, -2199.067f, -13.415f;
			}
			else if (iParam1 == 6)
			{
				return -5159.03f, -3162.67f, -18.5954f;
			}
			else if (iParam1 == 7)
			{
				return -3970.804f, -3027.692f, -12.9605f;
			}
			else if (iParam1 == 8)
			{
				return -3242.678f, -3077.875f, -0.5597f;
			}
			else if (iParam1 == 9)
			{
				return -3686.284f, -3258.813f, -4.4117f;
			}
			else if (iParam1 == 10)
			{
				return 795.2883f, 1013.304f, 118.3968f;
			}
			break;
		case 1519472817:
			if (iParam1 == 0)
			{
				return -2519.475f, 820.6946f, 146.4494f;
			}
			else if (iParam1 == 1)
			{
				return -1349.727f, -923.9958f, 69.342f;
			}
			break;
		case 2000209669:
			return __LIB_7__::func_460(uParam0, iParam1);
		case -1761578407:
		case 404434344:
			if (iParam1 == 9)
			{
				return -762.4968f, -1910.661f, 50.4933f;
			}
			else if (iParam1 == 10)
			{
				return -1738.282f, -995.4295f, 113.6716f;
			}
			else
			{
				return func_78(uParam0, iParam1);
			}
			break;
		case 870958936:
			return func_79(uParam0, iParam1);
		case 513110082:
			if (iParam1 == 0)
			{
				return -2531.5f, 1174.4f, 225.9f;
			}
			else if (iParam1 == 1)
			{
				return 3026.4f, 1778f, 84.2f;
			}
			else if (iParam1 == 2)
			{
				return -4389.58f, -2166.55f, 50.81f;
			}
			break;
		case 503180747:
			if (iParam1 == 0)
			{
				return 2325.978f, 1070.32f, 44.9401f;
			}
			else if (iParam1 == 1)
			{
				return -2698.656f, 697.2829f, 162.889f;
			}
			break;
		case 1535254161:
			return func_78(uParam0, iParam1);
		case -1272862985:
			return func_78(uParam0, iParam1);
		case -1243267511:
			return func_78(uParam0, iParam1);
		case -321841939:
			return func_78(uParam0, iParam1);
		case -890175011:
			return func_78(uParam0, iParam1);
		case 677950956:
			return func_78(uParam0, iParam1);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_15()
{
	if (func_80() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_21(var uParam0)
{
	uParam0->f_6.f_2 = { func_78(uParam0, uParam0->f_4) };
	uParam0->f_6.f_1 = 5f;
	uParam0->f_6 = 10f;
	switch (*uParam0)
	{
		case 1535254161:
			uParam0->f_6 = 20f;
			uParam0->f_6.f_1 = 10f;
			__LIB_7__::func_491(uParam0);
			break;
		case -1958832660:
		case -1109016944:
			uParam0->f_6 = 48f;
			uParam0->f_6.f_1 = 24f;
			break;
		case -1960242214:
		case -1300082860:
		case -161804536:
		case 657666087:
		case 1673499939:
		case 1734766691:
			uParam0->f_6 = 30f;
			uParam0->f_6.f_1 = 15f;
			break;
		case -1891628345:
		case -986176781:
		case -849582265:
		case 247563739:
		case 1982045664:
		case 1986618633:
			uParam0->f_6 = 20f;
			uParam0->f_6.f_1 = 10f;
			break;
		case -1646022773:
		case 1284679164:
		case 2000209669:
			uParam0->f_6 = 6f;
			uParam0->f_6.f_1 = 3f;
			break;
		case -1614148516:
			uParam0->f_6 = 3f;
			uParam0->f_6.f_1 = 1.5f;
			break;
		case -1243267511:
			uParam0->f_6 = 10f;
			__LIB_7__::func_491(uParam0);
			break;
		case -607940493:
			uParam0->f_6 = 30f;
			__LIB_7__::func_491(uParam0);
			break;
		case -321841939:
			uParam0->f_6 = 10f;
			break;
		case -1761578407:
		case 404434344:
			uParam0->f_6 = 10f;
			__LIB_7__::func_491(uParam0);
			break;
		case -890175011:
			uParam0->f_6 = 3f;
			uParam0->f_6.f_1 = 1.5f;
			if (((uParam0->f_4 == 0 || uParam0->f_4 == 1) || uParam0->f_4 == 3) || uParam0->f_4 == 4)
			{
				__LIB_7__::func_491(uParam0);
			}
			break;
		case 677950956:
			uParam0->f_6 = 6f;
			uParam0->f_6.f_1 = 3f;
			if (uParam0->f_4 == 1 || uParam0->f_4 == 5)
			{
				__LIB_7__::func_491(uParam0);
			}
			break;
		default:
			uParam0->f_6 = 10f;
			uParam0->f_6.f_1 = 5f;
			break;
	}
}

void func_35(var uParam0)
{
	if (func_80() != -1)
	{
		return;
	}
	if (*uParam0 == -321841939)
	{
		if (__LIB_7__::func_461(uParam0->f_4) != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(uParam0->f_4))
			{
				MAP::_0xD8C7162AB2E2AF45(__LIB_7__::func_461(uParam0->f_4));
			}
			__LIB_7__::func_498(*uParam0, 8);
		}
	}
	else
	{
		if (__LIB_7__::func_462(*uParam0, uParam0->f_4) != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(__LIB_7__::func_462(*uParam0, uParam0->f_4)))
			{
				MAP::_0xD8C7162AB2E2AF45(__LIB_7__::func_462(*uParam0, uParam0->f_4));
			}
			__LIB_7__::func_498(*uParam0, 8);
		}
		func_99(uParam0);
	}
}

void func_36(var uParam0, bool bParam1)
{
	int iVar0;
	if (*uParam0 == -321841939)
	{
		if (bParam1)
		{
			if (__LIB_7__::func_582() < (20 - 1))
			{
				return;
			}
		}
		else if (!__LIB_7__::func_583())
		{
			return;
		}
	}
	if (bParam1)
	{
		iVar0 = __LIB_7__::func_463(*uParam0, func_102(), uParam0->f_4);
	}
	else
	{
		iVar0 = __LIB_7__::func_487(*uParam0, uParam0->f_4);
	}
	if (iVar0 != 0)
	{
		if (bParam1)
		{
			__LIB_1__::func_33(iVar0, 0);
			if (*uParam0 == -890175011)
			{
				if (__LIB_7__::func_578() == (5 - 1))
				{
					if (func_102())
					{
						__LIB_1__::func_33(joaat("JOURNAL_TOWN_SECRET_VAMPMAP_AR"), 0);
						iVar0 = joaat("JOURNAL_TOWN_SECRET_VAMPMAP_AR");
					}
					else
					{
						__LIB_1__::func_33(joaat("JOURNAL_TOWN_SECRET_VAMPMAP_JN"), 0);
						iVar0 = joaat("JOURNAL_TOWN_SECRET_VAMPMAP_JN");
					}
				}
			}
		}
		if (func_107())
		{
			Global_1357518 = iVar0;
			if (bParam1 == 1)
			{
				Global_1357519 = { uParam0->f_6.f_2 };
			}
		}
	}
}

void func_37(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		__LIB_0__::func_47(&Global_0, 8);
	}
	if (!__LIB_0__::func_28() || func_80() != -1)
	{
		return;
	}
	__LIB_0__::func_47(&Global_0, 1);
}

void func_41(var uParam0)
{
	uParam0->f_6.f_10.f_21 = 4;
	uParam0->f_6.f_10.f_17 = 4;
	uParam0->f_6.f_10.f_18 = 1;
	uParam0->f_6.f_10.f_23 = 2;
	uParam0->f_6.f_10.f_24 = 2;
	uParam0->f_6.f_10 = { func_78(uParam0, uParam0->f_4) };
}

void func_47(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_80() != -1)
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
		func_116(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_116(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_48()
{
	return 1982045664;
}

bool func_51(var uParam0)
{
	switch (*uParam0)
	{
		case 404434344:
			if (!__LIB_7__::func_483() && !__LIB_7__::func_484())
			{
				if (!__LIB_7__::func_483())
				{
				}
				if (!__LIB_7__::func_484())
				{
				}
				return false;
			}
			else if (__LIB_2__::func_774(77))
			{
				return false;
			}
			else if (__LIB_7__::func_511() != 0)
			{
				return false;
			}
			break;
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				if (!__LIB_7__::func_483() && !__LIB_7__::func_484())
				{
					if (!__LIB_7__::func_483())
					{
					}
					if (!__LIB_7__::func_484())
					{
					}
					return false;
				}
			}
			else if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				if (!__LIB_0__::func_898(8924991) && !__LIB_0__::func_898(665676602))
				{
					if (!__LIB_0__::func_898(8924991))
					{
					}
					if (!__LIB_0__::func_898(665676602))
					{
					}
					return false;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (!__LIB_0__::func_898(1488286867))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (!__LIB_0__::func_898(651395116))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (!__LIB_0__::func_898(-1241340344))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (!__LIB_0__::func_898(409602249))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 5)
			{
			}
			else if (uParam0->f_4 == 1)
			{
			}
			break;
		case -2108030724:
			if (!__LIB_2__::func_410(26))
			{
				return false;
			}
			break;
		case -1887999095:
			if (!__LIB_2__::func_410(21))
			{
				return false;
			}
			break;
		case -1240932004:
			if (!__LIB_2__::func_410(77))
			{
				return false;
			}
			break;
		case 118535038:
			if (!__LIB_2__::func_410(12))
			{
				return false;
			}
			break;
		case -2008558277:
			if (func_123(19))
			{
				return false;
			}
			break;
		case 221420861:
			if (func_123(29))
			{
				return false;
			}
			break;
		case -1308658310:
			if (func_123(11))
			{
				return false;
			}
			break;
		case 308500632:
			if (!Global_40.f_11623[20 /*8*/] > 0)
			{
				return false;
			}
			break;
		case 1861313914:
			if (__LIB_2__::func_774(19) || func_123(4))
			{
				return false;
			}
			break;
		case 1982045664:
			if (__LIB_2__::func_774(66))
			{
				return false;
			}
			break;
		case 677950956:
			if (!func_15())
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_55(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (!__LIB_7__::func_584(&(iParam0->f_10[iVar0]), func_131(iVar1), func_132(iVar1), func_133(iVar1), 1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

char[] func_56()
{
	return "script@ambient@discoverables@hermit_woman@main";
}

char* func_57(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_BASE";
		case 1:
			return "PBL_ACTION_01_F";
		case 2:
			return "PBL_ACTION_01_L";
		case 3:
			return "PBL_ACTION_01_R";
		case 4:
			return "PBL_ACTION_02_F";
		case 5:
			return "PBL_ACTION_02_L";
		case 6:
			return "PBL_ACTION_02_R";
		case 7:
			return "PBL_ATTK_01";
		case 8:
			return "PBL_ATTK_02";
		case 9:
			return "PBL_BRKOUT";
		case 10:
			return "PBL_DIA_01";
		case 11:
			return "PBL_DIA_02";
		case 12:
			return "PBL_DIA_03";
		default:
			break;
	}
	return "FAIL -- 1 HERMIT_WOMAN_PLAYLISTS : playlist was not added";
}

bool func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_20[iVar0]))
		{
			iVar1 = iVar0;
			Var2 = { func_135(iVar1) };
			iParam0->f_20[iVar0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var2, Var2.f_1, Var2.f_4, Var2.f_7, Var2.f_10);
		}
		iVar0++;
	}
	return true;
}

void func_60(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_136(&(iParam0->f_10), iVar0);
		iVar0++;
	}
}

char* func_61()
{
	return "FUD1_WOMAN";
}

char* func_63()
{
	return "hermit";
}

int func_64(int iParam0)
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		func_138(iParam0, iVar0);
		iVar0++;
	}
	return 1;
}

bool func_65(int iParam0)
{
	int iVar0;
	__LIB_4__::func_228(&(iParam0->f_136));
	__LIB_1__::func_401(&(iParam0->f_136), 1);
	__LIB_2__::func_828(&(iParam0->f_136), 1);
	__LIB_2__::func_829(&(iParam0->f_136), 1);
	__LIB_2__::func_830(&(iParam0->f_136), 1);
	__LIB_1__::func_402(&(iParam0->f_136), 1);
	__LIB_1__::func_413(&(iParam0->f_136), 1);
	__LIB_1__::func_404(&(iParam0->f_136), 1);
	__LIB_2__::func_828(&(iParam0->f_136), 1);
	__LIB_1__::func_975(&(iParam0->f_136), 50f);
	__LIB_3__::func_407(&(iParam0->f_136), 100f);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_10[iVar0]))
		{
			if (func_149(iParam0->f_10[iVar0], 0, &(iParam0->f_136), &(iParam0->f_164), 0, 0))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2537.489f, 1168.337f, 224.0664f;
		case 1:
			return -2538.116f, 1169.531f, 224.2288f;
		case 2:
			return -2540.338f, 1164.952f, 223.3635f;
		case 3:
			return -2535.637f, 1164.962f, 223.6062f;
		case 4:
			return -2541.5f, 1171.283f, 224.5294f;
		case 5:
			return -2538.79f, 1172.847f, 224.7284f;
		case 6:
			return -2531.536f, 1166.387f, 224.0104f;
		case 7:
			return -2532.196f, 1169.136f, 224.2664f;
		case 8:
			return -2533.884f, 1171.963f, 224.8949f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_68(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_138(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar3 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if ((func_151() && !ENTITY::IS_ENTITY_DEAD(iVar1)) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
			if (iParam9 == 1)
			{
				if (PED::_0x33FA048675821DA7(iVar0, 3))
				{
					PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1f);
					if (iParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (PED::_0x33FA048675821DA7(iVar0, 3))
							{
								PED::_0x06D26A96CA1BCA75(iVar2, 3, 0f, 0);
							}
						}
					}
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !__LIB_0__::func_491(iParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_0__::func_491(iParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, iParam12);
			}
		}
	}
}

int func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		switch (iParam0->f_5[iVar0])
		{
			case 0:
				__LIB_0__::func_19(&(iParam0->f_5[iVar0]), 1, iVar0);
				break;
			case 1:
				if (__LIB_0__::func_27(iParam0->f_176, 32) || __LIB_0__::func_27(iParam0->f_176, 64))
				{
					PED::_0xF1C03A5352243A30(iParam0->f_10[iVar0]);
					__LIB_0__::func_19(&(iParam0->f_5[iVar0]), 6, iVar0);
				}
				if (__LIB_1__::func_205(Global_35, iParam0->f_20[func_154(iVar0)], 1, 0) && iParam0->f_30 == 0)
				{
					iParam0->f_3 = func_155(func_154(iVar0));
					Local_14.f_30 = iVar0;
					PED::_0xA3A9299C4F2ADB98(iParam0->f_10[iVar0]);
					TASK::TASK_STAND_STILL(iParam0->f_10[iVar0], -1);
					__LIB_0__::func_19(&(iParam0->f_5[iVar0]), 2, iVar0);
				}
				break;
			case 2:
				if (__LIB_0__::func_163(iParam0->f_10[iVar0], -982327190))
				{
					iVar1 = func_157(iVar0);
					func_158(&(iParam0->f_10[iVar0]), 5, iVar1, 1065353216 /* Float: 1f */);
					__LIB_0__::func_19(&(iParam0->f_5[iVar0]), 4, iVar0);
				}
				break;
			case 3:
				break;
			case 4:
				if (!__LIB_0__::func_27(iParam0->f_176, 16))
				{
					if (__LIB_3__::func_138(iParam0->f_10[iVar0], MISC::GET_HASH_KEY(func_159(5))))
					{
						if (!__LIB_0__::func_75(&(iParam0->f_31)))
						{
							__LIB_1__::func_148(&(iParam0->f_31));
						}
						else if (__LIB_0__::func_265(&(iParam0->f_31)) > 3f)
						{
							__LIB_1__::func_581(&(iParam0->f_176), 16);
						}
					}
				}
				if (__LIB_0__::func_27(iParam0->f_176, 32) || __LIB_0__::func_27(iParam0->f_176, 64))
				{
					__LIB_0__::func_19(&(iParam0->f_5[iVar0]), 6, iVar0);
				}
				break;
			case 5:
				break;
			case 6:
				if (!Local_14.f_175)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_10[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_10[iVar0]))
					{
						Local_14.f_175 = 1;
						Local_14.f_173 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), ENTITY::GET_ENTITY_COORDS(Local_14.f_10[iVar0], true, false), -1f, -1f, -1f, -1f, -1f, 3, 2);
						if (ENTITY::DOES_ENTITY_EXIST(PED::GET_MOUNT(Global_35)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(Global_35)))
						{
							PED::_0x23BDE06596A22CEC(PED::GET_MOUNT(Global_35), 1, 0.15f, Local_14.f_10[iVar0]);
						}
						PED::_0x23BDE06596A22CEC(Global_35, 1, 1f, Local_14.f_10[iVar0]);
					}
				}
				func_162(iParam0, iVar0);
				__LIB_0__::func_19(&(iParam0->f_5[iVar0]), 7, iVar0);
				break;
			case 7:
				if (ENTITY::IS_ENTITY_DEAD(iParam0->f_10[iVar0]) || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_10[iVar0]))
				{
					__LIB_0__::func_19(&(iParam0->f_5[iVar0]), 8, iVar0);
				}
				break;
			case 8:
				break;
		}
		iVar0++;
	}
	return 0;
}

int func_70(int iParam0)
{
	float fVar0;
	if ((iParam0->f_2 < 6 && iParam0->f_2 > 2) && __LIB_0__::func_27(iParam0->f_176, 64))
	{
		iParam0->f_2 = 6;
	}
	if (!__LIB_0__::func_272(iParam0->f_10[0], 2))
	{
		__LIB_1__::func_581(&(Global_40.f_8863.f_155), 256);
	}
	switch (iParam0->f_2)
	{
		case 0:
			if (iParam0->f_3 != 0)
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_28, func_164(iParam0->f_3));
				__LIB_0__::func_19(&(iParam0->f_2), 1);
			}
			break;
		case 1:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_28, func_164(iParam0->f_3)))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_28, func_164(iParam0->f_3));
			}
			if (__LIB_0__::func_27(iParam0->f_176, 16) || __LIB_0__::func_27(iParam0->f_176, 64))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_28, func_164(iParam0->f_3)) && !__LIB_0__::func_481(1))
				{
					if (__LIB_5__::func_544(&(iParam0->f_37), "HRM_WRONG", iParam0->f_10[0], Global_35, 0, 0, 1, 1))
					{
						iParam0->f_4 = func_168(iParam0->f_3);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_28, func_57(iParam0->f_4), true);
						__LIB_0__::func_19(&(iParam0->f_2), 2);
					}
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_28, func_57(10)))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_28, func_57(10));
			}
			if ((ANIMSCENE::_0x1F0E401031E20146(iParam0->f_28, func_57(iParam0->f_4)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_28) > 0.98f) && !__LIB_0__::func_481(1))
			{
				if (__LIB_5__::func_544(&(iParam0->f_37), "HRM_ALERTED", iParam0->f_10[0], Global_35, 0, 0, 1, 1))
				{
					iParam0->f_4 = 10;
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_28, func_57(iParam0->f_4), true);
					__LIB_0__::func_19(&(iParam0->f_2), 3);
				}
			}
			break;
		case 3:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_28, func_57(11)))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_28, func_57(11));
			}
			if ((ANIMSCENE::_0x1F0E401031E20146(iParam0->f_28, func_57(iParam0->f_4)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_28) > 0.98f) && !__LIB_0__::func_481(1))
			{
				if (__LIB_5__::func_544(&(iParam0->f_37), "HRM_ALERTED", iParam0->f_10[0], Global_35, 0, 0, 1, 1))
				{
					iParam0->f_4 = 11;
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_28, func_57(iParam0->f_4), true);
					__LIB_0__::func_19(&(iParam0->f_2), 4);
				}
			}
			break;
		case 4:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_28, func_57(12)))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_28, func_57(12));
			}
			if ((ANIMSCENE::_0x1F0E401031E20146(iParam0->f_28, func_57(iParam0->f_4)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_28) > 0.98f) && !__LIB_0__::func_481(1))
			{
				if (__LIB_5__::func_544(&(iParam0->f_37), "HRM_ALERTED", iParam0->f_10[0], Global_35, 0, 0, 1, 1))
				{
					iParam0->f_4 = 12;
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_28, func_57(iParam0->f_4), true);
					__LIB_0__::func_19(&(iParam0->f_2), 5);
				}
			}
			break;
		case 5:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_28, func_57(7)))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_28, func_57(7));
			}
			if ((ANIMSCENE::_0x1F0E401031E20146(iParam0->f_28, func_57(iParam0->f_4)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_28) > 0.98f) && !__LIB_0__::func_481(1))
			{
				if (__LIB_5__::func_544(&(iParam0->f_37), "HRM_GETHIM", iParam0->f_10[0], Global_35, 0, 0, 1, 1))
				{
					iParam0->f_4 = 7;
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_28, func_57(iParam0->f_4), true);
					__LIB_0__::func_19(&(iParam0->f_2), 6);
				}
			}
			break;
		case 6:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_28, func_169(iParam0->f_3)))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_28, func_169(iParam0->f_3));
			}
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_28, func_57(iParam0->f_4)))
			{
				fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_28);
				if (fVar0 > 0.25f && !__LIB_0__::func_27(iParam0->f_176, 32))
				{
					__LIB_1__::func_581(&(iParam0->f_176), 32);
				}
				if (fVar0 > 0.98f || (((fVar0 > 0.35f && __LIB_0__::func_27(iParam0->f_176, 64)) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_28, func_169(iParam0->f_3))) && !__LIB_0__::func_481(1)))
				{
					if (__LIB_5__::func_544(&(iParam0->f_37), "HRM_SHOTGUN", iParam0->f_10[0], Global_35, 0, 0, 1, 1))
					{
						iParam0->f_4 = func_170(iParam0->f_3);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_28, func_57(iParam0->f_4), true);
						WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 0);
						__LIB_0__::func_19(&(iParam0->f_2), 7);
					}
				}
			}
			break;
		case 7:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_28, func_57(iParam0->f_4)) && ANIMSCENE::_0x005E6F28DD7ED58D(iParam0->f_28, func_63()))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0->f_10[0], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 0, false))
				{
					func_171(iParam0->f_10[0], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_10[0], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), true, 0, false, false);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_10[0], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), true, 0, false, false);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_10[0], joaat("REL_PLAYER_ENEMY"));
				PED::REGISTER_TARGET(iParam0->f_10[0], Global_35, 1);
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iParam0->f_10[0], ENTITY::GET_ENTITY_COORDS(iParam0->f_10[0], true, false), 150f, 0, 0);
				PED::_0x2208438012482A1A(iParam0->f_10[0], false, false);
				__LIB_0__::func_19(&(iParam0->f_2), 8);
			}
			break;
		case 8:
			func_162(iParam0, 0);
			__LIB_1__::func_148(&(iParam0->f_34));
			__LIB_0__::func_19(&(iParam0->f_2), 9);
			break;
		case 9:
			if (iParam0->f_174 < 3)
			{
				if (__LIB_0__::func_265(&(iParam0->f_34)) >= 6f)
				{
					if (!__LIB_0__::func_481(1))
					{
						__LIB_1__::func_148(&(iParam0->f_34));
						iParam0->f_174++;
						if (__LIB_5__::func_544(&(iParam0->f_37), "HRM_SHOTGUN", iParam0->f_10[0], Global_35, 0, 0, 1, 1))
						{
						}
					}
				}
			}
			break;
		case 10:
			break;
	}
	return 0;
}

int func_71(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (__LIB_0__::func_272(iParam0->f_10[iVar1], 2))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_72(var uParam0)
{
	if (!__LIB_7__::func_530(*uParam0))
	{
		__LIB_7__::func_556(*uParam0);
		func_99(uParam0);
	}
}

void func_73(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

Vector3 func_78(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -780455182:
			return __LIB_7__::func_467(uParam0, 1);
		case -1614148516:
			return __LIB_7__::func_467(uParam0, 0);
		case 2134589549:
			return __LIB_7__::func_467(uParam0, 0);
		case 373034311:
			return __LIB_7__::func_467(uParam0, 0);
		case -1887999095:
		case -1636964661:
		case -1287911066:
		case -415839138:
		case 429544447:
		case 1519228573:
		case 1982045664:
			return __LIB_7__::func_494(uParam0, 0);
		case -1300082860:
			return 365.725f, -15.4104f, 110.5399f;
		case -1958832660:
			return 1591.863f, -1845.292f, 65.196f;
		case 247563739:
			return 2450.049f, 2104.19f, 173.9434f;
		case 1861313914:
			return 894.6589f, -1969.363f, 44.554f;
		case 1734766691:
			return -270.2353f, 114.9477f, 62.751f;
		case 58958195:
			return -2565.258f, 756.6277f, 153.3524f;
		case 308500632:
			return -2664.789f, 690.7282f, 185.3162f;
		case -739986731:
			return -2904.952f, -254.2731f, 186.965f;
		case 1986618633:
			return -4688.022f, -3419.115f, 17.2107f;
		case -986176781:
			return -2774.109f, -431.3145f, 174.3467f;
		case -232974724:
			return 189.6525f, -414.4084f, 87.8956f;
		case -1053108445:
			return -4346.388f, -2604.249f, -1.1693f;
		case 1673499939:
			return 2476.001f, 1997.824f, 167.269f;
		case -709811179:
			return 2291.568f, 2080.932f, 200.7657f;
		case -979575591:
			return -2937.443f, -138.5504f, 199.3164f;
		case -1609238411:
			return 3220.522f, 1463.278f, 52.9448f;
		case 921081956:
			return 2417.172f, -738.7664f, 42.3038f;
		case -148407339:
			return -1732.145f, 2191.086f, 293.2867f;
		case -1109016944:
			return 1733.116f, -424.945f, 48.4327f;
		case -1646022773:
			return 2148.987f, 1918.443f, 194.4452f;
		case 1284679164:
			return 2782.746f, 536.9514f, 72.1612f;
		case -1505275983:
			return 947.541f, 238.4814f, 127.5118f;
		case -1761189332:
			return 703.7369f, 427.9747f, 108.3372f;
		case -2009137002:
			return 1260.331f, 1296.422f, 217.8313f;
		case -1787770845:
			return -1915.618f, -30.6525f, 287.4662f;
		case -161804536:
			return 2388.642f, 1690.187f, 95.5056f;
		case -1891628345:
			return -2694.149f, -1499.7f, 150.6036f;
		case -1960242214:
			return 749.9653f, 1825.082f, 240.1131f;
		case 1034793488:
			return 1705.885f, -1006.939f, 43.8407f;
		case -849582265:
			return -2588.29f, -93.565f, 167.61f;
		case 657666087:
			return -1749.065f, -1624.292f, 90.1441f;
		case -607940493:
			return 2698.995f, 410.8617f, 77.4735f;
		case 2000209669:
			if (iParam1 == 11)
			{
				return __LIB_7__::func_460(uParam0, 11);
			}
			else
			{
				return __LIB_7__::func_460(uParam0, 7);
			}
			break;
		case -1272862985:
			switch (iParam1)
			{
				case 0:
					return 2135.355f, 1069.851f, 122.7836f;
				case 1:
					return 2150.689f, 1124.094f, 130.4564f;
				case 2:
					return 2210.914f, 1134.496f, 141.0999f;
				case 3:
					return 2251.706f, 1198.574f, 121.7253f;
				default:
					break;
			}
			Jump @2418; //curOff = 1102
			switch (iParam1)
			{
				case 0:
					return -2693.879f, -402.3976f, 148.1729f;
				case 1:
					return -2687.993f, -402.3363f, 148.3894f;
				case 2:
					return -2686.917f, -410.486f, 148.4376f;
				case 3:
					return -2694.168f, -412.4018f, 148.8531f;
				case 4:
					return -2697.285f, -408.3287f, 149.3549f;
				default:
					break;
			}
			Jump @2418; //curOff = 1236
			switch (iParam1)
			{
				case 0:
					return 1478.761f, -1831.449f, 52.0191f;
				case 1:
					return 1487.726f, -1822.523f, 53.4034f;
				case 2:
					return 1501.093f, -1813.105f, 53.2804f;
				case 3:
					return 1520.822f, -1805.398f, 52.6965f;
				default:
					break;
			}
			Jump @2418; //curOff = 1346
			switch (iParam1)
			{
				case 0:
					return -941.5482f, 1011.45f, 198.416f;
				case 1:
					return -490.2726f, 1355.536f, 205.7345f;
				case 2:
					return 299.3675f, 1795.301f, 197.5344f;
				case 3:
					return 1884.704f, 1927.334f, 249.5903f;
				case 4:
					return 2549.506f, 1624.281f, 93.5729f;
				case 5:
					return 2489.881f, 1375.156f, 107.1609f;
				case 6:
					return 2657.062f, 1286.715f, 117.8777f;
				case 7:
					return 2577.385f, 1161.844f, 158.058f;
				case 8:
					return 2342.925f, 844.4003f, 82.3675f;
				case 9:
					return 1698.323f, 719.6797f, 125.0664f;
				case 10:
					return 1986.145f, -208.0823f, 51.4904f;
				case 11:
					return 1263.596f, 528.7397f, 88.8471f;
				case 12:
					return 1626.372f, -0.4718f, 87.7166f;
				case 13:
					return 1562.581f, -219.7309f, 84.4919f;
				case 14:
					return 111.1142f, 639.3316f, 125.9073f;
				case 15:
					return -20.3564f, 217.8298f, 109.194f;
				case 16:
					return 714.7566f, 22.1708f, 154.0224f;
				case 17:
					return -547.9435f, 557.9953f, 104.2689f;
				case 18:
					return -540.1378f, 256.6357f, 44.7136f;
				case 19:
					return -525.3924f, -277.1231f, 62.9066f;
				default:
					break;
			}
			Jump @2418; //curOff = 1840
			return 794.4265f, 1777.108f, 281.0706f;
			if (iParam1 == 0)
			{
				return 794.4265f, 1777.108f, 281.0706f;
			}
			else if (iParam1 == 1)
			{
				return -1277.741f, 2895.727f, 386.2982f;
			}
			else if (iParam1 == 2)
			{
				return 2577.433f, -627.2448f, 42.97695f;
			}
			else if (iParam1 == 3)
			{
				return 2579.389f, -627.8698f, 42.96334f;
			}
			else if (iParam1 == 4)
			{
				return 672.4651f, -974.1768f, 54.4574f;
			}
			else if (iParam1 == 5)
			{
				return -1307.091f, 2468.892f, 309.8042f;
			}
			else if (iParam1 == 6)
			{
				return 1735.903f, -1893.929f, 45.189f;
			}
			else if (iParam1 == 7)
			{
				return 2157.916f, 795.1056f, 156.5394f;
			}
			else if (iParam1 == 8)
			{
				return 514.147f, 1932.534f, 200.2069f;
			}
			Jump @2418; //curOff = 2102
			switch (iParam1)
			{
				case 0:
					return 2826.679f, -1323.043f, 46.43373f;
				case 1:
					return 2736.732f, -1339.335f, 46.65415f;
				case 2:
					return 2698.488f, -1306.194f, 49.48277f;
				case 3:
					return 2773.848f, -1182.319f, 48.53596f;
				case 4:
					return 2820.003f, -1230.709f, 47.52145f;
				default:
					break;
			}
			Jump @2418; //curOff = 2236
			switch (iParam1)
			{
				case 0:
					return -834.465f, -1365.791f, 48.5643f;
				case 1:
					return -781.2938f, -1320.024f, 44.8353f;
				case 2:
					return -729.9185f, -1219.616f, 41.4298f;
				case 3:
					return -773.6366f, -1354.466f, 44.1805f;
				case 4:
					return -756.8423f, -1276.124f, 49.337f;
				case 5:
					return -816.6586f, -1310.757f, 43.2499f;
				default:
					break;
			}
			Jump @2418; //curOff = 2394
			return -353.4487f, -133.7923f, 46.4927f;
			return 0f, 0f, 0f;
		}
Vector3 func_79(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1859413640:
			return 2195.23f, -554.23f, 40.86f;
		case -1481450947:
			return 1268.257f, -387.328f, 88.459f;
		case -1427565340:
			return 2255.135f, -754.127f, 41.793f;
		case -1887999095:
			return 1772.964f, -1359.736f, 44.18f;
		case 2000209669:
			return 830.53f, 1923.9f, 258.33f;
		case -161804536:
			return 2385.593f, 1696.987f, 94.94f;
		case 733338689:
			return 2388.11f, 1688.02f, 94.66f;
		case 2135153015:
			return -161.88f, 1734.6f, 169.73f;
		case 2072029413:
			return 808.47f, 2300.12f, 250.82f;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 1182.68f, 2036.35f, 322.98f;
				case 1:
					return 1227.191f, 2007.389f, 319.3389f;
			}
			break;
		case 513110082:
			switch (iParam1)
			{
				case 0:
					return -2532.075f, 1173.143f, 224.93f;
				case 1:
					return 3028.165f, 1781.019f, 83.127f;
				case 2:
					return -4394.824f, -2159.366f, 47.3844f;
				default:
					break;
			}
			Jump @652; //curOff = 402
			switch (iParam1)
			{
				case 0:
					return 2783.187f, 532.9774f, 70.28662f;
				case 1:
					return 2783.885f, 534.9501f, 70.2896f;
				case 2:
					return 2784.209f, 532.77f, 70.28524f;
				case 3:
					return 2782.702f, 535.7864f, 70.28931f;
				default:
					break;
			}
			Jump @652; //curOff = 512
			switch (iParam1)
			{
				case 0:
					return -1518.81f, 533.46f, 101.45f;
				case 1:
					return 1251.4f, 1165.7f, 149.09f;
				case 2:
					return -150.285f, 1498.717f, 114.935f;
				case 3:
					return 2939.35f, 1422.56f, 44.58f;
				case 4:
					return 1973.787f, 1192.337f, 170.517f;
				default:
					break;
			}
			return 0f, 0f, 0f;
		}
int func_80()
{
	return Global_1572887.f_12;
}

void func_99(var uParam0)
{
	if (func_80() != -1)
	{
		return;
	}
	if (__LIB_7__::func_471(*uParam0) != 0)
	{
		if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(__LIB_7__::func_471(*uParam0)))
		{
			MAP::_0xD8C7162AB2E2AF45(__LIB_7__::func_471(*uParam0));
		}
		__LIB_7__::func_498(*uParam0, 8);
	}
}

bool func_102()
{
	if (func_80() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

bool func_107()
{
	int iVar0;
	if (!func_194(joaat("DOCUMENT_PLAYER_JOURNAL"), 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	if (!__LIB_7__::func_589(16))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return false;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || __LIB_0__::func_491(Global_35, 1369124074))
	{
		return false;
	}
	if ((((((PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_X")) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_Y"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_A"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_B"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_LT"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_RT"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_ACTION")))
	{
		return false;
	}
	iVar0 = joaat("DOCUMENT_PLAYER_JOURNAL");
	if (INVENTORY::_0x3D10D7179D7034AF(func_196(0), iVar0, 0))
	{
		return false;
	}
	Global_36620 = MISC::GET_GAME_TIMER() + 1000;
	__LIB_7__::func_451();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iVar0, 1928812891, 1, 0, -1082130432 /* Float: -1f */);
	return true;
}

void func_116(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;
	iVar0 = __LIB_0__::func_786();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_199(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (__LIB_0__::func_293(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_15())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = __LIB_0__::func_309(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = __LIB_0__::func_786();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = __LIB_0__::func_416(iVar1);
		__LIB_1__::func_454(__LIB_0__::func_417(), 0, 4000);
		__LIB_3__::func_363(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		__LIB_1__::func_427(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > __LIB_0__::func_348(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < __LIB_0__::func_348(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { __LIB_0__::func_14(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		__LIB_3__::func_720(10, 1);
	}
}

bool func_123(int iParam0)
{
	if (func_80() != -1)
	{
		return false;
	}
	if (!__LIB_0__::func_5(iParam0))
	{
		return false;
	}
	return __LIB_1__::func_44(Global_1347702[iParam0 /*49*/].f_15);
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("U_F_O_HERMIT_WOMAN_01");
		case 1:
		case 2:
		case 3:
			return joaat("A_C_DOGCATAHOULACUR_01");
		default:
			break;
	}
	return 0;
}

Vector3 func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2532.628f, 1171.251f, 225.3449f;
		case 1:
			return -2541.569f, 1172.878f, 224.8266f;
		case 2:
			return -2532.962f, 1165.124f, 223.8324f;
		case 3:
			return -2526.329f, 1180.412f, 228.0133f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_133(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 109.28f;
		case 1:
			return -154.72f;
		case 2:
			return 50.37f;
		case 3:
			return 103.73f;
		default:
			break;
	}
	return 0f;
}

struct<11> func_135(int iParam0)
{
	struct<11> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -2531.427f, 1172.162f, 226.2103f };
			Var0.f_4 = { 0f, 0f, 41.10626f };
			Var0.f_7 = { 22.25293f, 16.91905f, 10.9782f };
			Var0.f_10 = "HERMIT_WOMAN_YARD";
			break;
		case 1:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -2536.681f, 1169.299f, 225.123f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 20f, 20f, 5f };
			Var0.f_10 = "HERMIT_WOMAN_WARNING_ZONE";
			break;
		case 2:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -2539.542f, 1166.787f, 223.7133f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 25f, 25f, 20f };
			Var0.f_10 = "HERMIT_WOMAN_CANNOT_LEAVE_ZONE";
			break;
		case 3:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -2532.033f, 1174.148f, 226.0514f };
			Var0.f_4 = { 0f, 0f, 47.93365f };
			Var0.f_7 = { 3.61986f, 3.538449f, 3f };
			Var0.f_10 = "HERMIT_WOMAN_INSIDE_HOUSE";
			break;
		case 4:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -2552.133f, 1153.251f, 224.1595f };
			Var0.f_4 = { 0f, 0f, 47.71975f };
			Var0.f_7 = { 37.83019f, 53.0695f, 30.03766f };
			Var0.f_10 = "HERMIT_WOMAN_APPROACH_FRONT";
			break;
		case 5:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -2535.299f, 1187.176f, 232.1368f };
			Var0.f_4 = { 0f, 0f, 46.88907f };
			Var0.f_7 = { 40f, 28.24742f, 20f };
			Var0.f_10 = "HERMIT_WOMAN_APPROACH_LEFT";
			break;
		case 6:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -2514.26f, 1167.606f, 232.3327f };
			Var0.f_4 = { 0f, 0f, 46.88901f };
			Var0.f_7 = { 40f, 29.18088f, 27.39021f };
			Var0.f_10 = "HERMIT_WOMAN_APPROACH_RIGHT";
			break;
	}
	return Var0;
}

void func_136(var uParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iParam1]))
	{
		ENTITY::_0x9587913B9E772D29((*uParam0)[iParam1], 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iParam1], true);
	}
}

void func_138(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			__LIB_2__::func_915(iParam0->f_10[iParam1], MISC::GET_HASH_KEY(func_159(2)), func_216(2), func_217(2), 0, 1, 0, 0, -1082130432 /* Float: -1f */);
			break;
		case 2:
			__LIB_2__::func_915(iParam0->f_10[iParam1], MISC::GET_HASH_KEY(func_159(3)), func_216(3), func_217(3), 0, 1, 0, 0, -1082130432 /* Float: -1f */);
			break;
		case 3:
			__LIB_2__::func_915(iParam0->f_10[iParam1], MISC::GET_HASH_KEY(func_159(4)), func_216(4), func_217(4), 0, 1, 0, 0, -1082130432 /* Float: -1f */);
			break;
	}
}

bool func_149(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_227(uParam2, 1, iVar0);
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
				if (func_251(iParam0, uParam2))
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

bool func_151()
{
	if (func_80() == -1 && __LIB_0__::func_296(0, 0, 1))
	{
		return (Global_1357549.f_1495 & 512 != 0 && Global_1357549.f_1494 & 2 != 0);
	}
	return false;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		case 2:
			return 5;
		case 3:
			return 6;
		default:
			break;
	}
	return 4;
}

int func_155(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1;
		case 5:
			return 2;
		case 6:
			return 3;
		default:
			break;
	}
	return 1;
}

int func_157(int iParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	iVar2 = func_257(iParam0, 0);
	fVar1 = __LIB_0__::func_94(Global_35, func_67(iVar2), 1);
	fVar0 = __LIB_0__::func_94(Global_35, func_67(func_257(iParam0, 1)), 1);
	if (fVar0 < fVar1)
	{
		iVar2 = func_257(iParam0, 1);
	}
	return iVar2;
}

void func_158(var uParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_67(iParam2), fParam3, 20000, 0.25f, 0, 40000f);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 100, -1f, -1f, -1f);
	__LIB_1__::func_473(0, MISC::GET_HASH_KEY(func_159(iParam1)), 0, 1, 0, -1082130432 /* Float: -1f */);
	__LIB_1__::func_474(*uParam0, &iVar0, 0, 0, 1, 1);
}

char* func_159(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROP_HUMAN_SEAT_CHAIR";
		case 1:
			return "WORLD_ANIMAL_DOG_SLEEPING";
		case 2:
		case 3:
			return "WORLD_ANIMAL_DOG_SITTING";
		case 4:
			return "WORLD_ANIMAL_DOG_RESTING";
		case 5:
			return "WORLD_ANIMAL_DOG_BARKING_UP";
		case 6:
			return "WORLD_ANIMAL_DOG_GUARD_GROWL";
		default:
			break;
	}
	return "FAIL";
}

void func_162(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_10[iParam1]))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			PED::SET_PED_CONFIG_FLAG(iParam0->f_10[iParam1], 340, true);
			PED::_0x815C0074A1BC0D93(iParam0->f_10[iParam1], 1);
			PED::SET_COMBAT_FLOAT(iParam0->f_10[iParam1], 58, 0f);
			PED::SET_COMBAT_FLOAT(iParam0->f_10[iParam1], 53, 0f);
			PED::_0xFC3DB99C8144CD81(iParam0->f_10[iParam1], iParam0->f_20[0], 0, 0, 0);
			iParam0->f_15[iParam1] = __LIB_1__::func_863(iParam0->f_10[iParam1], joaat("BLIP_STYLE_ENEMY"), 1, 1);
			MAP::_BLIP_SET_MODIFIER(iParam0->f_15[iParam1], -1034486097);
			break;
		case 1:
			PED::_0xFC3DB99C8144CD81(iParam0->f_10[iParam1], iParam0->f_20[2], 0, 0, 0);
			PED::_0xB8B6430EAD2D2437(iParam0->f_10[iParam1], -2071648955);
			iParam0->f_15[iParam1] = __LIB_1__::func_863(iParam0->f_10[iParam1], joaat("BLIP_STYLE_ENEMY"), 1, 1);
			break;
		case 2:
			PED::_0xFC3DB99C8144CD81(iParam0->f_10[iParam1], iParam0->f_20[2], 0, 0, 0);
			PED::_0xB8B6430EAD2D2437(iParam0->f_10[iParam1], -2071648955);
			iParam0->f_15[iParam1] = __LIB_1__::func_863(iParam0->f_10[iParam1], joaat("BLIP_STYLE_ENEMY"), 1, 1);
			break;
		case 3:
			PED::_0xFC3DB99C8144CD81(iParam0->f_10[iParam1], iParam0->f_20[2], 0, 0, 0);
			PED::_0xB8B6430EAD2D2437(iParam0->f_10[iParam1], -2071648955);
			iParam0->f_15[iParam1] = __LIB_1__::func_863(iParam0->f_10[iParam1], joaat("BLIP_STYLE_ENEMY"), 1, 1);
			break;
	}
	if (!iParam1 == 0)
	{
		TASK::TASK_COMBAT_PED(iParam0->f_10[iParam1], Global_35, 0, 0);
	}
}

char* func_164(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return func_57(1);
		case 2:
			return func_57(3);
		case 3:
			return func_57(2);
		default:
			break;
	}
	return func_57(1);
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 3;
		case 3:
			return 2;
		default:
			break;
	}
	return 1;
}

char* func_169(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return func_57(4);
		case 2:
			return func_57(6);
		case 3:
			return func_57(5);
		default:
			break;
	}
	return func_57(4);
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		case 2:
			return 6;
		case 3:
			return 5;
		default:
			break;
	}
	return 4;
}

int func_171(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
	return func_265(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

bool func_194(int iParam0, int iParam1, bool bParam2)
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
		if (!func_280(iParam0, 1))
		{
			return false;
		}
	}
	return func_281(iParam0, 0, bParam2) >= iParam1;
}

int func_196(bool bParam0)
{
	if (func_80() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_199(int iParam0)
{
	float fVar0;
	float fVar1;
	if (func_80() != -1)
	{
		return iParam0;
	}
	if (Global_1347477.f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3++;
	if (Global_1347477.f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477.f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = __LIB_0__::func_514(MISC::ABSF(fVar1) < 1f, __LIB_0__::func_514(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

Vector3 func_216(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2527.941f, 1168.765f, 224.8905f;
		case 1:
			return -2541.197f, 1172.031f, 224.637f;
		case 2:
			return -2539f, 1166.62f, 223.74f;
		case 3:
			return -2539.83f, 1171.48f, 224.56f;
		case 4:
			return -2533.85f, 1167.12f, 223.96f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_217(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 1:
			return -137.816f;
		case 2:
			return 141.463f;
		case 3:
			return -23.626f;
		case 4:
			return -104.367f;
		default:
			break;
	}
	return 0f;
}

void func_227(var uParam0, bool bParam1, int iParam2)
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
			if (func_301(uParam0))
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

bool func_251(int iParam0, var uParam1)
{
	if (!func_334(0))
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

int func_257(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 4;
				case 1:
					return 5;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
				case 1:
					return 7;
				default:
					break;
			}
			break;
	}
	return 2;
}

int func_265(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
	if (func_80() == -1 && !__LIB_0__::func_214(iVar0))
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
		func_343(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
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

bool func_280(int iParam0, int iParam1)
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
	if (func_352("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
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

int func_281(int iParam0, bool bParam1, bool bParam2)
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
		return func_355(iParam0, 0);
	}
	uVar2 = INVENTORY::_0xE787F05DFC977BDE(func_196(bParam2), iParam0, 0);
	return uVar2;
}

bool func_301(var uParam0)
{
	int iVar0;
	iVar0 = Global_1935630.f_40;
	if (func_80() == -1)
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

int func_334(int iParam0)
{
	if (func_15())
	{
		return 0;
	}
	return __LIB_2__::func_271(Global_1347702[58 /*49*/].f_15, 1);
}

int func_343(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_375(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = __LIB_0__::func_235((386 + iVar28), 1);
			if (func_377(iParam0, &Var0, iVar5, 0))
			{
				if (func_378(iParam0, &Var6, iVar5))
				{
					Var29 = { func_379(iParam0, Var0, iVar5, 0) };
					func_380(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_381(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_382(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
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

bool func_352(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_196(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_355(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { __LIB_0__::func_523(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		__LIB_0__::func_524(&Var0, func_387(0));
	}
	if (!func_389(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	__LIB_0__::func_238(iVar14);
	return uVar15;
}

struct<5> func_375(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	Var0 = { func_397(bParam1) };
	Var0.f_4 = 1084182731;
	switch (__LIB_0__::func_356(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_379(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_387(bParam1) };
			if (bParam2 && __LIB_0__::func_950(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_377(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_377(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_378(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_399(bParam1) };
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
				Var0 = { func_379(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (__LIB_0__::func_793(iParam0, -1483207246))
			{
				Var0 = { func_379(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_402(Var0, &Var27, bParam1, 0))
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

bool func_377(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_403(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_378(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	if (func_404(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_379(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_196(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_380(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (__LIB_0__::func_257(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_402(*uParam1, &Var0, bParam6, 0))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_381(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_196(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_381(bool bParam0)
{
	if (func_80() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_196(bParam0));
}

int func_382(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!__LIB_0__::func_258(iParam0))
	{
		return 0;
	}
	if (!func_381(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

struct<4> func_387(bool bParam0)
{
	int iVar0;
	iVar0 = func_196(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224215))
		{
			Global_1224215 = { func_379(923904168, func_397(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224223))
		{
			Global_1224223 = { func_379(923904168, func_397(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_379(923904168, func_397(bParam0), -740156546, 0);
}

bool func_389(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_196(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<4> func_397(bool bParam0)
{
	return func_379(joaat("CHARACTER"), __LIB_0__::func_217(), -1591664384, bParam0);
}

struct<4> func_399(bool bParam0)
{
	int iVar0;
	iVar0 = func_196(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224219))
		{
			Global_1224219 = { func_379(271701509, func_397(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return func_379(271701509, func_397(bParam0), 12999093, 0);
}

bool func_402(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_196(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_403(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_379(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_196(bParam6), &Var0, 0);
	return uVar4;
}

bool func_404(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	iVar0 = func_196(0);
	*uParam1 = { func_379(iParam0, func_387(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

