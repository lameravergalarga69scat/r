#region Local Var
	int iLocal_0[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_31 = 0f;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (iLocal_13 >= 3)
		{
			func_1(iLocal_13 >= 4);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar0 = false;
	while (!bVar0)
	{
		BUILTIN::WAIT(0);
		switch (iLocal_13)
		{
			case 0:
				iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(613.343f, 2192.701f, 223.576f, 0f, 0f, 11f, 29f, 46f, 9f, "BirdsTrigger");
				PED::_0xED9582B3DA8F02B4(12);
				STREAMING::REQUEST_MODEL(func_2(), false);
				iLocal_13 = 1;
				break;
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(func_2()))
				{
					iLocal_13 = 2;
				}
				break;
			case 2:
				if (PED::_0x5C16855277819BBF() >= 12)
				{
					if (func_3())
					{
						iLocal_13 = 3;
					}
				}
				break;
			case 3:
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0) || MISC::IS_BULLET_IN_AREA(618.4946f, 2197.932f, 222.0223f, 13f, true))
				{
					iLocal_13 = 4;
					iLocal_15 = MISC::GET_GAME_TIMER();
				}
				break;
			case 4:
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (!PED::IS_PED_INJURED(iLocal_0[iVar1]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_0[iVar1], -708058584, true) == 8 || iLocal_18[iVar1])
						{
							iVar2 = 0;
							switch (iVar2)
							{
								case 0:
									iVar2 = 0;
									break;
								case 1:
									iVar2 = 50;
									break;
								case 2:
									iVar2 = 160;
									break;
								case 3:
									iVar2 = 400;
									break;
								case 4:
									iVar2 = 310;
									break;
								case 5:
									iVar2 = 120;
									break;
								case 6:
									iVar2 = 200;
									break;
								case 7:
									iVar2 = 280;
									break;
								case 8:
									iVar2 = 390;
									break;
								case 9:
									iVar2 = 70;
									break;
								case 10:
									iVar2 = 220;
									break;
								case 11:
									iVar2 = 150;
									break;
							}
							if (MISC::GET_GAME_TIMER() >= (iVar2 + iLocal_15))
							{
								TASK::TASK_FLY_TO_COORD(iLocal_0[iVar1], 3f, func_4(iLocal_16), 0, 1);
								iLocal_18[iVar1] = 0;
							}
						}
					}
					iVar1++;
				}
				if (!PED::IS_PED_INJURED(iLocal_0[0]))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_0[0], func_4(iLocal_16), 20f, 20f, 20f, false, false, 0))
					{
						iLocal_13 = 5;
					}
				}
				break;
			case 5:
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (!PED::IS_PED_INJURED(iLocal_0[iVar1]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_0[iVar1], 475934052, true) != 8)
						{
						}
						else
						{
							TASK::TASK_FLYING_CIRCLE(iLocal_0[iVar1], 2f, func_4(iLocal_16), 2f, 10f);
						}
					}
					iVar1++;
				}
				if (!PED::IS_PED_INJURED(iLocal_0[0]))
				{
					vVar3 = { func_5(iLocal_16) };
					if (ENTITY::IS_ENTITY_AT_COORD(Global_35, func_4(iLocal_16), vVar3, false, false, 0))
					{
						if (iLocal_16 < 11)
						{
							iVar1 = 0;
							while (iVar1 < 12)
							{
								iLocal_18[iVar1] = 1;
								iVar1++;
							}
							iLocal_16 = (1 + iLocal_16);
							iLocal_13 = 4;
						}
						else
						{
							func_6();
							SCRIPTS::TERMINATE_THIS_THREAD();
						}
					}
				}
				break;
		}
		if (!__LIB_17__::func_103(12, 8388608))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1708.799f, 2160.965f, 318.8729f, false) < 160f)
			{
				Global_40.f_11623[12 /*8*/].f_2 = -15;
				__LIB_16__::func_865(12, 8388608, 1);
			}
		}
		if (iLocal_13 >= 3)
		{
			bVar6 = false;
			bVar7 = false;
			if (PED::IS_PED_INJURED(iLocal_0[iLocal_17]))
			{
				bVar7 = true;
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_0[iLocal_17], 250f, 250f, 250f, false, false, 0))
			{
				bVar6 = true;
			}
			iLocal_17++;
			if (iLocal_17 >= 12)
			{
				iLocal_17 = 0;
			}
			if (!bVar6)
			{
				fLocal_31 = ((1f * BUILTIN::TIMESTEP()) + fLocal_31);
			}
			else
			{
				fLocal_31 = 0f;
			}
			if (bVar7 || fLocal_31 >= 5f)
			{
				if (fLocal_31 >= 5f)
				{
				}
				func_6();
				func_1((bVar7 || iLocal_13 >= 4));
				__LIB_11__::func_399(&(Global_1396257[12 /*638*/].f_626), 16384, 0);
				SCRIPTS::TERMINATE_THIS_THREAD();
			}
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		Global_40.f_11623[12 /*8*/].f_2 = __LIB_0__::func_23();
	}
	__LIB_11__::func_399(&(Global_1396257[12 /*638*/].f_626), 8192, 1);
}

int func_2()
{
	return joaat("A_C_PHEASANT_01");
}

bool func_3()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_0[iVar0]))
		{
			switch (iVar0)
			{
				case 0:
					vVar1 = { 622.3134f, 2200.764f, 221.5856f };
					fVar4 = -160f;
					break;
				case 1:
					vVar1 = { 621.2441f, 2199.146f, 221.7287f };
					fVar4 = -120f;
					break;
				case 2:
					vVar1 = { 619.4209f, 2194.512f, 221.7715f };
					fVar4 = -99f;
					break;
				case 3:
					vVar1 = { 619.327f, 2192.713f, 221.5658f };
					fVar4 = -155f;
					break;
				case 4:
					vVar1 = { 623.7524f, 2199.419f, 221.4249f };
					fVar4 = 142f;
					break;
				case 5:
					vVar1 = { 621.4307f, 2195.696f, 221.644f };
					fVar4 = -11f;
					break;
				case 6:
					vVar1 = { 623.0302f, 2189.17f, 220.8486f };
					fVar4 = -33f;
					break;
				case 7:
					vVar1 = { 618.2859f, 2196.883f, 222.0049f };
					fVar4 = 40f;
					break;
				case 8:
					vVar1 = { 617.9752f, 2193.77f, 221.7816f };
					fVar4 = -175f;
					break;
				case 9:
					vVar1 = { 620.5045f, 2199.149f, 221.8133f };
					fVar4 = -42f;
					break;
				case 10:
					vVar1 = { 632.3511f, 2197.817f, 220.63f };
					fVar4 = 20f;
					break;
				case 11:
					vVar1 = { 626.5476f, 2191.122f, 220.7776f };
					fVar4 = 68f;
					break;
			}
			iLocal_0[iVar0] = __LIB_1__::func_545(func_2(), vVar1, fVar4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_0[iVar0], true);
			PED::SET_PED_KEEP_TASK(iLocal_0[iVar0], true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_0[iVar0], true);
			return false;
		}
		iVar0++;
	}
	return true;
}

Vector3 func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 637f, 2120f, 236f;
		case 1:
			return 673f, 2034f, 245f;
		case 2:
			return 666f, 1935f, 241f;
		case 3:
			return 750f, 1924f, 260f;
		case 4:
			return 830f, 1851f, 270f;
		case 5:
			return 920f, 1862f, 298f;
		case 6:
			return 1003f, 1870f, 355f;
		case 7:
			return 1197f, 1896f, 349f;
		case 8:
			return 1358f, 2035f, 326f;
		case 9:
			return 1569f, 2129f, 334f;
		case 10:
			return 1723.816f, 2167.888f, 349.4869f;
	}
	return 0f, 0f, 0f;
}

Vector3 func_5(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 40f, 40f, 40f;
		case 1:
			return 45f, 45f, 45f;
		case 5:
			return 55f, 55f, 55f;
		case 6:
			return 65f, 65f, 65f;
		case 7:
			return 55f, 55f, 55f;
	}
	return 45f, 45f, 45f;
}

void func_6()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!PED::IS_PED_INJURED(iLocal_0[iVar0]))
		{
			TASK::TASK_FLY_AWAY(iLocal_0[iVar0], Global_35);
		}
		iVar0++;
	}
}

