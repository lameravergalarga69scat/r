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
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	bool bLocal_22 = false;
	vector3 vLocal_23[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_36[4] = { 0, 0, 0, 0 };
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	struct<39> Var0;
	float fVar39;
	bool bVar40;
	int iVar41;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Var0.f_9 = 3;
	Var0.f_13 = 4;
	Var0.f_20 = 1;
	Var0.f_21 = 1;
	Var0.f_22 = 4;
	Var0.f_28 = 4;
	Var0.f_33 = 4;
	Var0.f_5 = ScriptParam_0;
	Var0.f_6 = ScriptParam_0.f_1;
	func_1(&Var0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_9__::func_558(&Var0);
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		__LIB_9__::func_558(&Var0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		__LIB_9__::func_558(&Var0);
	}
	Var0 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, true) };
	Var0.f_3 = TASK::_GET_SCENARIO_POINT_HEADING(ScriptParam_0.f_1, true);
	Var0.f_4 = TASK::_0x6718F40313A2B5A6(ScriptParam_0.f_1);
	Global_43839[Var0.f_18]++;
	if (__LIB_0__::func_2() == 0)
	{
	}
	else if (!__LIB_0__::func_293(10))
	{
		__LIB_9__::func_558(&Var0);
	}
	Var0.f_24 = __LIB_9__::func_552(Var0.f_18, Var0);
	if (Var0.f_24 <= -1)
	{
		Var0.f_24 = __LIB_9__::func_553(Var0.f_18, Var0);
		if (__LIB_9__::func_496(&Var0))
		{
			__LIB_9__::func_543(&Var0);
		}
		else
		{
			__LIB_9__::func_544(&Var0);
		}
	}
	while (__LIB_9__::func_567(&Var0))
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			__LIB_9__::func_558(&Var0);
		}
		BUILTIN::WAIT(0);
	}
	iLocal_14 = 0;
	while (__LIB_9__::func_545(&Var0))
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			__LIB_9__::func_558(&Var0);
		}
		__LIB_9__::func_562(&Var0);
		__LIB_9__::func_564(&Var0);
		if (iLocal_14 <= 0)
		{
			fVar39 = BUILTIN::VDIST2(Var0, Global_36);
			switch (__LIB_9__::func_492(&Var0))
			{
				case 0:
					Var0.f_24 = __LIB_9__::func_552(Var0.f_18, Var0);
					if (Var0.f_24 <= -1)
					{
						Var0.f_24 = __LIB_9__::func_553(Var0.f_18, Var0);
						if (__LIB_9__::func_496(&Var0))
						{
							__LIB_9__::func_543(&Var0);
						}
						else
						{
							__LIB_9__::func_544(&Var0);
						}
					}
					__LIB_9__::func_497(&Var0, 1);
					break;
				case 1:
					if (fVar39 < 4900f)
					{
						__LIB_9__::func_497(&Var0, 2);
					}
					break;
				case 2:
					if (__LIB_9__::func_566(Var0.f_24, Var0.f_4))
					{
						__LIB_9__::func_546(Var0.f_24, 0);
					}
					bVar40 = __LIB_9__::func_547(Var0.f_24);
					if (bVar40)
					{
						__LIB_9__::func_497(&Var0, 3);
					}
					else
					{
						__LIB_9__::func_497(&Var0, 4);
					}
					__LIB_9__::func_498(&Var0);
					break;
				case 4:
					if (__LIB_9__::func_499(&Var0))
					{
						iVar41 = __LIB_9__::func_559(&Var0);
						if (iVar41 != 1)
						{
							if (iVar41 != 0)
							{
								__LIB_9__::func_558(&Var0);
							}
							else
							{
								iLocal_14 = 1000;
							}
						}
						else
						{
							__LIB_9__::func_497(&Var0, 5);
						}
					}
					break;
				case 3:
					if (__LIB_9__::func_499(&Var0))
					{
						iVar41 = __LIB_9__::func_559(&Var0);
						if (iVar41 != 1)
						{
							if (iVar41 == 0)
							{
								iLocal_14 = 1000;
							}
							else
							{
								__LIB_9__::func_558(&Var0);
							}
						}
						else
						{
							__LIB_9__::func_497(&Var0, 6);
						}
					}
					break;
				case 5:
					if (__LIB_9__::func_554(&Var0))
					{
						__LIB_9__::func_497(&Var0, 10);
					}
					break;
				case 6:
					if (__LIB_9__::func_554(&Var0))
					{
						__LIB_9__::func_497(&Var0, 7);
					}
					break;
				case 7:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 174961811))
					{
						if (__LIB_9__::func_560(Var0.f_18, __LIB_1__::func_974(PLAYER::GET_PLAYER_INDEX()), &(Var0.f_24), &iLocal_21, 1))
						{
							__LIB_9__::func_497(&Var0, 9);
						}
					}
					else if (!__LIB_9__::func_547(Var0.f_24))
					{
						__LIB_9__::func_497(&Var0, 9);
					}
					if (!bLocal_22)
					{
						if (__LIB_1__::func_185(4))
						{
							if (fVar39 < 625f && !PED::IS_PED_ON_MOUNT(Global_35))
							{
								__LIB_1__::func_240(602, 0);
								bLocal_22 = true;
							}
						}
						else
						{
							bLocal_22 = true;
						}
					}
					if (fVar39 > 8100f || __LIB_9__::func_500(Var0.f_24, 1))
					{
						__LIB_9__::func_501(Var0.f_24, 1);
						__LIB_9__::func_497(&Var0, 8);
					}
					break;
				case 9:
					__LIB_9__::func_524(Var0.f_24);
					__LIB_9__::func_502(Var0.f_24, iLocal_21);
					if (__LIB_9__::func_503(Var0.f_18))
					{
						__LIB_9__::func_504(COLLECTION::_0x126CBEBBA46693CF(BUILTIN::FLOOR(Var0.f_4), 1777389635, 0));
					}
					Global_1935496.f_127 = 1;
					__LIB_9__::func_497(&Var0, 10);
					break;
				case 10:
					if (__LIB_9__::func_535(Var0.f_18))
					{
						__LIB_9__::func_569(Var0, &uLocal_16, &uLocal_17, &uLocal_18);
					}
					if (fVar39 > 8100f || __LIB_9__::func_500(Var0.f_24, 1))
					{
						__LIB_9__::func_501(Var0.f_24, 1);
						__LIB_9__::func_497(&Var0, 8);
					}
					break;
				case 8:
					__LIB_9__::func_548(&Var0);
					__LIB_9__::func_497(&Var0, 1);
					break;
			}
		}
		if (__LIB_9__::func_505(__LIB_0__::func_773(&Var0)))
		{
			if (__LIB_9__::func_493(&Var0) == __LIB_0__::func_773(&Var0))
			{
			}
			else
			{
				__LIB_9__::func_536(&Var0, __LIB_0__::func_773(&Var0));
			}
		}
		else if (__LIB_9__::func_493(&Var0) != Global_36580)
		{
			__LIB_9__::func_536(&Var0, Global_36580);
		}
		__LIB_9__::func_549(&Var0);
		iLocal_14 = (iLocal_14 - 1);
		if (iLocal_14 < 0)
		{
			iLocal_14 = 0;
		}
		BUILTIN::WAIT(0);
	}
	__LIB_9__::func_558(&Var0);
}

void func_1(var uParam0)
{
	uParam0->f_18 = 15;
	uParam0->f_19 = joaat("CONSUMABLE_HERB_ENGLISH_MACE");
	uParam0->f_20 = 3;
	uParam0->f_23 = 1;
	uParam0->f_21 = 1;
	uParam0->f_22 = 1;
	uParam0->f_38 = joaat("COMPOSITE_LOOTABLE_ENGLISH_MACE_DEF");
}

