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
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
#endregion
void __EntryFunction__()
{
	struct<181> Var0;
	float fVar182;
	bool bVar183;
	int iVar184;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Var0.f_2.f_2 = 1086324736;
	Var0.f_2.f_11.f_1 = 20;
	Var0.f_2.f_33 = 20;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (!ScriptParam_0.f_3 && !Var0.f_180)
		{
			__LIB_9__::func_268(0);
		}
		func_2();
	}
	__LIB_9__::func_310(&ScriptParam_0, &(Var0.f_2));
	Var0.f_180 = 1;
	fVar182 = func_4(&Var0, &(ScriptParam_0.f_1));
	if (Var0.f_180)
	{
		Var0.f_2.f_2 = 1f;
	}
	else
	{
		Var0.f_2.f_2 = 4f;
	}
	if (!ScriptParam_0.f_3 && !Var0.f_180)
	{
		__LIB_9__::func_268(1);
		func_5();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (!ScriptParam_0.f_3)
		{
			if (!Var0.f_180)
			{
				iVar184 = TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35);
				func_6(&Var0);
				if (iVar184 == 1587785400 || iVar184 == 1183277175)
				{
					func_7(&Var0);
				}
				else if (iVar184 == 1342098323 || iVar184 == 79398913)
				{
					func_8(&Var0);
				}
				if (!PED::IS_PED_DEAD_OR_DYING(Global_35, true))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			__LIB_9__::func_311(&(Var0.f_2));
		}
		switch (Var0)
		{
			case 0:
				if (__LIB_0__::func_144(Var0.f_2, 0))
				{
					__LIB_9__::func_269(&(Var0.f_2));
				}
				if (ScriptParam_0.f_3)
				{
					Var0.f_2.f_2 = 1f;
					__LIB_0__::func_19(&Var0, 3);
				}
				else
				{
					__LIB_0__::func_19(&Var0, 1);
				}
				break;
			case 1:
				if (!Var0.f_180)
				{
					func_13(iVar184);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
				{
					Var0.f_2.f_1 = (1 + Var0.f_2.f_1);
					func_14(fVar182);
					func_15(&(Var0.f_2), IntToFloat(Var0.f_2.f_1) >= Var0.f_2.f_2);
				}
				if (IntToFloat(Var0.f_2.f_1) >= Var0.f_2.f_2)
				{
					func_16(Var0.f_2, 0);
					__LIB_0__::func_19(&Var0, 2);
				}
				if (!Var0.f_180)
				{
					if ((MISC::GET_FRAME_COUNT() % 10) == 0 && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f)
					{
						__LIB_0__::func_19(&Var0, 2);
					}
				}
				break;
			case 2:
				if (!Var0.f_180)
				{
					if (iVar184 == -1493684811 || iVar184 == -752898125)
					{
						TASK::_0xB35370D5353995CB(Global_35, func_17(Var0.f_2, iVar184), 0.25f);
						__LIB_0__::func_19(&Var0, 4);
					}
					else if (iVar184 != 1587785400)
					{
						if (iVar184 == 1342098323)
						{
							PED::_0xD65FDC686A031C83(Global_35, joaat("A_WHISKEY_TRANS_GENERIC_A"), 1.5f);
							PED::_0x6D07B371E9439019(Global_35);
							__LIB_0__::func_19(&Var0, 4);
						}
					}
					else
					{
						if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) != joaat("PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE"))
						{
							PED::_0xD65FDC686A031C83(Global_35, joaat("PLAYER_BARCUSTOMER_RETURN_BEER"), 3f);
							PED::_0x6D07B371E9439019(Global_35);
						}
						else
						{
							PED::_0xD65FDC686A031C83(Global_35, joaat("A_BEER_TRANS_GENERIC_A"), 1.5f);
							PED::_0x6D07B371E9439019(Global_35);
						}
						__LIB_0__::func_19(&Var0, 4);
					}
				}
				else
				{
					__LIB_0__::func_19(&Var0, 4);
				}
				break;
			case 3:
				func_14(fVar182);
				func_15(&(Var0.f_2), 1);
				func_16(Var0.f_2, 0);
				__LIB_0__::func_19(&Var0, 4);
				break;
			case 4:
				if (ScriptParam_0.f_3)
				{
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				else if (!bVar183)
				{
					if ((__LIB_0__::func_2() == -1 && __LIB_2__::func_407(0)) && __LIB_0__::func_192(Var0.f_2, 1490540191))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
						{
							if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
							{
								if (__LIB_1__::func_265(Global_35, "Player_Sick_Drinking_Cough", joaat("SPEECH_PARAMS_FORCE"), 0, 1, 0, 0, 1))
								{
									bVar183 = true;
								}
							}
						}
					}
					else
					{
						bVar183 = true;
					}
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	if (Var0 <= 1)
	{
		func_15(&(Var0.f_2), 1);
		func_16(Var0.f_2, 0);
	}
	if (!ScriptParam_0.f_3 && !Var0.f_180)
	{
		__LIB_9__::func_268(0);
	}
}

void func_2()
{
	if (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

float func_4(var uParam0, var uParam1)
{
	float fVar0;
	int iVar1;
	switch (uParam0->f_2)
	{
		case joaat("CONSUMABLE_RUM_USED"):
			fVar0 = 0.1f;
			break;
		case joaat("CONSUMABLE_BRANDY_USED"):
			fVar0 = 0.1f;
			break;
		case joaat("CONSUMABLE_GIN_USED"):
			fVar0 = 0.1f;
			break;
		case joaat("CONSUMABLE_RUM"):
			fVar0 = 0.17f;
			break;
		case joaat("CONSUMABLE_SALOON_BEER"):
			fVar0 = 0.025f;
			uParam0->f_180 = 0;
			break;
		case joaat("CONSUMABLE_SALOON_WHISKEY"):
			fVar0 = 0.1f;
			uParam0->f_180 = 0;
			break;
		case joaat("CONSUMABLE_BRANDY"):
			fVar0 = 0.17f;
			break;
		case joaat("CONSUMABLE_GIN"):
			fVar0 = 0.17f;
			break;
		case joaat("CONSUMABLE_WHISKEY_USED"):
			fVar0 = 0.13f;
			break;
		case joaat("CONSUMABLE_WHISKEY"):
			fVar0 = 0.25f;
			break;
		case -1679900928:
			fVar0 = 0.25f;
			break;
		case -520953319:
			fVar0 = 0.13f;
			break;
		case joaat("CONSUMABLE_MOONSHINE"):
			fVar0 = 0.3f;
			break;
		case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
			fVar0 = 0.5f;
			break;
		default:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam1);
				if (iVar1 == joaat("P_BOTTLEBEER01A"))
				{
					uParam0->f_2 = joaat("CONSUMABLE_SALOON_BEER");
					fVar0 = 0.025f;
					uParam0->f_180 = 0;
				}
				else if (iVar1 == joaat("P_BOTTLEJD01X"))
				{
					uParam0->f_2 = joaat("CONSUMABLE_SALOON_WHISKEY");
					fVar0 = 0.1f;
					uParam0->f_180 = 0;
				}
			}
			break;
	}
	if (__LIB_3__::func_463(joaat("PROVISION_TRINKET_WOLF_HEART"), 1, 0))
	{
		fVar0 = (fVar0 * 0.5f);
	}
	return fVar0;
}

void func_5()
{
	if (TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35) == -664271430)
	{
		STREAMING::_REQUEST_CLIP_SET_BY_HASH(joaat("MECH_DYNAMIC@PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE@ARTHUR@TRANS@A_BEER_TRANS_GENERIC_A"));
	}
	else
	{
		STREAMING::_REQUEST_CLIP_SET_BY_HASH(joaat("MECH_DYNAMIC@PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE@ARTHUR@TRANS@A_WHISKEY_TRANS_GENERIC_A"));
	}
}

void func_6(var uParam0)
{
	if ((IntToFloat(uParam0->f_2.f_1) / uParam0->f_2.f_2) > 0.5f)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_ALCOHOL_BLOCK_AWAY_PROMPT", true, 1);
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (IntToFloat(uParam0->f_2.f_1) / uParam0->f_2.f_2) >= (1f / 3f)
			{
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2089200315))
				{
					uParam0->f_1 = 1;
				}
			}
			break;
		case 1:
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_ALCOHOL_BLOCK_CHUG_A", true, 1);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_ALCOHOL_ALLOW_CHUG_B", true, 1);
			if (IntToFloat(uParam0->f_2.f_1) / uParam0->f_2.f_2) >= (2f / 3f)
			{
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2089200315))
				{
					uParam0->f_1 = 2;
				}
			}
			break;
		case 2:
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_ALCOHOL_BLOCK_CHUG_A", true, 1);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_ALCOHOL_ALLOW_CHUG_C", true, 1);
			if ((IntToFloat(uParam0->f_2.f_1) / uParam0->f_2.f_2) >= 1f)
			{
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2089200315))
				{
					uParam0->f_1 = 3;
				}
			}
			break;
		case 3:
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_ALCOHOL_BLOCK_CHUG_A", true, 1);
			break;
	}
}

void func_7(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 574156416))
	{
		PED::_0x6D07B371E9439019(Global_35);
		PED::_0xD65FDC686A031C83(Global_35, joaat("A_BEER_TRANS_GENERIC_A"), 1.5f);
	}
}

void func_8(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 574156416))
	{
		PED::_0x6D07B371E9439019(Global_35);
		PED::_0xD65FDC686A031C83(Global_35, joaat("A_WHISKEY_TRANS_GENERIC_A"), 1.5f);
	}
}

void func_13(int iParam0)
{
	if (iParam0 == -1493684811)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("WORLD_HUMAN_BARCUSTOMER") || TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE")))
		{
			TASK::_0xB35370D5353995CB(Global_35, 1587785400, 1f);
		}
	}
	else if (iParam0 == 1587785400)
	{
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
		{
			TASK::_0xB35370D5353995CB(Global_35, -1493684811, 1f);
		}
	}
	else if (iParam0 == -752898125)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE"))
		{
			TASK::_0xB35370D5353995CB(Global_35, 1342098323, 1f);
		}
	}
	else if (iParam0 == 1342098323)
	{
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
		{
			TASK::_0xB35370D5353995CB(Global_35, -752898125, 1f);
		}
	}
}

void func_14(float fParam0)
{
	if (fParam0 > 0f)
	{
		if (__LIB_10__::func_697())
		{
			__LIB_18__::func_826(fParam0);
		}
		Global_1935436.f_3 = MISC::GET_GAME_TIMER();
	}
}

void func_15(var uParam0, bool bParam1)
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
	bool bVar11;
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
			__LIB_9__::func_277((BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), 1 == uParam0->f_1);
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
			bVar11 = true;
		}
	}
	__LIB_9__::func_312(*uParam0, bParam1, bVar9, bVar11);
	__LIB_9__::func_270(uParam0);
	uParam0->f_3 = (uParam0->f_3 + fVar1);
	uParam0->f_4 = (uParam0->f_4 + fVar2);
	uParam0->f_5 = (uParam0->f_5 + fVar3);
	uParam0->f_6 = (uParam0->f_6 + fVar4);
	uParam0->f_7 = (uParam0->f_7 + fVar5);
	uParam0->f_8 = (uParam0->f_8 + fVar6);
}

void func_16(int iParam0, bool bParam1)
{
	float fVar0;
	struct<10> Var1;
	struct<16> Var11;
	switch (iParam0)
	{
		case joaat("CONSUMABLE_GINSENG_ELIXIER"):
			if (__LIB_0__::func_963(0) >= 7)
			{
				__LIB_1__::func_424(244, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 1);
			}
			__LIB_9__::func_276(19);
			break;
		case joaat("CONSUMABLE_VALERIAN_ROOT"):
			if (__LIB_0__::func_963(2) >= 7)
			{
				__LIB_1__::func_424(243, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 1);
			}
			__LIB_9__::func_276(50);
			break;
		case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
			if (__LIB_0__::func_963(1) >= 7)
			{
				__LIB_1__::func_424(245, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 1);
			}
			__LIB_9__::func_276(30);
			break;
		case joaat("CONSUMABLE_COVER_SCENT_USED"):
		case joaat("CONSUMABLE_COVER_SCENT"):
			if (iParam0 == joaat("CONSUMABLE_COVER_SCENT"))
			{
				__LIB_9__::func_317(0, 60000);
				fVar0 = 0.25f;
			}
			else if (iParam0 == joaat("CONSUMABLE_COVER_SCENT_USED"))
			{
				__LIB_9__::func_317(0, 30000);
				fVar0 = 0.5f;
			}
			__LIB_1__::func_240(580, 1);
			PED::_SET_PED_SCENT(Global_35, fVar0);
			break;
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
		case joaat("CONSUMABLE_HERB_YARROW"):
		case joaat("CONSUMABLE_HERB_MILKWEED"):
		case joaat("CONSUMABLE_HERB_GINSENG"):
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			__LIB_1__::func_299(0);
			break;
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			if ((bParam1 || !__LIB_9__::func_303()) || !PED::IS_PED_ON_FOOT(Global_35))
			{
				return;
			}
			if (iParam0 != joaat("CONSUMABLE_HERB_PRAIRIE_POPPY") || MISC::GET_RANDOM_INT_IN_RANGE(0, 3000) < 1000)
			{
				Var11 = { Var1 };
				StringCopy(&(Var11.f_10), "generic_puking_item", 32);
				Var11.f_14 = 512;
				__LIB_4__::func_709(Var11, 0);
			}
			break;
		case joaat("CONSUMABLE_POTENT_ANTIDOTE"):
		case joaat("CONSUMABLE_ANTIDOTE"):
			if (iParam0 == joaat("CONSUMABLE_ANTIDOTE"))
			{
				MISC::SET_BIT(&Global_1051038, 0);
			}
			else if (iParam0 == joaat("CONSUMABLE_POTENT_ANTIDOTE"))
			{
				MISC::SET_BIT(&Global_1051038, 1);
			}
			break;
	}
}

int func_17(var uParam0, int iParam1)
{
	switch (__LIB_9__::func_316(uParam0, -949239683))
	{
		case -476940445:
			if (iParam1 == 1587785400)
			{
				return 1534923913;
			}
			else
			{
				return -2061488501;
			}
			break;
		case -2001232688:
			return -458747598;
	}
	return -2061488501;
}

