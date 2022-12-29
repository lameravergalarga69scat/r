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
	struct<884> Local_14 = { 0, 0, 0, 0, 0, 1, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 8, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, 16, 17, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1077936128, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_898 = 0;
	struct<193> Local_899 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1092 = 0;
	bool bLocal_1093 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Local_899.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_899.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	iVar0 = __LIB_3__::func_390(Local_899.f_3, __LIB_3__::func_313(Local_899.f_3), 0);
	if (iVar0 > 0)
	{
		func_5(2048);
		if (Local_899.f_161)
		{
			func_5(4096);
		}
	}
	iVar1 = __LIB_3__::func_390(Local_899.f_3, __LIB_3__::func_140(Local_899.f_3), 0);
	if (iVar1 > 0)
	{
		func_5(4096);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_1093 = true;
	}
	if (!bLocal_1093)
	{
		func_7();
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_1093, 728, 0);
		if (bLocal_1093)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (Local_14.f_1)
			{
				case 0:
					if (func_10())
					{
						func_11(1);
					}
					break;
				case 1:
					if (__LIB_3__::func_669(&Local_899, &vScriptParam_0, 0, 0, 0, 0, 0, 1))
					{
						func_13();
						func_11(3);
					}
					else if (Local_899.f_160)
					{
						func_8();
					}
					break;
				case 3:
					if (__LIB_3__::func_479(Local_899.f_51, Local_899.f_51.f_3, &(Local_14.f_262), &(Local_14.f_27), 1, 0, -1, 1))
					{
						func_15();
						func_16();
						func_17();
						func_18();
						if (!func_19())
						{
							if (!func_20(5, 0))
							{
								func_21(Local_14.f_239);
							}
						}
						if (func_19())
						{
							__LIB_2__::func_659(&(Local_14.f_883), -3309.7f, -2857.2f, -7f, 1f, 0, 1);
						}
						else
						{
							__LIB_2__::func_659(&(Local_14.f_883), -3320.2f, -2859.5f, -7f, 1f, 0, 1);
						}
						__LIB_3__::func_277(1891783641, Local_899.f_51, 1);
						func_11(4);
					}
					break;
				case 4:
					if (func_24())
					{
						func_8();
					}
					func_25();
					func_26();
					if (Local_899.f_46)
					{
						func_27();
					}
					else
					{
						func_28();
					}
					if (!Local_899.f_50)
					{
						if (func_29())
						{
							Local_899.f_50 = 1;
						}
					}
					if (__LIB_3__::func_431(&Local_899, &(Local_14.f_27), 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_8();
					}
					break;
			}
			BUILTIN::WAIT(Local_899.f_158);
		}
	}
}

void func_5(int iParam0)
{
	__LIB_1__::func_336(&(Local_14.f_6), iParam0);
}

void func_7()
{
	if (func_32())
	{
		__LIB_3__::func_489(&Local_899, 1);
		func_34();
		func_35();
		func_36(&(Local_14.f_807));
		func_37();
		func_38();
		func_39(&(Local_14.f_262));
		func_40();
	}
	else
	{
		func_8();
	}
}

void func_8()
{
	if (__LIB_2__::func_1(Local_14.f_27[0], 0, 1))
	{
		if (!PED::IS_PED_FLEEING(Local_14.f_27[0]) && !func_42(0, 1048576))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_14.f_27[0], false, true);
			func_43();
		}
		__LIB_2__::func_788(&(Local_14.f_27[0]), 1, 0, 1);
	}
	func_45(&Local_899, &(Local_14.f_27), &(Local_14.f_50), 0, Local_14.f_877, Local_14.f_876, 1, 1, 0, 1);
	__LIB_3__::func_380(Local_14.f_868);
	__LIB_3__::func_353("REBUB_STOP", 0);
	PED::SET_PED_CONFIG_FLAG(Global_35, 474, false);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_10()
{
	int iVar0;
	if (func_19())
	{
		iVar0 = joaat("WORLD_HUMAN_LEAN_BACK_WALL_NO_PROPS");
	}
	else
	{
		iVar0 = joaat("WORLD_HUMAN_STAND_WAITING");
	}
	switch (Local_14.f_2)
	{
		case 0:
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::_REQUEST_SCENARIO_TYPE(iVar0, 15, 0, 0);
			func_49();
			func_50();
			if (func_51())
			{
				if (__LIB_3__::func_308(&Local_899))
				{
					func_53(1);
				}
			}
			break;
		case 1:
			if (!__LIB_3__::func_366(&(Local_14.f_262)))
			{
				return false;
			}
			if (!func_19() && !STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return false;
			}
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(iVar0, false))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_11(int iParam0)
{
	Local_14.f_1 = iParam0;
}

void func_13()
{
	__LIB_3__::func_139(&(Local_899.f_171), Local_899.f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness (Birds OK) & No Traffic");
	Local_899.f_175 = 0;
	POPULATION::_0xB56D41A694E42E86(Local_899.f_171, 224, 1024, 0, -1, -1, Local_899.f_175);
	POPULATION::_0x18262CAFEBB5FBE1(Local_899.f_171, 0, 0, 0, -1, -1, 0);
}

void func_15()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (iVar0 >= 9 && iVar0 <= 16)
		{
			if (!func_63(2048, 0) && !func_63(4096, 0))
			{
			}
			else if (iVar0 >= 1 && iVar0 <= 16)
			{
				func_64(iVar0);
			}
			iVar0++;
			__LIB_3__::func_285(Local_14.f_27[0], &Local_899, 0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_14.f_262[0 /*32*/].f_23)))
			{
				__LIB_2__::func_133(Local_14.f_27[0], &(Local_14.f_262[0 /*32*/].f_23), 0);
			}
			Local_14.f_45[0] = Local_14.f_27[0];
			Local_14.f_209 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), Local_899.f_51, 0f, 0f, 0f, 1f, 1f, 1f);
			PED::_0x7C00CFC48A782DC0(Local_14.f_209, Local_14.f_27[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			VOLUME::_0x5B23DFF8E0948BB2(Local_14.f_209, 1);
			if (func_19())
			{
				Local_14.f_210 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), Local_899.f_51, 0f, 0f, 0f, 1f, 1f, 1f);
				PED::_0x7C00CFC48A782DC0(Local_14.f_210, Local_14.f_27[8], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			}
			PED::SET_PED_CONFIG_FLAG(Local_14.f_27[0], 448, true);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_27[0], 44, false);
			ENTITY::_0x18FF3110CF47115D(Local_14.f_27[0], 2, 1);
			ENTITY::_0x18FF3110CF47115D(Local_14.f_27[0], 3, 1);
			ENTITY::_0x18FF3110CF47115D(Local_14.f_27[0], 7, 1);
			if (__LIB_2__::func_1(Local_14.f_262[0 /*32*/].f_11, 0, 1))
			{
				PED::SET_PED_CONFIG_FLAG(Local_14.f_262[0 /*32*/].f_11, 178, true);
				__LIB_2__::func_967(&(Local_899.f_5), Local_14.f_27[0], Local_14.f_262[0 /*32*/].f_11, 0);
			}
		}
	}
}

void func_16()
{
	func_68(&(Local_14.f_103[0 /*17*/]), Local_14.f_99[0], 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_68(&(Local_14.f_103[1 /*17*/]), Local_14.f_99[1], 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	Local_14.f_159 = __LIB_2__::func_340(3, 0, 0);
	Local_14.f_159 |= 2048;
}

void func_17()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 == 4)
		{
			iVar1 = CLOCK::GET_CLOCK_HOURS();
			if (iVar1 < 18 && iVar1 >= 6)
			{
			}
			else if (STREAMING::IS_MODEL_VALID(Local_14.f_807[iVar0 /*12*/].f_7))
			{
				Local_14.f_807[iVar0 /*12*/].f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_14.f_807[iVar0 /*12*/].f_7, Local_14.f_807[iVar0 /*12*/], true, true, false, true);
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_807[iVar0 /*12*/].f_8))
				{
					if (iVar0 == 0)
					{
						__LIB_1__::func_338(Local_14.f_807[iVar0 /*12*/].f_8, Local_14.f_807[iVar0 /*12*/]);
					}
					if (iVar0 == 1)
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_14.f_807[iVar0 /*12*/].f_8, false);
					}
					ENTITY::SET_ENTITY_ROTATION(Local_14.f_807[iVar0 /*12*/].f_8, 0f, 0f, Local_14.f_807[iVar0 /*12*/].f_3, 2, true);
				}
			}
			iVar0++;
		}
	}
}

void func_18()
{
	Local_14.f_868 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_14.f_868.f_4, 0, 0, false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_14.f_868);
}

bool func_19()
{
	if (func_63(2048, 0) || func_63(4096, 0))
	{
		return false;
	}
	return true;
}

bool func_20(int iParam0, int iParam1)
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
	iVar0 = __LIB_3__::func_562(8, 0);
	iVar1 = 0;
	if (__LIB_0__::func_923(iVar0))
	{
		iVar2 = __LIB_0__::func_23();
		iVar3 = __LIB_0__::func_40(iVar0);
		iVar4 = __LIB_0__::func_40(iVar2);
		iVar5 = (iVar4 - iVar3);
		iVar6 = __LIB_0__::func_41(iVar0);
		iVar7 = __LIB_0__::func_41(iVar2);
		iVar8 = (iVar7 - iVar6);
		if (iParam1 != 0 && iVar8 >= iParam1)
		{
			iVar1 = 1;
		}
		if (iParam0 != 0 && iVar5 >= iParam0)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

void func_21(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0))
	{
		vVar0 = { 0f, 0f, 0f };
		if (!Local_899.f_50)
		{
			vVar3 = { Local_14.f_162[5 /*3*/], Local_14.f_162[5 /*3*/].f_1, (Local_14.f_162[5 /*3*/].f_2 - 1f) };
		}
		if (!func_63(2, 0))
		{
			iParam0 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_beat_burning_body_smk_start", vVar3, vVar0, 1f, false, false, false, true);
			func_5(2);
		}
		GRAPHICS::SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(iParam0, 100f);
	}
}

bool func_24()
{
	if (!func_77(&Local_899, &(Local_14.f_45), 0, 0, 0, 0, 1, 0))
	{
		return true;
	}
	if (!__LIB_0__::func_266(Global_35, Local_899.f_51, 200f, 1, 1))
	{
		return true;
	}
	return false;
}

void func_25()
{
	int iVar0;
	iVar0 = func_79(&(Local_14.f_27[0]), &(Local_14.f_138), 15f, &(Local_14.f_103), &(Local_899.f_192), 0, 1, 0, 0, Local_14.f_159, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (Local_14.f_138.f_1 != -1)
	{
		if (__LIB_2__::func_341(&(Local_14.f_138)))
		{
			func_81(&(Local_14.f_103), 0);
		}
	}
	if (PED::_0xE33F98BD76490ABC(Local_14.f_27[0], PLAYER::PLAYER_ID(), 0))
	{
	}
	if (!Local_899.f_46)
	{
		switch (iVar0)
		{
			case 0:
				if (__LIB_2__::func_303(Global_35, Local_14.f_27[0], Local_14.f_68[Local_14.f_160], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					switch (Local_14.f_160)
					{
						case 16:
							func_81(&(Local_14.f_103), 0);
							func_83(0, 0);
							Local_14.f_4 = 1;
							func_84(1);
							break;
						case 18:
							func_81(&(Local_14.f_103), 0);
							func_83(0, 0);
							Local_14.f_4 = 7;
							func_84(1024);
							if (func_19())
							{
								func_84(2048);
							}
							break;
						case 20:
							func_81(&(Local_14.f_103), 0);
							Local_14.f_4 = 8;
							func_84(32);
							if (func_19())
							{
								func_84(64);
							}
							func_83(0, 0);
							break;
					}
					func_85();
					func_86();
				}
				else
				{
					func_87(1, 1);
				}
				break;
			case 1:
				if (__LIB_2__::func_303(Global_35, Local_14.f_27[0], Local_14.f_68[Local_14.f_161], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					switch (Local_14.f_161)
					{
						case 17:
							func_81(&(Local_14.f_103), 0);
							func_83(0, 0);
							Local_14.f_4 = 2;
							func_84(1);
							break;
						case 19:
							func_81(&(Local_14.f_103), 0);
							Local_14.f_4 = 9;
							func_84(2048);
							if (func_19())
							{
								func_84(1024);
							}
							func_83(0, 0);
							break;
						case 21:
							func_81(&(Local_14.f_103), 0);
							Local_14.f_4 = 10;
							if (func_19())
							{
								func_84(32);
							}
							func_84(64);
							func_83(0, 0);
							break;
						case 22:
							func_81(&(Local_14.f_103), 0);
							Local_14.f_4 = 11;
							func_84(4096);
							func_83(0, 0);
							break;
						default:
							func_87(1, 1);
							break;
					}
					__LIB_3__::func_666(8, 1, 2, 0, 0);
					func_85();
					func_86();
				}
				else
				{
					func_87(1, 1);
				}
				break;
		}
		if (__LIB_0__::func_75(&(Local_14.f_241)))
		{
			if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, Local_14.f_27[0], 1))
			{
				if (func_19())
				{
					if (func_91(32, 0))
					{
						if (func_91(8192, 0))
						{
							func_5(67108864);
							func_83(1, 0);
						}
						else
						{
							func_83(1, 0);
							func_87(0, 1);
						}
					}
					else
					{
						func_83(1, 0);
						func_87(1, 1);
					}
				}
				else if (func_91(32, 0))
				{
					if (func_91(256, 0))
					{
						func_5(67108864);
						func_83(1, 0);
					}
					else
					{
						func_83(1, 0);
						func_87(0, 1);
					}
				}
				else if (func_91(64, 0))
				{
					func_83(1, 0);
					func_87(1, 0);
				}
				else
				{
					func_83(1, 0);
					func_87(1, 1);
				}
				if (!func_42(0, 524288))
				{
					if (func_91(1, 0))
					{
						func_92(0, "INTERACT_QUESTION", joaat("INPUT_INTERACT_LOCKON_POS"), 0);
						func_93(0, 524288);
					}
				}
			}
		}
		else if (!__LIB_2__::func_227(0, 1, Local_14.f_27[0], 1))
		{
			func_83(0, 0);
			func_81(&(Local_14.f_103), 0);
		}
	}
}

void func_26()
{
	if (!Local_899.f_46)
	{
		if (__LIB_4__::func_51(Local_14.f_27[0], 0, &(Local_899.f_5), &Local_14, 0, 0))
		{
			__LIB_3__::func_666(8, 1, 2, 0, 0);
			__LIB_2__::func_603(&(Local_14.f_27[0]), &(Local_14.f_138), &(Local_14.f_103), 1, 1);
			Local_899.f_46 = 1;
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_14.f_27[8], Local_14.f_868))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_14.f_868, "CORPSE_A", Local_14.f_27[8]);
				PED::SET_PED_TO_RAGDOLL(Local_14.f_27[8], -1, -1, 0, false, true, false);
				ENTITY::_0x18FF3110CF47115D(Local_14.f_27[8], 7, 1);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_210))
			{
				__LIB_0__::func_172(Local_14.f_210);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_209))
			{
				__LIB_0__::func_172(Local_14.f_209);
			}
			__LIB_2__::func_504(Local_14.f_27[0], 500);
			func_98();
			PED::SET_PED_CONFIG_FLAG(Global_35, 474, false);
		}
	}
	if (!func_42(0, 65536))
	{
		if (__LIB_0__::func_255(Local_14.f_27[0], 0) && __LIB_2__::func_901(Local_14.f_27[0], Global_35))
		{
			__LIB_4__::func_268(3, joaat("HONOR_EVENT_INTERVENED"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
			__LIB_3__::func_666(8, 2, 2, 0, 0);
			func_93(0, 65536);
		}
	}
}

void func_27()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_14.f_868, false))
	{
		__LIB_3__::func_319(Local_14.f_868);
		ENTITY::SET_ENTITY_COLLISION(Local_14.f_27[8], true, false);
	}
	if (!func_63(4194304, 0))
	{
		if (__LIB_2__::func_1(Local_14.f_27[0], 0, 1))
		{
			__LIB_2__::func_303(Local_14.f_27[0], Global_35, Local_14.f_68[14], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_27[0], 168, true);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_14.f_27[0], 1024, true);
			TASK::OPEN_SEQUENCE_TASK(&(Local_14.f_238));
			if (PED::IS_PED_USING_ANY_SCENARIO(Local_14.f_27[0]))
			{
				PED::_0xEEED8FAFEC331A70(Local_14.f_27[0], Global_36, 3);
			}
			else
			{
				TASK::TASK_STAND_STILL(0, 200);
			}
			if (__LIB_0__::func_195(-3297.8f, -2833.9f, -6.4f, -3356.3f, -2859.4f, -6.4f, Global_36))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_104(Local_14.f_27[0], 1), 2f, -1, 0.25f, 6291460, 40000f);
			}
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 20480, 2f, 0);
			__LIB_1__::func_474(Local_14.f_27[0], &(Local_14.f_238), 0, 0, 1, 1);
			__LIB_0__::func_325(&(Local_14.f_50[0]));
			__LIB_16__::func_4(6);
			func_5(4194304);
		}
	}
	if (!PED::IS_PED_RAGDOLL(Local_14.f_27[8]))
	{
		PED::SET_PED_TO_RAGDOLL(Local_14.f_27[8], -1, -1, 0, false, true, false);
	}
}

void func_28()
{
	func_108();
	func_109();
	if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_209))
	{
		PED::SET_PED_RESET_FLAG(Local_14.f_27[0], 172, true);
	}
	if (__LIB_1__::func_348(Global_35, Local_14.f_27[0]) < 7.5f)
	{
		if (func_42(0, 16) && !func_91(1, 0))
		{
			if (__LIB_2__::func_227(-3.5f, 1, Local_14.f_27[0], 1))
			{
				if (__LIB_2__::func_303(Local_14.f_27[0], Global_35, Local_14.f_68[1], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					func_111(&(Local_14.f_27[0]), 0, 0, 1, 0, 0, 0, 1);
					func_83(0, 0);
					func_81(&(Local_14.f_103), 0);
					func_84(1);
					func_85();
					func_86();
					Local_14.f_216 = (Local_14.f_216 * 0.5f);
				}
			}
		}
		if (!func_91(1024, 0) && !func_91(2048, 0))
		{
			if (__LIB_1__::func_348(Global_35, Local_14.f_27[0]) < Local_14.f_216)
			{
				if (func_42(0, 262144) && !func_91(2, 0))
				{
					if (__LIB_2__::func_227(-3.5f, 1, Local_14.f_27[0], 1))
					{
						if (__LIB_2__::func_303(Local_14.f_27[0], Global_35, Local_14.f_68[11], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							func_111(&(Local_14.f_27[0]), 0, 0, 1, 0, 0, 0, 1);
							func_83(0, 0);
							func_81(&(Local_14.f_103), 0);
							func_84(2);
						}
					}
				}
			}
		}
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(Local_14.f_48, &(Local_14.f_47), false, false))
	{
		func_112();
	}
	func_113(Local_14.f_27[0]);
}

bool func_29()
{
	func_114();
	if (__LIB_0__::func_48(Global_35, Local_14.f_27[0], 15f, 1))
	{
		if (Local_14.f_3 >= 2 || func_91(1, 0))
		{
			if (!func_63(8388608, 0))
			{
				__LIB_3__::func_539(8, 0, __LIB_0__::func_23());
				__LIB_3__::func_405(8, -1);
				func_5(8388608);
			}
			if (!func_63(16777216, 0))
			{
				if ((Local_14.f_3 >= 10 || func_91(1024, 0)) || func_91(2048, 0))
				{
					Local_899.f_44 = 1;
					func_5(16777216);
				}
			}
		}
	}
	switch (Local_14.f_3)
	{
		case 0:
			Local_14.f_47 = __LIB_0__::func_57(Local_14.f_27[0]);
			Local_14.f_48 = PLAYER::GET_PLAYER_INDEX();
			if (func_119())
			{
				if (__LIB_3__::func_308(&Local_899))
				{
					if (func_120())
					{
						if (func_19())
						{
							Local_14.f_212 = 20f;
						}
						else
						{
							Local_14.f_212 = (20f + 10f);
						}
						func_121();
						__LIB_16__::func_4(1);
					}
				}
			}
			break;
		case 1:
			if (func_122(&Local_899, 1077936128 /* Float: 3f */, 1114636288 /* Float: 60f */, 20f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				if (func_19())
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_868, "Bool", true, false);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_RATE(Local_14.f_868, 1.25f);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_868, "Bool", true, false);
				}
				PED::SET_PED_CONFIG_FLAG(Global_35, 474, true);
				func_93(0, 16);
				func_5(8);
				__LIB_16__::func_4(2);
			}
			break;
		case 2:
			func_123();
			if (func_19())
			{
				if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_14.f_868, "Bool"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_14.f_868) > 15f)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_868, "Bool", false, false);
					}
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_27[0], Local_14.f_234, "REST_LOOP_UNDERTAKER", 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_868, "Bool", false, false);
					__LIB_16__::func_4(8);
				}
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_14.f_868) >= 11.88f)
			{
				__LIB_16__::func_4(8);
			}
			break;
		case 8:
			if (!func_91(1, 0))
			{
				if (__LIB_1__::func_348(Global_35, Local_14.f_27[0]) < (7.5f + 2.5f))
				{
					if (!func_42(0, 32))
					{
						if (func_19())
						{
							Local_14.f_102 = func_125(func_124());
							func_126();
						}
						else if (__LIB_2__::func_303(Local_14.f_27[0], Global_35, Local_14.f_68[1], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							func_83(0, 0);
							func_81(&(Local_14.f_103), 0);
							func_84(1);
							func_85();
							func_86();
						}
						func_111(&(Local_14.f_27[0]), 3, 0, 1, 0, 0, 0, 1);
						func_93(0, 32);
					}
				}
				else
				{
					if (func_19())
					{
						func_127(Local_14.f_868, 33.5f, 2, 0, 1);
					}
					func_84(1);
				}
			}
			else
			{
				if (!func_42(0, 262144))
				{
					func_93(0, 262144);
				}
				if (func_19())
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(Local_14.f_868, func_128(2)))
					{
						if (func_127(Local_14.f_868, func_129(Local_14.f_26), 2, 0, 0))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_14.f_868);
							__LIB_16__::func_4(9);
						}
					}
					else
					{
						__LIB_16__::func_4(9);
					}
				}
				else if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_14.f_868))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_868, "undertaker", Local_14.f_27[0], 0);
					TASK::TASK_PLAY_ANIM(Local_14.f_27[0], Local_14.f_217[5 /*2*/], "struggle_push_undertaker", 2f, -2f, -1, 0, ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Local_14.f_27[8], Local_14.f_234, "struggle_push_corpse_a"), true, 0, false, 0, false);
					ANIMSCENE::SET_ANIM_SCENE_PAUSED(Local_14.f_868, false);
					__LIB_16__::func_4(9);
				}
				else
				{
					__LIB_16__::func_4(9);
				}
			}
			break;
		case 9:
			if (func_19())
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_14.f_868) >= 30.5f)
				{
					if (func_127(Local_14.f_868, 30.5f, 3, 0, 0))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_868, "undertaker", Local_14.f_27[0], 0);
						ANIMSCENE::START_ANIM_SCENE(Local_14.f_868);
						__LIB_16__::func_4(10);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_27[0], Local_14.f_217[5 /*2*/], "struggle_push_undertaker", 1))
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_14.f_27[0], -1))
				{
					TASK::TASK_PLAY_ANIM(Local_14.f_27[0], Local_14.f_217[5 /*2*/], "push_two_bodies_undertaker", 2f, -2f, -1, 0, ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_14.f_868), true, 0, false, 0, false);
				}
				__LIB_16__::func_4(10);
			}
			break;
		case 10:
			PED::SET_PED_CONFIG_FLAG(Global_35, 474, false);
			if (!__LIB_0__::func_393(Global_35, Local_14.f_208, 0, 1) || func_131(1))
			{
				if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_14.f_868, "Bool"))
				{
					func_111(&(Local_14.f_27[0]), 0, 0, 1, 0, 0, 0, 1);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_868, "Bool", true, false);
				}
			}
			func_132(0, 262144);
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_14.f_807[1 /*12*/].f_8))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_14.f_807[1 /*12*/].f_8, true);
			}
			if (!func_63(1024, 0))
			{
				if (func_19())
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_14.f_868) >= 25.79f)
					{
						func_133(&(Local_14.f_240));
						__LIB_3__::func_353("REBBR_START", 0);
						func_5(1024);
					}
				}
				else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_14.f_868) >= 44.66f)
				{
					func_133(&(Local_14.f_240));
					__LIB_3__::func_353("REBBR_START", 0);
					func_5(1024);
				}
			}
			else
			{
				if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_209))
				{
					__LIB_0__::func_172(Local_14.f_209);
				}
				func_134(&(Local_14.f_240), &(Local_14.f_213), &(Local_14.f_214), &(Local_14.f_215), &(Local_14.f_247), 1040187392 /* Float: 0.125f */, 1008981770 /* Float: 0.01f */);
			}
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_14.f_27[0], -1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_27[0], Local_14.f_217[5 /*2*/], "push_two_bodies_undertaker", 1))
			{
				if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_210))
				{
					__LIB_0__::func_172(Local_14.f_210);
				}
				__LIB_16__::func_4(6);
			}
			break;
		case 6:
			if (func_63(1024, 0))
			{
				func_134(&(Local_14.f_240), &(Local_14.f_213), &(Local_14.f_214), &(Local_14.f_215), &(Local_14.f_247), 1040187392 /* Float: 0.125f */, 1008981770 /* Float: 0.01f */);
			}
			if (!Local_899.f_46)
			{
				if (!func_63(4, 0))
				{
					if (func_135())
					{
						func_136();
						PED::SET_PED_CONFIG_FLAG(Local_14.f_27[0], 24, false);
					}
				}
				else if (!func_19() && !func_42(0, 1048576))
				{
					if (!__LIB_0__::func_75(&(Local_14.f_253)))
					{
						__LIB_1__::func_283(&(Local_14.f_253), 0);
						PED::_0xF1C03A5352243A30(Local_14.f_27[0]);
					}
					else if (__LIB_1__::func_285(&(Local_14.f_253), 10f))
					{
						func_43();
					}
				}
			}
			else if (!__LIB_0__::func_266(Global_35, Local_899.f_51, 100f, 1, 1))
			{
				return true;
			}
			break;
		case 13:
			break;
	}
	return false;
}

bool func_32()
{
	if (__LIB_3__::func_993(8, 1) == 2)
	{
		Local_14.f_68[1] = "RE_BUB_V1_PED_GREET_2ND_A";
		Local_14.f_881 = 1;
	}
	if (!func_19())
	{
		if (__LIB_3__::func_993(8, 2) == 2)
		{
			Local_14.f_880 = 1;
		}
		if (Local_14.f_880)
		{
			return false;
		}
		if (Local_14.f_881)
		{
			Local_14.f_68[1] = "RE_BUB_V1_PED_GREET_2ND_A";
		}
	}
	return true;
}

void func_34()
{
	Local_14.f_234 = "script_re@burning_bodies";
	Local_14.f_235 = "script_re@burning_bodies@upperbody";
	if (func_19())
	{
		Local_14.f_162[1 /*3*/] = { -3308.8f, -2862.3f, -5.9f };
		Local_14.f_162[4 /*3*/] = { -3311.3f, -2862.2f, -6.1f };
		Local_14.f_162[0 /*3*/] = { -3309.8f, -2856.8f, -6.1f };
		Local_14.f_162[14 /*3*/] = { -3309.8f, -2856.95f, -6.1f };
		Local_14.f_162[10 /*3*/] = { -3310.091f, -2863.191f, -7.04366f };
		Local_14.f_208 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3307.153f, -2865.031f, -7.197f, 0f, 0f, 13f, 2.2f, 2.7f, 1f, "volActivePit");
		Local_14.f_211 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -3308.801f, -2862.139f, -6.47f, 0f, 0f, -60f, 1f, 1f, 1f);
	}
	else
	{
		Local_14.f_162[1 /*3*/] = { -3313.4f, -2865f, -6.9f };
		Local_14.f_162[4 /*3*/] = { -3313.1f, -2862.9f, -6f };
		Local_14.f_162[0 /*3*/] = { -3313.71f, -2864.05f, -6.03353f };
		Local_14.f_162[14 /*3*/] = { -3319.85f, -2859.55f, -6.1f };
		Local_14.f_162[12 /*3*/] = { -3313.4f, -2865.5f, -7.1f };
		Local_14.f_162[10 /*3*/] = { -3315.423f, -2864.143f, -6.33478f };
		Local_14.f_208 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3313.28f, -2867.872f, -7.197f, 0f, 0f, 17.5f, 2.65f, 4.2f, 1f, "volActivePit");
	}
	Local_14.f_162[2 /*3*/] = { VOLUME::_GET_VOLUME_COORDS(Local_14.f_208) };
	Local_14.f_162[3 /*3*/] = { -3316.1f, -2858.6f, -6.1f };
	Local_14.f_162[5 /*3*/] = { -3307.121f, -2864.933f, -7f };
	Local_14.f_162[6 /*3*/] = { -3318.3f, -2856f, -6.1f };
	Local_14.f_162[7 /*3*/] = { -3318.3f, -2856f, -6.1f };
	Local_14.f_162[8 /*3*/] = { -3318.42f, -2858.629f, -7.08748f };
	Local_14.f_162[9 /*3*/] = { -3305.398f, -2862.067f, -7.00253f };
	Local_14.f_162[13 /*3*/] = { -3307.2f, -2865.1f, -7.7f };
}

void func_35()
{
	__LIB_2__::func_51(&(Local_899.f_5), 1);
	__LIB_2__::func_50(&(Local_899.f_5), 1);
	__LIB_2__::func_111(&(Local_899.f_5), 1);
	__LIB_2__::func_250(&(Local_899.f_5), 0);
	__LIB_3__::func_498(&(Local_899.f_5), 0);
	__LIB_2__::func_105(&(Local_899.f_5), 1);
	__LIB_2__::func_104(&(Local_899.f_5), 1);
	__LIB_5__::func_717(&(Local_899.f_5), 0);
	__LIB_2__::func_634(&(Local_899.f_5), 0);
	__LIB_2__::func_253(&(Local_899.f_5), 1, 1, 1);
	__LIB_2__::func_507(&(Local_899.f_5), 1500);
	__LIB_1__::func_975(&(Local_899.f_5), 10f);
	__LIB_2__::func_906(&(Local_899.f_5), 20);
}

void func_36(var uParam0)
{
	*(uParam0[0 /*12*/]) = { Local_14.f_162[6 /*3*/] };
	(uParam0[0 /*12*/])->f_7 = joaat("P_CART01X");
	(uParam0[0 /*12*/])->f_3 = 209.8f;
	(uParam0[0 /*12*/])->f_10 = 1;
	*(uParam0[1 /*12*/]) = { Local_14.f_162[7 /*3*/] };
	(uParam0[1 /*12*/])->f_7 = joaat("P_MATCHSTICK01X");
	(uParam0[1 /*12*/])->f_3 = 0f;
	(uParam0[1 /*12*/])->f_10 = 0;
	*(uParam0[2 /*12*/]) = { Local_14.f_162[9 /*3*/] };
	(uParam0[2 /*12*/])->f_7 = joaat("P_OILCAN01X");
	(uParam0[2 /*12*/])->f_3 = 0f;
	(uParam0[2 /*12*/])->f_10 = 0;
	*(uParam0[3 /*12*/]) = { Local_14.f_162[8 /*3*/] };
	(uParam0[3 /*12*/])->f_7 = joaat("P_BARREL_COR01X");
	(uParam0[3 /*12*/])->f_3 = 0f;
	(uParam0[3 /*12*/])->f_10 = 0;
	*(uParam0[4 /*12*/]) = { Local_14.f_162[10 /*3*/] };
	(uParam0[4 /*12*/])->f_7 = joaat("P_LANTERN04X");
	(uParam0[4 /*12*/])->f_3 = 0f;
	(uParam0[4 /*12*/])->f_10 = 0;
	__LIB_3__::func_314(uParam0);
}

void func_37()
{
	Local_14.f_99[0] = "INTERACT_GREET";
	Local_14.f_99[1] = "RE_INTER_ANTAGONIZE";
}

void func_38()
{
	if (!func_63(4096, 0))
	{
		Local_14.f_68[1] = "RE_BUB_V1_PED_GREET";
		Local_14.f_68[2] = "RE_BUB_V1_PED_REPLY1";
		Local_14.f_68[3] = "RE_BUB_V1_PED_REPLY1_1";
		Local_14.f_68[4] = "RE_BUB_V1_PED_REPLY2";
		Local_14.f_68[6] = "RE_BUB_V1_PED_REPLY1_NEG_INT_1ST_B";
		Local_14.f_68[7] = "RE_BUB_V1_PED_REPLY1_NEG_INT_1ST_C";
		Local_14.f_68[8] = "RE_BUB_V1_PLAYER_ANT_1";
		Local_14.f_68[5] = "RE_BUB_V1_PED_PICKUP_REACT";
		Local_14.f_68[9] = "RE_BUB_V1_PED_CURSE";
		Local_14.f_68[10] = "RE_BUB_V1_PED_REPLY1_NEG_INT_2ND_B";
		Local_14.f_68[11] = "BLOCKED_GENERIC";
		Local_14.f_68[12] = "RE_BUB_V1_IN_GRAVE_A";
		Local_14.f_68[13] = "RE_BUB_V1_IN_GRAVE_B";
		Local_14.f_68[14] = "RE_BUB_V1_IN_GRAVE_C";
		Local_14.f_68[15] = "RE_BUB_V1_PED_FAREWELL";
		Local_14.f_68[16] = "RE_BUB_V1_PLAYER_GREET";
		Local_14.f_68[18] = "RE_BUB_V1_PLAYER_ASK1";
		Local_14.f_68[20] = "RE_BUB_V1_PLAYER_ASK2";
		Local_14.f_68[17] = "RE_BUB_V1_PLAYER_ANTAGONIZE";
		Local_14.f_68[19] = "RE_BUB_V1_PLAYER_ASK1_NEG";
		Local_14.f_68[21] = "RE_BUB_V1_PLAYER_ASK2_NEG";
		Local_14.f_68[22] = "RE_BUB_V1_PLAYER_ASK_NEG_INT_1ST_B";
		Local_14.f_68[23] = "RE_BUB_V1_PLAYER_ASK_1ST_ROB_A";
		Local_14.f_68[24] = "RE_BUB_V1_PLAYER_FAREWELL";
		Local_14.f_68[25] = "RE_BUB_V1_PLYFINAL";
		Local_14.f_68[26] = "RE_BUB_V1_PED_GRUNT_1ST_1";
		Local_14.f_68[27] = "RE_BUB_V1_PED_GRUNT_1ST_2";
		Local_14.f_68[28] = "RE_BUB_V1_PED_CURSE_1ST_1";
		Local_14.f_68[29] = "RE_BUB_V1_PED_CURSE_1ST_2";
	}
	else
	{
		Local_14.f_68[1] = "RE_BUB_V1_PED_GREET_2ND";
		Local_14.f_68[2] = "RE_BUB_V1_PED_REPLY1_2ND";
		Local_14.f_68[3] = "RE_BUB_V1_PED_REPLY1_1_2ND";
		Local_14.f_68[4] = "RE_BUB_V1_PED_REPLY2_2ND";
		Local_14.f_68[6] = "RE_BUB_V1_PED_REPLY1_NEG_INT_2ND";
		Local_14.f_68[7] = "RE_BUB_V1_PED_REPLY1_2ND_DEFUSE";
		Local_14.f_68[8] = "RE_BUB_V1_PED_REPLY1_NEG_INT_2ND_C";
		Local_14.f_68[9] = "RE_BUB_V1_PED_CURSE";
		Local_14.f_68[10] = "RE_BUB_V1_PED_REPLY1_NEG_INT_2ND_B";
		Local_14.f_68[11] = "BLOCKED_GENERIC";
		Local_14.f_68[12] = "RE_BUB_V1_NO_RESPECT_A";
		Local_14.f_68[13] = "RE_BUB_V1_NO_RESPECT_B";
		Local_14.f_68[14] = "RE_BUB_V1_IN_GRAVE_C";
		Local_14.f_68[15] = "RE_BUB_V1_PED_FAREWELL_2ND";
		Local_14.f_68[16] = "RE_BUB_V1_PLAYER_GREET_2ND";
		Local_14.f_68[18] = "RE_BUB_V1_PLAYER_ASK1_2ND";
		Local_14.f_68[20] = "RE_BUB_V1_PLAYER_ASK2_2ND";
		Local_14.f_68[17] = "RE_BUB_V1_PLAYER_ANTAGONIZE_2ND";
		Local_14.f_68[19] = "RE_BUB_V1_PLAYER_ASK1_2ND_NEG";
		Local_14.f_68[21] = "RE_BUB_V1_PLAYER_ASK_NEG_INT_2ND_B";
		Local_14.f_68[22] = "RE_BUB_V1_PLAYER_ANT_2";
		Local_14.f_68[23] = "RE_BUB_V1_PLAYER_ASK_2ND_ROB_A";
		Local_14.f_68[24] = "RE_BUB_V1_PLAYER_FAREWELL_2ND";
		Local_14.f_68[25] = "RE_BUB_V1_PLYFINAL_2ND";
		Local_14.f_68[26] = "RE_BUB_V1_PED_GRUNT_2ND_1";
		Local_14.f_68[27] = "RE_BUB_V1_PED_GRUNT_2ND_2";
		Local_14.f_68[28] = "RE_BUB_V1_PED_CURSE_2ND_1";
		Local_14.f_68[29] = "RE_BUB_V1_PED_CURSE_2ND_2";
	}
}

void func_39(var uParam0)
{
	float fVar0;
	int iVar1;
	fVar0 = 90f;
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (!func_19())
		{
			switch (iVar1)
			{
				case 9:
					(uParam0[iVar1 /*32*/])->f_6 = { -3307.728f, -2863.764f, -7.97746f };
					(uParam0[iVar1 /*32*/])->f_9 = 90f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_M_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = -1649740092;
					break;
				case 10:
					(uParam0[iVar1 /*32*/])->f_6 = { -3307.993f, -2864.534f, -7.94277f };
					(uParam0[iVar1 /*32*/])->f_9 = 0f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_F_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = 2010884902;
					break;
				case 11:
					(uParam0[iVar1 /*32*/])->f_6 = { -3307.585f, -2865.017f, -7.95673f };
					(uParam0[iVar1 /*32*/])->f_9 = 0f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_M_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = -905326719;
					break;
				case 12:
					(uParam0[iVar1 /*32*/])->f_6 = { -3306.687f, -2864.789f, -7.9828f };
					(uParam0[iVar1 /*32*/])->f_9 = 0f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_F_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = -765468627;
					break;
				case 13:
					(uParam0[iVar1 /*32*/])->f_6 = { -3306.489f, -2865.478f, -7.92064f };
					(uParam0[iVar1 /*32*/])->f_9 = 0f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_M_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = -509575506;
					break;
				case 14:
					(uParam0[iVar1 /*32*/])->f_6 = { -3306.915f, -2865.864f, -7.90048f };
					(uParam0[iVar1 /*32*/])->f_9 = 180f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_F_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = -1420946934;
					break;
				case 15:
					(uParam0[iVar1 /*32*/])->f_6 = { -3307.547f, -2866.068f, -7.95235f };
					(uParam0[iVar1 /*32*/])->f_9 = 180f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_M_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = 118409610;
					break;
				case 16:
					(uParam0[iVar1 /*32*/])->f_6 = { -3306.691f, -2864.007f, -7.94315f };
					(uParam0[iVar1 /*32*/])->f_9 = 0f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_F_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = 419261799;
					break;
				case 1:
					(uParam0[iVar1 /*32*/])->f_6 = { -3313.77f, -2684.91f, -6.004f };
					(uParam0[iVar1 /*32*/])->f_9 = 108.19f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_F_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = 1582921710;
					break;
				case 2:
					(uParam0[iVar1 /*32*/])->f_6 = { -3313.67f, -2864.87f, -5.98f };
					(uParam0[iVar1 /*32*/])->f_9 = 116.8f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_M_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = -1803656137;
					break;
				case 3:
					(uParam0[iVar1 /*32*/])->f_6 = { -3313.32f, -2864.86f, -6.10497f };
					(uParam0[iVar1 /*32*/])->f_9 = 21.79f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_F_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = -2035791733;
					break;
				case 4:
					(uParam0[iVar1 /*32*/])->f_6 = { -3314.43f, -2866.59f, -6.91596f };
					(uParam0[iVar1 /*32*/])->f_9 = 155.08f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_M_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = -2119975294;
					break;
				case 5:
					(uParam0[iVar1 /*32*/])->f_6 = { -3313.72f, -2867.12f, -6.91149f };
					(uParam0[iVar1 /*32*/])->f_9 = 155.62f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_F_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = 1659404556;
					break;
				case 6:
					(uParam0[iVar1 /*32*/])->f_6 = { -3312.519f, -2868.302f, -7.91158f };
					(uParam0[iVar1 /*32*/])->f_9 = (fVar0 + 203f);
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_M_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = 2112435985;
					break;
				case 7:
					(uParam0[iVar1 /*32*/])->f_6 = { -3312.738f, -2868.56f, -7.88285f };
					(uParam0[iVar1 /*32*/])->f_9 = (fVar0 + -90f);
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_F_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = 1882135453;
					break;
				case 8:
					(uParam0[iVar1 /*32*/])->f_6 = { -3313.32f, -2868.873f, -7.84487f };
					(uParam0[iVar1 /*32*/])->f_9 = (fVar0 + 180f);
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_M_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = -1496774448;
					break;
				default:
					(uParam0[iVar1 /*32*/])->f_6 = { VOLUME::_GET_VOLUME_COORDS(Local_14.f_208) };
					break;
			}
			(uParam0[0 /*32*/])->f_3 = -146968301;
		}
		else
		{
			switch (iVar1)
			{
				case 1:
					(uParam0[iVar1 /*32*/])->f_6 = { -3307.253f, -2866.768f, -7.97284f };
					(uParam0[iVar1 /*32*/])->f_9 = 90f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_M_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = 1582921710;
					break;
				case 2:
					(uParam0[iVar1 /*32*/])->f_6 = { -3307.569f, -2864.955f, -7.95559f };
					(uParam0[iVar1 /*32*/])->f_9 = 0f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_F_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = -1803656137;
					break;
				case 3:
					(uParam0[iVar1 /*32*/])->f_6 = { -3307.314f, -2865.768f, -7.92894f };
					(uParam0[iVar1 /*32*/])->f_9 = 0f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_M_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = -2035791733;
					break;
				case 4:
					(uParam0[iVar1 /*32*/])->f_6 = { -3306.687f, -2864.789f, -7.9828f };
					(uParam0[iVar1 /*32*/])->f_9 = 0f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_F_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = -2119975294;
					break;
				case 5:
					(uParam0[iVar1 /*32*/])->f_6 = { -3306.489f, -2865.478f, -7.92064f };
					(uParam0[iVar1 /*32*/])->f_9 = 0f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_M_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = 1659404556;
					break;
				case 6:
					(uParam0[iVar1 /*32*/])->f_6 = { -3306.915f, -2865.864f, -7.92048f };
					(uParam0[iVar1 /*32*/])->f_9 = 180f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_F_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = 2112435985;
					break;
				case 7:
					(uParam0[iVar1 /*32*/])->f_6 = { -3307.547f, -2866.068f, -7.95235f };
					(uParam0[iVar1 /*32*/])->f_9 = 180f;
					(uParam0[iVar1 /*32*/])->f_1 = joaat("A_F_M_UNICORPSE_01");
					(uParam0[iVar1 /*32*/])->f_3 = 1882135453;
					break;
			}
			if (iVar1 == 8)
			{
				(uParam0[iVar1 /*32*/])->f_9 = 0f;
				(uParam0[iVar1 /*32*/])->f_6 = { Local_14.f_162[3 /*3*/] };
				(uParam0[iVar1 /*32*/])->f_1 = joaat("A_M_M_UNICORPSE_01");
				(uParam0[iVar1 /*32*/])->f_3 = -1496774448;
			}
			(uParam0[0 /*32*/])->f_3 = -903749480;
		}
		iVar1++;
	}
	(uParam0[0 /*32*/])->f_6 = { Local_14.f_162[0 /*3*/] };
	(uParam0[0 /*32*/])->f_1 = joaat("RE_BURNINGBODIES_MALES_01");
	StringCopy(&((uParam0[0 /*32*/])->f_23), "1080_U_M_M_ArmUndertaker_01", 64);
	(uParam0[0 /*32*/])->f_9 = __LIB_0__::func_152((uParam0[0 /*32*/])->f_6, VOLUME::_GET_VOLUME_COORDS(Local_14.f_208), 1);
	(uParam0[0 /*32*/])->f_12 = joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY");
	(uParam0[0 /*32*/])->f_15 = { -3336.305f, -2841.283f, -7.33467f };
	(uParam0[0 /*32*/])->f_18 = 208.01f;
	(uParam0[0 /*32*/])->f_13 = 0;
	(uParam0[0 /*32*/])->f_19 = 1;
	__LIB_3__::func_284(uParam0);
}

void func_40()
{
	int iVar0;
	float fVar1;
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_14.f_236))
	{
		if (func_19())
		{
			iVar0 = joaat("WORLD_HUMAN_LEAN_BACK_WALL_NO_PROPS");
		}
		else
		{
			iVar0 = joaat("WORLD_HUMAN_STAND_WAITING");
		}
		fVar1 = __LIB_0__::func_152(Local_14.f_262[0 /*32*/].f_6, Local_14.f_262[1 /*32*/].f_6, 1);
		Local_14.f_236 = TASK::CREATE_SCENARIO_POINT(iVar0, Local_14.f_262[0 /*32*/].f_6, fVar1, 0, 0, 0);
		Local_14.f_237 = TASK::CREATE_SCENARIO_POINT(iVar0, Local_14.f_262[0 /*32*/].f_6, fVar1, 0, 0, 1);
	}
}

bool func_42(int iParam0, int iParam1)
{
	if (__LIB_0__::func_27(Local_14.f_7[iParam0], iParam1))
	{
		return true;
	}
	return false;
}

void func_43()
{
	TASK::OPEN_SEQUENCE_TASK(&(Local_14.f_238));
	if (__LIB_2__::func_1(Local_14.f_262[0 /*32*/].f_11, 0, 1))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -3318.79f, -2839.18f, -6.0953f, 1f, -1, 0.25f, 2097152, 40000f);
		TASK::TASK_MOUNT_ANIMAL(0, Local_14.f_262[0 /*32*/].f_11, -1, -1, 1f, 1, 0, 0);
	}
	TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1.5f, 2560, 0);
	__LIB_1__::func_474(Local_14.f_27[0], &(Local_14.f_238), 0, 0, 1, 1);
	func_93(0, 1048576);
}

void func_45(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
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
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*uParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 0))
			{
				__LIB_3__::func_259((*uParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, uParam1[iVar0]))
				{
					__LIB_2__::func_32(uParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_416((*uParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*uParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_3__::func_468(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		func_171(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_172(uParam0->f_3, uParam0->f_185);
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
		func_173(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_49()
{
	int iVar0;
	STREAMING::REQUEST_ANIM_DICT(Local_14.f_234);
	STREAMING::REQUEST_ANIM_DICT(Local_14.f_235);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_14.f_217[iVar0 /*2*/] = Local_14.f_234;
		Local_14.f_217[iVar0 /*2*/].f_1 = func_125(iVar0);
		iVar0++;
	}
	__LIB_9__::func_574();
}

void func_50()
{
	Local_14.f_868.f_4 = "script@beat@wilderness@burningbodies@burnbodies_a";
}

bool func_51()
{
	if (func_19())
	{
		__LIB_1__::func_408(1583012985, 1, 0);
		return true;
	}
	else
	{
		__LIB_1__::func_408(1583012985, 1, 0);
		__LIB_1__::func_408(479419429, 1, 0);
		return true;
	}
	return false;
}

void func_53(int iParam0)
{
	Local_14.f_2 = iParam0;
}

bool func_63(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_27(Local_14.f_6, iParam0))
	{
		if (bParam1)
		{
		}
		return true;
	}
	if (bParam1)
	{
	}
	return false;
}

void func_64(int iParam0)
{
	int iVar0;
	iVar0 = 130;
	func_207(Local_14.f_27[iParam0], Local_14.f_262[iParam0 /*32*/].f_6, 1, 0, 1);
	if (func_19())
	{
		if (iParam0 == 8)
		{
			__LIB_3__::func_502(Local_14.f_27[iParam0], __LIB_3__::func_494(), "Dead_Camp_Fire_02_Dead", 1148846080 /* Float: 1000f */, -1065353216 /* Float: -4f */, iVar0, 0);
			ENTITY::SET_ENTITY_COLLISION(Local_14.f_27[iParam0], false, false);
		}
		else
		{
			func_210(Local_14.f_27[iParam0], 0, 1060320051 /* Float: 0.7f */, 0);
			ENTITY::_SET_ENTITY_SOMETHING(Local_14.f_27[iParam0], true);
		}
	}
	else
	{
		func_207(Local_14.f_27[iParam0], Local_14.f_262[iParam0 /*32*/].f_6, 1, 0, 1);
		func_210(Local_14.f_27[iParam0], 0, 1060320051 /* Float: 0.7f */, 0);
	}
	ENTITY::_0x18FF3110CF47115D(Local_14.f_27[iParam0], 7, 0);
	PED::_0x6569F31A01B4C097(Local_14.f_27[iParam0], 0, 0);
	PED::_0x6569F31A01B4C097(Local_14.f_27[iParam0], 1, 0);
	PED::_0x6569F31A01B4C097(Local_14.f_27[iParam0], 4, 0);
	TASK::_0x9EBD34958AB6F824(Local_14.f_27[iParam0]);
	PED::APPLY_PED_DAMAGE_PACK(Local_14.f_27[iParam0], "PD_Oil_Soak_Body", 0f, 1f);
	PED::_0xE3144B932DFDFF65(Local_14.f_27[iParam0], 0.9f, -1, true, true);
	if (__LIB_2__::func_1(Local_14.f_27[iParam0], 0, 1))
	{
		__LIB_1__::func_864(Local_14.f_27[iParam0], 1, 1);
	}
}

void func_68(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = iParam2;
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

bool func_77(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_171(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_163(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_3__::func_234(&(uParam0->f_5));
			}
			__LIB_1__::func_336(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					__LIB_3__::func_433(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!__LIB_3__::func_344(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (__LIB_1__::func_85(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[0]) && !PED::IS_PED_INJURED((*uParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*uParam1)[0])))
			{
				__LIB_3__::func_345(uParam0, (*uParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

int func_79(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_235(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_2__::func_588(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!__LIB_0__::func_474(558))
				{
					__LIB_1__::func_240(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_81(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (bParam1)
		{
			if (!__LIB_1__::func_489(uParam0[iVar0 /*17*/], 0))
			{
				__LIB_2__::func_411(uParam0[iVar0 /*17*/], 1, 0);
			}
		}
		else if (__LIB_1__::func_489(uParam0[iVar0 /*17*/], 0))
		{
			__LIB_2__::func_411(uParam0[iVar0 /*17*/], 0, 0);
		}
		iVar0++;
	}
}

int func_83(bool bParam0, float fParam1)
{
	if (!__LIB_0__::func_75(&(Local_14.f_241)))
	{
		__LIB_1__::func_283(&(Local_14.f_241), 0);
		return 0;
	}
	if (fParam1 != 0f)
	{
		if (__LIB_1__::func_285(&(Local_14.f_241), fParam1))
		{
			if (bParam0)
			{
				__LIB_3__::func_500(&(Local_14.f_241));
			}
			return 1;
		}
	}
	else if (bParam0)
	{
		__LIB_3__::func_500(&(Local_14.f_241));
	}
	return 0;
}

void func_84(int iParam0)
{
	__LIB_1__::func_336(&(Local_14.f_25), iParam0);
}

var func_85()
{
	if (!func_91(1, 0))
	{
		if (Local_14.f_160 != 16)
		{
			Local_14.f_160 = 16;
		}
	}
	else if (!func_91(1024, 0))
	{
		if (Local_14.f_160 != 18)
		{
			Local_14.f_160 = 18;
		}
	}
	else if (!func_91(32, 0))
	{
		if (Local_14.f_160 != 20)
		{
			Local_14.f_160 = 20;
		}
	}
	else if (Local_14.f_160 != 0)
	{
		Local_14.f_160 = 0;
	}
	return Local_14.f_160;
}

var func_86()
{
	if (!func_91(1, 0))
	{
		if (Local_14.f_160 != 17)
		{
			Local_14.f_160 = 17;
		}
	}
	else if (!func_91(2048, 0))
	{
		if (Local_14.f_160 != 19)
		{
			Local_14.f_161 = 19;
		}
	}
	else if (!func_91(64, 0))
	{
		if (Local_14.f_160 != 21)
		{
			Local_14.f_161 = 21;
		}
	}
	else if (!func_91(4096, 0))
	{
		if (Local_14.f_160 != 22)
		{
			Local_14.f_161 = 22;
		}
	}
	else if (Local_14.f_160 != 0)
	{
		Local_14.f_160 = 0;
	}
	return Local_14.f_161;
}

void func_87(bool bParam0, bool bParam1)
{
	__LIB_2__::func_451(&(Local_14.f_138), 0);
	if (__LIB_2__::func_1(Local_14.f_27[0], 0, 0))
	{
		PED::SET_PED_CONFIG_FLAG(Local_14.f_27[0], 301, false);
		PED::SET_PED_CONFIG_FLAG(Local_14.f_27[0], 317, true);
		PED::SET_PED_CONFIG_FLAG(Local_14.f_27[0], 297, true);
	}
	if (bParam0)
	{
		__LIB_2__::func_411(&(Local_14.f_103[0 /*17*/]), 1, 0);
	}
	if (bParam1)
	{
		__LIB_2__::func_411(&(Local_14.f_103[1 /*17*/]), 1, 0);
	}
}

bool func_91(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_27(Local_14.f_25, iParam0))
	{
		if (bParam1)
		{
		}
		return true;
	}
	if (bParam1)
	{
	}
	return false;
}

void func_92(int iParam0, char[4] cParam1, int iParam2, bool bParam3)
{
	if (!MISC::ARE_STRINGS_EQUAL(Local_14.f_99[iParam0], cParam1))
	{
		__LIB_2__::func_360(&(Local_14.f_103[iParam0 /*17*/]), cParam1);
		if (bParam3)
		{
			func_81(&(Local_14.f_103), 0);
		}
	}
}

void func_93(int iParam0, int iParam1)
{
	__LIB_1__::func_336(&(Local_14.f_7[iParam0]), iParam1);
}

void func_98()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (iVar0 >= 9 && iVar0 <= 16)
		{
			if (func_19())
			{
			}
			else if (iVar0 >= 1 && iVar0 <= 16)
			{
				if (ENTITY::_IS_ENTITY_FROZEN(Local_14.f_27[iVar0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_27[iVar0], false);
				}
			}
			iVar0++;
		}
	}
}

Vector3 func_104(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vVar0 = { 0f, 0f, 0f };
	fVar6 = 999f;
	vVar3 = { -3318.79f, -2839.18f, -6.0953f };
	fVar7 = __LIB_0__::func_94(iParam0, vVar3, 1);
	if (fVar7 < fVar6)
	{
		if (!bParam1 || fVar7 < __LIB_0__::func_94(Global_35, vVar3, 1))
		{
			vVar0 = { vVar3 };
		}
	}
	vVar3 = { -3341.41f, -2849.57f, -6.1f };
	fVar7 = __LIB_0__::func_94(iParam0, vVar3, 1);
	if (fVar7 < fVar6)
	{
		if (!bParam1 || fVar7 < __LIB_0__::func_94(Global_35, vVar3, 1))
		{
			vVar0 = { vVar3 };
		}
	}
	vVar3 = { -3305.8f, -2875.59f, -6.07f };
	fVar7 = __LIB_0__::func_94(iParam0, vVar3, 1);
	if (fVar7 < fVar6)
	{
		if (!bParam1 || fVar7 < __LIB_0__::func_94(Global_35, vVar3, 1))
		{
			vVar0 = { vVar3 };
		}
	}
	return vVar0;
}

void func_108()
{
	if (!func_42(0, 2048))
	{
		if (__LIB_2__::func_365(Global_35))
		{
			__LIB_2__::func_461(0);
			if (func_294(Local_14.f_27[0], 5))
			{
				func_93(0, 2048);
			}
		}
	}
	if (!func_42(0, 4096))
	{
		if (__LIB_0__::func_393(Global_35, Local_14.f_208, 0, 1))
		{
			func_131(0);
		}
	}
}

void func_109()
{
	if (func_63(67108864, 0))
	{
		if (!func_63(134217728, 0))
		{
			if (__LIB_2__::func_227(0, 1, Local_14.f_27[0], 1) && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				if (func_19())
				{
					if (!func_91(32768, 0))
					{
						if (__LIB_2__::func_303(Local_14.f_27[0], Global_35, Local_14.f_68[15], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							func_84(32768);
						}
					}
					else if (__LIB_2__::func_303(Global_35, Local_14.f_27[0], Local_14.f_68[24], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						func_5(134217728);
					}
				}
				else if (!func_91(16384, 0))
				{
					if (__LIB_2__::func_303(Global_35, Local_14.f_27[0], Local_14.f_68[24], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						func_84(16384);
					}
				}
				else if (__LIB_2__::func_303(Local_14.f_27[0], Global_35, Local_14.f_68[15], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					func_5(134217728);
				}
			}
		}
		else
		{
			func_295();
		}
	}
}

void func_111(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> Var0;
	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
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
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 3;
		Var0.f_18 = 2;
	}
	else
	{
		Var0.f_17 = 1;
		Var0.f_18 = 1;
	}
	Var0.f_19 = 3;
	Var0.f_20 = 2;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		__LIB_1__::func_581(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	__LIB_1__::func_681(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
	}
}

void func_112()
{
	int iVar0;
	if (!PED::IS_PED_FACING_PED(Local_14.f_27[0], Global_35, 22.5f))
	{
		iVar0 = 48;
		TASK::TASK_LOOK_AT_ENTITY(Local_14.f_27[0], Global_35, 3, iVar0, 41, 0);
	}
}

void func_113(var uParam0)
{
	if (__LIB_2__::func_227(0, 1, Global_35, 1))
	{
		switch (Local_14.f_4)
		{
			case 0:
				break;
			case 1:
				if (!func_42(0, 32))
				{
					if (__LIB_2__::func_227(-3.5f, 1, Local_14.f_27[0], 1))
					{
						if (__LIB_2__::func_303(Local_14.f_27[0], Global_35, Local_14.f_68[1], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							TASK::_0xE7FA07624574B79A(uParam0, Global_35, 1, 1, 3f, 1, 0, 0, 0);
							func_93(0, 32);
							Local_14.f_4 = 0;
						}
					}
				}
				else
				{
					func_85();
					func_86();
					Local_14.f_4 = 0;
				}
				if (!func_19())
				{
					if (func_91(2048, 0) && !func_91(64, 0))
					{
						func_84(64);
					}
				}
				break;
			case 7:
				if (__LIB_2__::func_227(-3.5f, 1, Local_14.f_27[0], 1))
				{
					func_299(3, 4, 8, 1, 1, 0);
					if (func_19())
					{
						func_299(2, 1024, 4, 0, 1, 16);
					}
					else
					{
						func_299(2, 1024, 4, 0, 1, 0);
						if (func_91(2048, 0) && !func_91(64, 0))
						{
							func_84(64);
						}
					}
				}
				break;
			case 8:
				if (__LIB_2__::func_227(-3.5f, 1, Local_14.f_27[0], 1))
				{
					func_299(4, 32, 128, 1, 1, 256);
					if (!func_19())
					{
						if (func_91(2048, 0) && !func_91(64, 0))
						{
							func_84(64);
						}
					}
				}
				break;
			case 2:
				if (!func_42(0, 32))
				{
					if (__LIB_2__::func_227(-3.5f, 1, Local_14.f_27[0], 1))
					{
						if (__LIB_2__::func_303(Local_14.f_27[0], Global_35, Local_14.f_68[1], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							TASK::_0xE7FA07624574B79A(uParam0, Global_35, 1, 1, 3f, 1, 0, 0, 0);
							func_93(0, 32);
							func_84(2048);
							func_84(1024);
						}
					}
				}
				else if (func_19())
				{
					if (__LIB_2__::func_227(-3.5f, 1, Local_14.f_27[0], 1))
					{
						func_299(3, 4, 8, 1, 1, 0);
						func_299(2, 1024, 4, 0, 1, 16);
					}
				}
				else
				{
					Local_14.f_4 = 0;
				}
				break;
			case 9:
				if (__LIB_2__::func_227(-3.5f, 1, Local_14.f_27[0], 1))
				{
					if (func_19())
					{
						func_299(3, 4, 8, 1, 1, 0);
						func_299(2, 1024, 4, 0, 1, 16);
					}
					else
					{
						func_299(6, 2048, 16, 1, 1, 0);
					}
				}
				break;
			case 10:
				if (__LIB_2__::func_227(-3.5f, 1, Local_14.f_27[0], 1))
				{
					if (func_19())
					{
						func_299(4, 16, 256, 1, 1, 128);
					}
					else
					{
						func_299(7, 16, 256, 1, 1, 0);
					}
				}
				break;
			case 11:
				if (__LIB_2__::func_227(-3.5f, 1, Local_14.f_27[0], 1))
				{
					if (func_19())
					{
						func_299(6, 256, 8192, 1, 1, 0);
					}
				}
				break;
		}
	}
}

void func_114()
{
	if (((__LIB_0__::func_48(Global_35, Local_14.f_27[0], 3f, 1) || PLAYER::_0x3EE1F7A8C32F24E1(Local_14.f_48, &(Local_14.f_47), false, false)) || func_42(0, 131072)) || !__LIB_2__::func_227(0, 1, 0, 1))
	{
		func_111(&(Local_14.f_27[0]), 3, 0, 1, 0, 0, 0, 1);
	}
	else
	{
		__LIB_3__::func_10(Local_14.f_27[0]);
	}
}

bool func_119()
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_14.f_868, true, false))
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_14.f_868, func_128(iVar1)))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_14.f_868, func_128(iVar1));
				iVar0 = 0;
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_120()
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_14.f_868, false))
	{
		if (func_19())
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_14.f_868, func_128(1), true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_868, "CORPSE_A", Local_14.f_27[8], 0);
		}
		else
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_14.f_868, func_128(4), true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_868, "CORPSE_A", Local_14.f_27[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_868, "CORPSE_B", Local_14.f_27[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_868, "CORPSE_C", Local_14.f_27[3], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_868, "CORPSEPIT_A", Local_14.f_27[4], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_868, "CORPSEPIT_B", Local_14.f_27[5], 0);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_868, "MATCH", Local_14.f_807[1 /*12*/].f_8, 1);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_868, "undertaker", Local_14.f_27[0], 0);
		ANIMSCENE::START_ANIM_SCENE(Local_14.f_868);
	}
	else
	{
		return true;
	}
	return false;
}

void func_121()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if ((iVar0 >= 1 && iVar0 <= 8) || (iVar0 >= 9 && iVar0 <= 16))
		{
			if (!__LIB_3__::func_501(Local_14.f_27[iVar0], Local_14.f_262[iVar0 /*32*/].f_6, Local_14.f_262[iVar0 /*32*/].f_9, 0.05f, 45f, 1))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_27[iVar0], Local_14.f_262[iVar0 /*32*/].f_6, Local_14.f_262[iVar0 /*32*/].f_9, true, false, true);
			}
		}
		iVar0++;
	}
}

bool func_122(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bVar1 = false;
	fVar2 = __LIB_3__::func_249(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 && __LIB_3__::func_248())
	{
		bVar1 = true;
		fVar3 = __LIB_0__::func_514(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				__LIB_3__::func_336(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			__LIB_3__::func_336(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
		}
		if (__LIB_3__::func_280(&(uParam0->f_121), iParam4, fParam1))
		{
			__LIB_3__::func_164(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(func_172(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_121[iVar0 /*9*/].f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_121[iVar0 /*9*/].f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) && !(bParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				__LIB_3__::func_164(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(func_172(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_123()
{
	float fVar0;
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_14.f_868);
	if (__LIB_2__::func_227(-4.5f, 1, Local_14.f_27[0], 1))
	{
		if (func_19())
		{
			if (!func_42(0, 64))
			{
				if (fVar0 >= 6.37f)
				{
					__LIB_2__::func_303(Local_14.f_27[0], 0, Local_14.f_68[26], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(1891783641, Local_14.f_27[0], 1);
					func_98();
					func_93(0, 64);
				}
			}
			if (!func_42(0, 256))
			{
				if (fVar0 >= 10.17f)
				{
					__LIB_2__::func_303(Local_14.f_27[0], 0, Local_14.f_68[28], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(1891783641, Local_14.f_27[0], 1);
					func_93(0, 256);
				}
			}
			if (!func_42(0, 128))
			{
				if (fVar0 >= 16.23f)
				{
					__LIB_2__::func_303(Local_14.f_27[0], 0, Local_14.f_68[27], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(1891783641, Local_14.f_27[0], 1);
					func_93(0, 128);
				}
			}
			if (!func_42(0, 512))
			{
				if (__LIB_3__::func_496(Local_14.f_27[0], "REBUB_PED_COMMENT_2", 1067030938 /* Float: 1.2f */))
				{
					__LIB_2__::func_303(Local_14.f_27[0], 0, Local_14.f_68[29], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(1891783641, Local_14.f_27[0], 1);
					func_93(0, 512);
				}
			}
		}
		else
		{
			if (!func_42(0, 256))
			{
				if (fVar0 >= 1.6f)
				{
					__LIB_2__::func_303(Local_14.f_27[0], 0, Local_14.f_68[28], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(1891783641, Local_14.f_27[0], 1);
					func_93(0, 256);
				}
			}
			if (!func_42(0, 64))
			{
				if (fVar0 >= 8.8f)
				{
					__LIB_2__::func_303(Local_14.f_27[0], 0, Local_14.f_68[26], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(1891783641, Local_14.f_27[0], 1);
					func_93(0, 64);
				}
			}
			if (!func_42(0, 128))
			{
				if (fVar0 >= 20.38f)
				{
					__LIB_2__::func_303(Local_14.f_27[0], 0, Local_14.f_68[27], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(1891783641, Local_14.f_27[0], 1);
					func_93(0, 128);
				}
			}
			if (!func_42(0, 512))
			{
				if (fVar0 >= 28.83f)
				{
					__LIB_2__::func_303(Local_14.f_27[0], 0, Local_14.f_68[29], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(1891783641, Local_14.f_27[0], 1);
					func_93(0, 512);
				}
			}
			if (!func_42(0, 1024))
			{
				if (fVar0 >= 36.1f)
				{
					__LIB_2__::func_303(Local_14.f_27[0], 0, Local_14.f_68[26], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(1891783641, Local_14.f_27[0], 1);
					func_93(0, 1024);
				}
			}
		}
	}
}

int func_124()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_14.f_27[0], 0f, -10f, 0f) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_14.f_27[0], 0f, 10f, 0f) };
	vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_14.f_27[0], 10f, 0f, 0f) };
	vVar9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_14.f_27[0], -10f, 0f, 0f) };
	if (__LIB_0__::func_195(vVar0, vVar3, Global_36))
	{
		if (__LIB_0__::func_195(vVar6, vVar9, Global_36))
		{
			return 1;
		}
		else
		{
			return 4;
		}
	}
	else if (__LIB_0__::func_195(vVar6, vVar9, Global_36))
	{
		return 0;
	}
	else
	{
		return 3;
	}
	return 2;
}

char* func_125(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "react_bk_rt_undertaker";
		case 1:
			return "react_bk_lt_undertaker";
		case 2:
			return "react_fwd_b_undertaker";
		case 3:
			return "react_rt_undertaker";
		case 4:
			return "react_lt_undertaker";
		case 5:
			return "breakout_fwd_undertaker";
		case 7:
			return "breakout_rt_undertaker";
		case 6:
			return "breakout_lt_undertaker";
		default:
			break;
	}
	return " ";
}

void func_126()
{
	Local_14.f_26 = func_318();
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_14.f_868, func_128(Local_14.f_26), false);
	if (__LIB_2__::func_303(Local_14.f_27[0], Global_35, Local_14.f_68[1], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
	{
		func_84(1);
	}
	if (!func_42(0, 131072))
	{
		func_93(0, 131072);
	}
}

bool func_127(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	if (ANIMSCENE::_0x1F0E401031E20146(iParam0, func_128(iParam2)))
	{
		return true;
	}
	if ((ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam0) >= fParam1 || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_14.f_27[0], iParam0)) || bParam3)
	{
		sVar0 = func_128(iParam2);
		if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sVar0))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sVar0, bParam4);
			return true;
		}
		else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sVar0))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sVar0);
		}
	}
	return false;
}

char* func_128(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_CARRY_FULL_DISTANCE";
		case 1:
			return "PBL_CARRY_FROM_WAGON";
		case 2:
			return "PBL_DRAG_TO_GRAVE";
		case 3:
			return "PBL_GRAVE_A";
		case 4:
			return "PBL_GRAVE_B";
		case 5:
			return "PBL_REACT_LT_A";
		case 6:
			return "PBL_REACT_BK_LT_A";
		case 7:
			return "PBL_REACT_RT_A";
		case 8:
			return "PBL_REACT_BK_RT_A";
		case 9:
			return "PBL_REACT_FWD_A";
		default:
			break;
	}
	return " ";
}

float func_129(int iParam0)
{
	float fVar0;
	fVar0 = 0f;
	switch (iParam0)
	{
		case 5:
			fVar0 = 10.8f;
			break;
		case 7:
			fVar0 = 11.1f;
			break;
		case 6:
			fVar0 = 11.9f;
			break;
		case 8:
			fVar0 = 11.4f;
			break;
		case 9:
			fVar0 = 11.6f;
			break;
	}
	return fVar0;
}

bool func_131(bool bParam0)
{
	if (func_63(33554432, 0))
	{
		return true;
	}
	if (!func_42(0, 8192))
	{
		if (!__LIB_0__::func_75(&(Local_14.f_250)))
		{
			__LIB_1__::func_283(&(Local_14.f_250), 0);
		}
		else if (__LIB_1__::func_285(&(Local_14.f_250), 2f))
		{
			if (func_294(Local_14.f_27[0], 12))
			{
				__LIB_0__::func_37(&(Local_14.f_250));
				func_93(0, 8192);
			}
		}
	}
	else if (bParam0)
	{
		if (!__LIB_0__::func_75(&(Local_14.f_250)))
		{
			__LIB_1__::func_283(&(Local_14.f_250), 0);
		}
		else if (!func_42(0, 16384))
		{
			if (__LIB_1__::func_285(&(Local_14.f_250), 0.5f))
			{
				if (func_294(Local_14.f_27[0], 13))
				{
					__LIB_1__::func_148(&(Local_14.f_250));
					func_93(0, 16384);
				}
			}
		}
		else if (__LIB_1__::func_285(&(Local_14.f_250), 6f))
		{
			func_5(33554432);
		}
	}
	return false;
}

void func_132(int iParam0, int iParam1)
{
	__LIB_0__::func_516(&(Local_14.f_7[iParam0]), iParam1);
}

void func_133(var uParam0)
{
	vector3 vVar0;
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
	{
		if (func_19())
		{
			vVar0 = { -3306.99f, -2862.6f, -7.8f };
		}
		else
		{
			vVar0 = { -3313.2f, -2865.8f, -7.7f };
		}
		*uParam0 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_beat_burning_body_fire", vVar0, 0f, 0f, 0f, 1f, false, false, false, false);
		func_322("Bodies_Smouldering", &(Local_14.f_878), 1, 0, Local_14.f_162[13 /*3*/], Local_14.f_162[13 /*3*/].f_1, Local_14.f_162[13 /*3*/].f_2, 1);
		func_322("Bodies_Ignite", &(Local_14.f_879), 0, 0, Local_14.f_162[13 /*3*/], Local_14.f_162[13 /*3*/].f_1, Local_14.f_162[13 /*3*/].f_2, 1);
	}
}

void func_134(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6)
{
	if (!__LIB_0__::func_75(uParam4))
	{
		__LIB_1__::func_283(uParam4, 0);
	}
	else if (__LIB_1__::func_285(uParam4, fParam5))
	{
		if (*uParam1 < 1f)
		{
			*uParam1 = (*uParam1 + (fParam6 * 0.5f));
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(*uParam0, "strength", *uParam1, false);
		}
		if (*uParam2 < 1f)
		{
			*uParam2 = (*uParam2 + (fParam6 * 0.75f));
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(*uParam0, "smoke", *uParam2, false);
		}
		if (*uParam3 < 1f)
		{
			*uParam3 = (*uParam3 + fParam6);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(*uParam0, "spread", *uParam3, false);
		}
		__LIB_1__::func_148(uParam4);
	}
}

bool func_135()
{
	if (func_19())
	{
		if (__LIB_0__::func_266(Local_14.f_27[0], Local_14.f_162[0 /*3*/], 0.5f, 1, 1))
		{
			return true;
		}
		else if (!__LIB_0__::func_163(Local_14.f_27[0], 2106541073))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(Local_14.f_27[0], Local_14.f_162[0 /*3*/], 1f, 20000, 1193033728 /* Float: 40000f */, 0.2f, 0);
			func_324(8192);
		}
	}
	else
	{
		return true;
	}
	return false;
}

int func_136()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	if (!func_63(4, 0))
	{
		iVar0 = Local_14.f_237;
		iVar1 = 0;
		bVar2 = false;
		fVar3 = 1f;
		TASK::_SET_SCENARIO_POINT_FLAG(iVar0, 35, true);
		TASK::OPEN_SEQUENCE_TASK(&(Local_14.f_238));
		if (func_19())
		{
			bVar2 = true;
			fVar3 = 0f;
		}
		else
		{
			iVar1 = "WORLD_HUMAN_STAND_WAITING_MALE_A";
		}
		TASK::_TASK_USE_SCENARIO_POINT(0, iVar0, iVar1, -1, bVar2, false, 0, false, fVar3, false);
		__LIB_1__::func_474(Local_14.f_27[0], &(Local_14.f_238), 0, 0, 1, 1);
		func_5(4);
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_171(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { __LIB_3__::func_179(uParam0) };
	iVar3 = func_172(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

int func_172(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
				Jump @5429; //curOff = 4117
				return -1217205534;
				Jump @5429; //curOff = 4128
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
				Jump @5429; //curOff = 4175
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
				Jump @5429; //curOff = 4250
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
				Jump @5429; //curOff = 4283
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
				Jump @5429; //curOff = 4414
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
				Jump @5429; //curOff = 4461
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
				Jump @5429; //curOff = 4507
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
				Jump @5429; //curOff = 4582
				return -307424281;
				Jump @5429; //curOff = 4593
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
				Jump @5429; //curOff = 4640
				return -1979014350;
				Jump @5429; //curOff = 4651
				return 2096137174;
				Jump @5429; //curOff = 4662
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
				Jump @5429; //curOff = 4723
				return 1152564685;
				Jump @5429; //curOff = 4734
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
				Jump @5429; //curOff = 4879
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
				Jump @5429; //curOff = 4926
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
				Jump @5429; //curOff = 4973
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
				Jump @5429; //curOff = 5020
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
				Jump @5429; //curOff = 5066
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
				Jump @5429; //curOff = 5155
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
				Jump @5429; //curOff = 5188
				return 1487351956;
				Jump @5429; //curOff = 5199
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
				Jump @5429; //curOff = 5274
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
				Jump @5429; //curOff = 5321
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
				Jump @5429; //curOff = 5368
				return -689015496;
				Jump @5429; //curOff = 5379
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
			}
			else
			{
				switch (iParam0)
				{
					case 119:
						return 1996937952;
				}
			}
			return 1968536545;
		}
void func_173(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (__LIB_0__::func_2() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

void func_207(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6)
{
	vector3 vVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar0 = { vParam1 };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vVar0, bParam4, bParam5, bParam6, true);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, bParam4, bParam5, bParam6, true);
		}
	}
}

void func_210(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	__LIB_3__::func_502(iParam0, __LIB_3__::func_494(), __LIB_9__::func_575(MISC::GET_RANDOM_INT_IN_RANGE(0, 6)), 1148846080 /* Float: 1000f */, -1065353216 /* Float: -4f */, iParam3, 0);
	if (bParam1)
	{
		__LIB_4__::func_178(iParam0, fParam2);
	}
}

int func_235(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		__LIB_1__::func_487(&iParam8);
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
		if (__LIB_2__::func_525(*uParam0, iParam1, uParam3))
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
						return func_235(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
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
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
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

bool func_294(int iParam0, int iParam1)
{
	if (__LIB_2__::func_227(0, 1, 0, 0))
	{
		if (__LIB_2__::func_303(iParam0, Global_35, Local_14.f_68[iParam1], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_295()
{
	if (!func_91(65536, 0))
	{
		if (__LIB_2__::func_227(0, 1, Local_14.f_27[0], 1) && __LIB_2__::func_227(0, 1, Global_35, 1))
		{
			if (func_63(134217728, 0))
			{
				if (!__LIB_0__::func_75(&(Local_14.f_259)))
				{
					__LIB_1__::func_283(&(Local_14.f_259), 0);
				}
				else if (__LIB_1__::func_285(&(Local_14.f_259), 3f))
				{
					if (__LIB_2__::func_303(Global_35, Global_35, Local_14.f_68[25], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						func_84(65536);
					}
				}
			}
		}
	}
}

void func_299(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (func_91(iParam1, 0))
	{
		if (!func_91(iParam2, 0))
		{
			func_524(iParam0, iParam1, iParam2, bParam3, bParam4, iParam5);
		}
	}
}

int func_318()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_14.f_27[0], 0f, -10f, 0f) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_14.f_27[0], 0f, 10f, 0f) };
	vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_14.f_27[0], 10f, 0f, 0f) };
	vVar9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_14.f_27[0], -10f, 0f, 0f) };
	if (__LIB_0__::func_195(vVar0, vVar3, Global_36))
	{
		if (__LIB_0__::func_195(vVar6, vVar9, Global_36))
		{
			return 6;
		}
		else
		{
			return 5;
		}
	}
	else if (__LIB_0__::func_195(vVar6, vVar9, Global_36))
	{
		return 8;
	}
	else
	{
		return 7;
	}
	return 9;
}

void func_322(char* sParam0, var uParam1, bool bParam2, int iParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	func_537(uParam1);
	if (bParam2)
	{
		*uParam1 = AUDIO::GET_SOUND_ID();
	}
	else
	{
		*uParam1 = -1;
	}
	if (iParam3 != 0)
	{
		AUDIO::_0xF1C5310FEAA36B48(*uParam1, sParam0, iParam3, 0, 0, 0);
	}
	else if ((fParam4 != 0f || fParam5 != 0f) || fParam6 != 0f)
	{
		AUDIO::_0xDCF5BA95BBF0FABA(*uParam1, sParam0, fParam4, fParam5, fParam6, "", 0, 0, iParam7);
	}
	else
	{
		AUDIO::_0xCE5D0FFE83939AF1(*uParam1, sParam0, 0, 1);
	}
}

void func_324(int iParam0)
{
	__LIB_0__::func_516(&(Local_14.f_6), iParam0);
}

void func_524(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (func_91(iParam1, 0))
	{
		if (__LIB_2__::func_303(Local_14.f_27[0], Global_35, Local_14.f_68[iParam0], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
		{
			if (bParam4)
			{
				TASK::_0xE7FA07624574B79A(Local_14.f_27[0], Global_35, 1, 1, 3f, 1, 0, 0, 0);
			}
			if (bParam3)
			{
				func_85();
				func_86();
				Local_14.f_4 = 0;
			}
			func_84(iParam2);
			if (iParam5 != 0)
			{
				func_84(iParam5);
			}
		}
	}
}

void func_537(var uParam0)
{
	if (*uParam0 != -1)
	{
		AUDIO::_0x3210BCB36AF7621B(*uParam0);
		AUDIO::RELEASE_SOUND_ID(*uParam0);
		*uParam0 = -1;
	}
}

