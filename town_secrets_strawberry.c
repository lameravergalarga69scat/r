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
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	bool bLocal_31 = false;
	vector3 vLocal_32 = { 0f, 0f, 0f };
	float fLocal_35 = 0f;
	struct<12> Local_36[1];
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_20 = joaat("S_UFO01X");
	fLocal_27 = 15f;
	fLocal_28 = 0f;
	fLocal_29 = 0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
	}
	while (true)
	{
		switch (iLocal_14)
		{
			case 0:
				iLocal_14 = 1;
				break;
			case 1:
				if (func_2())
				{
					iLocal_14 = 2;
				}
				break;
			case 2:
				func_1();
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	if (bLocal_31)
	{
		return;
	}
	OBJECT::DELETE_OBJECT(&(Local_36[0 /*12*/].f_8));
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2()
{
	if (__LIB_0__::func_2() != -1)
	{
		return true;
	}
	if (__LIB_0__::func_296(128, 0, 1))
	{
		return true;
	}
	switch (iLocal_15)
	{
		case 0:
			if (__LIB_17__::func_503(__LIB_1__::func_976()))
			{
				return true;
			}
			STREAMING::REQUEST_MODEL(iLocal_20, false);
			Local_36[0 /*12*/].f_7 = iLocal_20;
			Local_36[0 /*12*/] = { func_7() };
			Local_36[0 /*12*/].f_10 = 0;
			iLocal_15 = 1;
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(iLocal_20))
			{
				iLocal_15 = 2;
			}
			break;
		case 2:
			func_8(0f, 0f, 0f, &Local_36, 0, 0, 0, -1, 0);
			ENTITY::FREEZE_ENTITY_POSITION(Local_36[0 /*12*/].f_8, true);
			ENTITY::SET_ENTITY_VISIBLE(Local_36[0 /*12*/].f_8, false);
			iLocal_15 = 3;
			break;
		case 3:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				return false;
			}
			if (func_9())
			{
				iLocal_15 = 4;
				return true;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

Vector3 func_7()
{
	return -1947.076f, -128.2895f, 500f;
}

int func_8(vector3 vParam0, var uParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;
	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *uParam3)
	{
		iParam7 = (*uParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && ENTITY::DOES_ENTITY_EXIST((uParam3[iVar0 /*12*/])->f_8))
		{
		}
		else if ((uParam3[iVar0 /*12*/])->f_7 != 0 && !__LIB_0__::func_1((uParam3[iVar0 /*12*/])->f_11, 16))
		{
			if (!STREAMING::HAS_MODEL_LOADED((uParam3[iVar0 /*12*/])->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((uParam3[iVar0 /*12*/])->f_9 != -1)
				{
					iVar8 = (uParam3[iVar0 /*12*/])->f_9;
					vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((uParam3[iVar8 /*12*/])->f_8, *(uParam3[iVar0 /*12*/])) };
					if (__LIB_0__::func_1((uParam3[iVar0 /*12*/])->f_11, 64))
					{
						(uParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((uParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(uParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((uParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam3[iVar0 /*12*/])->f_8, (uParam3[iVar8 /*12*/])->f_8, 0, *(uParam3[iVar0 /*12*/]), (uParam3[iVar0 /*12*/])->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!__LIB_0__::func_1((uParam3[iVar0 /*12*/])->f_11, 8))
					{
						vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam4, *(uParam3[iVar0 /*12*/])) };
					}
					else
					{
						vVar5 = { *(uParam3[iVar0 /*12*/]) };
					}
					if (!__LIB_0__::func_1((uParam3[iVar0 /*12*/])->f_11, 128))
					{
						__LIB_3__::func_338(&vVar5, (uParam3[iVar0 /*12*/])->f_10);
					}
					if (__LIB_0__::func_1((uParam3[iVar0 /*12*/])->f_11, 64))
					{
						(uParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((uParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(uParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((uParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					if (__LIB_0__::func_86((uParam3[iVar0 /*12*/])->f_4))
					{
						vVar1 = { 0f, 0f, (uParam3[iVar0 /*12*/])->f_3 };
					}
					else
					{
						vVar1 = { (uParam3[iVar0 /*12*/])->f_4 };
					}
					if (__LIB_0__::func_1((uParam3[iVar0 /*12*/])->f_11, 4))
					{
						vVar1.f_2 = __LIB_2__::func_709((vVar1.z + fParam4));
					}
					ENTITY::SET_ENTITY_ROTATION((uParam3[iVar0 /*12*/])->f_8, vVar1, 2, true);
					if (!__LIB_0__::func_1((uParam3[iVar0 /*12*/])->f_11, 128))
					{
						if ((uParam3[iVar0 /*12*/])->f_10)
						{
							ENTITY::_0x9587913B9E772D29((uParam3[iVar0 /*12*/])->f_8, 0);
						}
					}
				}
				if (__LIB_0__::func_1((uParam3[iVar0 /*12*/])->f_11, 2))
				{
					ENTITY::FREEZE_ENTITY_POSITION((uParam3[iVar0 /*12*/])->f_8, true);
				}
				if (__LIB_0__::func_1((uParam3[iVar0 /*12*/])->f_11, 32))
				{
					ENTITY::SET_ENTITY_VISIBLE((uParam3[iVar0 /*12*/])->f_8, false);
				}
				if (bParam5)
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((uParam3[iVar0 /*12*/])->f_8, 1);
					PHYSICS::ACTIVATE_PHYSICS((uParam3[iVar0 /*12*/])->f_8);
				}
				ENTITY::_0xA91E6CF94404E8C9((uParam3[iVar0 /*12*/])->f_8);
				vVar9 = { ENTITY::GET_ENTITY_COORDS((uParam3[iVar0 /*12*/])->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

bool func_9()
{
	func_20();
	switch (iLocal_16)
	{
		case 0:
			if ((func_21() && __LIB_2__::func_117(2048)) && __LIB_3__::func_332(func_23(), 1) < 14f)
			{
				Global_40.f_9020.f_7 = __LIB_0__::func_23();
				bLocal_31 = true;
				ENTITY::SET_ENTITY_VISIBLE(Local_36[0 /*12*/].f_8, true);
				fLocal_28 = -1.5f;
				iLocal_16 = 1;
			}
			break;
		case 1:
			if ((356.9597f + 25f) > vLocal_32.z)
			{
				fLocal_27 = (fLocal_27 - 0.75f);
				fLocal_29 = 0.1f;
				iLocal_16 = 2;
			}
			break;
		case 2:
			if (fLocal_27 > 0.4f)
			{
				fLocal_27 = (fLocal_27 - 0.075f);
			}
			if (fLocal_28 > (-1f * 0.25f))
			{
				fLocal_29 = 0f;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_32, func_26(), true) < 1f)
			{
				iLocal_16 = 3;
			}
			break;
		case 3:
			func_27();
			if (fLocal_27 > 0.4f)
			{
				fLocal_27 = (fLocal_27 - 0.075f);
			}
			if (!__LIB_0__::func_75(&uLocal_17))
			{
				if (__LIB_10__::func_477(Local_36[0 /*12*/].f_8, &uLocal_21, &uLocal_26, &uLocal_30, 1f, 250f, 0, 0, 1092616192 /* Float: 10f */, 1))
				{
					__LIB_17__::func_504(__LIB_1__::func_976());
					__LIB_1__::func_148(&uLocal_17);
					iLocal_16 = 4;
				}
				else if (!__LIB_2__::func_117(2048))
				{
					iLocal_16 = 4;
				}
			}
			break;
		case 4:
			func_27();
			if (__LIB_1__::func_285(&uLocal_17, 12f))
			{
				if (fLocal_27 < 15f)
				{
					fLocal_27 = (fLocal_27 + 0.075f);
				}
			}
			if (fLocal_27 >= 15f)
			{
				fLocal_29 = 0.1f;
				iLocal_16 = 5;
			}
			break;
		case 5:
			if (fLocal_28 >= 3.333f)
			{
				fLocal_29 = 0f;
			}
			if (__LIB_2__::func_118(Local_36[0 /*12*/].f_8, 1, 1) > 1000f)
			{
				bLocal_31 = false;
				iLocal_16 = 6;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_20()
{
	fLocal_35 = ENTITY::GET_ENTITY_HEADING(Local_36[0 /*12*/].f_8);
	fLocal_35 = (fLocal_35 + fLocal_27);
	ENTITY::SET_ENTITY_HEADING(Local_36[0 /*12*/].f_8, fLocal_35);
	vLocal_32 = { ENTITY::GET_ENTITY_COORDS(Local_36[0 /*12*/].f_8, true, false) };
	fLocal_28 = (fLocal_28 + fLocal_29);
	vLocal_32.f_2 = (vLocal_32.z + fLocal_28);
	ENTITY::SET_ENTITY_COORDS(Local_36[0 /*12*/].f_8, vLocal_32, true, false, true, true);
}

bool func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	iVar0 = Global_40.f_9020.f_7;
	iVar1 = __LIB_6__::func_314(iVar0);
	iVar2 = __LIB_6__::func_314(__LIB_0__::func_23());
	__LIB_7__::func_486(iVar0, &uVar3, &uVar4, &uVar5, &iVar6, &iVar7, &iVar8);
	if (!__LIB_0__::func_923(iVar0) || (iVar1 == iVar2 && ((iVar6 >= 1 || iVar7 >= 1) || iVar8 >= 1)))
	{
		return true;
	}
	return false;
}

Vector3 func_23()
{
	return -1982.8f, 22.3f, 330.8452f;
}

Vector3 func_26()
{
	return -1947.076f, -128.2895f, 356.9597f;
}

void func_27()
{
	if ((356.9597f + 0.05f) < vLocal_32.z)
	{
		if (fLocal_28 <= (-1f * 0.25f))
		{
			fLocal_29 = 0f;
		}
		else
		{
			fLocal_29 = (-1f * 0.005f);
		}
	}
	else if ((356.9597f - 0.05f) > vLocal_32.z)
	{
		if (fLocal_28 >= 0.25f)
		{
			fLocal_29 = 0f;
		}
		else
		{
			fLocal_29 = 0.005f;
		}
	}
}

