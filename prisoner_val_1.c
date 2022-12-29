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
	struct<72> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Local_14 = vScriptParam_0.x;
	Local_14.f_1 = vScriptParam_0.y;
	Local_14.f_4 = vScriptParam_0.z;
	Local_14.f_2 = __LIB_3__::func_655(Local_14.f_4, Local_14.f_1);
	Local_14.f_7 = Global_40.f_9829[vScriptParam_0.x /*4*/].f_3;
	Local_14.f_71 = 0;
	if (__LIB_12__::func_460())
	{
		PED::_0xED9582B3DA8F02B4(1);
	}
	else
	{
		Local_14.f_3 = __LIB_1__::func_334(Local_14.f_2);
		Local_14.f_71 = 1;
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_12__::func_466();
	}
	__LIB_1__::func_283(&(Local_14.f_67), 0);
	while (true)
	{
		iVar1 = __LIB_12__::func_446(&Local_14);
		if (__LIB_12__::func_455(&Local_14, iVar1))
		{
			__LIB_12__::func_466();
		}
		if (!Local_14.f_71)
		{
			if (PED::_0x5E420FF293EE5472())
			{
				Local_14.f_3 = __LIB_2__::func_965(Local_14.f_2, 0, 0, 0, 1, 1);
				Local_14.f_71 = 1;
			}
		}
		if (Local_14.f_71)
		{
			if (__LIB_0__::func_265(&(Local_14.f_67)) >= 1f)
			{
				if (__LIB_12__::func_458(Local_14.f_3, Local_14))
				{
					__LIB_12__::func_447(&Local_14, 2);
				}
				bVar0 = true;
				__LIB_1__::func_148(&(Local_14.f_67));
			}
			switch (iVar1)
			{
				case 0:
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_14.f_3, true, true);
					if (__LIB_12__::func_445(Local_14, 128))
					{
						if (Local_14.f_7 != 2)
						{
						}
						else
						{
							PED::_SET_PED_COMPONENT_DISABLED(Local_14.f_3, joaat("EYEWEAR"), 1);
						}
						__LIB_0__::func_169(Local_14.f_3, 1, 1);
					}
					if (__LIB_12__::func_448(Local_14.f_7) > 0)
					{
						PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 130, true);
						__LIB_4__::func_901(Local_14, 4);
						__LIB_4__::func_923(Local_14, 8);
					}
					__LIB_12__::func_447(&Local_14, 1);
					break;
				case 1:
					func_18(&Local_14);
					PED::SET_PED_RESET_FLAG(Local_14.f_3, 184, true);
					break;
				case 2:
					if (!bVar0)
					{
						__LIB_12__::func_458(Local_14.f_3, Local_14);
					}
					break;
				default:
					__LIB_12__::func_466();
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_18(int iParam0)
{
	if (__LIB_12__::func_445(*iParam0, 4))
	{
		if (!__LIB_12__::func_445(*iParam0, 8))
		{
			if (__LIB_12__::func_449(iParam0->f_3, 1))
			{
				func_39(iParam0);
				__LIB_4__::func_901(*iParam0, 8);
			}
		}
		else if (__LIB_12__::func_449(iParam0->f_3, 0))
		{
			func_39(iParam0);
		}
		else
		{
			__LIB_12__::func_459(iParam0);
		}
	}
	else if (!__LIB_12__::func_445(*iParam0, 1))
	{
		if (__LIB_12__::func_449(iParam0->f_3, 1))
		{
			if (__LIB_12__::func_457(iParam0, -1))
			{
				__LIB_4__::func_901(*iParam0, 1);
			}
		}
	}
	else if (!__LIB_12__::func_449(iParam0->f_3, 1))
	{
		__LIB_4__::func_923(*iParam0, 1);
	}
}

void func_39(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	switch (iParam0->f_8)
	{
		case 0:
			if (__LIB_12__::func_461(iParam0))
			{
				if (!__LIB_12__::func_445(*iParam0, 16))
				{
					iParam0->f_65 = 0;
				}
				else if (!__LIB_12__::func_445(*iParam0, 32))
				{
					iParam0->f_65 = 1;
				}
				else if (!__LIB_12__::func_445(*iParam0, 64))
				{
					iParam0->f_65 = 2;
				}
				else
				{
					iParam0->f_8 = 8;
					return;
				}
				if (iParam0->f_65 < __LIB_12__::func_448(iParam0->f_7))
				{
					HUD::_TEXT_DATABASE_REQUEST(__LIB_12__::func_450(iParam0->f_7, 1));
					PED::SET_PED_CONFIG_FLAG(iParam0->f_3, 448, true);
					AUDIO::STOP_PED_SPEAKING(Global_35, true);
					iParam0->f_8 = 1;
				}
				else
				{
					iParam0->f_8 = 8;
				}
			}
			break;
		case 1:
			if (HUD::_TEXT_DATABASE_HAS_LOADED(__LIB_12__::func_450(iParam0->f_7, 1)))
			{
				vVar0 = { __LIB_12__::func_462(iParam0->f_7, iParam0->f_65, 0) };
				__LIB_0__::func_928(&Global_1396116, iParam0->f_3, __LIB_12__::func_450(iParam0->f_7, 0), 0);
				if (__LIB_0__::func_181())
				{
					__LIB_0__::func_928(&Global_1396116, Global_35, "JOHN", 0);
				}
				else
				{
					__LIB_0__::func_928(&Global_1396116, Global_35, "ARTHUR", 0);
				}
				if (__LIB_12__::func_451(iParam0->f_7, iParam0->f_65))
				{
					__LIB_12__::func_456(iParam0);
					iParam0->f_8 = 2;
				}
				else if (MISC::ARE_STRINGS_EQUAL(__LIB_0__::func_67(vVar0), ""))
				{
					iParam0->f_8 = 2;
				}
				else if (__LIB_2__::func_813(&Global_1396116, vVar0, 0, -1, 0, 0))
				{
					__LIB_12__::func_456(iParam0);
					iParam0->f_8 = 2;
				}
			}
			break;
		case 2:
			if (!__LIB_5__::func_236(1))
			{
				__LIB_2__::func_602(&(iParam0->f_30[0 /*17*/]), "INTERACT_GREET", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(iParam0->f_30[1 /*17*/]), "INTERACT_INSULT", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				iParam0->f_66 = -1;
				iParam0->f_8 = 3;
			}
			break;
		case 3:
			if (iParam0->f_66 == -1)
			{
				iParam0->f_66 = func_67(&(iParam0->f_3), &(iParam0->f_9), 7f, &(iParam0->f_30), 0, 1, 1, 0, 2520, 0, 0, 2, -1082130432 /* Float: -1f */);
				if (iParam0->f_66 == 0)
				{
					__LIB_2__::func_411(&(iParam0->f_30[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(iParam0->f_30[1 /*17*/]), 0, 0);
					func_67(&(iParam0->f_3), &(iParam0->f_9), 7f, &(iParam0->f_30), 0, 1, 1, 0, 2520, 0, 0, 2, -1082130432 /* Float: -1f */);
					__LIB_12__::func_456(iParam0);
				}
				else if (iParam0->f_66 == 1)
				{
					__LIB_2__::func_411(&(iParam0->f_30[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(iParam0->f_30[1 /*17*/]), 0, 0);
					func_67(&(iParam0->f_3), &(iParam0->f_9), 7f, &(iParam0->f_30), 0, 1, 1, 0, 2520, 0, 0, 2, -1082130432 /* Float: -1f */);
					__LIB_12__::func_456(iParam0);
				}
			}
			if (iParam0->f_66 == 0)
			{
				if (__LIB_2__::func_813(&Global_1396116, __LIB_12__::func_462(iParam0->f_7, iParam0->f_65, 1), 0, -1, 0, 0))
				{
					iParam0->f_8 = 4;
				}
			}
			else if (iParam0->f_66 == 1)
			{
				if (__LIB_2__::func_813(&Global_1396116, __LIB_12__::func_462(iParam0->f_7, iParam0->f_65, 2), 0, -1, 0, 0))
				{
					iParam0->f_8 = 4;
				}
			}
			break;
		case 4:
			if (!__LIB_5__::func_236(1))
			{
				if (iParam0->f_66 == 0)
				{
					vVar3 = { __LIB_12__::func_462(iParam0->f_7, iParam0->f_65, 3) };
					if (MISC::ARE_STRINGS_EQUAL(__LIB_0__::func_67(vVar3), ""))
					{
						if (__LIB_12__::func_452(iParam0))
						{
							iParam0->f_8 = 7;
						}
						else
						{
							iParam0->f_8 = 8;
						}
						__LIB_2__::func_344(&(iParam0->f_3));
						__LIB_2__::func_480(&(iParam0->f_30), 0, 0, 1, 0);
						iParam0->f_8 = 8;
					}
					else if (__LIB_2__::func_813(&Global_1396116, vVar3, 0, -1, 0, 0))
					{
						iParam0->f_8 = 5;
					}
				}
				else if (iParam0->f_66 == 1)
				{
					vVar6 = { __LIB_12__::func_462(iParam0->f_7, iParam0->f_65, 5) };
					if (MISC::ARE_STRINGS_EQUAL(__LIB_0__::func_67(vVar6), ""))
					{
						if (__LIB_12__::func_452(iParam0))
						{
							iParam0->f_8 = 7;
						}
						else
						{
							iParam0->f_8 = 8;
						}
						__LIB_2__::func_344(&(iParam0->f_3));
						__LIB_2__::func_480(&(iParam0->f_30), 0, 0, 1, 0);
						iParam0->f_8 = 8;
					}
					else if (__LIB_2__::func_813(&Global_1396116, vVar6, 0, -1, 0, 0))
					{
						iParam0->f_8 = 5;
					}
				}
			}
			break;
		case 5:
			if (!__LIB_5__::func_236(1))
			{
				if (iParam0->f_66 == 0)
				{
					vVar9 = { __LIB_12__::func_462(iParam0->f_7, iParam0->f_65, 4) };
					if (MISC::ARE_STRINGS_EQUAL(__LIB_0__::func_67(vVar9), ""))
					{
						if (__LIB_12__::func_452(iParam0))
						{
							iParam0->f_8 = 7;
						}
						else
						{
							iParam0->f_8 = 8;
						}
						__LIB_2__::func_344(&(iParam0->f_3));
						__LIB_2__::func_480(&(iParam0->f_30), 0, 0, 1, 0);
					}
					else if (__LIB_2__::func_813(&Global_1396116, vVar9, 0, -1, 0, 0))
					{
						iParam0->f_8 = 6;
					}
				}
				else if (iParam0->f_66 == 1)
				{
					vVar12 = { __LIB_12__::func_462(iParam0->f_7, iParam0->f_65, 6) };
					if (MISC::ARE_STRINGS_EQUAL(__LIB_0__::func_67(vVar12), ""))
					{
						if (__LIB_12__::func_452(iParam0))
						{
							iParam0->f_8 = 7;
						}
						else
						{
							iParam0->f_8 = 8;
						}
						__LIB_2__::func_344(&(iParam0->f_3));
						__LIB_2__::func_480(&(iParam0->f_30), 0, 0, 1, 0);
					}
					else if (__LIB_2__::func_813(&Global_1396116, vVar12, 0, -1, 0, 0))
					{
						iParam0->f_8 = 6;
					}
				}
			}
			break;
		case 6:
			if (!__LIB_5__::func_236(1))
			{
				if (__LIB_12__::func_452(iParam0))
				{
					iParam0->f_8 = 7;
				}
				else
				{
					iParam0->f_8 = 8;
				}
				__LIB_2__::func_344(&(iParam0->f_3));
				__LIB_2__::func_480(&(iParam0->f_30), 0, 0, 1, 0);
			}
			break;
		case 7:
			if (func_72(iParam0))
			{
				vVar15 = { __LIB_12__::func_462(iParam0->f_7, iParam0->f_65, 7) };
				if (__LIB_2__::func_813(&Global_1396116, vVar15, 0, -1, 0, 0))
				{
					iParam0->f_8 = 8;
				}
			}
			break;
		case 8:
			PED::SET_PED_CONFIG_FLAG(iParam0->f_3, 448, false);
			AUDIO::STOP_PED_SPEAKING(Global_35, false);
			break;
	}
}

int func_67(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_4__::func_231(*uParam0, iParam1, uParam3))
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
						return func_67(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
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
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
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

bool func_72(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_70))
	{
		func_107(iParam0->f_4, &(iParam0->f_70));
	}
	else if (!func_108(Global_35, iParam0->f_70, 1, 0))
	{
		return true;
	}
	return false;
}

void func_107(int iParam0, var uParam1)
{
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.332f, -1306.672f, 49.06244f, 0f, 0f, 0f, 5.38237f, 5.870902f, 2.389851f, "Near Cell");
			break;
		case 26:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1813.066f, -353.3387f, 161.438f, 0f, 0f, -20.6699f, 5.9382f, 3.494741f, 2.127687f, "Near Cell");
			break;
		case 76:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-273.4034f, 808.0645f, 119.503f, 0f, 0f, -78.66611f, 2.868701f, 5.577141f, 2.388725f, "Near Cell");
			break;
		case 105:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1357.195f, -1302.73f, 77.57108f, 0f, 0f, -18.89946f, 3.524552f, 3.867561f, 1.788079f, "Near Cell");
			break;
		case 38:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-763.9052f, -1264.156f, 43.82976f, 0f, 0f, 0f, 3.441595f, 4.293221f, 2.234505f, "Near Cell");
			break;
		case 115:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5534.542f, -2948.278f, -0.368f, 0f, 0f, 15f, 9f, 4.7f, 3f, "Near Cell");
			Jump @420; //curOff = 363
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2903.745f, 1311.18f, 45.13168f, 0f, 0f, -19.81251f, 1.647195f, 1.766237f, 2.464334f, "Near Cell");
		}
bool func_108(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

