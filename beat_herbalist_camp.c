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
	struct<161> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 1;
	var uLocal_181 = 1;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = -1;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 1;
	var uLocal_199 = -1;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	struct<534> Local_208 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -89429847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 100, -1082130432, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 100, -1082130432, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 100, -1082130432, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 100, -1082130432, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = -1;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 1097859072;
	var uLocal_763 = 1000;
	var uLocal_764 = 1067450368;
	var uLocal_765 = 5000;
	var uLocal_766 = 42;
	var uLocal_767 = 1103626240;
	var uLocal_768 = 1077936128;
	var uLocal_769 = 1106247680;
	var uLocal_770 = 1103101952;
	var uLocal_771 = 1097859072;
	var uLocal_772 = 1103626240;
	int iLocal_773 = 0;
	int iLocal_774 = 0;
	int iLocal_775 = 0;
	var uLocal_776 = 0;
	int iLocal_777 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_774 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	__LIB_3__::func_368(&Local_14, 1);
	__LIB_3__::func_560(&Local_14, &uScriptParam_0);
	if (!func_4(&uScriptParam_0, &iVar0))
	{
		func_1();
	}
	while (true)
	{
		switch (iVar0)
		{
			case 1:
				if (func_5(&uScriptParam_0, &iVar0))
				{
					if (Local_14.f_160)
					{
						func_1();
					}
				}
				break;
			case 0:
				if (func_6(&iVar0))
				{
					if (Local_14.f_160)
					{
						func_1();
					}
				}
				break;
			case 3:
				if (func_7(&iVar0))
				{
					if (Local_14.f_160)
					{
						func_1();
					}
				}
				break;
			case 4:
				if (func_8())
				{
					func_1();
				}
				break;
		}
		func_11(&(Local_208.f_477), __LIB_3__::func_179(&Local_14), __LIB_3__::func_526(&Local_14));
		BUILTIN::WAIT(Local_14.f_158);
	}
	func_1();
}

void func_1()
{
	var uVar0[1];
	var uVar2;
	uVar2 = 1;
	uVar0[0] = Local_208.f_7;
	func_12(&Local_208, &Local_14, 0);
	if (__LIB_13__::func_727(&Local_208, 12))
	{
		if (!__LIB_13__::func_727(&Local_208, 15))
		{
			if (!__LIB_0__::func_266(Global_35, __LIB_3__::func_179(&Local_14), 45f, 1, 1))
			{
				__LIB_19__::func_285();
				Local_14.f_44 = 1;
			}
		}
	}
	if (!Local_14.f_44)
	{
		if (__LIB_13__::func_727(&Local_208, 12) || __LIB_13__::func_727(&Local_208, 15))
		{
			Local_14.f_44 = 1;
			if (__LIB_0__::func_181() && !__LIB_11__::func_192(5))
			{
				func_18();
			}
		}
	}
	__LIB_0__::func_769();
	func_20(&Local_208);
	func_21(&Local_208);
	func_22(&Local_208);
	__LIB_18__::func_654(&Local_208);
	__LIB_3__::func_709(&Local_14, &uVar0, &uVar2, Local_208.f_2, iLocal_774, __LIB_3__::func_172(&Local_14), 0, 1, 0, 1);
	__LIB_2__::func_822();
}

bool func_4(var uParam0, int iParam1)
{
	var uVar0;
	func_31(&(Local_208.f_2), &uVar0);
	__LIB_2__::func_111(&(Local_14.f_5), 1);
	*iParam1 = 1;
	return true;
}

bool func_5(var uParam0, int iParam1)
{
	if (__LIB_3__::func_669(&Local_14, uParam0, 0, 0, 0, 1, 0, 1))
	{
		func_34(&Local_14, &iLocal_774, &(Local_14.f_51.f_4));
		__LIB_3__::func_455(&Local_14, iLocal_774, 4346);
		if (!func_37(iLocal_774, &Local_208, &(Local_208.f_2)))
		{
			Local_14.f_160 = 1;
			return true;
		}
		*iParam1 = 0;
		func_38(&Local_208, &Local_14);
		__LIB_3__::func_986(&uLocal_745);
		return true;
	}
	return Local_14.f_160;
}

bool func_6(int iParam0)
{
	switch (iLocal_775)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_14))
			{
				__LIB_13__::func_820(&(Local_208.f_20), iLocal_774);
				func_42(Local_208.f_20.f_1);
				__LIB_18__::func_655(&(Local_208.f_434), iLocal_774, __LIB_3__::func_172(&Local_14), 0);
				Local_208.f_240 = __LIB_18__::func_669(&Local_208);
				iLocal_773 = joaat("PG_HERBALISTCAMP01X");
				STREAMING::REQUEST_MODEL(__LIB_13__::func_737(Local_208.f_240), false);
				iLocal_775 = 1;
			}
			break;
		case 1:
			if (!__LIB_13__::func_736(iLocal_773, 0))
			{
				return false;
			}
			if (!__LIB_13__::func_821(&(Local_208.f_20)))
			{
				return false;
			}
			if (!__LIB_18__::func_656(Local_208))
			{
				return false;
			}
			if (!__LIB_2__::func_313(joaat("SCRIPT_REHOB_HERBALIST")))
			{
				return false;
			}
			if (!__LIB_18__::func_658(Local_208))
			{
				return false;
			}
			if (!func_51(&Local_208))
			{
				return false;
			}
			if (!__LIB_18__::func_657(&(Local_208.f_434)))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(__LIB_13__::func_737(Local_208.f_240)))
			{
				return false;
			}
			if (func_53(Local_208, &uLocal_776, &(Local_208.f_112), &(Local_208.f_133), &(Local_208.f_154), &(Local_208.f_175)))
			{
				*iParam0 = 3;
				return true;
			}
			break;
	}
	return false;
}

bool func_7(int iParam0)
{
	struct<4> Var0;
	Var0 = { __LIB_13__::func_728(3) };
	switch (iLocal_777)
	{
		case 0:
			if (func_55(&(Local_208.f_85), __LIB_3__::func_179(&Local_14), __LIB_3__::func_526(&Local_14), iLocal_773))
			{
				__LIB_19__::func_291(&(Local_208.f_90), Local_208, Local_208.f_85);
				iLocal_777 = 3;
			}
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Local_208.f_90[2]))
			{
				func_57(&(Local_208.f_90), Local_208, __LIB_3__::func_179(&Local_14), __LIB_3__::func_526(&Local_14), Local_208.f_90[2], 1);
				__LIB_13__::func_766(Local_208.f_85, joaat("P_SAWBUCKTABLE01X"), &(Local_208.f_111), 0, 0);
				if (__LIB_4__::func_289(&Local_208) == 19)
				{
					Local_208.f_90[8] = OBJECT::CREATE_OBJECT(joaat("S_INV_HUMBIRDSAGE01BX"), __LIB_3__::func_179(&Local_14), true, true, false, false, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_208.f_90[8], Local_208.f_111, 0, -0.075f, 0.225f, 0.85f, 0f, 102f, 0.85f, false, false, false, false, 2, true, false, false);
				}
				else if (__LIB_4__::func_289(&Local_208) == 18)
				{
					Local_208.f_90[6] = OBJECT::CREATE_OBJECT(joaat("S_INV_GOLDENCURRANT01BX"), __LIB_3__::func_179(&Local_14), true, true, false, false, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_208.f_90[6], Local_208.f_111, 0, -0.075f, 0.225f, 0.85f, 0f, 102f, 0.85f, false, false, false, false, 2, true, false, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_208.f_90[9]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_208.f_90[9], Local_208.f_90[2], 0, -0.4453f, -0.1099f, 0.791f, 0f, 0f, 166.8399f, false, false, false, false, 2, true, false, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_208.f_90[3]))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_208.f_90[3], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_208.f_90[2], Var0), __LIB_2__::func_709((ENTITY::GET_ENTITY_HEADING(Local_208.f_90[2]) + Var0.f_3.f_2)), true, false, true);
					ENTITY::PLAY_ENTITY_ANIM(Local_208.f_90[3], "MORTAR_PESTAL_STATIC", "SCRIPT_RE@HERBALISTCAMP", 1000f, false, true, true, 0f, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_208.f_90[4]))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_208.f_90[4], false);
					ENTITY::SET_ENTITY_COLLISION(Local_208.f_90[4], false, false);
					__LIB_3__::func_459(Local_208.f_90[4], 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_208.f_90[0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_208.f_90[0], true);
				}
				Local_208.f_242 = OBJECT::CREATE_OBJECT(__LIB_13__::func_737(Local_208.f_240), __LIB_3__::func_179(&Local_14), true, true, false, false, true);
				ENTITY::SET_ENTITY_VISIBLE(Local_208.f_242, false);
				iLocal_777 = 2;
			}
			else
			{
				Local_14.f_160 = 1;
				return true;
			}
			break;
		case 2:
			if (__LIB_3__::func_308(&Local_14))
			{
				Local_208.f_7 = func_62(&(Local_208.f_20), __LIB_3__::func_179(&Local_14), __LIB_3__::func_526(&Local_14));
				if (ENTITY::IS_ENTITY_DEAD(Local_208.f_7))
				{
					Local_14.f_160 = 1;
					return true;
				}
				if (__LIB_0__::func_181() && !__LIB_11__::func_192(5))
				{
					func_63(&Local_208);
				}
				else
				{
					func_64(&Local_208);
				}
				iLocal_777 = 1;
			}
			break;
		case 1:
			func_65(&Local_208, __LIB_3__::func_179(&Local_14), __LIB_3__::func_526(&Local_14));
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_208.f_90[2], false);
			PED::_0x24C82EF607105FAA(Local_208.f_7, joaat("AVOID"));
			PED::SET_PED_CONFIG_FLAG(Local_208.f_7, 234, true);
			func_66(&(Local_208.f_434), Local_208.f_7, 1);
			if (func_67(&(Local_208.f_434)))
			{
				iLocal_777 = 4;
			}
			else
			{
				*iParam0 = 4;
				return true;
			}
			break;
		case 4:
			__LIB_13__::func_822(&Local_208, &Local_14, 1109393408 /* Float: 40f */, 1101004800 /* Float: 20f */);
			__LIB_19__::func_485(&Local_208, &Local_14);
			Local_208.f_532 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(__LIB_3__::func_179(&Local_14), 0f, 0f, -3.807318f, 2.1f, 2.043975f, 1.310691f, "m_volHerbReturn");
			Local_208.f_533 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), __LIB_3__::func_179(&Local_14), 0f, 0f, 0f, 1.033522f, 1.130385f, 1.487637f);
			PED::_0x7C00CFC48A782DC0(Local_208.f_532, Local_208.f_90[2], 0f, -0.9f, 0.7f, VOLUME::_GET_VOLUME_ROTATION(Local_208.f_532), 2, 1);
			PED::_0x7C00CFC48A782DC0(Local_208.f_533, Local_208.f_90[2], 0.1f, 1.95f, 1.025f, VOLUME::_GET_VOLUME_ROTATION(Local_208.f_532), 2, 1);
			if (Local_208.f_2 != 2)
			{
				__LIB_18__::func_659(&Local_208, 0, joaat("SCRIPT_COMMON_STAND_HERBALIST"), 0, 1, 1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_208.f_434.f_6))
			{
				Local_208.f_86 = PROPSET::_CREATE_PROPSET_3(joaat("PG_HERBALISTCAMP01X_CART"), 0f, 0f, 0f, Local_208.f_434.f_6, 0f, false, 1, false);
				if (PROPSET::_DOES_PROPSET_EXIST(Local_208.f_86))
				{
					ENTITY::_0x9587913B9E772D29(Local_208.f_434.f_6, 1);
					*iParam0 = 4;
				}
				else
				{
					Local_14.f_160 = 1;
				}
				return true;
			}
			else
			{
				Local_14.f_160 = 1;
				return true;
			}
			break;
	}
	return false;
}

bool func_8()
{
	var uVar0[1];
	bool bVar2;
	uVar0[0] = Local_208.f_7;
	if (__LIB_13__::func_727(&Local_208, 13))
	{
		if (!__LIB_13__::func_727(&Local_208, 14))
		{
			if (!__LIB_0__::func_266(Global_35, __LIB_3__::func_179(&Local_14), 250f, 1, 1))
			{
				__LIB_0__::func_45("HRB_WARN", 10000, 0, 0, 0, 1);
				__LIB_13__::func_724(&Local_208, 14);
			}
		}
		else if (__LIB_0__::func_266(Global_35, __LIB_3__::func_179(&Local_14), 230f, 1, 1))
		{
			__LIB_13__::func_730(&Local_208, 14);
		}
		if (!__LIB_0__::func_266(Global_35, __LIB_3__::func_179(&Local_14), 280f, 1, 1))
		{
			__LIB_3__::func_662("HRB_FAIL", 7500, 0, 0, -1, -1, 0);
			return true;
		}
	}
	if (func_75(&Local_208, &Local_14, Local_208.f_2, &uLocal_745))
	{
		Local_14.f_44 = 1;
		return true;
	}
	if (!__LIB_3__::func_466(&Local_14, &uVar0, Local_208.f_2, 0, 1, 0, 1, 0))
	{
		return true;
	}
	bVar2 = __LIB_13__::func_727(&Local_208, 13);
	if (__LIB_3__::func_431(&Local_14, &uVar0, 1, 1, 0, bVar2, 1, 1, bVar2, 0, 0, 0, 0))
	{
		return true;
	}
	return false;
}

void func_11(var uParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, __LIB_13__::func_729()) };
	if (!__LIB_0__::func_86(vVar0))
	{
		__LIB_4__::func_319(uParam0, vVar0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_12(var uParam0, var uParam1, bool bParam2)
{
	if (uParam1->f_46)
	{
		__LIB_19__::func_286();
	}
	if (!bParam2)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_87))
		{
			TASK::_DELETE_SCENARIO_POINT(uParam0->f_87);
		}
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_89))
		{
			TASK::_DELETE_SCENARIO_POINT(uParam0->f_89);
		}
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_88))
		{
			TASK::_DELETE_SCENARIO_POINT(uParam0->f_88);
		}
		__LIB_3__::func_437(&(uParam0->f_112));
		__LIB_3__::func_437(&(uParam0->f_133));
		if (PROPSET::_DOES_PROPSET_EXIST(uParam0->f_85))
		{
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(uParam0->f_85);
		}
		if (PROPSET::_DOES_PROPSET_EXIST(uParam0->f_86))
		{
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(uParam0->f_86);
		}
		func_20(uParam0);
		func_21(uParam0);
		func_22(uParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 234, false);
	}
	else if (uParam1->f_46 && !__LIB_13__::func_727(uParam0, 1))
	{
		__LIB_19__::func_284();
	}
	if (__LIB_13__::func_727(uParam0, 24))
	{
		__LIB_19__::func_287();
	}
	if (uParam1->f_44)
	{
		__LIB_2__::func_115(40, 1, 0, 0, 12, 0, 0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		__LIB_2__::func_145(uParam0->f_8, 0);
	}
	__LIB_3__::func_711(&(uParam0->f_477), 106);
}

void func_18()
{
	__LIB_18__::func_652(5);
}

void func_20(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_531))
	{
		__LIB_3__::func_142(uParam0->f_531);
	}
}

void func_21(var uParam0)
{
	__LIB_0__::func_172(uParam0->f_239);
}

void func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_0__::func_172(uParam0->f_234[iVar0]);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 11)
	{
		__LIB_2__::func_353(&(uParam0->f_222[iVar1]), 1);
		iVar1++;
	}
}

void func_31(var uParam0, var uParam1)
{
	*uParam1 = 0;
	if (func_117())
	{
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 1;
	}
}

void func_34(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 1;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 4;
			*uParam2 = 0;
			break;
		case 2:
			*iParam1 = 4;
			*uParam2 = 1;
			break;
		case 3:
			*iParam1 = 6;
			*uParam2 = 0;
			break;
		case 4:
			*iParam1 = 6;
			*uParam2 = 1;
			break;
		case 5:
			*iParam1 = 9;
			*uParam2 = 0;
			break;
		case 6:
			*iParam1 = 9;
			*uParam2 = 1;
			break;
		case 7:
			*iParam1 = 10;
			*uParam2 = 0;
			break;
		case 8:
			*iParam1 = 10;
			*uParam2 = 1;
			break;
		case 9:
			*iParam1 = 11;
			*uParam2 = 0;
			break;
		case 10:
			*iParam1 = 11;
			*uParam2 = 1;
			break;
		case 11:
			*iParam1 = 11;
			*uParam2 = 2;
			break;
		case 12:
			*iParam1 = 11;
			*uParam2 = 3;
			break;
		case 13:
			*iParam1 = 12;
			*uParam2 = 0;
			break;
		case 14:
			*iParam1 = 12;
			*uParam2 = 1;
			break;
		case 15:
			*iParam1 = 12;
			*uParam2 = 2;
			break;
		case 16:
			*iParam1 = 15;
			*uParam2 = 0;
			break;
	}
}

Vector3 func_35(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 310.25f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -19.44f;
				case 1:
					return 0f, 0f, 196.56f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -59.76f;
				case 1:
					return 0f, 0f, -39.6f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 61.92f;
				case 1:
					return 0f, 0f, -202.32f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 159.84f;
				case 1:
					return 0f, 0f, 126.72f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 261.36f;
				case 1:
					return 0f, 0f, -23.76f;
				case 2:
					return 0f, 0f, 163.44f;
				case 3:
					return 0f, 0f, -174.24f;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -295.2f;
				case 1:
					return 0f, 0f, -4.32f;
				case 2:
					return 0f, 0f, -210.96f;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 148.32f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_37(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	bVar0 = false;
	switch (iParam0)
	{
		case 1:
		case 6:
		case 12:
			*uParam1 = 19;
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			*uParam1 = 40;
			break;
		default:
			*uParam1 = func_125(iParam0, !bVar0, 0, 119, 0);
			break;
	}
	if ((iParam0 == 12 || iParam0 == 1) || iParam0 == 6)
	{
		*uParam1 = 19;
	}
	if (*uParam1 == 0)
	{
		return false;
	}
	if ((__LIB_0__::func_181() && *uParam1 == 43) && !bVar0)
	{
		return false;
	}
	switch (*uParam1)
	{
		case 18:
		case 19:
		case 40:
		case 43:
			if (*uParam1 != 43 && *uParam2 != 1)
			{
				*uParam2 = 1;
			}
			return true;
	}
	return false;
}

void func_38(var uParam0, var uParam1)
{
	__LIB_4__::func_183(&(uParam0->f_239), joaat("VOLCYLINDER"), __LIB_3__::func_179(uParam1), 0f, 0f, 0f, 5f, 5f, 5f);
}

bool func_42(int iParam0)
{
	bool bVar0;
	bVar0 = false;
	if (!__LIB_2__::func_312(joaat("SCRIPT_REHOB_HERBALIST"), 262145, iParam0, joaat("SCRIPT_COMMON_STAND_HERBALIST")))
	{
		bVar0 = true;
	}
	if (!__LIB_2__::func_312(joaat("SCRIPT_REHOB_HERBALIST"), 262145, iParam0, joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST")))
	{
		bVar0 = true;
	}
	if (!__LIB_2__::func_312(joaat("SCRIPT_REHOB_HERBALIST"), 262145, iParam0, joaat("WORLD_HUMAN_SIT_GROUND_MALE_A")))
	{
		bVar0 = true;
	}
	if (!__LIB_2__::func_312(joaat("SCRIPT_REHOB_HERBALIST"), 262161, iParam0, joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST")))
	{
		bVar0 = true;
	}
	return !bVar0;
}

bool func_51(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_13__::func_737(iParam0->f_240);
	if (STREAMING::IS_MODEL_VALID(iVar0))
	{
		if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
			return false;
		}
		return true;
	}
	return false;
}

bool func_53(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	switch (*uParam1)
	{
		case 0:
			if (!func_145(uParam2, iParam0, 1, __LIB_13__::func_757(iParam0, 0, 1, 2, 3)))
			{
				return false;
			}
			if (!__LIB_3__::func_632(uParam3, "script@beat@wilderness@herbalistCamp@playerScene", 27835, 27985, __LIB_13__::func_759(iParam0), 0, 0, 0, 0))
			{
				return false;
			}
			if (!__LIB_3__::func_632(uParam4, "script@beat@wilderness@herbalistcamp@directional_exchange_new", 27835, 27985, 4, 0, 0, 0, 0))
			{
				return false;
			}
			if (!__LIB_3__::func_632(uParam5, "script@beat@wilderness@herbalistcamp@forward_exchange_new", 27835, 27985, 4, 0, 0, 0, 0))
			{
				return false;
			}
			*uParam1 = 1;
			break;
		case 1:
			if (((!__LIB_3__::func_633(uParam2) || !__LIB_3__::func_633(uParam3)) || !__LIB_3__::func_633(uParam4)) || !__LIB_3__::func_633(uParam5))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_55(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (!PROPSET::_DOES_PROPSET_EXIST(*uParam0))
	{
		*uParam0 = PROPSET::_CREATE_PROPSET(iParam5, vParam1, 0, fParam4, 1200f, false, true);
		return false;
	}
	else
	{
		return PROPSET::_IS_PROPSET_VALID(*uParam0);
	}
	return false;
}

void func_57(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7)
{
	int iVar0;
	struct<4> Var1;
	int iVar7;
	int iVar8;
	int iVar9;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			if (__LIB_18__::func_653(iVar0, iParam1))
			{
				iVar7 = __LIB_13__::func_735(iVar0, iParam1);
				if (__LIB_13__::func_760(iVar0))
				{
					Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam2, fParam5, __LIB_13__::func_761(iVar0)) };
					if (bParam7)
					{
						(*uParam0)[iVar0] = OBJECT::CREATE_OBJECT(iVar7, Var1, true, true, false, false, true);
					}
					else
					{
						iVar8 = __LIB_13__::func_762(iVar7, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar8))
						{
							(*uParam0)[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar8);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
					{
						ENTITY::SET_ENTITY_HEADING((*uParam0)[iVar0], __LIB_2__::func_709((fParam5 + __LIB_13__::func_763(iVar0))));
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam0)[iVar0], true, true);
						__LIB_9__::func_800((*uParam0)[iVar0]);
					}
				}
				else
				{
					Var1 = { __LIB_13__::func_728(iVar0) };
					if (!__LIB_0__::func_86(Var1))
					{
						if (bParam7)
						{
							(*uParam0)[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar7, vParam2, true, true, false, true);
						}
						else
						{
							iVar9 = __LIB_13__::func_762(iVar7, 1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar9))
							{
								(*uParam0)[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar9);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
						{
							__LIB_9__::func_800((*uParam0)[iVar0]);
						}
						if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && __LIB_13__::func_764(iVar0))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY((*uParam0)[iVar0], iParam6, -1, Var1, Var1.f_3, true, true, false, false, 2, true, false, false);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam0)[iVar0], true, true);
						}
					}
				}
				if (iVar0 == 19)
				{
					if (!bParam7)
					{
						(*uParam0)[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar7, vParam2, true, true, false, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iVar0], false);
					}
				}
			}
		}
		iVar0++;
	}
}

int func_62(var uParam0, vector3 vParam1, float fParam4)
{
	return __LIB_3__::func_870(uParam0->f_1, uParam0, vParam1, fParam4, 1, 0, 1, 0, 1);
}

void func_63(int iParam0)
{
	var uVar0;
	var uVar1;
	uVar1 = PLAYER::_0x0139637A3BFF8B6D(iParam0->f_7, &uVar0);
	PLAYER::_0xCDDD4B74660E2335(PLAYER::PLAYER_ID(), uVar0, uVar1);
}

void func_64(int iParam0)
{
	var uVar0;
	var uVar1;
	uVar1 = PLAYER::_0x0139637A3BFF8B6D(iParam0->f_7, &uVar0);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), uVar0, uVar1);
}

int func_65(int iParam0, var uParam1, float fParam2, var uParam3, float fParam4)
{
	struct<4> Var0;
	vector3 vVar4;
	float fVar7;
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_87))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_90[2]))
		{
			Var0 = { __LIB_13__::func_752(iParam0) };
			iParam0->f_87 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iParam0->f_90[2], joaat("SCRIPT_REHOB_HERBALIST"), Var0, Var0.f_3, 0, -1f, 1);
			__LIB_18__::func_672(iParam0, 0);
		}
		else
		{
			iParam0->f_90[2] = OBJECT::CREATE_OBJECT(joaat("P_CRATETABLE01X"), 556.813f, 172.2274f, 133.3552f, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_90[2], 0f, 0f, -142.76f, 2, true);
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_89) && TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_87))
	{
		vVar4 = { TASK::_GET_SCENARIO_POINT_COORDS(iParam0->f_87, true) };
		fVar7 = TASK::_GET_SCENARIO_POINT_HEADING(iParam0->f_87, true);
		Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, fVar7, -0.284f, -4.8223f, 0f) };
		Var0.f_3 = __LIB_2__::func_709((fVar7 - 18.87f));
		iParam0->f_89 = TASK::CREATE_SCENARIO_POINT(joaat("SCRIPT_REHOB_HERBALIST"), Var0, Var0.f_3, 0, 0, 1);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_89))
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_87))
		{
			TASK::_SET_SCENARIO_POINT_FLAG(iParam0->f_87, 14, true);
			TASK::_SET_SCENARIO_POINT_FLAG(iParam0->f_87, 22, true);
			TASK::_SET_SCENARIO_POINT_FLAG(iParam0->f_89, 14, true);
			TASK::_SET_SCENARIO_POINT_FLAG(iParam0->f_89, 22, true);
			return 1;
		}
	}
	return 0;
}

void func_66(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (bParam2)
	{
		if (*uParam0 != -1)
		{
			if (uParam0->f_1 > -1)
			{
				iVar0 = __LIB_13__::func_754(*uParam0, uParam0->f_1);
				if (STREAMING::IS_MODEL_VALID(iVar0))
				{
					if (STREAMING::HAS_MODEL_LOADED(iVar0) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
					{
						uParam0->f_5 = func_163(*uParam0, uParam0->f_1);
						PED::_0x931B241409216C1F(iParam1, uParam0->f_5, 0);
						PED::SET_PED_KEEP_TASK(uParam0->f_5, true);
					}
				}
			}
		}
	}
	if (uParam0->f_2 != -1)
	{
		if (uParam0->f_3 > -1)
		{
			iVar0 = __LIB_13__::func_755(uParam0->f_2, uParam0->f_3);
			if (STREAMING::IS_MODEL_VALID(iVar0))
			{
				if (STREAMING::HAS_MODEL_LOADED(iVar0) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
				{
					uParam0->f_6 = __LIB_18__::func_677(uParam0->f_2, uParam0->f_3);
				}
			}
		}
	}
}

bool func_67(var uParam0)
{
	if (uParam0->f_2 != -1)
	{
		if (uParam0->f_3 > -1)
		{
			if (STREAMING::IS_MODEL_VALID(__LIB_13__::func_755(uParam0->f_2, uParam0->f_3)))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_75(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	iVar0 = 0;
	func_172(uParam0, uParam1);
	__LIB_19__::func_621(uParam0, uParam1);
	if (uParam0->f_1 > 0)
	{
		if (__LIB_13__::func_727(uParam0, 46))
		{
			if (!__LIB_13__::func_727(uParam0, 47))
			{
				__LIB_13__::func_724(uParam0, 4);
				__LIB_13__::func_724(uParam0, 47);
				__LIB_13__::func_724(uParam0, 48);
				__LIB_13__::func_730(uParam0, 62);
				__LIB_13__::func_730(uParam0, 67);
				__LIB_13__::func_731(uParam0, 262144);
				__LIB_18__::func_654(uParam0);
				__LIB_0__::func_325(&(uParam0->f_9));
				if (__LIB_3__::func_587(uParam0->f_215, 1, 1))
				{
					__LIB_3__::func_969(&(uParam0->f_215), 1);
				}
				if (((__LIB_13__::func_727(uParam0, 12) && !__LIB_13__::func_727(uParam0, 38)) && !__LIB_13__::func_727(uParam0, 23)) && !__LIB_13__::func_727(uParam0, 15))
				{
					__LIB_3__::func_662("HRB_FAIL", 7500, 0, 0, -1, -1, 0);
					__LIB_0__::func_769();
				}
				if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_87))
				{
					TASK::_DELETE_SCENARIO_POINT(uParam0->f_87);
				}
				if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_88))
				{
					TASK::_DELETE_SCENARIO_POINT(uParam0->f_88);
				}
				if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_89))
				{
					TASK::_DELETE_SCENARIO_POINT(uParam0->f_89);
				}
				__LIB_13__::func_724(uParam0, 65);
				__LIB_18__::func_652(6);
				__LIB_13__::func_726(4);
				uParam0->f_1 = 12;
				if (uParam0->f_523 == 7)
				{
					uParam0->f_206 = 6;
				}
			}
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (func_179(uParam0, uParam1, &(uParam1->f_5)))
			{
				func_180(__LIB_3__::func_179(uParam1), uParam0->f_7, &(uParam0->f_215));
				__LIB_3__::func_285(uParam0->f_7, uParam1, 0);
				__LIB_3__::func_285(uParam0->f_90[15], uParam1, 0);
				func_182(uParam0, 1);
				__LIB_13__::func_724(uParam0, 67);
				__LIB_2__::func_482(&(uParam0->f_284.f_21[2 /*17*/]), 1, 1);
				WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_7, true, true);
				__LIB_1__::func_766(uParam0->f_7, joaat("WEAPON_MELEE_KNIFE"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				__LIB_3__::func_986(&(uParam0->f_243));
				__LIB_13__::func_732(uParam0, 1, 1);
				if (__LIB_19__::func_288())
				{
					__LIB_13__::func_724(uParam0, 16);
				}
				if (__LIB_13__::func_727(uParam0, 1))
				{
					if (__LIB_11__::func_192(12))
					{
						__LIB_13__::func_733(uParam0, 8);
					}
				}
				EVENT::_0xBB1E41DD3D3C6250(uParam0->f_7, "SpAggroFocus", 0);
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20.f_11))
				{
					ENTITY::_0x18FF3110CF47115D(uParam0->f_20.f_11, 9, 0);
				}
				if (__LIB_13__::func_727(uParam0, 1))
				{
					if (__LIB_13__::func_727(uParam0, 7))
					{
						uParam0->f_1 = 12;
					}
					else if (__LIB_13__::func_727(uParam0, 6))
					{
						uParam0->f_1 = 11;
					}
					else if (__LIB_13__::func_727(uParam0, 5) || __LIB_18__::func_651())
					{
						__LIB_13__::func_724(uParam0, 12);
						__LIB_13__::func_724(uParam0, 13);
						__LIB_19__::func_484(uParam0, 1);
						uParam0->f_196 = 7;
						uParam0->f_1 = 3;
					}
					else
					{
						uParam0->f_1 = 2;
					}
				}
				else
				{
					uParam0->f_1 = 1;
				}
				if (__LIB_18__::func_651())
				{
					__LIB_19__::func_289();
					__LIB_13__::func_724(uParam0, 32);
				}
			}
			break;
		case 1:
			__LIB_0__::func_11(uParam0);
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_7, false);
			if (func_192(uParam0, uParam1))
			{
				func_193(uParam0, 1, 1);
				if (!__LIB_11__::func_192(6))
				{
					uParam0->f_1 = 2;
				}
				else
				{
					__LIB_13__::func_732(uParam0, 2, 2);
					__LIB_13__::func_724(uParam0, 46);
					uParam0->f_1 = 12;
				}
			}
			else
			{
				func_194(uParam0);
			}
			break;
		case 2:
			__LIB_0__::func_11(uParam0);
			if (func_195(uParam0))
			{
				__LIB_13__::func_734(uParam0, 16);
				func_197(uParam0);
				if (__LIB_13__::func_727(uParam0, 1))
				{
					__LIB_19__::func_290();
				}
				__LIB_13__::func_724(uParam0, 67);
				uParam0->f_1 = 3;
			}
			break;
		case 3:
			if (func_199(uParam0, uParam1))
			{
				__LIB_18__::func_654(uParam0);
				__LIB_13__::func_730(uParam0, 62);
				__LIB_13__::func_730(uParam0, 67);
				uParam0->f_495 = 0;
				uParam0->f_1 = 4;
			}
			break;
		case 4:
			if (func_200(uParam0))
			{
				uParam0->f_1 = 5;
			}
			break;
		case 5:
			if (func_201(uParam0, uParam1))
			{
				__LIB_13__::func_724(uParam0, 3);
				__LIB_13__::func_734(uParam0, 16);
				__LIB_13__::func_734(uParam0, 131072);
				uParam0->f_1 = 11;
			}
			break;
		case 6:
			if (__LIB_0__::func_58(uParam0))
			{
				uParam0->f_1 = 11;
			}
			break;
		case 8:
			if (func_203(uParam0, uParam1, *uParam3))
			{
				uParam0->f_1 = 11;
			}
			break;
		case 9:
			if (func_204(uParam0))
			{
				if (!__LIB_2__::func_136(uParam0->f_7, 0) || !PED::IS_PED_FLEEING(uParam0->f_7))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7))
					{
						if (!PED::IS_PED_IN_COMBAT(uParam0->f_7, Global_35))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_7, Global_35, 1, 1))
							{
								__LIB_2__::func_478(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_434.f_5) && __LIB_0__::func_394(Global_35, uParam0->f_434.f_5, 0))
							{
								__LIB_2__::func_478(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO_H", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								__LIB_2__::func_478(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
						}
					}
					if (__LIB_13__::func_727(uParam0, 1))
					{
						__LIB_13__::func_724(uParam0, 2);
					}
					uParam0->f_1 = 13;
				}
			}
			break;
		case 10:
			if (!__LIB_2__::func_1(uParam0->f_7, 0, 1) || !__LIB_0__::func_48(Global_35, uParam0->f_7, 40f, 1))
			{
				return true;
			}
			break;
		case 7:
			if (func_209(uParam0))
			{
				uParam1->f_46 = 1;
				uParam1->f_50 = 1;
				uParam0->f_1 = 11;
			}
			break;
		case 11:
			if (func_210(uParam0, uParam1, uParam1->f_46))
			{
				iVar0 = 1;
			}
			break;
		case 12:
			if (func_211(uParam0))
			{
				iVar0 = 1;
			}
			break;
		case 13:
			break;
	}
	func_212(uParam0);
	func_213(uParam0);
	return iVar0;
}

bool func_117()
{
	return __LIB_11__::func_192(6);
}

int func_125(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0[4];
	int iVar5;
	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	iVar0[3] = 0;
	switch (iParam3)
	{
		case -1:
			switch (iParam0)
			{
				case 1:
					iVar0[0] = 7;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 5:
				case 6:
				case 7:
					iVar0[0] = 38;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 12:
					iVar0[0] = 19;
					iVar0[1] = 38;
					iVar0[2] = 20;
					iVar0[3] = 3;
					break;
				case 9:
					iVar0[0] = 43;
					iVar0[1] = 23;
					iVar0[2] = 20;
					iVar0[3] = 3;
					break;
				case 4:
					iVar0[0] = 18;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 11:
					iVar0[0] = 19;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 0:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 2:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 3:
					iVar0[0] = 7;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 10:
					iVar0[0] = 18;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
			}
			break;
		case 119:
			switch (iParam0)
			{
				case 1:
					iVar0[0] = 43;
					iVar0[1] = 19;
					break;
				case 5:
				case 6:
				case 7:
					iVar0[0] = 38;
					break;
				case 12:
					iVar0[0] = 19;
					iVar0[1] = 18;
					break;
				case 9:
					iVar0[0] = 43;
					break;
				case 4:
					iVar0[0] = 18;
					break;
				case 11:
					iVar0[0] = 19;
					break;
				case 10:
					iVar0[0] = 18;
					break;
			}
			break;
		case 40:
			switch (iParam0)
			{
				case 1:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 5:
				case 6:
				case 7:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 12:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 9:
					iVar0[0] = 43;
					iVar0[1] = 23;
					iVar0[2] = 20;
					iVar0[3] = 3;
					break;
				case 4:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 11:
					iVar0[0] = 20;
					iVar0[1] = 3;
					iVar0[2] = 26;
					break;
				case 0:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					iVar0[3] = 26;
					break;
				case 2:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					iVar0[3] = 26;
					break;
				case 3:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 10:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
			}
			break;
	}
	if (bParam1)
	{
		iVar5 = 0;
		while (iVar5 < iVar0)
		{
			if (iVar0[iVar5] != iParam2 && !__LIB_7__::func_829(iVar0[iVar5]))
			{
				return iVar0[iVar5];
			}
			iVar5++;
		}
	}
	else if (bParam4)
	{
		iVar5 = 0;
		while (iVar5 < iVar0)
		{
			if (iVar0[iVar5] != iParam2 && !__LIB_19__::func_80(__LIB_9__::func_570(iVar0[iVar5])))
			{
				return iVar0[iVar5];
			}
			iVar5++;
		}
	}
	else if (iVar0[0] != iParam2)
	{
		return iVar0[0];
	}
	else
	{
		return iVar0[1];
	}
	return 0;
}

bool func_145(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam1)
	{
		case 43:
			break;
		case 19:
			break;
		case 18:
			break;
		case 40:
			break;
		default:
			return false;
	}
	if (bParam2)
	{
		return __LIB_3__::func_632(uParam0, __LIB_13__::func_783(iParam1), 27835, 27985, iParam3, 0, 0, 0, 0);
	}
	return __LIB_3__::func_632(uParam0, __LIB_13__::func_784(iParam1), 27835, 27985, iParam3, 0, 0, 0, 0);
}

int func_163(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	iVar0 = 0;
	if (__LIB_13__::func_754(iParam0, iParam1) != 0)
	{
		iVar1 = __LIB_13__::func_785(iParam0, iParam1);
		vVar2 = { __LIB_13__::func_786(iParam0, iParam1) };
		vVar5 = { __LIB_13__::func_787(iParam0, iParam1) };
		iVar8 = __LIB_13__::func_754(iParam0, iParam1);
		iVar0 = __LIB_1__::func_545(iVar8, vVar2, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		ENTITY::SET_ENTITY_ROTATION(iVar0, vVar5, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, MISC::IS_BIT_SET(iVar1, 0));
		ENTITY::SET_ENTITY_COLLISION(iVar0, !MISC::IS_BIT_SET(iVar1, 1), false);
		PED::SET_PED_CAN_BE_TARGETTED(iVar0, !MISC::IS_BIT_SET(iVar1, 2));
	}
	return iVar0;
}

void func_172(var uParam0, var uParam1)
{
	uParam0->f_530 = 0;
	if (__LIB_3__::func_722(uParam0->f_7, &(uParam0->f_243), &(uParam0->f_530), 0) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, uParam0->f_7))
	{
		__LIB_13__::func_724(uParam0, 49);
	}
	else
	{
		__LIB_13__::func_730(uParam0, 49);
	}
	if (!uParam1->f_46)
	{
		if (func_321(uParam0, &(uParam1->f_5)))
		{
			if (__LIB_3__::func_587(uParam0->f_215, 1, 1))
			{
				__LIB_3__::func_969(&(uParam0->f_215), 1);
			}
			__LIB_0__::func_769();
			__LIB_13__::func_730(uParam0, 13);
			__LIB_13__::func_731(uParam0, 262144);
			__LIB_13__::func_730(uParam0, 67);
			__LIB_18__::func_654(uParam0);
			__LIB_13__::func_730(uParam0, 62);
			if (!uParam0->f_221)
			{
				uParam1->f_46 = 1;
				func_182(uParam0, 0);
			}
		}
		else if (uParam0->f_521)
		{
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_7, 0))
			{
				PED::SET_PED_CAPSULE(uParam0->f_7, 0f);
			}
			else
			{
				uParam0->f_521 = 0;
			}
		}
	}
	PED::SET_PED_CAPSULE(uParam0->f_7, 0f);
	if (__LIB_13__::func_727(uParam0, 26) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_7))
	{
		if (__LIB_0__::func_153(Global_35, 0, 1, 0) != joaat("WEAPON_UNARMED") && !WEAPON::_IS_WEAPON_MELEE(__LIB_0__::func_153(Global_35, 0, 1, 0)))
		{
			__LIB_13__::func_730(uParam0, 26);
			func_323(uParam0, 3);
			__LIB_2__::func_478(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
		}
	}
	__LIB_19__::func_292(uParam0->f_7, 0, 0, (__LIB_13__::func_727(uParam0, 35) || __LIB_18__::func_660()), __LIB_13__::func_727(uParam0, 32));
	if (uParam0->f_1 > 0)
	{
		__LIB_4__::func_340(&(uParam0->f_284.f_21[2 /*17*/]));
		uParam0->f_433 = func_327(&(uParam0->f_284), &(uParam0->f_7), __LIB_13__::func_727(uParam0, 21));
		if (!__LIB_13__::func_727(uParam0, 24))
		{
			switch (uParam0->f_433)
			{
				case 1:
					if (__LIB_13__::func_727(uParam0, 62))
					{
						__LIB_13__::func_724(uParam0, 60);
						__LIB_13__::func_724(uParam0, 38);
						__LIB_13__::func_730(uParam0, 67);
						__LIB_13__::func_832(&(uParam0->f_284), 0);
						uParam0->f_197 = 1;
						uParam0->f_198 = 3;
					}
					break;
				case 2:
					__LIB_13__::func_724(uParam0, 24);
					__LIB_13__::func_832(&(uParam0->f_284), 0);
					__LIB_2__::func_478(Global_35, uParam0->f_7, "RE_HEC_UNI_V1_VALUABLE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_18__::func_654(uParam0);
					func_182(uParam0, 0);
					uParam0->f_1 = 7;
					break;
			}
		}
	}
	func_329(uParam0, uParam1);
}

bool func_179(var uParam0, var uParam1, var uParam2)
{
	if (__LIB_18__::func_660())
	{
		__LIB_13__::func_724(uParam0, 35);
	}
	func_351(uParam0);
	func_352(&(uParam0->f_284));
	if (__LIB_13__::func_727(uParam0, 1))
	{
		if (__LIB_13__::func_727(uParam0, 7))
		{
			TASK::TASK_WANDER_IN_AREA(uParam0->f_7, __LIB_3__::func_179(uParam1), 5f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
			if (__LIB_11__::func_192(0))
			{
				__LIB_13__::func_724(uParam0, 12);
				__LIB_13__::func_724(uParam0, 15);
			}
			else
			{
				__LIB_13__::func_724(uParam0, 38);
				__LIB_13__::func_724(uParam0, 23);
			}
			__LIB_13__::func_724(uParam0, 46);
		}
		else if (__LIB_13__::func_727(uParam0, 6))
		{
			func_193(uParam0, 3, 1);
			__LIB_13__::func_724(uParam0, 12);
			__LIB_13__::func_724(uParam0, 15);
		}
		else if (__LIB_13__::func_727(uParam0, 5))
		{
			func_193(uParam0, 2, 1);
			__LIB_13__::func_724(uParam0, 12);
		}
		else
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_7, Global_35, -1, -1f, -1f, -1f);
			func_193(uParam0, 1, 1);
		}
		func_353(uParam0, 0);
	}
	else if (__LIB_11__::func_192(6))
	{
		TASK::TASK_WANDER_IN_AREA(uParam0->f_7, __LIB_3__::func_179(uParam1), 5f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
	}
	else
	{
		func_193(uParam0, 0, 1);
	}
	if (__LIB_13__::func_727(uParam0, 5))
	{
		__LIB_13__::func_724(uParam0, 12);
		__LIB_13__::func_724(uParam0, 13);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20.f_11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20.f_11))
		{
			__LIB_2__::func_967(uParam2, uParam0->f_7, uParam0->f_20.f_11, 0);
		}
	}
	return true;
}

bool func_180(vector3 vParam0, int iParam3, var uParam4)
{
	int iVar0;
	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam0, 0f, 0f, 0f, 5f, 5f, 5f);
	*uParam4 = __LIB_4__::func_173(iParam3, iVar0, 3076);
	__LIB_4__::func_171(*uParam4, 256);
	return __LIB_3__::func_587(*uParam4, 1, 1);
}

void func_182(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		__LIB_13__::func_724(uParam0, 42);
	}
	else
	{
		__LIB_13__::func_730(uParam0, 42);
	}
}

bool func_192(var uParam0, var uParam1)
{
	float fVar0;
	if (PED::_0x569F1E1237508DEB(uParam0->f_7) == joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST"))
	{
		if (!__LIB_13__::func_742(uParam0, 2))
		{
			__LIB_13__::func_731(uParam0, 2);
		}
	}
	else if (__LIB_13__::func_742(uParam0, 2))
	{
		__LIB_13__::func_734(uParam0, 2);
	}
	if (func_371(uParam1, 1077936128 /* Float: 3f */, 1114636288 /* Float: 60f */, 20f, 1, 0, 1, 10f, 1, 1125515264 /* Float: 150f */, 0, 0) && uParam1->f_48)
	{
		fVar0 = __LIB_0__::func_665(Global_35, uParam0->f_7, 1, 1);
		if (fVar0 <= 80f)
		{
			if (!__LIB_13__::func_742(uParam0, 16))
			{
				__LIB_13__::func_731(uParam0, 16);
			}
		}
		else if (__LIB_13__::func_742(uParam0, 16))
		{
			__LIB_13__::func_734(uParam0, 16);
		}
		if (fVar0 <= 20f)
		{
			if (PED::_0x569F1E1237508DEB(uParam0->f_7) != joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST"))
			{
				if (!__LIB_13__::func_742(uParam0, 131072))
				{
					__LIB_13__::func_731(uParam0, 131072);
				}
				if (__LIB_18__::func_665(uParam0, 0))
				{
					return true;
				}
			}
		}
		else if (__LIB_13__::func_742(uParam0, 131072))
		{
			__LIB_13__::func_734(uParam0, 131072);
		}
	}
	else if (__LIB_13__::func_742(uParam0, 131072))
	{
		__LIB_13__::func_734(uParam0, 131072);
	}
	return false;
}

void func_193(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_472 = iParam1;
	if (bParam2)
	{
		__LIB_13__::func_734(uParam0, 8);
		__LIB_13__::func_734(uParam0, 4);
		__LIB_13__::func_734(uParam0, 1);
		__LIB_13__::func_734(uParam0, 2);
		uParam0->f_473 = (uParam0->f_473 || __LIB_13__::func_743(iParam1));
	}
	else
	{
		uParam0->f_473 = __LIB_13__::func_743(iParam1);
	}
}

void func_194(var uParam0)
{
	if (__LIB_0__::func_48(Global_35, uParam0->f_7, 75f, 1))
	{
		if (__LIB_2__::func_227(1f, 1, 0, 0))
		{
			__LIB_2__::func_315(1715123483, uParam0->f_7, 1);
			__LIB_2__::func_478(uParam0->f_7, uParam0->f_7, "RE_HEC_UNI_V1_WHISTLE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_195(var uParam0)
{
	switch (uParam0->f_196)
	{
		case 0:
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_7, false);
			if (__LIB_13__::func_727(uParam0, 1))
			{
				__LIB_13__::func_724(uParam0, 12);
				__LIB_13__::func_724(uParam0, 13);
				__LIB_18__::func_666(uParam0->f_7, *uParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0);
				uParam0->f_196 = 6;
			}
			else if (TASK::_0x916B8E075ABC8B4E(uParam0->f_7, 0))
			{
				__LIB_18__::func_666(uParam0->f_7, 19, "", "", "", "HEY_HELP_ME_AGAIN_UPPER", 0);
				BUILTIN::WAIT(10);
				uParam0->f_10.f_9 = "RE_HERB_HERBALIST";
				__LIB_4__::func_281(&(uParam0->f_10), uParam0->f_7, &(uParam0->f_9), 0f, 0f, 0f, 1065353216 /* Float: 1f */, 1, 5);
				uParam0->f_196 = 1;
			}
			break;
		case 1:
			__LIB_3__::func_972(&(uParam0->f_10), &(uParam0->f_9), 1);
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, __LIB_13__::func_807(19, 0), "HEY_HELP_ME_AGAIN_UPPER", 1))
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_9))
				{
					if (!__LIB_19__::func_293(uParam0, 1))
					{
						TASK::TASK_PLAY_ANIM(uParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_01_UPPER", 8f, -8f, -1, 67117072, 0f, false, 0, false, 0, false);
						uParam0->f_196 = 3;
					}
				}
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_01_UPPER", 1))
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_9))
				{
					if (!__LIB_19__::func_293(uParam0, 1))
					{
						__LIB_1__::func_148(&uLocal_0);
						func_353(uParam0, 1);
						__LIB_13__::func_831(&(uParam0->f_284), 0, 1);
						__LIB_4__::func_317(&(uParam0->f_284), 0, __LIB_2__::func_460(4));
						if (!__LIB_13__::func_727(uParam0, 1))
						{
							__LIB_13__::func_831(&(uParam0->f_284), 1, 1);
							__LIB_4__::func_317(&(uParam0->f_284), 1, __LIB_2__::func_460(6));
						}
						else
						{
							__LIB_13__::func_831(&(uParam0->f_284), 1, 0);
						}
						switch (__LIB_3__::func_657(119))
						{
							case 0:
								__LIB_13__::func_744(&(uParam0->f_284), 0, "RE_HEC_UNI_V1_ACCEPT_01");
								__LIB_13__::func_744(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_PLAYER_REJECT_01");
								break;
							case 1:
								__LIB_13__::func_744(&(uParam0->f_284), 0, "RE_HEC_UNI_V1_ACCEPT_02");
								__LIB_13__::func_744(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_PLAYER_REJECT_02");
								break;
							default:
								__LIB_13__::func_744(&(uParam0->f_284), 0, "RE_HEC_UNI_V1_ACCEPT_03");
								__LIB_13__::func_744(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_PLAYER_REJECT_03");
								break;
						}
						func_384(&(uParam0->f_284));
						uParam0->f_196 = 4;
					}
				}
			}
			break;
		case 4:
			if (__LIB_19__::func_293(uParam0, 1))
			{
				return false;
			}
			switch (uParam0->f_433)
			{
				case 0:
					func_353(uParam0, 0);
					func_385(uParam0);
					__LIB_13__::func_724(uParam0, 12);
					__LIB_13__::func_724(uParam0, 13);
					func_384(&(uParam0->f_284));
					uParam0->f_196 = 5;
					break;
				case 1:
					func_353(uParam0, 0);
					func_385(uParam0);
					func_384(&(uParam0->f_284));
					uParam0->f_196 = 8;
					break;
				case -1:
					if (!__LIB_19__::func_293(uParam0, 1))
					{
						if (func_386(uParam0))
						{
							func_353(uParam0, 0);
							__LIB_13__::func_730(uParam0, 13);
							__LIB_13__::func_724(uParam0, 23);
							func_384(&(uParam0->f_284));
							uParam0->f_196 = 9;
						}
					}
					break;
			}
			break;
		case 5:
			if (!__LIB_19__::func_293(uParam0, 1))
			{
				if (!__LIB_2__::func_136(Global_35, 1) && !func_387(uParam0))
				{
					if (!__LIB_11__::func_192(5) && __LIB_0__::func_181())
					{
						__LIB_2__::func_478(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_ACCEPT_RESP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						uParam0->f_196 = 2;
					}
					else
					{
						__LIB_18__::func_666(uParam0->f_7, *uParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0);
						uParam0->f_196 = 6;
					}
				}
			}
			break;
		case 2:
			if (!__LIB_2__::func_136(uParam0->f_7, 1))
			{
				func_64(uParam0);
				__LIB_18__::func_666(uParam0->f_7, *uParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0);
				uParam0->f_196 = 6;
			}
			break;
		case 8:
			if (!__LIB_19__::func_293(uParam0, 1))
			{
				if (!__LIB_2__::func_136(Global_35, 1) && !func_387(uParam0))
				{
					if (!__LIB_13__::func_727(uParam0, 23))
					{
						TASK::TASK_PLAY_ANIM(uParam0->f_7, __LIB_13__::func_807(19, 0), "NEGATIVE_UPPER", 8f, -8f, -1, 67117072, 0f, false, 0, false, 0, false);
					}
					uParam0->f_196 = 9;
				}
			}
			break;
		case 6:
			if (AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_7))
			{
				if (__LIB_4__::func_126(*uParam0) >= __LIB_13__::func_745(*uParam0))
				{
					__LIB_13__::func_724(uParam0, 9);
				}
				else
				{
					__LIB_3__::func_662(__LIB_13__::func_809(*uParam0, "HRB_OBJ_YR", "HRB_OBJ_HS", "HRB_OBJ_GC", "HRB_OBJ_VS"), 7500, 0, 0, __LIB_13__::func_745(*uParam0), -1, 1);
				}
			}
			if (!__LIB_19__::func_293(uParam0, 1))
			{
				if (!__LIB_18__::func_667(uParam0->f_7, *uParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0, 1))
				{
					if (*uParam0 != 40 && *uParam0 != 43)
					{
						__LIB_18__::func_666(uParam0->f_7, *uParam0, "YARROW_SEND_B_UPPER", "GCURRANT_SEND_B_UPPER", "VSNOWDROP_SEND_B_UPPER", "HBSAGE_SEND_B_UPPER", 0);
					}
					__LIB_13__::func_834(*uParam0, 0, 1);
					if (func_393(uParam0))
					{
						__LIB_13__::func_724(uParam0, 66);
						return true;
					}
					uParam0->f_196 = 7;
				}
			}
			break;
		case 7:
			if ((*uParam0 == 40 || !__LIB_0__::func_48(Global_35, uParam0->f_7, 20f, 1)) || !__LIB_18__::func_667(uParam0->f_7, *uParam0, "YARROW_SEND_B_UPPER", "GCURRANT_SEND_B_UPPER", "VSNOWDROP_SEND_B_UPPER", "HBSAGE_SEND_B_UPPER", 0, 1))
			{
				func_394(uParam0);
				__LIB_13__::func_734(uParam0, 131072);
				__LIB_13__::func_823(uParam0, 1f, 0);
				__LIB_18__::func_659(uParam0, 0, joaat("SCRIPT_COMMON_STAND_HERBALIST"), 0, 0, 1, 3f);
				return true;
			}
			break;
		case 9:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, __LIB_13__::func_807(19, 0), "NEGATIVE_UPPER", 1))
			{
				__LIB_0__::func_325(&(uParam0->f_9));
				__LIB_13__::func_734(uParam0, 131072);
				__LIB_18__::func_659(uParam0, 0, joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST"), 0, 0, 1, 0);
				uParam0->f_1 = 11;
			}
			break;
	}
	return false;
}

void func_197(var uParam0)
{
	if (PED::_0x569F1E1237508DEB(uParam0->f_7) == joaat("SCRIPT_COMMON_STAND_HERBALIST"))
	{
		if (!func_396(uParam0, 0, 1, 1))
		{
			uParam0->f_203 = 2;
		}
		else
		{
			uParam0->f_203 = 3;
		}
		__LIB_13__::func_823(uParam0, 5f, 1);
	}
}

bool func_199(var uParam0, var uParam1)
{
	switch (uParam0->f_197)
	{
		case 0:
			if (func_393(uParam0))
			{
				__LIB_13__::func_724(uParam0, 9);
				if (!__LIB_13__::func_727(uParam0, 1))
				{
					if (!MAP::DOES_BLIP_EXIST(uParam0->f_9))
					{
						__LIB_2__::func_73(uParam0->f_7, &(uParam0->f_9), -89429847, 580546400, 0, 0);
					}
				}
				if (!__LIB_13__::func_727(uParam0, 9))
				{
					func_398(uParam0, __LIB_4__::func_126(*uParam0), 1);
				}
				else if (!__LIB_13__::func_727(uParam0, 1))
				{
					__LIB_3__::func_662("HERB_DONE_EARLY", 7500, 0, 0, -1, -1, 0);
				}
				else
				{
					__LIB_3__::func_662("HERB_DONE_EARLY_RC", 7500, 0, 0, -1, -1, 0);
				}
				if (MAP::DOES_BLIP_EXIST(uParam0->f_9))
				{
					MAP::_BLIP_SET_MODIFIER(uParam0->f_9, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
				}
				func_399(uParam0, 0);
				func_193(uParam0, 2, 1);
				uParam0->f_197 = 1;
			}
			else
			{
				func_400(uParam0, 0);
				func_193(uParam0, 2, 1);
				uParam0->f_197 = 1;
			}
			__LIB_1__::func_148(&uLocal_0);
			break;
		case 1:
			if (func_401(uParam0, uParam1))
			{
				__LIB_13__::func_730(uParam0, 13);
				__LIB_13__::func_810(&(uParam0->f_112), uParam0->f_90[2]);
				__LIB_18__::func_668(uParam0);
				__LIB_13__::func_811(&(uParam0->f_112), *uParam0, uParam0->f_7, &(uParam0->f_90), 1);
				__LIB_3__::func_635(&(uParam0->f_112));
				return true;
			}
			break;
	}
	return false;
}

bool func_200(var uParam0)
{
	__LIB_13__::func_808(uParam0->f_7);
	switch (uParam0->f_199)
	{
		case 0:
			if (!__LIB_19__::func_293(uParam0, 1))
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_7, -1) || __LIB_3__::func_943(&(uParam0->f_112), "base02", 1))
				{
					if (*uParam0 == 19)
					{
						if (!__LIB_2__::func_136(uParam0->f_7, 1))
						{
							__LIB_2__::func_478(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_SAGE_TIP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_193(uParam0, 4, 1);
							uParam0->f_199 = 1;
						}
					}
					else
					{
						func_193(uParam0, 4, 1);
						uParam0->f_199 = 1;
					}
				}
			}
			break;
		case 1:
			return !__LIB_2__::func_136(uParam0->f_7, 1);
	}
	return false;
}

bool func_201(var uParam0, var uParam1)
{
	struct<4> Var0;
	vector3 vVar4;
	__LIB_13__::func_808(uParam0->f_7);
	func_407(uParam0);
	switch (uParam0->f_200)
	{
		case 0:
			if (!__LIB_19__::func_293(uParam0, 1) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_7))
			{
				func_408(uParam0);
				__LIB_13__::func_832(&(uParam0->f_284), 0);
				func_384(&(uParam0->f_284));
				uParam0->f_200 = 1;
			}
			break;
		case 1:
			if (!__LIB_19__::func_293(uParam0, 1))
			{
				if (__LIB_2__::func_227(-4f, 1, 0, 0))
				{
					__LIB_18__::func_670(&(uParam0->f_154), &(uParam0->f_175), uParam0->f_7, uParam0->f_90[2], uParam0->f_242, __LIB_18__::func_669(uParam0));
					func_353(uParam0, 1);
					__LIB_13__::func_831(&(uParam0->f_284), 0, 1);
					__LIB_4__::func_317(&(uParam0->f_284), 0, __LIB_13__::func_812(uParam0->f_240));
					__LIB_13__::func_813(&(uParam0->f_284), 0, 10f);
					__LIB_1__::func_148(&uLocal_0);
					func_384(&(uParam0->f_284));
					uParam0->f_200 = 2;
				}
			}
			break;
		case 2:
			__LIB_13__::func_814(&(uParam0->f_154), uParam0->f_7);
			switch (uParam0->f_433)
			{
				case 0:
					vVar4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_7, true, false) };
					uParam0->f_241 = func_413(uParam0, uParam1, &Var0);
					__LIB_3__::func_623(&(uParam0->f_52));
					uParam0->f_52.f_8 = { Var0 };
					uParam0->f_52.f_19 = Var0.f_3;
					uParam0->f_52.f_1 = Global_35;
					uParam0->f_52.f_21 = 1f;
					uParam0->f_52.f_18 = 0.25f;
					uParam0->f_52.f_8.f_2 = vVar4.z;
					__LIB_1__::func_336(&(uParam0->f_52.f_23), 32);
					func_353(uParam0, 0);
					__LIB_13__::func_832(&(uParam0->f_284), 0);
					func_415(Global_35, &(uParam0->f_8), 0f, 0f, 0f, 0, 7f, 4, 0, 0, 0, 0, 1071644672 /* Float: 1.75f */);
					uParam0->f_200 = 3;
					break;
				default:
					if (!__LIB_19__::func_293(uParam0, 1))
					{
						if (func_416(uParam0))
						{
							__LIB_2__::func_478(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_SUITYOURSELF", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							TASK::TASK_PLAY_ANIM(uParam0->f_7, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_DECLINE_HERBALIST", 4f, -4f, -1, 8192, 0f, false, 0, false, 0, false);
							func_353(uParam0, 0);
							__LIB_13__::func_832(&(uParam0->f_284), 0);
							__LIB_0__::func_325(&(uParam0->f_9));
							__LIB_18__::func_671(&(uParam0->f_284), 0);
							if (!__LIB_2__::func_312(joaat("SCRIPT_REHOB_HERBALIST"), 2, 0, 0))
							{
							}
							func_384(&(uParam0->f_284));
							uParam0->f_200 = 5;
						}
					}
					break;
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_DECLINE_HERBALIST", 1))
			{
				if (__LIB_2__::func_313(joaat("SCRIPT_REHOB_HERBALIST")))
				{
					__LIB_18__::func_672(uParam0, 0);
					func_418(uParam0, joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST"), 0);
					return true;
				}
			}
			break;
		case 3:
			if (func_419(uParam0))
			{
				uParam0->f_200 = 6;
			}
			break;
		case 6:
			if ((uParam0->f_241 == 0 && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_175.f_1, false)) || (uParam0->f_241 == 1 && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_154.f_1, false)))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_0__::func_325(&(uParam0->f_9));
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_7, Global_35, -1, -1f, -1f, -1f);
				if (!__LIB_2__::func_312(joaat("SCRIPT_REHOB_HERBALIST"), 2, 0, 0))
				{
				}
				uParam0->f_200 = 7;
			}
			break;
		case 7:
			if (!__LIB_19__::func_293(uParam0, 1))
			{
				if (__LIB_2__::func_227(-3f, 1, 0, 0) && !__LIB_2__::func_136(uParam0->f_7, 0))
				{
					if (!__LIB_13__::func_727(uParam0, 16))
					{
						if (__LIB_2__::func_313(joaat("SCRIPT_REHOB_HERBALIST")))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_7, Global_35, -1, -1f, -1f, -1f);
							__LIB_2__::func_478(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_GOODBYE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							uParam0->f_200 = 8;
						}
					}
					else
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_7, Global_35, -1, -1f, -1f, -1f);
						uParam0->f_200 = 9;
					}
				}
			}
			break;
		case 8:
			if (!__LIB_2__::func_136(uParam0->f_7, 1))
			{
				__LIB_18__::func_672(uParam0, 0);
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_112.f_1, false))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_112.f_1, "BASE02_LOOP", true, false);
				}
				__LIB_18__::func_659(uParam0, 0, joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST"), 0, 0, 1, 0);
				__LIB_13__::func_823(uParam0, 7f, 0);
				return true;
			}
			break;
		case 9:
			if (!__LIB_2__::func_136(uParam0->f_7, 1))
			{
				if (__LIB_2__::func_313(joaat("SCRIPT_REHOB_HERBALIST")))
				{
					__LIB_2__::func_478(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_FAREWELL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					uParam0->f_200 = 8;
				}
			}
			break;
	}
	return false;
}

bool func_203(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29)
{
	int iVar0;
	float fVar1;
	var uVar2;
	fVar1 = __LIB_0__::func_94(Global_35, __LIB_3__::func_179(uParam1), 1);
	switch (uParam0->f_201)
	{
		case 0:
			if (__LIB_3__::func_722(uParam0->f_7, &uParam2, &uVar2, 0) || fVar1 < 4f)
			{
				if (fVar1 < (35f - 7f))
				{
					if (uParam0->f_219 > 3)
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_7))
						{
							PED::_0x802092B07E3B1EEA(uParam0->f_7, Global_36, 3);
						}
						func_421(uParam0);
					}
					uParam0->f_220 = 1;
					uParam0->f_201 = 1;
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_266(Global_35, __LIB_3__::func_179(uParam1), 35f, 1, 1))
			{
				if (!__LIB_0__::func_75(&(uParam0->f_216)))
				{
					__LIB_1__::func_148(&(uParam0->f_216));
				}
				if (!PED::_0xEC6935EBE0847B90(uParam0->f_7, Global_36))
				{
					if (!PED::_0x463803429297117C(uParam0->f_7, Global_36, 1, 0))
					{
						PED::_0xF1C03A5352243A30(uParam0->f_7);
					}
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_7, joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				__LIB_18__::func_659(uParam0, 1, joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST"), 1, 0, 1, 0);
				__LIB_1__::func_474(uParam0->f_7, &iVar0, 0, 0, 1, 1);
				if (__LIB_1__::func_313(&(uParam0->f_216), 3f))
				{
					uParam0->f_201 = 0;
				}
			}
			else
			{
				if (__LIB_0__::func_75(&(uParam0->f_216)))
				{
					__LIB_0__::func_37(&(uParam0->f_216));
				}
				switch (uParam0->f_219)
				{
					case 0:
						__LIB_2__::func_478(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_DEFEND", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						PED::_0xA3A9299C4F2ADB98(uParam0->f_7);
						if (!PED::_0xEC6935EBE0847B90(uParam0->f_7, Global_36))
						{
							if (!PED::_0x463803429297117C(uParam0->f_7, Global_36, 1, 0))
							{
								PED::_0xF1C03A5352243A30(uParam0->f_7);
							}
						}
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_7, Global_35, -1, -1f, -1f, -1f);
						uParam0->f_219++;
						break;
					case 1:
						if (uParam0->f_220 || __LIB_2__::func_227(1f, 1, 0, 0))
						{
							__LIB_2__::func_478(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_HAVETO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							PED::_0xA3A9299C4F2ADB98(uParam0->f_7);
							if (!PED::_0xEC6935EBE0847B90(uParam0->f_7, Global_36))
							{
								if (!PED::_0x463803429297117C(uParam0->f_7, Global_36, 1, 0))
								{
									PED::_0xF1C03A5352243A30(uParam0->f_7);
								}
							}
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							if (__LIB_0__::func_153(uParam0->f_7, 0, 1, 0) == joaat("WEAPON_UNARMED"))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_7, joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
							}
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
							__LIB_1__::func_474(uParam0->f_7, &iVar0, 0, 0, 1, 1);
							uParam0->f_219++;
						}
						break;
					case 2:
						if (uParam0->f_220 || __LIB_2__::func_227(0, 1, 0, 0))
						{
							__LIB_2__::func_478(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_ISAID", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							PED::_0xA3A9299C4F2ADB98(uParam0->f_7);
							if (!PED::_0xEC6935EBE0847B90(uParam0->f_7, Global_36))
							{
								if (!PED::_0x463803429297117C(uParam0->f_7, Global_36, 1, 0))
								{
									PED::_0xF1C03A5352243A30(uParam0->f_7);
								}
							}
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							if (__LIB_0__::func_153(uParam0->f_7, 0, 1, 0) == joaat("WEAPON_UNARMED"))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_7, joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
							}
							TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
							__LIB_1__::func_474(uParam0->f_7, &iVar0, 0, 0, 1, 1);
							uParam0->f_219++;
						}
						break;
					case 3:
						if (uParam0->f_220 || __LIB_2__::func_227(-3f, 1, 0, 0))
						{
							__LIB_2__::func_478(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_FORCEDME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_421(uParam0);
							uParam0->f_219++;
						}
						break;
				}
			}
			if (uParam0->f_220)
			{
				uParam0->f_220 = 0;
			}
			break;
	}
	return false;
}

bool func_204(var uParam0)
{
	int iVar0;
	int iVar1;
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_7, 0))
	{
		if (TASK::_0x02EBBB3989B7E695(uParam0->f_7))
		{
			__LIB_13__::func_746(uParam0, -1f);
		}
		else if (TASK::_0x916B8E075ABC8B4E(uParam0->f_7, 0))
		{
			if (!PED::_0xEEED8FAFEC331A70(uParam0->f_7, Global_36, 3))
			{
				if (!PED::_0x802092B07E3B1EEA(uParam0->f_7, Global_36, 3))
				{
					PED::_0xA3A9299C4F2ADB98(uParam0->f_7);
				}
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_7, false);
			if (__LIB_0__::func_153(uParam0->f_7, 0, 1, 0) != joaat("WEAPON_UNARMED"))
			{
				func_323(uParam0, 3);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(uParam0->f_7, &iVar0, 0, 0, 1, 1);
			}
			return true;
		}
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_7, false);
		if (__LIB_0__::func_153(uParam0->f_7, 0, 1, 0) != joaat("WEAPON_UNARMED"))
		{
			func_323(uParam0, 3);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(uParam0->f_7, &iVar1, 0, 0, 1, 1);
		}
		return true;
	}
	return false;
}

bool func_209(var uParam0)
{
	struct<7> Var0;
	Var0.f_1 = 2;
	Var0.f_2 = joaat("NONE");
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	switch (uParam0->f_204)
	{
		case 0:
			__LIB_0__::func_325(&(uParam0->f_9));
			__LIB_1__::func_148(&(uParam0->f_212));
			__LIB_13__::func_747(uParam0);
			__LIB_3__::func_969(&(uParam0->f_215), 1);
			uParam0->f_204 = 1;
			break;
		case 1:
			if (__LIB_1__::func_285(&(uParam0->f_212), 2f))
			{
				func_426(&(uParam0->f_284));
				Var0 = 41;
				Var0.f_2 = joaat("TIMID");
				Var0.f_3 = 3;
				Var0.f_4 = 1;
				__LIB_13__::func_835(&(uParam0->f_7), &Var0, &(uParam0->f_284), &(uParam0->f_284.f_21), uParam0->f_434.f_5);
				__LIB_13__::func_815(uParam0);
				if (__LIB_3__::func_634(&(uParam0->f_112), 1, 0, 0))
				{
					__LIB_3__::func_437(&(uParam0->f_112));
				}
				uParam0->f_204 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_210(int iParam0, var uParam1, bool bParam2)
{
	if (!bParam2)
	{
		switch (iParam0->f_202)
		{
			case 0:
				func_353(iParam0, 0);
				func_193(iParam0, 3, 0);
				__LIB_13__::func_832(&(iParam0->f_284), 1);
				if (!__LIB_13__::func_727(iParam0, 46))
				{
					__LIB_4__::func_317(&(iParam0->f_284), 0, __LIB_2__::func_460(7));
				}
				else
				{
					__LIB_13__::func_831(&(iParam0->f_284), 0, 0);
				}
				__LIB_4__::func_317(&(iParam0->f_284), 1, __LIB_2__::func_460(10));
				__LIB_13__::func_744(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_STUDIES");
				__LIB_13__::func_744(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_WASTETIME");
				func_384(&(iParam0->f_284));
				iParam0->f_202 = 1;
				break;
			case 1:
				if (iParam0->f_433 > -1)
				{
					__LIB_13__::func_832(&(iParam0->f_284), 0);
				}
				switch (iParam0->f_433)
				{
					case 0:
						__LIB_1__::func_148(&(iParam0->f_212));
						if (__LIB_13__::func_748(iParam0))
						{
							__LIB_13__::func_733(iParam0, 4);
						}
						__LIB_19__::func_297(iParam0);
						if (!__LIB_13__::func_749(iParam0, 1))
						{
							__LIB_13__::func_733(iParam0, 0);
						}
						else
						{
							iParam0->f_474 = 3;
							__LIB_13__::func_744(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_OLDMAN");
							__LIB_4__::func_317(&(iParam0->f_284), 1, __LIB_2__::func_460(10));
						}
						__LIB_13__::func_831(&(iParam0->f_284), 0, 0);
						func_384(&(iParam0->f_284));
						iParam0->f_202 = 2;
						break;
					case 1:
						__LIB_1__::func_148(&(iParam0->f_212));
						if (__LIB_13__::func_748(iParam0))
						{
							__LIB_13__::func_733(iParam0, 4);
						}
						__LIB_19__::func_297(iParam0);
						if (__LIB_13__::func_749(iParam0, 1))
						{
							iParam0->f_474 = 2;
						}
						if (iParam0->f_474 > 1)
						{
							__LIB_13__::func_831(&(iParam0->f_284), 0, 0);
							__LIB_13__::func_831(&(iParam0->f_284), 1, 0);
						}
						func_384(&(iParam0->f_284));
						iParam0->f_202 = 4;
						break;
					case -1:
						if (__LIB_13__::func_749(iParam0, 1))
						{
							if (__LIB_1__::func_285(&(iParam0->f_212), 6f))
							{
								iParam0->f_474 = 3;
								__LIB_19__::func_298(iParam0);
								__LIB_13__::func_750(iParam0, 4);
								__LIB_13__::func_734(iParam0, 131072);
								__LIB_13__::func_831(&(iParam0->f_284), 0, 0);
								__LIB_13__::func_744(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_OLDMAN");
								__LIB_4__::func_317(&(iParam0->f_284), 1, __LIB_2__::func_460(10));
								__LIB_0__::func_37(&(iParam0->f_212));
								__LIB_13__::func_750(iParam0, 1);
								func_384(&(iParam0->f_284));
							}
						}
						break;
				}
				break;
			case 2:
				if (((!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_7)) && !AUDIO::_0xFE5C6177064BD390(1))
				{
					__LIB_1__::func_148(&(iParam0->f_212));
					if (__LIB_13__::func_749(iParam0, 1))
					{
						__LIB_2__::func_478(iParam0->f_7, Global_35, __LIB_13__::func_751("RE_HEC_UNI_V1_EXCUSEME"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(iParam0->f_7, Global_35, __LIB_13__::func_751("RE_HEC_UNI_V1_TRAVELS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
					}
					iParam0->f_202 = 3;
				}
				break;
			case 3:
				if (((__LIB_1__::func_285(&(iParam0->f_212), 2f) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_7)) && !AUDIO::_0xFE5C6177064BD390(1))
				{
					__LIB_19__::func_298(iParam0);
					__LIB_13__::func_750(iParam0, 4);
					__LIB_13__::func_734(iParam0, 131072);
					if (!__LIB_13__::func_749(iParam0, 3))
					{
						__LIB_13__::func_831(&(iParam0->f_284), 1, 1);
					}
					__LIB_13__::func_823(iParam0, 10f, 0);
					iParam0->f_202 = 1;
				}
				break;
			case 4:
				if (__LIB_1__::func_285(&(iParam0->f_212), 2f))
				{
					if ((!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_7)) && !AUDIO::_0xFE5C6177064BD390(1))
					{
						if (__LIB_13__::func_749(iParam0, 4) || __LIB_18__::func_665(iParam0, 0))
						{
							__LIB_1__::func_148(&(iParam0->f_212));
							__LIB_18__::func_673(iParam0, iParam0->f_474);
							switch (iParam0->f_474)
							{
								case 2:
									__LIB_13__::func_724(iParam0, 54);
									break;
								case 3:
									__LIB_13__::func_733(iParam0, 6);
									break;
							}
							iParam0->f_202 = 5;
						}
					}
				}
				break;
			case 5:
				if (!__LIB_19__::func_293(iParam0, 1))
				{
					if ((!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_7)) && !AUDIO::_0xFE5C6177064BD390(1))
					{
						if ((__LIB_1__::func_285(&(iParam0->f_212), 2f) || __LIB_13__::func_749(iParam0, 6)) || __LIB_13__::func_749(iParam0, 5))
						{
							if (func_436(iParam0))
							{
								__LIB_13__::func_747(iParam0);
								if (__LIB_13__::func_749(iParam0, 6))
								{
									__LIB_18__::func_674(iParam0, 0);
								}
								else
								{
									func_323(iParam0, 3);
								}
								__LIB_3__::func_969(&(iParam0->f_215), 1);
								__LIB_18__::func_654(iParam0);
								uParam1->f_46 = 1;
								iParam0->f_202 = 6;
							}
							else
							{
								__LIB_13__::func_823(iParam0, 10f, 0);
								if (!__LIB_13__::func_749(iParam0, 1))
								{
									__LIB_19__::func_298(iParam0);
									__LIB_13__::func_750(iParam0, 4);
									__LIB_13__::func_734(iParam0, 131072);
								}
								else
								{
									__LIB_1__::func_148(&(iParam0->f_212));
								}
								iParam0->f_202 = 1;
							}
						}
					}
				}
				break;
			case 6:
				break;
		}
	}
	if (__LIB_13__::func_727(iParam0, 1))
	{
		if (!__LIB_0__::func_48(Global_35, iParam0->f_7, 300f, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_211(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7))
	{
		if (!uParam0->f_520)
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(uParam0->f_7) || PED::IS_PED_IN_COMBAT(uParam0->f_7, Global_35))
			{
				if (!__LIB_13__::func_727(uParam0, 56))
				{
					__LIB_13__::func_724(uParam0, 56);
					__LIB_2__::func_592(&(uParam0->f_284.f_21), 1, 1);
					func_384(&(uParam0->f_284));
				}
				__LIB_3__::func_447(&(uParam0->f_9), uParam0->f_7, 0);
				uParam0->f_520 = 1;
			}
		}
		else if (!PED::IS_PED_IN_MELEE_COMBAT(uParam0->f_7) && !PED::IS_PED_IN_COMBAT(uParam0->f_7, Global_35))
		{
			__LIB_0__::func_325(&(uParam0->f_9));
			uParam0->f_520 = 0;
		}
		if (__LIB_13__::func_738(uParam0, 1) > 1)
		{
			if (!__LIB_13__::func_727(uParam0, 63))
			{
				__LIB_4__::func_340(&(uParam0->f_284.f_21[0 /*17*/]));
			}
		}
		else if (!__LIB_13__::func_727(uParam0, 50))
		{
			if (!__LIB_13__::func_727(uParam0, 52))
			{
				if (!__LIB_19__::func_293(uParam0, 1))
				{
					__LIB_4__::func_340(&(uParam0->f_284.f_21[0 /*17*/]));
				}
			}
		}
		switch (uParam0->f_206)
		{
			case 0:
				__LIB_18__::func_675(&(uParam0->f_284));
				__LIB_13__::func_831(&(uParam0->f_284), 1, 1);
				__LIB_13__::func_744(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_ATAG_AGGRO_1ST");
				__LIB_4__::func_317(&(uParam0->f_284), 1, __LIB_2__::func_460(10));
				if (!__LIB_13__::func_727(uParam0, 50))
				{
					__LIB_13__::func_831(&(uParam0->f_284), 0, 1);
					__LIB_13__::func_744(&(uParam0->f_284), 0, "RE_HEC_UNI_V1_DEFUSE");
					__LIB_4__::func_317(&(uParam0->f_284), 0, __LIB_2__::func_460(8));
				}
				__LIB_13__::func_730(uParam0, 21);
				func_441(&(uParam0->f_284));
				func_384(&(uParam0->f_284));
				uParam0->f_206 = 1;
				break;
			case 1:
				switch (uParam0->f_433)
				{
					case 0:
						__LIB_1__::func_148(&(uParam0->f_212));
						__LIB_13__::func_724(uParam0, 50);
						uParam0->f_206 = 2;
						break;
					case 1:
						__LIB_1__::func_148(&(uParam0->f_212));
						__LIB_13__::func_724(uParam0, 52);
						uParam0->f_206 = 4;
						break;
				}
				break;
			case 2:
				if (__LIB_1__::func_285(&(uParam0->f_212), 2f))
				{
					uParam0->f_206 = 3;
				}
				break;
			case 3:
				if (__LIB_13__::func_727(uParam0, 51))
				{
					if (!__LIB_2__::func_136(uParam0->f_7, 1))
					{
						if (uParam0->f_528 < 2)
						{
							__LIB_13__::func_831(&(uParam0->f_284), 1, 1);
						}
						func_384(&(uParam0->f_284));
						__LIB_13__::func_730(uParam0, 50);
						__LIB_13__::func_730(uParam0, 51);
						uParam0->f_206 = 1;
					}
				}
				break;
			case 4:
				if (__LIB_1__::func_285(&(uParam0->f_212), 2f))
				{
					uParam0->f_206 = 5;
				}
				break;
			case 5:
				if (__LIB_13__::func_727(uParam0, 53))
				{
					if (!__LIB_2__::func_136(uParam0->f_7, 1))
					{
						if (uParam0->f_528 < 2)
						{
							__LIB_13__::func_831(&(uParam0->f_284), 1, 1);
							__LIB_13__::func_744(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_ATAG_AGGRO_2ND");
						}
						func_384(&(uParam0->f_284));
						__LIB_13__::func_730(uParam0, 52);
						__LIB_13__::func_730(uParam0, 53);
						uParam0->f_206 = 1;
					}
				}
				break;
			case 6:
				if (__LIB_13__::func_727(uParam0, 55))
				{
					if (!__LIB_2__::func_136(uParam0->f_7, 1))
					{
						__LIB_13__::func_730(uParam0, 54);
						__LIB_13__::func_730(uParam0, 55);
						uParam0->f_206 = 1;
					}
				}
				break;
		}
	}
	return ENTITY::IS_ENTITY_DEAD(uParam0->f_7);
}

void func_212(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7))
	{
		if (uParam0->f_476 != 0)
		{
			PED::_0x8B3B71C80A29A4BB(uParam0->f_7, uParam0->f_475, uParam0->f_476);
		}
	}
}

void func_213(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (!func_442(uParam0, &iVar4, &bVar0, &bVar1, &bVar2, &bVar3))
	{
		return;
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_7, true);
	PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_7, true);
	if (__LIB_0__::func_27(iVar4, 8))
	{
		if (!__LIB_0__::func_75(&(uParam0->f_447)))
		{
			__LIB_1__::func_148(&(uParam0->f_447));
		}
	}
	else if (__LIB_0__::func_75(&(uParam0->f_447)))
	{
		__LIB_0__::func_37(&(uParam0->f_447));
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_7, -1958015541))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_90[3], "SCRIPT_RE@HERBALISTCAMP", "MORTAR_PESTAL_STATIC", 1))
		{
			ENTITY::PLAY_ENTITY_ANIM(uParam0->f_90[3], "MORTAR_PESTAL_STATIC", "SCRIPT_RE@HERBALISTCAMP", 1000f, false, true, true, 0f, 0);
		}
	}
	switch (uParam0->f_203)
	{
		case 0:
			uParam0->f_203 = 2;
			break;
		case 2:
			uParam0->f_203 = func_443(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 3:
			uParam0->f_203 = __LIB_19__::func_486(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 4:
			uParam0->f_203 = __LIB_19__::func_487(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 6:
			uParam0->f_203 = func_446(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 7:
			uParam0->f_203 = __LIB_19__::func_488(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 10:
			uParam0->f_203 = func_448(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 12:
			uParam0->f_203 = __LIB_19__::func_489(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 14:
			uParam0->f_203 = func_450(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 15:
			uParam0->f_203 = __LIB_19__::func_490(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 18:
			uParam0->f_203 = __LIB_18__::func_676(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 19:
			uParam0->f_203 = func_453(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 20:
			uParam0->f_203 = __LIB_19__::func_491(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
	}
}

bool func_321(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if (!__LIB_13__::func_727(iParam0, 11))
	{
		bVar1 = __LIB_13__::func_769(iParam0);
		if (__LIB_3__::func_822(iParam0->f_7, 0, iParam1, &iVar0, 1, 0) || bVar1)
		{
			if (!bVar1 && iVar0 == 256)
			{
				if (!__LIB_0__::func_48(Global_35, iParam0->f_7, 7f, 1))
				{
					if (EVENT::_0xC6A7DC546E94FED5(iParam0->f_7, joaat("EVENT_SHOT_FIRED_WHIZZED_BY"), 0, 0) > -1 || EVENT::_0xC6A7DC546E94FED5(iParam0->f_7, joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"), 0, 0) > -1)
					{
					}
					else
					{
						return false;
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
			{
				__LIB_0__::func_325(&(iParam0->f_9));
				bVar2 = false;
				if (__LIB_13__::func_727(iParam0, 12))
				{
					if (iParam0->f_1 == 3 && !__LIB_13__::func_727(iParam0, 15))
					{
						bVar2 = true;
					}
				}
				if (ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
				{
					if (bVar2)
					{
						__LIB_8__::func_960(4, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
					}
					else
					{
						__LIB_8__::func_960(3, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
					}
				}
				else if (bVar2)
				{
					__LIB_8__::func_960(4, joaat("HONOR_EVENT_SCARE"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				else
				{
					__LIB_8__::func_960(3, joaat("HONOR_EVENT_SCARE"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				TASK::CLEAR_PED_SECONDARY_TASK(iParam0->f_7);
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0->f_7, 0);
				__LIB_13__::func_815(iParam0);
				func_426(&(iParam0->f_284));
				__LIB_2__::func_344(&(iParam0->f_7));
				__LIB_2__::func_603(&(iParam0->f_7), &(iParam0->f_284), &(iParam0->f_284.f_21), 1, 1);
				__LIB_13__::func_732(iParam0, 3, 3);
				if (!iParam0->f_221)
				{
					if (!__LIB_13__::func_770(iVar0, 1024))
					{
						iParam0->f_221 = 1;
					}
				}
				else
				{
					iParam0->f_221 = 0;
				}
				iParam0->f_1 = 9;
			}
			else
			{
				iParam0->f_1 = 11;
			}
			__LIB_13__::func_747(iParam0);
			__LIB_13__::func_724(iParam0, 11);
			return true;
		}
	}
	return false;
}

void func_323(int iParam0, int iParam1)
{
	__LIB_0__::func_325(&(iParam0->f_9));
	__LIB_13__::func_731(iParam0, 262144);
	func_426(&(iParam0->f_284));
	__LIB_2__::func_344(&(iParam0->f_7));
	__LIB_2__::func_603(&(iParam0->f_7), &(iParam0->f_284), &(iParam0->f_284.f_21), 1, 1);
	TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0->f_7, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, iParam0->f_434.f_5);
	PED::SET_PED_KEEP_TASK(iParam0->f_7, true);
}

int func_327(int* iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_2__::func_340(3, 0, 0);
	__LIB_0__::func_516(&iVar0, 8);
	if (bParam2)
	{
		__LIB_1__::func_336(&iVar0, 16);
	}
	iVar1 = -1;
	if (!__LIB_0__::func_27(iParam0->f_73, 4))
	{
		iVar1 = func_574(uParam1, iParam0, 15f, &(iParam0->f_21), &(iParam0->f_74), 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	if (iVar1 > -1)
	{
		if (iVar1 == 0)
		{
			if (!__LIB_0__::func_27(iParam0->f_73, 1))
			{
				if (__LIB_0__::func_27(iParam0->f_73, 1))
				{
					__LIB_1__::func_581(&(iParam0->f_73), 2);
				}
			}
		}
		__LIB_13__::func_832(iParam0, 0);
		iParam0->f_21[iVar1 /*17*/].f_13 = "";
	}
	return iVar1;
}

void func_329(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (__LIB_18__::func_679(uParam0))
	{
		func_578(uParam0, uParam1);
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 > uParam0->f_523)
			{
				if (__LIB_13__::func_741(uParam0, iVar0))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 != 0)
		{
			if (!__LIB_19__::func_293(uParam0, 0))
			{
				func_579(uParam0, iVar1);
			}
			else
			{
				__LIB_18__::func_680(uParam0, iVar1);
			}
		}
	}
}

void func_351(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_434.f_5))
	{
		switch (uParam0->f_434.f_4)
		{
			case 0:
				__LIB_1__::func_473(uParam0->f_434.f_5, joaat("WORLD_ANIMAL_HORSE_RESTING"), -1, 1, 0, -1082130432 /* Float: -1f */);
				break;
			case 1:
				__LIB_1__::func_473(uParam0->f_434.f_5, joaat("WORLD_ANIMAL_HORSE_SLEEPING"), -1, 1, 0, -1082130432 /* Float: -1f */);
				break;
			case 2:
				__LIB_1__::func_473(uParam0->f_434.f_5, joaat("WORLD_ANIMAL_HORSE_GRAZING"), -1, 1, 0, -1082130432 /* Float: -1f */);
				break;
			case 3:
				__LIB_1__::func_473(uParam0->f_434.f_5, joaat("WORLD_ANIMAL_HORSE_DRINK_GROUND"), -1, 1, 0, -1082130432 /* Float: -1f */);
				break;
		}
	}
}

void func_352(var uParam0)
{
	func_599(&(uParam0->f_21), 0, 0, 0, 1);
	__LIB_18__::func_685(uParam0, 0, 1);
	__LIB_18__::func_685(uParam0, 1, 1);
}

void func_353(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_13__::func_727(iParam0, 21))
		{
			func_441(&(iParam0->f_284));
			__LIB_13__::func_724(iParam0, 21);
		}
	}
	else if (__LIB_13__::func_727(iParam0, 21))
	{
		func_441(&(iParam0->f_284));
		__LIB_13__::func_730(iParam0, 21);
	}
}

int func_371(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
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
			return 0;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return 0;
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
				STATS::_0xB2A38826E5886E83(__LIB_3__::func_167(uParam0->f_3, uParam0->f_185), 0);
			}
			return 1;
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
							return 0;
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
					STATS::_0xB2A38826E5886E83(__LIB_3__::func_167(uParam0->f_3, uParam0->f_185), 0);
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_384(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_73, 16))
	{
		func_622(uParam0, 1);
	}
}

void func_385(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_01_UPPER", 1))
		{
			TASK::STOP_ANIM_TASK(uParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_01_UPPER", -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_02_UPPER", 1))
		{
			TASK::STOP_ANIM_TASK(uParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_02_UPPER", -2f);
		}
	}
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(uParam0->f_7, 500);
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uParam0->f_7, 500);
}

bool func_386(var uParam0)
{
	switch (uParam0->f_208)
	{
		case 0:
			__LIB_1__::func_148(&(uParam0->f_212));
			uParam0->f_208 = 3;
			break;
		case 3:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_7))
			{
				if (__LIB_1__::func_285(&(uParam0->f_212), 10f))
				{
					TASK::TASK_PLAY_ANIM(uParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_02_UPPER", 8f, -8f, -1, 67117072, 0f, false, 0, false, 0, false);
					uParam0->f_208++;
				}
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_02_UPPER", 1))
			{
				__LIB_1__::func_148(&(uParam0->f_212));
				uParam0->f_208++;
			}
			break;
		case 5:
			if (__LIB_1__::func_285(&(uParam0->f_212), 20f))
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_7, __LIB_13__::func_807(19, 0), "NEGATIVE_UPPER", 8f, -8f, -1, 67117072, 0f, false, 0, false, 0, false);
				return true;
			}
			break;
	}
	return false;
}

bool func_387(var uParam0)
{
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_01_UPPER", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_02_UPPER", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, __LIB_13__::func_807(43, 0), "NEGATIVE_UPPER", 1))
	{
		return true;
	}
	return false;
}

bool func_393(var uParam0)
{
	if (__LIB_4__::func_126(*uParam0) >= __LIB_13__::func_745(*uParam0))
	{
		return true;
	}
	return false;
}

void func_394(var uParam0)
{
	if (!__LIB_13__::func_727(uParam0, 1))
	{
		if (!__LIB_13__::func_727(uParam0, 40))
		{
			__LIB_3__::func_152(119);
			__LIB_0__::func_7(&Global_1935630, 4);
			__LIB_13__::func_724(uParam0, 40);
		}
	}
}

bool func_396(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	switch (PED::_0x569F1E1237508DEB(uParam0->f_7))
	{
		case joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST"):
			if (bParam3 || ((!bParam1 && !bParam2) && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) >= 0.25f))
			{
				uParam0->f_468 = joaat("REHOB_LEAN_2_MIX");
				uParam0->f_469 = joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST");
				uParam0->f_470 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f);
				__LIB_18__::func_672(uParam0, 1);
			}
			else
			{
				uParam0->f_468 = joaat("REHOB_LEAN_2_STAND");
				uParam0->f_469 = joaat("SCRIPT_COMMON_STAND_HERBALIST");
				uParam0->f_470 = 1f;
			}
			__LIB_1__::func_148(&(uParam0->f_441));
			return true;
		case joaat("SCRIPT_COMMON_STAND_HERBALIST"):
			if (!bParam1 || bParam3)
			{
				uParam0->f_468 = joaat("REHOB_STAND_2_LEAN");
				uParam0->f_469 = joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST");
				uParam0->f_470 = MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 45f);
			}
			else
			{
				uParam0->f_469 = joaat("SCRIPT_COMMON_STAND_HERBALIST");
				uParam0->f_470 = 1f;
			}
			__LIB_1__::func_148(&(uParam0->f_441));
			return true;
		case joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST"):
			if (bParam3 || (!bParam1 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) >= 0.25f))
			{
				uParam0->f_468 = joaat("REHOB_MIX_2_LEAN");
				uParam0->f_469 = joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST");
				uParam0->f_470 = MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 45f);
			}
			else
			{
				uParam0->f_468 = joaat("REHOB_MIX_2_STAND");
				uParam0->f_469 = joaat("SCRIPT_COMMON_STAND_HERBALIST");
				uParam0->f_470 = 1f;
			}
			__LIB_1__::func_148(&(uParam0->f_441));
			return true;
	}
	return false;
}

void func_398(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_13__::func_745(*uParam0);
	sVar1 = __LIB_13__::func_809(*uParam0, "REHEC_COL_YARROW", "REHEC_COL_HBSAGE", "REHEC_COL_GCURRANT", "REHEC_COL_VSNOWDROP");
	if (iParam1 >= __LIB_13__::func_745(*uParam0) || bParam2)
	{
		if (!__LIB_13__::func_727(uParam0, 1))
		{
			__LIB_3__::func_662("HERB_DONE", 7500, 0, 0, -1, -1, 0);
		}
		else
		{
			__LIB_3__::func_662("HERB_DONE_RC", 7500, 0, 0, -1, -1, 0);
		}
		__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(2, sVar1, iVar0, iVar0), 10000, 0, 0, 0, 1);
	}
	else
	{
		__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(2, sVar1, iParam1, iVar0), 10000, 0, 0, 0, 1);
	}
}

void func_399(var uParam0, bool bParam1)
{
	func_353(uParam0, 1);
	__LIB_13__::func_832(&(uParam0->f_284), 1);
	if (!__LIB_13__::func_727(uParam0, 9) || __LIB_13__::func_727(uParam0, 28))
	{
		__LIB_13__::func_744(&(uParam0->f_284), 0, "RE_HEC_UNI_V1_LOOKING");
	}
	else
	{
		__LIB_13__::func_744(&(uParam0->f_284), 0, "RE_HEC_UNI_V1_HANDOVER_PLAYER");
	}
	__LIB_4__::func_317(&(uParam0->f_284), 0, "BEAT_CON_GIVE_PLANTS");
	if (!__LIB_13__::func_749(uParam0, 9))
	{
		__LIB_13__::func_744(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_SECONDTHOUGHT");
		__LIB_4__::func_317(&(uParam0->f_284), 1, __LIB_2__::func_460(6));
		__LIB_13__::func_724(uParam0, 62);
	}
	else
	{
		__LIB_13__::func_831(&(uParam0->f_284), 1, 0);
	}
	if (!__LIB_13__::func_727(uParam0, 1))
	{
		if (!MAP::DOES_BLIP_EXIST(uParam0->f_9))
		{
		}
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_9))
	{
		MAP::_BLIP_SET_MODIFIER(uParam0->f_9, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
	}
	if (bParam1)
	{
		func_398(uParam0, __LIB_4__::func_126(*uParam0), 1);
	}
	func_384(&(uParam0->f_284));
	uParam0->f_198 = 5;
}

void func_400(var uParam0, bool bParam1)
{
	func_353(uParam0, 0);
	if (!__LIB_13__::func_749(uParam0, 8))
	{
		func_634(&(uParam0->f_284), 1);
		__LIB_13__::func_831(&(uParam0->f_284), 0, 1);
		__LIB_13__::func_744(&(uParam0->f_284), 0, func_635(uParam0));
	}
	else
	{
		__LIB_13__::func_831(&(uParam0->f_284), 0, 0);
	}
	if (!__LIB_13__::func_727(uParam0, 1))
	{
		if (!__LIB_13__::func_749(uParam0, 9))
		{
			__LIB_13__::func_831(&(uParam0->f_284), 1, 1);
			__LIB_13__::func_744(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_SECONDTHOUGHT");
			__LIB_4__::func_317(&(uParam0->f_284), 1, __LIB_2__::func_460(6));
			__LIB_13__::func_724(uParam0, 62);
		}
		else
		{
			__LIB_13__::func_730(uParam0, 62);
			__LIB_13__::func_831(&(uParam0->f_284), 1, 0);
		}
	}
	else
	{
		__LIB_13__::func_831(&(uParam0->f_284), 1, 0);
		__LIB_4__::func_317(&(uParam0->f_284), 1, __LIB_2__::func_460(10));
		__LIB_13__::func_730(uParam0, 62);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_9))
	{
		MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_9, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
	}
	if (bParam1)
	{
		__LIB_3__::func_662(__LIB_13__::func_809(*uParam0, "HRB_OBJ_YR", "HRB_OBJ_HS", "HRB_OBJ_GC", "HRB_OBJ_VS"), 7500, 0, 0, __LIB_13__::func_745(*uParam0), -1, 1);
	}
	func_384(&(uParam0->f_284));
	uParam0->f_198 = 0;
}

bool func_401(var uParam0, var uParam1)
{
	if (!uParam0->f_536)
	{
		if (uParam0->f_535)
		{
			if (__LIB_19__::func_494(uParam0))
			{
				uParam0->f_536 = 1;
			}
		}
	}
	switch (uParam0->f_198)
	{
		case 0:
			func_637(uParam0);
			switch (func_638(uParam0))
			{
				case 3:
					func_399(uParam0, 1);
					break;
				case 1:
					__LIB_1__::func_148(&(uParam0->f_278));
					__LIB_13__::func_733(uParam0, 7);
					__LIB_19__::func_297(uParam0);
					uParam0->f_198 = 1;
					break;
			}
			break;
		case 1:
			if (!__LIB_19__::func_293(uParam0, 1))
			{
				if ((__LIB_1__::func_285(&(uParam0->f_278), 2f) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_7))
				{
					__LIB_2__::func_478(uParam0->f_7, Global_35, func_639(uParam0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&(uParam0->f_278));
					uParam0->f_198 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(uParam0->f_278), 3f) && !__LIB_2__::func_136(uParam0->f_7, 1))
			{
				__LIB_0__::func_37(&(uParam0->f_278));
				__LIB_13__::func_734(uParam0, 131072);
				__LIB_13__::func_750(uParam0, 7);
				__LIB_13__::func_823(uParam0, 5f, 0);
				func_640(uParam0, 10f);
				func_400(uParam0, 0);
			}
			break;
		case 3:
			if (__LIB_19__::func_293(uParam0, 1))
			{
				__LIB_0__::func_769();
				__LIB_0__::func_37(&(uParam0->f_278));
				__LIB_13__::func_730(uParam0, 13);
				__LIB_13__::func_734(uParam0, 131072);
				__LIB_18__::func_654(uParam0);
				__LIB_0__::func_325(&(uParam0->f_9));
				uParam0->f_198 = 4;
			}
			break;
		case 4:
			if (!__LIB_19__::func_293(uParam0, 1))
			{
				__LIB_13__::func_823(uParam0, 3f, 0);
				uParam0->f_1 = 11;
			}
			break;
		case 5:
			if (!func_393(uParam0))
			{
				if (__LIB_13__::func_742(uParam0, 131072))
				{
					__LIB_13__::func_823(uParam0, 3f, 0);
					__LIB_13__::func_734(uParam0, 131072);
				}
				func_400(uParam0, 1);
			}
			else
			{
				switch (uParam0->f_534)
				{
					case 0:
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_532, false, 0))
						{
							__LIB_13__::func_831(&(uParam0->f_284), 0, 0);
							uParam0->f_534++;
						}
						break;
					case 1:
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_532, false, 0))
						{
							__LIB_13__::func_831(&(uParam0->f_284), 0, 1);
							uParam0->f_534 = (uParam0->f_534 - 1);
						}
						break;
				}
				switch (func_641(uParam0, uParam1))
				{
					case 4:
						uParam0->f_535 = 1;
						__LIB_18__::func_687(uParam0);
						__LIB_13__::func_731(uParam0, 262144);
						func_353(uParam0, 0);
						__LIB_13__::func_832(&(uParam0->f_284), 0);
						__LIB_13__::func_724(uParam0, 17);
						__LIB_18__::func_688(&(uParam0->f_133), *uParam0, &(uParam0->f_112), &(uParam0->f_90));
						__LIB_3__::func_962(&(uParam0->f_133), __LIB_13__::func_759(*uParam0));
						__LIB_3__::func_962(&(uParam0->f_154), 5);
						__LIB_3__::func_962(&(uParam0->f_175), 5);
						uParam0->f_495 = 0;
						uParam0->f_198 = 6;
						break;
					default:
						__LIB_3__::func_962(&(uParam0->f_133), __LIB_13__::func_759(*uParam0));
						__LIB_3__::func_962(&(uParam0->f_154), 5);
						__LIB_3__::func_962(&(uParam0->f_175), 5);
						break;
				}
			}
			break;
		case 6:
			if (func_645(uParam0))
			{
				uParam0->f_198 = 7;
			}
			break;
		case 7:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_133.f_1, false))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_18__::func_654(uParam0);
				uParam0->f_198 = 8;
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 993600644))
			{
				__LIB_0__::func_769();
				__LIB_0__::func_45("HRB_SUCCESS", 10000, 0, 0, 0, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_647(__LIB_13__::func_776(*uParam0), __LIB_13__::func_745(*uParam0), 0, -142743235, 0);
				__LIB_8__::func_960(12, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				__LIB_13__::func_724(uParam0, 15);
				__LIB_19__::func_300(*uParam0);
				__LIB_2__::func_919(uParam0->f_90[19], 0, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				if (MAP::DOES_BLIP_EXIST(uParam0->f_9))
				{
					MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_9, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
				}
				__LIB_13__::func_726(3);
				uParam0->f_198 = 8;
			}
			break;
		case 8:
			if (uParam0->f_536)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_407(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_7, -944481653))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_242, uParam0->f_7, PED::GET_PED_BONE_INDEX(uParam0->f_7, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_242, true);
		__LIB_2__::func_478(uParam0->f_7, Global_35, __LIB_13__::func_777(uParam0->f_240), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_7, -228458952))
	{
		__LIB_2__::func_919(uParam0->f_242, 1, 1);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_242, false);
		__LIB_14__::func_590(uParam0->f_7, __LIB_13__::func_778(uParam0->f_240), 1, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 227258506) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1308194400))
	{
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -228458952))
	{
		__LIB_2__::func_919(uParam0->f_242, 1, 1);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_242, false);
		__LIB_2__::func_478(uParam0->f_7, Global_35, __LIB_13__::func_779(uParam0->f_240), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		if (__LIB_18__::func_669(uParam0) != 4)
		{
			func_655(__LIB_13__::func_778(uParam0->f_240), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		}
		else
		{
			__LIB_9__::func_952(joaat("RE_HERBALIST_CAMP_REWARD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0);
		}
	}
}

void func_408(var uParam0)
{
	int iVar0;
	if (__LIB_18__::func_669(uParam0) == 2 || __LIB_18__::func_669(uParam0) == 1)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 500, -1f, -1f, -1f);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "TAKE_OUT_PAMP_HERBALIST", Global_35, __LIB_3__::func_444("SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "TAKE_OUT_PAMP_HERBALIST"), 8f, -8f, 8200, 0f, false, false, -1f, 0, 0, -1f);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "PAMP_LOOP_HERBALIST", Global_35, -1, 8f, -8f, 8201, 0f, false, false, -1f, 0, 0, -1f);
		__LIB_1__::func_474(uParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 500, -1f, -1f, -1f);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "TAKE_OUT_SERUM_HERBALIST", Global_35, __LIB_3__::func_444("SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "TAKE_OUT_SERUM_HERBALIST"), 8f, -8f, 8200, 0f, false, false, -1f, 0, 0, -1f);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_LOOP_HERBALIST", Global_35, -1, 8f, -8f, 8201, 0f, false, false, -1f, 0, 0, -1f);
		__LIB_1__::func_474(uParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
}

int func_413(var uParam0, var uParam1, var uParam2)
{
	struct<4> Var0[4];
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;
	bool bVar32;
	vector3 vVar33;
	vector3 vVar36;
	vector3 vVar39;
	float fVar42;
	vVar17 = { -2.4f, 2.68f, 0f };
	vVar20 = { 0.77f, 4f, 0f };
	vVar23 = { -2.15f, 1.32f, 0f };
	vVar26 = { 0.21f, 2.2f, 0f };
	vVar29 = { __LIB_3__::func_508(Global_35, uParam0->f_175.f_1, "player", "PB_HANDOVER", 1) };
	Var0[0 /*4*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(__LIB_3__::func_179(uParam1), __LIB_3__::func_526(uParam1), vVar17) };
	Var0[1 /*4*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(__LIB_3__::func_179(uParam1), __LIB_3__::func_526(uParam1), vVar20) };
	Var0[2 /*4*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(__LIB_3__::func_179(uParam1), __LIB_3__::func_526(uParam1), vVar23) };
	Var0[3 /*4*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(__LIB_3__::func_179(uParam1), __LIB_3__::func_526(uParam1), vVar26) };
	Var0[0 /*4*/].f_3 = __LIB_0__::func_62(Global_36, Var0[0 /*4*/]);
	Var0[1 /*4*/].f_3 = __LIB_0__::func_62(Global_36, Var0[1 /*4*/]);
	Var0[2 /*4*/].f_3 = __LIB_0__::func_62(Global_36, Var0[2 /*4*/]);
	Var0[3 /*4*/].f_3 = __LIB_0__::func_62(Global_36, Var0[3 /*4*/]);
	bVar32 = true;
	if (__LIB_0__::func_195(Var0[0 /*4*/], Var0[1 /*4*/], Global_36))
	{
		bVar32 = true;
	}
	else if (__LIB_0__::func_195(Var0[3 /*4*/], Var0[2 /*4*/], Global_36))
	{
		bVar32 = false;
	}
	else if (Var0[0 /*4*/].f_3 + Var0[1 /*4*/].f_3) > (Var0[0 /*4*/].f_3 + Var0[1 /*4*/].f_3)
	{
		bVar32 = false;
	}
	if (bVar32)
	{
		*uParam2 = { vVar29 };
		uParam2->f_3 = __LIB_0__::func_152(*uParam2, ENTITY::GET_ENTITY_COORDS(uParam0->f_7, true, false), 1);
		return 0;
	}
	else if (__LIB_0__::func_195(Var0[2 /*4*/], Var0[3 /*4*/], Global_36))
	{
		vVar33 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_7, true, false) };
		vVar36 = { __LIB_3__::func_508(Global_35, uParam0->f_154.f_1, "herbalist", "PB_HANDOVER", 1) };
		vVar39 = { __LIB_3__::func_508(Global_35, uParam0->f_154.f_1, "player", "PB_HANDOVER", 1) };
		fVar42 = BUILTIN::VDIST(vVar36, vVar39);
		if (Var0[2 /*4*/].f_3 < Var0[3 /*4*/].f_3)
		{
			*uParam2 = { vVar33 + Vector(fVar42, fVar42, fVar42) * __LIB_1__::func_868(vVar33, Var0[2 /*4*/], 1065353216 /* Float: 1f */) };
		}
		else
		{
			*uParam2 = { vVar33 + Vector(fVar42, fVar42, fVar42) * __LIB_1__::func_868(vVar33, Var0[3 /*4*/], 1065353216 /* Float: 1f */) };
		}
		uParam2->f_3 = __LIB_0__::func_152(*uParam2, vVar33, 1);
	}
	else
	{
		*uParam2 = { __LIB_3__::func_508(Global_35, uParam0->f_154.f_1, "player", "PB_HANDOVER", 1) };
		uParam2->f_3 = __LIB_0__::func_152(*uParam2, ENTITY::GET_ENTITY_COORDS(uParam0->f_7, true, false), 1);
	}
	return 1;
}

int func_415(int iParam0, var uParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	var uVar1;
	struct<11> Var2;
	int iVar13;
	if (!__LIB_0__::func_71(iParam0))
	{
		if (bParam11)
		{
			iVar0 = __LIB_0__::func_398(7);
		}
		else
		{
			iVar0 = PED::_GET_LAST_MOUNT(iParam0);
		}
		if (!__LIB_0__::func_272(iVar0, 1) || (!(VOLUME::_DOES_VOLUME_EXIST(iParam5) && __LIB_1__::func_205(iVar0, iParam5, 1, 0)) && __LIB_0__::func_665(iParam0, iVar0, 1, 1) > fParam6))
		{
			return 1;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (__LIB_1__::func_16(iVar0) && __LIB_0__::func_402(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*uParam1 = __LIB_2__::func_338(&uVar1, &Var2);
				if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
				{
					*uParam1 = iVar0;
				}
			}
			else
			{
				*uParam1 = iVar0;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			return 1;
		}
		if (__LIB_0__::func_272(*uParam1, 1))
		{
			if (!(__LIB_0__::func_163(*uParam1, 518218985) || __LIB_0__::func_163(*uParam1, 713668775)))
			{
				TASK::CLEAR_PED_TASKS(*uParam1, true, false);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				FLOCK::_0xFF1E339CE40EAAAF(*uParam1, 0);
				POPULATION::_0xF74E134F40192884(*uParam1, 2);
				if (!__LIB_0__::func_86(vParam2))
				{
					bParam8 = false;
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam1, vParam2, fParam12, -1, 0.25f, 0, 40000f);
				}
				if (VOLUME::_DOES_VOLUME_EXIST(iParam5))
				{
					POPULATION::_0xB56D41A694E42E86(iParam5, 2048, 0, 0, -1, -1, 2);
					if (bParam8)
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*uParam1, VOLUME::_GET_VOLUME_COORDS(iParam5), iParam7, iVar13, fParam6, 6000, 0);
					}
				}
				if (!bParam8 && __LIB_0__::func_86(vParam2))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return 0;
}

bool func_416(var uParam0)
{
	switch (uParam0->f_210)
	{
		case 0:
			__LIB_1__::func_148(&(uParam0->f_212));
			uParam0->f_210++;
			break;
		case 1:
			if (__LIB_1__::func_285(&(uParam0->f_212), 14f))
			{
				__LIB_2__::func_478(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_TAKEORNOT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				if (__LIB_18__::func_669(uParam0) == 2 || __LIB_18__::func_669(uParam0) == 1)
				{
					func_667(uParam0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "DO_U_WANT_IT_PAMP_HERBALIST");
				}
				else
				{
					func_667(uParam0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "DO_U_WANT_IT_HERBALIST");
				}
				uParam0->f_210++;
			}
			break;
		case 2:
			if (TASK::GET_SEQUENCE_PROGRESS(uParam0->f_7) == 1)
			{
				__LIB_1__::func_148(&(uParam0->f_212));
				uParam0->f_210++;
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&(uParam0->f_212), 5f))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_418(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	__LIB_13__::func_823(uParam0, 10f, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (bParam2)
	{
		if (__LIB_18__::func_669(uParam0) == 2 || __LIB_18__::func_669(uParam0) == 1)
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "DECLINE_PAMP_HERBALIST", Global_35, __LIB_3__::func_444("SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "DECLINE_PAMP_HERBALIST"), 8f, -8f, 8200, 0f, false, false, -1f, 0, 0, -1f);
		}
		else
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_DECLINE_HERBALIST", Global_35, __LIB_3__::func_444("SCRIPT_RE@SUSPENSION_TRAP@HANDOVER", "DONT_TAKE_OFFER_VICTIM"), 8f, -8f, 8200, 0f, false, false, -1f, 0, 0, -1f);
		}
	}
	__LIB_18__::func_659(uParam0, 1, iParam1, 1, 0, 1, 0);
	__LIB_1__::func_474(uParam0->f_7, &iVar0, 0, 0, 1, 1);
}

bool func_419(var uParam0)
{
	switch (uParam0->f_241)
	{
		case 0:
			if (__LIB_18__::func_669(uParam0) == 2 || __LIB_18__::func_669(uParam0) == 1)
			{
				return __LIB_18__::func_689(Global_35, &(uParam0->f_175), "player", 5, &(uParam0->f_495), 1065353216 /* Float: 1f */, 1, 1);
			}
			else
			{
				return __LIB_18__::func_689(Global_35, &(uParam0->f_175), "player", 4, &(uParam0->f_495), 1065353216 /* Float: 1f */, 1, 1);
			}
			break;
		case 1:
			if (__LIB_18__::func_669(uParam0) == 2 || __LIB_18__::func_669(uParam0) == 1)
			{
				return __LIB_18__::func_689(Global_35, &(uParam0->f_154), "player", 5, &(uParam0->f_495), 1065353216 /* Float: 1f */, 1, 1);
			}
			else
			{
				return __LIB_18__::func_689(Global_35, &(uParam0->f_154), "player", 4, &(uParam0->f_495), 1065353216 /* Float: 1f */, 1, 1);
			}
			break;
	}
	return false;
}

void func_421(var uParam0)
{
	int iVar0;
	__LIB_3__::func_447(&(uParam0->f_9), uParam0->f_7, 0);
	PED::_0x802092B07E3B1EEA(uParam0->f_7, Global_36, 3);
	if (!PED::_0xEC6935EBE0847B90(uParam0->f_7, Global_36))
	{
		if (!PED::_0x463803429297117C(uParam0->f_7, Global_36, 1, 0))
		{
			PED::_0xF1C03A5352243A30(uParam0->f_7);
		}
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (__LIB_0__::func_153(uParam0->f_7, 0, 1, 0) == joaat("WEAPON_UNARMED"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_7, joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
	}
	TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	__LIB_1__::func_474(uParam0->f_7, &iVar0, 0, 0, 1, 1);
}

void func_426(var uParam0)
{
	__LIB_1__::func_581(&(uParam0->f_73), 4);
}

bool func_436(int iParam0)
{
	if ((AUDIO::_0xFE5C6177064BD390(1) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) || AUDIO::IS_ANY_SPEECH_PLAYING(iParam0->f_7))
	{
		__LIB_4__::func_340(&(iParam0->f_284.f_21[0 /*17*/]));
		__LIB_4__::func_340(&(iParam0->f_284.f_21[1 /*17*/]));
	}
	switch (iParam0->f_474)
	{
		case 0:
			if (!__LIB_13__::func_749(iParam0, 0))
			{
				__LIB_13__::func_831(&(iParam0->f_284), 0, 1);
			}
			__LIB_13__::func_831(&(iParam0->f_284), 1, 1);
			__LIB_13__::func_744(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_WASTING");
			func_384(&(iParam0->f_284));
			iParam0->f_474 = 1;
			break;
		case 1:
			__LIB_13__::func_733(iParam0, 0);
			__LIB_13__::func_733(iParam0, 1);
			__LIB_13__::func_832(&(iParam0->f_284), 1);
			__LIB_13__::func_744(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_LEAVEYOU");
			__LIB_4__::func_317(&(iParam0->f_284), 0, __LIB_2__::func_460(8));
			__LIB_13__::func_744(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_KILLYOU");
			__LIB_4__::func_317(&(iParam0->f_284), 1, __LIB_2__::func_460(10));
			func_384(&(iParam0->f_284));
			iParam0->f_474 = 2;
			break;
		case 2:
		case 3:
			return true;
	}
	return false;
}

void func_441(var uParam0)
{
	__LIB_2__::func_451(uParam0, 0);
	uParam0->f_75 = 0;
}

bool func_442(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_7, 0))
	{
		if (uParam0->f_203 != 0)
		{
			uParam0->f_203 = 0;
		}
		return false;
	}
	if (__LIB_13__::func_742(uParam0, 262144))
	{
		return false;
	}
	*uParam1 = func_680(uParam0);
	*uParam2 = 0;
	*uParam3 = (__LIB_13__::func_742(uParam0, 65536) || __LIB_18__::func_691(uParam0, *uParam1, 0));
	*uParam4 = (*uParam3 && !__LIB_13__::func_780(uParam0, joaat("SCRIPT_COMMON_STAND_HERBALIST")));
	*uParam5 = (__LIB_13__::func_742(uParam0, 16) && PED::_0x569F1E1237508DEB(uParam0->f_7) == joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST"));
	return true;
}

int func_443(var uParam0, int iParam1, bool bParam2, var uParam3, bool bParam4, bool bParam5)
{
	if (bParam4 && __LIB_13__::func_780(uParam0, joaat("SCRIPT_COMMON_STAND_HERBALIST")))
	{
		__LIB_1__::func_148(&(uParam0->f_441));
		return 4;
	}
	else if (__LIB_19__::func_301(uParam0, &bParam2, iParam1, 1))
	{
		return __LIB_18__::func_686(uParam0, bParam2, 1);
	}
	else if (func_396(uParam0, bParam4, bParam5, 0))
	{
		return 3;
	}
	return 2;
}

int func_446(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (TASK::_0x79197F7D2BB5E73A(uParam0->f_7, uParam0->f_89, "SCRIPT_COMMON@SHARED_SCENARIOS@STAND@RANDOM@HERBALIST@MIX_MORTAR@TRANSITIONS@STAND_2_SIT", "STAND_2_SIT", __LIB_13__::func_768(joaat("WORLD_HUMAN_SIT_GROUND_MALE_A")), 0))
	{
		return 7;
	}
	return 6;
}

int func_448(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	__LIB_1__::func_148(&(uParam0->f_447));
	return 12;
}

int func_450(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (TASK::_0x79197F7D2BB5E73A(uParam0->f_7, uParam0->f_87, "SCRIPT_COMMON@SHARED_SCENARIOS@STAND@RANDOM@HERBALIST@MIX_MORTAR@TRANSITIONS@SIT_2_STAND", "SIT_2_STAND", __LIB_13__::func_768(joaat("SCRIPT_COMMON_STAND_HERBALIST")), 0))
	{
		return 15;
	}
	return 14;
}

int func_453(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	__LIB_13__::func_808(uParam0->f_7);
	switch (__LIB_18__::func_693(uParam0, iParam1))
	{
		case 0:
			__LIB_18__::func_694(uParam0);
			break;
		case 1:
			__LIB_18__::func_694(uParam0);
			break;
		case 2:
			__LIB_1__::func_148(&(uParam0->f_444));
			return 20;
	}
	return 19;
}

int func_574(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_807(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_3__::func_156(iParam1, uParam3, uParam0);
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

void func_578(var uParam0, var uParam1)
{
	int iVar0;
	uParam0->f_511 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (__LIB_18__::func_698(uParam0, uParam1, iVar0))
		{
			MISC::SET_BIT(&(uParam0->f_511), iVar0);
		}
		iVar0++;
	}
}

void func_579(int iParam0, int iParam1)
{
	if (__LIB_19__::func_293(iParam0, 1))
	{
	}
	else
	{
		__LIB_13__::func_724(iParam0, 41);
		iParam0->f_516 = 0;
		if (__LIB_0__::func_75(&(iParam0->f_459)))
		{
			if (__LIB_0__::func_33(&(iParam0->f_459)))
			{
				__LIB_2__::func_113(&(iParam0->f_459));
			}
		}
		func_622(&(iParam0->f_284), 1);
		iParam0->f_523 = iParam1;
	}
}

void func_599(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	func_837(uParam0[0 /*17*/], __LIB_2__::func_460(7), sParam1, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_837(uParam0[1 /*17*/], __LIB_2__::func_460(10), sParam2, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	if (!bParam4)
	{
		func_837(uParam0[2 /*17*/], __LIB_2__::func_460(12), sParam3, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			__LIB_2__::func_411(uParam0[2 /*17*/], 0, 0);
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		__LIB_2__::func_411(uParam0[0 /*17*/], 0, 0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		__LIB_2__::func_411(uParam0[1 /*17*/], 0, 0);
	}
}

void func_622(var uParam0, bool bParam1)
{
	if (bParam1 || !__LIB_0__::func_27(uParam0->f_73, 16))
	{
		__LIB_13__::func_800(uParam0, &(uParam0->f_76), 0);
		__LIB_19__::func_307(&(uParam0->f_21), &(uParam0->f_97), 1);
		__LIB_1__::func_581(&(uParam0->f_73), 16);
	}
}

void func_634(var uParam0, bool bParam1)
{
	if (__LIB_0__::func_27(uParam0->f_73, 1) != bParam1)
	{
		if (bParam1)
		{
			if (!__LIB_0__::func_27(uParam0->f_73, 2))
			{
				__LIB_1__::func_581(&(uParam0->f_73), 1);
				__LIB_4__::func_317(uParam0, 0, __LIB_2__::func_460(24));
			}
		}
		else
		{
			__LIB_1__::func_681(&(uParam0->f_73), 1);
			__LIB_4__::func_317(uParam0, 0, __LIB_2__::func_460(7));
		}
	}
}

char* func_635(var uParam0)
{
	switch (*uParam0)
	{
		case 43:
			return "RE_HEC_UNI_V1_YARROWGOOD";
		case 18:
			return "RE_HEC_UNI_V1_FANCY";
		case 19:
			return "RE_HEC_UNI_V1_WHATGOOD";
		case 40:
			return "RE_HEC_UNI_V1_FEVERFEW";
		default:
			break;
	}
	return "";
}

void func_637(var uParam0)
{
	int iVar0;
	if (!func_393(uParam0))
	{
		iVar0 = __LIB_4__::func_126(*uParam0);
		if (uParam0->f_271 != iVar0)
		{
			func_398(uParam0, iVar0, 0);
			uParam0->f_271 = iVar0;
		}
	}
	else if (!__LIB_13__::func_749(uParam0, 9))
	{
		__LIB_13__::func_831(&(uParam0->f_284), 1, 0);
		if (__LIB_13__::func_727(uParam0, 62))
		{
			__LIB_13__::func_730(uParam0, 62);
		}
		__LIB_13__::func_733(uParam0, 9);
	}
}

int func_638(var uParam0)
{
	if (__LIB_19__::func_293(uParam0, 1))
	{
		return 0;
	}
	switch (uParam0->f_433)
	{
		case 0:
			__LIB_13__::func_733(uParam0, 8);
			__LIB_13__::func_831(&(uParam0->f_284), 2, 0);
			__LIB_13__::func_831(&(uParam0->f_284), 0, 0);
			__LIB_13__::func_831(&(uParam0->f_284), 1, 0);
			if (__LIB_13__::func_727(uParam0, 1))
			{
				__LIB_18__::func_652(12);
			}
			func_384(&(uParam0->f_284));
			return 1;
		case -1:
			func_853(uParam0);
			if (func_393(uParam0))
			{
				if (!__LIB_13__::func_749(uParam0, 9))
				{
					__LIB_13__::func_831(&(uParam0->f_284), 1, 0);
					if (__LIB_13__::func_727(uParam0, 62))
					{
						__LIB_13__::func_730(uParam0, 62);
					}
					__LIB_13__::func_733(uParam0, 9);
				}
				return 3;
			}
			else if (!__LIB_19__::func_293(uParam0, 1))
			{
				if (func_854(uParam0))
				{
					__LIB_13__::func_730(uParam0, 13);
					__LIB_0__::func_325(&(uParam0->f_9));
					__LIB_13__::func_730(uParam0, 62);
					__LIB_18__::func_654(uParam0);
					__LIB_0__::func_769();
					uParam0->f_1 = 11;
				}
			}
			else
			{
				__LIB_1__::func_148(&(uParam0->f_508));
			}
			break;
	}
	return 0;
}

char* func_639(var uParam0)
{
	switch (*uParam0)
	{
		case 43:
			return "RE_HEC_UNI_V1_BENEFITS";
		case 18:
			return "RE_HEC_UNI_V1_BYANYMEANS";
		case 19:
			return "RE_HEC_UNI_V1_ELABORATE";
		case 40:
			return "RE_HEC_UNI_V1_KEEPMEGOING";
		default:
			break;
	}
	return "";
}

void func_640(var uParam0, float fParam1)
{
	if (!__LIB_0__::func_75(&(uParam0->f_505)))
	{
		__LIB_1__::func_148(&(uParam0->f_505));
	}
	uParam0->f_211 = (uParam0->f_211 + fParam1);
}

int func_641(var uParam0, var uParam1)
{
	switch (uParam0->f_433)
	{
		case 0:
			__LIB_13__::func_832(&(uParam0->f_284), 0);
			__LIB_13__::func_730(uParam0, 62);
			func_384(&(uParam0->f_284));
			return 4;
		case -1:
			func_855(uParam0);
			__LIB_13__::func_801(&(uParam0->f_284), 0, 5f, __LIB_0__::func_665(Global_35, uParam0->f_7, 1, 1));
			func_857(uParam0, uParam1, 2f);
			if (!__LIB_19__::func_293(uParam0, 1))
			{
				if (!__LIB_13__::func_727(uParam0, 27))
				{
					if (uParam0->f_205 == 0)
					{
						if (func_854(uParam0))
						{
							__LIB_13__::func_730(uParam0, 13);
							__LIB_0__::func_325(&(uParam0->f_9));
							__LIB_13__::func_730(uParam0, 62);
							__LIB_18__::func_654(uParam0);
							__LIB_0__::func_769();
							uParam0->f_1 = 11;
						}
					}
				}
			}
			else
			{
				__LIB_1__::func_148(&(uParam0->f_508));
			}
			break;
	}
	return 0;
}

bool func_645(var uParam0)
{
	if (__LIB_3__::func_962(&(uParam0->f_133), __LIB_13__::func_759(*uParam0)))
	{
		if (__LIB_18__::func_689(Global_35, &(uParam0->f_133), "player", __LIB_13__::func_759(*uParam0), &(uParam0->f_495), 1065353216 /* Float: 1f */, 1, 1))
		{
			return true;
		}
	}
	return false;
}

int func_647(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
	iVar3 = __LIB_0__::func_937(iParam0, 1);
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
			func_859(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!__LIB_1__::func_707(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) < 0)
		{
			func_647(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
		func_859(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_6__::func_701(iParam0, iParam1);
	return 1;
}

int func_655(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (!func_866(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	__LIB_0__::func_912(iParam0, bParam2);
	iVar2 = 0;
	if (__LIB_1__::func_614(iParam0, 0, 0) == 0)
	{
		if (__LIB_1__::func_153(iParam0))
		{
			iVar5 = __LIB_0__::func_913(iParam0);
			iVar6 = __LIB_0__::func_352(iVar5);
			iVar7 = __LIB_1__::func_756(iVar6) + 1;
			__LIB_1__::func_757(iVar5);
			if (__LIB_1__::func_154(38))
			{
				__LIB_1__::func_240(483, 0);
			}
			else
			{
				__LIB_1__::func_240(482, 0);
			}
			if (iVar7 == __LIB_0__::func_353(iVar6))
			{
				func_655(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(1);
				}
			}
			if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_450(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_1__::func_450(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if ((!__LIB_0__::func_192(iParam0, 866047851) && !__LIB_0__::func_192(iParam0, -1979000645)) && !__LIB_0__::func_192(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (__LIB_0__::func_774(iParam0, 8388608) && !__LIB_0__::func_293(28))
	{
		__LIB_19__::func_100(28);
	}
	if (!bVar3)
	{
		if (__LIB_0__::func_192(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (__LIB_0__::func_357(iParam0) == -1447088266)
			{
				iVar1 = __LIB_0__::func_775(__LIB_0__::func_914(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iVar1);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iParam0);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
		{
			if (!func_889(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!__LIB_3__::func_708(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			__LIB_1__::func_833(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, 2000026003))
		{
			__LIB_1__::func_632(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -103750053))
		{
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (__LIB_0__::func_192(iParam0, -121341956) && !__LIB_0__::func_192(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
				{
					__LIB_1__::func_240(498, 0);
				}
			}
			if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
			{
				__LIB_1__::func_796(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -136654233))
		{
			if (__LIB_0__::func_192(iParam0, -1021472396))
			{
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1466706512) && __LIB_0__::func_192(iParam0, 1147021565))
		{
			__LIB_1__::func_240(484, 0);
		}
		else if (__LIB_0__::func_192(iParam0, 1147021565) && __LIB_0__::func_192(iParam0, -524514947))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 554195525))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 589988438))
		{
			if (__LIB_1__::func_709())
			{
				__LIB_1__::func_797(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_843(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_1__::func_844(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_1__::func_845(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_4__::func_129(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (__LIB_0__::func_192(iParam0, 1841149704))
		{
			__LIB_0__::func_359();
		}
		else if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_1__::func_847(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_4__::func_130(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			__LIB_1__::func_796(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return 0;
			}
			__LIB_1__::func_824(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_655(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_655(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_655(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_655(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_655(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_655(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_601(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1399091007))
		{
			__LIB_0__::func_917(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_655(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				__LIB_19__::func_100(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				__LIB_1__::func_240(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				__LIB_0__::func_361();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				__LIB_0__::func_362();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				__LIB_0__::func_363();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				__LIB_1__::func_244();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				__LIB_1__::func_424(242, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				__LIB_1__::func_424(240, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				__LIB_1__::func_424(241, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				__LIB_1__::func_240(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				__LIB_1__::func_240(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				__LIB_1__::func_240(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_655(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_655(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (__LIB_0__::func_293(1))
				{
					__LIB_1__::func_240(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				__LIB_1__::func_240(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (__LIB_0__::func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				__LIB_1__::func_240(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_3__::func_427(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return 1;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			__LIB_19__::func_102(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_19__::func_434(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (__LIB_0__::func_708(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_655(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			__LIB_1__::func_451(iVar2, 0);
		}
	}
	Var35 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	__LIB_1__::func_602(iParam0);
	if (fParam6 > 0f)
	{
		if (__LIB_0__::func_192(iParam0, -839724752))
		{
			__LIB_1__::func_157(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_859(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_667(var uParam0, char* sParam1, char* sParam2)
{
	int iVar0;
	if (__LIB_18__::func_669(uParam0) == 2 || __LIB_18__::func_669(uParam0) == 1)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sParam1, sParam2, Global_35, __LIB_3__::func_444(sParam1, sParam2), 8f, -8f, 8200, 0f, false, false, -1f, 0, 0, -1f);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "PAMP_LOOP_HERBALIST", Global_35, -1, 8f, -8f, 8201, 0f, false, false, -1f, 0, 0, -1f);
		__LIB_1__::func_474(uParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sParam1, sParam2, Global_35, __LIB_3__::func_444(sParam1, sParam2), 8f, -8f, 8200, 0f, false, false, -1f, 0, 0, -1f);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_LOOP_HERBALIST", Global_35, -1, 8f, -8f, 8201, 0f, false, false, -1f, 0, 0, -1f);
		__LIB_1__::func_474(uParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
}

int func_680(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_13__::func_743(uParam0->f_472);
	if (uParam0->f_473 != 0)
	{
		iVar0 = (iVar0 || uParam0->f_473);
	}
	__LIB_0__::func_516(&iVar0, 1);
	return iVar0;
}

int func_807(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_807(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

void func_837(int* iParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = cParam1;
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

void func_853(var uParam0)
{
	if (!__LIB_13__::func_727(uParam0, 28))
	{
		if (!__LIB_0__::func_48(Global_35, uParam0->f_7, 20f, 1))
		{
			__LIB_13__::func_724(uParam0, 28);
			if (!func_1084(uParam0))
			{
				__LIB_13__::func_744(&(uParam0->f_284), 0, "RE_HEC_UNI_V1_LOOKING");
				func_384(&(uParam0->f_284));
			}
		}
	}
}

bool func_854(var uParam0)
{
	if (!__LIB_0__::func_75(&(uParam0->f_505)))
	{
		__LIB_1__::func_148(&(uParam0->f_505));
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_7) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
	{
		__LIB_1__::func_148(&(uParam0->f_505));
	}
	if (__LIB_0__::func_75(&(uParam0->f_508)))
	{
		if (!__LIB_1__::func_285(&(uParam0->f_508), 3f))
		{
			if (uParam0->f_209 < 6)
			{
				return false;
			}
		}
	}
	if (!__LIB_19__::func_293(uParam0, 1) && !__LIB_13__::func_749(uParam0, 7))
	{
		if (__LIB_0__::func_48(Global_35, uParam0->f_7, 10f, 1))
		{
			switch (uParam0->f_209)
			{
				case 0:
					if (__LIB_0__::func_265(&(uParam0->f_505)) > 8f)
					{
						func_640(uParam0, 10f);
						uParam0->f_209++;
					}
					break;
				case 1:
					if (TASK::_0x916B8E075ABC8B4E(uParam0->f_7, 0))
					{
						__LIB_2__::func_478(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_REMINDER_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						uParam0->f_209++;
					}
					break;
				case 2:
					if (!TASK::_0x916B8E075ABC8B4E(uParam0->f_7, 1))
					{
						uParam0->f_209++;
					}
					break;
				case 3:
					if (TASK::_0x916B8E075ABC8B4E(uParam0->f_7, 0))
					{
						__LIB_2__::func_478(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_REMINDER_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						uParam0->f_209++;
					}
					break;
				case 4:
					if (!TASK::_0x916B8E075ABC8B4E(uParam0->f_7, 1))
					{
						uParam0->f_209++;
					}
					break;
				case 5:
					if (TASK::_0x916B8E075ABC8B4E(uParam0->f_7, 0))
					{
						__LIB_2__::func_478(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_FORGET", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						uParam0->f_209++;
						return false;
					}
					break;
				default:
					return false;
			}
		}
	}
	return false;
}

void func_855(var uParam0)
{
	switch (uParam0->f_205)
	{
		case 0:
			if (!__LIB_19__::func_293(uParam0, 1))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_7, false);
				if (__LIB_13__::func_727(uParam0, 28))
				{
					if (__LIB_13__::func_830(uParam0, 131072))
					{
						if (!__LIB_13__::func_727(uParam0, 30))
						{
							__LIB_19__::func_484(uParam0, 1);
						}
						else if (!__LIB_13__::func_727(uParam0, 31))
						{
							if (__LIB_0__::func_48(Global_35, uParam0->f_7, 20f, 1))
							{
								__LIB_19__::func_484(uParam0, 3);
							}
						}
					}
				}
				else
				{
					func_853(uParam0);
				}
			}
			break;
		case 1:
			if (!__LIB_19__::func_293(uParam0, 1))
			{
				if (__LIB_18__::func_665(uParam0, 0))
				{
					__LIB_13__::func_724(uParam0, 29);
					if (func_1085(uParam0))
					{
						__LIB_13__::func_724(uParam0, 59);
						TASK::TASK_PLAY_ANIM(uParam0->f_7, __LIB_13__::func_807(43, 1), "HEY_N_HERBALIST", 8f, -8f, -1, 67117072, 0f, false, 0, false, 0, false);
					}
					else
					{
						__LIB_13__::func_730(uParam0, 59);
						__LIB_2__::func_478(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_PLAYER_RETURN_01", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					if (__LIB_0__::func_75(&(uParam0->f_462)))
					{
						__LIB_0__::func_37(&(uParam0->f_462));
					}
					uParam0->f_205 = 2;
				}
			}
			break;
		case 2:
			if (func_1086(uParam0))
			{
				if (__LIB_0__::func_48(Global_35, uParam0->f_7, 20f, 1))
				{
					__LIB_13__::func_724(uParam0, 30);
					__LIB_19__::func_484(uParam0, 3);
				}
				else if (!__LIB_0__::func_75(&(uParam0->f_462)))
				{
					__LIB_1__::func_148(&(uParam0->f_462));
				}
				else if (__LIB_1__::func_285(&(uParam0->f_462), 5f))
				{
					__LIB_0__::func_37(&(uParam0->f_462));
					__LIB_13__::func_730(uParam0, 29);
					func_1087(uParam0, 30);
				}
			}
			break;
		case 3:
			if (!__LIB_19__::func_293(uParam0, 1))
			{
				if (__LIB_18__::func_665(uParam0, 0))
				{
					__LIB_13__::func_724(uParam0, 29);
					if (func_1085(uParam0))
					{
						__LIB_13__::func_724(uParam0, 59);
						__LIB_18__::func_666(uParam0->f_7, *uParam0, "YARROW_RETURN_A_UPPER", "GCURRANT_RETURN_A_UPPER", "VSNOWDROP_RETURN_A_UPPER", "HBSAGE_RETURN_A", 1);
					}
					else
					{
						__LIB_13__::func_730(uParam0, 59);
						__LIB_2__::func_478(uParam0->f_7, Global_35, __LIB_13__::func_809(*uParam0, "RE_HEC_UNI_V1_YARROW_RETURN", "RE_HEC_UNI_V1_SAGE_RETURN", "RE_HEC_UNI_V1_CURRANT_RETURN", "RE_HEC_UNI_V1_SNOWDROPS_RETURN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					uParam0->f_205 = 4;
				}
			}
			break;
		case 4:
			if (func_1088(uParam0))
			{
				if (!__LIB_0__::func_75(&(uParam0->f_462)))
				{
					__LIB_1__::func_148(&(uParam0->f_462));
				}
				else if (__LIB_1__::func_285(&(uParam0->f_462), 5f))
				{
					__LIB_13__::func_730(uParam0, 29);
					func_1087(uParam0, 31);
				}
			}
			break;
		case 5:
			uParam0->f_205 = 0;
			break;
	}
}

void func_857(var uParam0, var uParam1, float fParam2)
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(__LIB_3__::func_179(uParam1), __LIB_3__::func_526(uParam1), -1.17f, 3.39f, 0f) };
	iVar3 = PED::GET_MOUNT(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3) && __LIB_0__::func_394(Global_35, iVar3, 0))
	{
		if (__LIB_0__::func_636(Global_36, vVar0) <= fParam2 || __LIB_0__::func_636(ENTITY::GET_ENTITY_COORDS(iVar3, true, false), vVar0) <= fParam2)
		{
			__LIB_4__::func_340(&(uParam0->f_284.f_21[0 /*17*/]));
		}
	}
}

void func_859(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	else if (!func_1091(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	__LIB_0__::func_924(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_866(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && __LIB_1__::func_800(iParam0))
		{
			func_1097(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_889(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
			if (iParam1 == 1248274121)
			{
				__LIB_1__::func_618(iVar0);
			}
		}
		if (!__LIB_1__::func_761(iParam0, &uVar1, 1, 0, 0))
		{
			func_1097(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				__LIB_1__::func_708(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				__LIB_1__::func_708(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !__LIB_0__::func_181())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!__LIB_0__::func_216(iVar0))
				{
					__LIB_1__::func_708(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					__LIB_1__::func_708(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = __LIB_0__::func_153(Global_35, 2, 0, 1);
				if ((((__LIB_0__::func_154(iVar7) && !Global_43891) && iVar7 != iVar0) && !__LIB_0__::func_293(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (__LIB_0__::func_154(iVar7) && __LIB_0__::func_293(24))
				{
					if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		__LIB_1__::func_240(480, 1);
	}
	return true;
}

bool func_1084(var uParam0)
{
	return __LIB_0__::func_27(uParam0->f_284.f_73, 1);
}

bool func_1085(var uParam0)
{
	if (PED::_0x569F1E1237508DEB(uParam0->f_7) == joaat("SCRIPT_COMMON_STAND_HERBALIST") || PED::_0x569F1E1237508DEB(uParam0->f_7) == joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST"))
	{
		return true;
	}
	return false;
}

bool func_1086(var uParam0)
{
	if (__LIB_13__::func_727(uParam0, 59))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, __LIB_13__::func_807(43, 1), "HEY_N_HERBALIST", 1))
		{
			return true;
		}
	}
	else if (!__LIB_2__::func_136(uParam0->f_7, 1))
	{
		return true;
	}
	return false;
}

void func_1087(var uParam0, int iParam1)
{
	__LIB_13__::func_730(uParam0, 27);
	__LIB_13__::func_734(uParam0, 131072);
	__LIB_13__::func_724(uParam0, iParam1);
	__LIB_13__::func_823(uParam0, 5f, 0);
	uParam0->f_205 = 5;
}

bool func_1088(var uParam0)
{
	if (__LIB_13__::func_727(uParam0, 59))
	{
		if (!__LIB_18__::func_667(uParam0->f_7, *uParam0, "YARROW_RETURN_A_UPPER", "GCURRANT_RETURN_A_UPPER", "VSNOWDROP_RETURN_A_UPPER", "HBSAGE_RETURN_A", 1, 1))
		{
			return true;
		}
	}
	else if (!__LIB_2__::func_136(uParam0->f_7, 1))
	{
		return true;
	}
	return false;
}

bool func_1091(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @229; //curOff = 58
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @229; //curOff = 139
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @229; //curOff = 162
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @229; //curOff = 185
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_1097(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	if (__LIB_0__::func_356(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !__LIB_0__::func_214(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && __LIB_1__::func_614(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_859(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

