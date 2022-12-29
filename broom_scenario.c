#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	struct<13> Local_6[5];
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	float fLocal_78 = 0f;
	bool bLocal_79 = false;
	var uLocal_80[1] = { 0 };
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion
void __EntryFunction__()
{
	iLocal_0 = 1;
	iLocal_74 = 5;
	iLocal_2 = vScriptParam_0.x;
	iLocal_3 = vScriptParam_0.y;
	iLocal_4 = vScriptParam_0.z;
	__LIB_0__::func_11();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_5__::func_616();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && __LIB_2__::func_821())
	{
		__LIB_0__::func_11();
		__LIB_3__::func_126();
		func_6();
		BUILTIN::WAIT(0);
	}
	__LIB_5__::func_616();
}

void func_6()
{
	int iVar0;
	int iVar1;
	switch (iLocal_5)
	{
		case 0:
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3))
			{
				iLocal_5 = 7;
				return;
			}
			iLocal_72 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);
			if (!__LIB_0__::func_272(iLocal_72, 0))
			{
				iLocal_5 = 7;
				return;
			}
			bLocal_79 = PERSCHAR::_0x800DF3FC913355F3(PERSCHAR::_0x32A1E3B83D501096(iLocal_72));
			if (!bLocal_79)
			{
				TASK::_0xE7BBC4E56B989449(iLocal_3, &uLocal_80, 1);
				if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_80[0]))
				{
					iLocal_5 = 7;
					return;
				}
			}
			iVar0 = BUILTIN::FLOOR(TASK::_0x6718F40313A2B5A6(iLocal_3));
			if (!func_13(iVar0, iLocal_4))
			{
				iLocal_5 = 7;
				return;
			}
			iLocal_5 = 1;
			break;
		case 1:
			if (!__LIB_0__::func_272(Global_35, 0))
			{
				iLocal_5 = 7;
				return;
			}
			if (!__LIB_0__::func_272(iLocal_72, 0))
			{
				iLocal_5 = 7;
				return;
			}
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3))
			{
				iLocal_5 = 7;
				return;
			}
			if (!PED::_IS_PED_USING_SCENARIO_POINT(iLocal_72, iLocal_3))
			{
				iLocal_5 = 7;
				return;
			}
			if (__LIB_0__::func_232(Global_35, iLocal_72, 1) > 1225f)
			{
				return;
			}
			else if (ENTITY::GET_ENTITY_SPEED(Global_35) < 9.5f)
			{
				iLocal_5 = 2;
				return;
			}
			else
			{
				iLocal_5 = 7;
				return;
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (Local_6[iVar1 /*13*/].f_1 == 0)
				{
					iLocal_74 = iVar1;
				}
				else
				{
					if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_6[iVar1 /*13*/]))
					{
						if (iVar1 > 0)
						{
							Local_6[iVar1 /*13*/].f_7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(Local_6[(iVar1 - 1) /*13*/], true), TASK::_GET_SCENARIO_POINT_HEADING(Local_6[(iVar1 - 1) /*13*/], true), Local_6[iVar1 /*13*/].f_4) };
							Local_6[iVar1 /*13*/].f_11 = (TASK::_GET_SCENARIO_POINT_HEADING(Local_6[(iVar1 - 1) /*13*/], true) + Local_6[iVar1 /*13*/].f_10);
						}
						else
						{
							Local_6[iVar1 /*13*/].f_7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), Local_6[iVar1 /*13*/].f_4) };
							Local_6[iVar1 /*13*/].f_11 = (TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true) + Local_6[iVar1 /*13*/].f_10);
						}
						Local_6[iVar1 /*13*/] = TASK::CREATE_SCENARIO_POINT(Local_6[iVar1 /*13*/].f_1, Local_6[iVar1 /*13*/].f_7, Local_6[iVar1 /*13*/].f_11, 0, 0, 0);
						TASK::_0xE69FDA40AAC3EFC0(Local_6[iVar1 /*13*/], 0);
						TASK::_0xA7479FB665361EDB(Local_6[iVar1 /*13*/], 0);
					}
					iVar1++;
				}
			}
			iLocal_5 = 3;
			break;
		case 3:
			if (func_15())
			{
				iLocal_5 = 7;
				return;
			}
			if (!__LIB_0__::func_75(&uLocal_75))
			{
				__LIB_1__::func_283(&uLocal_75, 0);
			}
			if (__LIB_12__::func_232(&uLocal_75, fLocal_78) && TASK::_0x02EBBB3989B7E695(iLocal_72))
			{
				iLocal_5 = 4;
			}
			break;
		case 4:
			if (func_15())
			{
				iLocal_5 = 7;
				return;
			}
			if (TASK::_0x79197F7D2BB5E73A(iLocal_72, Local_6[iLocal_73 /*13*/], Local_6[iLocal_73 /*13*/].f_2, Local_6[iLocal_73 /*13*/].f_3, 0, 0))
			{
				if (PED::_IS_PED_USING_SCENARIO_POINT(iLocal_72, Local_6[iLocal_73 /*13*/]))
				{
					fLocal_78 = Local_6[iLocal_73 /*13*/].f_12;
					iLocal_73++;
					__LIB_0__::func_37(&uLocal_75);
					if (iLocal_73 < iLocal_74)
					{
						iLocal_5 = 3;
					}
					else
					{
						iLocal_5 = 5;
					}
				}
			}
			break;
		case 5:
			if (func_15())
			{
				iLocal_5 = 7;
				return;
			}
			if (!__LIB_0__::func_75(&uLocal_75))
			{
				__LIB_1__::func_283(&uLocal_75, 0);
			}
			if (__LIB_12__::func_232(&uLocal_75, fLocal_78) && TASK::_0x02EBBB3989B7E695(iLocal_72))
			{
				iLocal_5 = 6;
			}
			break;
		case 6:
			if (func_15())
			{
				iLocal_5 = 7;
				return;
			}
			if (!bLocal_79)
			{
				if (!__LIB_0__::func_163(iLocal_72, -76381094))
				{
					TASK::CLEAR_PED_TASKS(iLocal_72, true, false);
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_72, uLocal_80[0], 0, 0, true, false, 0, false, -1f, false);
					PED::SET_PED_KEEP_TASK(iLocal_72, true);
				}
				if (PED::_IS_PED_USING_SCENARIO_POINT(iLocal_72, uLocal_80[0]))
				{
					iLocal_5 = 7;
				}
			}
			else
			{
				iLocal_5 = 7;
			}
			break;
		case 7:
			iLocal_0 = 0;
			return;
	}
}

bool func_13(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("SC_WORLD_HUMAN_STRAW_BROOM_WORKING"):
			switch (iParam0)
			{
				case 0:
					fLocal_78 = 10f;
					if (PED::IS_PED_MALE(iLocal_72))
					{
						func_25(&(Local_6[0 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 4, 10f);
						func_25(&(Local_6[1 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 4, 10f);
						func_25(&(Local_6[2 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 4, 10f);
					}
					else
					{
						func_25(&(Local_6[0 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 5, 10f);
						func_25(&(Local_6[1 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 5, 10f);
						func_25(&(Local_6[2 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 5, 10f);
					}
					return true;
				case 1:
					fLocal_78 = 10f;
					if (PED::IS_PED_MALE(iLocal_72))
					{
						func_25(&(Local_6[0 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 1, 10f);
						func_25(&(Local_6[1 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 1, 10f);
					}
					else
					{
						func_25(&(Local_6[0 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 0, 10f);
						func_25(&(Local_6[1 /*13*/]), joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"), 0, 10f);
					}
					return true;
			}
			break;
		case joaat("SC_WORLD_HUMAN_PUSH_BROOM_WORKING"):
			switch (iParam0)
			{
				case 0:
					fLocal_78 = 10f;
					func_25(&(Local_6[0 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 3, 10f);
					func_25(&(Local_6[1 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 3, 10f);
					func_25(&(Local_6[2 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 3, 10f);
					func_25(&(Local_6[3 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 3, 10f);
					return true;
				case 1:
					fLocal_78 = 10f;
					func_25(&(Local_6[0 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 4, 10f);
					func_25(&(Local_6[1 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 4, 10f);
					func_25(&(Local_6[2 /*13*/]), joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"), 4, 10f);
					return true;
			}
			break;
	}
	return false;
}

bool func_15()
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return true;
	}
	if (!__LIB_0__::func_272(iLocal_72, 0))
	{
		return true;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3))
	{
		return true;
	}
	if (iLocal_73 <= 0)
	{
		if (!PED::_IS_PED_USING_SCENARIO_POINT(iLocal_72, iLocal_3) && !PED::_IS_PED_USING_SCENARIO_POINT(iLocal_72, Local_6[iLocal_73 /*13*/]))
		{
			return true;
		}
	}
	else if (iLocal_73 >= iLocal_74)
	{
		if (!bLocal_79)
		{
			if (!PED::_IS_PED_USING_SCENARIO_POINT(iLocal_72, Local_6[(iLocal_73 - 1) /*13*/]) && !PED::_IS_PED_USING_SCENARIO_POINT(iLocal_72, uLocal_80[0]))
			{
				return true;
			}
		}
	}
	else if (!PED::_IS_PED_USING_SCENARIO_POINT(iLocal_72, Local_6[(iLocal_73 - 1) /*13*/]) && !PED::_IS_PED_USING_SCENARIO_POINT(iLocal_72, Local_6[iLocal_73 /*13*/]))
	{
		return true;
	}
	return false;
}

void func_25(var uParam0, int iParam1, int iParam2, float fParam3)
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = func_30(iParam1, iParam2);
	uParam0->f_3 = func_31(iParam1, iParam2);
	uParam0->f_4 = { func_32(iParam1, iParam2) };
	uParam0->f_10 = func_33(iParam1, iParam2);
	uParam0->f_12 = fParam3;
}

char* func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"):
			if (PED::IS_PED_MALE(iLocal_72))
			{
				switch (iParam1)
				{
					case 0:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_LTURN_90";
					case 1:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_RTURN_90";
					case 4:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_RIGHT";
					case 2:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_BACKRIGHT";
					case 3:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_FRONTRIGHT";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_LTURN_90";
					case 1:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_RTURN_90";
					case 5:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_LEFT";
					case 6:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_BACKLEFT";
					case 7:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_FRONTLEFT";
					default:
						break;
				}
			}
			break;
		case joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"):
			switch (iParam1)
			{
				case 0:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_LTURN_90";
				case 1:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_RTURN_90";
				case 4:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_RIGHT";
				case 2:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_BACKRIGHT";
				case 3:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_FRONTRIGHT";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_31(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"):
		case joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"):
			switch (iParam1)
			{
				case 0:
					return "BASE_TRANS_LTURN_90";
				case 1:
					return "BASE_TRANS_RTURN_90";
				case 4:
					return "BASE_TRANS_RIGHT";
				case 2:
					return "BASE_TRANS_BACKRIGHT";
				case 3:
					return "BASE_TRANS_FRONTRIGHT";
				case 5:
					return "BASE_TRANS_LEFT";
				case 6:
					return "BASE_TRANS_BACKLEFT";
				case 7:
					return "BASE_TRANS_FRONTLEFT";
				default:
					break;
			}
			break;
	}
	return "";
}

Vector3 func_32(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"):
		case joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"):
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 4:
					return 0.53823f, 0f, 0f;
				case 2:
					return 0.380574f, -0.380598f, 0f;
				case 3:
					return 0.380598f, 0.380574f, 0f;
				case 5:
					return -0.53823f, 0f, 0f;
				case 6:
					return -0.380574f, -0.380598f, 0f;
				case 7:
					return -0.380598f, 0.380574f, 0f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_33(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"):
		case joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"):
			switch (iParam1)
			{
				case 0:
					return 90f;
				case 1:
					return -90f;
				case 4:
					return 0f;
				case 2:
					return 0f;
				case 3:
					return 0f;
				case 5:
					return 0f;
				case 6:
					return 0f;
				case 7:
					return 0f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

