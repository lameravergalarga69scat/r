#region Local Var
	struct<7> Local_0 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
	{
		func_1(&Local_0, 10);
	}
	else
	{
		func_1(&Local_0, 0);
	}
	Local_0.f_1 = ScriptParam_0.f_2;
	Local_0.f_6 = ScriptParam_0.f_4;
	Local_0.f_3 = ScriptParam_0;
	Local_0.f_4 = ScriptParam_0.f_3;
	while (func_2(&Local_0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_5 = MISC::GET_GAME_TIMER();
}

bool func_2(var uParam0)
{
	func_3(uParam0);
	switch (*uParam0)
	{
		case 0:
			func_4(uParam0);
			break;
		case 1:
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
			}
			else
			{
				func_6(uParam0);
				Jump @846; //curOff = 126
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 37, 1);
				if (func_5(uParam0->f_5, 4000))
				{
					func_1(uParam0, 9);
				}
				else
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
					{
						func_7(uParam0->f_3);
						func_1(uParam0, 9);
					}
					Jump @846; //curOff = 207
					PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 37, 1);
					if (func_5(uParam0->f_5, 4000))
					{
						func_1(uParam0, 9);
					}
					else
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
						{
							func_8(uParam0->f_3);
							func_1(uParam0, 9);
						}
						Jump @846; //curOff = 288
						PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 37, 1);
						if (func_5(uParam0->f_5, 4000))
						{
							func_1(uParam0, 9);
						}
						else
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
							{
								func_9(uParam0->f_3, uParam0->f_1, &(uParam0->f_6));
								func_1(uParam0, 9);
							}
							Jump @846; //curOff = 378
							if (func_5(uParam0->f_5, 4000))
							{
								func_1(uParam0, 9);
							}
							else
							{
								if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
								{
									if (__LIB_0__::func_357(uParam0->f_1) == 81053684)
									{
										func_11(uParam0->f_3, uParam0->f_1);
									}
									else
									{
										func_12(uParam0->f_3, uParam0->f_1);
									}
									func_1(uParam0, 9);
								}
								Jump @846; //curOff = 483
								if (func_5(uParam0->f_5, 4000))
								{
									func_1(uParam0, 9);
								}
								else
								{
									if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
									{
										if (__LIB_0__::func_357(uParam0->f_1) == 81053684)
										{
											func_13(uParam0->f_3, uParam0->f_1);
										}
										else
										{
											func_12(uParam0->f_3, uParam0->f_1);
										}
										func_1(uParam0, 9);
									}
									Jump @846; //curOff = 588
									if (func_5(uParam0->f_5, 4000))
									{
										func_1(uParam0, 9);
									}
									else
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
										{
											func_9(uParam0->f_3, uParam0->f_2, &(uParam0->f_6));
											uParam0->f_5 = __LIB_0__::func_485();
											func_1(uParam0, 8);
										}
										Jump @846; //curOff = 675
										if (func_5(uParam0->f_5, 4000))
										{
											func_1(uParam0, 9);
										}
										else if (TASK::_0xEC7E480FF8BD0BED(uParam0->f_3) && !uParam0->f_4)
										{
											if (!ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 108107462))
											{
											}
											else
											{
												Jump @846; //curOff = 744
												if (__LIB_1__::func_529())
												{
												}
												else if (__LIB_9__::func_467())
												{
													func_17();
												}
												else
												{
													if (Global_35 == uParam0->f_3)
													{
														Global_1946804.f_2793 = 0;
													}
													__LIB_6__::func_915(uParam0->f_1, 0);
													func_1(uParam0, 9);
													Jump @846; //curOff = 807
													if (Global_35 == uParam0->f_3)
													{
														Global_1946804.f_2793 = 0;
													}
													func_1(uParam0, 10);
													Jump @846; //curOff = 836
													return false;
												}
											}
											return true;
										}
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_3(var uParam0)
{
	if (__LIB_0__::func_81(uParam0) == 10)
	{
		return;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (Global_35 == uParam0->f_3)
		{
			uParam0->f_4 = 1;
			return;
		}
		else
		{
			uParam0->f_4 = 1;
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		func_1(uParam0, 10);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (Global_35 == uParam0->f_3)
		{
			func_1(uParam0, 9);
			return;
		}
		else
		{
			func_1(uParam0, 10);
			return;
		}
	}
}

void func_4(var uParam0)
{
	if (PED::IS_PED_A_PLAYER(uParam0->f_3))
	{
		if (Global_35 == uParam0->f_3)
		{
			if (Global_1946804.f_2793)
			{
				func_1(uParam0, 10);
			}
			else
			{
				Global_1946804.f_2793 = 1;
				func_1(uParam0, 1);
			}
		}
		else
		{
			func_1(uParam0, 1);
		}
	}
	else
	{
		func_1(uParam0, 10);
	}
}

bool func_5(int iParam0, int iParam1)
{
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - iParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_6(var uParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	if (!__LIB_11__::func_373(uParam0->f_1))
	{
		func_1(uParam0, 10);
		return;
	}
	bVar2 = false;
	bVar3 = true;
	if (__LIB_1__::func_610(&iVar0))
	{
		if (uParam0->f_1 == iVar0)
		{
			bVar2 = true;
			bVar3 = true;
		}
		else
		{
			uParam0->f_2 = iVar0;
			bVar3 = false;
		}
	}
	iVar4 = __LIB_0__::func_357(uParam0->f_1);
	bVar5 = __LIB_1__::func_750(&uVar1);
	if (bVar3)
	{
		iVar6 = __LIB_3__::func_122(uParam0->f_1);
		if (iVar6 != -358215195 && __LIB_0__::func_27(uParam0->f_6, 1))
		{
			func_1(uParam0, 6);
		}
		else if (bVar2)
		{
			if (bVar5)
			{
				if (iVar4 == 81053684)
				{
					func_1(uParam0, 4);
				}
				else
				{
					func_1(uParam0, 6);
				}
			}
			else
			{
				func_1(uParam0, 5);
			}
		}
		else if (iVar4 == 81053684 && __LIB_0__::func_27(uParam0->f_6, 2))
		{
			func_1(uParam0, 2);
			__LIB_1__::func_993(&(uParam0->f_6), 2);
		}
		else
		{
			func_1(uParam0, 3);
		}
	}
	else
	{
		func_1(uParam0, 7);
	}
}

void func_7(int iParam0)
{
	int iVar0;
	if (!__LIB_1__::func_750(&iVar0))
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 13);
	__LIB_6__::func_752(iVar0, 2);
	__LIB_5__::func_801(26, 0, 0, 0, 0);
}

void func_8(int iParam0)
{
	int iVar0;
	var uVar1;
	if (!__LIB_1__::func_610(&iVar0))
	{
		return;
	}
	if (__LIB_1__::func_750(&uVar1))
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 0);
	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_EQUIPPED_MASK"), iParam0, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1) > 0)
	{
	}
	__LIB_6__::func_752(iVar0, 1);
	__LIB_5__::func_801(26, 0, 0, 0, 0);
}

int func_9(int iParam0, int iParam1, var uParam2)
{
	if (!__LIB_11__::func_373(iParam1))
	{
		return 0;
	}
	if (!__LIB_5__::func_487(iParam1))
	{
		return 0;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 13);
	__LIB_1__::func_993(uParam2, 1);
	__LIB_6__::func_752(iParam1, 8);
	__LIB_5__::func_801(26, 0, 0, 0, 0);
	return 1;
}

void func_11(int iParam0, int iParam1)
{
	if (__LIB_0__::func_357(iParam1) != 81053684)
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	__LIB_6__::func_752(iParam1, 2);
	__LIB_5__::func_801(26, 0, 0, 0, 0);
}

void func_12(int iParam0, int iParam1)
{
	if (__LIB_0__::func_357(iParam1) != -525676072)
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 0);
	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_EQUIPPED_MASK"), iParam0, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1) > 0)
	{
	}
	__LIB_6__::func_752(iParam1, 1);
	__LIB_5__::func_801(26, 0, 0, 0, 0);
}

void func_13(int iParam0, int iParam1)
{
	if (__LIB_0__::func_357(iParam1) != 81053684)
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 0);
	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_EQUIPPED_MASK"), iParam0, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1) > 0)
	{
	}
	__LIB_6__::func_752(iParam1, 1);
	__LIB_5__::func_801(26, 0, 0, 0, 0);
}

void func_17()
{
	if (!__LIB_9__::func_467())
	{
		return;
	}
	func_31();
}

void func_31()
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (__LIB_1__::func_549(81053684, &iVar1))
	{
		if (__LIB_9__::func_465(iVar1))
		{
			func_52(81053684);
			bVar0 = true;
		}
	}
	if (__LIB_1__::func_549(-525676072, &iVar1))
	{
		if (__LIB_9__::func_465(iVar1))
		{
			func_52(-525676072);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		PED::_0xC494C76A34266E82(Global_35, 13);
	}
}

void func_52(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_161(__LIB_0__::func_997(iParam0), 1);
	if (iVar0 == 39)
	{
		return;
	}
	__LIB_6__::func_752(Global_1946804.f_57[iVar0 /*11*/], 8);
	__LIB_5__::func_801(26, 0, 0, 0, 0);
}

