#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<200> Local_3 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<2> Local_203 = { -1, -1 } ;
	var uLocal_205 = -1;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 100;
	var uLocal_213 = -1082130432;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 5;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	int iLocal_224 = 0;
	bool bLocal_225 = false;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	bool bLocal_231 = false;
	bool bLocal_232 = false;
	int iLocal_233 = 0;
	int iLocal_234[1] = { 0 };
	int iLocal_236[1] = { 0 };
	int iLocal_238[2] = { 0, 0 };
	var uLocal_241[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<32> Local_258[1];
	int iLocal_291 = 0;
	int iLocal_292[3] = { 0, 0, 0 };
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	iLocal_227 = 1;
	bVar0 = false;
	func_1(&uScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bVar0 = true;
	}
	else
	{
		if (!func_2(&uScriptParam_0, &Local_3))
		{
			func_3();
		}
		if (!func_4())
		{
			func_5();
		}
		else if (!func_6())
		{
			func_5();
		}
		else if (__LIB_1__::func_989(Local_3.f_51, 1, 0, 0) || __LIB_0__::func_296(0, 0, 1))
		{
			if (func_9(1))
			{
				func_10(2);
			}
		}
		if (!func_11(&Local_3))
		{
			func_5();
		}
	}
	while (true)
	{
		if (bVar0)
		{
			__LIB_2__::func_265(bVar0, 473, 0);
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_227)
			{
				case 1:
					if (func_13())
					{
						__LIB_1__::func_408(Local_3.f_195, 1, 0);
						__LIB_3__::func_352(&Local_3, 3);
						iLocal_227 = 0;
					}
					break;
				case 0:
					if (func_16())
					{
						iLocal_227 = 3;
					}
					break;
				case 3:
					if (func_17())
					{
						iLocal_227 = 4;
					}
					break;
				case 4:
					func_18();
					break;
			}
			if (SCRIPTS::_0x9E4EF615E307FBBE())
			{
				func_3();
			}
			BUILTIN::WAIT(0);
		}
	}
	func_3();
}

void func_1(var uParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		func_3();
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
	{
		func_3();
	}
}

bool func_2(var uParam0, var uParam1)
{
	switch (uParam0->f_2)
	{
		case joaat("WB_RE_SAVAGE_WARNING01"):
			uParam1->f_194 = 0;
			uParam1->f_195 = 1050128548;
			break;
		case joaat("WB_RE_SAVAGE_WARNING02"):
			uParam1->f_194 = 1;
			uParam1->f_195 = 868326136;
			break;
		default:
			return false;
	}
	uParam1->f_198 = func_20(uParam1->f_194);
	uParam1->f_199 = func_21(uParam1->f_194);
	uParam1->f_196 = uParam0->f_1;
	uParam1->f_197 = *uParam0;
	uParam1->f_3 = 55;
	uParam1->f_51 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam1->f_196, true) };
	uParam1->f_51.f_3 = TASK::_GET_SCENARIO_POINT_HEADING(uParam1->f_196, true);
	__LIB_4__::func_236(uParam1, 1);
	return true;
}

void func_3()
{
	int iVar0;
	var uVar1;
	if (func_9(1))
	{
		if (func_23() || func_24())
		{
			func_10(2);
			func_25();
		}
	}
	__LIB_3__::func_524(&iLocal_224);
	func_27();
	__LIB_0__::func_172(iLocal_291);
	iVar0 = 0;
	while (iVar0 < iLocal_234)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_234[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_234[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_238)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_238[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_238[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_292)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_292[iVar0]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_292[iVar0]));
		}
		iVar0++;
	}
	if (bLocal_225)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("SAVAGE_WARNING_STOP");
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (PHYSICS::DOES_ROPE_EXIST(iLocal_236[iVar0]))
		{
			PHYSICS::DELETE_ROPE(&(iLocal_236[iVar0]));
		}
		iVar0++;
	}
	SCRIPTS::_0xE7282390542F570D(Local_3.f_197);
	__LIB_1__::func_408(Local_3.f_195, 0, 0);
	AUDIO::CLEAR_AMBIENT_ZONE_STATE("AZ_RESW_Savage_Warning_Body", false);
	uVar1 = 1;
	if (VOLUME::_0xF6A8A652A6B186CD(Local_3.f_51.f_11))
	{
		VOLUME::_0xFDFECC6EE4491E11(Local_3.f_51.f_11);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_233))
	{
		__LIB_1__::func_544(iLocal_233);
	}
	func_30(&Local_3, &iLocal_234, &uVar1, Local_3.f_194, -1, 0, 0, 1, 0, 1);
	__LIB_2__::func_822();
}

bool func_4()
{
	if (__LIB_0__::func_181())
	{
		if (__LIB_2__::func_410(60))
		{
			return true;
		}
	}
	return false;
}

void func_5()
{
	if (!bLocal_232)
	{
		iLocal_227 = 4;
		iLocal_226 = 1;
		if (Local_3.f_198 == 1)
		{
			func_10(2);
			func_25();
		}
		bLocal_232 = true;
	}
}

bool func_6()
{
	if (func_9(2))
	{
		return false;
	}
	if (func_34())
	{
		return false;
	}
	return true;
}

bool func_9(int iParam0)
{
	return Local_3.f_198 == iParam0;
}

void func_10(int iParam0)
{
	func_41(Local_3.f_194, iParam0);
	Local_3.f_198 = iParam0;
}

bool func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	if (uParam0->f_194 == 0)
	{
		iVar0 = 1;
	}
	else if (uParam0->f_194 == 1)
	{
		iVar0 = 0;
	}
	else
	{
		return false;
	}
	iVar1 = func_20(iVar0);
	if (iVar1 == 1)
	{
		iVar2 = func_21(iVar0);
		bVar3 = false;
		if (__LIB_1__::func_426(iVar2, 1))
		{
			func_41(iVar0, 2);
			func_44(__LIB_0__::func_23(), iVar2, &iVar4, &iVar5, &uVar6, &uVar7, &uVar8, &uVar9);
			if (((((iVar4 >= 0 && iVar5 >= 0) && iVar5 >= 0) && iVar5 >= 0) && iVar5 >= 1) && iVar5 >= 0)
			{
				bVar3 = true;
			}
			else
			{
				func_25();
			}
		}
		if (!bVar3)
		{
			return false;
		}
	}
	iVar10 = __LIB_3__::func_674(55, 0);
	if (func_20(uParam0->f_194) == 0)
	{
		if (iVar10 != 0)
		{
			iVar11 = iVar10;
			if (!__LIB_1__::func_426(iVar11, 1))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_13()
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!Global_1879534)
		{
			if (!Global_1879534.f_1)
			{
				if (!bLocal_231)
				{
					bLocal_231 = true;
					func_47();
				}
				return bLocal_231;
			}
		}
	}
	return false;
}

bool func_16()
{
	switch (iLocal_228)
	{
		case 0:
			switch (Local_3.f_194)
			{
				case 0:
					if (__LIB_3__::func_308(&Local_3))
					{
						Local_258[0 /*32*/].f_1 = joaat("RE_SAVAGEWARNING_MALES_01");
						Local_258[0 /*32*/].f_3 = 1280845236;
						__LIB_4__::func_336(&(Local_258[0 /*32*/].f_22));
						__LIB_4__::func_337(&(Local_258[0 /*32*/].f_22));
						STREAMING::REQUEST_MODEL(joaat("P_CS_NOOSE01XB"), false);
						STREAMING::REQUEST_MODEL(joaat("S_MURDERCAMPHEAD01X"), false);
						STREAMING::REQUEST_MODEL(func_56(), false);
						__LIB_3__::func_284(&Local_258);
						if (!__LIB_3__::func_632(&Local_203, "script@beat@wilderness@discoverables@savage_warning@savage_warning", 8600, 8611, -1, 0, 0, 0, 0))
						{
						}
						iLocal_228 = 1;
					}
					break;
				case 1:
					iLocal_228 = 1;
					break;
			}
			break;
		case 1:
			switch (Local_3.f_194)
			{
				case 0:
					if ((!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_NOOSE01XB")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_MURDERCAMPHEAD01X"))) || !STREAMING::HAS_MODEL_LOADED(func_56()))
					{
						return false;
					}
					if (!__LIB_3__::func_366(&Local_258))
					{
						return false;
					}
					if (!__LIB_3__::func_633(&Local_203))
					{
						return false;
					}
					break;
			}
			return true;
	}
	return false;
}

bool func_17()
{
	switch (iLocal_229)
	{
		case 0:
			switch (Local_3.f_194)
			{
				case 0:
					if (!__LIB_0__::func_266(Global_35, __LIB_3__::func_179(&Local_3), 150f, 1, 1))
					{
						return false;
					}
					break;
				case 1:
					if (!__LIB_0__::func_266(Global_35, __LIB_3__::func_179(&Local_3), 250f, 1, 1))
					{
						return false;
					}
					break;
			}
			func_65();
			func_66();
			switch (Local_3.f_194)
			{
				case 0:
					__LIB_3__::func_635(&Local_203);
					iLocal_292[0] = ANIMSCENE::_GET_ANIM_SCENE_PED(Local_203.f_1, "Corpse01", true);
					iLocal_292[1] = ANIMSCENE::_GET_ANIM_SCENE_PED(Local_203.f_1, "Corpse01^1", true);
					iLocal_292[2] = ANIMSCENE::_GET_ANIM_SCENE_PED(Local_203.f_1, "Corpse01^2", true);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_234[0]))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_234[0], 6, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_292[0]))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_292[0], 6, true);
						PED::SET_PED_CONFIG_FLAG(iLocal_292[0], 186, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_292[1]))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_292[1], 6, true);
						PED::SET_PED_CONFIG_FLAG(iLocal_292[1], 186, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_292[2]))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_292[2], 6, true);
						PED::SET_PED_CONFIG_FLAG(iLocal_292[2], 186, false);
					}
					break;
				case 1:
					__LIB_4__::func_351(&iLocal_291, joaat("VOLBOX"), -1950.759f, -1844.222f, 118.7414f, 0f, 0f, 15.78468f, 22.01285f, 21.37317f, 6.177776f);
					break;
			}
			iLocal_229 = 1;
			break;
		case 1:
			switch (Local_3.f_194)
			{
				case 0:
					break;
			}
			iLocal_229 = 2;
			break;
		case 2:
			switch (Local_3.f_194)
			{
				case 0:
					switch (iLocal_230)
					{
						case 0:
							if (__LIB_3__::func_479(__LIB_3__::func_179(&Local_3), __LIB_3__::func_526(&Local_3), &Local_258, &iLocal_234, 0, 0, -1, 1))
							{
								func_71(0, 0, 1, joaat("P_CS_NOOSE01XB"), 45454, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
								iLocal_230 = 1;
							}
							break;
						case 1:
							if (func_72(0, 0, 1, 45454, 0f, 0f, 0f, -0.1f, 0f, 0f, 90f, 0f, 0f))
							{
								func_73();
								AUDIO::SET_AMBIENT_ZONE_STATE("AZ_RESW_Savage_Warning_Body", true, true);
								AUDIO::_0x3743CE6948194349("AZ_RESW_Savage_Warning_Body", ENTITY::GET_ENTITY_COORDS(iLocal_234[0], false, false), 0f);
								iLocal_229 = 6;
								return true;
							}
							break;
					}
					break;
				case 1:
					iLocal_229 = 6;
					return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_18()
{
	if (__LIB_0__::func_266(Global_35, __LIB_3__::func_179(&Local_3), 35f, 1, 1))
	{
		if (!bLocal_225)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("SAVAGE_WARNING_START");
			bLocal_225 = true;
		}
	}
	else if (bLocal_225)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("SAVAGE_WARNING_STOP");
		bLocal_225 = false;
	}
	switch (iLocal_226)
	{
		case 0:
			if (__LIB_0__::func_266(Global_35, __LIB_3__::func_179(&Local_3), 50f, 1, 1))
			{
				if (CAM::IS_SPHERE_VISIBLE(__LIB_3__::func_179(&Local_3), __LIB_0__::func_514(Local_3.f_194 == 0, 3f, 6f)))
				{
					if (func_9(0))
					{
						func_75();
						func_10(1);
					}
					iLocal_226 = 1;
				}
			}
			break;
		case 1:
			if (Local_3.f_194 == 0)
			{
				if (func_24())
				{
					func_10(2);
					iLocal_226 = 2;
				}
			}
			break;
		case 2:
			break;
	}
}

int func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = func_76(iParam0, 0);
	iVar1 = __LIB_3__::func_564(55, iVar0);
	if (iVar1 < 0)
	{
		iVar1 = 0;
	}
	return iVar1;
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = func_76(iParam0, 1);
	iVar1 = __LIB_3__::func_564(55, iVar0);
	if (iVar1 == 0)
	{
		iVar1 = -15;
	}
	return iVar1;
}

bool func_23()
{
	return __LIB_1__::func_426(Local_3.f_199, 1);
}

bool func_24()
{
	if (Local_3.f_194 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_234[0]))
		{
			if (PHYSICS::_0x79C2BEC82CFD7F7F(iLocal_236[0]) || !PHYSICS::_0x9B4F7E3E4F9C77B3(iLocal_236[0], iLocal_234[0]))
			{
				return true;
			}
		}
	}
	return false;
}

void func_25()
{
	int iVar0;
	iVar0 = __LIB_0__::func_23();
	__LIB_1__::func_446(&iVar0, 0, 0, 0, 0, 1, 0, 0);
	__LIB_3__::func_537(55, 0, iVar0);
}

void func_27()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		__LIB_2__::func_353(&(uLocal_241[iVar0]), 1);
		iVar0++;
	}
}

void func_30(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_3__::func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			__LIB_3__::func_238(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 0))
			{
				__LIB_4__::func_179((*iParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, iParam1[iVar0]))
				{
					__LIB_2__::func_32(iParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_288((*iParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*iParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_91(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = __LIB_3__::func_167(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		__LIB_0__::func_701(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

bool func_34()
{
	if (__LIB_2__::func_776())
	{
		return true;
	}
	if (__LIB_2__::func_84())
	{
		return true;
	}
	return false;
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_76(iParam0, 0);
	__LIB_3__::func_461(55, iVar0, iParam1);
}

void func_44(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (__LIB_1__::func_110(iParam0, iParam1, 1))
	{
		iVar0 = __LIB_0__::func_39(iParam1);
		iVar1 = __LIB_0__::func_710(iParam0);
		iVar2 = (__LIB_0__::func_710(iParam0) - __LIB_0__::func_710(iParam1));
		iVar3 = (__LIB_0__::func_39(iParam0) - __LIB_0__::func_39(iParam1));
		iVar4 = (__LIB_0__::func_40(iParam0) - __LIB_0__::func_40(iParam1));
		iVar5 = (__LIB_0__::func_41(iParam0) - __LIB_0__::func_41(iParam1));
		iVar6 = (__LIB_0__::func_42(iParam0) - __LIB_0__::func_42(iParam1));
		iVar7 = (__LIB_0__::func_43(iParam0) - __LIB_0__::func_43(iParam1));
	}
	else
	{
		iVar0 = __LIB_0__::func_39(iParam0);
		iVar1 = __LIB_0__::func_710(iParam1);
		iVar2 = (__LIB_0__::func_710(iParam1) - __LIB_0__::func_710(iParam0));
		iVar3 = (__LIB_0__::func_39(iParam1) - __LIB_0__::func_39(iParam0));
		iVar4 = (__LIB_0__::func_40(iParam1) - __LIB_0__::func_40(iParam0));
		iVar5 = (__LIB_0__::func_41(iParam1) - __LIB_0__::func_41(iParam0));
		iVar6 = (__LIB_0__::func_42(iParam1) - __LIB_0__::func_42(iParam0));
		iVar7 = (__LIB_0__::func_43(iParam1) - __LIB_0__::func_43(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + __LIB_0__::func_44(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(__LIB_0__::func_70(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

void func_47()
{
	iLocal_233 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Local_3.f_51, 0f, 0f, 0f, func_114(), func_114(), func_114(), __LIB_0__::func_93());
	if (__LIB_0__::func_1(Global_1310750[55 /*111*/], 33554432))
	{
		Local_3.f_51.f_11 = __LIB_2__::func_261(iLocal_233, __LIB_3__::func_185(55), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
	}
	else
	{
		Local_3.f_51.f_11 = __LIB_2__::func_261(iLocal_233, __LIB_3__::func_185(55), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
	}
	__LIB_3__::func_293(55);
}

int func_56()
{
	return joaat("S_SCRIPTROPEATTACH");
}

void func_65()
{
	switch (Local_3.f_194)
	{
		case 0:
			iLocal_224 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_TERRIFYING_NEW"), __LIB_3__::func_179(&Local_3), 0f, 40f, 30f, -1f, -1f, -1, -1);
			break;
		case 1:
			iLocal_224 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_TERRIFYING_NEW"), __LIB_3__::func_179(&Local_3), 0f, 40f, 30f, -1f, -1f, -1, -1);
			break;
	}
}

void func_66()
{
	switch (Local_3.f_194)
	{
		case 0:
			break;
		case 1:
			func_127(0, 0, -1954.816f, -1842.716f, 116.6558f, 1f);
			func_127(1, 0, -1958.49f, -1850.31f, 116.619f, 1f);
			func_127(2, 0, -1947.164f, -1842.83f, 116.7066f, 1f);
			func_127(3, 0, -1943.812f, -1843.741f, 116.8166f, 1f);
			func_127(4, 1, -1950.946f, -1839.677f, 117.3138f, 3f);
			func_127(5, 1, -1953.553f, -1842.56f, 116.386f, 3f);
			func_127(6, 1, -1955.896f, -1841.763f, 116.7087f, 3f);
			func_127(7, 1, -1957.744f, -1843.842f, 116.5458f, 3f);
			func_127(8, 1, -1949.796f, -1841.32f, 116.4565f, 3f);
			break;
	}
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_234[iParam0]))
	{
		iLocal_238[iParam1] = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam3, __LIB_3__::func_179(&Local_3), true, true, false, true);
		iLocal_238[iParam2] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_56(), __LIB_3__::func_179(&Local_3), true, true, false, true);
	}
}

bool func_72(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, vector3 vParam7, vector3 vParam10)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_234[iParam0]))
	{
		if (func_130(&(iLocal_238[iParam1]), 0))
		{
			if (func_130(&(iLocal_238[iParam2]), 0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_238[iParam2], false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(iLocal_238[iParam1], iLocal_234[iParam0], -1, PED::GET_PED_BONE_INDEX(iLocal_234[iParam0], iParam3), vParam4, vParam7, vParam10, -1f, 0, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
				return true;
			}
		}
	}
	return false;
}

void func_73()
{
	int iVar0;
	vector3 vVar1;
	vVar1 = { -2.75f, 0f, -0.561f };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_236[iVar0] = PHYSICS::_ADD_ROPE_2(func_131(iVar0) + vVar1, __LIB_4__::func_335(0f, 0f, -1f), func_133(iVar0), 1, true, -1, -1f);
		func_134(iVar0);
		iVar0++;
	}
}

void func_75()
{
	Local_3.f_199 = func_135(Local_3.f_194);
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam1;
	iVar1 = iParam0;
	return ((2 * iVar1) + iVar0);
}

void func_91(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_171))
	{
		__LIB_3__::func_142(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	__LIB_4__::func_333(uParam0);
	__LIB_3__::func_311(uParam0);
	__LIB_3__::func_252(uParam0);
	if (!__LIB_19__::func_108(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		__LIB_1__::func_222(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		__LIB_1__::func_345();
	}
	if (!__LIB_1__::func_982(uParam0->f_3) && !__LIB_1__::func_85(uParam0->f_3, 256))
	{
		__LIB_2__::func_115(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	__LIB_0__::func_172(uParam0->f_173);
	__LIB_0__::func_172(uParam0->f_172);
}

float func_114()
{
	switch (Local_3.f_194)
	{
		case 0:
			return 85f;
		case 1:
			return 50f;
		default:
			break;
	}
	return __LIB_3__::func_292(55);
}

void func_127(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	switch (iParam1)
	{
		case 0:
			__LIB_2__::func_354(&(uLocal_241[iParam0]), vParam2, fParam5, 1, -1, 0);
			break;
		case 1:
			__LIB_2__::func_354(&(uLocal_241[iParam0]), vParam2, fParam5, 2, -1, 0);
			break;
	}
}

bool func_130(var uParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (bParam1 || ENTITY::DOES_ENTITY_HAVE_PHYSICS(*uParam0))
		{
			if (bParam1)
			{
				return true;
			}
			else if (OBJECT::_0xB6CBD40F8EA69E8A(*uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

Vector3 func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2324.364f, -1651.342f, 139.22f;
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
			return 0.856f;
		default:
			break;
	}
	return 0f;
}

void func_134(int iParam0)
{
	if (PHYSICS::DOES_ROPE_EXIST(iLocal_236[iParam0]))
	{
		PHYSICS::_0x8D59079C37C21D78(iLocal_236[iParam0], 2f);
		PHYSICS::_0x522FA3F490E2F7AC(iLocal_236[iParam0], 1, 1);
		switch (iParam0)
		{
			case 0:
				func_185(iParam0, 0, 1, "PH_R_AnkleDist");
				break;
		}
	}
}

int func_135(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_0__::func_23();
	iVar0 = func_76(uParam0, 1);
	__LIB_1__::func_446(&iVar1, 0, 0, 0, 1, 0, 0, 0);
	__LIB_3__::func_461(55, iVar0, iVar1);
	return iVar1;
}

void func_185(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	ENTITY::SET_ENTITY_COORDS(iLocal_238[iParam2], func_131(iParam0), true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_238[iParam2], true);
	PHYSICS::_0x462FF2A432733A44(iLocal_236[iParam0], iLocal_238[iParam2], iLocal_234[iParam1], 0f, 0f, 0f, 0f, 0f, 0f, "ropeAttach", sParam3);
	PHYSICS::_0x3C6490D940FF5D0B(iLocal_236[iParam0], "ropeAttach", sParam3, func_230(iParam0, 1068708659 /* Float: 1.4f */), 0);
	PHYSICS::_0x76BAD9D538BCA1AA(iLocal_236[iParam0], 0f);
	PHYSICS::_0xB40EA9E0D2E2F7F3(iLocal_236[iParam0], 1f);
}

float func_230(int iParam0, float fParam1)
{
	return (func_133(iParam0) * fParam1);
}

