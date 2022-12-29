#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
#endregion
void __EntryFunction__()
{
	struct<180> Var0;
	int iVar180;
	int iVar181;
	int iVar182;
	int iVar183;
	Var0.f_1.f_2 = 1086324736;
	Var0.f_1.f_11.f_1 = 20;
	Var0.f_1.f_33 = 20;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var0.f_179))
		{
			OBJECT::DELETE_OBJECT(&(Var0.f_179));
		}
		if (!ScriptParam_0.f_3)
		{
			__LIB_9__::func_268(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	iVar180 = ScriptParam_0.f_2;
	if (!__LIB_0__::func_144(iVar180, 0))
	{
		iVar180 = joaat("CONSUMABLE_MEAL_BEEF_STEW");
	}
	if (__LIB_1__::func_652())
	{
		if (Global_1357549.f_1492 != joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE"))
		{
			iVar180 = Global_1357549.f_1492;
		}
		else
		{
			iVar181 = Global_1357549.f_1488;
			__LIB_1__::func_446(&iVar181, 0, 0, 24, 0, 0, 0, 0);
			if (__LIB_1__::func_426(iVar181, 1))
			{
				if (Global_40.f_4283.f_313 > 1)
				{
					Global_1357549.f_1492 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE_EGGS");
				}
				else
				{
					Global_1357549.f_1492 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
				}
				iVar180 = Global_1357549.f_1492;
			}
			else
			{
				iVar180 = Global_1357549.f_1492;
			}
		}
	}
	STREAMING::_REQUEST_CLIP_SET_BY_HASH(joaat("MECH_DYNAMIC@PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE@ARTHUR@TRANS@A_STEW_TRANS_GENERIC_A"));
	STREAMING::REQUEST_MODEL(joaat("P_SPOON01X_FOOD"), false);
	Var0.f_1 = iVar180;
	if (!ScriptParam_0.f_3)
	{
		__LIB_9__::func_268(1);
	}
	Var0.f_1.f_2 = 5f;
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!ScriptParam_0.f_3)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_179))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("P_SPOON01X_FOOD")))
				{
					Var0.f_179 = OBJECT::CREATE_OBJECT(joaat("P_SPOON01X_FOOD"), Global_36, false, true, false, false, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Var0.f_179, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
					ENTITY::SET_ENTITY_VISIBLE(Var0.f_179, false);
				}
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -701457528))
			{
				ENTITY::SET_ENTITY_VISIBLE(Var0.f_179, true);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1402617856))
			{
				ENTITY::SET_ENTITY_VISIBLE(Var0.f_179, false);
			}
		}
		if (IntToFloat(Var0.f_1.f_1) < Var0.f_1.f_2)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
			{
				Var0.f_1.f_1 = (1 + Var0.f_1.f_1);
				func_6(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
			}
		}
		switch (Var0)
		{
			case 0:
				if (__LIB_0__::func_144(Var0.f_1, 0))
				{
					__LIB_9__::func_269(&(Var0.f_1));
				}
				__LIB_0__::func_19(&Var0, 1);
				break;
			case 1:
				iVar182 = TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35);
				if (iVar182 != joaat("EAT_STEW_BOWL_BASE"))
				{
					if (iVar182 == joaat("EAT_STEW_BOWL_TABLE_BASE") || iVar182 == joaat("EAT_STEW_BOWL_CHAIR_BASE"))
					{
						if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
						{
							TASK::_0xB35370D5353995CB(Global_35, joaat("EAT_STEW_BOWL_BASE"), 1f);
						}
					}
				}
				else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
				{
					iVar183 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35);
					if (iVar183 != joaat("PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE"))
					{
						if (iVar183 == joaat("PROP_PLAYER_SEAT_CHAIR_DYNAMIC"))
						{
							TASK::_0xB35370D5353995CB(Global_35, joaat("EAT_STEW_BOWL_CHAIR_BASE"), 1f);
						}
					}
					else
					{
						TASK::_0xB35370D5353995CB(Global_35, joaat("EAT_STEW_BOWL_TABLE_BASE"), 1f);
					}
				}
				if (IntToFloat(Var0.f_1.f_1) >= (Var0.f_1.f_2 - 1f) || ((MISC::GET_FRAME_COUNT() % 10) == 0 && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f))
				{
					__LIB_0__::func_19(&Var0, 2);
				}
				break;
			case 2:
				iVar182 = TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35);
				PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "HIDE_STEW_DROP_PROMPT", true, 1);
				if (iVar182 == joaat("EAT_STEW_BOWL_BASE") || iVar182 == joaat("EAT_STEW_BOWL_CHAIR_BASE"))
				{
					PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "HIDE_STEW_EAT_PROMPT", true, 1);
					if (!__LIB_7__::func_37(-1))
					{
						if (iVar182 == joaat("EAT_STEW_BOWL_CHAIR_BASE"))
						{
							TASK::_0xB35370D5353995CB(Global_35, joaat("EAT_STEW_BOWL_CHAIR_EAT_FINISH_DISCARD_AUTO"), 0.25f);
						}
						else
						{
							TASK::_0xB35370D5353995CB(Global_35, joaat("EAT_STEW_BOWL_EAT_FINISH_DISCARD_AUTO"), 0.25f);
						}
						__LIB_0__::func_19(&Var0, 3);
					}
				}
				else if (iVar182 == joaat("EAT_STEW_BOWL_TABLE_BASE") || (iVar182 == joaat("EAT_STEW_BOWL_TABLE_EAT_FINISH_HOLD") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1160706425)))
				{
					PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "HIDE_STEW_EAT_PROMPT", true, 1);
					if (!__LIB_7__::func_37(-1))
					{
						PED::_0x6D07B371E9439019(Global_35);
						PED::_0xD65FDC686A031C83(Global_35, joaat("A_STEW_TRANS_GENERIC_A"), 1.5f);
					}
				}
				break;
			case 3:
				PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "HIDE_STEW_EAT_PROMPT", true, 1);
				PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "HIDE_STEW_DROP_PROMPT", true, 1);
				break;
		}
		BUILTIN::WAIT(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Var0.f_179))
	{
		OBJECT::DELETE_OBJECT(&(Var0.f_179));
	}
	if (!ScriptParam_0.f_3)
	{
		__LIB_9__::func_268(0);
	}
	if (Global_1357549.f_1492 == joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE"))
	{
	}
	else
	{
		Global_1357549.f_1492 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	}
}

void func_6(var uParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	if ((__LIB_0__::func_192(*uParam0, 1573112293) || __LIB_0__::func_192(*uParam0, 672467738)) || __LIB_0__::func_192(*uParam0, -550842268))
	{
		bVar8 = true;
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1935496.f_26 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		if (-943921969 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar1 = __LIB_9__::func_271(0, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
			__LIB_9__::func_272((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), 1);
			__LIB_0__::func_597(0, 7000);
			bVar10 = true;
		}
		else if (-1104847406 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar2 = __LIB_9__::func_271(2, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
			__LIB_9__::func_273((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
			__LIB_0__::func_597(2, 7000);
			bVar9 = true;
		}
		else if (381158954 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar3 = __LIB_9__::func_271(1, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
			__LIB_9__::func_274((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
			__LIB_0__::func_597(1, 7000);
		}
		else if (-416929031 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar4 = __LIB_6__::func_41((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
			if (__LIB_7__::func_848(&(uParam0->f_9), &(uParam0->f_10), fVar4))
			{
				__LIB_9__::func_160(fVar4, 1, bVar8, 1);
				__LIB_0__::func_597(0, 7000);
			}
			bVar10 = true;
		}
		else if (1857353317 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar5 = __LIB_6__::func_41((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
			if (__LIB_7__::func_848(&(uParam0->f_9), &(uParam0->f_10), fVar5))
			{
				__LIB_9__::func_159(fVar5, 1, bVar8, 1);
				__LIB_0__::func_597(2, 7000);
				bVar9 = true;
			}
		}
		else if (1681823811 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar6 = __LIB_6__::func_41((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
			if (__LIB_7__::func_848(&(uParam0->f_9), &(uParam0->f_10), fVar6))
			{
				__LIB_9__::func_158(fVar6, 1, bVar8, 1);
				__LIB_0__::func_597(1, 7000);
			}
		}
		else if (-816334026 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			__LIB_12__::func_187((BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), 1 == uParam0->f_1);
		}
		else if (bParam1)
		{
			if (2062242710 == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				__LIB_9__::func_278(19, fVar7);
				bVar10 = true;
			}
			else if (-826379728 == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				__LIB_9__::func_278(20, fVar7);
				bVar9 = true;
			}
			else if (-1191740624 == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				__LIB_9__::func_278(18, fVar7);
			}
			else if (1869697234 == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				__LIB_9__::func_278(0, fVar7);
				bVar10 = true;
			}
			else if (1342237631 == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				__LIB_9__::func_278(2, fVar7);
				bVar9 = true;
			}
			else if (-1240225157 == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				__LIB_9__::func_278(1, fVar7);
			}
		}
		iVar0++;
	}
	if (bVar10)
	{
		if (fVar4 > 0f || fVar1 > 0f)
		{
			iVar11 = 1;
		}
	}
	__LIB_9__::func_312(*uParam0, bParam1, bVar9, iVar11);
	__LIB_9__::func_270(uParam0);
	uParam0->f_3 = (uParam0->f_3 + fVar1);
	uParam0->f_4 = (uParam0->f_4 + fVar2);
	uParam0->f_5 = (uParam0->f_5 + fVar3);
	uParam0->f_6 = (uParam0->f_6 + fVar4);
	uParam0->f_7 = (uParam0->f_7 + fVar5);
	uParam0->f_8 = (uParam0->f_8 + fVar6);
}

